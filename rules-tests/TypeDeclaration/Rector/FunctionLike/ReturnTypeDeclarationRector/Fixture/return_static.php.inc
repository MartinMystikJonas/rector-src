<?php

namespace Rector\Tests\TypeDeclaration\Rector\FunctionLike\ReturnTypeDeclarationRector\Fixture;

final class ReturnStatic
{
    public function run()
    {
        return new static();
    }

    public function run2()
    {
        if (rand(0, 1)) {
            return new static();
        }

        return null;
    }
}

?>
-----
<?php

namespace Rector\Tests\TypeDeclaration\Rector\FunctionLike\ReturnTypeDeclarationRector\Fixture;

final class ReturnStatic
{
    public function run(): self
    {
        return new static();
    }

    public function run2(): ?self
    {
        if (rand(0, 1)) {
            return new static();
        }

        return null;
    }
}

?>
