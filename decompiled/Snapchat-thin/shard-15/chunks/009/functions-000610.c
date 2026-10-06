/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd7e6d4; end: 10bd7e773; -[GPBExtensionRegistry addExtension:] */

void FUN_10bd7e6d4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    uVar1 = param_3;
    func_0x00010bf4b420(param_3);
    lVar2 = *(long *)(param_1 + 8);
    _CFDictionaryGetValue(lVar2,uVar1);
    if (lVar2 == 0) {
      lVar2 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
      _CFDictionaryCreateMutable(lVar2,0,0,PTR__kCFTypeDictionaryValueCallBacks_11034ac20);
      _CFDictionarySetValue(*(undefined8 *)(param_1 + 8),uVar1,lVar2);
      _CFRelease(lVar2);
    }
    uVar1 = param_3;
    func_0x00010bfac760(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdba37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFDictionarySetValue_11034a608)(lVar2,uVar1 & 0xffffffff,param_3);
    return;
  }
  return;
}



/* Entry: 10bd7e774; end: 10bd7e7bb; -[GPBExtensionRegistry extensionForDescriptor:fieldNumber:] */

void FUN_10bd7e774(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010c0cb320(param_3);
  lVar1 = *(long *)(param_1 + 8);
  _CFDictionaryGetValue(lVar1,param_3);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFDictionaryGetValue_11034a5e8)();
    return;
  }
  return;
}



/* Entry: 10bd7e7bc; end: 10bd7e7db; -[GPBExtensionRegistry addExtensions:] */

void FUN_10bd7e7bc(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFDictionaryApplyFunction_11034a5a8)
              (*(undefined8 *)(param_3 + 8),FUN_10bd7e7dc,*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}



/* Entry: 10bd7e7dc; end: 10bd7e867;  */

void FUN_10bd7e7dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_3;
  _CFDictionaryGetValue(param_3,param_1);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFDictionaryApplyFunction_11034a5a8)(param_2,FUN_10bd7e868,lVar1);
    return;
  }
  uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  _CFDictionaryCreateMutableCopy(uVar2,0,param_2);
  _CFDictionarySetValue(param_3,param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRelease_11034a768)(uVar2);
  return;
}



/* Entry: 10bd7e868; end: 10bd7e87b;  */

void FUN_10bd7e868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFDictionarySetValue_11034a608)(param_3,param_1,param_2);
  return;
}



/* Entry: 10bd7e87c; end: 10bd7e9e7;  */

