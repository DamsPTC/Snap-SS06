/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1004796b4; end: 10047970b;  */

void FUN_1004796b4(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x30;
  func_0x000107c60e20();
  FUN_10047990c();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10047970c; end: 1004797d7;  */

undefined8 * FUN_10047970c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_31;
  
  *param_1 = &PTR_DAT_1107c6018;
  param_1[1] = 1;
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  lStack_40 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_1004796b4(param_1 + 2,&uStack_31,&uStack_50);
  if (lStack_40 < 0) {
    func_0x000107c60e14(uStack_50);
  }
  uVar1 = 0x60;
  func_0x000107c60e20();
  FUN_10047aa48();
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 1004797d8; end: 100479837;  */

/* WARNING: Possible PIC construction at 0x000100479c44: Changing call to branch */

void FUN_1004797d8(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  lVar3 = 0xa0;
  func_0x000107c60e20();
  FUN_100479afc();
  lVar5 = lVar3 + 0x18;
  *param_1 = lVar5;
  param_1[1] = lVar3;
  if ((lVar5 != 0) &&
     ((plVar4 = *(long **)(lVar3 + 0x20), plVar4 == (long *)0x0 || (plVar4[1] == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar6 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = *(long **)(lVar3 + 0x20);
    }
    *(long *)lVar5 = lVar5;
    *(long **)(lVar3 + 0x20) = plVar6;
    if (plVar4 != (long *)0x0) {
code_r0x000107c60d68:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        plVar4 = plVar6;
        goto code_r0x000107c60d68;
      }
    }
  }
  return;
}



/* Entry: 100479838; end: 10047989b;  */

undefined8 * FUN_100479838(undefined8 *param_1)

{
  undefined1 uStack_21;
  
  *param_1 = &PTR_DAT_1107c5db8;
  FUN_1004797d8(param_1 + 1,&uStack_21);
  FUN_100479cd0(param_1[1]);
  return param_1;
}



/* Entry: 10047989c; end: 10047990b;  */

void FUN_10047989c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  lStack_30 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_100479838(param_2,&uStack_40);
  if (lStack_30 < 0) {
    func_0x000107c60e14(uStack_40);
  }
  return;
}



/* Entry: 10047990c; end: 100479967;  */

undefined8 * FUN_10047990c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uStack_21;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1107c6098;
  FUN_10047989c(&uStack_21,param_1 + 3,param_2);
  return param_1;
}



/* Entry: 100479968; end: 1004799af;  */

void FUN_100479968(long *param_1)

{
  long lVar1;
  
  lVar1 = 0xb0;
  func_0x000107c60e20();
  FUN_100479b58();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 1004799b0; end: 1004799e3;  */

undefined8 FUN_1004799b0(undefined8 param_1)

{
  undefined1 uStack_21;
  
  FUN_100479968(param_1,&uStack_21);
  return param_1;
}



/* Entry: 1004799e4; end: 100479a8b;  */

undefined8 * FUN_1004799e4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0x7fffffffffffffff;
  param_1[2] = 0x7fffffffffffffff;
  do {
    FUN_1004799b0((long)param_1 + lVar1 + 0x20);
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x40);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar3 = param_2[1];
  uVar2 = *param_2;
  param_1[0x10] = param_2[2];
  param_1[0xf] = uVar3;
  param_1[0xe] = uVar2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return param_1;
}



/* Entry: 100479a8c; end: 100479afb;  */

void FUN_100479a8c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  lStack_30 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_1004799e4(param_2,&uStack_40);
  if (lStack_30 < 0) {
    func_0x000107c60e14(uStack_40);
  }
  return;
}



/* Entry: 100479afc; end: 100479b57;  */

undefined8 * FUN_100479afc(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uStack_21;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1107c60e8;
  FUN_100479a8c(&uStack_21,param_1 + 3,param_2);
  return param_1;
}



/* Entry: 100479b58; end: 100479bdf;  */

undefined8 * FUN_100479b58(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1107c5e58;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  FUN_100460318();
  puVar1 = param_1 + 0x14;
  *puVar1 = 0;
  param_1[0xb] = puVar1;
  param_1[0x13] = puVar1;
  param_1[0x15] = 0;
  return param_1;
}



/* Entry: 100479be0; end: 100479ccf;  */

/* WARNING: Possible PIC construction at 0x000100479c44: Changing call to branch */

void FUN_100479be0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((plVar3 = (long *)param_2[1], plVar3 == (long *)0x0 || (plVar3[1] == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar3 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar3 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar3 = (long *)param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (plVar3 != (long *)0x0) {
code_r0x000107c60d68:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
      return;
    }
    if (plVar5 != (long *)0x0) {
      plVar3 = plVar5 + 1;
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = plVar5;
        goto code_r0x000107c60d68;
      }
    }
  }
  return;
}



/* Entry: 100479cd0; end: 10047a31b;  */

void FUN_100479cd0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  code *pcVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 extraout_x8;
  long lVar19;
  long extraout_x10;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined1 auStack_5b0 [8];
  undefined8 uStack_5a8;
  long *plStack_5a0;
  undefined8 uStack_598;
  long *plStack_590;
  undefined8 uStack_568;
  long *plStack_560;
  undefined1 auStack_558 [8];
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined1 auStack_500 [8];
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 auStack_4a8 [8];
  undefined8 uStack_4a0;
  long *plStack_498;
  undefined8 uStack_490;
  long *plStack_488;
  undefined8 uStack_460;
  long *plStack_458;
  undefined1 auStack_450 [8];
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long *plStack_3f0;
  undefined1 auStack_3e8 [8];
  undefined8 uStack_3e0;
  long *plStack_3d8;
  undefined8 uStack_3d0;
  long *plStack_3c8;
  undefined8 uStack_3a0;
  long *plStack_398;
  undefined1 auStack_390 [8];
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined1 auStack_338 [8];
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [8];
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 auStack_288 [8];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [8];
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  char cStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [8];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong auStack_118 [9];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [72];
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000100479c90(&uStack_3f8,param_1);
  if (plStack_3f0 == (long *)0x0) {
    plStack_488 = (long *)0x0;
  }
  else {
    plVar1 = plStack_3f0 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_488 = plStack_3f0;
    if (plStack_3f0 != (long *)0x0) {
      plVar1 = plStack_3f0 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_458 = plStack_3f0;
      if (plStack_3f0 != (long *)0x0) {
        plVar1 = plStack_3f0 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      goto LAB_100479d70;
    }
  }
  plStack_458 = (long *)0x0;
LAB_100479d70:
  auStack_500[0] = 0;
  auStack_1c8[0] = 0;
  uStack_4b8 = 0;
  uStack_4b0 = 0;
  uStack_4f0 = 0;
  uStack_4f8 = 0;
  uStack_4e0 = 0;
  uStack_4e8 = 0;
  auStack_118[0] = auStack_118[0] & 0xffffffffffffff00;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  auStack_4a8[0] = 0;
  uStack_460 = uStack_3f8;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_4a0 = uStack_3f8;
  plStack_498 = plStack_3f0;
  auStack_118[2] = 0;
  auStack_118[1] = 0;
  uStack_490 = uStack_3f8;
  auStack_118[4] = 0;
  auStack_118[3] = 0;
  FUN_10047a31c(auStack_118);
  FUN_10047a3e4(auStack_4a8);
  FUN_10047a31c(auStack_1c8);
  FUN_10047a31c(auStack_500);
  uVar14 = uStack_400;
  uVar13 = uStack_408;
  uVar12 = uStack_430;
  uVar11 = uStack_438;
  uVar10 = uStack_440;
  uVar9 = uStack_448;
  plVar8 = plStack_458;
  uVar7 = uStack_460;
  plVar6 = plStack_488;
  uVar5 = uStack_490;
  plVar1 = plStack_498;
  uVar4 = uStack_4a0;
  auStack_5b0[0] = 0;
  uStack_568 = uStack_460;
  plStack_560 = plStack_458;
  uStack_460 = 0;
  plStack_458 = (long *)0x0;
  uStack_5a8 = uStack_4a0;
  plStack_5a0 = plStack_498;
  uStack_4a0 = 0;
  plStack_498 = (long *)0x0;
  uStack_598 = uStack_490;
  plStack_590 = plStack_488;
  uStack_490 = 0;
  plStack_488 = (long *)0x0;
  auStack_558[0] = 0;
  uStack_510 = uStack_408;
  uStack_508 = uStack_400;
  uStack_400 = 0;
  uStack_408 = 0;
  uStack_550 = uStack_448;
  uStack_548 = uStack_440;
  uStack_448 = 0;
  uStack_440 = 0;
  uStack_540 = uStack_438;
  uStack_538 = uStack_430;
  uStack_438 = 0;
  uStack_430 = 0;
  puVar17 = (undefined8 *)0x138;
  func_0x000107c60e20();
  auStack_3e8[0] = 0;
  uStack_3a0 = uVar7;
  plStack_398 = plVar8;
  uStack_568 = 0;
  plStack_560 = (long *)0x0;
  uStack_3e0 = uVar4;
  plStack_3d8 = plVar1;
  uStack_5a8 = 0;
  plStack_5a0 = (long *)0x0;
  uStack_3d0 = uVar5;
  plStack_3c8 = plVar6;
  uStack_598 = 0;
  plStack_590 = (long *)0x0;
  auStack_390[0] = 0;
  uStack_348 = uVar13;
  uStack_340 = uVar14;
  uStack_510 = 0;
  uStack_508 = 0;
  uStack_388 = uVar9;
  uStack_380 = uVar10;
  uStack_550 = 0;
  uStack_548 = 0;
  uStack_378 = uVar11;
  uStack_370 = uVar12;
  uStack_540 = 0;
  uStack_538 = 0;
  puVar21 = puVar17 + 2;
  puVar17[3] = 0;
  *puVar21 = 0;
  puVar17[9] = 0;
  puVar17[8] = 0;
  puVar17[0xb] = 0;
  puVar17[10] = 0;
  puVar17[5] = 0;
  puVar17[4] = 0;
  puVar17[7] = 0;
  puVar17[6] = 0;
  *puVar17 = &PTR_DAT_1107c5ac0;
  puVar17[1] = &PTR____cxa_pure_virtual_1107c5b08;
  FUN_100460318(puVar21);
  *(undefined4 *)(puVar17 + 10) = 1;
  *(undefined1 *)((long)puVar17 + 0x54) = 0;
  puVar17[0xb] = 0;
  *puVar17 = &PTR_DAT_1107c5ed8;
  puVar17[1] = &PTR_DAT_1107c5f30;
  puVar17[0xd] = 0;
  puVar17[0xc] = 0;
  puVar17[0xf] = 0;
  puVar17[0xe] = 0;
  *(undefined2 *)(puVar17 + 0x10) = 0;
  puVar18 = puVar21;
  FUN_100460448();
  uVar14 = uStack_340;
  uVar13 = uStack_348;
  uVar12 = uStack_370;
  uVar11 = uStack_378;
  uVar10 = uStack_380;
  uVar9 = uStack_388;
  plVar8 = plStack_398;
  uVar7 = uStack_3a0;
  plVar6 = plStack_3c8;
  uVar5 = uStack_3d0;
  plVar1 = plStack_3d8;
  uVar4 = uStack_3e0;
  auStack_338[0] = 0;
  uStack_3a0 = 0;
  plStack_398 = (long *)0x0;
  uStack_3e0 = 0;
  plStack_3d8 = (long *)0x0;
  uStack_3d0 = 0;
  plStack_3c8 = (long *)0x0;
  auStack_2e0[0] = 0;
  uStack_348 = 0;
  uStack_340 = 0;
  uStack_388 = 0;
  uStack_380 = 0;
  uStack_378 = 0;
  uStack_370 = 0;
  auStack_288[0] = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  auStack_230[0] = 0;
  uStack_290 = 0;
  uStack_298 = 0;
  uStack_2d0 = 0;
  uStack_2d8 = 0;
  uStack_2c0 = 0;
  uStack_2c8 = 0;
  func_0x00010047a478(auStack_c0);
  uVar20 = *puVar18;
  func_0x00010047a478();
  *puVar18 = puVar17;
  auStack_118[0] = auStack_118[0] & 0xffffffffffffff00;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  auStack_c0[0] = 0;
  uStack_1e0 = 0;
  uStack_1e8 = 0;
  uStack_220 = 0;
  uStack_228 = 0;
  uStack_210 = 0;
  uStack_218 = 0;
  auStack_1c8[0] = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  *(undefined8 *)(extraout_x10 + 0x10) = 0;
  *(undefined8 *)(extraout_x10 + 8) = 0;
  *(undefined8 *)(extraout_x10 + 0x20) = 0;
  *(undefined8 *)(extraout_x10 + 0x18) = 0;
  auStack_170[0] = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  *(undefined8 *)(extraout_x10 + 0x68) = 0;
  *(undefined8 *)(extraout_x10 + 0x60) = 0;
  *(undefined8 *)(extraout_x10 + 0x78) = 0;
  *(undefined8 *)(extraout_x10 + 0x70) = 0;
  FUN_10047a31c(extraout_x8);
  FUN_10047a31c(auStack_118);
  *(undefined1 *)(puVar17 + 0x11) = 0;
  puVar17[0x1b] = plVar8;
  puVar17[0x1a] = uVar7;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  puVar17[0x13] = plVar1;
  puVar17[0x12] = uVar4;
  puVar17[0x15] = plVar6;
  puVar17[0x14] = uVar5;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  *(undefined1 *)(puVar17 + 0x1c) = 0;
  puVar17[0x26] = uVar14;
  puVar17[0x25] = uVar13;
  uStack_120 = 0;
  uStack_128 = 0;
  puVar17[0x1e] = uVar10;
  puVar17[0x1d] = uVar9;
  uStack_168 = 0;
  uStack_160 = 0;
  puVar17[0x20] = uVar12;
  puVar17[0x1f] = uVar11;
  uStack_150 = 0;
  uStack_158 = 0;
  FUN_10047a31c(auStack_170);
  FUN_10047a31c(auStack_1c8);
  puVar18 = puVar17;
  FUN_10047a498(&uStack_1d8);
  func_0x00010047a478();
  *puVar18 = uVar20;
  FUN_10047a31c(auStack_230);
  FUN_10047a31c(auStack_288);
  FUN_10047a31c(auStack_2e0);
  FUN_10047a31c(auStack_338);
  func_0x000100466b80(puVar21);
  if (cStack_1d0 != '\0') {
    auStack_118[0] = uStack_1d8;
    uStack_1d8 = 0x36;
    iVar16 = (int)auStack_118;
    func_0x000107c2b9b8();
    if (iVar16 != 1) {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.cc"
                    ,0x18e,2,"assertion failed: %s");
      func_0x000107c60ebc();
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x10047a234);
      (*pcVar15)();
    }
    if ((auStack_118[0] & 1) != 0) {
      FUN_10084dad0();
    }
  }
  FUN_10047aa10(&uStack_1d8);
  FUN_10047a31c(auStack_390);
  FUN_10047a31c(auStack_3e8);
  puVar18 = *(undefined8 **)(param_1 + 0x60);
  *(undefined8 **)(param_1 + 0x60) = puVar17;
  if (puVar18 != (undefined8 *)0x0) {
    (**(code **)*puVar18)();
  }
  FUN_10047a31c(auStack_558);
  FUN_10047a31c(auStack_5b0);
  FUN_10047a31c(auStack_450);
  FUN_10047a31c(auStack_4a8);
  if (plStack_3f0 != (long *)0x0) {
    plVar1 = plStack_3f0 + 1;
    do {
      lVar19 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar19 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_3f0 + 0x10))(plStack_3f0);
      func_0x000107c60d68(plStack_3f0);
    }
  }
  return;
}



/* Entry: 10047a31c; end: 10047a38b;  */

undefined1 * FUN_10047a31c(undefined1 *param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  
  switch(*param_1) {
  case 0:
    FUN_10047a38c(param_1 + 8);
    FUN_10047a38c(param_1 + 0x18);
  case 1:
    puVar2 = param_1 + 0x48;
    break;
  case 2:
    puVar2 = param_1 + 8;
    break;
  case 3:
    goto code_r0x00010047a370;
  default:
    func_0x000107c60ebc();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10047a388);
    (*pcVar1)();
  }
  FUN_10047a38c(puVar2);
code_r0x00010047a370:
  return param_1;
}



/* Entry: 10047a38c; end: 10047a3e3;  */

