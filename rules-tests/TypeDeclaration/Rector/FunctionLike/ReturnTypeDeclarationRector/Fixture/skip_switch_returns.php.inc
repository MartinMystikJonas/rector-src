<?php

namespace Rector\Tests\TypeDeclaration\Rector\FunctionLike\ReturnTypeDeclarationRector\Fixture;

final class SkipSwitchReturns
{
    public function someFunction($value)
    {
        switch ($value) {
            case (1):
                return 'one';
            case (2):
                return 'two';
        }
    }
}
