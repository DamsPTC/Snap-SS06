/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ad065fc; end: 10ad0671f;  */

void FUN_10ad065fc(undefined8 *param_1,int param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  int iStack_34;
  
  uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  _CFDictionaryCreateMutable
            (uVar2,1,PTR__kCFTypeDictionaryKeyCallBacks_11034ac18,
             PTR__kCFTypeDictionaryValueCallBacks_11034ac20);
  uVar6 = 0;
  *param_1 = uVar2;
  piVar4 = (int *)&UNK_10e50dd20;
  while( true ) {
    for (; piVar5 = (int *)(&UNK_10e50dcf8 + uVar6 * 8), *piVar5 < param_2; uVar6 = uVar6 * 2 + 2) {
      piVar5 = piVar4;
      if (1 < uVar6) goto LAB_10ad0669c;
    }
    if (1 < uVar6) break;
    uVar6 = uVar6 << 1 | 1;
    piVar4 = piVar5;
  }
LAB_10ad0669c:
  if ((piVar5 != (int *)&UNK_10e50dd20) && (*piVar5 <= param_2 && piVar5 != (int *)&UNK_10e50dd20))
  {
    iStack_34 = piVar5[1];
    uVar3 = 0;
    _CFNumberCreate(0,0xc,&iStack_34);
    _CFDictionarySetValue
              (uVar2,*(undefined8 *)PTR__kCGImageDestinationLossyCompressionQuality_110349c80,uVar3)
    ;
    return;
  }
  FUN_10a00946c(&UNK_10f6a32bf);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad06708);
  (*pcVar1)();
}



/* Entry: 10ad06720; end: 10ad0681f;  */

undefined8 **** FUN_10ad06720(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 ****ppppuVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ****ppppuVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 **ppuVar12;
  undefined8 uVar13;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 **ppuStack_460;
  long lStack_458;
  undefined1 auStack_450 [96];
  long lStack_3f0;
  long lStack_3e8;
  undefined4 uStack_3e0;
  long lStack_3d8;
  undefined1 auStack_3d0 [72];
  long lStack_388;
  undefined8 **ppuStack_380;
  undefined8 ***pppuStack_378;
  long *plStack_370;
  long *plStack_368;
  undefined1 ***pppuStack_360;
  code *pcStack_358;
  undefined1 auStack_350 [8];
  undefined8 **ppuStack_348;
  undefined1 auStack_340 [96];
  undefined8 **ppuStack_2e0;
  undefined8 **ppuStack_2d8;
  undefined4 uStack_2d0;
  undefined8 **ppuStack_2c8;
  undefined1 auStack_2c0 [72];
  long lStack_278;
  undefined8 **ppuStack_270;
  undefined8 **ppuStack_268;
  undefined8 ***pppuStack_260;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined8 **ppuStack_238;
  undefined8 ***pppuStack_230;
  undefined8 **ppuStack_228;
  undefined1 auStack_220 [96];
  undefined8 **ppuStack_1c0;
  undefined8 **ppuStack_1b8;
  undefined4 uStack_1b0;
  undefined8 **ppuStack_1a8;
  undefined1 auStack_1a0 [72];
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 **ppuStack_110;
  long lStack_108;
  undefined1 auStack_100 [96];
  long lStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  pppuVar6 = &ppuStack_110;
  ppppuVar1 = (undefined8 ****)&ppuStack_110;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = *param_2;
  if (lStack_108 != 0) {
    _memcpy(auStack_100,param_2 + 1,lStack_108 << 5);
  }
  lStack_98 = param_2[0xe];
  lStack_a0 = param_2[0xd];
  uStack_90 = (undefined4)param_2[0xf];
  lStack_88 = param_2[0x10];
  if (lStack_88 != 0) {
    _memcpy(auStack_80,param_2 + 0x11,lStack_88 * 0x18);
  }
  FUN_10ad065fc(&ppuStack_110,param_3);
  FUN_10ad06820(param_1,&lStack_108,*(undefined8 *)PTR__kUTTypeJPEG_11034b1d8);
  FUN_10aa12064();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppppuVar1;
  }
  ___stack_chk_fail();
  FUN_10aa12064(&ppuStack_110);
  __Unwind_Resume();
  pcStack_118 = FUN_10ad06820;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_228 = *ppppuVar1;
  puStack_120 = &stack0xfffffffffffffff0;
  if ((undefined8 ***)ppuStack_228 != (undefined8 ***)0x0) {
    _memcpy(auStack_220,ppppuVar1 + 1,(long)ppuStack_228 << 5);
  }
  ppuStack_1b8 = ppppuVar1[0xe];
  ppuStack_1c0 = ppppuVar1[0xd];
  uStack_1b0 = *(undefined4 *)(ppppuVar1 + 0xf);
  ppuStack_1a8 = ppppuVar1[0x10];
  if ((undefined8 ***)ppuStack_1a8 != (undefined8 ***)0x0) {
    _memcpy(auStack_1a0,ppppuVar1 + 0x11,(long)ppuStack_1a8 * 0x18);
  }
  pppuVar2 = &ppuStack_228;
  FUN_10ad51860(pppuVar2,1);
  ppuVar3 = *(undefined8 ***)PTR__kCFAllocatorDefault_11034ab78;
  pppuStack_230 = pppuVar2;
  _CFDataCreateMutable(ppuVar3,0);
  ppuVar4 = ppuVar3;
  ppuStack_228 = ppuVar3;
  _CGImageDestinationCreateWithData();
  ppuVar12 = *pppuVar6;
  ppuStack_238 = ppuVar4;
  _CGImageDestinationAddImage();
  ppuVar5 = ppuVar4;
  _CGImageDestinationFinalize();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  if (((ulong)ppuVar5 & 1) != 0) {
    pppuVar6 = (undefined8 ***)ppuVar3;
    _CFDataGetLength();
    if (pppuVar6 == (undefined8 ***)0x0) {
      uVar13 = 0;
    }
    else {
      func_0x000107c27d58(extraout_x8,pppuVar6);
      uVar13 = *extraout_x8;
    }
    ppuVar12 = pppuVar6;
    _CFDataGetBytes(ppuVar3,0,pppuVar6,uVar13);
  }
  FUN_10ad06c30(&ppuStack_238);
  FUN_10ad06c60(&ppuStack_228);
  ppppuVar1 = &pppuStack_230;
  FUN_10a1b0db4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return ppppuVar1;
  }
  ___stack_chk_fail();
  FUN_10ad06c60(&ppuStack_228);
  FUN_10a1b0db4(&pppuStack_230);
  ppppuVar7 = ppppuVar1;
  __Unwind_Resume();
  pcStack_248 = FUN_10ad069e8;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_348 = *ppppuVar7;
  ppuStack_270 = ppuVar4;
  ppuStack_268 = pppuVar6;
  pppuStack_260 = ppppuVar1;
  ppuStack_250 = &puStack_120;
  if ((undefined8 ***)ppuStack_348 != (undefined8 ***)0x0) {
    _memcpy(auStack_340,ppppuVar7 + 1,(long)ppuStack_348 << 5);
  }
  ppuStack_2d8 = ppppuVar7[0xe];
  ppuStack_2e0 = ppppuVar7[0xd];
  uStack_2d0 = *(undefined4 *)(ppppuVar7 + 0xf);
  ppuStack_2c8 = ppppuVar7[0x10];
  if ((undefined8 ***)ppuStack_2c8 != (undefined8 ***)0x0) {
    _memcpy(auStack_2c0,ppppuVar7 + 0x11,(long)ppuStack_2c8 * 0x18);
  }
  plVar8 = (long *)PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  FUN_10ad065fc(auStack_350,ppuVar12);
  ppppuVar1 = (undefined8 ****)&ppuStack_348;
  plVar11 = plVar8;
  FUN_10ad06450(ppppuVar1,plVar8,*(undefined8 *)PTR__kUTTypePNG_11034b1f0,auStack_350);
  FUN_10aa12064(auStack_350);
  plVar9 = plVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return ppppuVar1;
  }
  ___stack_chk_fail();
  FUN_10aa12064(auStack_350);
  _objc_release(plVar8);
  plVar10 = plVar9;
  __Unwind_Resume();
  ppppuVar1 = (undefined8 ****)&ppuStack_460;
  pcStack_358 = FUN_10ad06b30;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_458 = *plVar10;
  ppuStack_380 = ppuVar4;
  pppuStack_378 = ppppuVar7;
  plStack_370 = plVar9;
  plStack_368 = plVar8;
  pppuStack_360 = &ppuStack_250;
  if (lStack_458 != 0) {
    _memcpy(auStack_450,plVar10 + 1,lStack_458 << 5);
  }
  lStack_3e8 = plVar10[0xe];
  lStack_3f0 = plVar10[0xd];
  uStack_3e0 = (undefined4)plVar10[0xf];
  lStack_3d8 = plVar10[0x10];
  if (lStack_3d8 != 0) {
    _memcpy(auStack_3d0,plVar10 + 0x11,lStack_3d8 * 0x18);
  }
  FUN_10ad065fc(&ppuStack_460,plVar11);
  FUN_10ad06820(extraout_x8_00,&lStack_458,*(undefined8 *)PTR__kUTTypePNG_11034b1f0,&ppuStack_460);
  FUN_10aa12064();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return ppppuVar1;
  }
  ___stack_chk_fail();
  FUN_10aa12064(&ppuStack_460);
  __Unwind_Resume();
  if (*ppppuVar1 != (undefined8 ***)0x0) {
    _CFRelease();
  }
  return ppppuVar1;
}



/* Entry: 10ad06820; end: 10ad069e7;  */

ulong *** FUN_10ad06820(undefined8 *param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  ulong **ppuVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong ***pppuVar5;
  ulong ***pppuVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong *puVar11;
  undefined8 uVar12;
  undefined8 extraout_x8;
  ulong **ppuStack_350;
  long lStack_348;
  undefined1 auStack_340 [96];
  long lStack_2e0;
  long lStack_2d8;
  undefined4 uStack_2d0;
  long lStack_2c8;
  undefined1 auStack_2c0 [72];
  long lStack_278;
  ulong uStack_270;
  ulong ***pppuStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined1 auStack_240 [8];
  ulong **ppuStack_238;
  undefined1 auStack_230 [96];
  ulong **ppuStack_1d0;
  ulong **ppuStack_1c8;
  undefined4 uStack_1c0;
  ulong **ppuStack_1b8;
  undefined1 auStack_1b0 [72];
  long lStack_168;
  ulong uStack_160;
  ulong *puStack_158;
  ulong ***pppuStack_150;
  undefined8 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  ulong uStack_128;
  ulong **ppuStack_120;
  ulong *puStack_118;
  undefined1 auStack_110 [96];
  long lStack_b0;
  long lStack_a8;
  undefined4 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_118 = (ulong *)*param_2;
  if (puStack_118 != (ulong *)0x0) {
    _memcpy(auStack_110,param_2 + 1,(long)puStack_118 << 5);
  }
  lStack_a8 = param_2[0xe];
  lStack_b0 = param_2[0xd];
  uStack_a0 = (undefined4)param_2[0xf];
  lStack_98 = param_2[0x10];
  if (lStack_98 != 0) {
    _memcpy(auStack_90,param_2 + 0x11,lStack_98 * 0x18);
  }
  ppuVar1 = &puStack_118;
  FUN_10ad51860(ppuVar1,1);
  puVar2 = *(ulong **)PTR__kCFAllocatorDefault_11034ab78;
  ppuStack_120 = ppuVar1;
  _CFDataCreateMutable(puVar2,0);
  puVar3 = puVar2;
  puStack_118 = puVar2;
  _CGImageDestinationCreateWithData();
  puVar11 = (ulong *)*param_4;
  uStack_128 = (ulong)puVar3;
  _CGImageDestinationAddImage();
  uVar4 = (ulong)puVar3;
  _CGImageDestinationFinalize();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((uVar4 & 1) != 0) {
    param_4 = puVar2;
    _CFDataGetLength();
    if (param_4 == (ulong *)0x0) {
      uVar12 = 0;
    }
    else {
      func_0x000107c27d58(param_1,param_4);
      uVar12 = *param_1;
    }
    puVar11 = param_4;
    _CFDataGetBytes(puVar2,0,param_4,uVar12);
  }
  FUN_10ad06c30(&uStack_128);
  FUN_10ad06c60(&puStack_118);
  pppuVar5 = &ppuStack_120;
  FUN_10a1b0db4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  FUN_10ad06c60(&puStack_118);
  FUN_10a1b0db4(&ppuStack_120);
  pppuVar6 = pppuVar5;
  __Unwind_Resume();
  pcStack_138 = FUN_10ad069e8;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_238 = *pppuVar6;
  uStack_160 = (ulong)puVar3;
  puStack_158 = param_4;
  pppuStack_150 = pppuVar5;
  puStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  if (ppuStack_238 != (ulong **)0x0) {
    _memcpy(auStack_230,pppuVar6 + 1,(long)ppuStack_238 << 5);
  }
  ppuStack_1c8 = pppuVar6[0xe];
  ppuStack_1d0 = pppuVar6[0xd];
  uStack_1c0 = *(undefined4 *)(pppuVar6 + 0xf);
  ppuStack_1b8 = pppuVar6[0x10];
  if (ppuStack_1b8 != (ulong **)0x0) {
    _memcpy(auStack_1b0,pppuVar6 + 0x11,(long)ppuStack_1b8 * 0x18);
  }
  plVar7 = (long *)PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  FUN_10ad065fc(auStack_240,puVar11);
  pppuVar5 = &ppuStack_238;
  plVar10 = plVar7;
  FUN_10ad06450(pppuVar5,plVar7,*(undefined8 *)PTR__kUTTypePNG_11034b1f0,auStack_240);
  FUN_10aa12064(auStack_240);
  plVar8 = plVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  FUN_10aa12064(auStack_240);
  _objc_release(plVar7);
  plVar9 = plVar8;
  __Unwind_Resume();
  pppuVar5 = &ppuStack_350;
  pcStack_248 = FUN_10ad06b30;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_348 = *plVar9;
  uStack_270 = (ulong)puVar3;
  pppuStack_268 = pppuVar6;
  plStack_260 = plVar8;
  plStack_258 = plVar7;
  ppuStack_250 = &puStack_140;
  if (lStack_348 != 0) {
    _memcpy(auStack_340,plVar9 + 1,lStack_348 << 5);
  }
  lStack_2d8 = plVar9[0xe];
  lStack_2e0 = plVar9[0xd];
  uStack_2d0 = (undefined4)plVar9[0xf];
  lStack_2c8 = plVar9[0x10];
  if (lStack_2c8 != 0) {
    _memcpy(auStack_2c0,plVar9 + 0x11,lStack_2c8 * 0x18);
  }
  FUN_10ad065fc(&ppuStack_350,plVar10);
  FUN_10ad06820(extraout_x8,&lStack_348,*(undefined8 *)PTR__kUTTypePNG_11034b1f0,&ppuStack_350);
  FUN_10aa12064();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  FUN_10aa12064(&ppuStack_350);
  __Unwind_Resume();
  if (*pppuVar5 != (ulong **)0x0) {
    _CFRelease();
  }
  return pppuVar5;
}



/* Entry: 10ad069e8; end: 10ad06b2f;  */

long * FUN_10ad069e8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long lStack_220;
  long lStack_218;
  undefined1 auStack_210 [96];
  long lStack_1b0;
  long lStack_1a8;
  undefined4 uStack_1a0;
  long lStack_198;
  undefined1 auStack_190 [72];
  long lStack_148;
  undefined1 auStack_110 [8];
  long lStack_108;
  undefined1 auStack_100 [96];
  long lStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = *param_1;
  if (lStack_108 != 0) {
    _memcpy(auStack_100,param_1 + 1,lStack_108 << 5);
  }
  lStack_98 = param_1[0xe];
  lStack_a0 = param_1[0xd];
  uStack_90 = (undefined4)param_1[0xf];
  lStack_88 = param_1[0x10];
  if (lStack_88 != 0) {
    _memcpy(auStack_80,param_1 + 0x11,lStack_88 * 0x18);
  }
  plVar1 = (long *)PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  FUN_10ad065fc(auStack_110,param_3);
  plVar2 = &lStack_108;
  plVar4 = plVar1;
  FUN_10ad06450(plVar2,plVar1,*(undefined8 *)PTR__kUTTypePNG_11034b1f0,auStack_110);
  FUN_10aa12064(auStack_110);
  plVar3 = plVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar2;
  }
  ___stack_chk_fail();
  FUN_10aa12064(auStack_110);
  _objc_release(plVar1);
  __Unwind_Resume();
  plVar2 = &lStack_220;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_218 = *plVar3;
  if (lStack_218 != 0) {
    _memcpy(auStack_210,plVar3 + 1,lStack_218 << 5);
  }
  lStack_1a8 = plVar3[0xe];
  lStack_1b0 = plVar3[0xd];
  uStack_1a0 = (undefined4)plVar3[0xf];
  lStack_198 = plVar3[0x10];
  if (lStack_198 != 0) {
    _memcpy(auStack_190,plVar3 + 0x11,lStack_198 * 0x18);
  }
  FUN_10ad065fc(&lStack_220,plVar4);
  FUN_10ad06820(extraout_x8,&lStack_218,*(undefined8 *)PTR__kUTTypePNG_11034b1f0,&lStack_220);
  FUN_10aa12064();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return plVar2;
  }
  ___stack_chk_fail();
  FUN_10aa12064(&lStack_220);
  __Unwind_Resume();
  if (*plVar2 != 0) {
    _CFRelease();
  }
  return plVar2;
}



/* Entry: 10ad06b30; end: 10ad06c2f;  */

long * FUN_10ad06b30(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [96];
  long lStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  plVar1 = &lStack_110;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = *param_2;
  if (lStack_108 != 0) {
    _memcpy(auStack_100,param_2 + 1,lStack_108 << 5);
  }
  lStack_98 = param_2[0xe];
  lStack_a0 = param_2[0xd];
  uStack_90 = (undefined4)param_2[0xf];
  lStack_88 = param_2[0x10];
  if (lStack_88 != 0) {
    _memcpy(auStack_80,param_2 + 0x11,lStack_88 * 0x18);
  }
  FUN_10ad065fc(&lStack_110,param_3);
  FUN_10ad06820(param_1,&lStack_108,*(undefined8 *)PTR__kUTTypePNG_11034b1f0,&lStack_110);
  FUN_10aa12064();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar1;
  }
  ___stack_chk_fail();
  FUN_10aa12064(&lStack_110);
  __Unwind_Resume();
  if (*plVar1 != 0) {
    _CFRelease();
  }
  return plVar1;
}



/* Entry: 10ad06c30; end: 10ad06c5f;  */

long * FUN_10ad06c30(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10ad06c60; end: 10ad06c8f;  */

long * FUN_10ad06c60(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10ad06c90; end: 10ad07007;  */

long FUN_10ad06c90(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2d4) = 0;
  *(undefined8 *)(param_1 + 0x2cc) = 0;
  *(undefined4 *)(param_1 + 0x679c) = 0;
  *(undefined8 *)(param_1 + 0x477c) = 0;
  *(undefined8 *)(param_1 + 0x4774) = 0;
  *(undefined8 *)(param_1 + 0x478c) = 0;
  *(undefined8 *)(param_1 + 0x4784) = 0;
  *(undefined8 *)(param_1 + 0x4794) = 0;
  *(undefined8 *)(param_1 + 0x67ac) = 0;
  *(undefined8 *)(param_1 + 0x67a4) = 0;
  *(undefined8 *)(param_1 + 0x67c4) = 0;
  *(undefined8 *)(param_1 + 0x67bc) = 0;
  *(undefined8 *)(param_1 + 0x67f8) = 0;
  *(undefined8 *)(param_1 + 0x67f0) = 0;
  *(undefined8 *)(param_1 + 0x67dc) = 0;
  *(undefined8 *)(param_1 + 0x67d4) = 0;
  *(undefined8 *)(param_1 + 0x67ec) = 0;
  *(undefined8 *)(param_1 + 0x67e4) = 0;
  *(undefined4 *)(param_1 + 0x67b4) = 0;
  *(undefined4 *)(param_1 + 0x67cc) = 0;
  *(undefined8 *)(param_1 + 0x88a4) = 0;
  *(undefined8 *)(param_1 + 0x50a48) = 0;
  *(undefined4 *)(param_1 + 0x8bb4c) = 0;
  *(undefined4 *)(param_1 + 0x50a50) = 0;
  *(undefined4 *)(param_1 + 0x8db58) = 0;
  puVar1 = (undefined8 *)(param_1 + 0x8db70);
  lVar2 = 0x701c;
  *(undefined4 *)(param_1 + 0x50a58) = 0;
  do {
    *puVar1 = 0;
    *(undefined4 *)((long)puVar1 + -4) = 0;
    puVar1 = (undefined8 *)((long)puVar1 + 0x1c);
    lVar2 = lVar2 + -0x1c;
  } while (lVar2 != 0);
  *(undefined8 *)(param_1 + 0x95b80) = 0;
  _bzero(param_1 + 0x95b9c,0x20c);
  *(undefined4 *)(param_1 + 0x95da8) = 0x3f;
  *(undefined8 *)(param_1 + 0xa3df0) = 0;
  *(long *)(param_1 + 0xa3de8) = 0;
  *(undefined8 *)(param_1 + 0xa3e00) = 0;
  *(undefined8 *)(param_1 + 0xa3df8) = 0;
  *(undefined8 *)(param_1 + 0xa3e10) = 0;
  *(undefined8 *)(param_1 + 0xa3e08) = 0;
  *(undefined8 *)(param_1 + 0xa3e20) = 0;
  *(undefined8 *)(param_1 + 0xa3e18) = 0;
  *(undefined8 *)(param_1 + 0xa3e30) = 0;
  *(undefined8 *)(param_1 + 0xa3e28) = 0;
  *(undefined8 *)(param_1 + 0xa3e40) = 0;
  *(undefined8 *)(param_1 + 0xa3e38) = 0;
  *(undefined8 *)(param_1 + 0xa3e50) = 0;
  *(undefined8 *)(param_1 + 0xa3e48) = 0;
  *(undefined8 *)(param_1 + 0xa3e60) = 0;
  *(undefined8 *)(param_1 + 0xa3e58) = 0;
  *(undefined8 *)(param_1 + 0xa3e70) = 0;
  *(undefined8 *)(param_1 + 0xa3e68) = 0;
  *(undefined8 *)(param_1 + 0xa3e80) = 0;
  *(undefined8 *)(param_1 + 0xa3e78) = 0;
  *(undefined8 *)(param_1 + 0xa3e90) = 0;
  *(undefined8 *)(param_1 + 0xa3e88) = 0;
  *(undefined8 *)(param_1 + 0xa3ea0) = 0;
  *(undefined8 *)(param_1 + 0xa3e98) = 0;
  *(undefined8 *)(param_1 + 0xa3eb0) = 0;
  *(undefined8 *)(param_1 + 0xa3ea8) = 0;
  *(undefined8 *)(param_1 + 0xa3ec0) = 0;
  *(undefined8 *)(param_1 + 0xa3eb8) = 0;
  *(undefined8 *)(param_1 + 0xa3ed0) = 0;
  *(undefined8 *)(param_1 + 0xa3ec8) = 0;
  *(undefined8 *)(param_1 + 0xa3ee0) = 0;
  *(undefined8 *)(param_1 + 0xa3ed8) = 0;
  *(undefined8 *)(param_1 + 0xa3ef0) = 0;
  *(undefined8 *)(param_1 + 0xa3ee8) = 0;
  *(undefined8 *)(param_1 + 0xa3f00) = 0;
  *(undefined8 *)(param_1 + 0xa3ef8) = 0;
  *(undefined8 *)(param_1 + 0xa3f10) = 0;
  *(undefined8 *)(param_1 + 0xa3f08) = 0;
  *(undefined8 *)(param_1 + 0xa3f18) = 0;
  FUN_10ad09c3c(param_1 + 0xa3f20);
  FUN_10ad09c3c(param_1 + 0xa3f60);
  *(long *)(param_1 + 0xabfa0) = 0;
  *(undefined8 *)(param_1 + 0xabfa8) = 0;
  *(undefined8 *)(param_1 + 0xabfb0) = 0;
  FUN_10ad09c3c(param_1 + 0xabfb8);
  *(undefined8 *)(param_1 + 0xac020) = 0;
  *(undefined8 *)(param_1 + 0xac018) = 0;
  *(undefined8 *)(param_1 + 0xac010) = 0;
  *(undefined8 *)(param_1 + 0xac008) = 0;
  *(undefined8 *)(param_1 + 0xac000) = 0;
  *(undefined8 *)(param_1 + 0xabff8) = 0;
  FUN_10ad09c3c(param_1 + 0xac028);
  *(long *)(param_1 + 0xa3de8) = param_1 + 0x78;
  *(long *)(param_1 + 0xa3df0) = param_1 + 0x4d8e8;
  *(long *)(param_1 + 0xa3df8) = param_1 + 0x388;
  *(long *)(param_1 + 0xa3e00) = param_1 + 0x5c;
  *(long *)(param_1 + 0xa3e10) = param_1 + 0x368;
  *(long *)(param_1 + 0xa3e08) = param_1 + 0xd8d0;
  *(long *)(param_1 + 0xa3e18) = param_1 + 0x34;
  *(long *)(param_1 + 0xa3e20) = param_1 + 0x88ac;
  *(long *)(param_1 + 0xa3e28) = param_1 + 0x350;
  *(long *)(param_1 + 0xa3e30) = param_1 + 0x50;
  *(long *)(param_1 + 0xa3e38) = param_1 + 0xc8c8;
  *(long *)(param_1 + 0xa3e40) = param_1 + 0x35c;
  *(long *)(param_1 + 0xa3e48) = param_1 + 0x90;
  *(long *)(param_1 + 0xa3e50) = param_1 + 0x4e8f4;
  *(long *)(param_1 + 0xa3e58) = param_1 + 0x3a4;
  *(long *)(param_1 + 0xa3e60) = param_1 + 0xac;
  *(long *)(param_1 + 0xa3e68) = param_1 + 0x4e980;
  *(long *)(param_1 + 0xa3e70) = param_1 + 0x3c4;
  *(long *)(param_1 + 0xa3e78) = param_1 + 0x180;
  *(long *)(param_1 + 0xa3e80) = param_1 + 0x4ea20;
  *(long *)(param_1 + 0xa3e88) = param_1 + 0x494;
  *(long *)(param_1 + 0xa3e90) = param_1 + 0x1a0;
  *(long *)(param_1 + 0xa3e98) = param_1 + 0x50a34;
  *(long *)(param_1 + 0xa3ea0) = param_1 + 0x4bc;
  *(long *)(param_1 + 0xa3ea8) = param_1 + 0x1b0;
  *(undefined8 **)(param_1 + 0xa3eb0) = (undefined8 *)(param_1 + 0x50a48);
  *(long *)(param_1 + 0xa3eb8) = param_1 + 0x4e0;
  *(long *)(param_1 + 0xa3ec0) = param_1 + 0x1c8;
  *(undefined4 **)(param_1 + 0xa3ec8) = (undefined4 *)(param_1 + 0x50a50);
  *(long *)(param_1 + 0xa3ed0) = param_1 + 0x4f8;
  *(long *)(param_1 + 0xa3ed8) = param_1 + 0x1e8;
  *(long *)(param_1 + 0xa3ee0) = param_1 + 0x50a54;
  *(long *)(param_1 + 0xa3ee8) = param_1 + 0x524;
  *(long *)(param_1 + 0xa3ef0) = param_1 + 0x1fc;
  *(undefined4 **)(param_1 + 0xa3ef8) = (undefined4 *)(param_1 + 0x50a58);
  *(long *)(param_1 + 0xa3f00) = param_1 + 0x53c;
  *(long *)(param_1 + 0xa3f10) = param_1 + 0x50a5c;
  *(long *)(param_1 + 0xa3f18) = param_1 + 0x550;
  *(long *)(param_1 + 0xa3f08) = param_1 + 0x210;
  *(long *)(param_1 + 0xabfa8) = param_1 + 0x6cac0;
  *(long *)(param_1 + 0xabfb0) = param_1 + 0x60c;
  *(long *)(param_1 + 0xabfa0) = param_1 + 0x238;
  *(long *)(param_1 + 0xabff8) = param_1 + 0x2a0;
  *(long *)(param_1 + 0xac000) = param_1 + 0x7db4c;
  *(undefined8 **)(param_1 + 0xac008) = (undefined8 *)(param_1 + 0x4774);
  *(long *)(param_1 + 0xac010) = param_1 + 0x2dc;
  *(long *)(param_1 + 0xac018) = param_1 + 0x95b9c;
  *(long *)(param_1 + 0xac020) = param_1 + 0x6804;
  *(long *)(param_1 + 0xb4070) = param_1 + 0x95dac;
  *(long *)(param_1 + 0xb4078) = param_1 + 0x6820;
  *(long *)(param_1 + 0xb4068) = param_1 + 0x2ec;
  return param_1;
}



/* Entry: 10ad07008; end: 10ad073d3;  */

undefined8 FUN_10ad07008(long param_1,float *param_2,float *param_3,float *param_4,uint param_5)

{
  long lVar1;
  float *pfVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (*(int *)(param_1 + 0x324) == 0) {
    if (param_5 != 0) {
      _memmove(param_4,param_2,-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2)
      ;
    }
  }
  else if (0 < (int)param_5) {
    uVar3 = (ulong)param_5;
    pfVar2 = param_3;
    do {
      fVar4 = *param_2 * *(float *)(param_1 + 0x328);
      *param_4 = fVar4;
      fVar4 = ABS(fVar4);
      fVar5 = *(float *)(param_1 + 0x88a4) - fVar4;
      lVar1 = 0;
      if (0.0 <= fVar5) {
        lVar1 = 4;
      }
      *(float *)(param_1 + 0x88a4) = fVar4 + *(float *)(param_1 + 0x330 + lVar1) * fVar5;
      fVar4 = *param_4 * *param_4;
      fVar5 = *(float *)(param_1 + 0x88a8) - fVar4;
      lVar1 = 0;
      if (0.0 <= fVar5) {
        lVar1 = 4;
      }
      *(float *)(param_1 + 0x88a8) = fVar4 + *(float *)(param_1 + 0x338 + lVar1) * fVar5;
      func_0x00010ad0db78(param_1 + 0xa3e60,param_4,param_4);
      FUN_10ad0e848(param_1 + 0xabfb8,param_4,param_4);
      FUN_10ad11758(param_1 + 0xa3e18,param_4,param_4);
      FUN_10ad0f8ec(param_1 + 0xa3f20,param_4,param_4);
      if (param_3 == (float *)0x0) {
        FUN_10ad11ec4(param_1 + 0xa3e30,param_4,param_4);
        FUN_10ad0cce4(param_1 + 0xa3de8,param_4,param_4);
        FUN_10ad1128c(param_1 + 0xa3e48,param_4,param_4);
        FUN_10ad11ba0(param_1 + 0xa3e90,param_4,param_4);
        FUN_10ad0b8a0(param_1 + 0xa3e78,param_4,param_4);
        FUN_10ad0c470(param_1 + 0xa3ed8,param_4,param_4);
        FUN_10ad0bf50(param_1 + 0xa3ec0,param_4,param_4);
        func_0x00010ad0e408(param_1 + 0xa3ea8,param_4,param_4);
        func_0x00010ad0c7ec(param_1 + 0xa3e00,param_4,param_4);
        func_0x00010ad0d3f0(param_1 + 0xa3f08,param_4,param_4);
      }
      else {
        if (*(int *)(param_1 + 0x340) != 0) {
          *pfVar2 = *pfVar2 * *(float *)(param_1 + 0x34c);
          FUN_10ad0a490(param_1 + 0xac028,param_4,pfVar2,param_4);
        }
        FUN_10ad11ec4(param_1 + 0xa3e30,param_4,param_4);
        FUN_10ad0cce4(param_1 + 0xa3de8,param_4,param_4);
        FUN_10ad1128c(param_1 + 0xa3e48,param_4,param_4);
        FUN_10ad11ba0(param_1 + 0xa3e90,param_4,param_4);
        FUN_10ad0b8a0(param_1 + 0xa3e78,param_4,param_4);
        FUN_10ad0c470(param_1 + 0xa3ed8,param_4,param_4);
        FUN_10ad0bf50(param_1 + 0xa3ec0,param_4,param_4);
        func_0x00010ad0e408(param_1 + 0xa3ea8,param_4,param_4);
        func_0x00010ad0c7ec(param_1 + 0xa3e00,param_4,param_4);
        func_0x00010ad0d3f0(param_1 + 0xa3f08,param_4,param_4);
        if (*(int *)(param_1 + 0x340) != 0) {
          *param_4 = *pfVar2 * *(float *)(param_1 + 0x348) + *(float *)(param_1 + 0x344) * *param_4;
        }
      }
      func_0x00010ad0d108(param_1 + 0xa3ef0,param_4,param_4);
      FUN_10ad0f5ac(param_1 + 0xac010,param_4,param_4);
      *param_4 = *param_4 * *(float *)(param_1 + 0x32c);
      pfVar2 = pfVar2 + 1;
      uVar3 = uVar3 - 1;
      param_4 = param_4 + 1;
      param_2 = param_2 + 1;
    } while (uVar3 != 0);
  }
  return 0;
}



/* Entry: 10ad073d4; end: 10ad0775b;  */

undefined8 FUN_10ad073d4(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uVar12;
  
  _bzero(param_1 + 0xc,0xa3db4);
  *(undefined8 *)(param_1 + 2) = 1;
  *param_1 = param_2;
  param_1[1] = (int)param_3;
  param_1[0xc9] = 1;
  uVar12 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0xca) = uVar12;
  uVar8 = _expf(-2.2 / ((float)(int)param_3 * 0.3),0x3e99999a);
  *(undefined8 *)(param_1 + 6) = 0x4396000043960000;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0x4396000043960000;
  param_1[0xce] = uVar8;
  param_1[0xcf] = uVar8;
  param_1[0xcc] = uVar8;
  param_1[0xcd] = uVar8;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xd1] = 0x3f800000;
  param_1[0xd3] = 0x3f800000;
  FUN_10ad118d8(param_1 + 0x28f86,param_3);
  iVar1 = param_1[1];
  puVar2 = *(undefined4 **)(param_1 + 0x28f8c);
  *puVar2 = 0;
  puVar4 = *(undefined4 **)(param_1 + 0x28f90);
  *puVar4 = 0;
  fVar9 = (float)iVar1;
  puVar4[1] = (uint)fVar9 ^ (uint)ABS(fVar9);
  *(undefined8 *)(puVar2 + 1) = 0;
  puVar4[2] = 0.0 / (float)iVar1;
  func_0x00010ad0c8bc(param_1 + 0x28f80);
  iVar1 = param_1[1];
  puVar2 = *(undefined4 **)(param_1 + 0x28f7a);
  *puVar2 = 0;
  puVar4 = *(undefined4 **)(param_1 + 0x28f7e);
  *puVar4 = 0;
  fVar9 = (float)iVar1;
  puVar4[1] = (uint)fVar9 ^ (uint)ABS(fVar9);
  *(undefined8 *)(puVar2 + 1) = 0;
  fVar9 = (float)iVar1;
  fVar11 = 0.0 / fVar9;
  puVar4[2] = fVar11;
  puVar4[6] = 0;
  *(undefined8 *)(puVar2 + 4) = 0x42480000;
  *(undefined8 *)(puVar4 + 4) = 0x3f0000003f000000;
  puVar2 = *(undefined4 **)(param_1 + 0x28f92);
  *puVar2 = 0;
  puVar4 = *(undefined4 **)(param_1 + 0x28f96);
  *puVar4 = 0;
  puVar4[1] = 1.0 / fVar9;
  *(undefined8 *)(puVar2 + 1) = 0x3f800000;
  puVar4[2] = fVar11;
  puVar4[6] = 0;
  *(undefined8 *)(puVar2 + 4) = 0x42480000;
  *(undefined8 *)(puVar4 + 4) = 0x3f0000003f000000;
  puVar2[6] = 0;
  puVar4[7] = 0;
  FUN_10ad0dfb0(param_1 + 0x28f98);
  FUN_10ad0bb18(param_1 + 0x28f9e,param_1[1]);
  iVar1 = param_1[1];
  plVar7 = (long *)(param_1 + 0x28fa4);
  *(undefined4 *)*plVar7 = 0;
  **(undefined4 **)(param_1 + 0x28fa8) = 0;
  FUN_10ad11c84(plVar7,iVar1);
  lVar3 = *plVar7;
  *(undefined4 *)(lVar3 + 4) = 0;
  lVar5 = *(long *)(param_1 + 0x28fa8);
  *(float *)(lVar5 + 4) = 0.0 / (float)iVar1;
  *(undefined4 *)(lVar3 + 0xc) = 0x42c80000;
  *(undefined8 *)(lVar5 + 8) = 0x3f80000000000000;
  FUN_10ad0e484(param_1 + 0x28faa,param_1[1]);
  FUN_10ad0c010(param_1 + 0x28fb0,param_1[1]);
  puVar2 = *(undefined4 **)(param_1 + 0x28fb6);
  *puVar2 = 0;
  puVar6 = *(undefined8 **)(param_1 + 0x28fba);
  *puVar6 = 0x3f80000000000000;
  *(undefined8 *)(puVar2 + 1) = 0;
  puVar6[1] = 0x3f80000000000000;
  *(undefined8 *)(puVar2 + 3) = 0;
  puVar6[2] = 0x3f800000;
  iVar1 = param_1[1];
  puVar4 = *(undefined4 **)(param_1 + 0x28fbc);
  *puVar4 = 0;
  puVar2 = *(undefined4 **)(param_1 + 0x28fc0);
  *puVar2 = 0;
  *(undefined8 *)(puVar2 + 1) = uVar12;
  fVar9 = (float)iVar1;
  uVar8 = _expf(-2.2 / (float)((uint)fVar9 ^ (uint)ABS(fVar9)),0);
  puVar2[4] = uVar8;
  *(undefined8 *)(puVar4 + 3) = 0x41f0000000000000;
  *(undefined8 *)(puVar4 + 1) = 0;
  uVar8 = _expf();
  puVar2[3] = uVar8;
  FUN_10ad0d558(param_1 + 0x28fc2,iVar1);
  FUN_10ad10668(param_1 + 0x28fc8,param_1[1]);
  FUN_10ad0ef10(param_1 + 0x2afee,param_1[1]);
  uVar8 = param_1[1];
  puVar2 = *(undefined4 **)(param_1 + 0x2b004);
  *puVar2 = 0;
  puVar4 = *(undefined4 **)(param_1 + 0x2b008);
  puVar4[2] = 0x3f800000;
  *(undefined8 *)(puVar2 + 1) = 0;
  *puVar4 = 0;
  puVar4[1] = 0x3f800000;
  puVar2[3] = 0x41f00000;
  uVar10 = _expf();
  puVar4[6] = uVar10;
  puVar4[5] = 0x3f6e307d;
  *(undefined8 *)(puVar4 + 3) = 0x3f8147ae3c2237c3;
  *(undefined8 *)(*(long *)(param_1 + 0x2b006) + 0x208) = 0x3f00000000;
  FUN_10ad0b0d0(param_1 + 0x2b00a,uVar8);
  return 0;
}



/* Entry: 10ad0775c; end: 10ad07b8b;  */

void FUN_10ad0775c(undefined8 param_1,uint param_2)

{
  if ((param_2 >> 0x10 & 0xff) < 0x21) {
                    /* WARNING: Could not recover jumptable at 0x00010ad07794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e50dd78)[((ulong)param_2 & 0xff0000) >> 0x10] * 4 + 0x10ad07798)
    )(1);
    return;
  }
  return;
}



/* Entry: 10ad07b8c; end: 10ad07d67;  */

undefined8 FUN_10ad07b8c(undefined8 param_1,uint param_2)

{
  if ((param_2 >> 0x10 & 0xff) < 0x11) {
                    /* WARNING: Could not recover jumptable at 0x00010ad07bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e50dda6)[((ulong)param_2 & 0xff0000) >> 0x10] * 4 + 0x10ad07bb4)
    )();
    return param_1;
  }
  return 1;
}



/* Entry: 10ad07d68; end: 10ad07deb;  */

long * FUN_10ad07d68(long *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  lVar1 = 0xb4080;
  __Znwm();
  FUN_10ad06c90();
  lVar2 = *param_1;
  *param_1 = lVar1;
  if (lVar2 != 0) {
    FUN_10ad09c98(param_1);
  }
  return param_1;
}



/* Entry: 10ad07dec; end: 10ad09c3b;  */

/* WARNING: Removing unreachable block (ram,0x00010ad09c10) */

undefined8 FUN_10ad07dec(undefined8 param_1)

{
  undefined1 *unaff_x19;
  long lVar1;
  char *pcVar2;
  undefined1 auStack_1a58 [24];
  undefined4 uStack_1a40;
  undefined1 auStack_1a38 [24];
  undefined4 uStack_1a20;
  undefined1 auStack_1a18 [24];
  undefined4 uStack_1a00;
  undefined1 auStack_19f8 [24];
  undefined4 uStack_19e0;
  undefined1 auStack_19d8 [24];
  undefined4 uStack_19c0;
  undefined1 auStack_19b8 [24];
  undefined4 uStack_19a0;
  undefined1 auStack_1998 [24];
  undefined4 uStack_1980;
  undefined1 auStack_1978 [24];
  undefined4 uStack_1960;
  undefined1 auStack_1958 [24];
  undefined4 uStack_1940;
  undefined1 auStack_1938 [24];
  undefined4 uStack_1920;
  undefined1 auStack_1918 [24];
  undefined4 uStack_1900;
  undefined1 auStack_18f8 [24];
  undefined4 uStack_18e0;
  undefined1 auStack_18d8 [24];
  undefined4 uStack_18c0;
  undefined1 auStack_18b8 [24];
  undefined4 uStack_18a0;
  undefined1 auStack_1898 [24];
  undefined4 uStack_1880;
  undefined1 auStack_1878 [24];
  undefined4 uStack_1860;
  undefined1 auStack_1858 [24];
  undefined4 uStack_1840;
  undefined1 auStack_1838 [24];
  undefined4 uStack_1820;
  undefined1 auStack_1818 [24];
  undefined4 uStack_1800;
  undefined1 auStack_17f8 [24];
  undefined4 uStack_17e0;
  undefined1 auStack_17d8 [24];
  undefined4 uStack_17c0;
  undefined1 auStack_17b8 [24];
  undefined4 uStack_17a0;
  undefined1 auStack_1798 [24];
  undefined4 uStack_1780;
  undefined1 auStack_1778 [24];
  undefined4 uStack_1760;
  undefined1 auStack_1758 [24];
  undefined4 uStack_1740;
  undefined1 auStack_1738 [24];
  undefined4 uStack_1720;
  undefined1 auStack_1718 [24];
  undefined4 uStack_1700;
  undefined1 auStack_16f8 [24];
  undefined4 uStack_16e0;
  undefined1 auStack_16d8 [24];
  undefined4 uStack_16c0;
  undefined1 auStack_16b8 [24];
  undefined4 uStack_16a0;
  undefined1 auStack_1698 [24];
  undefined4 uStack_1680;
  undefined1 auStack_1678 [24];
  undefined4 uStack_1660;
  undefined1 auStack_1658 [24];
  undefined4 uStack_1640;
  undefined1 auStack_1638 [24];
  undefined4 uStack_1620;
  undefined1 auStack_1618 [24];
  undefined4 uStack_1600;
  undefined1 auStack_15f8 [24];
  undefined4 uStack_15e0;
  undefined1 auStack_15d8 [24];
  undefined4 uStack_15c0;
  undefined1 auStack_15b8 [24];
  undefined4 uStack_15a0;
  undefined1 auStack_1598 [24];
  undefined4 uStack_1580;
  undefined1 auStack_1578 [24];
  undefined4 uStack_1560;
  undefined1 auStack_1558 [24];
  undefined4 uStack_1540;
  undefined1 auStack_1538 [24];
  undefined4 uStack_1520;
  undefined1 auStack_1518 [24];
  undefined4 uStack_1500;
  undefined1 auStack_14f8 [24];
  undefined4 uStack_14e0;
  undefined1 auStack_14d8 [24];
  undefined4 uStack_14c0;
  undefined1 auStack_14b8 [24];
  undefined4 uStack_14a0;
  undefined1 auStack_1498 [24];
  undefined4 uStack_1480;
  undefined1 auStack_1478 [24];
  undefined4 uStack_1460;
  undefined1 auStack_1458 [24];
  undefined4 uStack_1440;
  undefined1 auStack_1438 [24];
  undefined4 uStack_1420;
  undefined1 auStack_1418 [24];
  undefined4 uStack_1400;
  undefined1 auStack_13f8 [24];
  undefined4 uStack_13e0;
  undefined1 auStack_13d8 [24];
  undefined4 uStack_13c0;
  undefined1 auStack_13b8 [24];
  undefined4 uStack_13a0;
  undefined1 auStack_1398 [24];
  undefined4 uStack_1380;
  undefined1 auStack_1378 [24];
  undefined4 uStack_1360;
  undefined1 auStack_1358 [24];
  undefined4 uStack_1340;
  undefined1 auStack_1338 [24];
  undefined4 uStack_1320;
  undefined1 auStack_1318 [24];
  undefined4 uStack_1300;
  undefined1 auStack_12f8 [24];
  undefined4 uStack_12e0;
  undefined1 auStack_12d8 [24];
  undefined4 uStack_12c0;
  undefined1 auStack_12b8 [24];
  undefined4 uStack_12a0;
  undefined1 auStack_1298 [24];
  undefined4 uStack_1280;
  undefined1 auStack_1278 [24];
  undefined4 uStack_1260;
  undefined1 auStack_1258 [24];
  undefined4 uStack_1240;
  undefined1 auStack_1238 [24];
  undefined4 uStack_1220;
  undefined1 auStack_1218 [24];
  undefined4 uStack_1200;
  undefined1 auStack_11f8 [24];
  undefined4 uStack_11e0;
  undefined1 auStack_11d8 [24];
  undefined4 uStack_11c0;
  undefined1 auStack_11b8 [24];
  undefined4 uStack_11a0;
  undefined1 auStack_1198 [24];
  undefined4 uStack_1180;
  undefined1 auStack_1178 [24];
  undefined4 uStack_1160;
  undefined1 auStack_1158 [24];
  undefined4 uStack_1140;
  undefined1 auStack_1138 [24];
  undefined4 uStack_1120;
  undefined1 auStack_1118 [24];
  undefined4 uStack_1100;
  undefined1 auStack_10f8 [24];
  undefined4 uStack_10e0;
  undefined1 auStack_10d8 [24];
  undefined4 uStack_10c0;
  undefined1 auStack_10b8 [24];
  undefined4 uStack_10a0;
  undefined1 auStack_1098 [24];
  undefined4 uStack_1080;
  undefined1 auStack_1078 [24];
  undefined4 uStack_1060;
  undefined1 auStack_1058 [24];
  undefined4 uStack_1040;
  undefined1 auStack_1038 [24];
  undefined4 uStack_1020;
  undefined1 auStack_1018 [24];
  undefined4 uStack_1000;
  undefined1 auStack_ff8 [24];
  undefined4 uStack_fe0;
  undefined1 auStack_fd8 [24];
  undefined4 uStack_fc0;
  undefined1 auStack_fb8 [24];
  undefined4 uStack_fa0;
  undefined1 auStack_f98 [24];
  undefined4 uStack_f80;
  undefined1 auStack_f78 [24];
  undefined4 uStack_f60;
  undefined1 auStack_f58 [24];
  undefined4 uStack_f40;
  undefined1 auStack_f38 [24];
  undefined4 uStack_f20;
  undefined1 auStack_f18 [24];
  undefined4 uStack_f00;
  undefined1 auStack_ef8 [24];
  undefined4 uStack_ee0;
  undefined1 auStack_ed8 [24];
  undefined4 uStack_ec0;
  undefined1 auStack_eb8 [24];
  undefined4 uStack_ea0;
  undefined1 auStack_e98 [24];
  undefined4 uStack_e80;
  undefined1 auStack_e78 [24];
  undefined4 uStack_e60;
  undefined1 auStack_e58 [24];
  undefined4 uStack_e40;
  undefined1 auStack_e38 [24];
  undefined4 uStack_e20;
  undefined1 auStack_e18 [24];
  undefined4 uStack_e00;
  undefined1 auStack_df8 [24];
  undefined4 uStack_de0;
  undefined1 auStack_dd8 [24];
  undefined4 uStack_dc0;
  undefined1 auStack_db8 [24];
  undefined4 uStack_da0;
  undefined1 auStack_d98 [24];
  undefined4 uStack_d80;
  undefined1 auStack_d78 [24];
  undefined4 uStack_d60;
  undefined1 auStack_d58 [24];
  undefined4 uStack_d40;
  undefined1 auStack_d38 [24];
  undefined4 uStack_d20;
  undefined1 auStack_d18 [24];
  undefined4 uStack_d00;
  undefined1 auStack_cf8 [24];
  undefined4 uStack_ce0;
  undefined1 auStack_cd8 [24];
  undefined4 uStack_cc0;
  undefined1 auStack_cb8 [24];
  undefined4 uStack_ca0;
  undefined1 auStack_c98 [24];
  undefined4 uStack_c80;
  undefined1 auStack_c78 [24];
  undefined4 uStack_c60;
  undefined1 auStack_c58 [24];
  undefined4 uStack_c40;
  undefined1 auStack_c38 [24];
  undefined4 uStack_c20;
  undefined1 auStack_c18 [24];
  undefined4 uStack_c00;
  undefined1 auStack_bf8 [24];
  undefined4 uStack_be0;
  undefined1 auStack_bd8 [24];
  undefined4 uStack_bc0;
  undefined1 auStack_bb8 [24];
  undefined4 uStack_ba0;
  undefined1 auStack_b98 [24];
  undefined4 uStack_b80;
  undefined1 auStack_b78 [24];
  undefined4 uStack_b60;
  undefined1 auStack_b58 [24];
  undefined4 uStack_b40;
  undefined1 auStack_b38 [24];
  undefined4 uStack_b20;
  undefined1 auStack_b18 [24];
  undefined4 uStack_b00;
  undefined1 auStack_af8 [24];
  undefined4 uStack_ae0;
  undefined1 auStack_ad8 [24];
  undefined4 uStack_ac0;
  undefined1 auStack_ab8 [24];
  undefined4 uStack_aa0;
  undefined1 auStack_a98 [24];
  undefined4 uStack_a80;
  undefined1 auStack_a78 [24];
  undefined4 uStack_a60;
  undefined1 auStack_a58 [24];
  undefined4 uStack_a40;
  undefined1 auStack_a38 [24];
  undefined4 uStack_a20;
  undefined1 auStack_a18 [24];
  undefined4 uStack_a00;
  undefined1 auStack_9f8 [24];
  undefined4 uStack_9e0;
  undefined1 auStack_9d8 [24];
  undefined4 uStack_9c0;
  undefined1 auStack_9b8 [24];
  undefined4 uStack_9a0;
  undefined1 auStack_998 [24];
  undefined4 uStack_980;
  undefined1 auStack_978 [24];
  undefined4 uStack_960;
  undefined1 auStack_958 [24];
  undefined4 uStack_940;
  undefined1 auStack_938 [24];
  undefined4 uStack_920;
  undefined1 auStack_918 [24];
  undefined4 uStack_900;
  undefined1 auStack_8f8 [24];
  undefined4 uStack_8e0;
  undefined1 auStack_8d8 [24];
  undefined4 uStack_8c0;
  undefined1 auStack_8b8 [24];
  undefined4 uStack_8a0;
  undefined1 auStack_898 [24];
  undefined4 uStack_880;
  undefined1 auStack_878 [24];
  undefined4 uStack_860;
  undefined1 auStack_858 [24];
  undefined4 uStack_840;
  undefined1 auStack_838 [24];
  undefined4 uStack_820;
  undefined1 auStack_818 [24];
  undefined4 uStack_800;
  undefined1 auStack_7f8 [24];
  undefined4 uStack_7e0;
  undefined1 auStack_7d8 [24];
  undefined4 uStack_7c0;
  undefined1 auStack_7b8 [24];
  undefined4 uStack_7a0;
  undefined1 auStack_798 [24];
  undefined4 uStack_780;
  undefined1 auStack_778 [24];
  undefined4 uStack_760;
  undefined1 auStack_758 [24];
  undefined4 uStack_740;
  undefined1 auStack_738 [24];
  undefined4 uStack_720;
  undefined1 auStack_718 [24];
  undefined4 uStack_700;
  undefined1 auStack_6f8 [24];
  undefined4 uStack_6e0;
  undefined1 auStack_6d8 [24];
  undefined4 uStack_6c0;
  undefined1 auStack_6b8 [24];
  undefined4 uStack_6a0;
  undefined1 auStack_698 [24];
  undefined4 uStack_680;
  undefined1 auStack_678 [24];
  undefined4 uStack_660;
  undefined1 auStack_658 [24];
  undefined4 uStack_640;
  undefined1 auStack_638 [24];
  undefined4 uStack_620;
  undefined1 auStack_618 [24];
  undefined4 uStack_600;
  undefined1 auStack_5f8 [24];
  undefined4 uStack_5e0;
  undefined1 auStack_5d8 [24];
  undefined4 uStack_5c0;
  undefined1 auStack_5b8 [24];
  undefined4 uStack_5a0;
  undefined1 auStack_598 [24];
  undefined4 uStack_580;
  undefined1 auStack_578 [24];
  undefined4 uStack_560;
  undefined1 auStack_558 [24];
  undefined4 uStack_540;
  undefined1 auStack_538 [24];
  undefined4 uStack_520;
  undefined1 auStack_518 [24];
  undefined4 uStack_500;
  undefined1 auStack_4f8 [24];
  undefined4 uStack_4e0;
  undefined1 auStack_4d8 [24];
  undefined4 uStack_4c0;
  undefined1 auStack_4b8 [24];
  undefined4 uStack_4a0;
  undefined1 auStack_498 [24];
  undefined4 uStack_480;
  undefined1 auStack_478 [24];
  undefined4 uStack_460;
  undefined1 auStack_458 [24];
  undefined4 uStack_440;
  undefined1 auStack_438 [24];
  undefined4 uStack_420;
  undefined1 auStack_418 [24];
  undefined4 uStack_400;
  undefined1 auStack_3f8 [24];
  undefined4 uStack_3e0;
  undefined1 auStack_3d8 [24];
  undefined4 uStack_3c0;
  undefined1 auStack_3b8 [24];
  undefined4 uStack_3a0;
  undefined1 auStack_398 [24];
  undefined4 uStack_380;
  undefined1 auStack_378 [24];
  undefined4 uStack_360;
  undefined1 auStack_358 [24];
  undefined4 uStack_340;
  undefined1 auStack_338 [24];
  undefined4 uStack_320;
  undefined1 auStack_318 [24];
  undefined4 uStack_300;
  undefined1 auStack_2f8 [24];
  undefined4 uStack_2e0;
  undefined1 auStack_2d8 [24];
  undefined4 uStack_2c0;
  undefined1 auStack_2b8 [24];
  undefined4 uStack_2a0;
  undefined1 auStack_298 [24];
  undefined4 uStack_280;
  undefined1 auStack_278 [24];
  undefined4 uStack_260;
  undefined1 auStack_258 [24];
  undefined4 uStack_240;
  undefined1 auStack_238 [24];
  undefined4 uStack_220;
  undefined1 auStack_218 [24];
  undefined4 uStack_200;
  undefined1 auStack_1f8 [24];
  undefined4 uStack_1e0;
  undefined1 auStack_1d8 [24];
  undefined4 uStack_1c0;
  undefined1 auStack_1b8 [24];
  undefined4 uStack_1a0;
  undefined1 auStack_198 [24];
  undefined4 uStack_180;
  undefined1 auStack_178 [24];
  undefined4 uStack_160;
  undefined1 auStack_158 [24];
  undefined4 uStack_140;
  undefined1 auStack_138 [24];
  undefined4 uStack_120;
  undefined1 auStack_118 [24];
  undefined4 uStack_100;
  undefined1 auStack_f8 [24];
  undefined4 uStack_e0;
  undefined1 auStack_d8 [24];
  undefined4 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined4 uStack_a0;
  undefined1 auStack_98 [24];
  undefined4 uStack_80;
  undefined1 auStack_78 [24];
  undefined4 uStack_60;
  undefined8 auStack_58 [2];
  char acStack_41 [9];
  long lStack_38;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001137ecd50 & 1) == 0) {
    param_1 = 0x1137ecd50;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107c2b054(auStack_1a58,&UNK_10f6a32e1);
      uStack_1a40 = 1;
      func_0x000107c2b054(auStack_1a38,&UNK_10f6a32eb);
      uStack_1a20 = 2;
      func_0x000107c2b054(auStack_1a18,&UNK_10f6a32f3);
      uStack_1a00 = 3;
      func_0x000107c2b054(auStack_19f8,&UNK_10f6a32fe);
      uStack_19e0 = 4;
      func_0x000107c2b054(auStack_19d8,&UNK_10f6a330a);
      uStack_19c0 = 5;
      func_0x000107c2b054(auStack_19b8,&UNK_10f6a331a);
      uStack_19a0 = 6;
      func_0x000107c2b054(auStack_1998,&UNK_10f6a332b);
      uStack_1980 = 7;
      func_0x000107c2b054(auStack_1978,&UNK_10f6a3339);
      uStack_1960 = 8;
      func_0x000107c2b054(auStack_1958,&UNK_10f6a3348);
      uStack_1940 = 9;
      func_0x000107c2b054(auStack_1938,&UNK_10f6a3357);
      uStack_1920 = 10;
      func_0x000107c2b054(auStack_1918,&UNK_10f6a3364);
      uStack_1900 = 0xb;
      func_0x000107c2b054(auStack_18f8,&UNK_10f6a3372);
      uStack_18e0 = 0xc;
      func_0x000107c2b054(auStack_18d8,&UNK_10f6a337d);
      uStack_18c0 = 0xd;
      func_0x000107c2b054(auStack_18b8,&UNK_10f6a338a);
      uStack_18a0 = 0x10001;
      func_0x000107c2b054(auStack_1898,&UNK_10f6a3399);
      uStack_1880 = 0x10002;
      func_0x000107c2b054(auStack_1878,&UNK_10f6a33a7);
      uStack_1860 = 0x10003;
      func_0x000107c2b054(auStack_1858,&UNK_10f6a33b8);
      uStack_1840 = 0x20001;
      func_0x000107c2b054(auStack_1838,&UNK_10f6a33d0);
      uStack_1820 = 0x20002;
      func_0x000107c2b054(auStack_1818,&UNK_10f6a33e7);
      uStack_1800 = 0x20003;
      func_0x000107c2b054(auStack_17f8,&UNK_10f6a3401);
      uStack_17e0 = 0x20004;
      func_0x000107c2b054(auStack_17d8,&UNK_10f6a341d);
      uStack_17c0 = 0x30001;
      func_0x000107c2b054(auStack_17b8,&UNK_10f6a3429);
      uStack_17a0 = 0x30002;
      func_0x000107c2b054(auStack_1798,&UNK_10f6a3434);
      uStack_1780 = 0x30003;
      func_0x000107c2b054(auStack_1778,&UNK_10f6a3445);
      uStack_1760 = 0x30004;
      func_0x000107c2b054(auStack_1758,&UNK_10f6a3453);
      uStack_1740 = 0x30005;
      func_0x000107c2b054(auStack_1738,&UNK_10f6a3465);
      uStack_1720 = 0x30006;
      func_0x000107c2b054(auStack_1718,&UNK_10f6a3474);
      uStack_1700 = 0x30007;
      func_0x000107c2b054(auStack_16f8,&UNK_10f6a3483);
      uStack_16e0 = 0x40001;
      func_0x000107c2b054(auStack_16d8,&UNK_10f6a3492);
      uStack_16c0 = 0x40002;
      func_0x000107c2b054(auStack_16b8,&UNK_10f6a34a0);
      uStack_16a0 = 0x40003;
      func_0x000107c2b054(auStack_1698,&UNK_10f6a34b1);
      uStack_1680 = 0x40004;
      func_0x000107c2b054(auStack_1678,&UNK_10f6a34c2);
      uStack_1660 = 0x40005;
      func_0x000107c2b054(auStack_1658,&UNK_10f6a34d6);
      uStack_1640 = 0x40006;
      func_0x000107c2b054(auStack_1638,&UNK_10f6a34e7);
      uStack_1620 = 0x50001;
      func_0x000107c2b054(auStack_1618,&UNK_10f6a34f5);
      uStack_1600 = 0x50002;
      func_0x000107c2b054(auStack_15f8,&UNK_10f6a3502);
      uStack_15e0 = 0x50003;
      func_0x000107c2b054(auStack_15d8,&UNK_10f6a3512);
      uStack_15c0 = 0x50004;
      func_0x000107c2b054(auStack_15b8,&UNK_10f6a3522);
      uStack_15a0 = 0x50005;
      func_0x000107c2b054(auStack_1598,&UNK_10f6a3535);
      uStack_1580 = 0x50006;
      func_0x000107c2b054(auStack_1578,&UNK_10f6a3545);
      uStack_1560 = 0x50007;
      func_0x000107c2b054(auStack_1558,&UNK_10f6a3559);
      uStack_1540 = 0x60001;
      func_0x000107c2b054(auStack_1538,&UNK_10f6a3569);
      uStack_1520 = 0x60002;
      func_0x000107c2b054(auStack_1518,&UNK_10f6a357a);
      uStack_1500 = 0x60003;
      func_0x000107c2b054(auStack_14f8,&UNK_10f6a358b);
      uStack_14e0 = 0xf0;
      func_0x000107c2b054(auStack_14d8,&UNK_10f6a359e);
      uStack_14c0 = 0xf;
      func_0x000107c2b054(auStack_14b8,&UNK_10f6a35b7);
      uStack_14a0 = 0x10;
      func_0x000107c2b054(auStack_1498,&UNK_10f6a35c6);
      uStack_1480 = 0x60011;
      func_0x000107c2b054(auStack_1478,&UNK_10f6a35dc);
      uStack_1460 = 0x60012;
      func_0x000107c2b054(auStack_1458,&UNK_10f6a35f5);
      uStack_1440 = 0x60013;
      func_0x000107c2b054(auStack_1438,&UNK_10f6a3609);
      uStack_1420 = 0x60014;
      func_0x000107c2b054(auStack_1418,&UNK_10f6a361d);
      uStack_1400 = 0x60015;
      func_0x000107c2b054(auStack_13f8,&UNK_10f6a362e);
      uStack_13e0 = 0x20;
      func_0x000107c2b054(auStack_13d8,&UNK_10f6a363d);
      uStack_13c0 = 0x60021;
      func_0x000107c2b054(auStack_13b8,&UNK_10f6a3653);
      uStack_13a0 = 0x60022;
      func_0x000107c2b054(auStack_1398,&UNK_10f6a366c);
      uStack_1380 = 0x60023;
      func_0x000107c2b054(auStack_1378,&UNK_10f6a3680);
      uStack_1360 = 0x60024;
      func_0x000107c2b054(auStack_1358,&UNK_10f6a3694);
      uStack_1340 = 0x60025;
      func_0x000107c2b054(auStack_1338,&UNK_10f6a36a5);
      uStack_1320 = 0x30;
      func_0x000107c2b054(auStack_1318,&UNK_10f6a36b4);
      uStack_1300 = 0x60031;
      func_0x000107c2b054(auStack_12f8,&UNK_10f6a36ca);
      uStack_12e0 = 0x60032;
      func_0x000107c2b054(auStack_12d8,&UNK_10f6a36e3);
      uStack_12c0 = 0x60033;
      func_0x000107c2b054(auStack_12b8,&UNK_10f6a36f7);
      uStack_12a0 = 0x60034;
      func_0x000107c2b054(auStack_1298,&UNK_10f6a370b);
      uStack_1280 = 0x60035;
      func_0x000107c2b054(auStack_1278,&UNK_10f6a371c);
      uStack_1260 = 0x40;
      func_0x000107c2b054(auStack_1258,&UNK_10f6a372b);
      uStack_1240 = 0x60041;
      func_0x000107c2b054(auStack_1238,&UNK_10f6a3741);
      uStack_1220 = 0x60042;
      func_0x000107c2b054(auStack_1218,&UNK_10f6a375a);
      uStack_1200 = 0x60043;
      func_0x000107c2b054(auStack_11f8,&UNK_10f6a376e);
      uStack_11e0 = 0x60044;
      func_0x000107c2b054(auStack_11d8,&UNK_10f6a3782);
      uStack_11c0 = 0x60045;
      func_0x000107c2b054(auStack_11b8,&UNK_10f6a3793);
      uStack_11a0 = 0x50;
      func_0x000107c2b054(auStack_1198,&UNK_10f6a37a2);
      uStack_1180 = 0x60051;
      func_0x000107c2b054(auStack_1178,&UNK_10f6a37b8);
      uStack_1160 = 0x60052;
      func_0x000107c2b054(auStack_1158,&UNK_10f6a37d1);
      uStack_1140 = 0x60053;
      func_0x000107c2b054(auStack_1138,&UNK_10f6a37e5);
      uStack_1120 = 0x60054;
      func_0x000107c2b054(auStack_1118,&UNK_10f6a37f9);
      uStack_1100 = 0x60055;
      func_0x000107c2b054(auStack_10f8,&UNK_10f6a380a);
      uStack_10e0 = 0x60;
      func_0x000107c2b054(auStack_10d8,&UNK_10f6a3819);
      uStack_10c0 = 0x60061;
      func_0x000107c2b054(auStack_10b8,&UNK_10f6a382f);
      uStack_10a0 = 0x60062;
      func_0x000107c2b054(auStack_1098,&UNK_10f6a3848);
      uStack_1080 = 0x60063;
      func_0x000107c2b054(auStack_1078,&UNK_10f6a385c);
      uStack_1060 = 0x60064;
      func_0x000107c2b054(auStack_1058,&UNK_10f6a3870);
      uStack_1040 = 0x60065;
      func_0x000107c2b054(auStack_1038,&UNK_10f6a3881);
      uStack_1020 = 0x70;
      func_0x000107c2b054(auStack_1018,&UNK_10f6a3890);
      uStack_1000 = 0x60071;
      func_0x000107c2b054(auStack_ff8,&UNK_10f6a38a6);
      uStack_fe0 = 0x60072;
      func_0x000107c2b054(auStack_fd8,&UNK_10f6a38bf);
      uStack_fc0 = 0x60073;
      func_0x000107c2b054(auStack_fb8,&UNK_10f6a38d3);
      uStack_fa0 = 0x60074;
      func_0x000107c2b054(auStack_f98,&UNK_10f6a38e7);
      uStack_f80 = 0x60075;
      func_0x000107c2b054(auStack_f78,&UNK_10f6a38f8);
      uStack_f60 = 0x80;
      func_0x000107c2b054(auStack_f58,&UNK_10f6a3907);
      uStack_f40 = 0x60081;
      func_0x000107c2b054(auStack_f38,&UNK_10f6a391d);
      uStack_f20 = 0x60082;
      func_0x000107c2b054(auStack_f18,&UNK_10f6a3936);
      uStack_f00 = 0x60083;
      func_0x000107c2b054(auStack_ef8,&UNK_10f6a394a);
      uStack_ee0 = 0x60084;
      func_0x000107c2b054(auStack_ed8,&UNK_10f6a395e);
      uStack_ec0 = 0x60085;
      func_0x000107c2b054(auStack_eb8,&UNK_10f6a396f);
      uStack_ea0 = 0x90;
      func_0x000107c2b054(auStack_e98,&UNK_10f6a397e);
      uStack_e80 = 0x60091;
      func_0x000107c2b054(auStack_e78,&UNK_10f6a3994);
      uStack_e60 = 0x60092;
      func_0x000107c2b054(auStack_e58,&UNK_10f6a39ad);
      uStack_e40 = 0x60093;
      func_0x000107c2b054(auStack_e38,&UNK_10f6a39c1);
      uStack_e20 = 0x60094;
      func_0x000107c2b054(auStack_e18,&UNK_10f6a39d5);
      uStack_e00 = 0x60095;
      func_0x000107c2b054(auStack_df8,&UNK_10f6a39e6);
      uStack_de0 = 0xa0;
      func_0x000107c2b054(auStack_dd8,&UNK_10f6a39f5);
      uStack_dc0 = 0x600a1;
      func_0x000107c2b054(auStack_db8,&UNK_10f6a3a0b);
      uStack_da0 = 0x600a2;
      func_0x000107c2b054(auStack_d98,&UNK_10f6a3a24);
      uStack_d80 = 0x600a3;
      func_0x000107c2b054(auStack_d78,&UNK_10f6a3a38);
      uStack_d60 = 0x600a4;
      func_0x000107c2b054(auStack_d58,&UNK_10f6a3a4c);
      uStack_d40 = 0x600a5;
      func_0x000107c2b054(auStack_d38,&UNK_10f6a3a5d);
      uStack_d20 = 0x70001;
      func_0x000107c2b054(auStack_d18,&UNK_10f6a3a6b);
      uStack_d00 = 0x70002;
      func_0x000107c2b054(auStack_cf8,&UNK_10f6a3a78);
      uStack_ce0 = 0x70003;
      func_0x000107c2b054(auStack_cd8,&UNK_10f6a3a85);
      uStack_cc0 = 0x70004;
      func_0x000107c2b054(auStack_cb8,&UNK_10f6a3a95);
      uStack_ca0 = 0x70005;
      func_0x000107c2b054(auStack_c98,&UNK_10f6a3aa5);
      uStack_c80 = 0x70006;
      func_0x000107c2b054(auStack_c78,&UNK_10f6a3ab8);
      uStack_c60 = 0x70007;
      func_0x000107c2b054(auStack_c58,&UNK_10f6a3ac8);
      uStack_c40 = 0x70008;
      func_0x000107c2b054(auStack_c38,&UNK_10f6a3ad8);
      uStack_c20 = 0x80001;
      func_0x000107c2b054(auStack_c18,&UNK_10f6a3aee);
      uStack_c00 = 0x80002;
      func_0x000107c2b054(auStack_bf8,&UNK_10f6a3b06);
      uStack_be0 = 0x80003;
      func_0x000107c2b054(auStack_bd8,&UNK_10f6a3b25);
      uStack_bc0 = 0x80004;
      func_0x000107c2b054(auStack_bb8,&UNK_10f6a3b40);
      uStack_ba0 = 0x90001;
      func_0x000107c2b054(auStack_b98,&UNK_10f6a3b52);
      uStack_b80 = 0x90002;
      func_0x000107c2b054(auStack_b78,&UNK_10f6a3b67);
      uStack_b60 = 0x90003;
      func_0x000107c2b054(auStack_b58,&UNK_10f6a3b7a);
      uStack_b40 = 0x90004;
      func_0x000107c2b054(auStack_b38,&UNK_10f6a3b8d);
      uStack_b20 = 0x90005;
      func_0x000107c2b054(auStack_b18,&UNK_10f6a3ba1);
      uStack_b00 = 0x90006;
      func_0x000107c2b054(auStack_af8,&UNK_10f6a3bb5);
      uStack_ae0 = 0xa0001;
      func_0x000107c2b054(auStack_ad8,&UNK_10f6a3bc7);
      uStack_ac0 = 0xa0002;
      func_0x000107c2b054(auStack_ab8,&UNK_10f6a3bdc);
      uStack_aa0 = 0xa0003;
      func_0x000107c2b054(auStack_a98,&UNK_10f6a3bed);
      uStack_a80 = 0xa0004;
      func_0x000107c2b054(auStack_a78,&UNK_10f6a3bfd);
      uStack_a60 = 0xa0005;
      func_0x000107c2b054(auStack_a58,&UNK_10f6a3c10);
      uStack_a40 = 0xa0006;
      func_0x000107c2b054(auStack_a38,&UNK_10f6a3c1f);
      uStack_a20 = 0xa0007;
      func_0x000107c2b054(auStack_a18,&UNK_10f6a3c2e);
      uStack_a00 = 0xb0001;
      func_0x000107c2b054(auStack_9f8,&UNK_10f6a3c40);
      uStack_9e0 = 0xb0002;
      func_0x000107c2b054(auStack_9d8,&UNK_10f6a3c51);
      uStack_9c0 = 0xb0003;
      func_0x000107c2b054(auStack_9b8,&UNK_10f6a3c66);
      uStack_9a0 = 0xb0004;
      func_0x000107c2b054(auStack_998,&UNK_10f6a3c77);
      uStack_980 = 0xb0005;
      func_0x000107c2b054(auStack_978,&UNK_10f6a3c8e);
      uStack_960 = 0xc0001;
      func_0x000107c2b054(auStack_958,&UNK_10f6a3c9d);
      uStack_940 = 0xc0002;
      func_0x000107c2b054(auStack_938,&UNK_10f6a3caf);
      uStack_920 = 0xc0003;
      func_0x000107c2b054(auStack_918,&UNK_10f6a3cbb);
      uStack_900 = 0xc0004;
      func_0x000107c2b054(auStack_8f8,&UNK_10f6a3cc7);
      uStack_8e0 = 0xc0005;
      func_0x000107c2b054(auStack_8d8,&UNK_10f6a3cd5);
      uStack_8c0 = 0xd0001;
      func_0x000107c2b054(auStack_8b8,&UNK_10f6a3cec);
      uStack_8a0 = 0xd0002;
      func_0x000107c2b054(auStack_898,&UNK_10f6a3d00);
      uStack_880 = 0xd0003;
      func_0x000107c2b054(auStack_878,&UNK_10f6a3d17);
      uStack_860 = 0xd0004;
      func_0x000107c2b054(auStack_858,&UNK_10f6a3d2a);
      uStack_840 = 0xd0005;
      func_0x000107c2b054(auStack_838,&UNK_10f6a3d3f);
      uStack_820 = 0xd0006;
      func_0x000107c2b054(auStack_818,&UNK_10f6a3d58);
      uStack_800 = 0xd0007;
      func_0x000107c2b054(auStack_7f8,&UNK_10f6a3d6f);
      uStack_7e0 = 0xd0008;
      func_0x000107c2b054(auStack_7d8,&UNK_10f6a3d86);
      uStack_7c0 = 0xd0009;
      func_0x000107c2b054(auStack_7b8,&UNK_10f6a3d99);
      uStack_7a0 = 0xe0001;
      func_0x000107c2b054(auStack_798,&UNK_10f6a3dae);
      uStack_780 = 0xe0002;
      func_0x000107c2b054(auStack_778,&UNK_10f6a3dc7);
      uStack_760 = 0xe0003;
      func_0x000107c2b054(auStack_758,&UNK_10f6a3ddd);
      uStack_740 = 0xe0004;
      func_0x000107c2b054(auStack_738,&UNK_10f6a3df0);
      uStack_720 = 0xe0005;
      func_0x000107c2b054(auStack_718,&UNK_10f6a3e0a);
      uStack_700 = 0xe0006;
      func_0x000107c2b054(auStack_6f8,&UNK_10f6a3e25);
      uStack_6e0 = 0xe0007;
      func_0x000107c2b054(auStack_6d8,&UNK_10f6a3e43);
      uStack_6c0 = 0xe0008;
      func_0x000107c2b054(auStack_6b8,&UNK_10f6a3e60);
      uStack_6a0 = 0xe0009;
      func_0x000107c2b054(auStack_698,&UNK_10f6a3e8c);
      uStack_680 = 0xe000a;
      func_0x000107c2b054(auStack_678,&UNK_10f6a3eb2);
      uStack_660 = 0xe0101;
      func_0x000107c2b054(auStack_658,&UNK_10f6a3ece);
      uStack_640 = 0xe0102;
      func_0x000107c2b054(auStack_638,&UNK_10f6a3ee7);
      uStack_620 = 0xe0103;
      func_0x000107c2b054(auStack_618,&UNK_10f6a3f02);
      uStack_600 = 0xe0104;
      func_0x000107c2b054(auStack_5f8,&UNK_10f6a3f25);
      uStack_5e0 = 0xe0105;
      func_0x000107c2b054(auStack_5d8,&UNK_10f6a3f48);
      uStack_5c0 = 0xe0106;
      func_0x000107c2b054(auStack_5b8,&UNK_10f6a3f6a);
      uStack_5a0 = 0xe0107;
      func_0x000107c2b054(auStack_598,&UNK_10f6a3f8c);
      uStack_580 = 0xe0108;
      func_0x000107c2b054(auStack_578,&UNK_10f6a3faf);
      uStack_560 = 0xe0109;
      func_0x000107c2b054(auStack_558,&UNK_10f6a3fce);
      uStack_540 = 0xe010a;
      func_0x000107c2b054(auStack_538,&UNK_10f6a3fee);
      uStack_520 = 0xe010b;
      func_0x000107c2b054(auStack_518,&UNK_10f6a400e);
      uStack_500 = 0xe010c;
      func_0x000107c2b054(auStack_4f8,&UNK_10f6a402f);
      uStack_4e0 = 0xe010d;
      func_0x000107c2b054(auStack_4d8,&UNK_10f6a4056);
      uStack_4c0 = 0xe010e;
      func_0x000107c2b054(auStack_4b8,&UNK_10f6a407d);
      uStack_4a0 = 0xe010f;
      func_0x000107c2b054(auStack_498,&UNK_10f6a40a4);
      uStack_480 = 0xe0110;
      func_0x000107c2b054(auStack_478,&UNK_10f6a40c9);
      uStack_460 = 0xe0111;
      func_0x000107c2b054(auStack_458,&UNK_10f6a40ef);
      uStack_440 = 0xe0112;
      func_0x000107c2b054(auStack_438,&UNK_10f6a4115);
      uStack_420 = 0xf0001;
      func_0x000107c2b054(auStack_418,&UNK_10f6a412c);
      uStack_400 = 0xf0002;
      func_0x000107c2b054(auStack_3f8,&UNK_10f6a4141);
      uStack_3e0 = 0xf0003;
      func_0x000107c2b054(auStack_3d8,&UNK_10f6a416c);
      uStack_3c0 = 0xf0004;
      func_0x000107c2b054(auStack_3b8,&UNK_10f6a4192);
      uStack_3a0 = 0xf0005;
      func_0x000107c2b054(auStack_398,&UNK_10f6a41b2);
      uStack_380 = 0xf0007;
      func_0x000107c2b054(auStack_378,&UNK_10f6a41d6);
      uStack_360 = 0xf0008;
      func_0x000107c2b054(auStack_358,&UNK_10f6a41e1);
      uStack_340 = 0xf0009;
      func_0x000107c2b054(auStack_338,&UNK_10f6a4200);
      uStack_320 = 0xf000a;
      func_0x000107c2b054(auStack_318,&UNK_10f6a421f);
      uStack_300 = 0xf000b;
      func_0x000107c2b054(auStack_2f8,&UNK_10f6a423f);
      uStack_2e0 = 0xf000c;
      func_0x000107c2b054(auStack_2d8,&UNK_10f6a425b);
      uStack_2c0 = 0xf000e;
      func_0x000107c2b054(auStack_2b8,&UNK_10f6a4272);
      uStack_2a0 = 0xf000d;
      func_0x000107c2b054(auStack_298,&UNK_10f6a428d);
      uStack_280 = 0xf000f;
      func_0x000107c2b054(auStack_278,&UNK_10f6a42b0);
      uStack_260 = 0xf0010;
      func_0x000107c2b054(auStack_258,&UNK_10f6a42d2);
      uStack_240 = 0x100001;
      func_0x000107c2b054(auStack_238,&UNK_10f6a42e6);
      uStack_220 = 0x100002;
      func_0x000107c2b054(auStack_218,&UNK_10f6a42fd);
      uStack_200 = 0x100003;
      func_0x000107c2b054(auStack_1f8,&UNK_10f6a430e);
      uStack_1e0 = 0x100004;
      func_0x000107c2b054(auStack_1d8,&UNK_10f6a4321);
      uStack_1c0 = 0x200001;
      func_0x000107c2b054(auStack_1b8,&UNK_10f6a4338);
      uStack_1a0 = 0x200002;
      func_0x000107c2b054(auStack_198,&UNK_10f6a4353);
      uStack_180 = 0x200003;
      func_0x000107c2b054(auStack_178,&UNK_10f6a436d);
      uStack_160 = 0x200004;
      func_0x000107c2b054(auStack_158,&UNK_10f6a4387);
      uStack_140 = 0x200005;
      func_0x000107c2b054(auStack_138,&UNK_10f6a43a3);
      uStack_120 = 0x200006;
      func_0x000107c2b054(auStack_118,&UNK_10f6a43bf);
      uStack_100 = 0x200007;
      func_0x000107c2b054(auStack_f8,&UNK_10f6a43db);
      uStack_e0 = 0x200008;
      func_0x000107c2b054(auStack_d8,&UNK_10f6a43f9);
      uStack_c0 = 0x200009;
      func_0x000107c2b054(auStack_b8,&UNK_10f6a4413);
      uStack_a0 = 0x20000a;
      func_0x000107c2b054(auStack_98,&UNK_10f6a442d);
      uStack_80 = 0x20000b;
      func_0x000107c2b054(auStack_78,&UNK_10f6a4444);
      uStack_60 = 0x20000c;
      func_0x000107c2b054(auStack_58,&UNK_10f6a4458);
      acStack_41[1] = '\r';
      acStack_41[2] = '\0';
      acStack_41[3] = ' ';
      acStack_41[4] = '\0';
      FUN_10ad09cf0(auStack_1a58,0xd1);
      lVar1 = -0x1a20;
      pcVar2 = acStack_41;
      do {
        if (*pcVar2 < '\0') {
          __ZdlPv(*(undefined8 *)(pcVar2 + -0x17));
        }
        lVar1 = lVar1 + 0x20;
        pcVar2 = pcVar2 + -0x20;
      } while (lVar1 != 0);
      param_1 = 0x1137ecd50;
      ___cxa_guard_release(0x1137ecd50);
      unaff_x19 = (undefined1 *)0x0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    do {
      unaff_x19 = unaff_x19 + -0x20;
    } while (unaff_x19 != auStack_1a58);
    do {
      ___cxa_guard_abort(0x1137ecd50);
      __Unwind_Resume(param_1);
    } while( true );
  }
  return 0x1137ecd58;
}



/* Entry: 10ad09c3c; end: 10ad09c97;  */

undefined8 * FUN_10ad09c3c(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000109879fe8();
  return param_1;
}



/* Entry: 10ad09c98; end: 10ad09cef;  */

void FUN_10ad09c98(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010a8e4080(param_2 + 0xac028);
    func_0x00010a8e4080(param_2 + 0xabfb8);
    func_0x00010a8e4080(param_2 + 0xa3f60);
    func_0x00010a8e4080(param_2 + 0xa3f20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10ad09cf0; end: 10ad09fcf;  */

void FUN_10ad09cf0(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x26;
  long lVar9;
  long lVar10;
  
  uRam00000001137ecd60 = 0;
  lRam00000001137ecd58 = 0;
  lRam00000001137ecd70 = 0;
  plRam00000001137ecd68 = (long *)0x0;
  fRam00000001137ecd78 = 1.0;
  if (param_2 != 0) {
    plVar1 = param_1 + param_2 * 4;
    do {
      uVar6 = 0x1137ecd58;
      func_0x000107c2b05c(0x1137ecd58,param_1);
      uVar5 = uRam00000001137ecd60;
      if (uRam00000001137ecd60 != 0) {
        uVar8 = uRam00000001137ecd60 - 1;
        if ((uRam00000001137ecd60 & uVar8) == 0) {
          unaff_x26 = uVar8 & uVar6;
        }
        else {
          unaff_x26 = uVar6;
          if (uRam00000001137ecd60 <= uVar6) {
            uVar4 = 0;
            if (uRam00000001137ecd60 != 0) {
              uVar4 = uVar6 / uRam00000001137ecd60;
            }
            unaff_x26 = uVar6 - uVar4 * uRam00000001137ecd60;
          }
        }
        plVar3 = *(long **)(lRam00000001137ecd58 + unaff_x26 * 8);
        if (plVar3 != (long *)0x0) {
          for (plVar3 = (long *)*plVar3; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
            uVar4 = plVar3[1];
            if (uVar4 == uVar6) {
              uVar4 = 0x1137ecd58;
              func_0x000107c2b068(0x1137ecd58,plVar3 + 2,param_1);
              if ((uVar4 & 1) != 0) goto LAB_10ad09f54;
            }
            else {
              if ((uVar5 & uVar8) == 0) {
                uVar4 = uVar4 & uVar8;
              }
              else if (uVar5 <= uVar4) {
                uVar2 = 0;
                if (uVar5 != 0) {
                  uVar2 = uVar4 / uVar5;
                }
                uVar4 = uVar4 - uVar2 * uVar5;
              }
              if (uVar4 != unaff_x26) break;
            }
          }
        }
      }
      plVar3 = (long *)0x30;
      __Znwm();
      *plVar3 = 0;
      plVar3[1] = uVar6;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        func_0x000107c3192c(plVar3 + 2,*param_1,param_1[1]);
      }
      else {
        lVar10 = param_1[1];
        lVar9 = *param_1;
        plVar3[4] = param_1[2];
        plVar3[3] = lVar10;
        plVar3[2] = lVar9;
      }
      *(int *)(plVar3 + 5) = (int)param_1[3];
      if ((uVar5 == 0) || (fRam00000001137ecd78 * (float)uVar5 < (float)(lRam00000001137ecd70 + 1)))
      {
        uVar8 = 1;
        if (2 < uVar5) {
          uVar8 = (ulong)((uVar5 & uVar5 - 1) != 0);
        }
        uVar8 = uVar8 | uVar5 << 1;
        uVar5 = (ulong)((float)(lRam00000001137ecd70 + 1) / fRam00000001137ecd78);
        if (uVar8 <= uVar5) {
          uVar8 = uVar5;
        }
        func_0x0001092afd6c(0x1137ecd58,uVar8);
        uVar5 = uRam00000001137ecd60;
        if ((uRam00000001137ecd60 & uRam00000001137ecd60 - 1) == 0) {
          unaff_x26 = uRam00000001137ecd60 - 1 & uVar6;
        }
        else {
          unaff_x26 = uVar6;
          if (uRam00000001137ecd60 <= uVar6) {
            uVar8 = 0;
            if (uRam00000001137ecd60 != 0) {
              uVar8 = uVar6 / uRam00000001137ecd60;
            }
            unaff_x26 = uVar6 - uVar8 * uRam00000001137ecd60;
          }
        }
      }
      lVar9 = lRam00000001137ecd58;
      plVar7 = *(long **)(lRam00000001137ecd58 + unaff_x26 * 8);
      if (plVar7 == (long *)0x0) {
        *plVar3 = (long)plRam00000001137ecd68;
        plRam00000001137ecd68 = plVar3;
        *(undefined8 *)(lVar9 + unaff_x26 * 8) = 0x1137ecd68;
        if (*plVar3 != 0) {
          uVar6 = *(ulong *)(*plVar3 + 8);
          if ((uVar5 & uVar5 - 1) == 0) {
            uVar6 = uVar6 & uVar5 - 1;
          }
          else if (uVar5 <= uVar6) {
            uVar8 = 0;
            if (uVar5 != 0) {
              uVar8 = uVar6 / uVar5;
            }
            uVar6 = uVar6 - uVar8 * uVar5;
          }
          *(long **)(lRam00000001137ecd58 + uVar6 * 8) = plVar3;
        }
      }
      else {
        *plVar3 = *plVar7;
        *plVar7 = (long)plVar3;
      }
      lRam00000001137ecd70 = lRam00000001137ecd70 + 1;
LAB_10ad09f54:
      param_1 = param_1 + 4;
    } while (param_1 != plVar1);
  }
  return;
}



/* Entry: 10ad09fd0; end: 10ad0a3db;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10ad09fd0(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *******pppppppuVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte **ppbVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  char *pcVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  int iVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 auStack_128 [2];
  char cStack_111;
  undefined8 auStack_110 [2];
  char cStack_f9;
  byte *pbStack_f8;
  undefined8 ******ppppppuStack_f0;
  undefined8 *****pppppuStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  undefined8 *****pppppuStack_d0;
  undefined8 *****pppppuStack_c8;
  undefined8 uStack_c0;
  byte abStack_b8 [8];
  undefined8 ******ppppppuStack_b0;
  undefined8 *******pppppppuStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined4 uStack_8c;
  long alStack_88 [3];
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = param_1 + 1;
  FUN_10ad0a458(*plVar15);
  *param_1 = (long)plVar15;
  param_1[2] = 0;
  *plVar15 = 0;
  uVar4 = param_2;
  _ftell(param_2);
  _fseek(param_2,0,2);
  uVar5 = param_2;
  _ftell();
  _fseek(param_2,uVar4,0);
  pppppppuStack_a8 = (undefined8 *******)0x0;
  uStack_a0 = 0;
  lStack_98 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
            (&pppppppuStack_a8,uVar5,0);
  pppppppuVar7 = pppppppuStack_a8;
  if (-1 < lStack_98) {
    pppppppuVar7 = &pppppppuStack_a8;
  }
  _fread(pppppppuVar7,1,uVar5,param_2);
  plStack_70 = (long *)0x0;
  pcVar11 = (char *)alStack_88;
  FUN_109fc89b4(abStack_b8,&pppppppuStack_a8,alStack_88,0,0);
  if (plStack_70 == (long *)pcVar11) {
    lVar9 = 0x20;
LAB_10ad0a0d0:
    (**(code **)(*plStack_70 + lVar9))();
  }
  else if (plStack_70 != (long *)0x0) {
    lVar9 = 0x28;
    goto LAB_10ad0a0d0;
  }
  if (abStack_b8[0] == 9) {
    puVar8 = (undefined8 *)0x9;
  }
  else {
    pbStack_d8 = abStack_b8;
    pppppuStack_d0 = (undefined8 *****)0x0;
    pppppuStack_c8 = (undefined8 *****)0x0;
    uStack_c0 = 0x8000000000000000;
    if (abStack_b8[0] == 0) {
      uStack_c0 = 1;
LAB_10ad0a170:
      ppppppuStack_f0 = (undefined8 ******)0x0;
      pppppuStack_e8 = (undefined8 *****)0x0;
      uStack_e0 = 1;
    }
    else if (abStack_b8[0] == 2) {
      pppppuStack_c8 = *ppppppuStack_b0;
      ppppppuStack_f0 = (undefined8 ******)0x0;
      uStack_e0 = 0x8000000000000000;
      pppppuStack_e8 = ppppppuStack_b0[1];
    }
    else {
      if (abStack_b8[0] != 1) {
        uStack_c0 = 0;
        goto LAB_10ad0a170;
      }
      ppppppuStack_f0 = ppppppuStack_b0 + 1;
      pppppuStack_d0 = *ppppppuStack_b0;
      uStack_e0 = 0x8000000000000000;
      pppppuStack_e8 = (undefined8 *****)0x0;
    }
    pbStack_f8 = abStack_b8;
    pcVar11 = "id";
    while( true ) {
      ppbVar6 = &pbStack_d8;
      func_0x000109379420(ppbVar6,&pbStack_f8);
      if ((int)ppbVar6 != 0) break;
      ppbVar6 = &pbStack_d8;
      func_0x00010937b950(ppbVar6);
      func_0x000107c2b054(auStack_128,"id");
      func_0x000109406570(ppbVar6,auStack_128);
      func_0x00010937c804(auStack_110);
      if (cStack_111 < '\0') {
        __ZdlPv(auStack_128[0]);
      }
      puVar8 = auStack_110;
      __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(puVar8,0,0);
      func_0x000107c2b054(auStack_128,"value");
      func_0x000109406570(ppbVar6,auStack_128);
      func_0x00010938d050();
      uVar1 = uStack_8c;
      if (cStack_111 < '\0') {
        __ZdlPv(auStack_128[0]);
      }
      iVar14 = (int)puVar8;
      plVar10 = (long *)*plVar15;
      plVar16 = plVar15;
      while (plVar17 = plVar16, plVar10 != (long *)0x0) {
        while (plVar16 = plVar10, *(int *)((long)plVar16 + 0x1c) <= iVar14) {
          if (iVar14 <= *(int *)((long)plVar16 + 0x1c)) goto LAB_10ad0a2ac;
          plVar10 = (long *)plVar16[1];
          if ((long *)plVar16[1] == (long *)0x0) {
            plVar17 = plVar16 + 1;
            goto LAB_10ad0a268;
          }
        }
        plVar10 = (long *)*plVar16;
      }
LAB_10ad0a268:
      puVar8 = (undefined8 *)0x28;
      __Znwm();
      *(int *)((long)puVar8 + 0x1c) = iVar14;
      *(undefined4 *)(puVar8 + 4) = uVar1;
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = plVar16;
      *plVar17 = (long)puVar8;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        puVar8 = (undefined8 *)*plVar17;
      }
      func_0x000107c2b058(param_1[1],puVar8);
      param_1[2] = param_1[2] + 1;
LAB_10ad0a2ac:
      if (cStack_f9 < '\0') {
        __ZdlPv(auStack_110[0]);
      }
      func_0x000109386b30(&pbStack_d8);
    }
    puVar8 = (undefined8 *)(ulong)abStack_b8[0];
  }
  pppppppuVar7 = &ppppppuStack_b0;
  func_0x000109380ffc();
  if (lStack_98 < 0) {
    pppppppuVar7 = pppppppuStack_a8;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_70 == (long *)pcVar11) {
    lVar9 = 0x20;
  }
  else {
    if (plStack_70 == (long *)0x0) goto LAB_10ad0a3c4;
    lVar9 = 0x28;
  }
  (**(code **)(*plStack_70 + lVar9))();
LAB_10ad0a3c4:
  if (lStack_98 < 0) {
    __ZdlPv(pppppppuStack_a8);
  }
  __Unwind_Resume();
  pppppppuVar12 = (undefined8 *******)*pppppppuVar7;
  while (pppppppuVar12 != pppppppuVar7 + 1) {
    FUN_10ad0775c(*(undefined4 *)(pppppppuVar12 + 4),*puVar8,
                  *(undefined4 *)((long)pppppppuVar12 + 0x1c));
    pppppppuVar2 = (undefined8 *******)pppppppuVar12[1];
    pppppppuVar13 = pppppppuVar12;
    if ((undefined8 *******)pppppppuVar12[1] == (undefined8 *******)0x0) {
      do {
        pppppppuVar12 = (undefined8 *******)pppppppuVar13[2];
        bVar3 = (undefined8 *******)*pppppppuVar12 != pppppppuVar13;
        pppppppuVar13 = pppppppuVar12;
      } while (bVar3);
    }
    else {
      do {
        pppppppuVar12 = pppppppuVar2;
        pppppppuVar2 = (undefined8 *******)*pppppppuVar12;
      } while ((undefined8 *******)*pppppppuVar12 != (undefined8 *******)0x0);
    }
  }
  return;
}



/* Entry: 10ad0a3dc; end: 10ad0a457;  */

void FUN_10ad0a3dc(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)*param_1;
  while (plVar3 != param_1 + 1) {
    FUN_10ad0775c(*(undefined4 *)(plVar3 + 4),*param_2,*(undefined4 *)((long)plVar3 + 0x1c));
    plVar1 = (long *)plVar3[1];
    plVar4 = plVar3;
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar2 = (long *)*plVar3 != plVar4;
        plVar4 = plVar3;
      } while (bVar2);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10ad0a458; end: 10ad0a48f;  */

void FUN_10ad0a458(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10ad0a458(*param_1);
    FUN_10ad0a458(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ad0a490; end: 10ad0a943;  */

void FUN_10ad0a490(long param_1,float *param_2,float *param_3,float *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined **ppuVar4;
  uint *puVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  uint *extraout_x8;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  float *extraout_x9;
  float *pfVar12;
  undefined8 *puVar13;
  undefined1 *extraout_x9_00;
  undefined **extraout_x9_01;
  ulong uVar14;
  code *extraout_x10;
  undefined1 *extraout_x10_00;
  long lVar15;
  float *extraout_x11;
  int *piVar16;
  long extraout_x12;
  float *pfVar17;
  float *pfVar18;
  int *extraout_x13;
  undefined1 extraout_w14;
  float *pfVar19;
  code *extraout_x14;
  ulong uVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  piVar16 = *(int **)(param_1 + 0x8050);
  fVar21 = *param_2;
  if (*piVar16 == 0) {
    *param_4 = fVar21;
  }
  else {
    lVar15 = *(long *)(param_1 + 0x8048);
    fVar24 = *(float *)(lVar15 + 0xe008);
    fVar26 = *(float *)(lVar15 + 0xe010);
    fVar22 = (fVar24 * (float)piVar16[0x811] + (float)piVar16[0x810] * fVar21 +
             (float)piVar16[0x812] * *(float *)(lVar15 + 0xe00c)) -
             (*(float *)(lVar15 + 0xe014) * (float)piVar16[0x80f] + (float)piVar16[0x80e] * fVar26);
    *(float *)(lVar15 + 0xe008) = fVar21;
    *(float *)(lVar15 + 0xe00c) = fVar24;
    *(float *)(lVar15 + 0xe010) = fVar22;
    *(float *)(lVar15 + 0xe014) = fVar26;
    fVar24 = (float)piVar16[0x80a];
    fVar21 = *param_3;
    ppuVar4 = &PTR___tlv_bootstrap_11340d810;
    (*(code *)PTR___tlv_bootstrap_11340d810)();
    ppuVar6 = &PTR___tlv_bootstrap_11340d7f8;
    if (((ulong)*ppuVar4 & 1) == 0) {
      (*(code *)PTR___tlv_bootstrap_11340d7f8)();
      *(undefined4 *)ppuVar6 = 1;
      puVar7 = extraout_x9_00;
      (*extraout_x10)();
      *puVar7 = extraout_w14;
    }
    fVar22 = fVar22 * fVar24;
    ppuVar4 = &PTR___tlv_bootstrap_11340d840;
    (*(code *)PTR___tlv_bootstrap_11340d840)();
    ppuVar6 = &PTR___tlv_bootstrap_11340d828;
    if (((ulong)*ppuVar4 & 1) == 0) {
      (*(code *)PTR___tlv_bootstrap_11340d828)();
      dVar23 = (double)NEON_fmov(0xbf800000,4);
      *ppuVar6 = (undefined *)-dVar23;
      puVar7 = extraout_x10_00;
      (*extraout_x14)();
      *puVar7 = 1;
      ppuVar6 = extraout_x9_01;
    }
    (*(code *)*ppuVar6)(ppuVar6);
    puVar5 = extraout_x8;
    (**(code **)extraout_x8)();
    fVar26 = *extraout_x9;
    fVar24 = extraout_x9[1];
    uVar10 = *puVar5 / 0xadc8;
    uVar3 = (*puVar5 % 0xadc8) * 0xbc8f;
    iVar11 = 0x7fffffff;
    if (uVar10 * 0xd47 <= uVar3) {
      iVar11 = 0;
    }
    uVar3 = iVar11 + uVar3 + uVar10 * -0xd47;
    *puVar5 = uVar3;
    fVar26 = fVar26 + ((float)(uVar3 - 1) / 2.1474836e+09) * (fVar24 - fVar26);
    fVar24 = (float)extraout_x13[10];
    fVar27 = (float)extraout_x13[0xc];
    fVar25 = (fVar24 * *(float *)(extraout_x12 + 0x206c) +
              *(float *)(extraout_x12 + 0x2068) * fVar26 +
             *(float *)(extraout_x12 + 0x2070) * (float)extraout_x13[0xb]) -
             ((float)extraout_x13[0xd] * *(float *)(extraout_x12 + 0x2064) +
             *(float *)(extraout_x12 + 0x2060) * fVar27);
    extraout_x13[10] = (int)fVar26;
    extraout_x13[0xb] = (int)fVar24;
    extraout_x13[0xc] = (int)fVar25;
    extraout_x13[0xd] = (int)fVar27;
    fVar24 = *(float *)(extraout_x12 + 0x2030);
    fVar27 = (float)extraout_x13[6];
    fVar28 = (float)extraout_x13[8];
    fVar26 = (fVar27 * *(float *)(extraout_x12 + 0x2058) +
              *(float *)(extraout_x12 + 0x2054) * fVar21 +
             *(float *)(extraout_x12 + 0x205c) * (float)extraout_x13[7]) -
             ((float)extraout_x13[9] * *(float *)(extraout_x12 + 0x2050) +
             *(float *)(extraout_x12 + 0x204c) * fVar28);
    extraout_x13[6] = (int)fVar21;
    extraout_x13[7] = (int)fVar27;
    extraout_x13[8] = (int)fVar26;
    extraout_x13[9] = (int)fVar28;
    fVar21 = *(float *)(extraout_x12 + 0x202c);
    iVar2 = *extraout_x13;
    pfVar12 = extraout_x11 + iVar2;
    iVar11 = *(int *)(extraout_x12 + 0x10);
    *param_4 = *(float *)(extraout_x12 + 0x207c) * extraout_x11[(long)(iVar2 - iVar11) + 0x1000] +
               pfVar12[0x800] * *(float *)(extraout_x12 + 0x2078);
    *pfVar12 = fVar22;
    pfVar12[0x800] = fVar25 * fVar24 + fVar21 * fVar26;
    *extraout_x13 = iVar2 + 1;
    uVar3 = *(uint *)(extraout_x12 + 4);
    uVar8 = (ulong)uVar3;
    if ((int)uVar3 <= iVar2 + 1) {
      *extraout_x13 = iVar11;
      if (0 < (int)uVar3) {
        pfVar12 = (float *)(extraout_x12 + 0x1c);
        pfVar18 = pfVar12;
        uVar14 = uVar8;
        pfVar19 = extraout_x11;
        do {
          pfVar19[0x2800] = *pfVar19 * *pfVar18;
          uVar14 = uVar14 - 1;
          pfVar17 = extraout_x11;
          pfVar18 = pfVar18 + 1;
          pfVar19 = pfVar19 + 1;
        } while (uVar14 != 0);
        do {
          pfVar17[0x3000] = pfVar17[0x800] * *pfVar12;
          pfVar17 = pfVar17 + 1;
          uVar8 = uVar8 - 1;
          pfVar12 = pfVar12 + 1;
        } while (uVar8 != 0);
      }
      puVar1 = (undefined8 *)(param_1 + 0x40);
      FUN_10ad0a944(param_1,extraout_x11 + 0x2800,puVar1);
      FUN_10ad0a944(param_1,*(long *)(param_1 + 0x8048) + 0xc000,param_1 + 0x4040);
      lVar15 = *(long *)(param_1 + 0x8050);
      if (-1 < (int)*(uint *)(lVar15 + 8)) {
        lVar9 = (ulong)*(uint *)(lVar15 + 8) + 1;
        puVar13 = puVar1;
        do {
          fVar24 = (float)((ulong)*puVar13 >> 0x20);
          fVar22 = (float)*puVar13;
          fVar21 = SQRT(fVar24 * fVar24 + fVar22 * fVar22);
          fVar21 = fVar21 / (*(float *)(lVar15 + 0x2034) + fVar21);
          *puVar13 = CONCAT44(fVar24 * fVar21,fVar22 * fVar21);
          lVar9 = lVar9 + -1;
          puVar13 = puVar13 + 1;
        } while (lVar9 != 0);
      }
      uVar3 = *(uint *)(lVar15 + 0x2074);
      if (0 < (int)uVar3) {
        uVar8 = 0;
        uVar10 = *(uint *)(lVar15 + 0x2020);
        uVar14 = (ulong)uVar10;
        iVar11 = *(int *)(lVar15 + 0x2080);
        lVar15 = param_1;
        do {
          if (0 < (int)uVar10) {
            fVar22 = 0.0;
            fVar21 = 0.0;
            lVar9 = lVar15;
            uVar20 = uVar14;
            do {
              fVar26 = (float)((ulong)*(undefined8 *)(lVar9 + 0x4040) >> 0x20);
              fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x40) >> 0x20);
              fVar24 = (float)*(undefined8 *)(lVar9 + 0x4040);
              fVar25 = (float)*(undefined8 *)(lVar9 + 0x40);
              fVar22 = fVar22 + SQRT(fVar26 * fVar26 + fVar24 * fVar24);
              fVar21 = fVar21 + SQRT(fVar27 * fVar27 + fVar25 * fVar25);
              lVar9 = lVar9 + 8;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
            lVar9 = lVar15;
            uVar20 = uVar14;
            if (iVar11 != 0) {
              fVar21 = fVar21 / fVar22;
            }
            do {
              *(ulong *)(lVar9 + 0x40) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x4040) >> 0x20) * fVar21,
                            (float)*(undefined8 *)(lVar9 + 0x4040) * fVar21);
              uVar20 = uVar20 - 1;
              lVar9 = lVar9 + 8;
            } while (uVar20 != 0);
          }
          uVar8 = uVar8 + 1;
          lVar15 = lVar15 + uVar14 * 8;
        } while (uVar8 != uVar3);
      }
      func_0x00010ad0aad8(param_1,puVar1,*(long *)(param_1 + 0x8048) + 0xa000);
      lVar15 = *(long *)(param_1 + 0x8048);
      lVar9 = *(long *)(param_1 + 0x8050);
      uVar8 = (ulong)*(uint *)(lVar9 + 4);
      if (0 < (int)*(uint *)(lVar9 + 4)) {
        pfVar12 = (float *)(lVar9 + 0x1c);
        pfVar18 = (float *)(lVar15 + 0x6000);
        do {
          *pfVar18 = *pfVar18 + *pfVar12 * *(float *)(lVar9 + 0x14) * pfVar18[0x1000];
          uVar8 = uVar8 - 1;
          pfVar12 = pfVar12 + 1;
          pfVar18 = pfVar18 + 1;
        } while (uVar8 != 0);
      }
      _memcpy(lVar15 + 0x4000,lVar15 + 0x6000,(long)*(int *)(lVar9 + 0xc) << 2);
      lVar15 = *(long *)(param_1 + 0x8048) + 0x6000;
      _memmove(lVar15,lVar15 + (long)*(int *)(*(long *)(param_1 + 0x8050) + 0xc) * 4,
               (long)*(int *)(*(long *)(param_1 + 0x8050) + 4) << 2);
      lVar15 = *(long *)(param_1 + 0x8048) + 0x2000;
      _memmove(lVar15,lVar15 + (long)*(int *)(*(long *)(param_1 + 0x8050) + 0xc) * 4,
               (long)*(int *)(*(long *)(param_1 + 0x8050) + 0x10) << 2);
      _memmove(*(long *)(param_1 + 0x8048) + (long)*(int *)(*(long *)(param_1 + 0x8050) + 0x10) * 4
               + 0x2000,*(long *)(param_1 + 0x8048),
               (long)*(int *)(*(long *)(param_1 + 0x8050) + 0xc) << 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memmove_11034c660)
                (*(long *)(param_1 + 0x8048),
                 *(long *)(param_1 + 0x8048) + (long)*(int *)(*(long *)(param_1 + 0x8050) + 0xc) * 4
                 ,(long)*(int *)(*(long *)(param_1 + 0x8050) + 0x10) << 2);
      return;
    }
  }
  return;
}



/* Entry: 10ad0a944; end: 10ad0abfb;  */

void FUN_10ad0a944(uint *param_1,long param_2,float *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  float *pfVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar3 = *param_1;
  if ((int)uVar3 < 1) {
    lVar7 = *(long *)(param_1 + 10);
  }
  else {
    uVar6 = 0;
    lVar7 = *(long *)(param_1 + 10);
    lVar2 = *(long *)(param_1 + 0xc);
    do {
      if (lVar2 - lVar7 >> 3 == uVar6) goto LAB_10ad0aad4;
      *(undefined8 *)(lVar7 + uVar6 * 8) = *(undefined8 *)(param_2 + uVar6 * 8);
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
  }
  func_0x00010987b1b4(param_3,lVar7,*(undefined8 *)(param_1 + 8),0);
  uVar3 = *param_1;
  uVar1 = param_1[1];
  pfVar5 = param_3 + (long)(int)uVar3 * 2;
  *pfVar5 = *param_3 - param_3[1];
  pfVar5[1] = 0.0;
  *param_3 = *param_3 + param_3[1];
  param_3[1] = 0.0;
  if (1 < (int)uVar1) {
    uVar6 = *(long *)(param_1 + 4) - *(long *)(param_1 + 2) >> 3;
    if (uVar6 < 2) {
      uVar6 = 1;
    }
    pfVar5 = pfVar5 + -1;
    lVar7 = (ulong)uVar1 - 1;
    pfVar8 = param_3 + 3;
    pfVar9 = (float *)(*(long *)(param_1 + 2) + 0xc);
    do {
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) {
LAB_10ad0aad4:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad0aad8);
        (*pcVar4)();
      }
      fVar12 = pfVar5[-1] - pfVar8[-1];
      fVar13 = *pfVar8 + *pfVar5;
      fVar11 = (*pfVar8 - *pfVar5) * 0.5;
      fVar10 = (pfVar5[-1] + pfVar8[-1]) * 0.5;
      fVar14 = -(fVar12 * *pfVar9) + pfVar9[-1] * fVar13;
      fVar12 = fVar12 * pfVar9[-1] + *pfVar9 * fVar13;
      pfVar8[-1] = fVar10 + fVar14;
      *pfVar8 = fVar11 + fVar12;
      pfVar5[-1] = fVar10 - fVar14;
      *pfVar5 = fVar12 - fVar11;
      pfVar5 = pfVar5 + -2;
      pfVar8 = pfVar8 + 2;
      pfVar9 = pfVar9 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  param_3[(long)(int)uVar1 * 2 + 1] = -param_3[(long)(int)uVar1 * 2 + 1];
  if (1 < (int)uVar3) {
    pfVar5 = param_3 + 3;
    uVar6 = 1;
    do {
      fVar10 = *pfVar5;
      param_3[(long)(int)((double)uVar3 * 2.0 - (double)(uVar6 & 0xffffffff)) * 2] = pfVar5[-1];
      (param_3 + (long)(int)((double)uVar3 * 2.0 - (double)(uVar6 & 0xffffffff)) * 2)[1] = -fVar10;
      uVar6 = uVar6 + 1;
      pfVar5 = pfVar5 + 2;
    } while ((long)(int)uVar3 != uVar6);
  }
  return;
}



/* Entry: 10ad0abfc; end: 10ad0ad6b;  */

undefined8 FUN_10ad0abfc(float param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (param_1 <= 16.0) {
    param_1 = 16.0;
  }
  fVar8 = (float)NEON_fminnm(param_1,0x45000000);
  iVar4 = (int)fVar8;
  lVar5 = *(long *)(param_2 + 0x8040);
  *(int *)(lVar5 + 4) = iVar4;
  fVar9 = -0.5;
  if (-1 < iVar4) {
    fVar9 = 0.5;
  }
  fVar9 = fVar9 + (float)(int)fVar8;
  uVar3 = (uint)fVar9;
  if (0x7f7fffff < (uint)ABS(fVar9)) {
    uVar3 = 0;
  }
  if ((uVar3 & uVar3 - 1) == 0) {
    lVar6 = *(long *)(param_2 + 0x8050);
    *(uint *)(lVar6 + 4) = uVar3;
    *(int *)(lVar6 + 8) = (int)uVar3 >> 1;
    *(undefined4 *)(lVar6 + 0x18) = 0;
    fVar9 = 0.0;
    if (0 < (int)uVar3) {
      uVar7 = 0;
      do {
        fVar10 = (float)(((double)(uVar7 & 0xffffffff) * 6.283185307179586) / (double)uVar3);
        _cosf();
        fVar10 = fVar10 * -0.5 + 0.5;
        *(float *)(lVar6 + 0x1c + uVar7 * 4) = fVar10;
        fVar9 = fVar9 + fVar10 * fVar10;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
      *(float *)(lVar6 + 0x18) = fVar9;
    }
    fVar10 = *(float *)(lVar5 + 8);
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    fVar10 = (float)NEON_fminnm(fVar10,0x3f800000);
    *(float *)(lVar5 + 8) = fVar10;
    fVar8 = (1.0 - fVar10) * (float)(int)fVar8;
    iVar2 = (int)fVar8;
    *(int *)(lVar6 + 0xc) = iVar2;
    *(int *)(lVar6 + 0x10) = iVar4 - iVar2;
    *(float *)(lVar6 + 0x14) = (float)(int)fVar8 / fVar9;
    FUN_10ad0ad6c(param_2,(int)uVar3 >> 1);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10ad0ad6c; end: 10ad0aeaf;  */

void FUN_10ad0ad6c(float param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (param_3 - 0x10001 < 0xffff0003) {
    puVar4 = &UNK_10f6a446d;
    FUN_10a00946c();
    if (param_1 <= 5.0) {
      param_1 = 5.0;
    }
    fVar9 = (float)NEON_fminnm(param_1,(float)(int)param_3 * 0.49);
    *(float *)(*(long *)(puVar4 + 0x8040) + 0x1c) = fVar9;
    dVar11 = (double)(int)param_3;
    fVar9 = (float)(((double)fVar9 * 6.283185307179586) / dVar11);
    lVar7 = *(long *)(puVar4 + 0x8050);
    ___sincosf_stret();
    fVar12 = fVar9 / 1.4142135 + 1.0;
    fVar13 = SUB84(dVar11,0) + 1.0;
    fVar14 = (fVar13 * 0.5) / fVar12;
    *(float *)(lVar7 + 0x2040) = fVar14;
    *(float *)(lVar7 + 0x2044) = -fVar13 / fVar12;
    *(float *)(lVar7 + 0x2048) = fVar14;
    *(float *)(lVar7 + 0x2038) = (SUB84(dVar11,0) * -2.0) / fVar12;
    *(float *)(lVar7 + 0x203c) = (1.0 - fVar9 / 1.4142135) / fVar12;
    return;
  }
  uVar1 = *param_2;
  if (uVar1 != param_3) {
    dVar11 = (double)param_3;
    _log();
    uVar5 = (uint)(dVar11 / 0.6931471805599453 + -0.5);
    do {
      uVar5 = uVar5 + 1;
      uVar2 = 1 << (ulong)(uVar5 & 0x1f);
    } while ((int)uVar2 < (int)param_3);
    if (uVar1 != uVar2) {
      *param_2 = uVar2;
      param_2[1] = uVar2 >> 1;
      FUN_10ad0b598(param_2 + 2);
      func_0x00010ad0b5c8(param_2 + 10,(long)(int)*param_2);
      uVar6 = (ulong)*param_2;
      if (0 < (int)*param_2) {
        uVar8 = 0;
        do {
          lVar7 = *(long *)(param_2 + 2);
          if ((ulong)(*(long *)(param_2 + 4) - lVar7 >> 3) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad0aea4);
            (*pcVar3)();
          }
          dVar10 = (double)(int)uVar6;
          dVar11 = ((double)(uVar8 & 0xffffffff) * 3.141592653589793) / dVar10;
          ___sincos_stret();
          *(ulong *)(lVar7 + uVar8 * 8) = CONCAT44((float)(dVar11 * -0.5),(float)(dVar10 * 0.5));
          uVar8 = uVar8 + 1;
          uVar6 = (ulong)(int)*param_2;
        } while ((long)uVar8 < (long)uVar6);
      }
      _free(*(undefined8 *)(param_2 + 8));
      uVar6 = (ulong)*param_2;
      func_0x00010987a318();
      *(ulong *)(param_2 + 8) = uVar6;
    }
  }
  return;
}



/* Entry: 10ad0aeb0; end: 10ad0b0cf;  */

void FUN_10ad0aeb0(float param_1,long param_2,int param_3)

{
  long lVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_1 <= 5.0) {
    param_1 = 5.0;
  }
  fVar2 = (float)NEON_fminnm(param_1,(float)param_3 * 0.49);
  *(float *)(*(long *)(param_2 + 0x8040) + 0x1c) = fVar2;
  dVar3 = (double)param_3;
  fVar2 = (float)(((double)fVar2 * 6.283185307179586) / dVar3);
  lVar1 = *(long *)(param_2 + 0x8050);
  ___sincosf_stret();
  fVar4 = fVar2 / 1.4142135 + 1.0;
  fVar5 = SUB84(dVar3,0) + 1.0;
  fVar6 = (fVar5 * 0.5) / fVar4;
  *(float *)(lVar1 + 0x2040) = fVar6;
  *(float *)(lVar1 + 0x2044) = -fVar5 / fVar4;
  *(float *)(lVar1 + 0x2048) = fVar6;
  *(float *)(lVar1 + 0x2038) = (SUB84(dVar3,0) * -2.0) / fVar4;
  *(float *)(lVar1 + 0x203c) = (1.0 - fVar2 / 1.4142135) / fVar4;
  return;
}



/* Entry: 10ad0b0d0; end: 10ad0b26f;  */

undefined8 FUN_10ad0b0d0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  
  **(undefined4 **)(param_1 + 0x8040) = 0;
  **(undefined4 **)(param_1 + 0x8050) = 0;
  FUN_10ad0abfc(0x44800000);
  lVar2 = *(long *)(param_1 + 0x8040);
  iVar1 = *(int *)(lVar2 + 4);
  fVar6 = (float)iVar1 / 4.0;
  iVar4 = (int)fVar6;
  lVar5 = *(long *)(param_1 + 0x8050);
  *(int *)(lVar5 + 0xc) = iVar4;
  *(int *)(lVar5 + 0x10) = iVar1 - iVar4;
  *(float *)(lVar5 + 0x14) = (float)(int)fVar6 / *(float *)(lVar5 + 0x18);
  *(undefined4 *)(lVar5 + 0x201c) = 0x40;
  iVar4 = *(int *)(lVar5 + 8);
  iVar1 = iVar4 + 0x3f;
  if (-1 < iVar4) {
    iVar1 = iVar4;
  }
  *(int *)(lVar5 + 0x2020) = iVar1 >> 6;
  *(int *)(lVar5 + 0x2024) = iVar4 % 0x40;
  *(int *)(lVar5 + 0x2074) = (int)(*(float *)(lVar2 + 0x2c) * 64.0 * 0.01);
  *(undefined4 *)(lVar5 + 0x2028) = 0x3f800000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 8) = 0x428000003f400000;
  *(undefined8 *)(lVar5 + 0x202c) = 0x358637bb3f800000;
  *(undefined4 *)(lVar2 + 0x18) = 0xc2f00000;
  FUN_10ad0aeb0(0x40a00000,param_1,param_2);
  func_0x00010ad0af68(0x461c4000,param_1,param_2);
  func_0x00010ad0b018(0x40a00000,param_1,param_2);
  lVar3 = *(long *)(param_1 + 0x8050);
  *(float *)(lVar3 + 0x2034) = (float)*(int *)(lVar3 + 4) * 9.999998e-07;
  lVar2 = *(long *)(param_1 + 0x8040);
  lVar5 = *(long *)(param_1 + 0x8048);
  *(int *)(lVar3 + 0x2074) = (int)(*(float *)(lVar2 + 0xc) * 100.0 * 0.01);
  *(undefined8 *)(lVar3 + 0x2078) = 0x3f80000000000000;
  *(undefined8 *)(lVar2 + 0x30) = 0x3f80000042c80000;
  *(undefined8 *)(lVar2 + 0x28) = 0x42c80000c2f00000;
  *(undefined4 *)(lVar3 + 0x2080) = 1;
  *(undefined4 *)(lVar5 + 0xe000) = *(undefined4 *)(lVar3 + 0x10);
  return 0;
}



/* Entry: 10ad0b270; end: 10ad0b597;  */

undefined8 FUN_10ad0b270(float param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  int iVar8;
  
  switch(param_3) {
  case 0x200001:
    **(uint **)(param_2 + 0x8040) = (uint)(param_1 != 0.0);
    **(uint **)(param_2 + 0x8050) = (uint)(param_1 != 0.0);
    break;
  case 0x200002:
    FUN_10ad0abfc();
    break;
  case 0x200003:
    if (param_1 <= -120.0) {
      param_1 = -120.0;
    }
    fVar7 = (float)NEON_fminnm(param_1,0x41900000);
    *(float *)(*(long *)(param_2 + 0x8040) + 0x10) = fVar7;
    fVar7 = fVar7 * 2.3025851 * 0.05;
    _expf();
    *(float *)(*(long *)(param_2 + 0x8050) + 0x2028) = fVar7;
    break;
  case 0x200004:
    if (param_1 <= -120.0) {
      param_1 = -120.0;
    }
    fVar7 = (float)NEON_fminnm(param_1,0x41900000);
    *(float *)(*(long *)(param_2 + 0x8040) + 0x14) = fVar7;
    fVar7 = fVar7 * 2.3025851 * 0.05;
    _expf();
    *(float *)(*(long *)(param_2 + 0x8050) + 0x202c) = fVar7;
    break;
  case 0x200005:
    if (param_1 <= -120.0) {
      param_1 = -120.0;
    }
    fVar7 = (float)NEON_fminnm(param_1,0x41900000);
    *(float *)(*(long *)(param_2 + 0x8040) + 0x18) = fVar7;
    fVar7 = fVar7 * 2.3025851 * 0.05;
    _expf();
    *(float *)(*(long *)(param_2 + 0x8050) + 0x2030) = fVar7;
    break;
  case 0x200006:
    func_0x00010ad0aeb0(param_2,param_4);
    break;
  case 0x200007:
    func_0x00010ad0af68(param_2,param_4);
    break;
  case 0x200008:
    func_0x00010ad0b018(param_2,param_4);
    break;
  case 0x200009:
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar7 = (float)NEON_fminnm(param_1,0x44000000);
    iVar4 = (int)(fVar7 + 0.5);
    lVar5 = *(long *)(param_2 + 0x8050);
    *(int *)(lVar5 + 0x201c) = iVar4;
    iVar8 = *(int *)(lVar5 + 8);
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = iVar8 / iVar4;
    }
    lVar6 = *(long *)(param_2 + 0x8040);
    *(float *)(lVar6 + 0xc) = fVar7;
    *(int *)(lVar5 + 0x2020) = iVar3;
    *(int *)(lVar5 + 0x2024) = iVar8 - iVar3 * iVar4;
    *(int *)(lVar5 + 0x2074) = (int)(fVar7 * *(float *)(lVar6 + 0x2c) * 0.01);
    break;
  case 0x20000a:
    if (param_1 <= -120.0) {
      param_1 = -120.0;
    }
    fVar7 = (float)NEON_fminnm(param_1,0x42700000);
    *(float *)(*(long *)(param_2 + 0x8040) + 0x28) = fVar7;
    lVar5 = *(long *)(param_2 + 0x8050);
    iVar8 = *(int *)(lVar5 + 4);
    fVar7 = fVar7 * 2.3025851 * 0.05;
    _expf();
    *(float *)(lVar5 + 0x2034) = fVar7 * (float)iVar8;
    break;
  case 0x20000b:
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar7 = (float)NEON_fminnm(param_1,0x42c80000);
    lVar5 = *(long *)(param_2 + 0x8040);
    *(int *)(*(long *)(param_2 + 0x8050) + 0x2074) = (int)(fVar7 * *(float *)(lVar5 + 0xc) * 0.01);
    *(float *)(lVar5 + 0x2c) = fVar7;
    break;
  case 0x20000c:
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar7 = (float)NEON_fminnm(param_1,0x42c80000);
    *(float *)(*(long *)(param_2 + 0x8040) + 0x30) = fVar7;
    lVar5 = *(long *)(param_2 + 0x8050);
    *(float *)(lVar5 + 0x207c) = fVar7 * 0.01;
    *(float *)(lVar5 + 0x2078) = 1.0 - fVar7 * 0.01;
    break;
  case 0x20000d:
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar7 = (float)NEON_fminnm(param_1,0x41200000);
    *(float *)(*(long *)(param_2 + 0x8040) + 0x34) = fVar7;
    fVar7 = fVar7 + 0.5;
    uVar1 = (int)fVar7 & 1U;
    if (INFINITY <= fVar7) {
      uVar1 = 0;
    }
    uVar2 = (int)fVar7 & 1U;
    if (fVar7 <= INFINITY) {
      uVar2 = uVar1;
    }
    *(uint *)(*(long *)(param_2 + 0x8050) + 0x2080) = uVar2;
    break;
  default:
    return 1;
  }
  return 0;
}



/* Entry: 10ad0b598; end: 10ad0b5f7;  */

void FUN_10ad0b598(long *param_1,ulong param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  float *pfVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  uVar8 = param_1[1] - *param_1 >> 3;
  if (param_2 <= uVar8) {
    if (param_2 < uVar8) {
      param_1[1] = *param_1 + param_2 * 8;
    }
    return;
  }
  pfVar6 = (float *)(param_2 - uVar8);
  lVar14 = param_1[1];
  if ((float *)(param_1[2] - lVar14 >> 3) < pfVar6) {
    lVar11 = *param_1;
    lVar14 = lVar14 - lVar11;
    lVar15 = lVar14 >> 3;
    uVar8 = (long)pfVar6 + lVar15;
    if (uVar8 >> 0x3d != 0) {
      FUN_10ad0b714();
      plVar3 = (long *)&DAT_10f62a4d8;
      FUN_109ffde64();
      if ((ulong)pfVar6 >> 0x3d == 0) {
        __Znwm((long)pfVar6 << 3);
        return;
      }
      func_0x000109ffded8();
      lVar14 = plVar3[1];
      if ((float *)(plVar3[2] - lVar14 >> 3) < pfVar6) {
        lVar14 = lVar14 - *plVar3;
        uVar8 = (long)pfVar6 + (lVar14 >> 3);
        if (uVar8 >> 0x3d != 0) {
          FUN_10ad0b858();
          puVar5 = &DAT_10f62a4d8;
          FUN_109ffde64();
          if ((ulong)pfVar6 >> 0x3d != 0) {
            func_0x000109ffded8();
            piVar12 = *(int **)(puVar5 + 0x10);
            fVar17 = *pfVar6;
            if (*piVar12 != 0) {
              lVar14 = *(long *)(puVar5 + 8);
              iVar2 = *(int *)(lVar14 + 0x2010);
              *(float *)(lVar14 + (long)iVar2 * 4) =
                   fVar17 + (float)piVar12[7] * *(float *)(lVar14 + 0x200c);
              uVar8 = (ulong)(uint)piVar12[8];
              if (piVar12[8] < 1) {
                fVar17 = 0.0;
              }
              else {
                iVar1 = piVar12[4];
                pfVar16 = (float *)(lVar14 + 0x2000);
                fVar17 = 0.0;
                do {
                  fVar21 = (float)piVar12[2];
                  if (iVar1 == 0) {
                    fVar18 = *pfVar16;
                    fVar20 = fVar18 + (float)piVar12[3] * 6.2831855;
                    *pfVar16 = fVar20;
                    fVar19 = -6.2831855;
                    if ((6.2831855 <= fVar20) || (fVar19 = 6.2831855, fVar20 <= -6.2831855)) {
                      *pfVar16 = fVar20 + fVar19;
                    }
                    _cosf();
                    fVar21 = (float)piVar12[1] + (1.0 - fVar18) * 0.5 * fVar21;
                  }
                  else {
                    fVar18 = *pfVar16;
                    fVar20 = fVar18 + (float)piVar12[3] * 6.2831855;
                    *pfVar16 = fVar20;
                    fVar19 = -6.2831855;
                    if ((6.2831855 <= fVar20) || (fVar19 = 6.2831855, fVar20 <= -6.2831855)) {
                      *pfVar16 = fVar20 + fVar19;
                    }
                    fVar19 = ABS(fVar18 / 3.1415927 + -1.0) + -0.5;
                    fVar21 = (float)piVar12[1] + (fVar19 + fVar19 + 1.0) * fVar21 * 0.5;
                  }
                  fVar17 = fVar17 + *(float *)(lVar14 + (ulong)(((int)fVar21 - (iVar2 + 0x7ff) ^
                                                                0xffffffffU) & 0x7ff) * 4) *
                                    (fVar21 - (float)(int)fVar21) +
                                    (1.0 - (fVar21 - (float)(int)fVar21)) *
                                    *(float *)(lVar14 + (ulong)((iVar2 + 0x7ff) - (int)fVar21 &
                                                               0x7ff) * 4);
                  pfVar16 = pfVar16 + 1;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              fVar21 = (float)piVar12[9];
              *(float *)(lVar14 + 0x200c) = fVar17 * fVar21;
              *(uint *)(lVar14 + 0x2010) = iVar2 + 1U & 0x7ff;
              fVar17 = fVar17 * fVar21 * (float)piVar12[6] + (float)piVar12[5] * *pfVar6;
            }
            *param_3 = fVar17;
            return;
          }
          __Znwm((long)pfVar6 << 3);
          return;
        }
        uVar7 = plVar3[2] - *plVar3;
        uVar9 = (long)uVar7 >> 2;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 == 0) {
          plVar4 = (long *)0x0;
        }
        else {
          plVar4 = plVar3;
          FUN_10ad0b86c();
        }
        puVar5 = (undefined *)((long)plVar4 + lVar14);
        _bzero(puVar5,(long)pfVar6 << 3);
        lVar15 = (long)puVar5 - (plVar3[1] - *plVar3);
        _memcpy(lVar15);
        lVar14 = *plVar3;
        *plVar3 = lVar15;
        plVar3[1] = (long)(puVar5 + (long)pfVar6 * 8);
        plVar3[2] = (long)(plVar4 + uVar9);
        if (lVar14 != 0) goto __ZdlPv;
      }
      else {
        if (pfVar6 != (float *)0x0) {
          _bzero(lVar14,(long)pfVar6 << 3);
          lVar14 = lVar14 + (long)pfVar6 * 8;
        }
        plVar3[1] = lVar14;
      }
      return;
    }
    uVar7 = param_1[2] - lVar11;
    uVar9 = (long)uVar7 >> 2;
    if (uVar9 <= uVar8) {
      uVar9 = uVar8;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 == 0) {
      plVar3 = (long *)0x0;
      lVar13 = lVar14;
    }
    else {
      plVar3 = param_1;
      FUN_10ad0b728();
      lVar11 = *param_1;
      lVar15 = param_1[1] - lVar11 >> 3;
      lVar13 = param_1[1] - lVar11;
    }
    lVar14 = (long)plVar3 + lVar14;
    _bzero(lVar14,(long)pfVar6 * 8);
    lVar10 = lVar14 + lVar15 * -8;
    _memcpy(lVar10,lVar11,lVar13);
    lVar15 = *param_1;
    *param_1 = lVar10;
    param_1[1] = lVar14 + (long)pfVar6 * 8;
    param_1[2] = (long)(plVar3 + uVar9);
    if (lVar15 != 0) {
__ZdlPv:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  else {
    if (pfVar6 != (float *)0x0) {
      _bzero(lVar14,(long)pfVar6 * 8);
      lVar14 = lVar14 + (long)pfVar6 * 8;
    }
    param_1[1] = lVar14;
  }
  return;
}



/* Entry: 10ad0b5f8; end: 10ad0b713;  */

void FUN_10ad0b5f8(long *param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  lVar12 = param_1[1];
  if ((float *)(param_1[2] - lVar12 >> 3) < param_2) {
    lVar9 = *param_1;
    lVar12 = lVar12 - lVar9;
    lVar13 = lVar12 >> 3;
    uVar14 = (long)param_2 + lVar13;
    if (uVar14 >> 0x3d != 0) {
      FUN_10ad0b714();
      plVar3 = (long *)&DAT_10f62a4d8;
      FUN_109ffde64();
      if ((ulong)param_2 >> 0x3d == 0) {
        __Znwm((long)param_2 << 3);
        return;
      }
      func_0x000109ffded8();
      lVar12 = plVar3[1];
      if ((float *)(plVar3[2] - lVar12 >> 3) < param_2) {
        lVar12 = lVar12 - *plVar3;
        uVar14 = (long)param_2 + (lVar12 >> 3);
        if (uVar14 >> 0x3d != 0) {
          FUN_10ad0b858();
          puVar5 = &DAT_10f62a4d8;
          FUN_109ffde64();
          if ((ulong)param_2 >> 0x3d != 0) {
            func_0x000109ffded8();
            piVar10 = *(int **)(puVar5 + 0x10);
            fVar16 = *param_2;
            if (*piVar10 != 0) {
              lVar12 = *(long *)(puVar5 + 8);
              iVar2 = *(int *)(lVar12 + 0x2010);
              *(float *)(lVar12 + (long)iVar2 * 4) =
                   fVar16 + (float)piVar10[7] * *(float *)(lVar12 + 0x200c);
              uVar14 = (ulong)(uint)piVar10[8];
              if (piVar10[8] < 1) {
                fVar16 = 0.0;
              }
              else {
                iVar1 = piVar10[4];
                pfVar15 = (float *)(lVar12 + 0x2000);
                fVar16 = 0.0;
                do {
                  fVar20 = (float)piVar10[2];
                  if (iVar1 == 0) {
                    fVar17 = *pfVar15;
                    fVar19 = fVar17 + (float)piVar10[3] * 6.2831855;
                    *pfVar15 = fVar19;
                    fVar18 = -6.2831855;
                    if ((6.2831855 <= fVar19) || (fVar18 = 6.2831855, fVar19 <= -6.2831855)) {
                      *pfVar15 = fVar19 + fVar18;
                    }
                    _cosf();
                    fVar20 = (float)piVar10[1] + (1.0 - fVar17) * 0.5 * fVar20;
                  }
                  else {
                    fVar17 = *pfVar15;
                    fVar19 = fVar17 + (float)piVar10[3] * 6.2831855;
                    *pfVar15 = fVar19;
                    fVar18 = -6.2831855;
                    if ((6.2831855 <= fVar19) || (fVar18 = 6.2831855, fVar19 <= -6.2831855)) {
                      *pfVar15 = fVar19 + fVar18;
                    }
                    fVar18 = ABS(fVar17 / 3.1415927 + -1.0) + -0.5;
                    fVar20 = (float)piVar10[1] + (fVar18 + fVar18 + 1.0) * fVar20 * 0.5;
                  }
                  fVar16 = fVar16 + *(float *)(lVar12 + (ulong)(((int)fVar20 - (iVar2 + 0x7ff) ^
                                                                0xffffffffU) & 0x7ff) * 4) *
                                    (fVar20 - (float)(int)fVar20) +
                                    (1.0 - (fVar20 - (float)(int)fVar20)) *
                                    *(float *)(lVar12 + (ulong)((iVar2 + 0x7ff) - (int)fVar20 &
                                                               0x7ff) * 4);
                  pfVar15 = pfVar15 + 1;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              fVar20 = (float)piVar10[9];
              *(float *)(lVar12 + 0x200c) = fVar16 * fVar20;
              *(uint *)(lVar12 + 0x2010) = iVar2 + 1U & 0x7ff;
              fVar16 = fVar16 * fVar20 * (float)piVar10[6] + (float)piVar10[5] * *param_2;
            }
            *param_3 = fVar16;
            return;
          }
          __Znwm((long)param_2 << 3);
          return;
        }
        uVar6 = plVar3[2] - *plVar3;
        uVar7 = (long)uVar6 >> 2;
        if (uVar7 <= uVar14) {
          uVar7 = uVar14;
        }
        if (0x7ffffffffffffff7 < uVar6) {
          uVar7 = 0x1fffffffffffffff;
        }
        if (uVar7 == 0) {
          plVar4 = (long *)0x0;
        }
        else {
          plVar4 = plVar3;
          FUN_10ad0b86c();
        }
        puVar5 = (undefined *)((long)plVar4 + lVar12);
        _bzero(puVar5,(long)param_2 << 3);
        lVar13 = (long)puVar5 - (plVar3[1] - *plVar3);
        _memcpy(lVar13);
        lVar12 = *plVar3;
        *plVar3 = lVar13;
        plVar3[1] = (long)(puVar5 + (long)param_2 * 8);
        plVar3[2] = (long)(plVar4 + uVar7);
        if (lVar12 != 0) goto __ZdlPv;
      }
      else {
        if (param_2 != (float *)0x0) {
          _bzero(lVar12,(long)param_2 << 3);
          lVar12 = lVar12 + (long)param_2 * 8;
        }
        plVar3[1] = lVar12;
      }
      return;
    }
    uVar6 = param_1[2] - lVar9;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar14) {
      uVar7 = uVar14;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      plVar3 = (long *)0x0;
      lVar11 = lVar12;
    }
    else {
      plVar3 = param_1;
      FUN_10ad0b728();
      lVar9 = *param_1;
      lVar13 = param_1[1] - lVar9 >> 3;
      lVar11 = param_1[1] - lVar9;
    }
    lVar12 = (long)plVar3 + lVar12;
    _bzero(lVar12,(long)param_2 << 3);
    lVar8 = lVar12 + lVar13 * -8;
    _memcpy(lVar8,lVar9,lVar11);
    lVar13 = *param_1;
    *param_1 = lVar8;
    param_1[1] = lVar12 + (long)param_2 * 8;
    param_1[2] = (long)(plVar3 + uVar7);
    if (lVar13 != 0) {
__ZdlPv:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  else {
    if (param_2 != (float *)0x0) {
      _bzero(lVar12,(long)param_2 << 3);
      lVar12 = lVar12 + (long)param_2 * 8;
    }
    param_1[1] = lVar12;
  }
  return;
}



/* Entry: 10ad0b714; end: 10ad0b727;  */

void FUN_10ad0b714(undefined8 param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm((long)param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  lVar9 = plVar3[1];
  if ((float *)(plVar3[2] - lVar9 >> 3) < param_2) {
    lVar9 = lVar9 - *plVar3;
    uVar11 = (long)param_2 + (lVar9 >> 3);
    if (uVar11 >> 0x3d != 0) {
      FUN_10ad0b858();
      puVar5 = &DAT_10f62a4d8;
      FUN_109ffde64();
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        piVar10 = *(int **)(puVar5 + 0x10);
        fVar13 = *param_2;
        if (*piVar10 != 0) {
          lVar9 = *(long *)(puVar5 + 8);
          iVar2 = *(int *)(lVar9 + 0x2010);
          *(float *)(lVar9 + (long)iVar2 * 4) =
               fVar13 + (float)piVar10[7] * *(float *)(lVar9 + 0x200c);
          uVar11 = (ulong)(uint)piVar10[8];
          if (piVar10[8] < 1) {
            fVar13 = 0.0;
          }
          else {
            iVar1 = piVar10[4];
            pfVar12 = (float *)(lVar9 + 0x2000);
            fVar13 = 0.0;
            do {
              fVar17 = (float)piVar10[2];
              if (iVar1 == 0) {
                fVar14 = *pfVar12;
                fVar16 = fVar14 + (float)piVar10[3] * 6.2831855;
                *pfVar12 = fVar16;
                fVar15 = -6.2831855;
                if ((6.2831855 <= fVar16) || (fVar15 = 6.2831855, fVar16 <= -6.2831855)) {
                  *pfVar12 = fVar16 + fVar15;
                }
                _cosf();
                fVar17 = (float)piVar10[1] + (1.0 - fVar14) * 0.5 * fVar17;
              }
              else {
                fVar14 = *pfVar12;
                fVar16 = fVar14 + (float)piVar10[3] * 6.2831855;
                *pfVar12 = fVar16;
                fVar15 = -6.2831855;
                if ((6.2831855 <= fVar16) || (fVar15 = 6.2831855, fVar16 <= -6.2831855)) {
                  *pfVar12 = fVar16 + fVar15;
                }
                fVar15 = ABS(fVar14 / 3.1415927 + -1.0) + -0.5;
                fVar17 = (float)piVar10[1] + (fVar15 + fVar15 + 1.0) * fVar17 * 0.5;
              }
              fVar13 = fVar13 + *(float *)(lVar9 + (ulong)(((int)fVar17 - (iVar2 + 0x7ff) ^
                                                           0xffffffffU) & 0x7ff) * 4) *
                                (fVar17 - (float)(int)fVar17) +
                                (1.0 - (fVar17 - (float)(int)fVar17)) *
                                *(float *)(lVar9 + (ulong)((iVar2 + 0x7ff) - (int)fVar17 & 0x7ff) *
                                                   4);
              pfVar12 = pfVar12 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          fVar17 = (float)piVar10[9];
          *(float *)(lVar9 + 0x200c) = fVar13 * fVar17;
          *(uint *)(lVar9 + 0x2010) = iVar2 + 1U & 0x7ff;
          fVar13 = fVar13 * fVar17 * (float)piVar10[6] + (float)piVar10[5] * *param_2;
        }
        *param_3 = fVar13;
        return;
      }
      __Znwm((long)param_2 << 3);
      return;
    }
    uVar6 = plVar3[2] - *plVar3;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar11) {
      uVar7 = uVar11;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = plVar3;
      FUN_10ad0b86c();
    }
    puVar5 = (undefined *)((long)plVar4 + lVar9);
    _bzero(puVar5,(long)param_2 << 3);
    lVar8 = (long)puVar5 - (plVar3[1] - *plVar3);
    _memcpy(lVar8);
    lVar9 = *plVar3;
    *plVar3 = lVar8;
    plVar3[1] = (long)(puVar5 + (long)param_2 * 8);
    plVar3[2] = (long)(plVar4 + uVar7);
    if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  else {
    if (param_2 != (float *)0x0) {
      _bzero(lVar9,(long)param_2 << 3);
      lVar9 = lVar9 + (long)param_2 * 8;
    }
    plVar3[1] = lVar9;
  }
  return;
}



/* Entry: 10ad0b728; end: 10ad0b75b;  */

void FUN_10ad0b728(long *param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm((long)param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  lVar9 = param_1[1];
  if ((float *)(param_1[2] - lVar9 >> 3) < param_2) {
    lVar9 = lVar9 - *param_1;
    uVar11 = (long)param_2 + (lVar9 >> 3);
    if (uVar11 >> 0x3d != 0) {
      FUN_10ad0b858();
      puVar5 = &DAT_10f62a4d8;
      FUN_109ffde64();
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        piVar10 = *(int **)(puVar5 + 0x10);
        fVar13 = *param_2;
        if (*piVar10 != 0) {
          lVar9 = *(long *)(puVar5 + 8);
          iVar2 = *(int *)(lVar9 + 0x2010);
          *(float *)(lVar9 + (long)iVar2 * 4) =
               fVar13 + (float)piVar10[7] * *(float *)(lVar9 + 0x200c);
          uVar11 = (ulong)(uint)piVar10[8];
          if (piVar10[8] < 1) {
            fVar13 = 0.0;
          }
          else {
            iVar1 = piVar10[4];
            pfVar12 = (float *)(lVar9 + 0x2000);
            fVar13 = 0.0;
            do {
              fVar17 = (float)piVar10[2];
              if (iVar1 == 0) {
                fVar14 = *pfVar12;
                fVar16 = fVar14 + (float)piVar10[3] * 6.2831855;
                *pfVar12 = fVar16;
                fVar15 = -6.2831855;
                if ((6.2831855 <= fVar16) || (fVar15 = 6.2831855, fVar16 <= -6.2831855)) {
                  *pfVar12 = fVar16 + fVar15;
                }
                _cosf();
                fVar17 = (float)piVar10[1] + (1.0 - fVar14) * 0.5 * fVar17;
              }
              else {
                fVar14 = *pfVar12;
                fVar16 = fVar14 + (float)piVar10[3] * 6.2831855;
                *pfVar12 = fVar16;
                fVar15 = -6.2831855;
                if ((6.2831855 <= fVar16) || (fVar15 = 6.2831855, fVar16 <= -6.2831855)) {
                  *pfVar12 = fVar16 + fVar15;
                }
                fVar15 = ABS(fVar14 / 3.1415927 + -1.0) + -0.5;
                fVar17 = (float)piVar10[1] + (fVar15 + fVar15 + 1.0) * fVar17 * 0.5;
              }
              fVar13 = fVar13 + *(float *)(lVar9 + (ulong)(((int)fVar17 - (iVar2 + 0x7ff) ^
                                                           0xffffffffU) & 0x7ff) * 4) *
                                (fVar17 - (float)(int)fVar17) +
                                (1.0 - (fVar17 - (float)(int)fVar17)) *
                                *(float *)(lVar9 + (ulong)((iVar2 + 0x7ff) - (int)fVar17 & 0x7ff) *
                                                   4);
              pfVar12 = pfVar12 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          fVar17 = (float)piVar10[9];
          *(float *)(lVar9 + 0x200c) = fVar13 * fVar17;
          *(uint *)(lVar9 + 0x2010) = iVar2 + 1U & 0x7ff;
          fVar13 = fVar13 * fVar17 * (float)piVar10[6] + (float)piVar10[5] * *param_2;
        }
        *param_3 = fVar13;
        return;
      }
      __Znwm((long)param_2 << 3);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar11) {
      uVar7 = uVar11;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10ad0b86c();
    }
    lVar9 = (long)plVar3 + lVar9;
    _bzero(lVar9,(long)param_2 << 3);
    lVar8 = lVar9 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lVar4 = *param_1;
    *param_1 = lVar8;
    param_1[1] = lVar9 + (long)param_2 * 8;
    param_1[2] = (long)(plVar3 + uVar7);
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  else {
    if (param_2 != (float *)0x0) {
      _bzero(lVar9,(long)param_2 << 3);
      lVar9 = lVar9 + (long)param_2 * 8;
    }
    param_1[1] = lVar9;
  }
  return;
}



/* Entry: 10ad0b75c; end: 10ad0b857;  */

void FUN_10ad0b75c(long *param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar9 = param_1[1];
  if ((float *)(param_1[2] - lVar9 >> 3) < param_2) {
    lVar9 = lVar9 - *param_1;
    uVar11 = (long)param_2 + (lVar9 >> 3);
    if (uVar11 >> 0x3d != 0) {
      FUN_10ad0b858();
      puVar5 = &DAT_10f62a4d8;
      FUN_109ffde64();
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        piVar10 = *(int **)(puVar5 + 0x10);
        fVar13 = *param_2;
        if (*piVar10 != 0) {
          lVar9 = *(long *)(puVar5 + 8);
          iVar2 = *(int *)(lVar9 + 0x2010);
          *(float *)(lVar9 + (long)iVar2 * 4) =
               fVar13 + (float)piVar10[7] * *(float *)(lVar9 + 0x200c);
          uVar11 = (ulong)(uint)piVar10[8];
          if (piVar10[8] < 1) {
            fVar13 = 0.0;
          }
          else {
            iVar1 = piVar10[4];
            pfVar12 = (float *)(lVar9 + 0x2000);
            fVar13 = 0.0;
            do {
              fVar17 = (float)piVar10[2];
              if (iVar1 == 0) {
                fVar14 = *pfVar12;
                fVar16 = fVar14 + (float)piVar10[3] * 6.2831855;
                *pfVar12 = fVar16;
                fVar15 = -6.2831855;
                if ((6.2831855 <= fVar16) || (fVar15 = 6.2831855, fVar16 <= -6.2831855)) {
                  *pfVar12 = fVar16 + fVar15;
                }
                _cosf();
                fVar17 = (float)piVar10[1] + (1.0 - fVar14) * 0.5 * fVar17;
              }
              else {
                fVar14 = *pfVar12;
                fVar16 = fVar14 + (float)piVar10[3] * 6.2831855;
                *pfVar12 = fVar16;
                fVar15 = -6.2831855;
                if ((6.2831855 <= fVar16) || (fVar15 = 6.2831855, fVar16 <= -6.2831855)) {
                  *pfVar12 = fVar16 + fVar15;
                }
                fVar15 = ABS(fVar14 / 3.1415927 + -1.0) + -0.5;
                fVar17 = (float)piVar10[1] + (fVar15 + fVar15 + 1.0) * fVar17 * 0.5;
              }
              fVar13 = fVar13 + *(float *)(lVar9 + (ulong)(((int)fVar17 - (iVar2 + 0x7ff) ^
                                                           0xffffffffU) & 0x7ff) * 4) *
                                (fVar17 - (float)(int)fVar17) +
                                (1.0 - (fVar17 - (float)(int)fVar17)) *
                                *(float *)(lVar9 + (ulong)((iVar2 + 0x7ff) - (int)fVar17 & 0x7ff) *
                                                   4);
              pfVar12 = pfVar12 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          fVar17 = (float)piVar10[9];
          *(float *)(lVar9 + 0x200c) = fVar13 * fVar17;
          *(uint *)(lVar9 + 0x2010) = iVar2 + 1U & 0x7ff;
          fVar13 = fVar13 * fVar17 * (float)piVar10[6] + (float)piVar10[5] * *param_2;
        }
        *param_3 = fVar13;
        return;
      }
      __Znwm((long)param_2 << 3);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar11) {
      uVar7 = uVar11;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10ad0b86c();
    }
    lVar9 = (long)plVar3 + lVar9;
    _bzero(lVar9,(long)param_2 << 3);
    lVar8 = lVar9 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lVar4 = *param_1;
    *param_1 = lVar8;
    param_1[1] = lVar9 + (long)param_2 * 8;
    param_1[2] = (long)(plVar3 + uVar7);
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  else {
    if (param_2 != (float *)0x0) {
      _bzero(lVar9,(long)param_2 << 3);
      lVar9 = lVar9 + (long)param_2 * 8;
    }
    param_1[1] = lVar9;
  }
  return;
}



/* Entry: 10ad0b858; end: 10ad0b86b;  */

void FUN_10ad0b858(undefined8 param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar3 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000109ffded8();
    piVar4 = *(int **)(puVar3 + 0x10);
    fVar8 = *param_2;
    if (*piVar4 != 0) {
      lVar5 = *(long *)(puVar3 + 8);
      iVar2 = *(int *)(lVar5 + 0x2010);
      *(float *)(lVar5 + (long)iVar2 * 4) = fVar8 + (float)piVar4[7] * *(float *)(lVar5 + 0x200c);
      uVar6 = (ulong)(uint)piVar4[8];
      if (piVar4[8] < 1) {
        fVar8 = 0.0;
      }
      else {
        iVar1 = piVar4[4];
        pfVar7 = (float *)(lVar5 + 0x2000);
        fVar8 = 0.0;
        do {
          fVar12 = (float)piVar4[2];
          if (iVar1 == 0) {
            fVar9 = *pfVar7;
            fVar11 = fVar9 + (float)piVar4[3] * 6.2831855;
            *pfVar7 = fVar11;
            fVar10 = -6.2831855;
            if ((6.2831855 <= fVar11) || (fVar10 = 6.2831855, fVar11 <= -6.2831855)) {
              *pfVar7 = fVar11 + fVar10;
            }
            _cosf();
            fVar12 = (float)piVar4[1] + (1.0 - fVar9) * 0.5 * fVar12;
          }
          else {
            fVar9 = *pfVar7;
            fVar11 = fVar9 + (float)piVar4[3] * 6.2831855;
            *pfVar7 = fVar11;
            fVar10 = -6.2831855;
            if ((6.2831855 <= fVar11) || (fVar10 = 6.2831855, fVar11 <= -6.2831855)) {
              *pfVar7 = fVar11 + fVar10;
            }
            fVar10 = ABS(fVar9 / 3.1415927 + -1.0) + -0.5;
            fVar12 = (float)piVar4[1] + (fVar10 + fVar10 + 1.0) * fVar12 * 0.5;
          }
          fVar8 = fVar8 + *(float *)(lVar5 + (ulong)(((int)fVar12 - (iVar2 + 0x7ff) ^ 0xffffffffU) &
                                                    0x7ff) * 4) * (fVar12 - (float)(int)fVar12) +
                          (1.0 - (fVar12 - (float)(int)fVar12)) *
                          *(float *)(lVar5 + (ulong)((iVar2 + 0x7ff) - (int)fVar12 & 0x7ff) * 4);
          pfVar7 = pfVar7 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      fVar12 = (float)piVar4[9];
      *(float *)(lVar5 + 0x200c) = fVar8 * fVar12;
      *(uint *)(lVar5 + 0x2010) = iVar2 + 1U & 0x7ff;
      fVar8 = fVar8 * fVar12 * (float)piVar4[6] + (float)piVar4[5] * *param_2;
    }
    *param_3 = fVar8;
    return;
  }
  __Znwm((long)param_2 << 3);
  return;
}



/* Entry: 10ad0b86c; end: 10ad0b89f;  */

void FUN_10ad0b86c(long param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000109ffded8();
    piVar3 = *(int **)(param_1 + 0x10);
    fVar7 = *param_2;
    if (*piVar3 != 0) {
      lVar4 = *(long *)(param_1 + 8);
      iVar2 = *(int *)(lVar4 + 0x2010);
      *(float *)(lVar4 + (long)iVar2 * 4) = fVar7 + (float)piVar3[7] * *(float *)(lVar4 + 0x200c);
      uVar5 = (ulong)(uint)piVar3[8];
      if (piVar3[8] < 1) {
        fVar7 = 0.0;
      }
      else {
        iVar1 = piVar3[4];
        pfVar6 = (float *)(lVar4 + 0x2000);
        fVar7 = 0.0;
        do {
          fVar11 = (float)piVar3[2];
          if (iVar1 == 0) {
            fVar8 = *pfVar6;
            fVar10 = fVar8 + (float)piVar3[3] * 6.2831855;
            *pfVar6 = fVar10;
            fVar9 = -6.2831855;
            if ((6.2831855 <= fVar10) || (fVar9 = 6.2831855, fVar10 <= -6.2831855)) {
              *pfVar6 = fVar10 + fVar9;
            }
            _cosf();
            fVar11 = (float)piVar3[1] + (1.0 - fVar8) * 0.5 * fVar11;
          }
          else {
            fVar8 = *pfVar6;
            fVar10 = fVar8 + (float)piVar3[3] * 6.2831855;
            *pfVar6 = fVar10;
            fVar9 = -6.2831855;
            if ((6.2831855 <= fVar10) || (fVar9 = 6.2831855, fVar10 <= -6.2831855)) {
              *pfVar6 = fVar10 + fVar9;
            }
            fVar9 = ABS(fVar8 / 3.1415927 + -1.0) + -0.5;
            fVar11 = (float)piVar3[1] + (fVar9 + fVar9 + 1.0) * fVar11 * 0.5;
          }
          fVar7 = fVar7 + *(float *)(lVar4 + (ulong)(((int)fVar11 - (iVar2 + 0x7ff) ^ 0xffffffffU) &
                                                    0x7ff) * 4) * (fVar11 - (float)(int)fVar11) +
                          (1.0 - (fVar11 - (float)(int)fVar11)) *
                          *(float *)(lVar4 + (ulong)((iVar2 + 0x7ff) - (int)fVar11 & 0x7ff) * 4);
          pfVar6 = pfVar6 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      fVar11 = (float)piVar3[9];
      *(float *)(lVar4 + 0x200c) = fVar7 * fVar11;
      *(uint *)(lVar4 + 0x2010) = iVar2 + 1U & 0x7ff;
      fVar7 = fVar7 * fVar11 * (float)piVar3[6] + (float)piVar3[5] * *param_2;
    }
    *param_3 = fVar7;
    return;
  }
  __Znwm((long)param_2 << 3);
  return;
}



/* Entry: 10ad0b8a0; end: 10ad0baa3;  */

void FUN_10ad0b8a0(long param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  piVar3 = *(int **)(param_1 + 0x10);
  fVar7 = *param_2;
  if (*piVar3 != 0) {
    lVar4 = *(long *)(param_1 + 8);
    iVar2 = *(int *)(lVar4 + 0x2010);
    *(float *)(lVar4 + (long)iVar2 * 4) = fVar7 + (float)piVar3[7] * *(float *)(lVar4 + 0x200c);
    uVar5 = (ulong)(uint)piVar3[8];
    if (piVar3[8] < 1) {
      fVar7 = 0.0;
    }
    else {
      iVar1 = piVar3[4];
      pfVar6 = (float *)(lVar4 + 0x2000);
      fVar7 = 0.0;
      do {
        fVar11 = (float)piVar3[2];
        if (iVar1 == 0) {
          fVar8 = *pfVar6;
          fVar10 = fVar8 + (float)piVar3[3] * 6.2831855;
          *pfVar6 = fVar10;
          fVar9 = -6.2831855;
          if ((6.2831855 <= fVar10) || (fVar9 = 6.2831855, fVar10 <= -6.2831855)) {
            *pfVar6 = fVar10 + fVar9;
          }
          _cosf();
          fVar11 = (float)piVar3[1] + (1.0 - fVar8) * 0.5 * fVar11;
        }
        else {
          fVar8 = *pfVar6;
          fVar10 = fVar8 + (float)piVar3[3] * 6.2831855;
          *pfVar6 = fVar10;
          fVar9 = -6.2831855;
          if ((6.2831855 <= fVar10) || (fVar9 = 6.2831855, fVar10 <= -6.2831855)) {
            *pfVar6 = fVar10 + fVar9;
          }
          fVar9 = ABS(fVar8 / 3.1415927 + -1.0) + -0.5;
          fVar11 = (float)piVar3[1] + (fVar9 + fVar9 + 1.0) * fVar11 * 0.5;
        }
        fVar7 = fVar7 + *(float *)(lVar4 + (ulong)(((int)fVar11 - (iVar2 + 0x7ff) ^ 0xffffffffU) &
                                                  0x7ff) * 4) * (fVar11 - (float)(int)fVar11) +
                        (1.0 - (fVar11 - (float)(int)fVar11)) *
                        *(float *)(lVar4 + (ulong)((iVar2 + 0x7ff) - (int)fVar11 & 0x7ff) * 4);
        pfVar6 = pfVar6 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    fVar11 = (float)piVar3[9];
    *(float *)(lVar4 + 0x200c) = fVar7 * fVar11;
    *(uint *)(lVar4 + 0x2010) = iVar2 + 1U & 0x7ff;
    fVar7 = fVar7 * fVar11 * (float)piVar3[6] + (float)piVar3[5] * *param_2;
  }
  *param_3 = fVar7;
  return;
}



/* Entry: 10ad0baa4; end: 10ad0bb17;  */

void FUN_10ad0baa4(long *param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  *(uint *)(*param_1 + 0x1c) = param_2;
  lVar1 = param_1[2];
  *(uint *)(lVar1 + 0x20) = param_2;
  *(float *)(lVar1 + 0x24) = 1.0 / (float)(int)param_2;
  if (0 < (int)param_2) {
    uVar2 = 0;
    lVar3 = param_1[1];
    do {
      *(float *)(lVar3 + 0x2000 + uVar2 * 4) =
           ((float)(uVar2 & 0xffffffff) + (float)(uVar2 & 0xffffffff)) * 3.1415927 *
           *(float *)(lVar1 + 0x24);
      uVar2 = uVar2 + 1;
    } while (param_2 != uVar2);
  }
  return;
}



/* Entry: 10ad0bb18; end: 10ad0be2f;  */

undefined8 FUN_10ad0bb18(undefined8 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)*param_1;
  *puVar1 = 0;
  puVar2 = (undefined4 *)param_1[2];
  *puVar2 = 0;
  puVar2[1] = (uint)(float)param_2 & 0x80000000;
  *(undefined8 *)(puVar1 + 1) = 0x40e0000000000000;
  puVar1[3] = 0x3f800000;
  puVar2[2] = (float)param_2 * 0.007;
  puVar2[3] = 1.0 / (float)param_2;
  puVar1[5] = 0x42480000;
  *(undefined8 *)(puVar2 + 5) = 0x3f0000003f000000;
  FUN_10ad0baa4(param_1,2);
  return 0;
}



/* Entry: 10ad0be30; end: 10ad0bf4f;  */

undefined8 FUN_10ad0be30(long *param_1,int param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  
  if (param_2 < 0x70005) {
    if (0x70002 < param_2) {
      if (param_2 == 0x70003) {
        fVar1 = *(float *)(*param_1 + 8);
      }
      else {
        if (param_2 != 0x70004) {
          return 1;
        }
        fVar1 = *(float *)(*param_1 + 0xc);
      }
      goto LAB_10ad0bf40;
    }
    if (param_2 != 0x70001) {
      if (param_2 != 0x70002) {
        return 1;
      }
      fVar1 = *(float *)(*param_1 + 4);
      goto LAB_10ad0bf40;
    }
    iVar2 = *(int *)*param_1;
  }
  else if (param_2 < 0x70007) {
    if (param_2 != 0x70005) {
      if (param_2 != 0x70006) {
        return 1;
      }
      fVar1 = *(float *)(*param_1 + 0x14);
      goto LAB_10ad0bf40;
    }
    iVar2 = *(int *)(*param_1 + 0x1c);
  }
  else {
    if (param_2 != 0x70007) {
      if (param_2 != 0x70008) {
        return 1;
      }
      fVar1 = *(float *)(*param_1 + 0x18);
      goto LAB_10ad0bf40;
    }
    iVar2 = *(int *)(*param_1 + 0x10);
  }
  fVar1 = (float)iVar2;
LAB_10ad0bf40:
  *param_3 = fVar1;
  return 0;
}



/* Entry: 10ad0bf50; end: 10ad0c00f;  */

void FUN_10ad0bf50(long param_1,float *param_2,float *param_3)

{
  long lVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  
  piVar2 = *(int **)(param_1 + 0x10);
  fVar3 = *param_2;
  if (*piVar2 != 0) {
    fVar3 = ABS(fVar3);
    _logf();
    if ((float)piVar2[4] <= ABS(fVar3 - (float)piVar2[1])) {
      fVar3 = (float)NEON_fminnm((fVar3 - (float)piVar2[1]) * (float)piVar2[2],0);
    }
    else {
      fVar3 = (float)piVar2[5] * (fVar3 - (float)piVar2[6]) * (fVar3 - (float)piVar2[6]);
    }
    fVar4 = **(float **)(param_1 + 8) - fVar3;
    lVar1 = 0;
    if (0.0 <= fVar4) {
      lVar1 = 4;
    }
    fVar3 = fVar3 + *(float *)((long)piVar2 + lVar1 + 0x24) * fVar4;
    **(float **)(param_1 + 8) = fVar3;
    fVar3 = fVar3 + (float)piVar2[3];
    _expf();
    fVar3 = *param_2 * fVar3;
  }
  *param_3 = fVar3;
  return;
}



/* Entry: 10ad0c010; end: 10ad0c0bf;  */

undefined8 FUN_10ad0c010(undefined8 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  
  puVar1 = (undefined4 *)*param_1;
  *puVar1 = 0;
  puVar2 = (undefined4 *)param_1[2];
  *puVar2 = 0;
  *(undefined8 *)(puVar2 + 1) = 0xc130d6ab;
  puVar2[6] = 0xc130d6ab;
  *(undefined8 *)(puVar2 + 4) = 0x7fc0000000000000;
  *(undefined8 *)(puVar1 + 3) = 0;
  *(undefined8 *)(puVar1 + 1) = 0x3f800000c2c00000;
  puVar2[3] = 0;
  fVar3 = -2.2 / ((float)param_2 * 0.001);
  _expf();
  puVar2[9] = fVar3;
  *(undefined8 *)(puVar1 + 6) = 0x42c800003f800000;
  fVar3 = -2.2 / ((float)param_2 * 0.1);
  _expf();
  puVar2[10] = fVar3;
  return 0;
}



/* Entry: 10ad0c0c0; end: 10ad0c377;  */

undefined8 FUN_10ad0c0c0(float param_1,long *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = 1;
  if (param_3 < 0xa0004) {
    if (param_3 == 0xa0001) {
      uVar1 = 0;
      *(uint *)*param_2 = (uint)(param_1 != 0.0);
      *(uint *)param_2[2] = (uint)(param_1 != 0.0);
    }
    else if (param_3 == 0xa0002) {
      uVar1 = 0;
      if (param_1 <= -96.0) {
        param_1 = -96.0;
      }
      fVar3 = (float)NEON_fminnm(param_1,0);
      *(float *)(*param_2 + 4) = fVar3;
      fVar3 = (fVar3 / 20.0) * 2.3025851;
      lVar2 = param_2[2];
      *(float *)(lVar2 + 4) = fVar3;
      *(float *)(lVar2 + 0x18) = *(float *)(lVar2 + 0x10) + fVar3;
    }
    else if (param_3 == 0xa0003) {
      uVar1 = 0;
      if (param_1 <= 1.0) {
        param_1 = 1.0;
      }
      fVar3 = (float)NEON_fminnm(param_1,0x42200000);
      *(float *)(*param_2 + 8) = fVar3;
      fVar3 = 1.0 / fVar3 + -1.0;
      lVar2 = param_2[2];
      *(float *)(lVar2 + 8) = fVar3;
      *(float *)(lVar2 + 0x14) = fVar3 / (*(float *)(lVar2 + 0x10) * 4.0);
    }
  }
  else if (param_3 < 0xa0006) {
    if (param_3 == 0xa0004) {
      uVar1 = 0;
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      fVar3 = (float)NEON_fminnm(param_1,0x42480000);
      *(float *)(*param_2 + 0x10) = fVar3;
      fVar3 = (fVar3 / 40.0) * 2.3025851;
      lVar2 = param_2[2];
      *(float *)(lVar2 + 0x10) = fVar3;
      *(float *)(lVar2 + 0x14) = *(float *)(lVar2 + 8) / (fVar3 * 4.0);
      *(float *)(lVar2 + 0x18) = *(float *)(lVar2 + 4) + fVar3;
    }
    else if (param_3 == 0xa0005) {
      uVar1 = 0;
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      fVar3 = (float)NEON_fminnm(param_1,0x42100000);
      *(float *)(*param_2 + 0xc) = fVar3;
      *(float *)(param_2[2] + 0xc) = (fVar3 / 20.0) * 2.3025851;
    }
  }
  else if (param_3 == 0xa0006) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar3 = (float)NEON_fminnm(param_1,0x44fa0000);
    *(float *)(*param_2 + 0x18) = fVar3;
    fVar3 = -2.2 / (fVar3 * 0.001 * (float)param_4);
    _expf(1);
    uVar1 = 0;
    *(float *)(param_2[2] + 0x24) = fVar3;
  }
  else if (param_3 == 0xa0007) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar3 = (float)NEON_fminnm(param_1,0x44fa0000);
    *(float *)(*param_2 + 0x1c) = fVar3;
    fVar3 = -2.2 / (fVar3 * 0.001 * (float)param_4);
    _expf(1);
    uVar1 = 0;
    *(float *)(param_2[2] + 0x28) = fVar3;
  }
  return uVar1;
}



/* Entry: 10ad0c378; end: 10ad0c46f;  */

undefined8 FUN_10ad0c378(long *param_1,int param_2,float *param_3)

{
  float fVar1;
  
  if (param_2 < 0xa0004) {
    if (param_2 == 0xa0001) {
      fVar1 = (float)*(int *)*param_1;
    }
    else if (param_2 == 0xa0002) {
      fVar1 = *(float *)(*param_1 + 4);
    }
    else {
      if (param_2 != 0xa0003) {
        return 1;
      }
      fVar1 = *(float *)(*param_1 + 8);
    }
  }
  else if (param_2 < 0xa0006) {
    if (param_2 == 0xa0004) {
      fVar1 = *(float *)(*param_1 + 0x10);
    }
    else {
      if (param_2 != 0xa0005) {
        return 1;
      }
      fVar1 = *(float *)(*param_1 + 0xc);
    }
  }
  else if (param_2 == 0xa0006) {
    fVar1 = *(float *)(*param_1 + 0x18);
  }
  else {
    if (param_2 != 0xa0007) {
      return 1;
    }
    fVar1 = *(float *)(*param_1 + 0x1c);
  }
  *param_3 = fVar1;
  return 0;
}



/* Entry: 10ad0c470; end: 10ad0c56f;  */

void FUN_10ad0c470(long param_1,float *param_2,float *param_3)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  piVar2 = *(int **)(param_1 + 0x10);
  fVar7 = *param_2;
  if (*piVar2 == 0) goto LAB_10ad0c55c;
  fVar6 = fVar7 * (float)piVar2[1];
  fVar3 = ABS(fVar6);
  fVar4 = -1.0;
  if (0.0 <= fVar6) {
    fVar4 = 0.0;
  }
  fVar5 = 1.0;
  fVar8 = 1.0;
  if (fVar6 <= 0.0) {
    fVar8 = fVar4;
  }
  iVar1 = piVar2[2];
  if (iVar1 == 2) {
    fVar5 = (float)NEON_fminnm(fVar3,0x3f800000);
    fVar5 = fVar5 * fVar8;
  }
  else {
    if (iVar1 == 1) {
      fVar3 = -fVar3;
      _expf();
      fVar5 = 1.0 - fVar3;
    }
    else {
      if (iVar1 != 0) goto LAB_10ad0c548;
      if ((fVar3 <= 0.33333334) || (0.6666667 <= fVar3)) {
        fVar5 = (float)NEON_fminnm(fVar3 + fVar3,0x3f800000);
      }
      else {
        fVar4 = fVar3 * -3.0 + 2.0;
        fVar5 = fVar4 * fVar4 * -0.33333334 + 1.0;
      }
    }
    fVar5 = fVar8 * fVar5;
  }
LAB_10ad0c548:
  fVar7 = fVar5 * (float)piVar2[3] * (float)piVar2[5] + (float)piVar2[4] * fVar7;
LAB_10ad0c55c:
  *param_3 = fVar7;
  return;
}



/* Entry: 10ad0c570; end: 10ad0c73b;  */

undefined8 FUN_10ad0c570(float param_1,long *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  
  uVar3 = 1;
  if (param_3 < 0xb0003) {
    if (param_3 == 0xb0001) {
      uVar3 = 0;
      *(uint *)*param_2 = (uint)(param_1 != 0.0);
      *(uint *)param_2[2] = (uint)(param_1 != 0.0);
    }
    else if (param_3 == 0xb0002) {
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      fVar5 = (float)NEON_fminnm(param_1,0x42c00000);
      *(float *)(*param_2 + 4) = fVar5;
      fVar5 = fVar5 * 2.3025851 * 0.05;
      _expf(1);
      uVar3 = 0;
      *(float *)(param_2[2] + 4) = fVar5;
    }
  }
  else if (param_3 == 0xb0003) {
    uVar3 = 0;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar5 = (float)NEON_fminnm(param_1,0x40400000);
    fVar5 = fVar5 + 0.5;
    iVar1 = (int)fVar5;
    if (INFINITY <= fVar5) {
      iVar1 = 0;
    }
    iVar2 = (int)fVar5;
    if (fVar5 <= INFINITY) {
      iVar2 = iVar1;
    }
    *(int *)(*param_2 + 8) = iVar2;
    *(int *)(param_2[2] + 8) = iVar2;
  }
  else if (param_3 == 0xb0004) {
    if (param_1 <= -96.0) {
      param_1 = -96.0;
    }
    fVar5 = (float)NEON_fminnm(param_1,0);
    *(float *)(*param_2 + 0xc) = fVar5;
    fVar5 = fVar5 * 2.3025851 * 0.05;
    _expf(1);
    uVar3 = 0;
    *(float *)(param_2[2] + 0xc) = fVar5;
  }
  else if (param_3 == 0xb0005) {
    uVar3 = 0;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar5 = (float)NEON_fminnm(param_1,0x42c80000);
    *(float *)(*param_2 + 0x10) = fVar5;
    lVar4 = param_2[2];
    *(float *)(lVar4 + 0x10) = (100.0 - fVar5) / 100.0;
    *(float *)(lVar4 + 0x14) = fVar5 / 100.0;
  }
  return uVar3;
}



/* Entry: 10ad0c73c; end: 10ad0c937;  */

undefined8 FUN_10ad0c73c(long *param_1,int param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  
  if (param_2 < 0xb0003) {
    if (param_2 != 0xb0001) {
      if (param_2 != 0xb0002) {
        return 1;
      }
      fVar1 = *(float *)(*param_1 + 4);
      goto LAB_10ad0c7e0;
    }
    iVar2 = *(int *)*param_1;
  }
  else {
    if (param_2 != 0xb0003) {
      if (param_2 == 0xb0004) {
        fVar1 = *(float *)(*param_1 + 0xc);
      }
      else {
        if (param_2 != 0xb0005) {
          return 1;
        }
        fVar1 = *(float *)(*param_1 + 0x10);
      }
      goto LAB_10ad0c7e0;
    }
    iVar2 = *(int *)(*param_1 + 8);
  }
  fVar1 = (float)iVar2;
LAB_10ad0c7e0:
  *param_3 = fVar1;
  return 0;
}



/* Entry: 10ad0c938; end: 10ad0cbf3;  */

undefined8 FUN_10ad0c938(float param_1,long *param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if (param_3 < 0x30004) {
    if (param_3 == 0x30001) {
      *(uint *)*param_2 = (uint)(param_1 != 0.0);
      *(uint *)param_2[2] = (uint)(param_1 != 0.0);
      return 0;
    }
    if (param_3 != 0x30002) {
      if (param_3 != 0x30003) {
        return 1;
      }
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      fVar3 = (float)NEON_fminnm(param_1,0x42c80000);
      *(float *)(*param_2 + 8) = fVar3;
      lVar1 = param_2[2];
      *(float *)(lVar1 + 8) = (100.0 - fVar3) / 100.0;
      *(float *)(lVar1 + 0xc) = fVar3 / 100.0;
      return 0;
    }
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar3 = (float)NEON_fminnm(param_1,0x44898000);
    *(float *)(*param_2 + 4) = fVar3;
    *(float *)(param_2[2] + 4) = (fVar3 / 1000.0) * (float)param_4;
    return 0;
  }
  if (param_3 < 0x30006) {
    if (param_3 == 0x30004) {
      if (param_1 <= -99.0) {
        param_1 = -99.0;
      }
      fVar3 = (float)NEON_fminnm(param_1,0x42c60000);
      *(float *)(*param_2 + 0xc) = fVar3;
      *(float *)(param_2[2] + 0x10) = fVar3 / 100.0;
      return 0;
    }
    if (param_3 != 0x30005) {
      return 1;
    }
    lVar2 = *param_2;
    *(uint *)(lVar2 + 0x10) = (uint)(param_1 != 0.0);
    lVar1 = param_2[2];
    if (param_1 == 0.0) {
      fVar3 = -1.0;
      fVar4 = 0.0;
    }
    else {
      fVar4 = *(float *)(lVar2 + 0x14) * 3.1415927 + -0.7853982;
      _tanf(1);
      fVar3 = *(float *)(lVar2 + 0x18) * 3.1415927 + -0.7853982;
      _tanf();
    }
    *(float *)(lVar1 + 0x18) = fVar4;
  }
  else {
    if (param_3 == 0x30006) {
      if (param_1 <= 5.0) {
        param_1 = 5.0;
      }
      fVar3 = (float)NEON_fminnm(param_1,(float)param_4 * 0.49);
      *(float *)(*param_2 + 0x14) = fVar3;
      lVar1 = param_2[2];
      fVar3 = (fVar3 / (float)param_4) * 3.1415927 + -0.7853982;
      _tanf(1);
      *(float *)(lVar1 + 0x18) = fVar3;
      return 0;
    }
    if (param_3 != 0x30007) {
      return 1;
    }
    if (param_1 <= 5.0) {
      param_1 = 5.0;
    }
    fVar3 = (float)NEON_fminnm(param_1,(float)param_4 * 0.49);
    *(float *)(*param_2 + 0x18) = fVar3;
    lVar1 = param_2[2];
    fVar3 = (fVar3 / (float)param_4) * 3.1415927 + -0.7853982;
    _tanf(1);
  }
  *(float *)(lVar1 + 0x1c) = fVar3;
  return 0;
}



/* Entry: 10ad0cbf4; end: 10ad0cce3;  */

undefined8 FUN_10ad0cbf4(long *param_1,int param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  
  if (param_2 < 0x30004) {
    if (param_2 != 0x30001) {
      if (param_2 == 0x30002) {
        fVar2 = *(float *)(*param_1 + 4);
      }
      else {
        if (param_2 != 0x30003) {
          return 1;
        }
        fVar2 = *(float *)(*param_1 + 8);
      }
      goto LAB_10ad0ccd4;
    }
    iVar1 = *(int *)*param_1;
  }
  else {
    if (0x30005 < param_2) {
      if (param_2 == 0x30006) {
        fVar2 = *(float *)(*param_1 + 0x14);
      }
      else {
        if (param_2 != 0x30007) {
          return 1;
        }
        fVar2 = *(float *)(*param_1 + 0x18);
      }
      goto LAB_10ad0ccd4;
    }
    if (param_2 == 0x30004) {
      fVar2 = *(float *)(*param_1 + 0xc);
      goto LAB_10ad0ccd4;
    }
    if (param_2 != 0x30005) {
      return 1;
    }
    iVar1 = *(int *)(*param_1 + 0x10);
  }
  fVar2 = (float)iVar1;
LAB_10ad0ccd4:
  *param_3 = fVar2;
  return 0;
}



/* Entry: 10ad0cce4; end: 10ad0ce93;  */

void FUN_10ad0cce4(long param_1,float *param_2,float *param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  piVar2 = *(int **)(param_1 + 0x10);
  fVar4 = *param_2;
  if (*piVar2 == 0) goto LAB_10ad0ce78;
  lVar3 = *(long *)(param_1 + 8);
  iVar1 = *(int *)(lVar3 + 0x1008);
  *(float *)(lVar3 + (long)iVar1 * 4) = fVar4 + *(float *)(lVar3 + 0x1000) * (float)piVar2[6];
  fVar4 = (float)piVar2[1];
  if (piVar2[3] == 0) {
    fVar5 = *(float *)(lVar3 + 0x1004);
    fVar7 = 6.2831855;
    fVar6 = fVar5 + (float)piVar2[2] * 6.2831855;
    *(float *)(lVar3 + 0x1004) = fVar6;
    if (6.2831855 <= fVar6) {
      fVar7 = -6.2831855;
LAB_10ad0cdf8:
      *(float *)(lVar3 + 0x1004) = fVar6 + fVar7;
    }
    else if (fVar6 <= -6.2831855) goto LAB_10ad0cdf8;
    _cosf();
    fVar4 = fVar4 * (1.0 - fVar5) * 0.5;
  }
  else {
    fVar5 = *(float *)(lVar3 + 0x1004);
    fVar7 = 6.2831855;
    fVar6 = fVar5 + (float)piVar2[2] * 6.2831855;
    *(float *)(lVar3 + 0x1004) = fVar6;
    if (6.2831855 <= fVar6) {
      fVar7 = -6.2831855;
LAB_10ad0cda8:
      *(float *)(lVar3 + 0x1004) = fVar6 + fVar7;
    }
    else if (fVar6 <= -6.2831855) goto LAB_10ad0cda8;
    fVar5 = ABS(fVar5 / 3.1415927 + -1.0) + -0.5;
    fVar4 = (fVar5 + fVar5 + 1.0) * fVar4 * 0.5;
  }
  fVar4 = *(float *)(lVar3 + (ulong)(((int)fVar4 - (iVar1 + 0x3ff) ^ 0xffffffffU) & 0x3ff) * 4) *
          (fVar4 - (float)(int)fVar4) +
          (1.0 - (fVar4 - (float)(int)fVar4)) *
          *(float *)(lVar3 + (ulong)((iVar1 + 0x3ff) - (int)fVar4 & 0x3ff) * 4);
  *(float *)(lVar3 + 0x1000) = fVar4;
  *(uint *)(lVar3 + 0x1008) = iVar1 + 1U & 0x3ff;
  fVar4 = fVar4 * (float)piVar2[5] + (float)piVar2[4] * *param_2;
LAB_10ad0ce78:
  *param_3 = fVar4;
  return;
}



/* Entry: 10ad0ce94; end: 10ad0d163;  */

undefined8 FUN_10ad0ce94(float param_1,long *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = 1;
  if (param_3 < 0x40004) {
    if (param_3 == 0x40001) {
      *(uint *)*param_2 = (uint)(param_1 != 0.0);
      *(uint *)param_2[2] = (uint)(param_1 != 0.0);
      return 0;
    }
    if (param_3 == 0x40002) {
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      fVar3 = (float)NEON_fminnm(param_1,0x41a00000);
      *(float *)(*param_2 + 4) = fVar3;
      *(float *)(param_2[2] + 4) = (fVar3 / 1000.0) * (float)param_4;
      return 0;
    }
    if (param_3 == 0x40003) {
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      fVar3 = (float)NEON_fminnm(param_1,0x40c00000);
      *(float *)(*param_2 + 8) = fVar3;
      *(float *)(param_2[2] + 8) = fVar3 / (float)param_4;
      return 0;
    }
  }
  else {
    if (param_3 == 0x40004) {
      if (param_1 <= -99.0) {
        param_1 = -99.0;
      }
      fVar3 = (float)NEON_fminnm(param_1,0x42c60000);
      *(float *)(*param_2 + 0x14) = fVar3;
      *(float *)(param_2[2] + 0x18) = fVar3 / 100.0;
      return 0;
    }
    if (param_3 == 0x40005) {
      uVar1 = 0;
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      fVar3 = (float)NEON_fminnm(param_1,0x42c80000);
      *(float *)(*param_2 + 0x10) = fVar3;
      lVar2 = param_2[2];
      *(float *)(lVar2 + 0x10) = (100.0 - fVar3) / 100.0;
      *(float *)(lVar2 + 0x14) = fVar3 / 100.0;
    }
    else if (param_3 == 0x40006) {
      *(uint *)(*param_2 + 0xc) = (uint)(param_1 != 0.0);
      *(uint *)(param_2[2] + 0xc) = (uint)(param_1 != 0.0);
      return 0;
    }
  }
  return uVar1;
}



/* Entry: 10ad0d164; end: 10ad0d33f;  */

undefined8 FUN_10ad0d164(float param_1,long *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = 1;
  if (param_3 < 0xc0003) {
    if (param_3 == 0xc0001) {
      uVar1 = 0;
      *(uint *)*param_2 = (uint)(param_1 != 0.0);
      *(uint *)param_2[2] = (uint)(param_1 != 0.0);
    }
    else if (param_3 == 0xc0002) {
      if (param_1 <= -96.0) {
        param_1 = -96.0;
      }
      fVar2 = (float)NEON_fminnm(param_1,0);
      *(float *)(*param_2 + 4) = fVar2;
      fVar2 = fVar2 * 2.3025851 * 0.05;
      _expf(1);
      uVar1 = 0;
      *(float *)(param_2[2] + 8) = fVar2;
    }
  }
  else if (param_3 == 0xc0003) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar2 = (float)NEON_fminnm(param_1,0x44fa0000);
    *(float *)(*param_2 + 0xc) = fVar2;
    fVar2 = -2.2 / (fVar2 * 0.001 * (float)param_4);
    _expf(1);
    uVar1 = 0;
    *(float *)(param_2[2] + 0x10) = fVar2;
  }
  else if (param_3 == 0xc0004) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar2 = (float)NEON_fminnm(param_1,0x44fa0000);
    *(float *)(*param_2 + 0x10) = fVar2;
    fVar2 = -2.2 / (fVar2 * 0.001 * (float)param_4);
    _expf(1);
    uVar1 = 0;
    *(float *)(param_2[2] + 0xc) = fVar2;
  }
  else if (param_3 == 0xc0005) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar2 = (float)NEON_fminnm(param_1,0x42700000);
    *(float *)(*param_2 + 8) = fVar2;
    fVar2 = fVar2 * 2.3025851 * 0.05;
    _expf(1);
    uVar1 = 0;
    *(float *)(param_2[2] + 4) = fVar2;
  }
  return uVar1;
}



/* Entry: 10ad0d340; end: 10ad0d557;  */

undefined8 FUN_10ad0d340(long *param_1,int param_2,float *param_3)

{
  float fVar1;
  
  if (param_2 < 0xc0003) {
    if (param_2 == 0xc0001) {
      fVar1 = (float)*(int *)*param_1;
    }
    else {
      if (param_2 != 0xc0002) {
        return 1;
      }
      fVar1 = *(float *)(*param_1 + 4);
    }
  }
  else if (param_2 == 0xc0003) {
    fVar1 = *(float *)(*param_1 + 0xc);
  }
  else if (param_2 == 0xc0004) {
    fVar1 = *(float *)(*param_1 + 0x10);
  }
  else {
    if (param_2 != 0xc0005) {
      return 1;
    }
    fVar1 = *(float *)(*param_1 + 8);
  }
  *param_3 = fVar1;
  return 0;
}



/* Entry: 10ad0d558; end: 10ad0d67f;  */

undefined8 FUN_10ad0d558(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  
  puVar5 = (undefined4 *)*param_1;
  *puVar5 = 0;
  puVar4 = (undefined4 *)param_1[2];
  *puVar4 = 0;
  puVar5[2] = 0x42c80000;
  *(undefined8 *)(puVar4 + 1) = 0x3f80000000000000;
  puVar5[7] = 0;
  puVar4[4] = 0x3f800000;
  fVar7 = (float)param_2;
  fVar6 = (float)NEON_fminnm(fVar7 * 0.49,0x41a00000);
  fVar6 = (fVar6 / fVar7) * 3.1415927 + -0.7853982;
  _tanf();
  puVar4[0x2e] = fVar6;
  fVar6 = (float)NEON_fminnm(fVar7 * 0.49,0x469c4000);
  puVar5[9] = fVar6;
  fVar6 = (fVar6 / fVar7) * 3.1415927 + -0.7853982;
  _tanf();
  lVar2 = 0;
  puVar4[0x2d] = fVar6;
  puVar3 = (undefined8 *)(puVar4 + 7);
  do {
    uVar1 = *(undefined4 *)(&UNK_10e50de78 + lVar2);
    *(undefined4 *)(puVar3 + -1) = 0x3f570a3d;
    *(undefined4 *)((long)puVar3 + -4) = uVar1;
    *puVar3 = 0x3f4ccccd3e4ccccd;
    lVar2 = lVar2 + 4;
    puVar3 = puVar3 + 2;
  } while (lVar2 != 0x20);
  lVar2 = 0;
  puVar4 = puVar4 + 0x26;
  do {
    uVar1 = *(undefined4 *)(&UNK_10e50de98 + lVar2);
    puVar4[-1] = 0x3f000000;
    *puVar4 = uVar1;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  return 0;
}



/* Entry: 10ad0d680; end: 10ad0da37;  */

undefined8 FUN_10ad0d680(float param_1,long *param_2,int param_3,int param_4)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_3 < 0xd0005) {
    if (param_3 < 0xd0003) {
      if (param_3 == 0xd0001) {
        if (param_1 <= 0.0) {
          param_1 = 0.0;
        }
        fVar5 = (float)NEON_fminnm(param_1,0x432a0000);
        fVar6 = (fVar5 * (float)param_4) / 1000.0;
        fVar7 = -0.5;
        if (0.0 <= fVar6) {
          fVar7 = 0.5;
        }
        fVar6 = fVar6 + fVar7;
        iVar1 = (int)fVar6;
        *(float *)(*param_2 + 0x14) = fVar5;
        if (0x7f7fffff < (uint)ABS(fVar6)) {
          iVar1 = 0;
        }
        *(int *)(param_2[2] + 0xc) = iVar1;
        return 0;
      }
      if (param_3 != 0xd0002) {
        return 1;
      }
      *(uint *)*param_2 = (uint)(param_1 != 0.0);
      *(uint *)param_2[2] = (uint)(param_1 != 0.0);
      return 0;
    }
    if (param_3 == 0xd0003) {
      lVar4 = 0;
      lVar3 = param_2[2];
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      fVar5 = (float)NEON_fminnm(param_1,0x42c80000);
      *(float *)(*param_2 + 0x10) = fVar5;
      do {
        *(int *)(lVar3 + 0x18 + lVar4 * 4) =
             (int)((fVar5 * 0.009 + 0.1) * (float)*(int *)(&UNK_10e50de78 + lVar4));
        lVar4 = lVar4 + 4;
      } while (lVar4 != 0x20);
    }
    else {
      if (param_3 != 0xd0004) {
        return 1;
      }
      lVar4 = 0;
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      fVar5 = (float)NEON_fminnm(param_1,0x3f800000);
      *(float *)(*param_2 + 0x18) = fVar5;
      lVar3 = param_2[2];
      do {
        *(float *)(lVar3 + 0x14 + lVar4) = fVar5 * 0.28 + 0.7;
        lVar4 = lVar4 + 0x10;
      } while (lVar4 != 0x80);
    }
  }
  else {
    if (0xd0006 < param_3) {
      if (param_3 == 0xd0007) {
        if (param_1 <= 5.0) {
          param_1 = 5.0;
        }
        fVar5 = (float)NEON_fminnm(param_1,(float)param_4 * 0.49);
        *(float *)(*param_2 + 0x24) = fVar5;
        lVar4 = param_2[2];
        fVar5 = (fVar5 / (float)param_4) * 3.1415927 + -0.7853982;
        _tanf(1);
        *(float *)(lVar4 + 0xb4) = fVar5;
        return 0;
      }
      if (param_3 != 0xd0008) {
        if (param_3 != 0xd0009) {
          return 1;
        }
        if (param_1 <= -96.0) {
          param_1 = -96.0;
        }
        fVar5 = (float)NEON_fminnm(param_1,0);
        *(float *)(*param_2 + 0x1c) = fVar5;
        fVar5 = fVar5 * 2.3025851 * 0.05;
        _expf();
        *(float *)(param_2[2] + 0x10) = fVar5;
        return 0;
      }
      if (param_1 <= 5.0) {
        param_1 = 5.0;
      }
      fVar5 = (float)NEON_fminnm(param_1,(float)param_4 * 0.49);
      *(float *)(*param_2 + 0x24) = fVar5;
      lVar4 = param_2[2];
      fVar5 = (fVar5 / (float)param_4) * 3.1415927 + -0.7853982;
      _tanf(1);
      *(float *)(lVar4 + 0xb8) = fVar5;
      return 0;
    }
    if (param_3 != 0xd0005) {
      if (param_3 != 0xd0006) {
        return 1;
      }
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      fVar5 = (float)NEON_fminnm(param_1,0x42c80000);
      *(float *)(*param_2 + 8) = fVar5;
      lVar4 = param_2[2];
      *(float *)(lVar4 + 4) = (100.0 - fVar5) / 100.0;
      *(float *)(lVar4 + 8) = fVar5 / 100.0;
      return 0;
    }
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar5 = (float)NEON_fminnm(param_1,0x3f800000);
    *(float *)(*param_2 + 0xc) = fVar5;
    pfVar2 = (float *)(param_2[2] + 0x20);
    lVar4 = 8;
    do {
      pfVar2[-1] = fVar5 * 0.4;
      *pfVar2 = 1.0 - fVar5 * 0.4;
      pfVar2 = pfVar2 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return 0;
}



/* Entry: 10ad0da38; end: 10ad0dbeb;  */

undefined8 FUN_10ad0da38(long *param_1,int param_2,float *param_3)

{
  float fVar1;
  
  if (param_2 < 0xd0005) {
    if (param_2 < 0xd0003) {
      if (param_2 == 0xd0001) {
        fVar1 = *(float *)(*param_1 + 0x14);
      }
      else {
        if (param_2 != 0xd0002) {
          return 1;
        }
        fVar1 = (float)*(int *)*param_1;
      }
    }
    else if (param_2 == 0xd0003) {
      fVar1 = *(float *)(*param_1 + 0x10);
    }
    else {
      if (param_2 != 0xd0004) {
        return 1;
      }
      fVar1 = *(float *)(*param_1 + 0x18);
    }
  }
  else if (param_2 < 0xd0007) {
    if (param_2 == 0xd0005) {
      fVar1 = *(float *)(*param_1 + 0xc);
    }
    else {
      if (param_2 != 0xd0006) {
        return 1;
      }
      fVar1 = *(float *)(*param_1 + 8);
    }
  }
  else if (param_2 == 0xd0007) {
    fVar1 = *(float *)(*param_1 + 0x20);
  }
  else if (param_2 == 0xd0008) {
    fVar1 = *(float *)(*param_1 + 0x24);
  }
  else {
    if (param_2 != 0xd0009) {
      return 1;
    }
    fVar1 = *(float *)(*param_1 + 0x1c);
  }
  *param_3 = fVar1;
  return 0;
}



/* Entry: 10ad0dbec; end: 10ad0ded3;  */

undefined8
FUN_10ad0dbec(float param_1,float param_2,float param_3,long *param_4,int param_5,int param_6,
             int param_7)

{
  long lVar1;
  float *pfVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar1 = *param_4 + (long)param_5 * 4;
  *(int *)(lVar1 + 0x34) = param_6;
  *(float *)(lVar1 + 0x5c) = param_1;
  *(float *)(lVar1 + 0xac) = param_2;
  *(float *)(lVar1 + 0x84) = param_3;
  dVar3 = (double)param_7;
  fVar11 = (float)(((double)param_1 * 6.283185307179586) / dVar3);
  if (param_6 < 2) {
    if (param_6 != 0) {
      if (param_6 != 1) {
        return 1;
      }
      lVar1 = param_4[2] + (long)param_5 * 0x14;
      param_3 = param_3 / 40.0;
      ___exp10f();
      fVar5 = SUB84(dVar3,0);
      ___sincosf_stret();
      fVar11 = fVar11 / (param_2 + param_2);
      fVar9 = fVar11 / param_3 + 1.0;
      fVar5 = (fVar5 * -2.0) / fVar9;
      pfVar2 = (float *)(lVar1 + 8);
      *pfVar2 = fVar5;
      *(float *)(lVar1 + 0x10) = (param_3 * fVar11 + 1.0) / fVar9;
      *(float *)(lVar1 + 0x14) = fVar5;
      *(float *)(lVar1 + 0x18) = (1.0 - param_3 * fVar11) / fVar9;
      fVar9 = (1.0 - fVar11 / param_3) / fVar9;
      goto LAB_10ad0deb4;
    }
    lVar1 = param_4[2];
    ___sincosf_stret();
    fVar11 = fVar11 / 1.4142135;
    fVar9 = fVar11 + 1.0;
    pfVar2 = (float *)(lVar1 + (long)param_5 * 0x14 + 8);
    *pfVar2 = (SUB84(dVar3,0) * -2.0) / fVar9;
    fVar5 = 1.0 - SUB84(dVar3,0);
    fVar6 = (fVar5 * 0.5) / fVar9;
  }
  else {
    if (param_6 != 2) {
      if (param_6 == 3) {
        lVar1 = param_4[2];
        param_3 = param_3 / 40.0;
        ___exp10f();
        fVar5 = SUB84(dVar3,0);
        ___sincosf_stret();
        fVar11 = fVar11 / 1.4142135;
        fVar4 = param_3 + 1.0;
        fVar6 = param_3 + -1.0;
        fVar7 = fVar4 + fVar5 * fVar6;
        fVar8 = SQRT(param_3) + SQRT(param_3);
        fVar9 = fVar7 + fVar11 * fVar8;
        pfVar2 = (float *)(lVar1 + (long)param_5 * 0x14 + 8);
        *pfVar2 = ((fVar6 + fVar5 * fVar4) * -2.0) / fVar9;
        fVar10 = fVar4 - fVar5 * fVar6;
        fVar12 = (param_3 * (fVar10 + fVar11 * fVar8)) / fVar9;
        fVar6 = fVar6 - fVar5 * fVar4;
        fVar5 = param_3 + param_3;
      }
      else {
        if (param_6 != 4) {
          return 1;
        }
        lVar1 = param_4[2];
        param_3 = param_3 / 40.0;
        ___exp10f();
        fVar5 = SUB84(dVar3,0);
        ___sincosf_stret();
        fVar11 = fVar11 / 1.4142135;
        fVar4 = param_3 + 1.0;
        fVar6 = param_3 + -1.0;
        fVar7 = fVar4 - fVar5 * fVar6;
        fVar8 = SQRT(param_3) + SQRT(param_3);
        fVar9 = fVar7 + fVar11 * fVar8;
        fVar10 = fVar6 - fVar5 * fVar4;
        pfVar2 = (float *)(lVar1 + (long)param_5 * 0x14 + 8);
        *pfVar2 = (fVar10 + fVar10) / fVar9;
        fVar10 = fVar4 + fVar5 * fVar6;
        fVar12 = (param_3 * (fVar10 + fVar11 * fVar8)) / fVar9;
        fVar6 = fVar6 + fVar5 * fVar4;
        fVar5 = param_3 * -2.0;
      }
      pfVar2[2] = fVar12;
      pfVar2[3] = (fVar5 * fVar6) / fVar9;
      pfVar2[4] = (param_3 * (fVar10 - fVar11 * fVar8)) / fVar9;
      fVar9 = (fVar7 - fVar11 * fVar8) / fVar9;
      goto LAB_10ad0deb4;
    }
    lVar1 = param_4[2];
    ___sincosf_stret();
    fVar11 = fVar11 / 1.4142135;
    fVar9 = fVar11 + 1.0;
    pfVar2 = (float *)(lVar1 + (long)param_5 * 0x14 + 8);
    *pfVar2 = (SUB84(dVar3,0) * -2.0) / fVar9;
    fVar5 = SUB84(dVar3,0) + 1.0;
    fVar6 = (fVar5 * 0.5) / fVar9;
    fVar5 = -fVar5;
  }
  pfVar2[2] = fVar6;
  pfVar2[3] = fVar5 / fVar9;
  pfVar2[4] = fVar6;
  fVar9 = (1.0 - fVar11) / fVar9;
LAB_10ad0deb4:
  pfVar2[1] = fVar9;
  return 0;
}



/* Entry: 10ad0ded4; end: 10ad0dfaf;  */

undefined8 FUN_10ad0ded4(long *param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  *(float *)(*param_1 + 4) = (float)param_2;
  iVar2 = (int)(float)param_2;
  if (iVar2 == 0) {
    lVar3 = 0;
    do {
      FUN_10ad0dbec(*(undefined4 *)(&UNK_10e50deb8 + lVar3 * 4),0x3fb504f3,
                    *(undefined4 *)(*param_1 + lVar3 * 4 + 0x84),param_1,lVar3,1,param_3);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 10);
  }
  else {
    if (iVar2 != 1) {
      return 1;
    }
    lVar3 = 0;
    do {
      lVar1 = *param_1 + lVar3 * 4;
      FUN_10ad0dbec(*(undefined4 *)(lVar1 + 0x5c),*(undefined4 *)(lVar1 + 0xac),
                    *(undefined4 *)(lVar1 + 0x84),param_1,lVar3,*(undefined4 *)(lVar1 + 0x34),
                    param_3);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 10);
  }
  return 0;
}



/* Entry: 10ad0dfb0; end: 10ad0e08f;  */

undefined8 FUN_10ad0dfb0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 0;
  lVar3 = 0;
  puVar2 = (undefined4 *)*param_1;
  *puVar2 = 0;
  *(undefined8 *)param_1[2] = 0x3f80000000000000;
  puVar2[2] = 0;
  do {
    FUN_10ad0dbec(*(undefined4 *)(&UNK_10e50deb8 + lVar3 * 4),0x3fb504f3,0,param_1,lVar3,1,param_2);
    *(undefined4 *)(*param_1 + lVar3 * 4 + 0xc) = 0;
    lVar1 = param_1[2] + lVar4;
    *(undefined4 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0x3f800000;
    *(undefined8 *)(lVar1 + 8) = 0;
    lVar3 = lVar3 + 1;
    lVar4 = lVar4 + 0x14;
  } while (lVar4 != 200);
  FUN_10ad0ded4(param_1,0,param_2);
  return 0;
}



/* Entry: 10ad0e090; end: 10ad0e283;  */

undefined8 FUN_10ad0e090(float param_1,long *param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  param_3 = param_3 & 0xf;
  if (param_3 < 3) {
    if (param_3 == 1) {
      lVar2 = *param_2;
      *(uint *)(lVar2 + (long)param_4 * 4 + 0xc) = (uint)(param_1 != 0.0);
      if (param_1 == 0.0) {
        lVar2 = param_2[2] + (long)param_4 * 0x14;
        *(undefined4 *)(lVar2 + 0x18) = 0;
        *(undefined8 *)(lVar2 + 0x10) = 0x3f800000;
        *(undefined8 *)(lVar2 + 8) = 0;
        return 0;
      }
      lVar2 = lVar2 + (long)param_4 * 4;
      iVar1 = *(int *)(lVar2 + 0x34);
    }
    else {
      if (param_3 != 2) {
        return 1;
      }
      fVar10 = -0.5;
      if (0.0 <= param_1) {
        fVar10 = 0.5;
      }
      iVar1 = (int)(param_1 + fVar10);
      if (0x7f7fffff < (uint)ABS(param_1 + fVar10)) {
        iVar1 = 0;
      }
      lVar2 = *param_2 + (long)param_4 * 4;
    }
    fVar10 = *(float *)(lVar2 + 0x5c);
LAB_10ad0e1b0:
    fVar4 = *(float *)(lVar2 + 0xac);
    fVar8 = *(float *)(lVar2 + 0x84);
  }
  else {
    if (param_3 == 3) {
      lVar2 = *param_2 + (long)param_4 * 4;
      iVar1 = *(int *)(lVar2 + 0x34);
      if (param_1 <= 5.0) {
        param_1 = 5.0;
      }
      fVar10 = (float)NEON_fminnm(param_1,(float)param_5 * 0.49);
      goto LAB_10ad0e1b0;
    }
    if (param_3 == 4) {
      lVar2 = *param_2 + (long)param_4 * 4;
      iVar1 = *(int *)(lVar2 + 0x34);
      fVar10 = *(float *)(lVar2 + 0x5c);
      fVar4 = *(float *)(lVar2 + 0xac);
      if (param_1 <= -18.0) {
        param_1 = -18.0;
      }
      fVar8 = (float)NEON_fminnm(param_1,0x41900000);
    }
    else {
      if (param_3 != 5) {
        return 1;
      }
      lVar2 = *param_2 + (long)param_4 * 4;
      iVar1 = *(int *)(lVar2 + 0x34);
      fVar10 = *(float *)(lVar2 + 0x5c);
      if (param_1 <= 0.5) {
        param_1 = 0.5;
      }
      fVar4 = (float)NEON_fminnm(param_1,0x41200000);
      fVar8 = *(float *)(lVar2 + 0x84);
    }
  }
  lVar2 = *param_2 + (long)param_4 * 4;
  *(int *)(lVar2 + 0x34) = iVar1;
  *(float *)(lVar2 + 0x5c) = fVar10;
  *(float *)(lVar2 + 0xac) = fVar4;
  *(float *)(lVar2 + 0x84) = fVar8;
  dVar5 = (double)param_5;
  fVar10 = (float)(((double)fVar10 * 6.283185307179586) / dVar5);
  if (iVar1 < 2) {
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        return 1;
      }
      lVar2 = param_2[2] + (long)param_4 * 0x14;
      fVar8 = fVar8 / 40.0;
      ___exp10f();
      fVar7 = SUB84(dVar5,0);
      ___sincosf_stret();
      fVar10 = fVar10 / (fVar4 + fVar4);
      fVar4 = fVar10 / fVar8 + 1.0;
      fVar7 = (fVar7 * -2.0) / fVar4;
      pfVar3 = (float *)(lVar2 + 8);
      *pfVar3 = fVar7;
      *(float *)(lVar2 + 0x10) = (fVar8 * fVar10 + 1.0) / fVar4;
      *(float *)(lVar2 + 0x14) = fVar7;
      *(float *)(lVar2 + 0x18) = (1.0 - fVar8 * fVar10) / fVar4;
      fVar4 = (1.0 - fVar10 / fVar8) / fVar4;
      goto LAB_10ad0deb4;
    }
    lVar2 = param_2[2];
    ___sincosf_stret();
    fVar10 = fVar10 / 1.4142135;
    fVar4 = fVar10 + 1.0;
    pfVar3 = (float *)(lVar2 + (long)param_4 * 0x14 + 8);
    *pfVar3 = (SUB84(dVar5,0) * -2.0) / fVar4;
    fVar8 = 1.0 - SUB84(dVar5,0);
    fVar7 = (fVar8 * 0.5) / fVar4;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        lVar2 = param_2[2];
        fVar8 = fVar8 / 40.0;
        ___exp10f();
        fVar7 = SUB84(dVar5,0);
        ___sincosf_stret();
        fVar10 = fVar10 / 1.4142135;
        fVar6 = fVar8 + 1.0;
        fVar9 = fVar8 + -1.0;
        fVar11 = fVar6 + fVar7 * fVar9;
        fVar12 = SQRT(fVar8) + SQRT(fVar8);
        fVar4 = fVar11 + fVar10 * fVar12;
        pfVar3 = (float *)(lVar2 + (long)param_4 * 0x14 + 8);
        *pfVar3 = ((fVar9 + fVar7 * fVar6) * -2.0) / fVar4;
        fVar13 = fVar6 - fVar7 * fVar9;
        fVar14 = (fVar8 * (fVar13 + fVar10 * fVar12)) / fVar4;
        fVar9 = fVar9 - fVar7 * fVar6;
        fVar7 = fVar8 + fVar8;
      }
      else {
        if (iVar1 != 4) {
          return 1;
        }
        lVar2 = param_2[2];
        fVar8 = fVar8 / 40.0;
        ___exp10f();
        fVar7 = SUB84(dVar5,0);
        ___sincosf_stret();
        fVar10 = fVar10 / 1.4142135;
        fVar6 = fVar8 + 1.0;
        fVar9 = fVar8 + -1.0;
        fVar11 = fVar6 - fVar7 * fVar9;
        fVar12 = SQRT(fVar8) + SQRT(fVar8);
        fVar4 = fVar11 + fVar10 * fVar12;
        fVar13 = fVar9 - fVar7 * fVar6;
        pfVar3 = (float *)(lVar2 + (long)param_4 * 0x14 + 8);
        *pfVar3 = (fVar13 + fVar13) / fVar4;
        fVar13 = fVar6 + fVar7 * fVar9;
        fVar14 = (fVar8 * (fVar13 + fVar10 * fVar12)) / fVar4;
        fVar9 = fVar9 + fVar7 * fVar6;
        fVar7 = fVar8 * -2.0;
      }
      pfVar3[2] = fVar14;
      pfVar3[3] = (fVar7 * fVar9) / fVar4;
      pfVar3[4] = (fVar8 * (fVar13 - fVar10 * fVar12)) / fVar4;
      fVar4 = (fVar11 - fVar10 * fVar12) / fVar4;
      goto LAB_10ad0deb4;
    }
    lVar2 = param_2[2];
    ___sincosf_stret();
    fVar10 = fVar10 / 1.4142135;
    fVar4 = fVar10 + 1.0;
    pfVar3 = (float *)(lVar2 + (long)param_4 * 0x14 + 8);
    *pfVar3 = (SUB84(dVar5,0) * -2.0) / fVar4;
    fVar8 = SUB84(dVar5,0) + 1.0;
    fVar7 = (fVar8 * 0.5) / fVar4;
    fVar8 = -fVar8;
  }
  pfVar3[2] = fVar7;
  pfVar3[3] = fVar8 / fVar4;
  pfVar3[4] = fVar7;
  fVar4 = (1.0 - fVar10) / fVar4;
LAB_10ad0deb4:
  pfVar3[1] = fVar4;
  return 0;
}



/* Entry: 10ad0e284; end: 10ad0e37b;  */

undefined8 FUN_10ad0e284(float param_1,long *param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (param_3 == 0x60003) {
    FUN_10ad0ded4(param_2,param_1 != 0.0,param_4);
    return 0;
  }
  if (param_3 == 0x60002) {
    if (param_1 <= -18.0) {
      param_1 = -18.0;
    }
    fVar11 = (float)NEON_fminnm(param_1,0x41900000);
    *(float *)(*param_2 + 8) = fVar11;
    fVar11 = fVar11 * 2.3025851 * 0.05;
    _expf();
    *(float *)(param_2[2] + 4) = fVar11;
    return 0;
  }
  if (param_3 == 0x60001) {
    *(uint *)*param_2 = (uint)(param_1 != 0.0);
    *(uint *)param_2[2] = (uint)(param_1 != 0.0);
    return 0;
  }
  if ((param_3 & 0xf0) == 0) {
    return 1;
  }
  iVar1 = (param_3 >> 4 & 0xf) - 1;
  param_3 = param_3 & 0xf;
  if (param_3 < 3) {
    if (param_3 == 1) {
      lVar3 = *param_2;
      *(uint *)(lVar3 + (long)iVar1 * 4 + 0xc) = (uint)(param_1 != 0.0);
      if (param_1 == 0.0) {
        lVar3 = param_2[2] + (long)iVar1 * 0x14;
        *(undefined4 *)(lVar3 + 0x18) = 0;
        *(undefined8 *)(lVar3 + 0x10) = 0x3f800000;
        *(undefined8 *)(lVar3 + 8) = 0;
        return 0;
      }
      lVar3 = lVar3 + (long)iVar1 * 4;
      iVar2 = *(int *)(lVar3 + 0x34);
    }
    else {
      if (param_3 != 2) {
        return 1;
      }
      fVar11 = -0.5;
      if (0.0 <= param_1) {
        fVar11 = 0.5;
      }
      iVar2 = (int)(param_1 + fVar11);
      if (0x7f7fffff < (uint)ABS(param_1 + fVar11)) {
        iVar2 = 0;
      }
      lVar3 = *param_2 + (long)iVar1 * 4;
    }
    fVar11 = *(float *)(lVar3 + 0x5c);
LAB_10ad0e1b0:
    fVar5 = *(float *)(lVar3 + 0xac);
    fVar9 = *(float *)(lVar3 + 0x84);
  }
  else {
    if (param_3 == 3) {
      lVar3 = *param_2 + (long)iVar1 * 4;
      iVar2 = *(int *)(lVar3 + 0x34);
      if (param_1 <= 5.0) {
        param_1 = 5.0;
      }
      fVar11 = (float)NEON_fminnm(param_1,(float)(int)param_4 * 0.49);
      goto LAB_10ad0e1b0;
    }
    if (param_3 == 4) {
      lVar3 = *param_2 + (long)iVar1 * 4;
      iVar2 = *(int *)(lVar3 + 0x34);
      fVar11 = *(float *)(lVar3 + 0x5c);
      fVar5 = *(float *)(lVar3 + 0xac);
      if (param_1 <= -18.0) {
        param_1 = -18.0;
      }
      fVar9 = (float)NEON_fminnm(param_1,0x41900000);
    }
    else {
      if (param_3 != 5) {
        return 1;
      }
      lVar3 = *param_2 + (long)iVar1 * 4;
      iVar2 = *(int *)(lVar3 + 0x34);
      fVar11 = *(float *)(lVar3 + 0x5c);
      if (param_1 <= 0.5) {
        param_1 = 0.5;
      }
      fVar5 = (float)NEON_fminnm(param_1,0x41200000);
      fVar9 = *(float *)(lVar3 + 0x84);
    }
  }
  lVar3 = *param_2 + (long)iVar1 * 4;
  *(int *)(lVar3 + 0x34) = iVar2;
  *(float *)(lVar3 + 0x5c) = fVar11;
  *(float *)(lVar3 + 0xac) = fVar5;
  *(float *)(lVar3 + 0x84) = fVar9;
  dVar6 = (double)(int)param_4;
  fVar11 = (float)(((double)fVar11 * 6.283185307179586) / dVar6);
  if (iVar2 < 2) {
    if (iVar2 != 0) {
      if (iVar2 != 1) {
        return 1;
      }
      lVar3 = param_2[2] + (long)iVar1 * 0x14;
      fVar9 = fVar9 / 40.0;
      ___exp10f();
      fVar8 = SUB84(dVar6,0);
      ___sincosf_stret();
      fVar11 = fVar11 / (fVar5 + fVar5);
      fVar5 = fVar11 / fVar9 + 1.0;
      fVar8 = (fVar8 * -2.0) / fVar5;
      pfVar4 = (float *)(lVar3 + 8);
      *pfVar4 = fVar8;
      *(float *)(lVar3 + 0x10) = (fVar9 * fVar11 + 1.0) / fVar5;
      *(float *)(lVar3 + 0x14) = fVar8;
      *(float *)(lVar3 + 0x18) = (1.0 - fVar9 * fVar11) / fVar5;
      fVar5 = (1.0 - fVar11 / fVar9) / fVar5;
      goto LAB_10ad0deb4;
    }
    lVar3 = param_2[2];
    ___sincosf_stret();
    fVar11 = fVar11 / 1.4142135;
    fVar5 = fVar11 + 1.0;
    pfVar4 = (float *)(lVar3 + (long)iVar1 * 0x14 + 8);
    *pfVar4 = (SUB84(dVar6,0) * -2.0) / fVar5;
    fVar9 = 1.0 - SUB84(dVar6,0);
    fVar8 = (fVar9 * 0.5) / fVar5;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        lVar3 = param_2[2];
        fVar9 = fVar9 / 40.0;
        ___exp10f();
        fVar8 = SUB84(dVar6,0);
        ___sincosf_stret();
        fVar11 = fVar11 / 1.4142135;
        fVar7 = fVar9 + 1.0;
        fVar10 = fVar9 + -1.0;
        fVar12 = fVar7 + fVar8 * fVar10;
        fVar13 = SQRT(fVar9) + SQRT(fVar9);
        fVar5 = fVar12 + fVar11 * fVar13;
        pfVar4 = (float *)(lVar3 + (long)iVar1 * 0x14 + 8);
        *pfVar4 = ((fVar10 + fVar8 * fVar7) * -2.0) / fVar5;
        fVar14 = fVar7 - fVar8 * fVar10;
        fVar15 = (fVar9 * (fVar14 + fVar11 * fVar13)) / fVar5;
        fVar10 = fVar10 - fVar8 * fVar7;
        fVar8 = fVar9 + fVar9;
      }
      else {
        if (iVar2 != 4) {
          return 1;
        }
        lVar3 = param_2[2];
        fVar9 = fVar9 / 40.0;
        ___exp10f();
        fVar8 = SUB84(dVar6,0);
        ___sincosf_stret();
        fVar11 = fVar11 / 1.4142135;
        fVar7 = fVar9 + 1.0;
        fVar10 = fVar9 + -1.0;
        fVar12 = fVar7 - fVar8 * fVar10;
        fVar13 = SQRT(fVar9) + SQRT(fVar9);
        fVar5 = fVar12 + fVar11 * fVar13;
        fVar14 = fVar10 - fVar8 * fVar7;
        pfVar4 = (float *)(lVar3 + (long)iVar1 * 0x14 + 8);
        *pfVar4 = (fVar14 + fVar14) / fVar5;
        fVar14 = fVar7 + fVar8 * fVar10;
        fVar15 = (fVar9 * (fVar14 + fVar11 * fVar13)) / fVar5;
        fVar10 = fVar10 + fVar8 * fVar7;
        fVar8 = fVar9 * -2.0;
      }
      pfVar4[2] = fVar15;
      pfVar4[3] = (fVar8 * fVar10) / fVar5;
      pfVar4[4] = (fVar9 * (fVar14 - fVar11 * fVar13)) / fVar5;
      fVar5 = (fVar12 - fVar11 * fVar13) / fVar5;
      goto LAB_10ad0deb4;
    }
    lVar3 = param_2[2];
    ___sincosf_stret();
    fVar11 = fVar11 / 1.4142135;
    fVar5 = fVar11 + 1.0;
    pfVar4 = (float *)(lVar3 + (long)iVar1 * 0x14 + 8);
    *pfVar4 = (SUB84(dVar6,0) * -2.0) / fVar5;
    fVar9 = SUB84(dVar6,0) + 1.0;
    fVar8 = (fVar9 * 0.5) / fVar5;
    fVar9 = -fVar9;
  }
  pfVar4[2] = fVar8;
  pfVar4[3] = fVar9 / fVar5;
  pfVar4[4] = fVar8;
  fVar5 = (1.0 - fVar11) / fVar5;
LAB_10ad0deb4:
  pfVar4[1] = fVar5;
  return 0;
}



/* Entry: 10ad0e37c; end: 10ad0e483;  */

undefined8 FUN_10ad0e37c(long *param_1,uint param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  
  if (param_2 == 0x60003) {
    fVar2 = *(float *)(*param_1 + 4);
  }
  else if (param_2 == 0x60002) {
    fVar2 = *(float *)(*param_1 + 8);
  }
  else {
    if (param_2 != 0x60001) {
      if ((param_2 & 0xf0) == 0) {
        return 1;
      }
      iVar1 = (param_2 >> 4 & 0xf) - 1;
      param_2 = param_2 & 0xf;
      if (param_2 < 3) {
        if (param_2 == 1) {
          iVar1 = *(int *)(*param_1 + (long)iVar1 * 4 + 0xc);
        }
        else {
          if (param_2 != 2) {
            return 1;
          }
          iVar1 = *(int *)(*param_1 + (long)iVar1 * 4 + 0x34);
        }
        fVar2 = (float)iVar1;
      }
      else if (param_2 == 3) {
        fVar2 = *(float *)(*param_1 + (long)iVar1 * 4 + 0x5c);
      }
      else if (param_2 == 4) {
        fVar2 = *(float *)(*param_1 + (long)iVar1 * 4 + 0x84);
      }
      else {
        if (param_2 != 5) {
          return 1;
        }
        fVar2 = *(float *)(*param_1 + (long)iVar1 * 4 + 0xac);
      }
      *param_3 = fVar2;
      return 0;
    }
    fVar2 = (float)*(int *)*param_1;
  }
  *param_3 = fVar2;
  return 0;
}



/* Entry: 10ad0e484; end: 10ad0e53f;  */

undefined8 FUN_10ad0e484(undefined8 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  
  puVar1 = (undefined4 *)*param_1;
  *puVar1 = 0;
  puVar2 = (undefined8 *)param_1[2];
  *puVar2 = 0x358637bb00000000;
  fVar5 = (float)param_2;
  uVar3 = _expf(-2.2 / (float)((uint)fVar5 & 0x80000000),0x7fffffff);
  *(undefined4 *)(puVar2 + 1) = uVar3;
  uVar3 = _expf(-2.2 / (fVar5 * 0.1),fVar5);
  *(undefined4 *)((long)puVar2 + 0xc) = uVar3;
  *(undefined8 *)(puVar1 + 3) = 0x3f80000042c80000;
  *(undefined8 *)(puVar1 + 1) = 0xc2f00000;
  uVar4 = _expf(-2.2 / (fVar5 * 0.001),fVar5);
  puVar1[5] = 0x42c80000;
  *(undefined4 *)(puVar2 + 2) = uVar3;
  *(undefined4 *)((long)puVar2 + 0x14) = uVar4;
  return 0;
}



/* Entry: 10ad0e540; end: 10ad0e77b;  */

undefined8 FUN_10ad0e540(float param_1,long *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = 1;
  if (param_3 < 0x90004) {
    if (param_3 == 0x90001) {
      uVar1 = 0;
      *(uint *)*param_2 = (uint)(param_1 != 0.0);
      *(uint *)param_2[2] = (uint)(param_1 != 0.0);
    }
    else if (param_3 == 0x90002) {
      if (param_1 <= -120.0) {
        param_1 = -120.0;
      }
      fVar2 = (float)NEON_fminnm(param_1,0);
      *(float *)(*param_2 + 4) = fVar2;
      fVar2 = fVar2 * 2.3025851 * 0.05;
      _expf(1);
      uVar1 = 0;
      *(float *)(param_2[2] + 4) = fVar2;
    }
    else if (param_3 == 0x90003) {
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      fVar2 = (float)NEON_fminnm(param_1,0x44fa0000);
      *(float *)(*param_2 + 8) = fVar2;
      fVar2 = -2.2 / (fVar2 * 0.001 * (float)param_4);
      _expf(1);
      uVar1 = 0;
      *(float *)(param_2[2] + 8) = fVar2;
    }
  }
  else if (param_3 == 0x90004) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar2 = (float)NEON_fminnm(param_1,0x44fa0000);
    *(float *)(*param_2 + 0xc) = fVar2;
    fVar2 = -2.2 / (fVar2 * 0.001 * (float)param_4);
    _expf(1);
    uVar1 = 0;
    *(float *)(param_2[2] + 0xc) = fVar2;
  }
  else if (param_3 == 0x90005) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar2 = (float)NEON_fminnm(param_1,0x44fa0000);
    *(float *)(*param_2 + 0x10) = fVar2;
    fVar2 = -2.2 / (fVar2 * 0.001 * (float)param_4);
    _expf(1);
    uVar1 = 0;
    *(float *)(param_2[2] + 0x14) = fVar2;
  }
  else if (param_3 == 0x90006) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar2 = (float)NEON_fminnm(param_1,0x44fa0000);
    *(float *)(*param_2 + 0x14) = fVar2;
    fVar2 = -2.2 / (fVar2 * 0.001 * (float)param_4);
    _expf(1);
    uVar1 = 0;
    *(float *)(param_2[2] + 0x10) = fVar2;
  }
  return uVar1;
}



/* Entry: 10ad0e77c; end: 10ad0e847;  */

undefined8 FUN_10ad0e77c(long *param_1,int param_2,float *param_3)

{
  float fVar1;
  
  if (param_2 < 0x90004) {
    if (param_2 == 0x90001) {
      fVar1 = (float)*(int *)*param_1;
    }
    else if (param_2 == 0x90002) {
      fVar1 = *(float *)(*param_1 + 4);
    }
    else {
      if (param_2 != 0x90003) {
        return 1;
      }
      fVar1 = *(float *)(*param_1 + 8);
    }
  }
  else if (param_2 == 0x90004) {
    fVar1 = *(float *)(*param_1 + 0xc);
  }
  else if (param_2 == 0x90005) {
    fVar1 = *(float *)(*param_1 + 0x10);
  }
  else {
    if (param_2 != 0x90006) {
      return 1;
    }
    fVar1 = *(float *)(*param_1 + 0x14);
  }
  *param_3 = fVar1;
  return 0;
}



/* Entry: 10ad0e848; end: 10ad0ed8b;  */

void FUN_10ad0e848(long param_1,float *param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  undefined8 *puVar8;
  float *pfVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  piVar7 = *(int **)(param_1 + 0x50);
  if ((*piVar7 == 0) && (piVar7[0x81a] == 0)) {
    *param_3 = *param_2;
  }
  else {
    pfVar4 = *(float **)(param_1 + 0x48);
    pfVar5 = pfVar4 + 0x3800;
    fVar27 = *pfVar5;
    pfVar4[(int)fVar27] = *param_2;
    fVar28 = (float)piVar7[7];
    iVar6 = (int)fVar27 - (int)fVar28;
    fVar20 = pfVar4[(long)iVar6 + 0x800] * pfVar4[(long)iVar6 + 0x800];
    pfVar4[0x6013] = fVar20 + (float)piVar7[0x80b] * (pfVar4[0x6013] - fVar20);
    uVar1 = piVar7[4];
    uVar12 = (ulong)uVar1;
    pfVar9 = pfVar4 + (long)iVar6 + 0x800;
    if (piVar7[3] != 0) {
      pfVar9 = param_2;
    }
    *param_3 = *pfVar9;
    *pfVar5 = (float)((int)fVar27 + 1);
    if ((int)uVar1 <= (int)fVar27 + 1) {
      *pfVar5 = fVar28;
      if (0 < (int)uVar1) {
        pfVar5 = (float *)(piVar7 + 10);
        pfVar9 = pfVar4;
        do {
          pfVar9[0x2000] = *pfVar9 * *pfVar5;
          uVar12 = uVar12 - 1;
          pfVar5 = pfVar5 + 1;
          pfVar9 = pfVar9 + 1;
        } while (uVar12 != 0);
      }
      FUN_10ad0a944(param_1,pfVar4 + 0x2000,pfVar4 + 0x2800);
      lVar13 = *(long *)(param_1 + 0x48);
      lVar14 = *(long *)(param_1 + 0x50);
      uVar1 = *(uint *)(lVar14 + 0x14);
      if ((int)uVar1 < 0) {
        fVar29 = 0.0;
        fVar28 = 1e-07;
        fVar27 = 0.0;
        fVar20 = 0.0;
      }
      else {
        lVar17 = 0x10010;
        uVar2 = *(uint *)(lVar14 + 0x2048);
        lVar10 = (ulong)uVar1 + 1;
        lVar18 = 0x10020;
        lVar19 = 0x17030;
        lVar16 = 0xf008;
        lVar15 = 0xa004;
        lVar11 = 0xa000;
        fVar28 = 0.0;
        fVar20 = 0.0;
        fVar27 = 0.0;
        fVar29 = 0.0;
        do {
          fVar21 = *(float *)(lVar13 + lVar15) * *(float *)(lVar13 + lVar15) +
                   *(float *)(lVar13 + lVar11) * *(float *)(lVar13 + lVar11);
          pfVar5 = (float *)(lVar13 + lVar17);
          fVar22 = fVar21 + *(float *)(lVar14 + 0x2044) * (*pfVar5 - fVar21);
          *pfVar5 = fVar22;
          uVar3 = *(uint *)(lVar13 + lVar18);
          fVar24 = pfVar5[5];
          if ((uVar2 & uVar3) == 0) {
            fVar23 = (float)NEON_fminnm(pfVar5[1],fVar24);
            pfVar5[1] = fVar24;
            pfVar5[2] = fVar23;
            uVar25 = NEON_fminnm(pfVar5[3],fVar23);
            pfVar5[3] = fVar23;
            fVar23 = (float)NEON_fminnm(uVar25,fVar22);
            pfVar5[6] = fVar23;
            iVar6 = 1;
          }
          else {
            fVar23 = (float)NEON_fminnm(pfVar5[6],fVar22);
            fVar22 = (float)NEON_fminnm(fVar24,fVar22);
            pfVar5[6] = fVar23;
            iVar6 = uVar3 + 1;
          }
          fVar28 = fVar28 + fVar21;
          pfVar5[5] = fVar22;
          *(int *)(lVar13 + lVar18) = iVar6;
          fVar23 = fVar23 * *(float *)(lVar14 + 0x204c);
          fVar29 = fVar29 + fVar23;
          fVar21 = fVar21 / (fVar23 * *(float *)(lVar14 + 0x2028) + 1e-07);
          if (fVar21 <= *(float *)(lVar14 + 0x2060)) {
            fVar21 = *(float *)(lVar14 + 0x2060);
          }
          fVar21 = (float)NEON_fminnm(fVar21,*(undefined4 *)(lVar14 + 0x2064));
          fVar22 = fVar21 + -1.0;
          if (fVar22 <= 0.0) {
            fVar22 = 0.0;
          }
          fVar22 = *(float *)(lVar14 + 0x203c) * fVar22 +
                   *(float *)(lVar13 + lVar16) * *(float *)(lVar14 + 0x2038);
          fVar24 = fVar22 + 1.0;
          fVar30 = (fVar21 * fVar22) / fVar24;
          fVar23 = fVar30 + fVar30 * fVar30;
          fVar22 = (fVar22 / fVar24) * (fVar23 / (fVar23 + 0.2));
          *(float *)(lVar13 + lVar19) = fVar22;
          *(float *)(lVar13 + lVar16) = fVar22 * fVar21 * fVar22;
          fVar21 = (float)*(undefined8 *)(lVar13 + lVar11) * fVar22;
          fVar22 = (float)((ulong)*(undefined8 *)(lVar13 + lVar11) >> 0x20) * fVar22;
          *(ulong *)(lVar13 + lVar11) = CONCAT44(fVar22,fVar21);
          fVar20 = fVar20 + fVar22 * fVar22 + fVar21 * fVar21;
          _logf();
          lVar19 = lVar19 + 4;
          lVar16 = lVar16 + 4;
          lVar11 = lVar11 + 8;
          fVar27 = fVar27 + (fVar30 - fVar24);
          lVar17 = lVar17 + 0x1c;
          lVar18 = lVar18 + 0x1c;
          lVar15 = lVar15 + 8;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        fVar28 = fVar28 + 1e-07;
      }
      *(float *)(lVar13 + 0x1000c) = fVar29 * *(float *)(lVar14 + 0x2088);
      if (*(int *)(lVar14 + 0x2050) != 0) {
        pfVar5 = (float *)(lVar13 + 0x1702c);
        fVar29 = 1.0;
        if (fVar20 / fVar28 < *(float *)(lVar14 + 0x2054)) {
          fVar28 = (1.0 - (fVar20 / fVar28) / *(float *)(lVar14 + 0x2054)) *
                   *(float *)(lVar14 + 0x2058);
          fVar20 = -0.5;
          if (0.0 <= fVar28) {
            fVar20 = 0.5;
          }
          fVar28 = fVar28 + fVar20;
          fVar29 = (float)(int)((int)fVar28 << 1 | 1);
          if (0x7f7fffff < (uint)ABS(fVar28)) {
            fVar29 = 1.0;
          }
        }
        *(float *)(lVar14 + 0x205c) = (fVar29 + -1.0) / (fVar29 + 3.7);
        *pfVar5 = 0.0;
        if (-1 < (int)uVar1) {
          lVar10 = (ulong)uVar1 + 1;
          puVar8 = (undefined8 *)(lVar13 + 0xa000);
          pfVar9 = pfVar5;
          do {
            pfVar9 = pfVar9 + 1;
            fVar28 = *pfVar9 + *(float *)(lVar14 + 0x205c) * (*pfVar5 - *pfVar9);
            *pfVar5 = fVar28;
            *pfVar9 = fVar28;
            *puVar8 = CONCAT44((float)((ulong)*puVar8 >> 0x20) * fVar28,(float)*puVar8 * fVar28);
            lVar10 = lVar10 + -1;
            puVar8 = puVar8 + 1;
          } while (lVar10 != 0);
        }
      }
      if (*(int *)(lVar14 + 0x2068) != 0) {
        fVar27 = -(fVar27 * *(float *)(lVar14 + 0x2088));
        _expf();
        fVar20 = *(float *)(lVar14 + 0x2074);
        fVar29 = *(float *)(lVar14 + 0x206c);
        fVar22 = *(float *)(lVar13 + 0x18034);
        fVar21 = *(float *)(lVar14 + 0x2078);
        fVar23 = *(float *)(lVar14 + 0x2070);
        fVar24 = *(float *)(lVar14 + 0x2080) *
                 (1.0 / (fVar27 * *(float *)(lVar14 + 0x2084) + 1.0) - *(float *)(lVar14 + 0x207c));
        fVar30 = *(float *)(lVar13 + 0x1803c);
        fVar28 = fVar24;
        if (fVar24 <= fVar30) {
          fVar28 = fVar30;
        }
        uVar25 = NEON_fminnm(fVar24,*(undefined4 *)(lVar13 + 0x18044));
        fVar26 = (float)NEON_fminnm(uVar25,fVar28);
        fVar26 = fVar26 + *(float *)(lVar14 + 0x208c) * (*(float *)(lVar13 + 0x18048) - fVar26);
        *(float *)(lVar13 + 0x1803c) = fVar24;
        *(float *)(lVar13 + 0x18040) = fVar30;
        *(float *)(lVar13 + 0x18044) = fVar28;
        *(float *)(lVar13 + 0x18048) = fVar26;
        *(float *)(lVar13 + 0x18034) =
             fVar27 * ((fVar20 + fVar22 * fVar29) / (fVar21 + fVar22 * fVar23));
        *(float *)(lVar13 + 0x18038) = fVar26;
      }
      if (*(int *)(lVar14 + 8) != 0) {
        func_0x00010ad0aad8(param_1,lVar13 + 0xa000,lVar13 + 0x8000);
        lVar13 = *(long *)(param_1 + 0x48);
        lVar14 = *(long *)(param_1 + 0x50);
      }
      uVar1 = *(uint *)(lVar14 + 0x10);
      uVar12 = (ulong)uVar1;
      if (0 < (int)uVar1) {
        pfVar5 = (float *)(lVar14 + 0x28);
        pfVar9 = (float *)(lVar13 + 0x4000);
        do {
          *pfVar9 = *pfVar9 + *pfVar5 * *(float *)(lVar14 + 0x20) * pfVar9[0x1000];
          uVar12 = uVar12 - 1;
          pfVar5 = pfVar5 + 1;
          pfVar9 = pfVar9 + 1;
        } while (uVar12 != 0);
      }
      uVar2 = *(uint *)(lVar14 + 0x18);
      if (0 < (int)uVar2) {
        _memmove(lVar13 + 0x2000,lVar13 + 0x4000,(ulong)uVar2 << 2);
      }
      _memmove(lVar13 + 0x4000,lVar13 + 0x4000 + (long)(int)uVar2 * 4,(long)(int)uVar1 << 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memmove_11034c660)
                (*(long *)(param_1 + 0x48),
                 *(long *)(param_1 + 0x48) + (long)*(int *)(*(long *)(param_1 + 0x50) + 0x18) * 4,
                 (long)*(int *)(*(long *)(param_1 + 0x50) + 0x1c) << 2);
      return;
    }
  }
  return;
}



/* Entry: 10ad0ed8c; end: 10ad0ef0f;  */

void FUN_10ad0ed8c(float param_1,uint *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  
  fVar13 = -0.5;
  fVar14 = -0.5;
  if (0.0 <= param_1) {
    fVar13 = 0.5;
  }
  uVar6 = (uint)(param_1 + fVar13);
  if ((uint)ABS(param_1 + fVar13) < 0x7f800000 && (uVar6 & uVar6 - 1) != 0) {
    return;
  }
  if (param_1 <= 16.0) {
    param_1 = 16.0;
  }
  fVar13 = (float)NEON_fminnm(param_1,0x45000000);
  iVar9 = (int)fVar13;
  lVar10 = *(long *)(param_2 + 0x10);
  *(int *)(lVar10 + 4) = iVar9;
  if (-1 < iVar9) {
    fVar14 = 0.5;
  }
  fVar14 = fVar14 + (float)(int)fVar13;
  uVar6 = (uint)fVar14;
  if (0x7f7fffff < (uint)ABS(fVar14)) {
    uVar6 = 0;
  }
  lVar11 = *(long *)(param_2 + 0x14);
  uVar4 = (int)uVar6 >> 1;
  *(uint *)(lVar11 + 0x10) = uVar6;
  *(uint *)(lVar11 + 0x14) = uVar4;
  *(undefined4 *)(lVar11 + 0x24) = 0;
  fVar14 = 0.0;
  if (0 < (int)uVar6) {
    uVar12 = 0;
    do {
      fVar15 = (float)(((double)(uVar12 & 0xffffffff) * 6.283185307179586) / (double)uVar6);
      _cosf();
      fVar15 = fVar15 * -0.5 + 0.5;
      *(float *)(lVar11 + 0x28 + uVar12 * 4) = fVar15;
      fVar14 = fVar14 + fVar15 * fVar15;
      uVar12 = uVar12 + 1;
    } while (uVar6 != uVar12);
    *(float *)(lVar11 + 0x24) = fVar14;
  }
  fVar15 = *(float *)(lVar10 + 8);
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  fVar15 = (float)NEON_fminnm(fVar15,0x3f800000);
  *(float *)(lVar10 + 8) = fVar15;
  fVar13 = (1.0 - fVar15) * (float)(int)fVar13;
  iVar7 = (int)fVar13;
  *(int *)(lVar11 + 0x18) = iVar7;
  *(int *)(lVar11 + 0x1c) = iVar9 - iVar7;
  fVar14 = (float)(int)fVar13 / fVar14;
  *(float *)(lVar11 + 0x20) = fVar14;
  if (0xffff0002 < uVar4 - 0x10001) {
    uVar6 = *param_2;
    if (uVar6 != uVar4) {
      dVar17 = (double)uVar4;
      _log();
      uVar5 = (uint)(dVar17 / 0.6931471805599453 + -0.5);
      do {
        uVar5 = uVar5 + 1;
        uVar1 = 1 << (ulong)(uVar5 & 0x1f);
      } while ((int)uVar1 < (int)uVar4);
      if (uVar6 != uVar1) {
        *param_2 = uVar1;
        param_2[1] = uVar1 >> 1;
        FUN_10ad0b598(param_2 + 2);
        func_0x00010ad0b5c8(param_2 + 10,(long)(int)*param_2);
        uVar12 = (ulong)*param_2;
        if (0 < (int)*param_2) {
          uVar8 = 0;
          do {
            lVar10 = *(long *)(param_2 + 2);
            if ((ulong)(*(long *)(param_2 + 4) - lVar10 >> 3) <= uVar8) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad0aea4);
              (*pcVar2)();
            }
            dVar16 = (double)(int)uVar12;
            dVar17 = ((double)(uVar8 & 0xffffffff) * 3.141592653589793) / dVar16;
            ___sincos_stret();
            *(ulong *)(lVar10 + uVar8 * 8) = CONCAT44((float)(dVar17 * -0.5),(float)(dVar16 * 0.5));
            uVar8 = uVar8 + 1;
            uVar12 = (ulong)(int)*param_2;
          } while ((long)uVar8 < (long)uVar12);
        }
        _free(*(undefined8 *)(param_2 + 8));
        uVar12 = (ulong)*param_2;
        func_0x00010987a318();
        *(ulong *)(param_2 + 8) = uVar12;
      }
    }
    return;
  }
  puVar3 = &UNK_10f6a446d;
  FUN_10a00946c();
  if (fVar14 <= 5.0) {
    fVar14 = 5.0;
  }
  fVar14 = (float)NEON_fminnm(fVar14,(float)(int)uVar4 * 0.49);
  *(float *)(*(long *)(puVar3 + 0x8040) + 0x1c) = fVar14;
  dVar17 = (double)(int)uVar4;
  fVar14 = (float)(((double)fVar14 * 6.283185307179586) / dVar17);
  lVar10 = *(long *)(puVar3 + 0x8050);
  ___sincosf_stret();
  fVar13 = fVar14 / 1.4142135 + 1.0;
  fVar15 = SUB84(dVar17,0) + 1.0;
  fVar18 = (fVar15 * 0.5) / fVar13;
  *(float *)(lVar10 + 0x2040) = fVar18;
  *(float *)(lVar10 + 0x2044) = -fVar15 / fVar13;
  *(float *)(lVar10 + 0x2048) = fVar18;
  *(float *)(lVar10 + 0x2038) = (SUB84(dVar17,0) * -2.0) / fVar13;
  *(float *)(lVar10 + 0x203c) = (1.0 - fVar14 / 1.4142135) / fVar13;
  return;
}



/* Entry: 10ad0ef10; end: 10ad0f0bb;  */

undefined8 FUN_10ad0ef10(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  
  puVar3 = *(undefined4 **)(param_1 + 0x40);
  *puVar3 = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x50);
  puVar3[3] = 0;
  *(undefined4 *)(puVar4 + 0x40a) = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  FUN_10ad0ed8c();
  lVar7 = *(long *)(param_1 + 0x40);
  iVar1 = *(int *)(lVar7 + 4);
  fVar9 = (float)iVar1 / 4.0;
  iVar6 = (int)fVar9;
  *(undefined4 *)(lVar7 + 8) = 0x3f400000;
  lVar8 = *(long *)(param_1 + 0x50);
  *(int *)(lVar8 + 0x18) = iVar6;
  *(int *)(lVar8 + 0x1c) = iVar1 - iVar6;
  *(float *)(lVar8 + 0x20) = (float)(int)fVar9 / *(float *)(lVar8 + 0x24);
  uVar2 = *(uint *)(lVar8 + 0x14);
  if (-1 < (int)uVar2) {
    lVar5 = (ulong)uVar2 + 1;
    auVar12 = NEON_fmov(0x3f800000,4);
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x48) + 0x10010);
    do {
      puVar4[1] = auVar12._8_8_;
      *puVar4 = auVar12._0_8_;
      lVar5 = lVar5 + -1;
      puVar4 = (undefined8 *)((long)puVar4 + 0x1c);
    } while (lVar5 != 0);
  }
  *(undefined8 *)(lVar8 + 0x2048) = 0x3fc000000000001f;
  *(undefined4 *)(lVar8 + 0x2058) = 0x41a00000;
  *(undefined8 *)(lVar7 + 0x10) = 0x4220000041a00000;
  *(undefined4 *)(lVar8 + 0x2054) = 0x3ecccccc;
  *(undefined4 *)(lVar7 + 0x18) = 0xc2b40000;
  *(undefined8 *)(lVar8 + 0x2040) = 0x3f71a9fc30897058;
  *(undefined8 *)(lVar8 + 0x2038) = 0x3ca3d7003f7ae148;
  dVar11 = (double)NEON_fmov(0xc1f00000,4);
  *(double *)(lVar7 + 0x1c) = -dVar11;
  *(undefined8 *)(lVar8 + 0x2060) = 0x447a00023a83126e;
  *(undefined4 *)(lVar8 + 0x2028) = 0x3f800000;
  *(undefined8 *)(lVar7 + 0x24) = 0x4396000042c80000;
  uVar10 = _expf(-2.2 / ((float)param_2 * 0.3),0xc00ccccd);
  *(undefined4 *)(lVar8 + 0x202c) = uVar10;
  *(undefined4 *)(lVar7 + 0x2c) = 0;
  *(undefined4 *)(lVar8 + 0x2068) = 0;
  *(undefined8 *)(lVar7 + 0x30) = 0x3dcccccd3e4ccccd;
  *(undefined8 *)(lVar8 + 0x2074) = 0x3f6666663dcccccd;
  *(undefined8 *)(lVar8 + 0x206c) = 0x3e4ccccd3f4ccccd;
  *(undefined4 *)(lVar8 + 0x207c) = 0x3eaaaaaa;
  *(undefined8 *)(lVar8 + 0x2080) = 0x400000003fc00000;
  *(float *)(lVar8 + 0x2088) = 1.0 / ((float)(int)uVar2 + 1.0);
  *(undefined4 *)(lVar7 + 0x38) = 0x3e4ccccd;
  *(undefined4 *)(lVar8 + 0x208c) = 0x3e4ccccd;
  return 0;
}



/* Entry: 10ad0f0bc; end: 10ad0f5ab;  */

undefined8 FUN_10ad0f0bc(float param_1,long param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  
  uVar3 = 1;
  switch(param_3) {
  case 0xf0001:
    uVar3 = 0;
    **(uint **)(param_2 + 0x40) = (uint)(param_1 != 0.0);
    **(uint **)(param_2 + 0x50) = (uint)(param_1 != 0.0);
    break;
  case 0xf0002:
    uVar3 = 0;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar5 = (float)NEON_fminnm(param_1,0x41000000);
    *(float *)(*(long *)(param_2 + 0x40) + 0xc) = fVar5;
    fVar5 = fVar5 + 0.5;
    uVar1 = (int)fVar5;
    if (INFINITY <= fVar5) {
      uVar1 = 0;
    }
    uVar2 = (int)fVar5;
    if (fVar5 <= INFINITY) {
      uVar2 = uVar1;
    }
    lVar4 = *(long *)(param_2 + 0x50);
    *(uint *)(lVar4 + 0x2050) = uVar2 & 2;
    *(uint *)(lVar4 + 4) = uVar2;
    *(ulong *)(lVar4 + 8) = CONCAT44(uVar2,uVar2) & 0x400000001;
    break;
  case 0xf0003:
    uVar3 = 0;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    uVar6 = NEON_fminnm(param_1,0x42c80000);
    *(undefined4 *)(*(long *)(param_2 + 0x40) + 0x10) = uVar6;
    *(undefined4 *)(*(long *)(param_2 + 0x50) + 0x2058) = uVar6;
    break;
  case 0xf0004:
    uVar3 = 0;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar5 = (float)NEON_fminnm(param_1,0x42c80000);
    *(float *)(*(long *)(param_2 + 0x40) + 0x14) = fVar5;
    *(float *)(*(long *)(param_2 + 0x50) + 0x2054) = fVar5 * 0.01;
    break;
  case 0xf0005:
    if (param_1 <= -120.0) {
      param_1 = -120.0;
    }
    fVar5 = (float)NEON_fminnm(param_1,0);
    *(float *)(*(long *)(param_2 + 0x40) + 0x18) = fVar5;
    fVar5 = (fVar5 + fVar5) * 2.3025851 * 0.05;
    _expf(1);
    uVar3 = 0;
    *(float *)(*(long *)(param_2 + 0x50) + 0x2040) = fVar5;
    break;
  case 0xf0007:
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar5 = (float)NEON_fminnm(param_1,0x42f00000);
    *(float *)(*(long *)(param_2 + 0x40) + 0x20) = fVar5;
    fVar5 = (fVar5 + fVar5) * 2.3025851 * 0.05;
    _expf(1);
    uVar3 = 0;
    *(float *)(*(long *)(param_2 + 0x50) + 0x2064) = fVar5;
    break;
  case 0xf0008:
    uVar3 = 0;
    *(uint *)(*(long *)(param_2 + 0x40) + 0x2c) = (uint)(param_1 != 0.0);
    *(uint *)(*(long *)(param_2 + 0x50) + 0x2068) = (uint)(param_1 != 0.0);
    break;
  case 0xf0009:
    lVar4 = *(long *)(param_2 + 0x40);
    if (param_1 <= 0.001) {
      param_1 = 0.001;
    }
    fVar5 = (float)NEON_fminnm(param_1,0x3f7d70a4);
    fVar7 = (float)NEON_fminnm(*(undefined4 *)(lVar4 + 0x30),0x3f7d70a4);
    *(float *)(lVar4 + 0x30) = fVar5;
    *(float *)(lVar4 + 0x34) = fVar7;
    lVar4 = *(long *)(param_2 + 0x50);
    *(float *)(lVar4 + 0x2070) = fVar5;
    *(float *)(lVar4 + 0x2074) = fVar7;
    *(float *)(lVar4 + 0x206c) = 1.0 - fVar5;
    *(float *)(lVar4 + 0x2078) = 1.0 - fVar7;
    *(float *)(lVar4 + 0x2084) = fVar5 / fVar7;
    fVar7 = fVar7 / (fVar5 + fVar7);
    *(float *)(lVar4 + 0x207c) = fVar7;
    goto code_r0x00010ad0f448;
  case 0xf000a:
    lVar4 = *(long *)(param_2 + 0x40);
    fVar5 = *(float *)(lVar4 + 0x34);
    if (*(float *)(lVar4 + 0x34) <= 0.001) {
      fVar5 = 0.001;
    }
    fVar5 = (float)NEON_fminnm(fVar5,0x3f7d70a4);
    if (param_1 <= 0.001) {
      param_1 = 0.001;
    }
    fVar7 = (float)NEON_fminnm(param_1,0x3f7d70a4);
    *(float *)(lVar4 + 0x30) = fVar5;
    *(float *)(lVar4 + 0x34) = fVar7;
    lVar4 = *(long *)(param_2 + 0x50);
    *(float *)(lVar4 + 0x2070) = fVar5;
    *(float *)(lVar4 + 0x2074) = fVar7;
    *(float *)(lVar4 + 0x206c) = 1.0 - fVar5;
    *(float *)(lVar4 + 0x2078) = 1.0 - fVar7;
    *(float *)(lVar4 + 0x2084) = fVar5 / fVar7;
    fVar7 = fVar7 / (fVar7 + fVar5);
    *(float *)(lVar4 + 0x207c) = fVar7;
code_r0x00010ad0f448:
    uVar3 = 0;
    *(float *)(lVar4 + 0x2080) = 1.0 / (1.0 - fVar7);
    break;
  case 0xf000d:
    uVar3 = 0;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    uVar6 = NEON_fminnm(param_1,0x3f7d70a4);
    *(undefined4 *)(*(long *)(param_2 + 0x40) + 0x38) = uVar6;
    *(undefined4 *)(*(long *)(param_2 + 0x50) + 0x208c) = uVar6;
    break;
  case 0xf000e:
    uVar3 = 0;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar5 = (float)NEON_fminnm(param_1,0x43c80000);
    *(float *)(*(long *)(param_2 + 0x40) + 0x24) = fVar5;
    *(float *)(*(long *)(param_2 + 0x50) + 0x2028) = fVar5 * 0.01;
    break;
  case 0xf0010:
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar5 = (float)NEON_fminnm(param_1,0x44fa0000);
    *(float *)(*(long *)(param_2 + 0x40) + 0x28) = fVar5;
    fVar5 = -2.2 / (fVar5 * 0.001 * (float)param_4);
    _expf(1);
    uVar3 = 0;
    *(float *)(*(long *)(param_2 + 0x50) + 0x202c) = fVar5;
    break;
  case 0xf0011:
    FUN_10ad0ed8c(param_2);
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10ad0f5ac; end: 10ad0f6db;  */

void FUN_10ad0f5ac(long param_1,float *param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float *pfVar3;
  int *piVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  piVar4 = *(int **)(param_1 + 0x10);
  fVar6 = *param_2;
  if (*piVar4 != 0) {
    fVar7 = (float)piVar4[1];
    pfVar3 = *(float **)(param_1 + 8);
    pfVar3[(long)(int)pfVar3[0x83] + 1] = fVar6 * fVar7;
    fVar2 = pfVar3[0x82];
    fVar6 = ABS(fVar6 * fVar7);
    fVar7 = pfVar3[(long)(int)fVar2 + 1];
    fVar8 = (fVar6 - (float)piVar4[3] * pfVar3[0x81]) * (float)piVar4[4];
    if (fVar6 <= fVar8) {
      fVar6 = fVar8;
    }
    pfVar3[0x41] = fVar6;
    fVar8 = pfVar3[0x80];
    uVar5 = (ulong)(int)fVar8;
    pfVar3[(uVar5 & 1) + 0x42] = fVar6;
    pfVar3[(uVar5 & 3) + 0x44] = fVar6;
    pfVar3[(uVar5 & 7) + 0x48] = fVar6;
    pfVar3[(uVar5 & 0xf) + 0x50] = fVar6;
    pfVar3[uVar5 + 0x60] = fVar6;
    pfVar3[0x80] = (float)((int)fVar8 + 1U & 0x1f);
    lVar1 = 0;
    if (0.0 <= *pfVar3 - fVar6) {
      lVar1 = 4;
    }
    fVar6 = fVar6 + *(float *)((long)piVar4 + lVar1 + 0x14) * (*pfVar3 - fVar6);
    *pfVar3 = fVar6;
    pfVar3[0x81] = fVar6;
    fVar6 = (float)NEON_fminnm((float)piVar4[2] / (fVar6 + 1e-09),0x3f800000);
    fVar7 = fVar7 * fVar6;
    if (fVar7 <= -1.0) {
      fVar7 = -1.0;
    }
    fVar6 = (float)NEON_fminnm(fVar7,0x3f800000);
    pfVar3[0x83] = fVar2;
    pfVar3[0x82] = (float)((int)fVar2 + 1U & 0x3f);
  }
  *param_3 = fVar6;
  return;
}



/* Entry: 10ad0f6dc; end: 10ad0f857;  */

undefined8 FUN_10ad0f6dc(float param_1,long *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = 1;
  if (param_3 < 0x100003) {
    if (param_3 == 0x100001) {
      uVar1 = 0;
      *(uint *)*param_2 = (uint)(param_1 != 0.0);
      *(uint *)param_2[2] = (uint)(param_1 != 0.0);
    }
    else if (param_3 == 0x100002) {
      if (param_1 <= -96.0) {
        param_1 = -96.0;
      }
      fVar2 = (float)NEON_fminnm(param_1,0);
      *(float *)(*param_2 + 4) = fVar2;
      fVar2 = fVar2 * 2.3025851 * 0.05;
      _expf(1);
      uVar1 = 0;
      *(float *)(param_2[2] + 8) = fVar2;
    }
  }
  else if (param_3 == 0x100003) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar2 = (float)NEON_fminnm(param_1,0x44fa0000);
    *(float *)(*param_2 + 0xc) = fVar2;
    fVar2 = -2.2 / (fVar2 * 0.001 * (float)param_4);
    _expf(1);
    uVar1 = 0;
    *(float *)(param_2[2] + 0x18) = fVar2;
  }
  else if (param_3 == 0x100004) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar2 = (float)NEON_fminnm(param_1,0x42700000);
    *(float *)(*param_2 + 8) = fVar2;
    fVar2 = fVar2 * 2.3025851 * 0.05;
    _expf(1);
    uVar1 = 0;
    *(float *)(param_2[2] + 4) = fVar2;
  }
  return uVar1;
}



/* Entry: 10ad0f858; end: 10ad0f8eb;  */

undefined8 FUN_10ad0f858(long *param_1,int param_2,float *param_3)

{
  float fVar1;
  
  if (param_2 < 0x100003) {
    if (param_2 == 0x100001) {
      fVar1 = (float)*(int *)*param_1;
    }
    else {
      if (param_2 != 0x100002) {
        return 1;
      }
      fVar1 = *(float *)(*param_1 + 4);
    }
  }
  else if (param_2 == 0x100003) {
    fVar1 = *(float *)(*param_1 + 0xc);
  }
  else {
    if (param_2 != 0x100004) {
      return 1;
    }
    fVar1 = *(float *)(*param_1 + 8);
  }
  *param_3 = fVar1;
  return 0;
}



/* Entry: 10ad0f8ec; end: 10ad105d3;  */

void FUN_10ad0f8ec(long param_1,float *param_2,float *param_3)

{
  bool bVar1;
  long *plVar2;
  float *pfVar3;
  ulong uVar4;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined4 *puVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  plVar2 = (long *)(param_1 + 0x8088);
  piVar11 = *(int **)(param_1 + 0x8090);
  if (*piVar11 == 0) {
    *param_3 = *param_2;
    return;
  }
  pfVar3 = (float *)*plVar2;
  fVar21 = pfVar3[0x4422];
  pfVar3[(int)fVar21] = *param_2;
  fVar28 = (float)piVar11[4];
  *param_3 = pfVar3[(long)((int)fVar21 - (int)fVar28) + 0x800];
  pfVar3[0x4422] = (float)((int)fVar21 + 1);
  uVar9 = piVar11[1];
  uVar4 = (ulong)uVar9;
  if ((int)fVar21 + 1 < (int)uVar9) {
    return;
  }
  pfVar3[0x4422] = fVar28;
  if (0 < (int)uVar9) {
    pfVar12 = (float *)(piVar11 + 9);
    pfVar6 = pfVar3;
    do {
      pfVar6[0x3806] = *pfVar6 * *pfVar12;
      uVar4 = uVar4 - 1;
      pfVar12 = pfVar12 + 1;
      pfVar6 = pfVar6 + 1;
    } while (uVar4 != 0);
  }
  pfVar12 = (float *)(param_1 + 0x80);
  lVar16 = param_1;
  FUN_10ad0a944(param_1,pfVar3 + 0x3806,pfVar12);
  lVar18 = *(long *)(param_1 + 0x8090);
  iVar15 = *(int *)(lVar18 + 0x14);
  if (iVar15 < 2) {
    if (iVar15 == 0) {
      if (-1 < (int)*(uint *)(lVar18 + 8)) {
        iVar15 = *(int *)(lVar18 + 0x18);
        lVar16 = (ulong)*(uint *)(lVar18 + 8) + 1;
        pfVar3 = (float *)(param_1 + 0x84);
        do {
          fVar28 = SQRT(*pfVar3 * *pfVar3 + pfVar3[-1] * pfVar3[-1]);
          if (iVar15 == 0) {
            fVar21 = 1.0;
          }
          else {
            fVar21 = fVar28 / (fVar28 + *(float *)(lVar18 + 0x2030));
          }
          pfVar3[-1] = fVar28 * fVar21;
          *pfVar3 = 0.0;
          lVar16 = lVar16 + -1;
          pfVar3 = pfVar3 + 2;
        } while (lVar16 != 0);
      }
    }
    else if ((iVar15 == 1) && (-1 < *(int *)(lVar18 + 8))) {
      pfVar3 = (float *)(param_1 + 0x84);
      lVar18 = -1;
      do {
        fVar28 = SQRT(*pfVar3 * *pfVar3 + pfVar3[-1] * pfVar3[-1]);
        _rand();
        lVar17 = *(long *)(param_1 + 0x8090);
        if (*(int *)(lVar17 + 0x18) == 0) {
          fVar21 = 1.0;
        }
        else {
          fVar21 = fVar28 / (fVar28 + *(float *)(lVar17 + 0x2030));
        }
        fVar20 = (float)(int)lVar16;
        fVar28 = fVar28 * fVar21;
        ___sincosf_stret();
        pfVar3[-1] = fVar21 * fVar28;
        *pfVar3 = fVar20 * fVar28;
        lVar18 = lVar18 + 1;
        pfVar3 = pfVar3 + 2;
      } while (lVar18 < *(int *)(lVar17 + 8));
    }
LAB_10ad0fbb0:
    func_0x00010ad0aad8(param_1,pfVar12,*plVar2 + 0xe018);
    lVar18 = *plVar2;
    lVar16 = *(long *)(param_1 + 0x8090);
    uVar4 = (ulong)*(uint *)(lVar16 + 4);
    if ((int)*(uint *)(lVar16 + 4) < 1) goto LAB_10ad0fc1c;
  }
  else {
    if (iVar15 == 3) {
      if (-1 < (int)*(uint *)(lVar18 + 8)) {
        lVar16 = (ulong)*(uint *)(lVar18 + 8) + 1;
        pfVar3 = pfVar12;
        do {
          fVar20 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20);
          fVar21 = (float)*(undefined8 *)pfVar3;
          fVar28 = SQRT(fVar20 * fVar20 + fVar21 * fVar21);
          fVar28 = fVar28 / (*(float *)(lVar18 + 0x2030) + fVar28);
          *(ulong *)pfVar3 = CONCAT44(fVar20 * fVar28,fVar21 * fVar28);
          lVar16 = lVar16 + -1;
          pfVar3 = pfVar3 + 2;
        } while (lVar16 != 0);
      }
      goto LAB_10ad0fbb0;
    }
    if (iVar15 != 2) goto LAB_10ad0fbb0;
    pfVar3 = (float *)(param_1 + 0x4080);
    uVar4 = (ulong)*(uint *)(lVar18 + 8);
    if (*(int *)(lVar18 + 0x4038) == 0) {
      lVar16 = *plVar2;
    }
    else {
      if ((int)*(uint *)(lVar18 + 8) < 1) {
        lVar18 = *plVar2;
      }
      else {
        lVar18 = 0;
        do {
          *(undefined8 *)(pfVar3 + lVar18 * 2) = *(undefined8 *)(pfVar12 + lVar18 * 2);
          lVar18 = lVar18 + 1;
          iVar15 = *(int *)(*(long *)(param_1 + 0x8090) + 8);
          lVar16 = (long)iVar15;
        } while (lVar18 < lVar16);
        lVar18 = *plVar2;
        if (0 < iVar15) {
          pfVar6 = (float *)(param_1 + 0x4084);
          lVar17 = 0xe018;
          do {
            fVar28 = *pfVar6 * *pfVar6 + pfVar6[-1] * pfVar6[-1] + 1e-06;
            _log10f();
            *(float *)(lVar18 + lVar17) = fVar28;
            lVar17 = lVar17 + 4;
            pfVar6 = pfVar6 + 2;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
      }
      FUN_10ad0a944(param_1,lVar18 + 0xe018,pfVar3);
      lVar16 = *plVar2;
      lVar18 = *(long *)(param_1 + 0x8090);
      uVar4 = (ulong)*(uint *)(lVar18 + 8);
      if (0 < (int)*(uint *)(lVar18 + 8)) {
        pfVar6 = (float *)(lVar16 + 0x10018);
        pfVar13 = pfVar3;
        uVar5 = uVar4;
        do {
          *pfVar6 = ABS(*pfVar13 * *(float *)(lVar18 + 0x4048));
          uVar5 = uVar5 - 1;
          pfVar6 = pfVar6 + 1;
          pfVar13 = pfVar13 + 2;
        } while (uVar5 != 0);
      }
      iVar15 = 0;
      if (*(float *)(lVar18 + 0x4040) <= (float)(int)*(float *)(lVar18 + 0x403c)) {
        fVar28 = 0.0;
      }
      else {
        iVar14 = (int)*(float *)(lVar18 + 0x403c);
        fVar28 = 0.0;
        pfVar6 = (float *)(lVar16 + (long)iVar14 * 4 + 0x10018);
        iVar8 = iVar15;
        do {
          iVar15 = iVar14;
          fVar21 = *pfVar6;
          if (*pfVar6 <= fVar28) {
            iVar15 = iVar8;
            fVar21 = fVar28;
          }
          fVar28 = fVar21;
          iVar14 = iVar14 + 1;
          pfVar6 = pfVar6 + 1;
          iVar8 = iVar15;
        } while ((float)iVar14 < *(float *)(lVar18 + 0x4040));
      }
      lVar17 = lVar16 + (long)iVar15 * 4;
      fVar21 = *(float *)(lVar17 + 0x10014);
      fVar20 = *(float *)(lVar17 + 0x1001c);
      fVar21 = (float)*(int *)(lVar18 + 0x404c) /
               (((fVar21 - fVar20) * 0.5) / (fVar21 + fVar28 * -2.0 + fVar20) + (float)iVar15);
      *(float *)(lVar16 + 0x11018) = fVar21;
      bVar1 = *(float *)(lVar18 + 0x4044) < fVar28;
      uVar9 = (uint)bVar1;
      uVar10 = (uint)bVar1;
      *(uint *)(lVar16 + 0x11020) = uVar10;
      if (*(int *)(lVar18 + 0x4158) != 0) {
        fVar20 = *(float *)(lVar16 + 0x11028);
        fVar28 = fVar21;
        if (fVar21 <= fVar20) {
          fVar28 = fVar20;
        }
        uVar22 = NEON_fminnm(fVar21,*(undefined4 *)(lVar16 + 0x11030));
        *(float *)(lVar16 + 0x11028) = fVar21;
        *(float *)(lVar16 + 0x1102c) = fVar20;
        fVar21 = (float)NEON_fminnm(uVar22,fVar28);
        *(float *)(lVar16 + 0x11030) = fVar28;
        *(float *)(lVar16 + 0x11018) = fVar21;
        uVar9 = *(uint *)(lVar16 + 0x11024);
        *(uint *)(lVar16 + 0x11020) = uVar9;
        *(uint *)(lVar16 + 0x11024) = uVar10;
      }
      fVar28 = 0.0;
      if (uVar9 != 0) {
        fVar28 = fVar21;
      }
      *(float *)(lVar16 + 0x1101c) = fVar28;
      if (uVar9 == 0) {
        fVar28 = 1.0;
      }
      else {
        if (*(int *)(lVar18 + 0x4140) < 6) {
          uVar9 = 0x18;
        }
        else {
          lVar17 = 0;
          do {
            lVar7 = lVar17 * 4;
            uVar5 = lVar17 + 5;
            lVar17 = lVar17 + 1;
          } while (*(float *)(lVar18 + 0x4060 + lVar7) <= fVar21 &&
                   uVar5 < *(int *)(lVar18 + 0x4140) - 1);
          uVar9 = (int)lVar17 + 3;
        }
        lVar7 = lVar18 + 0x4050;
        lVar17 = lVar7 + (long)(int)uVar9 * 4;
        if (*(int *)(lVar18 + 0x4148) == 0) {
          fVar20 = *(float *)(lVar17 + -4);
          fVar28 = *(float *)(lVar7 + (ulong)uVar9 * 4);
          fVar24 = *(float *)(lVar18 + 0x415c);
          *(float *)(lVar16 + 0x11058) = fVar20;
          *(float *)(lVar16 + 0x1105c) = fVar28;
          fVar25 = (fVar20 + fVar28) * 0.5 * (1.0 - fVar24);
          fVar23 = fVar25 + fVar24 * fVar20;
          fVar25 = fVar25 + fVar24 * fVar28;
          *(float *)(lVar16 + 0x11050) = fVar23;
          *(float *)(lVar16 + 0x11054) = fVar25;
          if (*(int *)(lVar16 + 0x11040) == 0) {
            if (fVar25 < fVar21) {
              *(float *)(lVar16 + 0x11044) = fVar28;
              *(undefined4 *)(lVar16 + 0x11040) = 1;
            }
            else {
              *(float *)(lVar16 + 0x11044) = fVar20;
              fVar28 = fVar20;
            }
          }
          else if (fVar23 <= fVar21) {
            *(float *)(lVar16 + 0x11044) = fVar28;
          }
          else {
            *(float *)(lVar16 + 0x11044) = fVar20;
            *(undefined4 *)(lVar16 + 0x11040) = 0;
            fVar28 = fVar20;
          }
        }
        else {
          fVar28 = *(float *)(lVar17 + -8);
          fVar20 = *(float *)(lVar17 + -4);
          fVar23 = *(float *)(lVar7 + (ulong)uVar9 * 4);
          fVar24 = *(float *)(lVar7 + (ulong)(uVar9 + 1) * 4);
          fVar25 = *(float *)(lVar18 + 0x415c);
          fVar26 = *(float *)(lVar18 + 0x4160);
          *(float *)(lVar16 + 0x11078) = fVar28;
          *(float *)(lVar16 + 0x1107c) = fVar20;
          *(float *)(lVar16 + 0x11080) = fVar23;
          *(float *)(lVar16 + 0x11084) = fVar24;
          fVar29 = (fVar20 + fVar23) * 0.5;
          fVar27 = fVar29 * (1.0 - fVar26);
          fVar30 = fVar27 + fVar26 * fVar28;
          fVar27 = fVar27 + fVar26 * fVar20;
          fVar25 = fVar25 * (fVar29 - fVar27) * 0.5;
          fVar26 = fVar30 + fVar25;
          fVar30 = fVar30 - fVar25;
          *(float *)(lVar16 + 0x11060) = fVar26;
          *(float *)(lVar16 + 0x11064) = fVar30;
          *(float *)(lVar16 + 0x11068) = fVar29 + fVar25;
          *(float *)(lVar16 + 0x1106c) = fVar29 - fVar25;
          *(float *)(lVar16 + 0x11070) = fVar27 - fVar25;
          *(float *)(lVar16 + 0x11074) = fVar27 + fVar25;
          iVar15 = *(int *)(lVar16 + 0x11048);
          if (iVar15 < 2) {
            if (iVar15 == 0) {
              if (fVar26 < fVar21) {
LAB_10ad0ff88:
                *(float *)(lVar16 + 0x1104c) = fVar20;
                *(undefined4 *)(lVar16 + 0x11048) = 1;
                fVar28 = fVar20;
              }
              else {
                *(float *)(lVar16 + 0x1104c) = fVar28;
              }
            }
            else if (iVar15 == 1) {
              if (fVar30 <= fVar21) {
                if (fVar29 + fVar25 < fVar21) goto LAB_10ad0ffb0;
                *(float *)(lVar16 + 0x1104c) = fVar20;
                fVar28 = fVar20;
              }
              else {
                *(float *)(lVar16 + 0x1104c) = fVar28;
                *(undefined4 *)(lVar16 + 0x11048) = 0;
              }
            }
            else {
LAB_10ad0ff64:
              fVar28 = *(float *)(lVar16 + 0x1104c);
            }
          }
          else {
            fVar28 = fVar24;
            if (iVar15 == 2) {
              if (fVar21 < fVar29 - fVar25) goto LAB_10ad0ff88;
              if (fVar27 + fVar25 < fVar21) {
                *(float *)(lVar16 + 0x1104c) = fVar24;
                *(undefined4 *)(lVar16 + 0x11048) = 3;
              }
              else {
                *(float *)(lVar16 + 0x1104c) = fVar23;
                fVar28 = fVar23;
              }
            }
            else {
              if (iVar15 != 3) goto LAB_10ad0ff64;
              if (fVar27 - fVar25 <= fVar21) {
                *(float *)(lVar16 + 0x1104c) = fVar24;
              }
              else {
LAB_10ad0ffb0:
                *(float *)(lVar16 + 0x1104c) = fVar23;
                *(undefined4 *)(lVar16 + 0x11048) = 2;
                fVar28 = fVar23;
              }
            }
          }
        }
        fVar28 = (1.0 - *(float *)(lVar18 + 0x4164)) +
                 *(float *)(lVar18 + 0x4164) * (fVar28 / fVar21);
      }
      fVar21 = *(float *)(lVar16 + 0x11034);
      if (0.0 <= fVar21 - fVar28) {
        if (*(int *)(lVar18 + 0x4154) <= *(int *)(lVar16 + 0x1103c)) {
          fVar20 = *(float *)(lVar18 + 0x4150);
          goto LAB_10ad10050;
        }
        iVar15 = *(int *)(lVar16 + 0x11038);
LAB_10ad1003c:
        *(int *)(lVar16 + 0x11038) = iVar15 + 1;
        *(undefined4 *)(lVar16 + 0x1103c) = 0;
      }
      else {
        iVar15 = *(int *)(lVar16 + 0x11038);
        if (iVar15 < *(int *)(lVar18 + 0x4154)) goto LAB_10ad1003c;
        fVar20 = *(float *)(lVar18 + 0x414c);
LAB_10ad10050:
        fVar21 = fVar28 + fVar20 * (fVar21 - fVar28);
        *(float *)(lVar16 + 0x11034) = fVar21;
      }
      if (fVar21 <= 0.5) {
        fVar21 = 0.5;
      }
      uVar22 = NEON_fminnm(fVar21,0x40000000);
      *(undefined4 *)(lVar18 + 0x2028) = uVar22;
    }
    iVar15 = (int)uVar4;
    if (-1 < iVar15) {
      uVar5 = 0;
      pfVar13 = (float *)(lVar16 + 0x8000);
      iVar14 = *(int *)(lVar18 + 0x18);
      pfVar6 = (float *)(param_1 + 0x84);
      do {
        fVar28 = *pfVar6;
        fVar23 = SQRT(fVar28 * fVar28 + pfVar6[-1] * pfVar6[-1]);
        fVar23 = fVar23 + fVar23;
        _atan2f();
        fVar21 = *pfVar13;
        *pfVar13 = fVar28;
        fVar20 = (fVar28 - fVar21) - *(float *)(lVar18 + 0x2024) * (float)(uVar5 & 0xffffffff);
        fVar28 = fVar20 * 0.15915494;
        fVar21 = -0.5;
        if (0.0 <= fVar28) {
          fVar21 = 0.5;
        }
        fVar21 = fVar21 + fVar28;
        fVar28 = (float)(int)fVar21;
        fVar28 = fVar28 + fVar28;
        if (0x7f7fffff < (uint)ABS(fVar21)) {
          fVar28 = 0.0;
        }
        fVar28 = pfVar13[0x401] +
                 *(float *)(lVar18 + 0x2028) *
                 (fVar20 + fVar28 * -3.1415927 +
                 *(float *)(lVar18 + 0x2024) * (float)(uVar5 & 0xffffffff));
        pfVar13[0x401] = fVar28;
        if (iVar14 == 0) {
          fVar21 = 1.0;
        }
        else {
          fVar21 = fVar23 / (fVar23 + *(float *)(lVar18 + 0x2030));
        }
        pfVar6 = pfVar6 + 2;
        pfVar13[0x802] = fVar23 * fVar21;
        pfVar13[0xc03] = fVar28;
        uVar5 = uVar5 + 1;
        pfVar13 = pfVar13 + 1;
      } while (iVar15 + 1 != uVar5);
    }
    if (*(int *)(lVar18 + 0x2034) != 0) {
      if (0 < iVar15) {
        pfVar6 = (float *)(lVar16 + 0xa008);
        puVar19 = (undefined4 *)(param_1 + 0x84);
        do {
          fVar28 = *pfVar6 + 1e-05;
          _logf();
          puVar19[-1] = fVar28;
          *puVar19 = 0;
          uVar4 = uVar4 - 1;
          pfVar6 = pfVar6 + 1;
          puVar19 = puVar19 + 2;
        } while (uVar4 != 0);
      }
      func_0x00010ad0aad8(param_1,pfVar12,lVar16 + 0xe018);
      lVar18 = *plVar2;
      uVar9 = *(uint *)(*(long *)(param_1 + 0x8090) + 4);
      uVar4 = (ulong)uVar9;
      if (0 < (int)uVar9) {
        pfVar6 = (float *)(lVar18 + 0xe018);
        pfVar13 = (float *)(*(long *)(param_1 + 0x8090) + 0x2038);
        do {
          *pfVar6 = *pfVar6 * *pfVar13;
          uVar4 = uVar4 - 1;
          pfVar6 = pfVar6 + 1;
          pfVar13 = pfVar13 + 1;
        } while (uVar4 != 0);
      }
      FUN_10ad0a944(param_1,lVar18 + 0xe018,pfVar12);
      lVar16 = *plVar2;
      lVar18 = *(long *)(param_1 + 0x8090);
      uVar9 = *(uint *)(lVar18 + 8);
      uVar4 = (ulong)uVar9;
      if (-1 < (int)uVar9) {
        lVar7 = 0xe018;
        lVar17 = uVar4 + 1;
        uVar22 = *(undefined4 *)(param_1 + uVar4 * 8 + 0x78);
        do {
          *(undefined4 *)(lVar16 + lVar7) = uVar22;
          lVar7 = lVar7 + 4;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        if (uVar9 != 0) {
          uVar5 = 0;
          pfVar6 = pfVar12;
          do {
            iVar15 = (int)(*(float *)(lVar18 + 0x202c) * (float)(uVar5 & 0xffffffff));
            if (iVar15 < (int)uVar9) {
              *(float *)(lVar16 + 0xe018 + (long)iVar15 * 4) = *pfVar6;
            }
            uVar5 = uVar5 + 1;
            pfVar6 = pfVar6 + 2;
          } while (uVar4 != uVar5);
          lVar18 = 0xa008;
          lVar17 = 0xe018;
          pfVar6 = pfVar12;
          uVar5 = uVar4;
          do {
            fVar28 = *(float *)(lVar16 + lVar17) - *pfVar6;
            _expf();
            *(float *)(lVar16 + lVar17) = fVar28;
            *(float *)(lVar16 + lVar18) = *(float *)(lVar16 + lVar18) * fVar28;
            lVar18 = lVar18 + 4;
            lVar17 = lVar17 + 4;
            uVar5 = uVar5 - 1;
            pfVar6 = pfVar6 + 2;
          } while (uVar5 != 0);
        }
      }
    }
    _bzero(lVar16 + 0xc010,-(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar4 << 2);
    lVar18 = *(long *)(param_1 + 0x8090);
    uVar9 = *(uint *)(lVar18 + 8);
    if ((int)uVar9 < 0) {
      uVar4 = (ulong)(uVar9 + 1);
    }
    else {
      uVar10 = 0;
      uVar4 = (ulong)uVar9 + 1;
      lVar16 = 0xa008;
      uVar5 = uVar4;
      do {
        fVar28 = *(float *)(lVar18 + 0x2028);
        if ((int)(fVar28 * (float)uVar10) <= (int)uVar9) {
          pfVar6 = (float *)(*plVar2 + lVar16);
          lVar17 = *plVar2 + (long)(int)(fVar28 * (float)uVar10) * 4;
          fVar28 = *(float *)(lVar17 + 0xc010);
          *(float *)(lVar17 + 0xc010) = *pfVar6 + fVar28;
          *(float *)(lVar17 + 0xd014) = pfVar6[0x401];
        }
        lVar16 = lVar16 + 4;
        uVar10 = uVar10 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      pfVar6 = (float *)(*plVar2 + 0xc010);
      uVar5 = uVar4;
      pfVar13 = pfVar12;
      do {
        fVar21 = *pfVar6;
        fVar20 = pfVar6[0x401];
        ___sincosf_stret();
        *(ulong *)pfVar13 = CONCAT44(fVar20 * fVar21,fVar28 * fVar21);
        pfVar6 = pfVar6 + 1;
        uVar5 = uVar5 - 1;
        pfVar13 = pfVar13 + 2;
      } while (uVar5 != 0);
    }
    if ((int)uVar4 < *(int *)(lVar18 + 4)) {
      _bzero(pfVar12 + (long)(int)uVar4 * 2,(ulong)((*(int *)(lVar18 + 4) - uVar9) - 2) * 8 + 8);
    }
    func_0x00010987b1b4(pfVar3,pfVar12,*(undefined8 *)(param_1 + 0x60),1);
    lVar18 = *plVar2;
    lVar16 = *(long *)(param_1 + 0x8090);
    uVar4 = (ulong)*(uint *)(lVar16 + 4);
    if ((int)*(uint *)(lVar16 + 4) < 1) goto LAB_10ad0fc1c;
    lVar17 = 0xe018;
    uVar5 = uVar4;
    do {
      *(float *)(lVar18 + lVar17) = *pfVar3;
      lVar17 = lVar17 + 4;
      uVar5 = uVar5 - 1;
      pfVar3 = pfVar3 + 2;
    } while (uVar5 != 0);
  }
  uVar5 = 0;
  do {
    lVar17 = lVar18 + uVar5 * 4;
    *(float *)(lVar17 + 0x4000) =
         *(float *)(lVar17 + 0x4000) +
         *(float *)(lVar16 + uVar5 * 4 + 0x24) *
         *(float *)(lVar16 + 0x1c) * *(float *)(lVar18 + 0xe018 + uVar5 * 4);
    uVar5 = uVar5 + 1;
  } while (uVar4 != uVar5);
LAB_10ad0fc1c:
  uVar9 = *(uint *)(lVar16 + 0xc);
  if (0 < (int)uVar9) {
    _memmove(lVar18 + 0x2000,lVar18 + 0x4000,(ulong)uVar9 << 2);
  }
  _memmove(lVar18 + 0x4000,lVar18 + 0x4000 + (long)(int)uVar9 * 4,
           -(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar4 << 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)
            (*plVar2,*plVar2 + (long)*(int *)(*(long *)(param_1 + 0x8090) + 0xc) * 4,
             (long)*(int *)(*(long *)(param_1 + 0x8090) + 0x10) << 2);
  return;
}



/* Entry: 10ad105d4; end: 10ad10667;  */

void FUN_10ad105d4(float param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  
  iVar3 = 0;
  lVar2 = 0;
  fVar7 = -0.5;
  if (0.0 <= param_1) {
    fVar7 = 0.5;
  }
  uVar1 = (int)(param_1 + fVar7) & 0xfff;
  if (0x7f7fffff < (uint)ABS(param_1 + fVar7)) {
    uVar1 = 0;
  }
  *(uint *)(param_2 + 0x4144) = uVar1;
  *(undefined4 *)(param_2 + 0x4140) = 0;
  puVar4 = &UNK_10e50dfb0;
  do {
    lVar5 = 0;
    uVar6 = uVar1;
    do {
      if ((uVar6 & 1) != 0) {
        *(undefined4 *)(param_2 + 0x4050 + (long)iVar3 * 4) = *(undefined4 *)(puVar4 + lVar5);
        iVar3 = iVar3 + 1;
        *(int *)(param_2 + 0x4140) = iVar3;
      }
      uVar6 = uVar6 >> 1;
      lVar5 = lVar5 + 4;
    } while (lVar5 != 0x30);
    lVar2 = lVar2 + 1;
    puVar4 = puVar4 + 0x30;
  } while (lVar2 != 5);
  return;
}



/* Entry: 10ad10668; end: 10ad10933;  */

undefined8 FUN_10ad10668(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  **(undefined4 **)(param_1 + 0x8080) = 0;
  **(undefined4 **)(param_1 + 0x8090) = 0;
  func_0x00010ad10400();
  lVar3 = *(long *)(param_1 + 0x8090);
  iVar5 = *(int *)(lVar3 + 4);
  lVar4 = *(long *)(param_1 + 0x8080);
  iVar1 = (int)((float)iVar5 / 4.0);
  *(int *)(lVar3 + 0xc) = iVar1;
  *(int *)(lVar3 + 0x10) = iVar5 - iVar1;
  *(float *)(lVar3 + 0x2024) = ((float)iVar1 * 6.2831855) / (float)iVar5;
  *(float *)(lVar3 + 0x1c) = (float)(int)((float)iVar5 / 4.0) / *(float *)(lVar3 + 0x20);
  *(undefined8 *)(lVar4 + 8) = 0x400000003f400000;
  *(undefined4 *)(lVar3 + 0x2028) = 0x3f800000;
  *(undefined8 *)(lVar4 + 0x14) = 0xc2f00000;
  *(float *)(lVar3 + 0x2030) = (float)iVar5 * 9.999998e-07;
  *(undefined4 *)(lVar4 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x14) = 2;
  *(undefined4 *)(lVar3 + 0x2034) = 0;
  *(undefined4 *)(lVar4 + 0x1c) = 0;
  *(undefined4 *)(lVar3 + 0x202c) = 0x3f800000;
  *(undefined8 *)(lVar4 + 0x20) = 0x3200000000;
  *(undefined4 *)(lVar3 + 0x2038) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0x2100) = 0x3f800000;
  _memset_pattern16(lVar3 + 0x203c,&UNK_10dfdff30,0xc4);
  if (0x33 < iVar5) {
    _bzero(lVar3 + 0x2104,(ulong)(iVar5 - 0x34) * 4 + 4);
  }
  lVar2 = *(long *)(param_1 + 0x8088);
  *(int *)(lVar2 + 0x11088) = iVar5 - iVar1;
  *(undefined4 *)(lVar4 + 0x28) = 0;
  *(undefined4 *)(lVar3 + 0x4038) = 0;
  if (*(int *)(lVar4 + 4) < 0x800) {
    func_0x00010ad10400(0x4500000045000000,param_1);
    lVar2 = *(long *)(param_1 + 0x8088);
    lVar3 = *(long *)(param_1 + 0x8090);
    lVar4 = *(long *)(param_1 + 0x8080);
  }
  *(int *)(lVar3 + 0x404c) = param_2;
  *(undefined4 *)(lVar2 + 0x11020) = 1;
  *(undefined4 *)(lVar4 + 0x34) = 0xc2f00000;
  *(undefined4 *)(lVar3 + 0x4044) = 0x358637bb;
  fVar7 = (float)param_2;
  *(undefined8 *)(lVar4 + 0x2c) = 0x4248000044160000;
  *(ulong *)(lVar3 + 0x403c) = CONCAT44(fVar7 / 50.0,fVar7 / 600.0);
  *(undefined8 *)(lVar4 + 0x40) = 0x1457ff000;
  FUN_10ad105d4(lVar3);
  lVar4 = *(long *)(param_1 + 0x8080);
  *(undefined4 *)(lVar4 + 0x48) = 0;
  lVar3 = *(long *)(param_1 + 0x8090);
  *(undefined4 *)(lVar3 + 0x4148) = 0;
  *(undefined4 *)(lVar4 + 100) = 0;
  *(undefined4 *)(lVar3 + 0x4164) = 0;
  iVar5 = *(int *)(lVar3 + 0xc);
  uVar6 = _expf(-2.2 / ((0.0 / (float)iVar5) * 0.001 * fVar7),0xc00ccccd);
  *(undefined4 *)(lVar3 + 0x414c) = uVar6;
  *(undefined8 *)(lVar4 + 0x4c) = 0;
  *(undefined4 *)(lVar3 + 0x4150) = uVar6;
  *(undefined8 *)(lVar4 + 0x54) = 0x100000000;
  fVar7 = (float)((uint)fVar7 ^ (uint)ABS(fVar7)) / (float)iVar5;
  fVar8 = -0.5;
  if (0.0 <= fVar7) {
    fVar8 = 0.5;
  }
  fVar7 = fVar7 + fVar8;
  iVar5 = (int)fVar7;
  if (0x7f7fffff < (uint)ABS(fVar7)) {
    iVar5 = 0;
  }
  *(int *)(lVar3 + 0x4154) = iVar5;
  *(undefined4 *)(lVar3 + 0x4158) = 1;
  *(undefined4 *)(lVar3 + 0x415c) = 0;
  *(undefined8 *)(lVar4 + 0x5c) = 0;
  *(undefined4 *)(lVar3 + 0x4160) = 0;
  lVar3 = *(long *)(param_1 + 0x8088);
  *(undefined4 *)(lVar3 + 0x11030) = 0x42c80000;
  *(undefined8 *)(lVar3 + 0x11028) = 0x42c8000042c80000;
  return 0;
}



/* Entry: 10ad10934; end: 10ad1093f;  */

undefined8 FUN_10ad10934(ulong param_1,long param_2,uint param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  
  fVar5 = (float)param_1;
  if ((param_3 >> 8 & 1) == 0) {
    uVar1 = 1;
    if ((int)param_3 < 0xe0006) {
      if ((int)param_3 < 0xe0003) {
        if (param_3 == 0xe0001) {
          uVar1 = 0;
          **(uint **)(param_2 + 0x8080) = (uint)(fVar5 != 0.0);
          **(uint **)(param_2 + 0x8090) = (uint)(fVar5 != 0.0);
        }
        else if (param_3 == 0xe0002) {
          func_0x00010ad10400(param_2);
          uVar1 = 0;
        }
      }
      else if (param_3 == 0xe0003) {
        uVar1 = 0;
        lVar2 = *(long *)(param_2 + 0x8090);
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
        fVar5 = (float)NEON_fminnm(fVar5,0x3f800000);
        *(float *)(*(long *)(param_2 + 0x8080) + 8) = fVar5;
        iVar7 = *(int *)(lVar2 + 4);
        fVar5 = (1.0 - fVar5) * (float)iVar7;
        iVar4 = (int)fVar5;
        *(int *)(lVar2 + 0xc) = iVar4;
        *(int *)(lVar2 + 0x10) = iVar7 - iVar4;
        *(float *)(lVar2 + 0x2024) = ((float)iVar4 * 6.2831855) / (float)iVar7;
        *(float *)(lVar2 + 0x1c) = (float)(int)fVar5 / *(float *)(lVar2 + 0x20);
      }
      else if (param_3 == 0xe0004) {
        uVar1 = 0;
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
        fVar5 = (float)NEON_fminnm(fVar5,0x40800000);
        *(float *)(*(long *)(param_2 + 0x8080) + 0xc) = fVar5;
        fVar5 = fVar5 + 0.5;
        iVar7 = (int)fVar5;
        if (INFINITY <= fVar5) {
          iVar7 = 0;
        }
        iVar4 = (int)fVar5;
        if (fVar5 <= INFINITY) {
          iVar4 = iVar7;
        }
        *(int *)(*(long *)(param_2 + 0x8090) + 0x14) = iVar4;
      }
    }
    else if ((int)param_3 < 0xe0008) {
      if (param_3 == 0xe0006) {
        if (fVar5 <= -24.0) {
          fVar5 = -24.0;
        }
        fVar5 = (float)NEON_fminnm(fVar5,0x41c00000);
        *(float *)(*(long *)(param_2 + 0x8080) + 0x18) = fVar5;
        fVar5 = fVar5 / 12.0;
        _exp2f(1);
        uVar1 = 0;
        *(float *)(*(long *)(param_2 + 0x8090) + 0x2028) = fVar5;
      }
      else if (param_3 == 0xe0007) {
        if (fVar5 <= -120.0) {
          fVar5 = -120.0;
        }
        fVar5 = (float)NEON_fminnm(fVar5,0x42700000);
        *(float *)(*(long *)(param_2 + 0x8080) + 0x14) = fVar5;
        lVar2 = *(long *)(param_2 + 0x8090);
        iVar7 = *(int *)(lVar2 + 4);
        fVar5 = fVar5 * 2.3025851 * 0.05;
        _expf();
        uVar1 = 0;
        *(float *)(lVar2 + 0x2030) = fVar5 * (float)iVar7;
      }
    }
    else if (param_3 == 0xe0008) {
      uVar1 = 0;
      *(uint *)(*(long *)(param_2 + 0x8080) + 0x10) = (uint)(fVar5 != 0.0);
      *(uint *)(*(long *)(param_2 + 0x8090) + 0x18) = (uint)(fVar5 != 0.0);
    }
    else if (param_3 == 0xe0009) {
      uVar1 = 0;
      *(uint *)(*(long *)(param_2 + 0x8080) + 0x20) = (uint)(fVar5 != 0.0);
      *(uint *)(*(long *)(param_2 + 0x8090) + 0x2034) = (uint)(fVar5 != 0.0);
    }
    else if (param_3 == 0xe000a) {
      if (fVar5 <= -24.0) {
        fVar5 = -24.0;
      }
      fVar5 = (float)NEON_fminnm(fVar5,0x41c00000);
      lVar2 = *(long *)(param_2 + 0x8080);
      *(float *)(lVar2 + 0x1c) = fVar5;
      fVar5 = (fVar5 - *(float *)(lVar2 + 0x18)) / 12.0;
      _exp2f(1);
      uVar1 = 0;
      *(float *)(*(long *)(param_2 + 0x8090) + 0x202c) = fVar5;
    }
    return uVar1;
  }
  uVar1 = 1;
  switch(param_3) {
  case 0xe0101:
    lVar2 = *(long *)(param_2 + 0x8080);
    *(uint *)(lVar2 + 0x28) = (uint)(fVar5 != 0.0);
    *(uint *)(*(long *)(param_2 + 0x8090) + 0x4038) = (uint)(fVar5 != 0.0);
    if (*(int *)(lVar2 + 4) < 0x800) {
      func_0x00010ad10400(0x4500000045000000,param_2);
    }
    goto code_r0x00010ad10c14;
  case 0xe0102:
    lVar2 = *(long *)(param_2 + 0x8080);
    uVar1 = *(undefined8 *)(param_2 + 0x8090);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    uVar6 = NEON_fminnm(fVar5,0x41400000);
    *(undefined4 *)(lVar2 + 0x38) = uVar6;
    goto code_r0x00010ad10b04;
  case 0xe0103:
    lVar2 = *(long *)(param_2 + 0x8080);
    uVar1 = *(undefined8 *)(param_2 + 0x8090);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    uVar6 = NEON_fminnm(fVar5,0x40a00000);
    *(undefined4 *)(lVar2 + 0x3c) = uVar6;
code_r0x00010ad10b04:
    param_1 = (ulong)*(uint *)(lVar2 + 0x40);
code_r0x00010ad10c10:
    FUN_10ad105d4(param_1,uVar1);
code_r0x00010ad10c14:
    uVar1 = 0;
    break;
  case 0xe0104:
    lVar2 = *(long *)(param_2 + 0x8080);
    *(float *)(lVar2 + 0x40) = fVar5;
    if (*(int *)(lVar2 + 0x44) == 0) goto code_r0x00010ad10c14;
    uVar1 = *(undefined8 *)(param_2 + 0x8090);
    goto code_r0x00010ad10c10;
  case 0xe0106:
    if (fVar5 <= 40.0) {
      fVar5 = 40.0;
    }
    fVar5 = (float)NEON_fminnm(fVar5,0x43480000);
    *(float *)(*(long *)(param_2 + 0x8080) + 0x30) = fVar5;
    fVar5 = (float)param_4 / fVar5;
    lVar2 = *(long *)(param_2 + 0x8090);
    lVar3 = 0x4040;
    goto code_r0x00010ad10c50;
  case 0xe0107:
    if (fVar5 <= 100.0) {
      fVar5 = 100.0;
    }
    fVar5 = (float)NEON_fminnm(fVar5,0x44480000);
    *(float *)(*(long *)(param_2 + 0x8080) + 0x2c) = fVar5;
    fVar5 = (float)param_4 / fVar5;
    lVar2 = *(long *)(param_2 + 0x8090);
    lVar3 = 0x403c;
    goto code_r0x00010ad10c50;
  case 0xe0108:
    if (fVar5 <= -120.0) {
      fVar5 = -120.0;
    }
    fVar5 = (float)NEON_fminnm(fVar5,0);
    *(float *)(*(long *)(param_2 + 0x8080) + 0x34) = fVar5;
    fVar5 = fVar5 * 2.3025851 * 0.05;
    _expf(1);
    lVar2 = *(long *)(param_2 + 0x8090);
    lVar3 = 0x4044;
    goto code_r0x00010ad10c50;
  case 0xe010a:
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar5 = (float)NEON_fminnm(fVar5,0x42c80000);
    *(float *)(*(long *)(param_2 + 0x8080) + 100) = fVar5;
    fVar5 = fVar5 / 100.0;
    lVar2 = *(long *)(param_2 + 0x8090);
    lVar3 = 0x4164;
    goto code_r0x00010ad10c50;
  case 0xe010b:
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar5 = (float)NEON_fminnm(fVar5,0x447a0000);
    *(float *)(*(long *)(param_2 + 0x8080) + 0x4c) = fVar5;
    lVar3 = *(long *)(param_2 + 0x8090);
    fVar5 = -2.2 / ((fVar5 / (float)*(int *)(lVar3 + 0xc)) * 0.001 * (float)param_4);
    _expf(1);
    lVar2 = 0x414c;
    goto code_r0x00010ad10d0c;
  case 0xe010c:
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar5 = (float)NEON_fminnm(fVar5,0x447a0000);
    *(float *)(*(long *)(param_2 + 0x8080) + 0x50) = fVar5;
    lVar3 = *(long *)(param_2 + 0x8090);
    fVar5 = -2.2 / ((fVar5 / (float)*(int *)(lVar3 + 0xc)) * 0.001 * (float)param_4);
    _expf(1);
    lVar2 = 0x4150;
code_r0x00010ad10d0c:
    uVar1 = 0;
    *(float *)(lVar3 + lVar2) = fVar5;
    break;
  case 0xe010d:
    uVar1 = 0;
    *(uint *)(*(long *)(param_2 + 0x8080) + 0x44) = (uint)(fVar5 != 0.0);
    break;
  case 0xe010e:
    *(uint *)(*(long *)(param_2 + 0x8080) + 0x48) = (uint)(fVar5 != 0.0);
    lVar2 = *(long *)(param_2 + 0x8090);
    lVar3 = 0x4148;
    goto code_r0x00010ad10ae0;
  case 0xe010f:
    *(uint *)(*(long *)(param_2 + 0x8080) + 0x58) = (uint)(fVar5 != 0.0);
    lVar2 = *(long *)(param_2 + 0x8090);
    lVar3 = 0x4158;
code_r0x00010ad10ae0:
    uVar1 = 0;
    *(uint *)(lVar2 + lVar3) = (uint)(fVar5 != 0.0);
    break;
  case 0xe0110:
    uVar1 = 0;
    uVar6 = NEON_fminnm(fVar5,0x447a0000);
    *(undefined4 *)(*(long *)(param_2 + 0x8080) + 0x54) = uVar6;
    fVar5 = (fVar5 * 0.001 * (float)param_4) / (float)*(int *)(*(long *)(param_2 + 0x8090) + 0xc);
    fVar8 = -0.5;
    if (0.0 <= fVar5) {
      fVar8 = 0.5;
    }
    fVar5 = fVar5 + fVar8;
    iVar7 = (int)fVar5;
    if (0x7f7fffff < (uint)ABS(fVar5)) {
      iVar7 = 0;
    }
    *(int *)(*(long *)(param_2 + 0x8090) + 0x4154) = iVar7;
    break;
  case 0xe0111:
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar5 = (float)NEON_fminnm(fVar5,0x42c80000);
    *(float *)(*(long *)(param_2 + 0x8080) + 0x5c) = fVar5;
    fVar5 = fVar5 / 100.0;
    lVar2 = *(long *)(param_2 + 0x8090);
    lVar3 = 0x415c;
code_r0x00010ad10c50:
    uVar1 = 0;
    *(float *)(lVar2 + lVar3) = fVar5;
    break;
  case 0xe0112:
    uVar1 = 0;
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar5 = (float)NEON_fminnm(fVar5,0x42c80000);
    *(float *)(*(long *)(param_2 + 0x8090) + 0x4160) = (fVar5 * 0.66) / 100.0;
    *(float *)(*(long *)(param_2 + 0x8080) + 0x60) = fVar5;
  }
  return uVar1;
}



/* Entry: 10ad10940; end: 10ad10d1b;  */

undefined8 FUN_10ad10940(ulong param_1,long param_2,undefined4 param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  
  uVar1 = 1;
  fVar5 = (float)param_1;
  switch(param_3) {
  case 0xe0101:
    lVar2 = *(long *)(param_2 + 0x8080);
    *(uint *)(lVar2 + 0x28) = (uint)(fVar5 != 0.0);
    *(uint *)(*(long *)(param_2 + 0x8090) + 0x4038) = (uint)(fVar5 != 0.0);
    if (*(int *)(lVar2 + 4) < 0x800) {
      func_0x00010ad10400(0x4500000045000000,param_2);
    }
    goto code_r0x00010ad10c14;
  case 0xe0102:
    lVar2 = *(long *)(param_2 + 0x8080);
    uVar1 = *(undefined8 *)(param_2 + 0x8090);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    uVar6 = NEON_fminnm(fVar5,0x41400000);
    *(undefined4 *)(lVar2 + 0x38) = uVar6;
    goto code_r0x00010ad10b04;
  case 0xe0103:
    lVar2 = *(long *)(param_2 + 0x8080);
    uVar1 = *(undefined8 *)(param_2 + 0x8090);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    uVar6 = NEON_fminnm(fVar5,0x40a00000);
    *(undefined4 *)(lVar2 + 0x3c) = uVar6;
code_r0x00010ad10b04:
    param_1 = (ulong)*(uint *)(lVar2 + 0x40);
code_r0x00010ad10c10:
    FUN_10ad105d4(param_1,uVar1);
code_r0x00010ad10c14:
    uVar1 = 0;
    break;
  case 0xe0104:
    lVar2 = *(long *)(param_2 + 0x8080);
    *(float *)(lVar2 + 0x40) = fVar5;
    if (*(int *)(lVar2 + 0x44) == 0) goto code_r0x00010ad10c14;
    uVar1 = *(undefined8 *)(param_2 + 0x8090);
    goto code_r0x00010ad10c10;
  case 0xe0106:
    if (fVar5 <= 40.0) {
      fVar5 = 40.0;
    }
    fVar5 = (float)NEON_fminnm(fVar5,0x43480000);
    *(float *)(*(long *)(param_2 + 0x8080) + 0x30) = fVar5;
    fVar5 = (float)param_4 / fVar5;
    lVar2 = *(long *)(param_2 + 0x8090);
    lVar4 = 0x4040;
    goto code_r0x00010ad10c50;
  case 0xe0107:
    if (fVar5 <= 100.0) {
      fVar5 = 100.0;
    }
    fVar5 = (float)NEON_fminnm(fVar5,0x44480000);
    *(float *)(*(long *)(param_2 + 0x8080) + 0x2c) = fVar5;
    fVar5 = (float)param_4 / fVar5;
    lVar2 = *(long *)(param_2 + 0x8090);
    lVar4 = 0x403c;
    goto code_r0x00010ad10c50;
  case 0xe0108:
    if (fVar5 <= -120.0) {
      fVar5 = -120.0;
    }
    fVar5 = (float)NEON_fminnm(fVar5,0);
    *(float *)(*(long *)(param_2 + 0x8080) + 0x34) = fVar5;
    fVar5 = fVar5 * 2.3025851 * 0.05;
    _expf(1);
    lVar2 = *(long *)(param_2 + 0x8090);
    lVar4 = 0x4044;
    goto code_r0x00010ad10c50;
  case 0xe010a:
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar5 = (float)NEON_fminnm(fVar5,0x42c80000);
    *(float *)(*(long *)(param_2 + 0x8080) + 100) = fVar5;
    fVar5 = fVar5 / 100.0;
    lVar2 = *(long *)(param_2 + 0x8090);
    lVar4 = 0x4164;
    goto code_r0x00010ad10c50;
  case 0xe010b:
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar5 = (float)NEON_fminnm(fVar5,0x447a0000);
    *(float *)(*(long *)(param_2 + 0x8080) + 0x4c) = fVar5;
    lVar4 = *(long *)(param_2 + 0x8090);
    fVar5 = -2.2 / ((fVar5 / (float)*(int *)(lVar4 + 0xc)) * 0.001 * (float)param_4);
    _expf(1);
    lVar2 = 0x414c;
    goto code_r0x00010ad10d0c;
  case 0xe010c:
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar5 = (float)NEON_fminnm(fVar5,0x447a0000);
    *(float *)(*(long *)(param_2 + 0x8080) + 0x50) = fVar5;
    lVar4 = *(long *)(param_2 + 0x8090);
    fVar5 = -2.2 / ((fVar5 / (float)*(int *)(lVar4 + 0xc)) * 0.001 * (float)param_4);
    _expf(1);
    lVar2 = 0x4150;
code_r0x00010ad10d0c:
    uVar1 = 0;
    *(float *)(lVar4 + lVar2) = fVar5;
    break;
  case 0xe010d:
    uVar1 = 0;
    *(uint *)(*(long *)(param_2 + 0x8080) + 0x44) = (uint)(fVar5 != 0.0);
    break;
  case 0xe010e:
    *(uint *)(*(long *)(param_2 + 0x8080) + 0x48) = (uint)(fVar5 != 0.0);
    lVar2 = *(long *)(param_2 + 0x8090);
    lVar4 = 0x4148;
    goto code_r0x00010ad10ae0;
  case 0xe010f:
    *(uint *)(*(long *)(param_2 + 0x8080) + 0x58) = (uint)(fVar5 != 0.0);
    lVar2 = *(long *)(param_2 + 0x8090);
    lVar4 = 0x4158;
code_r0x00010ad10ae0:
    uVar1 = 0;
    *(uint *)(lVar2 + lVar4) = (uint)(fVar5 != 0.0);
    break;
  case 0xe0110:
    uVar1 = 0;
    uVar6 = NEON_fminnm(fVar5,0x447a0000);
    *(undefined4 *)(*(long *)(param_2 + 0x8080) + 0x54) = uVar6;
    fVar5 = (fVar5 * 0.001 * (float)param_4) / (float)*(int *)(*(long *)(param_2 + 0x8090) + 0xc);
    fVar7 = -0.5;
    if (0.0 <= fVar5) {
      fVar7 = 0.5;
    }
    fVar5 = fVar5 + fVar7;
    iVar3 = (int)fVar5;
    if (0x7f7fffff < (uint)ABS(fVar5)) {
      iVar3 = 0;
    }
    *(int *)(*(long *)(param_2 + 0x8090) + 0x4154) = iVar3;
    break;
  case 0xe0111:
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar5 = (float)NEON_fminnm(fVar5,0x42c80000);
    *(float *)(*(long *)(param_2 + 0x8080) + 0x5c) = fVar5;
    fVar5 = fVar5 / 100.0;
    lVar2 = *(long *)(param_2 + 0x8090);
    lVar4 = 0x415c;
code_r0x00010ad10c50:
    uVar1 = 0;
    *(float *)(lVar2 + lVar4) = fVar5;
    break;
  case 0xe0112:
    uVar1 = 0;
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar5 = (float)NEON_fminnm(fVar5,0x42c80000);
    *(float *)(*(long *)(param_2 + 0x8090) + 0x4160) = (fVar5 * 0.66) / 100.0;
    *(float *)(*(long *)(param_2 + 0x8080) + 0x60) = fVar5;
  }
  return uVar1;
}



/* Entry: 10ad10d1c; end: 10ad10fff;  */

undefined8 FUN_10ad10d1c(float param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  
  uVar1 = 1;
  if (param_3 < 0xe0006) {
    if (param_3 < 0xe0003) {
      if (param_3 == 0xe0001) {
        uVar1 = 0;
        **(uint **)(param_2 + 0x8080) = (uint)(param_1 != 0.0);
        **(uint **)(param_2 + 0x8090) = (uint)(param_1 != 0.0);
      }
      else if (param_3 == 0xe0002) {
        func_0x00010ad10400(param_2);
        uVar1 = 0;
      }
    }
    else if (param_3 == 0xe0003) {
      uVar1 = 0;
      lVar2 = *(long *)(param_2 + 0x8090);
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      fVar4 = (float)NEON_fminnm(param_1,0x3f800000);
      *(float *)(*(long *)(param_2 + 0x8080) + 8) = fVar4;
      iVar5 = *(int *)(lVar2 + 4);
      fVar4 = (1.0 - fVar4) * (float)iVar5;
      iVar3 = (int)fVar4;
      *(int *)(lVar2 + 0xc) = iVar3;
      *(int *)(lVar2 + 0x10) = iVar5 - iVar3;
      *(float *)(lVar2 + 0x2024) = ((float)iVar3 * 6.2831855) / (float)iVar5;
      *(float *)(lVar2 + 0x1c) = (float)(int)fVar4 / *(float *)(lVar2 + 0x20);
    }
    else if (param_3 == 0xe0004) {
      uVar1 = 0;
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      fVar4 = (float)NEON_fminnm(param_1,0x40800000);
      *(float *)(*(long *)(param_2 + 0x8080) + 0xc) = fVar4;
      fVar4 = fVar4 + 0.5;
      iVar5 = (int)fVar4;
      if (INFINITY <= fVar4) {
        iVar5 = 0;
      }
      iVar3 = (int)fVar4;
      if (fVar4 <= INFINITY) {
        iVar3 = iVar5;
      }
      *(int *)(*(long *)(param_2 + 0x8090) + 0x14) = iVar3;
    }
  }
  else if (param_3 < 0xe0008) {
    if (param_3 == 0xe0006) {
      if (param_1 <= -24.0) {
        param_1 = -24.0;
      }
      fVar4 = (float)NEON_fminnm(param_1,0x41c00000);
      *(float *)(*(long *)(param_2 + 0x8080) + 0x18) = fVar4;
      fVar4 = fVar4 / 12.0;
      _exp2f(1);
      uVar1 = 0;
      *(float *)(*(long *)(param_2 + 0x8090) + 0x2028) = fVar4;
    }
    else if (param_3 == 0xe0007) {
      if (param_1 <= -120.0) {
        param_1 = -120.0;
      }
      fVar4 = (float)NEON_fminnm(param_1,0x42700000);
      *(float *)(*(long *)(param_2 + 0x8080) + 0x14) = fVar4;
      lVar2 = *(long *)(param_2 + 0x8090);
      iVar5 = *(int *)(lVar2 + 4);
      fVar4 = fVar4 * 2.3025851 * 0.05;
      _expf();
      uVar1 = 0;
      *(float *)(lVar2 + 0x2030) = fVar4 * (float)iVar5;
    }
  }
  else if (param_3 == 0xe0008) {
    uVar1 = 0;
    *(uint *)(*(long *)(param_2 + 0x8080) + 0x10) = (uint)(param_1 != 0.0);
    *(uint *)(*(long *)(param_2 + 0x8090) + 0x18) = (uint)(param_1 != 0.0);
  }
  else if (param_3 == 0xe0009) {
    uVar1 = 0;
    *(uint *)(*(long *)(param_2 + 0x8080) + 0x20) = (uint)(param_1 != 0.0);
    *(uint *)(*(long *)(param_2 + 0x8090) + 0x2034) = (uint)(param_1 != 0.0);
  }
  else if (param_3 == 0xe000a) {
    if (param_1 <= -24.0) {
      param_1 = -24.0;
    }
    fVar4 = (float)NEON_fminnm(param_1,0x41c00000);
    lVar2 = *(long *)(param_2 + 0x8080);
    *(float *)(lVar2 + 0x1c) = fVar4;
    fVar4 = (fVar4 - *(float *)(lVar2 + 0x18)) / 12.0;
    _exp2f(1);
    uVar1 = 0;
    *(float *)(*(long *)(param_2 + 0x8090) + 0x202c) = fVar4;
  }
  return uVar1;
}



/* Entry: 10ad11000; end: 10ad1128b;  */

undefined8 FUN_10ad11000(long param_1,uint param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  int iVar3;
  
  if ((param_2 >> 8 & 1) == 0) {
    if ((int)param_2 < 0xe0006) {
      if (0xe0002 < (int)param_2) {
        if (param_2 == 0xe0003) {
          fVar2 = *(float *)(*(long *)(param_1 + 0x8080) + 8);
        }
        else {
          if (param_2 != 0xe0004) {
            return 1;
          }
          fVar2 = *(float *)(*(long *)(param_1 + 0x8080) + 0xc);
        }
        goto LAB_10ad1127c;
      }
      if (param_2 == 0xe0001) {
        iVar3 = **(int **)(param_1 + 0x8080);
      }
      else {
        if (param_2 != 0xe0002) {
          return 1;
        }
        iVar3 = *(int *)(*(long *)(param_1 + 0x8080) + 4);
      }
    }
    else {
      if ((int)param_2 < 0xe0008) {
        if (param_2 == 0xe0006) {
          fVar2 = *(float *)(*(long *)(param_1 + 0x8080) + 0x18);
        }
        else {
          if (param_2 != 0xe0007) {
            return 1;
          }
          fVar2 = *(float *)(*(long *)(param_1 + 0x8080) + 0x14);
        }
        goto LAB_10ad1127c;
      }
      if (param_2 == 0xe0008) {
        iVar3 = *(int *)(*(long *)(param_1 + 0x8080) + 0x10);
      }
      else {
        if (param_2 != 0xe0009) {
          if (param_2 != 0xe000a) {
            return 1;
          }
          fVar2 = *(float *)(*(long *)(param_1 + 0x8080) + 0x1c);
          goto LAB_10ad1127c;
        }
        iVar3 = *(int *)(*(long *)(param_1 + 0x8080) + 0x20);
      }
    }
    fVar2 = (float)iVar3;
LAB_10ad1127c:
    *param_3 = fVar2;
    return 0;
  }
  uVar1 = 1;
  switch(param_2) {
  case 0xe0101:
    iVar3 = *(int *)(*(long *)(param_1 + 0x8080) + 0x28);
    goto code_r0x00010ad1109c;
  case 0xe0102:
    fVar2 = *(float *)(*(long *)(param_1 + 0x8080) + 0x38);
    break;
  case 0xe0103:
    fVar2 = *(float *)(*(long *)(param_1 + 0x8080) + 0x3c);
    break;
  case 0xe0104:
    fVar2 = *(float *)(*(long *)(param_1 + 0x8080) + 0x40);
    break;
  default:
    goto LAB_10ad110a8;
  case 0xe0106:
    fVar2 = *(float *)(*(long *)(param_1 + 0x8080) + 0x30);
    break;
  case 0xe0107:
    fVar2 = *(float *)(*(long *)(param_1 + 0x8080) + 0x2c);
    break;
  case 0xe0108:
    fVar2 = *(float *)(*(long *)(param_1 + 0x8080) + 0x34);
    break;
  case 0xe010a:
    fVar2 = *(float *)(*(long *)(param_1 + 0x8080) + 100);
    break;
  case 0xe010b:
    fVar2 = *(float *)(*(long *)(param_1 + 0x8080) + 0x4c);
    break;
  case 0xe010c:
    fVar2 = *(float *)(*(long *)(param_1 + 0x8080) + 0x50);
    break;
  case 0xe010d:
    iVar3 = *(int *)(*(long *)(param_1 + 0x8080) + 0x44);
    goto code_r0x00010ad1109c;
  case 0xe010e:
    iVar3 = *(int *)(*(long *)(param_1 + 0x8080) + 0x48);
    goto code_r0x00010ad1109c;
  case 0xe010f:
    iVar3 = *(int *)(*(long *)(param_1 + 0x8080) + 0x58);
code_r0x00010ad1109c:
    fVar2 = (float)iVar3;
    break;
  case 0xe0110:
    fVar2 = *(float *)(*(long *)(param_1 + 0x8080) + 0x54);
    break;
  case 0xe0111:
    fVar2 = *(float *)(*(long *)(param_1 + 0x8080) + 0x5c);
    break;
  case 0xe0112:
    fVar2 = *(float *)(*(long *)(param_1 + 0x8080) + 0x60);
    break;
  case 0xe0113:
    fVar2 = *(float *)(*(long *)(param_1 + 0x8088) + 0x1101c);
    break;
  case 0xe0114:
    fVar2 = *(float *)(*(long *)(param_1 + 0x8090) + 0x2028);
  }
  uVar1 = 0;
  *param_3 = fVar2;
LAB_10ad110a8:
  return uVar1;
}



/* Entry: 10ad1128c; end: 10ad11443;  */

void FUN_10ad1128c(long param_1,float *param_2,float *param_3)

{
  ulong uVar1;
  float *pfVar2;
  int *piVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  piVar3 = *(int **)(param_1 + 0x10);
  fVar8 = *param_2;
  if (*piVar3 == 0) goto LAB_10ad11428;
  fVar9 = (float)piVar3[6];
  pfVar4 = *(float **)(param_1 + 8);
  fVar10 = *pfVar4;
  fVar11 = (float)piVar3[1];
  if (piVar3[3] == 0) {
    fVar5 = pfVar4[1];
    fVar7 = 6.2831855;
    fVar6 = fVar5 + (float)piVar3[2] * 6.2831855;
    pfVar4[1] = fVar6;
    if (6.2831855 <= fVar6) {
      fVar7 = -6.2831855;
LAB_10ad11394:
      pfVar4[1] = fVar6 + fVar7;
    }
    else if (fVar6 <= -6.2831855) goto LAB_10ad11394;
    _cosf();
    fVar11 = fVar11 * (1.0 - fVar5) * 0.5;
  }
  else {
    fVar5 = pfVar4[1];
    fVar7 = 6.2831855;
    fVar6 = fVar5 + (float)piVar3[2] * 6.2831855;
    pfVar4[1] = fVar6;
    if (6.2831855 <= fVar6) {
      fVar7 = -6.2831855;
LAB_10ad11344:
      pfVar4[1] = fVar6 + fVar7;
    }
    else if (fVar6 <= -6.2831855) goto LAB_10ad11344;
    fVar5 = ABS(fVar5 / 3.1415927 + -1.0) + -0.5;
    fVar11 = (fVar5 + fVar5 + 1.0) * fVar11 * 0.5;
  }
  fVar8 = fVar8 + fVar10 * fVar9;
  fVar11 = fVar11 * 3.1415927 + -0.7853982;
  _tanf();
  pfVar4[2] = fVar11;
  uVar1 = (ulong)(uint)piVar3[7];
  if (0 < piVar3[7]) {
    pfVar2 = pfVar4 + 4;
    fVar9 = fVar8;
    do {
      fVar8 = pfVar2[-1] + fVar11 * (fVar9 - *pfVar2);
      pfVar2[-1] = fVar9;
      *pfVar2 = fVar8;
      pfVar2 = pfVar2 + 2;
      uVar1 = uVar1 - 1;
      fVar9 = fVar8;
    } while (uVar1 != 0);
  }
  *pfVar4 = fVar8;
  fVar8 = fVar8 * (float)piVar3[5] + (float)piVar3[4] * *param_2;
LAB_10ad11428:
  *param_3 = fVar8;
  return;
}



/* Entry: 10ad11444; end: 10ad11757;  */

undefined8 FUN_10ad11444(float param_1,long *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = 1;
  if (param_3 < 0x50004) {
    if (param_3 == 0x50001) {
      *(uint *)*param_2 = (uint)(param_1 != 0.0);
      *(uint *)param_2[2] = (uint)(param_1 != 0.0);
      return 0;
    }
    if (param_3 == 0x50002) {
      if (param_1 <= 1.0) {
        param_1 = 1.0;
      }
      fVar3 = (float)NEON_fminnm(param_1,0x469c4000);
      *(float *)(*param_2 + 4) = fVar3;
      *(float *)(param_2[2] + 4) = fVar3 / (float)param_4;
      return 0;
    }
    if (param_3 == 0x50003) {
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      fVar3 = (float)NEON_fminnm(param_1,0x40800000);
      *(float *)(*param_2 + 8) = fVar3;
      *(float *)(param_2[2] + 8) = fVar3 / (float)param_4;
      return 0;
    }
  }
  else if (param_3 < 0x50006) {
    if (param_3 == 0x50004) {
      uVar1 = 0;
      if (param_1 <= -99.0) {
        param_1 = -99.0;
      }
      fVar3 = (float)NEON_fminnm(param_1,0x42c60000);
      *(float *)(*param_2 + 0x14) = fVar3;
      *(float *)(param_2[2] + 0x18) = fVar3 / 100.0;
    }
    else if (param_3 == 0x50005) {
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      fVar3 = (float)NEON_fminnm(param_1,0x42c80000);
      *(float *)(*param_2 + 0x10) = fVar3;
      lVar2 = param_2[2];
      *(float *)(lVar2 + 0x10) = (100.0 - fVar3) / 100.0;
      *(float *)(lVar2 + 0x14) = fVar3 / 100.0;
      return 0;
    }
  }
  else {
    if (param_3 == 0x50006) {
      *(uint *)(*param_2 + 0xc) = (uint)(param_1 != 0.0);
      *(uint *)(param_2[2] + 0xc) = (uint)(param_1 != 0.0);
      return 0;
    }
    if (param_3 == 0x50007) {
      fVar3 = -0.5;
      if (0.0 <= param_1) {
        fVar3 = 0.5;
      }
      fVar4 = (float)(int)(param_1 + fVar3);
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      fVar4 = (float)NEON_fminnm(fVar4,0x41800000);
      if (0x7f7fffff < (uint)ABS(param_1 + fVar3)) {
        fVar4 = 0.0;
      }
      *(int *)(*param_2 + 0x18) = (int)fVar4;
      *(int *)(param_2[2] + 0x1c) = (int)fVar4;
      return 0;
    }
  }
  return uVar1;
}



/* Entry: 10ad11758; end: 10ad118d7;  */

void FUN_10ad11758(long param_1,float *param_2,float *param_3)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if (*piVar2 == 0) {
    *param_3 = *param_2;
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    uVar1 = *(uint *)(lVar3 + 0x4000);
    *(float *)(lVar3 + (long)(int)uVar1 * 4) = *param_2;
    pfVar4 = (float *)(lVar3 + 0x4004);
    fVar12 = 0.0;
    lVar5 = 3;
    do {
      fVar6 = (float)piVar2[1];
      fVar8 = pfVar4[3];
      fVar7 = (float)piVar2[2] + fVar8;
      if (1.0 <= fVar7) {
        fVar7 = fVar7 + -1.0;
      }
      if (fVar7 <= 0.0) {
        fVar7 = fVar7 + 1.0;
      }
      pfVar4[3] = fVar7;
      fVar6 = fVar6 * fVar8;
      fVar9 = *(float *)(lVar3 + (ulong)((uVar1 + 0xfff) - (int)fVar6 & 0xfff) * 4);
      fVar10 = *(float *)(lVar3 + (ulong)(((int)fVar6 - (uVar1 + 0xfff) ^ 0xffffffff) & 0xfff) * 4);
      fVar8 = *pfVar4;
      fVar11 = fVar8 + (float)piVar2[2] * 6.2831855;
      *pfVar4 = fVar11;
      fVar7 = -6.2831855;
      if ((6.2831855 <= fVar11) || (fVar7 = 6.2831855, fVar11 <= -6.2831855)) {
        *pfVar4 = fVar11 + fVar7;
      }
      _cosf();
      fVar12 = fVar12 + (1.0 - fVar8) * 0.5 *
                        (fVar10 * (fVar6 - (float)(int)fVar6) +
                        (1.0 - (fVar6 - (float)(int)fVar6)) * fVar9);
      pfVar4 = pfVar4 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    *param_3 = fVar12 * 0.6666667;
    *(uint *)(lVar3 + 0x4000) = uVar1 + 1 & 0xfff;
  }
  return;
}



/* Entry: 10ad118d8; end: 10ad1196f;  */

undefined8 FUN_10ad118d8(undefined8 *param_1,int param_2)

{
  float fVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined4 *)param_1[2];
  *puVar3 = 0;
  puVar3[1] = (uint)(float)param_2 ^ (uint)ABS((float)param_2);
  puVar3[2] = 0.0 / (float)param_2;
  *(float *)(puVar2 + 2) = 0.0;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)((long)puVar2 + 0x14) = 0x40860a9240060a92;
  lVar6 = 3;
  pfVar4 = (float *)(puVar2 + 2);
  pfVar5 = (float *)(param_1[1] + 0x4010);
  do {
    fVar7 = *pfVar4;
    pfVar5[-3] = fVar7;
    fVar7 = fVar7 / 6.2831855;
    fVar1 = 1.0 - fVar7;
    if (0.0 <= *(float *)(puVar2 + 1)) {
      fVar1 = fVar7;
    }
    *pfVar5 = fVar1;
    lVar6 = lVar6 + -1;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  } while (lVar6 != 0);
  return 0;
}



/* Entry: 10ad11970; end: 10ad11b13;  */

undefined8 FUN_10ad11970(float param_1,long *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  
  uVar1 = 1;
  if (param_3 < 0x20003) {
    if (param_3 == 0x20001) {
      uVar1 = 0;
      *(uint *)*param_2 = (uint)(param_1 != 0.0);
      *(uint *)param_2[2] = (uint)(param_1 != 0.0);
    }
    else if (param_3 == 0x20002) {
      uVar1 = 0;
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      fVar4 = (float)NEON_fminnm(param_1,0x42a00000);
      *(float *)(*param_2 + 4) = fVar4;
      *(float *)(param_2[2] + 4) = (fVar4 / 1000.0) * (float)param_4;
    }
  }
  else if (param_3 == 0x20003) {
    uVar1 = 0;
    if (param_1 <= -200.0) {
      param_1 = -200.0;
    }
    fVar4 = (float)NEON_fminnm(param_1,0x43480000);
    *(float *)(*param_2 + 8) = fVar4;
    *(float *)(param_2[2] + 8) = fVar4 / (float)param_4;
  }
  else if (param_3 == 0x20004) {
    if (param_1 <= -30.0) {
      param_1 = -30.0;
    }
    fVar4 = (float)NEON_fminnm(param_1,0x41f00000);
    lVar2 = *param_2;
    *(float *)(lVar2 + 0xc) = fVar4;
    *(undefined4 *)(lVar2 + 4) = 0x41f00000;
    lVar3 = param_2[2];
    *(float *)(lVar3 + 4) = (float)param_4 * 0.03;
    fVar4 = fVar4 / 12.0;
    _exp2f(1);
    uVar1 = 0;
    fVar4 = (1.0 - fVar4) / 0.03;
    if (fVar4 <= -200.0) {
      fVar4 = -200.0;
    }
    fVar4 = (float)NEON_fminnm(fVar4,0x43480000);
    *(float *)(lVar2 + 8) = fVar4;
    *(float *)(lVar3 + 8) = fVar4 / (float)param_4;
  }
  return uVar1;
}



/* Entry: 10ad11b14; end: 10ad11b9f;  */

undefined8 FUN_10ad11b14(long *param_1,int param_2,float *param_3)

{
  float fVar1;
  
  if (param_2 < 0x20003) {
    if (param_2 == 0x20001) {
      fVar1 = (float)*(int *)*param_1;
    }
    else {
      if (param_2 != 0x20002) {
        return 1;
      }
      fVar1 = *(float *)(*param_1 + 4);
    }
  }
  else if (param_2 == 0x20003) {
    fVar1 = *(float *)(*param_1 + 8);
  }
  else {
    if (param_2 != 0x20004) {
      return 1;
    }
    fVar1 = *(float *)(*param_1 + 0xc);
  }
  *param_3 = fVar1;
  return 0;
}



/* Entry: 10ad11ba0; end: 10ad11c83;  */

void FUN_10ad11ba0(long param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  piVar2 = *(int **)(param_1 + 0x10);
  fVar3 = *param_2;
  if (*piVar2 == 0) goto LAB_10ad11c6c;
  pfVar1 = *(float **)(param_1 + 8);
  fVar5 = *pfVar1;
  fVar4 = pfVar1[2];
  fVar6 = (fVar5 * (float)piVar2[7] + (float)piVar2[6] * fVar3 + (float)piVar2[8] * pfVar1[1]) -
          (pfVar1[3] * (float)piVar2[5] + (float)piVar2[4] * fVar4);
  *pfVar1 = fVar3;
  pfVar1[1] = fVar5;
  pfVar1[2] = fVar6;
  pfVar1[3] = fVar4;
  fVar3 = pfVar1[4];
  fVar5 = 6.2831855;
  fVar4 = fVar3 + (float)piVar2[1] * 6.2831855;
  pfVar1[4] = fVar4;
  if (6.2831855 <= fVar4) {
    fVar5 = -6.2831855;
LAB_10ad11c3c:
    pfVar1[4] = fVar4 + fVar5;
  }
  else if (fVar4 <= -6.2831855) goto LAB_10ad11c3c;
  _cosf();
  fVar3 = fVar6 * (1.0 - fVar3) * 0.5 * (float)piVar2[3] + (float)piVar2[2] * *param_2;
LAB_10ad11c6c:
  *param_3 = fVar3;
  return;
}



/* Entry: 10ad11c84; end: 10ad11d1b;  */

void FUN_10ad11c84(float param_1,long *param_2,int param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)param_3;
  fVar3 = (float)NEON_fminnm(param_1,fVar2 * 0.49);
  *(int *)(*param_2 + 8) = (int)fVar3;
  param_1 = param_1 / fVar2;
  lVar1 = param_2[2];
  ___sincosf_stret();
  fVar3 = param_1 / 1.4142135 + 1.0;
  *(float *)(lVar1 + 0x10) = (fVar2 * -2.0) / fVar3;
  fVar4 = (1.0 - fVar2) * 0.5;
  *(ulong *)(lVar1 + 0x1c) = CONCAT44(fVar4 / fVar3,(1.0 - fVar2) / fVar3);
  *(ulong *)(lVar1 + 0x14) = CONCAT44(fVar4 / fVar3,(1.0 - param_1 / 1.4142135) / fVar3);
  return;
}



/* Entry: 10ad11d1c; end: 10ad11e2f;  */

undefined8 FUN_10ad11d1c(float param_1,long *param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = 1;
  if (param_3 < 0x80003) {
    if (param_3 == 0x80001) {
      *(uint *)*param_2 = (uint)(param_1 != 0.0);
      *(uint *)param_2[2] = (uint)(param_1 != 0.0);
      return 0;
    }
    if (param_3 == 0x80002) {
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      fVar3 = (float)NEON_fminnm(param_1,0x459c4000);
      *(float *)(*param_2 + 4) = fVar3;
      *(float *)(param_2[2] + 4) = fVar3 / (float)(int)param_4;
      return 0;
    }
  }
  else if (param_3 == 0x80003) {
    FUN_10ad11c84(param_2,param_4);
    uVar1 = 0;
  }
  else if (param_3 == 0x80004) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar3 = (float)NEON_fminnm(param_1,0x42c80000);
    *(float *)(*param_2 + 0xc) = fVar3;
    lVar2 = param_2[2];
    *(float *)(lVar2 + 8) = (100.0 - fVar3) / 100.0;
    *(float *)(lVar2 + 0xc) = fVar3 / 100.0;
    return 0;
  }
  return uVar1;
}



/* Entry: 10ad11e30; end: 10ad11ec3;  */

undefined8 FUN_10ad11e30(long *param_1,int param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  
  if (param_2 < 0x80003) {
    if (param_2 != 0x80001) {
      if (param_2 != 0x80002) {
        return 1;
      }
      fVar1 = *(float *)(*param_1 + 4);
      goto LAB_10ad11eb8;
    }
    iVar2 = *(int *)*param_1;
  }
  else {
    if (param_2 != 0x80003) {
      if (param_2 != 0x80004) {
        return 1;
      }
      fVar1 = *(float *)(*param_1 + 0xc);
      goto LAB_10ad11eb8;
    }
    iVar2 = *(int *)(*param_1 + 8);
  }
  fVar1 = (float)iVar2;
LAB_10ad11eb8:
  *param_3 = fVar1;
  return 0;
}



/* Entry: 10ad11ec4; end: 10ad11fb7;  */

void FUN_10ad11ec4(long param_1,float *param_2,float *param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if (*piVar2 == 0) {
    *param_3 = *param_2;
    return;
  }
  lVar3 = *(long *)(param_1 + 8);
  iVar1 = *(int *)(lVar3 + 0x1000);
  *(float *)(lVar3 + (long)iVar1 * 4) = *param_2;
  fVar7 = (float)piVar2[1];
  fVar4 = *(float *)(lVar3 + 0x1004);
  fVar6 = 6.2831855;
  fVar5 = fVar4 + (float)piVar2[2] * 6.2831855;
  *(float *)(lVar3 + 0x1004) = fVar5;
  if (6.2831855 <= fVar5) {
    fVar6 = -6.2831855;
  }
  else if (-6.2831855 < fVar5) goto LAB_10ad11f40;
  *(float *)(lVar3 + 0x1004) = fVar5 + fVar6;
LAB_10ad11f40:
  _cosf();
  fVar7 = fVar7 * (1.0 - fVar4) * 0.5;
  *param_3 = (fVar7 - (float)(int)fVar7) *
             *(float *)(lVar3 + (ulong)(((int)fVar7 - (iVar1 + 0x3ff) ^ 0xffffffffU) & 0x3ff) * 4) +
             (1.0 - (fVar7 - (float)(int)fVar7)) *
             *(float *)(lVar3 + (ulong)((iVar1 + 0x3ff) - (int)fVar7 & 0x3ff) * 4);
  *(uint *)(lVar3 + 0x1000) = iVar1 + 1U & 0x3ff;
  return;
}



/* Entry: 10ad11fb8; end: 10ad1207f;  */

undefined8 FUN_10ad11fb8(float param_1,long *param_2,int param_3,int param_4)

{
  float fVar1;
  
  if (param_3 == 0x10003) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar1 = (float)NEON_fminnm(param_1,0x41a00000);
    *(float *)(*param_2 + 8) = fVar1;
    *(float *)(param_2[2] + 8) = fVar1 / (float)param_4;
    return 0;
  }
  if (param_3 != 0x10002) {
    if (param_3 == 0x10001) {
      *(uint *)*param_2 = (uint)(param_1 != 0.0);
      *(uint *)param_2[2] = (uint)(param_1 != 0.0);
      return 0;
    }
    return 1;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  fVar1 = (float)NEON_fminnm(param_1,0x41200000);
  *(float *)(*param_2 + 4) = fVar1;
  *(float *)(param_2[2] + 4) = (fVar1 / 1000.0) * (float)param_4;
  return 0;
}



/* Entry: 10ad12080; end: 10ad12213;  */

undefined8 * FUN_10ad12080(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  
  *(undefined4 *)((long)param_1 + 0x2064) = 0;
  *(undefined8 *)((long)param_1 + 0x2074) = 0;
  *(undefined8 *)((long)param_1 + 0x206c) = 0;
  *(undefined4 *)((long)param_1 + 0x207c) = 0;
  *(undefined8 *)((long)param_1 + 0x208c) = 0;
  *(undefined8 *)((long)param_1 + 0x2084) = 0;
  *(undefined4 *)((long)param_1 + 0x2094) = 0;
  *(undefined8 *)((long)param_1 + 0x20a4) = 0;
  *(undefined8 *)((long)param_1 + 0x209c) = 0;
  *(undefined8 *)((long)param_1 + 0x20b4) = 0;
  *(undefined8 *)((long)param_1 + 0x20ac) = 0;
  param_1[0x418] = 0;
  param_1[0x417] = 0;
  *(undefined4 *)((long)param_1 + 0x100cc) = 0;
  *(undefined4 *)(param_1 + 0x241b) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  puVar2 = param_1 + 0x241e;
  lVar3 = 0x701c;
  *(undefined4 *)(param_1 + 0xc) = 0;
  do {
    *puVar2 = 0;
    *(undefined4 *)((long)puVar2 + -4) = 0;
    puVar2 = (undefined8 *)((long)puVar2 + 0x1c);
    lVar3 = lVar3 + -0x1c;
  } while (lVar3 != 0);
  param_1[0x3420] = 0;
  FUN_10ad09c3c(param_1 + 0x3424);
  *(int *)(param_1 + 0x342f) = (int)param_2;
  _bzero(param_1,0x1a11c);
  param_1[0x342d] = (long)param_1 + 0x20cc;
  param_1[0x342e] = (long)param_1 + 0x3c;
  param_1[0x342c] = param_1;
  FUN_10ad0ef10(param_1 + 0x3424,param_2);
  FUN_10ad0f0bc(param_1 + 0x3424,0xf0001,*(undefined4 *)(param_1 + 0x342f));
  FUN_10ad0f0bc(param_1 + 0x3424,0xf0002,*(undefined4 *)(param_1 + 0x342f));
  uVar4 = 4;
  do {
    if (*(int *)(param_1 + 0x342f) <=
        (int)(0xac44U >>
             (ulong)((uint)LZCOUNT(((uVar4 & 0x55555555) >> 1 |
                                   ((uVar4 & 0xaaaaaaaa) >> 1 | (uVar4 & 0x11111111) << 1) << 2) <<
                                   0x1c) & 0x1f))) {
      FUN_10ad0f0bc(param_1 + 0x3424,0xf0011);
    }
    bVar1 = 1 < uVar4;
    uVar4 = uVar4 >> 1;
  } while (bVar1);
  return param_1;
}



/* Entry: 10ad12214; end: 10ad122f7;  */

undefined * FUN_10ad12214(undefined *param_1,long *param_2,float *param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  iVar4 = (int)*param_3;
  if ((ulong)param_2[1] < (ulong)(long)iVar4) {
    FUN_10a00946c(&UNK_10f6a449c);
  }
  else if ((ulong)(long)iVar4 <= (ulong)param_4[1]) {
    puVar3 = param_1;
    if (0 < iVar4) {
      lVar6 = 0;
      uVar7 = 0;
      do {
        if (((ulong)param_2[1] <= uVar7) || ((ulong)param_4[1] <= uVar7)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad122e0);
          (*pcVar1)();
        }
        puVar3 = param_1 + 0x1a120;
        FUN_10ad0e848(puVar3,*param_2 + lVar6,*param_4 + lVar6);
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 4;
      } while ((long)iVar4 * 4 - lVar6 != 0);
    }
    return puVar3;
  }
  puVar3 = &UNK_10f6a44dc;
  FUN_10a00946c();
  FUN_10ad09c3c(puVar3 + 0x15260);
  FUN_10ad09c3c(puVar3 + 0x152a0);
  *(int *)(puVar3 + 0x1d2f8) = (int)param_2;
  _bzero(puVar3,0x1525c);
  *(undefined **)(puVar3 + 0x1d2e0) = puVar3;
  *(undefined **)(puVar3 + 0x1d2f0) = puVar3 + 0x68;
  *(undefined **)(puVar3 + 0x1d2e8) = puVar3 + 0x41d0;
  FUN_10ad10668(puVar3 + 0x15260,param_2);
  FUN_10ad10d1c(0x3f800000,puVar3 + 0x15260,0xe0001);
  uVar5 = 4;
  do {
    if (*(int *)(puVar3 + 0x1d2f8) <=
        (int)(0xac44U >>
             (ulong)((uint)LZCOUNT(((uVar5 & 0x55555555) >> 1 |
                                   ((uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x11111111) << 1) << 2) <<
                                   0x1c) & 0x1f))) {
      FUN_10ad10d1c((float)*(int *)(*(long *)(puVar3 + 0x1d2e0) + 4) / (float)uVar5,puVar3 + 0x15260
                    ,0xe0002);
    }
    bVar2 = 1 < uVar5;
    uVar5 = uVar5 >> 1;
  } while (bVar2);
  return puVar3;
}



/* Entry: 10ad122f8; end: 10ad1241b;  */

long FUN_10ad122f8(long param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  
  FUN_10ad09c3c(param_1 + 0x15260);
  FUN_10ad09c3c(param_1 + 0x152a0);
  *(int *)(param_1 + 0x1d2f8) = (int)param_2;
  _bzero(param_1,0x1525c);
  *(long *)(param_1 + 0x1d2e0) = param_1;
  *(long *)(param_1 + 0x1d2f0) = param_1 + 0x68;
  *(long *)(param_1 + 0x1d2e8) = param_1 + 0x41d0;
  FUN_10ad10668(param_1 + 0x15260,param_2);
  FUN_10ad10d1c(0x3f800000,param_1 + 0x15260,0xe0001);
  uVar2 = 4;
  do {
    if (*(int *)(param_1 + 0x1d2f8) <=
        (int)(0xac44U >>
             (ulong)((uint)LZCOUNT(((uVar2 & 0x55555555) >> 1 |
                                   ((uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x11111111) << 1) << 2) <<
                                   0x1c) & 0x1f))) {
      FUN_10ad10d1c((float)*(int *)(*(long *)(param_1 + 0x1d2e0) + 4) / (float)uVar2,
                    param_1 + 0x15260,0xe0002);
    }
    bVar1 = 1 < uVar2;
    uVar2 = uVar2 >> 1;
  } while (bVar1);
  return param_1;
}



/* Entry: 10ad1241c; end: 10ad124ff;  */

undefined8 * FUN_10ad1241c(undefined8 *param_1,long *param_2,float *param_3,long *param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  iVar3 = (int)*param_3;
  if ((ulong)param_2[1] < (ulong)(long)iVar3) {
    FUN_10a00946c(&UNK_10f6a4509);
  }
  else if ((ulong)(long)iVar3 <= (ulong)param_4[1]) {
    puVar2 = param_1;
    if (0 < iVar3) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        if (((ulong)param_2[1] <= uVar5) || ((ulong)param_4[1] <= uVar5)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad124e8);
          (*pcVar1)();
        }
        puVar2 = param_1 + 0x2a4c;
        FUN_10ad0f8ec(puVar2,*param_2 + lVar4,*param_4 + lVar4);
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 4;
      } while ((long)iVar3 * 4 - lVar4 != 0);
    }
    return puVar2;
  }
  puVar2 = (undefined8 *)&UNK_10f6a4547;
  FUN_10a00946c();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = param_3;
  func_0x00010742a308();
  return puVar2;
}



/* Entry: 10ad12500; end: 10ad1254f;  */

undefined8 * FUN_10ad12500(undefined8 *param_1,undefined8 param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = param_3;
  func_0x00010742a308(param_1,param_3 << 0xd);
  return param_1;
}



/* Entry: 10ad12550; end: 10ad1268b;  */

undefined1  [16] FUN_10ad12550(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if (param_1[3] == 1) {
    if (param_1[4] != 2) goto LAB_10ad12580;
  }
  else if ((param_1[3] != 2) || (param_1[4] != 1)) {
LAB_10ad12580:
    auVar13._8_8_ = param_3;
    auVar13._0_8_ = param_2;
    return auVar13;
  }
  uVar7 = param_1[3];
  lVar6 = param_1[4];
  uVar3 = 0;
  if (uVar7 != 0) {
    uVar3 = param_3 / uVar7;
  }
  if ((uVar7 == 2) && (lVar6 == 1)) {
    if (param_3 < 2) {
      lVar6 = 1;
    }
    else {
      uVar7 = 0;
      lVar1 = *param_1;
      lVar2 = param_1[1];
      lVar6 = 1;
      do {
        if (uVar7 == lVar2 - lVar1 >> 2) {
LAB_10ad12688:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10ad1268c);
          (*pcVar5)();
        }
        uVar11 = 0;
        *(undefined4 *)(lVar1 + uVar7 * 4) = 0;
        fVar12 = 0.0;
        bVar8 = false;
        do {
          uVar11 = uVar11 | uVar7 << 1;
          if (param_3 <= uVar11) goto LAB_10ad12688;
          fVar12 = fVar12 + *(float *)(param_2 + uVar11 * 4) * 0.5;
          *(float *)(lVar1 + uVar7 * 4) = fVar12;
          uVar11 = 1;
          bVar4 = !bVar8;
          bVar8 = true;
        } while (bVar4);
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar3);
    }
  }
  else if (uVar7 <= param_3) {
    uVar11 = 0;
    uVar7 = 0;
    do {
      if (lVar6 != 0) {
        if (param_3 <= uVar7) goto LAB_10ad12688;
        lVar1 = *param_1;
        lVar2 = param_1[1];
        uVar9 = uVar11;
        lVar10 = lVar6;
        do {
          if ((ulong)(lVar2 - lVar1 >> 2) <= uVar9) goto LAB_10ad12688;
          *(undefined4 *)(lVar1 + uVar9 * 4) = *(undefined4 *)(param_2 + uVar7 * 4);
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      uVar7 = uVar7 + 1;
      uVar11 = uVar11 + lVar6;
    } while (uVar7 < uVar3);
  }
  auVar14._0_8_ = *param_1;
  auVar14._8_8_ = lVar6 * uVar3;
  return auVar14;
}



/* Entry: 10ad1268c; end: 10ad127db;  */

void FUN_10ad1268c(long *param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _memcpy(*param_1,param_2,param_3 << 2);
  if (param_4 <= param_3) {
    uVar5 = 0;
    uVar6 = 0;
    lVar1 = *param_1;
    lVar2 = param_1[1];
    uVar3 = 0;
    if (param_4 != 0) {
      uVar3 = param_3 / param_4;
    }
    do {
      lVar7 = 0;
      uVar8 = param_4;
      uVar9 = uVar5;
      do {
        uVar10 = uVar6 + lVar7 * uVar3;
        if (((ulong)(lVar2 - lVar1 >> 2) <= uVar10) || (param_3 <= uVar9)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad12734);
          (*pcVar4)();
        }
        *(undefined4 *)(param_2 + uVar9 * 4) = *(undefined4 *)(lVar1 + uVar10 * 4);
        uVar9 = uVar9 + 1;
        lVar7 = lVar7 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      uVar6 = uVar6 + 1;
      uVar5 = uVar5 + param_4;
    } while (uVar6 < uVar3);
  }
  return;
}



/* Entry: 10ad127dc; end: 10ad12b07;  */

undefined8 * FUN_10ad127dc(undefined8 *param_1,int param_2,int param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[7] = &PTR_DAT_110ae9180;
  param_1[6] = 0x10ad12b08;
  param_1[0xe] = 0;
  iVar5 = 0;
  if (param_2 != -0x80000000) {
    iVar5 = -param_2;
  }
  if (-1 < param_2) {
    iVar5 = param_2;
  }
  iVar1 = 0;
  if (param_3 != -0x80000000) {
    iVar1 = -param_3;
  }
  if (-1 < param_3) {
    iVar1 = param_3;
  }
  func_0x000108a3becc(iVar5,iVar1);
  uVar2 = 0;
  if (iVar5 != 0) {
    uVar2 = param_3 / iVar5;
  }
  iVar1 = 0;
  if (iVar5 != 0) {
    iVar1 = param_2 / iVar5;
  }
  *(uint *)(param_1 + 0xe) = uVar2;
  *(int *)((long)param_1 + 0x74) = iVar1;
  uVar3 = 0;
  if ((long)iVar1 != 0) {
    uVar3 = (-(ulong)(uVar2 >> 0x1f) & 0xffffc00000000000 | (ulong)uVar2 << 0xe) /
            (ulong)(long)iVar1;
  }
  func_0x00010742a308(param_1 + 2,uVar3 + (long)(int)uVar2);
  *(float *)(param_1 + 0xf) = (float)*(int *)((long)param_1 + 0x74) / (float)*(int *)(param_1 + 0xe)
  ;
  if (*(char *)(param_1 + 5) == '\0') {
    if (param_4 == 0) {
      puVar11 = (undefined8 *)0x0;
      puVar13 = (undefined8 *)0x0;
      puVar14 = (undefined8 *)0x0;
    }
    else {
      puVar13 = (undefined8 *)0x0;
      puVar14 = (undefined8 *)0x0;
      puVar10 = (undefined8 *)0x0;
      lVar9 = param_4;
      do {
        if (puVar13 < puVar14) {
          *puVar13 = 0;
          puVar11 = puVar10;
        }
        else {
          lVar12 = (long)puVar13 - (long)puVar10;
          uVar3 = (lVar12 >> 3) + 1;
          if (uVar3 >> 0x3d != 0) {
            func_0x00010ad12b18();
            goto LAB_10ad12aac;
          }
          uVar7 = (long)puVar14 - (long)puVar10 >> 2;
          if (uVar7 <= uVar3) {
            uVar7 = uVar3;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)puVar14 - (long)puVar10)) {
            uVar7 = 0x1fffffffffffffff;
          }
          if (uVar7 >> 0x3d != 0) {
            func_0x000109ffded8();
            goto LAB_10ad12aac;
          }
          lVar6 = uVar7 << 3;
          __Znwm();
          puVar13 = (undefined8 *)(lVar6 + lVar12);
          puVar14 = (undefined8 *)(lVar6 + uVar7 * 8);
          puVar11 = puVar13 + -(lVar12 >> 3);
          *puVar13 = 0;
          _memcpy(puVar11,puVar10,lVar12);
          if (puVar10 != (undefined8 *)0x0) {
            __ZdlPv(puVar10);
          }
        }
        puVar13 = puVar13 + 1;
        lVar9 = lVar9 + -1;
        puVar10 = puVar11;
      } while (lVar9 != 0);
    }
    ppuVar8 = &PTR_FUN_110c6e2f0;
    pcVar4 = FUN_10ad12b40;
  }
  else {
    if (param_4 == 0) {
      puVar11 = (undefined8 *)0x0;
      puVar13 = (undefined8 *)0x0;
      puVar14 = (undefined8 *)0x0;
    }
    else {
      puVar13 = (undefined8 *)0x0;
      puVar14 = (undefined8 *)0x0;
      lVar9 = param_4;
      puVar10 = (undefined8 *)0x0;
      do {
        if (puVar13 < puVar14) {
          *puVar13 = 0;
          puVar13[1] = 0;
          puVar11 = puVar10;
        }
        else {
          lVar12 = (long)puVar13 - (long)puVar10;
          uVar3 = (lVar12 >> 4) + 1;
          if (uVar3 >> 0x3c != 0) {
            func_0x00010ad12b2c();
LAB_10ad12aac:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad12ab0);
            (*pcVar4)();
          }
          uVar7 = (long)puVar14 - (long)puVar10 >> 3;
          if (uVar7 <= uVar3) {
            uVar7 = uVar3;
          }
          if (0x7fffffffffffffef < (ulong)((long)puVar14 - (long)puVar10)) {
            uVar7 = 0xfffffffffffffff;
          }
          if (uVar7 >> 0x3c != 0) {
            func_0x000109ffded8();
            goto LAB_10ad12aac;
          }
          lVar6 = uVar7 << 4;
          __Znwm();
          puVar13 = (undefined8 *)(lVar6 + lVar12);
          puVar14 = (undefined8 *)(lVar6 + uVar7 * 0x10);
          *puVar13 = 0;
          puVar13[1] = 0;
          puVar11 = puVar13 + (lVar12 >> 4) * -2;
          _memcpy(puVar11,puVar10,lVar12);
          if (puVar10 != (undefined8 *)0x0) {
            __ZdlPv(puVar10);
          }
        }
        puVar13 = puVar13 + 2;
        lVar9 = lVar9 + -1;
        puVar10 = puVar11;
      } while (lVar9 != 0);
    }
    ppuVar8 = &PTR_FUN_110c6e308;
    pcVar4 = FUN_10ad12ca8;
  }
  param_1[6] = pcVar4;
  (**(code **)param_1[7])(param_1 + 7);
  param_1[7] = ppuVar8;
  param_1[8] = puVar11;
  param_1[9] = puVar13;
  param_1[10] = puVar14;
  param_1[0xb] = param_4;
  return param_1;
}



/* Entry: 10ad12b08; end: 10ad12b3f;  */

long FUN_10ad12b08(undefined8 param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  long lVar17;
  undefined4 *puVar18;
  long lVar19;
  long lVar20;
  float *pfVar21;
  long lVar22;
  float fVar23;
  undefined4 uVar24;
  
  func_0x000105277f8c(param_4);
  FUN_109ffde64(&DAT_10f62a4d8);
  plVar8 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (lVar2 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    lVar14 = 0;
    puVar15 = (undefined4 *)param_2[2];
    lVar20 = *param_3;
    lVar17 = param_3[2];
    puVar18 = *(undefined4 **)(param_4 + 0x10);
    lVar19 = *(long *)(param_4 + 0x28);
    lVar9 = lVar1;
    puVar6 = puVar18;
    lVar22 = lVar19;
    puVar16 = puVar15;
    do {
      for (; lVar9 != 0; lVar9 = lVar9 + -1) {
        if (lVar22 == 0) {
LAB_10ad12c4c:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad12c50);
          (*pcVar7)();
        }
        uVar24 = *puVar6;
        *puVar6 = *puVar15;
        puVar6[1] = uVar24;
        puVar6 = puVar6 + 2;
        lVar22 = lVar22 + -1;
        puVar15 = puVar15 + 1;
      }
      lVar9 = *plVar8;
      *plVar8 = lVar9 + 1;
      iVar3 = (int)plVar8[0xe];
      iVar5 = 0;
      if ((long)*(int *)((long)plVar8 + 0x74) != 0) {
        iVar5 = (int)((ulong)((lVar9 + 1) * (long)iVar3) /
                     (ulong)(long)*(int *)((long)plVar8 + 0x74));
      }
      iVar10 = (int)plVar8[1];
      if (iVar10 != iVar5) {
        pfVar11 = (float *)(lVar17 + lVar20 * 4 * lVar13);
        do {
          iVar10 = iVar10 + 1;
          if (lVar1 != 0) {
            iVar4 = 0;
            if (iVar3 != 0) {
              iVar4 = iVar10 / iVar3;
            }
            fVar23 = *(float *)(plVar8 + 0xf) * (float)(iVar10 - iVar4 * iVar3);
            lVar9 = lVar19;
            pfVar12 = (float *)(puVar18 + 1);
            pfVar21 = pfVar11;
            lVar22 = lVar1;
            do {
              if (lVar9 == 0) goto LAB_10ad12c4c;
              *pfVar21 = pfVar12[-1] + ((float)(int)fVar23 - fVar23) * (*pfVar12 - pfVar12[-1]);
              pfVar12 = pfVar12 + 2;
              lVar9 = lVar9 + -1;
              lVar22 = lVar22 + -1;
              pfVar21 = pfVar21 + 1;
            } while (lVar22 != 0);
          }
          *(int *)(plVar8 + 1) = iVar10;
          lVar13 = lVar13 + 1;
          pfVar11 = pfVar11 + lVar20;
        } while (iVar10 != iVar5);
      }
      lVar14 = lVar14 + 1;
      puVar15 = puVar16 + lVar1;
      lVar9 = lVar1;
      puVar6 = puVar18;
      lVar22 = lVar19;
      puVar16 = puVar15;
    } while (lVar14 != lVar2);
  }
  return lVar13 * lVar1;
}



/* Entry: 10ad12b40; end: 10ad12c5f;  */

long FUN_10ad12b40(long *param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  code *pcVar7;
  long lVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined4 *puVar17;
  long lVar18;
  long lVar19;
  float *pfVar20;
  long lVar21;
  float fVar22;
  undefined4 uVar23;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (lVar2 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    lVar13 = 0;
    puVar14 = (undefined4 *)param_2[2];
    lVar19 = *param_3;
    lVar16 = param_3[2];
    puVar17 = *(undefined4 **)(param_4 + 0x10);
    lVar18 = *(long *)(param_4 + 0x28);
    lVar8 = lVar1;
    puVar6 = puVar17;
    lVar21 = lVar18;
    puVar15 = puVar14;
    do {
      for (; lVar8 != 0; lVar8 = lVar8 + -1) {
        if (lVar21 == 0) {
LAB_10ad12c4c:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad12c50);
          (*pcVar7)();
        }
        uVar23 = *puVar6;
        *puVar6 = *puVar14;
        puVar6[1] = uVar23;
        puVar6 = puVar6 + 2;
        lVar21 = lVar21 + -1;
        puVar14 = puVar14 + 1;
      }
      lVar8 = *param_1;
      *param_1 = lVar8 + 1;
      iVar3 = (int)param_1[0xe];
      iVar5 = 0;
      if ((long)*(int *)((long)param_1 + 0x74) != 0) {
        iVar5 = (int)((ulong)((lVar8 + 1) * (long)iVar3) /
                     (ulong)(long)*(int *)((long)param_1 + 0x74));
      }
      iVar9 = (int)param_1[1];
      if (iVar9 != iVar5) {
        pfVar10 = (float *)(lVar16 + lVar19 * 4 * lVar12);
        do {
          iVar9 = iVar9 + 1;
          if (lVar1 != 0) {
            iVar4 = 0;
            if (iVar3 != 0) {
              iVar4 = iVar9 / iVar3;
            }
            fVar22 = *(float *)(param_1 + 0xf) * (float)(iVar9 - iVar4 * iVar3);
            lVar8 = lVar18;
            pfVar11 = (float *)(puVar17 + 1);
            pfVar20 = pfVar10;
            lVar21 = lVar1;
            do {
              if (lVar8 == 0) goto LAB_10ad12c4c;
              *pfVar20 = pfVar11[-1] + ((float)(int)fVar22 - fVar22) * (*pfVar11 - pfVar11[-1]);
              pfVar11 = pfVar11 + 2;
              lVar8 = lVar8 + -1;
              lVar21 = lVar21 + -1;
              pfVar20 = pfVar20 + 1;
            } while (lVar21 != 0);
          }
          *(int *)(param_1 + 1) = iVar9;
          lVar12 = lVar12 + 1;
          pfVar10 = pfVar10 + lVar19;
        } while (iVar9 != iVar5);
      }
      lVar13 = lVar13 + 1;
      puVar14 = puVar15 + lVar1;
      lVar8 = lVar1;
      puVar6 = puVar17;
      lVar21 = lVar18;
      puVar15 = puVar14;
    } while (lVar13 != lVar2);
  }
  return lVar12 * lVar1;
}



/* Entry: 10ad12c60; end: 10ad12ca7;  */

void FUN_10ad12c60(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}