long FUN_10047a38c(long param_1)

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
      func_0x000107c60d68(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10047a3e4; end: 10047a497;  */

void FUN_10047a3e4(undefined1 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  bool bVar9;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  auStack_68[0] = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  lVar5 = *(long *)(param_2 + 0x50);
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = *plVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  uVar3 = *(undefined8 *)(param_2 + 8);
  lVar6 = *(long *)(param_2 + 0x10);
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = *plVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = *(long *)(param_2 + 0x20);
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = *plVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(long *)(param_1 + 0x50) = lVar5;
  uStack_20 = 0;
  uStack_18 = 0;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(long *)(param_1 + 0x10) = lVar6;
  uStack_60 = 0;
  uStack_58 = 0;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(long *)(param_1 + 0x20) = lVar7;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10047a31c(auStack_68);
  return;
}



/* Entry: 10047a498; end: 10047a7cf;  */

void FUN_10047a498(long *param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  undefined1 uVar10;
  undefined8 *extraout_x8;
  long lVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined1 uStack_122;
  undefined1 uStack_121;
  long *plStack_120;
  undefined1 *puStack_118;
  long *plStack_110;
  undefined8 *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 *puStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  int iStack_d0;
  ulong uStack_c8;
  undefined4 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [16];
  int iStack_90;
  ulong uStack_88;
  int aiStack_80 [4];
  undefined4 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_1;
  func_0x00010047a478();
  if ((long *)*plVar6 == param_1) {
    if ((char)param_1[0x10] == '\0') {
      plVar6 = param_1 + 0x11;
      plVar1 = param_1 + 0x1c;
      plStack_e0 = param_1 + 0x1f;
      puStack_f0 = extraout_x8;
      plStack_e8 = plVar6;
code_r0x00010047a514:
      do {
        switch((char)*plVar1) {
        case '\0':
          if (*(long *)(param_1[0x1d] + 0x10) < 1) {
            FUN_10047a38c(param_1 + 0x1d);
            lVar11 = param_1[0x1f];
            FUN_10047a38c(plStack_e0);
            plVar6 = plStack_e8;
            param_1[0x1d] = lVar11 + 0x20;
            param_1[0x1e] = (long)"compact";
            param_1[0x1f] = lVar11 + 0x30;
            param_1[0x20] = (long)"benign";
            param_1[0x21] = lVar11 + 0x40;
            param_1[0x22] = (long)"idle";
            param_1[0x23] = lVar11 + 0x50;
            param_1[0x24] = (long)&DAT_10f7c97cd;
            *(undefined1 *)(param_1 + 0x1c) = 1;
            func_0x000104acc114(&uStack_88,plVar1);
          }
          else {
            uStack_70 = 0;
          }
          break;
        case '\x01':
          func_0x000104acc114(&uStack_88,plVar1);
          break;
        case '\x02':
          func_0x000104acc75c(&uStack_88,plVar1);
          break;
        case '\x03':
          func_0x000104acc7b0(&uStack_88);
          break;
        default:
          func_0x000107c60ebc();
          goto LAB_10047a788;
        }
        FUN_10047a85c(auStack_a0,aiStack_80);
        FUN_10047a898(aiStack_80);
        if (iStack_90 == 1) {
          func_0x000104a72c24(auStack_b8,auStack_a0);
          func_0x000104a7294c(&uStack_88,auStack_b8);
          func_0x000104a72d1c(auStack_b8);
          if (aiStack_80[0] == 0) {
            FUN_10047a31c(plVar1);
            func_0x00010047a3e4(plVar1,plVar6);
            func_0x000104a72d1c(&uStack_88);
            FUN_10047a898(auStack_a0);
            goto code_r0x00010047a514;
          }
          if (aiStack_80[0] != 1) {
            func_0x000104a71e10();
            goto LAB_10047a788;
          }
          uStack_c8 = uStack_88;
          if ((uStack_88 & 1) != 0) {
            piVar12 = (int *)(uStack_88 - 1);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
              if (bVar4) {
                *piVar12 = *piVar12 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          uStack_c0 = 1;
          func_0x000104a72d1c(&uStack_88);
        }
        else {
          uStack_c0 = 0;
        }
        FUN_10047a898(auStack_a0);
        puVar9 = &uStack_c8;
        FUN_10047a8f0(&uStack_d8);
        FUN_10047a9b8(&uStack_c8);
        if (iStack_d0 == 1) {
          func_0x000104acc0d8(param_1);
          uVar13 = uStack_d8;
          uStack_d8 = 0x36;
code_r0x00010047a724:
          *puStack_f0 = uVar13;
          uVar10 = 1;
code_r0x00010047a730:
          *(undefined1 *)(puStack_f0 + 1) = uVar10;
          puVar7 = &uStack_d8;
          FUN_10047a9b8();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
            func_0x000107c60e78();
            FUN_10047a9b8(&uStack_d8);
            puVar8 = puVar7;
            func_0x000107c60bd8();
            pcStack_f8 = FUN_10047a7d0;
            plStack_120 = plVar6;
            puStack_118 = auStack_a0;
            plStack_110 = param_1;
            puStack_108 = puVar7;
            puStack_100 = &stack0xfffffffffffffff0;
            if (*(uint *)(puVar8 + 2) != 0xffffffff) {
              (*(code *)(&PTR_DAT_1107c0c20)[*(uint *)(puVar8 + 2)])(&uStack_121,puVar8);
            }
            *(undefined4 *)(puVar8 + 2) = 0xffffffff;
            uVar2 = (uint)puVar9[2];
            if (uVar2 != 0xffffffff) {
              (*(code *)(&PTR_FUN_1107c0c30)[uVar2])(&uStack_122,puVar8,puVar9);
              *(uint *)(puVar8 + 2) = uVar2;
            }
            return;
          }
          return;
        }
        cVar3 = *(char *)((long)param_1 + 0x54);
        *(undefined1 *)((long)param_1 + 0x54) = 0;
        if (cVar3 == '\0') {
          *(undefined1 *)puStack_f0 = 0;
          uVar10 = 0;
          goto code_r0x00010047a730;
        }
        if (cVar3 == '\x02') {
          func_0x000104acc0d8(param_1);
          uVar13 = 4;
          goto code_r0x00010047a724;
        }
        FUN_10047a9b8(&uStack_d8);
      } while ((char)param_1[0x10] == '\0');
    }
    func_0x000107c2c3a8();
  }
  else {
    func_0x000107c2c3ac();
  }
LAB_10047a788:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10047a78c);
  (*pcVar5)();
}



/* Entry: 10047a7d0; end: 10047a85b;  */

void FUN_10047a7d0(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107c0c20)[*(uint *)(param_1 + 0x10)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 0x10);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c0c30)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 0x10) = uVar1;
  }
  return;
}



/* Entry: 10047a85c; end: 10047a88f;  */

undefined1 * FUN_10047a85c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  FUN_10047a7d0();
  return param_1;
}



/* Entry: 10047a890; end: 10047a897;  */

void FUN_10047a890(void)

{
  return;
}



/* Entry: 10047a898; end: 10047a8ef;  */

long FUN_10047a898(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107c0c20)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return param_1;
}



/* Entry: 10047a8f0; end: 10047a923;  */

undefined1 * FUN_10047a8f0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  FUN_10047a924();
  return param_1;
}



/* Entry: 10047a924; end: 10047a9af;  */

void FUN_10047a924(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 8) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107c0a90)[*(uint *)(param_1 + 8)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c0aa0)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 8) = uVar1;
  }
  return;
}



/* Entry: 10047a9b0; end: 10047a9b7;  */

void FUN_10047a9b0(void)

{
  return;
}



/* Entry: 10047a9b8; end: 10047aa0f;  */

long FUN_10047a9b8(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 8) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107c0a90)[*(uint *)(param_1 + 8)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return param_1;
}



/* Entry: 10047aa10; end: 10047aa47;  */

ulong * FUN_10047aa10(ulong *param_1)

{
  if (((char)param_1[1] != '\0') && ((*param_1 & 1) != 0)) {
    FUN_10084dad0();
  }
  return param_1;
}



/* Entry: 10047aa48; end: 10047aa87;  */

undefined8 * FUN_10047aa48(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107c6138;
  param_1[1] = 1;
  FUN_100460318(param_1 + 2);
  param_1[0xb] = 0xffffffffffffffff;
  param_1[10] = 0;
  return param_1;
}



/* Entry: 10047aa88; end: 10047aaf7;  */

void FUN_10047aa88(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *in_x3;
  long lStack_40;
  undefined **ppuStack_38;
  undefined4 uStack_28;
  
  lStack_40 = *in_x3;
  plVar1 = (long *)(lStack_40 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  ppuStack_38 = &PTR_FUN_1107c5d00;
  uStack_28 = 2;
  FUN_100477f30();
  FUN_100478948(&lStack_40);
  return;
}



/* Entry: 10047aaf8; end: 10047ab3f;  */

void FUN_10047aaf8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar1;
  *param_3 = 0;
  param_3[1] = &PTR_DAT_1107c4910;
  return;
}



/* Entry: 10047ab40; end: 10047ab5f;  */

void FUN_10047ab40(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)(param_2[1] + 8))(*param_2);
  return;
}



/* Entry: 10047ab60; end: 10047acfb;  */

/* WARNING: Removing unreachable block (ram,0x00010047ac88) */

void FUN_10047ab60(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_d0 [32];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_90 [8];
  long *plStack_88;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar4 = *param_5;
  if (*(char *)(lVar4 + 0x27) < '\0') {
    FUN_100033dac(&uStack_60,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
    lVar4 = *param_5;
  }
  else {
    uStack_58 = *(undefined8 *)(lVar4 + 0x18);
    uStack_60 = *(undefined8 *)(lVar4 + 0x10);
    uStack_50 = *(undefined8 *)(lVar4 + 0x20);
  }
  FUN_100478b40(auStack_80,lVar4 + 0x28);
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  lStack_a0 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_1004780e0(auStack_d0,param_3);
  FUN_1004786dc(auStack_90,&uStack_b0,auStack_d0,param_4,*param_5 + 0x48);
  FUN_1004786dc(param_1,&uStack_60,auStack_80,auStack_90,*param_5 + 0x58);
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      func_0x000107c60d68(plStack_88);
    }
  }
  FUN_100478948(auStack_d0);
  if (lStack_a0 < 0) {
    func_0x000107c60e14(uStack_b0);
  }
  FUN_100478948(auStack_80);
  return;
}



/* Entry: 10047acfc; end: 10047ad6b;  */

void FUN_10047acfc(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *in_x3;
  long lStack_40;
  undefined **ppuStack_38;
  undefined4 uStack_28;
  
  lStack_40 = *in_x3;
  plVar1 = (long *)(lStack_40 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  ppuStack_38 = &PTR_DAT_1107c4060;
  uStack_28 = 2;
  FUN_100477f30();
  FUN_100478948(&lStack_40);
  return;
}



/* Entry: 10047ad6c; end: 10047ad8f;  */

undefined1  [16] FUN_10047ad6c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1b;
  auVar1._0_8_ = "grpc.client_channel_factory";
  return auVar1;
}



/* Entry: 10047ad90; end: 10047adff;  */

undefined8 FUN_10047ad90(undefined8 param_1)

{
  ulong uStack_28;
  
  func_0x00010047ad8c(&uStack_28,2,"",0);
  FUN_10047bf0c(param_1,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_10084dad0();
  }
  return param_1;
}



/* Entry: 10047ae00; end: 10047b82f;  */

/* WARNING: Removing unreachable block (ram,0x00010047b554) */
/* WARNING: Removing unreachable block (ram,0x00010047b564) */

void FUN_10047ae00(undefined8 *param_1,short *param_2,undefined8 *param_3)

