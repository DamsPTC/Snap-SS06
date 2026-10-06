/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 005b6544; end: 005b664b; +[SCDiskUtility traverseDirectory:recurseSubfolders:propertiesForKeys:operation:completion:] */

void FUN_005b6544(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSURL_00ac2a90;
  if (param_3 != 0) {
    _objc_retain(param_7);
    _objc_retain(param_5);
    func_0x007834e0(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_00999f30;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_005b664c;
    puStack_60 = &UNK_00a039c0;
    _objc_retain(param_6);
    uStack_58 = param_6;
    func_0x00792e20(param_1,param_2,puVar1,param_4,param_5,&puStack_78,param_7);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(uStack_58);
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  return;
}



/* Entry: 005b664c; end: 005b6657;  */

void FUN_005b664c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005b6654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 005b6658; end: 005b667b; +[SCDiskUtility traverseDirectoryURL:recurseSubfolders:propertiesForKeys:operation:completion:] */

void FUN_005b6658(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077de50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (param_1,PTR_s__traverseDirectoryAndSubfolders__00aba488,param_3,param_5,param_6,
               param_7);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077de30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s__traverseDirectory_propertiesFor_00aba480,param_3,param_5,param_6,param_7
            );
  return;
}



/* Entry: 005b667c; end: 005b675b; +[SCDiskUtility _executeIterationOperation:fileUrl:propertiesForKeys:enumerator:] */

long FUN_005b667c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5
                 ,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_4;
    func_0x0078b9e0(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  if (param_3 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = param_3;
    (**(code **)(param_3 + 0x10))(param_3,param_4,uVar2,param_6);
  }
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 005b675c; end: 005b6917; +[SCDiskUtility _traverseDirectoryAndSubfolders:propertiesForKeys:operation:completion:] */

void FUN_005b675c(int param_1,undefined8 param_2,undefined8 param_3,dword *param_4,
                 undefined1 *param_5,long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  dword *pdVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  dword *pdVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  dword *pdStack_298;
  undefined1 *puStack_290;
  undefined1 *puStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  dword adStack_270 [2];
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = (undefined *)0x0;
  puVar3 = puVar2;
  func_0x00782d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar3);
  puVar7 = auStack_e8;
  pdVar9 = &MACH_HEADER.ncmds;
  puVar2 = puVar3;
  func_0x00780ea0();
  if (puVar2 != (undefined *)0x0) {
    lVar12 = *plStack_120;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(puVar3);
        }
        puVar7 = *(undefined1 **)(lStack_128 + (long)puVar13 * 8);
        puVar6 = (undefined8 *)param_5;
        pdVar9 = param_4;
        puVar10 = puVar3;
        iVar1 = param_1;
        func_0x0077c960();
        if (iVar1 == 0) goto LAB_005b689c;
        puVar13 = puVar13 + 1;
      } while (puVar2 != puVar13);
      puVar7 = auStack_e8;
      pdVar9 = &MACH_HEADER.ncmds;
      puVar2 = puVar3;
      puVar6 = &uStack_130;
      func_0x00780ea0();
    } while (puVar2 != (undefined *)0x0);
  }
LAB_005b689c:
  _objc_release(puVar3);
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6);
  }
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pdVar5 = adStack_270;
  pcStack_138 = FUN_005b6918;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  _objc_retain(pdVar9);
  _objc_retain(puVar10);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40();
  _objc_retainAutoreleasedReturnValue();
  uStack_228 = 0;
  puVar3 = puVar2;
  func_0x00780d60();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uStack_228;
  _objc_retain(uStack_228);
  _objc_release(puVar2);
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_268 = 0;
  adStack_270[0] = 0;
  adStack_270[1] = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  _objc_retain(puVar3);
  puVar8 = auStack_220;
  puVar13 = puVar3;
  func_0x00780ea0();
  if (puVar13 != (undefined *)0x0) {
    lVar12 = *plStack_260;
    puVar2 = puVar13;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_260 != lVar12) {
          _objc_enumerationMutation(puVar3);
        }
        puVar8 = *(undefined1 **)(lStack_268 + (long)puVar13 * 8);
        uVar4 = param_3;
        pdVar5 = pdVar9;
        func_0x0077c960();
        if ((int)uVar4 == 0) goto LAB_005b6a68;
        puVar13 = puVar13 + 1;
      } while (puVar2 != puVar13);
      puVar8 = auStack_220;
      puVar2 = puVar3;
      pdVar5 = adStack_270;
      func_0x00780ea0();
    } while (puVar2 != (undefined *)0x0);
  }
LAB_005b6a68:
  _objc_release(puVar3);
  if (puVar10 != (undefined *)0x0) {
    (**(code **)(puVar10 + 0x10))(puVar10);
  }
  _objc_release(puVar3);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(pdVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  uStack_2b0 = uVar11;
  pcStack_278 = FUN_005b6aec;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_2c0 = puVar2;
  puStack_2b8 = puVar3;
  uStack_2a8 = param_3;
  puStack_2a0 = puVar10;
  pdStack_298 = pdVar9;
  puStack_290 = puVar7;
  puStack_288 = (undefined1 *)puVar6;
  ppuStack_280 = &puStack_140;
  _objc_retain(pdVar5);
  _objc_retain(puVar8);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  puVar7 = puVar8;
  func_0x00791e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078c100(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar10 = PTR__OBJC_CLASS___NSRegularExpression_00ac3188;
  func_0x0078b1e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_00ac2d00;
  if (puVar10 == (undefined *)0x0) {
    uVar11 = 0;
  }
  else {
    puStack_2f8 = &uStack_300;
    uStack_300 = 0;
    uStack_2f0 = 0x3032000000;
    pcStack_2e8 = FUN_005b6d10;
    uStack_2e0 = 0x5b6d20;
    uStack_2d8 = 0;
    uStack_2d0 = *(undefined8 *)PTR__NSURLIsDirectoryKey_00999cf8;
    puVar13 = PTR__OBJC_CLASS___NSArray_00ac2c28;
    func_0x0077f200(PTR__OBJC_CLASS___NSArray_00ac2c28);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar10);
    func_0x00792e00(puVar3);
    _objc_release(puVar13);
    uVar11 = puStack_2f8[5];
    _objc_retain(uVar11);
    _objc_release(puVar10);
    __Block_object_dispose(&uStack_300,8);
    _objc_release(uStack_2d8);
  }
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_2c8) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar11);
    return;
  }
  ___stack_chk_fail();
  lVar12 = 8;
  __Block_object_dispose(&uStack_300);
  __Unwind_Resume();
  *(undefined8 *)(pdVar5 + 10) = *(undefined8 *)(lVar12 + 0x28);
  *(undefined8 *)(lVar12 + 0x28) = 0;
  return;
}