long FUN_10bd7e87c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  _objc_opt_class();
  func_0x00010bf6e760();
  lVar7 = *(long *)(lVar1 + 8);
  puVar3 = (undefined8 *)0x10;
  lVar2 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar9 = 0;
  if (lVar2 != 0) {
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar7);
        }
        lVar8 = *(long *)(lVar9 * 8);
        lVar5 = lVar8;
        func_0x00010bfac840();
        if ((int)lVar5 == 2) {
          lVar5 = 0;
          if (*(long *)(param_1 + 0x40) != 0) {
            lVar5 = *(long *)(*(long *)(param_1 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
          }
          if (lVar5 == param_2) {
            lVar1 = lVar8;
            func_0x00010c0b92a0();
            if (((int)lVar1 == 0xe) && (*(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd < 4)) {
              piVar6 = (int *)&DAT_112796db0;
            }
            else {
              piVar6 = (int *)&DAT_112796db4;
            }
            *(undefined8 *)(param_2 + *piVar6) = 0;
            func_0x000107c3187c();
            lVar9 = param_1;
            goto LAB_10bd7e9b0;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      puVar3 = (undefined8 *)0x10;
      lVar2 = lVar7;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    lVar9 = 0;
  }
LAB_10bd7e9b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    func_0x00010bfee200();
    if ((lVar9 != 0) && (func_0x00010c0cabe0(lVar9), puVar3 != (undefined8 *)0x0)) {
      *puVar3 = 0;
    }
    return lVar9;
  }
  return lVar9;
}



/* Entry: 10bd7e9e8; end: 10bd7ea87; -[GPBMessage initWithCodedInputStream:extensionRegistry:error:] */

long FUN_10bd7e9e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  func_0x00010bfee200();
  if ((param_1 != 0) &&
     (func_0x00010c0cabe0(param_1,param_2,param_3,param_4), param_5 != (undefined8 *)0x0)) {
    *param_5 = 0;
  }
  return param_1;
}



/* Entry: 10bd7ea88; end: 10bd7eb67;  */

void FUN_10bd7ea88(undefined *param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  undefined *in_x4;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_c0;
  undefined *puVar4;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_1;
  func_0x00010c0d4f60();
  iVar3 = (int)puVar4;
  func_0x00010c071ae0();
  if (iVar3 != 0) {
    puVar4 = param_1;
    func_0x00010c292820();
    ppuVar9 = &PTR____CFConstantStringClassReference_11102f4b8;
    func_0x00010c0e00e0();
    if (puVar4 != (undefined *)0x0) goto LAB_10bd7eb3c;
  }
  func_0x00010c121ea0();
  func_0x00010c08fa60();
  if (param_1 == (undefined *)0x0) {
    in_x4 = (undefined *)0x0;
  }
  else {
    in_x4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
  }
  ppuVar9 = &PTR____CFConstantStringClassReference_11102f998;
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240();
LAB_10bd7eb3c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _memcpy(ppuVar9[8],*(undefined8 *)(puVar4 + 0x40),*(undefined4 *)(in_x4 + 0x18));
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lVar19 = *(long *)(in_x4 + 8);
  puVar8 = &uStack_200;
  lVar10 = lVar19;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar13 = *plStack_1f0;
    do {
      lVar15 = 0;
      do {
        if (*plStack_1f0 != lVar13) {
          _objc_enumerationMutation(lVar19);
        }
        lVar16 = *(long *)(lStack_1f8 + lVar15 * 8);
        lVar11 = *(long *)(lVar16 + 8);
        if ((*(ushort *)(lVar11 + 0x1c) & 0xf02) == 0) {
          if (*(byte *)(lVar11 + 0x1e) - 0xf < 2) {
            uVar1 = *(uint *)(lVar11 + 0x14);
            if ((int)uVar1 < 0) {
              lVar12 = *(long *)(puVar4 + 0x40);
              if (*(int *)(lVar12 + (ulong)-uVar1 * 4) != *(int *)(lVar11 + 0x10))
              goto LAB_10bd7ede0;
            }
            else {
              lVar12 = *(long *)(puVar4 + 0x40);
              if ((*(uint *)(lVar12 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_10bd7ede0:
                *(undefined8 *)(ppuVar9[8] + *(uint *)(lVar11 + 0x18)) = 0;
                goto LAB_10bd7ef2c;
              }
            }
LAB_10bd7eec4:
            uVar18 = *(undefined8 *)(lVar12 + (ulong)*(uint *)(lVar11 + 0x18));
            uVar6 = uVar18;
            func_0x00010bf52240(uVar18);
            _objc_retain(uVar18);
            func_0x000107c318a4(ppuVar9,lVar16,uVar6);
          }
          else if (*(byte *)(lVar11 + 0x1e) - 0xd < 4) {
            uVar1 = *(uint *)(lVar11 + 0x14);
            if ((int)uVar1 < 0) {
              lVar12 = *(long *)(puVar4 + 0x40);
              if (*(int *)(lVar12 + (ulong)-uVar1 * 4) == *(int *)(lVar11 + 0x10))
              goto LAB_10bd7eec4;
            }
            else {
              lVar12 = *(long *)(puVar4 + 0x40);
              if ((*(uint *)(lVar12 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)
              goto LAB_10bd7eec4;
            }
          }
        }
        else {
          if ((*(long *)(puVar4 + 0x40) == 0) ||
             (puVar17 = *(undefined **)(*(long *)(puVar4 + 0x40) + (ulong)*(uint *)(lVar11 + 0x18)),
             puVar17 == (undefined *)0x0)) goto LAB_10bd7ef2c;
          bVar2 = *(byte *)(lVar11 + 0x1e);
          lVar11 = lVar16;
          func_0x00010bfac840();
          puVar7 = puVar17;
          if (bVar2 - 0xf < 2) {
            if ((int)lVar11 == 1) {
              puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
              func_0x00010bf529e0(puVar17);
              func_0x00010bffc4a0(puVar7);
              puVar5 = puVar17;
              func_0x00010bf52a60();
              lVar11 = lRam0000000000000000;
              while (puVar5 != (undefined *)0x0) {
                puVar14 = (undefined *)0x0;
                do {
                  if (lRam0000000000000000 != lVar11) {
                    _objc_enumerationMutation(puVar17);
                  }
                  uVar6 = *(undefined8 *)((long)puVar14 * 8);
                  func_0x00010bf52240(uVar6);
                  func_0x00010befa120(puVar7);
                  _objc_release(uVar6);
                  puVar14 = puVar14 + 1;
                } while (puVar5 != puVar14);
                puVar5 = puVar17;
                func_0x00010bf52a60();
              }
            }
            else {
              lVar11 = lVar16;
              func_0x00010c0b92a0();
              if ((int)lVar11 == 0xe) {
                puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
                _objc_alloc();
                func_0x00010bf529e0(puVar17);
                func_0x00010bffc4a0();
                func_0x00010bf97ce0(puVar17);
              }
              else {
                func_0x00010bf67be0(puVar17);
              }
            }
          }
          else {
            if ((int)lVar11 == 1) {
              bVar2 = *(byte *)(*(long *)(lVar16 + 8) + 0x1e);
joined_r0x00010bd7ee88:
              if (bVar2 - 0xd < 4) {
                func_0x00010c0d3ca0(puVar17);
                goto LAB_10bd7ef0c;
              }
            }
            else {
              lVar11 = lVar16;
              func_0x00010c0b92a0();
              if ((int)lVar11 == 0xe) {
                bVar2 = *(byte *)(*(long *)(lVar16 + 8) + 0x1e);
                goto joined_r0x00010bd7ee88;
              }
            }
            func_0x00010bf52240(puVar17);
          }
LAB_10bd7ef0c:
          _objc_retain(puVar17);
          func_0x000107c318a4(ppuVar9,lVar16,puVar7);
        }
LAB_10bd7ef2c:
        lVar15 = lVar15 + 1;
      } while (lVar15 != lVar10);
      puVar8 = &uStack_200;
      lVar10 = lVar19;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  lVar10 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf52240(puVar8);
  func_0x00010c1d0560(*(undefined8 *)(lVar10 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 10bd7eb68; end: 10bd7ef93; -[GPBMessage copyFieldsInto:zone:descriptor:] */

void FUN_10bd7eb68(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _memcpy(*(undefined8 *)(param_3 + 0x40),*(undefined8 *)(param_1 + 0x40),
          *(undefined4 *)(param_5 + 0x18));
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lVar16 = *(long *)(param_5 + 8);
  puVar7 = &uStack_1c0;
  lVar3 = lVar16;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar10 = *plStack_1b0;
    do {
      lVar12 = 0;
      do {
        if (*plStack_1b0 != lVar10) {
          _objc_enumerationMutation(lVar16);
        }
        lVar13 = *(long *)(lStack_1b8 + lVar12 * 8);
        lVar8 = *(long *)(lVar13 + 8);
        if ((*(ushort *)(lVar8 + 0x1c) & 0xf02) == 0) {
          if (*(byte *)(lVar8 + 0x1e) - 0xf < 2) {
            uVar1 = *(uint *)(lVar8 + 0x14);
            if ((int)uVar1 < 0) {
              lVar9 = *(long *)(param_1 + 0x40);
              if (*(int *)(lVar9 + (ulong)-uVar1 * 4) != *(int *)(lVar8 + 0x10)) goto LAB_10bd7ede0;
            }
            else {
              lVar9 = *(long *)(param_1 + 0x40);
              if ((*(uint *)(lVar9 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_10bd7ede0:
                *(undefined8 *)(*(long *)(param_3 + 0x40) + (ulong)*(uint *)(lVar8 + 0x18)) = 0;
                goto LAB_10bd7ef2c;
              }
            }
LAB_10bd7eec4:
            uVar15 = *(undefined8 *)(lVar9 + (ulong)*(uint *)(lVar8 + 0x18));
            uVar5 = uVar15;
            func_0x00010bf52240(uVar15);
            _objc_retain(uVar15);
            func_0x000107c318a4(param_3,lVar13,uVar5);
          }
          else if (*(byte *)(lVar8 + 0x1e) - 0xd < 4) {
            uVar1 = *(uint *)(lVar8 + 0x14);
            if ((int)uVar1 < 0) {
              lVar9 = *(long *)(param_1 + 0x40);
              if (*(int *)(lVar9 + (ulong)-uVar1 * 4) == *(int *)(lVar8 + 0x10)) goto LAB_10bd7eec4;
            }
            else {
              lVar9 = *(long *)(param_1 + 0x40);
              if ((*(uint *)(lVar9 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)
              goto LAB_10bd7eec4;
            }
          }
        }
        else {
          if ((*(long *)(param_1 + 0x40) == 0) ||
             (puVar14 = *(undefined **)(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(lVar8 + 0x18)),
             puVar14 == (undefined *)0x0)) goto LAB_10bd7ef2c;
          bVar2 = *(byte *)(lVar8 + 0x1e);
          lVar8 = lVar13;
          func_0x00010bfac840();
          puVar6 = puVar14;
          if (bVar2 - 0xf < 2) {
            if ((int)lVar8 == 1) {
              puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
              func_0x00010bf529e0(puVar14);
              func_0x00010bffc4a0(puVar6);
              puVar4 = puVar14;
              func_0x00010bf52a60();
              lVar8 = lRam0000000000000000;
              while (puVar4 != (undefined *)0x0) {
                puVar11 = (undefined *)0x0;
                do {
                  if (lRam0000000000000000 != lVar8) {
                    _objc_enumerationMutation(puVar14);
                  }
                  uVar5 = *(undefined8 *)((long)puVar11 * 8);
                  func_0x00010bf52240(uVar5);
                  func_0x00010befa120(puVar6);
                  _objc_release(uVar5);
                  puVar11 = puVar11 + 1;
                } while (puVar4 != puVar11);
                puVar4 = puVar14;
                func_0x00010bf52a60();
              }
            }
            else {
              lVar8 = lVar13;
              func_0x00010c0b92a0();
              if ((int)lVar8 == 0xe) {
                puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
                _objc_alloc();
                func_0x00010bf529e0(puVar14);
                func_0x00010bffc4a0();
                func_0x00010bf97ce0(puVar14);
              }
              else {
                func_0x00010bf67be0(puVar14);
              }
            }
          }
          else {
            if ((int)lVar8 == 1) {
              bVar2 = *(byte *)(*(long *)(lVar13 + 8) + 0x1e);
joined_r0x00010bd7ee88:
              if (bVar2 - 0xd < 4) {
                func_0x00010c0d3ca0(puVar14);
                goto LAB_10bd7ef0c;
              }
            }
            else {
              lVar8 = lVar13;
              func_0x00010c0b92a0();
              if ((int)lVar8 == 0xe) {
                bVar2 = *(byte *)(*(long *)(lVar13 + 8) + 0x1e);
                goto joined_r0x00010bd7ee88;
              }
            }
            func_0x00010bf52240(puVar14);
          }
LAB_10bd7ef0c:
          _objc_retain(puVar14);
          func_0x000107c318a4(param_3,lVar13,puVar6);
        }
LAB_10bd7ef2c:
        lVar12 = lVar12 + 1;
      } while (lVar12 != lVar3);
      puVar7 = &uStack_1c0;
      lVar3 = lVar16;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  lVar3 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf52240(puVar7);
  func_0x00010c1d0560(*(undefined8 *)(lVar3 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 10bd7ef94; end: 10bd7efe3;  */

void FUN_10bd7ef94(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf52240(param_3,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bd7efe4; end: 10bd7f05f; -[GPBMessage copyWithZone:] */

long FUN_10bd7efe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bf6e760();
  func_0x00010c0cb320();
  func_0x00010bf00e40();
  func_0x00010bfee200();
  func_0x00010bf51f40(param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf52240();
  *(undefined8 *)(lVar1 + 8) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  FUN_10bd7f060(uVar2,param_3);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  return lVar1;
}



/* Entry: 10bd7f060; end: 10bd7f303;  */

undefined * FUN_10bd7f060(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_1;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf00e40();
    func_0x00010bf529e0(param_1);
    func_0x00010bffc4a0();
    lVar4 = param_1;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_1);
        }
        lVar11 = *(long *)(lVar9 * 8);
        lVar5 = param_1;
        func_0x00010c0dff20();
        uVar1 = *(byte *)(*(long *)(lVar11 + 8) + 0x2c) - 0xf;
        func_0x00010c07c3e0();
        if ((int)lVar11 == 0) {
          if (uVar1 < 2) {
            func_0x00010bf52240(lVar5);
            goto LAB_10bd7f264;
          }
          func_0x00010c1d0560(puVar12);
        }
        else if (uVar1 < 2) {
          puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          func_0x00010bf529e0(lVar5);
          func_0x00010bffc4a0(puVar6);
          lVar11 = lVar5;
          func_0x00010bf52a60();
          lVar3 = lRam0000000000000000;
          while (lVar11 != 0) {
            lVar10 = 0;
            do {
              if (lRam0000000000000000 != lVar3) {
                _objc_enumerationMutation(lVar5);
              }
              uVar7 = *(undefined8 *)(lVar10 * 8);
              func_0x00010bf52240(uVar7);
              func_0x00010befa120(puVar6);
              _objc_release(uVar7);
              lVar10 = lVar10 + 1;
            } while (lVar11 != lVar10);
            lVar11 = lVar5;
            func_0x00010bf52a60();
          }
          func_0x00010c1d0560(puVar12);
          _objc_release(puVar6);
        }
        else {
          func_0x00010c0d3ca0(lVar5);
LAB_10bd7f264:
          func_0x00010c1d0560(puVar12);
          _objc_release(lVar5);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != lVar4);
      lVar4 = param_1;
      func_0x00010bf52a60();
    }
  }
  puVar6 = (undefined *)0x0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar12;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0691d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return puVar6;
}



/* Entry: 10bd7f304; end: 10bd7f30b; -[GPBMessage clear] */

void FUN_10bd7f304(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0691d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_internalClear__1125f7e80,1);
  return;
}



/* Entry: 10bd7f30c; end: 10bd7f67f; -[GPBMessage isInitialized] */

undefined ** FUN_10bd7f30c(undefined **param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  uint uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined **ppuStack_218;
  undefined *puStack_210;
  undefined **ppuStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_1;
  func_0x00010bf6e760();
  lStack_1a8 = 0;
  puStack_1b0 = (undefined *)0x0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puVar10 = ppuVar1[1];
  ppuVar1 = &puStack_1b0;
  puVar6 = auStack_e8;
  puVar2 = puVar10;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar12 = *plStack_1a0;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar12) {
          _objc_enumerationMutation(puVar10);
        }
        ppuVar11 = *(undefined ***)(lStack_1a8 + (long)puVar14 * 8);
        ppuVar5 = ppuVar11;
        func_0x00010c07c680();
        puVar7 = ppuVar11[1];
        if ((int)ppuVar5 != 0) {
          uVar9 = *(uint *)(puVar7 + 0x14);
          if ((int)uVar9 < 0) {
            if (*(int *)(param_1[8] + (ulong)-uVar9 * 4) == *(int *)(puVar7 + 0x10))
            goto LAB_10bd7f3e8;
          }
          else if ((*(uint *)(param_1[8] + (ulong)(uVar9 >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1) !=
                   0) goto LAB_10bd7f3e8;
LAB_10bd7f61c:
          uVar9 = 0;
          goto LAB_10bd7f620;
        }
LAB_10bd7f3e8:
        if ((byte)puVar7[0x1e] - 0xf < 2) {
          ppuVar5 = ppuVar11;
          func_0x00010bfac840();
          if ((int)ppuVar5 == 1) {
            if (param_1[8] == (undefined *)0x0) {
              lVar8 = 0;
            }
            else {
              lVar8 = *(long *)(param_1[8] + *(uint *)(ppuVar11[1] + 0x18));
            }
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
            lStack_1e8 = 0;
            puStack_1f0 = (undefined *)0x0;
            uStack_1d8 = 0;
            plStack_1e0 = (long *)0x0;
            ppuVar1 = &puStack_1f0;
            puVar6 = auStack_168;
            lVar4 = lVar8;
            func_0x00010bf52a60();
            if (lVar4 != 0) {
              lVar15 = *plStack_1e0;
              do {
                lVar16 = 0;
                do {
                  if (*plStack_1e0 != lVar15) {
                    _objc_enumerationMutation(lVar8);
                  }
                  ppuVar5 = *(undefined ***)(lStack_1e8 + lVar16 * 8);
                  func_0x00010c0758e0();
                  if ((int)ppuVar5 == 0) goto LAB_10bd7f61c;
                  lVar16 = lVar16 + 1;
                } while (lVar4 != lVar16);
                ppuVar1 = &puStack_1f0;
                puVar6 = auStack_168;
                lVar4 = lVar8;
                func_0x00010bf52a60();
              } while (lVar4 != 0);
            }
          }
          else if ((int)ppuVar5 == 0) {
            ppuVar3 = ppuVar11;
            func_0x00010c07c680();
            ppuVar5 = param_1;
            if ((int)ppuVar3 == 0) {
              uVar9 = *(uint *)(ppuVar11[1] + 0x14);
              if ((int)uVar9 < 0) {
                if (*(int *)(param_1[8] + (ulong)-uVar9 * 4) == *(int *)(ppuVar11[1] + 0x10))
                goto LAB_10bd7f570;
              }
              else if ((*(uint *)(param_1[8] + (ulong)(uVar9 >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1
                       ) != 0) {
LAB_10bd7f570:
                func_0x000107c3188c(param_1,ppuVar11);
                func_0x00010c0758e0();
                goto LAB_10bd7f580;
              }
            }
            else {
              func_0x000107c3188c(param_1,ppuVar11);
              func_0x00010c0758e0();
LAB_10bd7f580:
              if (((ulong)ppuVar5 & 1) == 0) goto LAB_10bd7f61c;
            }
          }
          else {
            ppuVar5 = ppuVar11;
            func_0x00010c0b92a0();
            if (param_1[8] == (undefined *)0x0) {
              ppuVar11 = (undefined **)0x0;
            }
            else {
              ppuVar11 = *(undefined ***)(param_1[8] + *(uint *)(ppuVar11[1] + 0x18));
            }
            if ((int)ppuVar5 == 0xe) {
              if (ppuVar11 != (undefined **)0x0) {
                func_0x00010c0dfe00();
                while (ppuVar5 = ppuVar11, func_0x00010c0d9ba0(), ppuVar5 != (undefined **)0x0) {
                  func_0x00010c0758e0();
                  if (((ulong)ppuVar5 & 1) == 0) goto LAB_10bd7f61c;
                }
              }
            }
            else if ((ppuVar11 != (undefined **)0x0) &&
                    (func_0x00010c0758e0(), ppuVar5 = ppuVar11, (int)ppuVar11 == 0))
            goto LAB_10bd7f61c;
          }
        }
        puVar14 = puVar14 + 1;
      } while (puVar14 != puVar2);
      ppuVar1 = &puStack_1b0;
      puVar6 = auStack_e8;
      puVar2 = puVar10;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  ppuStack_218 = &puStack_210;
  puStack_210 = (undefined *)0x0;
  uStack_200 = 0x2020000000;
  uStack_1f8 = 1;
  puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_230 = 0xc2000000;
  pcStack_228 = FUN_10bd7f680;
  puStack_220 = &UNK_110d9fdc8;
  ppuVar1 = &puStack_238;
  ppuStack_208 = ppuStack_218;
  func_0x00010bf97ce0(param_1[2]);
  uVar9 = (uint)*(byte *)(ppuStack_208 + 3);
  ppuVar5 = &puStack_210;
  __Block_object_dispose(ppuVar5,8);
LAB_10bd7f620:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (undefined **)(ulong)(uVar9 & 1);
  }
  ___stack_chk_fail();
  lVar12 = 8;
  __Block_object_dispose(&puStack_210);
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = ppuVar5;
  if (*(byte *)(*(long *)(lVar12 + 8) + 0x2c) - 0xf < 2) {
    func_0x00010c07c3e0();
    if ((int)lVar12 == 0) {
      func_0x00010c0758e0();
      ppuVar11 = ppuVar1;
      if (((ulong)ppuVar1 & 1) == 0) {
LAB_10bd7f76c:
        *(undefined1 *)(*(long *)(ppuVar5[4] + 8) + 0x18) = 0;
        *puVar6 = 1;
      }
    }
    else {
      ppuVar3 = ppuVar1;
      func_0x00010bf52a60();
      lVar12 = lRam0000000000000000;
      ppuVar11 = (undefined **)0x0;
      if (ppuVar3 != (undefined **)0x0) {
        do {
          ppuVar13 = (undefined **)0x0;
          do {
            if (lRam0000000000000000 != lVar12) {
              _objc_enumerationMutation(ppuVar1);
            }
            ppuVar11 = *(undefined ***)((long)ppuVar13 * 8);
            func_0x00010c0758e0();
            if ((int)ppuVar11 == 0) goto LAB_10bd7f76c;
            ppuVar13 = (undefined **)((long)ppuVar13 + 1);
          } while (ppuVar3 != ppuVar13);
          ppuVar3 = ppuVar1;
          func_0x00010bf52a60();
        } while (ppuVar3 != (undefined **)0x0);
        ppuVar11 = (undefined **)0x0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return ppuVar11;
  }
  ___stack_chk_fail();
  func_0x00010c15ebe0();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64b80(PTR__OBJC_CLASS___NSMutableData_1126b4958);
  puVar2 = PTR_PTR_1126e2e18;
  _objc_alloc(PTR_PTR_1126e2e18);
  func_0x00010c008240();
  func_0x00010c2bdb60(ppuVar11);
  func_0x00010bfb2f20(puVar2);
  _objc_release(puVar2);
  return ppuVar1;
}



/* Entry: 10bd7f680; end: 10bd7f7b7;  */

undefined * FUN_10bd7f680(undefined *param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_1;
  if (*(byte *)(*(long *)(param_2 + 8) + 0x2c) - 0xf < 2) {
    func_0x00010c07c3e0();
    if ((int)param_2 == 0) {
      func_0x00010c0758e0();
      puVar3 = param_3;
      if (((ulong)param_3 & 1) == 0) {
LAB_10bd7f76c:
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
        *param_4 = 1;
      }
    }
    else {
      puVar2 = param_3;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      puVar3 = (undefined *)0x0;
      if (puVar2 != (undefined *)0x0) {
        do {
          puVar5 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(param_3);
            }
            puVar3 = *(undefined **)((long)puVar5 * 8);
            func_0x00010c0758e0();
            if ((int)puVar3 == 0) goto LAB_10bd7f76c;
            puVar5 = puVar5 + 1;
          } while (puVar2 != puVar5);
          puVar2 = param_3;
          func_0x00010bf52a60();
        } while (puVar2 != (undefined *)0x0);
        puVar3 = (undefined *)0x0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010c15ebe0();
  puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64b80(PTR__OBJC_CLASS___NSMutableData_1126b4958);
  puVar5 = PTR_PTR_1126e2e18;
  _objc_alloc(PTR_PTR_1126e2e18);
  func_0x00010c008240();
  func_0x00010c2bdb60(puVar3);
  func_0x00010bfb2f20(puVar5);
  _objc_release(puVar5);
  return puVar2;
}



/* Entry: 10bd7f7b8; end: 10bd7f8a7; -[GPBMessage delimitedData] */

undefined * FUN_10bd7f7b8(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar4 = param_1;
  func_0x00010c15ebe0();
  lVar1 = 4;
  if ((uVar4 >> 0x1c & 0xf) != 0) {
    lVar1 = 5;
  }
  uVar3 = (uint)uVar4;
  lVar2 = 3;
  if (0x1fffff < uVar3) {
    lVar2 = lVar1;
  }
  lVar1 = 2;
  if (0x3fff < uVar3) {
    lVar1 = lVar2;
  }
  lVar2 = 1;
  if (0x7f < uVar3) {
    lVar2 = lVar1;
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64b80(PTR__OBJC_CLASS___NSMutableData_1126b4958,param_2,lVar2 + uVar4);
  puVar6 = PTR_PTR_1126e2e18;
  _objc_alloc(PTR_PTR_1126e2e18);
  func_0x00010c008240();
  func_0x00010c2bdb60(param_1,param_2,puVar6);
  func_0x00010bfb2f20(puVar6);
  _objc_release(puVar6);
  return puVar5;
}



/* Entry: 10bd7f8a8; end: 10bd7f977; -[GPBMessage writeToOutputStream:] */

/* WARNING: Removing unreachable block (ram,0x00010bd7f940) */

void FUN_10bd7f8a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e2e18;
  _objc_alloc();
  func_0x00010c0327e0();
  func_0x00010c2be4c0(param_1,param_2,puVar1);
  func_0x00010bfb2f20(puVar1);
  puVar2 = puVar1;
  func_0x00010bf26060();
  if ((ulong)puVar2 >> 0x1f != 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_11102f9b8,
                        &PTR____CFConstantStringClassReference_11102f9d8);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 10bd7f978; end: 10bd7fa07; -[GPBMessage writeDelimitedToOutputStream:] */

/* WARNING: Removing unreachable block (ram,0x00010bd7f9d4) */

void FUN_10bd7f978(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2e18;
  _objc_alloc(PTR_PTR_1126e2e18);
  func_0x00010c0327e0();
  func_0x00010c2bdb60(param_1,param_2,puVar1);
  func_0x00010bfb2f20(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 10bd7fa08; end: 10bd7fa7b; -[GPBMessage writeDelimitedToCodedOutputStream:] */

void FUN_10bd7fa08(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c15ebe0();
  if (uVar1 >> 0x1f != 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
  }
  func_0x00010c2be240(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c2be4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_writeToCodedOutputStream__11268d358,param_3);
  return;
}



/* Entry: 10bd7fa7c; end: 10bd7fb6f; -[GPBMessage getExtension:] */

ulong FUN_10bd7fa7c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  FUN_10bd7fb70(param_1,param_3);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c0dff20();
  if (uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c07c3e0();
    if ((uVar1 & 1) == 0) {
      if (1 < *(byte *)(*(long *)(param_3 + 8) + 0x2c) - 0xf) {
                    /* WARNING: Could not recover jumptable at 0x00010bf6a990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_defaultValue_1125b8408);
        return param_3;
      }
      _os_unfair_lock_lock(param_1 + 0x38);
      uVar1 = *(ulong *)(param_1 + 0x18);
      func_0x00010c0dff20();
      if (uVar1 == 0) {
        uVar1 = param_3;
        func_0x00010c0d1a60();
        _objc_alloc_init();
        *(long *)(uVar1 + 0x20) = param_1;
        _objc_retain();
        *(ulong *)(uVar1 + 0x30) = param_3;
        if (*(long *)(param_1 + 0x18) == 0) {
          puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          _objc_alloc_init();
          *(undefined **)(param_1 + 0x18) = puVar2;
        }
        func_0x00010c1d0560();
        _objc_release(uVar1);
      }
      _os_unfair_lock_unlock(param_1 + 0x38);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* Entry: 10bd7fb70; end: 10bd7fc0f;  */

void FUN_10bd7fb70(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bf4b420(param_2);
  _objc_opt_isKindOfClass(param_1,param_2);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  if ((param_1 & 1) == 0) {
    func_0x00010c23cfc0();
    _objc_opt_class();
    func_0x00010bf4b420();
    func_0x00010c11f020(puVar1);
  }
  return;
}



/* Entry: 10bd7fc10; end: 10bd7fc17; -[GPBMessage getExistingExtension:] */

void FUN_10bd7fc10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_objectForKey__1126159e0);
  return;
}



/* Entry: 10bd7fc18; end: 10bd7fc37; -[GPBMessage hasExtension:] */

bool FUN_10bd7fc18(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0dff20(lVar1);
  return lVar1 != 0;
}



/* Entry: 10bd7fc38; end: 10bd7fc3f; -[GPBMessage extensionsCurrentlySet] */

void FUN_10bd7fc38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf002f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_allKeys_11259da60);
  return;
}



/* Entry: 10bd7fc40; end: 10bd7fd6f; -[GPBMessage writeExtensionsToCodedOutputStream:range:sortedExtensions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd7fc40(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  long param_5)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar6 = auStack_e8;
  lVar11 = param_5;
  func_0x00010bf52a60();
  lVar13 = 0;
  if (lVar11 != 0) {
    lVar15 = *plStack_120;
    do {
      lVar16 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(param_5);
        }
        lVar14 = *(long *)(lStack_128 + lVar16 * 8);
        lVar13 = lVar14;
        func_0x00010bfac760();
        if ((uint)param_4 <= (uint)lVar13) {
          if ((uint)((ulong)param_4 >> 0x20) <= (uint)lVar13) goto LAB_10bd7fd34;
          uVar5 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c0dff20(uVar5);
          puVar8 = (undefined8 *)param_3;
          FUN_10bd7d7d4(lVar14,uVar5);
        }
        lVar16 = lVar16 + 1;
      } while (lVar11 != lVar16);
      puVar6 = auStack_e8;
      lVar11 = param_5;
      puVar8 = &uStack_130;
      func_0x00010bf52a60();
      lVar13 = 0;
    } while (lVar11 != 0);
  }
LAB_10bd7fd34:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf3b3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar13,PTR_s_clearExtension__1125ac690,puVar8);
    return;
  }
  FUN_10bd7fb70(lVar13,puVar8);
  puVar6 = (undefined1 *)puVar8;
  func_0x00010c07c3e0();
  if ((int)puVar6 != 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
  }
  if (*(long *)(lVar13 + 0x10) == 0) {
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    *(undefined **)(lVar13 + 0x10) = puVar7;
  }
  func_0x00010c1d0560();
  if ((*(byte *)(*(long *)((long)puVar8 + 8) + 0x2c) - 0xf < 2) &&
     (func_0x00010c07c3e0(), ((ulong)puVar8 & 1) == 0)) {
    uVar5 = *(undefined8 *)(lVar13 + 0x18);
    func_0x00010c0dff20(uVar5);
    _objc_retain();
    func_0x00010c12d3e0(*(undefined8 *)(lVar13 + 0x18));
    func_0x000107c31884(uVar5);
    _objc_release(uVar5);
  }
code_r0x000100109ff0:
  do {
    lVar11 = *(long *)(lVar13 + 0x20);
    if (lVar11 == 0) {
      return;
    }
    lVar15 = *(long *)(lVar13 + 0x28);
    if (lVar15 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1992f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar11,PTR_s_setExtension_value__112643ed8,*(undefined8 *)(lVar13 + 0x30));
      return;
    }
    func_0x000107c61174();
    lVar16 = *(long *)(lVar15 + 8);
    bVar1 = *(byte *)(lVar16 + 0x1e);
    uVar2 = *(ushort *)(lVar16 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x000100109e38;
    if (*(long *)(lVar15 + 0x10) != 0) {
      func_0x00010010cd00(lVar11,*(long *)(lVar15 + 0x10),*(undefined4 *)(lVar16 + 0x14),
                          *(undefined4 *)(lVar16 + 0x10));
      uVar2 = *(ushort *)(lVar16 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar15 = lVar13, func_0x000107c4adac(), lVar15 != 0)) {
      uVar9 = *(uint *)(lVar16 + 0x14);
      lVar15 = *(long *)(lVar11 + 0x40);
      if ((int)uVar9 < 0) {
        uVar10 = 0;
        if (lVar13 != 0) {
          uVar10 = *(undefined4 *)(lVar16 + 0x10);
        }
        goto code_r0x000100109f58;
      }
      uVar12 = (ulong)(uVar9 >> 5);
      uVar9 = 1 << (ulong)(uVar9 & 0x1f);
      if (lVar13 == 0) goto code_r0x000100109f84;
      *(uint *)(lVar15 + uVar12 * 4) = *(uint *)(lVar15 + uVar12 * 4) | uVar9;
    }
    else {
      func_0x000107c61170(lVar13);
      uVar9 = *(uint *)(lVar16 + 0x14);
      lVar15 = *(long *)(lVar11 + 0x40);
      if ((int)uVar9 < 0) {
        lVar13 = 0;
        uVar10 = 0;
code_r0x000100109f58:
        *(undefined4 *)(lVar15 + (ulong)-uVar9 * 4) = uVar10;
      }
      else {
        uVar12 = (ulong)(uVar9 >> 5);
        uVar9 = 1 << (ulong)(uVar9 & 0x1f);
code_r0x000100109f84:
        lVar13 = 0;
        *(uint *)(lVar15 + uVar12 * 4) = *(uint *)(lVar15 + uVar12 * 4) & (uVar9 ^ 0xffffffff);
      }
    }
    uVar12 = *(ulong *)(lVar15 + (ulong)*(uint *)(lVar16 + 0x18));
    *(long *)(lVar15 + (ulong)*(uint *)(lVar16 + 0x18)) = lVar13;
    lVar13 = lVar11;
  } while (uVar12 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar12 + 0x20) == lVar11)) {
    func_0x00010029a5f8(uVar12);
  }
  goto code_r0x000100109fc4;
code_r0x000100109e38:
  uVar12 = *(ulong *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar16 + 0x18));
  *(long *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar16 + 0x18)) = lVar13;
  lVar13 = lVar11;
  if (uVar12 == 0) goto code_r0x000100109ff0;
  lVar13 = lVar15;
  func_0x000107c433d8();
  uVar4 = uVar12;
  if ((int)lVar13 == 1) {
    if (3 < bVar1 - 0xd) {
code_r0x000100109f38:
      if (*(long *)(uVar12 + 8) == lVar11) {
        *(undefined8 *)(uVar12 + 8) = 0;
      }
      goto code_r0x000100109fc4;
    }
    puVar7 = PTR_PTR_1126e3228;
    func_0x000107c61158(PTR_PTR_1126e3228);
    func_0x000107c6115c(uVar12,puVar7);
    iVar3 = _DAT_112796b30;
  }
  else {
    func_0x000107c4c354();
    if (((int)lVar15 != 0xe) || (3 < bVar1 - 0xd)) goto code_r0x000100109f38;
    puVar7 = PTR_PTR_1126e3230;
    func_0x000107c61158(PTR_PTR_1126e3230);
    func_0x000107c6115c(uVar12,puVar7);
    iVar3 = _DAT_112796db0;
  }
  if (((uVar4 & 1) != 0) && (*(long *)(uVar12 + (long)iVar3) == lVar11)) {
    *(undefined8 *)(uVar12 + (long)iVar3) = 0;
  }
code_r0x000100109fc4:
  func_0x000107c61170(uVar12);
  lVar13 = lVar11;
  goto code_r0x000100109ff0;
}



/* Entry: 10bd7fd70; end: 10bd7fe67; -[GPBMessage setExtension:value:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd7fd70(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  if (param_4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf3b3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_clearExtension__1125ac690,param_3);
    return;
  }
  FUN_10bd7fb70(param_1,param_3);
  uVar11 = param_3;
  func_0x00010c07c3e0();
  if ((int)uVar11 != 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    *(undefined **)(param_1 + 0x10) = puVar5;
  }
  func_0x00010c1d0560();
  if ((*(byte *)(*(long *)(param_3 + 8) + 0x2c) - 0xf < 2) &&
     (func_0x00010c07c3e0(), (param_3 & 1) == 0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0dff20(uVar6);
    _objc_retain();
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x18));
    func_0x000107c31884(uVar6);
    _objc_release(uVar6);
  }
code_r0x000100109ff0:
  do {
    lVar9 = *(long *)(param_1 + 0x20);
    if (lVar9 == 0) {
      return;
    }
    lVar12 = *(long *)(param_1 + 0x28);
    if (lVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1992f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar9,PTR_s_setExtension_value__112643ed8,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    func_0x000107c61174();
    lVar10 = *(long *)(lVar12 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x000100109e38;
    if (*(long *)(lVar12 + 0x10) != 0) {
      func_0x00010010cd00(lVar9,*(long *)(lVar12 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                          *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar12 = param_1, func_0x000107c4adac(), lVar12 != 0)) {
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar12 = *(long *)(lVar9 + 0x40);
      if ((int)uVar7 < 0) {
        uVar8 = 0;
        if (param_1 != 0) {
          uVar8 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto code_r0x000100109f58;
      }
      uVar11 = (ulong)(uVar7 >> 5);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (param_1 == 0) goto code_r0x000100109f84;
      *(uint *)(lVar12 + uVar11 * 4) = *(uint *)(lVar12 + uVar11 * 4) | uVar7;
    }
    else {
      func_0x000107c61170(param_1);
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar12 = *(long *)(lVar9 + 0x40);
      if ((int)uVar7 < 0) {
        param_1 = 0;
        uVar8 = 0;
code_r0x000100109f58:
        *(undefined4 *)(lVar12 + (ulong)-uVar7 * 4) = uVar8;
      }
      else {
        uVar11 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
code_r0x000100109f84:
        param_1 = 0;
        *(uint *)(lVar12 + uVar11 * 4) = *(uint *)(lVar12 + uVar11 * 4) & (uVar7 ^ 0xffffffff);
      }
    }
    uVar11 = *(ulong *)(lVar12 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar12 + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
    param_1 = lVar9;
  } while (uVar11 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar11 + 0x20) == lVar9)) {
    func_0x00010029a5f8(uVar11);
  }
  goto code_r0x000100109fc4;
code_r0x000100109e38:
  uVar11 = *(ulong *)(*(long *)(lVar9 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar9 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
  param_1 = lVar9;
  if (uVar11 == 0) goto code_r0x000100109ff0;
  lVar10 = lVar12;
  func_0x000107c433d8();
  uVar4 = uVar11;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
code_r0x000100109f38:
      if (*(long *)(uVar11 + 8) == lVar9) {
        *(undefined8 *)(uVar11 + 8) = 0;
      }
      goto code_r0x000100109fc4;
    }
    puVar5 = PTR_PTR_1126e3228;
    func_0x000107c61158(PTR_PTR_1126e3228);
    func_0x000107c6115c(uVar11,puVar5);
    iVar3 = _DAT_112796b30;
  }
  else {
    func_0x000107c4c354();
    if (((int)lVar12 != 0xe) || (3 < bVar1 - 0xd)) goto code_r0x000100109f38;
    puVar5 = PTR_PTR_1126e3230;
    func_0x000107c61158(PTR_PTR_1126e3230);
    func_0x000107c6115c(uVar11,puVar5);
    iVar3 = _DAT_112796db0;
  }
  if (((uVar4 & 1) != 0) && (*(long *)(uVar11 + (long)iVar3) == lVar9)) {
    *(undefined8 *)(uVar11 + (long)iVar3) = 0;
  }
code_r0x000100109fc4:
  func_0x000107c61170(uVar11);
  param_1 = lVar9;
  goto code_r0x000100109ff0;
}



/* Entry: 10bd7fe68; end: 10bd7ff1f; -[GPBMessage addExtension:value:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd7fe68(long param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  FUN_10bd7fb70(param_1,param_3);
  func_0x00010c07c3e0();
  if ((param_3 & 1) == 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
  }
  puVar5 = *(undefined **)(param_1 + 0x10);
  if (puVar5 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    *(undefined **)(param_1 + 0x10) = puVar5;
  }
  func_0x00010c0dff20();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x10));
  }
  func_0x00010befa120(puVar5);
code_r0x000100109ff0:
  do {
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar8 == 0) {
      return;
    }
    lVar11 = *(long *)(param_1 + 0x28);
    if (lVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1992f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar8,PTR_s_setExtension_value__112643ed8,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    func_0x000107c61174();
    lVar9 = *(long *)(lVar11 + 8);
    bVar1 = *(byte *)(lVar9 + 0x1e);
    uVar2 = *(ushort *)(lVar9 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x000100109e38;
    if (*(long *)(lVar11 + 0x10) != 0) {
      func_0x00010010cd00(lVar8,*(long *)(lVar11 + 0x10),*(undefined4 *)(lVar9 + 0x14),
                          *(undefined4 *)(lVar9 + 0x10));
      uVar2 = *(ushort *)(lVar9 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar11 = param_1, func_0x000107c4adac(), lVar11 != 0)) {
      uVar6 = *(uint *)(lVar9 + 0x14);
      lVar11 = *(long *)(lVar8 + 0x40);
      if ((int)uVar6 < 0) {
        uVar7 = 0;
        if (param_1 != 0) {
          uVar7 = *(undefined4 *)(lVar9 + 0x10);
        }
        goto code_r0x000100109f58;
      }
      uVar10 = (ulong)(uVar6 >> 5);
      uVar6 = 1 << (ulong)(uVar6 & 0x1f);
      if (param_1 == 0) goto code_r0x000100109f84;
      *(uint *)(lVar11 + uVar10 * 4) = *(uint *)(lVar11 + uVar10 * 4) | uVar6;
    }
    else {
      func_0x000107c61170(param_1);
      uVar6 = *(uint *)(lVar9 + 0x14);
      lVar11 = *(long *)(lVar8 + 0x40);
      if ((int)uVar6 < 0) {
        param_1 = 0;
        uVar7 = 0;
code_r0x000100109f58:
        *(undefined4 *)(lVar11 + (ulong)-uVar6 * 4) = uVar7;
      }
      else {
        uVar10 = (ulong)(uVar6 >> 5);
        uVar6 = 1 << (ulong)(uVar6 & 0x1f);
code_r0x000100109f84:
        param_1 = 0;
        *(uint *)(lVar11 + uVar10 * 4) = *(uint *)(lVar11 + uVar10 * 4) & (uVar6 ^ 0xffffffff);
      }
    }
    uVar10 = *(ulong *)(lVar11 + (ulong)*(uint *)(lVar9 + 0x18));
    *(long *)(lVar11 + (ulong)*(uint *)(lVar9 + 0x18)) = param_1;
    param_1 = lVar8;
  } while (uVar10 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar10 + 0x20) == lVar8)) {
    func_0x00010029a5f8(uVar10);
  }
  goto code_r0x000100109fc4;
code_r0x000100109e38:
  uVar10 = *(ulong *)(*(long *)(lVar8 + 0x40) + (ulong)*(uint *)(lVar9 + 0x18));
  *(long *)(*(long *)(lVar8 + 0x40) + (ulong)*(uint *)(lVar9 + 0x18)) = param_1;
  param_1 = lVar8;
  if (uVar10 == 0) goto code_r0x000100109ff0;
  lVar9 = lVar11;
  func_0x000107c433d8();
  uVar4 = uVar10;
  if ((int)lVar9 == 1) {
    if (3 < bVar1 - 0xd) {
code_r0x000100109f38:
      if (*(long *)(uVar10 + 8) == lVar8) {
        *(undefined8 *)(uVar10 + 8) = 0;
      }
      goto code_r0x000100109fc4;
    }
    puVar5 = PTR_PTR_1126e3228;
    func_0x000107c61158(PTR_PTR_1126e3228);
    func_0x000107c6115c(uVar10,puVar5);
    iVar3 = _DAT_112796b30;
  }
  else {
    func_0x000107c4c354();
    if (((int)lVar11 != 0xe) || (3 < bVar1 - 0xd)) goto code_r0x000100109f38;
    puVar5 = PTR_PTR_1126e3230;
    func_0x000107c61158(PTR_PTR_1126e3230);
    func_0x000107c6115c(uVar10,puVar5);
    iVar3 = _DAT_112796db0;
  }
  if (((uVar4 & 1) != 0) && (*(long *)(uVar10 + (long)iVar3) == lVar8)) {
    *(undefined8 *)(uVar10 + (long)iVar3) = 0;
  }
code_r0x000100109fc4:
  func_0x000107c61170(uVar10);
  param_1 = lVar8;
  goto code_r0x000100109ff0;
}



/* Entry: 10bd7ff20; end: 10bd7ffb3; -[GPBMessage setExtension:index:value:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd7ff20(long param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  FUN_10bd7fb70(param_1,param_3);
  func_0x00010c07c3e0();
  if ((param_3 & 1) == 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    *(undefined **)(param_1 + 0x10) = puVar5;
  }
  func_0x00010c0dff20();
  func_0x00010c130f40();
code_r0x000100109ff0:
  do {
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar8 == 0) {
      return;
    }
    lVar11 = *(long *)(param_1 + 0x28);
    if (lVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1992f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar8,PTR_s_setExtension_value__112643ed8,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    func_0x000107c61174();
    lVar9 = *(long *)(lVar11 + 8);
    bVar1 = *(byte *)(lVar9 + 0x1e);
    uVar2 = *(ushort *)(lVar9 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x000100109e38;
    if (*(long *)(lVar11 + 0x10) != 0) {
      func_0x00010010cd00(lVar8,*(long *)(lVar11 + 0x10),*(undefined4 *)(lVar9 + 0x14),
                          *(undefined4 *)(lVar9 + 0x10));
      uVar2 = *(ushort *)(lVar9 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar11 = param_1, func_0x000107c4adac(), lVar11 != 0)) {
      uVar6 = *(uint *)(lVar9 + 0x14);
      lVar11 = *(long *)(lVar8 + 0x40);
      if ((int)uVar6 < 0) {
        uVar7 = 0;
        if (param_1 != 0) {
          uVar7 = *(undefined4 *)(lVar9 + 0x10);
        }
        goto code_r0x000100109f58;
      }
      uVar10 = (ulong)(uVar6 >> 5);
      uVar6 = 1 << (ulong)(uVar6 & 0x1f);
      if (param_1 == 0) goto code_r0x000100109f84;
      *(uint *)(lVar11 + uVar10 * 4) = *(uint *)(lVar11 + uVar10 * 4) | uVar6;
    }
    else {
      func_0x000107c61170(param_1);
      uVar6 = *(uint *)(lVar9 + 0x14);
      lVar11 = *(long *)(lVar8 + 0x40);
      if ((int)uVar6 < 0) {
        param_1 = 0;
        uVar7 = 0;
code_r0x000100109f58:
        *(undefined4 *)(lVar11 + (ulong)-uVar6 * 4) = uVar7;
      }
      else {
        uVar10 = (ulong)(uVar6 >> 5);
        uVar6 = 1 << (ulong)(uVar6 & 0x1f);
code_r0x000100109f84:
        param_1 = 0;
        *(uint *)(lVar11 + uVar10 * 4) = *(uint *)(lVar11 + uVar10 * 4) & (uVar6 ^ 0xffffffff);
      }
    }
    uVar10 = *(ulong *)(lVar11 + (ulong)*(uint *)(lVar9 + 0x18));
    *(long *)(lVar11 + (ulong)*(uint *)(lVar9 + 0x18)) = param_1;
    param_1 = lVar8;
  } while (uVar10 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar10 + 0x20) == lVar8)) {
    func_0x00010029a5f8(uVar10);
  }
  goto code_r0x000100109fc4;
code_r0x000100109e38:
  uVar10 = *(ulong *)(*(long *)(lVar8 + 0x40) + (ulong)*(uint *)(lVar9 + 0x18));
  *(long *)(*(long *)(lVar8 + 0x40) + (ulong)*(uint *)(lVar9 + 0x18)) = param_1;
  param_1 = lVar8;
  if (uVar10 == 0) goto code_r0x000100109ff0;
  lVar9 = lVar11;
  func_0x000107c433d8();
  uVar4 = uVar10;
  if ((int)lVar9 == 1) {
    if (3 < bVar1 - 0xd) {
code_r0x000100109f38:
      if (*(long *)(uVar10 + 8) == lVar8) {
        *(undefined8 *)(uVar10 + 8) = 0;
      }
      goto code_r0x000100109fc4;
    }
    puVar5 = PTR_PTR_1126e3228;
    func_0x000107c61158(PTR_PTR_1126e3228);
    func_0x000107c6115c(uVar10,puVar5);
    iVar3 = _DAT_112796b30;
  }
  else {
    func_0x000107c4c354();
    if (((int)lVar11 != 0xe) || (3 < bVar1 - 0xd)) goto code_r0x000100109f38;
    puVar5 = PTR_PTR_1126e3230;
    func_0x000107c61158(PTR_PTR_1126e3230);
    func_0x000107c6115c(uVar10,puVar5);
    iVar3 = _DAT_112796db0;
  }
  if (((uVar4 & 1) != 0) && (*(long *)(uVar10 + (long)iVar3) == lVar8)) {
    *(undefined8 *)(uVar10 + (long)iVar3) = 0;
  }
code_r0x000100109fc4:
  func_0x000107c61170(uVar10);
  param_1 = lVar8;
  goto code_r0x000100109ff0;
}



/* Entry: 10bd7ffb4; end: 10bd80007; -[GPBMessage clearExtension:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd7ffb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  FUN_10bd7fb70(param_1,param_3);
  lVar6 = *(long *)(param_1 + 0x10);
  func_0x00010c0dff20();
  if (lVar6 == 0) {
    return;
  }
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10));
code_r0x000100109ff0:
  do {
    lVar6 = *(long *)(param_1 + 0x20);
    if (lVar6 == 0) {
      return;
    }
    lVar11 = *(long *)(param_1 + 0x28);
    if (lVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1992f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar6,PTR_s_setExtension_value__112643ed8,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    func_0x000107c61174();
    lVar9 = *(long *)(lVar11 + 8);
    bVar1 = *(byte *)(lVar9 + 0x1e);
    uVar2 = *(ushort *)(lVar9 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x000100109e38;
    if (*(long *)(lVar11 + 0x10) != 0) {
      func_0x00010010cd00(lVar6,*(long *)(lVar11 + 0x10),*(undefined4 *)(lVar9 + 0x14),
                          *(undefined4 *)(lVar9 + 0x10));
      uVar2 = *(ushort *)(lVar9 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar11 = param_1, func_0x000107c4adac(), lVar11 != 0)) {
      uVar7 = *(uint *)(lVar9 + 0x14);
      lVar11 = *(long *)(lVar6 + 0x40);
      if ((int)uVar7 < 0) {
        uVar8 = 0;
        if (param_1 != 0) {
          uVar8 = *(undefined4 *)(lVar9 + 0x10);
        }
        goto code_r0x000100109f58;
      }
      uVar10 = (ulong)(uVar7 >> 5);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (param_1 == 0) goto code_r0x000100109f84;
      *(uint *)(lVar11 + uVar10 * 4) = *(uint *)(lVar11 + uVar10 * 4) | uVar7;
    }
    else {
      func_0x000107c61170(param_1);
      uVar7 = *(uint *)(lVar9 + 0x14);
      lVar11 = *(long *)(lVar6 + 0x40);
      if ((int)uVar7 < 0) {
        param_1 = 0;
        uVar8 = 0;
code_r0x000100109f58:
        *(undefined4 *)(lVar11 + (ulong)-uVar7 * 4) = uVar8;
      }
      else {
        uVar10 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
code_r0x000100109f84:
        param_1 = 0;
        *(uint *)(lVar11 + uVar10 * 4) = *(uint *)(lVar11 + uVar10 * 4) & (uVar7 ^ 0xffffffff);
      }
    }
    uVar10 = *(ulong *)(lVar11 + (ulong)*(uint *)(lVar9 + 0x18));
    *(long *)(lVar11 + (ulong)*(uint *)(lVar9 + 0x18)) = param_1;
    param_1 = lVar6;
  } while (uVar10 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar10 + 0x20) == lVar6)) {
    func_0x00010029a5f8(uVar10);
  }
  goto code_r0x000100109fc4;
code_r0x000100109e38:
  uVar10 = *(ulong *)(*(long *)(lVar6 + 0x40) + (ulong)*(uint *)(lVar9 + 0x18));
  *(long *)(*(long *)(lVar6 + 0x40) + (ulong)*(uint *)(lVar9 + 0x18)) = param_1;
  param_1 = lVar6;
  if (uVar10 == 0) goto code_r0x000100109ff0;
  lVar9 = lVar11;
  func_0x000107c433d8();
  uVar5 = uVar10;
  if ((int)lVar9 == 1) {
    if (3 < bVar1 - 0xd) {
code_r0x000100109f38:
      if (*(long *)(uVar10 + 8) == lVar6) {
        *(undefined8 *)(uVar10 + 8) = 0;
      }
      goto code_r0x000100109fc4;
    }
    puVar4 = PTR_PTR_1126e3228;
    func_0x000107c61158(PTR_PTR_1126e3228);
    func_0x000107c6115c(uVar10,puVar4);
    iVar3 = _DAT_112796b30;
  }
  else {
    func_0x000107c4c354();
    if (((int)lVar11 != 0xe) || (3 < bVar1 - 0xd)) goto code_r0x000100109f38;
    puVar4 = PTR_PTR_1126e3230;
    func_0x000107c61158(PTR_PTR_1126e3230);
    func_0x000107c6115c(uVar10,puVar4);
    iVar3 = _DAT_112796db0;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar10 + (long)iVar3) == lVar6)) {
    *(undefined8 *)(uVar10 + (long)iVar3) = 0;
  }
code_r0x000100109fc4:
  func_0x000107c61170(uVar10);
  param_1 = lVar6;
  goto code_r0x000100109ff0;
}



/* Entry: 10bd80008; end: 10bd80047; +[GPBMessage parseFromCodedInputStream:extensionRegistry:error:] */

void FUN_10bd80008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_alloc();
  func_0x00010bfff580(param_1,param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd80048; end: 10bd8011b; +[GPBMessage parseDelimitedFromCodedInputStream:extensionRegistry:error:] */

long FUN_10bd80048(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  if ((*(long *)(param_3 + 0x18) != *(long *)(param_3 + 0x10)) &&
     (*(long *)(param_3 + 0x18) != *(long *)(param_3 + 0x20))) {
    param_3 = param_3 + 8;
    FUN_10bd5e5f4(param_3);
    func_0x00010c0f4100(param_1,param_2,param_3,param_4,param_5);
    _objc_release(param_3);
    if ((param_5 != (undefined8 *)0x0) && (param_1 != 0)) {
      *param_5 = 0;
    }
    return param_1;
  }
  _objc_alloc_init(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return param_1;
}



/* Entry: 10bd8011c; end: 10bd80123; -[GPBMessage unknownFields] */

undefined8 FUN_10bd8011c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bd80124; end: 10bd8016f; -[GPBMessage setUnknownFields:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd80124(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  if (param_3 == *(long *)(param_1 + 8)) {
    return;
  }
  _objc_release();
  func_0x00010bf51e00();
  *(long *)(param_1 + 8) = param_3;
code_r0x000100109ff0:
  do {
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar8 == 0) {
      return;
    }
    lVar11 = *(long *)(param_1 + 0x28);
    if (lVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1992f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar8,PTR_s_setExtension_value__112643ed8,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    func_0x000107c61174();
    lVar9 = *(long *)(lVar11 + 8);
    bVar1 = *(byte *)(lVar9 + 0x1e);
    uVar2 = *(ushort *)(lVar9 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x000100109e38;
    if (*(long *)(lVar11 + 0x10) != 0) {
      func_0x00010010cd00(lVar8,*(long *)(lVar11 + 0x10),*(undefined4 *)(lVar9 + 0x14),
                          *(undefined4 *)(lVar9 + 0x10));
      uVar2 = *(ushort *)(lVar9 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar11 = param_1, func_0x000107c4adac(), lVar11 != 0)) {
      uVar6 = *(uint *)(lVar9 + 0x14);
      lVar11 = *(long *)(lVar8 + 0x40);
      if ((int)uVar6 < 0) {
        uVar7 = 0;
        if (param_1 != 0) {
          uVar7 = *(undefined4 *)(lVar9 + 0x10);
        }
        goto code_r0x000100109f58;
      }
      uVar10 = (ulong)(uVar6 >> 5);
      uVar6 = 1 << (ulong)(uVar6 & 0x1f);
      if (param_1 == 0) goto code_r0x000100109f84;
      *(uint *)(lVar11 + uVar10 * 4) = *(uint *)(lVar11 + uVar10 * 4) | uVar6;
    }
    else {
      func_0x000107c61170(param_1);
      uVar6 = *(uint *)(lVar9 + 0x14);
      lVar11 = *(long *)(lVar8 + 0x40);
      if ((int)uVar6 < 0) {
        param_1 = 0;
        uVar7 = 0;
code_r0x000100109f58:
        *(undefined4 *)(lVar11 + (ulong)-uVar6 * 4) = uVar7;
      }
      else {
        uVar10 = (ulong)(uVar6 >> 5);
        uVar6 = 1 << (ulong)(uVar6 & 0x1f);
code_r0x000100109f84:
        param_1 = 0;
        *(uint *)(lVar11 + uVar10 * 4) = *(uint *)(lVar11 + uVar10 * 4) & (uVar6 ^ 0xffffffff);
      }
    }
    uVar10 = *(ulong *)(lVar11 + (ulong)*(uint *)(lVar9 + 0x18));
    *(long *)(lVar11 + (ulong)*(uint *)(lVar9 + 0x18)) = param_1;
    param_1 = lVar8;
  } while (uVar10 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar10 + 0x20) == lVar8)) {
    func_0x00010029a5f8(uVar10);
  }
  goto code_r0x000100109fc4;
code_r0x000100109e38:
  uVar10 = *(ulong *)(*(long *)(lVar8 + 0x40) + (ulong)*(uint *)(lVar9 + 0x18));
  *(long *)(*(long *)(lVar8 + 0x40) + (ulong)*(uint *)(lVar9 + 0x18)) = param_1;
  param_1 = lVar8;
  if (uVar10 == 0) goto code_r0x000100109ff0;
  lVar9 = lVar11;
  func_0x000107c433d8();
  uVar5 = uVar10;
  if ((int)lVar9 == 1) {
    if (3 < bVar1 - 0xd) {
code_r0x000100109f38:
      if (*(long *)(uVar10 + 8) == lVar8) {
        *(undefined8 *)(uVar10 + 8) = 0;
      }
      goto code_r0x000100109fc4;
    }
    puVar4 = PTR_PTR_1126e3228;
    func_0x000107c61158(PTR_PTR_1126e3228);
    func_0x000107c6115c(uVar10,puVar4);
    iVar3 = _DAT_112796b30;
  }
  else {
    func_0x000107c4c354();
    if (((int)lVar11 != 0xe) || (3 < bVar1 - 0xd)) goto code_r0x000100109f38;
    puVar4 = PTR_PTR_1126e3230;
    func_0x000107c61158(PTR_PTR_1126e3230);
    func_0x000107c6115c(uVar10,puVar4);
    iVar3 = _DAT_112796db0;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar10 + (long)iVar3) == lVar8)) {
    *(undefined8 *)(uVar10 + (long)iVar3) = 0;
  }
code_r0x000100109fc4:
  func_0x000107c61170(uVar10);
  param_1 = lVar8;
  goto code_r0x000100109ff0;
}



/* Entry: 10bd80170; end: 10bd8030b; -[GPBMessage parseMessageSet:extensionRegistry:] */

/* WARNING: Removing unreachable block (ram,0x00010bd802d8) */

void FUN_10bd80170(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = 0;
  lVar6 = 0;
  lVar7 = 0;
  do {
    while( true ) {
      while( true ) {
        iVar1 = (int)param_3 + 8;
        func_0x000107c3182c();
        if (iVar1 == 0) goto LAB_10bd80220;
        if (iVar1 != 0x1a) break;
        lVar6 = param_3 + 8;
        FUN_10bd5e5f4();
        _objc_autorelease();
      }
      if (iVar1 != 0x10) break;
      lVar3 = param_3 + 8;
      func_0x000107c3aafc();
      lVar7 = 0;
      if ((int)lVar3 != 0) {
        func_0x00010bf6e760(param_1);
        lVar5 = param_4;
        func_0x00010bf9dd00();
        lVar7 = lVar3;
      }
    }
    uVar2 = param_3;
    func_0x00010c23e160();
  } while ((uVar2 & 1) != 0);
LAB_10bd80220:
  func_0x00010bf38140(param_3);
  if ((lVar6 != 0) && ((int)lVar7 != 0)) {
    if (lVar5 == 0) {
      FUN_10bd80468(param_1);
      puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64b00(PTR__OBJC_CLASS___NSData_1126ae778);
                    /* WARNING: Could not recover jumptable at 0x00010c0cac70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s_mergeMessageSetMessage_data__112610530,lVar7,puVar4);
      return;
    }
    puVar4 = PTR_PTR_1126e3238;
    _objc_alloc(PTR_PTR_1126e3238);
    func_0x00010c008240();
    lVar6 = lVar5;
    func_0x00010c079840(lVar5);
    FUN_10bd8030c(lVar5,lVar6,puVar4,param_4,param_1);
    _objc_release(puVar4);
  }
  return;
}



/* Entry: 10bd8030c; end: 10bd80467;  */

void FUN_10bd8030c(code *param_1,undefined8 param_2,long param_3,undefined8 param_4,code *param_5)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined *unaff_x22;
  code *pcVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  if ((int)param_2 != 0) {
    iVar4 = (int)param_3 + 8;
    func_0x000107c3aafc();
    uVar5 = *(ulong *)(param_3 + 0x18);
    uVar2 = *(ulong *)(param_3 + 0x20);
    uVar1 = uVar5 + (long)iVar4;
    if (uVar2 < uVar1) {
      FUN_10bd5e500(0xffffffffffffff9a,0);
      uVar5 = *(ulong *)(param_3 + 0x18);
    }
    *(ulong *)(param_3 + 0x20) = uVar1;
    if (uVar1 != uVar5) {
      do {
        FUN_10bd81580(param_1,param_5,param_3,param_4,1,0);
      } while (*(long *)(param_3 + 0x20) != *(long *)(param_3 + 0x18));
    }
    *(ulong *)(param_3 + 0x20) = uVar2;
    return;
  }
  bVar3 = *(byte *)(*(long *)(param_1 + 8) + 0x2d);
  if (*(byte *)(*(long *)(param_1 + 8) + 0x2c) - 0xf < 2) {
    if ((bVar3 & 1) == 0) {
      pcVar7 = param_5;
      func_0x00010bfc5440(param_5,param_2,param_1);
      if (pcVar7 != (code *)0x0) goto LAB_10bd8043c;
      pcVar7 = param_1;
      func_0x00010c0d1a60(param_1);
      func_0x00010bf6e760();
      func_0x00010c0cb320();
      _objc_alloc_init();
      func_0x00010c1992e0(param_5);
    }
    else {
      pcVar7 = param_1;
      func_0x00010c0d1a60(param_1);
      func_0x00010bf6e760();
      func_0x00010c0cb320();
      _objc_alloc_init();
      func_0x00010bef8140(param_5);
    }
    _objc_release(pcVar7);
  }
  else {
    pcVar7 = (code *)0x0;
  }
LAB_10bd8043c:
  lVar6 = *(long *)(param_1 + 8);
  switch(*(undefined1 *)(lVar6 + 0x2c)) {
  case 0:
    func_0x000107c3aafc(param_3 + 8);
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
    func_0x00010bff91e0();
    break;
  case 1:
    func_0x000107c3ab04(param_3 + 8,4);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
    goto code_r0x00010bd817a0;
  case 2:
    func_0x000107c3ab04(param_3 + 8,4);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
    goto code_r0x00010bd817f0;
  case 3:
    func_0x000107c3ab04(param_3 + 8,4);
    uVar8 = *(undefined4 *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
    func_0x00010c0138c0(uVar8);
    break;
  case 4:
    func_0x000107c3ab04(param_3 + 8,8);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
    goto code_r0x00010bd8169c;
  case 5:
    func_0x000107c3ab04(param_3 + 8,8);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
    goto code_r0x00010bd818a4;
  case 6:
    func_0x000107c3ab04(param_3 + 8,8);
    uVar9 = *(undefined8 *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
    func_0x00010c00e360(uVar9);
    break;
  case 7:
    func_0x000107c3aafc(param_3 + 8);
    goto code_r0x00010bd817e0;
  case 8:
    func_0x000107c3aafc(param_3 + 8);
    goto code_r0x00010bd81894;
  case 9:
    func_0x000107c3aafc(param_3 + 8);
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
    goto code_r0x00010bd817f0;
  case 10:
    func_0x000107c3aafc(param_3 + 8);
code_r0x00010bd81894:
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
code_r0x00010bd818a4:
    func_0x00010c027c20();
    break;
  case 0xb:
    func_0x000107c3aafc(param_3 + 8);
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
code_r0x00010bd817a0:
    func_0x00010c0594e0();
    break;
  case 0xc:
    func_0x000107c3aafc(param_3 + 8);
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
code_r0x00010bd8169c:
    func_0x00010c059520();
    break;
  case 0xd:
    unaff_x22 = (undefined *)(param_3 + 8);
    func_0x000107c31834();
    break;
  case 0xe:
    unaff_x22 = (undefined *)(param_3 + 8);
    func_0x000107c31830();
    break;
  case 0xf:
    if ((*(byte *)(lVar6 + 0x2d) >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0cabf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (pcVar7,PTR_s_mergeFromCodedInputStream_extens_112610510,param_3,param_4);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1216f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3,PTR_s_readMessage_extensionRegistry__112625fd8,pcVar7,param_4);
    return;
  case 0x10:
                    /* WARNING: Could not recover jumptable at 0x00010c121570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3,PTR_s_readGroup_message_extensionRegis_112625f78,
               *(undefined4 *)(lVar6 + 0x28),pcVar7);
    return;
  case 0x11:
    iVar4 = (int)param_3 + 8;
    func_0x000107c3aafc();
    func_0x00010bf979c0();
    pcVar7 = param_1;
    func_0x00010c06ea60();
    if ((int)pcVar7 != 0) {
      func_0x00010bf97a40();
      (*param_1)();
      if (iVar4 == 0) {
        FUN_10bd80468(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010c0cad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)();
        return;
      }
    }
code_r0x00010bd817e0:
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
code_r0x00010bd817f0:
    func_0x00010c01e520();
    break;
  default:
    goto LAB_10bd818b0;
  }
  if (unaff_x22 == (undefined *)0x0) {
    return;
  }
LAB_10bd818b0:
  if ((bVar3 & 1) == 0) {
    func_0x00010c1992e0(param_5);
  }
  else {
    func_0x00010bef8140();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x22);
  return;
}



/* Entry: 10bd80468; end: 10bd804a7;  */

long FUN_10bd80468(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126e3240;
    _objc_alloc_init();
    *(undefined **)(param_1 + 8) = puVar2;
    func_0x000107c3187c(param_1);
    lVar1 = *(long *)(param_1 + 8);
  }
  return lVar1;
}



/* Entry: 10bd804a8; end: 10bd805db; -[GPBMessage parseUnknownField:extensionRegistry:tag:] */

void FUN_10bd804a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  uint param_5)

{
  int iVar1;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010bf6e760();
  iVar1 = (int)uVar2;
  uVar3 = param_4;
  func_0x00010bf9dd00();
  if (uVar3 == 0) {
    func_0x00010c083c60();
    if ((param_5 == 0xb) && (iVar1 != 0)) {
      func_0x00010c0f42a0(param_1);
      return;
    }
LAB_10bd80590:
    puVar4 = PTR_PTR_1126e3240;
    func_0x00010c072e00();
    if ((int)puVar4 != 0) {
      FUN_10bd80468(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0cab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
  }
  else {
    uVar5 = uVar3;
    func_0x00010c2a7420();
    if ((uint)uVar5 == (param_5 & 7)) {
      uVar5 = uVar3;
      func_0x00010c079840(uVar3);
    }
    else {
      uVar5 = uVar3;
      func_0x00010c07c3e0();
      if ((((int)uVar5 == 0) || (*(byte *)(*(long *)(uVar3 + 8) + 0x2c) - 0xd < 4)) ||
         (uVar5 = uVar3, func_0x00010bf01e60(), (uint)uVar5 != (param_5 & 7))) goto LAB_10bd80590;
      uVar5 = uVar3;
      func_0x00010c079840(uVar3);
      uVar5 = (ulong)((uint)uVar5 ^ 1);
    }
    FUN_10bd8030c(uVar3,uVar5,param_3,param_4,param_1);
  }
  return;
}



/* Entry: 10bd805dc; end: 10bd80607; -[GPBMessage addUnknownMapEntry:value:] */

void FUN_10bd805dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10bd80468();
                    /* WARNING: Could not recover jumptable at 0x00010befc6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addUnknownMapEntry_value__11259cb50,param_3,param_4);
  return;
}



/* Entry: 10bd80608; end: 10bd80c73; -[GPBMessage mergeFrom:] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x00010bd80adc */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 * FUN_10bd80608(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_1;
  _objc_opt_class();
  puVar16 = param_3;
  _objc_opt_class();
  func_0x00010c080080();
  if (((uVar10 & 1) == 0) && (func_0x00010c080080(), ((ulong)puVar16 & 1) == 0)) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
  }
  func_0x000107c3187c(param_1);
  uVar10 = param_1;
  _objc_opt_class();
  func_0x00010bf6e760();
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar17 = *(long *)(uVar10 + 8);
  lVar18 = lVar17;
  func_0x00010bf52a60();
  if (lVar18 != 0) {
    lVar21 = *plStack_220;
    do {
      lVar22 = 0;
      do {
        if (*plStack_220 != lVar21) {
          _objc_enumerationMutation(lVar17);
        }
        lVar19 = *(long *)(lStack_228 + lVar22 * 8);
        lVar9 = lVar19;
        func_0x00010bfac840();
        if ((int)lVar9 == 1) {
          if ((param_3[8] != 0) &&
             (*(long *)(param_3[8] + (ulong)*(uint *)(*(long *)(lVar19 + 8) + 0x18)) != 0)) {
            uVar8 = (uint)*(byte *)(*(long *)(lVar19 + 8) + 0x1e);
            if (uVar8 - 0xd < 4) {
              func_0x000107c31898(param_1,lVar19);
              func_0x00010befa160();
            }
            else {
              func_0x000107c31898(param_1,lVar19);
              if (uVar8 == 0x11) {
                func_0x00010befad20();
              }
              else {
                func_0x00010befc860();
              }
            }
          }
        }
        else if ((int)lVar9 == 0) {
          lVar9 = *(long *)(lVar19 + 8);
          uVar8 = *(uint *)(lVar9 + 0x14);
          if ((int)uVar8 < 0) {
            lVar13 = param_3[8];
            if (*(int *)(lVar13 + (ulong)-uVar8 * 4) == *(int *)(lVar9 + 0x10)) goto LAB_10bd807f4;
          }
          else {
            lVar13 = param_3[8];
            if ((*(uint *)(lVar13 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) != 0) {
LAB_10bd807f4:
              switch(*(undefined1 *)(lVar9 + 0x1e)) {
              case 0:
                puVar16 = param_3;
                func_0x000107c318b4(param_3,lVar19);
                func_0x000107c318b8(param_1,lVar19,puVar16);
                break;
              case 1:
              case 0xb:
                puVar16 = param_3;
                func_0x000107c318bc(param_3,lVar19);
                func_0x000107c318c0(param_1,lVar19,puVar16);
                break;
              case 2:
              case 7:
              case 9:
              case 0x11:
                puVar16 = param_3;
                func_0x000107c318a8(param_3,lVar19);
                func_0x000107c318ac(param_1,lVar19,puVar16);
                break;
              case 3:
                func_0x000107c318d4(param_3,lVar19);
                func_0x000107c318d8(param_1,lVar19);
                break;
              case 4:
              case 0xc:
                puVar16 = param_3;
                func_0x000107c318cc(param_3,lVar19);
                func_0x000107c318d0(param_1,lVar19,puVar16);
                break;
              case 5:
              case 8:
              case 10:
                puVar16 = param_3;
                func_0x000107c318c4(param_3,lVar19);
                func_0x000107c318c8(param_1,lVar19,puVar16);
                break;
              case 6:
                func_0x000107c318dc(param_3,lVar19);
                func_0x000107c318e0(param_1,lVar19);
                break;
              case 0xd:
              case 0xe:
                uVar5 = *(undefined8 *)(lVar13 + (ulong)*(uint *)(lVar9 + 0x18));
                _objc_retain(uVar5);
code_r0x00010bd80974:
                func_0x000107c318a4(param_1,lVar19,uVar5);
                break;
              case 0xf:
              case 0x10:
                uVar5 = *(undefined8 *)(lVar13 + (ulong)*(uint *)(lVar9 + 0x18));
                if ((int)uVar8 < 0) {
                  lVar13 = *(long *)(param_1 + 0x40);
                  if (*(int *)(lVar13 + (ulong)-uVar8 * 4) != *(int *)(lVar9 + 0x10))
                  goto code_r0x00010bd8096c;
                }
                else {
                  lVar13 = *(long *)(param_1 + 0x40);
                  if ((*(uint *)(lVar13 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) ==
                      0) {
code_r0x00010bd8096c:
                    func_0x00010bf51e00(uVar5);
                    goto code_r0x00010bd80974;
                  }
                }
                func_0x00010c0caba0(*(undefined8 *)(lVar13 + (ulong)*(uint *)(lVar9 + 0x18)));
              }
            }
          }
        }
        else if ((param_3[8] != 0) &&
                (*(long *)(param_3[8] + (ulong)*(uint *)(*(long *)(lVar19 + 8) + 0x18)) != 0)) {
          lVar9 = lVar19;
          func_0x00010c0b92a0();
          uVar8 = (uint)*(byte *)(*(long *)(lVar19 + 8) + 0x1e);
          if ((int)lVar9 - 0xdU < 4 && uVar8 - 0xd < 4) {
            func_0x000107c31894(param_1,lVar19);
          }
          else {
            func_0x000107c31894(param_1,lVar19);
            if (uVar8 == 0x11) {
              func_0x00010befacc0();
              goto LAB_10bd80984;
            }
          }
          func_0x00010bef7f60();
        }
LAB_10bd80984:
        lVar22 = lVar22 + 1;
      } while (lVar18 != lVar22);
      lVar18 = lVar17;
      func_0x00010bf52a60();
    } while (lVar18 != 0);
  }
  lVar18 = *(long *)(param_1 + 8);
  puVar16 = param_3;
  func_0x00010c280920();
  if (lVar18 == 0) {
    func_0x00010c21ba20(param_1);
  }
  else {
    func_0x00010c0cace0(lVar18);
  }
  lVar18 = param_3[2];
  func_0x00010bf529e0();
  puVar15 = (undefined8 *)0x0;
  if (lVar18 != 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      puVar15 = (undefined8 *)param_3[2];
      uVar10 = param_1;
      _NSZoneFromPointer(param_1);
      FUN_10bd7f060(puVar15,uVar10);
      *(undefined8 **)(param_1 + 0x10) = puVar15;
    }
    else {
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      lStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      plStack_260 = (long *)0x0;
      lVar17 = param_3[2];
      puVar16 = &uStack_270;
      lVar18 = lVar17;
      func_0x00010bf52a60();
      puVar15 = (undefined8 *)0x0;
      if (lVar18 != 0) {
        lVar21 = *plStack_260;
        do {
          lVar22 = 0;
          do {
            if (*plStack_260 != lVar21) {
              _objc_enumerationMutation(lVar17);
            }
            uVar20 = *(ulong *)(lStack_268 + lVar22 * 8);
            lVar9 = param_3[2];
            func_0x00010c0dff20();
            puVar4 = *(undefined **)(param_1 + 0x10);
            func_0x00010c0dff20();
            uVar8 = *(byte *)(*(long *)(uVar20 + 8) + 0x2c) - 0xf;
            uVar10 = uVar20;
            func_0x00010c07c3e0();
            if ((int)uVar10 == 0) {
              if (uVar8 < 2) {
                if (puVar4 == (undefined *)0x0) {
                  func_0x00010bf51e00();
                  func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x10));
                  _objc_release(lVar9);
                }
                else {
                  func_0x00010c0caba0(puVar4);
                }
                goto LAB_10bd80bb0;
              }
              func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x10));
            }
            else {
              if (puVar4 == (undefined *)0x0) {
                puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                _objc_alloc_init();
                func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x10));
                _objc_release(puVar4);
              }
              if (uVar8 < 2) {
                lVar19 = lVar9;
                func_0x00010bf52a60();
                lVar13 = lRam0000000000000000;
                while (lVar19 != 0) {
                  lVar14 = 0;
                  do {
                    if (lRam0000000000000000 != lVar13) {
                      _objc_enumerationMutation(lVar9);
                    }
                    uVar5 = *(undefined8 *)(lVar14 * 8);
                    func_0x00010bf51e00();
                    func_0x00010befa120(puVar4);
                    _objc_release(uVar5);
                    lVar14 = lVar14 + 1;
                  } while (lVar19 != lVar14);
                  lVar19 = lVar9;
                  func_0x00010bf52a60();
                }
LAB_10bd80bb0:
                func_0x00010c07c3e0();
                if ((uVar20 & 1) == 0) {
                  uVar5 = *(undefined8 *)(param_1 + 0x18);
                  func_0x00010c0dff20();
                  _objc_retain();
                  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c31884(uVar5);
                  _objc_release(uVar5);
                }
              }
              else {
                func_0x00010befa160(puVar4);
              }
            }
            lVar22 = lVar22 + 1;
          } while (lVar22 != lVar18);
          puVar16 = &uStack_270;
          lVar18 = lVar17;
          func_0x00010bf52a60();
        } while (lVar18 != 0);
        puVar15 = (undefined8 *)0x0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar15;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (puVar16 == puVar15) {
LAB_10bd80f88:
    puVar7 = (undefined8 *)((long)&lRam0000000000000000 + 1);
  }
  else {
    puVar4 = PTR_PTR_1126be598;
    _objc_opt_class(PTR_PTR_1126be598);
    puVar7 = puVar16;
    _objc_opt_isKindOfClass(puVar16,puVar4);
    if (((ulong)puVar7 & 1) != 0) {
      puVar7 = puVar15;
      _objc_opt_class();
      func_0x00010bf6e760();
      puVar6 = puVar16;
      _objc_opt_class();
      func_0x00010bf6e760();
      if (puVar6 == puVar7) {
        lVar22 = puVar15[8];
        lVar19 = puVar16[8];
        lVar9 = puVar7[1];
        lVar17 = lVar9;
        func_0x00010bf52a60();
        lVar21 = lRam0000000000000000;
        while (lVar17 != 0) {
          lVar13 = 0;
          do {
            if (lRam0000000000000000 != lVar21) {
              _objc_enumerationMutation(lVar9);
            }
            lVar14 = *(long *)(*(long *)(lVar13 * 8) + 8);
            if ((*(ushort *)(lVar14 + 0x1c) & 0xf02) == 0) {
              uVar8 = *(uint *)(lVar14 + 0x14);
              if ((int)uVar8 < 0) {
                lVar11 = puVar15[8];
                bVar2 = *(int *)(lVar11 + (ulong)-uVar8 * 4) == *(int *)(lVar14 + 0x10);
                lVar12 = puVar16[8];
                bVar3 = *(int *)(lVar12 + (ulong)-uVar8 * 4) == *(int *)(lVar14 + 0x10);
              }
              else {
                uVar1 = 1 << (ulong)(uVar8 & 0x1f);
                lVar11 = puVar15[8];
                uVar10 = (ulong)(uVar8 >> 3) & 0x1ffffffc;
                bVar2 = (*(uint *)(lVar11 + uVar10) & uVar1) != 0;
                lVar12 = puVar16[8];
                bVar3 = (*(uint *)(lVar12 + uVar10) & uVar1) != 0;
              }
              if (bVar2 == false || bVar3 == false) {
                if (bVar2 != bVar3) goto LAB_10bd80cf4;
              }
              else if (*(byte *)(lVar14 + 0x1e) < 0x12) {
                uVar8 = *(uint *)(lVar14 + 0x18);
                uVar10 = (ulong)uVar8;
                switch(*(byte *)(lVar14 + 0x1e)) {
                case 0:
                  if ((int)uVar8 < 0) {
                    bVar3 = *(int *)(lVar11 + (ulong)-uVar8 * 4) == 0;
                    bVar2 = *(int *)(lVar12 + (ulong)-uVar8 * 4) == 0;
                  }
                  else {
                    uVar1 = 1 << (ulong)(uVar8 & 0x1f);
                    uVar10 = (ulong)(uVar8 >> 3) & 0x1ffffffc;
                    bVar3 = (*(uint *)(lVar11 + uVar10) & uVar1) != 0;
                    bVar2 = (*(uint *)(lVar12 + uVar10) & uVar1) != 0;
                  }
                  if (bVar3 != bVar2) goto LAB_10bd80cf4;
                  break;
                default:
                  if (*(int *)(lVar22 + uVar10) != *(int *)(lVar19 + uVar10)) goto LAB_10bd80cf4;
                  break;
                case 4:
                case 5:
                case 6:
                case 8:
                case 10:
                case 0xc:
                  if (*(long *)(lVar22 + uVar10) != *(long *)(lVar19 + uVar10)) goto LAB_10bd80cf4;
                  break;
                case 0xd:
                case 0xe:
                case 0xf:
                case 0x10:
                  uVar10 = *(ulong *)(lVar22 + uVar10);
                  goto code_r0x00010bd80e00;
                }
              }
            }
            else {
              if (puVar15[8] == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = *(ulong *)(puVar15[8] + (ulong)*(uint *)(lVar14 + 0x18));
              }
              if (puVar16[8] == 0) {
                lVar14 = 0;
              }
              else {
                lVar14 = *(long *)(puVar16[8] + (ulong)*(uint *)(lVar14 + 0x18));
              }
              uVar20 = uVar10;
              func_0x00010bf529e0();
              if ((uVar20 != 0) || (func_0x00010bf529e0(), lVar14 != 0)) {
code_r0x00010bd80e00:
                func_0x00010c071ae0();
                if ((uVar10 & 1) == 0) goto LAB_10bd80cf4;
              }
            }
            lVar13 = lVar13 + 1;
          } while (lVar17 != lVar13);
          lVar17 = lVar9;
          func_0x00010bf52a60();
        }
        lVar17 = puVar15[2];
        func_0x00010bf529e0();
        if (lVar17 == 0) {
          lVar17 = puVar16[2];
          func_0x00010bf529e0();
          if (lVar17 != 0) goto LAB_10bd80f4c;
        }
        else {
LAB_10bd80f4c:
          puVar7 = (undefined8 *)puVar15[2];
          func_0x00010c071ae0();
          if ((int)puVar7 == 0) goto LAB_10bd80f8c;
        }
        lVar21 = puVar16[1];
        lVar17 = puVar15[1];
        func_0x00010bf52ce0();
        if ((lVar17 != 0) || (func_0x00010bf52ce0(), lVar21 != 0)) {
          puVar7 = (undefined8 *)puVar15[1];
          func_0x00010c071ae0();
          if ((int)puVar7 == 0) goto LAB_10bd80f8c;
        }
        goto LAB_10bd80f88;
      }
    }
LAB_10bd80cf4:
    puVar7 = (undefined8 *)0x0;
  }
LAB_10bd80f8c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return puVar7;
  }
  ___stack_chk_fail();
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = puVar7;
  _objc_opt_class();
  func_0x00010bf6e760();
  lVar9 = puVar7[8];
  lVar22 = puVar16[1];
  lVar18 = lVar22;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  do {
    if (lVar18 == 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
        return puVar16;
      }
      ___stack_chk_fail();
      FUN_10bd83c3c();
      puVar16 = (undefined8 *)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class();
      func_0x00010c25d9e0(puVar16);
      return puVar16;
    }
    lVar19 = 0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(lVar22);
      }
      lVar14 = *(long *)(lVar19 * 8);
      lVar13 = *(long *)(lVar14 + 8);
      if ((*(ushort *)(lVar13 + 0x1c) & 0xf02) != 0) {
        if (puVar7[8] == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = *(long *)(puVar7[8] + (ulong)*(uint *)(lVar13 + 0x18));
        }
        func_0x00010bf529e0();
        if (lVar13 != 0) {
          puVar16 = (undefined8 *)
                    (lVar13 + ((ulong)*(uint *)(*(long *)(lVar14 + 8) + 0x10) + (long)puVar16 * 0x13
                              ) * 0x13);
        }
        goto LAB_10bd81140;
      }
      uVar8 = *(uint *)(lVar13 + 0x14);
      if ((int)uVar8 < 0) {
        lVar14 = puVar7[8];
        if (*(uint *)(lVar14 + (ulong)-uVar8 * 4) == *(uint *)(lVar13 + 0x10)) goto LAB_10bd810e4;
        goto LAB_10bd81140;
      }
      lVar14 = puVar7[8];
      if ((*(uint *)(lVar14 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) == 0)
      goto LAB_10bd81140;
LAB_10bd810e4:
      if (0x11 < *(byte *)(lVar13 + 0x1e)) goto LAB_10bd81140;
      uVar8 = *(uint *)(lVar13 + 0x18);
      uVar10 = (ulong)uVar8;
      switch(*(byte *)(lVar13 + 0x1e)) {
      case 0:
        if ((int)uVar8 < 0) {
          uVar8 = (uint)(*(int *)(lVar14 + (ulong)-uVar8 * 4) == 0);
        }
        else {
          uVar8 = *(uint *)(lVar14 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1;
        }
        puVar16 = (undefined8 *)((long)puVar16 * 0x13 + (ulong)uVar8);
        goto LAB_10bd81140;
      default:
        uVar10 = (ulong)*(uint *)(lVar9 + uVar10);
        break;
      case 4:
      case 5:
      case 6:
      case 8:
      case 10:
      case 0xc:
        uVar10 = *(ulong *)(lVar9 + uVar10);
        break;
      case 0xd:
      case 0xe:
        lVar13 = *(long *)(lVar9 + uVar10);
        func_0x00010bfde980();
        goto code_r0x00010bd8113c;
      case 0xf:
      case 0x10:
        puVar16 = (undefined8 *)((ulong)*(uint *)(lVar13 + 0x10) + (long)puVar16 * 0x13);
        lVar13 = *(long *)(lVar9 + uVar10);
        _objc_opt_class();
        func_0x00010bf6e760();
code_r0x00010bd8113c:
        puVar16 = (undefined8 *)(lVar13 + (long)puVar16 * 0x13);
        goto LAB_10bd81140;
      }
      puVar16 = (undefined8 *)(uVar10 + (long)puVar16 * 0x13);
LAB_10bd81140:
      lVar19 = lVar19 + 1;
    } while (lVar18 != lVar19);
    lVar18 = lVar22;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10bd80c74; end: 10bd80fc7; -[GPBMessage isEqual:] */

undefined * FUN_10bd80c74(ulong param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == param_1) {
LAB_10bd80f88:
    puVar5 = (undefined *)0x1;
  }
  else {
    puVar5 = PTR_PTR_1126be598;
    _objc_opt_class(PTR_PTR_1126be598);
    uVar11 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((uVar11 & 1) != 0) {
      uVar11 = param_1;
      _objc_opt_class();
      func_0x00010bf6e760();
      uVar4 = param_3;
      _objc_opt_class();
      func_0x00010bf6e760();
      if (uVar4 == uVar11) {
        lVar15 = *(long *)(param_1 + 0x40);
        lVar18 = *(long *)(param_3 + 0x40);
        lVar16 = *(long *)(uVar11 + 8);
        lVar6 = lVar16;
        func_0x00010bf52a60();
        lVar9 = lRam0000000000000000;
        while (lVar6 != 0) {
          lVar10 = 0;
          do {
            if (lRam0000000000000000 != lVar9) {
              _objc_enumerationMutation(lVar16);
            }
            lVar17 = *(long *)(*(long *)(lVar10 * 8) + 8);
            if ((*(ushort *)(lVar17 + 0x1c) & 0xf02) == 0) {
              uVar7 = *(uint *)(lVar17 + 0x14);
              if ((int)uVar7 < 0) {
                lVar12 = *(long *)(param_1 + 0x40);
                bVar2 = *(int *)(lVar12 + (ulong)-uVar7 * 4) == *(int *)(lVar17 + 0x10);
                lVar13 = *(long *)(param_3 + 0x40);
                bVar3 = *(int *)(lVar13 + (ulong)-uVar7 * 4) == *(int *)(lVar17 + 0x10);
              }
              else {
                uVar1 = 1 << (ulong)(uVar7 & 0x1f);
                lVar12 = *(long *)(param_1 + 0x40);
                uVar11 = (ulong)(uVar7 >> 3) & 0x1ffffffc;
                bVar2 = (*(uint *)(lVar12 + uVar11) & uVar1) != 0;
                lVar13 = *(long *)(param_3 + 0x40);
                bVar3 = (*(uint *)(lVar13 + uVar11) & uVar1) != 0;
              }
              if (bVar2 == false || bVar3 == false) {
                if (bVar2 != bVar3) goto LAB_10bd80cf4;
              }
              else if (*(byte *)(lVar17 + 0x1e) < 0x12) {
                uVar7 = *(uint *)(lVar17 + 0x18);
                uVar11 = (ulong)uVar7;
                switch(*(byte *)(lVar17 + 0x1e)) {
                case 0:
                  if ((int)uVar7 < 0) {
                    bVar3 = *(int *)(lVar12 + (ulong)-uVar7 * 4) == 0;
                    bVar2 = *(int *)(lVar13 + (ulong)-uVar7 * 4) == 0;
                  }
                  else {
                    uVar1 = 1 << (ulong)(uVar7 & 0x1f);
                    uVar11 = (ulong)(uVar7 >> 3) & 0x1ffffffc;
                    bVar3 = (*(uint *)(lVar12 + uVar11) & uVar1) != 0;
                    bVar2 = (*(uint *)(lVar13 + uVar11) & uVar1) != 0;
                  }
                  if (bVar3 != bVar2) goto LAB_10bd80cf4;
                  break;
                default:
                  if (*(int *)(lVar15 + uVar11) != *(int *)(lVar18 + uVar11)) goto LAB_10bd80cf4;
                  break;
                case 4:
                case 5:
                case 6:
                case 8:
                case 10:
                case 0xc:
                  if (*(long *)(lVar15 + uVar11) != *(long *)(lVar18 + uVar11)) goto LAB_10bd80cf4;
                  break;
                case 0xd:
                case 0xe:
                case 0xf:
                case 0x10:
                  uVar11 = *(ulong *)(lVar15 + uVar11);
                  goto code_r0x00010bd80e00;
                }
              }
            }
            else {
              if (*(long *)(param_1 + 0x40) == 0) {
                uVar11 = 0;
              }
              else {
                uVar11 = *(ulong *)(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(lVar17 + 0x18));
              }
              if (*(long *)(param_3 + 0x40) == 0) {
                lVar17 = 0;
              }
              else {
                lVar17 = *(long *)(*(long *)(param_3 + 0x40) + (ulong)*(uint *)(lVar17 + 0x18));
              }
              uVar4 = uVar11;
              func_0x00010bf529e0();
              if ((uVar4 != 0) || (func_0x00010bf529e0(), lVar17 != 0)) {
code_r0x00010bd80e00:
                func_0x00010c071ae0();
                if ((uVar11 & 1) == 0) goto LAB_10bd80cf4;
              }
            }
            lVar10 = lVar10 + 1;
          } while (lVar6 != lVar10);
          lVar6 = lVar16;
          func_0x00010bf52a60();
        }
        lVar6 = *(long *)(param_1 + 0x10);
        func_0x00010bf529e0();
        if (lVar6 == 0) {
          lVar6 = *(long *)(param_3 + 0x10);
          func_0x00010bf529e0();
          if (lVar6 != 0) goto LAB_10bd80f4c;
        }
        else {
LAB_10bd80f4c:
          puVar5 = *(undefined **)(param_1 + 0x10);
          func_0x00010c071ae0();
          if ((int)puVar5 == 0) goto LAB_10bd80f8c;
        }
        lVar9 = *(long *)(param_3 + 8);
        lVar6 = *(long *)(param_1 + 8);
        func_0x00010bf52ce0();
        if ((lVar6 != 0) || (func_0x00010bf52ce0(), lVar9 != 0)) {
          puVar5 = *(undefined **)(param_1 + 8);
          func_0x00010c071ae0();
          if ((int)puVar5 == 0) goto LAB_10bd80f8c;
        }
        goto LAB_10bd80f88;
      }
    }
LAB_10bd80cf4:
    puVar5 = (undefined *)0x0;
  }
LAB_10bd80f8c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar5;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = puVar5;
  _objc_opt_class();
  func_0x00010bf6e760();
  lVar16 = *(long *)(puVar5 + 0x40);
  lVar15 = *(long *)(puVar14 + 8);
  lVar8 = lVar15;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  do {
    if (lVar8 == 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
        return puVar14;
      }
      ___stack_chk_fail();
      FUN_10bd83c3c();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class();
      func_0x00010c25d9e0(puVar5);
      return puVar5;
    }
    lVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar15);
      }
      lVar17 = *(long *)(lVar18 * 8);
      lVar10 = *(long *)(lVar17 + 8);
      if ((*(ushort *)(lVar10 + 0x1c) & 0xf02) != 0) {
        if (*(long *)(puVar5 + 0x40) == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = *(long *)(*(long *)(puVar5 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
        }
        func_0x00010bf529e0();
        if (lVar10 != 0) {
          puVar14 = (undefined *)
                    (lVar10 + ((ulong)*(uint *)(*(long *)(lVar17 + 8) + 0x10) + (long)puVar14 * 0x13
                              ) * 0x13);
        }
        goto LAB_10bd81140;
      }
      uVar7 = *(uint *)(lVar10 + 0x14);
      if ((int)uVar7 < 0) {
        lVar17 = *(long *)(puVar5 + 0x40);
        if (*(uint *)(lVar17 + (ulong)-uVar7 * 4) == *(uint *)(lVar10 + 0x10)) goto LAB_10bd810e4;
        goto LAB_10bd81140;
      }
      lVar17 = *(long *)(puVar5 + 0x40);
      if ((*(uint *)(lVar17 + (ulong)(uVar7 >> 5) * 4) >> (ulong)(uVar7 & 0x1f) & 1) == 0)
      goto LAB_10bd81140;
LAB_10bd810e4:
      if (0x11 < *(byte *)(lVar10 + 0x1e)) goto LAB_10bd81140;
      uVar7 = *(uint *)(lVar10 + 0x18);
      uVar11 = (ulong)uVar7;
      switch(*(byte *)(lVar10 + 0x1e)) {
      case 0:
        if ((int)uVar7 < 0) {
          uVar7 = (uint)(*(int *)(lVar17 + (ulong)-uVar7 * 4) == 0);
        }
        else {
          uVar7 = *(uint *)(lVar17 + (ulong)(uVar7 >> 5) * 4) >> (ulong)(uVar7 & 0x1f) & 1;
        }
        puVar14 = (undefined *)((long)puVar14 * 0x13 + (ulong)uVar7);
        goto LAB_10bd81140;
      default:
        uVar11 = (ulong)*(uint *)(lVar16 + uVar11);
        break;
      case 4:
      case 5:
      case 6:
      case 8:
      case 10:
      case 0xc:
        uVar11 = *(ulong *)(lVar16 + uVar11);
        break;
      case 0xd:
      case 0xe:
        lVar10 = *(long *)(lVar16 + uVar11);
        func_0x00010bfde980();
        goto code_r0x00010bd8113c;
      case 0xf:
      case 0x10:
        puVar14 = (undefined *)((ulong)*(uint *)(lVar10 + 0x10) + (long)puVar14 * 0x13);
        lVar10 = *(long *)(lVar16 + uVar11);
        _objc_opt_class();
        func_0x00010bf6e760();
code_r0x00010bd8113c:
        puVar14 = (undefined *)(lVar10 + (long)puVar14 * 0x13);
        goto LAB_10bd81140;
      }
      puVar14 = (undefined *)(uVar11 + (long)puVar14 * 0x13);
LAB_10bd81140:
      lVar18 = lVar18 + 1;
    } while (lVar8 != lVar18);
    lVar8 = lVar15;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10bd80fc8; end: 10bd811df; -[GPBMessage hash] */

undefined * FUN_10bd80fc8(undefined *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_1;
  _objc_opt_class();
  func_0x00010bf6e760();
  lVar9 = *(long *)(param_1 + 0x40);
  lVar8 = *(long *)(puVar7 + 8);
  lVar2 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return puVar7;
      }
      ___stack_chk_fail();
      FUN_10bd83c3c();
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class();
      func_0x00010c25d9e0(puVar7);
      return puVar7;
    }
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      lVar10 = *(long *)(lVar11 * 8);
      lVar5 = *(long *)(lVar10 + 8);
      if ((*(ushort *)(lVar5 + 0x1c) & 0xf02) != 0) {
        if (*(long *)(param_1 + 0x40) == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(long *)(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(lVar5 + 0x18));
        }
        func_0x00010bf529e0();
        if (lVar5 != 0) {
          puVar7 = (undefined *)
                   (lVar5 + ((ulong)*(uint *)(*(long *)(lVar10 + 8) + 0x10) + (long)puVar7 * 0x13) *
                            0x13);
        }
        goto LAB_10bd81140;
      }
      uVar3 = *(uint *)(lVar5 + 0x14);
      if ((int)uVar3 < 0) {
        lVar10 = *(long *)(param_1 + 0x40);
        if (*(uint *)(lVar10 + (ulong)-uVar3 * 4) == *(uint *)(lVar5 + 0x10)) goto LAB_10bd810e4;
        goto LAB_10bd81140;
      }
      lVar10 = *(long *)(param_1 + 0x40);
      if ((*(uint *)(lVar10 + (ulong)(uVar3 >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1) == 0)
      goto LAB_10bd81140;
LAB_10bd810e4:
      if (0x11 < *(byte *)(lVar5 + 0x1e)) goto LAB_10bd81140;
      uVar3 = *(uint *)(lVar5 + 0x18);
      uVar6 = (ulong)uVar3;
      switch(*(byte *)(lVar5 + 0x1e)) {
      case 0:
        if ((int)uVar3 < 0) {
          uVar3 = (uint)(*(int *)(lVar10 + (ulong)-uVar3 * 4) == 0);
        }
        else {
          uVar3 = *(uint *)(lVar10 + (ulong)(uVar3 >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1;
        }
        puVar7 = (undefined *)((long)puVar7 * 0x13 + (ulong)uVar3);
        goto LAB_10bd81140;
      default:
        uVar6 = (ulong)*(uint *)(lVar9 + uVar6);
        break;
      case 4:
      case 5:
      case 6:
      case 8:
      case 10:
      case 0xc:
        uVar6 = *(ulong *)(lVar9 + uVar6);
        break;
      case 0xd:
      case 0xe:
        lVar5 = *(long *)(lVar9 + uVar6);
        func_0x00010bfde980();
        goto code_r0x00010bd8113c;
      case 0xf:
      case 0x10:
        puVar7 = (undefined *)((ulong)*(uint *)(lVar5 + 0x10) + (long)puVar7 * 0x13);
        lVar5 = *(long *)(lVar9 + uVar6);
        _objc_opt_class();
        func_0x00010bf6e760();
code_r0x00010bd8113c:
        puVar7 = (undefined *)(lVar5 + (long)puVar7 * 0x13);
        goto LAB_10bd81140;
      }
      puVar7 = (undefined *)(uVar6 + (long)puVar7 * 0x13);
LAB_10bd81140:
      lVar11 = lVar11 + 1;
    } while (lVar2 != lVar11);
    lVar2 = lVar8;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10bd811e0; end: 10bd81243; -[GPBMessage description] */

void FUN_10bd811e0(undefined8 param_1)

{
  undefined *puVar1;
  
  FUN_10bd83c3c(param_1,&PTR____CFConstantStringClassReference_11102fa58);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1);
  return;
}



/* Entry: 10bd81244; end: 10bd812eb;  */

void FUN_10bd81244(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  return;
}



/* Entry: 10bd812ec; end: 10bd81323;  */

void FUN_10bd812ec(long param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c3184c();
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + param_2;
  return;
}



/* Entry: 10bd81324; end: 10bd81377;  */

void FUN_10bd81324(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = param_2 << 1 ^ param_2 >> 0x1f;
  lVar3 = 4;
  if (uVar2 >> 0x1c != 0) {
    lVar3 = 5;
  }
  lVar1 = 3;
  if (0x1fffff < uVar2) {
    lVar1 = lVar3;
  }
  lVar3 = 2;
  if (0x3fff < uVar2) {
    lVar3 = lVar1;
  }
  lVar1 = 1;
  if (0x7f < uVar2) {
    lVar1 = lVar3;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + lVar1;
  return;
}



/* Entry: 10bd81378; end: 10bd813b3;  */

void FUN_10bd81378(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_2 << 1 ^ param_2 >> 0x3f;
  func_0x000107c3184c();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(ulong *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + uVar1;
  return;
}



/* Entry: 10bd813b4; end: 10bd813ff;  */

void FUN_10bd813b4(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 4;
  if (param_2 >> 0x1c != 0) {
    lVar2 = 5;
  }
  lVar1 = 3;
  if (0x1fffff < param_2) {
    lVar1 = lVar2;
  }
  lVar2 = 2;
  if (0x3fff < param_2) {
    lVar2 = lVar1;
  }
  lVar1 = 1;
  if (0x7f < param_2) {
    lVar1 = lVar2;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + lVar1;
  return;
}



/* Entry: 10bd81400; end: 10bd81437;  */

void FUN_10bd81400(long param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c3184c();
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + param_2;
  return;
}



/* Entry: 10bd81438; end: 10bd8148f;  */

void FUN_10bd81438(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 4;
  if (param_2 >> 0x1c != 0) {
    lVar1 = 5;
  }
  lVar2 = 3;
  if (0x1fffff < param_2) {
    lVar2 = lVar1;
  }
  lVar1 = 2;
  if (0x3fff < param_2) {
    lVar1 = lVar2;
  }
  lVar2 = 1;
  if (0x7f < param_2) {
    lVar2 = lVar1;
  }
  lVar1 = 10;
  if ((param_2 & 0x80000000) == 0) {
    lVar1 = lVar2;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + lVar1;
  return;
}



/* Entry: 10bd81490; end: 10bd81513;  */

void FUN_10bd81490(long param_1,long param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  if (param_3 != 0) {
    _objc_opt_class();
    _NSStringFromSelector();
    func_0x00010c11f020(puVar1);
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(uint *)(lVar4 + 0x14);
  if ((int)uVar2 < 0) {
    lVar3 = *(long *)(param_2 + 0x40);
    if (*(int *)(lVar3 + (ulong)-uVar2 * 4) != *(int *)(lVar4 + 0x10)) {
      return;
    }
  }
  else {
    lVar3 = *(long *)(param_2 + 0x40);
    if ((*(uint *)(lVar3 + (ulong)(uVar2 >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
      return;
    }
  }
  if (((*(ushort *)(lVar4 + 0x1c) & 0xf02) != 0) || (*(byte *)(lVar4 + 0x1e) - 0xd < 4)) {
    uVar2 = *(uint *)(lVar4 + 0x18);
    _objc_release(*(undefined8 *)(lVar3 + (ulong)uVar2));
    *(undefined8 *)(lVar3 + (ulong)uVar2) = 0;
    uVar2 = *(uint *)(lVar4 + 0x14);
    lVar3 = *(long *)(param_2 + 0x40);
  }
  if ((int)uVar2 < 0) {
    *(undefined4 *)(lVar3 + (ulong)-uVar2 * 4) = 0;
  }
  else {
    *(uint *)(lVar3 + (ulong)(uVar2 >> 5) * 4) =
         *(uint *)(lVar3 + (ulong)(uVar2 >> 5) * 4) & (1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
  }
  return;
}



/* Entry: 10bd81514; end: 10bd8156f; +[GPBMessage resolveClassMethod:] */

void FUN_10bd81514(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010bd81b18(param_1,param_3);
  if ((uVar1 & 1) == 0) {
    puStack_28 = PTR_PTR_11270e9d0;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_resolveClassMethod__11254dac0,param_3);
  }
  return;
}



/* Entry: 10bd81570; end: 10bd81577; +[GPBMessage supportsSecureCoding] */

undefined8 FUN_10bd81570(void)

{
  return 1;
}



/* Entry: 10bd81578; end: 10bd8157f; +[GPBMessage accessInstanceVariablesDirectly] */

undefined8 FUN_10bd81578(void)

{
  return 0;
}



/* Entry: 10bd81580; end: 10bd8194f;  */

void FUN_10bd81580(code *param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5,
                  undefined8 param_6)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined *unaff_x22;
  undefined4 uVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(param_1 + 8);
  switch(*(undefined1 *)(lVar3 + 0x2c)) {
  case 0:
    func_0x000107c3aafc(param_3 + 8);
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
    func_0x00010bff91e0();
    break;
  case 1:
    func_0x000107c3ab04(param_3 + 8,4);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
    goto code_r0x00010bd817a0;
  case 2:
    func_0x000107c3ab04(param_3 + 8,4);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
    goto code_r0x00010bd817f0;
  case 3:
    func_0x000107c3ab04(param_3 + 8,4);
    uVar4 = *(undefined4 *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
    func_0x00010c0138c0(uVar4);
    break;
  case 4:
    func_0x000107c3ab04(param_3 + 8,8);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
    goto code_r0x00010bd8169c;
  case 5:
    func_0x000107c3ab04(param_3 + 8,8);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
    goto code_r0x00010bd818a4;
  case 6:
    func_0x000107c3ab04(param_3 + 8,8);
    uVar5 = *(undefined8 *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
    func_0x00010c00e360(uVar5);
    break;
  case 7:
    func_0x000107c3aafc(param_3 + 8);
    goto code_r0x00010bd817e0;
  case 8:
    func_0x000107c3aafc(param_3 + 8);
    goto code_r0x00010bd81894;
  case 9:
    func_0x000107c3aafc(param_3 + 8);
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
    goto code_r0x00010bd817f0;
  case 10:
    func_0x000107c3aafc(param_3 + 8);
code_r0x00010bd81894:
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
code_r0x00010bd818a4:
    func_0x00010c027c20();
    break;
  case 0xb:
    func_0x000107c3aafc(param_3 + 8);
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
code_r0x00010bd817a0:
    func_0x00010c0594e0();
    break;
  case 0xc:
    func_0x000107c3aafc(param_3 + 8);
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
code_r0x00010bd8169c:
    func_0x00010c059520();
    break;
  case 0xd:
    unaff_x22 = (undefined *)(param_3 + 8);
    func_0x000107c31834();
    break;
  case 0xe:
    unaff_x22 = (undefined *)(param_3 + 8);
    func_0x000107c31830();
    break;
  case 0xf:
    if ((*(byte *)(lVar3 + 0x2d) >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0cabf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_6,PTR_s_mergeFromCodedInputStream_extens_112610510,param_3,param_4);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1216f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3,PTR_s_readMessage_extensionRegistry__112625fd8,param_6,param_4);
    return;
  case 0x10:
                    /* WARNING: Could not recover jumptable at 0x00010c121570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3,PTR_s_readGroup_message_extensionRegis_112625f78,
               *(undefined4 *)(lVar3 + 0x28),param_6);
    return;
  case 0x11:
    iVar1 = (int)param_3 + 8;
    func_0x000107c3aafc();
    func_0x00010bf979c0();
    pcVar2 = param_1;
    func_0x00010c06ea60();
    if ((int)pcVar2 != 0) {
      func_0x00010bf97a40();
      (*param_1)();
      if (iVar1 == 0) {
        FUN_10bd80468(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0cad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)();
        return;
      }
    }
code_r0x00010bd817e0:
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
code_r0x00010bd817f0:
    func_0x00010c01e520();
    break;
  default:
    goto LAB_10bd818b0;
  }
  if (unaff_x22 == (undefined *)0x0) {
    return;
  }
LAB_10bd818b0:
  if (param_5 == 0) {
    func_0x00010c1992e0(param_2);
  }
  else {
    func_0x00010bef8140();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x22);
  return;
}



/* Entry: 10bd81950; end: 10bd819af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd81950(long param_1,long param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (lVar6 != 0) {
    func_0x00010010cd00(param_2,lVar6,*(undefined4 *)(lVar11 + 0x14),*(undefined4 *)(lVar11 + 0x10))
    ;
  }
  lVar6 = *(long *)(param_2 + 0x40);
  *(int *)(lVar6 + (ulong)*(uint *)(lVar11 + 0x18)) = param_3;
  if (param_3 == 0) {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x1c) & 0x20) != 0) {
        uVar8 = 0;
      }
      goto code_r0x0001008aa268;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(ushort *)(lVar11 + 0x1c) >> 5 & 1) != 0) {
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      goto code_r0x000100109ff0;
    }
  }
  else {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
code_r0x0001008aa268:
      *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      goto code_r0x000100109ff0;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
  }
  *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
code_r0x000100109ff0:
  do {
    lVar6 = *(long *)(param_2 + 0x20);
    if (lVar6 == 0) {
      return;
    }
    lVar11 = *(long *)(param_2 + 0x28);
    if (lVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1992f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar6,PTR_s_setExtension_value__112643ed8,*(undefined8 *)(param_2 + 0x30));
      return;
    }
    func_0x000107c61174();
    lVar10 = *(long *)(lVar11 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x000100109e38;
    if (*(long *)(lVar11 + 0x10) != 0) {
      func_0x00010010cd00(lVar6,*(long *)(lVar11 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                          *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar11 = param_2, func_0x000107c4adac(), lVar11 != 0)) {
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar11 = *(long *)(lVar6 + 0x40);
      if ((int)uVar7 < 0) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto code_r0x000100109f58;
      }
      uVar9 = (ulong)(uVar7 >> 5);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (param_2 == 0) goto code_r0x000100109f84;
      *(uint *)(lVar11 + uVar9 * 4) = *(uint *)(lVar11 + uVar9 * 4) | uVar7;
    }
    else {
      func_0x000107c61170(param_2);
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar11 = *(long *)(lVar6 + 0x40);
      if ((int)uVar7 < 0) {
        param_2 = 0;
        uVar8 = 0;
code_r0x000100109f58:
        *(undefined4 *)(lVar11 + (ulong)-uVar7 * 4) = uVar8;
      }
      else {
        uVar9 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
code_r0x000100109f84:
        param_2 = 0;
        *(uint *)(lVar11 + uVar9 * 4) = *(uint *)(lVar11 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      }
    }
    uVar9 = *(ulong *)(lVar11 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar11 + (ulong)*(uint *)(lVar10 + 0x18)) = param_2;
    param_2 = lVar6;
  } while (uVar9 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar9 + 0x20) == lVar6)) {
    func_0x00010029a5f8(uVar9);
  }
  goto code_r0x000100109fc4;
code_r0x000100109e38:
  uVar9 = *(ulong *)(*(long *)(lVar6 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar6 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_2;
  param_2 = lVar6;
  if (uVar9 == 0) goto code_r0x000100109ff0;
  lVar10 = lVar11;
  func_0x000107c433d8();
  uVar5 = uVar9;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
code_r0x000100109f38:
      if (*(long *)(uVar9 + 8) == lVar6) {
        *(undefined8 *)(uVar9 + 8) = 0;
      }
      goto code_r0x000100109fc4;
    }
    puVar4 = PTR_PTR_1126e3228;
    func_0x000107c61158(PTR_PTR_1126e3228);
    func_0x000107c6115c(uVar9,puVar4);
    iVar3 = _DAT_112796b30;
  }
  else {
    func_0x000107c4c354();
    if (((int)lVar11 != 0xe) || (3 < bVar1 - 0xd)) goto code_r0x000100109f38;
    puVar4 = PTR_PTR_1126e3230;
    func_0x000107c61158(PTR_PTR_1126e3230);
    func_0x000107c6115c(uVar9,puVar4);
    iVar3 = _DAT_112796db0;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar9 + (long)iVar3) == lVar6)) {
    *(undefined8 *)(uVar9 + (long)iVar3) = 0;
  }
code_r0x000100109fc4:
  func_0x000107c61170(uVar9);
  param_2 = lVar6;
  goto code_r0x000100109ff0;
}



/* Entry: 10bd819b0; end: 10bd819e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd819b0(long param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_1 + 0x20);
  _objc_retain();
  do {
    lVar6 = param_2;
    lVar9 = *(long *)(lVar11 + 8);
    bVar1 = *(byte *)(lVar9 + 0x1e);
    uVar2 = *(ushort *)(lVar9 + 0x1c);
    if ((uVar2 & 0xf02) == 0) {
      if (*(long *)(lVar11 + 0x10) != 0) {
        func_0x00010010cd00(lVar6,*(long *)(lVar11 + 0x10),*(undefined4 *)(lVar9 + 0x14),
                            *(undefined4 *)(lVar9 + 0x10));
        uVar2 = *(ushort *)(lVar9 + 0x1c);
      }
      if (((uVar2 >> 5 & 1) == 0) || (lVar11 = param_3, func_0x000107c4adac(), lVar11 != 0)) {
        uVar7 = *(uint *)(lVar9 + 0x14);
        lVar11 = *(long *)(lVar6 + 0x40);
        if ((int)uVar7 < 0) {
          uVar8 = 0;
          if (param_3 != 0) {
            uVar8 = *(undefined4 *)(lVar9 + 0x10);
          }
          goto code_r0x000100109f58;
        }
        uVar10 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
        if (param_3 == 0) goto code_r0x000100109f84;
        *(uint *)(lVar11 + uVar10 * 4) = *(uint *)(lVar11 + uVar10 * 4) | uVar7;
      }
      else {
        func_0x000107c61170(param_3);
        uVar7 = *(uint *)(lVar9 + 0x14);
        lVar11 = *(long *)(lVar6 + 0x40);
        if ((int)uVar7 < 0) {
          param_3 = 0;
          uVar8 = 0;
code_r0x000100109f58:
          *(undefined4 *)(lVar11 + (ulong)-uVar7 * 4) = uVar8;
        }
        else {
          uVar10 = (ulong)(uVar7 >> 5);
          uVar7 = 1 << (ulong)(uVar7 & 0x1f);
code_r0x000100109f84:
          param_3 = 0;
          *(uint *)(lVar11 + uVar10 * 4) = *(uint *)(lVar11 + uVar10 * 4) & (uVar7 ^ 0xffffffff);
        }
      }
      uVar10 = *(ulong *)(lVar11 + (ulong)*(uint *)(lVar9 + 0x18));
      *(long *)(lVar11 + (ulong)*(uint *)(lVar9 + 0x18)) = param_3;
      if (uVar10 != 0) {
        if ((bVar1 - 0xf < 2) && (*(long *)(uVar10 + 0x20) == lVar6)) {
          func_0x00010029a5f8(uVar10);
        }
        goto code_r0x000100109fc4;
      }
    }
    else {
      uVar10 = *(ulong *)(*(long *)(lVar6 + 0x40) + (ulong)*(uint *)(lVar9 + 0x18));
      *(long *)(*(long *)(lVar6 + 0x40) + (ulong)*(uint *)(lVar9 + 0x18)) = param_3;
      if (uVar10 != 0) {
        lVar9 = lVar11;
        func_0x000107c433d8();
        uVar5 = uVar10;
        if ((int)lVar9 == 1) {
          if (3 < bVar1 - 0xd) {
code_r0x000100109f38:
            if (*(long *)(uVar10 + 8) == lVar6) {
              *(undefined8 *)(uVar10 + 8) = 0;
            }
            goto code_r0x000100109fc4;
          }
          puVar4 = PTR_PTR_1126e3228;
          func_0x000107c61158(PTR_PTR_1126e3228);
          func_0x000107c6115c(uVar10,puVar4);
          iVar3 = _DAT_112796b30;
        }
        else {
          func_0x000107c4c354();
          if (((int)lVar11 != 0xe) || (3 < bVar1 - 0xd)) goto code_r0x000100109f38;
          puVar4 = PTR_PTR_1126e3230;
          func_0x000107c61158(PTR_PTR_1126e3230);
          func_0x000107c6115c(uVar10,puVar4);
          iVar3 = _DAT_112796db0;
        }
        if (((uVar5 & 1) != 0) && (*(long *)(uVar10 + (long)iVar3) == lVar6)) {
          *(undefined8 *)(uVar10 + (long)iVar3) = 0;
        }
code_r0x000100109fc4:
        func_0x000107c61170(uVar10);
      }
    }
    param_2 = *(long *)(lVar6 + 0x20);
    if (param_2 == 0) {
      return;
    }
    lVar11 = *(long *)(lVar6 + 0x28);
    if (lVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1992f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s_setExtension_value__112643ed8,*(undefined8 *)(lVar6 + 0x30));
      return;
    }
    func_0x000107c61174();
    param_3 = lVar6;
  } while( true );
}



/* Entry: 10bd819e4; end: 10bd81a5b;  */

ulong FUN_10bd819e4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar3 = *(long *)(uVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_2 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto code_r0x0001005b00d0;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
code_r0x0001005b00d0:
      func_0x000107c4163c(uVar2);
      return uVar2;
    }
  }
  return (ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 10bd81a5c; end: 10bd81a77;  */

bool FUN_10bd81a5c(int param_1)

{
  _strcmp();
  return param_1 == 0;
}



/* Entry: 10bd81a78; end: 10bd81ab7;  */

int FUN_10bd81a78(char *param_1)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  
  cVar2 = *param_1;
  if (cVar2 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    uVar3 = 1;
    do {
      uVar1 = (uVar1 + (int)cVar2) * 0x401;
      uVar1 = uVar1 ^ uVar1 >> 6;
      cVar2 = param_1[uVar3];
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (cVar2 != '\0');
    uVar1 = uVar1 * 9;
  }
  return (uVar1 ^ uVar1 >> 0xb) * 0x8001;
}



/* Entry: 10bd81ab8; end: 10bd81ac3; +[GPBRootObject extensionRegistry] */

undefined8 FUN_10bd81ab8(void)

{
  return uRam00000001137fe898;
}



/* Entry: 10bd81ac4; end: 10bd81bef; +[GPBRootObject globallyRegisterExtension:] */

void FUN_10bd81ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x00010c23cfe0(param_3);
  _os_unfair_lock_lock(0x1137fe888);
  _CFDictionarySetValue(uRam00000001137fe890,uVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(0x1137fe888);
  return;
}



/* Entry: 10bd81bf0; end: 10bd81d2b;  */

undefined8 FUN_10bd81bf0(long param_1,char *param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  long lVar4;
  long extraout_x12;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _sel_getName();
  cVar3 = *param_2;
  if (cVar3 == '_') {
LAB_10bd81c30:
    uVar5 = 0;
  }
  else {
    lVar7 = 1;
    while (cVar3 != '\0') {
      if (cVar3 == ':') goto LAB_10bd81c30;
      pcVar1 = param_2 + lVar7;
      lVar7 = lVar7 + 1;
      cVar3 = *pcVar1;
    }
    _class_getName();
    lVar4 = param_1;
    _strlen();
    (*(code *)PTR____chkstk_darwin_11034bd40)(lVar4 + lVar7);
    puVar6 = auStack_50 + -extraout_x12;
    _memcpy(puVar6,param_1,lVar4);
    puVar2 = puVar6 + lVar4;
    *puVar2 = 0x5f;
    _memcpy(puVar2 + 1,param_2,lVar7 + -1);
    puVar2[lVar7] = 0;
    param_2 = (char *)0x1137fe888;
    _os_unfair_lock_lock(0x1137fe888);
    uVar5 = uRam00000001137fe890;
    _CFDictionaryGetValue(uRam00000001137fe890,puVar6);
    _os_unfair_lock_unlock();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    return *(undefined8 *)(param_2 + 0x20);
  }
  return uVar5;
}



/* Entry: 10bd81d2c; end: 10bd81d33;  */

undefined8 FUN_10bd81d2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10bd81d34; end: 10bd81d8f; +[GPBRootObject resolveClassMethod:] */

void FUN_10bd81d34(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010bd81b18(param_1,param_3);
  if ((uVar1 & 1) == 0) {
    puStack_28 = PTR_PTR_11270e9d8;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_resolveClassMethod__11254dac0,param_3);
  }
  return;
}



/* Entry: 10bd81d90; end: 10bd81dd7; -[GPBUnknownField initWithNumber:] */

void FUN_10bd81d90(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e9e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10bd81dd8; end: 10bd81e3f; -[GPBUnknownField dealloc] */

void FUN_10bd81dd8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  puStack_28 = PTR_PTR_11270e9e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd81e40; end: 10bd81fdf; -[GPBUnknownField copyWithZone:] */

/* WARNING: Possible PIC construction at 0x00010bd82048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd82070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd82098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd820c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd8209c) */
/* WARNING: Removing unreachable block (ram,0x00010bd82074) */
/* WARNING: Removing unreachable block (ram,0x00010bd8204c) */
/* WARNING: Removing unreachable block (ram,0x00010bd820c4) */

undefined * FUN_10bd81e40(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar7 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR_PTR_1126e3248;
  func_0x00010bf00e40();
  func_0x00010c0304c0();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf52240();
  *(undefined8 *)(puVar6 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf52240();
  *(undefined8 *)(puVar6 + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0d3ca0();
  *(undefined8 *)(puVar6 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf52240();
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf00e40();
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x30));
    func_0x00010bffc4a0();
    *(undefined **)(puVar6 + 0x30) = puVar3;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lVar8 = *(long *)(param_1 + 0x30);
    lVar2 = lVar8;
    func_0x00010bf52a60();
    param_3 = puVar7;
    if (lVar2 != 0) {
      lVar9 = *plStack_110;
      do {
        lVar10 = 0;
        do {
          if (*plStack_110 != lVar9) {
            _objc_enumerationMutation(lVar8);
          }
          uVar1 = *(undefined8 *)(lStack_118 + lVar10 * 8);
          func_0x00010bf52240(uVar1);
          func_0x00010befa120(*(undefined8 *)(puVar6 + 0x30));
          _objc_release(uVar1);
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar8;
        param_3 = &uStack_120;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
  }
  puVar4 = (undefined1 *)0x0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar6;
  }
  ___stack_chk_fail();
  if ((undefined8 *)puVar4 == param_3) {
    return (undefined *)0x1;
  }
  puVar6 = PTR_PTR_1126e3248;
  _objc_opt_class(PTR_PTR_1126e3248);
  puVar5 = (undefined1 *)param_3;
  _objc_opt_isKindOfClass(param_3,puVar6);
  if ((((ulong)puVar5 & 1) == 0) || (*(int *)(puVar4 + 8) != *(int *)((long)param_3 + 8))) {
    return (undefined *)0x0;
  }
  lVar2 = *(long *)(puVar4 + 0x10);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = *(long *)((long)param_3 + 0x10);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      lVar2 = *(long *)(puVar4 + 0x18);
      func_0x00010bf529e0();
      if (lVar2 == 0) {
        lVar2 = *(long *)((long)param_3 + 0x18);
        func_0x00010bf529e0();
        if (lVar2 == 0) {
          lVar2 = *(long *)(puVar4 + 0x20);
          func_0x00010bf529e0();
          if (lVar2 == 0) {
            lVar2 = *(long *)((long)param_3 + 0x20);
            func_0x00010bf529e0();
            if (lVar2 == 0) {
              lVar2 = *(long *)(puVar4 + 0x28);
              func_0x00010bf529e0();
              if (lVar2 == 0) {
                lVar2 = *(long *)((long)param_3 + 0x28);
                func_0x00010bf529e0();
                if (lVar2 == 0) {
                  lVar2 = *(long *)(puVar4 + 0x30);
                  func_0x00010bf529e0();
                  if (lVar2 == 0) {
                    lVar2 = *(long *)((long)param_3 + 0x30);
                    func_0x00010bf529e0();
                    if (lVar2 == 0) {
                      return (undefined *)0x1;
                    }
                  }
                  puVar6 = *(undefined **)(puVar4 + 0x30);
                  uVar1 = *(undefined8 *)((long)param_3 + 0x30);
                  goto code_r0x00010c071ae0;
                }
              }
              puVar6 = *(undefined **)(puVar4 + 0x28);
              uVar1 = *(undefined8 *)((long)param_3 + 0x28);
              goto code_r0x00010c071ae0;
            }
          }
          puVar6 = *(undefined **)(puVar4 + 0x20);
          uVar1 = *(undefined8 *)((long)param_3 + 0x20);
          goto code_r0x00010c071ae0;
        }
      }
      puVar6 = *(undefined **)(puVar4 + 0x18);
      uVar1 = *(undefined8 *)((long)param_3 + 0x18);
      goto code_r0x00010c071ae0;
    }
  }
  puVar6 = *(undefined **)(puVar4 + 0x10);
  uVar1 = *(undefined8 *)((long)param_3 + 0x10);
code_r0x00010c071ae0:
                    /* WARNING: Could not recover jumptable at 0x00010c071af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar6,PTR_s_isEqual__1125fa0c8,uVar1);
  return puVar6;
}



/* Entry: 10bd81fe0; end: 10bd8210b; -[GPBUnknownField isEqual:] */

/* WARNING: Possible PIC construction at 0x00010bd82048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd82070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd82098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd820c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd8209c) */
/* WARNING: Removing unreachable block (ram,0x00010bd82074) */
/* WARNING: Removing unreachable block (ram,0x00010bd8204c) */
/* WARNING: Removing unreachable block (ram,0x00010bd820c4) */

undefined8 FUN_10bd81fe0(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == param_3) {
    return 1;
  }
  puVar1 = PTR_PTR_1126e3248;
  _objc_opt_class(PTR_PTR_1126e3248);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if (((uVar2 & 1) == 0) || (*(int *)(param_1 + 8) != *(int *)(param_3 + 8))) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_3 + 0x10);
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + 0x18);
      func_0x00010bf529e0();
      if (lVar3 == 0) {
        lVar3 = *(long *)(param_3 + 0x18);
        func_0x00010bf529e0();
        if (lVar3 == 0) {
          lVar3 = *(long *)(param_1 + 0x20);
          func_0x00010bf529e0();
          if (lVar3 == 0) {
            lVar3 = *(long *)(param_3 + 0x20);
            func_0x00010bf529e0();
            if (lVar3 == 0) {
              lVar3 = *(long *)(param_1 + 0x28);
              func_0x00010bf529e0();
              if (lVar3 == 0) {
                lVar3 = *(long *)(param_3 + 0x28);
                func_0x00010bf529e0();
                if (lVar3 == 0) {
                  lVar3 = *(long *)(param_1 + 0x30);
                  func_0x00010bf529e0();
                  if (lVar3 == 0) {
                    lVar3 = *(long *)(param_3 + 0x30);
                    func_0x00010bf529e0();
                    if (lVar3 == 0) {
                      return 1;
                    }
                  }
                  uVar4 = *(undefined8 *)(param_1 + 0x30);
                  uVar5 = *(undefined8 *)(param_3 + 0x30);
                  goto code_r0x00010c071ae0;
                }
              }
              uVar4 = *(undefined8 *)(param_1 + 0x28);
              uVar5 = *(undefined8 *)(param_3 + 0x28);
              goto code_r0x00010c071ae0;
            }
          }
          uVar4 = *(undefined8 *)(param_1 + 0x20);
          uVar5 = *(undefined8 *)(param_3 + 0x20);
          goto code_r0x00010c071ae0;
        }
      }
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      goto code_r0x00010c071ae0;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_3 + 0x10);
code_r0x00010c071ae0:
                    /* WARNING: Could not recover jumptable at 0x00010c071af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_isEqual__1125fa0c8,uVar5);
  return uVar4;
}



/* Entry: 10bd8210c; end: 10bd8217f; -[GPBUnknownField hash] */

long FUN_10bd8210c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bfde980(lVar1);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bfde980(lVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bfde980(lVar3);
  lVar4 = *(long *)(param_1 + 0x28);
  func_0x00010bfde980(lVar4);
  lVar5 = *(long *)(param_1 + 0x30);
  func_0x00010bfde980(lVar5);
  return lVar5 + (lVar4 + (lVar3 + ((lVar2 - lVar1) + lVar1 * 0x20) * 0x1f) * 0x1f) * 0x1f +
         0x1b4d89f;
}



/* Entry: 10bd82180; end: 10bd8223f; -[GPBUnknownField writeToOutput:] */

void FUN_10bd82180(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c2be680(param_3);
  }
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c2bdd20(param_3);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c2bdd80(param_3);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c2bd9a0(param_3);
  }
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2be6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3,PTR_s_writeUnknownGroupArray_values__11268d3e0,*(undefined4 *)(param_1 + 8),
               *(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



/* Entry: 10bd82240; end: 10bd8251b; -[GPBUnknownField serializedSize] */

long FUN_10bd82240(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 *puStack_198;
  uint uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_198 = &uStack_188;
  uStack_188 = 0;
  uStack_178 = 0x2020000000;
  uStack_170 = 0;
  uVar2 = *(uint *)(param_1 + 8);
  puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_10bd8251c;
  puStack_1a0 = &UNK_110da00a0;
  uStack_190 = uVar2;
  puStack_180 = puStack_198;
  func_0x00010bf980c0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_1b8);
  func_0x00010bf980c0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf980c0(*(undefined8 *)(param_1 + 0x20));
  lVar9 = *(long *)(param_1 + 0x28);
  lVar8 = lVar9;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(lVar9);
      }
      uVar4 = (ulong)uVar2;
      func_0x000107c3185c((ulong)uVar2,*(undefined8 *)(lVar10 * 8));
      puStack_180[3] = puStack_180[3] + uVar4;
      lVar10 = lVar10 + 1;
    } while (lVar8 != lVar10);
    lVar8 = lVar9;
    func_0x00010bf52a60();
  }
  lVar9 = *(long *)(param_1 + 0x30);
  lVar7 = lVar9;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  if (lVar7 != 0) {
    uVar3 = uVar2 << 3;
    lVar10 = 8;
    if ((uVar2 >> 0x19 & 0xf) != 0) {
      lVar10 = 10;
    }
    lVar1 = 2;
    if (0x7f < uVar3) {
      lVar1 = 4;
    }
    lVar5 = 6;
    if (0x1fffff < uVar3) {
      lVar5 = lVar10;
    }
    if (0x3fff < uVar3) {
      lVar1 = lVar5;
    }
    do {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar9);
        }
        lVar5 = *(long *)(lVar10 * 8);
        func_0x00010c15ebe0();
        puStack_180[3] = lVar5 + lVar1 + puStack_180[3];
        lVar10 = lVar10 + 1;
      } while (lVar7 != lVar10);
      lVar7 = lVar9;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  lVar8 = puStack_180[3];
  puVar6 = &uStack_188;
  __Block_object_dispose(puVar6,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar8;
  }
  ___stack_chk_fail();
  lVar7 = 8;
  __Block_object_dispose(&uStack_188);
  __Unwind_Resume();
  uVar2 = *(uint *)(puVar6 + 5) << 3;
  lVar8 = 4;
  if ((*(uint *)(puVar6 + 5) & 0x1fffffff) >> 0x19 != 0) {
    lVar8 = 5;
  }
  lVar9 = 3;
  if (0x1fffff < uVar2) {
    lVar9 = lVar8;
  }
  lVar8 = 2;
  if (0x3fff < uVar2) {
    lVar8 = lVar9;
  }
  lVar9 = 1;
  if (0x7f < uVar2) {
    lVar9 = lVar8;
  }
  func_0x000107c3184c();
  *(long *)(*(long *)(puVar6[4] + 8) + 0x18) =
       lVar7 + lVar9 + *(long *)(*(long *)(puVar6[4] + 8) + 0x18);
  return lVar7;
}



/* Entry: 10bd8251c; end: 10bd82593;  */

void FUN_10bd8251c(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(param_1 + 0x28) << 3;
  lVar3 = 4;
  if ((*(uint *)(param_1 + 0x28) & 0x1fffffff) >> 0x19 != 0) {
    lVar3 = 5;
  }
  lVar1 = 3;
  if (0x1fffff < uVar2) {
    lVar1 = lVar3;
  }
  lVar3 = 2;
  if (0x3fff < uVar2) {
    lVar3 = lVar1;
  }
  lVar1 = 1;
  if (0x7f < uVar2) {
    lVar1 = lVar3;
  }
  func_0x000107c3184c();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar3 + 0x18) = param_2 + lVar1 + *(long *)(lVar3 + 0x18);
  return;
}



/* Entry: 10bd82594; end: 10bd8263b;  */

void FUN_10bd82594(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(param_1 + 0x28) << 3;
  lVar3 = 8;
  if ((*(uint *)(param_1 + 0x28) & 0x1fffffff) >> 0x19 != 0) {
    lVar3 = 9;
  }
  lVar1 = 7;
  if (0x1fffff < uVar2) {
    lVar1 = lVar3;
  }
  lVar3 = 6;
  if (0x3fff < uVar2) {
    lVar3 = lVar1;
  }
  lVar1 = 5;
  if (0x7f < uVar2) {
    lVar1 = lVar3;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + lVar1;
  return;
}



/* Entry: 10bd8263c; end: 10bd82733; -[GPBUnknownField writeAsMessageSetExtensionToOutput:] */

undefined * FUN_10bd8263c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar4 = *(long *)(param_1 + 0x28);
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010c2be200(param_3);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  puVar3 = (undefined *)0x0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar3;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(puVar3 + 0x28);
  lVar4 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = (undefined *)0x0;
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar7);
        }
        uVar2 = (ulong)*(uint *)(puVar3 + 8);
        func_0x00010bd608c0();
        puVar5 = puVar5 + uVar2;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = lVar7;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  lVar1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  func_0x00010c25d9e0();
  func_0x00010bf980c0(*(undefined8 *)(lVar1 + 0x10));
  func_0x00010bf980c0(*(undefined8 *)(lVar1 + 0x18));
  func_0x00010bf980c0(*(undefined8 *)(lVar1 + 0x20));
  lVar8 = *(long *)(lVar1 + 0x28);
  lVar4 = lVar8;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar8);
      }
      func_0x00010bf06ba0(puVar3);
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = lVar8;
    func_0x00010bf52a60();
  }
  lVar6 = *(long *)(lVar1 + 0x30);
  lVar1 = lVar6;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar6);
      }
      func_0x00010bf06ba0(puVar3);
      lVar8 = lVar8 + 1;
    } while (lVar1 != lVar8);
    lVar1 = lVar6;
    func_0x00010bf52a60();
  }
  puVar5 = puVar3;
  func_0x00010bf070e0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar3 = *(undefined **)(puVar5 + 0x20);
  func_0x00010bf06ba0(puVar3);
  return puVar3;
}



/* Entry: 10bd82734; end: 10bd82837; -[GPBUnknownField serializedSizeAsMessageSetExtension] */

undefined * FUN_10bd82734(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar4 = *(long *)(param_1 + 0x28);
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = (undefined *)0x0;
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar4);
        }
        uVar2 = (ulong)*(uint *)(param_1 + 8);
        func_0x00010bd608c0();
        puVar5 = puVar5 + uVar2;
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar4;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  lVar1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar5 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_opt_class();
    func_0x00010c25d9e0();
    func_0x00010bf980c0(*(undefined8 *)(lVar1 + 0x10));
    func_0x00010bf980c0(*(undefined8 *)(lVar1 + 0x18));
    func_0x00010bf980c0(*(undefined8 *)(lVar1 + 0x20));
    lVar6 = *(long *)(lVar1 + 0x28);
    lVar4 = lVar6;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        func_0x00010bf06ba0(puVar5);
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = lVar6;
      func_0x00010bf52a60();
    }
    lVar7 = *(long *)(lVar1 + 0x30);
    lVar1 = lVar7;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar7);
        }
        func_0x00010bf06ba0(puVar5);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar7;
      func_0x00010bf52a60();
    }
    puVar3 = puVar5;
    func_0x00010bf070e0();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      return puVar5;
    }
    ___stack_chk_fail();
    puVar5 = *(undefined **)(puVar3 + 0x20);
    func_0x00010bf06ba0(puVar5);
    return puVar5;
  }
  return puVar5;
}



/* Entry: 10bd82838; end: 10bd82aa3; -[GPBUnknownField description] */

undefined * FUN_10bd82838(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  func_0x00010c25d9e0();
  func_0x00010bf980c0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010bf980c0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf980c0(*(undefined8 *)(param_1 + 0x20));
  lVar6 = *(long *)(param_1 + 0x28);
  lVar2 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      func_0x00010bf06ba0(puVar4);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar6;
    func_0x00010bf52a60();
  }
  lVar6 = *(long *)(param_1 + 0x30);
  lVar2 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      func_0x00010bf06ba0(puVar4);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar6;
    func_0x00010bf52a60();
  }
  puVar3 = puVar4;
  func_0x00010bf070e0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return puVar4;
  }
  ___stack_chk_fail();
  puVar4 = *(undefined **)(puVar3 + 0x20);
  func_0x00010bf06ba0(puVar4);
  return puVar4;
}



/* Entry: 10bd82aa4; end: 10bd82b27;  */

void FUN_10bd82aa4(long param_1,undefined8 param_2)

{
  func_0x00010bf06ba0(*(undefined8 *)(param_1 + 0x20),param_2,
                      &PTR____CFConstantStringClassReference_11102fb18);
  return;
}



/* Entry: 10bd82b28; end: 10bd82d3f; -[GPBUnknownField mergeFromField:] */

void FUN_10bd82b28(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_3;
  func_0x00010c297940();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      func_0x00010bf51e00();
      *(long *)(param_1 + 0x10) = lVar1;
    }
    else {
      func_0x00010befc860();
    }
  }
  lVar1 = param_3;
  func_0x00010bfb21a0();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x00010bf51e00();
      *(long *)(param_1 + 0x18) = lVar1;
    }
    else {
      func_0x00010befc860();
    }
  }
  lVar1 = param_3;
  func_0x00010bfb21c0();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00010bf51e00();
      *(long *)(param_1 + 0x20) = lVar1;
    }
    else {
      func_0x00010befc860();
    }
  }
  lVar1 = param_3;
  func_0x00010c08faa0();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      func_0x00010c0d3c80();
      *(long *)(param_1 + 0x28) = lVar1;
    }
    else {
      func_0x00010befa160();
    }
  }
  func_0x00010bfced60();
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc();
      func_0x00010bf529e0(param_3);
      func_0x00010bffc4a0();
      *(undefined **)(param_1 + 0x30) = puVar3;
    }
    lVar1 = param_3;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lVar6 * 8);
        func_0x00010bf51e00(uVar4);
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
        _objc_release(uVar4);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_3;
      func_0x00010bf52a60();
    }
  }
  lVar1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befc810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(lVar1 + 0x10),PTR_s_addValue__11259cba8);
    return;
  }
  puVar3 = PTR_PTR_1126baf88;
  _objc_alloc();
  func_0x00010c060580();
  *(undefined **)(lVar1 + 0x10) = puVar3;
  return;
}