{
  ulong uVar1;
  char cVar2;
  undefined8 *puVar3;
  short sVar4;
  code *pcVar5;
  short *psVar6;
  char *****pppppcVar7;
  char *pcVar8;
  long lVar9;
  short **ppsVar10;
  short *psVar11;
  undefined8 *puVar12;
  short **ppsVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  byte bVar18;
  uint uVar19;
  byte bVar20;
  uint uVar21;
  undefined8 *puStack_278;
  undefined7 uStack_270;
  undefined1 uStack_269;
  undefined7 uStack_268;
  byte bStack_261;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 *puStack_240;
  undefined7 uStack_238;
  undefined1 uStack_231;
  undefined7 uStack_230;
  byte bStack_229;
  undefined8 *puStack_228;
  undefined7 uStack_220;
  undefined1 uStack_219;
  undefined7 uStack_218;
  byte bStack_211;
  char ****ppppcStack_210;
  undefined8 *puStack_208;
  ulong uStack_200;
  undefined8 *puStack_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  undefined7 uStack_1e8;
  byte bStack_1e1;
  undefined8 uStack_1e0;
  short **ppsStack_1d8;
  undefined1 uStack_1d0;
  char cStack_1c9;
  undefined8 uStack_1c8;
  char cStack_1b1;
  undefined1 auStack_1b0 [8];
  undefined8 uStack_1a8;
  undefined8 auStack_198 [3];
  undefined8 uStack_180;
  char cStack_169;
  undefined8 *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  short *psStack_148;
  undefined8 *puStack_140;
  undefined1 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  char ****ppppcStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  short *psStack_100;
  short **ppsStack_f8;
  undefined1 auStack_f0 [32];
  undefined7 uStack_d0;
  byte bStack_c9;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  undefined4 auStack_b8 [8];
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10047ad90(auStack_f0);
  psStack_100 = param_2;
  ppsStack_f8 = (short **)param_3;
  if (param_3 == (undefined8 *)0x0) {
LAB_10047ae74:
    func_0x000104ae0038(&puStack_1f8,"scheme",6,param_2,param_3,"Scheme not found.",0x11);
    FUN_1004862dc(param_1,&puStack_1f8);
    if (((ulong)puStack_1f8 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  else {
    psVar6 = param_2;
    func_0x000107c610ac(param_2,0x3a,param_3);
    puVar12 = (undefined8 *)((long)psVar6 - (long)param_2);
    if (psVar6 == (short *)0x0) {
      puVar12 = (undefined8 *)0xffffffffffffffff;
    }
    uVar15 = (long)puVar12 + 1;
    if (uVar15 < 2) goto LAB_10047ae74;
    puVar16 = param_3;
    if (puVar12 <= param_3) {
      puVar16 = puVar12;
    }
    if ((undefined8 *)0x7ffffffffffffff7 < puVar16) goto LAB_10047b694;
    if (puVar16 < (undefined8 *)0x17) {
      uStack_108 = CONCAT17((char)puVar16,(undefined7)uStack_108);
      pppppcVar7 = &ppppcStack_118;
    }
    else {
      uVar1 = ((ulong)puVar16 & 0xfffffffffffffff8) + 8;
      if (((ulong)puVar16 | 7) != 0x17) {
        uVar1 = (ulong)puVar16 | 7;
      }
      pppppcVar7 = (char *****)(uVar1 + 1);
      func_0x000107c60e20();
      uStack_108 = uVar1 + 1 | 0x8000000000000000;
      ppppcStack_118 = (char ****)pppppcVar7;
      puStack_110 = puVar16;
    }
    func_0x000107c610b8(pppppcVar7,param_2,puVar16);
    *(char *)((long)pppppcVar7 + (long)puVar16) = '\0';
    puVar12 = puStack_110;
    pppppcVar7 = (char *****)ppppcStack_118;
    if (-1 < (long)uStack_108) {
      puVar12 = (undefined8 *)(uStack_108 >> 0x38);
      pppppcVar7 = &ppppcStack_118;
    }
    if (puVar12 != (undefined8 *)0x0) {
      puVar16 = (undefined8 *)0x0;
      do {
        pcVar8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-.";
        func_0x000107c610ac("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-.",
                            (long)*(char *)((long)pppppcVar7 + (long)puVar16),0x41);
        if (pcVar8 == (char *)0x0) {
          if (puVar16 != (undefined8 *)0xffffffffffffffff) {
            func_0x000104ae0038(&puStack_1f8,"scheme",6,param_2,param_3,
                                "Scheme contains invalid characters.",0x23);
            FUN_1004862dc(param_1,&puStack_1f8);
            if (((ulong)puStack_1f8 & 1) != 0) {
              FUN_10084dad0();
            }
            goto LAB_10047b418;
          }
          break;
        }
        puVar16 = (undefined8 *)((long)puVar16 + 1);
      } while (puVar12 != puVar16);
    }
    cVar2 = *(char *)pppppcVar7;
    lVar9 = (long)cVar2;
    if (cVar2 < 0) {
      func_0x000107c60e64(lVar9,0x100);
      uVar19 = (uint)lVar9;
    }
    else {
      uVar19 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (ulong)(uint)(int)cVar2 * 4 + 0x3c) &
               0x100;
    }
    if (uVar19 == 0) {
      func_0x000104ae0038(&puStack_1f8,"scheme",6,param_2,param_3,
                          "Scheme must begin with an alpha character [A-Za-z].",0x33);
      FUN_1004862dc(param_1,&puStack_1f8);
      if (((ulong)puStack_1f8 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      psStack_100 = (short *)((long)psStack_100 + uVar15);
      ppsVar13 = (short **)((long)ppsStack_f8 - uVar15);
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_81 = 0;
      ppsStack_f8 = (short **)((long)ppsVar13 + -2);
      if (ppsVar13 < (short **)0x2) {
        uVar19 = 0;
        puVar12 = (undefined8 *)0x0;
LAB_10047b01c:
        uStack_90 = 0;
        uStack_98 = 0;
        uStack_91 = 0;
        ppsStack_f8 = ppsVar13;
        if (ppsVar13 == (short **)0x0) {
          puVar16 = (undefined8 *)0x0;
          bVar20 = 0;
          bVar18 = (byte)uVar19;
          goto LAB_10047b260;
        }
LAB_10047b090:
        bVar18 = (byte)uVar19;
        ppsVar10 = &psStack_100;
        FUN_10047c08c(ppsVar10,&UNK_10f47a928,0);
        ppsVar13 = ppsStack_f8;
        if (ppsVar10 <= ppsStack_f8) {
          ppsVar13 = ppsVar10;
        }
        FUN_10047c1d4(&puStack_1f8,psStack_100,ppsVar13);
        bVar20 = bStack_1e1;
        puVar16 = puStack_1f8;
        uStack_98 = (undefined7)CONCAT44(uStack_1ec,iStack_1f0);
        uStack_91 = uStack_1ec._3_1_;
        uStack_90 = uStack_1e8;
        uVar21 = (uint)bStack_1e1;
        if (ppsVar10 == (short **)0xffffffffffffffff) {
          psStack_100 = (short *)0x10ef12930;
          goto LAB_10047b260;
        }
        psStack_100 = (short *)((long)psStack_100 + (long)ppsVar10);
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_120 = 0;
        ppsStack_f8 = (short **)((long)ppsStack_f8 - (long)ppsVar10);
        if (ppsStack_f8 == (short **)0x0) goto LAB_10047b268;
        if ((char)*psStack_100 != '?') {
          uStack_c8 = 0;
          uStack_d0 = 0;
          bStack_c9 = 0;
LAB_10047b1b4:
          uStack_c8 = 0;
          bStack_c9 = 0;
          uStack_d0 = 0;
          if ((char)*psStack_100 == '#') {
            psVar6 = (short *)((long)psStack_100 + 1);
            puVar3 = (undefined8 *)((long)ppsStack_f8 - 1);
            psStack_100 = psVar6;
            ppsStack_f8 = (short **)puVar3;
            puVar14 = puVar3;
            psVar11 = psVar6;
            if (puVar3 != (undefined8 *)0x0) {
LAB_10047b1e0:
              sVar4 = *psVar11;
              uVar15 = (ulong)(char)sVar4;
              func_0x000104ae02d0();
              if (((char)sVar4 == '%') || ((uVar15 & 1) != 0)) goto LAB_10047b1f8;
              func_0x000104ae0038(&puStack_1f8,&DAT_10f4318a9,8,param_2,param_3,
                                  "Fragment contains invalid characters.",0x25);
              FUN_1004862dc(param_1,&puStack_1f8);
LAB_10047b670:
              FUN_1004bdf74(&puStack_1f8);
              goto LAB_10047b3f0;
            }
LAB_10047b204:
            FUN_10047c1d4(&puStack_1f8,psVar6,puVar3);
            uStack_d0 = (undefined7)CONCAT44(uStack_1ec,iStack_1f0);
            bStack_c9 = uStack_1ec._3_1_;
            uStack_c8 = uStack_1e8;
            puStack_278 = puStack_1f8;
            bStack_229 = bVar20;
            bStack_261 = bStack_1e1;
            bStack_211 = bVar18;
          }
          else {
LAB_10047b23c:
            uStack_c8 = 0;
            bStack_c9 = 0;
            uStack_d0 = 0;
            bStack_261 = 0;
            puStack_278 = (undefined8 *)0x0;
            bStack_229 = bVar20;
            bStack_211 = bVar18;
          }
          goto LAB_10047b278;
        }
        psVar6 = (short *)((long)psStack_100 + 1);
        puVar3 = (undefined8 *)((long)ppsStack_f8 - 1);
        psStack_100 = psVar6;
        ppsStack_f8 = (short **)puVar3;
        if (puVar3 == (undefined8 *)0x0) {
          puVar14 = (undefined8 *)0xffffffffffffffff;
        }
        else {
          psVar11 = psVar6;
          func_0x000107c610ac(psVar6,0x23,puVar3);
          puVar14 = (undefined8 *)((long)psVar11 - (long)psVar6);
          if (psVar11 == (short *)0x0) {
            puVar14 = (undefined8 *)0xffffffffffffffff;
          }
        }
        if (puVar14 <= puVar3) {
          puVar3 = puVar14;
        }
        psVar11 = psVar6;
        puVar17 = puVar3;
        if (puVar3 != (undefined8 *)0x0) {
          do {
            sVar4 = *psVar11;
            uVar15 = (ulong)(char)sVar4;
            func_0x000104ae02d0();
            if (((char)sVar4 != '%') && ((uVar15 & 1) == 0)) {
              func_0x000104ae0038(&puStack_1f8,"query string",0xc,param_2,param_3,
                                  "Query string contains invalid characters.",0x29);
              FUN_1004862dc(param_1,&puStack_1f8);
              goto LAB_10047b670;
            }
            puVar17 = (undefined8 *)((long)puVar17 - 1);
            psVar11 = (short *)((long)psVar11 + 1);
          } while (puVar17 != (undefined8 *)0x0);
          uStack_138 = 0x26;
          puStack_1f8 = (undefined8 *)0x0;
          iStack_1f0 = 0;
          uStack_1e8 = 0;
          bStack_1e1 = 0;
          uStack_1e0 = 0;
          ppsStack_1d8 = &psStack_148;
          uStack_1d0 = 0x26;
          psStack_148 = psVar6;
          puStack_140 = puVar3;
          FUN_10082b388(&puStack_1f8);
          puVar3 = puStack_140;
          while (iStack_1f0 != 2 || puStack_1f8 != puVar3) {
            uStack_c8 = (undefined7)uStack_1e0;
            uStack_c1 = (undefined1)((ulong)uStack_1e0 >> 0x38);
            uStack_d0 = uStack_1e8;
            bStack_c9 = bStack_1e1;
            uStack_c0 = 0x10000003d;
            auStack_b8[0] = 0;
            func_0x000104acfb9c(&puStack_168,&uStack_d0);
            if (lStack_160 != 0) {
              FUN_10047c1d4(&uStack_d0,puStack_168);
              FUN_10047c1d4(auStack_b8,uStack_158,uStack_150);
              func_0x000104ae0128(&uStack_130,&uStack_d0);
            }
            FUN_10082b388(&puStack_1f8);
          }
          if (puVar14 != (undefined8 *)0xffffffffffffffff) {
            psStack_100 = (short *)((long)psStack_100 + (long)puVar14);
            uStack_c8 = 0;
            uStack_d0 = 0;
            bStack_c9 = 0;
            ppsStack_f8 = (short **)((long)ppsStack_f8 - (long)puVar14);
            if (ppsStack_f8 != (short **)0x0) goto LAB_10047b1b4;
            goto LAB_10047b23c;
          }
          psStack_100 = (short *)0x10ef12930;
          ppsStack_f8 = (short **)0x0;
          goto LAB_10047b268;
        }
        func_0x000104ae0038(&puStack_1f8,&DAT_10f2d43f9,5,param_2,param_3,"Invalid query string.",
                            0x15);
        FUN_1004862dc(param_1,&puStack_1f8);
        if (((ulong)puStack_1f8 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      else {
        if (*psStack_100 != 0x2f2f) {
          puVar12 = (undefined8 *)0x0;
          uVar19 = 0;
          ppsStack_f8 = ppsVar13;
          goto LAB_10047b090;
        }
        psStack_100 = psStack_100 + 1;
        ppsVar13 = &psStack_100;
        FUN_10047c08c(ppsVar13,&UNK_10f47a924,0);
        ppsVar10 = ppsStack_f8;
        if (ppsVar13 <= ppsStack_f8) {
          ppsVar10 = ppsVar13;
        }
        FUN_10047c1d4(&puStack_1f8,psStack_100,ppsVar10);
        uStack_88 = (undefined7)CONCAT44(uStack_1ec,iStack_1f0);
        uStack_81 = uStack_1ec._3_1_;
        uStack_80 = uStack_1e8;
        uVar19 = (uint)bStack_1e1;
        puVar12 = puStack_1f8;
        if (ppsVar13 != (short **)0xffffffffffffffff) {
          psStack_100 = (short *)((long)psStack_100 + (long)ppsVar13);
          ppsVar13 = (short **)((long)ppsStack_f8 - (long)ppsVar13);
          goto LAB_10047b01c;
        }
        bVar20 = 0;
        puVar16 = (undefined8 *)0x0;
        psStack_100 = (short *)0x10ef12930;
        uStack_90 = 0;
        uStack_98 = 0;
        uStack_91 = 0;
        bVar18 = bStack_1e1;
LAB_10047b260:
        ppsStack_f8 = (short **)0x0;
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_120 = 0;
LAB_10047b268:
        bStack_261 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        bStack_c9 = 0;
        puStack_278 = (undefined8 *)0x0;
        bStack_229 = bVar20;
        bStack_211 = bVar18;
LAB_10047b278:
        puStack_208 = puStack_110;
        ppppcStack_210 = ppppcStack_118;
        uStack_200 = uStack_108;
        ppppcStack_118 = (char ****)0x0;
        puStack_110 = (undefined8 *)0x0;
        uStack_108 = 0;
        uStack_220 = uStack_88;
        uStack_219 = uStack_81;
        uStack_218 = uStack_80;
        uStack_88 = 0;
        uStack_81 = 0;
        uStack_80 = 0;
        uStack_230 = uStack_90;
        uStack_238 = uStack_98;
        uStack_231 = uStack_91;
        uStack_98 = 0;
        uStack_91 = 0;
        uStack_90 = 0;
        uStack_258 = uStack_128;
        uStack_260 = uStack_130;
        uStack_250 = uStack_120;
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_120 = 0;
        uStack_268 = uStack_c8;
        uStack_270 = uStack_d0;
        uStack_269 = bStack_c9;
        uStack_d0 = 0;
        bStack_c9 = 0;
        uStack_c8 = 0;
        puStack_240 = puVar16;
        puStack_228 = puVar12;
        FUN_10047c480(&puStack_1f8,&ppppcStack_210,&puStack_228,&puStack_240,&uStack_260,
                      &puStack_278);
        FUN_10047c654(param_1 + 1,&puStack_1f8);
        *param_1 = 0;
        if (cStack_169 < '\0') {
          func_0x000107c60e14(uStack_180);
        }
        puStack_168 = auStack_198;
        FUN_10047c710(&puStack_168);
        func_0x00010047c794(auStack_1b0,uStack_1a8);
        if (cStack_1b1 < '\0') {
          func_0x000107c60e14(uStack_1c8);
        }
        if (cStack_1c9 < '\0') {
          func_0x000107c60e14(uStack_1e0);
        }
        if ((char)bStack_1e1 < '\0') {
          func_0x000107c60e14(puStack_1f8);
        }
        if ((char)bStack_261 < '\0') {
          func_0x000107c60e14(puStack_278);
        }
        puStack_168 = &uStack_260;
        FUN_10047c710(&puStack_168);
        if ((char)bStack_229 < '\0') {
          func_0x000107c60e14(puStack_240);
        }
        if ((char)bStack_211 < '\0') {
          func_0x000107c60e14(puStack_228);
        }
        if ((long)uStack_200 < 0) {
          func_0x000107c60e14(ppppcStack_210);
        }
        uVar21 = 0;
        puVar16 = (undefined8 *)0x0;
        uVar19 = 0;
        puVar12 = (undefined8 *)0x0;
      }
LAB_10047b3f0:
      puStack_1f8 = &uStack_130;
      FUN_10047c710(&puStack_1f8);
      if (uVar21 >> 7 != 0) {
        func_0x000107c60e14(puVar16);
      }
      if (uVar19 >> 7 != 0) {
        func_0x000107c60e14(puVar12);
      }
    }
LAB_10047b418:
    if ((long)uStack_108 < 0) {
      func_0x000107c60e14(ppppcStack_118);
    }
  }
  func_0x00010047c7d4(auStack_f0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  func_0x000107c60e78();
LAB_10047b694:
  func_0x000104a6fa5c(&ppppcStack_118);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10047b6a0);
  (*pcVar5)();
LAB_10047b1f8:
  puVar14 = (undefined8 *)((long)puVar14 - 1);
  psVar11 = (short *)((long)psVar11 + 1);
  if (puVar14 == (undefined8 *)0x0) goto LAB_10047b204;
  goto LAB_10047b1e0;
}



/* Entry: 10047b830; end: 10047bc9f;  */

/* WARNING: Removing unreachable block (ram,0x00010047bbd0) */

long FUN_10047b830(long param_1,undefined8 ****param_2,ulong param_3,long param_4,
                  undefined8 *param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 ****ppppuVar3;
  ulong uVar4;
  long lVar5;
  undefined8 auStack_220 [2];
  char cStack_209;
  undefined8 auStack_208 [2];
  char cStack_1f1;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined7 uStack_1e0;
  char cStack_1d9;
  long lStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined8 ***pppuStack_1c8;
  byte bStack_1b9;
  undefined8 ***pppuStack_140;
  ulong uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 ***pppuStack_128;
  ulong uStack_120;
  byte bStack_111;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_140 = param_2;
  uStack_138 = param_3;
  if (param_4 == 0) {
    func_0x000107c2c390();
    goto LAB_10047bc04;
  }
  FUN_10047ae00(&lStack_1d8,param_2,param_3);
  if (lStack_1d8 == 0) {
    pppuStack_128 = pppuStack_1c8;
    pppuStack_130 = pppuStack_1d0;
    if (-1 < (char)bStack_1b9) {
      pppuStack_128 = (undefined8 ****)(ulong)bStack_1b9;
      pppuStack_130 = &pppuStack_1d0;
    }
    lVar5 = param_1;
    FUN_100474cb0(param_1,&pppuStack_130);
    if ((param_1 + 8 == lVar5) || (lVar5 = *(long *)(lVar5 + 0x30), lVar5 == 0)) goto LAB_10047b890;
    if (lStack_1d8 != 0) {
      func_0x000107c2b9e8(&lStack_1d8);
      goto LAB_10047bc04;
    }
    FUN_10047c8e8(param_4,&pppuStack_1d0);
LAB_10047bae0:
    FUN_10047cac8(&lStack_1d8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return lVar5;
    }
    func_0x000107c60e78();
  }
  else {
LAB_10047b890:
    pppuStack_128 = *(undefined8 *****)(param_1 + 0x20);
    pppuStack_130 = *(undefined8 *****)(param_1 + 0x18);
    if (-1 < (char)*(byte *)(param_1 + 0x2f)) {
      pppuStack_128 = (undefined8 ****)(ulong)*(byte *)(param_1 + 0x2f);
      pppuStack_130 = (undefined8 ****)(param_1 + 0x18);
    }
    pppuStack_98 = param_2;
    uStack_90 = param_3;
    FUN_10047c83c(&uStack_1f0,&pppuStack_130,&pppuStack_98);
    if (*(char *)((long)param_5 + 0x17) < '\0') {
      func_0x000107c60e14(*param_5);
    }
    param_5[1] = uStack_1e8;
    *param_5 = uStack_1f0;
    param_5[2] = CONCAT17(cStack_1d9,uStack_1e0);
    if ((char)*(byte *)((long)param_5 + 0x17) < '\0') {
      puVar2 = (undefined8 *)*param_5;
      uVar4 = param_5[1];
    }
    else {
      uVar4 = (ulong)*(byte *)((long)param_5 + 0x17);
      puVar2 = param_5;
    }
    FUN_10047ae00(&pppuStack_130,puVar2,uVar4);
    if ((undefined8 ****)pppuStack_130 == (undefined8 ****)0x0) {
      uStack_90 = uStack_120;
      pppuStack_98 = pppuStack_128;
      if (-1 < (char)bStack_111) {
        uStack_90 = (ulong)bStack_111;
        pppuStack_98 = &pppuStack_128;
      }
      lVar5 = param_1;
      FUN_100474cb0(param_1,&pppuStack_98);
      if ((param_1 + 8 == lVar5) || (lVar5 = *(long *)(lVar5 + 0x30), lVar5 == 0))
      goto LAB_10047b96c;
      if ((undefined8 ****)pppuStack_130 != (undefined8 ****)0x0) {
        func_0x000107c2b9e8(&pppuStack_130);
        goto LAB_10047bc04;
      }
      FUN_10047c8e8(param_4,&pppuStack_128);
LAB_10047bad8:
      FUN_10047cac8(&pppuStack_130);
      goto LAB_10047bae0;
    }
LAB_10047b96c:
    if (lStack_1d8 != 0) {
      func_0x000107c2b9c0(auStack_208,&lStack_1d8,1);
LAB_10047b9fc:
      if ((undefined8 ****)pppuStack_130 == (undefined8 ****)0x0) {
        FUN_10002b024(auStack_220,"OK");
      }
      else {
        func_0x000107c2b9c0(auStack_220,&pppuStack_130,1);
      }
      pppuStack_98 = &pppuStack_140;
      uStack_90 = 0x1004d504c;
      uStack_88 = auStack_208;
      uStack_80 = 0x100746d14;
      uStack_70 = 0x100746d14;
      puStack_68 = auStack_220;
      uStack_60 = 0x100746d14;
      puStack_78 = param_5;
      FUN_1004d4da0(&uStack_1f0,"Error parsing URI(s). \'%s\':%s; \'%s\':%s",0x26,&pppuStack_98,4);
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resolver/resolver_registry.cc"
                    ,0x89,2,"%s");
      if (cStack_1d9 < '\0') {
        func_0x000107c60e14(uStack_1f0);
      }
      if (cStack_209 < '\0') {
        func_0x000107c60e14(auStack_220[0]);
      }
      if (cStack_1f1 < '\0') {
        func_0x000107c60e14(auStack_208[0]);
      }
LAB_10047bad4:
      lVar5 = 0;
      goto LAB_10047bad8;
    }
    if ((undefined8 ****)pppuStack_130 != (undefined8 ****)0x0) {
      FUN_10002b024(auStack_208,"OK");
      goto LAB_10047b9fc;
    }
    if (param_3 < 0x7ffffffffffffff8) {
      if (param_3 < 0x17) {
        uStack_88 = (undefined8 *)CONCAT17((char)param_3,(undefined7)uStack_88);
        ppppuVar3 = &pppuStack_98;
        if (param_3 != 0) goto LAB_10047bb74;
      }
      else {
        uVar4 = (param_3 & 0xfffffffffffffff8) + 8;
        if ((param_3 | 7) != 0x17) {
          uVar4 = param_3 | 7;
        }
        ppppuVar3 = (undefined8 ****)(uVar4 + 1);
        func_0x000107c60e20();
        uStack_88 = (undefined8 *)(uVar4 + 1 | 0x8000000000000000);
        pppuStack_98 = ppppuVar3;
        uStack_90 = param_3;
LAB_10047bb74:
        func_0x000107c610b8(ppppuVar3,param_2,param_3);
      }
      *(undefined1 *)((long)ppppuVar3 + param_3) = 0;
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resolver/resolver_registry.cc"
                    ,0x90,2,"Don\'t know how to resolve \'%s\' or \'%s\'.");
      goto LAB_10047bad4;
    }
  }
  func_0x000104a6fa5c(&pppuStack_98);
LAB_10047bc04:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10047bc08);
  (*pcVar1)();
}



/* Entry: 10047bca0; end: 10047be4f;  */

/* WARNING: Removing unreachable block (ram,0x00010047bd1c) */
/* WARNING: Removing unreachable block (ram,0x00010047bd24) */
/* WARNING: Removing unreachable block (ram,0x00010047be00) */
/* WARNING: Removing unreachable block (ram,0x00010047bde0) */
/* WARNING: Removing unreachable block (ram,0x00010047bdd0) */
/* WARNING: Removing unreachable block (ram,0x00010047bdf0) */

void FUN_10047bca0(ulong *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong *puVar3;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_a8 = &uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_68 = 0;
  uStack_70 = 0;
  FUN_10047b830();
  if (uStack_50._7_1_ != '\0') {
    param_1[1] = uStack_58;
    *param_1 = uStack_60;
    param_1[2] = uStack_50;
    goto LAB_10047bd98;
  }
  if (0x7ffffffffffffff7 < param_4) {
    func_0x000104a6fa5c(param_1);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10047be2c);
    (*pcVar2)();
  }
  if (param_4 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_4;
    puVar3 = param_1;
    if (param_4 != 0) goto LAB_10047bd84;
  }
  else {
    uVar1 = (param_4 & 0xfffffffffffffff8) + 8;
    if ((param_4 | 7) != 0x17) {
      uVar1 = param_4 | 7;
    }
    puVar3 = (ulong *)(uVar1 + 1);
    func_0x000107c60e20();
    param_1[1] = param_4;
    param_1[2] = uVar1 + 1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
LAB_10047bd84:
    func_0x000107c610b8(puVar3,param_3,param_4);
    param_1 = puVar3;
  }
  *(undefined1 *)((long)param_1 + param_4) = 0;
LAB_10047bd98:
  if (lStack_68 < 0) {
    func_0x000107c60e14(uStack_78);
  }
  puStack_48 = &uStack_90;
  FUN_10047c710(&puStack_48);
  FUN_10047c794(&puStack_a8,uStack_a0);
  return;
}



/* Entry: 10047be50; end: 10047bf0b;  */

/* WARNING: Removing unreachable block (ram,0x00010047bec0) */

ulong * FUN_10047be50(ulong *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  *param_1 = -(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2;
  if (((int)param_2 != 0) && (param_4 != 0)) {
    lVar1 = 0x28;
    func_0x000107c60e20();
    func_0x000107c2b9d0();
    *param_1 = lVar1 + 1;
  }
  return param_1;
}



/* Entry: 10047bf0c; end: 10047bf33;  */

void FUN_10047bf0c(void)

{
  FUN_10047bf34();
  func_0x00010047bf4c();
  return;
}



/* Entry: 10047bf34; end: 10047bf63;  */

void FUN_10047bf34(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  return;
}



/* Entry: 10047bf64; end: 10047bfe3;  */

void FUN_10047bf64(double param_1)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  func_0x000107c51724();
  func_0x000107c609b0();
  dVar2 = param_1;
  func_0x000107c61170(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  func_0x000107c51724();
  func_0x000107c609cc();
  func_0x000107c61170(puVar1);
  dRam00000001137fbca8 = param_1 / dVar2;
  return;
}



/* Entry: 10047bfe4; end: 10047c08b;  */

undefined8 FUN_10047bfe4(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_100456ca0();
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  if (param_2 == 0) {
    puVar2 = puVar1;
    func_0x000107c43668();
    func_0x000107c61180();
    func_0x000107c3ec60();
    func_0x000107c61170(puVar2);
  }
  else {
    func_0x000107c3ec60();
  }
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 10047c08c; end: 10047c11b;  */

long FUN_10047c08c(long *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  lVar4 = *param_1;
  uVar2 = param_1[1];
  pcVar3 = param_2;
  func_0x000107c613d0();
  if (param_3 < uVar2 && pcVar3 != (char *)0x0) {
    pcVar5 = (char *)(lVar4 + param_3);
    pcVar1 = (char *)(lVar4 + uVar2);
    do {
      pcVar7 = pcVar3;
      pcVar8 = param_2;
      do {
        pcVar6 = pcVar5;
        if (*pcVar5 == *pcVar8) goto LAB_10047c100;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + -1;
      } while (pcVar7 != (char *)0x0);
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar1;
    } while (pcVar5 != pcVar1);
LAB_10047c100:
    lVar4 = (long)pcVar6 - lVar4;
    if (pcVar6 == pcVar1) {
      lVar4 = -1;
    }
  }
  else {
    lVar4 = -1;
  }
  return lVar4;
}



/* Entry: 10047c11c; end: 10047c1d3;  */

ulong FUN_10047c11c(long *param_1,char *param_2,long param_3,ulong param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((ulong)param_1[1] < param_4) {
    param_4 = 0xffffffffffffffff;
  }
  else if (param_3 != 0) {
    lVar6 = *param_1;
    lVar3 = lVar6 + param_4;
    lVar1 = lVar6 + param_1[1];
    lVar4 = lVar1 - lVar3;
    lVar5 = lVar1;
    if (param_3 <= lVar4) {
      cVar2 = *param_2;
      do {
        lVar5 = lVar1;
        if (((0xfffffffffffffffe < (ulong)(lVar4 - param_3)) ||
            (func_0x000107c610ac(lVar3,(long)cVar2,(lVar4 - param_3) + 1), lVar3 == 0)) ||
           (lVar4 = lVar3, func_0x000107c610b0(), lVar5 = lVar3, (int)lVar4 == 0)) break;
        lVar3 = lVar3 + 1;
        lVar4 = lVar1 - lVar3;
        lVar5 = lVar1;
      } while (param_3 <= lVar4);
    }
    param_4 = lVar5 - lVar6;
    if (lVar5 == lVar1) {
      param_4 = 0xffffffffffffffff;
    }
  }
  return param_4;
}



/* Entry: 10047c1d4; end: 10047c47f;  */

void FUN_10047c1d4(undefined8 *param_1,undefined *param_2,ulong param_3)

{
  ulong uVar1;
  char ****ppppcVar2;
  code *pcVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined1 **ppuVar6;
  undefined8 *puVar7;
  char cVar8;
  ulong uVar9;
  undefined1 *puStack_100;
  ulong uStack_f8;
  byte bStack_e9;
  char ***pppcStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  undefined *puStack_a0;
  ulong uStack_98;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 0) {
    *(undefined1 *)((long)param_1 + 0x17) = 0;
LAB_10047c3e0:
    *(undefined1 *)((long)param_1 + param_3) = 0;
  }
  else {
    ppuVar5 = &puStack_a0;
    puStack_a0 = param_2;
    uStack_98 = param_3;
    FUN_10047c11c(ppuVar5,"%",1,0);
    if (ppuVar5 == (undefined **)0xffffffffffffffff) {
      if (0x7ffffffffffffff7 < param_3) goto LAB_10047c420;
      if (param_3 < 0x17) {
        *(char *)((long)param_1 + 0x17) = (char)param_3;
        puVar7 = param_1;
      }
      else {
        uVar9 = (param_3 & 0xfffffffffffffff8) + 8;
        if ((param_3 | 7) != 0x17) {
          uVar9 = param_3 | 7;
        }
        puVar7 = (undefined8 *)(uVar9 + 1);
        func_0x000107c60e20();
        param_1[1] = param_3;
        param_1[2] = uVar9 + 1 | 0x8000000000000000;
        *param_1 = puVar7;
      }
      func_0x000107c610b8(puVar7,param_2,param_3);
      param_1 = puVar7;
      goto LAB_10047c3e0;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    pppcStack_e8 = (char ***)0x0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    func_0x000107c60c84(param_1,param_3);
    uVar9 = 0;
    do {
      func_0x000107c60c64(&pppcStack_e8,"");
      cVar8 = param_2[uVar9];
      if ((param_3 < uVar9 + 3) || (cVar8 != '%')) {
LAB_10047c350:
        func_0x000107c60c8c(param_1,(int)cVar8);
      }
      else {
        puStack_a0 = &UNK_10f6025a1;
        uStack_98 = 2;
        puStack_d0 = param_2 + uVar9 + 1;
        uStack_c8 = param_3 - (uVar9 + 1);
        if (1 < uStack_c8) {
          uStack_c8 = 2;
        }
        FUN_10047c83c(&puStack_100,&puStack_a0,&puStack_d0);
        uVar1 = uStack_f8;
        ppuVar6 = (undefined1 **)puStack_100;
        if (-1 < (char)bStack_e9) {
          uVar1 = (ulong)bStack_e9;
          ppuVar6 = &puStack_100;
        }
        func_0x000107c2ba1c(ppuVar6,uVar1,&pppcStack_e8,0);
        if ((int)ppuVar6 == 0) {
          bVar4 = false;
        }
        else {
          uVar1 = uStack_e0;
          if (-1 < (long)uStack_d8) {
            uVar1 = uStack_d8 >> 0x38;
          }
          bVar4 = uVar1 == 1;
        }
        if ((char)bStack_e9 < '\0') {
          func_0x000107c60e14(puStack_100);
        }
        if (!bVar4) {
          cVar8 = param_2[uVar9];
          goto LAB_10047c350;
        }
        ppppcVar2 = (char ****)pppcStack_e8;
        if (-1 < (long)uStack_d8) {
          ppppcVar2 = &pppcStack_e8;
        }
        func_0x000107c60c8c(param_1,(long)*(char *)ppppcVar2);
        uVar9 = uVar9 + 2;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_3);
    if ((long)uStack_d8 < 0) {
      func_0x000107c60e14(pppcStack_e8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
LAB_10047c420:
  func_0x000104a6fa5c(param_1);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10047c42c);
  (*pcVar3)();
}



/* Entry: 10047c480; end: 10047c653;  */

undefined8 *
FUN_10047c480(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             long *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puStack_80;
  ulong uStack_78;
  undefined1 uStack_69;
  undefined8 **ppuStack_68;
  
  uVar10 = param_2[1];
  uVar8 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar10;
  *param_1 = uVar8;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar10 = param_3[1];
  uVar8 = *param_3;
  param_1[5] = param_3[2];
  param_1[4] = uVar10;
  param_1[3] = uVar8;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uVar10 = param_4[1];
  uVar8 = *param_4;
  param_1[8] = param_4[2];
  param_1[7] = uVar10;
  param_1[6] = uVar8;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  plVar4 = param_1 + 0xc;
  *plVar4 = 0;
  param_1[10] = 0;
  puVar3 = param_1 + 9;
  *puVar3 = param_1 + 10;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  lVar9 = *param_5;
  param_1[0xd] = param_5[1];
  *plVar4 = lVar9;
  param_1[0xe] = param_5[2];
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  uVar10 = param_6[1];
  uVar8 = *param_6;
  param_1[0x11] = param_6[2];
  param_1[0x10] = uVar10;
  param_1[0xf] = uVar8;
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  puVar7 = (undefined8 *)*plVar4;
  puVar1 = (undefined8 *)param_1[0xd];
  if (puVar7 != puVar1) {
    do {
      if ((char)*(byte *)((long)puVar7 + 0x2f) < '\0') {
        puVar5 = (undefined8 *)puVar7[3];
        uVar6 = puVar7[4];
      }
      else {
        puVar5 = puVar7 + 3;
        uVar6 = (ulong)*(byte *)((long)puVar7 + 0x2f);
      }
      if ((char)*(byte *)((long)puVar7 + 0x17) < '\0') {
        puStack_80 = (undefined8 *)*puVar7;
        uStack_78 = puVar7[1];
      }
      else {
        uStack_78 = (ulong)*(byte *)((long)puVar7 + 0x17);
        puStack_80 = puVar7;
      }
      puVar2 = puVar3;
      ppuStack_68 = &puStack_80;
      func_0x000107c34f28(puVar3,&puStack_80,&UNK_10dd5b8f9,&ppuStack_68,&uStack_69);
      puVar2[6] = puVar5;
      puVar2[7] = uVar6;
      puVar7 = puVar7 + 6;
    } while (puVar7 != puVar1);
  }
  return param_1;
}



/* Entry: 10047c654; end: 10047c70f;  */

void FUN_10047c654(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar6 = param_2[4];
  uVar5 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar6;
  param_1[3] = uVar5;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  param_1[8] = param_2[8];
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[6] = 0;
  param_1[9] = param_2[9];
  plVar1 = param_2 + 10;
  lVar3 = *plVar1;
  plVar2 = param_1 + 10;
  *plVar2 = lVar3;
  lVar4 = param_2[0xb];
  param_1[0xb] = lVar4;
  if (lVar4 == 0) {
    param_1[9] = plVar2;
  }
  else {
    *(long **)(lVar3 + 0x10) = plVar2;
    param_2[9] = plVar1;
    *plVar1 = 0;
    param_2[0xb] = 0;
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar5 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xe] = param_2[0xe];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  uVar6 = param_2[0x10];
  uVar5 = param_2[0xf];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar6;
  param_1[0xf] = uVar5;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xf] = 0;
  return;
}



/* Entry: 10047c710; end: 10047c793;  */

void FUN_10047c710(long *param_1)

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
        func_0x000104a82d24(plVar3 + 2,lVar2);
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



/* Entry: 10047c794; end: 10047c7fb;  */

void FUN_10047c794(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10047c794(param_1,*param_2);
    FUN_10047c794(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10047c7fc; end: 10047c807;  */

undefined8 * FUN_10047c7fc(undefined8 *param_1)

{
  FUN_10047c808(*param_1);
  return param_1;
}



/* Entry: 10047c808; end: 10047c813;  */

/* WARNING: Possible PIC construction at 0x00010084db18: Changing call to branch */

void FUN_10047c808(ulong param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  if ((param_1 & 1) == 0) {
    return;
  }
  piVar4 = (int *)(param_1 - 1);
  if (*piVar4 != 1) {
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 != 0) {
      return;
    }
  }
  FUN_10084d1dc(param_1 + 0x1f,0);
  if (*(char *)(param_1 + 0x1e) < '\0') {
    piVar4 = *(int **)(param_1 + 7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(piVar4);
  return;
}



/* Entry: 10047c814; end: 10047c83b;  */

undefined8 * FUN_10047c814(undefined8 *param_1)

{
  FUN_10047c808(*param_1);
  return param_1;
}



/* Entry: 10047c83c; end: 10047c8e7;  */

/* WARNING: Possible PIC construction at 0x00010047c898: Changing call to branch */

void FUN_10047c83c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_100066b68(param_1,param_3[1] + param_2[1]);
  puVar1 = (undefined8 *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    puVar1 = param_1;
  }
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    lVar3 = param_3[1];
    if (lVar3 == 0) {
      return;
    }
    uVar2 = *param_3;
  }
  else {
    uVar2 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(puVar1,uVar2,lVar3);
  return;
}



/* Entry: 10047c8e8; end: 10047cac7;  */

undefined8 * FUN_10047c8e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c60e14(*param_1);
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    func_0x000107c60e14(param_1[3]);
  }
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  *(undefined1 *)((long)param_2 + 0x2f) = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    func_0x000107c60e14(param_1[6]);
  }
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  *(undefined1 *)((long)param_2 + 0x47) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  func_0x00010047c9f4(param_1 + 9,param_2 + 9);
  func_0x00010047ca5c(param_1 + 0xc);
  uVar1 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  param_1[0xe] = param_2[0xe];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    func_0x000107c60e14(param_1[0xf]);
  }
  uVar2 = param_2[0x10];
  uVar1 = param_2[0xf];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar2;
  param_1[0xf] = uVar1;
  *(undefined1 *)((long)param_2 + 0x8f) = 0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  return param_1;
}



/* Entry: 10047cac8; end: 10047cb63;  */

ulong * FUN_10047cac8(ulong *param_1)

{
  ulong *puStack_28;
  
  if (*param_1 == 0) {
    if (*(char *)((long)param_1 + 0x97) < '\0') {
      func_0x000107c60e14(param_1[0x10]);
    }
    puStack_28 = param_1 + 0xd;
    FUN_10047c710(&puStack_28);
    FUN_10047c794(param_1 + 10,param_1[0xb]);
    if (*(char *)((long)param_1 + 0x4f) < '\0') {
      func_0x000107c60e14(param_1[7]);
    }
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      func_0x000107c60e14(param_1[4]);
    }
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      func_0x000107c60e14(param_1[1]);
    }
  }
  else if ((*param_1 & 1) != 0) {
    FUN_10084dad0();
  }
  return param_1;
}



/* Entry: 10047cb64; end: 10047cb7b;  */

void FUN_10047cb64(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 10047cb7c; end: 10047cbaf;  */

void FUN_10047cb7c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_3;
  (**(code **)param_3[1])();
  uVar2 = param_3[1];
  *param_2 = uVar1;
  param_2[1] = uVar2;
  return;
}



/* Entry: 10047cbb0; end: 10047cbdb;  */

void FUN_10047cbb0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0 || param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010047cbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 10047cbdc; end: 10047cc17;  */

/* WARNING: Removing unreachable block (ram,0x00010047d070) */
/* WARNING: Removing unreachable block (ram,0x00010047d16c) */

undefined *** FUN_10047cbdc(uint param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined **ppuVar7;
  code *pcVar8;
  char *pcVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined ***pppuVar14;
  char *pcVar15;
  code *pcVar16;
  undefined8 *extraout_x8;
  undefined *puVar17;
  long lVar18;
  long *plVar19;
  undefined8 uStack_180;
  long *plStack_178;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 ***pppuStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  undefined **appuStack_140 [3];
  undefined8 ***pppuStack_128;
  long *plStack_120;
  byte bStack_111;
  undefined8 uStack_108;
  long *plStack_100;
  undefined1 auStack_e0 [8];
  long *plStack_d8;
  undefined1 auStack_d0 [8];
  long *plStack_c8;
  undefined8 ***pppuStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  char cStack_88;
  undefined4 uStack_80;
  long lStack_78;
  
  if (param_1 < 5) {
    return (undefined ***)(&PTR_s_CLIENT_CHANNEL_1107c6ff8)[(int)param_1];
  }
  pcVar9 = "return \"UNKNOWN\"";
  pcVar15 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/channel_stack_type.cc"
  ;
  pcVar16 = (code *)0x38;
  func_0x000104a6e964("return \"UNKNOWN\"");
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar16;
  FUN_10047cbdc(pcVar16);
  FUN_10047d32c(appuStack_140,pcVar8,pcVar16);
  appuStack_140[0] = &PTR_FUN_1107c4a78;
  FUN_10047d3b0(&lStack_98,pcVar15,"grpc.default_authority",0x16);
  if ((cStack_88 == '\0') &&
     (FUN_10047d3b0(&lStack_98,pcVar15,"grpc.ssl_target_name_override",0x1d), ppuVar7 = ppuStack_90,
     lVar18 = lStack_98, cStack_88 != '\0')) {
    if (ppuStack_90 < (undefined **)0x7ffffffffffffff8) {
      if (ppuStack_90 < (undefined **)0x17) {
        uStack_148 = CONCAT17((char)ppuStack_90,(undefined7)uStack_148);
        ppppuVar12 = &pppuStack_158;
        if (ppuStack_90 != (undefined **)0x0) goto LAB_10047cf2c;
      }
      else {
        uVar10 = ((ulong)ppuStack_90 & 0xfffffffffffffff8) + 8;
        if (((ulong)ppuStack_90 | 7) != 0x17) {
          uVar10 = (ulong)ppuStack_90 | 7;
        }
        ppppuVar12 = (undefined8 ****)(uVar10 + 1);
        func_0x000107c60e20();
        uStack_148 = uVar10 + 1 | 0x8000000000000000;
        ppuStack_150 = ppuVar7;
        pppuStack_158 = ppppuVar12;
LAB_10047cf2c:
        func_0x000107c610b8(ppppuVar12,lVar18,ppuVar7);
      }
      *(undefined1 *)((long)ppppuVar12 + (long)ppuVar7) = 0;
      FUN_1004792c0(&pppuStack_c0,pcVar15,"grpc.default_authority",0x16,&pppuStack_158);
      func_0x000100478a50(pcVar15,&pppuStack_c0);
      plVar19 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        plVar2 = plStack_b8 + 1;
        do {
          lVar18 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          func_0x000107c60d68(plVar19);
        }
      }
      if ((long)uStack_148 < 0) {
        func_0x000107c60e14(pppuStack_158);
      }
      goto LAB_10047cca4;
    }
  }
  else {
LAB_10047cca4:
    pcVar8 = pcVar16;
    FUN_10047d420();
    if (((int)pcVar8 != 0) && (FUN_10047d458(), pcVar8 != (code *)0x0)) {
      uStack_168 = *(undefined8 *)pcVar15;
      plStack_160 = *(long **)(pcVar15 + 8);
      if (plStack_160 != (long *)0x0) {
        plVar19 = plStack_160 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *plVar19 = *plVar19 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      (*pcVar8)(&lStack_98,pcVar9,&uStack_168,pcVar16);
      func_0x000100478a50(pcVar15,&lStack_98);
      ppuVar7 = ppuStack_90;
      if (ppuStack_90 != (undefined **)0x0) {
        ppuVar1 = ppuStack_90 + 1;
        do {
          puVar17 = *ppuVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar6) {
            *ppuVar1 = puVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar17 == (undefined *)0x0) {
          (**(code **)(*ppuStack_90 + 0x10))(ppuStack_90);
          func_0x000107c60d68(ppuVar7);
        }
      }
      plVar19 = plStack_160;
      if (plStack_160 != (long *)0x0) {
        plVar2 = plStack_160 + 1;
        do {
          lVar18 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_160 + 0x10))(plStack_160);
          func_0x000107c60d68(plVar19);
        }
      }
    }
    plStack_178 = *(long **)(pcVar15 + 8);
    uStack_180 = *(undefined8 *)pcVar15;
    pcVar15[0] = '\0';
    pcVar15[1] = '\0';
    pcVar15[2] = '\0';
    pcVar15[3] = '\0';
    pcVar15[4] = '\0';
    pcVar15[5] = '\0';
    pcVar15[6] = '\0';
    pcVar15[7] = '\0';
    pcVar15[8] = '\0';
    pcVar15[9] = '\0';
    pcVar15[10] = '\0';
    pcVar15[0xb] = '\0';
    pcVar15[0xc] = '\0';
    pcVar15[0xd] = '\0';
    pcVar15[0xe] = '\0';
    pcVar15[0xf] = '\0';
    FUN_10047d464(appuStack_140,&uStack_180);
    func_0x00010047d48c();
    FUN_10047d4f8();
    plVar19 = plStack_178;
    if (plStack_178 != (long *)0x0) {
      plVar2 = plStack_178 + 1;
      do {
        lVar18 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_178 + 0x10))(plStack_178);
        func_0x000107c60d68(plVar19);
      }
    }
    lVar18 = lRam0000000113815be8;
    if (lRam0000000113815be8 == 0) {
      FUN_100472138();
    }
    uVar10 = lVar18 + 0x18;
    FUN_10047d518(uVar10,appuStack_140);
    if ((uVar10 & 1) == 0) {
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
    }
    else {
      FUN_10047d420();
      if ((int)pcVar16 != 0) {
        uStack_a8 = uStack_108;
        plStack_a0 = plStack_100;
        if (plStack_100 != (long *)0x0) {
          plStack_100 = plStack_100 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plStack_100,0x10);
            if (bVar6) {
              *plStack_100 = *plStack_100 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        puVar11 = &uStack_a8;
        FUN_10047d6c8(puVar11,"grpc.enable_channelz",0x14);
        if (((uint)puVar11 & 0xffff) < 0x100 || ((ulong)puVar11 & 0xff) != 0) {
          puVar11 = &uStack_a8;
          FUN_10047d9fc(puVar11,"grpc.max_channel_trace_event_memory_per_node",0x2c);
          uVar4 = 0x1000;
          if (((ulong)puVar11 & 0xff00000000) != 0) {
            uVar4 = (uint)puVar11 & ((int)(uint)puVar11 >> 0x1f ^ 0xffffffffU);
          }
          puVar11 = &uStack_a8;
          FUN_10047d6c8(puVar11,"grpc.channelz_is_internal_channel",0x21);
          uVar3 = (uint)puVar11 & 0xffff;
          if (uVar3 < 0x101) {
            uVar3 = 0;
          }
          if ((char)bStack_111 < '\0') {
            plVar19 = plStack_120;
            ppppuVar12 = (undefined8 ****)pppuStack_128;
            if ((long *)0x7ffffffffffffff7 < plStack_120) {
              func_0x000104a6fa5c(&pppuStack_c0);
              goto LAB_10047d210;
            }
          }
          else {
            plVar19 = (long *)(ulong)bStack_111;
            ppppuVar12 = &pppuStack_128;
          }
          if (plVar19 < (long *)0x17) {
            uStack_b0 = CONCAT17((char)plVar19,(undefined7)uStack_b0);
            ppppuVar13 = &pppuStack_c0;
            if (plVar19 != (long *)0x0) goto LAB_10047d014;
          }
          else {
            uVar10 = ((ulong)plVar19 & 0x7ffffffffffffff8) + 8;
            if (((ulong)plVar19 | 7) != 0x17) {
              uVar10 = (ulong)plVar19 | 7;
            }
            ppppuVar13 = (undefined8 ****)(uVar10 + 1);
            func_0x000107c60e20();
            uStack_b0 = uVar10 + 1 | 0x8000000000000000;
            pppuStack_c0 = ppppuVar13;
            plStack_b8 = plVar19;
LAB_10047d014:
            func_0x000107c610b8(ppppuVar13,ppppuVar12,plVar19);
          }
          *(undefined1 *)((long)ppppuVar13 + (long)plVar19) = 0;
          lVar18 = 0x160;
          func_0x000107c60e20();
          FUN_10002b024(&lStack_98,&pppuStack_c0);
          FUN_10047dac8(lVar18,&lStack_98,uVar4,(uVar3 & 0xff) != 0);
          FUN_10047e7b4(&lStack_98,"Channel created");
          FUN_10047e7e4(lVar18 + 0x70,1,&lStack_98);
          FUN_10047ef40(auStack_e0,&uStack_a8,"grpc.channelz_is_internal_channel",0x21);
          ppuStack_90 = &PTR_FUN_1107c6f60;
          uStack_80 = 2;
          lStack_98 = lVar18;
          FUN_100477f30(auStack_d0,auStack_e0,"grpc.internal.channelz_channel_node",0x23,&lStack_98)
          ;
          FUN_10047d464(appuStack_140,auStack_d0);
          if (plStack_c8 != (long *)0x0) {
            plVar19 = plStack_c8 + 1;
            do {
              lVar18 = *plVar19;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar6) {
                *plVar19 = lVar18 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
              func_0x000107c60d68(plStack_c8);
            }
          }
          FUN_100478948(&lStack_98);
          if (plStack_d8 != (long *)0x0) {
            plVar19 = plStack_d8 + 1;
            do {
              lVar18 = *plVar19;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar6) {
                *plVar19 = lVar18 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
              func_0x000107c60d68(plStack_d8);
            }
          }
        }
        plVar19 = plStack_a0;
        if (plStack_a0 != (long *)0x0) {
          plVar2 = plStack_a0 + 1;
          do {
            lVar18 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar18 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
            func_0x000107c60d68(plVar19);
          }
        }
      }
      FUN_10047efd0(extraout_x8,appuStack_140);
    }
    pppuVar14 = appuStack_140;
    FUN_100487e4c(pppuVar14);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return pppuVar14;
    }
    func_0x000107c60e78();
  }
  func_0x000104a6fa5c(&pppuStack_158);