/* Entry: 005b6918; end: 005b6aeb; +[SCDiskUtility _traverseDirectory:propertiesForKeys:operation:completion:] */

void FUN_005b6918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined1 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar6 = &uStack_140;
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = 0;
  puVar2 = puVar1;
  func_0x00780d60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uStack_f8;
  _objc_retain(uStack_f8);
  _objc_release(puVar1);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(puVar2);
  puVar7 = auStack_f0;
  puVar10 = puVar2;
  func_0x00780ea0();
  if (puVar10 != (undefined *)0x0) {
    lVar9 = *plStack_130;
    puVar1 = puVar10;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(puVar2);
        }
        puVar7 = *(undefined1 **)(lStack_138 + (long)puVar10 * 8);
        uVar3 = param_1;
        puVar6 = (undefined8 *)param_5;
        func_0x0077c960();
        if ((int)uVar3 == 0) goto LAB_005b6a68;
        puVar10 = puVar10 + 1;
      } while (puVar1 != puVar10);
      puVar7 = auStack_f0;
      puVar1 = puVar2;
      puVar6 = &uStack_140;
      func_0x00780ea0();
    } while (puVar1 != (undefined *)0x0);
  }
LAB_005b6a68:
  _objc_release(puVar2);
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6);
  }
  _objc_release(puVar2);
  _objc_release(uVar8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uStack_180 = uVar8;
  pcStack_148 = FUN_005b6aec;
  lStack_198 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_190 = puVar1;
  puStack_188 = puVar2;
  uStack_178 = param_1;
  lStack_170 = param_6;
  puStack_168 = param_5;
  uStack_160 = param_4;
  uStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  puVar4 = puVar7;
  func_0x00791e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078c100(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar10 = PTR__OBJC_CLASS___NSRegularExpression_00ac3188;
  func_0x0078b1e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_00ac2d00;
  if (puVar10 == (undefined *)0x0) {
    uVar8 = 0;
  }
  else {
    puStack_1c8 = &uStack_1d0;
    uStack_1d0 = 0;
    uStack_1c0 = 0x3032000000;
    pcStack_1b8 = FUN_005b6d10;
    uStack_1b0 = 0x5b6d20;
    uStack_1a8 = 0;
    uStack_1a0 = *(undefined8 *)PTR__NSURLIsDirectoryKey_00999cf8;
    puVar5 = PTR__OBJC_CLASS___NSArray_00ac2c28;
    func_0x0077f200(PTR__OBJC_CLASS___NSArray_00ac2c28);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar10);
    func_0x00792e00(puVar2);
    _objc_release(puVar5);
    uVar8 = puStack_1c8[5];
    _objc_retain(uVar8);
    _objc_release(puVar10);
    __Block_object_dispose(&uStack_1d0,8);
    _objc_release(uStack_1a8);
  }
  _objc_release(puVar10);
  _objc_release(puVar1);
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_198) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar8);
    return;
  }
  ___stack_chk_fail();
  lVar9 = 8;
  __Block_object_dispose(&uStack_1d0);
  __Unwind_Resume();
  *(undefined8 *)((long)puVar6 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = 0;
  return;
}



/* Entry: 005b6aec; end: 005b6d0f; +[SCDiskUtility directoryPathFromRegex:basePath:] */

void FUN_005b6aec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  uVar6 = param_4;
  func_0x00791e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078c100(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar3 = PTR__OBJC_CLASS___NSRegularExpression_00ac3188;
  func_0x0078b1e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_00ac2d00;
  if (puVar3 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_005b6d10;
    uStack_70 = 0x5b6d20;
    uStack_68 = 0;
    uStack_60 = *(undefined8 *)PTR__NSURLIsDirectoryKey_00999cf8;
    puVar4 = PTR__OBJC_CLASS___NSArray_00ac2c28;
    func_0x0077f200(PTR__OBJC_CLASS___NSArray_00ac2c28);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    func_0x00792e00(puVar1);
    _objc_release(puVar4);
    uVar6 = puStack_88[5];
    _objc_retain(uVar6);
    _objc_release(puVar3);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar6);
    return;
  }
  ___stack_chk_fail();
  lVar5 = 8;
  __Block_object_dispose(&uStack_90);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = 0;
  return;
}



/* Entry: 005b6d10; end: 005b6d27;  */