/* Entry: 10bd82d40; end: 10bd82d9b; -[GPBUnknownField addVarint:] */

void FUN_10bd82d40(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befc810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x10),PTR_s_addValue__11259cba8);
    return;
  }
  puVar1 = PTR_PTR_1126baf88;
  _objc_alloc();
  func_0x00010c060580();
  *(undefined **)(param_1 + 0x10) = puVar1;
  return;
}



/* Entry: 10bd82d9c; end: 10bd82df7; -[GPBUnknownField addFixed32:] */

void FUN_10bd82d9c(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befc810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x18),PTR_s_addValue__11259cba8);
    return;
  }
  puVar1 = PTR_PTR_1126beb00;
  _objc_alloc();
  func_0x00010c060580();
  *(undefined **)(param_1 + 0x18) = puVar1;
  return;
}



/* Entry: 10bd82df8; end: 10bd82e53; -[GPBUnknownField addFixed64:] */

void FUN_10bd82df8(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befc810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x20),PTR_s_addValue__11259cba8);
    return;
  }
  puVar1 = PTR_PTR_1126baf88;
  _objc_alloc();
  func_0x00010c060580();
  *(undefined **)(param_1 + 0x20) = puVar1;
  return;
}



/* Entry: 10bd82e54; end: 10bd82eaf; -[GPBUnknownField addLengthDelimited:] */