LAB_10047d210:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10047d214);
  (*pcVar8)();
}



/* Entry: 10047cc18; end: 10047d32b;  */

/* WARNING: Removing unreachable block (ram,0x00010047d070) */
/* WARNING: Removing unreachable block (ram,0x00010047d16c) */

void FUN_10047cc18(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,code *param_4)

{
  undefined **ppuVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined **ppuVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 uStack_170;
  long *plStack_168;
  undefined8 uStack_158;
  long *plStack_150;
  undefined8 ***pppuStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined **appuStack_130 [3];
  undefined8 ***pppuStack_118;
  long *plStack_110;
  byte bStack_101;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined1 auStack_d0 [8];
  long *plStack_c8;
  undefined1 auStack_c0 [8];
  long *plStack_b8;
  undefined8 ***pppuStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long lStack_88;
  undefined **ppuStack_80;
  char cStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = param_4;
  FUN_10047cbdc(param_4);
  FUN_10047d32c(appuStack_130,pcVar8,param_4);
  appuStack_130[0] = &PTR_FUN_1107c4a78;
  FUN_10047d3b0(&lStack_88,param_3,"grpc.default_authority",0x16);
  if ((cStack_78 == '\0') &&
     (FUN_10047d3b0(&lStack_88,param_3,"grpc.ssl_target_name_override",0x1d), ppuVar7 = ppuStack_80,
     lVar14 = lStack_88, cStack_78 != '\0')) {
    if (ppuStack_80 < (undefined **)0x7ffffffffffffff8) {
      if (ppuStack_80 < (undefined **)0x17) {
        uStack_138 = CONCAT17((char)ppuStack_80,(undefined7)uStack_138);
        ppppuVar11 = &pppuStack_148;
        if (ppuStack_80 != (undefined **)0x0) goto LAB_10047cf2c;
      }
      else {
        uVar9 = ((ulong)ppuStack_80 & 0xfffffffffffffff8) + 8;
        if (((ulong)ppuStack_80 | 7) != 0x17) {
          uVar9 = (ulong)ppuStack_80 | 7;
        }
        ppppuVar11 = (undefined8 ****)(uVar9 + 1);
        func_0x000107c60e20();
        uStack_138 = uVar9 + 1 | 0x8000000000000000;
        ppuStack_140 = ppuVar7;
        pppuStack_148 = ppppuVar11;
LAB_10047cf2c:
        func_0x000107c610b8(ppppuVar11,lVar14,ppuVar7);
      }
      *(undefined1 *)((long)ppppuVar11 + (long)ppuVar7) = 0;
      FUN_1004792c0(&pppuStack_b0,param_3,"grpc.default_authority",0x16,&pppuStack_148);
      func_0x000100478a50(param_3,&pppuStack_b0);
      plVar15 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar2 = plStack_a8 + 1;
        do {
          lVar14 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          func_0x000107c60d68(plVar15);
        }
      }
      if ((long)uStack_138 < 0) {
        func_0x000107c60e14(pppuStack_148);
      }
      goto LAB_10047cca4;
    }
  }
  else {
LAB_10047cca4:
    pcVar8 = param_4;
    FUN_10047d420();
    if (((int)pcVar8 != 0) && (FUN_10047d458(), pcVar8 != (code *)0x0)) {
      uStack_158 = *param_3;
      plStack_150 = (long *)param_3[1];
      if (plStack_150 != (long *)0x0) {
        plVar15 = plStack_150 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *plVar15 = *plVar15 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      (*pcVar8)(&lStack_88,param_2,&uStack_158,param_4);
      func_0x000100478a50(param_3,&lStack_88);
      ppuVar7 = ppuStack_80;
      if (ppuStack_80 != (undefined **)0x0) {
        ppuVar1 = ppuStack_80 + 1;
        do {
          puVar13 = *ppuVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar6) {
            *ppuVar1 = puVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar13 == (undefined *)0x0) {
          (**(code **)(*ppuStack_80 + 0x10))(ppuStack_80);
          func_0x000107c60d68(ppuVar7);
        }
      }
      plVar15 = plStack_150;
      if (plStack_150 != (long *)0x0) {
        plVar2 = plStack_150 + 1;
        do {
          lVar14 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_150 + 0x10))(plStack_150);
          func_0x000107c60d68(plVar15);
        }
      }
    }
    plStack_168 = (long *)param_3[1];
    uStack_170 = *param_3;
    *param_3 = 0;
    param_3[1] = 0;
    FUN_10047d464(appuStack_130,&uStack_170);
    func_0x00010047d48c();
    FUN_10047d4f8();
    plVar15 = plStack_168;
    if (plStack_168 != (long *)0x0) {
      plVar2 = plStack_168 + 1;
      do {
        lVar14 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_168 + 0x10))(plStack_168);
        func_0x000107c60d68(plVar15);
      }
    }
    lVar14 = lRam0000000113815be8;
    if (lRam0000000113815be8 == 0) {
      FUN_100472138();
    }
    uVar9 = lVar14 + 0x18;
    FUN_10047d518(uVar9,appuStack_130);
    if ((uVar9 & 1) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      FUN_10047d420();
      if ((int)param_4 != 0) {
        uStack_98 = uStack_f8;
        plStack_90 = plStack_f0;
        if (plStack_f0 != (long *)0x0) {
          plStack_f0 = plStack_f0 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plStack_f0,0x10);
            if (bVar6) {
              *plStack_f0 = *plStack_f0 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        puVar10 = &uStack_98;
        FUN_10047d6c8(puVar10,"grpc.enable_channelz",0x14);
        if (((uint)puVar10 & 0xffff) < 0x100 || ((ulong)puVar10 & 0xff) != 0) {
          puVar10 = &uStack_98;
          FUN_10047d9fc(puVar10,"grpc.max_channel_trace_event_memory_per_node",0x2c);
          uVar4 = 0x1000;
          if (((ulong)puVar10 & 0xff00000000) != 0) {
            uVar4 = (uint)puVar10 & ((int)(uint)puVar10 >> 0x1f ^ 0xffffffffU);
          }
          puVar10 = &uStack_98;
          FUN_10047d6c8(puVar10,"grpc.channelz_is_internal_channel",0x21);
          uVar3 = (uint)puVar10 & 0xffff;
          if (uVar3 < 0x101) {
            uVar3 = 0;
          }
          if ((char)bStack_101 < '\0') {
            plVar15 = plStack_110;
            ppppuVar11 = (undefined8 ****)pppuStack_118;
            if ((long *)0x7ffffffffffffff7 < plStack_110) {
              func_0x000104a6fa5c(&pppuStack_b0);
              goto LAB_10047d210;
            }
          }
          else {
            plVar15 = (long *)(ulong)bStack_101;
            ppppuVar11 = &pppuStack_118;
          }
          if (plVar15 < (long *)0x17) {
            uStack_a0 = CONCAT17((char)plVar15,(undefined7)uStack_a0);
            ppppuVar12 = &pppuStack_b0;
            if (plVar15 != (long *)0x0) goto LAB_10047d014;
          }
          else {
            uVar9 = ((ulong)plVar15 & 0x7ffffffffffffff8) + 8;
            if (((ulong)plVar15 | 7) != 0x17) {
              uVar9 = (ulong)plVar15 | 7;
            }
            ppppuVar12 = (undefined8 ****)(uVar9 + 1);
            func_0x000107c60e20();
            uStack_a0 = uVar9 + 1 | 0x8000000000000000;
            pppuStack_b0 = ppppuVar12;
            plStack_a8 = plVar15;
LAB_10047d014:
            func_0x000107c610b8(ppppuVar12,ppppuVar11,plVar15);
          }
          *(undefined1 *)((long)ppppuVar12 + (long)plVar15) = 0;
          lVar14 = 0x160;
          func_0x000107c60e20();
          FUN_10002b024(&lStack_88,&pppuStack_b0);
          FUN_10047dac8(lVar14,&lStack_88,uVar4,(uVar3 & 0xff) != 0);
          FUN_10047e7b4(&lStack_88,"Channel created");
          FUN_10047e7e4(lVar14 + 0x70,1,&lStack_88);
          FUN_10047ef40(auStack_d0,&uStack_98,"grpc.channelz_is_internal_channel",0x21);
          ppuStack_80 = &PTR_FUN_1107c6f60;
          uStack_70 = 2;
          lStack_88 = lVar14;
          FUN_100477f30(auStack_c0,auStack_d0,"grpc.internal.channelz_channel_node",0x23,&lStack_88)
          ;
          FUN_10047d464(appuStack_130,auStack_c0);
          if (plStack_b8 != (long *)0x0) {
            plVar15 = plStack_b8 + 1;
            do {
              lVar14 = *plVar15;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
              func_0x000107c60d68(plStack_b8);
            }
          }
          FUN_100478948(&lStack_88);
          if (plStack_c8 != (long *)0x0) {
            plVar15 = plStack_c8 + 1;
            do {
              lVar14 = *plVar15;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
              func_0x000107c60d68(plStack_c8);
            }
          }
        }
        plVar15 = plStack_90;
        if (plStack_90 != (long *)0x0) {
          plVar2 = plStack_90 + 1;
          do {
            lVar14 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_90 + 0x10))(plStack_90);
            func_0x000107c60d68(plVar15);
          }
        }
      }
      FUN_10047efd0(param_1,appuStack_130);
    }
    FUN_100487e4c(appuStack_130);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    func_0x000107c60e78();
  }
  func_0x000104a6fa5c(&pppuStack_148);