void FUN_005b6d10(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 005b6d28; end: 005b6e3f;  */

bool FUN_005b6d28(long param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x0077fbc0();
  _objc_release(param_3);
  if ((int)uVar2 == 0) {
    bVar1 = true;
  }
  else {
    lVar5 = param_2;
    func_0x0077bb40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x0078a400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar6 = *(long *)(param_1 + 0x20);
    func_0x007882e0(lVar3);
    func_0x00783780();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00789bc0();
    bVar1 = lVar5 == 0;
    lVar4 = lVar6;
    if (lVar5 != 0) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      lVar4 = *(long *)(lVar5 + 0x28);
      *(long *)(lVar5 + 0x28) = lVar3;
      lVar3 = lVar6;
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 005b6e40; end: 005b6fb3; +[SCDiskUtility calculateDirectoryUsage:cancelationToken:] */

ulong FUN_005b6e40(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_00ac2d00;
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  uStack_50 = *(undefined8 *)PTR__NSURLFileSizeKey_00999cf0;
  puVar2 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  func_0x0077f200(PTR__OBJC_CLASS___NSArray_00ac2c28);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  lVar3 = param_3;
  func_0x00792e00(puVar1);
  _objc_release(puVar2);
  uVar6 = puStack_68[3];
  _objc_release(param_4);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return uVar6;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_70,8);
  __Unwind_Resume();
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00793120();
  lVar5 = *(long *)(*(long *)(param_3 + 0x28) + 8);
  *(long *)(lVar5 + 0x18) = *(long *)(lVar5 + 0x18) + lVar4;
  lVar4 = *(long *)(param_3 + 0x20);
  if (lVar4 == 0) {
    uVar6 = 1;
  }
  else {
    func_0x00787520();
    uVar6 = (ulong)((uint)lVar4 ^ 1);
  }
  _objc_release(lVar3);
  return uVar6;
}



/* Entry: 005b6fb4; end: 005b702f;  */

uint FUN_005b6fb4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  func_0x00789f00(param_3,param_2,*(undefined8 *)PTR__NSURLFileSizeKey_00999cf0);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00793120();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + lVar1;
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    uVar3 = 1;
  }
  else {
    func_0x00787520();
    uVar3 = (uint)lVar1 ^ 1;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 005b7030; end: 005b70e3; +[SCDiskUtility totalDiskSpace:] */

undefined * FUN_005b7030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40(PTR__OBJC_CLASS___NSFileManager_00ac2b30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_005b5ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x0077f460(puVar1,param_2,puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00789ea0(puVar3,param_2,*(undefined8 *)PTR__NSFileSystemSize_00998f08);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00793120();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 005b70e4; end: 005b7197; +[SCDiskUtility freeDiskSpace:] */

undefined * FUN_005b70e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40(PTR__OBJC_CLASS___NSFileManager_00ac2b30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_005b5ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x0077f460(puVar1,param_2,puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00789ea0(puVar3,param_2,*(undefined8 *)PTR__NSFileSystemFreeSize_00998ef8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00793120();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 005b7198; end: 005b724b; +[SCDiskUtility freeNodes:] */

undefined * FUN_005b7198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40(PTR__OBJC_CLASS___NSFileManager_00ac2b30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_005b5ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x0077f460(puVar1,param_2,puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00789ea0(puVar3,param_2,*(undefined8 *)PTR__NSFileSystemFreeNodes_00998ef0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00793120();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 005b724c; end: 005b72ff; +[SCDiskUtility totalNodes:] */

undefined * FUN_005b724c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40(PTR__OBJC_CLASS___NSFileManager_00ac2b30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_005b5ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x0077f460(puVar1,param_2,puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00789ea0(puVar3,param_2,*(undefined8 *)PTR__NSFileSystemNodes_00998f00);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00793120();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 005b7300; end: 005b736b; +[SCDiskUtility totalStorageUsageWithCancelationToken:] */

undefined * FUN_005b7300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_00ac2d00;
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_005b5ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0077fee0(puVar2,param_2,uVar1,param_3);
  _objc_release(param_3);
  _objc_release(uVar1);
  return puVar2;
}



/* Entry: 005b736c; end: 005b73c3; +[SCDiskUtility totalDiskSpaceInMiBString] */

void FUN_005b736c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lStack_28;
  
  lStack_28 = 0;
  uVar1 = param_1;
  func_0x00792b80(param_1,param_2,&lStack_28);
  if (lStack_28 == 0) {
    func_0x0077caa0(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005b73c4; end: 005b741b; +[SCDiskUtility freeDiskSpaceInMiBString] */

void FUN_005b73c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lStack_28;
  
  lStack_28 = 0;
  uVar1 = param_1;
  func_0x00783b20(param_1,param_2,&lStack_28);
  if (lStack_28 == 0) {
    func_0x0077caa0(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005b741c; end: 005b7477; +[SCDiskUtility freeNodesString] */

void FUN_005b741c(undefined8 param_1,undefined8 param_2)

{
  long lStack_18;
  
  lStack_18 = 0;
  func_0x00783b40(param_1,param_2,&lStack_18);
  if (lStack_18 == 0) {
    func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                    &PTR____CFConstantStringClassReference_00a2a800);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005b7478; end: 005b74d3; +[SCDiskUtility totalNodesString] */

void FUN_005b7478(undefined8 param_1,undefined8 param_2)

{
  long lStack_18;
  
  lStack_18 = 0;
  func_0x00792ba0(param_1,param_2,&lStack_18);
  if (lStack_18 == 0) {
    func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                    &PTR____CFConstantStringClassReference_00a2a800);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005b74d4; end: 005b76cf; +[SCDiskUtility currentOpenedFiles] */

int * FUN_005b74d4(void)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  undefined *puVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_00999f88;
  piVar2 = (int *)PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  func_0x00781fe0();
  _objc_retainAutoreleasedReturnValue();
  piVar7 = (int *)0x0;
  piVar6 = piVar2;
  do {
    ___error();
    *piVar6 = 0;
    piVar6 = piVar7;
    _fcntl(piVar7,1);
    if (((int)piVar6 == -1) && (___error(), *piVar6 != 0)) {
      ___error();
      if (*piVar6 != 9) break;
    }
    else {
      _fcntl(piVar7,0x32);
      piVar6 = (int *)PTR__OBJC_CLASS___NSString_00ac2988;
      func_0x00792140();
      _objc_retainAutoreleasedReturnValue();
      piVar3 = piVar2;
      func_0x00789ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar4 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
      if (piVar3 == (int *)0x0) {
        func_0x0078f4a0(piVar2);
      }
      else {
        piVar3 = piVar2;
        func_0x00789f00(piVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x007871a0();
        func_0x00789c60(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x0078f4e0(piVar2);
        _objc_release(puVar4);
        _objc_release(piVar3);
      }
      _objc_release();
    }
    uVar1 = (int)piVar7 + 1;
    piVar7 = (int *)(ulong)uVar1;
  } while (uVar1 != 0x400);
  puVar4 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4a0(piVar2);
  _objc_release(puVar4);
  piVar6 = piVar2;
  func_0x00780e20();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(piVar6);
    return piVar6;
  }
  ___stack_chk_fail();
  piVar6 = (int *)0x0;
  piVar7 = (int *)0x0;
  do {
    ___error();
    *piVar2 = 0;
    piVar2 = piVar7;
    _fcntl(piVar7,1);
    if (((int)piVar2 == -1) && (___error(), *piVar2 != 0)) {
      ___error();
      if (*piVar2 != 9) {
        return piVar6;
      }
    }
    else {
      piVar6 = (int *)(ulong)((int)piVar6 + 1);
    }
    uVar1 = (int)piVar7 + 1;
    piVar7 = (int *)(ulong)uVar1;
  } while (uVar1 != 0x400);
  return piVar6;
}



/* Entry: 005b76d0; end: 005b774b; +[SCDiskUtility numberOfOpenFiles] */

int FUN_005b76d0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)0x0;
  do {
    ___error();
    *param_1 = 0;
    param_1 = piVar3;
    _fcntl(piVar3,1);
    if (((int)param_1 == -1) && (___error(), *param_1 != 0)) {
      ___error();
      if (*param_1 != 9) {
        return iVar2;
      }
    }
    else {
      iVar2 = iVar2 + 1;
    }
    uVar1 = (int)piVar3 + 1;
    piVar3 = (int *)(ulong)uVar1;
  } while (uVar1 != 0x400);
  return iVar2;
}



/* Entry: 005b774c; end: 005b78f3; +[SCDiskUtility topOpenedFiles:] */

void FUN_005b774c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_00ac2d00;
  func_0x00781380();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0077eae0();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_00999f30;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x5b7860;
  puStack_40 = &UNK_00a03a20;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  puVar3 = puVar2;
  func_0x00791a40(puVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00780e80();
  if ((undefined *)(param_3 + 1U) < puVar2) {
    puVar2 = (undefined *)(param_3 + 1);
  }
  puVar4 = puVar3;
  func_0x00792300(puVar3,param_2,0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar2 = puVar1;
  func_0x007820a0(puVar1,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 005b78f4; end: 005b792b; +[SCDiskUtility _formatSpaceToMiB:] */

void FUN_005b78f4(undefined8 param_1,undefined8 param_2)

{
  func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a248a0);
  return;
}



/* Entry: 005b792c; end: 005b79a7;  */

void FUN_005b792c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x007837a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40(PTR__OBJC_CLASS___NSFileManager_00ac2b30);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078b400();
  func_0x0078b480(*(undefined8 *)(param_1 + 0x20),param_2,0);
  FUN_005b62e8(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 005b79a8; end: 005b7a2f; -[SCNGrpcUnaryEventHandlerImpl initWithHandler:responseClass:] */

undefined1 *
FUN_005b79a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR__OBJC_CLASS___SCNGrpcUnaryEventHandlerImpl_00ac4078;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 005b7a30; end: 005b7b97; -[SCNGrpcUnaryEventHandlerImpl onEvent:status:] */

void FUN_005b7a30(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_4);
  puVar4 = PTR__OBJC_CLASS___NSError_00ac2b00;
  if (param_4 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x0078a320(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined *)0x0;
    _objc_retain(0);
  }
  else {
    func_0x00791ca0(param_4);
    lVar1 = param_4;
    func_0x00782e00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
    func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00782e40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar1);
    uVar5 = 0;
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),uVar5,puVar4);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_4 + 8,0);
  return;
}



/* Entry: 005b7b98; end: 005b7ba3; -[SCNGrpcUnaryEventHandlerImpl .cxx_destruct] */

void FUN_005b7b98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 005b7ba4; end: 005b7c2b; -[SCNGrpcServerStreamingEventHandlerImpl initWithHandler:responseClass:] */

undefined1 *
FUN_005b7ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac4080;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 005b7c2c; end: 005b7da3; -[SCNGrpcServerStreamingEventHandlerImpl onEvent:response:status:] */

void FUN_005b7c2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
                 )

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_5);
  puVar4 = PTR__OBJC_CLASS___NSError_00ac2b00;
  if (param_5 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x0078a320(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined *)0x0;
    _objc_retain(0);
  }
  else {
    func_0x00791ca0(param_5);
    lVar1 = param_5;
    func_0x00782e00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
    func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00782e40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar1);
    uVar5 = 0;
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3,uVar5,puVar4);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 005b7da4; end: 005b7da7; -[SCNGrpcServerStreamingEventHandlerImpl onRetry:] */

void FUN_005b7da4(void)

{
  return;
}



/* Entry: 005b7da8; end: 005b7db3; -[SCNGrpcServerStreamingEventHandlerImpl .cxx_destruct] */

void FUN_005b7da8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 005b7db4; end: 005b7e27; -[SCNGrpcProtoMsgStreamSendHandler initWithHandler:] */

undefined1 * FUN_005b7db4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac4088;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 005b7e28; end: 005b7e8b; -[SCNGrpcProtoMsgStreamSendHandler send:callback:] */

void FUN_005b7e28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x007814c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078c5e0(uVar1,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 005b7e8c; end: 005b7e93; -[SCNGrpcProtoMsgStreamSendHandler closeStream] */

void FUN_005b7e8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007803d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_closeStream_00abade8);
  return;
}



/* Entry: 005b7e94; end: 005b7e9f; -[SCNGrpcProtoMsgStreamSendHandler .cxx_destruct] */

void FUN_005b7e94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 005b7ea0; end: 005b7eb7; +[SCNGrpcCallOptionsBuilder builder] */

void FUN_005b7ea0(void)

{
  _objc_alloc();
  func_0x00784a60();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005b7eb8; end: 005b7f23; -[SCNGrpcCallOptionsBuilder initPrivate] */

undefined1 * FUN_005b7eb8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac4090;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 0x18) = 1;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 005b7f24; end: 005b7f67; -[SCNGrpcCallOptionsBuilder setRpcTimeoutInMs:] */

long FUN_005b7f24(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 005b7f68; end: 005b7f8f; -[SCNGrpcCallOptionsBuilder addHeaders:] */

long FUN_005b7f68(long param_1)

{
  func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10));
  return param_1;
}



/* Entry: 005b7f90; end: 005b7f97; -[SCNGrpcCallOptionsBuilder setAuth:] */

void FUN_005b7f90(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 005b7f98; end: 005b7fcf; -[SCNGrpcCallOptionsBuilder setClientSwitchboardConfig:] */

long FUN_005b7f98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00780e20();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 005b7fd0; end: 005b8007; -[SCNGrpcCallOptionsBuilder setAttestation:] */

long FUN_005b7fd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 005b8008; end: 005b809f; -[SCNGrpcCallOptionsBuilder build] */

void FUN_005b8008(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR__OBJC_CLASS___SCNGrpcCallOptions_00ac3190;
  _objc_alloc(PTR__OBJC_CLASS___SCNGrpcCallOptions_00ac3190);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*(undefined1 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x007866c0(puVar3,param_2,uVar1,uVar2,puVar4,*(undefined8 *)(param_1 + 0x20),0,
                  *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 005b80a0; end: 005b8187; -[SCNGrpcCallOptionsBuilder addPreferredLocale:] */

long FUN_005b80a0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
    func_0x00788c00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x0078a860();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x007837a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078c100(puVar4,param_2,&PTR____CFConstantStringClassReference_00a32300);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4a0(uVar5,param_2,puVar4,&PTR____CFConstantStringClassReference_00a2a660);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    func_0x0078f4a0(uVar5,param_2,param_3,&PTR____CFConstantStringClassReference_00a2a660);
  }
  return param_1;
}



/* Entry: 005b8188; end: 005b818f; -[SCNGrpcCallOptionsBuilder addPreferredLocale] */

void FUN_005b8188(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077e830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_addPreferredLocale__00aba700,0);
  return;
}



/* Entry: 005b8190; end: 005b81c7; -[SCNGrpcCallOptionsBuilder setConsistentTrackingId:] */

long FUN_005b8190(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 005b81c8; end: 005b83e7; +[SCNGrpcCallOptionsBuilder toBuilder:] */

void FUN_005b81c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x0077fce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x0078bd60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x0078bd60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x007871a0();
    func_0x00790060(param_1,param_2,(long)(int)lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x0077ea40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x0077ea40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e620(param_1,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00780340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00780340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078d4a0(param_1,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x0078b8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x0078b8e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0077fbc0();
    func_0x0078cd00(param_1,param_2,lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x0077f3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x0077f3c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078ccc0(param_1,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00780b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00780b00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078d660(param_1,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 005b83e8; end: 005b843b; -[SCNGrpcCallOptionsBuilder .cxx_destruct] */

void FUN_005b83e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 005b843c; end: 005b8453; +[SCNGrpcParamsBuilder builder] */

void FUN_005b843c(void)

{
  _objc_alloc();
  func_0x00784a60();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005b8454; end: 005b84f7; -[SCNGrpcParamsBuilder initPrivate] */

undefined1 * FUN_005b8454(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR__OBJC_CLASS___SCNGrpcParamsBuilder_00ac4098;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    puVar2 = PTR__OBJC_CLASS___SCAPIUserAgentHelper_00ac3170;
    func_0x00793380();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = 2;
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x40) = 0;
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = 0;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x50) = 0;
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = 0;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 005b84f8; end: 005b85ab; -[SCNGrpcParamsBuilder build] */

void FUN_005b84f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar7 = PTR__OBJC_CLASS___SCNGrpcGrpcParameters_00ac3198;
  _objc_alloc(PTR__OBJC_CLASS___SCNGrpcGrpcParameters_00ac3198);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  lVar8 = *(long *)(param_1 + 0x38);
  func_0x00788b40();
  if (lVar8 < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x38);
  }
  func_0x00785480(puVar7,param_2,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar9,
                  *(undefined8 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005b85ac; end: 005b85e3; -[SCNGrpcParamsBuilder setEndpointAddress:] */

long FUN_005b85ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 005b85e4; end: 005b8627; -[SCNGrpcParamsBuilder setRpcTimeoutInMs:] */

long FUN_005b85e4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 005b8628; end: 005b862f; -[SCNGrpcParamsBuilder setChannelType:] */

void FUN_005b8628(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 005b8630; end: 005b8667; -[SCNGrpcParamsBuilder setUserAgentPrefix:] */

long FUN_005b8630(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 005b8668; end: 005b866f; -[SCNGrpcParamsBuilder setTimeAliveInBackgroundMs:] */

void FUN_005b8668(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 005b8670; end: 005b86a7; -[SCNGrpcParamsBuilder setRequestPathPrefix:] */

long FUN_005b8670(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 005b86a8; end: 005b86df; -[SCNGrpcParamsBuilder setCronetStreamEnginePtr:] */

long FUN_005b86a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 005b86e0; end: 005b86e7; -[SCNGrpcParamsBuilder setClientAttestation:] */

void FUN_005b86e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 005b86e8; end: 005b871f; -[SCNGrpcParamsBuilder setServiceClientSBConfigKey:] */

long FUN_005b86e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 005b8720; end: 005b8727; -[SCNGrpcParamsBuilder setShouldUseRetryFallback:] */

void FUN_005b8720(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 005b8728; end: 005b875f; -[SCNGrpcParamsBuilder setMaxInboundMessageSize:] */

long FUN_005b8728(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 005b8760; end: 005b8833; -[SCNGrpcParamsBuilder .cxx_destruct] */

void FUN_005b8760(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 005b8834; end: 005b8887;  */

long FUN_005b8834(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = (ulong)*(char *)((long)param_1 + 0x17);
  puVar3 = param_1;
  if ((long)uVar5 < 0) {
    puVar3 = (undefined8 *)*param_1;
    uVar5 = param_1[1];
  }
  lVar1 = param_2;
  _strlen(param_2);
  if (param_3 < uVar5) {
    uVar5 = param_3 + 1;
  }
  lVar6 = -uVar5;
  lVar4 = uVar5 + (long)puVar3;
  do {
    lVar4 = lVar4 + -1;
    if (lVar6 == 0) {
      return -1;
    }
    lVar2 = param_2;
    FUN_005b8d70(param_2,lVar1,lVar4);
    lVar6 = lVar6 + 1;
  } while (lVar2 != 0);
  return -lVar6;
}



/* Entry: 005b8888; end: 005b894f;  */

long FUN_005b8888(long param_1,undefined4 param_2)

{
  undefined1 auStack_78 [72];
  undefined1 auStack_30 [16];
  
  switch(param_2) {
  case 0:
  case 3:
    func_0x005b9188();
    func_0x005b9154();
    func_0x005b9164();
    func_0x005b917c();
    break;
  case 1:
    FUN_0040a324(auStack_78);
    FUN_005b8950(param_1 + 0x18,auStack_78);
    func_0x00465dbc(auStack_78);
    return param_1;
  case 2:
    func_0x005b9188();
    func_0x005b9154();
    func_0x005b9164();
    func_0x005b917c();
    break;
  default:
    goto LAB_005b8914;
  }
  func_0x005b91d0();
  func_0x00465dbc(auStack_30);
  func_0x005b919c();
LAB_005b8914:
  return param_1;
}



/* Entry: 005b8950; end: 005b8993;  */

undefined8 * FUN_005b8950(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00465dbc(&uStack_30);
  return param_1;
}



/* Entry: 005b8994; end: 005b89ff;  */

undefined8 FUN_005b8994(undefined8 param_1)

{
  undefined1 auStack_78 [72];
  undefined1 auStack_30 [16];
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_78);
  FUN_005b9154();
  func_0x005b9164();
  func_0x005b917c();
  func_0x005b91d0();
  func_0x00465dbc(auStack_30);
  func_0x005b919c();
  return param_1;
}



/* Entry: 005b8a00; end: 005b8a5f;  */

undefined8 FUN_005b8a00(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_e0 [192];
  
  (**(code **)(*(long *)*param_2 + 0x10))(auStack_e0);
  FUN_005b8a60(param_1,auStack_e0);
  func_0x00465c30(auStack_e0);
  return param_1;
}



/* Entry: 005b8a60; end: 005b8bb3;  */

long FUN_005b8a60(long param_1)

{
  long lVar1;
  undefined1 auStack_78 [72];
  undefined1 auStack_30 [16];
  
  func_0x005b8ad8(param_1 + 0x80);
  if (*(char *)(param_1 + 200) == '\x01') {
    FUN_0040aec8(param_1 + 0x40,param_1 + 0xb0);
  }
  if (*(char *)(param_1 + 0x100) == '\x01') {
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0xf8);
  }
  if (*(char *)(param_1 + 0x138) == '\x01') {
    func_0x005b8b58(param_1,*(undefined4 *)(param_1 + 0x130));
  }
  lVar1 = param_1;
  func_0x005b87cc(param_1,param_1 + 0x80);
  switch(*(undefined4 *)(param_1 + 0xa8)) {
  case 0:
  case 3:
    func_0x005b9188();
    func_0x005b9154();
    func_0x005b9164();
    func_0x005b917c();
    break;
  case 1:
    FUN_0040a324(auStack_78);
    FUN_005b8950(lVar1 + 0x18,auStack_78);
    func_0x00465dbc(auStack_78);
    return lVar1;
  case 2:
    func_0x005b9188();
    func_0x005b9154();
    func_0x005b9164();
    func_0x005b917c();
    break;
  default:
    goto LAB_005b8914;
  }
  func_0x005b91d0();
  func_0x00465dbc(auStack_30);
  func_0x005b919c();
LAB_005b8914:
  return lVar1;
}



/* Entry: 005b8bb4; end: 005b8cc3;  */

void FUN_005b8bb4(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = *(long *)(param_2 + 0x28);
  lVar2 = *(long *)(param_2 + 0x30);
  if (lVar1 == lVar2) {
    FUN_00409d30(auStack_60,param_2,param_2 + 0x18,param_2 + 0x40);
    func_0x005b91c4();
    func_0x00467e68(auStack_60);
  }
  else {
    uStack_38 = *(undefined8 *)(param_2 + 0x38);
    *(long *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    lStack_48 = lVar1;
    lStack_40 = lVar2;
    FUN_00409ea4(auStack_60,param_2,param_2 + 0x18,param_2 + 0x40,&lStack_48);
    func_0x005b91c4();
    func_0x00467e68(auStack_60);
    func_0x00465cf0(&lStack_48);
  }
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    uVar3 = *param_1;
    FUN_005b8cc4(auStack_60,param_2 + 0xd8,0x2f);
    FUN_004086d8(uVar3,auStack_60);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  }
  return;
}



/* Entry: 005b8cc4; end: 005b8d07;  */

void FUN_005b8cc4(undefined8 *param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar1 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
  uStack_11 = param_2;
  FUN_00475178(&uStack_12,puVar2,uVar1,&uStack_11,1);
  return;
}



/* Entry: 005b8d08; end: 005b8d6f;  */

long FUN_005b8d08(long param_1,ulong param_2,long param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  if (param_4 < param_2) {
    param_2 = param_4 + 1;
  }
  lVar2 = -param_2;
  param_1 = param_2 + param_1;
  do {
    param_1 = param_1 + -1;
    if (lVar2 == 0) {
      return -1;
    }
    lVar1 = param_3;
    FUN_005b8d70(param_3,param_5,param_1);
    lVar2 = lVar2 + 1;
  } while (lVar1 != 0);
  return -lVar2;
}



/* Entry: 005b8d70; end: 005b8d7f;  */

void FUN_005b8d70(undefined8 param_1,undefined8 param_2,char *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077a840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memchr_0099a3e8)(param_1,(long)*param_3,param_2);
  return;
}



/* Entry: 005b8d80; end: 005b8daf;  */

void FUN_005b8d80(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1);
  return;
}



/* Entry: 005b8db0; end: 005b8ddb;  */

void FUN_005b8db0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_005b8ddc(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 005b8ddc; end: 005b8e2b;  */

undefined1  [16] FUN_005b8ddc(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    FUN_005b8e2c(param_4,param_2);
  }
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 005b8e2c; end: 005b8e73;  */

undefined8 * FUN_005b8e2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = *param_2;
    *param_2 = 0;
    puVar2 = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar2 = param_1;
    FUN_005b8e74();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 005b8e74; end: 005b8f23;  */

long FUN_005b8e74(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  FUN_005b8f24(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar4 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar2 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_005b8ff8();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar4));
  plStack_40 = plStack_58 + (long)plVar2;
  uVar3 = *param_2;
  *param_2 = 0;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = uVar3;
  FUN_005b8f64(param_1,&plStack_58);
  lVar4 = param_1[1];
  FUN_005b9038(&plStack_58);
  return lVar4;
}



/* Entry: 005b8f24; end: 005b8f63;  */

undefined8 * FUN_005b8f24(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    puVar2 = (undefined8 *)(param_1[2] - *param_1 >> 2);
    if (puVar2 <= param_2) {
      puVar2 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      puVar2 = (undefined8 *)0x1fffffffffffffff;
    }
    return puVar2;
  }
  FUN_005b8fe4();
  puVar3 = (undefined8 *)(param_2[1] - (param_1[1] - *param_1));
  puVar2 = puVar3;
  _memcpy(puVar3);
  param_2[1] = puVar3;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return puVar2;
}



/* Entry: 005b8f64; end: 005b8fe3;  */

void FUN_005b8f64(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 005b8fe4; end: 005b8ff7;  */

void FUN_005b8fe4(void)

{
  FUN_0040d774("vector");
  FUN_005b901c();
  return;
}



/* Entry: 005b8ff8; end: 005b901b;  */

void FUN_005b8ff8(void)

{
  FUN_005b901c();
  return;
}



/* Entry: 005b901c; end: 005b9037;  */

long * FUN_005b901c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(plVar1);
    return plVar1;
  }
  FUN_0040cee8();
  FUN_005b9064();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 005b9038; end: 005b9063;  */

long * FUN_005b9038(long *param_1)

{
  FUN_005b9064();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 005b9064; end: 005b906b;  */

void FUN_005b9064(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    func_0x00465d8c();
  }
  return;
}



/* Entry: 005b906c; end: 005b90a7;  */

void FUN_005b906c(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    func_0x00465d8c();
  }
  return;
}



/* Entry: 005b90a8; end: 005b9153;  */

long FUN_005b90a8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  FUN_00459e04(lVar1 + 0x30,param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  FUN_00459e04(param_1 + 0x58,param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  FUN_00459e04(param_1 + 0x88,param_2 + 0x88);
  uVar3 = *(undefined8 *)(param_2 + 0xb0);
  uVar2 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  return param_1;
}



/* Entry: 005b9154; end: 005b91db;  */

long * FUN_005b9154(void)

{
  char cVar1;
  bool bVar2;
  dword *pdVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  
  pcVar4 = "";
  plVar7 = (long *)(unaff_x20 + 0x18);
  _strlen();
  if ((long *)0x7ffffffffffffff6 < pcVar4) {
    FUN_0040d740();
    plVar7 = *(long **)((long)pcVar4 + 8);
    if (plVar7 != (long *)0x0) {
      plVar5 = plVar7 + 1;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    return (long *)pcVar4;
  }
  if ((long *)((long)&MACH_HEADER.sizeofcmds + 2) < pcVar4) {
    pdVar3 = &MACH_HEADER.flags;
    if ((dword *)((ulong)pcVar4 | 7) != (dword *)0x17) {
      pdVar3 = (dword *)((ulong)pcVar4 | 7);
    }
    plVar5 = (long *)((long)pdVar3 + 1);
    __Znwm();
    *(char **)(unaff_x20 + 0x20) = pcVar4;
    *(ulong *)(unaff_x20 + 0x28) = (ulong)((long)pdVar3 + 1) | 0x8000000000000000;
    *plVar7 = (long)plVar5;
  }
  else {
    *(char *)(unaff_x20 + 0x2f) = (char)pcVar4;
    plVar5 = plVar7;
    if ((long *)pcVar4 == (long *)0x0) goto LAB_00425d3c;
  }
  _memmove(plVar5,"",pcVar4);
LAB_00425d3c:
  *(char *)((long)plVar5 + (long)pcVar4) = '\0';
  return plVar7;
}



/* Entry: 005b91dc; end: 005b9257;  */

void FUN_005b91dc(undefined8 param_1)

{
  undefined1 uStack_31;
  undefined1 **ppuStack_30;
  undefined1 *puStack_28;
  
  if (lRam0000000000b6b6c0 != -1) {
    puStack_28 = &uStack_31;
    ppuStack_30 = &puStack_28;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0xb6b6c0,&ppuStack_30,FUN_005b9258);
  }
  (**(code **)*puRam0000000000b6bf90)(puRam0000000000b6bf90,param_1);
  return;
}



/* Entry: 005b9258; end: 005b92d7;  */

void FUN_005b9258(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.flags;
  __Znwm();
  *(undefined8 *)(pdVar1 + 2) = 0;
  *(undefined8 *)(pdVar1 + 4) = 0;
  *(undefined ***)pdVar1 = &PTR_FUN_00a04b58;
  pdRam0000000000b6bf90 = pdVar1;
  return;
}



/* Entry: 005b92d8; end: 005b93e7;  */

undefined8 * FUN_005b92d8(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  dword *pdVar4;
  undefined1 *puVar5;
  undefined1 auStack_48 [8];
  dword *pdStack_40;
  undefined8 uStack_38;
  
  puVar2 = param_1;
  FUN_0040b304();
  *puVar2 = &PTR_FUN_00a03a60;
  puVar2[0xf] = 0;
  *(undefined1 *)(puVar2 + 0x10) = 0;
  uVar3 = 8;
  __Znwm();
  __ZNSt3__115__thread_structC1Ev();
  pdVar4 = &MACH_HEADER.ncmds;
  uStack_38 = uVar3;
  __Znwm();
  uStack_38 = 0;
  *(undefined8 *)pdVar4 = uVar3;
  *(undefined8 **)(pdVar4 + 2) = param_1;
  puVar5 = auStack_48;
  pdStack_40 = pdVar4;
  FUN_005b9690(puVar5,FUN_005b96a0,pdVar4);
  if ((int)puVar5 == 0) {
    pdStack_40 = (dword *)0x0;
    FUN_005b9800(&pdStack_40);
    FUN_005b9838(&uStack_38);
    FUN_005b9410(puVar2 + 0xf,auStack_48);
    __ZNSt3__16threadD1Ev(auStack_48);
    return param_1;
  }
  __ZNSt3__120__throw_system_errorEiPKc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5b9398);
  (*pcVar1)();
}



/* Entry: 005b93e8; end: 005b940f;  */

undefined8 * FUN_005b93e8(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  dword *pdVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_48 [8];
  dword *pdStack_40;
  undefined8 uStack_38;
  
  puVar6 = param_1;
  func_0x005b9290();
  puVar2 = param_1;
  FUN_0040b304(param_1,puVar6);
  *puVar2 = &PTR_FUN_00a03a60;
  puVar2[0xf] = 0;
  *(undefined1 *)(puVar2 + 0x10) = 0;
  uVar3 = 8;
  __Znwm();
  __ZNSt3__115__thread_structC1Ev();
  pdVar4 = &MACH_HEADER.ncmds;
  uStack_38 = uVar3;
  __Znwm();
  uStack_38 = 0;
  *(undefined8 *)pdVar4 = uVar3;
  *(undefined8 **)(pdVar4 + 2) = param_1;
  puVar5 = auStack_48;
  pdStack_40 = pdVar4;
  FUN_005b9690(puVar5,FUN_005b96a0,pdVar4);
  if ((int)puVar5 == 0) {
    pdStack_40 = (dword *)0x0;
    FUN_005b9800(&pdStack_40);
    FUN_005b9838(&uStack_38);
    FUN_005b9410(puVar2 + 0xf,auStack_48);
    __ZNSt3__16threadD1Ev(auStack_48);
    return param_1;
  }
  __ZNSt3__120__throw_system_errorEiPKc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5b9398);
  (*pcVar1)();
}



/* Entry: 005b9410; end: 005b9433;  */

long * FUN_005b9410(long *param_1,long *param_2)

{
  if (*param_1 == 0) {
    *param_1 = *param_2;
    *param_2 = 0;
    return param_1;
  }
  __ZSt9terminatev();
  *param_1 = (long)&PTR_FUN_009e2680;
  (**(code **)(*plRam0000000000b65da0 + 0x40))(plRam0000000000b65da0,param_1[2]);
  FUN_005b9620(param_1 + 0xc);
  (**(code **)(*plRam0000000000b65da0 + 0x78))(plRam0000000000b65da0,param_1 + 4);
  *param_1 = (long)&PTR_FUN_009e2620;
  if ((char)param_1[1] == '\x01') {
    if (plRam0000000000b65da8 == (long *)0x0) {
      (**(code **)(*plRam0000000000b65da0 + 0x10))
                (plRam0000000000b65da0,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000000b65da8 + 0x18))();
  }
  return param_1;
}



/* Entry: 005b9434; end: 005b94a3;  */

undefined8 * FUN_005b9434(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e2680;
  (**(code **)(*plRam0000000000b65da0 + 0x40))(plRam0000000000b65da0,param_1[2]);
  FUN_005b9620(param_1 + 0xc);
  (**(code **)(*plRam0000000000b65da0 + 0x78))(plRam0000000000b65da0,param_1 + 4);
  *param_1 = &PTR_FUN_009e2620;
  if (*(char *)(param_1 + 1) == '\x01') {
    if (plRam0000000000b65da8 == (long *)0x0) {
      (**(code **)(*plRam0000000000b65da0 + 0x10))
                (plRam0000000000b65da0,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000000b65da8 + 0x18))();
  }
  return param_1;
}



/* Entry: 005b94a4; end: 005b94f3;  */

undefined8 * FUN_005b94a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a03a60;
  *(undefined1 *)(param_1 + 0x10) = 1;
  FUN_0040b380();
  __ZNSt3__16thread4joinEv(param_1 + 0xf);
  __ZNSt3__16threadD1Ev(param_1 + 0xf);
  *param_1 = &PTR_FUN_009e2680;
  (**(code **)(*plRam0000000000b65da0 + 0x40))(plRam0000000000b65da0,param_1[2]);
  FUN_005b9620(param_1 + 0xc);
  (**(code **)(*plRam0000000000b65da0 + 0x78))(plRam0000000000b65da0,param_1 + 4);
  *param_1 = &PTR_FUN_009e2620;
  if (*(char *)(param_1 + 1) == '\x01') {
    if (plRam0000000000b65da8 == (long *)0x0) {
      (**(code **)(*plRam0000000000b65da0 + 0x10))
                (plRam0000000000b65da0,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000000b65da8 + 0x18))();
  }
  return param_1;
}



/* Entry: 005b94f4; end: 005b94f7;  */

undefined8 * FUN_005b94f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a03a60;
  *(undefined1 *)(param_1 + 0x10) = 1;
  FUN_0040b380();
  __ZNSt3__16thread4joinEv(param_1 + 0xf);
  __ZNSt3__16threadD1Ev(param_1 + 0xf);
  *param_1 = &PTR_FUN_009e2680;
  (**(code **)(*plRam0000000000b65da0 + 0x40))(plRam0000000000b65da0,param_1[2]);
  FUN_005b9620(param_1 + 0xc);
  (**(code **)(*plRam0000000000b65da0 + 0x78))(plRam0000000000b65da0,param_1 + 4);
  *param_1 = &PTR_FUN_009e2620;
  if (*(char *)(param_1 + 1) == '\x01') {
    if (plRam0000000000b65da8 == (long *)0x0) {
      (**(code **)(*plRam0000000000b65da0 + 0x10))
                (plRam0000000000b65da0,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000000b65da8 + 0x18))();
  }
  return param_1;
}



/* Entry: 005b94f8; end: 005b950b;  */

void FUN_005b94f8(void)

{
  FUN_005b94a4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005b950c; end: 005b957b;  */

undefined8 FUN_005b950c(void)

{
  int iVar1;
  
  if ((bRam0000000000b6b750 & 1) == 0) {
    iVar1 = 0xb6b750;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_005b93e8(0xb6b6c8);
      ___cxa_guard_release(0xb6b750);
    }
  }
  return 0xb6b6c8;
}



/* Entry: 005b957c; end: 005b9607;  */

undefined8 * FUN_005b957c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e2620;
  if (*(char *)(param_1 + 1) == '\x01') {
    if (plRam0000000000b65da8 == (long *)0x0) {
      (**(code **)(*plRam0000000000b65da0 + 0x10))
                (plRam0000000000b65da0,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000000b65da8 + 0x18))();
  }
  return param_1;
}