void FUN_10bd82e54(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x28),PTR_s_addObject__11259c1f0);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010c0309c0();
  *(undefined **)(param_1 + 0x28) = puVar1;
  return;
}



/* Entry: 10bd82eb0; end: 10bd82f0b; -[GPBUnknownField addGroup:] */

void FUN_10bd82eb0(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x30),PTR_s_addObject__11259c1f0);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010c0309c0();
  *(undefined **)(param_1 + 0x30) = puVar1;
  return;
}



/* Entry: 10bd82f0c; end: 10bd82f13; -[GPBUnknownField number] */

undefined4 FUN_10bd82f0c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10bd82f14; end: 10bd82f1b; -[GPBUnknownField varintList] */

undefined8 FUN_10bd82f14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bd82f1c; end: 10bd82f23; -[GPBUnknownField fixed32List] */

undefined8 FUN_10bd82f1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bd82f24; end: 10bd82f2b; -[GPBUnknownField fixed64List] */

undefined8 FUN_10bd82f24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10bd82f2c; end: 10bd82f33; -[GPBUnknownField lengthDelimitedList] */

undefined8 FUN_10bd82f2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10bd82f34; end: 10bd82f3b; -[GPBUnknownField groupList] */

undefined8 FUN_10bd82f34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10bd82f3c; end: 10bd82fbf; -[GPBUnknownFieldSet copyWithZone:] */