LAB_10047d210:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10047d214);
  (*pcVar8)();
}



/* Entry: 10047d32c; end: 10047d3a7;  */

undefined8 * FUN_10047d32c(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = &PTR____cxa_pure_virtual_1107c3390;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  FUN_10002b024(param_1 + 3,"unknown");
  param_1[6] = 0;
  FUN_10047d3a8(param_1 + 7);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



/* Entry: 10047d3a8; end: 10047d3af;  */

void FUN_10047d3a8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10047d3b0; end: 10047d41f;  */

void FUN_10047d3b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  FUN_100477d50(param_2,&uStack_30);
  if ((param_2 == (undefined8 *)0x0) || (*(int *)(param_2 + 3) != 1)) {
    uVar3 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    uVar1 = param_2[1];
    puVar2 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar2 = param_2;
    }
    *param_1 = puVar2;
    param_1[1] = uVar1;
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar3;
  return;
}



/* Entry: 10047d420; end: 10047d457;  */

ulong FUN_10047d420(uint param_1)

{
  if (param_1 < 5) {
    return (ulong)(0xfU >> (ulong)(param_1 & 0x1f) & 1);
  }
  func_0x000104a6e964("return true;",
                      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/channel_stack_type.cc"
                      ,0x26);
  return uRam00000001136a1e40;
}



