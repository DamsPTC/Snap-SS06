/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1092ce92c; end: 1092ceb7f;  */

undefined8 * FUN_1092ce92c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110ae9a60;
  param_1[3] = &PTR_FUN_110ae99f0;
  plVar2 = (long *)param_1[5];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  param_1[5] = 0;
  return param_1;
}



/* Entry: 1092ceb80; end: 1092cebf7;  */

void FUN_1092ceb80(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = puVar3;
  if (puVar2 != puVar3) {
    do {
      puVar2 = puVar2 + -6;
      (**(code **)*puVar2)(puVar2);
    } while (puVar2 != puVar3);
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1092cebf8; end: 1092cf31b;  */

undefined ***
FUN_1092cebf8(undefined8 param_1,ulong *param_2,byte *param_3,long *param_4,undefined4 param_5,
             undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  uint *puStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  ulong *puStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined4 uStack_3d0;
  undefined8 uStack_3cc;
  undefined8 uStack_3c4;
  undefined8 uStack_3bc;
  undefined8 uStack_3b4;
  undefined8 uStack_3ac;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 uStack_398;
  long lStack_390;
  undefined8 *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined4 uStack_370;
  undefined8 uStack_36c;
  undefined8 uStack_364;
  undefined8 uStack_35c;
  undefined8 uStack_354;
  undefined8 uStack_34c;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 uStack_338;
  long lStack_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  ulong uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  uint uStack_250;
  int iStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  long lStack_218;
  ulong uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined2 auStack_1e8 [4];
  undefined4 uStack_1e0;
  undefined8 uStack_1dc;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [8];
  int iStack_178;
  int iStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  long lStack_148;
  int *piStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  int iStack_120;
  int iStack_11c;
  undefined **ppuStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined4 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_180._0_4_ = 0x42ff0000;
  iStack_174 = 0;
  uStack_170 = 0;
  stack0xfffffffffffffe84 = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  uStack_16c = 0;
  uStack_168 = 0;
  uStack_154 = 0;
  uStack_15c = 0;
  uStack_158 = 0;
  uStack_110 = auStack_180;
  piStack_140 = &iStack_178;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_450 = 0;
  uStack_460._0_4_ = 0x1010000;
  ppuStack_118 = (undefined **)CONCAT44(ppuStack_118._4_4_,0x2010000);
  uStack_108 = 0;
  uStack_104 = 0;
  puStack_458 = param_2;
  puStack_138 = &uStack_130;
  FUN_109ac9fc8(&uStack_460,&ppuStack_118,7,0);
  uStack_110._0_4_ = 0x42ff0000;
  puStack_d0 = &uStack_108;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_110._4_4_ = 0;
  uStack_108 = 0;
  uStack_f4 = 0;
  uStack_fc = 0;
  uStack_e4 = 0;
  uStack_ec = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  puStack_c8 = &uStack_c0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  ppuStack_118 = &PTR_FUN_110aea318;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  auStack_1e8[0] = 0;
  uStack_1e0 = 0x42ff0000;
  lStack_1a0 = (long)&uStack_1dc + 4;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  uStack_1dc = 0;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  uStack_1b4 = 0;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_250 = 0x42ff0000;
  uStack_210 = (ulong)&uStack_250 | 8;
  uStack_244 = 0;
  uStack_240 = 0;
  iStack_24c = 0;
  uStack_248 = 0;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_23c = 0;
  uStack_238 = 0;
  uStack_224 = 0;
  uStack_22c = 0;
  uStack_228 = 0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  puStack_208 = &uStack_200;
  puStack_198 = &uStack_190;
  if (iStack_174 < iStack_178) {
    uStack_460 = CONCAT44(uStack_460._4_4_,0x1010000);
    puStack_458 = (ulong *)auStack_180;
    uStack_450 = 0;
    uStack_4d8 = 0x2010000;
    puStack_4d0 = &uStack_250;
    uStack_4c8 = 0;
    iStack_120 = 0;
    if (iStack_178 != 0) {
      iStack_120 = (iStack_174 * 600) / iStack_178;
    }
    iStack_11c = 600;
    FUN_109b0f718(0x4008000000000000,0,&uStack_460,&uStack_4d8,&iStack_120,1);
  }
  else {
    uStack_460 = CONCAT44(uStack_460._4_4_,0x1010000);
    puStack_458 = (ulong *)auStack_180;
    uStack_450 = 0;
    uStack_4d8 = 0x2010000;
    puStack_4d0 = &uStack_250;
    uStack_4c8 = 0;
    iStack_11c = 0;
    if (iStack_174 != 0) {
      iStack_11c = (iStack_178 * 600) / iStack_174;
    }
    iStack_120 = 600;
    FUN_109b0f718(0x4008000000000000,0,&uStack_460,&uStack_4d8,&iStack_120,1);
  }
  uStack_270 = (ulong)&uStack_2b0 | 8;
  uStack_2a8 = CONCAT44(uStack_244,uStack_248);
  uStack_2b0 = CONCAT44(iStack_24c,uStack_250);
  uStack_298 = CONCAT44(uStack_234,uStack_238);
  uStack_2a0 = CONCAT44(uStack_23c,uStack_240);
  uStack_288 = CONCAT44(uStack_224,uStack_228);
  uStack_290 = CONCAT44(uStack_22c,uStack_230);
  uStack_280 = CONCAT44(uStack_21c,uStack_220);
  lStack_278 = lStack_218;
  uStack_258 = 0;
  uStack_260 = 0;
  if (lStack_218 != 0) {
    piVar1 = (int *)(lStack_218 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_268 = &uStack_260;
  if (iStack_24c < 3) {
    uStack_260 = *puStack_208;
    uStack_258 = puStack_208[1];
  }
  else {
    uStack_2b0 = (ulong)uStack_250;
    func_0x000109a84868(&uStack_2b0,&uStack_250);
  }
  uStack_308 = param_2[1];
  uStack_310 = *param_2;
  uStack_2f8 = param_2[3];
  uStack_300 = param_2[2];
  uStack_2d0 = (ulong)&uStack_310 | 8;
  iVar6 = *(int *)((long)param_2 + 4);
  uStack_2e8 = param_2[5];
  uStack_2f0 = param_2[4];
  uStack_2d8 = param_2[7];
  uStack_2e0 = param_2[6];
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  if (param_2[7] != 0) {
    piVar1 = (int *)(param_2[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar6 = *(int *)((long)param_2 + 4);
  }
  puStack_2c8 = &uStack_2c0;
  if (iVar6 < 3) {
    uStack_2c0 = *(undefined8 *)param_2[9];
    uStack_2b8 = ((undefined8 *)param_2[9])[1];
  }
  else {
    uStack_310 = uStack_310 & 0xffffffff;
    func_0x000109a84868(&uStack_310,param_2);
  }
  puVar7 = &uStack_2b0;
  FUN_1092e3f30(&ppuStack_118,puVar7,param_3,auStack_1e8,param_4,&uStack_310,0);
  iVar6 = (int)puVar7;
  if (uStack_2d8 != 0) {
    piVar1 = (int *)(uStack_2d8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_310);
    }
  }
  uStack_2d8 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  if (0 < uStack_310._4_4_) {
    lVar8 = 0;
    do {
      *(undefined4 *)(uStack_2d0 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < uStack_310._4_4_);
  }
  if (puStack_2c8 != &uStack_2c0 && puStack_2c8 != (undefined8 *)0x0) {
    _free(puStack_2c8[-1]);
  }
  if (lStack_278 != 0) {
    piVar1 = (int *)(lStack_278 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_2b0);
    }
  }
  lStack_278 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  if (0 < uStack_2b0._4_4_) {
    lVar8 = 0;
    do {
      *(undefined4 *)(uStack_270 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < uStack_2b0._4_4_);
  }
  if (puStack_268 != &uStack_260 && puStack_268 != (undefined8 *)0x0) {
    _free(puStack_268[-1]);
  }
  if ((*param_3 & 1) == 0) {
    (**(code **)(*param_4 + 0xd0))(&uStack_4d8,param_4);
    uStack_408 = uStack_480;
    uStack_410 = uStack_488;
    uStack_3f8 = uStack_470;
    uStack_400 = uStack_478;
    uStack_460 = CONCAT44(uStack_4d4,uStack_4d8);
    puStack_458 = (ulong *)puStack_4d0;
    uStack_448 = uStack_4c0;
    uStack_450 = uStack_4c8;
    uStack_438 = uStack_4b0;
    uStack_440 = uStack_4b8;
    uStack_428 = uStack_4a0;
    uStack_430 = uStack_4a8;
    uStack_418 = uStack_490;
    uStack_420 = uStack_498;
    uStack_3f0 = uStack_468;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0x42ff0000;
    lStack_390 = (long)&uStack_3cc + 4;
    uStack_398 = 0;
    uStack_39c = 0;
    uStack_3a4 = 0;
    uStack_3a0 = 0;
    uStack_3ac = 0;
    uStack_3b4 = 0;
    uStack_3bc = 0;
    uStack_3c4 = 0;
    uStack_3cc = 0;
    puStack_388 = &uStack_380;
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0x42ff0000;
    lStack_330 = (long)&uStack_36c + 4;
    uStack_354 = 0;
    uStack_35c = 0;
    uStack_344 = 0;
    uStack_34c = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_33c = 0;
    uStack_364 = 0;
    uStack_36c = 0;
    puStack_328 = &uStack_320;
    uStack_320 = 0;
    uStack_318 = 0;
    FUN_1092ca8ac(&uStack_460,param_2,param_3,param_4,param_5,param_6);
    iVar6 = (int)param_2;
    FUN_1092cf31c(&uStack_460);
  }
  if (lStack_218 != 0) {
    piVar1 = (int *)(lStack_218 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_250);
    }
  }
  lStack_218 = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_240 = 0;
  uStack_23c = 0;
  uStack_228 = 0;
  uStack_224 = 0;
  uStack_230 = 0;
  uStack_22c = 0;
  if (0 < iStack_24c) {
    lVar8 = 0;
    do {
      *(undefined4 *)(uStack_210 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iStack_24c);
  }
  if (puStack_208 != &uStack_200 && puStack_208 != (undefined8 *)0x0) {
    _free(puStack_208[-1]);
  }
  if (lStack_1a8 != 0) {
    piVar1 = (int *)(lStack_1a8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_1e0);
    }
  }
  lStack_1a8 = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  if (0 < (int)uStack_1dc) {
    lVar8 = 0;
    do {
      *(undefined4 *)(lStack_1a0 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)uStack_1dc);
  }
  if (puStack_198 != &uStack_190 && puStack_198 != (undefined8 *)0x0) {
    _free(puStack_198[-1]);
  }
  pppuVar5 = &ppuStack_118;
  FUN_1092cf444();
  if (lStack_148 != 0) {
    piVar1 = (int *)(lStack_148 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      pppuVar5 = (undefined ***)auStack_180;
      func_0x000109a848d4();
    }
  }
  lStack_148 = 0;
  uStack_168 = 0;
  uStack_164 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  if (0 < (int)auStack_180._4_4_) {
    lVar8 = 0;
    do {
      piStack_140[lVar8] = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)auStack_180._4_4_);
  }
  if (puStack_138 != &uStack_130 && puStack_138 != (undefined8 *)0x0) {
    pppuVar5 = (undefined ***)puStack_138[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x000104bd46a0();
    FUN_1092cf31c(&uStack_460);
    func_0x00010567aa40(&uStack_250);
    func_0x00010568a9b4(auStack_1e8);
    FUN_1092cf444(&ppuStack_118);
    func_0x00010567aa40(auStack_180);
  }
  __Unwind_Resume();
  if (pppuVar5[0x25] != (undefined **)0x0) {
    piVar1 = (int *)((long)pppuVar5[0x25] + 0x14);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      func_0x000109a848d4(pppuVar5 + 0x1e);
    }
  }
  pppuVar5[0x25] = (undefined **)0x0;
  pppuVar5[0x21] = (undefined **)0x0;
  pppuVar5[0x20] = (undefined **)0x0;
  pppuVar5[0x23] = (undefined **)0x0;
  pppuVar5[0x22] = (undefined **)0x0;
  if (0 < *(int *)((long)pppuVar5 + 0xf4)) {
    lVar8 = 0;
    ppuVar10 = pppuVar5[0x26];
    do {
      *(undefined4 *)((long)ppuVar10 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)((long)pppuVar5 + 0xf4));
  }
  pppuVar9 = (undefined ***)pppuVar5[0x27];
  if (pppuVar9 != pppuVar5 + 0x28 && pppuVar9 != (undefined ***)0x0) {
    _free(pppuVar9[-1]);
  }
  if (pppuVar5[0x19] != (undefined **)0x0) {
    piVar1 = (int *)((long)pppuVar5[0x19] + 0x14);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      func_0x000109a848d4(pppuVar5 + 0x12);
    }
  }
  pppuVar5[0x19] = (undefined **)0x0;
  pppuVar5[0x15] = (undefined **)0x0;
  pppuVar5[0x14] = (undefined **)0x0;
  pppuVar5[0x17] = (undefined **)0x0;
  pppuVar5[0x16] = (undefined **)0x0;
  if (0 < *(int *)((long)pppuVar5 + 0x94)) {
    lVar8 = 0;
    ppuVar10 = pppuVar5[0x1a];
    do {
      *(undefined4 *)((long)ppuVar10 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)((long)pppuVar5 + 0x94));
  }
  pppuVar9 = (undefined ***)pppuVar5[0x1b];
  if (pppuVar9 != pppuVar5 + 0x1c && pppuVar9 != (undefined ***)0x0) {
    _free(pppuVar9[-1]);
  }
  if (pppuVar5[0xf] != (undefined **)0x0) {
    pppuVar5[0x10] = pppuVar5[0xf];
    __ZdlPv();
  }
  return pppuVar5;
}



/* Entry: 1092cf31c; end: 1092cf443;  */

long FUN_1092cf31c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x128) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x128) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xf0);
    }
  }
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (0 < *(int *)(param_1 + 0xf4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x130);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xf4));
  }
  lVar5 = *(long *)(param_1 + 0x138);
  if (lVar5 != param_1 + 0x140 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 200) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 200) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x90);
    }
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (0 < *(int *)(param_1 + 0x94)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xd0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x94));
  }
  lVar5 = *(long *)(param_1 + 0xd8);
  if (lVar5 != param_1 + 0xe0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x78);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092cf444; end: 1092cf47f;  */

undefined8 * FUN_1092cf444(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110aea318;
  if (param_1[0x10] != 0) {
    param_1[0x11] = param_1[0x10];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110aea258;
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 1092cf480; end: 1092cf4c3;  */

undefined8 * FUN_1092cf480(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110ae9b60;
  FUN_1092c9084();
  *param_1 = &PTR_FUN_110ae9b08;
  param_1[1] = param_2;
  return param_1;
}



/* Entry: 1092cf4c4; end: 1092cf4c7;  */

undefined8 * FUN_1092cf4c4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110ae9b60;
  FUN_1092c9084();
  *param_1 = &PTR_FUN_110ae9b08;
  param_1[1] = param_2;
  return param_1;
}



/* Entry: 1092cf4c8; end: 1092cf4ff;  */

void FUN_1092cf4c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae9b60;
  if (param_1[1] != 0) {
    __ZdaPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 1092cf500; end: 1092cf503;  */

void FUN_1092cf500(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae9b60;
  if (param_1[1] != 0) {
    __ZdaPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 1092cf504; end: 1092cf517;  */

void FUN_1092cf504(void)

{
  FUN_1092cf4c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092cf518; end: 1092cf533;  */

char * FUN_1092cf518(long param_1)

{
  char *pcVar1;
  
  pcVar1 = "";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}



/* Entry: 1092cf534; end: 1092cf547;  */

void FUN_1092cf534(void)

{
  FUN_1092cf4c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092cf548; end: 1092d0c87;  */

void FUN_1092cf548(long *param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 **ppuVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  undefined8 *puVar16;
  int *piVar17;
  long lVar18;
  int iVar19;
  long *plVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  long *plVar27;
  uint uVar28;
  undefined8 **ppuVar29;
  undefined8 **ppuVar30;
  undefined8 **ppuVar31;
  undefined8 **ppuStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  long *plStack_f0;
  undefined **appuStack_e8 [2];
  long *plStack_d8;
  undefined **ppuStack_d0;
  undefined4 uStack_c8;
  long *plStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined1 uStack_70;
  
  plVar7 = (long *)0x30;
  __Znwm();
  lVar14 = *param_1;
  uStack_c8 = 0;
  ppuStack_d0 = &PTR_FUN_110ae99f0;
  plVar20 = *(long **)(param_2 + 0x10);
  if (plVar20 != (long *)0x0) {
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
  }
  plStack_c0 = plVar20;
  FUN_1092cd1f8(plVar7,lVar14,&ppuStack_d0);
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  ppuStack_d0 = &PTR_FUN_110ae99f0;
  if ((plVar20 != (long *)0x0) &&
     (iVar15 = (int)plVar20[1] + -1, *(int *)(plVar20 + 1) = iVar15, iVar15 == 0)) {
    *(undefined4 *)(plVar20 + 1) = 0xdeadf001;
    (**(code **)(*plVar20 + 8))(plVar20);
  }
  plStack_c0 = (long *)0x0;
  FUN_1092d0df8(appuStack_e8,param_3);
  uVar28 = (uint)param_3;
  if ((int)uVar28 < 1) goto LAB_1092d0474;
  uVar21 = 0;
  bVar1 = true;
  iVar15 = -1;
  do {
    lVar14 = *param_1;
    FUN_1092ccc44(lVar14,uVar21 + *(int *)(lVar14 + 0x58));
    plVar27 = plVar7;
    FUN_1092cd528(plVar7,lVar14);
    plVar20 = plStack_d8;
    *(int *)(plStack_d8[2] + (long)(iVar15 + (int)((ulong)(plStack_d8[3] - plStack_d8[2]) >> 2)) * 4
            ) = (int)plVar27;
    bVar1 = (bool)((int)plVar27 == 0 & bVar1);
    uVar21 = uVar21 + 1;
    iVar15 = iVar15 + -1;
  } while (uVar28 != uVar21);
  if (bVar1) goto LAB_1092d0474;
  ppuVar8 = (undefined8 **)0x30;
  __Znwm();
  uStack_f8 = 0;
  ppuStack_100 = &PTR_FUN_110ae99f0;
  *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
  plStack_f0 = plVar20;
  FUN_1092cd1f8();
  *(int *)(ppuVar8 + 1) = *(int *)(ppuVar8 + 1) + 1;
  ppuStack_100 = &PTR_FUN_110ae99f0;
  iVar15 = (int)plVar20[1] + -1;
  *(int *)(plVar20 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar20 + 1) = 0xdeadf001;
    (**(code **)(*plVar20 + 8))(plVar20);
  }
  plStack_f0 = (long *)0x0;
  FUN_1092cca3c(&ppuStack_120,*param_1,param_3,1);
  ppuVar4 = ppuStack_120;
  *(int *)(ppuVar8 + 1) = *(int *)(ppuVar8 + 1) + 1;
  ppuVar29 = ppuVar8;
  if ((int)((ulong)(ppuStack_120[5][3] - ppuStack_120[5][2]) >> 2) <
      (int)((ulong)(ppuVar8[5][3] - ppuVar8[5][2]) >> 2)) {
    *(int *)(ppuStack_120 + 1) = *(int *)(ppuStack_120 + 1) + 1;
    *(int *)(ppuVar8 + 1) = *(int *)(ppuVar8 + 1) + 1;
    iVar15 = *(int *)(ppuStack_120 + 1);
    *(int *)(ppuStack_120 + 1) = iVar15 + -1;
    if (iVar15 + -1 == 0) {
      *(undefined4 *)(ppuStack_120 + 1) = 0xdeadf001;
      (*(code *)(*ppuStack_120)[1])(ppuStack_120);
      iVar15 = *(int *)(ppuStack_120 + 1) + 1;
    }
    *(int *)(ppuStack_120 + 1) = iVar15;
    iVar15 = *(int *)(ppuVar8 + 1);
    *(int *)(ppuVar8 + 1) = iVar15 + -1;
    ppuStack_120 = ppuVar8;
    if (iVar15 + -1 == 0) {
      *(undefined4 *)(ppuVar8 + 1) = 0xdeadf001;
      (*(code *)(*ppuVar8)[1])();
    }
    iVar15 = *(int *)(ppuVar4 + 1);
    *(int *)(ppuVar4 + 1) = iVar15 + -1;
    ppuVar29 = ppuVar4;
    if (iVar15 + -1 == 0) {
      *(undefined4 *)(ppuVar4 + 1) = 0xdeadf001;
      (*(code *)(*ppuVar4)[1])(ppuVar4);
    }
  }
  ppuVar4 = ppuStack_120;
  if (ppuStack_120 != (undefined8 **)0x0) {
    *(int *)(ppuStack_120 + 1) = *(int *)(ppuStack_120 + 1) + 1;
  }
  *(int *)(ppuVar29 + 1) = *(int *)(ppuVar29 + 1) + 1;
  func_0x0001092cc9c4(&uStack_80,*param_1);
  func_0x0001092cca00(&ppuStack_88,*param_1);
  puVar16 = ppuVar29[5];
  iVar15 = (int)((ulong)(puVar16[3] - puVar16[2]) >> 2);
  ppuVar2 = ppuVar29 + 5;
  ppuVar31 = ppuVar29;
  ppuVar5 = uStack_80;
  while (ppuVar3 = ppuVar31, uStack_80 = ppuVar5, (int)(uVar28 >> 1) < iVar15) {
    if (ppuVar4 != (undefined8 **)0x0) {
      *(int *)(ppuVar4 + 1) = *(int *)(ppuVar4 + 1) + 1;
    }
    if (ppuVar5 != (undefined8 **)0x0) {
      *(int *)(ppuVar5 + 1) = *(int *)(ppuVar5 + 1) + 1;
    }
    *(int *)(ppuVar3 + 1) = *(int *)(ppuVar3 + 1) + 1;
    if ((ppuVar4 != (undefined8 **)0x0) &&
       (iVar15 = *(int *)(ppuVar4 + 1), *(int *)(ppuVar4 + 1) = iVar15 + -1, iVar15 + -1 == 0)) {
      *(undefined4 *)(ppuVar4 + 1) = 0xdeadf001;
      (*(code *)(*ppuVar4)[1])(ppuVar4);
    }
    ppuVar31 = ppuStack_88;
    if (ppuStack_88 != (undefined8 **)0x0) {
      *(int *)(ppuStack_88 + 1) = *(int *)(ppuStack_88 + 1) + 1;
    }
    if ((uStack_80 != (undefined8 **)0x0) &&
       (iVar15 = *(int *)(uStack_80 + 1), *(int *)(uStack_80 + 1) = iVar15 + -1, iVar15 + -1 == 0))
    {
      *(undefined4 *)(uStack_80 + 1) = 0xdeadf001;
      (*(code *)(*uStack_80)[1])();
    }
    uStack_80 = ppuVar31;
    if (*(int *)(*ppuVar2)[2] == 0) {
      ___cxa_allocate_exception(0x10);
      FUN_1092d1c90();
      ___cxa_throw();
      goto LAB_1092d05d0;
    }
    if (ppuVar4 != (undefined8 **)0x0) {
      *(int *)(ppuVar4 + 1) = *(int *)(ppuVar4 + 1) + 1;
    }
    iVar15 = *(int *)(ppuVar3 + 1);
    *(int *)(ppuVar3 + 1) = iVar15 + -1;
    if (iVar15 + -1 == 0) {
      *(undefined4 *)(ppuVar3 + 1) = 0xdeadf001;
      (*(code *)(*ppuVar3)[1])(ppuVar3);
    }
    func_0x0001092cc9c4(&ppuStack_78,*param_1);
    lVar14 = *param_1;
    func_0x0001092ccd3c(lVar14,*(undefined4 *)(*ppuVar2)[2]);
    piVar17 = (int *)ppuVar4[5][2];
    uVar22 = (ulong)(ppuVar4[5][3] - (long)piVar17) >> 2;
    uVar26 = (ulong)((*ppuVar2)[3] - (*ppuVar2)[2]) >> 2;
    ppuVar31 = ppuVar4;
    ppuVar30 = ppuVar4;
    if ((int)uVar26 <= (int)uVar22) {
      do {
        ppuVar31 = ppuVar30;
        if (*piVar17 == 0) break;
        lVar9 = *param_1;
        FUN_1092ccdd4(lVar9,*piVar17,lVar14);
        ppuVar31 = ppuStack_78;
        iVar15 = (int)uVar22 - (int)uVar26;
        FUN_1092cca3c(&plStack_98,*param_1,iVar15,lVar9);
        FUN_1092cd5ec(&ppuStack_90,ppuVar31,&plStack_98);
        ppuVar31 = ppuStack_90;
        if (ppuStack_90 != (undefined8 **)0x0) {
          *(int *)(ppuStack_90 + 1) = *(int *)(ppuStack_90 + 1) + 1;
        }
        if ((ppuStack_78 != (undefined8 **)0x0) &&
           (iVar19 = *(int *)(ppuStack_78 + 1), *(int *)(ppuStack_78 + 1) = iVar19 + -1,
           iVar19 + -1 == 0)) {
          *(undefined4 *)(ppuStack_78 + 1) = 0xdeadf001;
          (*(code *)(*ppuStack_78)[1])(ppuStack_78);
        }
        ppuStack_78 = ppuVar31;
        if ((ppuStack_90 != (undefined8 **)0x0) &&
           (iVar19 = *(int *)(ppuStack_90 + 1), *(int *)(ppuStack_90 + 1) = iVar19 + -1,
           iVar19 + -1 == 0)) {
          *(undefined4 *)(ppuStack_90 + 1) = 0xdeadf001;
          (*(code *)(*ppuStack_90)[1])();
        }
        if ((plStack_98 != (long *)0x0) &&
           (iVar19 = (int)plStack_98[1] + -1, *(int *)(plStack_98 + 1) = iVar19, iVar19 == 0)) {
          *(undefined4 *)(plStack_98 + 1) = 0xdeadf001;
          (**(code **)(*plStack_98 + 8))();
        }
        FUN_1092cdfac(&plStack_a0,ppuVar3,iVar15,lVar9);
        FUN_1092cd5ec(&ppuStack_90,ppuVar30,&plStack_a0);
        ppuVar31 = ppuStack_90;
        if (ppuStack_90 != (undefined8 **)0x0) {
          *(int *)(ppuStack_90 + 1) = *(int *)(ppuStack_90 + 1) + 1;
        }
        iVar15 = *(int *)(ppuVar30 + 1);
        *(int *)(ppuVar30 + 1) = iVar15 + -1;
        if (iVar15 + -1 == 0) {
          *(undefined4 *)(ppuVar30 + 1) = 0xdeadf001;
          (*(code *)(*ppuVar30)[1])(ppuVar30);
        }
        if ((ppuStack_90 != (undefined8 **)0x0) &&
           (iVar15 = *(int *)(ppuStack_90 + 1), *(int *)(ppuStack_90 + 1) = iVar15 + -1,
           iVar15 + -1 == 0)) {
          *(undefined4 *)(ppuStack_90 + 1) = 0xdeadf001;
          (*(code *)(*ppuStack_90)[1])();
        }
        if ((plStack_a0 != (long *)0x0) &&
           (iVar15 = (int)plStack_a0[1] + -1, *(int *)(plStack_a0 + 1) = iVar15, iVar15 == 0)) {
          *(undefined4 *)(plStack_a0 + 1) = 0xdeadf001;
          (**(code **)(*plStack_a0 + 8))();
        }
        piVar17 = (int *)ppuVar31[5][2];
        uVar22 = (ulong)(ppuVar31[5][3] - (long)piVar17) >> 2;
        uVar26 = (ulong)((*ppuVar2)[3] - (*ppuVar2)[2]) >> 2;
        ppuVar30 = ppuVar31;
      } while ((int)uVar26 <= (int)uVar22);
    }
    if (uStack_80 != (undefined8 **)0x0) {
      *(int *)(uStack_80 + 1) = *(int *)(uStack_80 + 1) + 1;
    }
    ppuStack_b0 = uStack_80;
    FUN_1092cd9dc(&plStack_a8,ppuStack_78,&ppuStack_b0);
    if (ppuVar5 != (undefined8 **)0x0) {
      *(int *)(ppuVar5 + 1) = *(int *)(ppuVar5 + 1) + 1;
    }
    ppuStack_b8 = ppuVar5;
    FUN_1092cd5ec(&ppuStack_90,plStack_a8,&ppuStack_b8);
    ppuVar30 = ppuStack_90;
    if (ppuStack_90 != (undefined8 **)0x0) {
      *(int *)(ppuStack_90 + 1) = *(int *)(ppuStack_90 + 1) + 1;
    }
    if ((ppuStack_88 != (undefined8 **)0x0) &&
       (iVar15 = *(int *)(ppuStack_88 + 1), *(int *)(ppuStack_88 + 1) = iVar15 + -1,
       iVar15 + -1 == 0)) {
      *(undefined4 *)(ppuStack_88 + 1) = 0xdeadf001;
      (*(code *)(*ppuStack_88)[1])(ppuStack_88);
    }
    ppuStack_88 = ppuVar30;
    if ((ppuStack_90 != (undefined8 **)0x0) &&
       (iVar15 = *(int *)(ppuStack_90 + 1), *(int *)(ppuStack_90 + 1) = iVar15 + -1,
       iVar15 + -1 == 0)) {
      *(undefined4 *)(ppuStack_90 + 1) = 0xdeadf001;
      (*(code *)(*ppuStack_90)[1])();
    }
    if ((ppuStack_b8 != (undefined8 **)0x0) &&
       (iVar15 = *(int *)(ppuStack_b8 + 1), *(int *)(ppuStack_b8 + 1) = iVar15 + -1,
       iVar15 + -1 == 0)) {
      *(undefined4 *)(ppuStack_b8 + 1) = 0xdeadf001;
      (*(code *)(*ppuStack_b8)[1])();
    }
    if ((plStack_a8 != (long *)0x0) &&
       (iVar15 = (int)plStack_a8[1] + -1, *(int *)(plStack_a8 + 1) = iVar15, iVar15 == 0)) {
      *(undefined4 *)(plStack_a8 + 1) = 0xdeadf001;
      (**(code **)(*plStack_a8 + 8))();
    }
    if ((ppuStack_b0 != (undefined8 **)0x0) &&
       (iVar15 = *(int *)(ppuStack_b0 + 1), *(int *)(ppuStack_b0 + 1) = iVar15 + -1,
       iVar15 + -1 == 0)) {
      *(undefined4 *)(ppuStack_b0 + 1) = 0xdeadf001;
      (*(code *)(*ppuStack_b0)[1])();
    }
    ppuVar30 = ppuVar31 + 5;
    if ((int)((ulong)((*ppuVar2)[3] - (*ppuVar2)[2]) >> 2) <=
        (int)((ulong)((*ppuVar30)[3] - (*ppuVar30)[2]) >> 2)) {
      puVar16 = (undefined8 *)0x10;
      ___cxa_allocate_exception();
      FUN_1092d0d3c();
      *puVar16 = &PTR_FUN_110ae9bb8;
      ___cxa_throw();
      goto LAB_1092d05d0;
    }
    if ((ppuStack_78 != (undefined8 **)0x0) &&
       (iVar15 = *(int *)(ppuStack_78 + 1), *(int *)(ppuStack_78 + 1) = iVar15 + -1,
       iVar15 + -1 == 0)) {
      *(undefined4 *)(ppuStack_78 + 1) = 0xdeadf001;
      (*(code *)(*ppuStack_78)[1])();
    }
    if ((ppuVar5 != (undefined8 **)0x0) &&
       (iVar15 = *(int *)(ppuVar5 + 1), *(int *)(ppuVar5 + 1) = iVar15 + -1, iVar15 + -1 == 0)) {
      *(undefined4 *)(ppuVar5 + 1) = 0xdeadf001;
      (*(code *)(*ppuVar5)[1])(ppuVar5);
    }
    if ((ppuVar4 != (undefined8 **)0x0) &&
       (iVar15 = *(int *)(ppuVar4 + 1), *(int *)(ppuVar4 + 1) = iVar15 + -1, iVar15 + -1 == 0)) {
      *(undefined4 *)(ppuVar4 + 1) = 0xdeadf001;
      (*(code *)(*ppuVar4)[1])(ppuVar4);
    }
    ppuVar2 = ppuVar30;
    ppuVar4 = ppuVar3;
    ppuVar5 = uStack_80;
    iVar15 = (int)((ulong)((*ppuVar30)[3] - (*ppuVar30)[2]) >> 2);
  }
  lVar14 = ppuStack_88[5][2];
  if (*(int *)(lVar14 + ((ppuStack_88[5][3] - lVar14) * 0x40000000 + -0x100000000 >> 0x20) * 4) == 0
     ) {
    ___cxa_allocate_exception(0x10);
    FUN_1092d1c90();
    ___cxa_throw();
LAB_1092d05d0:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1092d05d4);
    (*pcVar6)();
  }
  lVar14 = *param_1;
  func_0x0001092ccd3c(lVar14);
  FUN_1092cdd74(&ppuStack_90,ppuStack_88,lVar14);
  FUN_1092cdd74(&plStack_a8,ppuVar3,lVar14);
  puStack_118 = (undefined8 *)0x0;
  puStack_110 = (undefined8 *)0x0;
  puStack_108 = (undefined8 *)0x0;
  ppuStack_78 = &puStack_118;
  uStack_70 = 0;
  puVar16 = (undefined8 *)0x10;
  __Znwm();
  puStack_110 = puVar16 + 2;
  *puVar16 = 0;
  puVar16[1] = 0;
  puStack_118 = puVar16;
  puStack_108 = puStack_110;
  func_0x0001092cd040();
  func_0x0001092cd040(puStack_118 + 1,plStack_a8);
  if ((plStack_a8 != (long *)0x0) &&
     (iVar15 = (int)plStack_a8[1] + -1, *(int *)(plStack_a8 + 1) = iVar15, iVar15 == 0)) {
    *(undefined4 *)(plStack_a8 + 1) = 0xdeadf001;
    (**(code **)(*plStack_a8 + 8))();
  }
  if ((ppuStack_90 != (undefined8 **)0x0) &&
     (iVar15 = *(int *)(ppuStack_90 + 1), *(int *)(ppuStack_90 + 1) = iVar15 + -1, iVar15 + -1 == 0)
     ) {
    *(undefined4 *)(ppuStack_90 + 1) = 0xdeadf001;
    (*(code *)(*ppuStack_90)[1])();
  }
  if ((ppuStack_88 != (undefined8 **)0x0) &&
     (iVar15 = *(int *)(ppuStack_88 + 1), *(int *)(ppuStack_88 + 1) = iVar15 + -1, iVar15 + -1 == 0)
     ) {
    *(undefined4 *)(ppuStack_88 + 1) = 0xdeadf001;
    (*(code *)(*ppuStack_88)[1])();
  }
  if ((uStack_80 != (undefined8 **)0x0) &&
     (iVar15 = *(int *)(uStack_80 + 1), *(int *)(uStack_80 + 1) = iVar15 + -1, iVar15 + -1 == 0)) {
    *(undefined4 *)(uStack_80 + 1) = 0xdeadf001;
    (*(code *)(*uStack_80)[1])();
  }
  iVar15 = *(int *)(ppuVar3 + 1);
  *(int *)(ppuVar3 + 1) = iVar15 + -1;
  if (iVar15 + -1 == 0) {
    *(undefined4 *)(ppuVar3 + 1) = 0xdeadf001;
    (*(code *)(*ppuVar3)[1])(ppuVar3);
  }
  if ((ppuVar4 != (undefined8 **)0x0) &&
     (iVar15 = *(int *)(ppuVar4 + 1), *(int *)(ppuVar4 + 1) = iVar15 + -1, iVar15 + -1 == 0)) {
    *(undefined4 *)(ppuVar4 + 1) = 0xdeadf001;
    (*(code *)(*ppuVar4)[1])(ppuVar4);
  }
  iVar15 = *(int *)(ppuVar29 + 1);
  *(int *)(ppuVar29 + 1) = iVar15 + -1;
  if (iVar15 + -1 == 0) {
    *(undefined4 *)(ppuVar29 + 1) = 0xdeadf001;
    (*(code *)(*ppuVar29)[1])();
  }
  if ((ppuStack_120 != (undefined8 **)0x0) &&
     (iVar15 = *(int *)(ppuStack_120 + 1), *(int *)(ppuStack_120 + 1) = iVar15 + -1,
     iVar15 + -1 == 0)) {
    *(undefined4 *)(ppuStack_120 + 1) = 0xdeadf001;
    (*(code *)(*ppuStack_120)[1])();
  }
  plVar20 = (long *)*puStack_118;
  if (plVar20 != (long *)0x0) {
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
  }
  plVar27 = (long *)puStack_118[1];
  if (plVar27 != (long *)0x0) {
    *(int *)(plVar27 + 1) = (int)plVar27[1] + 1;
  }
  if (plVar20 != (long *)0x0) {
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
  }
  lVar14 = *(long *)(plVar20[5] + 0x10);
  lVar9 = *(long *)(plVar20[5] + 0x18);
  plVar10 = (long *)0x28;
  __Znwm();
  iVar19 = (int)((ulong)(lVar9 - lVar14) >> 2);
  iVar15 = iVar19 + -1;
  *(undefined4 *)(plVar10 + 1) = 0;
  *plVar10 = (long)&PTR_DAT_110ae9a28;
  if (iVar15 == 1) {
    uStack_80 = (undefined8 **)((ulong)uStack_80._4_4_ << 0x20);
    FUN_1092cd11c(plVar10 + 2,1,&uStack_80);
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    lVar14 = *(long *)(plVar20[5] + 0x10);
    *(undefined4 *)plVar10[2] =
         *(undefined4 *)
          (lVar14 + ((*(long *)(plVar20[5] + 0x18) - lVar14) * 0x40000000 + -0x200000000 >> 0x20) *
                    4);
LAB_1092d0144:
    iVar15 = (int)plVar20[1] + -1;
    *(int *)(plVar20 + 1) = iVar15;
    if (iVar15 == 0) {
      *(undefined4 *)(plVar20 + 1) = 0xdeadf001;
      (**(code **)(*plVar20 + 8))(plVar20);
    }
  }
  else {
    uStack_80 = (undefined8 **)((ulong)uStack_80._4_4_ << 0x20);
    FUN_1092cd11c(plVar10 + 2,(long)iVar15,&uStack_80);
    iVar25 = 0;
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    if ((1 < *(int *)(*param_1 + 0x50)) && (1 < iVar19)) {
      iVar25 = 0;
      iVar19 = 1;
      do {
        plVar11 = plVar20;
        FUN_1092cd528(plVar20,iVar19);
        if ((int)plVar11 == 0) {
          lVar14 = *param_1;
          func_0x0001092ccd3c(lVar14,iVar19);
          *(int *)(plVar10[2] + (long)iVar25 * 4) = (int)lVar14;
          iVar25 = iVar25 + 1;
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < *(int *)(*param_1 + 0x50) && iVar25 < iVar15);
    }
    if (iVar25 != iVar15) {
      ___cxa_allocate_exception(0x10);
      FUN_1092d1c90();
      ___cxa_throw();
      goto LAB_1092d05d0;
    }
    if (plVar20 != (long *)0x0) goto LAB_1092d0144;
  }
  if (plVar27 != (long *)0x0) {
    *(int *)(plVar27 + 1) = (int)plVar27[1] + 1;
  }
  *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
  lVar14 = plVar10[2];
  lVar9 = plVar10[3];
  plVar11 = (long *)0x28;
  __Znwm();
  uVar22 = lVar9 - lVar14;
  *(undefined4 *)(plVar11 + 1) = 0;
  *plVar11 = (long)&PTR_DAT_110ae9a28;
  uStack_80 = (undefined8 **)((ulong)uStack_80 & 0xffffffff00000000);
  FUN_1092cd11c(plVar11 + 2,(long)(uVar22 * 0x40000000) >> 0x20,&uStack_80);
  *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
  if (0 < (int)(uVar22 >> 2)) {
    uVar26 = 0;
    uVar22 = uVar22 >> 2 & 0x7fffffff;
    do {
      lVar9 = *param_1;
      func_0x0001092ccd3c(lVar9,*(undefined4 *)(plVar10[2] + uVar26 * 4));
      uVar23 = 0;
      lVar14 = 1;
      do {
        lVar18 = lVar14;
        if (uVar26 != uVar23) {
          lVar12 = *param_1;
          FUN_1092ccdd4(lVar12,*(undefined4 *)(plVar10[2] + uVar23 * 4),lVar9);
          lVar18 = *param_1;
          FUN_1092ccdd4(lVar18,lVar14,(uint)lVar12 ^ 1);
        }
        uVar23 = uVar23 + 1;
        lVar14 = lVar18;
      } while (uVar22 != uVar23);
      lVar12 = *param_1;
      plVar13 = plVar27;
      FUN_1092cd528(plVar27,lVar9);
      lVar14 = *param_1;
      func_0x0001092ccd3c(lVar14,lVar18);
      FUN_1092ccdd4(lVar12,plVar13,lVar14);
      *(int *)(plVar11[2] + uVar26 * 4) = (int)lVar12;
      lVar14 = *param_1;
      if (*(int *)(lVar14 + 0x58) != 0) {
        FUN_1092ccdd4(lVar14,lVar12,lVar9);
        *(int *)(plVar11[2] + uVar26 * 4) = (int)lVar14;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar22);
  }
  iVar15 = (int)plVar10[1] + -1;
  *(int *)(plVar10 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
    (**(code **)(*plVar10 + 8))(plVar10);
  }
  if ((plVar27 != (long *)0x0) &&
     (iVar15 = (int)plVar27[1] + -1, *(int *)(plVar27 + 1) = iVar15, iVar15 == 0)) {
    *(undefined4 *)(plVar27 + 1) = 0xdeadf001;
    (**(code **)(*plVar27 + 8))(plVar27);
  }
  lVar14 = plVar10[2];
  if (0 < (int)((ulong)(plVar10[3] - lVar14) >> 2)) {
    lVar9 = 0;
    lVar18 = *(long *)(param_2 + 0x10);
    lVar12 = *(long *)(lVar18 + 0x10);
    do {
      lVar24 = *(long *)(lVar18 + 0x18);
      lVar18 = *param_1;
      func_0x0001092cccb4(lVar18,*(undefined4 *)(lVar14 + lVar9 * 4));
      uVar28 = (int)((ulong)(lVar24 - lVar12) >> 2) + ~(uint)lVar18;
      if ((int)uVar28 < 0) {
        ___cxa_allocate_exception(0x10);
        FUN_1092d1c90();
        ___cxa_throw();
        goto LAB_1092d05d0;
      }
      lVar18 = *(long *)(param_2 + 0x10);
      lVar12 = *(long *)(lVar18 + 0x10);
      *(uint *)(lVar12 + (ulong)uVar28 * 4) =
           *(uint *)(plVar11[2] + lVar9 * 4) ^ *(uint *)(lVar12 + (ulong)uVar28 * 4);
      lVar9 = lVar9 + 1;
      lVar14 = plVar10[2];
    } while (lVar9 < (int)((ulong)(plVar10[3] - lVar14) >> 2));
  }
  iVar15 = (int)plVar11[1] + -1;
  *(int *)(plVar11 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
    (**(code **)(*plVar11 + 8))(plVar11);
  }
  iVar15 = (int)plVar10[1] + -1;
  *(int *)(plVar10 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
    (**(code **)(*plVar10 + 8))(plVar10);
  }
  if ((plVar27 != (long *)0x0) &&
     (iVar15 = (int)plVar27[1] + -1, *(int *)(plVar27 + 1) = iVar15, iVar15 == 0)) {
    *(undefined4 *)(plVar27 + 1) = 0xdeadf001;
    (**(code **)(*plVar27 + 8))(plVar27);
  }
  if ((plVar20 != (long *)0x0) &&
     (iVar15 = (int)plVar20[1] + -1, *(int *)(plVar20 + 1) = iVar15, iVar15 == 0)) {
    *(undefined4 *)(plVar20 + 1) = 0xdeadf001;
    (**(code **)(*plVar20 + 8))(plVar20);
  }
  ppuStack_78 = &puStack_118;
  FUN_1092d0c8c(&ppuStack_78);
  iVar15 = *(int *)(ppuVar8 + 1);
  *(int *)(ppuVar8 + 1) = iVar15 + -1;
  if (iVar15 + -1 == 0) {
    *(undefined4 *)(ppuVar8 + 1) = 0xdeadf001;
    (*(code *)(*ppuVar8)[1])();
  }
LAB_1092d0474:
  appuStack_e8[0] = &PTR_FUN_110ae99f0;
  if ((plStack_d8 != (long *)0x0) &&
     (iVar15 = (int)plStack_d8[1] + -1, *(int *)(plStack_d8 + 1) = iVar15, iVar15 == 0)) {
    *(undefined4 *)(plStack_d8 + 1) = 0xdeadf001;
    (**(code **)(*plStack_d8 + 8))();
  }
  iVar15 = (int)plVar7[1] + -1;
  *(int *)(plVar7 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar7 + 1) = 0xdeadf001;
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  return;
}



/* Entry: 1092d0c88; end: 1092d0c8b;  */

void FUN_1092d0c88(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae9b60;
  if (param_1[1] != 0) {
    __ZdaPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 1092d0c8c; end: 1092d0ccb;  */

void FUN_1092d0c8c(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_1092d0ccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1092d0ccc; end: 1092d0d3b;  */

void FUN_1092d0ccc(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  while (plVar3 != param_2) {
    plVar3 = plVar3 + -1;
    plVar2 = (long *)*plVar3;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1092d0d3c; end: 1092d0d83;  */

undefined8 * FUN_1092d0d3c(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = &PTR_DAT_110ae9b60;
  puVar1 = &UNK_10f5643f0;
  FUN_1092c9084();
  *param_1 = &PTR_FUN_110ae9be0;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 1092d0d84; end: 1092d0d97;  */

void FUN_1092d0d84(void)

{
  FUN_1092cf4c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092d0d98; end: 1092d0d9b;  */

void FUN_1092d0d98(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae9b60;
  if (param_1[1] != 0) {
    __ZdaPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 1092d0d9c; end: 1092d0dc3;  */

void FUN_1092d0d9c(void)

{
  FUN_1092cf4c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092d0dc4; end: 1092d0df7;  */

undefined1  [16] FUN_1092d0dc4(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uStack_54;
  
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000104c4f740();
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110ae99f0;
  param_1[2] = 0;
  puVar3 = (undefined8 *)0x28;
  __Znwm();
  *(undefined4 *)(puVar3 + 1) = 0;
  *puVar3 = &PTR_DAT_110ae9a28;
  lVar2 = (long)(int)param_2;
  uStack_54 = 0;
  FUN_1092cd11c(puVar3 + 2,lVar2,&uStack_54);
  *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
  plVar4 = (long *)param_1[2];
  if ((plVar4 != (long *)0x0) &&
     (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))();
  }
  param_1[2] = puVar3;
  auVar6._8_8_ = lVar2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 1092d0df8; end: 1092d0ebf;  */

undefined8 * FUN_1092d0df8(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined4 uStack_34;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110ae99f0;
  param_1[2] = 0;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = &PTR_DAT_110ae9a28;
  uStack_34 = 0;
  FUN_1092cd11c(puVar2 + 2,(long)param_2,&uStack_34);
  *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
  plVar3 = (long *)param_1[2];
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))();
  }
  param_1[2] = puVar2;
  return param_1;
}



/* Entry: 1092d0ec0; end: 1092d117b;  */

undefined8 * FUN_1092d0ec0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 auStack_88 [16];
  long *plStack_78;
  long **pplStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  *param_1 = 0;
  func_0x0001092ccfdc(param_1,*param_2);
  plVar6 = param_1 + 1;
  *plVar6 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  plStack_60 = (long *)0x0;
  plStack_58 = (long *)0x0;
  pplStack_70 = &plStack_68;
  plStack_68 = (long *)0x0;
  FUN_1092d0c8c(&pplStack_70);
  pplStack_70 = (long **)CONCAT44(pplStack_70._4_4_,1);
  plVar5 = (long *)0x30;
  __Znwm();
  uVar9 = *param_1;
  FUN_1092d1b54(auStack_88,&pplStack_70,1);
  FUN_1092cd1f8(plVar5,uVar9,auStack_88);
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 < (undefined8 *)param_1[3]) {
    puVar11 = puVar2 + 1;
    *puVar2 = 0;
    func_0x0001092cd040(puVar2,plVar5);
  }
  else {
    lVar10 = (long)puVar2 - *plVar6;
    uVar1 = (lVar10 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      func_0x0001092d0db0();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1092d109c);
      (*pcVar4)();
    }
    uVar7 = (long)param_1[3] - *plVar6;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    plStack_48 = plVar6;
    if (uVar8 == 0) {
      plStack_68 = (long *)0x0;
    }
    else {
      FUN_1092d0dc4();
      plStack_68 = plVar6;
    }
    puVar2 = (undefined8 *)((long)plStack_68 + lVar10);
    plVar6 = plStack_68 + uVar8;
    puVar11 = puVar2 + 1;
    *puVar2 = 0;
    plStack_60 = puVar2;
    plStack_50 = plVar6;
    func_0x0001092cd040(puVar2,plVar5);
    lVar10 = (long)puVar2 + (param_1[1] - param_1[2]);
    plStack_58 = puVar11;
    FUN_1092d1a44(param_1[1],param_1[2],lVar10);
    plStack_68 = (long *)param_1[1];
    param_1[1] = lVar10;
    param_1[2] = puVar11;
    plStack_50 = (long *)param_1[3];
    param_1[3] = plVar6;
    plStack_60 = plStack_68;
    plStack_58 = plStack_68;
    func_0x0001092d1ad4(&plStack_68);
  }
  param_1[2] = puVar11;
  iVar3 = (int)plVar5[1] + -1;
  *(int *)(plVar5 + 1) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(plVar5 + 1) = 0xdeadf001;
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  if ((plStack_78 != (long *)0x0) &&
     (iVar3 = (int)plStack_78[1] + -1, *(int *)(plStack_78 + 1) = iVar3, iVar3 == 0)) {
    *(undefined4 *)(plStack_78 + 1) = 0xdeadf001;
    (**(code **)(*plStack_78 + 8))();
  }
  return param_1;
}



/* Entry: 1092d117c; end: 1092d1a43;  */

void FUN_1092d117c(long *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined **unaff_x19;
  undefined **ppuVar16;
  ulong uVar17;
  undefined **unaff_x23;
  undefined **unaff_x24;
  long *plVar18;
  undefined **ppuVar19;
  undefined8 *puVar20;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined4 uStack_d8;
  undefined **ppuStack_d0;
  undefined **appuStack_c8 [2];
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar9 = (int)param_3;
  if (iVar9 == 0) {
    ppuVar7 = (undefined **)0x10;
    ___cxa_allocate_exception();
  }
  else {
    iVar11 = (int)((ulong)(*(long *)(*(long *)(param_2 + 0x10) + 0x18) -
                          *(long *)(*(long *)(param_2 + 0x10) + 0x10)) >> 2);
    uVar17 = (ulong)(uint)(iVar11 - iVar9);
    if (iVar11 - iVar9 != 0 && iVar9 <= iVar11) {
      ppuVar7 = (undefined **)(param_1 + 1);
      uVar15 = param_1[2] - (long)*ppuVar7;
      iVar12 = (int)(uVar15 >> 3);
      if (iVar12 <= iVar9) {
        plVar18 = *(long **)(*ppuVar7 + (uVar15 - 8));
        if (plVar18 != (long *)0x0) {
          *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        }
        iVar12 = iVar12 + -1;
        do {
          uStack_78 = 1;
          lVar5 = *param_1;
          FUN_1092ccc44(lVar5,iVar12 + *(int *)(lVar5 + 0x58));
          uStack_74 = (undefined4)lVar5;
          plVar6 = (long *)0x30;
          __Znwm();
          lVar5 = *param_1;
          FUN_1092d1b54(appuStack_c8,&uStack_78,2);
          FUN_1092cd1f8(plVar6,lVar5,appuStack_c8);
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          plStack_b0 = plVar6;
          FUN_1092cd9dc(&plStack_a8,plVar18,&plStack_b0);
          if ((plStack_b0 != (long *)0x0) &&
             (iVar4 = (int)plStack_b0[1] + -1, *(int *)(plStack_b0 + 1) = iVar4, iVar4 == 0)) {
            *(undefined4 *)(plStack_b0 + 1) = 0xdeadf001;
            (**(code **)(*plStack_b0 + 8))();
          }
          appuStack_c8[0] = &PTR_FUN_110ae99f0;
          if ((plStack_b8 != (long *)0x0) &&
             (iVar4 = (int)plStack_b8[1] + -1, *(int *)(plStack_b8 + 1) = iVar4, iVar4 == 0)) {
            *(undefined4 *)(plStack_b8 + 1) = 0xdeadf001;
            (**(code **)(*plStack_b8 + 8))();
          }
          plStack_b8 = (long *)0x0;
          puVar1 = (undefined8 *)param_1[2];
          if (puVar1 < (undefined8 *)param_1[3]) {
            puVar20 = puVar1 + 1;
            *puVar1 = 0;
            func_0x0001092cd040(puVar1,plStack_a8);
          }
          else {
            lVar5 = (long)puVar1 - (long)*ppuVar7;
            uVar15 = (lVar5 >> 3) + 1;
            if (uVar15 >> 0x3d != 0) {
              func_0x0001092d0db0();
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x1092d17c0);
              (*pcVar10)();
            }
            uVar13 = param_1[3] - (long)*ppuVar7;
            uVar14 = (long)uVar13 >> 2;
            if (uVar14 <= uVar15) {
              uVar14 = uVar15;
            }
            if (0x7ffffffffffffff7 < uVar13) {
              uVar14 = 0x1fffffffffffffff;
            }
            ppuStack_80 = ppuVar7;
            if (uVar14 == 0) {
              ppuVar19 = (undefined **)0x0;
            }
            else {
              ppuVar19 = ppuVar7;
              FUN_1092d0dc4();
            }
            puVar1 = (undefined8 *)((long)ppuVar19 + lVar5);
            puVar20 = puVar1 + 1;
            *puVar1 = 0;
            ppuStack_a0 = ppuVar19;
            ppuStack_98 = (undefined **)puVar1;
            ppuStack_88 = ppuVar19 + uVar14;
            func_0x0001092cd040(puVar1,plStack_a8);
            lVar5 = (long)puVar1 + (param_1[1] - param_1[2]);
            ppuStack_90 = (undefined **)puVar20;
            FUN_1092d1a44(param_1[1],param_1[2],lVar5);
            ppuStack_a0 = (undefined **)param_1[1];
            param_1[1] = lVar5;
            param_1[2] = (long)puVar20;
            ppuStack_88 = (undefined **)param_1[3];
            param_1[3] = (long)(ppuVar19 + uVar14);
            ppuStack_98 = ppuStack_a0;
            ppuStack_90 = ppuStack_a0;
            func_0x0001092d1ad4(&ppuStack_a0);
          }
          plVar6 = plStack_a8;
          param_1[2] = (long)puVar20;
          if (plStack_a8 != (long *)0x0) {
            *(int *)(plStack_a8 + 1) = (int)plStack_a8[1] + 1;
          }
          if ((plVar18 != (long *)0x0) &&
             (iVar4 = (int)plVar18[1] + -1, *(int *)(plVar18 + 1) = iVar4, iVar4 == 0)) {
            *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
            (**(code **)(*plVar18 + 8))(plVar18);
          }
          if ((plStack_a8 != (long *)0x0) &&
             (iVar4 = (int)plStack_a8[1] + -1, *(int *)(plStack_a8 + 1) = iVar4, iVar4 == 0)) {
            *(undefined4 *)(plStack_a8 + 1) = 0xdeadf001;
            (**(code **)(*plStack_a8 + 8))();
          }
          iVar12 = iVar12 + 1;
          plVar18 = plVar6;
        } while (iVar9 != iVar12);
        if ((plVar6 != (long *)0x0) &&
           (iVar12 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar12, iVar12 == 0)) {
          *(undefined4 *)(plVar6 + 1) = 0xdeadf001;
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
      unaff_x19 = *(undefined ***)(*ppuVar7 + (long)iVar9 * 8);
      if (unaff_x19 != (undefined **)0x0) {
        *(int *)(unaff_x19 + 1) = *(int *)(unaff_x19 + 1) + 1;
      }
      unaff_x23 = (undefined **)0x28;
      __Znwm();
      *(undefined4 *)(unaff_x23 + 1) = 0;
      *unaff_x23 = (undefined *)&PTR_DAT_110ae9a28;
      ppuStack_a0 = (undefined **)((ulong)ppuStack_a0 & 0xffffffff00000000);
      FUN_1092cd11c(unaff_x23 + 2,uVar17,&ppuStack_a0);
      *(int *)(unaff_x23 + 1) = *(int *)(unaff_x23 + 1) + 1;
      _memcpy(unaff_x23[2],*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10),uVar17 << 2);
      plVar18 = (long *)0x30;
      __Znwm();
      uStack_d8 = 0;
      ppuStack_e0 = &PTR_FUN_110ae99f0;
      *(int *)(unaff_x23 + 1) = *(int *)(unaff_x23 + 1) + 1;
      ppuStack_d0 = unaff_x23;
      FUN_1092cd1f8();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      iVar12 = *(int *)(unaff_x23 + 1);
      *(int *)(unaff_x23 + 1) = iVar12 + -1;
      if (iVar12 + -1 == 0) {
        *(undefined4 *)(unaff_x23 + 1) = 0xdeadf001;
        (**(code **)(*unaff_x23 + 8))(unaff_x23);
      }
      FUN_1092cdfac(&ppuStack_a0,plVar18,param_3,1);
      unaff_x24 = ppuStack_a0;
      if (ppuStack_a0 != (undefined **)0x0) {
        *(int *)(ppuStack_a0 + 1) = *(int *)(ppuStack_a0 + 1) + 1;
      }
      iVar12 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar12;
      if (iVar12 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      if ((ppuStack_a0 != (undefined **)0x0) &&
         (iVar12 = *(int *)(ppuStack_a0 + 1), *(int *)(ppuStack_a0 + 1) = iVar12 + -1,
         iVar12 + -1 == 0)) {
        *(undefined4 *)(ppuStack_a0 + 1) = 0xdeadf001;
        (**(code **)(*ppuStack_a0 + 8))();
      }
      if (unaff_x19 != (undefined **)0x0) {
        *(int *)(unaff_x19 + 1) = *(int *)(unaff_x19 + 1) + 1;
      }
      ppuStack_e8 = unaff_x19;
      FUN_1092ce1f8(&ppuStack_a0,unaff_x24,&ppuStack_e8);
      ppuVar19 = *(undefined ***)(ppuStack_90[2] + 0x58);
      if (ppuVar19 != (undefined **)0x0) {
        *(int *)(ppuVar19 + 1) = *(int *)(ppuVar19 + 1) + 1;
      }
      ppuStack_a0 = &PTR_DAT_110ae9a98;
      iVar12 = *(int *)(ppuStack_90 + 1);
      *(int *)(ppuStack_90 + 1) = iVar12 + -1;
      if (iVar12 + -1 == 0) {
        *(undefined4 *)(ppuStack_90 + 1) = 0xdeadf001;
        (**(code **)(*ppuStack_90 + 8))();
      }
      ppuStack_90 = (undefined **)0x0;
      if ((ppuStack_e8 != (undefined **)0x0) &&
         (iVar12 = *(int *)(ppuStack_e8 + 1), *(int *)(ppuStack_e8 + 1) = iVar12 + -1,
         iVar12 + -1 == 0)) {
        *(undefined4 *)(ppuStack_e8 + 1) = 0xdeadf001;
        (**(code **)(*ppuStack_e8 + 8))();
      }
      if (ppuVar19 != (undefined **)0x0) {
        *(int *)(ppuVar19 + 1) = *(int *)(ppuVar19 + 1) + 1;
      }
      ppuVar8 = (undefined **)ppuVar19[2];
      puVar2 = ppuVar19[3];
      iVar12 = (int)((ulong)((long)puVar2 - (long)ppuVar8) >> 2);
      uVar3 = iVar9 - iVar12;
      lVar5 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
      if (0 < (int)uVar3) {
        _bzero(lVar5 + uVar17 * 4,(ulong)uVar3 << 2);
      }
      ppuVar7 = (undefined **)(lVar5 + ((long)((ulong)(uint)(iVar11 - iVar12) << 0x20) >> 0x1e));
      pcVar10 = (code *)(((long)puVar2 - (long)ppuVar8) * 0x40000000 >> 0x1e & 0xfffffffffffffffc);
      _memcpy();
      iVar9 = *(int *)(ppuVar19 + 1) + -1;
      *(int *)(ppuVar19 + 1) = iVar9;
      if (iVar9 == 0) {
        *(undefined4 *)(ppuVar19 + 1) = 0xdeadf001;
        ppuVar7 = ppuVar19;
        (**(code **)(*ppuVar19 + 8))();
        iVar9 = *(int *)(ppuVar19 + 1);
      }
      *(int *)(ppuVar19 + 1) = iVar9 + -1;
      if (iVar9 + -1 == 0) {
        *(undefined4 *)(ppuVar19 + 1) = 0xdeadf001;
        (**(code **)(*ppuVar19 + 8))();
        ppuVar7 = ppuVar19;
      }
      if ((unaff_x24 != (undefined **)0x0) &&
         (iVar9 = *(int *)(unaff_x24 + 1), *(int *)(unaff_x24 + 1) = iVar9 + -1, iVar9 + -1 == 0)) {
        *(undefined4 *)(unaff_x24 + 1) = 0xdeadf001;
        ppuVar7 = unaff_x24;
        (**(code **)(*unaff_x24 + 8))();
      }
      iVar9 = *(int *)(unaff_x23 + 1);
      *(int *)(unaff_x23 + 1) = iVar9 + -1;
      if (iVar9 + -1 == 0) {
        *(undefined4 *)(unaff_x23 + 1) = 0xdeadf001;
        ppuVar7 = unaff_x23;
        (**(code **)(*unaff_x23 + 8))();
      }
      if ((unaff_x19 != (undefined **)0x0) &&
         (iVar9 = *(int *)(unaff_x19 + 1), *(int *)(unaff_x19 + 1) = iVar9 + -1, iVar9 + -1 == 0)) {
        *(undefined4 *)(unaff_x19 + 1) = 0xdeadf001;
        ppuVar7 = unaff_x19;
        (**(code **)(*unaff_x19 + 8))();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return;
      }
      goto LAB_1092d17fc;
    }
    ppuVar7 = (undefined **)0x10;
    ___cxa_allocate_exception();
  }
  FUN_1092cf4c4();
  ppuVar8 = &PTR_DAT_110ae9b38;
  pcVar10 = FUN_1092cf500;
  ___cxa_throw();
LAB_1092d17fc:
  ___stack_chk_fail();
  if ((ppuStack_e8 != (undefined **)0x0) &&
     (iVar9 = *(int *)(ppuStack_e8 + 1), *(int *)(ppuStack_e8 + 1) = iVar9 + -1, iVar9 + -1 == 0)) {
    *(undefined4 *)(ppuStack_e8 + 1) = 0xdeadf001;
    (**(code **)(*ppuStack_e8 + 8))();
  }
  if ((unaff_x24 != (undefined **)0x0) &&
     (iVar9 = *(int *)(unaff_x24 + 1), *(int *)(unaff_x24 + 1) = iVar9 + -1, iVar9 + -1 == 0)) {
    *(undefined4 *)(unaff_x24 + 1) = 0xdeadf001;
    (**(code **)(*unaff_x24 + 8))(unaff_x24);
  }
  iVar9 = *(int *)(unaff_x23 + 1);
  *(int *)(unaff_x23 + 1) = iVar9 + -1;
  if (iVar9 + -1 == 0) {
    *(undefined4 *)(unaff_x23 + 1) = 0xdeadf001;
    (**(code **)(*unaff_x23 + 8))(unaff_x23);
  }
  if ((unaff_x19 != (undefined **)0x0) &&
     (iVar9 = *(int *)(unaff_x19 + 1), *(int *)(unaff_x19 + 1) = iVar9 + -1, iVar9 + -1 == 0)) {
    *(undefined4 *)(unaff_x19 + 1) = 0xdeadf001;
    (**(code **)(*unaff_x19 + 8))(unaff_x19);
  }
  __Unwind_Resume();
  ppuVar19 = ppuVar7;
  if (ppuVar7 != ppuVar8) {
    do {
      *(undefined8 *)pcVar10 = 0;
      ppuVar16 = ppuVar19 + 1;
      func_0x0001092cd040(pcVar10,*ppuVar19);
      ppuVar19 = ppuVar16;
      pcVar10 = pcVar10 + 8;
    } while (ppuVar16 != ppuVar8);
    do {
      plVar18 = (long *)*ppuVar7;
      if ((plVar18 != (long *)0x0) &&
         (iVar9 = (int)plVar18[1] + -1, *(int *)(plVar18 + 1) = iVar9, iVar9 == 0)) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))();
      }
      ppuVar7 = ppuVar7 + 1;
    } while (ppuVar7 != ppuVar8);
  }
  return;
}



/* Entry: 1092d1a44; end: 1092d1b53;  */

void FUN_1092d1a44(long *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = param_1;
  if (param_1 != param_2) {
    do {
      *param_3 = 0;
      plVar3 = plVar2 + 1;
      func_0x0001092cd040(param_3,*plVar2);
      plVar2 = plVar3;
      param_3 = param_3 + 1;
    } while (plVar3 != param_2);
    do {
      plVar2 = (long *)*param_1;
      if ((plVar2 != (long *)0x0) &&
         (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
        (**(code **)(*plVar2 + 8))();
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 1092d1b54; end: 1092d1c1f;  */

undefined8 * FUN_1092d1b54(undefined8 *param_1,long param_2,uint param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110ae99f0;
  param_1[2] = 0;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = &PTR_DAT_110ae9a28;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[2] = 0;
  FUN_1092d1c20(puVar2 + 2,param_2,param_2 + (ulong)param_3 * 4,param_3);
  *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
  plVar3 = (long *)param_1[2];
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))();
  }
  param_1[2] = puVar2;
  return param_1;
}



/* Entry: 1092d1c20; end: 1092d1c8f;  */

void FUN_1092d1c20(long param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    FUN_10925b938(param_1,param_4);
    puVar1 = *(undefined4 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined4 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 1092d1c90; end: 1092d1cd3;  */

undefined8 * FUN_1092d1c90(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110ae9b60;
  FUN_1092c9084();
  *param_1 = &PTR_FUN_110ae9c08;
  param_1[1] = param_2;
  return param_1;
}



/* Entry: 1092d1cd4; end: 1092d1cd7;  */

void FUN_1092d1cd4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae9b60;
  if (param_1[1] != 0) {
    __ZdaPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 1092d1cd8; end: 1092d1ceb;  */

void FUN_1092d1cd8(void)

{
  FUN_1092cf4c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092d1cec; end: 1092d1e03;  */

void FUN_1092d1cec(undefined4 *param_1,char param_2,undefined8 param_3)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  char cStack_168;
  undefined7 uStack_167;
  char cStack_151;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [263];
  undefined1 uStack_31;
  
  lVar4 = 0;
  *(undefined8 *)(param_1 + 2) = param_3;
  do {
    if ((&UNK_10dfc2cc9)[lVar4] == param_2) {
      *param_1 = (int)lVar4;
      return;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 9);
  FUN_1092a988c(auStack_150);
  FUN_1092b4db8(auStack_140,&UNK_10f56449c,0x1b);
  cStack_168 = param_2;
  FUN_1092b4db8();
  uVar3 = 0x10;
  ___cxa_allocate_exception(0x10);
  FUN_10926dc5c(&cStack_168,auStack_138,&uStack_31);
  pcVar1 = (char *)CONCAT71(uStack_167,cStack_168);
  if (-1 < cStack_151) {
    pcVar1 = &cStack_168;
  }
  FUN_1092cf480(uVar3,pcVar1);
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1092d1db0);
  (*pcVar2)();
}



/* Entry: 1092d1e04; end: 1092d1fd3;  */

/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */

undefined *** FUN_1092d1e04(undefined ***param_1,uint *param_2)

{
  undefined ***pppuVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  long *plVar8;
  undefined ***unaff_x19;
  undefined8 unaff_x20;
  undefined ***unaff_x21;
  undefined8 unaff_x22;
  double *pdVar9;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  double dVar10;
  undefined **appuStack_170 [2];
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined1 auStack_150 [56];
  undefined8 uStack_118;
  char cStack_101;
  undefined **appuStack_f0 [19];
  undefined1 uStack_51;
  
  if (*(long *)(param_2 + 2) != 0) {
    FUN_1092a988c(appuStack_170);
    if (8 < *param_2) {
      FUN_109262df8(&UNK_10f5644b9);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1092d1fbc);
      (*pcVar2)();
    }
    uStack_51 = (&UNK_10dfc2cc9)[*param_2];
    FUN_1092b4db8(&ppuStack_160,&uStack_51,1);
    plVar8 = *(long **)(param_2 + 2);
    pdVar9 = (double *)*plVar8;
    if (pdVar9 != (double *)plVar8[1]) {
      do {
        dVar10 = (double)(long)(*pdVar9 * 100.0) / 100.0;
        if ((0.0 <= dVar10) && (pdVar9 != (double *)*plVar8)) {
          uStack_51 = 0x2c;
          FUN_1092b4db8(&ppuStack_160,&uStack_51,1);
        }
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(dVar10,&ppuStack_160);
        pdVar9 = pdVar9 + 1;
        plVar8 = *(long **)(param_2 + 2);
      } while (pdVar9 != (double *)plVar8[1]);
    }
    FUN_10926dc5c(param_1,&ppuStack_158,&uStack_51);
    appuStack_170[0] = &PTR_SUB_1108a5a38;
    ppuStack_160 = &PTR_DAT_1108a5a60;
    appuStack_f0[0] = &PTR_DAT_1108a5a88;
    ppuStack_158 = &PTR_DAT_11088d7b0;
    if (cStack_101 < '\0') {
      __ZdlPv(uStack_118);
    }
    ppuStack_158 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    __ZNSt3__16localeD1Ev(auStack_150);
    __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_170,&PTR_PTR_1108a5aa0);
    pppuVar5 = appuStack_f0;
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(pppuVar5);
    return pppuVar5;
  }
  puVar3 = (undefined1 *)register0x00000008;
  pppuVar5 = (undefined ***)&UNK_10f5644b8;
  while( true ) {
    pppuVar7 = pppuVar5;
    pppuVar4 = param_1;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined ****)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
    *(undefined ****)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(undefined **)(puVar3 + -8) = unaff_x30;
    pppuVar5 = pppuVar7;
    func_0x000107c613d0();
    if (pppuVar5 < (undefined ***)0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    *(undefined8 *)(puVar3 + -0x60) = unaff_x20;
    *(undefined ****)(puVar3 + -0x58) = pppuVar4;
    *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x48) = &UNK_10002d57c;
    unaff_x29 = puVar3 + -0x50;
    if ((bRam00000001132dfb00 & 1) != 0) {
      return pppuVar5;
    }
    pppuVar5 = (undefined ***)0x1132dfb00;
    func_0x000107c60e48();
    if ((int)pppuVar5 == 0) {
      return pppuVar5;
    }
    unaff_x30 = &UNK_10002d5bc;
    puVar3 = puVar3 + -0x60;
    param_1 = (undefined ***)0x1132dfae8;
    pppuVar5 = (undefined ***)&UNK_10f5738ce;
    unaff_x19 = pppuVar4;
    unaff_x21 = pppuVar7;
  }
  if (pppuVar5 < (undefined ***)0x17) {
    *(char *)((long)pppuVar4 + 0x17) = (char)pppuVar5;
    pppuVar6 = pppuVar4;
    if (pppuVar5 == (undefined ***)0x0) goto code_r0x00010002d55c;
  }
  else {
    pppuVar1 = (undefined ***)0x19;
    if (((ulong)pppuVar5 | 7) != 0x17) {
      pppuVar1 = (undefined ***)(((ulong)pppuVar5 | 7) + 1);
    }
    pppuVar6 = pppuVar1;
    func_0x000107c60e20();
    pppuVar4[1] = (undefined **)pppuVar5;
    pppuVar4[2] = (undefined **)((ulong)pppuVar1 | 0x8000000000000000);
    *pppuVar4 = (undefined **)pppuVar6;
  }
  func_0x000107c610b8(pppuVar6,pppuVar7,pppuVar5);
code_r0x00010002d55c:
  *(undefined1 *)((long)pppuVar6 + (long)pppuVar5) = 0;
  return pppuVar4;
}



/* Entry: 1092d1fd4; end: 1092d2013;  */

long FUN_1092d1fd4(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != 0) {
      plVar1[1] = *plVar1;
      __ZdlPv();
    }
    __ZdlPv(plVar1);
  }
  return param_1;
}



/* Entry: 1092d2014; end: 1092d2087;  */

undefined8 FUN_1092d2014(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((bRam0000000113829be8 & 1) == 0) {
    iVar1 = 0x13829be8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uVar2 = 1;
      __Znwm();
      uRam0000000113829be0 = uVar2;
      ___cxa_guard_release(0x113829be8);
    }
  }
  return uRam0000000113829be0;
}



/* Entry: 1092d2088; end: 1092d297b;  */

undefined1 **
FUN_1092d2088(double param_1,double param_2,double param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  long **pplVar2;
  long *plVar3;
  char cVar4;
  code *pcVar5;
  int iVar6;
  undefined1 **ppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  long *plVar10;
  undefined8 *****pppppuVar11;
  uint *puVar12;
  undefined1 *puVar13;
  undefined1 **ppuVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined1 *puVar20;
  byte bVar21;
  undefined8 *puVar22;
  undefined8 *****pppppuVar23;
  double dVar24;
  undefined8 auStack_10298 [2];
  char cStack_10281;
  undefined8 ****appppuStack_10280 [2];
  char cStack_10269;
  long lStack_10260;
  long lStack_10258;
  undefined1 uStack_101f0;
  undefined7 uStack_101ef;
  long lStack_101e8;
  char cStack_101d9;
  undefined8 ****ppppuStack_101d8;
  undefined8 ****ppppuStack_101d0;
  ulong uStack_101c8;
  ulong uStack_101c0;
  long lStack_101b0;
  long lStack_101a8;
  undefined8 ****ppppuStack_10140;
  ulong uStack_10138;
  undefined8 uStack_10130;
  long alStack_10120 [4];
  undefined8 uStack_10100;
  undefined4 uStack_100f8;
  long *plStack_100f0;
  long *plStack_100e8;
  undefined8 uStack_100e0;
  undefined1 *puStack_100c0;
  undefined1 *puStack_100b8;
  undefined8 *puStack_100b0;
  undefined1 auStack_100a8 [65536];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113732ab8 & 1) == 0) {
    iVar6 = 0x13732ab8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_1092d2cc0(0x113732ad8,&DAT_10f2cd1d9,0);
      ___cxa_atexit(0x1092d297c,0x113732ad8,0x100000000);
      ___cxa_guard_release(0x113732ab8);
    }
  }
  if ((bRam0000000113732ac0 & 1) == 0) {
    iVar6 = 0x13732ac0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_1092d2cc0(0x113732b18,&UNK_10f5644c3,0);
      ___cxa_atexit(0x1092d297c,0x113732b18,0x100000000);
      ___cxa_guard_release(0x113732ac0);
    }
  }
  if ((bRam0000000113732ac8 & 1) == 0) {
    iVar6 = 0x13732ac8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_1092d2cc0(0x113732b58,&UNK_10f5644d6,0);
      ___cxa_atexit(0x1092d297c,0x113732b58,0x100000000);
      ___cxa_guard_release(0x113732ac8);
    }
  }
  if ((bRam0000000113732ad0 & 1) == 0) {
    iVar6 = 0x13732ad0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      uRam0000000113732be8 = 0;
      uRam0000000113732bf0 = 0;
      uRam0000000113732bf8 = 0;
      uRam0000000113732c00 = 0;
      uRam0000000113732c08 = 0;
      uRam0000000113732c10 = 0;
      uRam0000000113732c18 = 0;
      uRam0000000113732c20 = 0;
      uRam0000000113732bc0 = 0;
      uRam0000000113732bb8 = 0;
      uRam0000000113732bd0 = 0;
      uRam0000000113732bc8 = 0;
      uRam0000000113732b98 = 0;
      uRam0000000113732bd9 = 0;
      uRam0000000113732bd1 = 0;
      uRam0000000113732bd8 = 0;
      uRam0000000113732ba0 = 0;
      uRam0000000113732ba8 = 0;
      uRam0000000113732bb0 = 0;
      ___cxa_atexit(0x1092d29a4,0x113732b98,0x100000000);
      ___cxa_guard_release(0x113732ad0);
    }
  }
  ppuVar7 = (undefined1 **)0x18;
  __Znwm();
  *ppuVar7 = (undefined1 *)0x0;
  ppuVar7[2] = (undefined1 *)0x0;
  ppuVar7[1] = (undefined1 *)0x0;
  uStack_10100 = 0;
  alStack_10120[1] = 0;
  alStack_10120[0] = 0;
  uStack_100f8 = 0;
  plStack_100f0 = (long *)0x0;
  uStack_100e0 = 0;
  puStack_100c0 = auStack_100a8;
  puStack_100b0 = &uStack_a8;
  uStack_a0 = 0;
  uStack_a8 = 0;
  cVar4 = *(char *)(param_5 + 0x17);
  lVar19 = (long)cVar4;
  lVar15 = lVar19;
  if (lVar19 < 0) {
    lVar15 = *(long *)(param_5 + 8);
  }
  ppppuVar8 = (undefined8 ****)(lVar15 + 1);
  puStack_100b8 = puStack_100c0;
  __Znam();
  if (cVar4 < '\0') {
    lVar19 = *(long *)(param_5 + 8);
  }
  _strncpy();
  *(byte *)((long)ppppuVar8 + lVar19) = 0;
  plStack_100f0 = (long *)0x0;
  uStack_100e0 = 0;
  if (((*(byte *)ppppuVar8 == 0xef) && (*(byte *)((long)ppppuVar8 + 1) == 0xbb)) &&
     (*(byte *)((long)ppppuVar8 + 2) == 0xbf)) {
    ppppuVar8 = (undefined8 ****)((long)ppppuVar8 + 3);
  }
  while( true ) {
    do {
      ppppuVar9 = ppppuVar8;
      ppppuStack_101d0 = (undefined8 ****)((long)ppppuVar9 + 1);
      ppppuVar8 = ppppuStack_101d0;
    } while ((&UNK_10dfc2cf1)[*(byte *)ppppuVar9] != '\0');
    if (*(byte *)ppppuVar9 != 0x3c) break;
    plVar10 = alStack_10120;
    FUN_1092d3334(plVar10,&ppppuStack_101d0);
    ppppuVar8 = ppppuStack_101d0;
    if (plVar10 != (long *)0x0) {
      pplVar2 = &plStack_100f0;
      if (plStack_100f0 != (long *)0x0) {
        pplVar2 = (long **)(plStack_100e8 + 0xb);
      }
      plVar3 = (long *)0x0;
      if (plStack_100f0 != (long *)0x0) {
        plVar3 = plStack_100e8;
      }
      *pplVar2 = plVar10;
      plStack_100e8 = plVar10;
      plVar10[4] = (long)alStack_10120;
      plVar10[10] = (long)plVar3;
      plVar10[0xb] = 0;
      ppppuVar8 = ppppuStack_101d0;
    }
  }
  ppppuStack_101d0 = ppppuVar9;
  if (*(byte *)ppppuVar9 != 0) {
    puVar16 = (undefined8 *)0x18;
    ___cxa_allocate_exception();
    *puVar16 = &PTR_FUN_110ae9c60;
    puVar16[1] = &UNK_10f564505;
    puVar16[2] = ppppuVar9;
    ___cxa_throw();
LAB_1092d2950:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1092d2954);
    (*pcVar5)();
  }
  for (plVar10 = plStack_100f0; plVar10 != (long *)0x0; plVar10 = (long *)plVar10[0xb]) {
    if ((*plVar10 != 0) && (plVar10[2] == 3)) {
      lVar19 = 0;
      while (*(char *)(*plVar10 + lVar19) == "svg"[lVar19]) {
        lVar19 = lVar19 + 1;
        if (lVar19 == 3) goto LAB_1092d22b8;
      }
    }
  }
LAB_1092d22b8:
  func_0x0001092d29d4();
  if (plVar10 != (long *)0x0) {
    plVar10 = plVar10 + 8;
    while( true ) {
      puVar16 = (undefined8 *)*plVar10;
      if ((((char *)*puVar16 != (char *)0x0) && (puVar16[2] == 1)) && (*(char *)*puVar16 == 'd'))
      break;
      plVar10 = puVar16 + 6;
    }
    lVar19 = 0x1132cee80;
    if (puVar16[1] != 0) {
      lVar19 = puVar16[1];
    }
    func_0x000107c31940(&ppppuStack_10140,lVar19);
    func_0x000107c31940(appppuStack_10280,"");
    ppppuStack_101d0 = (undefined8 *****)0x0;
    uStack_101c8 = 0;
    uStack_101c0 = 0;
    pppppuVar23 = (undefined8 *****)ppppuStack_10140;
    if (-1 < (long)uStack_10130) {
      uStack_10138 = (ulong)uStack_10130._7_1_;
      pppppuVar23 = &ppppuStack_10140;
    }
    pppppuVar11 = (undefined8 *****)appppuStack_10280[0];
    if (-1 < cStack_10269) {
      pppppuVar11 = appppuStack_10280;
    }
    FUN_1092d4430(&ppppuStack_101d0,pppppuVar23,(long)pppppuVar23 + uStack_10138,0x113732ad8,
                  pppppuVar11,0);
    if ((char)uStack_10130._7_1_ < '\0') {
      __ZdlPv(ppppuStack_10140);
    }
    pppppuVar23 = (undefined8 *****)ppppuStack_101d0;
    uStack_10138 = uStack_101c8;
    ppppuStack_10140 = ppppuStack_101d0;
    uStack_10130 = uStack_101c0;
    uStack_101c0 = uStack_101c0 & 0xffffffffffffff;
    ppppuStack_101d0 = (undefined8 ****)((ulong)ppppuStack_101d0 & 0xffffffffffffff00);
    if (cStack_10269 < '\0') {
      __ZdlPv(appppuStack_10280[0]);
    }
    uVar1 = uStack_10138;
    pppppuVar11 = (undefined8 *****)ppppuStack_10140;
    if (-1 < (long)uStack_10130) {
      uVar1 = uStack_10130 >> 0x38;
      pppppuVar11 = &ppppuStack_10140;
    }
    func_0x00010688dfac(&ppppuStack_101d0,pppppuVar11,(long)pppppuVar11 + uVar1,0x113732b18,0);
    while( true ) {
      pppppuVar11 = &ppppuStack_101d0;
      func_0x00010688dc94(pppppuVar11,0x113732b98);
      if (((ulong)pppppuVar11 & 1) != 0) break;
      puVar16 = (undefined8 *)0x18;
      __Znwm();
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16[2] = 0;
      FUN_1092d2a58(&uStack_101f0,&lStack_101b0);
      if ((long)cStack_101d9 < 0) {
        if (lStack_101e8 == 0) goto LAB_1092d267c;
        puVar13 = (undefined1 *)CONCAT71(uStack_101ef,uStack_101f0);
        puVar20 = puVar13 + 1;
        lVar19 = lStack_101e8;
      }
      else {
        if (cStack_101d9 == '\0') {
LAB_1092d267c:
          func_0x000109276104();
          goto LAB_1092d2950;
        }
        puVar13 = &uStack_101f0;
        puVar20 = (undefined1 *)((ulong)&uStack_101f0 | 1);
        lVar19 = (long)cStack_101d9;
      }
      func_0x00010688dfac(appppuStack_10280,puVar20,puVar13 + lVar19,0x113732b58,0);
      puVar12 = (uint *)0x10;
      __Znwm();
      FUN_1092d1cec();
      bVar21 = 0;
      while( true ) {
        pppppuVar11 = appppuStack_10280;
        func_0x00010688dc94(pppppuVar11,0x113732b98);
        if (((ulong)pppppuVar11 & 1) != 0) break;
        FUN_1092d2a58(auStack_10298,&lStack_10260);
        __ZNSt3__14stodERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPm
                  (auStack_10298,0);
        ppppuStack_101d8 = pppppuVar23;
        if (cStack_10281 < '\0') {
          __ZdlPv(auStack_10298[0]);
        }
        ppppuStack_101d8 = (undefined8 ****)(param_1 * (double)ppppuStack_101d8);
        if ((*puVar12 < 8) && ((1 << (ulong)(*puVar12 & 0x1f) & 0x83U) != 0)) {
          dVar24 = param_2;
          if ((bool)(bVar21 & 1)) {
            dVar24 = param_3;
          }
          ppppuStack_101d8 = (undefined8 ****)(dVar24 + (double)ppppuStack_101d8);
        }
        pppppuVar23 = (undefined8 *****)ppppuStack_101d8;
        FUN_1092d2a8c(puVar16,&ppppuStack_101d8);
        bVar21 = bVar21 + 1;
        func_0x00010688ded8(appppuStack_10280);
      }
      puVar16 = (undefined8 *)ppuVar7[1];
      if (puVar16 < ppuVar7[2]) {
        puVar22 = puVar16 + 1;
        *puVar16 = puVar12;
      }
      else {
        lVar19 = (long)puVar16 - (long)*ppuVar7;
        uVar1 = (lVar19 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_1092d2bf0();
          goto LAB_1092d2950;
        }
        uVar17 = (long)ppuVar7[2] - (long)*ppuVar7;
        uVar18 = (long)uVar17 >> 2;
        if (uVar18 <= uVar1) {
          uVar18 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar17) {
          uVar18 = 0x1fffffffffffffff;
        }
        ppuVar14 = ppuVar7;
        FUN_1092d2c04();
        puVar16 = (undefined8 *)((long)ppuVar14 + lVar19);
        puVar22 = puVar16 + 1;
        *puVar16 = puVar12;
        puVar20 = (undefined1 *)((long)puVar16 - ((long)ppuVar7[1] - (long)*ppuVar7));
        _memcpy(puVar20);
        puVar13 = *ppuVar7;
        *ppuVar7 = puVar20;
        ppuVar7[1] = (undefined1 *)puVar22;
        ppuVar7[2] = (undefined1 *)(ppuVar14 + uVar18);
        if (puVar13 != (undefined1 *)0x0) {
          __ZdlPv();
        }
      }
      ppuVar7[1] = (undefined1 *)puVar22;
      if (lStack_10260 != 0) {
        lStack_10258 = lStack_10260;
        __ZdlPv();
      }
      if (cStack_101d9 < '\0') {
        __ZdlPv(CONCAT71(uStack_101ef,uStack_101f0));
      }
      func_0x00010688ded8(&ppppuStack_101d0);
    }
    if (lStack_101b0 != 0) {
      lStack_101a8 = lStack_101b0;
      __ZdlPv();
    }
    if ((long)uStack_10130 < 0) {
      __ZdlPv(ppppuStack_10140);
    }
  }
  ppuVar14 = &puStack_100c0;
  FUN_1092d2c38();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    ___stack_chk_fail();
    ___cxa_guard_abort(0x113732ac8);
    __Unwind_Resume(ppuVar14);
    func_0x000104bd46a0(ppuVar14);
    FUN_1092d2b50(ppuVar14 + 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__16localeD1Ev_110346830)(ppuVar14);
    return ppuVar14;
  }
  return ppuVar7;
}



/* Entry: 1092d297c; end: 1092d2a57;  */

void FUN_1092d297c(long param_1)

{
  FUN_1092d2b50(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__16localeD1Ev_110346830)(param_1);
  return;
}



/* Entry: 1092d2a58; end: 1092d2a8b;  */

undefined8 * FUN_1092d2a58(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  plVar1 = param_2 + 3;
  if ((long *)param_2[1] != (long *)*param_2) {
    plVar1 = (long *)*param_2;
  }
  if ((char)plVar1[2] == '\x01') {
    lVar2 = *plVar1;
    lVar3 = plVar1[1];
    uVar6 = lVar3 - lVar2;
    if (uVar6 < 0x7ffffffffffffff8) {
      if (uVar6 < 0x17) {
        *(char *)((long)param_1 + 0x17) = (char)uVar6;
        puVar4 = param_1;
      }
      else {
        puVar5 = (undefined8 *)0x19;
        if ((uVar6 | 7) != 0x17) {
          puVar5 = (undefined8 *)((uVar6 | 7) + 1);
        }
        puVar4 = puVar5;
        __Znwm();
        param_1[1] = uVar6;
        param_1[2] = (ulong)puVar5 | 0x8000000000000000;
        *param_1 = puVar4;
      }
      lVar3 = lVar3 - lVar2;
      puVar5 = puVar4;
      if (lVar3 != 0) {
        _memmove(puVar4,lVar2,lVar3);
      }
      *(undefined1 *)((long)puVar4 + lVar3) = 0;
      return puVar5;
    }
    func_0x000104c4f6b8();
    return (undefined8 *)0x0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



/* Entry: 1092d2a8c; end: 1092d2b4f;  */

long * FUN_1092d2a8c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar11 = puVar2 + 1;
    *puVar2 = *param_2;
    plVar6 = param_1;
  }
  else {
    lVar10 = (long)puVar2 - *param_1;
    uVar1 = (lVar10 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_1092d2ba8();
      plVar9 = (long *)param_1[1];
      if (plVar9 != (long *)0x0) {
        plVar6 = plVar9 + 1;
        do {
          lVar10 = *plVar6;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar5) {
            *plVar6 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      return param_1;
    }
    uVar7 = param_1[2] - *param_1;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    plVar9 = param_1;
    FUN_1092d2bbc();
    lVar3 = *param_1;
    puVar2 = (undefined8 *)((long)plVar9 + lVar10);
    lVar10 = (long)puVar2 - (param_1[1] - lVar3);
    puVar11 = puVar2 + 1;
    *puVar2 = *param_2;
    _memcpy(lVar10,lVar3);
    plVar6 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = (long)puVar11;
    param_1[2] = (long)(plVar9 + uVar8);
    if (plVar6 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar11;
  return plVar6;
}



/* Entry: 1092d2b50; end: 1092d2ba7;  */

long FUN_1092d2b50(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1092d2ba8; end: 1092d2bbb;  */

void FUN_1092d2ba8(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  func_0x000104c4f6cc(&UNK_10f5644fe);
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  puVar1 = (undefined8 *)&UNK_10f5644fe;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  puVar3 = puVar1 + 3;
  puVar2 = (undefined8 *)*puVar1;
  while (puVar2 != puVar3) {
    puVar2 = *(undefined8 **)((long)puVar2 + ((ulong)(uint)-(int)puVar2 & 7));
    if ((code *)puVar1[0x2004] == (code *)0x0) {
      __ZdaPv();
    }
    else {
      (*(code *)puVar1[0x2004])();
    }
    *puVar1 = puVar2;
  }
  *puVar1 = puVar3;
  puVar1[1] = (undefined *)((long)puVar3 + ((ulong)(uint)-(int)puVar3 & 7));
  puVar1[2] = puVar1 + 0x2003;
  return;
}



/* Entry: 1092d2bbc; end: 1092d2bef;  */

void FUN_1092d2bbc(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  puVar1 = (undefined8 *)&UNK_10f5644fe;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  puVar3 = puVar1 + 3;
  puVar2 = (undefined8 *)*puVar1;
  while (puVar2 != puVar3) {
    puVar2 = *(undefined8 **)((long)puVar2 + ((ulong)(uint)-(int)puVar2 & 7));
    if ((code *)puVar1[0x2004] == (code *)0x0) {
      __ZdaPv();
    }
    else {
      (*(code *)puVar1[0x2004])();
    }
    *puVar1 = puVar2;
  }
  *puVar1 = puVar3;
  puVar1[1] = (undefined *)((long)puVar3 + ((ulong)(uint)-(int)puVar3 & 7));
  puVar1[2] = puVar1 + 0x2003;
  return;
}



/* Entry: 1092d2bf0; end: 1092d2c03;  */

void FUN_1092d2bf0(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)&UNK_10f5644fe;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  puVar3 = puVar1 + 3;
  puVar2 = (undefined8 *)*puVar1;
  while (puVar2 != puVar3) {
    puVar2 = *(undefined8 **)((long)puVar2 + ((ulong)(uint)-(int)puVar2 & 7));
    if ((code *)puVar1[0x2004] == (code *)0x0) {
      __ZdaPv();
    }
    else {
      (*(code *)puVar1[0x2004])();
    }
    *puVar1 = puVar2;
  }
  *puVar1 = puVar3;
  puVar1[1] = (undefined *)((long)puVar3 + ((ulong)(uint)-(int)puVar3 & 7));
  puVar1[2] = puVar1 + 0x2003;
  return;
}



/* Entry: 1092d2c04; end: 1092d2c37;  */

void FUN_1092d2c04(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  plVar2 = param_1 + 3;
  plVar1 = (long *)*param_1;
  while (plVar1 != plVar2) {
    plVar1 = *(long **)((long)plVar1 + ((ulong)(uint)-(int)plVar1 & 7));
    if ((code *)param_1[0x2004] == (code *)0x0) {
      __ZdaPv();
    }
    else {
      (*(code *)param_1[0x2004])();
    }
    *param_1 = (long)plVar1;
  }
  *param_1 = (long)plVar2;
  param_1[1] = (long)plVar2 + ((ulong)(uint)-(int)plVar2 & 7);
  param_1[2] = (long)(param_1 + 0x2003);
  return;
}



/* Entry: 1092d2c38; end: 1092d2cbf;  */

void FUN_1092d2c38(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = param_1 + 3;
  plVar1 = (long *)*param_1;
  while (plVar1 != plVar2) {
    plVar1 = *(long **)((long)plVar1 + ((ulong)(uint)-(int)plVar1 & 7));
    if ((code *)param_1[0x2004] == (code *)0x0) {
      __ZdaPv();
    }
    else {
      (*(code *)param_1[0x2004])();
    }
    *param_1 = (long)plVar1;
  }
  *param_1 = (long)plVar2;
  param_1[1] = (long)plVar2 + ((ulong)(uint)-(int)plVar2 & 7);
  param_1[2] = (long)(param_1 + 0x2003);
  return;
}



/* Entry: 1092d2cc0; end: 1092d2d4f;  */

long FUN_1092d2cc0(long param_1,long param_2,undefined4 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x000107c28330();
  *(undefined4 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x24) = 0;
  *(undefined8 *)(lVar2 + 0x1c) = 0;
  *(undefined8 *)(lVar2 + 0x34) = 0;
  *(undefined8 *)(lVar2 + 0x2c) = 0;
  *(undefined4 *)(lVar2 + 0x3c) = 0;
  lVar2 = param_2;
  _strlen();
  lVar3 = param_1;
  func_0x000107c28360(param_1,param_2,param_2 + lVar2);
  if (lVar3 == param_2 + lVar2) {
    return param_1;
  }
  FUN_1092d2d50();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1092d2d34);
  (*pcVar1)();
}



/* Entry: 1092d2d50; end: 1092d2d9b;  */

void FUN_1092d2d50(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  plVar1 = (long *)0x18;
  ___cxa_allocate_exception();
  __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
  plVar2 = plVar1;
  ___cxa_throw(plVar1,PTR___ZTINSt3__111regex_errorE_1103469f0,
               PTR___ZNSt3__111regex_errorD1Ev_110346220);
  ___cxa_free_exception(plVar1);
  __Unwind_Resume();
  plVar1 = (long *)*plVar2;
  lVar5 = *plVar1;
  if (lVar5 != 0) {
    lVar4 = plVar1[1];
    lVar3 = lVar5;
    if (lVar4 != lVar5) {
      do {
        lVar4 = lVar4 + -0x30;
        FUN_1092d2e0c(lVar4);
      } while (lVar4 != lVar5);
      lVar3 = *(long *)*plVar2;
    }
    plVar1[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 1092d2d9c; end: 1092d2e0b;  */

void FUN_1092d2d9c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x30;
        FUN_1092d2e0c(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1092d2e0c; end: 1092d2e4f;  */

void FUN_1092d2e0c(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 1092d2e50; end: 1092d2eeb;  */

void FUN_1092d2e50(ulong *param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_4 < 0x7ffffffffffffff8) {
    if (param_4 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_4;
      puVar3 = param_1;
    }
    else {
      puVar1 = (ulong *)0x19;
      if ((param_4 | 7) != 0x17) {
        puVar1 = (ulong *)((param_4 | 7) + 1);
      }
      puVar3 = puVar1;
      __Znwm();
      param_1[1] = param_4;
      param_1[2] = (ulong)puVar1 | 0x8000000000000000;
      *param_1 = (ulong)puVar3;
    }
    param_3 = param_3 - (long)param_2;
    if (param_3 != 0) {
      _memmove(puVar3,param_2,param_3);
    }
    *(undefined1 *)((long)puVar3 + param_3) = 0;
    return;
  }
  func_0x000104c4f6b8();
  puVar2 = (undefined1 *)param_1[1];
  if (puVar2 < (undefined1 *)param_1[2]) {
    puVar10 = puVar2 + 1;
    *puVar2 = *(undefined1 *)param_2;
  }
  else {
    uVar6 = *param_1;
    lVar8 = (long)puVar2 - uVar6;
    uVar9 = lVar8 + 1;
    if ((long)uVar9 < 0) {
      FUN_109274940();
      puVar2 = (undefined1 *)param_1[1];
      if (puVar2 < (undefined1 *)param_1[2]) {
        puVar10 = puVar2 + 1;
        *puVar2 = *(undefined1 *)param_2;
      }
      else {
        uVar6 = *param_1;
        lVar8 = (long)puVar2 - uVar6;
        uVar9 = lVar8 + 1;
        if ((long)uVar9 < 0) {
          FUN_109274940();
          if (param_4 < 0x7ffffffffffffff8) {
            if (param_4 < 0x17) {
              *(char *)((long)param_1 + 0x17) = (char)param_4;
              puVar3 = param_1;
            }
            else {
              puVar1 = (ulong *)0x19;
              if ((param_4 | 7) != 0x17) {
                puVar1 = (ulong *)((param_4 | 7) + 1);
              }
              puVar3 = puVar1;
              __Znwm();
              param_1[1] = param_4;
              param_1[2] = (ulong)puVar1 | 0x8000000000000000;
              *param_1 = (ulong)puVar3;
            }
            param_3 = param_3 - (long)param_2;
            if (param_3 != 0) {
              _memmove(puVar3,param_2,param_3);
            }
            *(undefined1 *)((long)puVar3 + param_3) = 0;
            return;
          }
          func_0x000104c4f6b8();
          puVar7 = (undefined8 *)param_1[1];
          if (*(char *)((long)param_2 + 0x17) < '\0') {
            func_0x000107c3192c(puVar7,*param_2,param_2[1]);
          }
          else {
            uVar12 = param_2[1];
            uVar11 = *param_2;
            puVar7[2] = param_2[2];
            puVar7[1] = uVar12;
            *puVar7 = uVar11;
          }
          param_1[1] = (ulong)(puVar7 + 3);
          return;
        }
        uVar4 = (long)param_1[2] - uVar6;
        uVar5 = uVar4 * 2;
        if (uVar5 < uVar9 || uVar5 - uVar9 == 0) {
          uVar5 = uVar9;
        }
        if (0x3ffffffffffffffe < uVar4) {
          uVar5 = 0x7fffffffffffffff;
        }
        if (uVar5 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = uVar5;
          __Znwm();
        }
        puVar10 = (undefined1 *)(uVar9 + lVar8) + 1;
        *(undefined1 *)(uVar9 + lVar8) = *(undefined1 *)param_2;
        _memcpy(uVar9,uVar6,lVar8);
        *param_1 = uVar9;
        param_1[1] = (ulong)puVar10;
        param_1[2] = uVar9 + uVar5;
        if (uVar6 != 0) {
          __ZdlPv(uVar6);
        }
      }
      param_1[1] = (ulong)puVar10;
      return;
    }
    uVar4 = (long)param_1[2] - uVar6;
    uVar5 = uVar4 * 2;
    if (uVar5 < uVar9 || uVar5 - uVar9 == 0) {
      uVar5 = uVar9;
    }
    if (0x3ffffffffffffffe < uVar4) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar5;
      __Znwm();
    }
    puVar10 = (undefined1 *)(uVar9 + lVar8) + 1;
    *(undefined1 *)(uVar9 + lVar8) = *(undefined1 *)param_2;
    _memcpy(uVar9,uVar6,lVar8);
    *param_1 = uVar9;
    param_1[1] = (ulong)puVar10;
    param_1[2] = uVar9 + uVar5;
    if (uVar6 != 0) {
      __ZdlPv(uVar6);
    }
  }
  param_1[1] = (ulong)puVar10;
  return;
}



/* Entry: 1092d2eec; end: 1092d3093;  */

void FUN_1092d2eec(ulong *param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar2 = (undefined1 *)param_1[1];
  if (puVar2 < (undefined1 *)param_1[2]) {
    puVar10 = puVar2 + 1;
    *puVar2 = *(undefined1 *)param_2;
  }
  else {
    uVar6 = *param_1;
    lVar8 = (long)puVar2 - uVar6;
    uVar9 = lVar8 + 1;
    if ((long)uVar9 < 0) {
      FUN_109274940();
      puVar2 = (undefined1 *)param_1[1];
      if (puVar2 < (undefined1 *)param_1[2]) {
        puVar10 = puVar2 + 1;
        *puVar2 = *(undefined1 *)param_2;
      }
      else {
        uVar6 = *param_1;
        lVar8 = (long)puVar2 - uVar6;
        uVar9 = lVar8 + 1;
        if ((long)uVar9 < 0) {
          FUN_109274940();
          if (param_4 < 0x7ffffffffffffff8) {
            if (param_4 < 0x17) {
              *(char *)((long)param_1 + 0x17) = (char)param_4;
              puVar3 = param_1;
            }
            else {
              puVar1 = (ulong *)0x19;
              if ((param_4 | 7) != 0x17) {
                puVar1 = (ulong *)((param_4 | 7) + 1);
              }
              puVar3 = puVar1;
              __Znwm();
              param_1[1] = param_4;
              param_1[2] = (ulong)puVar1 | 0x8000000000000000;
              *param_1 = (ulong)puVar3;
            }
            param_3 = param_3 - (long)param_2;
            if (param_3 != 0) {
              _memmove(puVar3,param_2,param_3);
            }
            *(undefined1 *)((long)puVar3 + param_3) = 0;
            return;
          }
          func_0x000104c4f6b8();
          puVar7 = (undefined8 *)param_1[1];
          if (*(char *)((long)param_2 + 0x17) < '\0') {
            func_0x000107c3192c(puVar7,*param_2,param_2[1]);
          }
          else {
            uVar12 = param_2[1];
            uVar11 = *param_2;
            puVar7[2] = param_2[2];
            puVar7[1] = uVar12;
            *puVar7 = uVar11;
          }
          param_1[1] = (ulong)(puVar7 + 3);
          return;
        }
        uVar4 = (long)param_1[2] - uVar6;
        uVar5 = uVar4 * 2;
        if (uVar5 < uVar9 || uVar5 - uVar9 == 0) {
          uVar5 = uVar9;
        }
        if (0x3ffffffffffffffe < uVar4) {
          uVar5 = 0x7fffffffffffffff;
        }
        if (uVar5 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = uVar5;
          __Znwm();
        }
        puVar10 = (undefined1 *)(uVar9 + lVar8) + 1;
        *(undefined1 *)(uVar9 + lVar8) = *(undefined1 *)param_2;
        _memcpy(uVar9,uVar6,lVar8);
        *param_1 = uVar9;
        param_1[1] = (ulong)puVar10;
        param_1[2] = uVar9 + uVar5;
        if (uVar6 != 0) {
          __ZdlPv(uVar6);
        }
      }
      param_1[1] = (ulong)puVar10;
      return;
    }
    uVar4 = (long)param_1[2] - uVar6;
    uVar5 = uVar4 * 2;
    if (uVar5 < uVar9 || uVar5 - uVar9 == 0) {
      uVar5 = uVar9;
    }
    if (0x3ffffffffffffffe < uVar4) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar5;
      __Znwm();
    }
    puVar10 = (undefined1 *)(uVar9 + lVar8) + 1;
    *(undefined1 *)(uVar9 + lVar8) = *(undefined1 *)param_2;
    _memcpy(uVar9,uVar6,lVar8);
    *param_1 = uVar9;
    param_1[1] = (ulong)puVar10;
    param_1[2] = uVar9 + uVar5;
    if (uVar6 != 0) {
      __ZdlPv(uVar6);
    }
  }
  param_1[1] = (ulong)puVar10;
  return;
}



/* Entry: 1092d3094; end: 1092d312f;  */

void FUN_1092d3094(ulong *param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_4 < 0x7ffffffffffffff8) {
    if (param_4 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_4;
      puVar2 = param_1;
    }
    else {
      puVar1 = (ulong *)0x19;
      if ((param_4 | 7) != 0x17) {
        puVar1 = (ulong *)((param_4 | 7) + 1);
      }
      puVar2 = puVar1;
      __Znwm();
      param_1[1] = param_4;
      param_1[2] = (ulong)puVar1 | 0x8000000000000000;
      *param_1 = (ulong)puVar2;
    }
    param_3 = param_3 - (long)param_2;
    if (param_3 != 0) {
      _memmove(puVar2,param_2,param_3);
    }
    *(undefined1 *)((long)puVar2 + param_3) = 0;
    return;
  }
  func_0x000104c4f6b8();
  puVar3 = (undefined8 *)param_1[1];
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar3,*param_2,param_2[1]);
  }
  else {
    uVar5 = param_2[1];
    uVar4 = *param_2;
    puVar3[2] = param_2[2];
    puVar3[1] = uVar5;
    *puVar3 = uVar4;
  }
  param_1[1] = (ulong)(puVar3 + 3);
  return;
}



/* Entry: 1092d3130; end: 1092d318b;  */

void FUN_1092d3130(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
  }
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 1092d318c; end: 1092d32db;  */

/* WARNING: Possible PIC construction at 0x0001092d3efc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001092d3f00) */

undefined1  [16] FUN_1092d318c(long *param_1,undefined **param_2)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  undefined ***pppuVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ulong uVar11;
  char *pcVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined **ppuVar15;
  int iVar16;
  undefined *puVar17;
  undefined *puVar18;
  byte bVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  byte *pbVar23;
  undefined8 unaff_x22;
  byte *unaff_x23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  byte *pbStack_110;
  uint uStack_104;
  undefined *puStack_100;
  byte *pbStack_f8;
  undefined **ppuStack_b0;
  long *plStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar8 = (long *)param_1[1];
  if (plVar8 < (long *)param_1[2]) {
    puVar18 = param_2[1];
    puVar17 = *param_2;
    plVar8[2] = (long)param_2[2];
    plVar8[1] = (long)puVar18;
    *plVar8 = (long)puVar17;
    param_2[1] = (undefined *)0x0;
    param_2[2] = (undefined *)0x0;
    *param_2 = (undefined *)0x0;
    puVar18 = param_2[4];
    puVar17 = param_2[3];
    plVar8[5] = (long)param_2[5];
    plVar8[4] = (long)puVar18;
    plVar8[3] = (long)puVar17;
    param_2[4] = (undefined *)0x0;
    param_2[5] = (undefined *)0x0;
    param_2[3] = (undefined *)0x0;
    plVar8 = plVar8 + 6;
    plVar5 = param_1;
LAB_1092d32c0:
    param_1[1] = (long)plVar8;
    auVar25._8_8_ = param_2;
    auVar25._0_8_ = plVar5;
    return auVar25;
  }
  lVar22 = (long)plVar8 - *param_1;
  uVar11 = (lVar22 >> 4) * -0x5555555555555555 + 1;
  if (uVar11 < 0x555555555555556) {
    lVar20 = param_1[2] - *param_1 >> 4;
    uVar21 = lVar20 * 0x5555555555555556;
    if (uVar21 < uVar11 || uVar21 - uVar11 == 0) {
      uVar21 = uVar11;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar20 * -0x5555555555555555)) {
      uVar21 = 0x555555555555555;
    }
    plVar6 = param_1;
    plStack_38 = param_1;
    FUN_1092d32f0();
    plVar5 = (long *)((long)plVar6 + lVar22);
    puVar17 = param_2[2];
    puVar18 = *param_2;
    plVar5[1] = (long)param_2[1];
    *plVar5 = (long)puVar18;
    plVar5[2] = (long)puVar17;
    param_2[1] = (undefined *)0x0;
    param_2[2] = (undefined *)0x0;
    *param_2 = (undefined *)0x0;
    puVar18 = param_2[4];
    puVar17 = param_2[3];
    plVar5[5] = (long)param_2[5];
    plVar5[4] = (long)puVar18;
    plVar5[3] = (long)puVar17;
    param_2[4] = (undefined *)0x0;
    param_2[5] = (undefined *)0x0;
    param_2[3] = (undefined *)0x0;
    plVar8 = plVar5 + 6;
    param_2 = (undefined **)*param_1;
    lVar22 = (long)plVar5 - (param_1[1] - (long)param_2);
    _memcpy(lVar22);
    lStack_58 = *param_1;
    *param_1 = lVar22;
    param_1[1] = (long)plVar8;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar6 + uVar21 * 6);
    plVar5 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x000107c31958(plVar5);
    goto LAB_1092d32c0;
  }
  ppuVar9 = param_2;
  FUN_1092d32dc();
  pcStack_68 = FUN_1092d32dc;
  puVar17 = &UNK_10f5644fe;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x000104c4f6cc();
  pcStack_78 = FUN_1092d32f0;
  ppuStack_90 = param_2;
  plStack_88 = param_1;
  if (ppuVar9 < (undefined **)0x555555555555556) {
    lVar22 = (long)ppuVar9 * 0x30;
    puStack_80 = (undefined1 *)&puStack_70;
    __Znwm(lVar22);
    auVar26._8_8_ = ppuVar9;
    auVar26._0_8_ = lVar22;
    return auVar26;
  }
  puStack_80 = (undefined1 *)&puStack_70;
  func_0x000104c4f740();
  pppuVar4 = (undefined ***)&pbStack_110;
  pcStack_98 = FUN_1092d3334;
  pcVar12 = *ppuVar9;
  puStack_100 = puVar17;
  ppuStack_b0 = param_2;
  plStack_a8 = param_1;
  ppuStack_a0 = &puStack_80;
  if (*pcVar12 == '!') {
    cVar2 = pcVar12[1];
    if (cVar2 == '-') {
      if (pcVar12[2] == '-') {
        pcVar12 = pcVar12 + 3;
        do {
          *ppuVar9 = pcVar12;
          if (*pcVar12 == '-') {
            if ((pcVar12[1] == '-') && (pcVar12[2] == '>')) goto LAB_1092d3fc8;
          }
          else if (*pcVar12 == '\0') goto LAB_1092d3f68;
          pcVar12 = pcVar12 + 1;
        } while( true );
      }
    }
    else if (cVar2 == 'D') {
      if (((((pcVar12[2] == 'O') && (pcVar12[3] == 'C')) && (pcVar12[4] == 'T')) &&
          ((pcVar12[5] == 'Y' && (pcVar12[6] == 'P')))) &&
         ((pcVar12[7] == 'E' && ((&UNK_10dfc2cf1)[(byte)pcVar12[8]] != '\0')))) {
        *ppuVar9 = pcVar12 + 9;
        uVar24 = 0x1092d3f00;
        ppuVar15 = ppuVar9;
        ppuVar10 = ppuVar9;
SUB_1092d418c:
        *(undefined ***)((long)pppuVar4 + -0x20) = param_2;
        *(undefined ***)((long)pppuVar4 + -0x18) = ppuVar9;
        *(undefined1 ****)((long)pppuVar4 + -0x10) = &ppuStack_a0;
        *(undefined8 *)((long)pppuVar4 + -8) = uVar24;
        pcVar12 = *ppuVar15;
        while( true ) {
          while (cVar2 = *pcVar12, cVar2 == '[') {
            pcVar12 = pcVar12 + 1;
            *ppuVar15 = pcVar12;
            iVar16 = 1;
            do {
              cVar2 = *pcVar12;
              if (cVar2 == '[') {
                iVar16 = iVar16 + 1;
              }
              else if (cVar2 == ']') {
                iVar16 = iVar16 + -1;
              }
              else if (cVar2 == '\0') goto LAB_1092d4220;
              pcVar12 = pcVar12 + 1;
              *ppuVar15 = pcVar12;
            } while (0 < iVar16);
          }
          if (cVar2 == '>') {
            *ppuVar15 = pcVar12 + 1;
            auVar29._8_8_ = ppuVar10;
            auVar29._0_8_ = ppuVar15;
            return auVar29;
          }
          if (cVar2 == '\0') break;
          pcVar12 = pcVar12 + 1;
          *ppuVar15 = pcVar12;
        }
LAB_1092d4220:
        plVar8 = (long *)0x18;
        ___cxa_allocate_exception();
        puVar17 = *ppuVar15;
        *plVar8 = (long)&PTR_FUN_110ae9c60;
        plVar8[1] = (long)&UNK_10f564510;
        plVar8[2] = (long)puVar17;
        ppuVar9 = &PTR_DAT_110ae9c38;
        ___cxa_throw();
        *(undefined8 *)((long)pppuVar4 + -0x50) = unaff_x22;
        *(long *)((long)pppuVar4 + -0x48) = lVar22;
        *(undefined ***)((long)pppuVar4 + -0x40) = param_2;
        *(undefined ***)((long)pppuVar4 + -0x38) = ppuVar15;
        *(undefined1 **)((long)pppuVar4 + -0x30) = (undefined1 *)((long)pppuVar4 + -0x10);
        *(code **)((long)pppuVar4 + -0x28) = FUN_1092d4258;
        lVar22 = plVar8[1] + ((ulong)(uint)-(int)plVar8[1] & 7);
        ppuVar10 = ppuVar9;
        if ((ulong)plVar8[2] < (ulong)(lVar22 + (long)ppuVar9)) {
          ppuVar15 = ppuVar9;
          if (ppuVar9 < (undefined **)0x10001) {
            ppuVar15 = (undefined **)0x10000;
          }
          lVar22 = (long)ppuVar15 + 0x16;
          lVar20 = lVar22;
          if ((code *)plVar8[0x2003] == (code *)0x0) {
            __Znam();
          }
          else {
            (*(code *)plVar8[0x2003])();
          }
          plVar5 = (long *)(lVar20 + ((ulong)(uint)-(int)lVar20 & 7));
          plVar6 = plVar5 + 1;
          *plVar5 = *plVar8;
          *plVar8 = lVar20;
          plVar8[2] = lVar20 + lVar22;
          lVar22 = (long)plVar6 + ((ulong)(uint)-(int)plVar6 & 7);
        }
        plVar8[1] = lVar22 + (long)ppuVar9;
        auVar30._8_8_ = ppuVar10;
        auVar30._0_8_ = lVar22;
        return auVar30;
      }
    }
    else if ((((cVar2 == '[') && (pcVar12[2] == 'C')) &&
             ((pcVar12[3] == 'D' &&
              (((pcVar12[4] == 'A' && (pcVar12[5] == 'T')) && (pcVar12[6] == 'A')))))) &&
            (pcVar12[7] == '[')) {
      *ppuVar9 = pcVar12 + 8;
      pppuVar4 = &ppuStack_b0;
      pcStack_98 = FUN_1092d3334;
      param_2 = (undefined **)*ppuVar9;
      ppuVar10 = param_2;
      do {
        ppuVar15 = (undefined **)((long)ppuVar10 + 1);
        if (*(char *)ppuVar10 == ']') {
          if ((*(char *)ppuVar15 == ']') && (*(char *)((long)ppuVar10 + 2) == '>')) {
            puVar7 = (undefined8 *)(puVar17 + 0x60);
            uVar24 = 0x60;
            FUN_1092d4258(puVar7,0x60);
            puVar7[4] = 0;
            *puVar7 = 0;
            puVar7[1] = 0;
            *(undefined4 *)(puVar7 + 5) = 3;
            puVar7[6] = 0;
            puVar7[8] = 0;
            puVar17 = *ppuVar9;
            puVar7[1] = param_2;
            puVar7[3] = (long)puVar17 - (long)param_2;
            **ppuVar9 = 0;
            *ppuVar9 = *ppuVar9 + 3;
            auVar28._8_8_ = uVar24;
            auVar28._0_8_ = puVar7;
            return auVar28;
          }
        }
        else if (*(char *)ppuVar10 == '\0') {
          ppuVar15 = (undefined **)0x18;
          ___cxa_allocate_exception();
          puVar17 = *ppuVar9;
          *ppuVar15 = (undefined *)&PTR_FUN_110ae9c60;
          ppuVar15[1] = &UNK_10f564510;
          ppuVar15[2] = puVar17;
          ppuVar10 = &PTR_DAT_110ae9c38;
          uVar24 = 0x1092d418c;
          ___cxa_throw();
          goto SUB_1092d418c;
        }
        *ppuVar9 = (undefined *)ppuVar15;
        ppuVar10 = ppuVar15;
      } while( true );
    }
    pbVar13 = (byte *)(pcVar12 + 1);
    do {
      *ppuVar9 = pbVar13;
      pbVar23 = pbVar13 + 1;
      bVar19 = *pbVar13;
      if (bVar19 == 0x3e) goto LAB_1092d3f94;
      pbVar13 = pbVar23;
    } while (bVar19 != 0);
LAB_1092d3f68:
    puVar7 = (undefined8 *)0x18;
    ___cxa_allocate_exception();
    puVar18 = *ppuVar9;
    puVar17 = &UNK_10f564510;
    goto LAB_1092d3f84;
  }
  if (*pcVar12 == '?') {
    *ppuVar9 = pcVar12 + 1;
    bVar19 = pcVar12[1];
    if ((((bVar19 | 0x20) != 0x78) || ((byte)(pcVar12[2] | 0x20U) != 0x6d)) ||
       (((byte)(pcVar12[3] | 0x20U) != 0x6c || ((&UNK_10dfc2cf1)[(byte)pcVar12[4]] == '\0')))) {
      pbVar23 = (byte *)(pcVar12 + 2);
      do {
        if (bVar19 == 0x3f) {
          if (*pbVar23 == 0x3e) goto LAB_1092d3e00;
        }
        else if (bVar19 == 0) goto LAB_1092d3f68;
        *ppuVar9 = pbVar23;
        bVar19 = *pbVar23;
        pbVar23 = pbVar23 + 1;
      } while( true );
    }
    pcVar12 = pcVar12 + 5;
    do {
      *ppuVar9 = pcVar12;
      if (*pcVar12 == '?') {
        if (pcVar12[1] == '>') goto LAB_1092d3fbc;
      }
      else if (*pcVar12 == '\0') goto LAB_1092d3f68;
      pcVar12 = pcVar12 + 1;
    } while( true );
  }
  plVar8 = (long *)(puVar17 + 0x60);
  ppuVar10 = (undefined **)0x60;
  FUN_1092d4258(plVar8,0x60);
  plVar8[4] = 0;
  *plVar8 = 0;
  plVar8[1] = 0;
  *(undefined4 *)(plVar8 + 5) = 1;
  plVar5 = plVar8 + 6;
  *plVar5 = 0;
  unaff_x23 = (byte *)(plVar8 + 8);
  unaff_x23[0] = 0;
  unaff_x23[1] = 0;
  unaff_x23[2] = 0;
  unaff_x23[3] = 0;
  unaff_x23[4] = 0;
  unaff_x23[5] = 0;
  unaff_x23[6] = 0;
  unaff_x23[7] = 0;
  puVar17 = *ppuVar9;
  lVar22 = -1;
  do {
    lVar20 = lVar22 + 1;
    lVar22 = lVar22 + 1;
  } while ((&UNK_10dfc2df1)[(byte)puVar17[lVar20]] != '\0');
  *ppuVar9 = puVar17 + lVar22;
  if (lVar22 == 0) {
    puVar7 = (undefined8 *)0x18;
    ___cxa_allocate_exception();
    puVar18 = *ppuVar9;
    puVar17 = &UNK_10f564527;
    goto LAB_1092d3f84;
  }
  *plVar8 = (long)puVar17;
  plVar8[2] = lVar22;
  pbVar23 = *ppuVar9 + -1;
  do {
    pbVar23 = pbVar23 + 1;
  } while ((&UNK_10dfc2cf1)[*pbVar23] != '\0');
  *ppuVar9 = pbVar23;
  uVar11 = (ulong)*pbVar23;
  pbVar13 = unaff_x23;
  if ((&UNK_10dfc2ef1)[uVar11] != '\0') {
LAB_1092d3534:
    pbStack_110 = pbVar13;
    unaff_x23 = pbStack_110;
    *ppuVar9 = pbVar23 + 1;
    pbVar13 = pbVar23;
    do {
      pbVar13 = pbVar13 + 1;
    } while ((&UNK_10dfc2ef1)[*pbVar13] != '\0');
    *ppuVar9 = pbVar13;
    plVar6 = (long *)(puStack_100 + 0x60);
    ppuVar10 = (undefined **)0x38;
    FUN_1092d4258(plVar6,0x38);
    plVar6[4] = 0;
    *plVar6 = 0;
    plVar6[1] = 0;
    puVar17 = *ppuVar9;
    *plVar6 = (long)pbVar23;
    plVar6[2] = (long)puVar17 - (long)pbVar23;
    if (*(long *)unaff_x23 == 0) {
      lVar22 = 0;
      pbVar13 = unaff_x23;
    }
    else {
      lVar22 = plVar8[9];
      pbVar13 = (byte *)(lVar22 + 0x30);
    }
    *(long **)pbVar13 = plVar6;
    plVar6[5] = lVar22;
    plVar8[9] = (long)plVar6;
    plVar6[4] = (long)plVar8;
    plVar6[6] = 0;
    pbVar13 = *ppuVar9;
    do {
      pbVar14 = pbVar13;
      pbVar13 = pbVar14 + 1;
    } while ((&UNK_10dfc2cf1)[*pbVar14] != '\0');
    *ppuVar9 = pbVar14;
    if (*pbVar14 == 0x3d) {
      *ppuVar9 = pbVar14 + 1;
      lVar20 = *plVar6;
      lVar22 = 0x1132cee80;
      if (lVar20 != 0) {
        lVar22 = lVar20;
      }
      lVar1 = 0;
      if (lVar20 != 0) {
        lVar1 = (long)puVar17 - (long)pbVar23;
      }
      *(undefined1 *)(lVar22 + lVar1) = 0;
      pbVar23 = *ppuVar9;
      pbVar13 = pbVar23;
      do {
        pbVar14 = pbVar13;
        pbVar13 = pbVar14 + 1;
        pbVar23 = pbVar23 + 1;
      } while ((&UNK_10dfc2cf1)[*pbVar14] != '\0');
      *ppuVar9 = pbVar14;
      bVar19 = *pbVar14;
      if ((bVar19 == 0x22) || (bVar19 == 0x27)) {
        *ppuVar9 = pbVar13;
        uStack_104 = (uint)bVar19;
        if (uStack_104 != 0x27) {
          do {
            pbVar14 = pbVar14 + 1;
          } while ((&UNK_10dfc31f1)[*pbVar14] != '\0');
          *ppuVar9 = pbVar14;
          pbStack_f8 = pbVar14;
LAB_1092d3848:
          bVar19 = *pbVar14;
          if (bVar19 == 0x26) {
            bVar3 = pbVar14[1];
            if (bVar3 < 0x67) {
              if (bVar3 == 0x23) {
                unaff_x23 = pbVar14 + 2;
                if (*unaff_x23 == 0x78) {
                  ppuVar15 = (undefined **)0x0;
                  do {
                    ppuVar10 = ppuVar15;
                    unaff_x23 = unaff_x23 + 1;
                    ppuVar15 = (undefined **)
                               ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] + (long)ppuVar10 * 0x10);
                  } while ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] != 0xff);
                }
                else {
                  unaff_x23 = pbVar14 + 1;
                  ppuVar15 = (undefined **)0x0;
                  do {
                    ppuVar10 = ppuVar15;
                    unaff_x23 = unaff_x23 + 1;
                    ppuVar15 = (undefined **)
                               ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] + (long)ppuVar10 * 10);
                  } while ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] != 0xff);
                }
                FUN_1092d4300(&pbStack_f8,ppuVar10);
                if (*unaff_x23 != 0x3b) goto LAB_1092d4008;
                pbVar14 = unaff_x23 + 1;
                goto LAB_1092d3848;
              }
              if (bVar3 != 0x61) goto LAB_1092d3860;
              if (pbVar14[2] == 0x70) {
                if (((pbVar14[3] == 0x6f) && (pbVar14[4] == 0x73)) && (pbVar14[5] == 0x3b)) {
                  bVar19 = 0x27;
                  goto LAB_1092d3a14;
                }
              }
              else if (((pbVar14[2] == 0x6d) && (pbVar14[3] == 0x70)) && (pbVar14[4] == 0x3b)) {
                *pbStack_f8 = 0x26;
                pbVar14 = pbVar14 + 5;
                pbStack_f8 = pbStack_f8 + 1;
                goto LAB_1092d3848;
              }
            }
            else if (bVar3 == 0x67) {
              if ((pbVar14[2] == 0x74) && (pbVar14[3] == 0x3b)) {
                bVar19 = 0x3e;
LAB_1092d396c:
                *pbStack_f8 = bVar19;
                pbVar14 = pbVar14 + 4;
                pbStack_f8 = pbStack_f8 + 1;
                goto LAB_1092d3848;
              }
            }
            else {
              if (bVar3 == 0x6c) {
                if ((pbVar14[2] == 0x74) && (pbVar14[3] == 0x3b)) {
                  bVar19 = 0x3c;
                  goto LAB_1092d396c;
                }
                goto LAB_1092d3860;
              }
              if ((((bVar3 == 0x71) && (pbVar14[2] == 0x75)) && (pbVar14[3] == 0x6f)) &&
                 ((pbVar14[4] == 0x74 && (pbVar14[5] == 0x3b)))) {
                bVar19 = 0x22;
LAB_1092d3a14:
                *pbStack_f8 = bVar19;
                pbVar14 = pbVar14 + 6;
                pbStack_f8 = pbStack_f8 + 1;
                goto LAB_1092d3848;
              }
            }
          }
          else if ((bVar19 == 0) || (bVar19 == 0x22)) goto LAB_1092d3a24;
LAB_1092d3860:
          pbVar14 = pbVar14 + 1;
          *pbStack_f8 = bVar19;
          pbStack_f8 = pbStack_f8 + 1;
          goto LAB_1092d3848;
        }
        do {
          pbVar14 = pbVar14 + 1;
        } while ((&UNK_10dfc30f1)[*pbVar14] != '\0');
        *ppuVar9 = pbVar14;
        pbStack_f8 = pbVar14;
LAB_1092d3650:
        bVar19 = *pbVar14;
        if (bVar19 == 0x26) {
          bVar3 = pbVar14[1];
          if (bVar3 < 0x67) {
            if (bVar3 == 0x23) {
              unaff_x23 = pbVar14 + 2;
              if (*unaff_x23 == 0x78) {
                ppuVar15 = (undefined **)0x0;
                do {
                  ppuVar10 = ppuVar15;
                  unaff_x23 = unaff_x23 + 1;
                  ppuVar15 = (undefined **)
                             ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] + (long)ppuVar10 * 0x10);
                } while ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] != 0xff);
              }
              else {
                unaff_x23 = pbVar14 + 1;
                ppuVar15 = (undefined **)0x0;
                do {
                  ppuVar10 = ppuVar15;
                  unaff_x23 = unaff_x23 + 1;
                  ppuVar15 = (undefined **)
                             ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] + (long)ppuVar10 * 10);
                } while ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] != 0xff);
              }
              FUN_1092d4300(&pbStack_f8,ppuVar10);
              if (*unaff_x23 != 0x3b) goto LAB_1092d4008;
              pbVar14 = unaff_x23 + 1;
              goto LAB_1092d3650;
            }
            if (bVar3 != 0x61) goto LAB_1092d3668;
            if (pbVar14[2] == 0x70) {
              if (((pbVar14[3] == 0x6f) && (pbVar14[4] == 0x73)) && (pbVar14[5] == 0x3b)) {
                bVar19 = 0x27;
                goto LAB_1092d381c;
              }
            }
            else if (((pbVar14[2] == 0x6d) && (pbVar14[3] == 0x70)) && (pbVar14[4] == 0x3b)) {
              *pbStack_f8 = 0x26;
              pbVar14 = pbVar14 + 5;
              pbStack_f8 = pbStack_f8 + 1;
              goto LAB_1092d3650;
            }
          }
          else if (bVar3 == 0x67) {
            if ((pbVar14[2] == 0x74) && (pbVar14[3] == 0x3b)) {
              bVar19 = 0x3e;
LAB_1092d3774:
              *pbStack_f8 = bVar19;
              pbVar14 = pbVar14 + 4;
              pbStack_f8 = pbStack_f8 + 1;
              goto LAB_1092d3650;
            }
          }
          else {
            if (bVar3 == 0x6c) {
              if ((pbVar14[2] == 0x74) && (pbVar14[3] == 0x3b)) {
                bVar19 = 0x3c;
                goto LAB_1092d3774;
              }
              goto LAB_1092d3668;
            }
            if ((((bVar3 == 0x71) && (pbVar14[2] == 0x75)) && (pbVar14[3] == 0x6f)) &&
               ((pbVar14[4] == 0x74 && (pbVar14[5] == 0x3b)))) {
              bVar19 = 0x22;
LAB_1092d381c:
              *pbStack_f8 = bVar19;
              pbVar14 = pbVar14 + 6;
              pbStack_f8 = pbStack_f8 + 1;
              goto LAB_1092d3650;
            }
          }
        }
        else if ((bVar19 == 0) || (bVar19 == 0x27)) goto LAB_1092d3a24;
LAB_1092d3668:
        pbVar14 = pbVar14 + 1;
        *pbStack_f8 = bVar19;
        pbStack_f8 = pbStack_f8 + 1;
        goto LAB_1092d3650;
      }
      goto LAB_1092d402c;
    }
    puVar7 = (undefined8 *)0x18;
    ___cxa_allocate_exception();
    puVar18 = *ppuVar9;
    puVar17 = &UNK_10f564548;
    goto LAB_1092d3f84;
  }
LAB_1092d3a9c:
  if ((int)uVar11 == 0x2f) {
    *ppuVar9 = pbVar23 + 1;
    if (pbVar23[1] == 0x3e) {
      pbVar23 = pbVar23 + 2;
      goto LAB_1092d3e6c;
    }
  }
  else if ((int)uVar11 == 0x3e) {
    pbVar23 = pbVar23 + 1;
    *ppuVar9 = pbVar23;
    unaff_x23 = &UNK_10dfc32f1;
    do {
      pbVar13 = pbVar23 + -1;
      do {
        pbVar13 = pbVar13 + 1;
      } while ((&UNK_10dfc2cf1)[*pbVar13] != '\0');
      *ppuVar9 = pbVar13;
      bVar19 = *pbVar13;
LAB_1092d3adc:
      if (bVar19 != 0x3c) {
        if (bVar19 != 0) {
          *ppuVar9 = pbVar23;
          pbVar13 = pbVar23 + -1;
          do {
            pbVar13 = pbVar13 + 1;
          } while ((&UNK_10dfc32f1)[*pbVar13] != '\0');
          *ppuVar9 = pbVar13;
          pbStack_f8 = pbVar13;
LAB_1092d3b08:
          pbVar14 = pbStack_f8;
          bVar19 = *pbVar13;
          if (bVar19 == 0x26) {
            bVar3 = pbVar13[1];
            if (bVar3 < 0x67) {
              if (bVar3 == 0x23) {
                pbVar14 = pbVar13 + 2;
                if (*pbVar14 == 0x78) {
                  lVar22 = 0;
                  do {
                    lVar20 = lVar22;
                    pbVar14 = pbVar14 + 1;
                    lVar22 = (ulong)(byte)(&UNK_10dfc2ff1)[*pbVar14] + lVar20 * 0x10;
                  } while ((ulong)(byte)(&UNK_10dfc2ff1)[*pbVar14] != 0xff);
                }
                else {
                  pbVar14 = pbVar13 + 1;
                  lVar22 = 0;
                  do {
                    lVar20 = lVar22;
                    pbVar14 = pbVar14 + 1;
                    lVar22 = (ulong)(byte)(&UNK_10dfc2ff1)[*pbVar14] + lVar20 * 10;
                  } while ((ulong)(byte)(&UNK_10dfc2ff1)[*pbVar14] != 0xff);
                }
                FUN_1092d4300(&pbStack_f8,lVar20);
                if (*pbVar14 != 0x3b) {
                  puVar7 = (undefined8 *)0x18;
                  ___cxa_allocate_exception();
                  *puVar7 = &PTR_FUN_110ae9c60;
                  puVar7[1] = &UNK_10f564563;
                  puVar7[2] = pbVar14;
                  goto LAB_1092d3ff4;
                }
                pbVar13 = pbVar14 + 1;
                goto LAB_1092d3b08;
              }
              if (bVar3 != 0x61) goto LAB_1092d3b20;
              if (pbVar13[2] == 0x70) {
                if (((pbVar13[3] == 0x6f) && (pbVar13[4] == 0x73)) && (pbVar13[5] == 0x3b)) {
                  bVar19 = 0x27;
                  goto LAB_1092d3cd4;
                }
              }
              else if (((pbVar13[2] == 0x6d) && (pbVar13[3] == 0x70)) && (pbVar13[4] == 0x3b)) {
                *pbStack_f8 = 0x26;
                pbVar13 = pbVar13 + 5;
                pbStack_f8 = pbStack_f8 + 1;
                goto LAB_1092d3b08;
              }
            }
            else if (bVar3 == 0x67) {
              if ((pbVar13[2] == 0x74) && (pbVar13[3] == 0x3b)) {
                bVar19 = 0x3e;
LAB_1092d3c2c:
                *pbStack_f8 = bVar19;
                pbVar13 = pbVar13 + 4;
                pbStack_f8 = pbStack_f8 + 1;
                goto LAB_1092d3b08;
              }
            }
            else {
              if (bVar3 == 0x6c) {
                if ((pbVar13[2] == 0x74) && (pbVar13[3] == 0x3b)) {
                  bVar19 = 0x3c;
                  goto LAB_1092d3c2c;
                }
                goto LAB_1092d3b20;
              }
              if ((((bVar3 == 0x71) && (pbVar13[2] == 0x75)) && (pbVar13[3] == 0x6f)) &&
                 ((pbVar13[4] == 0x74 && (pbVar13[5] == 0x3b)))) {
                bVar19 = 0x22;
LAB_1092d3cd4:
                *pbStack_f8 = bVar19;
                pbVar13 = pbVar13 + 6;
                pbStack_f8 = pbStack_f8 + 1;
                goto LAB_1092d3b08;
              }
            }
          }
          else if ((bVar19 == 0) || (bVar19 == 0x3c)) goto LAB_1092d3ce4;
LAB_1092d3b20:
          pbVar13 = pbVar13 + 1;
          *pbStack_f8 = bVar19;
          pbStack_f8 = pbStack_f8 + 1;
          goto LAB_1092d3b08;
        }
        goto LAB_1092d3f68;
      }
      puVar17 = *ppuVar9;
      if (puVar17[1] == '/') goto LAB_1092d3e28;
      *ppuVar9 = puVar17 + 1;
      puVar17 = puStack_100;
      ppuVar10 = ppuVar9;
      FUN_1092d3334(puStack_100,ppuVar9);
      if (puVar17 != (undefined *)0x0) {
        if (*plVar5 == 0) {
          lVar22 = 0;
          plVar6 = plVar5;
        }
        else {
          lVar22 = plVar8[7];
          plVar6 = (long *)(lVar22 + 0x58);
        }
        *plVar6 = (long)puVar17;
        *(long *)(puVar17 + 0x50) = lVar22;
        plVar8[7] = (long)puVar17;
        *(long **)(puVar17 + 0x20) = plVar8;
        *(undefined8 *)(puVar17 + 0x58) = 0;
      }
      pbVar23 = *ppuVar9;
    } while( true );
  }
  goto LAB_1092d406c;
LAB_1092d3fc8:
  pbVar23 = (byte *)(pcVar12 + 3);
  goto LAB_1092d3f94;
LAB_1092d3e00:
  pbVar23 = pbVar23 + 1;
  goto LAB_1092d3f94;
LAB_1092d3a24:
  *ppuVar9 = pbVar14;
  plVar6[1] = (long)pbVar13;
  plVar6[3] = (long)pbStack_f8 - (long)pbVar23;
  if ((byte)**ppuVar9 != uStack_104) {
LAB_1092d402c:
    puVar7 = (undefined8 *)0x18;
    ___cxa_allocate_exception();
    puVar18 = *ppuVar9;
    puVar17 = &UNK_10f564553;
    goto LAB_1092d3f84;
  }
  *ppuVar9 = *ppuVar9 + 1;
  lVar20 = plVar6[1];
  lVar22 = 0x1132cee80;
  if (lVar20 != 0) {
    lVar22 = lVar20;
  }
  lVar1 = 0;
  if (lVar20 != 0) {
    lVar1 = (long)pbStack_f8 - (long)pbVar23;
  }
  *(undefined1 *)(lVar22 + lVar1) = 0;
  pbVar23 = *ppuVar9 + -1;
  do {
    pbVar23 = pbVar23 + 1;
  } while ((&UNK_10dfc2cf1)[*pbVar23] != '\0');
  *ppuVar9 = pbVar23;
  uVar11 = (ulong)*pbVar23;
  unaff_x23 = pbStack_110;
  pbVar13 = pbStack_110;
  if ((&UNK_10dfc2ef1)[uVar11] == '\0') goto LAB_1092d3a9c;
  goto LAB_1092d3534;
LAB_1092d3ce4:
  *ppuVar9 = pbVar13;
  puVar7 = (undefined8 *)(puStack_100 + 0x60);
  ppuVar10 = (undefined **)0x60;
  FUN_1092d4258(puVar7,0x60);
  *(undefined4 *)(puVar7 + 5) = 2;
  puVar7[6] = 0;
  puVar7[8] = 0;
  lVar22 = (long)pbVar14 - (long)pbVar23;
  *puVar7 = 0;
  puVar7[1] = pbVar23;
  puVar7[3] = lVar22;
  if (*plVar5 == 0) {
    lVar20 = 0;
    plVar6 = plVar5;
  }
  else {
    lVar20 = plVar8[7];
    plVar6 = (long *)(lVar20 + 0x58);
  }
  *plVar6 = (long)puVar7;
  puVar7[10] = lVar20;
  plVar8[7] = (long)puVar7;
  puVar7[4] = plVar8;
  puVar7[0xb] = 0;
  pcVar12 = (char *)0x1132cee80;
  if ((char *)plVar8[1] != (char *)0x0) {
    pcVar12 = (char *)plVar8[1];
  }
  if (*pcVar12 == '\0') {
    plVar8[1] = (long)pbVar23;
    plVar8[3] = lVar22;
  }
  bVar19 = **ppuVar9;
  *pbVar14 = 0;
  goto LAB_1092d3adc;
LAB_1092d3e28:
  *ppuVar9 = puVar17 + 2;
  pbVar23 = puVar17 + 1;
  do {
    pbVar23 = pbVar23 + 1;
  } while ((&UNK_10dfc2df1)[*pbVar23] != '\0');
  *ppuVar9 = pbVar23;
  do {
    pbVar13 = pbVar23;
    pbVar23 = pbVar13 + 1;
  } while ((&UNK_10dfc2cf1)[*pbVar13] != '\0');
  *ppuVar9 = pbVar13;
  if (*pbVar13 == 0x3e) {
LAB_1092d3e6c:
    *ppuVar9 = pbVar23;
    lVar22 = *plVar8;
    if (lVar22 == 0) {
      lVar20 = 0;
      lVar22 = 0x1132cee80;
    }
    else {
      lVar20 = plVar8[2];
    }
    *(undefined1 *)(lVar22 + lVar20) = 0;
    goto LAB_1092d3f98;
  }
LAB_1092d406c:
  puVar7 = (undefined8 *)0x18;
  ___cxa_allocate_exception();
  puVar18 = *ppuVar9;
  puVar17 = &UNK_10f56453d;
LAB_1092d3f84:
  *puVar7 = &PTR_FUN_110ae9c60;
  puVar7[1] = puVar17;
  puVar7[2] = puVar18;
LAB_1092d3ff4:
  do {
    ___cxa_throw();
LAB_1092d4008:
    puVar7 = (undefined8 *)0x18;
    ___cxa_allocate_exception();
    *puVar7 = &PTR_FUN_110ae9c60;
    puVar7[1] = &UNK_10f564563;
    puVar7[2] = unaff_x23;
  } while( true );
LAB_1092d3fbc:
  pbVar23 = (byte *)(pcVar12 + 2);
LAB_1092d3f94:
  plVar8 = (long *)0x0;
  *ppuVar9 = pbVar23;
  ppuVar10 = ppuVar9;
LAB_1092d3f98:
  auVar27._8_8_ = ppuVar10;
  auVar27._0_8_ = plVar8;
  return auVar27;
}



/* Entry: 1092d32dc; end: 1092d32ef;  */

/* WARNING: Possible PIC construction at 0x0001092d3efc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001092d3f00) */

undefined1  [16] FUN_1092d32dc(undefined8 param_1,undefined **param_2)

{
  long lVar1;
  undefined **ppuVar2;
  char cVar3;
  byte bVar4;
  byte **ppbVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined **ppuVar11;
  char *pcVar12;
  undefined *puVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  char *pcVar17;
  int iVar18;
  long lVar19;
  undefined *puVar20;
  byte bVar21;
  char *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar22;
  undefined8 unaff_x22;
  byte *unaff_x23;
  long *plVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  byte *pbStack_b0;
  uint uStack_a4;
  undefined *puStack_a0;
  byte *pbStack_98;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  puVar13 = &UNK_10f5644fe;
  func_0x000104c4f6cc();
  pcStack_18 = FUN_1092d32f0;
  if (param_2 < (undefined **)0x555555555555556) {
    lVar6 = (long)param_2 * 0x30;
    puStack_20 = &stack0xfffffffffffffff0;
    __Znwm(lVar6);
    auVar25._8_8_ = param_2;
    auVar25._0_8_ = lVar6;
    return auVar25;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000104c4f740();
  ppbVar5 = &pbStack_b0;
  pcStack_38 = FUN_1092d3334;
  pcVar12 = *param_2;
  puStack_a0 = puVar13;
  ppuStack_40 = &puStack_20;
  if (*pcVar12 == '!') {
    cVar3 = pcVar12[1];
    if (cVar3 == '-') {
      if (pcVar12[2] == '-') {
        pcVar12 = pcVar12 + 3;
        do {
          *param_2 = pcVar12;
          if (*pcVar12 == '-') {
            if ((pcVar12[1] == '-') && (pcVar12[2] == '>')) goto LAB_1092d3fc8;
          }
          else if (*pcVar12 == '\0') goto LAB_1092d3f68;
          pcVar12 = pcVar12 + 1;
        } while( true );
      }
    }
    else if (cVar3 == 'D') {
      if (((((pcVar12[2] == 'O') && (pcVar12[3] == 'C')) && (pcVar12[4] == 'T')) &&
          ((pcVar12[5] == 'Y' && (pcVar12[6] == 'P')))) &&
         ((pcVar12[7] == 'E' && ((&UNK_10dfc2cf1)[(byte)pcVar12[8]] != '\0')))) {
        *param_2 = pcVar12 + 9;
        uVar24 = 0x1092d3f00;
        ppuVar9 = param_2;
        ppuVar11 = param_2;
SUB_1092d418c:
        *(char **)((long)ppbVar5 + -0x20) = unaff_x20;
        *(undefined ***)((long)ppbVar5 + -0x18) = param_2;
        *(undefined1 ****)((long)ppbVar5 + -0x10) = &ppuStack_40;
        *(undefined8 *)((long)ppbVar5 + -8) = uVar24;
        pcVar12 = *ppuVar9;
        while( true ) {
          while (cVar3 = *pcVar12, cVar3 == '[') {
            pcVar12 = pcVar12 + 1;
            *ppuVar9 = pcVar12;
            iVar18 = 1;
            do {
              cVar3 = *pcVar12;
              if (cVar3 == '[') {
                iVar18 = iVar18 + 1;
              }
              else if (cVar3 == ']') {
                iVar18 = iVar18 + -1;
              }
              else if (cVar3 == '\0') goto LAB_1092d4220;
              pcVar12 = pcVar12 + 1;
              *ppuVar9 = pcVar12;
            } while (0 < iVar18);
          }
          if (cVar3 == '>') {
            *ppuVar9 = pcVar12 + 1;
            auVar28._8_8_ = ppuVar11;
            auVar28._0_8_ = ppuVar9;
            return auVar28;
          }
          if (cVar3 == '\0') break;
          pcVar12 = pcVar12 + 1;
          *ppuVar9 = pcVar12;
        }
LAB_1092d4220:
        plVar10 = (long *)0x18;
        ___cxa_allocate_exception();
        puVar13 = *ppuVar9;
        *plVar10 = (long)&PTR_FUN_110ae9c60;
        plVar10[1] = (long)&UNK_10f564510;
        plVar10[2] = (long)puVar13;
        ppuVar11 = &PTR_DAT_110ae9c38;
        ___cxa_throw();
        *(undefined8 *)((long)ppbVar5 + -0x50) = unaff_x22;
        *(undefined8 *)((long)ppbVar5 + -0x48) = unaff_x21;
        *(char **)((long)ppbVar5 + -0x40) = unaff_x20;
        *(undefined ***)((long)ppbVar5 + -0x38) = ppuVar9;
        *(undefined1 **)((long)ppbVar5 + -0x30) = (undefined1 *)((long)ppbVar5 + -0x10);
        *(code **)((long)ppbVar5 + -0x28) = FUN_1092d4258;
        lVar6 = plVar10[1] + ((ulong)(uint)-(int)plVar10[1] & 7);
        ppuVar9 = ppuVar11;
        if ((ulong)plVar10[2] < (ulong)(lVar6 + (long)ppuVar11)) {
          ppuVar2 = ppuVar11;
          if (ppuVar11 < (undefined **)0x10001) {
            ppuVar2 = (undefined **)0x10000;
          }
          lVar6 = (long)ppuVar2 + 0x16;
          lVar19 = lVar6;
          if ((code *)plVar10[0x2003] == (code *)0x0) {
            __Znam();
          }
          else {
            (*(code *)plVar10[0x2003])();
          }
          plVar23 = (long *)(lVar19 + ((ulong)(uint)-(int)lVar19 & 7));
          plVar7 = plVar23 + 1;
          *plVar23 = *plVar10;
          *plVar10 = lVar19;
          plVar10[2] = lVar19 + lVar6;
          lVar6 = (long)plVar7 + ((ulong)(uint)-(int)plVar7 & 7);
        }
        plVar10[1] = lVar6 + (long)ppuVar11;
        auVar29._8_8_ = ppuVar9;
        auVar29._0_8_ = lVar6;
        return auVar29;
      }
    }
    else if ((((cVar3 == '[') && (pcVar12[2] == 'C')) &&
             ((pcVar12[3] == 'D' &&
              (((pcVar12[4] == 'A' && (pcVar12[5] == 'T')) && (pcVar12[6] == 'A')))))) &&
            (pcVar12[7] == '[')) {
      *param_2 = pcVar12 + 8;
      ppbVar5 = (byte **)&stack0xffffffffffffffb0;
      pcStack_38 = FUN_1092d3334;
      unaff_x20 = *param_2;
      pcVar12 = unaff_x20;
      do {
        pcVar17 = pcVar12 + 1;
        if (*pcVar12 == ']') {
          if ((*pcVar17 == ']') && (pcVar12[2] == '>')) {
            puVar8 = (undefined8 *)(puVar13 + 0x60);
            uVar24 = 0x60;
            FUN_1092d4258(puVar8,0x60);
            puVar8[4] = 0;
            *puVar8 = 0;
            puVar8[1] = 0;
            *(undefined4 *)(puVar8 + 5) = 3;
            puVar8[6] = 0;
            puVar8[8] = 0;
            puVar13 = *param_2;
            puVar8[1] = unaff_x20;
            puVar8[3] = (long)puVar13 - (long)unaff_x20;
            **param_2 = 0;
            *param_2 = *param_2 + 3;
            auVar27._8_8_ = uVar24;
            auVar27._0_8_ = puVar8;
            return auVar27;
          }
        }
        else if (*pcVar12 == '\0') {
          ppuVar9 = (undefined **)0x18;
          ___cxa_allocate_exception();
          puVar13 = *param_2;
          *ppuVar9 = (undefined *)&PTR_FUN_110ae9c60;
          ppuVar9[1] = &UNK_10f564510;
          ppuVar9[2] = puVar13;
          ppuVar11 = &PTR_DAT_110ae9c38;
          uVar24 = 0x1092d418c;
          ___cxa_throw();
          goto SUB_1092d418c;
        }
        *param_2 = pcVar17;
        pcVar12 = pcVar17;
      } while( true );
    }
    pbVar15 = (byte *)(pcVar12 + 1);
    do {
      *param_2 = pbVar15;
      pbVar22 = pbVar15 + 1;
      bVar21 = *pbVar15;
      if (bVar21 == 0x3e) goto LAB_1092d3f94;
      pbVar15 = pbVar22;
    } while (bVar21 != 0);
LAB_1092d3f68:
    puVar8 = (undefined8 *)0x18;
    ___cxa_allocate_exception();
    puVar20 = *param_2;
    puVar13 = &UNK_10f564510;
    goto LAB_1092d3f84;
  }
  if (*pcVar12 == '?') {
    *param_2 = pcVar12 + 1;
    bVar21 = pcVar12[1];
    if ((((bVar21 | 0x20) != 0x78) || ((byte)(pcVar12[2] | 0x20U) != 0x6d)) ||
       (((byte)(pcVar12[3] | 0x20U) != 0x6c || ((&UNK_10dfc2cf1)[(byte)pcVar12[4]] == '\0')))) {
      pbVar22 = (byte *)(pcVar12 + 2);
      do {
        if (bVar21 == 0x3f) {
          if (*pbVar22 == 0x3e) goto LAB_1092d3e00;
        }
        else if (bVar21 == 0) goto LAB_1092d3f68;
        *param_2 = pbVar22;
        bVar21 = *pbVar22;
        pbVar22 = pbVar22 + 1;
      } while( true );
    }
    pcVar12 = pcVar12 + 5;
    do {
      *param_2 = pcVar12;
      if (*pcVar12 == '?') {
        if (pcVar12[1] == '>') goto LAB_1092d3fbc;
      }
      else if (*pcVar12 == '\0') goto LAB_1092d3f68;
      pcVar12 = pcVar12 + 1;
    } while( true );
  }
  plVar10 = (long *)(puVar13 + 0x60);
  ppuVar11 = (undefined **)0x60;
  FUN_1092d4258(plVar10,0x60);
  plVar10[4] = 0;
  *plVar10 = 0;
  plVar10[1] = 0;
  *(undefined4 *)(plVar10 + 5) = 1;
  plVar23 = plVar10 + 6;
  *plVar23 = 0;
  unaff_x23 = (byte *)(plVar10 + 8);
  unaff_x23[0] = 0;
  unaff_x23[1] = 0;
  unaff_x23[2] = 0;
  unaff_x23[3] = 0;
  unaff_x23[4] = 0;
  unaff_x23[5] = 0;
  unaff_x23[6] = 0;
  unaff_x23[7] = 0;
  puVar13 = *param_2;
  lVar6 = -1;
  do {
    lVar19 = lVar6 + 1;
    lVar6 = lVar6 + 1;
  } while ((&UNK_10dfc2df1)[(byte)puVar13[lVar19]] != '\0');
  *param_2 = puVar13 + lVar6;
  if (lVar6 == 0) {
    puVar8 = (undefined8 *)0x18;
    ___cxa_allocate_exception();
    puVar20 = *param_2;
    puVar13 = &UNK_10f564527;
    goto LAB_1092d3f84;
  }
  *plVar10 = (long)puVar13;
  plVar10[2] = lVar6;
  pbVar22 = *param_2 + -1;
  do {
    pbVar22 = pbVar22 + 1;
  } while ((&UNK_10dfc2cf1)[*pbVar22] != '\0');
  *param_2 = pbVar22;
  uVar14 = (ulong)*pbVar22;
  pbVar15 = unaff_x23;
  if ((&UNK_10dfc2ef1)[uVar14] != '\0') {
LAB_1092d3534:
    pbStack_b0 = pbVar15;
    unaff_x23 = pbStack_b0;
    *param_2 = pbVar22 + 1;
    pbVar15 = pbVar22;
    do {
      pbVar15 = pbVar15 + 1;
    } while ((&UNK_10dfc2ef1)[*pbVar15] != '\0');
    *param_2 = pbVar15;
    plVar7 = (long *)(puStack_a0 + 0x60);
    ppuVar11 = (undefined **)0x38;
    FUN_1092d4258(plVar7,0x38);
    plVar7[4] = 0;
    *plVar7 = 0;
    plVar7[1] = 0;
    puVar13 = *param_2;
    *plVar7 = (long)pbVar22;
    plVar7[2] = (long)puVar13 - (long)pbVar22;
    if (*(long *)unaff_x23 == 0) {
      lVar6 = 0;
      pbVar15 = unaff_x23;
    }
    else {
      lVar6 = plVar10[9];
      pbVar15 = (byte *)(lVar6 + 0x30);
    }
    *(long **)pbVar15 = plVar7;
    plVar7[5] = lVar6;
    plVar10[9] = (long)plVar7;
    plVar7[4] = (long)plVar10;
    plVar7[6] = 0;
    pbVar15 = *param_2;
    do {
      pbVar16 = pbVar15;
      pbVar15 = pbVar16 + 1;
    } while ((&UNK_10dfc2cf1)[*pbVar16] != '\0');
    *param_2 = pbVar16;
    if (*pbVar16 == 0x3d) {
      *param_2 = pbVar16 + 1;
      lVar19 = *plVar7;
      lVar6 = 0x1132cee80;
      if (lVar19 != 0) {
        lVar6 = lVar19;
      }
      lVar1 = 0;
      if (lVar19 != 0) {
        lVar1 = (long)puVar13 - (long)pbVar22;
      }
      *(undefined1 *)(lVar6 + lVar1) = 0;
      pbVar22 = *param_2;
      pbVar15 = pbVar22;
      do {
        pbVar16 = pbVar15;
        pbVar15 = pbVar16 + 1;
        pbVar22 = pbVar22 + 1;
      } while ((&UNK_10dfc2cf1)[*pbVar16] != '\0');
      *param_2 = pbVar16;
      bVar21 = *pbVar16;
      if ((bVar21 == 0x22) || (bVar21 == 0x27)) {
        *param_2 = pbVar15;
        uStack_a4 = (uint)bVar21;
        if (uStack_a4 != 0x27) {
          do {
            pbVar16 = pbVar16 + 1;
          } while ((&UNK_10dfc31f1)[*pbVar16] != '\0');
          *param_2 = pbVar16;
          pbStack_98 = pbVar16;
LAB_1092d3848:
          bVar21 = *pbVar16;
          if (bVar21 == 0x26) {
            bVar4 = pbVar16[1];
            if (bVar4 < 0x67) {
              if (bVar4 == 0x23) {
                unaff_x23 = pbVar16 + 2;
                if (*unaff_x23 == 0x78) {
                  ppuVar9 = (undefined **)0x0;
                  do {
                    ppuVar11 = ppuVar9;
                    unaff_x23 = unaff_x23 + 1;
                    ppuVar9 = (undefined **)
                              ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] + (long)ppuVar11 * 0x10);
                  } while ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] != 0xff);
                }
                else {
                  unaff_x23 = pbVar16 + 1;
                  ppuVar9 = (undefined **)0x0;
                  do {
                    ppuVar11 = ppuVar9;
                    unaff_x23 = unaff_x23 + 1;
                    ppuVar9 = (undefined **)
                              ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] + (long)ppuVar11 * 10);
                  } while ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] != 0xff);
                }
                FUN_1092d4300(&pbStack_98,ppuVar11);
                if (*unaff_x23 != 0x3b) goto LAB_1092d4008;
                pbVar16 = unaff_x23 + 1;
                goto LAB_1092d3848;
              }
              if (bVar4 != 0x61) goto LAB_1092d3860;
              if (pbVar16[2] == 0x70) {
                if (((pbVar16[3] == 0x6f) && (pbVar16[4] == 0x73)) && (pbVar16[5] == 0x3b)) {
                  bVar21 = 0x27;
                  goto LAB_1092d3a14;
                }
              }
              else if (((pbVar16[2] == 0x6d) && (pbVar16[3] == 0x70)) && (pbVar16[4] == 0x3b)) {
                *pbStack_98 = 0x26;
                pbVar16 = pbVar16 + 5;
                pbStack_98 = pbStack_98 + 1;
                goto LAB_1092d3848;
              }
            }
            else if (bVar4 == 0x67) {
              if ((pbVar16[2] == 0x74) && (pbVar16[3] == 0x3b)) {
                bVar21 = 0x3e;
LAB_1092d396c:
                *pbStack_98 = bVar21;
                pbVar16 = pbVar16 + 4;
                pbStack_98 = pbStack_98 + 1;
                goto LAB_1092d3848;
              }
            }
            else {
              if (bVar4 == 0x6c) {
                if ((pbVar16[2] == 0x74) && (pbVar16[3] == 0x3b)) {
                  bVar21 = 0x3c;
                  goto LAB_1092d396c;
                }
                goto LAB_1092d3860;
              }
              if ((((bVar4 == 0x71) && (pbVar16[2] == 0x75)) && (pbVar16[3] == 0x6f)) &&
                 ((pbVar16[4] == 0x74 && (pbVar16[5] == 0x3b)))) {
                bVar21 = 0x22;
LAB_1092d3a14:
                *pbStack_98 = bVar21;
                pbVar16 = pbVar16 + 6;
                pbStack_98 = pbStack_98 + 1;
                goto LAB_1092d3848;
              }
            }
          }
          else if ((bVar21 == 0) || (bVar21 == 0x22)) goto LAB_1092d3a24;
LAB_1092d3860:
          pbVar16 = pbVar16 + 1;
          *pbStack_98 = bVar21;
          pbStack_98 = pbStack_98 + 1;
          goto LAB_1092d3848;
        }
        do {
          pbVar16 = pbVar16 + 1;
        } while ((&UNK_10dfc30f1)[*pbVar16] != '\0');
        *param_2 = pbVar16;
        pbStack_98 = pbVar16;
LAB_1092d3650:
        bVar21 = *pbVar16;
        if (bVar21 == 0x26) {
          bVar4 = pbVar16[1];
          if (bVar4 < 0x67) {
            if (bVar4 == 0x23) {
              unaff_x23 = pbVar16 + 2;
              if (*unaff_x23 == 0x78) {
                ppuVar9 = (undefined **)0x0;
                do {
                  ppuVar11 = ppuVar9;
                  unaff_x23 = unaff_x23 + 1;
                  ppuVar9 = (undefined **)
                            ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] + (long)ppuVar11 * 0x10);
                } while ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] != 0xff);
              }
              else {
                unaff_x23 = pbVar16 + 1;
                ppuVar9 = (undefined **)0x0;
                do {
                  ppuVar11 = ppuVar9;
                  unaff_x23 = unaff_x23 + 1;
                  ppuVar9 = (undefined **)
                            ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] + (long)ppuVar11 * 10);
                } while ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] != 0xff);
              }
              FUN_1092d4300(&pbStack_98,ppuVar11);
              if (*unaff_x23 != 0x3b) goto LAB_1092d4008;
              pbVar16 = unaff_x23 + 1;
              goto LAB_1092d3650;
            }
            if (bVar4 != 0x61) goto LAB_1092d3668;
            if (pbVar16[2] == 0x70) {
              if (((pbVar16[3] == 0x6f) && (pbVar16[4] == 0x73)) && (pbVar16[5] == 0x3b)) {
                bVar21 = 0x27;
                goto LAB_1092d381c;
              }
            }
            else if (((pbVar16[2] == 0x6d) && (pbVar16[3] == 0x70)) && (pbVar16[4] == 0x3b)) {
              *pbStack_98 = 0x26;
              pbVar16 = pbVar16 + 5;
              pbStack_98 = pbStack_98 + 1;
              goto LAB_1092d3650;
            }
          }
          else if (bVar4 == 0x67) {
            if ((pbVar16[2] == 0x74) && (pbVar16[3] == 0x3b)) {
              bVar21 = 0x3e;
LAB_1092d3774:
              *pbStack_98 = bVar21;
              pbVar16 = pbVar16 + 4;
              pbStack_98 = pbStack_98 + 1;
              goto LAB_1092d3650;
            }
          }
          else {
            if (bVar4 == 0x6c) {
              if ((pbVar16[2] == 0x74) && (pbVar16[3] == 0x3b)) {
                bVar21 = 0x3c;
                goto LAB_1092d3774;
              }
              goto LAB_1092d3668;
            }
            if ((((bVar4 == 0x71) && (pbVar16[2] == 0x75)) && (pbVar16[3] == 0x6f)) &&
               ((pbVar16[4] == 0x74 && (pbVar16[5] == 0x3b)))) {
              bVar21 = 0x22;
LAB_1092d381c:
              *pbStack_98 = bVar21;
              pbVar16 = pbVar16 + 6;
              pbStack_98 = pbStack_98 + 1;
              goto LAB_1092d3650;
            }
          }
        }
        else if ((bVar21 == 0) || (bVar21 == 0x27)) goto LAB_1092d3a24;
LAB_1092d3668:
        pbVar16 = pbVar16 + 1;
        *pbStack_98 = bVar21;
        pbStack_98 = pbStack_98 + 1;
        goto LAB_1092d3650;
      }
      goto LAB_1092d402c;
    }
    puVar8 = (undefined8 *)0x18;
    ___cxa_allocate_exception();
    puVar20 = *param_2;
    puVar13 = &UNK_10f564548;
    goto LAB_1092d3f84;
  }
LAB_1092d3a9c:
  if ((int)uVar14 == 0x2f) {
    *param_2 = pbVar22 + 1;
    if (pbVar22[1] == 0x3e) {
      pbVar22 = pbVar22 + 2;
      goto LAB_1092d3e6c;
    }
  }
  else if ((int)uVar14 == 0x3e) {
    pbVar22 = pbVar22 + 1;
    *param_2 = pbVar22;
    unaff_x23 = &UNK_10dfc32f1;
    do {
      pbVar15 = pbVar22 + -1;
      do {
        pbVar15 = pbVar15 + 1;
      } while ((&UNK_10dfc2cf1)[*pbVar15] != '\0');
      *param_2 = pbVar15;
      bVar21 = *pbVar15;
LAB_1092d3adc:
      if (bVar21 != 0x3c) {
        if (bVar21 != 0) {
          *param_2 = pbVar22;
          pbVar15 = pbVar22 + -1;
          do {
            pbVar15 = pbVar15 + 1;
          } while ((&UNK_10dfc32f1)[*pbVar15] != '\0');
          *param_2 = pbVar15;
          pbStack_98 = pbVar15;
LAB_1092d3b08:
          pbVar16 = pbStack_98;
          bVar21 = *pbVar15;
          if (bVar21 == 0x26) {
            bVar4 = pbVar15[1];
            if (bVar4 < 0x67) {
              if (bVar4 == 0x23) {
                pbVar16 = pbVar15 + 2;
                if (*pbVar16 == 0x78) {
                  lVar6 = 0;
                  do {
                    lVar19 = lVar6;
                    pbVar16 = pbVar16 + 1;
                    lVar6 = (ulong)(byte)(&UNK_10dfc2ff1)[*pbVar16] + lVar19 * 0x10;
                  } while ((ulong)(byte)(&UNK_10dfc2ff1)[*pbVar16] != 0xff);
                }
                else {
                  pbVar16 = pbVar15 + 1;
                  lVar6 = 0;
                  do {
                    lVar19 = lVar6;
                    pbVar16 = pbVar16 + 1;
                    lVar6 = (ulong)(byte)(&UNK_10dfc2ff1)[*pbVar16] + lVar19 * 10;
                  } while ((ulong)(byte)(&UNK_10dfc2ff1)[*pbVar16] != 0xff);
                }
                FUN_1092d4300(&pbStack_98,lVar19);
                if (*pbVar16 != 0x3b) {
                  puVar8 = (undefined8 *)0x18;
                  ___cxa_allocate_exception();
                  *puVar8 = &PTR_FUN_110ae9c60;
                  puVar8[1] = &UNK_10f564563;
                  puVar8[2] = pbVar16;
                  goto LAB_1092d3ff4;
                }
                pbVar15 = pbVar16 + 1;
                goto LAB_1092d3b08;
              }
              if (bVar4 != 0x61) goto LAB_1092d3b20;
              if (pbVar15[2] == 0x70) {
                if (((pbVar15[3] == 0x6f) && (pbVar15[4] == 0x73)) && (pbVar15[5] == 0x3b)) {
                  bVar21 = 0x27;
                  goto LAB_1092d3cd4;
                }
              }
              else if (((pbVar15[2] == 0x6d) && (pbVar15[3] == 0x70)) && (pbVar15[4] == 0x3b)) {
                *pbStack_98 = 0x26;
                pbVar15 = pbVar15 + 5;
                pbStack_98 = pbStack_98 + 1;
                goto LAB_1092d3b08;
              }
            }
            else if (bVar4 == 0x67) {
              if ((pbVar15[2] == 0x74) && (pbVar15[3] == 0x3b)) {
                bVar21 = 0x3e;
LAB_1092d3c2c:
                *pbStack_98 = bVar21;
                pbVar15 = pbVar15 + 4;
                pbStack_98 = pbStack_98 + 1;
                goto LAB_1092d3b08;
              }
            }
            else {
              if (bVar4 == 0x6c) {
                if ((pbVar15[2] == 0x74) && (pbVar15[3] == 0x3b)) {
                  bVar21 = 0x3c;
                  goto LAB_1092d3c2c;
                }
                goto LAB_1092d3b20;
              }
              if ((((bVar4 == 0x71) && (pbVar15[2] == 0x75)) && (pbVar15[3] == 0x6f)) &&
                 ((pbVar15[4] == 0x74 && (pbVar15[5] == 0x3b)))) {
                bVar21 = 0x22;
LAB_1092d3cd4:
                *pbStack_98 = bVar21;
                pbVar15 = pbVar15 + 6;
                pbStack_98 = pbStack_98 + 1;
                goto LAB_1092d3b08;
              }
            }
          }
          else if ((bVar21 == 0) || (bVar21 == 0x3c)) goto LAB_1092d3ce4;
LAB_1092d3b20:
          pbVar15 = pbVar15 + 1;
          *pbStack_98 = bVar21;
          pbStack_98 = pbStack_98 + 1;
          goto LAB_1092d3b08;
        }
        goto LAB_1092d3f68;
      }
      puVar13 = *param_2;
      if (puVar13[1] == '/') goto LAB_1092d3e28;
      *param_2 = puVar13 + 1;
      puVar13 = puStack_a0;
      ppuVar11 = param_2;
      FUN_1092d3334(puStack_a0,param_2);
      if (puVar13 != (undefined *)0x0) {
        if (*plVar23 == 0) {
          lVar6 = 0;
          plVar7 = plVar23;
        }
        else {
          lVar6 = plVar10[7];
          plVar7 = (long *)(lVar6 + 0x58);
        }
        *plVar7 = (long)puVar13;
        *(long *)(puVar13 + 0x50) = lVar6;
        plVar10[7] = (long)puVar13;
        *(long **)(puVar13 + 0x20) = plVar10;
        *(undefined8 *)(puVar13 + 0x58) = 0;
      }
      pbVar22 = *param_2;
    } while( true );
  }
LAB_1092d406c:
  puVar8 = (undefined8 *)0x18;
  ___cxa_allocate_exception();
  puVar20 = *param_2;
  puVar13 = &UNK_10f56453d;
LAB_1092d3f84:
  *puVar8 = &PTR_FUN_110ae9c60;
  puVar8[1] = puVar13;
  puVar8[2] = puVar20;
LAB_1092d3ff4:
  do {
    ___cxa_throw();
LAB_1092d4008:
    puVar8 = (undefined8 *)0x18;
    ___cxa_allocate_exception();
    *puVar8 = &PTR_FUN_110ae9c60;
    puVar8[1] = &UNK_10f564563;
    puVar8[2] = unaff_x23;
  } while( true );
LAB_1092d3fc8:
  pbVar22 = (byte *)(pcVar12 + 3);
  goto LAB_1092d3f94;
LAB_1092d3e00:
  pbVar22 = pbVar22 + 1;
  goto LAB_1092d3f94;
LAB_1092d3a24:
  *param_2 = pbVar16;
  plVar7[1] = (long)pbVar15;
  plVar7[3] = (long)pbStack_98 - (long)pbVar22;
  if ((byte)**param_2 != uStack_a4) {
LAB_1092d402c:
    puVar8 = (undefined8 *)0x18;
    ___cxa_allocate_exception();
    puVar20 = *param_2;
    puVar13 = &UNK_10f564553;
    goto LAB_1092d3f84;
  }
  *param_2 = *param_2 + 1;
  lVar19 = plVar7[1];
  lVar6 = 0x1132cee80;
  if (lVar19 != 0) {
    lVar6 = lVar19;
  }
  lVar1 = 0;
  if (lVar19 != 0) {
    lVar1 = (long)pbStack_98 - (long)pbVar22;
  }
  *(undefined1 *)(lVar6 + lVar1) = 0;
  pbVar22 = *param_2 + -1;
  do {
    pbVar22 = pbVar22 + 1;
  } while ((&UNK_10dfc2cf1)[*pbVar22] != '\0');
  *param_2 = pbVar22;
  uVar14 = (ulong)*pbVar22;
  unaff_x23 = pbStack_b0;
  pbVar15 = pbStack_b0;
  if ((&UNK_10dfc2ef1)[uVar14] == '\0') goto LAB_1092d3a9c;
  goto LAB_1092d3534;
LAB_1092d3ce4:
  *param_2 = pbVar15;
  puVar8 = (undefined8 *)(puStack_a0 + 0x60);
  ppuVar11 = (undefined **)0x60;
  FUN_1092d4258(puVar8,0x60);
  *(undefined4 *)(puVar8 + 5) = 2;
  puVar8[6] = 0;
  puVar8[8] = 0;
  lVar6 = (long)pbVar16 - (long)pbVar22;
  *puVar8 = 0;
  puVar8[1] = pbVar22;
  puVar8[3] = lVar6;
  if (*plVar23 == 0) {
    lVar19 = 0;
    plVar7 = plVar23;
  }
  else {
    lVar19 = plVar10[7];
    plVar7 = (long *)(lVar19 + 0x58);
  }
  *plVar7 = (long)puVar8;
  puVar8[10] = lVar19;
  plVar10[7] = (long)puVar8;
  puVar8[4] = plVar10;
  puVar8[0xb] = 0;
  pcVar12 = (char *)0x1132cee80;
  if ((char *)plVar10[1] != (char *)0x0) {
    pcVar12 = (char *)plVar10[1];
  }
  if (*pcVar12 == '\0') {
    plVar10[1] = (long)pbVar22;
    plVar10[3] = lVar6;
  }
  bVar21 = **param_2;
  *pbVar16 = 0;
  goto LAB_1092d3adc;
LAB_1092d3e28:
  *param_2 = puVar13 + 2;
  pbVar22 = puVar13 + 1;
  do {
    pbVar22 = pbVar22 + 1;
  } while ((&UNK_10dfc2df1)[*pbVar22] != '\0');
  *param_2 = pbVar22;
  do {
    pbVar15 = pbVar22;
    pbVar22 = pbVar15 + 1;
  } while ((&UNK_10dfc2cf1)[*pbVar15] != '\0');
  *param_2 = pbVar15;
  if (*pbVar15 == 0x3e) {
LAB_1092d3e6c:
    *param_2 = pbVar22;
    lVar6 = *plVar10;
    if (lVar6 == 0) {
      lVar19 = 0;
      lVar6 = 0x1132cee80;
    }
    else {
      lVar19 = plVar10[2];
    }
    *(undefined1 *)(lVar6 + lVar19) = 0;
    goto LAB_1092d3f98;
  }
  goto LAB_1092d406c;
LAB_1092d3fbc:
  pbVar22 = (byte *)(pcVar12 + 2);
LAB_1092d3f94:
  plVar10 = (long *)0x0;
  *param_2 = pbVar22;
  ppuVar11 = param_2;
LAB_1092d3f98:
  auVar26._8_8_ = ppuVar11;
  auVar26._0_8_ = plVar10;
  return auVar26;
}



/* Entry: 1092d32f0; end: 1092d3333;  */

/* WARNING: Possible PIC construction at 0x0001092d3efc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001092d3f00) */

undefined1  [16] FUN_1092d32f0(long param_1,undefined **param_2)

{
  long lVar1;
  undefined **ppuVar2;
  char cVar3;
  byte bVar4;
  byte **ppbVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined **ppuVar11;
  char *pcVar12;
  undefined *puVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  char *pcVar17;
  int iVar18;
  long lVar19;
  undefined *puVar20;
  byte bVar21;
  char *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar22;
  undefined8 unaff_x22;
  byte *unaff_x23;
  long *plVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  byte *pbStack_a0;
  uint uStack_94;
  long lStack_90;
  byte *pbStack_88;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (param_2 < (undefined **)0x555555555555556) {
    lVar6 = (long)param_2 * 0x30;
    __Znwm(lVar6);
    auVar25._8_8_ = param_2;
    auVar25._0_8_ = lVar6;
    return auVar25;
  }
  func_0x000104c4f740();
  ppbVar5 = &pbStack_a0;
  pcStack_28 = FUN_1092d3334;
  pcVar12 = *param_2;
  lStack_90 = param_1;
  puStack_30 = &stack0xfffffffffffffff0;
  if (*pcVar12 == '!') {
    cVar3 = pcVar12[1];
    if (cVar3 == '-') {
      if (pcVar12[2] == '-') {
        pcVar12 = pcVar12 + 3;
        do {
          *param_2 = pcVar12;
          if (*pcVar12 == '-') {
            if ((pcVar12[1] == '-') && (pcVar12[2] == '>')) goto LAB_1092d3fc8;
          }
          else if (*pcVar12 == '\0') goto LAB_1092d3f68;
          pcVar12 = pcVar12 + 1;
        } while( true );
      }
    }
    else if (cVar3 == 'D') {
      if (((((pcVar12[2] == 'O') && (pcVar12[3] == 'C')) && (pcVar12[4] == 'T')) &&
          ((pcVar12[5] == 'Y' && (pcVar12[6] == 'P')))) &&
         ((pcVar12[7] == 'E' && ((&UNK_10dfc2cf1)[(byte)pcVar12[8]] != '\0')))) {
        *param_2 = pcVar12 + 9;
        uVar24 = 0x1092d3f00;
        ppuVar9 = param_2;
        ppuVar11 = param_2;
SUB_1092d418c:
        *(char **)((long)ppbVar5 + -0x20) = unaff_x20;
        *(undefined ***)((long)ppbVar5 + -0x18) = param_2;
        *(undefined1 ***)((long)ppbVar5 + -0x10) = &puStack_30;
        *(undefined8 *)((long)ppbVar5 + -8) = uVar24;
        pcVar12 = *ppuVar9;
        while( true ) {
          while (cVar3 = *pcVar12, cVar3 == '[') {
            pcVar12 = pcVar12 + 1;
            *ppuVar9 = pcVar12;
            iVar18 = 1;
            do {
              cVar3 = *pcVar12;
              if (cVar3 == '[') {
                iVar18 = iVar18 + 1;
              }
              else if (cVar3 == ']') {
                iVar18 = iVar18 + -1;
              }
              else if (cVar3 == '\0') goto LAB_1092d4220;
              pcVar12 = pcVar12 + 1;
              *ppuVar9 = pcVar12;
            } while (0 < iVar18);
          }
          if (cVar3 == '>') {
            *ppuVar9 = pcVar12 + 1;
            auVar28._8_8_ = ppuVar11;
            auVar28._0_8_ = ppuVar9;
            return auVar28;
          }
          if (cVar3 == '\0') break;
          pcVar12 = pcVar12 + 1;
          *ppuVar9 = pcVar12;
        }
LAB_1092d4220:
        plVar10 = (long *)0x18;
        ___cxa_allocate_exception();
        puVar13 = *ppuVar9;
        *plVar10 = (long)&PTR_FUN_110ae9c60;
        plVar10[1] = (long)&UNK_10f564510;
        plVar10[2] = (long)puVar13;
        ppuVar11 = &PTR_DAT_110ae9c38;
        ___cxa_throw();
        *(undefined8 *)((long)ppbVar5 + -0x50) = unaff_x22;
        *(undefined8 *)((long)ppbVar5 + -0x48) = unaff_x21;
        *(char **)((long)ppbVar5 + -0x40) = unaff_x20;
        *(undefined ***)((long)ppbVar5 + -0x38) = ppuVar9;
        *(undefined1 **)((long)ppbVar5 + -0x30) = (undefined1 *)((long)ppbVar5 + -0x10);
        *(code **)((long)ppbVar5 + -0x28) = FUN_1092d4258;
        lVar6 = plVar10[1] + ((ulong)(uint)-(int)plVar10[1] & 7);
        ppuVar9 = ppuVar11;
        if ((ulong)plVar10[2] < (ulong)(lVar6 + (long)ppuVar11)) {
          ppuVar2 = ppuVar11;
          if (ppuVar11 < (undefined **)0x10001) {
            ppuVar2 = (undefined **)0x10000;
          }
          lVar6 = (long)ppuVar2 + 0x16;
          lVar19 = lVar6;
          if ((code *)plVar10[0x2003] == (code *)0x0) {
            __Znam();
          }
          else {
            (*(code *)plVar10[0x2003])();
          }
          plVar23 = (long *)(lVar19 + ((ulong)(uint)-(int)lVar19 & 7));
          plVar7 = plVar23 + 1;
          *plVar23 = *plVar10;
          *plVar10 = lVar19;
          plVar10[2] = lVar19 + lVar6;
          lVar6 = (long)plVar7 + ((ulong)(uint)-(int)plVar7 & 7);
        }
        plVar10[1] = lVar6 + (long)ppuVar11;
        auVar29._8_8_ = ppuVar9;
        auVar29._0_8_ = lVar6;
        return auVar29;
      }
    }
    else if ((((cVar3 == '[') && (pcVar12[2] == 'C')) &&
             ((pcVar12[3] == 'D' &&
              (((pcVar12[4] == 'A' && (pcVar12[5] == 'T')) && (pcVar12[6] == 'A')))))) &&
            (pcVar12[7] == '[')) {
      *param_2 = pcVar12 + 8;
      ppbVar5 = (byte **)&stack0xffffffffffffffc0;
      pcStack_28 = FUN_1092d3334;
      unaff_x20 = *param_2;
      pcVar12 = unaff_x20;
      do {
        pcVar17 = pcVar12 + 1;
        if (*pcVar12 == ']') {
          if ((*pcVar17 == ']') && (pcVar12[2] == '>')) {
            puVar8 = (undefined8 *)(param_1 + 0x60);
            uVar24 = 0x60;
            FUN_1092d4258(puVar8,0x60);
            puVar8[4] = 0;
            *puVar8 = 0;
            puVar8[1] = 0;
            *(undefined4 *)(puVar8 + 5) = 3;
            puVar8[6] = 0;
            puVar8[8] = 0;
            puVar13 = *param_2;
            puVar8[1] = unaff_x20;
            puVar8[3] = (long)puVar13 - (long)unaff_x20;
            **param_2 = 0;
            *param_2 = *param_2 + 3;
            auVar27._8_8_ = uVar24;
            auVar27._0_8_ = puVar8;
            return auVar27;
          }
        }
        else if (*pcVar12 == '\0') {
          ppuVar9 = (undefined **)0x18;
          ___cxa_allocate_exception();
          puVar13 = *param_2;
          *ppuVar9 = (undefined *)&PTR_FUN_110ae9c60;
          ppuVar9[1] = &UNK_10f564510;
          ppuVar9[2] = puVar13;
          ppuVar11 = &PTR_DAT_110ae9c38;
          uVar24 = 0x1092d418c;
          ___cxa_throw();
          goto SUB_1092d418c;
        }
        *param_2 = pcVar17;
        pcVar12 = pcVar17;
      } while( true );
    }
    pbVar15 = (byte *)(pcVar12 + 1);
    do {
      *param_2 = pbVar15;
      pbVar22 = pbVar15 + 1;
      bVar21 = *pbVar15;
      if (bVar21 == 0x3e) goto LAB_1092d3f94;
      pbVar15 = pbVar22;
    } while (bVar21 != 0);
LAB_1092d3f68:
    puVar8 = (undefined8 *)0x18;
    ___cxa_allocate_exception();
    puVar20 = *param_2;
    puVar13 = &UNK_10f564510;
    goto LAB_1092d3f84;
  }
  if (*pcVar12 == '?') {
    *param_2 = pcVar12 + 1;
    bVar21 = pcVar12[1];
    if ((((bVar21 | 0x20) != 0x78) || ((byte)(pcVar12[2] | 0x20U) != 0x6d)) ||
       (((byte)(pcVar12[3] | 0x20U) != 0x6c || ((&UNK_10dfc2cf1)[(byte)pcVar12[4]] == '\0')))) {
      pbVar22 = (byte *)(pcVar12 + 2);
      do {
        if (bVar21 == 0x3f) {
          if (*pbVar22 == 0x3e) goto LAB_1092d3e00;
        }
        else if (bVar21 == 0) goto LAB_1092d3f68;
        *param_2 = pbVar22;
        bVar21 = *pbVar22;
        pbVar22 = pbVar22 + 1;
      } while( true );
    }
    pcVar12 = pcVar12 + 5;
    do {
      *param_2 = pcVar12;
      if (*pcVar12 == '?') {
        if (pcVar12[1] == '>') goto LAB_1092d3fbc;
      }
      else if (*pcVar12 == '\0') goto LAB_1092d3f68;
      pcVar12 = pcVar12 + 1;
    } while( true );
  }
  plVar10 = (long *)(param_1 + 0x60);
  ppuVar11 = (undefined **)0x60;
  FUN_1092d4258(plVar10,0x60);
  plVar10[4] = 0;
  *plVar10 = 0;
  plVar10[1] = 0;
  *(undefined4 *)(plVar10 + 5) = 1;
  plVar23 = plVar10 + 6;
  *plVar23 = 0;
  unaff_x23 = (byte *)(plVar10 + 8);
  unaff_x23[0] = 0;
  unaff_x23[1] = 0;
  unaff_x23[2] = 0;
  unaff_x23[3] = 0;
  unaff_x23[4] = 0;
  unaff_x23[5] = 0;
  unaff_x23[6] = 0;
  unaff_x23[7] = 0;
  puVar13 = *param_2;
  lVar6 = -1;
  do {
    lVar19 = lVar6 + 1;
    lVar6 = lVar6 + 1;
  } while ((&UNK_10dfc2df1)[(byte)puVar13[lVar19]] != '\0');
  *param_2 = puVar13 + lVar6;
  if (lVar6 == 0) {
    puVar8 = (undefined8 *)0x18;
    ___cxa_allocate_exception();
    puVar20 = *param_2;
    puVar13 = &UNK_10f564527;
    goto LAB_1092d3f84;
  }
  *plVar10 = (long)puVar13;
  plVar10[2] = lVar6;
  pbVar22 = *param_2 + -1;
  do {
    pbVar22 = pbVar22 + 1;
  } while ((&UNK_10dfc2cf1)[*pbVar22] != '\0');
  *param_2 = pbVar22;
  uVar14 = (ulong)*pbVar22;
  pbVar15 = unaff_x23;
  if ((&UNK_10dfc2ef1)[uVar14] != '\0') {
LAB_1092d3534:
    pbStack_a0 = pbVar15;
    unaff_x23 = pbStack_a0;
    *param_2 = pbVar22 + 1;
    pbVar15 = pbVar22;
    do {
      pbVar15 = pbVar15 + 1;
    } while ((&UNK_10dfc2ef1)[*pbVar15] != '\0');
    *param_2 = pbVar15;
    plVar7 = (long *)(lStack_90 + 0x60);
    ppuVar11 = (undefined **)0x38;
    FUN_1092d4258(plVar7,0x38);
    plVar7[4] = 0;
    *plVar7 = 0;
    plVar7[1] = 0;
    puVar13 = *param_2;
    *plVar7 = (long)pbVar22;
    plVar7[2] = (long)puVar13 - (long)pbVar22;
    if (*(long *)unaff_x23 == 0) {
      lVar6 = 0;
      pbVar15 = unaff_x23;
    }
    else {
      lVar6 = plVar10[9];
      pbVar15 = (byte *)(lVar6 + 0x30);
    }
    *(long **)pbVar15 = plVar7;
    plVar7[5] = lVar6;
    plVar10[9] = (long)plVar7;
    plVar7[4] = (long)plVar10;
    plVar7[6] = 0;
    pbVar15 = *param_2;
    do {
      pbVar16 = pbVar15;
      pbVar15 = pbVar16 + 1;
    } while ((&UNK_10dfc2cf1)[*pbVar16] != '\0');
    *param_2 = pbVar16;
    if (*pbVar16 == 0x3d) {
      *param_2 = pbVar16 + 1;
      lVar19 = *plVar7;
      lVar6 = 0x1132cee80;
      if (lVar19 != 0) {
        lVar6 = lVar19;
      }
      lVar1 = 0;
      if (lVar19 != 0) {
        lVar1 = (long)puVar13 - (long)pbVar22;
      }
      *(undefined1 *)(lVar6 + lVar1) = 0;
      pbVar22 = *param_2;
      pbVar15 = pbVar22;
      do {
        pbVar16 = pbVar15;
        pbVar15 = pbVar16 + 1;
        pbVar22 = pbVar22 + 1;
      } while ((&UNK_10dfc2cf1)[*pbVar16] != '\0');
      *param_2 = pbVar16;
      bVar21 = *pbVar16;
      if ((bVar21 == 0x22) || (bVar21 == 0x27)) {
        *param_2 = pbVar15;
        uStack_94 = (uint)bVar21;
        if (uStack_94 != 0x27) {
          do {
            pbVar16 = pbVar16 + 1;
          } while ((&UNK_10dfc31f1)[*pbVar16] != '\0');
          *param_2 = pbVar16;
          pbStack_88 = pbVar16;
LAB_1092d3848:
          bVar21 = *pbVar16;
          if (bVar21 == 0x26) {
            bVar4 = pbVar16[1];
            if (bVar4 < 0x67) {
              if (bVar4 == 0x23) {
                unaff_x23 = pbVar16 + 2;
                if (*unaff_x23 == 0x78) {
                  ppuVar9 = (undefined **)0x0;
                  do {
                    ppuVar11 = ppuVar9;
                    unaff_x23 = unaff_x23 + 1;
                    ppuVar9 = (undefined **)
                              ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] + (long)ppuVar11 * 0x10);
                  } while ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] != 0xff);
                }
                else {
                  unaff_x23 = pbVar16 + 1;
                  ppuVar9 = (undefined **)0x0;
                  do {
                    ppuVar11 = ppuVar9;
                    unaff_x23 = unaff_x23 + 1;
                    ppuVar9 = (undefined **)
                              ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] + (long)ppuVar11 * 10);
                  } while ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] != 0xff);
                }
                FUN_1092d4300(&pbStack_88,ppuVar11);
                if (*unaff_x23 != 0x3b) goto LAB_1092d4008;
                pbVar16 = unaff_x23 + 1;
                goto LAB_1092d3848;
              }
              if (bVar4 != 0x61) goto LAB_1092d3860;
              if (pbVar16[2] == 0x70) {
                if (((pbVar16[3] == 0x6f) && (pbVar16[4] == 0x73)) && (pbVar16[5] == 0x3b)) {
                  bVar21 = 0x27;
                  goto LAB_1092d3a14;
                }
              }
              else if (((pbVar16[2] == 0x6d) && (pbVar16[3] == 0x70)) && (pbVar16[4] == 0x3b)) {
                *pbStack_88 = 0x26;
                pbVar16 = pbVar16 + 5;
                pbStack_88 = pbStack_88 + 1;
                goto LAB_1092d3848;
              }
            }
            else if (bVar4 == 0x67) {
              if ((pbVar16[2] == 0x74) && (pbVar16[3] == 0x3b)) {
                bVar21 = 0x3e;
LAB_1092d396c:
                *pbStack_88 = bVar21;
                pbVar16 = pbVar16 + 4;
                pbStack_88 = pbStack_88 + 1;
                goto LAB_1092d3848;
              }
            }
            else {
              if (bVar4 == 0x6c) {
                if ((pbVar16[2] == 0x74) && (pbVar16[3] == 0x3b)) {
                  bVar21 = 0x3c;
                  goto LAB_1092d396c;
                }
                goto LAB_1092d3860;
              }
              if ((((bVar4 == 0x71) && (pbVar16[2] == 0x75)) && (pbVar16[3] == 0x6f)) &&
                 ((pbVar16[4] == 0x74 && (pbVar16[5] == 0x3b)))) {
                bVar21 = 0x22;
LAB_1092d3a14:
                *pbStack_88 = bVar21;
                pbVar16 = pbVar16 + 6;
                pbStack_88 = pbStack_88 + 1;
                goto LAB_1092d3848;
              }
            }
          }
          else if ((bVar21 == 0) || (bVar21 == 0x22)) goto LAB_1092d3a24;
LAB_1092d3860:
          pbVar16 = pbVar16 + 1;
          *pbStack_88 = bVar21;
          pbStack_88 = pbStack_88 + 1;
          goto LAB_1092d3848;
        }
        do {
          pbVar16 = pbVar16 + 1;
        } while ((&UNK_10dfc30f1)[*pbVar16] != '\0');
        *param_2 = pbVar16;
        pbStack_88 = pbVar16;
LAB_1092d3650:
        bVar21 = *pbVar16;
        if (bVar21 == 0x26) {
          bVar4 = pbVar16[1];
          if (bVar4 < 0x67) {
            if (bVar4 == 0x23) {
              unaff_x23 = pbVar16 + 2;
              if (*unaff_x23 == 0x78) {
                ppuVar9 = (undefined **)0x0;
                do {
                  ppuVar11 = ppuVar9;
                  unaff_x23 = unaff_x23 + 1;
                  ppuVar9 = (undefined **)
                            ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] + (long)ppuVar11 * 0x10);
                } while ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] != 0xff);
              }
              else {
                unaff_x23 = pbVar16 + 1;
                ppuVar9 = (undefined **)0x0;
                do {
                  ppuVar11 = ppuVar9;
                  unaff_x23 = unaff_x23 + 1;
                  ppuVar9 = (undefined **)
                            ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] + (long)ppuVar11 * 10);
                } while ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] != 0xff);
              }
              FUN_1092d4300(&pbStack_88,ppuVar11);
              if (*unaff_x23 != 0x3b) goto LAB_1092d4008;
              pbVar16 = unaff_x23 + 1;
              goto LAB_1092d3650;
            }
            if (bVar4 != 0x61) goto LAB_1092d3668;
            if (pbVar16[2] == 0x70) {
              if (((pbVar16[3] == 0x6f) && (pbVar16[4] == 0x73)) && (pbVar16[5] == 0x3b)) {
                bVar21 = 0x27;
                goto LAB_1092d381c;
              }
            }
            else if (((pbVar16[2] == 0x6d) && (pbVar16[3] == 0x70)) && (pbVar16[4] == 0x3b)) {
              *pbStack_88 = 0x26;
              pbVar16 = pbVar16 + 5;
              pbStack_88 = pbStack_88 + 1;
              goto LAB_1092d3650;
            }
          }
          else if (bVar4 == 0x67) {
            if ((pbVar16[2] == 0x74) && (pbVar16[3] == 0x3b)) {
              bVar21 = 0x3e;
LAB_1092d3774:
              *pbStack_88 = bVar21;
              pbVar16 = pbVar16 + 4;
              pbStack_88 = pbStack_88 + 1;
              goto LAB_1092d3650;
            }
          }
          else {
            if (bVar4 == 0x6c) {
              if ((pbVar16[2] == 0x74) && (pbVar16[3] == 0x3b)) {
                bVar21 = 0x3c;
                goto LAB_1092d3774;
              }
              goto LAB_1092d3668;
            }
            if ((((bVar4 == 0x71) && (pbVar16[2] == 0x75)) && (pbVar16[3] == 0x6f)) &&
               ((pbVar16[4] == 0x74 && (pbVar16[5] == 0x3b)))) {
              bVar21 = 0x22;
LAB_1092d381c:
              *pbStack_88 = bVar21;
              pbVar16 = pbVar16 + 6;
              pbStack_88 = pbStack_88 + 1;
              goto LAB_1092d3650;
            }
          }
        }
        else if ((bVar21 == 0) || (bVar21 == 0x27)) goto LAB_1092d3a24;
LAB_1092d3668:
        pbVar16 = pbVar16 + 1;
        *pbStack_88 = bVar21;
        pbStack_88 = pbStack_88 + 1;
        goto LAB_1092d3650;
      }
      goto LAB_1092d402c;
    }
    puVar8 = (undefined8 *)0x18;
    ___cxa_allocate_exception();
    puVar20 = *param_2;
    puVar13 = &UNK_10f564548;
    goto LAB_1092d3f84;
  }
LAB_1092d3a9c:
  if ((int)uVar14 == 0x2f) {
    *param_2 = pbVar22 + 1;
    if (pbVar22[1] == 0x3e) {
      pbVar22 = pbVar22 + 2;
      goto LAB_1092d3e6c;
    }
  }
  else if ((int)uVar14 == 0x3e) {
    pbVar22 = pbVar22 + 1;
    *param_2 = pbVar22;
    unaff_x23 = &UNK_10dfc32f1;
    do {
      pbVar15 = pbVar22 + -1;
      do {
        pbVar15 = pbVar15 + 1;
      } while ((&UNK_10dfc2cf1)[*pbVar15] != '\0');
      *param_2 = pbVar15;
      bVar21 = *pbVar15;
LAB_1092d3adc:
      if (bVar21 != 0x3c) {
        if (bVar21 != 0) {
          *param_2 = pbVar22;
          pbVar15 = pbVar22 + -1;
          do {
            pbVar15 = pbVar15 + 1;
          } while ((&UNK_10dfc32f1)[*pbVar15] != '\0');
          *param_2 = pbVar15;
          pbStack_88 = pbVar15;
LAB_1092d3b08:
          pbVar16 = pbStack_88;
          bVar21 = *pbVar15;
          if (bVar21 == 0x26) {
            bVar4 = pbVar15[1];
            if (bVar4 < 0x67) {
              if (bVar4 == 0x23) {
                pbVar16 = pbVar15 + 2;
                if (*pbVar16 == 0x78) {
                  lVar6 = 0;
                  do {
                    lVar19 = lVar6;
                    pbVar16 = pbVar16 + 1;
                    lVar6 = (ulong)(byte)(&UNK_10dfc2ff1)[*pbVar16] + lVar19 * 0x10;
                  } while ((ulong)(byte)(&UNK_10dfc2ff1)[*pbVar16] != 0xff);
                }
                else {
                  pbVar16 = pbVar15 + 1;
                  lVar6 = 0;
                  do {
                    lVar19 = lVar6;
                    pbVar16 = pbVar16 + 1;
                    lVar6 = (ulong)(byte)(&UNK_10dfc2ff1)[*pbVar16] + lVar19 * 10;
                  } while ((ulong)(byte)(&UNK_10dfc2ff1)[*pbVar16] != 0xff);
                }
                FUN_1092d4300(&pbStack_88,lVar19);
                if (*pbVar16 != 0x3b) {
                  puVar8 = (undefined8 *)0x18;
                  ___cxa_allocate_exception();
                  *puVar8 = &PTR_FUN_110ae9c60;
                  puVar8[1] = &UNK_10f564563;
                  puVar8[2] = pbVar16;
                  goto LAB_1092d3ff4;
                }
                pbVar15 = pbVar16 + 1;
                goto LAB_1092d3b08;
              }
              if (bVar4 != 0x61) goto LAB_1092d3b20;
              if (pbVar15[2] == 0x70) {
                if (((pbVar15[3] == 0x6f) && (pbVar15[4] == 0x73)) && (pbVar15[5] == 0x3b)) {
                  bVar21 = 0x27;
                  goto LAB_1092d3cd4;
                }
              }
              else if (((pbVar15[2] == 0x6d) && (pbVar15[3] == 0x70)) && (pbVar15[4] == 0x3b)) {
                *pbStack_88 = 0x26;
                pbVar15 = pbVar15 + 5;
                pbStack_88 = pbStack_88 + 1;
                goto LAB_1092d3b08;
              }
            }
            else if (bVar4 == 0x67) {
              if ((pbVar15[2] == 0x74) && (pbVar15[3] == 0x3b)) {
                bVar21 = 0x3e;
LAB_1092d3c2c:
                *pbStack_88 = bVar21;
                pbVar15 = pbVar15 + 4;
                pbStack_88 = pbStack_88 + 1;
                goto LAB_1092d3b08;
              }
            }
            else {
              if (bVar4 == 0x6c) {
                if ((pbVar15[2] == 0x74) && (pbVar15[3] == 0x3b)) {
                  bVar21 = 0x3c;
                  goto LAB_1092d3c2c;
                }
                goto LAB_1092d3b20;
              }
              if ((((bVar4 == 0x71) && (pbVar15[2] == 0x75)) && (pbVar15[3] == 0x6f)) &&
                 ((pbVar15[4] == 0x74 && (pbVar15[5] == 0x3b)))) {
                bVar21 = 0x22;
LAB_1092d3cd4:
                *pbStack_88 = bVar21;
                pbVar15 = pbVar15 + 6;
                pbStack_88 = pbStack_88 + 1;
                goto LAB_1092d3b08;
              }
            }
          }
          else if ((bVar21 == 0) || (bVar21 == 0x3c)) goto LAB_1092d3ce4;
LAB_1092d3b20:
          pbVar15 = pbVar15 + 1;
          *pbStack_88 = bVar21;
          pbStack_88 = pbStack_88 + 1;
          goto LAB_1092d3b08;
        }
        goto LAB_1092d3f68;
      }
      puVar13 = *param_2;
      if (puVar13[1] == '/') goto LAB_1092d3e28;
      *param_2 = puVar13 + 1;
      lVar6 = lStack_90;
      ppuVar11 = param_2;
      FUN_1092d3334(lStack_90,param_2);
      if (lVar6 != 0) {
        if (*plVar23 == 0) {
          lVar19 = 0;
          plVar7 = plVar23;
        }
        else {
          lVar19 = plVar10[7];
          plVar7 = (long *)(lVar19 + 0x58);
        }
        *plVar7 = lVar6;
        *(long *)(lVar6 + 0x50) = lVar19;
        plVar10[7] = lVar6;
        *(long **)(lVar6 + 0x20) = plVar10;
        *(undefined8 *)(lVar6 + 0x58) = 0;
      }
      pbVar22 = *param_2;
    } while( true );
  }
LAB_1092d406c:
  puVar8 = (undefined8 *)0x18;
  ___cxa_allocate_exception();
  puVar20 = *param_2;
  puVar13 = &UNK_10f56453d;
LAB_1092d3f84:
  *puVar8 = &PTR_FUN_110ae9c60;
  puVar8[1] = puVar13;
  puVar8[2] = puVar20;
LAB_1092d3ff4:
  do {
    ___cxa_throw();
LAB_1092d4008:
    puVar8 = (undefined8 *)0x18;
    ___cxa_allocate_exception();
    *puVar8 = &PTR_FUN_110ae9c60;
    puVar8[1] = &UNK_10f564563;
    puVar8[2] = unaff_x23;
  } while( true );
LAB_1092d3fc8:
  pbVar22 = (byte *)(pcVar12 + 3);
  goto LAB_1092d3f94;
LAB_1092d3e00:
  pbVar22 = pbVar22 + 1;
  goto LAB_1092d3f94;
LAB_1092d3a24:
  *param_2 = pbVar16;
  plVar7[1] = (long)pbVar15;
  plVar7[3] = (long)pbStack_88 - (long)pbVar22;
  if ((byte)**param_2 != uStack_94) {
LAB_1092d402c:
    puVar8 = (undefined8 *)0x18;
    ___cxa_allocate_exception();
    puVar20 = *param_2;
    puVar13 = &UNK_10f564553;
    goto LAB_1092d3f84;
  }
  *param_2 = *param_2 + 1;
  lVar19 = plVar7[1];
  lVar6 = 0x1132cee80;
  if (lVar19 != 0) {
    lVar6 = lVar19;
  }
  lVar1 = 0;
  if (lVar19 != 0) {
    lVar1 = (long)pbStack_88 - (long)pbVar22;
  }
  *(undefined1 *)(lVar6 + lVar1) = 0;
  pbVar22 = *param_2 + -1;
  do {
    pbVar22 = pbVar22 + 1;
  } while ((&UNK_10dfc2cf1)[*pbVar22] != '\0');
  *param_2 = pbVar22;
  uVar14 = (ulong)*pbVar22;
  unaff_x23 = pbStack_a0;
  pbVar15 = pbStack_a0;
  if ((&UNK_10dfc2ef1)[uVar14] == '\0') goto LAB_1092d3a9c;
  goto LAB_1092d3534;
LAB_1092d3ce4:
  *param_2 = pbVar15;
  puVar8 = (undefined8 *)(lStack_90 + 0x60);
  ppuVar11 = (undefined **)0x60;
  FUN_1092d4258(puVar8,0x60);
  *(undefined4 *)(puVar8 + 5) = 2;
  puVar8[6] = 0;
  puVar8[8] = 0;
  lVar6 = (long)pbVar16 - (long)pbVar22;
  *puVar8 = 0;
  puVar8[1] = pbVar22;
  puVar8[3] = lVar6;
  if (*plVar23 == 0) {
    lVar19 = 0;
    plVar7 = plVar23;
  }
  else {
    lVar19 = plVar10[7];
    plVar7 = (long *)(lVar19 + 0x58);
  }
  *plVar7 = (long)puVar8;
  puVar8[10] = lVar19;
  plVar10[7] = (long)puVar8;
  puVar8[4] = plVar10;
  puVar8[0xb] = 0;
  pcVar12 = (char *)0x1132cee80;
  if ((char *)plVar10[1] != (char *)0x0) {
    pcVar12 = (char *)plVar10[1];
  }
  if (*pcVar12 == '\0') {
    plVar10[1] = (long)pbVar22;
    plVar10[3] = lVar6;
  }
  bVar21 = **param_2;
  *pbVar16 = 0;
  goto LAB_1092d3adc;
LAB_1092d3e28:
  *param_2 = puVar13 + 2;
  pbVar22 = puVar13 + 1;
  do {
    pbVar22 = pbVar22 + 1;
  } while ((&UNK_10dfc2df1)[*pbVar22] != '\0');
  *param_2 = pbVar22;
  do {
    pbVar15 = pbVar22;
    pbVar22 = pbVar15 + 1;
  } while ((&UNK_10dfc2cf1)[*pbVar15] != '\0');
  *param_2 = pbVar15;
  if (*pbVar15 == 0x3e) {
LAB_1092d3e6c:
    *param_2 = pbVar22;
    lVar6 = *plVar10;
    if (lVar6 == 0) {
      lVar19 = 0;
      lVar6 = 0x1132cee80;
    }
    else {
      lVar19 = plVar10[2];
    }
    *(undefined1 *)(lVar6 + lVar19) = 0;
    goto LAB_1092d3f98;
  }
  goto LAB_1092d406c;
LAB_1092d3fbc:
  pbVar22 = (byte *)(pcVar12 + 2);
LAB_1092d3f94:
  plVar10 = (long *)0x0;
  *param_2 = pbVar22;
  ppuVar11 = param_2;
LAB_1092d3f98:
  auVar26._8_8_ = ppuVar11;
  auVar26._0_8_ = plVar10;
  return auVar26;
}



/* Entry: 1092d3334; end: 1092d40ab;  */

/* WARNING: Possible PIC construction at 0x0001092d3efc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001092d3f00) */

long * FUN_1092d3334(long param_1,long *param_2)

{
  long lVar1;
  undefined **ppuVar2;
  char cVar3;
  byte bVar4;
  byte **ppbVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined **ppuVar10;
  char *pcVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  char *pcVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  byte bVar20;
  undefined *puVar21;
  char *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar22;
  undefined8 unaff_x22;
  byte *unaff_x23;
  undefined8 uVar23;
  byte *pbStack_80;
  uint uStack_74;
  long lStack_70;
  byte *pbStack_68;
  
  ppbVar5 = &pbStack_80;
  pcVar11 = (char *)*param_2;
  lStack_70 = param_1;
  if (*pcVar11 == '!') {
    cVar3 = pcVar11[1];
    if (cVar3 == '-') {
      if (pcVar11[2] == '-') {
        pcVar11 = pcVar11 + 3;
        do {
          *param_2 = (long)pcVar11;
          if (*pcVar11 == '-') {
            if ((pcVar11[1] == '-') && (pcVar11[2] == '>')) goto LAB_1092d3fc8;
          }
          else if (*pcVar11 == '\0') goto LAB_1092d3f68;
          pcVar11 = pcVar11 + 1;
        } while( true );
      }
    }
    else if (cVar3 == 'D') {
      if (((((pcVar11[2] == 'O') && (pcVar11[3] == 'C')) && (pcVar11[4] == 'T')) &&
          ((pcVar11[5] == 'Y' && (pcVar11[6] == 'P')))) &&
         ((pcVar11[7] == 'E' && ((&UNK_10dfc2cf1)[(byte)pcVar11[8]] != '\0')))) {
        *param_2 = (long)(pcVar11 + 9);
        uVar23 = 0x1092d3f00;
        plVar8 = param_2;
SUB_1092d418c:
        *(char **)((long)ppbVar5 + -0x20) = unaff_x20;
        *(long **)((long)ppbVar5 + -0x18) = param_2;
        *(undefined1 **)((long)ppbVar5 + -0x10) = &stack0xfffffffffffffff0;
        *(undefined8 *)((long)ppbVar5 + -8) = uVar23;
        pcVar11 = (char *)*plVar8;
        while( true ) {
          while (cVar3 = *pcVar11, cVar3 == '[') {
            pcVar11 = pcVar11 + 1;
            *plVar8 = (long)pcVar11;
            iVar17 = 1;
            do {
              cVar3 = *pcVar11;
              if (cVar3 == '[') {
                iVar17 = iVar17 + 1;
              }
              else if (cVar3 == ']') {
                iVar17 = iVar17 + -1;
              }
              else if (cVar3 == '\0') goto LAB_1092d4220;
              pcVar11 = pcVar11 + 1;
              *plVar8 = (long)pcVar11;
            } while (0 < iVar17);
          }
          if (cVar3 == '>') {
            *plVar8 = (long)(pcVar11 + 1);
            return plVar8;
          }
          if (cVar3 == '\0') break;
          pcVar11 = pcVar11 + 1;
          *plVar8 = (long)pcVar11;
        }
LAB_1092d4220:
        plVar9 = (long *)0x18;
        ___cxa_allocate_exception();
        lVar19 = *plVar8;
        *plVar9 = (long)&PTR_FUN_110ae9c60;
        plVar9[1] = (long)&UNK_10f564510;
        plVar9[2] = lVar19;
        ppuVar10 = &PTR_DAT_110ae9c38;
        ___cxa_throw();
        *(undefined8 *)((long)ppbVar5 + -0x50) = unaff_x22;
        *(undefined8 *)((long)ppbVar5 + -0x48) = unaff_x21;
        *(char **)((long)ppbVar5 + -0x40) = unaff_x20;
        *(long **)((long)ppbVar5 + -0x38) = plVar8;
        *(undefined1 **)((long)ppbVar5 + -0x30) = (undefined1 *)((long)ppbVar5 + -0x10);
        *(code **)((long)ppbVar5 + -0x28) = FUN_1092d4258;
        plVar8 = (long *)(plVar9[1] + ((ulong)(uint)-(int)plVar9[1] & 7));
        if ((ulong)plVar9[2] < (ulong)((long)plVar8 + (long)ppuVar10)) {
          ppuVar2 = ppuVar10;
          if (ppuVar10 < (undefined **)0x10001) {
            ppuVar2 = (undefined **)0x10000;
          }
          lVar19 = (long)ppuVar2 + 0x16;
          lVar12 = lVar19;
          if ((code *)plVar9[0x2003] == (code *)0x0) {
            __Znam();
          }
          else {
            (*(code *)plVar9[0x2003])();
          }
          plVar6 = (long *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7));
          plVar8 = plVar6 + 1;
          *plVar6 = *plVar9;
          *plVar9 = lVar12;
          plVar9[2] = lVar12 + lVar19;
          plVar8 = (long *)((long)plVar8 + ((ulong)(uint)-(int)plVar8 & 7));
        }
        plVar9[1] = (long)plVar8 + (long)ppuVar10;
        return plVar8;
      }
    }
    else if ((((cVar3 == '[') && (pcVar11[2] == 'C')) &&
             ((pcVar11[3] == 'D' &&
              (((pcVar11[4] == 'A' && (pcVar11[5] == 'T')) && (pcVar11[6] == 'A')))))) &&
            (pcVar11[7] == '[')) {
      *param_2 = (long)(pcVar11 + 8);
      ppbVar5 = (byte **)&stack0xffffffffffffffe0;
      unaff_x20 = (char *)*param_2;
      pcVar11 = unaff_x20;
      do {
        pcVar16 = pcVar11 + 1;
        if (*pcVar11 == ']') {
          if ((*pcVar16 == ']') && (pcVar11[2] == '>')) {
            plVar8 = (long *)(param_1 + 0x60);
            FUN_1092d4258(plVar8,0x60);
            plVar8[4] = 0;
            *plVar8 = 0;
            plVar8[1] = 0;
            *(undefined4 *)(plVar8 + 5) = 3;
            plVar8[6] = 0;
            plVar8[8] = 0;
            lVar19 = *param_2;
            plVar8[1] = (long)unaff_x20;
            plVar8[3] = lVar19 - (long)unaff_x20;
            *(undefined1 *)*param_2 = 0;
            *param_2 = *param_2 + 3;
            return plVar8;
          }
        }
        else if (*pcVar11 == '\0') {
          plVar8 = (long *)0x18;
          ___cxa_allocate_exception();
          lVar19 = *param_2;
          *plVar8 = (long)&PTR_FUN_110ae9c60;
          plVar8[1] = (long)&UNK_10f564510;
          plVar8[2] = lVar19;
          uVar23 = 0x1092d418c;
          ___cxa_throw();
          goto SUB_1092d418c;
        }
        *param_2 = (long)pcVar16;
        pcVar11 = pcVar16;
      } while( true );
    }
    pbVar14 = (byte *)(pcVar11 + 1);
    do {
      *param_2 = (long)pbVar14;
      pbVar22 = pbVar14 + 1;
      bVar20 = *pbVar14;
      if (bVar20 == 0x3e) goto LAB_1092d3f94;
      pbVar14 = pbVar22;
    } while (bVar20 != 0);
LAB_1092d3f68:
    puVar7 = (undefined8 *)0x18;
    ___cxa_allocate_exception();
    lVar19 = *param_2;
    puVar21 = &UNK_10f564510;
    goto LAB_1092d3f84;
  }
  if (*pcVar11 == '?') {
    *param_2 = (long)(pcVar11 + 1);
    bVar20 = pcVar11[1];
    if ((((bVar20 | 0x20) != 0x78) || ((byte)(pcVar11[2] | 0x20U) != 0x6d)) ||
       (((byte)(pcVar11[3] | 0x20U) != 0x6c || ((&UNK_10dfc2cf1)[(byte)pcVar11[4]] == '\0')))) {
      pbVar22 = (byte *)(pcVar11 + 2);
      do {
        if (bVar20 == 0x3f) {
          if (*pbVar22 == 0x3e) goto LAB_1092d3e00;
        }
        else if (bVar20 == 0) goto LAB_1092d3f68;
        *param_2 = (long)pbVar22;
        bVar20 = *pbVar22;
        pbVar22 = pbVar22 + 1;
      } while( true );
    }
    pcVar11 = pcVar11 + 5;
    do {
      *param_2 = (long)pcVar11;
      if (*pcVar11 == '?') {
        if (pcVar11[1] == '>') goto LAB_1092d3fbc;
      }
      else if (*pcVar11 == '\0') goto LAB_1092d3f68;
      pcVar11 = pcVar11 + 1;
    } while( true );
  }
  plVar8 = (long *)(param_1 + 0x60);
  FUN_1092d4258(plVar8,0x60);
  plVar8[4] = 0;
  *plVar8 = 0;
  plVar8[1] = 0;
  *(undefined4 *)(plVar8 + 5) = 1;
  plVar9 = plVar8 + 6;
  *plVar9 = 0;
  unaff_x23 = (byte *)(plVar8 + 8);
  unaff_x23[0] = 0;
  unaff_x23[1] = 0;
  unaff_x23[2] = 0;
  unaff_x23[3] = 0;
  unaff_x23[4] = 0;
  unaff_x23[5] = 0;
  unaff_x23[6] = 0;
  unaff_x23[7] = 0;
  lVar12 = *param_2;
  lVar19 = -1;
  do {
    lVar18 = lVar12 + lVar19;
    lVar19 = lVar19 + 1;
  } while ((&UNK_10dfc2df1)[*(byte *)(lVar18 + 1)] != '\0');
  *param_2 = lVar12 + lVar19;
  if (lVar19 == 0) {
    puVar7 = (undefined8 *)0x18;
    ___cxa_allocate_exception();
    lVar19 = *param_2;
    puVar21 = &UNK_10f564527;
    goto LAB_1092d3f84;
  }
  *plVar8 = lVar12;
  plVar8[2] = lVar19;
  pbVar22 = (byte *)(*param_2 + -1);
  do {
    pbVar22 = pbVar22 + 1;
  } while ((&UNK_10dfc2cf1)[*pbVar22] != '\0');
  *param_2 = (long)pbVar22;
  uVar13 = (ulong)*pbVar22;
  pbVar14 = unaff_x23;
  if ((&UNK_10dfc2ef1)[uVar13] != '\0') {
LAB_1092d3534:
    pbStack_80 = pbVar14;
    unaff_x23 = pbStack_80;
    *param_2 = (long)(pbVar22 + 1);
    pbVar14 = pbVar22;
    do {
      pbVar14 = pbVar14 + 1;
    } while ((&UNK_10dfc2ef1)[*pbVar14] != '\0');
    *param_2 = (long)pbVar14;
    plVar6 = (long *)(lStack_70 + 0x60);
    FUN_1092d4258(plVar6,0x38);
    plVar6[4] = 0;
    *plVar6 = 0;
    plVar6[1] = 0;
    lVar19 = *param_2;
    *plVar6 = (long)pbVar22;
    plVar6[2] = lVar19 - (long)pbVar22;
    if (*(long *)unaff_x23 == 0) {
      lVar12 = 0;
      pbVar14 = unaff_x23;
    }
    else {
      lVar12 = plVar8[9];
      pbVar14 = (byte *)(lVar12 + 0x30);
    }
    *(long **)pbVar14 = plVar6;
    plVar6[5] = lVar12;
    plVar8[9] = (long)plVar6;
    plVar6[4] = (long)plVar8;
    plVar6[6] = 0;
    pbVar14 = (byte *)*param_2;
    do {
      pbVar15 = pbVar14;
      pbVar14 = pbVar15 + 1;
    } while ((&UNK_10dfc2cf1)[*pbVar15] != '\0');
    *param_2 = (long)pbVar15;
    if (*pbVar15 == 0x3d) {
      *param_2 = (long)(pbVar15 + 1);
      lVar18 = *plVar6;
      lVar12 = 0x1132cee80;
      if (lVar18 != 0) {
        lVar12 = lVar18;
      }
      lVar1 = 0;
      if (lVar18 != 0) {
        lVar1 = lVar19 - (long)pbVar22;
      }
      *(undefined1 *)(lVar12 + lVar1) = 0;
      pbVar22 = (byte *)*param_2;
      pbVar14 = pbVar22;
      do {
        pbVar15 = pbVar14;
        pbVar14 = pbVar15 + 1;
        pbVar22 = pbVar22 + 1;
      } while ((&UNK_10dfc2cf1)[*pbVar15] != '\0');
      *param_2 = (long)pbVar15;
      bVar20 = *pbVar15;
      if ((bVar20 == 0x22) || (bVar20 == 0x27)) {
        *param_2 = (long)pbVar14;
        uStack_74 = (uint)bVar20;
        if (uStack_74 != 0x27) {
          do {
            pbVar15 = pbVar15 + 1;
          } while ((&UNK_10dfc31f1)[*pbVar15] != '\0');
          *param_2 = (long)pbVar15;
          pbStack_68 = pbVar15;
LAB_1092d3848:
          bVar20 = *pbVar15;
          if (bVar20 == 0x26) {
            bVar4 = pbVar15[1];
            if (bVar4 < 0x67) {
              if (bVar4 == 0x23) {
                unaff_x23 = pbVar15 + 2;
                if (*unaff_x23 == 0x78) {
                  lVar19 = 0;
                  do {
                    lVar12 = lVar19;
                    unaff_x23 = unaff_x23 + 1;
                    lVar19 = (ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] + lVar12 * 0x10;
                  } while ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] != 0xff);
                }
                else {
                  unaff_x23 = pbVar15 + 1;
                  lVar19 = 0;
                  do {
                    lVar12 = lVar19;
                    unaff_x23 = unaff_x23 + 1;
                    lVar19 = (ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] + lVar12 * 10;
                  } while ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] != 0xff);
                }
                FUN_1092d4300(&pbStack_68,lVar12);
                if (*unaff_x23 != 0x3b) goto LAB_1092d4008;
                pbVar15 = unaff_x23 + 1;
                goto LAB_1092d3848;
              }
              if (bVar4 == 0x61) {
                if (pbVar15[2] == 0x70) {
                  if (((pbVar15[3] == 0x6f) && (pbVar15[4] == 0x73)) && (pbVar15[5] == 0x3b)) {
                    bVar20 = 0x27;
                    goto LAB_1092d3a14;
                  }
                  goto LAB_1092d3860;
                }
                if (((pbVar15[2] == 0x6d) && (pbVar15[3] == 0x70)) && (pbVar15[4] == 0x3b)) {
                  *pbStack_68 = 0x26;
                  pbVar15 = pbVar15 + 5;
                  pbStack_68 = pbStack_68 + 1;
                  goto LAB_1092d3848;
                }
              }
            }
            else if (bVar4 == 0x67) {
              if ((pbVar15[2] == 0x74) && (pbVar15[3] == 0x3b)) {
                bVar20 = 0x3e;
LAB_1092d396c:
                *pbStack_68 = bVar20;
                pbVar15 = pbVar15 + 4;
                pbStack_68 = pbStack_68 + 1;
                goto LAB_1092d3848;
              }
            }
            else {
              if (bVar4 != 0x6c) {
                if ((((bVar4 != 0x71) || (pbVar15[2] != 0x75)) || (pbVar15[3] != 0x6f)) ||
                   ((pbVar15[4] != 0x74 || (pbVar15[5] != 0x3b)))) goto LAB_1092d3860;
                bVar20 = 0x22;
LAB_1092d3a14:
                *pbStack_68 = bVar20;
                pbVar15 = pbVar15 + 6;
                pbStack_68 = pbStack_68 + 1;
                goto LAB_1092d3848;
              }
              if ((pbVar15[2] == 0x74) && (pbVar15[3] == 0x3b)) {
                bVar20 = 0x3c;
                goto LAB_1092d396c;
              }
            }
          }
          else if ((bVar20 == 0) || (bVar20 == 0x22)) goto LAB_1092d3a24;
LAB_1092d3860:
          pbVar15 = pbVar15 + 1;
          *pbStack_68 = bVar20;
          pbStack_68 = pbStack_68 + 1;
          goto LAB_1092d3848;
        }
        do {
          pbVar15 = pbVar15 + 1;
        } while ((&UNK_10dfc30f1)[*pbVar15] != '\0');
        *param_2 = (long)pbVar15;
        pbStack_68 = pbVar15;
LAB_1092d3650:
        bVar20 = *pbVar15;
        if (bVar20 == 0x26) {
          bVar4 = pbVar15[1];
          if (bVar4 < 0x67) {
            if (bVar4 == 0x23) {
              unaff_x23 = pbVar15 + 2;
              if (*unaff_x23 == 0x78) {
                lVar19 = 0;
                do {
                  lVar12 = lVar19;
                  unaff_x23 = unaff_x23 + 1;
                  lVar19 = (ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] + lVar12 * 0x10;
                } while ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] != 0xff);
              }
              else {
                unaff_x23 = pbVar15 + 1;
                lVar19 = 0;
                do {
                  lVar12 = lVar19;
                  unaff_x23 = unaff_x23 + 1;
                  lVar19 = (ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] + lVar12 * 10;
                } while ((ulong)(byte)(&UNK_10dfc2ff1)[*unaff_x23] != 0xff);
              }
              FUN_1092d4300(&pbStack_68,lVar12);
              if (*unaff_x23 != 0x3b) goto LAB_1092d4008;
              pbVar15 = unaff_x23 + 1;
              goto LAB_1092d3650;
            }
            if (bVar4 == 0x61) {
              if (pbVar15[2] == 0x70) {
                if (((pbVar15[3] == 0x6f) && (pbVar15[4] == 0x73)) && (pbVar15[5] == 0x3b)) {
                  bVar20 = 0x27;
                  goto LAB_1092d381c;
                }
                goto LAB_1092d3668;
              }
              if (((pbVar15[2] == 0x6d) && (pbVar15[3] == 0x70)) && (pbVar15[4] == 0x3b)) {
                *pbStack_68 = 0x26;
                pbVar15 = pbVar15 + 5;
                pbStack_68 = pbStack_68 + 1;
                goto LAB_1092d3650;
              }
            }
          }
          else if (bVar4 == 0x67) {
            if ((pbVar15[2] == 0x74) && (pbVar15[3] == 0x3b)) {
              bVar20 = 0x3e;
LAB_1092d3774:
              *pbStack_68 = bVar20;
              pbVar15 = pbVar15 + 4;
              pbStack_68 = pbStack_68 + 1;
              goto LAB_1092d3650;
            }
          }
          else {
            if (bVar4 != 0x6c) {
              if ((((bVar4 != 0x71) || (pbVar15[2] != 0x75)) || (pbVar15[3] != 0x6f)) ||
                 ((pbVar15[4] != 0x74 || (pbVar15[5] != 0x3b)))) goto LAB_1092d3668;
              bVar20 = 0x22;
LAB_1092d381c:
              *pbStack_68 = bVar20;
              pbVar15 = pbVar15 + 6;
              pbStack_68 = pbStack_68 + 1;
              goto LAB_1092d3650;
            }
            if ((pbVar15[2] == 0x74) && (pbVar15[3] == 0x3b)) {
              bVar20 = 0x3c;
              goto LAB_1092d3774;
            }
          }
        }
        else if ((bVar20 == 0) || (bVar20 == 0x27)) goto LAB_1092d3a24;
LAB_1092d3668:
        pbVar15 = pbVar15 + 1;
        *pbStack_68 = bVar20;
        pbStack_68 = pbStack_68 + 1;
        goto LAB_1092d3650;
      }
      goto LAB_1092d402c;
    }
    puVar7 = (undefined8 *)0x18;
    ___cxa_allocate_exception();
    lVar19 = *param_2;
    puVar21 = &UNK_10f564548;
    goto LAB_1092d3f84;
  }
LAB_1092d3a9c:
  if ((int)uVar13 == 0x2f) {
    *param_2 = (long)(pbVar22 + 1);
    if (pbVar22[1] == 0x3e) {
      pbVar22 = pbVar22 + 2;
      goto LAB_1092d3e6c;
    }
  }
  else if ((int)uVar13 == 0x3e) {
    pbVar22 = pbVar22 + 1;
    *param_2 = (long)pbVar22;
    unaff_x23 = &UNK_10dfc32f1;
    do {
      pbVar14 = pbVar22 + -1;
      do {
        pbVar14 = pbVar14 + 1;
      } while ((&UNK_10dfc2cf1)[*pbVar14] != '\0');
      *param_2 = (long)pbVar14;
      bVar20 = *pbVar14;
LAB_1092d3adc:
      if (bVar20 != 0x3c) {
        if (bVar20 != 0) {
          *param_2 = (long)pbVar22;
          pbVar14 = pbVar22 + -1;
          do {
            pbVar14 = pbVar14 + 1;
          } while ((&UNK_10dfc32f1)[*pbVar14] != '\0');
          *param_2 = (long)pbVar14;
          pbStack_68 = pbVar14;
LAB_1092d3b08:
          pbVar15 = pbStack_68;
          bVar20 = *pbVar14;
          if (bVar20 == 0x26) {
            bVar4 = pbVar14[1];
            if (bVar4 < 0x67) {
              if (bVar4 == 0x23) {
                pbVar15 = pbVar14 + 2;
                if (*pbVar15 == 0x78) {
                  lVar19 = 0;
                  do {
                    lVar12 = lVar19;
                    pbVar15 = pbVar15 + 1;
                    lVar19 = (ulong)(byte)(&UNK_10dfc2ff1)[*pbVar15] + lVar12 * 0x10;
                  } while ((ulong)(byte)(&UNK_10dfc2ff1)[*pbVar15] != 0xff);
                }
                else {
                  pbVar15 = pbVar14 + 1;
                  lVar19 = 0;
                  do {
                    lVar12 = lVar19;
                    pbVar15 = pbVar15 + 1;
                    lVar19 = (ulong)(byte)(&UNK_10dfc2ff1)[*pbVar15] + lVar12 * 10;
                  } while ((ulong)(byte)(&UNK_10dfc2ff1)[*pbVar15] != 0xff);
                }
                FUN_1092d4300(&pbStack_68,lVar12);
                if (*pbVar15 != 0x3b) {
                  puVar7 = (undefined8 *)0x18;
                  ___cxa_allocate_exception();
                  *puVar7 = &PTR_FUN_110ae9c60;
                  puVar7[1] = &UNK_10f564563;
                  puVar7[2] = pbVar15;
                  goto LAB_1092d3ff4;
                }
                pbVar14 = pbVar15 + 1;
                goto LAB_1092d3b08;
              }
              if (bVar4 == 0x61) {
                if (pbVar14[2] == 0x70) {
                  if (((pbVar14[3] == 0x6f) && (pbVar14[4] == 0x73)) && (pbVar14[5] == 0x3b)) {
                    bVar20 = 0x27;
                    goto LAB_1092d3cd4;
                  }
                  goto LAB_1092d3b20;
                }
                if (((pbVar14[2] == 0x6d) && (pbVar14[3] == 0x70)) && (pbVar14[4] == 0x3b)) {
                  *pbStack_68 = 0x26;
                  pbVar14 = pbVar14 + 5;
                  pbStack_68 = pbStack_68 + 1;
                  goto LAB_1092d3b08;
                }
              }
            }
            else if (bVar4 == 0x67) {
              if ((pbVar14[2] == 0x74) && (pbVar14[3] == 0x3b)) {
                bVar20 = 0x3e;
LAB_1092d3c2c:
                *pbStack_68 = bVar20;
                pbVar14 = pbVar14 + 4;
                pbStack_68 = pbStack_68 + 1;
                goto LAB_1092d3b08;
              }
            }
            else {
              if (bVar4 != 0x6c) {
                if ((((bVar4 != 0x71) || (pbVar14[2] != 0x75)) || (pbVar14[3] != 0x6f)) ||
                   ((pbVar14[4] != 0x74 || (pbVar14[5] != 0x3b)))) goto LAB_1092d3b20;
                bVar20 = 0x22;
LAB_1092d3cd4:
                *pbStack_68 = bVar20;
                pbVar14 = pbVar14 + 6;
                pbStack_68 = pbStack_68 + 1;
                goto LAB_1092d3b08;
              }
              if ((pbVar14[2] == 0x74) && (pbVar14[3] == 0x3b)) {
                bVar20 = 0x3c;
                goto LAB_1092d3c2c;
              }
            }
          }
          else if ((bVar20 == 0) || (bVar20 == 0x3c)) goto LAB_1092d3ce4;
LAB_1092d3b20:
          pbVar14 = pbVar14 + 1;
          *pbStack_68 = bVar20;
          pbStack_68 = pbStack_68 + 1;
          goto LAB_1092d3b08;
        }
        goto LAB_1092d3f68;
      }
      lVar19 = *param_2;
      if (*(char *)(lVar19 + 1) == '/') goto LAB_1092d3e28;
      *param_2 = lVar19 + 1;
      lVar19 = lStack_70;
      FUN_1092d3334(lStack_70,param_2);
      if (lVar19 != 0) {
        if (*plVar9 == 0) {
          lVar12 = 0;
          plVar6 = plVar9;
        }
        else {
          lVar12 = plVar8[7];
          plVar6 = (long *)(lVar12 + 0x58);
        }
        *plVar6 = lVar19;
        *(long *)(lVar19 + 0x50) = lVar12;
        plVar8[7] = lVar19;
        *(long **)(lVar19 + 0x20) = plVar8;
        *(undefined8 *)(lVar19 + 0x58) = 0;
      }
      pbVar22 = (byte *)*param_2;
    } while( true );
  }
  goto LAB_1092d406c;
LAB_1092d3fc8:
  pbVar22 = (byte *)(pcVar11 + 3);
  goto LAB_1092d3f94;
LAB_1092d3e00:
  pbVar22 = pbVar22 + 1;
  goto LAB_1092d3f94;
LAB_1092d3a24:
  *param_2 = (long)pbVar15;
  plVar6[1] = (long)pbVar14;
  plVar6[3] = (long)pbStack_68 - (long)pbVar22;
  if (*(byte *)*param_2 != uStack_74) {
LAB_1092d402c:
    puVar7 = (undefined8 *)0x18;
    ___cxa_allocate_exception();
    lVar19 = *param_2;
    puVar21 = &UNK_10f564553;
    goto LAB_1092d3f84;
  }
  *param_2 = (long)((byte *)*param_2 + 1);
  lVar12 = plVar6[1];
  lVar19 = 0x1132cee80;
  if (lVar12 != 0) {
    lVar19 = lVar12;
  }
  lVar18 = 0;
  if (lVar12 != 0) {
    lVar18 = (long)pbStack_68 - (long)pbVar22;
  }
  *(undefined1 *)(lVar19 + lVar18) = 0;
  pbVar22 = (byte *)(*param_2 + -1);
  do {
    pbVar22 = pbVar22 + 1;
  } while ((&UNK_10dfc2cf1)[*pbVar22] != '\0');
  *param_2 = (long)pbVar22;
  uVar13 = (ulong)*pbVar22;
  unaff_x23 = pbStack_80;
  pbVar14 = pbStack_80;
  if ((&UNK_10dfc2ef1)[uVar13] == '\0') goto LAB_1092d3a9c;
  goto LAB_1092d3534;
LAB_1092d3ce4:
  *param_2 = (long)pbVar14;
  puVar7 = (undefined8 *)(lStack_70 + 0x60);
  FUN_1092d4258(puVar7,0x60);
  *(undefined4 *)(puVar7 + 5) = 2;
  puVar7[6] = 0;
  puVar7[8] = 0;
  lVar19 = (long)pbVar15 - (long)pbVar22;
  *puVar7 = 0;
  puVar7[1] = pbVar22;
  puVar7[3] = lVar19;
  if (*plVar9 == 0) {
    lVar12 = 0;
    plVar6 = plVar9;
  }
  else {
    lVar12 = plVar8[7];
    plVar6 = (long *)(lVar12 + 0x58);
  }
  *plVar6 = (long)puVar7;
  puVar7[10] = lVar12;
  plVar8[7] = (long)puVar7;
  puVar7[4] = plVar8;
  puVar7[0xb] = 0;
  pcVar11 = (char *)0x1132cee80;
  if ((char *)plVar8[1] != (char *)0x0) {
    pcVar11 = (char *)plVar8[1];
  }
  if (*pcVar11 == '\0') {
    plVar8[1] = (long)pbVar22;
    plVar8[3] = lVar19;
  }
  bVar20 = *(byte *)*param_2;
  *pbVar15 = 0;
  goto LAB_1092d3adc;
LAB_1092d3e28:
  *param_2 = lVar19 + 2;
  pbVar22 = (byte *)(lVar19 + 1);
  do {
    pbVar22 = pbVar22 + 1;
  } while ((&UNK_10dfc2df1)[*pbVar22] != '\0');
  *param_2 = (long)pbVar22;
  do {
    pbVar14 = pbVar22;
    pbVar22 = pbVar14 + 1;
  } while ((&UNK_10dfc2cf1)[*pbVar14] != '\0');
  *param_2 = (long)pbVar14;
  if (*pbVar14 == 0x3e) {
LAB_1092d3e6c:
    *param_2 = (long)pbVar22;
    lVar19 = *plVar8;
    if (lVar19 == 0) {
      lVar12 = 0;
      lVar19 = 0x1132cee80;
    }
    else {
      lVar12 = plVar8[2];
    }
    *(undefined1 *)(lVar19 + lVar12) = 0;
    return plVar8;
  }
LAB_1092d406c:
  puVar7 = (undefined8 *)0x18;
  ___cxa_allocate_exception();
  lVar19 = *param_2;
  puVar21 = &UNK_10f56453d;
LAB_1092d3f84:
  *puVar7 = &PTR_FUN_110ae9c60;
  puVar7[1] = puVar21;
  puVar7[2] = lVar19;
LAB_1092d3ff4:
  do {
    ___cxa_throw();
LAB_1092d4008:
    puVar7 = (undefined8 *)0x18;
    ___cxa_allocate_exception();
    *puVar7 = &PTR_FUN_110ae9c60;
    puVar7[1] = &UNK_10f564563;
    puVar7[2] = unaff_x23;
  } while( true );
LAB_1092d3fbc:
  pbVar22 = (byte *)(pcVar11 + 2);
LAB_1092d3f94:
  *param_2 = (long)pbVar22;
  return (long *)0x0;
}



/* Entry: 1092d40ac; end: 1092d40af;  */

void FUN_1092d40ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 1092d40b0; end: 1092d4257;  */

void FUN_1092d40b0(long param_1,long *param_2)

{
  undefined **ppuVar1;
  char cVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuVar7;
  char *pcVar8;
  char *pcVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  char *pcVar13;
  
  pcVar13 = (char *)*param_2;
  pcVar9 = pcVar13;
  do {
    pcVar8 = pcVar9 + 1;
    if (*pcVar9 == ']') {
      if ((*pcVar8 == ']') && (pcVar9[2] == '>')) {
        puVar3 = (undefined8 *)(param_1 + 0x60);
        FUN_1092d4258(puVar3,0x60);
        puVar3[4] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        *(undefined4 *)(puVar3 + 5) = 3;
        puVar3[6] = 0;
        puVar3[8] = 0;
        lVar12 = *param_2;
        puVar3[1] = pcVar13;
        puVar3[3] = lVar12 - (long)pcVar13;
        *(undefined1 *)*param_2 = 0;
        *param_2 = *param_2 + 3;
        return;
      }
    }
    else if (*pcVar9 == '\0') {
      plVar4 = (long *)0x18;
      ___cxa_allocate_exception();
      lVar12 = *param_2;
      *plVar4 = (long)&PTR_FUN_110ae9c60;
      plVar4[1] = (long)&UNK_10f564510;
      plVar4[2] = lVar12;
      ___cxa_throw();
      pcVar9 = (char *)*plVar4;
      while( true ) {
        while (cVar2 = *pcVar9, cVar2 == '[') {
          pcVar9 = pcVar9 + 1;
          *plVar4 = (long)pcVar9;
          iVar11 = 1;
          do {
            cVar2 = *pcVar9;
            if (cVar2 == '[') {
              iVar11 = iVar11 + 1;
            }
            else if (cVar2 == ']') {
              iVar11 = iVar11 + -1;
            }
            else if (cVar2 == '\0') goto LAB_1092d4220;
            pcVar9 = pcVar9 + 1;
            *plVar4 = (long)pcVar9;
          } while (0 < iVar11);
        }
        if (cVar2 == '>') {
          *plVar4 = (long)(pcVar9 + 1);
          return;
        }
        if (cVar2 == '\0') break;
        pcVar9 = pcVar9 + 1;
        *plVar4 = (long)pcVar9;
      }
LAB_1092d4220:
      plVar5 = (long *)0x18;
      ___cxa_allocate_exception();
      lVar12 = *plVar4;
      *plVar5 = (long)&PTR_FUN_110ae9c60;
      plVar5[1] = (long)&UNK_10f564510;
      plVar5[2] = lVar12;
      ppuVar7 = &PTR_DAT_110ae9c38;
      ___cxa_throw();
      lVar12 = plVar5[1] + ((ulong)(uint)-(int)plVar5[1] & 7);
      if ((ulong)plVar5[2] < (ulong)(lVar12 + (long)ppuVar7)) {
        ppuVar1 = ppuVar7;
        if (ppuVar7 < (undefined **)0x10001) {
          ppuVar1 = (undefined **)0x10000;
        }
        lVar12 = (long)ppuVar1 + 0x16;
        lVar6 = lVar12;
        if ((code *)plVar5[0x2003] == (code *)0x0) {
          __Znam();
        }
        else {
          (*(code *)plVar5[0x2003])();
        }
        plVar4 = (long *)(lVar6 + ((ulong)(uint)-(int)lVar6 & 7));
        plVar10 = plVar4 + 1;
        *plVar4 = *plVar5;
        *plVar5 = lVar6;
        plVar5[2] = lVar6 + lVar12;
        lVar12 = (long)plVar10 + ((ulong)(uint)-(int)plVar10 & 7);
      }
      plVar5[1] = lVar12 + (long)ppuVar7;
      return;
    }
    *param_2 = (long)pcVar8;
    pcVar9 = pcVar8;
  } while( true );
}



/* Entry: 1092d4258; end: 1092d42ff;  */

void FUN_1092d4258(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_1[1] + ((ulong)(uint)-(int)param_1[1] & 7);
  if ((ulong)param_1[2] < lVar4 + param_2) {
    uVar2 = param_2;
    if (param_2 < 0x10001) {
      uVar2 = 0x10000;
    }
    lVar4 = uVar2 + 0x16;
    lVar3 = lVar4;
    if ((code *)param_1[0x2003] == (code *)0x0) {
      __Znam();
    }
    else {
      (*(code *)param_1[0x2003])();
    }
    plVar1 = (long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
    plVar5 = plVar1 + 1;
    *plVar1 = *param_1;
    *param_1 = lVar3;
    param_1[2] = lVar3 + lVar4;
    lVar4 = (long)plVar5 + ((ulong)(uint)-(int)plVar5 & 7);
  }
  param_1[1] = lVar4 + param_2;
  return;
}



/* Entry: 1092d4300; end: 1092d4413;  */

void FUN_1092d4300(long *param_1,ulong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  
  if (param_2 < 0x80) {
    lVar4 = 1;
  }
  else {
    uVar3 = (uint)param_2;
    bVar1 = (byte)param_2;
    if (param_2 < 0x800) {
      *(byte *)(*param_1 + 1) = bVar1 & 0x3f | 0x80;
      param_2 = (ulong)((uint)(param_2 >> 6) & 0x3ffffff | 0xffffffc0);
      lVar4 = 2;
    }
    else if (param_2 >> 0x10 == 0) {
      *(byte *)(*param_1 + 2) = bVar1 & 0x3f | 0x80;
      *(byte *)(*param_1 + 1) = (byte)(uVar3 >> 6) & 0x3f | 0x80;
      param_2 = (ulong)(uVar3 >> 0xc | 0xffffffe0);
      lVar4 = 3;
    }
    else {
      if (0x10 < param_2 >> 0x10) {
        puVar2 = (undefined8 *)0x18;
        ___cxa_allocate_exception();
        lVar4 = *param_1;
        *puVar2 = &PTR_FUN_110ae9c60;
        puVar2[1] = &UNK_10f56456e;
        puVar2[2] = lVar4;
        ___cxa_throw();
        __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return;
      }
      *(byte *)(*param_1 + 3) = bVar1 & 0x3f | 0x80;
      *(byte *)(*param_1 + 2) = (byte)(uVar3 >> 6) & 0x3f | 0x80;
      *(byte *)(*param_1 + 1) = (byte)(uVar3 >> 0xc) & 0x3f | 0x80;
      param_2 = (ulong)(uVar3 >> 0x12 | 0xfffffff0);
      lVar4 = 4;
    }
  }
  *(char *)*param_1 = (char)param_2;
  *param_1 = *param_1 + lVar4;
  return;
}



/* Entry: 1092d4414; end: 1092d4427;  */

void FUN_1092d4414(void)

{
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092d4428; end: 1092d442f;  */

undefined8 FUN_1092d4428(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1092d4430; end: 1092d45e7;  */

long * FUN_1092d4430(long *param_1,char *param_2,char *param_3,undefined8 param_4,long param_5,
                    undefined8 param_6)

{
  char *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined1 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [32];
  long lStack_c0;
  long lStack_b8;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_78;
  char *pcStack_70;
  
  func_0x00010688dfac(auStack_e0);
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  lStack_148 = 0;
  lStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_12f = 0;
  uStack_137 = 0;
  uStack_130 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  puVar2 = auStack_e0;
  func_0x00010688dc94(puVar2,&uStack_170);
  uVar5 = (uint)param_6;
  if ((int)puVar2 == 0) {
    lVar3 = param_5;
    _strlen(param_5);
    pcVar6 = (char *)0x0;
    pcVar7 = (char *)0x0;
    plVar4 = param_1;
    while( true ) {
      puVar2 = auStack_e0;
      func_0x00010688dc94(puVar2,&uStack_170);
      pcVar1 = pcStack_88;
      param_1 = plVar4;
      if (((ulong)puVar2 & 1) != 0) break;
      pcVar7 = pcStack_90;
      if ((uVar5 >> 9 & 1) == 0) {
        for (; pcVar7 != pcVar1; pcVar7 = pcVar7 + 1) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (plVar4,(long)*pcVar7);
        }
      }
      param_1 = &lStack_c0;
      func_0x00010688dd10(param_1,plVar4,param_5,param_5 + lVar3,param_6);
      pcVar6 = pcStack_70;
      pcVar7 = pcStack_78;
      if ((uVar5 >> 10 & 1) != 0) break;
      func_0x00010688ded8(auStack_e0);
      plVar4 = param_1;
    }
    if ((uVar5 >> 9 & 1) == 0) {
      for (; pcVar7 != pcVar6; pcVar7 = pcVar7 + 1) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_1,(long)*pcVar7);
      }
    }
  }
  else if ((uVar5 >> 9 & 1) == 0) {
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1,(long)*param_2);
    }
  }
  if (lStack_150 != 0) {
    lStack_148 = lStack_150;
    __ZdlPv();
  }
  if (lStack_c0 != 0) {
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092d45e8; end: 1092d46db;  */

/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */

long ****** FUN_1092d45e8(long ******param_1,long ******param_2)

{
  ulong uVar1;
  long ******pppppplVar2;
  undefined1 *puVar3;
  long ******pppppplVar4;
  long ******pppppplVar5;
  long ******pppppplVar6;
  long ******pppppplVar7;
  long *****ppppplVar8;
  long ******unaff_x19;
  undefined8 unaff_x20;
  long ******unaff_x21;
  ulong uVar9;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  long *****ppppplStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  if (param_2 != (long ******)0x0) {
    *param_1 = (long *****)0x0;
    param_1[1] = (long *****)0x0;
    param_1[2] = (long *****)0x0;
    ppppplVar8 = *param_2;
    pppppplVar5 = param_2;
    if (param_2[1] != ppppplVar8) {
      uVar9 = 0;
      do {
        FUN_1092d1e04(&ppppplStack_48,ppppplVar8[uVar9]);
        uVar1 = uStack_40;
        pppppplVar4 = (long ******)ppppplStack_48;
        if (-1 < (char)bStack_31) {
          uVar1 = (ulong)bStack_31;
          pppppplVar4 = &ppppplStack_48;
        }
        pppppplVar5 = param_1;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_1,pppppplVar4,uVar1);
        if ((char)bStack_31 < '\0') {
          pppppplVar5 = (long ******)ppppplStack_48;
          __ZdlPv(ppppplStack_48);
        }
        uVar9 = uVar9 + 1;
        ppppplVar8 = *param_2;
      } while (uVar9 < (ulong)((long)param_2[1] - (long)ppppplVar8 >> 3));
    }
    return pppppplVar5;
  }
  puVar3 = (undefined1 *)register0x00000008;
  pppppplVar5 = (long ******)&UNK_10f56458f;
  while( true ) {
    pppppplVar7 = pppppplVar5;
    pppppplVar4 = param_1;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(long *******)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
    *(long *******)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(undefined **)(puVar3 + -8) = unaff_x30;
    pppppplVar5 = pppppplVar7;
    func_0x000107c613d0();
    if (pppppplVar5 < (long ******)0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    *(undefined8 *)(puVar3 + -0x60) = unaff_x20;
    *(long *******)(puVar3 + -0x58) = pppppplVar4;
    *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x48) = &UNK_10002d57c;
    unaff_x29 = puVar3 + -0x50;
    if ((bRam00000001132dfb00 & 1) != 0) {
      return pppppplVar5;
    }
    pppppplVar5 = (long ******)0x1132dfb00;
    func_0x000107c60e48();
    if ((int)pppppplVar5 == 0) {
      return pppppplVar5;
    }
    unaff_x30 = &UNK_10002d5bc;
    puVar3 = puVar3 + -0x60;
    param_1 = (long ******)0x1132dfae8;
    pppppplVar5 = (long ******)&UNK_10f5738ce;
    unaff_x19 = pppppplVar4;
    unaff_x21 = pppppplVar7;
  }
  if (pppppplVar5 < (long ******)0x17) {
    *(char *)((long)pppppplVar4 + 0x17) = (char)pppppplVar5;
    pppppplVar6 = pppppplVar4;
    if (pppppplVar5 == (long ******)0x0) goto code_r0x00010002d55c;
  }
  else {
    pppppplVar2 = (long ******)0x19;
    if (((ulong)pppppplVar5 | 7) != 0x17) {
      pppppplVar2 = (long ******)(((ulong)pppppplVar5 | 7) + 1);
    }
    pppppplVar6 = pppppplVar2;
    func_0x000107c60e20();
    pppppplVar4[1] = (long *****)pppppplVar5;
    pppppplVar4[2] = (long *****)((ulong)pppppplVar2 | 0x8000000000000000);
    *pppppplVar4 = (long *****)pppppplVar6;
  }
  func_0x000107c610b8(pppppplVar6,pppppplVar7,pppppplVar5);
code_r0x00010002d55c:
  *(undefined1 *)((long)pppppplVar6 + (long)pppppplVar5) = 0;
  return pppppplVar4;
}



/* Entry: 1092d46dc; end: 1092d4a0f;  */

long * FUN_1092d46dc(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lStack_208;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)0x18;
  __Znwm();
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = 0;
  lVar14 = 0;
  do {
    lVar1 = lVar14 + 1;
    puVar4 = (undefined4 *)0x10;
    __Znwm();
    if (lVar14 == 0) {
      puVar5 = (undefined8 *)0x18;
      __Znwm();
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      FUN_1092d4cc8();
      *puVar4 = 0;
      *(undefined8 **)(puVar4 + 2) = puVar5;
      FUN_1092d4a10(plVar3,puVar4);
    }
    else {
      puVar5 = (undefined8 *)0x18;
      __Znwm();
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      FUN_1092d4cc8();
      *puVar4 = 3;
      *(undefined8 **)(puVar4 + 2) = puVar5;
      FUN_1092d4a10(plVar3,puVar4);
    }
    puVar4 = (undefined4 *)0x10;
    __Znwm();
    puVar5 = (undefined8 *)0x18;
    __Znwm();
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_1092d4cc8();
    *puVar4 = 1;
    *(undefined8 **)(puVar4 + 2) = puVar5;
    FUN_1092d4a10(plVar3,puVar4);
    lVar14 = lVar1;
  } while (lVar1 != 4);
  puVar6 = (undefined4 *)0x10;
  __Znwm();
  puVar5 = (undefined8 *)0x18;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  FUN_1092d4cc8();
  *puVar6 = 3;
  *(undefined8 **)(puVar6 + 2) = puVar5;
  plVar7 = plVar3;
  puVar4 = puVar6;
  FUN_1092d4a10();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return plVar3;
  }
  ___stack_chk_fail();
  __ZdlPv(puVar5);
  __ZdlPv(puVar6);
  __Unwind_Resume();
  puVar5 = (undefined8 *)plVar7[1];
  if (puVar5 < (undefined8 *)plVar7[2]) {
    puVar15 = puVar5 + 1;
    *puVar5 = puVar4;
    plVar8 = plVar7;
  }
  else {
    lVar14 = (long)puVar5 - *plVar7;
    uVar2 = (lVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_1092d2bf0();
      lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar9 = (long *)0x18;
      __Znwm();
      plVar9[1] = 0;
      plVar9[2] = 0;
      *plVar9 = 0;
      puVar4 = (undefined4 *)0x10;
      __Znwm();
      puVar5 = (undefined8 *)0x18;
      __Znwm();
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      FUN_1092d4cc8();
      *puVar4 = 0;
      *(undefined8 **)(puVar4 + 2) = puVar5;
      FUN_1092d4a10(plVar9,puVar4);
      puVar4 = (undefined4 *)0x10;
      __Znwm();
      puVar5 = (undefined8 *)0x18;
      __Znwm();
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      FUN_1092d4cc8();
      *puVar4 = 7;
      *(undefined8 **)(puVar4 + 2) = puVar5;
      FUN_1092d4a10(plVar9,puVar4);
      plVar10 = (long *)0x10;
      __Znwm();
      puVar5 = (undefined8 *)0x18;
      __Znwm();
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      plVar3 = &lStack_208;
      lVar14 = 7;
      FUN_1092d4cc8();
      *(undefined4 *)plVar10 = 7;
      plVar10[1] = (long)puVar5;
      plVar7 = plVar9;
      plVar8 = plVar10;
      FUN_1092d4a10();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
        return plVar9;
      }
      ___stack_chk_fail();
      __ZdlPv(puVar5);
      __ZdlPv(plVar10);
      __Unwind_Resume();
      plVar9 = plVar7;
      if (lVar14 != 0) {
        FUN_1092d4d38();
        plVar10 = (long *)plVar7[1];
        for (; plVar8 != plVar3; plVar8 = plVar8 + 1) {
          *plVar10 = *plVar8;
          plVar10 = plVar10 + 1;
        }
        plVar7[1] = (long)plVar10;
      }
      return plVar9;
    }
    uVar12 = plVar7[2] - *plVar7;
    uVar13 = (long)uVar12 >> 2;
    if (uVar13 <= uVar2) {
      uVar13 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar12) {
      uVar13 = 0x1fffffffffffffff;
    }
    plVar3 = plVar7;
    FUN_1092d2c04();
    puVar5 = (undefined8 *)((long)plVar3 + lVar14);
    puVar15 = puVar5 + 1;
    *puVar5 = puVar4;
    lVar14 = (long)puVar5 - (plVar7[1] - *plVar7);
    _memcpy(lVar14);
    plVar8 = (long *)*plVar7;
    *plVar7 = lVar14;
    plVar7[1] = (long)puVar15;
    plVar7[2] = (long)(plVar3 + uVar13);
    if (plVar8 != (long *)0x0) {
      __ZdlPv();
    }
  }
  plVar7[1] = (long)puVar15;
  return plVar8;
}



/* Entry: 1092d4a10; end: 1092d4acb;  */

long * FUN_1092d4a10(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lStack_98;
  
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 < (undefined8 *)param_1[2]) {
    puVar12 = puVar6 + 1;
    *puVar6 = param_2;
    plVar3 = param_1;
  }
  else {
    lVar11 = (long)puVar6 - *param_1;
    uVar1 = (lVar11 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_1092d2bf0();
      lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar4 = (long *)0x18;
      __Znwm();
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      puVar5 = (undefined4 *)0x10;
      __Znwm();
      puVar6 = (undefined8 *)0x18;
      __Znwm();
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      FUN_1092d4cc8();
      *puVar5 = 0;
      *(undefined8 **)(puVar5 + 2) = puVar6;
      FUN_1092d4a10(plVar4,puVar5);
      puVar5 = (undefined4 *)0x10;
      __Znwm();
      puVar6 = (undefined8 *)0x18;
      __Znwm();
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      FUN_1092d4cc8();
      *puVar5 = 7;
      *(undefined8 **)(puVar5 + 2) = puVar6;
      FUN_1092d4a10(plVar4,puVar5);
      plVar7 = (long *)0x10;
      __Znwm();
      puVar6 = (undefined8 *)0x18;
      __Znwm();
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      plVar2 = &lStack_98;
      lVar11 = 7;
      FUN_1092d4cc8();
      *(undefined4 *)plVar7 = 7;
      plVar7[1] = (long)puVar6;
      plVar3 = plVar4;
      plVar8 = plVar7;
      FUN_1092d4a10();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
        return plVar4;
      }
      ___stack_chk_fail();
      __ZdlPv(puVar6);
      __ZdlPv(plVar7);
      __Unwind_Resume();
      plVar4 = plVar3;
      if (lVar11 != 0) {
        FUN_1092d4d38();
        plVar7 = (long *)plVar3[1];
        for (; plVar8 != plVar2; plVar8 = plVar8 + 1) {
          *plVar7 = *plVar8;
          plVar7 = plVar7 + 1;
        }
        plVar3[1] = (long)plVar7;
      }
      return plVar4;
    }
    uVar9 = param_1[2] - *param_1;
    uVar10 = (long)uVar9 >> 2;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar10 = 0x1fffffffffffffff;
    }
    plVar2 = param_1;
    FUN_1092d2c04();
    puVar6 = (undefined8 *)((long)plVar2 + lVar11);
    puVar12 = puVar6 + 1;
    *puVar6 = param_2;
    lVar11 = (long)puVar6 - (param_1[1] - *param_1);
    _memcpy(lVar11);
    plVar3 = (long *)*param_1;
    *param_1 = lVar11;
    param_1[1] = (long)puVar12;
    param_1[2] = (long)(plVar2 + uVar10);
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar12;
  return plVar3;
}



/* Entry: 1092d4acc; end: 1092d4cc7;  */

undefined8 * FUN_1092d4acc(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  puVar2 = (undefined4 *)0x10;
  __Znwm();
  puVar3 = (undefined8 *)0x18;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  FUN_1092d4cc8();
  *puVar2 = 0;
  *(undefined8 **)(puVar2 + 2) = puVar3;
  FUN_1092d4a10(puVar1,puVar2);
  puVar2 = (undefined4 *)0x10;
  __Znwm();
  puVar3 = (undefined8 *)0x18;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  FUN_1092d4cc8();
  *puVar2 = 7;
  *(undefined8 **)(puVar2 + 2) = puVar3;
  FUN_1092d4a10(puVar1,puVar2);
  plVar4 = (long *)0x10;
  __Znwm();
  puVar5 = (undefined8 *)0x18;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  plVar7 = &lStack_68;
  lVar8 = 7;
  FUN_1092d4cc8();
  *(undefined4 *)plVar4 = 7;
  plVar4[1] = (long)puVar5;
  puVar3 = puVar1;
  plVar6 = plVar4;
  FUN_1092d4a10();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  __ZdlPv(puVar5);
  __ZdlPv(plVar4);
  __Unwind_Resume();
  puVar1 = puVar3;
  if (lVar8 != 0) {
    FUN_1092d4d38();
    plVar4 = (long *)puVar3[1];
    for (; plVar6 != plVar7; plVar6 = plVar6 + 1) {
      *plVar4 = *plVar6;
      plVar4 = plVar4 + 1;
    }
    puVar3[1] = plVar4;
  }
  return puVar1;
}



/* Entry: 1092d4cc8; end: 1092d4d37;  */

void FUN_1092d4cc8(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    FUN_1092d4d38(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 1092d4d38; end: 1092d4d6f;  */

long * FUN_1092d4d38(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1;
    FUN_1092d2bbc();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
    return plVar1;
  }
  FUN_1092d2ba8();
  if (plRam0000000113732c28 == (long *)0x0) {
    plVar1 = (long *)0x10;
    __Znwm();
    FUN_1092c4fe8();
    plRam0000000113732c28 = plVar1;
  }
  return plRam0000000113732c28;
}



/* Entry: 1092d4d70; end: 1092d4dbf;  */

long FUN_1092d4d70(void)

{
  long lVar1;
  
  if (lRam0000000113732c28 == 0) {
    lVar1 = 0x10;
    __Znwm();
    FUN_1092c4fe8();
    lRam0000000113732c28 = lVar1;
  }
  return lRam0000000113732c28;
}



/* Entry: 1092d4dc0; end: 1092d4e87;  */

void FUN_1092d4dc0(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  int iStack_48;
  int iStack_44;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    uVar3 = (ulong)*(uint *)(param_2 + 4);
    if ((int)*(uint *)(param_2 + 4) < 3) {
      lVar4 = (long)*(int *)(param_2 + 0xc) * (long)*(int *)(param_2 + 8);
    }
    else {
      lVar4 = 1;
      piVar5 = *(int **)(param_2 + 0x40);
      do {
        lVar4 = lVar4 * *piVar5;
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 1;
      } while (uVar3 != 0);
    }
    if (lVar4 != 0) {
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 < iVar1) {
    iStack_48 = 0;
    iStack_44 = param_3;
    if (iVar1 != 0) {
      iStack_48 = (iVar2 * param_3) / iVar1;
    }
  }
  else {
    iStack_44 = 0;
    iStack_48 = param_3;
    if (iVar2 != 0) {
      iStack_44 = (iVar1 * param_3) / iVar2;
    }
  }
  uStack_18 = 0;
  auStack_28[0] = 0x1010000;
  uStack_30 = 0;
  auStack_40[0] = 0x2010000;
  lStack_38 = param_2;
  lStack_20 = param_1;
  FUN_109b0f718(0x4008000000000000,0,auStack_28,auStack_40,&iStack_48,1);
  return;
}



/* Entry: 1092d4e88; end: 1092d7127;  */

void FUN_1092d4e88(ulong *param_1,ulong *param_2,undefined1 *param_3,ulong *param_4,int param_5,
                  undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *extraout_x8;
  ulong **ppuVar14;
  undefined8 **ppuVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  ulong uVar22;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  long lStack_778;
  ulong uStack_770;
  undefined8 **ppuStack_768;
  undefined8 *puStack_760;
  undefined8 *puStack_758;
  undefined8 uStack_750;
  ulong *puStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  undefined8 *puStack_708;
  undefined8 *puStack_700;
  undefined8 *puStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  long lStack_6b8;
  ulong uStack_6b0;
  undefined8 **ppuStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 *puStack_698;
  undefined8 uStack_690;
  ulong *puStack_688;
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  undefined8 *puStack_648;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  ulong *puStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  undefined8 *puStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 uStack_570;
  ulong *puStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  long lStack_538;
  ulong uStack_530;
  undefined8 *puStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  ulong *puStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  long lStack_4d8;
  ulong uStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  uint uStack_4b0;
  int iStack_4ac;
  ulong *puStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  long lStack_478;
  ulong uStack_470;
  undefined8 *puStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  undefined8 *puStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  ulong *puStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  undefined8 *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  ulong *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  ulong uStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  ulong uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined **ppuStack_270;
  ulong *puStack_268;
  undefined8 uStack_260;
  ulong *puStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong **ppuStack_220;
  undefined8 **ppuStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  int iStack_1f8;
  int iStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined2 uStack_1e4;
  undefined1 uStack_1e2;
  undefined1 uStack_1e1;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  uint uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined8 uStack_164;
  undefined8 uStack_15c;
  undefined8 uStack_154;
  undefined8 uStack_14c;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined4 *puStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)param_2 = 0;
  *param_3 = 0;
  uVar9 = *param_4;
  uVar22 = param_4[1];
  puVar7 = param_1;
  puVar10 = param_2;
  if (uVar9 == uVar22) {
    uStack_200 = (undefined **)CONCAT44(uStack_200._4_4_,4);
    puVar10 = &uStack_200;
    puVar7 = param_4;
    FUN_1092d7128();
    uVar9 = *param_4;
    uVar22 = param_4[1];
  }
  piVar1 = (int *)CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0);
  if (uVar22 != uVar9) {
    uVar22 = 0;
    puVar16 = (undefined8 *)((ulong)&uStack_200 | 4);
    uStack_1c0._0_4_ = (uint)&uStack_200 | 8;
    uVar5 = (uint)uStack_1c0;
    puVar20 = (undefined8 *)((ulong)&uStack_260 | 4);
    ppuVar14 = (ulong **)((ulong)&uStack_260 | 8);
    puVar17 = (undefined8 *)((ulong)&uStack_2d0 | 4);
    uVar18 = (ulong)&uStack_2d0 | 8;
    puVar19 = (undefined8 *)((ulong)&uStack_4b0 | 4);
    ppuVar11 = uStack_1b8;
    do {
      uStack_1b8._4_4_ = (undefined4)((ulong)ppuVar11 >> 0x20);
      uStack_1c0._0_4_ = (uint)piVar1;
      iVar3 = *(int *)(uVar9 + uVar22 * 4);
      uStack_1b8 = &puStack_1b0;
      uStack_1c0 = piVar1;
      if (iVar3 < 3) {
        if (iVar3 != 0) {
          uStack_1c0._4_4_ = (undefined4)((ulong)&uStack_200 >> 0x20);
          uStack_1c0._0_4_ = uVar5;
          if (iVar3 == 1) {
            uStack_200 = (undefined **)CONCAT44(uStack_200._4_4_,0x42ff0000);
            puVar16[1] = 0;
            *puVar16 = 0;
            puVar16[3] = 0;
            puVar16[2] = 0;
            puVar16[5] = 0;
            puVar16[4] = 0;
            *(undefined8 *)((long)puVar16 + 0x34) = 0;
            *(undefined8 *)((long)puVar16 + 0x2c) = 0;
            puStack_1b0 = (undefined8 *)0x0;
            uStack_1a8 = 0;
            if ((*param_1 & 0xff8) == 0) {
              if (&uStack_200 != param_1) {
                if (param_1[7] != 0) {
                  piVar1 = (int *)(param_1[7] + 0x14);
                  do {
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar6) {
                      *piVar1 = *piVar1 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (CONCAT44(uStack_1c4,uStack_1c8) != 0) {
                    piVar1 = (int *)(CONCAT44(uStack_1c4,uStack_1c8) + 0x14);
                    do {
                      iVar3 = *piVar1;
                      cVar4 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar6) {
                        *piVar1 = iVar3 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (iVar3 + -1 == 0) {
                      func_0x000109a848d4(&uStack_200);
                    }
                  }
                }
                uStack_1c8 = 0;
                uStack_1c4 = 0;
                uStack_1e1 = 0;
                uStack_1e2 = 0;
                uStack_1e4 = 0;
                uStack_1e8 = 0;
                uStack_1ec = 0;
                uStack_1f0 = 0;
                uStack_1d4 = 0;
                uStack_1d8 = 0;
                uStack_1dc = 0;
                uStack_1e0 = 0;
                if (uStack_200._4_4_ < 1) {
                  uStack_200 = (undefined **)CONCAT44(uStack_200._4_4_,(int)*param_1);
LAB_1092d5e60:
                  if (2 < *(int *)((long)param_1 + 4)) goto LAB_1092d5e94;
                  uStack_200 = (undefined **)
                               CONCAT44(*(int *)((long)param_1 + 4),(undefined4)uStack_200);
                  iStack_1f8 = (int)param_1[1];
                  iStack_1f4 = (int)(param_1[1] >> 0x20);
                  puVar12 = (undefined8 *)param_1[9];
                  *uStack_1b8 = (undefined8 *)*puVar12;
                  uStack_1b8[1] = (undefined8 *)puVar12[1];
                }
                else {
                  lVar13 = 0;
                  do {
                    *(undefined4 *)(CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0) + lVar13 * 4) = 0;
                    lVar13 = lVar13 + 1;
                  } while (lVar13 < uStack_200._4_4_);
                  uStack_200 = (undefined **)CONCAT44(uStack_200._4_4_,(int)*param_1);
                  if (uStack_200._4_4_ < 3) goto LAB_1092d5e60;
LAB_1092d5e94:
                  func_0x000109a84868(&uStack_200,param_1);
                }
                uVar9 = param_1[3];
                uStack_1e8 = (undefined4)uVar9;
                uStack_1e4 = (undefined2)(uVar9 >> 0x20);
                uStack_1e2 = (undefined1)(uVar9 >> 0x30);
                uStack_1e1 = (undefined1)(uVar9 >> 0x38);
                uStack_1f0 = (undefined4)param_1[2];
                uStack_1ec = (undefined4)(param_1[2] >> 0x20);
                uStack_1d8 = (uint)param_1[5];
                uStack_1d4 = (undefined4)(param_1[5] >> 0x20);
                uStack_1e0 = (undefined4)param_1[4];
                uStack_1dc = (undefined4)(param_1[4] >> 0x20);
                uStack_1c8 = (undefined4)param_1[7];
                uStack_1c4 = (undefined4)(param_1[7] >> 0x20);
                uStack_1d0 = (undefined4)param_1[6];
                uStack_1cc = (undefined4)(param_1[6] >> 0x20);
              }
            }
            else {
              uStack_250 = 0;
              uStack_260 = (undefined **)CONCAT44(uStack_260._4_4_,0x1010000);
              uStack_2d0 = (undefined **)CONCAT44(uStack_2d0._4_4_,0x2010000);
              uStack_2c0 = 0;
              puStack_2c8 = &uStack_200;
              puStack_258 = param_1;
              FUN_109ac9fc8(&uStack_260,&uStack_2d0,7,0);
            }
            if (param_5 == 0) {
              uStack_6e8 = CONCAT44(iStack_1f4,iStack_1f8);
              uStack_6d8 = CONCAT17(uStack_1e1,CONCAT16(uStack_1e2,CONCAT24(uStack_1e4,uStack_1e8)))
              ;
              uStack_6e0 = CONCAT44(uStack_1ec,uStack_1f0);
              uStack_6c8 = CONCAT44(uStack_1d4,uStack_1d8);
              uStack_6d0 = CONCAT44(uStack_1dc,uStack_1e0);
              uStack_6f0 = uStack_200;
              lStack_6b8 = CONCAT44(uStack_1c4,uStack_1c8);
              uStack_6c0 = CONCAT44(uStack_1cc,uStack_1d0);
              puStack_6a0 = (undefined8 *)0x0;
              puStack_698 = (undefined8 *)0x0;
              if (CONCAT44(uStack_1c4,uStack_1c8) != 0) {
                piVar1 = (int *)(CONCAT44(uStack_1c4,uStack_1c8) + 0x14);
                do {
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = *piVar1 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              uStack_6b0 = (ulong)&uStack_6f0 | 8;
              ppuStack_6a8 = &puStack_6a0;
              if (uStack_200._4_4_ < 3) {
                puStack_6a0 = *uStack_1b8;
                puStack_698 = uStack_1b8[1];
              }
              else {
                uStack_6f0 = (undefined **)((ulong)uStack_200 & 0xffffffff);
                func_0x000109a84868(&uStack_6f0,&uStack_200);
              }
              puVar7 = &uStack_2d0;
              puVar10 = &uStack_6f0;
              FUN_1092e9da4(puVar7,puVar10,param_2);
              if (lStack_6b8 != 0) {
                piVar1 = (int *)(lStack_6b8 + 0x14);
                do {
                  iVar3 = *piVar1;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar3 + -1 == 0) {
                  puVar7 = &uStack_6f0;
                  func_0x000109a848d4();
                }
              }
              lStack_6b8 = 0;
              uStack_6d8 = 0;
              uStack_6e0 = 0;
              uStack_6c8 = 0;
              uStack_6d0 = 0;
              if (0 < uStack_6f0._4_4_) {
                lVar13 = 0;
                do {
                  *(undefined4 *)(uStack_6b0 + lVar13 * 4) = 0;
                  lVar13 = lVar13 + 1;
                } while (lVar13 < uStack_6f0._4_4_);
              }
              bVar6 = ppuStack_6a8 == &puStack_6a0;
              ppuVar11 = ppuStack_6a8;
            }
            else {
              uStack_260 = (undefined **)CONCAT44(uStack_260._4_4_,0x42ff0000);
              puVar20[1] = 0;
              *puVar20 = 0;
              puVar20[3] = 0;
              puVar20[2] = 0;
              puVar20[5] = 0;
              puVar20[4] = 0;
              *(undefined8 *)((long)puVar20 + 0x34) = 0;
              *(undefined8 *)((long)puVar20 + 0x2c) = 0;
              puStack_210 = (undefined8 *)0x0;
              uStack_208 = 0;
              ppuStack_220 = ppuVar14;
              ppuStack_218 = &puStack_210;
              FUN_1092d4dc0(&uStack_200,&uStack_260,0x230);
              puStack_688 = puStack_258;
              uStack_690 = uStack_260;
              uStack_678 = uStack_248;
              uStack_680 = uStack_250;
              uStack_668 = uStack_238;
              uStack_670 = uStack_240;
              uStack_658 = uStack_228;
              uStack_660 = uStack_230;
              puStack_640 = (undefined8 *)0x0;
              puStack_638 = (undefined8 *)0x0;
              if (uStack_228 != 0) {
                piVar1 = (int *)(uStack_228 + 0x14);
                do {
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = *piVar1 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              uStack_650 = (ulong)&uStack_690 | 8;
              puStack_648 = &puStack_640;
              if (uStack_260._4_4_ < 3) {
                puStack_640 = *ppuStack_218;
                puStack_638 = ppuStack_218[1];
              }
              else {
                uStack_690 = (undefined **)((ulong)uStack_260 & 0xffffffff);
                func_0x000109a84868(&uStack_690,&uStack_260);
              }
              puVar7 = &uStack_2d0;
              puVar10 = &uStack_690;
              FUN_1092e9da4(puVar7,puVar10,param_2);
              if (uStack_658 != 0) {
                piVar1 = (int *)(uStack_658 + 0x14);
                do {
                  iVar3 = *piVar1;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar3 + -1 == 0) {
                  puVar7 = &uStack_690;
                  func_0x000109a848d4();
                }
              }
              uStack_658 = 0;
              uStack_678 = 0;
              uStack_680 = 0;
              uStack_668 = 0;
              uStack_670 = 0;
              if (0 < uStack_690._4_4_) {
                lVar13 = 0;
                do {
                  *(undefined4 *)(uStack_650 + lVar13 * 4) = 0;
                  lVar13 = lVar13 + 1;
                } while (lVar13 < uStack_690._4_4_);
              }
              if ((undefined8 **)puStack_648 != &puStack_640 &&
                  (undefined8 **)puStack_648 != (undefined8 **)0x0) {
                puVar7 = (ulong *)puStack_648[-1];
                _free();
              }
              if (uStack_228 != 0) {
                piVar1 = (int *)(uStack_228 + 0x14);
                do {
                  iVar3 = *piVar1;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar3 + -1 == 0) {
                  puVar7 = &uStack_260;
                  func_0x000109a848d4();
                }
              }
              uStack_228 = 0;
              uStack_248 = 0;
              uStack_250 = 0;
              uStack_238 = 0;
              uStack_240 = 0;
              if (0 < uStack_260._4_4_) {
                lVar13 = 0;
                do {
                  *(undefined4 *)((long)ppuStack_220 + lVar13 * 4) = 0;
                  lVar13 = lVar13 + 1;
                } while (lVar13 < uStack_260._4_4_);
              }
              bVar6 = ppuStack_218 == &puStack_210;
              ppuVar11 = ppuStack_218;
            }
            if (!bVar6 && ppuVar11 != (undefined8 **)0x0) {
              puVar7 = ppuVar11[-1];
              _free();
            }
            if (CONCAT44(uStack_1c4,uStack_1c8) != 0) {
              piVar1 = (int *)(CONCAT44(uStack_1c4,uStack_1c8) + 0x14);
              do {
                iVar3 = *piVar1;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar3 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar3 + -1 == 0) {
                puVar7 = &uStack_200;
                func_0x000109a848d4();
              }
            }
            if (0 < uStack_200._4_4_) {
              lVar13 = 0;
              do {
                *(undefined4 *)(CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0) + lVar13 * 4) = 0;
                lVar13 = lVar13 + 1;
              } while (lVar13 < uStack_200._4_4_);
            }
          }
          else {
            uStack_1b8 = ppuVar11;
            if (iVar3 != 2) goto LAB_1092d6e80;
            uStack_200 = (undefined **)CONCAT44(uStack_200._4_4_,0x42ff0000);
            puVar16[1] = 0;
            *puVar16 = 0;
            puVar16[3] = 0;
            puVar16[2] = 0;
            puVar16[5] = 0;
            puVar16[4] = 0;
            *(undefined8 *)((long)puVar16 + 0x34) = 0;
            *(undefined8 *)((long)puVar16 + 0x2c) = 0;
            puStack_1b0 = (undefined8 *)0x0;
            uStack_1a8 = 0;
            if ((*param_1 & 0xff8) == 0) {
              uStack_1b8 = &puStack_1b0;
              if (&uStack_200 != param_1) {
                if (param_1[7] != 0) {
                  piVar1 = (int *)(param_1[7] + 0x14);
                  do {
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar6) {
                      *piVar1 = *piVar1 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (CONCAT44(uStack_1c4,uStack_1c8) != 0) {
                    piVar1 = (int *)(CONCAT44(uStack_1c4,uStack_1c8) + 0x14);
                    do {
                      iVar3 = *piVar1;
                      cVar4 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar6) {
                        *piVar1 = iVar3 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (iVar3 + -1 == 0) {
                      puVar7 = &uStack_200;
                      func_0x000109a848d4();
                    }
                  }
                }
                uStack_1c8 = 0;
                uStack_1c4 = 0;
                uStack_1e1 = 0;
                uStack_1e2 = 0;
                uStack_1e4 = 0;
                uStack_1e8 = 0;
                uStack_1ec = 0;
                uStack_1f0 = 0;
                uStack_1d4 = 0;
                uStack_1d8 = 0;
                uStack_1dc = 0;
                uStack_1e0 = 0;
                if (uStack_200._4_4_ < 1) {
                  uStack_200 = (undefined **)CONCAT44(uStack_200._4_4_,(int)*param_1);
LAB_1092d59b8:
                  if (2 < *(int *)((long)param_1 + 4)) goto LAB_1092d59ec;
                  uStack_200 = (undefined **)
                               CONCAT44(*(int *)((long)param_1 + 4),(undefined4)uStack_200);
                  iStack_1f8 = (int)param_1[1];
                  iStack_1f4 = (int)(param_1[1] >> 0x20);
                  puVar12 = (undefined8 *)param_1[9];
                  *uStack_1b8 = (undefined8 *)*puVar12;
                  uStack_1b8[1] = (undefined8 *)puVar12[1];
                }
                else {
                  lVar13 = 0;
                  do {
                    *(undefined4 *)(CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0) + lVar13 * 4) = 0;
                    lVar13 = lVar13 + 1;
                  } while (lVar13 < uStack_200._4_4_);
                  uStack_200 = (undefined **)CONCAT44(uStack_200._4_4_,(int)*param_1);
                  if (uStack_200._4_4_ < 3) goto LAB_1092d59b8;
LAB_1092d59ec:
                  puVar7 = &uStack_200;
                  func_0x000109a84868(puVar7,param_1);
                }
                uVar9 = param_1[3];
                uStack_1e8 = (undefined4)uVar9;
                uStack_1e4 = (undefined2)(uVar9 >> 0x20);
                uStack_1e2 = (undefined1)(uVar9 >> 0x30);
                uStack_1e1 = (undefined1)(uVar9 >> 0x38);
                uStack_1f0 = (undefined4)param_1[2];
                uStack_1ec = (undefined4)(param_1[2] >> 0x20);
                uStack_1d8 = (uint)param_1[5];
                uStack_1d4 = (undefined4)(param_1[5] >> 0x20);
                uStack_1e0 = (undefined4)param_1[4];
                uStack_1dc = (undefined4)(param_1[4] >> 0x20);
                uStack_1c8 = (undefined4)param_1[7];
                uStack_1c4 = (undefined4)(param_1[7] >> 0x20);
                uStack_1d0 = (undefined4)param_1[6];
                uStack_1cc = (undefined4)(param_1[6] >> 0x20);
              }
            }
            else {
              uStack_250 = 0;
              uStack_260 = (undefined **)CONCAT44(uStack_260._4_4_,0x1010000);
              uStack_2d0 = (undefined **)CONCAT44(uStack_2d0._4_4_,0x2010000);
              uStack_2c0 = 0;
              puVar7 = &uStack_260;
              puStack_2c8 = &uStack_200;
              puStack_258 = param_1;
              uStack_1b8 = &puStack_1b0;
              FUN_109ac9fc8(puVar7,&uStack_2d0,7,0);
            }
            if (param_5 == 0) {
              FUN_1092d4d70();
              uStack_7a8 = CONCAT44(iStack_1f4,iStack_1f8);
              uStack_798 = CONCAT17(uStack_1e1,CONCAT16(uStack_1e2,CONCAT24(uStack_1e4,uStack_1e8)))
              ;
              uStack_7a0 = CONCAT44(uStack_1ec,uStack_1f0);
              uStack_788 = CONCAT44(uStack_1d4,uStack_1d8);
              uStack_790 = CONCAT44(uStack_1dc,uStack_1e0);
              uStack_7b0 = uStack_200;
              lStack_778 = CONCAT44(uStack_1c4,uStack_1c8);
              uStack_780 = CONCAT44(uStack_1cc,uStack_1d0);
              puStack_760 = (undefined8 *)0x0;
              puStack_758 = (undefined8 *)0x0;
              if (CONCAT44(uStack_1c4,uStack_1c8) != 0) {
                piVar1 = (int *)(CONCAT44(uStack_1c4,uStack_1c8) + 0x14);
                do {
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = *piVar1 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              uStack_770 = (ulong)&uStack_7b0 | 8;
              ppuStack_768 = &puStack_760;
              if (uStack_200._4_4_ < 3) {
                puStack_760 = *uStack_1b8;
                puStack_758 = uStack_1b8[1];
              }
              else {
                uStack_7b0 = (undefined **)((ulong)uStack_200 & 0xffffffff);
                func_0x000109a84868(&uStack_7b0,&uStack_200);
              }
              puVar10 = &uStack_7b0;
              FUN_1092c5038(puVar7,puVar10,param_2);
              if (lStack_778 != 0) {
                piVar1 = (int *)(lStack_778 + 0x14);
                do {
                  iVar3 = *piVar1;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar3 + -1 == 0) {
                  puVar7 = &uStack_7b0;
                  func_0x000109a848d4();
                }
              }
              lStack_778 = 0;
              uStack_798 = 0;
              uStack_7a0 = 0;
              uStack_788 = 0;
              uStack_790 = 0;
              if (0 < uStack_7b0._4_4_) {
                lVar13 = 0;
                do {
                  *(undefined4 *)(uStack_770 + lVar13 * 4) = 0;
                  lVar13 = lVar13 + 1;
                } while (lVar13 < uStack_7b0._4_4_);
              }
              bVar6 = ppuStack_768 == &puStack_760;
              ppuVar11 = ppuStack_768;
            }
            else {
              uStack_260 = (undefined **)CONCAT44(uStack_260._4_4_,0x42ff0000);
              puVar20[1] = 0;
              *puVar20 = 0;
              puVar20[3] = 0;
              puVar20[2] = 0;
              puVar20[5] = 0;
              puVar20[4] = 0;
              *(undefined8 *)((long)puVar20 + 0x34) = 0;
              *(undefined8 *)((long)puVar20 + 0x2c) = 0;
              puStack_210 = (undefined8 *)0x0;
              uStack_208 = 0;
              if ((iStack_1f4 < 0x5dd) && (iStack_1f8 < 0x5dd)) {
                ppuStack_220 = ppuVar14;
                ppuStack_218 = &puStack_210;
                ppuVar11 = uStack_1b8;
                if (CONCAT44(uStack_1c4,uStack_1c8) != 0) {
                  piVar1 = (int *)(CONCAT44(uStack_1c4,uStack_1c8) + 0x14);
                  do {
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar6) {
                      *piVar1 = *piVar1 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (uStack_228 != 0) {
                    piVar1 = (int *)(uStack_228 + 0x14);
                    do {
                      iVar3 = *piVar1;
                      cVar4 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar6) {
                        *piVar1 = iVar3 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (iVar3 + -1 == 0) {
                      puVar7 = &uStack_260;
                      func_0x000109a848d4();
                      ppuVar11 = uStack_1b8;
                    }
                  }
                }
                uStack_228 = 0;
                uStack_248 = 0;
                uStack_250 = 0;
                uStack_238 = 0;
                uStack_240 = 0;
                uStack_1b8 = ppuVar11;
                if (uStack_260._4_4_ < 1) {
LAB_1092d5c08:
                  if (2 < uStack_200._4_4_) goto LAB_1092d5c3c;
                  uStack_260 = uStack_200;
                  puStack_258 = (ulong *)CONCAT44(iStack_1f4,iStack_1f8);
                  *ppuStack_218 = *ppuVar11;
                  ppuStack_218[1] = ppuVar11[1];
                }
                else {
                  lVar13 = 0;
                  do {
                    *(undefined4 *)((long)ppuStack_220 + lVar13 * 4) = 0;
                    lVar13 = lVar13 + 1;
                  } while (lVar13 < uStack_260._4_4_);
                  if (uStack_260._4_4_ < 3) goto LAB_1092d5c08;
LAB_1092d5c3c:
                  uStack_260 = (undefined **)CONCAT44(uStack_260._4_4_,(undefined4)uStack_200);
                  puVar7 = &uStack_260;
                  func_0x000109a84868(puVar7,&uStack_200);
                }
                uStack_248 = CONCAT17(uStack_1e1,
                                      CONCAT16(uStack_1e2,CONCAT24(uStack_1e4,uStack_1e8)));
                uStack_250 = CONCAT44(uStack_1ec,uStack_1f0);
                uStack_238 = CONCAT44(uStack_1d4,uStack_1d8);
                uStack_240 = CONCAT44(uStack_1dc,uStack_1e0);
                uStack_228 = CONCAT44(uStack_1c4,uStack_1c8);
                uStack_230 = CONCAT44(uStack_1cc,uStack_1d0);
              }
              else {
                puVar7 = &uStack_200;
                ppuStack_220 = ppuVar14;
                ppuStack_218 = &puStack_210;
                FUN_1092d4dc0(puVar7,&uStack_260,0x5dc);
              }
              FUN_1092d4d70();
              puStack_748 = puStack_258;
              uStack_750 = uStack_260;
              uStack_738 = uStack_248;
              uStack_740 = uStack_250;
              uStack_728 = uStack_238;
              uStack_730 = uStack_240;
              uStack_718 = uStack_228;
              uStack_720 = uStack_230;
              puStack_700 = (undefined8 *)0x0;
              puStack_6f8 = (undefined8 *)0x0;
              if (uStack_228 != 0) {
                piVar1 = (int *)(uStack_228 + 0x14);
                do {
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = *piVar1 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              uStack_710 = (ulong)&uStack_750 | 8;
              puStack_708 = &puStack_700;
              if (uStack_260._4_4_ < 3) {
                puStack_700 = *ppuStack_218;
                puStack_6f8 = ppuStack_218[1];
              }
              else {
                uStack_750 = (undefined **)((ulong)uStack_260 & 0xffffffff);
                func_0x000109a84868(&uStack_750,&uStack_260);
              }
              puVar10 = &uStack_750;
              FUN_1092c5038(puVar7,puVar10,param_2);
              if (uStack_718 != 0) {
                piVar1 = (int *)(uStack_718 + 0x14);
                do {
                  iVar3 = *piVar1;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar3 + -1 == 0) {
                  puVar7 = &uStack_750;
                  func_0x000109a848d4();
                }
              }
              uStack_718 = 0;
              uStack_738 = 0;
              uStack_740 = 0;
              uStack_728 = 0;
              uStack_730 = 0;
              if (0 < uStack_750._4_4_) {
                lVar13 = 0;
                do {
                  *(undefined4 *)(uStack_710 + lVar13 * 4) = 0;
                  lVar13 = lVar13 + 1;
                } while (lVar13 < uStack_750._4_4_);
              }
              if ((undefined8 **)puStack_708 != &puStack_700 &&
                  (undefined8 **)puStack_708 != (undefined8 **)0x0) {
                puVar7 = (ulong *)puStack_708[-1];
                _free();
              }
              if (uStack_228 != 0) {
                piVar1 = (int *)(uStack_228 + 0x14);
                do {
                  iVar3 = *piVar1;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar3 + -1 == 0) {
                  puVar7 = &uStack_260;
                  func_0x000109a848d4();
                }
              }
              uStack_228 = 0;
              uStack_248 = 0;
              uStack_250 = 0;
              uStack_238 = 0;
              uStack_240 = 0;
              if (0 < uStack_260._4_4_) {
                lVar13 = 0;
                do {
                  *(undefined4 *)((long)ppuStack_220 + lVar13 * 4) = 0;
                  lVar13 = lVar13 + 1;
                } while (lVar13 < uStack_260._4_4_);
              }
              bVar6 = ppuStack_218 == &puStack_210;
              ppuVar11 = ppuStack_218;
            }
            if (!bVar6 && ppuVar11 != (undefined8 **)0x0) {
              puVar7 = ppuVar11[-1];
              _free();
            }
            if (CONCAT44(uStack_1c4,uStack_1c8) != 0) {
              piVar1 = (int *)(CONCAT44(uStack_1c4,uStack_1c8) + 0x14);
              do {
                iVar3 = *piVar1;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar3 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar3 + -1 == 0) {
                puVar7 = &uStack_200;
                func_0x000109a848d4();
              }
            }
            if (0 < uStack_200._4_4_) {
              lVar13 = 0;
              do {
                *(undefined4 *)(CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0) + lVar13 * 4) = 0;
                lVar13 = lVar13 + 1;
              } while (lVar13 < uStack_200._4_4_);
            }
          }
          uStack_1c4 = 0;
          uStack_1c8 = 0;
          uStack_1d4 = 0;
          uStack_1d8 = 0;
          uStack_1dc = 0;
          uStack_1e0 = 0;
          uStack_1e1 = 0;
          uStack_1e2 = 0;
          uStack_1e4 = 0;
          uStack_1e8 = 0;
          uStack_1ec = 0;
          uStack_1f0 = 0;
          piVar1 = (int *)CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0);
          if (uStack_1b8 != &puStack_1b0 && uStack_1b8 != (undefined8 **)0x0) {
            puVar7 = uStack_1b8[-1];
            _free();
            piVar1 = (int *)CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0);
          }
          goto LAB_1092d6e80;
        }
        uStack_1b8 = ppuVar11;
        func_0x0001092d96a8(&uStack_260);
        if (param_5 == 0) {
          puVar10 = param_1;
          FUN_1092cebf8(&uStack_2d0,param_1,param_2,&uStack_260,param_7,param_6);
        }
        else {
          uStack_200 = (undefined **)CONCAT44(uStack_200._4_4_,0x42ff0000);
          puVar16[1] = 0;
          *puVar16 = 0;
          puVar16[3] = 0;
          puVar16[2] = 0;
          puVar16[5] = 0;
          puVar16[4] = 0;
          *(undefined8 *)((long)puVar16 + 0x34) = 0;
          *(undefined8 *)((long)puVar16 + 0x2c) = 0;
          puStack_1b0 = (undefined8 *)0x0;
          uStack_1a8 = 0;
          uStack_1c0 = &iStack_1f8;
          uStack_1b8 = &puStack_1b0;
          FUN_1092d4dc0(param_1,&uStack_200,600);
          puVar10 = &uStack_200;
          FUN_1092cebf8(&uStack_2d0,puVar10,param_2,&uStack_260,param_7,param_6);
          if (CONCAT44(uStack_1c4,uStack_1c8) != 0) {
            piVar1 = (int *)(CONCAT44(uStack_1c4,uStack_1c8) + 0x14);
            do {
              iVar3 = *piVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar3 + -1 == 0) {
              func_0x000109a848d4(&uStack_200);
            }
          }
          uStack_1c8 = 0;
          uStack_1c4 = 0;
          uStack_1e1 = 0;
          uStack_1e2 = 0;
          uStack_1e4 = 0;
          uStack_1e8 = 0;
          uStack_1ec = 0;
          uStack_1f0 = 0;
          uStack_1d4 = 0;
          uStack_1d8 = 0;
          uStack_1dc = 0;
          uStack_1e0 = 0;
          if (0 < uStack_200._4_4_) {
            lVar13 = 0;
            do {
              uStack_1c0[lVar13] = 0;
              lVar13 = lVar13 + 1;
            } while (lVar13 < uStack_200._4_4_);
          }
          if (uStack_1b8 != &puStack_1b0 && uStack_1b8 != (undefined8 **)0x0) {
            _free(uStack_1b8[-1]);
          }
        }
        uStack_260 = &PTR_FUN_110ae9f48;
LAB_1092d5740:
        puVar7 = puStack_258;
        piVar1 = uStack_1c0;
        if (puStack_258 == (ulong *)0x0) goto LAB_1092d6e80;
LAB_1092d6e58:
        iVar3 = (int)puVar7[1] + -1;
        *(int *)(puVar7 + 1) = iVar3;
        piVar1 = uStack_1c0;
        if (iVar3 == 0) {
          *(undefined4 *)(puVar7 + 1) = 0xdeadf001;
          (**(code **)(*puVar7 + 8))();
          piVar1 = uStack_1c0;
        }
      }
      else if (iVar3 < 5) {
        if (iVar3 == 3) {
          uStack_2d0 = &PTR_FUN_110ae9d88;
          uStack_200 = (undefined **)0x4248000041200000;
          iStack_1f8 = 0x435c0000;
          uStack_1f0 = 2;
          uStack_1ec = 0;
          uStack_1e8 = 0x41200000;
          uStack_1e4 = 1;
          uStack_1e2 = 1;
          uStack_1e0 = 0x41600000;
          uStack_1dc = 0x459c4000;
          uStack_1d8 = uStack_1d8 & 0xffffff00;
          uStack_1d4 = 0x3d4ccccd;
          uStack_1d0 = 0x7f7fffff;
          uStack_1cc = CONCAT31(uStack_1cc._1_3_,1);
          uStack_1c8 = 0x3e99999a;
          uStack_1c4 = 0x7f7fffff;
          uStack_1c0._0_4_ = (uint)uStack_1c0 & 0xffffff00;
          uStack_1c0._4_4_ = 0x3e99999a;
          uStack_1b8._0_4_ = 0x7f7fffff;
          puStack_1b0 = (undefined8 *)0xd00000000;
          uStack_1a8 = CONCAT71(uStack_1a8._1_7_,1);
          uStack_1a0 = 0x3fe999999999999a;
          uStack_194 = 0;
          uStack_190 = 0x4100000019;
          uStack_188 = 0;
          uStack_180 = 0;
          uStack_178 = 0;
          uStack_170 = 0x42ff0000;
          uStack_164 = 0;
          uStack_16c = 0;
          uStack_168 = 0;
          uStack_154 = 0;
          uStack_15c = 0;
          uStack_144 = 0;
          uStack_14c = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_13c = 0;
          uStack_120 = 0;
          uStack_118 = 0;
          uStack_110 = 0x42ff0000;
          uStack_104 = 0;
          uStack_10c = 0;
          uStack_f4 = 0;
          uStack_fc = 0;
          uStack_e4 = 0;
          uStack_ec = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_dc = 0;
          uStack_c0 = 0;
          uStack_b8 = 0;
          puStack_130 = &uStack_168;
          puStack_128 = &uStack_120;
          lStack_d0 = (long)&uStack_10c + 4;
          puStack_c8 = &uStack_c0;
          if (param_5 == 0) {
            puVar10 = param_1;
            FUN_1092ca8ac(&uStack_200,param_1,param_2,&uStack_2d0,0,0);
          }
          else {
            uStack_260 = (undefined **)CONCAT44(uStack_260._4_4_,0x42ff0000);
            puVar20[1] = 0;
            *puVar20 = 0;
            puVar20[3] = 0;
            puVar20[2] = 0;
            puVar20[5] = 0;
            puVar20[4] = 0;
            *(undefined8 *)((long)puVar20 + 0x34) = 0;
            *(undefined8 *)((long)puVar20 + 0x2c) = 0;
            puStack_210 = (undefined8 *)0x0;
            uStack_208 = 0;
            ppuStack_220 = &puStack_258;
            ppuStack_218 = &puStack_210;
            FUN_1092d4dc0(param_1,&uStack_260,0x230);
            puVar10 = &uStack_260;
            FUN_1092ca8ac(&uStack_200,puVar10,param_2,&uStack_2d0,0,0);
            if (uStack_228 != 0) {
              piVar1 = (int *)(uStack_228 + 0x14);
              do {
                iVar3 = *piVar1;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar3 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar3 + -1 == 0) {
                func_0x000109a848d4(&uStack_260);
              }
            }
            uStack_228 = 0;
            uStack_248 = 0;
            uStack_250 = 0;
            uStack_238 = 0;
            uStack_240 = 0;
            if (0 < uStack_260._4_4_) {
              lVar13 = 0;
              do {
                *(undefined4 *)((long)ppuStack_220 + lVar13 * 4) = 0;
                lVar13 = lVar13 + 1;
              } while (lVar13 < uStack_260._4_4_);
            }
            if (ppuStack_218 != &puStack_210 && ppuStack_218 != (undefined8 **)0x0) {
              _free(ppuStack_218[-1]);
            }
          }
          puVar7 = &uStack_200;
          FUN_1092cf31c();
          uStack_1b8 = (undefined8 **)CONCAT44(uStack_1b8._4_4_,(undefined4)uStack_1b8);
          piVar1 = (int *)CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0);
        }
        else {
          uStack_1b8 = ppuVar11;
          if (iVar3 == 4) {
            func_0x0001092d96a8(&ppuStack_270);
            iStack_1f8 = 0x42ff0000;
            uStack_1ec = 0;
            uStack_1e8 = 0;
            iStack_1f4 = 0;
            uStack_1f0 = 0;
            uStack_1dc = 0;
            uStack_1d8 = 0;
            uStack_1e4 = 0;
            uStack_1e2 = 0;
            uStack_1e1 = 0;
            uStack_1e0 = 0;
            uStack_1cc = 0;
            uStack_1d4 = 0;
            uStack_1d0 = 0;
            uStack_1c0._0_4_ = 0;
            uStack_1c0._4_4_ = 0;
            uStack_1c8 = 0;
            uStack_1c4 = 0;
            uStack_1a8 = 0;
            uStack_1a0 = 0;
            uStack_200 = &PTR_FUN_110aea318;
            uStack_180 = 0;
            uStack_188 = 0;
            uStack_170 = 0;
            uStack_16c = 0;
            uStack_178 = 0;
            uStack_260 = (undefined **)CONCAT44(uStack_260._4_4_,0x42ff0000);
            puVar20[1] = 0;
            *puVar20 = 0;
            puVar20[3] = 0;
            puVar20[2] = 0;
            puVar20[5] = 0;
            puVar20[4] = 0;
            *(undefined8 *)((long)puVar20 + 0x34) = 0;
            *(undefined8 *)((long)puVar20 + 0x2c) = 0;
            puStack_210 = (undefined8 *)0x0;
            uStack_208 = 0;
            if ((*param_1 & 0xff8) == 0) {
              ppuStack_220 = ppuVar14;
              ppuStack_218 = &puStack_210;
              puStack_1b0 = &uStack_1a8;
              uStack_1b8 = (undefined8 **)&uStack_1f0;
              if (&uStack_260 != param_1) {
                if (param_1[7] != 0) {
                  piVar1 = (int *)(param_1[7] + 0x14);
                  do {
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar6) {
                      *piVar1 = *piVar1 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (uStack_228 != 0) {
                    piVar1 = (int *)(uStack_228 + 0x14);
                    do {
                      iVar3 = *piVar1;
                      cVar4 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar6) {
                        *piVar1 = iVar3 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (iVar3 + -1 == 0) {
                      func_0x000109a848d4(&uStack_260);
                    }
                  }
                }
                uStack_228 = 0;
                uStack_248 = 0;
                uStack_250 = 0;
                uStack_238 = 0;
                uStack_240 = 0;
                if (uStack_260._4_4_ < 1) {
                  uStack_260 = (undefined **)CONCAT44(uStack_260._4_4_,(int)*param_1);
LAB_1092d686c:
                  if (2 < *(int *)((long)param_1 + 4)) goto LAB_1092d68a0;
                  uStack_260 = (undefined **)
                               CONCAT44(*(int *)((long)param_1 + 4),(undefined4)uStack_260);
                  puStack_258 = (ulong *)param_1[1];
                  puVar12 = (undefined8 *)param_1[9];
                  *ppuStack_218 = (undefined8 *)*puVar12;
                  ppuStack_218[1] = (undefined8 *)puVar12[1];
                }
                else {
                  lVar13 = 0;
                  do {
                    *(undefined4 *)((long)ppuStack_220 + lVar13 * 4) = 0;
                    lVar13 = lVar13 + 1;
                  } while (lVar13 < uStack_260._4_4_);
                  uStack_260 = (undefined **)CONCAT44(uStack_260._4_4_,(int)*param_1);
                  if (uStack_260._4_4_ < 3) goto LAB_1092d686c;
LAB_1092d68a0:
                  func_0x000109a84868(&uStack_260,param_1);
                }
                uStack_248 = param_1[3];
                uStack_250 = param_1[2];
                uStack_238 = param_1[5];
                uStack_240 = param_1[4];
                uStack_228 = param_1[7];
                uStack_230 = param_1[6];
              }
            }
            else {
              uStack_2c0 = 0;
              uStack_2d0 = (undefined **)CONCAT44(uStack_2d0._4_4_,0x1010000);
              uStack_4b0 = 0x2010000;
              uStack_4a0 = 0;
              puStack_4a8 = &uStack_260;
              puStack_2c8 = param_1;
              ppuStack_220 = ppuVar14;
              ppuStack_218 = &puStack_210;
              puStack_1b0 = &uStack_1a8;
              uStack_1b8 = (undefined8 **)&uStack_1f0;
              FUN_109ac9fc8(&uStack_2d0,&uStack_4b0,7,0);
            }
            if (param_5 == 0) {
              puStack_3e8 = puStack_258;
              uStack_3f0 = uStack_260;
              uStack_3d8 = uStack_248;
              uStack_3e0 = uStack_250;
              uStack_3c8 = uStack_238;
              uStack_3d0 = uStack_240;
              uStack_3b8 = uStack_228;
              uStack_3c0 = uStack_230;
              puStack_3a0 = (undefined8 *)0x0;
              puStack_398 = (undefined8 *)0x0;
              if (uStack_228 != 0) {
                piVar1 = (int *)(uStack_228 + 0x14);
                do {
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = *piVar1 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              uStack_3b0 = (ulong)&uStack_3f0 | 8;
              puStack_3a8 = &puStack_3a0;
              if (uStack_260._4_4_ < 3) {
                puStack_3a0 = *ppuStack_218;
                puStack_398 = ppuStack_218[1];
              }
              else {
                uStack_3f0 = (undefined **)((ulong)uStack_260 & 0xffffffff);
                func_0x000109a84868(&uStack_3f0,&uStack_260);
              }
              uStack_448 = param_1[1];
              uStack_450 = *param_1;
              uStack_438 = param_1[3];
              uStack_440 = param_1[2];
              iVar3 = *(int *)((long)param_1 + 4);
              uStack_428 = param_1[5];
              uStack_430 = param_1[4];
              uStack_418 = param_1[7];
              uStack_420 = param_1[6];
              uStack_400 = 0;
              uStack_3f8 = 0;
              if (param_1[7] != 0) {
                piVar1 = (int *)(param_1[7] + 0x14);
                do {
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = *piVar1 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                iVar3 = *(int *)((long)param_1 + 4);
              }
              uStack_410 = (ulong)&uStack_450 | 8;
              puStack_408 = &uStack_400;
              if (iVar3 < 3) {
                uStack_400 = *(undefined8 *)param_1[9];
                uStack_3f8 = ((undefined8 *)param_1[9])[1];
              }
              else {
                uStack_450 = uStack_450 & 0xffffffff;
                func_0x000109a84868(&uStack_450,param_1);
              }
              puVar10 = &uStack_3f0;
              FUN_1092e3f30(&uStack_200,puVar10,param_2,param_3,&ppuStack_270,&uStack_450,0);
              if (uStack_418 != 0) {
                piVar1 = (int *)(uStack_418 + 0x14);
                do {
                  iVar3 = *piVar1;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar3 + -1 == 0) {
                  func_0x000109a848d4(&uStack_450);
                }
              }
              uStack_418 = 0;
              uStack_438 = 0;
              uStack_440 = 0;
              uStack_428 = 0;
              uStack_430 = 0;
              if (0 < uStack_450._4_4_) {
                lVar13 = 0;
                do {
                  *(undefined4 *)(uStack_410 + lVar13 * 4) = 0;
                  lVar13 = lVar13 + 1;
                } while (lVar13 < uStack_450._4_4_);
              }
              if (puStack_408 != &uStack_400 && puStack_408 != (undefined8 *)0x0) {
                _free(puStack_408[-1]);
              }
              if (uStack_3b8 != 0) {
                piVar1 = (int *)(uStack_3b8 + 0x14);
                do {
                  iVar3 = *piVar1;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar3 + -1 == 0) {
                  func_0x000109a848d4(&uStack_3f0);
                }
              }
              uStack_3b8 = 0;
              uStack_3d8 = 0;
              uStack_3e0 = 0;
              uStack_3c8 = 0;
              uStack_3d0 = 0;
              ppuVar11 = (undefined8 **)puStack_3a8;
              ppuVar15 = &puStack_3a0;
              if (0 < uStack_3f0._4_4_) {
                lVar13 = 0;
                do {
                  *(undefined4 *)(uStack_3b0 + lVar13 * 4) = 0;
                  lVar13 = lVar13 + 1;
                } while (lVar13 < uStack_3f0._4_4_);
              }
            }
            else {
              uStack_2d0 = (undefined **)CONCAT44(uStack_2d0._4_4_,0x42ff0000);
              puVar17[1] = 0;
              *puVar17 = 0;
              puVar17[3] = 0;
              puVar17[2] = 0;
              puVar17[5] = 0;
              puVar17[4] = 0;
              *(undefined8 *)((long)puVar17 + 0x34) = 0;
              *(undefined8 *)((long)puVar17 + 0x2c) = 0;
              uStack_280 = (undefined8 *)0x0;
              uStack_278 = 0;
              uStack_290 = uVar18;
              puStack_288 = &uStack_280;
              FUN_1092d4dc0(&uStack_260,&uStack_2d0,600);
              puStack_328 = puStack_2c8;
              uStack_330 = uStack_2d0;
              uStack_318 = uStack_2b8;
              uStack_320 = uStack_2c0;
              uStack_308 = uStack_2a8;
              uStack_310 = uStack_2b0;
              lStack_2f8 = lStack_298;
              uStack_300 = uStack_2a0;
              uStack_2e0 = (undefined8 *)0x0;
              uStack_2d8 = (undefined8 *)0x0;
              if (lStack_298 != 0) {
                piVar1 = (int *)(lStack_298 + 0x14);
                do {
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = *piVar1 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              uStack_2f0 = (ulong)&uStack_330 | 8;
              puStack_2e8 = &uStack_2e0;
              if (uStack_2d0._4_4_ < 3) {
                uStack_2e0 = (undefined8 *)*puStack_288;
                uStack_2d8 = (undefined8 *)puStack_288[1];
              }
              else {
                uStack_330 = (undefined **)((ulong)uStack_2d0 & 0xffffffff);
                func_0x000109a84868(&uStack_330,&uStack_2d0);
              }
              uStack_388 = param_1[1];
              uStack_390 = *param_1;
              uStack_378 = param_1[3];
              uStack_380 = param_1[2];
              iVar3 = *(int *)((long)param_1 + 4);
              uStack_368 = param_1[5];
              uStack_370 = param_1[4];
              uStack_358 = param_1[7];
              uStack_360 = param_1[6];
              uStack_340 = 0;
              uStack_338 = 0;
              if (param_1[7] != 0) {
                piVar1 = (int *)(param_1[7] + 0x14);
                do {
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = *piVar1 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                iVar3 = *(int *)((long)param_1 + 4);
              }
              uStack_350 = (ulong)&uStack_390 | 8;
              puStack_348 = &uStack_340;
              if (iVar3 < 3) {
                uStack_340 = *(undefined8 *)param_1[9];
                uStack_338 = ((undefined8 *)param_1[9])[1];
              }
              else {
                uStack_390 = uStack_390 & 0xffffffff;
                func_0x000109a84868(&uStack_390,param_1);
              }
              puVar10 = &uStack_330;
              FUN_1092e3f30(&uStack_200,puVar10,param_2,param_3,&ppuStack_270,&uStack_390,0);
              if (uStack_358 != 0) {
                piVar1 = (int *)(uStack_358 + 0x14);
                do {
                  iVar3 = *piVar1;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar3 + -1 == 0) {
                  func_0x000109a848d4(&uStack_390);
                }
              }
              uStack_358 = 0;
              uStack_378 = 0;
              uStack_380 = 0;
              uStack_368 = 0;
              uStack_370 = 0;
              if (0 < uStack_390._4_4_) {
                lVar13 = 0;
                do {
                  *(undefined4 *)(uStack_350 + lVar13 * 4) = 0;
                  lVar13 = lVar13 + 1;
                } while (lVar13 < uStack_390._4_4_);
              }
              if (puStack_348 != &uStack_340 && puStack_348 != (undefined8 *)0x0) {
                _free(puStack_348[-1]);
              }
              if (lStack_2f8 != 0) {
                piVar1 = (int *)(lStack_2f8 + 0x14);
                do {
                  iVar3 = *piVar1;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar3 + -1 == 0) {
                  func_0x000109a848d4(&uStack_330);
                }
              }
              lStack_2f8 = 0;
              uStack_318 = 0;
              uStack_320 = 0;
              uStack_308 = 0;
              uStack_310 = 0;
              if (0 < uStack_330._4_4_) {
                lVar13 = 0;
                do {
                  *(undefined4 *)(uStack_2f0 + lVar13 * 4) = 0;
                  lVar13 = lVar13 + 1;
                } while (lVar13 < uStack_330._4_4_);
              }
              if (puStack_2e8 != &uStack_2e0 && puStack_2e8 != (undefined8 *)0x0) {
                _free(puStack_2e8[-1]);
              }
              if (lStack_298 != 0) {
                piVar1 = (int *)(lStack_298 + 0x14);
                do {
                  iVar3 = *piVar1;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar3 + -1 == 0) {
                  func_0x000109a848d4(&uStack_2d0);
                }
              }
              lStack_298 = 0;
              uStack_2b8 = 0;
              uStack_2c0 = 0;
              uStack_2a8 = 0;
              uStack_2b0 = 0;
              ppuVar11 = (undefined8 **)puStack_288;
              ppuVar15 = (undefined8 **)&uStack_280;
              if (0 < uStack_2d0._4_4_) {
                lVar13 = 0;
                do {
                  *(undefined4 *)(uStack_290 + lVar13 * 4) = 0;
                  lVar13 = lVar13 + 1;
                } while (lVar13 < uStack_2d0._4_4_);
              }
            }
            if (ppuVar11 != ppuVar15 && ppuVar11 != (undefined8 **)0x0) {
              _free(ppuVar11[-1]);
            }
            if (uStack_228 != 0) {
              piVar1 = (int *)(uStack_228 + 0x14);
              do {
                iVar3 = *piVar1;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar3 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar3 + -1 == 0) {
                func_0x000109a848d4(&uStack_260);
              }
            }
            if (0 < uStack_260._4_4_) {
              lVar13 = 0;
              do {
                *(undefined4 *)((long)ppuStack_220 + lVar13 * 4) = 0;
                lVar13 = lVar13 + 1;
              } while (lVar13 < uStack_260._4_4_);
            }
            goto LAB_1092d6e24;
          }
        }
      }
      else {
        if (iVar3 != 5) {
          uStack_1b8 = ppuVar11;
          if (iVar3 == 6) {
            func_0x0001092dac9c(&uStack_260);
            if (param_5 == 0) {
              puVar10 = param_1;
              FUN_1092cebf8(&uStack_2d0,param_1,param_2,&uStack_260,param_7,0);
            }
            else {
              uStack_200 = (undefined **)CONCAT44(uStack_200._4_4_,0x42ff0000);
              puVar16[1] = 0;
              *puVar16 = 0;
              puVar16[3] = 0;
              puVar16[2] = 0;
              puVar16[5] = 0;
              puVar16[4] = 0;
              *(undefined8 *)((long)puVar16 + 0x34) = 0;
              *(undefined8 *)((long)puVar16 + 0x2c) = 0;
              puStack_1b0 = (undefined8 *)0x0;
              uStack_1a8 = 0;
              uStack_1c0 = &iStack_1f8;
              uStack_1b8 = &puStack_1b0;
              FUN_1092d4dc0(param_1,&uStack_200,600);
              puVar10 = &uStack_200;
              FUN_1092cebf8(&uStack_2d0,puVar10,param_2,&uStack_260,param_7,0);
              if (CONCAT44(uStack_1c4,uStack_1c8) != 0) {
                piVar1 = (int *)(CONCAT44(uStack_1c4,uStack_1c8) + 0x14);
                do {
                  iVar3 = *piVar1;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar3 + -1 == 0) {
                  func_0x000109a848d4(&uStack_200);
                }
              }
              uStack_1c8 = 0;
              uStack_1c4 = 0;
              uStack_1e1 = 0;
              uStack_1e2 = 0;
              uStack_1e4 = 0;
              uStack_1e8 = 0;
              uStack_1ec = 0;
              uStack_1f0 = 0;
              uStack_1d4 = 0;
              uStack_1d8 = 0;
              uStack_1dc = 0;
              uStack_1e0 = 0;
              if (0 < uStack_200._4_4_) {
                lVar13 = 0;
                do {
                  uStack_1c0[lVar13] = 0;
                  lVar13 = lVar13 + 1;
                } while (lVar13 < uStack_200._4_4_);
              }
              if (uStack_1b8 != &puStack_1b0 && uStack_1b8 != (undefined8 **)0x0) {
                _free(uStack_1b8[-1]);
              }
            }
            uStack_260 = &PTR_FUN_110aea0d0;
            goto LAB_1092d5740;
          }
          goto LAB_1092d6e80;
        }
        uStack_1b8 = ppuVar11;
        func_0x0001092d96a8(&ppuStack_270);
        iStack_1f8 = 0x42ff0000;
        uStack_1ec = 0;
        uStack_1e8 = 0;
        iStack_1f4 = 0;
        uStack_1f0 = 0;
        uStack_1dc = 0;
        uStack_1d8 = 0;
        uStack_1e4 = 0;
        uStack_1e2 = 0;
        uStack_1e1 = 0;
        uStack_1e0 = 0;
        uStack_1cc = 0;
        uStack_1d4 = 0;
        uStack_1d0 = 0;
        uStack_1c0._0_4_ = 0;
        uStack_1c0._4_4_ = 0;
        uStack_1c8 = 0;
        uStack_1c4 = 0;
        uStack_1a8 = 0;
        uStack_1a0 = 0;
        uStack_200 = &PTR_FUN_110aea318;
        uStack_180 = 0;
        uStack_188 = 0;
        uStack_170 = 0;
        uStack_16c = 0;
        uStack_178 = 0;
        uStack_260 = (undefined **)CONCAT44(uStack_260._4_4_,0x42ff0000);
        puVar20[1] = 0;
        *puVar20 = 0;
        puVar20[3] = 0;
        puVar20[2] = 0;
        puVar20[5] = 0;
        puVar20[4] = 0;
        *(undefined8 *)((long)puVar20 + 0x34) = 0;
        *(undefined8 *)((long)puVar20 + 0x2c) = 0;
        puStack_210 = (undefined8 *)0x0;
        uStack_208 = 0;
        if ((*param_1 & 0xff8) == 0) {
          ppuStack_220 = ppuVar14;
          ppuStack_218 = &puStack_210;
          puStack_1b0 = &uStack_1a8;
          uStack_1b8 = (undefined8 **)&uStack_1f0;
          if (&uStack_260 != param_1) {
            if (param_1[7] != 0) {
              piVar1 = (int *)(param_1[7] + 0x14);
              do {
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = *piVar1 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (uStack_228 != 0) {
                piVar1 = (int *)(uStack_228 + 0x14);
                do {
                  iVar3 = *piVar1;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar3 + -1 == 0) {
                  func_0x000109a848d4(&uStack_260);
                }
              }
            }
            uStack_228 = 0;
            uStack_248 = 0;
            uStack_250 = 0;
            uStack_238 = 0;
            uStack_240 = 0;
            if (uStack_260._4_4_ < 1) {
              uStack_260 = (undefined **)CONCAT44(uStack_260._4_4_,(int)*param_1);
LAB_1092d6208:
              if (2 < *(int *)((long)param_1 + 4)) goto LAB_1092d623c;
              uStack_260 = (undefined **)
                           CONCAT44(*(int *)((long)param_1 + 4),(undefined4)uStack_260);
              puStack_258 = (ulong *)param_1[1];
              puVar12 = (undefined8 *)param_1[9];
              *ppuStack_218 = (undefined8 *)*puVar12;
              ppuStack_218[1] = (undefined8 *)puVar12[1];
            }
            else {
              lVar13 = 0;
              do {
                *(undefined4 *)((long)ppuStack_220 + lVar13 * 4) = 0;
                lVar13 = lVar13 + 1;
              } while (lVar13 < uStack_260._4_4_);
              uStack_260 = (undefined **)CONCAT44(uStack_260._4_4_,(int)*param_1);
              if (uStack_260._4_4_ < 3) goto LAB_1092d6208;
LAB_1092d623c:
              func_0x000109a84868(&uStack_260,param_1);
            }
            uStack_248 = param_1[3];
            uStack_250 = param_1[2];
            uStack_238 = param_1[5];
            uStack_240 = param_1[4];
            uStack_228 = param_1[7];
            uStack_230 = param_1[6];
          }
        }
        else {
          uStack_2c0 = 0;
          uStack_2d0 = (undefined **)CONCAT44(uStack_2d0._4_4_,0x1010000);
          uStack_4b0 = 0x2010000;
          uStack_4a0 = 0;
          puStack_4a8 = &uStack_260;
          puStack_2c8 = param_1;
          ppuStack_220 = ppuVar14;
          ppuStack_218 = &puStack_210;
          puStack_1b0 = &uStack_1a8;
          uStack_1b8 = (undefined8 **)&uStack_1f0;
          FUN_109ac9fc8(&uStack_2d0,&uStack_4b0,7,0);
        }
        if (param_5 == 0) {
          puStack_5c8 = puStack_258;
          uStack_5d0 = uStack_260;
          uStack_5b8 = uStack_248;
          uStack_5c0 = uStack_250;
          uStack_5a8 = uStack_238;
          uStack_5b0 = uStack_240;
          uStack_598 = uStack_228;
          uStack_5a0 = uStack_230;
          puStack_580 = (undefined8 *)0x0;
          puStack_578 = (undefined8 *)0x0;
          if (uStack_228 != 0) {
            piVar1 = (int *)(uStack_228 + 0x14);
            do {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uStack_590 = (ulong)&uStack_5d0 | 8;
          puStack_588 = &puStack_580;
          if (uStack_260._4_4_ < 3) {
            puStack_580 = *ppuStack_218;
            puStack_578 = ppuStack_218[1];
          }
          else {
            uStack_5d0 = (undefined **)((ulong)uStack_260 & 0xffffffff);
            func_0x000109a84868(&uStack_5d0,&uStack_260);
          }
          uStack_628 = param_1[1];
          uStack_630 = *param_1;
          uStack_618 = param_1[3];
          uStack_620 = param_1[2];
          iVar3 = *(int *)((long)param_1 + 4);
          uStack_608 = param_1[5];
          uStack_610 = param_1[4];
          uStack_5f8 = param_1[7];
          uStack_600 = param_1[6];
          uStack_5e0 = 0;
          uStack_5d8 = 0;
          if (param_1[7] != 0) {
            piVar1 = (int *)(param_1[7] + 0x14);
            do {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            iVar3 = *(int *)((long)param_1 + 4);
          }
          uStack_5f0 = (ulong)&uStack_630 | 8;
          puStack_5e8 = &uStack_5e0;
          if (iVar3 < 3) {
            uStack_5e0 = *(undefined8 *)param_1[9];
            uStack_5d8 = ((undefined8 *)param_1[9])[1];
          }
          else {
            uStack_630 = uStack_630 & 0xffffffff;
            func_0x000109a84868(&uStack_630,param_1);
          }
          puVar10 = &uStack_5d0;
          FUN_1092e3f30(&uStack_200,puVar10,param_2,param_3,&ppuStack_270,&uStack_630,0);
          if (uStack_5f8 != 0) {
            piVar1 = (int *)(uStack_5f8 + 0x14);
            do {
              iVar3 = *piVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar3 + -1 == 0) {
              func_0x000109a848d4(&uStack_630);
            }
          }
          uStack_5f8 = 0;
          uStack_618 = 0;
          uStack_620 = 0;
          uStack_608 = 0;
          uStack_610 = 0;
          if (0 < uStack_630._4_4_) {
            lVar13 = 0;
            do {
              *(undefined4 *)(uStack_5f0 + lVar13 * 4) = 0;
              lVar13 = lVar13 + 1;
            } while (lVar13 < uStack_630._4_4_);
          }
          if (puStack_5e8 != &uStack_5e0 && puStack_5e8 != (undefined8 *)0x0) {
            _free(puStack_5e8[-1]);
          }
          if (uStack_598 != 0) {
            piVar1 = (int *)(uStack_598 + 0x14);
            do {
              iVar3 = *piVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar3 + -1 == 0) {
              func_0x000109a848d4(&uStack_5d0);
            }
          }
          uStack_598 = 0;
          uStack_5b8 = 0;
          uStack_5c0 = 0;
          uStack_5a8 = 0;
          uStack_5b0 = 0;
          ppuVar11 = (undefined8 **)puStack_588;
          ppuVar15 = &puStack_580;
          if (0 < uStack_5d0._4_4_) {
            lVar13 = 0;
            do {
              *(undefined4 *)(uStack_590 + lVar13 * 4) = 0;
              lVar13 = lVar13 + 1;
            } while (lVar13 < uStack_5d0._4_4_);
          }
        }
        else {
          uStack_2d0 = (undefined **)CONCAT44(uStack_2d0._4_4_,0x42ff0000);
          puVar17[1] = 0;
          *puVar17 = 0;
          puVar17[3] = 0;
          puVar17[2] = 0;
          puVar17[5] = 0;
          puVar17[4] = 0;
          *(undefined8 *)((long)puVar17 + 0x34) = 0;
          *(undefined8 *)((long)puVar17 + 0x2c) = 0;
          uStack_280 = (undefined8 *)0x0;
          uStack_278 = 0;
          uStack_4b0 = 0x42ff0000;
          puVar19[1] = 0;
          *puVar19 = 0;
          puVar19[3] = 0;
          puVar19[2] = 0;
          puVar19[5] = 0;
          puVar19[4] = 0;
          *(undefined8 *)((long)puVar19 + 0x34) = 0;
          *(undefined8 *)((long)puVar19 + 0x2c) = 0;
          uStack_460 = 0;
          uStack_458 = 0;
          uStack_470 = (ulong)&uStack_4b0 | 8;
          puStack_468 = &uStack_460;
          uStack_290 = uVar18;
          puStack_288 = &uStack_280;
          FUN_1092d4dc0(&uStack_260,&uStack_2d0,600);
          FUN_1092d4dc0(param_1,&uStack_4b0,600);
          puStack_508 = puStack_2c8;
          uStack_510 = uStack_2d0;
          uStack_4f8 = uStack_2b8;
          uStack_500 = uStack_2c0;
          uStack_4e8 = uStack_2a8;
          uStack_4f0 = uStack_2b0;
          lStack_4d8 = lStack_298;
          uStack_4e0 = uStack_2a0;
          uStack_4c0 = (undefined8 *)0x0;
          uStack_4b8 = (undefined8 *)0x0;
          if (lStack_298 != 0) {
            piVar1 = (int *)(lStack_298 + 0x14);
            do {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uStack_4d0 = (ulong)&uStack_510 | 8;
          puStack_4c8 = &uStack_4c0;
          if (uStack_2d0._4_4_ < 3) {
            uStack_4c0 = (undefined8 *)*puStack_288;
            uStack_4b8 = (undefined8 *)puStack_288[1];
          }
          else {
            uStack_510 = (undefined **)((ulong)uStack_2d0 & 0xffffffff);
            func_0x000109a84868(&uStack_510,&uStack_2d0);
          }
          uStack_570 = CONCAT44(iStack_4ac,uStack_4b0);
          puStack_568 = puStack_4a8;
          uStack_558 = uStack_498;
          uStack_560 = uStack_4a0;
          uStack_548 = uStack_488;
          uStack_550 = uStack_490;
          lStack_538 = lStack_478;
          uStack_540 = uStack_480;
          uStack_520 = 0;
          uStack_518 = 0;
          if (lStack_478 != 0) {
            piVar1 = (int *)(lStack_478 + 0x14);
            do {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uStack_530 = (ulong)&uStack_570 | 8;
          puStack_528 = &uStack_520;
          if (iStack_4ac < 3) {
            uStack_520 = *puStack_468;
            uStack_518 = puStack_468[1];
          }
          else {
            uStack_570 = (ulong)uStack_4b0;
            func_0x000109a84868(&uStack_570,&uStack_4b0);
          }
          puVar10 = &uStack_510;
          FUN_1092e3f30(&uStack_200,puVar10,param_2,param_3,&ppuStack_270,&uStack_570,0);
          if (lStack_538 != 0) {
            piVar1 = (int *)(lStack_538 + 0x14);
            do {
              iVar3 = *piVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar3 + -1 == 0) {
              func_0x000109a848d4(&uStack_570);
            }
          }
          lStack_538 = 0;
          uStack_558 = 0;
          uStack_560 = 0;
          uStack_548 = 0;
          uStack_550 = 0;
          if (0 < uStack_570._4_4_) {
            lVar13 = 0;
            do {
              *(undefined4 *)(uStack_530 + lVar13 * 4) = 0;
              lVar13 = lVar13 + 1;
            } while (lVar13 < uStack_570._4_4_);
          }
          if (puStack_528 != &uStack_520 && puStack_528 != (undefined8 *)0x0) {
            _free(puStack_528[-1]);
          }
          if (lStack_4d8 != 0) {
            piVar1 = (int *)(lStack_4d8 + 0x14);
            do {
              iVar3 = *piVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar3 + -1 == 0) {
              func_0x000109a848d4(&uStack_510);
            }
          }
          lStack_4d8 = 0;
          uStack_4f8 = 0;
          uStack_500 = 0;
          uStack_4e8 = 0;
          uStack_4f0 = 0;
          if (0 < uStack_510._4_4_) {
            lVar13 = 0;
            do {
              *(undefined4 *)(uStack_4d0 + lVar13 * 4) = 0;
              lVar13 = lVar13 + 1;
            } while (lVar13 < uStack_510._4_4_);
          }
          if (puStack_4c8 != &uStack_4c0 && puStack_4c8 != (undefined8 *)0x0) {
            _free(puStack_4c8[-1]);
          }
          if (lStack_478 != 0) {
            piVar1 = (int *)(lStack_478 + 0x14);
            do {
              iVar3 = *piVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar3 + -1 == 0) {
              func_0x000109a848d4(&uStack_4b0);
            }
          }
          lStack_478 = 0;
          uStack_498 = 0;
          uStack_4a0 = 0;
          uStack_488 = 0;
          uStack_490 = 0;
          if (0 < iStack_4ac) {
            lVar13 = 0;
            do {
              *(undefined4 *)(uStack_470 + lVar13 * 4) = 0;
              lVar13 = lVar13 + 1;
            } while (lVar13 < iStack_4ac);
          }
          if (puStack_468 != &uStack_460 && puStack_468 != (undefined8 *)0x0) {
            _free(puStack_468[-1]);
          }
          if (lStack_298 != 0) {
            piVar1 = (int *)(lStack_298 + 0x14);
            do {
              iVar3 = *piVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar3 + -1 == 0) {
              func_0x000109a848d4(&uStack_2d0);
            }
          }
          lStack_298 = 0;
          uStack_2b8 = 0;
          uStack_2c0 = 0;
          uStack_2a8 = 0;
          uStack_2b0 = 0;
          ppuVar11 = (undefined8 **)puStack_288;
          ppuVar15 = (undefined8 **)&uStack_280;
          if (0 < uStack_2d0._4_4_) {
            lVar13 = 0;
            do {
              *(undefined4 *)(uStack_290 + lVar13 * 4) = 0;
              lVar13 = lVar13 + 1;
            } while (lVar13 < uStack_2d0._4_4_);
          }
        }
        if (ppuVar11 != ppuVar15 && ppuVar11 != (undefined8 **)0x0) {
          _free(ppuVar11[-1]);
        }
        if (uStack_228 != 0) {
          piVar1 = (int *)(uStack_228 + 0x14);
          do {
            iVar3 = *piVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            func_0x000109a848d4(&uStack_260);
          }
        }
        if (0 < uStack_260._4_4_) {
          lVar13 = 0;
          do {
            *(undefined4 *)((long)ppuStack_220 + lVar13 * 4) = 0;
            lVar13 = lVar13 + 1;
          } while (lVar13 < uStack_260._4_4_);
        }
LAB_1092d6e24:
        uStack_228 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        uStack_248 = 0;
        uStack_250 = 0;
        if (ppuStack_218 != &puStack_210 && ppuStack_218 != (undefined8 **)0x0) {
          _free(ppuStack_218[-1]);
        }
        FUN_1092cf444(&uStack_200);
        ppuStack_270 = &PTR_FUN_110ae9f48;
        puVar7 = puStack_268;
        piVar1 = uStack_1c0;
        if (puStack_268 != (ulong *)0x0) goto LAB_1092d6e58;
      }
LAB_1092d6e80:
      if ((char)*param_2 == '\x01') break;
      uVar22 = uVar22 + 1;
      uVar9 = *param_4;
      ppuVar11 = uStack_1b8;
    } while (uVar22 < (ulong)((long)(param_4[1] - uVar9) >> 2));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  uStack_1c0 = piVar1;
  ___stack_chk_fail();
  if ((int)puVar10 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_260);
    FUN_1092cf444(&uStack_200);
    ppuStack_270 = &PTR_FUN_110ae9f48;
    if ((puStack_268 != (ulong *)0x0) &&
       (iVar3 = (int)puStack_268[1] + -1, *(int *)(puStack_268 + 1) = iVar3, iVar3 == 0)) {
      *(undefined4 *)(puStack_268 + 1) = 0xdeadf001;
      (**(code **)(*puStack_268 + 8))();
    }
  }
  __Unwind_Resume();
  puVar2 = (undefined4 *)puVar7[1];
  if (puVar2 < (undefined4 *)puVar7[2]) {
    puVar21 = puVar2 + 1;
    *puVar2 = (int)*puVar10;
  }
  else {
    lVar13 = (long)puVar2 - *puVar7;
    uVar9 = (lVar13 >> 2) + 1;
    if (uVar9 >> 0x3e != 0) {
      FUN_10923f788();
      *extraout_x8 = 0x4248000041200000;
      *(undefined4 *)(extraout_x8 + 1) = 0x435c0000;
      extraout_x8[2] = 2;
      *(undefined4 *)(extraout_x8 + 3) = 0x41200000;
      *(undefined2 *)((long)extraout_x8 + 0x1c) = 1;
      *(undefined1 *)((long)extraout_x8 + 0x1e) = 1;
      extraout_x8[4] = 0x459c400041600000;
      *(undefined1 *)(extraout_x8 + 5) = 0;
      *(undefined8 *)((long)extraout_x8 + 0x2c) = 0x7f7fffff3d4ccccd;
      *(undefined1 *)((long)extraout_x8 + 0x34) = 1;
      extraout_x8[7] = 0x7f7fffff3e99999a;
      *(undefined1 *)(extraout_x8 + 8) = 0;
      *(undefined8 *)((long)extraout_x8 + 0x44) = 0x7f7fffff3e99999a;
      extraout_x8[10] = 0xd00000000;
      *(undefined1 *)(extraout_x8 + 0xb) = 1;
      extraout_x8[0xc] = 0x3fe999999999999a;
      *(undefined1 *)((long)extraout_x8 + 0x6c) = 0;
      extraout_x8[0xe] = 0x4100000019;
      return;
    }
    uVar18 = (long)puVar7[2] - *puVar7;
    uVar22 = (long)uVar18 >> 1;
    if (uVar22 <= uVar9) {
      uVar22 = uVar9;
    }
    if (0x7ffffffffffffffb < uVar18) {
      uVar22 = 0x3fffffffffffffff;
    }
    puVar8 = puVar7;
    FUN_10923f79c();
    uVar9 = *puVar7;
    puVar2 = (undefined4 *)((long)puVar8 + lVar13);
    uVar18 = (long)puVar2 - (puVar7[1] - uVar9);
    puVar21 = puVar2 + 1;
    *puVar2 = (int)*puVar10;
    _memcpy(uVar18,uVar9);
    uVar9 = *puVar7;
    *puVar7 = uVar18;
    puVar7[1] = (ulong)puVar21;
    puVar7[2] = (ulong)((long)puVar8 + uVar22 * 4);
    if (uVar9 != 0) {
      __ZdlPv();
    }
  }
  puVar7[1] = (ulong)puVar21;
  return;
}



/* Entry: 1092d7128; end: 1092d71eb;  */

void FUN_1092d7128(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *extraout_x8;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 < (undefined4 *)param_1[2]) {
    puVar9 = puVar2 + 1;
    *puVar2 = *param_2;
  }
  else {
    lVar8 = (long)puVar2 - *param_1;
    uVar1 = (lVar8 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      FUN_10923f788();
      *extraout_x8 = 0x4248000041200000;
      *(undefined4 *)(extraout_x8 + 1) = 0x435c0000;
      extraout_x8[2] = 2;
      *(undefined4 *)(extraout_x8 + 3) = 0x41200000;
      *(undefined2 *)((long)extraout_x8 + 0x1c) = 1;
      *(undefined1 *)((long)extraout_x8 + 0x1e) = 1;
      extraout_x8[4] = 0x459c400041600000;
      *(undefined1 *)(extraout_x8 + 5) = 0;
      *(undefined8 *)((long)extraout_x8 + 0x2c) = 0x7f7fffff3d4ccccd;
      *(undefined1 *)((long)extraout_x8 + 0x34) = 1;
      extraout_x8[7] = 0x7f7fffff3e99999a;
      *(undefined1 *)(extraout_x8 + 8) = 0;
      *(undefined8 *)((long)extraout_x8 + 0x44) = 0x7f7fffff3e99999a;
      extraout_x8[10] = 0xd00000000;
      *(undefined1 *)(extraout_x8 + 0xb) = 1;
      extraout_x8[0xc] = 0x3fe999999999999a;
      *(undefined1 *)((long)extraout_x8 + 0x6c) = 0;
      extraout_x8[0xe] = 0x4100000019;
      return;
    }
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 1;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar5) {
      uVar6 = 0x3fffffffffffffff;
    }
    plVar4 = param_1;
    FUN_10923f79c();
    lVar3 = *param_1;
    puVar2 = (undefined4 *)((long)plVar4 + lVar8);
    lVar7 = (long)puVar2 - (param_1[1] - lVar3);
    puVar9 = puVar2 + 1;
    *puVar2 = *param_2;
    _memcpy(lVar7,lVar3);
    lVar8 = *param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar9;
    param_1[2] = (long)plVar4 + uVar6 * 4;
    if (lVar8 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return;
}



/* Entry: 1092d71ec; end: 1092d73d3;  */

void FUN_1092d71ec(undefined8 *param_1)

{
  *param_1 = 0x4248000041200000;
  *(undefined4 *)(param_1 + 1) = 0x435c0000;
  param_1[2] = 2;
  *(undefined4 *)(param_1 + 3) = 0x41200000;
  *(undefined2 *)((long)param_1 + 0x1c) = 1;
  *(undefined1 *)((long)param_1 + 0x1e) = 1;
  param_1[4] = 0x459c400041600000;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0x7f7fffff3d4ccccd;
  *(undefined1 *)((long)param_1 + 0x34) = 1;
  param_1[7] = 0x7f7fffff3e99999a;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0x7f7fffff3e99999a;
  param_1[10] = 0xd00000000;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xc] = 0x3fe999999999999a;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  param_1[0xe] = 0x4100000019;
  return;
}



/* Entry: 1092d73d4; end: 1092d74c7;  */

void FUN_1092d73d4(undefined8 param_1,long param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  long lStack_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  int iStack_38;
  int iStack_34;
  
  iStack_34 = param_3 + 1;
  uStack_40 = 0x7fffffff80000000;
  iStack_38 = param_3;
  FUN_109a84930(auStack_a0,*(undefined8 *)(param_2 + 0x18),&iStack_38,&uStack_40);
  uVar5 = uStack_90;
  if (lStack_68 != 0) {
    piVar1 = (int *)(lStack_68 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(auStack_a0);
    }
  }
  lStack_68 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (0 < iStack_9c) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_60 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iStack_9c);
  }
  if (puStack_58 != auStack_50 && puStack_58 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_58 + -8));
  }
  FUN_1092d74e8(param_1,uVar5,*(undefined4 *)(*(long *)(param_2 + 0x18) + 0xc));
  return;
}



/* Entry: 1092d74c8; end: 1092d74e7;  */

undefined8 * FUN_1092d74c8(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_2 + 0x18);
  lVar4 = *(long *)(lVar5 + 0x10);
  iVar1 = *(int *)(lVar5 + 8) * *(int *)(lVar5 + 0xc);
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110ae9d40;
  param_1[2] = 0;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = &PTR_DAT_110ae9cf8;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[2] = 0;
  FUN_1092d76e8(puVar2 + 2,lVar4,lVar4 + iVar1,(long)iVar1);
  *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
  plVar3 = (long *)param_1[2];
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))();
  }
  param_1[2] = puVar2;
  return param_1;
}



/* Entry: 1092d74e8; end: 1092d75b3;  */

undefined8 * FUN_1092d74e8(undefined8 *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110ae9d40;
  param_1[2] = 0;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = &PTR_DAT_110ae9cf8;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[2] = 0;
  FUN_1092d76e8(puVar2 + 2,param_2,param_2 + param_3,(long)param_3);
  *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
  plVar3 = (long *)param_1[2];
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))();
  }
  param_1[2] = puVar2;
  return param_1;
}



/* Entry: 1092d75b4; end: 1092d76e7;  */

undefined8 * FUN_1092d75b4(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110ae9d40;
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  param_1[2] = 0;
  return param_1;
}



/* Entry: 1092d76e8; end: 1092d7757;  */

void FUN_1092d76e8(long param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    FUN_109274904(param_1,param_4);
    puVar1 = *(undefined1 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined1 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 1092d7758; end: 1092d79b3;  */

long * FUN_1092d7758(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  code *pcVar9;
  int iVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined **ppuStack_1a0;
  undefined4 uStack_198;
  long *plStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  long *plStack_178;
  undefined **ppuStack_118;
  undefined4 uStack_110;
  long *plStack_108;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  long *plStack_f0;
  undefined **appuStack_e8 [2];
  long *plStack_d8;
  undefined **ppuStack_88;
  undefined4 uStack_80;
  long *plStack_78;
  undefined **ppuStack_70;
  undefined4 uStack_68;
  long *plStack_60;
  undefined **appuStack_58 [2];
  long *plStack_48;
  
  uVar1 = *(uint *)(param_3 + 8);
  ppuVar11 = (undefined **)(ulong)uVar1;
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x60))();
  if (uVar1 >> (ulong)((uint)plVar5 & 0x1f) == 0) {
    plVar5 = param_1;
    (**(code **)(*param_1 + 0x48))(param_1);
    FUN_1092d0df8(appuStack_58,plVar5);
    uStack_68 = 0;
    ppuStack_70 = &PTR_FUN_110ae99f0;
    if (plStack_48 != (long *)0x0) {
      *(int *)(plStack_48 + 1) = (int)plStack_48[1] + 1;
    }
    plStack_60 = plStack_48;
    plVar5 = param_1;
    (**(code **)(*param_1 + 0x100))(param_1,&ppuStack_70,param_3);
    ppuStack_70 = &PTR_FUN_110ae99f0;
    if ((plStack_60 != (long *)0x0) &&
       (iVar3 = (int)plStack_60[1] + -1, *(int *)(plStack_60 + 1) = iVar3, iVar3 == 0)) {
      *(undefined4 *)(plStack_60 + 1) = 0xdeadf001;
      (**(code **)(*plStack_60 + 8))();
    }
    plStack_60 = (long *)0x0;
    if (((ulong)plVar5 & 1) != 0) {
      uStack_80 = 0;
      ppuStack_88 = &PTR_FUN_110ae99f0;
      if (plStack_48 != (long *)0x0) {
        *(int *)(plStack_48 + 1) = (int)plStack_48[1] + 1;
      }
      plStack_78 = plStack_48;
      (**(code **)(*param_1 + 0xe8))(param_1,param_2,&ppuStack_88);
      ppuStack_88 = &PTR_FUN_110ae99f0;
      if ((plStack_78 != (long *)0x0) &&
         (iVar3 = (int)plStack_78[1] + -1, *(int *)(plStack_78 + 1) = iVar3, iVar3 == 0)) {
        *(undefined4 *)(plStack_78 + 1) = 0xdeadf001;
        (**(code **)(*plStack_78 + 8))();
      }
      plStack_78 = (long *)0x0;
    }
    appuStack_58[0] = &PTR_FUN_110ae99f0;
    if ((plStack_48 != (long *)0x0) &&
       (iVar3 = (int)plStack_48[1] + -1, *(int *)(plStack_48 + 1) = iVar3, iVar3 == 0)) {
      *(undefined4 *)(plStack_48 + 1) = 0xdeadf001;
      (**(code **)(*plStack_48 + 8))();
    }
    return plVar5;
  }
  plVar5 = (long *)0x10;
  ___cxa_allocate_exception();
  FUN_1092cf4c4();
  ppuVar8 = &PTR_DAT_110ae9b38;
  pcVar9 = FUN_1092cf500;
  ___cxa_throw();
  ppuStack_88 = ppuVar11;
  if ((plStack_78 != (long *)0x0) &&
     (iVar3 = (int)plStack_78[1] + -1, *(int *)(plStack_78 + 1) = iVar3, iVar3 == 0)) {
    *(undefined4 *)(plStack_78 + 1) = 0xdeadf001;
    (**(code **)(*plStack_78 + 8))();
  }
  *unaff_x23 = 0;
  appuStack_58[0] = ppuVar11;
  if ((plStack_48 != (long *)0x0) &&
     (iVar3 = (int)plStack_48[1] + -1, *(int *)(plStack_48 + 1) = iVar3, iVar3 == 0)) {
    *(undefined4 *)(plStack_48 + 1) = 0xdeadf001;
    (**(code **)(*plStack_48 + 8))();
  }
  __Unwind_Resume();
  ppuVar11 = (undefined **)ppuVar8[1];
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x40))();
  if (ppuVar11 != (undefined **)(long)(int)plVar6) {
    plVar5 = (long *)0x10;
    ___cxa_allocate_exception();
    FUN_1092cf4c4();
    ppuVar8 = &PTR_DAT_110ae9b38;
    pcVar9 = FUN_1092cf500;
    ___cxa_throw();
    ppuStack_118 = ppuVar11;
    if ((plStack_108 != (long *)0x0) &&
       (iVar3 = (int)plStack_108[1] + -1, *(int *)(plStack_108 + 1) = iVar3, iVar3 == 0)) {
      *(undefined4 *)(plStack_108 + 1) = 0xdeadf001;
      (**(code **)(*plStack_108 + 8))();
    }
    *unaff_x24 = 0;
    appuStack_e8[0] = ppuVar11;
    if ((plStack_d8 != (long *)0x0) &&
       (iVar3 = (int)plStack_d8[1] + -1, *(int *)(plStack_d8 + 1) = iVar3, iVar3 == 0)) {
      *(undefined4 *)(plStack_d8 + 1) = 0xdeadf001;
      (**(code **)(*plStack_d8 + 8))();
    }
    __Unwind_Resume();
    uVar1 = *(uint *)(pcVar9 + 8);
    plVar6 = plVar5;
    (**(code **)(*plVar5 + 0x60))();
    if ((int)plVar6 < 1) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      do {
        plVar6 = plVar5;
        (**(code **)(*plVar5 + 0x58))();
        plVar7 = plVar5;
        (**(code **)(*plVar5 + 0x58))();
        iVar3 = 0;
        iVar4 = (int)plVar7;
        iVar10 = (int)uVar12;
        if (iVar4 != 0) {
          iVar3 = iVar10 / iVar4;
        }
        plVar7 = plVar5;
        (**(code **)(*plVar5 + 0x58))();
        iVar2 = 0;
        if ((int)plVar7 != 0) {
          iVar2 = iVar10 / (int)plVar7;
        }
        *(uint *)(*(long *)(ppuVar8[2] + 0x10) + (long)iVar2 * 4) =
             *(uint *)(*(long *)(ppuVar8[2] + 0x10) + (long)iVar2 * 4) |
             (uVar1 >> (uVar12 & 0x3f) & 1) <<
             (ulong)((int)plVar6 + ~(iVar10 - iVar3 * iVar4) & 0x1f);
        uVar12 = uVar12 + 1;
        plVar6 = plVar5;
        (**(code **)(*plVar5 + 0x60))();
      } while ((long)uVar12 < (long)(int)plVar6);
    }
    uStack_180 = 0;
    ppuStack_188 = &PTR_FUN_110ae99f0;
    plStack_178 = (long *)ppuVar8[2];
    if (plStack_178 != (long *)0x0) {
      *(int *)(plStack_178 + 1) = (int)plStack_178[1] + 1;
    }
    plVar6 = plVar5;
    (**(code **)(*plVar5 + 0x58))(plVar5);
    (**(code **)(*(long *)pcVar9 + 0x10))(pcVar9,&ppuStack_188,plVar6,uVar12);
    ppuStack_188 = &PTR_FUN_110ae99f0;
    if ((plStack_178 != (long *)0x0) &&
       (iVar3 = (int)plStack_178[1] + -1, *(int *)(plStack_178 + 1) = iVar3, iVar3 == 0)) {
      *(undefined4 *)(plStack_178 + 1) = 0xdeadf001;
      (**(code **)(*plStack_178 + 8))();
    }
    plStack_178 = (long *)0x0;
    uStack_198 = 0;
    ppuStack_1a0 = &PTR_FUN_110ae99f0;
    plStack_190 = (long *)ppuVar8[2];
    if (plStack_190 != (long *)0x0) {
      *(int *)(plStack_190 + 1) = (int)plStack_190[1] + 1;
    }
    (**(code **)(*plVar5 + 0xf0))(plVar5,&ppuStack_1a0);
    ppuStack_1a0 = &PTR_FUN_110ae99f0;
    if ((plStack_190 != (long *)0x0) &&
       (iVar3 = (int)plStack_190[1] + -1, *(int *)(plStack_190 + 1) = iVar3, iVar3 == 0)) {
      *(undefined4 *)(plStack_190 + 1) = 0xdeadf001;
      (**(code **)(*plStack_190 + 8))();
    }
    return plVar5;
  }
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0xc0))(plVar5,ppuVar8);
  if ((int)plVar6 == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar6 = plVar5;
    (**(code **)(*plVar5 + 0x48))(plVar5);
    FUN_1092d0df8(appuStack_e8,plVar6);
    uStack_f8 = 0;
    ppuStack_100 = &PTR_FUN_110ae99f0;
    if (plStack_d8 != (long *)0x0) {
      *(int *)(plStack_d8 + 1) = (int)plStack_d8[1] + 1;
    }
    plStack_f0 = plStack_d8;
    (**(code **)(*plVar5 + 0x118))(plVar5,ppuVar8,&ppuStack_100);
    ppuStack_100 = &PTR_FUN_110ae99f0;
    if ((plStack_f0 != (long *)0x0) &&
       (iVar3 = (int)plStack_f0[1] + -1, *(int *)(plStack_f0 + 1) = iVar3, iVar3 == 0)) {
      *(undefined4 *)(plStack_f0 + 1) = 0xdeadf001;
      (**(code **)(*plStack_f0 + 8))();
    }
    plStack_f0 = (long *)0x0;
    uStack_110 = 0;
    ppuStack_118 = &PTR_FUN_110ae99f0;
    if (plStack_d8 != (long *)0x0) {
      *(int *)(plStack_d8 + 1) = (int)plStack_d8[1] + 1;
    }
    plStack_108 = plStack_d8;
    (**(code **)(*plVar5 + 0x108))(plVar5,&ppuStack_118,pcVar9,param_4);
    ppuStack_118 = &PTR_FUN_110ae99f0;
    if ((plStack_108 != (long *)0x0) &&
       (iVar3 = (int)plStack_108[1] + -1, *(int *)(plStack_108 + 1) = iVar3, iVar3 == 0)) {
      *(undefined4 *)(plStack_108 + 1) = 0xdeadf001;
      (**(code **)(*plStack_108 + 8))();
    }
    plStack_108 = (long *)0x0;
    appuStack_e8[0] = &PTR_FUN_110ae99f0;
    if ((plStack_d8 != (long *)0x0) &&
       (iVar3 = (int)plStack_d8[1] + -1, *(int *)(plStack_d8 + 1) = iVar3, iVar3 == 0)) {
      *(undefined4 *)(plStack_d8 + 1) = 0xdeadf001;
      (**(code **)(*plStack_d8 + 8))();
    }
  }
  return plVar5;
}



/* Entry: 1092d79b4; end: 1092d7c33;  */

long * FUN_1092d79b4(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  code *pcVar9;
  int iVar10;
  ulong uVar11;
  undefined **ppuVar12;
  undefined8 *unaff_x24;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  long *plStack_100;
  undefined **ppuStack_f8;
  undefined4 uStack_f0;
  long *plStack_e8;
  undefined **ppuStack_88;
  undefined4 uStack_80;
  long *plStack_78;
  undefined **ppuStack_70;
  undefined4 uStack_68;
  long *plStack_60;
  undefined **appuStack_58 [2];
  long *plStack_48;
  
  ppuVar12 = *(undefined ***)(param_2 + 8);
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x40))();
  if (ppuVar12 != (undefined **)(long)(int)plVar5) {
    plVar5 = (long *)0x10;
    ___cxa_allocate_exception();
    FUN_1092cf4c4();
    ppuVar8 = &PTR_DAT_110ae9b38;
    pcVar9 = FUN_1092cf500;
    ___cxa_throw();
    ppuStack_88 = ppuVar12;
    if ((plStack_78 != (long *)0x0) &&
       (iVar3 = (int)plStack_78[1] + -1, *(int *)(plStack_78 + 1) = iVar3, iVar3 == 0)) {
      *(undefined4 *)(plStack_78 + 1) = 0xdeadf001;
      (**(code **)(*plStack_78 + 8))();
    }
    *unaff_x24 = 0;
    appuStack_58[0] = ppuVar12;
    if ((plStack_48 != (long *)0x0) &&
       (iVar3 = (int)plStack_48[1] + -1, *(int *)(plStack_48 + 1) = iVar3, iVar3 == 0)) {
      *(undefined4 *)(plStack_48 + 1) = 0xdeadf001;
      (**(code **)(*plStack_48 + 8))();
    }
    __Unwind_Resume();
    uVar1 = *(uint *)(pcVar9 + 8);
    plVar6 = plVar5;
    (**(code **)(*plVar5 + 0x60))();
    if ((int)plVar6 < 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      do {
        plVar6 = plVar5;
        (**(code **)(*plVar5 + 0x58))();
        plVar7 = plVar5;
        (**(code **)(*plVar5 + 0x58))();
        iVar3 = 0;
        iVar4 = (int)plVar7;
        iVar10 = (int)uVar11;
        if (iVar4 != 0) {
          iVar3 = iVar10 / iVar4;
        }
        plVar7 = plVar5;
        (**(code **)(*plVar5 + 0x58))();
        iVar2 = 0;
        if ((int)plVar7 != 0) {
          iVar2 = iVar10 / (int)plVar7;
        }
        *(uint *)(*(long *)(ppuVar8[2] + 0x10) + (long)iVar2 * 4) =
             *(uint *)(*(long *)(ppuVar8[2] + 0x10) + (long)iVar2 * 4) |
             (uVar1 >> (uVar11 & 0x3f) & 1) <<
             (ulong)((int)plVar6 + ~(iVar10 - iVar3 * iVar4) & 0x1f);
        uVar11 = uVar11 + 1;
        plVar6 = plVar5;
        (**(code **)(*plVar5 + 0x60))();
      } while ((long)uVar11 < (long)(int)plVar6);
    }
    uStack_f0 = 0;
    ppuStack_f8 = &PTR_FUN_110ae99f0;
    plStack_e8 = (long *)ppuVar8[2];
    if (plStack_e8 != (long *)0x0) {
      *(int *)(plStack_e8 + 1) = (int)plStack_e8[1] + 1;
    }
    plVar6 = plVar5;
    (**(code **)(*plVar5 + 0x58))(plVar5);
    (**(code **)(*(long *)pcVar9 + 0x10))(pcVar9,&ppuStack_f8,plVar6,uVar11);
    ppuStack_f8 = &PTR_FUN_110ae99f0;
    if ((plStack_e8 != (long *)0x0) &&
       (iVar3 = (int)plStack_e8[1] + -1, *(int *)(plStack_e8 + 1) = iVar3, iVar3 == 0)) {
      *(undefined4 *)(plStack_e8 + 1) = 0xdeadf001;
      (**(code **)(*plStack_e8 + 8))();
    }
    plStack_e8 = (long *)0x0;
    uStack_108 = 0;
    ppuStack_110 = &PTR_FUN_110ae99f0;
    plStack_100 = (long *)ppuVar8[2];
    if (plStack_100 != (long *)0x0) {
      *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
    }
    (**(code **)(*plVar5 + 0xf0))(plVar5,&ppuStack_110);
    ppuStack_110 = &PTR_FUN_110ae99f0;
    if ((plStack_100 != (long *)0x0) &&
       (iVar3 = (int)plStack_100[1] + -1, *(int *)(plStack_100 + 1) = iVar3, iVar3 == 0)) {
      *(undefined4 *)(plStack_100 + 1) = 0xdeadf001;
      (**(code **)(*plStack_100 + 8))();
    }
    return plVar5;
  }
  plVar5 = param_1;
  (**(code **)(*param_1 + 0xc0))(param_1,param_2);
  if ((int)plVar5 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    plVar5 = param_1;
    (**(code **)(*param_1 + 0x48))(param_1);
    FUN_1092d0df8(appuStack_58,plVar5);
    uStack_68 = 0;
    ppuStack_70 = &PTR_FUN_110ae99f0;
    if (plStack_48 != (long *)0x0) {
      *(int *)(plStack_48 + 1) = (int)plStack_48[1] + 1;
    }
    plStack_60 = plStack_48;
    (**(code **)(*param_1 + 0x118))(param_1,param_2,&ppuStack_70);
    ppuStack_70 = &PTR_FUN_110ae99f0;
    if ((plStack_60 != (long *)0x0) &&
       (iVar3 = (int)plStack_60[1] + -1, *(int *)(plStack_60 + 1) = iVar3, iVar3 == 0)) {
      *(undefined4 *)(plStack_60 + 1) = 0xdeadf001;
      (**(code **)(*plStack_60 + 8))();
    }
    plStack_60 = (long *)0x0;
    uStack_80 = 0;
    ppuStack_88 = &PTR_FUN_110ae99f0;
    if (plStack_48 != (long *)0x0) {
      *(int *)(plStack_48 + 1) = (int)plStack_48[1] + 1;
    }
    plStack_78 = plStack_48;
    (**(code **)(*param_1 + 0x108))(param_1,&ppuStack_88,param_3,param_4);
    ppuStack_88 = &PTR_FUN_110ae99f0;
    if ((plStack_78 != (long *)0x0) &&
       (iVar3 = (int)plStack_78[1] + -1, *(int *)(plStack_78 + 1) = iVar3, iVar3 == 0)) {
      *(undefined4 *)(plStack_78 + 1) = 0xdeadf001;
      (**(code **)(*plStack_78 + 8))();
    }
    plStack_78 = (long *)0x0;
    appuStack_58[0] = &PTR_FUN_110ae99f0;
    if ((plStack_48 != (long *)0x0) &&
       (iVar3 = (int)plStack_48[1] + -1, *(int *)(plStack_48 + 1) = iVar3, iVar3 == 0)) {
      *(undefined4 *)(plStack_48 + 1) = 0xdeadf001;
      (**(code **)(*plStack_48 + 8))();
    }
  }
  return param_1;
}



/* Entry: 1092d7c34; end: 1092d7e6f;  */

long * FUN_1092d7c34(long *param_1,long param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  undefined **ppuStack_80;
  undefined4 uStack_78;
  long *plStack_70;
  undefined **ppuStack_68;
  undefined4 uStack_60;
  long *plStack_58;
  
  uVar1 = *(uint *)(param_3 + 1);
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x60))();
  if ((int)plVar5 < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    do {
      plVar5 = param_1;
      (**(code **)(*param_1 + 0x58))();
      plVar6 = param_1;
      (**(code **)(*param_1 + 0x58))();
      iVar2 = 0;
      iVar4 = (int)plVar6;
      iVar8 = (int)uVar9;
      if (iVar4 != 0) {
        iVar2 = iVar8 / iVar4;
      }
      plVar6 = param_1;
      (**(code **)(*param_1 + 0x58))();
      iVar3 = 0;
      if ((int)plVar6 != 0) {
        iVar3 = iVar8 / (int)plVar6;
      }
      lVar7 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
      *(uint *)(lVar7 + (long)iVar3 * 4) =
           *(uint *)(lVar7 + (long)iVar3 * 4) |
           (uVar1 >> (uVar9 & 0x3f) & 1) << (ulong)((int)plVar5 + ~(iVar8 - iVar2 * iVar4) & 0x1f);
      uVar9 = uVar9 + 1;
      plVar5 = param_1;
      (**(code **)(*param_1 + 0x60))();
    } while ((long)uVar9 < (long)(int)plVar5);
  }
  uStack_60 = 0;
  ppuStack_68 = &PTR_FUN_110ae99f0;
  plStack_58 = *(long **)(param_2 + 0x10);
  if (plStack_58 != (long *)0x0) {
    *(int *)(plStack_58 + 1) = (int)plStack_58[1] + 1;
  }
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x58))(param_1);
  (**(code **)(*param_3 + 0x10))(param_3,&ppuStack_68,plVar5,uVar9);
  ppuStack_68 = &PTR_FUN_110ae99f0;
  if ((plStack_58 != (long *)0x0) &&
     (iVar2 = (int)plStack_58[1] + -1, *(int *)(plStack_58 + 1) = iVar2, iVar2 == 0)) {
    *(undefined4 *)(plStack_58 + 1) = 0xdeadf001;
    (**(code **)(*plStack_58 + 8))();
  }
  plStack_58 = (long *)0x0;
  uStack_78 = 0;
  ppuStack_80 = &PTR_FUN_110ae99f0;
  plStack_70 = *(long **)(param_2 + 0x10);
  if (plStack_70 != (long *)0x0) {
    *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
  }
  (**(code **)(*param_1 + 0xf0))(param_1,&ppuStack_80);
  ppuStack_80 = &PTR_FUN_110ae99f0;
  if ((plStack_70 != (long *)0x0) &&
     (iVar2 = (int)plStack_70[1] + -1, *(int *)(plStack_70 + 1) = iVar2, iVar2 == 0)) {
    *(undefined4 *)(plStack_70 + 1) = 0xdeadf001;
    (**(code **)(*plStack_70 + 8))();
  }
  return param_1;
}



/* Entry: 1092d7e70; end: 1092d81e7;  */

long * FUN_1092d7e70(long *param_1,long param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  undefined **ppuStack_98;
  undefined4 uStack_90;
  long *plStack_88;
  ulong uStack_80;
  undefined **ppuStack_78;
  undefined4 uStack_70;
  long *plStack_68;
  ulong *puStack_60;
  int iStack_58;
  
  uStack_70 = 0;
  ppuStack_78 = &PTR_FUN_110ae99f0;
  plStack_68 = *(long **)(param_2 + 0x10);
  if (plStack_68 != (long *)0x0) {
    *(int *)(plStack_68 + 1) = (int)plStack_68[1] + 1;
  }
  plVar3 = param_1;
  (**(code **)(*param_1 + 0xf8))(param_1,&ppuStack_78);
  ppuStack_78 = &PTR_FUN_110ae99f0;
  if ((plStack_68 != (long *)0x0) &&
     (iVar8 = (int)plStack_68[1] + -1, *(int *)(plStack_68 + 1) = iVar8, iVar8 == 0)) {
    *(undefined4 *)(plStack_68 + 1) = 0xdeadf001;
    (**(code **)(*plStack_68 + 8))();
  }
  plStack_68 = (long *)0x0;
  if (((ulong)plVar3 & 1) == 0) {
    param_1 = (long *)0x0;
  }
  else {
    plVar3 = param_1;
    (**(code **)(*param_1 + 0x60))();
    plVar4 = param_1;
    (**(code **)(*param_1 + 0x58))();
    iVar8 = 0;
    if ((int)plVar4 != 0) {
      iVar8 = (int)plVar3 / (int)plVar4;
    }
    uStack_80 = (ulong)**(uint **)(*(long *)(param_2 + 0x10) + 0x10);
    if (0 < iVar8) {
      lVar9 = 4;
      do {
        plVar3 = param_1;
        (**(code **)(*param_1 + 0x58))(param_1);
        FUN_1092d81e8(&uStack_80,(long)(int)plVar3);
        uStack_80 = uStack_80 | *(uint *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + lVar9);
        lVar9 = lVar9 + 4;
      } while ((ulong)(iVar8 + 1) << 2 != lVar9);
    }
    plVar3 = param_1;
    (**(code **)(*param_1 + 0x58))();
    plVar4 = param_1;
    (**(code **)(*param_1 + 0x60))();
    plVar5 = param_1;
    (**(code **)(*param_1 + 0x58))();
    iVar8 = 0;
    iVar2 = (int)plVar5;
    if (iVar2 != 0) {
      iVar8 = (int)plVar4 / iVar2;
    }
    iVar8 = (int)plVar4 - iVar8 * iVar2;
    iVar2 = (int)plVar3;
    uVar1 = iVar2 - iVar8;
    if (0x1f < uVar1) {
      uVar1 = 0x20;
    }
    uVar6 = (ulong)uVar1;
    if (iVar2 != iVar8) {
      if ((uint)(iVar2 - iVar8) < 0x20) {
        uStack_80 = ((ulong)((uint)(-1L << (uVar6 & 0x3f)) & (uint)uStack_80) & 0xfffffffe) >>
                    (uVar6 & 0x3f) | uStack_80 & -0x100000000 >> (uVar6 & 0x3f);
      }
      iStack_58 = 0x20 - uVar1;
      puStack_60 = &uStack_80;
      func_0x0001092898ac(&puStack_60);
    }
    *param_3 = 0;
    plVar3 = param_1;
    (**(code **)(*param_1 + 0x60))();
    if (0 < (int)plVar3) {
      uVar6 = 0;
      iVar8 = -1;
      do {
        uVar7 = uStack_80 >> (uVar6 & 0x3f);
        plVar3 = param_1;
        (**(code **)(*param_1 + 0x60))();
        *param_3 = ((uint)uVar7 & 1) << (ulong)((int)plVar3 + iVar8 & 0x1f) | *param_3;
        uVar6 = uVar6 + 1;
        plVar3 = param_1;
        (**(code **)(*param_1 + 0x60))();
        iVar8 = iVar8 + -1;
      } while ((long)uVar6 < (long)(int)plVar3);
    }
    plVar3 = param_1;
    (**(code **)(*param_1 + 0x68))();
    if (0 < (int)plVar3) {
      plVar3 = param_1;
      (**(code **)(*param_1 + 0x68))();
      *param_3 = *param_3 - (int)plVar3;
    }
    uStack_90 = 0;
    ppuStack_98 = &PTR_FUN_110ae99f0;
    plStack_88 = *(long **)(param_2 + 0x10);
    if (plStack_88 != (long *)0x0) {
      *(int *)(plStack_88 + 1) = (int)plStack_88[1] + 1;
    }
    (**(code **)(*param_1 + 0x110))(param_1,&ppuStack_98,param_3,param_4);
    ppuStack_98 = &PTR_FUN_110ae99f0;
    if ((plStack_88 != (long *)0x0) &&
       (iVar8 = (int)plStack_88[1] + -1, *(int *)(plStack_88 + 1) = iVar8, iVar8 == 0)) {
      *(undefined4 *)(plStack_88 + 1) = 0xdeadf001;
      (**(code **)(*plStack_88 + 8))();
    }
  }
  return param_1;
}



/* Entry: 1092d81e8; end: 1092d8297;  */

undefined8 FUN_1092d81e8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  int iStack_48;
  undefined8 uStack_40;
  int iStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uVar1 = param_2;
  if (0x1f < param_2) {
    uVar1 = 0x20;
  }
  iStack_38 = 0x20 - (int)uVar1;
  uStack_50 = param_1;
  uStack_40 = param_1;
  uStack_30 = param_1;
  if (param_2 == 0) {
    uStack_28 = 0;
    iStack_48 = iStack_38;
    FUN_1092d8538(auStack_60,&uStack_30,&uStack_40,&uStack_50);
  }
  else {
    uStack_28 = 0;
    iStack_48 = 0x20;
    FUN_1092d867c(auStack_60,&uStack_30,&uStack_40,&uStack_50);
    uStack_28 = 0;
    uStack_30 = param_1;
    func_0x0001092898ac(&uStack_30,uVar1);
  }
  return param_1;
}



/* Entry: 1092d8298; end: 1092d8393;  */

void FUN_1092d8298(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lStack_58;
  long lStack_50;
  
  if (0 < (int)((ulong)(*(long *)(*(long *)(param_3 + 0x10) + 0x18) -
                       *(long *)(*(long *)(param_3 + 0x10) + 0x10)) >> 2)) {
    lVar6 = 0;
    do {
      (**(code **)(*param_1 + 0xb8))(&lStack_58,param_1,lVar6);
      if (lStack_50 - lStack_58 == 0) {
        if (lStack_50 != 0) goto LAB_1092d8358;
      }
      else {
        lVar2 = 0;
        uVar1 = *(uint *)(*(long *)(*(long *)(param_3 + 0x10) + 0x10) + lVar6 * 4);
        lVar3 = *param_2;
        do {
          uVar5 = (ulong)*(int *)(lStack_58 + lVar2 * 4);
          uVar4 = uVar5 >> 6;
          uVar5 = 1L << (uVar5 & 0x3f);
          if ((uVar1 >> (ulong)((uint)lVar2 & 0x1f) & 1) == 0) {
            uVar5 = *(ulong *)(lVar3 + uVar4 * 8) & (uVar5 ^ 0xffffffffffffffff);
          }
          else {
            uVar5 = *(ulong *)(lVar3 + uVar4 * 8) | uVar5;
          }
          *(ulong *)(lVar3 + uVar4 * 8) = uVar5;
          lVar2 = lVar2 + 1;
        } while (lStack_50 - lStack_58 >> 2 != lVar2);
LAB_1092d8358:
        lStack_50 = lStack_58;
        __ZdlPv();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)((ulong)(*(long *)(*(long *)(param_3 + 0x10) + 0x18) -
                                  *(long *)(*(long *)(param_3 + 0x10) + 0x10)) >> 2));
  }
  return;
}



/* Entry: 1092d8394; end: 1092d8477;  */

void FUN_1092d8394(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lStack_48;
  long lStack_40;
  
  if (0 < (int)((ulong)(*(long *)(*(long *)(param_3 + 0x10) + 0x18) -
                       *(long *)(*(long *)(param_3 + 0x10) + 0x10)) >> 2)) {
    lVar6 = 0;
    do {
      (**(code **)(*param_1 + 0xb8))(&lStack_48,param_1,lVar6);
      if (lStack_40 - lStack_48 == 0) {
        if (lStack_40 != 0) goto LAB_1092d8440;
      }
      else {
        lVar1 = 0;
        lVar2 = *param_2;
        lVar3 = *(long *)(*(long *)(param_3 + 0x10) + 0x10);
        uVar4 = *(uint *)(lVar3 + lVar6 * 4);
        do {
          uVar5 = (ulong)*(int *)(lStack_48 + lVar1 * 4);
          uVar4 = ((uint)(*(ulong *)(lVar2 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f)) & 1) <<
                  (ulong)((uint)lVar1 & 0x1f) | uVar4;
          *(uint *)(lVar3 + lVar6 * 4) = uVar4;
          lVar1 = lVar1 + 1;
        } while (lStack_40 - lStack_48 >> 2 != lVar1);
LAB_1092d8440:
        lStack_40 = lStack_48;
        __ZdlPv();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)((ulong)(*(long *)(*(long *)(param_3 + 0x10) + 0x18) -
                                  *(long *)(*(long *)(param_3 + 0x10) + 0x10)) >> 2));
  }
  return;
}



/* Entry: 1092d8478; end: 1092d8517;  */

void FUN_1092d8478(long *param_1,long *param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lStack_38;
  long lStack_30;
  
  (**(code **)(*param_1 + 0xb8))(&lStack_38,param_1,param_3);
  if (lStack_30 - lStack_38 == 0) {
    if (lStack_30 == 0) {
      return;
    }
  }
  else {
    lVar1 = 0;
    lVar2 = *param_2;
    do {
      uVar4 = (ulong)*(int *)(lStack_38 + lVar1 * 4);
      uVar3 = uVar4 >> 6;
      uVar4 = 1L << (uVar4 & 0x3f);
      if ((param_4 >> (ulong)((uint)lVar1 & 0x1f) & 1) == 0) {
        uVar4 = *(ulong *)(lVar2 + uVar3 * 8) & (uVar4 ^ 0xffffffffffffffff);
      }
      else {
        uVar4 = *(ulong *)(lVar2 + uVar3 * 8) | uVar4;
      }
      *(ulong *)(lVar2 + uVar3 * 8) = uVar4;
      lVar1 = lVar1 + 1;
    } while (lStack_30 - lStack_38 >> 2 != lVar1);
  }
  lStack_30 = lStack_38;
  __ZdlPv();
  return;
}



/* Entry: 1092d8518; end: 1092d8537;  */

undefined8 FUN_1092d8518(void)

{
  return 10;
}



/* Entry: 1092d8538; end: 1092d867b;  */

void FUN_1092d8538(long *param_1,long *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar1 = *(uint *)(param_3 + 1);
  uVar4 = (ulong)uVar1;
  uVar7 = (uVar4 + (*param_3 - *param_2) * 8) - (ulong)*(uint *)(param_2 + 1);
  puVar3 = (ulong *)*param_4;
  if (0 < (long)uVar7) {
    if (uVar1 != 0) {
      uVar5 = uVar7;
      if (uVar4 <= uVar7) {
        uVar5 = uVar4;
      }
      uVar7 = uVar7 - uVar5;
      uVar4 = -1L << (uVar4 - uVar5 & 0x3f) & 0xffffffffffffffffU >> ((ulong)-uVar1 & 0x3f);
      *puVar3 = *puVar3 & (uVar4 ^ 0xffffffffffffffff) | *(ulong *)*param_3 & uVar4;
      *(uint *)(param_4 + 1) = (int)param_4[1] - (int)uVar5 & 0x3f;
    }
    uVar4 = uVar7 + 0x3f;
    if (-1 < (long)uVar7) {
      uVar4 = uVar7;
    }
    lVar8 = (long)uVar4 >> 6;
    *param_4 = (long)(puVar3 + -lVar8);
    lVar2 = *param_3 + lVar8 * -8;
    *param_3 = lVar2;
    if (0x7e < uVar7 + 0x3f) {
      _memmove(*param_4,lVar2,lVar8 << 3);
    }
    lVar2 = uVar7 + lVar8 * -0x40;
    if (lVar2 < 1) {
      puVar3 = (ulong *)*param_4;
    }
    else {
      uVar4 = -1L << (-lVar2 & 0x3fU);
      uVar5 = *(ulong *)(*param_3 + -8);
      *param_3 = *param_3 + -8;
      puVar3 = (ulong *)(*param_4 + -8);
      uVar6 = *puVar3;
      *param_4 = (long)puVar3;
      *puVar3 = uVar6 & (uVar4 ^ 0xffffffffffffffff) | uVar5 & uVar4;
      *(uint *)(param_4 + 1) = -(int)uVar7 & 0x3f;
    }
  }
  *param_1 = (long)puVar3;
  *(int *)(param_1 + 1) = (int)param_4[1];
  return;
}



/* Entry: 1092d867c; end: 1092d88af;  */

void FUN_1092d867c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  
  uVar6 = *(uint *)(param_3 + 1);
  uVar7 = (ulong)uVar6;
  uVar4 = (uVar7 + (*param_3 - *param_2) * 8) - (ulong)*(uint *)(param_2 + 1);
  if ((long)uVar4 < 1) {
    uVar6 = *(uint *)(param_4 + 1);
  }
  else {
    if (uVar6 == 0) {
      uVar7 = (ulong)*(uint *)(param_4 + 1);
    }
    else {
      uVar9 = uVar4;
      if (uVar7 <= uVar4) {
        uVar9 = uVar7;
      }
      uVar4 = uVar4 - uVar9;
      uVar10 = -1L << (uVar7 - uVar9 & 0x3f) &
               0xffffffffffffffffU >> ((ulong)-uVar6 & 0x3f) & *(ulong *)*param_3;
      uVar2 = *(uint *)(param_4 + 1);
      uVar7 = (ulong)uVar2;
      uVar5 = uVar9;
      if (uVar7 <= uVar9) {
        uVar5 = uVar7;
      }
      if (uVar2 == 0) {
        uVar7 = 0;
      }
      else {
        uVar8 = uVar10 << ((ulong)(uVar2 - uVar6) & 0x3f);
        if (uVar2 < uVar6 || uVar2 - uVar6 == 0) {
          uVar8 = uVar10 >> ((ulong)(uVar6 - uVar2) & 0x3f);
        }
        *(ulong *)*param_4 =
             *(ulong *)*param_4 &
             (-1L << (uVar7 - uVar5 & 0x3f) & 0xffffffffffffffffU >> ((ulong)-uVar2 & 0x3f) ^
             0xffffffffffffffff) | uVar8;
        uVar6 = uVar2 - (int)uVar5 & 0x3f;
        uVar7 = (ulong)uVar6;
        *(uint *)(param_4 + 1) = uVar6;
        uVar9 = uVar9 - uVar5;
      }
      if (0 < (long)uVar9) {
        puVar11 = (ulong *)(*param_4 + -8);
        uVar8 = *puVar11;
        *param_4 = (long)puVar11;
        uVar6 = -(int)uVar9;
        *(uint *)(param_4 + 1) = uVar6 & 0x3f;
        iVar3 = ((int)param_3[1] - (int)uVar9) - (int)uVar5;
        *(int *)(param_3 + 1) = iVar3;
        uVar7 = (ulong)*(uint *)(param_4 + 1);
        *puVar11 = uVar10 << ((ulong)(*(uint *)(param_4 + 1) - iVar3) & 0x3f) |
                   uVar8 & (-1L << ((ulong)uVar6 & 0x3f) ^ 0xffffffffffffffffU);
      }
    }
    uVar6 = (uint)uVar7;
    uVar9 = 0xffffffffffffffff >> ((ulong)-uVar6 & 0x3f);
    if (0x3f < (long)uVar4) {
      uVar5 = uVar4;
      do {
        uVar4 = *(ulong *)(*param_3 + -8);
        *param_3 = *param_3 + -8;
        puVar11 = (ulong *)*param_4;
        *puVar11 = *puVar11 & ~uVar9 | uVar4 >> ((ulong)(0x40 - uVar6) & 0x3f);
        puVar11 = puVar11 + -1;
        uVar10 = *puVar11;
        *param_4 = (long)puVar11;
        *puVar11 = uVar10 & uVar9 | uVar4 << (uVar7 & 0x3f);
        uVar4 = uVar5 - 0x40;
        bVar1 = 0x7f < uVar5;
        uVar5 = uVar4;
      } while (bVar1);
    }
    if (0 < (long)uVar4) {
      uVar10 = *(ulong *)(*param_3 + -8);
      *param_3 = *param_3 + -8;
      uVar10 = uVar10 & -1L << (-uVar4 & 0x3f);
      uVar5 = uVar4;
      if (uVar7 <= uVar4) {
        uVar5 = uVar7;
      }
      puVar11 = (ulong *)*param_4;
      *puVar11 = *puVar11 & (-1L << (uVar7 - uVar5 & 0x3f) & uVar9 ^ 0xffffffffffffffff) |
                 uVar10 >> ((ulong)(0x40 - uVar6) & 0x3f);
      uVar6 = uVar6 - (int)uVar5 & 0x3f;
      *(uint *)(param_4 + 1) = uVar6;
      if (0 < (long)(uVar4 - uVar5)) {
        puVar11 = puVar11 + -1;
        uVar7 = *puVar11;
        *param_4 = (long)puVar11;
        uVar2 = -(int)(uVar4 - uVar5);
        uVar6 = uVar2 & 0x3f;
        *(uint *)(param_4 + 1) = uVar6;
        *puVar11 = uVar7 & (-1L << ((ulong)uVar2 & 0x3f) ^ 0xffffffffffffffffU) |
                   uVar10 << (uVar4 + uVar6 & 0x3f);
      }
    }
  }
  *param_1 = *param_4;
  *(uint *)(param_1 + 1) = uVar6;
  return;
}



/* Entry: 1092d88b0; end: 1092d8a97;  */

undefined8 FUN_1092d88b0(long *param_1,long param_2)

{
  int iVar1;
  undefined **ppuStack_78;
  undefined4 uStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 auStack_50 [24];
  undefined1 *puStack_38;
  
  FUN_1092cc4a8(&plStack_60);
  FUN_1092d0ec0(&plStack_58,&plStack_60);
  if ((plStack_60 != (long *)0x0) &&
     (iVar1 = (int)plStack_60[1] + -1, *(int *)(plStack_60 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_60 + 1) = 0xdeadf001;
    (**(code **)(*plStack_60 + 8))();
  }
  uStack_70 = 0;
  ppuStack_78 = &PTR_FUN_110ae99f0;
  plStack_68 = *(long **)(param_2 + 0x10);
  if (plStack_68 != (long *)0x0) {
    *(int *)(plStack_68 + 1) = (int)plStack_68[1] + 1;
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  FUN_1092d117c(&plStack_58,&ppuStack_78,param_1);
  ppuStack_78 = &PTR_FUN_110ae99f0;
  if ((plStack_68 != (long *)0x0) &&
     (iVar1 = (int)plStack_68[1] + -1, *(int *)(plStack_68 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_68 + 1) = 0xdeadf001;
    (**(code **)(*plStack_68 + 8))();
  }
  plStack_68 = (long *)0x0;
  puStack_38 = auStack_50;
  FUN_1092d0c8c(&puStack_38);
  if ((plStack_58 != (long *)0x0) &&
     (iVar1 = (int)plStack_58[1] + -1, *(int *)(plStack_58 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_58 + 1) = 0xdeadf001;
    (**(code **)(*plStack_58 + 8))();
  }
  return 1;
}



/* Entry: 1092d8a98; end: 1092d8aff;  */

long * FUN_1092d8a98(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *plStack_28;
  
  plStack_28 = param_1 + 1;
  FUN_1092d0c8c(&plStack_28);
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  return param_1;
}



/* Entry: 1092d8b00; end: 1092d8cbb;  */

undefined8 FUN_1092d8b00(long *param_1,long param_2)

{
  int iVar1;
  undefined **ppuStack_58;
  undefined4 uStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  FUN_1092cc4a8(&plStack_40);
  if (plStack_40 == (long *)0x0) {
    plStack_38 = (long *)0x0;
  }
  else {
    plStack_38 = plStack_40;
    if ((int)plStack_40[1] == 0) {
      *(undefined4 *)(plStack_40 + 1) = 0xdeadf001;
      (**(code **)(*plStack_40 + 8))();
    }
  }
  uStack_50 = 0;
  ppuStack_58 = &PTR_FUN_110ae99f0;
  plStack_48 = *(long **)(param_2 + 0x10);
  if (plStack_48 != (long *)0x0) {
    *(int *)(plStack_48 + 1) = (int)plStack_48[1] + 1;
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  FUN_1092cf548(&plStack_38,&ppuStack_58,param_1);
  ppuStack_58 = &PTR_FUN_110ae99f0;
  if ((plStack_48 != (long *)0x0) &&
     (iVar1 = (int)plStack_48[1] + -1, *(int *)(plStack_48 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_48 + 1) = 0xdeadf001;
    (**(code **)(*plStack_48 + 8))();
  }
  plStack_48 = (long *)0x0;
  if ((plStack_38 != (long *)0x0) &&
     (iVar1 = (int)plStack_38[1] + -1, *(int *)(plStack_38 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_38 + 1) = 0xdeadf001;
    (**(code **)(*plStack_38 + 8))();
  }
  return 1;
}



/* Entry: 1092d8cbc; end: 1092d8e13;  */

long * FUN_1092d8cbc(long *param_1,long *param_2,undefined1 *param_3,undefined8 param_4,
                    long *param_5)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  undefined **appuStack_d0 [2];
  long lStack_c0;
  long lStack_b8;
  undefined1 uStack_a1;
  char *pcStack_a0;
  char *pcStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  puVar5 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  switch((ulong)param_3 & 0xffffffff) {
  case 0:
    puVar6 = (undefined8 *)&UNK_10dfc36a0;
    break;
  case 1:
    puVar6 = (undefined8 *)&UNK_10dfc36b0;
    break;
  case 2:
    puVar6 = (undefined8 *)&UNK_10dfc36c0;
    break;
  case 3:
    puVar6 = (undefined8 *)&UNK_10dfc36d0;
    break;
  case 4:
    puVar6 = (undefined8 *)&UNK_10dfc36e0;
    break;
  case 5:
    puVar6 = (undefined8 *)&UNK_10dfc36f0;
    break;
  case 6:
    puVar6 = (undefined8 *)&UNK_10dfc3700;
    break;
  case 7:
    puVar6 = (undefined8 *)&UNK_10dfc3710;
    break;
  case 8:
    puVar6 = (undefined8 *)&UNK_10dfc3720;
    break;
  case 9:
    puVar6 = (undefined8 *)&UNK_10dfc3730;
    break;
  case 10:
    puVar6 = (undefined8 *)&UNK_10dfc3740;
    break;
  case 0xb:
    puVar6 = (undefined8 *)&UNK_10dfc3750;
    break;
  case 0xc:
    puVar6 = (undefined8 *)&UNK_10dfc3760;
    break;
  case 0xd:
    puVar6 = (undefined8 *)&UNK_10dfc3770;
    break;
  default:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1 = param_2;
    puVar5 = (undefined8 *)param_3;
    goto LAB_1092d8ddc;
  }
  uStack_38 = puVar6[1];
  uStack_40 = *puVar6;
  (**(code **)(*param_2 + 0x58))();
  param_5 = (long *)(long)(int)param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_109285684(param_1,&uStack_40,(long)&uStack_40 + (long)(int)param_2 * 4);
LAB_1092d8ddc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  plVar9 = *(long **)((long)puVar5 + 0x10);
  if (plVar9 != (long *)0x0) {
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
  }
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x58))();
  uVar2 = 0;
  if ((int)plVar4 != 0) {
    uVar2 = 0x20 / (int)plVar4;
  }
  uStack_88 = (ulong)*(uint *)plVar9[2];
  if (0 < (int)uVar2) {
    lVar10 = 0;
    do {
      plVar4 = param_1;
      (**(code **)(*param_1 + 0x58))(param_1);
      FUN_1092d81e8(&uStack_88,(long)(int)plVar4);
      uStack_88 = uStack_88 | *(uint *)(plVar9[2] + lVar10);
      lVar10 = lVar10 + 4;
    } while ((ulong)uVar2 << 2 != lVar10);
  }
  uStack_a1 = 0;
  FUN_109260268(&pcStack_a0,4,&uStack_a1);
  uVar7 = 0;
  do {
    uVar2 = (uint)uVar7 >> 3;
    pcStack_a0[uVar2] =
         (byte)(((uint)(uStack_88 >> (uVar7 & 0x3f)) & 1) << (ulong)(((uint)uVar7 ^ 0xffffffff) & 7)
               ) | pcStack_a0[uVar2];
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0x20);
  FUN_1092d9420(appuStack_d0,&pcStack_a0);
  if (pcStack_a0 != (char *)0x0) {
    pcStack_98 = pcStack_a0;
    __ZdlPv();
  }
  iVar3 = (int)plVar9[1] + -1;
  *(int *)(plVar9 + 1) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(plVar9 + 1) = 0xdeadf001;
    (**(code **)(*plVar9 + 8))(plVar9);
  }
  pcStack_a0 = (char *)0x0;
  pcStack_98 = (char *)0x0;
  lStack_90 = 0;
  FUN_1092bfde0(&pcStack_a0,lStack_c0,lStack_b8,lStack_b8 - lStack_c0);
  if (*param_5 != 0) {
    param_5[1] = *param_5;
    __ZdlPv();
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
  }
  *param_5 = (long)pcStack_a0;
  param_5[2] = lStack_90;
  param_5[1] = (long)pcStack_98;
  if (pcStack_98 == pcStack_a0) {
LAB_1092d8fdc:
    plVar9 = (long *)0x0;
  }
  else if (*pcStack_a0 == '\0') {
    pcVar8 = (char *)0x0;
    do {
      if (pcStack_98 + ~(ulong)pcStack_a0 == pcVar8) goto LAB_1092d8fdc;
      pcVar1 = pcStack_a0 + 1 + (long)pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar1 == '\0');
    plVar9 = (long *)(ulong)(pcVar8 < pcStack_98 + -(long)pcStack_a0);
  }
  else {
    plVar9 = (long *)0x1;
  }
  appuStack_d0[0] = &PTR_FUN_110ae9ee0;
  if (lStack_c0 != 0) {
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  return plVar9;
}



/* Entry: 1092d8e14; end: 1092d909b;  */

bool FUN_1092d8e14(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  undefined **appuStack_90 [2];
  long lStack_80;
  long lStack_78;
  undefined1 uStack_61;
  char *pcStack_60;
  char *pcStack_58;
  long lStack_50;
  ulong uStack_48;
  
  plVar8 = *(long **)(param_2 + 0x10);
  if (plVar8 != (long *)0x0) {
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
  }
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x58))();
  uVar2 = 0;
  if ((int)plVar5 != 0) {
    uVar2 = 0x20 / (int)plVar5;
  }
  uStack_48 = (ulong)*(uint *)plVar8[2];
  if (0 < (int)uVar2) {
    lVar9 = 0;
    do {
      plVar5 = param_1;
      (**(code **)(*param_1 + 0x58))(param_1);
      FUN_1092d81e8(&uStack_48,(long)(int)plVar5);
      uStack_48 = uStack_48 | *(uint *)(plVar8[2] + lVar9);
      lVar9 = lVar9 + 4;
    } while ((ulong)uVar2 << 2 != lVar9);
  }
  uStack_61 = 0;
  FUN_109260268(&pcStack_60,4,&uStack_61);
  uVar6 = 0;
  do {
    uVar2 = (uint)uVar6 >> 3;
    pcStack_60[uVar2] =
         (byte)(((uint)(uStack_48 >> (uVar6 & 0x3f)) & 1) << (ulong)(((uint)uVar6 ^ 0xffffffff) & 7)
               ) | pcStack_60[uVar2];
    uVar6 = uVar6 + 1;
  } while (uVar6 != 0x20);
  FUN_1092d9420(appuStack_90,&pcStack_60);
  if (pcStack_60 != (char *)0x0) {
    pcStack_58 = pcStack_60;
    __ZdlPv();
  }
  iVar3 = (int)plVar8[1] + -1;
  *(int *)(plVar8 + 1) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(plVar8 + 1) = 0xdeadf001;
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  pcStack_60 = (char *)0x0;
  pcStack_58 = (char *)0x0;
  lStack_50 = 0;
  FUN_1092bfde0(&pcStack_60,lStack_80,lStack_78,lStack_78 - lStack_80);
  if (*param_4 != 0) {
    param_4[1] = *param_4;
    __ZdlPv();
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
  }
  *param_4 = (long)pcStack_60;
  param_4[2] = lStack_50;
  param_4[1] = (long)pcStack_58;
  if (pcStack_58 == pcStack_60) {
LAB_1092d8fdc:
    bVar4 = false;
  }
  else if (*pcStack_60 == '\0') {
    pcVar7 = (char *)0x0;
    do {
      if (pcStack_58 + ~(ulong)pcStack_60 == pcVar7) goto LAB_1092d8fdc;
      pcVar1 = pcStack_60 + 1 + (long)pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 == '\0');
    bVar4 = pcVar7 < pcStack_58 + -(long)pcStack_60;
  }
  else {
    bVar4 = true;
  }
  appuStack_90[0] = &PTR_FUN_110ae9ee0;
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    __ZdlPv();
  }
  return bVar4;
}



/* Entry: 1092d909c; end: 1092d917b;  */

void FUN_1092d909c(undefined8 param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  undefined **ppuStack_38;
  undefined4 uStack_30;
  long *plStack_28;
  
  *(ulong *)*param_2 = *(ulong *)*param_2 | 0x320100;
  uStack_30 = 0;
  ppuStack_38 = &PTR_FUN_110ae99f0;
  plVar2 = *(long **)(param_3 + 0x10);
  if (plVar2 != (long *)0x0) {
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  }
  plStack_28 = plVar2;
  FUN_1092d8298(param_1,param_2,&ppuStack_38);
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
                    /* WARNING: Could not recover jumptable at 0x0001092d913c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}



/* Entry: 1092d917c; end: 1092d91cf;  */

void FUN_1092d917c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x28;
  __Znwm();
  FUN_1092d9420();
  *param_1 = uVar1;
  return;
}



/* Entry: 1092d91d0; end: 1092d9253;  */

undefined8 FUN_1092d91d0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 < 1) {
    uVar1 = 0x28;
    __Znwm();
    uVar2 = uVar1;
    FUN_1092d9420();
    *param_1 = uVar1;
    return uVar2;
  }
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  FUN_1092cf4c4();
  ___cxa_throw();
  __ZdlPv();
  __Unwind_Resume(uVar2);
  return 10;
}



/* Entry: 1092d9254; end: 1092d927b;  */

undefined8 FUN_1092d9254(void)

{
  return 10;
}



/* Entry: 1092d927c; end: 1092d9307;  */

undefined8 * FUN_1092d927c(undefined8 *param_1)

{
  undefined1 auStack_1c8 [400];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _memcpy(auStack_1c8,&UNK_10dfc34f0,400);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_109285684(param_1,auStack_1c8,&lStack_38,100);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  return (undefined8 *)0x3c;
}