undefined * FUN_10bd82f3c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e3240;
  func_0x00010bf00e40(PTR_PTR_1126e3240);
  func_0x00010bfee200();
  if (*(long *)(param_1 + 8) != 0) {
    _CFDictionaryApplyFunction(*(long *)(param_1 + 8),0x10bd82f88,puVar1);
  }
  return puVar1;
}



/* Entry: 10bd82fc0; end: 10bd8300b; -[GPBUnknownFieldSet dealloc] */

void FUN_10bd82fc0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    _CFRelease();
  }
  puStack_28 = PTR_PTR_11270e9e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd8300c; end: 10bd8307f; -[GPBUnknownFieldSet isEqual:] */

bool FUN_10bd8300c(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126e3240;
  _objc_opt_class(PTR_PTR_1126e3240);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = *(long *)(param_1 + 8);
    bVar1 = lVar4 == 0 && *(long *)(param_3 + 8) == 0;
    if (lVar4 != 0 && *(long *)(param_3 + 8) != 0) {
      _CFEqual(lVar4);
      bVar1 = (int)lVar4 != 0;
    }
  }
  return bVar1;
}



/* Entry: 10bd83080; end: 10bd83097; -[GPBUnknownFieldSet hash] */

void FUN_10bd83080(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFHash_11034a688)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e3240);
  return;
}