/* Entry: 10047d458; end: 10047d463;  */

undefined8 FUN_10047d458(void)

{
  return uRam00000001136a1e40;
}



/* Entry: 10047d464; end: 10047d4f7;  */

long FUN_10047d464(long param_1)

{
  func_0x000100478a50(param_1 + 0x38);
  return param_1;
}



/* Entry: 10047d4f8; end: 10047d517;  */

/* WARNING: Possible PIC construction at 0x00010047d684: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010047d688) */

void FUN_10047d4f8(long param_1,long ****param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  long ****pppplVar3;
  long ****pppplVar4;
  long ****pppplVar5;
  long ***ppplVar6;
  long ****pppplVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long unaff_x22;
  long ***ppplVar13;
  undefined1 **ppuVar14;
  undefined8 uVar15;
  undefined1 auStack_50 [8];
  long ***ppplStack_48;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    *(long *****)(param_1 + 0x30) = param_2;
    return;
  }
  func_0x000107c2c228();
  uStack_18 = 0x10047d518;
  ppuVar14 = &puStack_20;
  puVar9 = (undefined8 *)(param_1 + (ulong)*(uint *)(param_2 + 2) * 0x18);
  pppplVar4 = (long ****)*puVar9;
  pppplVar12 = (long ****)puVar9[1];
  pppplVar5 = param_2;
  puStack_20 = &stack0xfffffffffffffff0;
  if (pppplVar4 != pppplVar12) {
    do {
      pppplVar11 = pppplVar4 + 4;
      pppplVar3 = (long ****)pppplVar4[3];
      ppplStack_48 = (long ***)param_2;
      if (pppplVar3 == (long ****)0x0) {
        uVar15 = 0x10047d598;
        func_0x000104a71f98();
        puVar2 = auStack_50;
        goto SUB_10047d598;
      }
      pppplVar5 = &ppplStack_48;
      (*(code *)(*pppplVar3)[6])();
      pppplVar4 = pppplVar11;
    } while ((int)pppplVar3 != 0 && pppplVar11 != pppplVar12);
  }
  return;
SUB_10047d598:
  pppplVar7 = pppplVar5;
  pppplVar4 = pppplVar3;
  *(long *)(puVar2 + -0x30) = unaff_x22;
  *(long *****)(puVar2 + -0x28) = pppplVar11;
  *(long *****)(puVar2 + -0x20) = pppplVar12;
  *(long *****)(puVar2 + -0x18) = param_2;
  *(undefined1 ***)(puVar2 + -0x10) = ppuVar14;
  *(undefined8 *)(puVar2 + -8) = uVar15;
  pppplVar5 = pppplVar4 + 0xb;
  ppplVar13 = pppplVar4[10];
  if (ppplVar13 < *pppplVar5) {
    pppplVar3 = (long ****)(ppplVar13 + 1);
    *ppplVar13 = (long **)pppplVar7;
LAB_10047d654:
    pppplVar4[10] = (long ***)pppplVar3;
    return;
  }
  pppplVar12 = pppplVar4 + 9;
  unaff_x22 = (long)ppplVar13 - (long)*pppplVar12 >> 3;
  uVar1 = unaff_x22 + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar8 = (long)*pppplVar5 - (long)*pppplVar12;
    uVar10 = (long)uVar8 >> 2;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 == 0) {
      pppplVar5 = (long ****)0x0;
    }
    else {
      FUN_10047d694();
    }
    pppplVar11 = pppplVar5 + unaff_x22;
    pppplVar3 = pppplVar11 + 1;
    *pppplVar11 = (long ***)pppplVar7;
    ppplVar13 = pppplVar4[9];
    ppplVar6 = pppplVar4[10];
    if (ppplVar6 != ppplVar13) {
      do {
        ppplVar6 = ppplVar6 + -1;
        pppplVar11 = pppplVar11 + -1;
        *pppplVar11 = (long ***)*ppplVar6;
      } while (ppplVar6 != ppplVar13);
      ppplVar6 = *pppplVar12;
    }
    pppplVar4[9] = (long ***)pppplVar11;
    pppplVar4[10] = (long ***)pppplVar3;
    pppplVar4[0xb] = (long ***)(pppplVar5 + uVar10);
    if (ppplVar6 != (long ***)0x0) {
      func_0x000107c60e14();
    }
    goto LAB_10047d654;
  }
  pppplVar5 = pppplVar7;
  func_0x000104a80634(pppplVar12);
  ppuVar14 = (undefined1 **)(puVar2 + -0x40);
  *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
  *(code **)(puVar2 + -0x38) = FUN_10047d670;
  uVar15 = 0x10047d688;
  puVar2 = puVar2 + -0x40;
  pppplVar3 = (long ****)*pppplVar5;
  pppplVar5 = (long ****)&PTR_FUN_1107c0f78;
  param_2 = pppplVar4;
  pppplVar11 = pppplVar7;
  goto SUB_10047d598;
}



/* Entry: 10047d518; end: 10047d66f;  */

/* WARNING: Possible PIC construction at 0x00010047d684: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010047d688) */

void FUN_10047d518(long param_1,long ****param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  long ****pppplVar3;
  long ****pppplVar4;
  long ****pppplVar5;
  long ***ppplVar6;
  long ****pppplVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long unaff_x22;
  long ***ppplVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined1 auStack_40 [8];
  long ***ppplStack_38;
  
  puVar14 = &stack0xfffffffffffffff0;
  puVar9 = (undefined8 *)(param_1 + (ulong)*(uint *)(param_2 + 2) * 0x18);
  pppplVar4 = (long ****)*puVar9;
  pppplVar12 = (long ****)puVar9[1];
  pppplVar5 = param_2;
  if (pppplVar4 != pppplVar12) {
    do {
      pppplVar11 = pppplVar4 + 4;
      pppplVar3 = (long ****)pppplVar4[3];
      ppplStack_38 = (long ***)param_2;
      if (pppplVar3 == (long ****)0x0) {
        uVar15 = 0x10047d598;
        func_0x000104a71f98();
        puVar2 = auStack_40;
        goto SUB_10047d598;
      }
      pppplVar5 = &ppplStack_38;
      (*(code *)(*pppplVar3)[6])();
      pppplVar4 = pppplVar11;
    } while ((int)pppplVar3 != 0 && pppplVar11 != pppplVar12);
  }
  return;
SUB_10047d598:
  pppplVar7 = pppplVar5;
  pppplVar4 = pppplVar3;
  *(long *)(puVar2 + -0x30) = unaff_x22;
  *(long *****)(puVar2 + -0x28) = pppplVar11;
  *(long *****)(puVar2 + -0x20) = pppplVar12;
  *(long *****)(puVar2 + -0x18) = param_2;
  *(undefined1 **)(puVar2 + -0x10) = puVar14;
  *(undefined8 *)(puVar2 + -8) = uVar15;
  pppplVar5 = pppplVar4 + 0xb;
  ppplVar13 = pppplVar4[10];
  if (ppplVar13 < *pppplVar5) {
    pppplVar3 = (long ****)(ppplVar13 + 1);
    *ppplVar13 = (long **)pppplVar7;
LAB_10047d654:
    pppplVar4[10] = (long ***)pppplVar3;
    return;
  }
  pppplVar12 = pppplVar4 + 9;
  unaff_x22 = (long)ppplVar13 - (long)*pppplVar12 >> 3;
  uVar1 = unaff_x22 + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar8 = (long)*pppplVar5 - (long)*pppplVar12;
    uVar10 = (long)uVar8 >> 2;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 == 0) {
      pppplVar5 = (long ****)0x0;
    }
    else {
      FUN_10047d694();
    }
    pppplVar11 = pppplVar5 + unaff_x22;
    pppplVar3 = pppplVar11 + 1;
    *pppplVar11 = (long ***)pppplVar7;
    ppplVar13 = pppplVar4[9];
    ppplVar6 = pppplVar4[10];
    if (ppplVar6 != ppplVar13) {
      do {
        ppplVar6 = ppplVar6 + -1;
        pppplVar11 = pppplVar11 + -1;
        *pppplVar11 = (long ***)*ppplVar6;
      } while (ppplVar6 != ppplVar13);
      ppplVar6 = *pppplVar12;
    }
    pppplVar4[9] = (long ***)pppplVar11;
    pppplVar4[10] = (long ***)pppplVar3;
    pppplVar4[0xb] = (long ***)(pppplVar5 + uVar10);
    if (ppplVar6 != (long ***)0x0) {
      func_0x000107c60e14();
    }
    goto LAB_10047d654;
  }
  pppplVar5 = pppplVar7;
  func_0x000104a80634(pppplVar12);
  puVar14 = puVar2 + -0x40;
  *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
  *(code **)(puVar2 + -0x38) = FUN_10047d670;
  uVar15 = 0x10047d688;
  puVar2 = puVar2 + -0x40;
  pppplVar3 = (long ****)*pppplVar5;
  pppplVar5 = (long ****)&PTR_FUN_1107c0f78;
  param_2 = pppplVar4;
  pppplVar11 = pppplVar7;
  goto SUB_10047d598;
}



/* Entry: 10047d670; end: 10047d693;  */

undefined8 FUN_10047d670(undefined8 param_1,undefined8 *param_2)

{
  func_0x00010047d598(*param_2,&PTR_FUN_1107c0f78);
  return 1;
}



/* Entry: 10047d694; end: 10047d6c7;  */

undefined1  [16] FUN_10047d694(uint *param_1,undefined8 ******param_2,ulong param_3)