/* Entry: 10bd83098; end: 10bd830bf; -[GPBUnknownFieldSet hasField:] */

bool FUN_10bd83098(long param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  bVar1 = false;
  if (lVar2 != 0) {
    _CFDictionaryGetValue(lVar2,(long)param_3);
    bVar1 = lVar2 != 0;
  }
  return bVar1;
}



/* Entry: 10bd830c0; end: 10bd830d3; -[GPBUnknownFieldSet getField:] */

void FUN_10bd830c0(long param_1,undefined8 param_2,int param_3)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFDictionaryGetValue_11034a5e8)(*(long *)(param_1 + 8),(long)param_3);
    return;
  }
  return;
}



/* Entry: 10bd830d4; end: 10bd830e3; -[GPBUnknownFieldSet countOfFields] */

void FUN_10bd830d4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFDictionaryGetCount_11034a5d0)();
    return;
  }
  return;
}



/* Entry: 10bd830e4; end: 10bd8328b; -[GPBUnknownFieldSet sortedFields] */

undefined * FUN_10bd830e4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  long extraout_x8;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long extraout_x12;
  long lVar8;
  long alStack_50 [2];
  
  alStack_50[1] = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_50[1]) {
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
                    /* WARNING: Could not recover jumptable at 0x00010bf09f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (PTR__OBJC_CLASS___NSArray_1126ae530,PTR_s_array_1125a0168);
      return puVar2;
    }
  }
  else {
    _CFDictionaryGetCount();
    (*(code *)PTR____chkstk_darwin_11034bd40)((long)plVar1 << 3);
    lVar8 = (long)alStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    param_3 = (long *)(lVar8 - extraout_x12);
    _CFDictionaryGetKeysAndValues(*(undefined8 *)(param_1 + 8),lVar8,param_3);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    plVar5 = param_3 + (long)plVar1 * -2;
    if (plVar1 == (long *)0x0) {
      param_2 = (long *)0x0;
      _qsort_b(plVar5,0,0x10,&PTR___NSConcreteGlobalBlock_110da0120);
    }
    else {
      plVar4 = (long *)0x0;
      plVar6 = plVar5 + 1;
      do {
        lVar7 = param_3[(long)plVar4];
        plVar6[-1] = *(long *)(lVar8 + (long)plVar4 * 8);
        *plVar6 = lVar7;
        plVar4 = (long *)((long)plVar4 + 1);
        plVar6 = plVar6 + 2;
      } while (plVar1 != plVar4);
      param_2 = plVar1;
      _qsort_b(plVar5,plVar1,0x10,&PTR___NSConcreteGlobalBlock_110da0120);
      plVar5 = plVar5 + 1;
      plVar6 = param_3;
      do {
        *plVar6 = *plVar5;
        plVar1 = (long *)((long)plVar1 + -1);
        plVar5 = plVar5 + 2;
        plVar6 = plVar6 + 1;
      } while (plVar1 != (long *)0x0);
    }
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_50[1]) {
      return puVar2;
    }
  }
  ___stack_chk_fail();
  uVar3 = (uint)(*param_3 < *param_2);
  if (*param_2 < *param_3) {
    uVar3 = 0xffffffff;
  }
  return (undefined *)(ulong)uVar3;
}



/* Entry: 10bd8328c; end: 10bd832a3;  */

uint FUN_10bd8328c(undefined8 param_1,long *param_2,long *param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_3 < *param_2);
  if (*param_2 < *param_3) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 10bd832a4; end: 10bd83407; -[GPBUnknownFieldSet writeToCodedOutputStream:] */

ulong FUN_10bd832a4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long extraout_x8;
  long *plVar4;
  ulong *puVar5;
  ulong uVar6;
  long extraout_x12;
  ulong *puVar7;
  ulong *puVar8;
  ulong auStack_60 [2];
  
  auStack_60[1] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = *(long **)(param_1 + 8);
  uVar6 = 0;
  plVar2 = param_3;
  if (plVar1 != (long *)0x0) {
    _CFDictionaryGetCount();
    (*(code *)PTR____chkstk_darwin_11034bd40)((long)plVar1 << 3);
    plVar2 = (long *)((long)auStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar7 = (ulong *)((long)plVar2 - extraout_x12);
    param_2 = plVar2;
    _CFDictionaryGetKeysAndValues(*(undefined8 *)(param_1 + 8),plVar2,puVar7);
    if (plVar1 < (long *)0x2) {
      uVar6 = *puVar7;
      func_0x00010c2be560(uVar6);
      plVar2 = param_3;
    }
    else {
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      puVar8 = puVar7 + (long)plVar1 * -2;
      plVar4 = (long *)0x0;
      puVar5 = puVar8 + 1;
      do {
        uVar6 = puVar7[(long)plVar4];
        puVar5[-1] = plVar2[(long)plVar4];
        *puVar5 = uVar6;
        plVar4 = (long *)((long)plVar4 + 1);
        puVar5 = puVar5 + 2;
      } while (plVar1 != plVar4);
      param_2 = plVar1;
      _qsort_b(puVar8,plVar1,0x10,&PTR___NSConcreteGlobalBlock_110da0140);
      puVar7 = puVar8 + 1;
      do {
        uVar6 = *puVar7;
        plVar2 = param_3;
        func_0x00010c2be560(uVar6);
        plVar1 = (long *)((long)plVar1 - 1);
        puVar7 = puVar7 + 2;
      } while (plVar1 != (long *)0x0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != auStack_60[1]) {
    ___stack_chk_fail();
    uVar3 = (uint)(*plVar2 < *param_2);
    if (*param_2 < *plVar2) {
      uVar3 = 0xffffffff;
    }
    return (ulong)uVar3;
  }
  return uVar6;
}



/* Entry: 10bd83408; end: 10bd8341f;  */

uint FUN_10bd83408(undefined8 param_1,long *param_2,long *param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_3 < *param_2);
  if (*param_2 < *param_3) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