{
  undefined8 ****ppppuVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  undefined8 ******ppppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ******ppppppuVar9;
  char *pcVar10;
  undefined **ppuVar11;
  uint uVar12;
  int iVar13;
  undefined8 ***pppuVar14;
  undefined8 *****pppppuVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 ***pppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 *****pppppuStack_b0;
  undefined8 *****pppppuStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined8 *****pppppuStack_90;
  ulong uStack_88;
  undefined8 *****pppppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar6 = (long)param_2 << 3;
    func_0x000107c60e20(lVar6);
    auVar16._8_8_ = param_2;
    auVar16._0_8_ = lVar6;
    return auVar16;
  }
  func_0x000104a7757c();
  pcStack_28 = FUN_10047d6c8;
  ppppppuVar9 = &pppppuStack_78;
  pppppuStack_78 = param_2;
  uStack_70 = param_3;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_100477d50();
  if (param_1 != (uint *)0x0) {
    if (param_1[6] == 0) {
      uVar12 = *param_1;
      if ((uVar12 != 0) && (uVar12 != 1)) {
        if (0x7ffffffffffffff7 < param_3) goto LAB_10047d8a8;
        if (param_3 < 0x17) {
          uStack_68 = CONCAT17((char)param_3,(undefined7)uStack_68);
          ppppppuVar9 = &pppppuStack_78;
          if (param_3 != 0) goto LAB_10047d828;
        }
        else {
          uVar2 = (param_3 & 0xfffffffffffffff8) + 8;
          if ((param_3 | 7) != 0x17) {
            uVar2 = param_3 | 7;
          }
          ppppppuVar9 = (undefined8 ******)(uVar2 + 1);
          func_0x000107c60e20();
          uStack_68 = uVar2 + 1 | 0x8000000000000000;
          pppppuStack_78 = ppppppuVar9;
          uStack_70 = param_3;
LAB_10047d828:
          func_0x000107c610b8(ppppppuVar9,param_2,param_3);
        }
        *(undefined1 *)((long)ppppppuVar9 + param_3) = 0;
        pppppuStack_90 = pppppuStack_78;
        if (-1 < (long)uStack_68) {
          pppppuStack_90 = &pppppuStack_78;
        }
        uStack_88 = (ulong)*param_1;
        ppppppuVar9 = (undefined8 ******)0xb4;
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                      ,0xb4,2,"%s treated as bool but set to %d (assuming true)");
        if ((long)uStack_68 < 0) {
          func_0x000107c60e14(pppppuStack_78);
        }
        uVar12 = 1;
      }
      iVar13 = 1;
      goto LAB_10047d88c;
    }
    if (0x7ffffffffffffff7 < param_3) {
LAB_10047d8a8:
      ppppppuVar7 = &pppppuStack_78;
      func_0x000104a6fa5c();
      if ((long)uStack_68 < 0) {
        func_0x000107c60e14(pppppuStack_78);
      }
      func_0x000107c60bd8(ppppppuVar7);
      uVar12 = (uint)&pppuStack_c0;
      ppppuVar8 = &pppuStack_c0;
      pcStack_98 = FUN_10047d8d0;
      pppppuVar15 = *ppppppuVar9;
      pppuStack_c0 = pppppuVar15[7];
      pppuStack_b8 = pppppuVar15[8];
      if ((undefined8 ****)pppuStack_b8 != (undefined8 ****)0x0) {
        ppppuVar1 = (undefined8 ****)(pppuStack_b8 + 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
          if (bVar4) {
            *ppppuVar1 = (undefined8 ***)((long)*ppppuVar1 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcVar10 = "grpc.minimal_stack";
      pppppuStack_b0 = param_2;
      pppppuStack_a8 = ppppppuVar7;
      ppuStack_a0 = &puStack_30;
      FUN_10047d6c8(&pppuStack_c0,"grpc.minimal_stack",0x12);
      uVar12 = uVar12 & 0xffff;
      if (uVar12 < 0x101) {
        uVar12 = 0;
      }
      if ((uVar12 & 0xff) == 0) {
        pcVar10 = "grpc.client_idle_timeout_ms";
        func_0x00010047da54(&pppuStack_c0,"grpc.client_idle_timeout_ms",0x1b);
        if ((((ulong)pcVar10 & 0xff) != 0) && (ppppuVar8 != (undefined8 ****)0x7fffffffffffffff)) {
          ppuVar11 = &PTR_DAT_1107c0730;
          FUN_100560688(pppppuVar15,&PTR_DAT_1107c0730);
          pcVar10 = (char *)ppuVar11;
        }
      }
      pppuVar5 = pppuStack_b8;
      if ((undefined8 ****)pppuStack_b8 != (undefined8 ****)0x0) {
        ppppuVar8 = (undefined8 ****)(pppuStack_b8 + 1);
        do {
          pppuVar14 = *ppppuVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppuVar8,0x10);
          if (bVar4) {
            *ppppuVar8 = (undefined8 ***)((long)pppuVar14 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (pppuVar14 == (undefined8 ***)0x0) {
          (*(code *)(*pppuStack_b8)[2])(pppuStack_b8);
          func_0x000107c60d68(pppuVar5);
        }
      }
      auVar18._8_8_ = pcVar10;
      auVar18._0_8_ = 1;
      return auVar18;
    }
    if (param_3 < 0x17) {
      uStack_68 = CONCAT17((char)param_3,(undefined7)uStack_68);
      ppppppuVar9 = &pppppuStack_78;
      if (param_3 != 0) goto LAB_10047d794;
    }
    else {
      uVar2 = (param_3 & 0xfffffffffffffff8) + 8;
      if ((param_3 | 7) != 0x17) {
        uVar2 = param_3 | 7;
      }
      ppppppuVar9 = (undefined8 ******)(uVar2 + 1);
      func_0x000107c60e20();
      uStack_68 = uVar2 + 1 | 0x8000000000000000;
      pppppuStack_78 = ppppppuVar9;
      uStack_70 = param_3;
LAB_10047d794:
      func_0x000107c610b8(ppppppuVar9,param_2,param_3);
    }
    *(undefined1 *)((long)ppppppuVar9 + param_3) = 0;
    pppppuStack_90 = pppppuStack_78;
    if (-1 < (long)uStack_68) {
      pppppuStack_90 = &pppppuStack_78;
    }
    ppppppuVar9 = (undefined8 ******)0xaa;
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                  ,0xaa,2,"%s ignored: it must be an integer");
    if ((long)uStack_68 < 0) {
      func_0x000107c60e14(pppppuStack_78);
    }
  }
  uVar12 = 0;
  iVar13 = 0;
LAB_10047d88c:
  auVar17._4_4_ = 0;
  auVar17._0_4_ = uVar12 | iVar13 << 8;
  auVar17._8_8_ = ppppppuVar9;
  return auVar17;
}



/* Entry: 10047d6c8; end: 10047d8cf;  */

uint FUN_10047d6c8(uint *param_1,undefined8 ******param_2,ulong param_3)

{
  undefined8 ****ppppuVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined8 ***pppuVar5;
  undefined8 ******ppppppuVar6;
  undefined8 ******ppppppuVar7;
  undefined8 ****ppppuVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  undefined8 ***pppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 ***pppuStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 *****pppppuStack_90;
  undefined8 *****pppppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 *****pppppuStack_70;
  ulong uStack_68;
  undefined8 *****pppppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  ppppppuVar6 = &pppppuStack_58;
  pppppuStack_58 = param_2;
  uStack_50 = param_3;
  FUN_100477d50();
  if (param_1 != (uint *)0x0) {
    if (param_1[6] == 0) {
      uVar10 = *param_1;
      if ((uVar10 != 0) && (uVar10 != 1)) {
        if (0x7ffffffffffffff7 < param_3) goto LAB_10047d8a8;
        if (param_3 < 0x17) {
          uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
          ppppppuVar6 = &pppppuStack_58;
          if (param_3 != 0) goto LAB_10047d828;
        }
        else {
          uVar2 = (param_3 & 0xfffffffffffffff8) + 8;
          if ((param_3 | 7) != 0x17) {
            uVar2 = param_3 | 7;
          }
          ppppppuVar6 = (undefined8 ******)(uVar2 + 1);
          func_0x000107c60e20();
          uStack_48 = uVar2 + 1 | 0x8000000000000000;
          pppppuStack_58 = ppppppuVar6;
          uStack_50 = param_3;
LAB_10047d828:
          func_0x000107c610b8(ppppppuVar6,param_2,param_3);
        }
        *(undefined1 *)((long)ppppppuVar6 + param_3) = 0;
        pppppuStack_70 = pppppuStack_58;
        if (-1 < (long)uStack_48) {
          pppppuStack_70 = &pppppuStack_58;
        }
        uStack_68 = (ulong)*param_1;
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                      ,0xb4,2,"%s treated as bool but set to %d (assuming true)");
        if ((long)uStack_48 < 0) {
          func_0x000107c60e14(pppppuStack_58);
        }
        uVar10 = 1;
      }
      iVar11 = 1;
      goto LAB_10047d88c;
    }
    if (0x7ffffffffffffff7 < param_3) {
LAB_10047d8a8:
      ppppppuVar7 = &pppppuStack_58;
      func_0x000104a6fa5c();
      if ((long)uStack_48 < 0) {
        func_0x000107c60e14(pppppuStack_58);
      }
      func_0x000107c60bd8(ppppppuVar7);
      uVar10 = (uint)&pppuStack_a0;
      ppppuVar8 = &pppuStack_a0;
      pcStack_78 = FUN_10047d8d0;
      pppppuVar13 = *ppppppuVar6;
      pppuStack_a0 = pppppuVar13[7];
      pppuStack_98 = pppppuVar13[8];
      if ((undefined8 ****)pppuStack_98 != (undefined8 ****)0x0) {
        ppppuVar1 = (undefined8 ****)(pppuStack_98 + 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
          if (bVar4) {
            *ppppuVar1 = (undefined8 ***)((long)*ppppuVar1 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pppppuStack_90 = param_2;
      pppppuStack_88 = ppppppuVar7;
      puStack_80 = &stack0xfffffffffffffff0;
      FUN_10047d6c8(&pppuStack_a0,"grpc.minimal_stack",0x12);
      uVar10 = uVar10 & 0xffff;
      if (uVar10 < 0x101) {
        uVar10 = 0;
      }
      if ((uVar10 & 0xff) == 0) {
        pcVar9 = "grpc.client_idle_timeout_ms";
        func_0x00010047da54(&pppuStack_a0,"grpc.client_idle_timeout_ms",0x1b);
        if ((((ulong)pcVar9 & 0xff) != 0) && (ppppuVar8 != (undefined8 ****)0x7fffffffffffffff)) {
          FUN_100560688(pppppuVar13,&PTR_DAT_1107c0730);
        }
      }
      pppuVar5 = pppuStack_98;
      if ((undefined8 ****)pppuStack_98 != (undefined8 ****)0x0) {
        ppppuVar8 = (undefined8 ****)(pppuStack_98 + 1);
        do {
          pppuVar12 = *ppppuVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppuVar8,0x10);
          if (bVar4) {
            *ppppuVar8 = (undefined8 ***)((long)pppuVar12 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (pppuVar12 == (undefined8 ***)0x0) {
          (*(code *)(*pppuStack_98)[2])(pppuStack_98);
          func_0x000107c60d68(pppuVar5);
        }
      }
      return 1;
    }
    if (param_3 < 0x17) {
      uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
      ppppppuVar6 = &pppppuStack_58;
      if (param_3 != 0) goto LAB_10047d794;
    }
    else {
      uVar2 = (param_3 & 0xfffffffffffffff8) + 8;
      if ((param_3 | 7) != 0x17) {
        uVar2 = param_3 | 7;
      }
      ppppppuVar6 = (undefined8 ******)(uVar2 + 1);
      func_0x000107c60e20();
      uStack_48 = uVar2 + 1 | 0x8000000000000000;
      pppppuStack_58 = ppppppuVar6;
      uStack_50 = param_3;
LAB_10047d794:
      func_0x000107c610b8(ppppppuVar6,param_2,param_3);
    }
    *(undefined1 *)((long)ppppppuVar6 + param_3) = 0;
    pppppuStack_70 = pppppuStack_58;
    if (-1 < (long)uStack_48) {
      pppppuStack_70 = &pppppuStack_58;
    }
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                  ,0xaa,2,"%s ignored: it must be an integer");
    if ((long)uStack_48 < 0) {
      func_0x000107c60e14(pppppuStack_58);
    }
  }
  uVar10 = 0;
  iVar11 = 0;
LAB_10047d88c:
  return uVar10 | iVar11 << 8;
}



/* Entry: 10047d8d0; end: 10047d9fb;  */

undefined8 FUN_10047d8d0(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uStack_30;
  long *plStack_28;
  
  uVar5 = (uint)&uStack_30;
  puVar6 = &uStack_30;
  lVar8 = *param_2;
  uStack_30 = *(undefined8 *)(lVar8 + 0x38);
  plStack_28 = *(long **)(lVar8 + 0x40);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10047d6c8(&uStack_30,"grpc.minimal_stack",0x12);
  uVar5 = uVar5 & 0xffff;
  if (uVar5 < 0x101) {
    uVar5 = 0;
  }
  if ((uVar5 & 0xff) == 0) {
    pcVar7 = "grpc.client_idle_timeout_ms";
    func_0x00010047da54(&uStack_30,"grpc.client_idle_timeout_ms",0x1b);
    if ((((ulong)pcVar7 & 0xff) != 0) && (puVar6 != (undefined8 *)0x7fffffffffffffff)) {
      FUN_100560688(lVar8,&PTR_DAT_1107c0730);
    }
  }
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      func_0x000107c60d68(plVar1);
    }
  }
  return 1;
}



/* Entry: 10047d9fc; end: 10047dac7;  */

ulong FUN_10047d9fc(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_100477d50(param_1,&uStack_20);
  if ((param_1 == (uint *)0x0) || (param_1[6] != 0)) {
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = *param_1 & 0xffffff00;
    uVar1 = *param_1 & 0xff;
    uVar3 = 0x100000000;
  }
  return uVar3 | (uVar2 | uVar1);
}



/* Entry: 10047dac8; end: 10047dacb;  */

undefined8 *
FUN_10047dac8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100033dac(&uStack_50,*param_2,param_2[1]);
  }
  else {
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
    lStack_40 = param_2[2];
  }
  FUN_10047dcc4(param_1,param_4,&uStack_50);
  if (lStack_40 < 0) {
    func_0x000107c60e14(uStack_50);
  }
  *param_1 = &PTR_DAT_1107c4ae8;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[9] = param_2[2];
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_10047dee0(param_1 + 10);
  func_0x00010047e504(param_1 + 0xe,param_3);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  FUN_100460318(param_1 + 0x1e);
  param_1[0x26] = param_1 + 0x27;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = param_1 + 0x2a;
  return param_1;
}



/* Entry: 10047dacc; end: 10047dc17;  */

undefined8 *
FUN_10047dacc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100033dac(&uStack_50,*param_2,param_2[1]);
  }
  else {
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
    lStack_40 = param_2[2];
  }
  FUN_10047dcc4(param_1,param_4,&uStack_50);
  if (lStack_40 < 0) {
    func_0x000107c60e14(uStack_50);
  }
  *param_1 = &PTR_DAT_1107c4ae8;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[9] = param_2[2];
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_10047dee0(param_1 + 10);
  func_0x00010047e504(param_1 + 0xe,param_3);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  FUN_100460318(param_1 + 0x1e);
  param_1[0x26] = param_1 + 0x27;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = param_1 + 0x2a;
  return param_1;
}



/* Entry: 10047dc18; end: 10047dcc3;  */

undefined8 * FUN_10047dc18(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam00000001136a1e50 & 1) == 0) {
    iVar1 = 0x136a1e50;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x60;
      func_0x000107c60e20();
      puVar2[9] = 0;
      puVar2[8] = 0;
      puVar2[0xb] = 0;
      puVar2[10] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      FUN_100460318();
      puVar2[9] = 0;
      puVar2[8] = puVar2 + 9;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puRam00000001136a1e48 = puVar2;
      func_0x000107c60e4c(0x1136a1e50);
    }
  }
  return puRam00000001136a1e48;
}



/* Entry: 10047dcc4; end: 10047dd4b;  */

undefined8 * FUN_10047dcc4(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_1107c4ac0;
  param_1[1] = 1;
  *(undefined4 *)(param_1 + 2) = param_2;
  param_1[3] = 0xffffffffffffffff;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[6] = param_3[2];
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_10047dc18();
  FUN_10047dd4c();
  return param_1;
}



/* Entry: 10047dd4c; end: 10047ddcf;  */

void FUN_10047dd4c(long param_1,long param_2)

{
  long lVar1;
  undefined1 uStack_29;
  long *plStack_28;
  
  FUN_100460448();
  lVar1 = *(long *)(param_1 + 0x58) + 1;
  *(long *)(param_1 + 0x58) = lVar1;
  plStack_28 = (long *)(param_2 + 0x18);
  *plStack_28 = lVar1;
  lVar1 = param_1 + 0x40;
  FUN_10047ddd0(lVar1,plStack_28,&UNK_10dd5b8f9,&plStack_28,&uStack_29);
  *(long *)(lVar1 + 0x28) = param_2;
  func_0x000100466b80(param_1);
  return;
}



/* Entry: 10047ddd0; end: 10047de8b;  */

undefined1  [16] FUN_10047ddd0(long param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, plVar3[4] <= *param_2) {
        if (*param_2 <= plVar3[4]) {
          uVar2 = 0;
          goto LAB_10047de74;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_10047de38;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_10047de38:
  plVar1 = (long *)0x30;
  func_0x000107c60e20();
  plVar1[4] = *(long *)*param_4;
  plVar1[5] = 0;
  FUN_10047de8c(param_1,plVar3,plVar4,plVar1);
  uVar2 = 1;
  plVar3 = plVar1;
LAB_10047de74:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 10047de8c; end: 10047dedf;  */

void FUN_10047de8c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_100474f14(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10047dee0; end: 10047df8b;  */

undefined8 * FUN_10047dee0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar2 = param_1;
  FUN_1004605e0();
  uVar1 = (uint)puVar2;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  param_1[3] = (ulong)uVar1;
  FUN_10047e3b0(param_1);
  if (param_1[3] != 0) {
    uVar4 = 0;
    puVar2 = (undefined8 *)param_1[1];
    do {
      if (puVar2 < (undefined8 *)param_1[2]) {
        puVar2[5] = 0;
        puVar2[4] = 0;
        puVar2[7] = 0;
        puVar2[6] = 0;
        puVar3 = puVar2 + 8;
        puVar2[1] = 0;
        *puVar2 = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
      }
      else {
        puVar3 = param_1;
        func_0x000104aaec54();
      }
      param_1[1] = puVar3;
      uVar4 = uVar4 + 1;
      puVar2 = puVar3;
    } while (uVar4 < (ulong)param_1[3]);
  }
  return param_1;
}



/* Entry: 10047df8c; end: 10047dfff; +[SCCameraWidenedFOVSettingsProvider targetAspectRatio] */

undefined8
FUN_10047df8c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,int param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x3fe2000000000000;
  FUN_100456ca0();
  if (param_5 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c61180();
    func_0x000107c51724();
    func_0x000107c61170(puVar1);
    if (param_4 < param_3) {
      uVar2 = 0x3ffc71c71c71c71c;
    }
  }
  return uVar2;
}



/* Entry: 10047e000; end: 10047e1f7; -[SCLensProcessingOffscreenFactory initWithLensProcessingFactory:lensCarouselStudySettings:applicationLifecycleEvents:] */

undefined8 *
FUN_10047e000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_58 = PTR_PTR_1126fe080;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c610fc();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)(puVar1 + 7) = 0;
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_68,puVar1);
    uVar2 = param_5;
    func_0x000107c41b80(param_5);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_70,auStack_68);
    uVar4 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_70);
    func_0x000107c61120(auStack_68);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10047e1f8; end: 10047e2c3;  */

void FUN_10047e1f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10047e2c4; end: 10047e2cb;  */

void FUN_10047e2c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xe8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10047e2cc; end: 10047e31f;  */

void FUN_10047e2cc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xe8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10047e320; end: 10047e327;  */

void FUN_10047e320(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xe0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10047e328; end: 10047e37b;  */

void FUN_10047e328(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xe0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10047e37c; end: 10047e3af;  */

void FUN_10047e37c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if ((ulong)param_2 >> 0x3a == 0) {
    func_0x000107c60e20((long)param_2 << 6);
    return;
  }
  func_0x000104a7757c();
  plVar2 = param_1 + 2;
  lVar3 = *param_1;
  if ((undefined8 *)(*plVar2 - lVar3 >> 6) < param_2) {
    if ((ulong)param_2 >> 0x3a != 0) {
      func_0x000104aaec40();
      if (lStack_58 != lStack_60) {
        lStack_58 = lStack_58 + ((lStack_60 - lStack_58) + 0x3fU & 0xffffffffffffffc0);
      }
      if (plStack_68 != (long *)0x0) {
        func_0x000107c60e14();
      }
      func_0x000107c60bd8();
      lVar3 = *param_1;
      puVar1 = (undefined8 *)param_2[1];
      for (lVar4 = param_1[1]; lVar4 != lVar3; lVar4 = lVar4 + -0x40) {
        puVar1[-8] = *(undefined8 *)(lVar4 + -0x40);
        puVar1[-7] = *(undefined8 *)(lVar4 + -0x38);
        puVar1[-6] = *(undefined8 *)(lVar4 + -0x30);
        puVar1[-5] = *(undefined8 *)(lVar4 + -0x28);
        puVar1 = puVar1 + -8;
      }
      param_2[1] = puVar1;
      lVar3 = *param_1;
      *param_1 = (long)puVar1;
      param_2[1] = lVar3;
      lVar3 = param_1[1];
      param_1[1] = param_2[2];
      param_2[2] = lVar3;
      lVar3 = param_1[2];
      param_1[2] = param_2[3];
      param_2[3] = lVar3;
      *param_2 = param_2[1];
      return;
    }
    lVar4 = param_1[1];
    plStack_48 = plVar2;
    FUN_10047e37c();
    lStack_60 = (long)plVar2 + (lVar4 - lVar3);
    plStack_50 = plVar2 + (long)param_2 * 8;
    plStack_68 = plVar2;
    lStack_58 = lStack_60;
    FUN_10047e488(param_1,&plStack_68);
    if (lStack_58 != lStack_60) {
      lStack_58 = lStack_58 + ((lStack_60 - lStack_58) + 0x3fU & 0xffffffffffffffc0);
    }
    if (plStack_68 != (long *)0x0) {
      func_0x000107c60e14();
    }
  }
  return;
}



/* Entry: 10047e3b0; end: 10047e487;  */

void FUN_10047e3b0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar2 = param_1 + 2;
  lVar3 = *param_1;
  if ((undefined8 *)(*plVar2 - lVar3 >> 6) < param_2) {
    if ((ulong)param_2 >> 0x3a != 0) {
      func_0x000104aaec40();
      if (lStack_38 != lStack_40) {
        lStack_38 = lStack_38 + ((lStack_40 - lStack_38) + 0x3fU & 0xffffffffffffffc0);
      }
      if (plStack_48 != (long *)0x0) {
        func_0x000107c60e14();
      }
      func_0x000107c60bd8();
      lVar3 = *param_1;
      puVar1 = (undefined8 *)param_2[1];
      for (lVar4 = param_1[1]; lVar4 != lVar3; lVar4 = lVar4 + -0x40) {
        puVar1[-8] = *(undefined8 *)(lVar4 + -0x40);
        puVar1[-7] = *(undefined8 *)(lVar4 + -0x38);
        puVar1[-6] = *(undefined8 *)(lVar4 + -0x30);
        puVar1[-5] = *(undefined8 *)(lVar4 + -0x28);
        puVar1 = puVar1 + -8;
      }
      param_2[1] = puVar1;
      lVar3 = *param_1;
      *param_1 = (long)puVar1;
      param_2[1] = lVar3;
      lVar3 = param_1[1];
      param_1[1] = param_2[2];
      param_2[2] = lVar3;
      lVar3 = param_1[2];
      param_1[2] = param_2[3];
      param_2[3] = lVar3;
      *param_2 = param_2[1];
      return;
    }
    lVar4 = param_1[1];
    plStack_28 = plVar2;
    FUN_10047e37c();
    lStack_40 = (long)plVar2 + (lVar4 - lVar3);
    plStack_30 = plVar2 + (long)param_2 * 8;
    plStack_48 = plVar2;
    lStack_38 = lStack_40;
    FUN_10047e488(param_1,&plStack_48);
    if (lStack_38 != lStack_40) {
      lStack_38 = lStack_38 + ((lStack_40 - lStack_38) + 0x3fU & 0xffffffffffffffc0);
    }
    if (plStack_48 != (long *)0x0) {
      func_0x000107c60e14();
    }
  }
  return;
}



/* Entry: 10047e488; end: 10047e507;  */

void FUN_10047e488(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  puVar1 = (undefined8 *)param_2[1];
  for (lVar3 = param_1[1]; lVar3 != lVar2; lVar3 = lVar3 + -0x40) {
    puVar1[-8] = *(undefined8 *)(lVar3 + -0x40);
    puVar1[-7] = *(undefined8 *)(lVar3 + -0x38);
    puVar1[-6] = *(undefined8 *)(lVar3 + -0x30);
    puVar1[-5] = *(undefined8 *)(lVar3 + -0x28);
    puVar1 = puVar1 + -8;
  }
  param_2[1] = puVar1;
  lVar2 = *param_1;
  *param_1 = (long)puVar1;
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10047e508; end: 10047e567;  */

undefined8 * FUN_10047e508(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_2;
  if (param_2 != 0) {
    puVar1 = param_1;
    FUN_100460318();
    func_0x000100460dc4();
    uVar2 = *puVar1;
    FUN_1004671a4();
    puVar1 = &uStack_28;
    uVar3 = 1;
    uStack_28 = uVar2;
    FUN_10047e568();
    param_1[0xd] = puVar1;
    param_1[0xe] = uVar3;
  }
  return param_1;
}



/* Entry: 10047e568; end: 10047e573;  */

void FUN_10047e568(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10047e574; end: 10047e643;  */

undefined1  [16] FUN_10047e574(ulong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_1 == 0x8000000000000000) {
    auVar10._8_8_ = (ulong)param_2 << 0x20;
    auVar10._0_8_ = 0x8000000000000000;
    return auVar10;
  }
  if (param_1 == 0x7fffffffffffffff) {
    auVar7._8_8_ = (ulong)param_2 << 0x20;
    auVar7._0_8_ = 0x7fffffffffffffff;
    return auVar7;
  }
  if (param_2 == 3) {
    uVar5 = 3;
  }
  else {
    uVar4 = uRam00000001136a1f48;
    if (uRam00000001136a1f48 == 0) {
      FUN_100467528();
    }
    uVar5 = 0;
    FUN_1004673f0();
    uVar6 = 3;
    FUN_10047e734();
    if (uVar6 >> 0x20 == 3) {
      if (-1 < (int)uVar6) {
        uVar1 = (int)uVar6 + (int)uVar5;
        uVar6 = uVar5;
        if (1 < uVar4 + 0x8000000000000001) {
          if ((param_1 == 0x7fffffffffffffff) ||
             ((-1 < (long)param_1 && ((long)(param_1 ^ 0x7fffffffffffffff) <= (long)uVar4)))) {
            uVar6 = 0;
            uVar4 = 0x7fffffffffffffff;
          }
          else if ((param_1 == 0x8000000000000000) ||
                  (((long)param_1 < 1 && ((long)uVar4 <= (long)(-0x8000000000000000 - param_1))))) {
            uVar6 = 0;
            uVar4 = 0x8000000000000000;
          }
          else {
            uVar2 = uVar1 + 0xc4653600;
            lVar3 = param_1 + uVar4;
            if (lVar3 == 0x7ffffffffffffffe) {
              uVar2 = 0;
            }
            uVar4 = 0x7fffffffffffffff;
            if (lVar3 != 0x7ffffffffffffffe || (int)uVar1 < 1000000000) {
              uVar4 = lVar3 + (ulong)(999999999 < (int)uVar1);
            }
            if ((int)uVar1 < 1000000000) {
              uVar2 = uVar1;
            }
            uVar6 = (ulong)uVar2;
          }
        }
        auVar8._8_8_ = uVar5 & 0xffffffff00000000 | uVar6 & 0xffffffff;
        auVar8._0_8_ = uVar4;
        return auVar8;
      }
    }
    else {
      func_0x000107c2c164();
    }
    param_1 = uVar4;
    func_0x000107c2c160();
  }
  if (param_1 == 0x8000000000000000) {
    uVar4 = 0x8000000000000000;
  }
  else {
    if (param_1 != 0x7fffffffffffffff) {
      uVar4 = (long)(param_1 + 1) / 1000 - 1;
      if ((param_1 & 0x8000000000000000) == 0) {
        uVar4 = param_1 / 1000;
      }
      uVar6 = (long)((param_1 + uVar4 * -1000) * 1000000000) / 1000;
      goto LAB_10047e7a8;
    }
    uVar4 = 0x7fffffffffffffff;
  }
  uVar6 = 0;
LAB_10047e7a8:
  auVar9._8_8_ = uVar6 & 0xffffffff | uVar5 << 0x20;
  auVar9._0_8_ = uVar4;
  return auVar9;
}



/* Entry: 10047e644; end: 10047e647;  */

void FUN_10047e644(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8(0x112d9e970,&UNK_10d93f570);
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 10047e648; end: 10047e733;  */

undefined1  [16] FUN_10047e648(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if ((int)((ulong)param_4 >> 0x20) == 3) {
    if (-1 < (int)param_4) {
      uVar1 = (int)param_4 + (int)param_2;
      uVar5 = param_2;
      if (1 < param_1 + 0x8000000000000001) {
        if ((param_3 == 0x7fffffffffffffff) ||
           ((-1 < (long)param_3 && ((long)(param_3 ^ 0x7fffffffffffffff) <= (long)param_1)))) {
          uVar5 = 0;
          param_1 = 0x7fffffffffffffff;
        }
        else if ((param_3 == 0x8000000000000000) ||
                (((long)param_3 < 1 && ((long)param_1 <= (long)(-0x8000000000000000 - param_3))))) {
          uVar5 = 0;
          param_1 = 0x8000000000000000;
        }
        else {
          uVar2 = uVar1 + 0xc4653600;
          lVar3 = param_3 + param_1;
          if (lVar3 == 0x7ffffffffffffffe) {
            uVar2 = 0;
          }
          param_1 = 0x7fffffffffffffff;
          if (lVar3 != 0x7ffffffffffffffe || (int)uVar1 < 1000000000) {
            param_1 = lVar3 + (ulong)(999999999 < (int)uVar1);
          }
          if ((int)uVar1 < 1000000000) {
            uVar2 = uVar1;
          }
          uVar5 = (ulong)uVar2;
        }
      }
      auVar6._8_8_ = param_2 & 0xffffffff00000000 | uVar5 & 0xffffffff;
      auVar6._0_8_ = param_1;
      return auVar6;
    }
  }
  else {
    func_0x000107c2c164();
  }
  func_0x000107c2c160();
  if (param_1 == 0x8000000000000000) {
    uVar5 = 0x8000000000000000;
  }
  else {
    if (param_1 != 0x7fffffffffffffff) {
      uVar5 = (long)(param_1 + 1) / 1000 - 1;
      if ((param_1 & 0x8000000000000000) == 0) {
        uVar5 = param_1 / 1000;
      }
      uVar4 = (long)((param_1 + uVar5 * -1000) * 1000000000) / 1000;
      goto LAB_10047e7a8;
    }
    uVar5 = 0x7fffffffffffffff;
  }
  uVar4 = 0;
LAB_10047e7a8:
  auVar7._8_8_ = uVar4 & 0xffffffff | param_2 << 0x20;
  auVar7._0_8_ = uVar5;
  return auVar7;
}



/* Entry: 10047e734; end: 10047e7b3;  */

undefined1  [16] FUN_10047e734(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  if (param_1 == 0x8000000000000000) {
    uVar1 = 0x8000000000000000;
  }
  else {
    if (param_1 != 0x7fffffffffffffff) {
      uVar1 = (long)(param_1 + 1) / 1000 - 1;
      if ((param_1 & 0x8000000000000000) == 0) {
        uVar1 = param_1 / 1000;
      }
      uVar2 = (long)((param_1 + uVar1 * -1000) * 1000000000) / 1000;
      goto LAB_10047e7a8;
    }
    uVar1 = 0x7fffffffffffffff;
  }
  uVar2 = 0;
LAB_10047e7a8:
  auVar3._8_8_ = uVar2 & 0xffffffff | param_2 << 0x20;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 10047e7b4; end: 10047e7e3;  */

void FUN_10047e7b4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000107c613d0();
  *param_1 = 1;
  param_1[1] = uVar1;
  param_1[2] = param_2;
  param_1[3] = 0;
  return;
}



/* Entry: 10047e7e4; end: 10047e88f;  */

void FUN_10047e7e4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar3 = 0x50;
    func_0x000107c60e20();
    FUN_10047e890();
    plVar6 = (long *)(param_1 + 0x58);
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
    plVar4 = (long *)(param_1 + 0x60);
    if (*plVar6 != 0) {
      plVar6 = plVar4;
      plVar4 = (long *)(*plVar4 + 0x38);
    }
    *plVar4 = lVar3;
    *plVar6 = lVar3;
    uVar5 = *(long *)(param_1 + 0x48) + *(long *)(lVar3 + 0x48);
    *(ulong *)(param_1 + 0x48) = uVar5;
    if (*(ulong *)(param_1 + 0x50) < uVar5) {
      do {
        *(ulong *)(param_1 + 0x48) = uVar5 - *(long *)(*(long *)(param_1 + 0x58) + 0x48);
        *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x38);
        func_0x000104aab238();
        func_0x000107c60e14();
        uVar5 = *(ulong *)(param_1 + 0x48);
      } while (*(ulong *)(param_1 + 0x50) < uVar5);
    }
    return;
  }
  plVar4 = (long *)*param_3;
  if ((long *)0x1 < plVar4) {
    do {
      lVar3 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010047e868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar4[1])();
      return;
    }
  }
  return;
}


