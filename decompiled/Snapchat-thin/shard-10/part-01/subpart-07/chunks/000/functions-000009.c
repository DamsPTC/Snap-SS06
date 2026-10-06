/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10782a654; end: 10782a91b;  */

long ** FUN_10782a654(long **param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 in_ZR;
  long *plVar5;
  ulong uVar6;
  long **pplVar7;
  long **pplVar8;
  long lVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined8 uStack_360;
  long lStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long *aplStack_340 [2];
  undefined1 auStack_330 [56];
  undefined1 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 auStack_2e8 [56];
  undefined1 auStack_2b0 [56];
  undefined1 auStack_278 [120];
  undefined1 auStack_200 [240];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (((param_1[0x3d] != (long *)0x0) && (lVar9 = param_1[0x3d][6], lVar9 != 0)) &&
     (plVar10 = *(long **)(lVar9 + 0x128), plVar10 != (long *)0x0)) {
    func_0x000104c2f64c(auStack_200);
    (**(code **)(*plVar10 + 0x18))(aplStack_340,plVar10,auStack_200);
    func_0x000104c2f714(auStack_200);
    if (aplStack_340[0] != (long *)0x0) {
      plVar5 = aplStack_340[0];
      (**(code **)(*aplStack_340[0] + 0x10))();
      for (plVar10 = (long *)0x0; in_ZR = plVar10 == plVar5, !(bool)in_ZR;
          plVar10 = (long *)((long)plVar10 + 1)) {
        (**(code **)(*aplStack_340[0] + 0x18))(&uStack_350,aplStack_340[0],plVar10);
        if (*(char *)(param_3 + 0x80) == '\x01') {
          uVar11 = NEON_ucvtf((uint)*(byte *)((long)param_1 + 0xc));
          func_0x0001077512dc(uVar11,auStack_200);
          lStack_358 = lStack_348;
          uStack_360 = uStack_350;
          if (lStack_348 != 0) {
            plVar1 = (long *)(lStack_348 + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = *plVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          func_0x000104c2fe00(auStack_2e8,param_1 + 4);
          func_0x000104c2fe00(auStack_2b0,0x1138369c0);
          func_0x0001073c4f74(auStack_278,auStack_2e8);
          func_0x000107751444(auStack_200,&uStack_360,auStack_278);
          auStack_330[0] = 0;
          uStack_2f8 = 0;
          uStack_2f0 = 0;
          uVar6 = param_3 + 0x20;
          FUN_10777faa8(uVar6,auStack_200,auStack_330);
          func_0x00010724b3d8(auStack_330);
          func_0x000107267e8c(auStack_278);
          func_0x000107267eac(auStack_2e8);
          func_0x000107267e44(&uStack_360);
          func_0x000107267da8(auStack_200);
          if ((uVar6 & 1) != 0) goto LAB_10782a7e0;
        }
        else {
LAB_10782a7e0:
          uVar4 = uStack_350;
          func_0x00010729807c(auStack_278,param_1 + 4);
          auStack_2e8[0] = 0;
          auStack_2b0[0] = 0;
          func_0x0001078344c8(auStack_200,uVar4,param_1 + 2,auStack_278,auStack_2e8);
          uStack_108 = *(undefined8 *)((long)param_1 + 0x14);
          uStack_110 = *(undefined8 *)((long)param_1 + 0xc);
          uStack_100 = 1;
          func_0x000107829acc(param_2,auStack_200);
          func_0x000107269e60(auStack_200);
          func_0x00010724b3d8(auStack_2e8);
          func_0x00010724b3d8(auStack_278);
        }
        func_0x000107330fdc(&uStack_350);
      }
    }
    param_1 = aplStack_340;
    func_0x000107331000();
  }
  func_0x00010782acc8(uStack_70);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  pplVar7 = aplStack_340;
  func_0x000107331000();
  func_0x00010782acc0();
  pplVar8 = pplVar7;
  func_0x00010782ac84();
  func_0x00010782a9b8(pplVar8 + 0x6f);
  func_0x00010750c6cc(pplVar7 + 0x6d);
  *pplVar7 = (long *)&PTR_DAT_1109e0d50;
  pplVar7[0x25] = (long *)&PTR_DAT_1109e0e60;
  pplVar7[0x26] = (long *)&PTR_DAT_1109e0e88;
  pplVar7[0x31] = (long *)&PTR_DAT_1109e0eb0;
  pplVar7[0x33] = (long *)&PTR_DAT_1109e0ed8;
  pplVar7[0x35] = (long *)&PTR_DAT_1109e0f00;
  *(undefined1 *)(pplVar7[0x47] + 6) = 1;
  func_0x0001073ada2c(pplVar7[0x47][3]);
  func_0x00010780f2c0(pplVar7[0x4e],pplVar7 + 0x25);
  func_0x000107831228(pplVar7 + 0x69);
  func_0x0001078312d4(pplVar7 + 100);
  func_0x000107518510(pplVar7 + 0x5f);
  func_0x000107518478(pplVar7 + 0x5a);
  func_0x0001075183b4(pplVar7 + 0x55);
  func_0x00010751838c(pplVar7 + 0x53);
  func_0x0001074f9d98(pplVar7 + 0x51);
  func_0x00010724bd50(pplVar7 + 0x4c);
  func_0x000107831700(pplVar7 + 0x49);
  func_0x0001078316dc(pplVar7 + 0x47);
  func_0x000107831374(pplVar7 + 0x3f);
  func_0x000107831640(pplVar7 + 0x3d);
  func_0x0001072c9240(pplVar7 + 0x37);
  func_0x000107432200(pplVar7 + 0x35);
  func_0x0001074321c8(pplVar7 + 0x33);
  func_0x000107432190(pplVar7 + 0x31);
  func_0x00010747c918(pplVar7 + 0x26);
  *pplVar7 = (long *)&PTR_DAT_1109e1d40;
  func_0x00010750bcd8(pplVar7 + 0x13);
  func_0x000104c2f714(pplVar7 + 4);
  return pplVar7;
}



/* Entry: 10782aa90; end: 10782aab7;  */

void FUN_10782aa90(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)0x30;
  __Znwm();
  *puVar4 = &PTR_DAT_1109e0bc0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar6;
  lVar5 = *(long *)(param_1 + 0x18);
  puVar4[3] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  puVar4[4] = uVar6;
  return;
}



/* Entry: 10782ae6c; end: 10782af0f;  */

void FUN_10782ae6c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int extraout_w10;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 8);
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  if (lVar2 != 0) {
    do {
      func_0x00010782b618();
    } while (extraout_w10 != 0);
  }
  *puVar1 = &PTR_DAT_1109e0d08;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x000107332298(puVar1 + 3,param_2 + 0x18);
  func_0x000107331610(&uStack_40);
  *param_1 = puVar1;
  return;
}



/* Entry: 10782b36c; end: 10782b37f;  */

void FUN_10782b36c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010782b374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10782b4f4; end: 10782b53b;  */

undefined8 * FUN_10782b4f4(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109a7900;
  param_1[1] = 0;
  func_0x00010782b53c(param_1 + 3);
  return param_1;
}



/* Entry: 10782bcf8; end: 10782bd2b;  */

long * FUN_10782bcf8(long *param_1)

{
  param_1[1] = param_1[1] + 0x58;
  *param_1 = *param_1 + 1;
  func_0x0001078315e8();
  return param_1;
}



/* Entry: 10782c6c4; end: 10782c7b3;  */

/* WARNING: Possible PIC construction at 0x00010782c760: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010782c764) */
/* WARNING: Removing unreachable block (ram,0x00010782c794) */
/* WARNING: Removing unreachable block (ram,0x00010782c7a4) */
/* WARNING: Removing unreachable block (ram,0x00010782c780) */

void FUN_10782c6c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 auStack_120 [2];
  undefined4 uStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [24];
  undefined4 auStack_e0 [6];
  undefined4 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_98;
  undefined1 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [64];
  
  func_0x000107832d74();
  auStack_e0[0] = 0x4f;
  uStack_c8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x000107832d10();
  uStack_b8 = 0;
  uStack_98 = 0;
  uStack_94 = 1;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  func_0x000104c2fe00(auStack_70);
  func_0x000107832ecc();
  puVar1 = auStack_e0;
  func_0x000107371bc4(puVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_f8,param_3);
  func_0x00010726e300(puVar1,"reason",auStack_f8);
  uStack_108 = 0x10782c764;
  auStack_120[0] = 1;
  uStack_118 = 1;
  uStack_130 = *param_1;
  uStack_128 = 3;
  puStack_110 = &stack0xfffffffffffffff0;
  func_0x000107832e74(param_1,puVar1,auStack_120,&uStack_130);
  return;
}



/* Entry: 10782d270; end: 10782d373;  */

undefined8 * FUN_10782d270(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e0d50;
  param_1[0x25] = &PTR_DAT_1109e0e60;
  param_1[0x26] = &PTR_DAT_1109e0e88;
  param_1[0x31] = &PTR_DAT_1109e0eb0;
  param_1[0x33] = &PTR_DAT_1109e0ed8;
  param_1[0x35] = &PTR_DAT_1109e0f00;
  *(undefined1 *)(param_1[0x47] + 0x30) = 1;
  func_0x0001073ada2c(*(undefined8 *)(param_1[0x47] + 0x18));
  func_0x00010780f2c0(param_1[0x4e],param_1 + 0x25);
  func_0x000107831228(param_1 + 0x69);
  func_0x0001078312d4(param_1 + 100);
  func_0x000107518510(param_1 + 0x5f);
  func_0x000107518478(param_1 + 0x5a);
  func_0x0001075183b4(param_1 + 0x55);
  func_0x00010751838c(param_1 + 0x53);
  func_0x0001074f9d98(param_1 + 0x51);
  func_0x00010724bd50(param_1 + 0x4c);
  func_0x000107831700(param_1 + 0x49);
  func_0x0001078316dc(param_1 + 0x47);
  func_0x000107831374(param_1 + 0x3f);
  func_0x000107831640(param_1 + 0x3d);
  func_0x0001072c9240(param_1 + 0x37);
  func_0x000107432200(param_1 + 0x35);
  func_0x0001074321c8(param_1 + 0x33);
  func_0x000107432190(param_1 + 0x31);
  func_0x00010747c918(param_1 + 0x26);
  *param_1 = &PTR_DAT_1109e1d40;
  func_0x00010750bcd8(param_1 + 0x13);
  func_0x000104c2f714(param_1 + 4);
  return param_1;
}



/* Entry: 10782d67c; end: 10782d6f3;  */

void FUN_10782d67c(long *param_1)

{
  long lVar1;
  undefined8 uStack_50;
  
  func_0x000107832eb8();
  if (uStack_50 != 0) {
    lVar1 = *param_1;
    func_0x00010783351c();
    func_0x000107831b78();
    func_0x000107833494();
    func_0x000107833098();
    if (lVar1 != 0) {
      func_0x000107832c60();
    }
  }
  func_0x000107832ef8();
  return;
}



/* Entry: 10782ebcc; end: 10782ec43;  */

void FUN_10782ebcc(long *param_1)

{
  long lVar1;
  undefined8 uStack_50;
  
  func_0x000107832eb8();
  if (uStack_50 != 0) {
    lVar1 = *param_1;
    func_0x00010783351c();
    func_0x000107832598();
    func_0x000107833494();
    func_0x000107833098();
    if (lVar1 != 0) {
      func_0x000107832c60();
    }
  }
  func_0x000107832ef8();
  return;
}



/* Entry: 10782f330; end: 10782f373;  */

void FUN_10782f330(undefined8 param_1)

{
  uint unaff_w20;
  
  func_0x0001078334c4();
  func_0x0001078331b4(param_1,PTR_DAT_1131ad570);
  func_0x00010783329c(unaff_w20 & 0xf);
  func_0x000107832e90();
  func_0x000107832ec4();
  func_0x0001078332ac();
  return;
}



/* Entry: 10782f9b4; end: 10782f9df;  */

undefined8 FUN_10782f9b4(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  func_0x0001073f26dc(&uStack_18,param_1);
  return uStack_18;
}



/* Entry: 10783001c; end: 107830093;  */

bool FUN_10783001c(long param_1)

{
  if ((*(int *)(param_1 + 0x338) == 0) && (*(int *)(param_1 + 0x344) - 1U < 2)) {
    return true;
  }
  return 0 < *(int *)(param_1 + 0x340);
}



/* Entry: 107830eec; end: 107830f1b;  */

long FUN_107830eec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1e8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x128) == '\x01')) {
    lVar1 = lVar1 + 0x60;
    func_0x00010782bf00(lVar1);
    return lVar1;
  }
  return 0;
}



/* Entry: 107830fe4; end: 107831027;  */

undefined8 * FUN_107830fe4(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  func_0x000107831028(param_1,*param_2,param_2 + 1);
  return param_1;
}



/* Entry: 107831200; end: 10783128b;  */

undefined8 FUN_107831200(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010726ea70(param_1 + 0x18);
  func_0x000107468ef8(param_1);
  func_0x0001074623f0();
  return unaff_x19;
}



/* Entry: 10783140c; end: 107831437;  */

bool FUN_10783140c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001073f9894();
  return param_1 + 8 != lVar1;
}



/* Entry: 107831728; end: 10783173b;  */

void FUN_107831728(void)

{
  func_0x0001078317d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078318ec; end: 10783195f;  */

void FUN_1078318ec(undefined8 param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x22;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107832f48();
  func_0x00010783348c();
  uStack_60 = *unaff_x19;
  *unaff_x19 = 0;
  uStack_50 = unaff_x19[2];
  uStack_58 = unaff_x19[1];
  uStack_40 = unaff_x19[4];
  uStack_48 = unaff_x19[3];
  unaff_x19[3] = 0;
  unaff_x19[4] = 0;
  uStack_38 = unaff_x19[5];
  func_0x0001078319e0();
  *unaff_x22 = param_1;
  func_0x000107831ac4(&uStack_60);
  return;
}



/* Entry: 107831ae4; end: 107831ae7;  */

undefined8 * FUN_107831ae4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e11d8;
  func_0x0001073e0028(param_1 + 5);
  return param_1;
}



/* Entry: 107831c28; end: 107831c33;  */

undefined8 * FUN_107831c28(long param_1)

{
  func_0x0001074623cc(param_1 + 0x128);
  func_0x000107831640(param_1 + 0x100);
  func_0x000104c2f714(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109b9158;
  func_0x000107518510(param_1 + 0x80);
  func_0x000107518478(param_1 + 0x58);
  func_0x0001075183b4(param_1 + 0x30);
  func_0x00010751838c(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 107832058; end: 10783206f;  */

void FUN_107832058(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078321ac; end: 1078321db;  */

void FUN_1078321ac(void)

{
  return;
}



/* Entry: 107832530; end: 10783258b;  */

void FUN_107832530(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar1 = plVar2[1];
    while (lVar1 != lVar3) {
      lVar1 = lVar1 + -0x20;
      func_0x000107440dd8();
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 107832760; end: 10783278b;  */

undefined8 * FUN_107832760(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e1378;
  func_0x0001078108a4(param_1 + 4);
  return param_1;
}



/* Entry: 1078329bc; end: 1078329eb;  */

void FUN_1078329bc(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001078329e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (plVar1,param_1 + 0x20,param_1 + 0x48,param_1 + 0x70,*(undefined8 *)(param_1 + 0x98));
  return;
}



/* Entry: 107832c00; end: 10783355f;  */

undefined ** FUN_107832c00(void)

{
  return &PTR_DAT_1109e1458;
}



/* Entry: 107833d7c; end: 1078340e3;  */

void FUN_107833d7c(double param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 **ppuVar4;
  undefined4 *extraout_x8;
  long unaff_x20;
  undefined8 *puVar5;
  long lVar6;
  long *unaff_x21;
  long *plVar7;
  double dVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined4 uVar12;
  double unaff_d8;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  double *pdStack_90;
  undefined8 **ppuStack_88;
  double *pdStack_80;
  undefined8 *puStack_78;
  double dStack_70;
  double dStack_68;
  
  func_0x000107842888();
  func_0x000107842688();
  dStack_68 = param_1 * unaff_d8;
  uVar11 = *(uint *)(unaff_x20 + 8);
  uVar12 = 0;
  dStack_70 = (double)NEON_ucvtf((ulong)*(uint *)(unaff_x20 + 4));
  dStack_70 = unaff_d8 * dStack_70;
  dVar8 = (double)NEON_ucvtf((ulong)uVar11);
  puVar9 = (undefined8 *)(unaff_d8 * dVar8);
  pdStack_90 = &dStack_70;
  ppuStack_88 = &puStack_78;
  pdStack_80 = &dStack_68;
  puStack_78 = puVar9;
  (**(code **)(*unaff_x21 + 0x38))(&puStack_a8);
  ppuVar4 = &puStack_a8;
  func_0x000107330078();
  (**(code **)(*unaff_x21 + 0x10))();
  switch((ulong)unaff_x21 & 0xffffffff) {
  case 1:
    if (*ppuVar4 != ppuVar4[1]) {
      puStack_a8 = (undefined8 *)0x0;
      lStack_a0 = 0;
      uStack_98 = 0;
      func_0x0001073f18d4(ppuVar4,0);
      puVar1 = ppuVar4[1];
      for (puVar5 = *ppuVar4; puVar5 != puVar1; puVar5 = (undefined8 *)((long)puVar5 + 4)) {
        func_0x000107842868();
        puStack_b8 = (undefined8 *)CONCAT44(uVar12,uVar11);
        puStack_c0 = puVar9;
        func_0x000104c31a04(&puStack_a8,&puStack_c0);
      }
      if (lStack_a0 - (long)puStack_a8 == 0x10) {
        *extraout_x8 = 6;
        uVar10 = *puStack_a8;
        *(undefined8 *)(extraout_x8 + 4) = puStack_a8[1];
        *(undefined8 *)(extraout_x8 + 2) = uVar10;
      }
      else {
        *extraout_x8 = 3;
        *(undefined8 **)(extraout_x8 + 2) = puStack_a8;
        *(long *)(extraout_x8 + 4) = lStack_a0;
        func_0x000107842804();
      }
      func_0x000104c31c5c(&puStack_a8);
      return;
    }
  case 0:
    *extraout_x8 = 6;
    *(undefined8 *)(extraout_x8 + 4) = 0x7ff8000000000000;
    *(undefined8 *)(extraout_x8 + 2) = 0x7ff8000000000000;
    break;
  case 2:
    puStack_a8 = (undefined8 *)0x0;
    lStack_a0 = 0;
    uStack_98 = 0;
    plVar2 = ppuVar4[1];
    for (plVar7 = *ppuVar4; plVar7 != plVar2; plVar7 = plVar7 + 3) {
      puStack_c0 = (undefined8 *)0x0;
      puStack_b8 = (undefined8 *)0x0;
      uStack_b0 = 0;
      lVar3 = plVar7[1];
      for (lVar6 = *plVar7; lVar6 != lVar3; lVar6 = lVar6 + 4) {
        func_0x000107842868();
        uStack_d0 = CONCAT44(uVar12,uVar11);
        puStack_d8 = puVar9;
        func_0x000104c31a04(&puStack_c0,&puStack_d8);
      }
      func_0x000104c31f7c(&puStack_a8,&puStack_c0);
      func_0x000104c31c5c(&puStack_c0);
    }
    if (lStack_a0 - (long)puStack_a8 == 0x18) {
      *extraout_x8 = 5;
      func_0x0001072697dc(extraout_x8 + 2);
    }
    else {
      *extraout_x8 = 2;
      *(undefined8 **)(extraout_x8 + 2) = puStack_a8;
      *(long *)(extraout_x8 + 4) = lStack_a0;
      func_0x000107842804();
    }
    func_0x000104c31d58(&puStack_a8);
    break;
  case 3:
    puStack_a8 = (undefined8 *)0x0;
    lStack_a0 = 0;
    uStack_98 = 0;
    func_0x00010783376c(&puStack_c0,ppuVar4);
    for (puVar5 = puStack_c0; puVar5 != puStack_b8; puVar5 = puVar5 + 3) {
      puStack_d8 = (undefined8 *)0x0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      plVar2 = (long *)puVar5[1];
      for (plVar7 = (long *)*puVar5; plVar7 != plVar2; plVar7 = plVar7 + 3) {
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        lVar3 = plVar7[1];
        for (lVar6 = *plVar7; lVar6 != lVar3; lVar6 = lVar6 + 4) {
          func_0x000107842868();
          uStack_f8 = CONCAT44(uVar12,uVar11);
          puStack_100 = puVar9;
          func_0x000104c31a04(&uStack_f0,&puStack_100);
        }
        FUN_107841f1c(&puStack_d8,&uStack_f0);
        func_0x000104c31c5c(&uStack_f0);
      }
      func_0x000104c324d4(&puStack_a8,&puStack_d8);
      func_0x000104c31ca8(&puStack_d8);
    }
    func_0x0001073f0f44(&puStack_c0);
    if (lStack_a0 - (long)puStack_a8 == 0x18) {
      func_0x000107834980(extraout_x8);
    }
    else {
      *extraout_x8 = 1;
      *(undefined8 **)(extraout_x8 + 2) = puStack_a8;
      *(long *)(extraout_x8 + 4) = lStack_a0;
      func_0x000107842804();
    }
    func_0x000104c31df0(&puStack_a8);
    break;
  default:
    *(undefined8 *)(extraout_x8 + 2) = 0;
    *(undefined8 *)(extraout_x8 + 4) = 0;
    *extraout_x8 = 6;
  }
  return;
}



/* Entry: 10783468c; end: 1078346a7;  */

long * FUN_10783468c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  func_0x0001078346d4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107834838; end: 107834867;  */

void FUN_107834838(void)

{
  undefined1 in_CY;
  
  func_0x000107842998();
  if ((bool)in_CY) {
    func_0x00010783486c();
  }
  else {
    func_0x000107834868();
  }
  func_0x00010784321c();
  return;
}



/* Entry: 107834a08; end: 107834aaf;  */

void FUN_107834a08(long param_1,ulong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long extraout_x9;
  ulong *unaff_x20;
  ulong unaff_x21;
  ulong uVar3;
  
  func_0x000107834ab0();
  func_0x000107842c90();
  func_0x000107834ad4(param_1);
  do {
    uVar3 = unaff_x21 - 4000;
    do {
      uVar1 = param_2 <= unaff_x21;
      if (unaff_x21 == param_2) {
        *(undefined8 *)(param_1 + 0x28) = 0;
        while (func_0x000107842940(), (bool)uVar1) {
          func_0x000107843024();
          func_0x000107842ddc();
        }
        if (extraout_x9 == 1) {
          uVar2 = 10;
        }
        else {
          if (extraout_x9 != 2) {
            return;
          }
          uVar2 = 0x14;
        }
        *(undefined8 *)(param_1 + 0x20) = uVar2;
        return;
      }
      func_0x000107834afc(unaff_x21 + 0x60);
      func_0x000107834afc(unaff_x21);
      unaff_x21 = unaff_x21 + 200;
      uVar3 = uVar3 + 200;
    } while (*unaff_x20 != uVar3);
    unaff_x20 = unaff_x20 + 1;
    unaff_x21 = *unaff_x20;
  } while( true );
}



/* Entry: 107834c5c; end: 107834ce3;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_107834c5c(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  int iVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  long *plVar24;
  ulong *puVar25;
  uint *puVar26;
  long *plVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  long alStack_d8 [2];
  long lStack_c8;
  long alStack_48 [5];
  
  if ((long *)((param_1[2] - *param_1) / 0x18) < param_2) {
    if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
      func_0x0001078357a8();
      func_0x0001078426b0();
      FUN_107835888();
      func_0x000107842580();
      puVar25 = (ulong *)*param_1;
      if ((ulong)(param_1[1] - (long)puVar25) < 0x11) {
        return (long *)0x0;
      }
      puVar15 = (ulong *)(param_1[1] + -8);
      uVar17 = *puVar15;
      uStack_e0 = *puVar25;
      while ((int)uVar17 == (int)uStack_e0 && uVar17 >> 0x20 == uStack_e0 >> 0x20) {
        if (puVar15 == puVar25) {
          return (long *)0x0;
        }
        puVar15 = puVar15 + -1;
        uVar17 = *puVar15;
      }
      uVar14 = 0;
      uVar13 = 0;
      puVar25 = puVar25 + 1;
      uVar28 = *puVar25;
      uStack_f0 = 0;
      uVar29 = uVar28 >> 0x20;
      puVar15 = puVar15 + 1;
      plVar24 = (long *)param_2[1];
      uVar16 = uVar17 >> 0x20;
      uVar21 = uStack_e0 >> 0x20;
      uVar23 = uStack_e0;
      while( true ) {
        while( true ) {
          uVar18 = uVar17;
          uVar17 = uStack_e0;
          plVar19 = (long *)*param_2;
          while( true ) {
            iVar22 = (int)uVar23;
            iVar20 = (int)uVar21;
            if ((int)uVar28 != iVar22 || (int)uVar29 != iVar20) break;
            uStack_e8 = uVar28;
            if ((puVar25 == puVar15) ||
               (puVar25 = puVar25 + 1, puVar25 == puVar15 && plVar19 == plVar24))
            goto code_r0x000107834f9c;
            puVar11 = puVar25;
            if (puVar25 == puVar15) {
              puVar11 = &uStack_f0;
            }
            uVar28 = *puVar11;
            uVar29 = uVar28 >> 0x20;
          }
          uStack_e8 = uVar28;
          uVar29 = uVar28 >> 0x20;
          if ((long)(iVar22 - (int)uVar28) * (long)((int)uVar16 - iVar20) -
              (long)(iVar20 - (int)(uVar28 >> 0x20)) * (long)((int)uVar18 - iVar22) != 0) break;
          uStack_e0 = uVar18 & 0xffffffff | uVar16 << 0x20;
          if (plVar19 != plVar24) {
            plVar24 = plVar24 + -3;
            param_2[1] = (long)plVar24;
          }
          uVar21 = uVar16;
          uVar23 = uVar18;
          if (plVar19 == plVar24) {
            while (puVar11 = puVar15 + -1,
                  (int)*puVar11 == (int)uVar18 && *(int *)((long)puVar15 + -4) == (int)uVar16) {
              puVar15 = puVar11;
              if (puVar11 == puVar25 + 1) {
                return (long *)0x0;
              }
            }
            uVar16 = puVar15[-1] >> 0x20;
            uVar17 = puVar15[-1];
          }
          else {
            uVar17 = plVar24[-2];
            if ((int)uVar14 == (int)plVar24[-2] && (int)uVar13 == *(int *)((long)plVar24 + -0xc)) {
              uVar17 = plVar24[-3];
            }
            uVar13 = uVar17 >> 0x20;
            uVar14 = uVar17;
            uVar16 = uVar13;
          }
        }
        if (plVar19 == plVar24) {
          uStack_f0 = uStack_e0;
        }
        if (plVar24 < (long *)param_2[2]) {
          param_1 = plVar24;
          func_0x000107835990(plVar24,&uStack_e0,&uStack_e8);
          plVar24 = plVar24 + 3;
          param_2[1] = (long)plVar24;
        }
        else {
          func_0x000107842ab4(((long)plVar24 - (long)plVar19) / 0x18);
          func_0x000107835a84();
          func_0x000100660228();
          func_0x0001078357dc(alStack_d8);
          func_0x000107835990(lStack_c8,&uStack_e0,&uStack_e8);
          lStack_c8 = lStack_c8 + 0x18;
          func_0x0001078357b4(param_2,alStack_d8);
          plVar24 = (long *)param_2[1];
          param_1 = alStack_d8;
          FUN_107835888();
        }
        param_2[1] = (long)plVar24;
        if (puVar25 == puVar15) break;
        uStack_e0 = uVar28;
        puVar25 = puVar25 + 1;
        puVar11 = puVar25;
        if ((puVar25 == puVar15) && (puVar11 = &uStack_f0, (long *)*param_2 == plVar24)) break;
        uVar13 = uVar17 >> 0x20;
        uStack_e8 = *puVar11;
        uVar14 = uVar17;
        uVar16 = uVar13;
        uVar21 = uVar29;
        uVar23 = uVar28;
        uVar28 = uStack_e8;
        uVar29 = uStack_e8 >> 0x20;
      }
code_r0x000107834f9c:
      do {
        puVar26 = (uint *)*param_2;
        uVar17 = ((long)plVar24 - (long)puVar26) / 0x18;
        plVar19 = (long *)(ulong)(2 < uVar17);
        if (uVar17 < 3) {
          return plVar19;
        }
        plVar27 = plVar24 + -3;
        func_0x00010784262c();
        func_0x0001078358d8();
        if ((int)param_1 == 0) {
          return plVar19;
        }
        uVar1 = *puVar26;
        plVar9 = (long *)(ulong)uVar1;
        uVar5 = puVar26[1];
        uVar2 = *(uint *)(plVar24 + -2);
        plVar10 = (long *)(ulong)uVar2;
        uVar6 = *(uint *)((long)plVar24 + -0xc);
        uVar3 = puVar26[2];
        uVar7 = puVar26[3];
        uVar4 = *(uint *)(plVar24 + -3);
        uVar8 = *(uint *)((long)plVar24 + -0x14);
        if (uVar1 == uVar2 && uVar5 == uVar6) {
          if (uVar3 != uVar4 || uVar7 != uVar8) {
            lVar12 = *plVar27;
code_r0x000107835050:
            *(long *)puVar26 = lVar12;
            goto code_r0x000107835054;
          }
code_r0x000107835004:
          param_2[1] = (long)plVar27;
code_r0x000107835098:
          param_1 = param_2;
          func_0x00010783590c(param_2,puVar26);
        }
        else {
          if (uVar3 != uVar4 || uVar7 != uVar8) {
            if (uVar3 == uVar2 && uVar7 == uVar6) {
              if (uVar1 == uVar4 && uVar5 == uVar8) goto code_r0x000107835004;
              func_0x000107835938(plVar10,uVar6,plVar9,uVar5,uVar4,uVar8);
              if ((int)plVar10 == 0) {
                lVar12 = *plVar27;
                goto code_r0x000107834ff8;
              }
              plVar24[-2] = *(long *)puVar26;
            }
            else {
              if (uVar1 != uVar4 || uVar5 != uVar8) {
                return plVar19;
              }
              func_0x000107835938(plVar9,uVar5);
              if ((int)plVar9 == 0) {
                lVar12 = plVar24[-2];
                param_1 = plVar9;
                goto code_r0x000107835050;
              }
              *plVar27 = *(long *)(puVar26 + 2);
            }
            puVar26 = (uint *)*param_2;
            goto code_r0x000107835098;
          }
          lVar12 = plVar24[-2];
          plVar10 = param_1;
code_r0x000107834ff8:
          *(long *)(puVar26 + 2) = lVar12;
          param_1 = plVar10;
code_r0x000107835054:
          param_2[1] = param_2[1] + -0x18;
        }
        plVar24 = (long *)param_2[1];
      } while( true );
    }
    func_0x0001078357dc(alStack_48,param_2,(param_1[1] - *param_1) / 0x18);
    func_0x000100660238();
    func_0x0001078357b4();
    param_1 = alStack_48;
    FUN_107835888(param_1);
  }
  return param_1;
}



/* Entry: 107835888; end: 1078358b3;  */

long * FUN_107835888(long *param_1)

{
  func_0x0001078358b4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107835b64; end: 107835c23;  */

void FUN_107835b64(long *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar8;
  long *unaff_x21;
  long *plVar9;
  long lVar10;
  
  func_0x0001078425f8();
  lVar10 = 0;
  lVar3 = *param_1;
  lVar6 = param_1[1];
  while ((lVar1 = lVar3 + lVar10, lVar1 != lVar6 &&
         ((*(ulong *)(lVar1 + 0x10) & 0x7fffffffffffffff) == 0x7ff0000000000000))) {
    puVar2 = (undefined4 *)(lVar3 + lVar10);
    uVar5 = puVar2[2];
    puVar2[2] = *puVar2;
    *puVar2 = uVar5;
    lVar10 = lVar10 + 0x18;
  }
  if (lVar10 == 0) {
    return;
  }
  func_0x00010784262c();
  func_0x0001078361ac();
  lVar6 = *unaff_x20;
  func_0x000107836104(lVar6,lVar1);
  func_0x0001078360c8();
  plVar4 = (long *)unaff_x19[1];
  plVar7 = plVar4 + (((lVar3 - lVar6) + lVar10) / -0x18) * 3;
  if ((long *)*unaff_x19 != plVar7 && plVar7 != plVar4) {
    func_0x000107842888();
    while( true ) {
      plVar9 = unaff_x20;
      func_0x00010784262c();
      func_0x00010783609c();
      unaff_x21 = unaff_x21 + 3;
      plVar7 = plVar7 + 3;
      if (plVar7 == plVar4) break;
      unaff_x20 = plVar7;
      if (unaff_x21 != plVar9) {
        unaff_x20 = plVar9;
      }
    }
    plVar7 = plVar9;
    if (unaff_x21 != plVar9) {
      do {
        while( true ) {
          plVar8 = plVar7;
          func_0x00010784262c();
          func_0x00010783609c();
          unaff_x21 = unaff_x21 + 3;
          plVar9 = plVar9 + 3;
          if (plVar9 == plVar4) break;
          plVar7 = plVar9;
          if (unaff_x21 != plVar8) {
            plVar7 = plVar8;
          }
        }
        plVar7 = plVar8;
        plVar9 = plVar8;
      } while (unaff_x21 != plVar8);
    }
  }
  return;
}



/* Entry: 1078361f0; end: 10783626b;  */

void FUN_1078361f0(void)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar3;
  undefined8 *puVar4;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000107843250();
  func_0x000107842588();
  puVar4 = extraout_x8;
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar1;
    if (uVar1 < unaff_x19[1]) {
      func_0x0001078425c0();
      if (!bVar2) {
        func_0x000107842568();
      }
      func_0x000107842dfc();
      puVar4 = extraout_x8_00;
    }
    else {
      lVar3 = (long)((long)extraout_x8 - uVar1) >> 2;
      if ((long)extraout_x8 - uVar1 == 0) {
        lVar3 = 1;
      }
      func_0x000107836290(lVar3);
      func_0x00010784251c();
      func_0x00010783626c();
      func_0x00010784271c();
      func_0x0001078362e0();
      puVar4 = (undefined8 *)unaff_x19[2];
    }
  }
  *puVar4 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar4 + 1);
  return;
}



/* Entry: 107837998; end: 1078379a3;  */

void FUN_107837998(void)

{
  func_0x0001078423e8();
  func_0x000107842254();
  func_0x00010784214c();
  return;
}



/* Entry: 107838198; end: 107838293;  */

double FUN_107838198(int *param_1,int param_2)

{
  if (param_2 == param_1[3]) {
    return (double)param_1[2];
  }
  return (double)*param_1 + (double)(param_2 - param_1[1]) * *(double *)(param_1 + 4);
}



/* Entry: 1078386cc; end: 1078386d7;  */

void FUN_1078386cc(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined4 *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_68 [40];
  
  func_0x0001078423e8();
  func_0x0001078425f8();
  puVar3 = *(undefined4 **)(param_1 + 8);
  if (puVar3 < *(undefined4 **)(param_1 + 0x10)) {
    if (unaff_x19 == puVar3) {
      *puVar3 = *param_3;
      unaff_x20[1] = (long)(puVar3 + 1);
    }
    else {
      func_0x000107842758();
      func_0x0001078387bc();
      lVar1 = 4;
      if ((undefined4 *)unaff_x20[1] <= param_3 || param_3 < unaff_x19) {
        lVar1 = 0;
      }
      *unaff_x19 = *(undefined4 *)((long)param_3 + lVar1);
    }
  }
  else {
    plVar2 = unaff_x20;
    func_0x0001006601e8();
    func_0x000100161bec(auStack_68,plVar2,(long)unaff_x19 - *unaff_x20 >> 2,
                        (undefined8 *)(param_1 + 0x10));
    func_0x0001078387fc(auStack_68,param_3);
    func_0x0001078388c8();
    func_0x0001078426b0();
    func_0x000100161cc4();
  }
  return;
}



/* Entry: 107838ac0; end: 107838afb;  */

void FUN_107838ac0(void)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  func_0x000107842f24();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -0x20;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10783942c; end: 1078395b7;  */

void FUN_10783942c(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  int iVar8;
  int *piVar9;
  long lVar10;
  int *unaff_x19;
  int *unaff_x20;
  int *piVar11;
  
  func_0x00010066015c();
  switch(param_2 - param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    bVar2 = unaff_x20[-2] < *unaff_x19;
    if (unaff_x20[-1] != unaff_x19[1]) {
      bVar2 = unaff_x19[1] < unaff_x20[-1];
    }
    if (bVar2) {
      func_0x000107842618(1);
    }
    break;
  case 3:
    func_0x000107839208();
    break;
  case 4:
    func_0x0001078392e0();
    break;
  case 5:
    func_0x000107839368();
    break;
  default:
    func_0x000107842ffc();
    lVar4 = 0;
    iVar5 = 0;
    piVar9 = unaff_x19 + 6;
    piVar11 = unaff_x19 + 4;
    while (piVar6 = piVar9, piVar6 != unaff_x20) {
      bVar2 = *piVar6 < *piVar11;
      if (piVar6[1] != piVar11[1]) {
        bVar2 = piVar11[1] < piVar6[1];
      }
      if (bVar2) {
        uVar7 = *(undefined8 *)piVar6;
        lVar3 = lVar4;
        do {
          lVar10 = lVar3;
          *(undefined8 *)((long)unaff_x19 + lVar10 + 0x18) =
               *(undefined8 *)((long)unaff_x19 + lVar10 + 0x10);
          piVar9 = unaff_x19;
          if (lVar10 == -0x10) goto LAB_107839568;
          iVar1 = *(int *)((long)unaff_x19 + lVar10 + 0xc);
          iVar8 = (int)((ulong)uVar7 >> 0x20);
          bVar2 = (int)uVar7 < *(int *)((long)unaff_x19 + lVar10 + 8);
          if (iVar1 != iVar8) {
            bVar2 = iVar1 < iVar8;
          }
          lVar3 = lVar10 + -8;
        } while (bVar2);
        piVar9 = (int *)((long)unaff_x19 + lVar10 + 0x10);
LAB_107839568:
        *(undefined8 *)piVar9 = uVar7;
        iVar5 = iVar5 + 1;
        if (iVar5 == 8) {
          return;
        }
      }
      lVar4 = lVar4 + 8;
      piVar11 = piVar6;
      piVar9 = piVar6 + 2;
    }
  }
  return;
}



/* Entry: 107839a74; end: 10783a097;  */

void FUN_107839a74(long *param_1,long *param_2,long *param_3,long param_4,long param_5,long *param_6
                  ,long param_7)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *extraout_x8;
  long *plVar5;
  long extraout_x9;
  long lVar6;
  long lVar7;
  long *plVar8;
  long extraout_x10;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long extraout_x11;
  undefined8 extraout_x12;
  undefined8 *extraout_x13;
  long lVar14;
  long *plVar15;
  
  func_0x0001078427d4();
  do {
    plVar4 = param_2;
    if (param_5 == 0) {
      return;
    }
    while( true ) {
      plVar9 = param_1;
      if (param_5 <= param_7 || param_4 <= param_7) {
        if (param_4 <= param_5) {
          lVar6 = -(long)param_6;
          plVar9 = param_6;
          for (plVar5 = param_1; plVar5 != plVar4; plVar5 = plVar5 + 1) {
            *plVar9 = *plVar5;
            lVar6 = lVar6 + -8;
            plVar9 = plVar9 + 1;
          }
          while( true ) {
            if (plVar9 == param_6) {
              return;
            }
            if (plVar4 == param_3) break;
            bVar2 = *(ulong *)(*param_6 + 0x48) <= *(ulong *)(*plVar4 + 0x48);
            lVar14 = *plVar4;
            if (bVar2) {
              lVar14 = *param_6;
            }
            lVar13 = 8;
            if (bVar2) {
              lVar13 = 0;
            }
            plVar4 = (long *)((long)plVar4 + lVar13);
            lVar13 = 0;
            if (bVar2) {
              lVar13 = 8;
            }
            param_6 = (long *)((long)param_6 + lVar13);
            *param_1 = lVar14;
            param_1 = param_1 + 1;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memmove_11034c660)(param_1,param_6,-((long)param_6 + lVar6));
          return;
        }
        for (lVar6 = 0; (long *)((long)plVar4 + lVar6) != param_3; lVar6 = lVar6 + 8) {
          *(long *)((long)param_6 + lVar6) = *(long *)((long)plVar4 + lVar6);
        }
        plVar9 = (long *)((long)param_6 + lVar6);
        while( true ) {
          param_3 = param_3 + -1;
          if (plVar9 == param_6) {
            return;
          }
          if (plVar4 == param_1) break;
          lVar14 = plVar9[-1];
          lVar6 = plVar4[-1];
          plVar5 = plVar4 + -1;
          if (*(ulong *)(lVar6 + 0x48) <= *(ulong *)(lVar14 + 0x48)) {
            plVar9 = plVar9 + -1;
            plVar5 = plVar4;
            lVar6 = lVar14;
          }
          plVar4 = plVar5;
          *param_3 = lVar6;
        }
        while (plVar9 != param_6) {
          plVar9 = plVar9 + -1;
          *param_3 = *plVar9;
          param_3 = param_3 + -1;
        }
        return;
      }
      while( true ) {
        if (param_4 == 0) {
          return;
        }
        lVar6 = *plVar9;
        if (*(ulong *)(*plVar4 + 0x48) < *(ulong *)(lVar6 + 0x48)) break;
        param_4 = param_4 + -1;
        plVar9 = plVar9 + 1;
      }
      if (param_4 < param_5) {
        lVar14 = param_5 / 2;
        plVar15 = plVar4 + lVar14;
        uVar1 = (long)plVar4 - (long)plVar9 >> 3;
        param_2 = plVar9;
        while (uVar1 != 0) {
          uVar10 = uVar1 >> 1;
          uVar11 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
          uVar1 = uVar10;
          if (*(ulong *)(param_2[uVar10] + 0x48) <= *(ulong *)(*plVar15 + 0x48)) {
            uVar1 = uVar11;
            param_2 = param_2 + uVar10 + 1;
          }
        }
        lVar6 = (long)param_2 - (long)plVar9 >> 3;
      }
      else {
        if (param_4 == 1) {
          *plVar9 = *plVar4;
          *plVar4 = lVar6;
          return;
        }
        lVar6 = param_4 / 2;
        param_2 = plVar9 + lVar6;
        uVar1 = (long)param_3 - (long)plVar4 >> 3;
        plVar5 = plVar4;
        while (plVar15 = plVar5, uVar1 != 0) {
          uVar11 = uVar1 >> 1;
          uVar1 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
          plVar5 = plVar15 + uVar11 + 1;
          if (*(ulong *)(*param_2 + 0x48) <= *(ulong *)(plVar15[uVar11] + 0x48)) {
            uVar1 = uVar11;
            plVar5 = plVar15;
          }
        }
        lVar14 = (long)plVar15 - (long)plVar4 >> 3;
      }
      param_1 = plVar15;
      if ((param_2 != plVar4) && (param_1 = param_2, plVar4 != plVar15)) {
        if (param_2 + 1 == plVar4) {
          lVar13 = *param_2;
          func_0x000107842ce4(param_2);
          param_1 = (long *)((long)param_2 + ((long)plVar15 - (long)plVar4));
          *param_1 = lVar13;
        }
        else if (plVar4 + 1 == plVar15) {
          plVar4 = plVar15 + -1;
          lVar13 = *plVar4;
          param_1 = (long *)((long)plVar15 - ((long)plVar4 - (long)param_2));
          if ((long)plVar4 - (long)param_2 != 0) {
            _memmove(param_1,param_2,(long)plVar4 - (long)param_2);
          }
          *param_2 = lVar13;
        }
        else {
          lVar12 = (long)plVar4 - (long)param_2 >> 3;
          lVar7 = (long)plVar15 - (long)plVar4;
          lVar13 = lVar7 >> 3;
          plVar5 = plVar4;
          plVar8 = param_2;
          if (lVar12 == lVar7 >> 3) {
            for (; param_1 = plVar4, plVar8 != plVar4 && plVar5 != plVar15; plVar8 = plVar8 + 1) {
              lVar13 = *plVar8;
              *plVar8 = *plVar5;
              *plVar5 = lVar13;
              plVar5 = plVar5 + 1;
            }
          }
          else {
            do {
              lVar3 = lVar13;
              lVar13 = 0;
              if (lVar3 != 0) {
                lVar13 = lVar12 / lVar3;
              }
              lVar13 = lVar12 - lVar13 * lVar3;
              lVar12 = lVar3;
            } while (lVar13 != 0);
            plVar4 = param_2 + lVar3;
            while (plVar4 != param_2) {
              do {
                func_0x000107842a18();
                lVar13 = (long)plVar15 - (long)extraout_x13 >> 3;
                plVar4 = (long *)((long)extraout_x13 + extraout_x9);
                if (lVar13 <= extraout_x11) {
                  plVar4 = param_2 + (extraout_x11 - lVar13);
                }
              } while (plVar4 != extraout_x8);
              *extraout_x13 = extraout_x12;
              plVar4 = extraout_x8;
              lVar7 = extraout_x10;
            }
            param_1 = (long *)(lVar7 + (long)param_2);
          }
        }
      }
      param_4 = param_4 - lVar6;
      param_5 = param_5 - lVar14;
      if (param_4 + param_5 <= lVar6 + lVar14) break;
      FUN_107839a74(plVar9,param_2,param_1,lVar6,lVar14);
      plVar4 = plVar15;
      if (param_5 == 0) {
        return;
      }
    }
    FUN_107839a74(param_1,plVar15,param_3,param_4,param_5);
    param_3 = param_1;
    param_1 = plVar9;
    param_5 = lVar14;
    param_4 = lVar6;
  } while( true );
}



/* Entry: 10783ab2c; end: 10783adc7;  */

void FUN_10783ab2c(long param_1,long *param_2,long *param_3,long param_4)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  plVar10 = (long *)(param_1 + 0x30);
  if (*plVar10 != 0) {
    func_0x000107842758();
    func_0x00010783adc8();
    lVar3 = *(long *)(param_1 + 0x30);
    lVar4 = *(long *)(lVar3 + 0x48);
    cVar1 = *(char *)(param_1 + 0x5a);
    if (cVar1 == '\0') {
      if ((int)*param_2 == *(int *)(lVar4 + 8) &&
          *(int *)((long)param_2 + 4) == *(int *)(lVar4 + 0xc)) {
        return;
      }
    }
    else if ((int)*param_2 == *(int *)(*(long *)(lVar4 + 0x18) + 8) &&
             *(int *)((long)param_2 + 4) == *(int *)(*(long *)(lVar4 + 0x18) + 0xc)) {
      return;
    }
    func_0x00010783b400(lVar3,param_2,lVar4,param_4);
    if (cVar1 == '\0') {
      *(long *)(*(long *)(param_1 + 0x30) + 0x48) = lVar3;
    }
    return;
  }
  lVar3 = param_4;
  func_0x00010783c0dc();
  *plVar10 = lVar3;
  uVar8 = *(ulong *)(param_4 + 0xc0);
  plVar11 = (long *)(param_4 + 0xb0);
  uVar5 = *(ulong *)(param_4 + 0xb8) - *plVar11;
  if (uVar5 < uVar8 - *plVar11) {
    if (*(ulong *)(param_4 + 0xb8) < uVar8) {
      func_0x000107843264();
      lVar4 = extraout_x8 + 0x20;
    }
    else {
      plVar2 = plVar11;
      func_0x00010783b574(plVar11,((long)uVar5 >> 5) + 1);
      func_0x000107838a68(auStack_78,plVar2,
                          *(long *)(param_4 + 0xb8) - *(long *)(param_4 + 0xb0) >> 5,
                          (ulong *)(param_4 + 0xc0));
      func_0x000107843264(lStack_68);
      lStack_68 = extraout_x8_00 + 0x20;
      func_0x000107838a48(plVar11,auStack_78);
      lVar4 = *(long *)(param_4 + 0xb8);
      FUN_107838ac0(auStack_78);
    }
    *(long *)(param_4 + 0xb8) = lVar4;
    lVar4 = lVar4 + -0x20;
  }
  else {
    lVar4 = param_4 + 0x50;
    func_0x00010783b5b4();
    if (lVar4 == 0) {
      FUN_10783b5dc(param_4 + 0x50);
    }
    plVar11 = (long *)(param_4 + 0x50);
    func_0x00010783b908();
    *plVar11 = lVar3;
    plVar11[1] = *param_3;
    plVar11[2] = (long)plVar11;
    plVar11[3] = (long)plVar11;
    *(long *)(param_4 + 0x78) = *(long *)(param_4 + 0x78) + 1;
    lVar4 = param_4 + 0x50;
    func_0x00010783b550();
  }
  func_0x00010783ba00(param_4 + 0x18,lVar4);
  *(long *)(lVar3 + 0x48) = lVar4;
  plVar11 = (long *)*param_2;
  plVar2 = (long *)param_2[1];
  do {
    plVar7 = plVar11;
    if (plVar2 == plVar11) break;
    plVar6 = plVar2 + -1;
    plVar7 = plVar2;
    plVar2 = plVar6;
  } while (*plVar6 != param_1);
  plVar2 = plVar7 + -1;
  lVar3 = 0;
  while (lVar4 = lVar3, plVar7 = plVar2 + -1, plVar2 != plVar11) {
    lVar9 = *plVar7;
    plVar2 = plVar7;
    lVar3 = lVar4;
    if ((((lVar9 != 0) && (*(long *)(lVar9 + 0x30) != 0)) && (lVar3 = lVar9, lVar4 != 0)) &&
       (lVar3 = 0, *(long *)(lVar4 + 0x30) != *(long *)(lVar9 + 0x30))) {
      lVar3 = lVar4;
    }
  }
  if (lVar4 == 0) {
    *(undefined8 *)(*plVar10 + 0x28) = 0;
  }
  else {
    *(undefined8 *)(*plVar10 + 0x28) = *(undefined8 *)(lVar4 + 0x30);
  }
  func_0x00010784262c();
  func_0x00010783bf28();
  *(long *)(param_1 + 0x28) = *param_3;
  return;
}



/* Entry: 10783b5dc; end: 10783b907;  */

/* WARNING: Possible PIC construction at 0x00010783b860: Changing call to branch */

void FUN_10783b5dc(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long extraout_x8;
  undefined8 *puVar9;
  undefined8 *extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  long lVar10;
  undefined8 *puVar11;
  undefined8 extraout_x9;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined1 *unaff_x29;
  undefined1 *puVar17;
  undefined8 unaff_x30;
  undefined8 uStack_d0;
  ulong *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  ulong *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  ulong *puStack_70;
  
  puVar8 = &uStack_d0;
  puVar17 = &stack0xfffffffffffffff0;
  uVar16 = param_1[4] - 0x80;
  uVar3 = uVar16 == 0;
  if (0x7f < param_1[4]) {
    param_1[4] = uVar16;
    param_1[1] = param_1[1] + 8;
    puVar8 = (undefined8 *)register0x00000008;
    param_1 = unaff_x19;
    puVar17 = unaff_x29;
code_r0x00010783b938:
    func_0x000107843250();
    *(undefined1 **)((long)puVar8 + 0x60) = puVar17;
    *(undefined8 *)((long)puVar8 + 0x68) = unaff_x30;
    func_0x000107842588();
    puVar11 = extraout_x8_02;
    if ((bool)uVar3) {
      uVar16 = *param_1;
      bVar4 = param_1[1] == uVar16;
      if (uVar16 < param_1[1]) {
        func_0x0001078425c0();
        if (!bVar4) {
          func_0x000107842568();
        }
        func_0x000107842dfc();
        puVar11 = extraout_x8_03;
      }
      else {
        lVar10 = (long)((long)extraout_x8_02 - uVar16) >> 2;
        if ((long)extraout_x8_02 - uVar16 == 0) {
          lVar10 = 1;
        }
        *(undefined8 *)((long)puVar8 + 0x20) = extraout_x9;
        func_0x000107838b28(lVar10);
        func_0x00010784251c();
        func_0x00010783b9b4();
        func_0x00010784271c();
        func_0x000107838b50();
        puVar11 = (undefined8 *)param_1[2];
      }
    }
    *puVar11 = unaff_x20;
    param_1[2] = (ulong)(puVar11 + 1);
    return;
  }
  puVar11 = (undefined8 *)param_1[1];
  puVar15 = (undefined8 *)param_1[2];
  puVar13 = (undefined8 *)*param_1;
  uVar16 = (long)puVar15 - (long)puVar11;
  puVar14 = param_1 + 3;
  puVar12 = (undefined8 *)*puVar14;
  if (uVar16 < (ulong)((long)puVar12 - (long)puVar13)) {
    unaff_x20 = 0x1000;
    __Znwm();
    if (puVar12 == puVar15) {
      uVar3 = 0;
      if (puVar11 == puVar13) {
        puVar12 = (undefined8 *)((long)puVar12 - (long)puVar11 >> 2);
        uVar3 = puVar15 == puVar11;
        if ((bool)uVar3) {
          puVar12 = (undefined8 *)0x1;
        }
        lVar10 = (long)puVar12 * 2;
        puStack_70 = puVar14;
        func_0x000107838b28();
        func_0x000107842b7c(lVar10 + 6);
        puStack_78 = puVar12 + (long)param_2;
        puStack_90 = puVar12;
        puStack_88 = (undefined8 *)extraout_x8_01;
        puStack_80 = (undefined8 *)extraout_x8_01;
        func_0x00010783b9b4(&puStack_90,param_1[1],param_1[2]);
        puVar15 = (undefined8 *)param_1[1];
        puVar11 = (undefined8 *)*param_1;
        puVar13 = (undefined8 *)param_1[3];
        puVar12 = (undefined8 *)param_1[2];
        param_1[1] = (ulong)puStack_88;
        *param_1 = (ulong)puStack_90;
        param_1[3] = (ulong)puStack_78;
        param_1[2] = (ulong)puStack_80;
        puStack_90 = puVar11;
        puStack_88 = puVar15;
        puStack_80 = puVar12;
        puStack_78 = puVar13;
        func_0x000107842fb4();
        puVar11 = (undefined8 *)param_1[1];
      }
      puVar11[-1] = unaff_x20;
      param_1[1] = (ulong)puVar11;
      func_0x000107842764();
      unaff_x30 = 0x10783b864;
      goto code_r0x00010783b938;
    }
    *puVar15 = unaff_x20;
    param_1[2] = (ulong)(puVar15 + 1);
  }
  else {
    puVar8 = (undefined8 *)((long)puVar12 - (long)puVar13 >> 2);
    if (puVar12 == puVar13) {
      puVar8 = (undefined8 *)0x1;
    }
    puStack_98 = puVar14;
    func_0x000107838b28();
    puVar12 = (undefined8 *)((long)puVar8 + uVar16);
    puVar13 = puVar8 + (long)param_2;
    uVar5 = 0x1000;
    puVar7 = param_2;
    puStack_b8 = puVar8;
    puStack_b0 = puVar12;
    puStack_a8 = puVar12;
    puStack_a0 = puVar13;
    __Znwm();
    puStack_c8 = param_1 + 5;
    uStack_c0 = 0x80;
    puVar9 = puVar12;
    if (uVar16 == (long)param_2 * 8) {
      uStack_d0 = uVar5;
      if (puVar15 == puVar11) {
        puVar11 = (undefined8 *)0x1;
        puStack_70 = puVar14;
        func_0x000107838b28();
        puStack_78 = puVar11 + (long)puVar7;
        puVar7 = puVar12;
        puStack_90 = puVar11;
        puStack_88 = puVar11;
        puStack_80 = puVar11;
        func_0x00010783b9b4(&puStack_90,puVar12,puVar12);
        puVar6 = puStack_78;
        puVar9 = puStack_80;
        puVar15 = puStack_88;
        puVar11 = puStack_90;
        puStack_b8 = puStack_90;
        puStack_b0 = puStack_88;
        puStack_a8 = puStack_80;
        puStack_a0 = puStack_78;
        puStack_90 = puVar8;
        puStack_88 = puVar12;
        puStack_80 = puVar12;
        puStack_78 = puVar13;
        func_0x000107842fb4();
        puVar8 = puVar11;
        puVar12 = puVar15;
        puVar13 = puVar6;
      }
      else {
        func_0x000107842918((long)puVar12 - (long)puVar8);
        puVar12 = puVar12 + extraout_x8;
        puVar9 = puVar12;
        puStack_b0 = puVar12;
      }
    }
    puVar11 = puVar9 + 1;
    *puVar9 = uVar5;
    uStack_d0 = 0;
    puVar15 = (undefined8 *)param_1[2];
    puStack_a8 = puVar11;
    while (puVar9 = (undefined8 *)param_1[1], puVar15 != puVar9) {
      puVar9 = puVar12;
      if (puVar12 == puVar8) {
        if (puVar11 < puVar13) {
          lVar10 = (long)puVar11 - (long)puVar8;
          puVar6 = puVar11 + (((long)puVar13 - (long)puVar11 >> 3) + 1) / 2;
          puVar9 = (undefined8 *)((long)puVar6 - ((long)puVar11 - (long)puVar8));
          puVar11 = puVar6;
          if (lVar10 != 0) {
            _memmove(puVar9,puVar12,lVar10);
            puVar7 = puVar12;
          }
        }
        else {
          puVar9 = (undefined8 *)((long)puVar13 - (long)puVar8 >> 2);
          if ((long)puVar13 - (long)puVar8 == 0) {
            puVar9 = (undefined8 *)0x1;
          }
          puVar6 = puVar9;
          puStack_70 = puVar14;
          func_0x000107838b28();
          func_0x000107842b7c((long)puVar9 * 2 + 6);
          puStack_78 = puVar6 + (long)puVar7;
          puVar7 = puVar8;
          puStack_90 = puVar6;
          puStack_88 = extraout_x8_00;
          puStack_80 = extraout_x8_00;
          func_0x00010783b9b4(&puStack_90,puVar8,puVar11);
          puVar2 = puStack_78;
          puVar1 = puStack_80;
          puVar9 = puStack_88;
          puVar6 = puStack_90;
          puStack_90 = puVar8;
          puStack_88 = puVar12;
          puStack_80 = puVar11;
          puStack_78 = puVar13;
          func_0x000107842fb4();
          puVar8 = puVar6;
          puVar11 = puVar1;
          puVar13 = puVar2;
        }
      }
      puVar15 = puVar15 + -1;
      puVar12 = puVar9 + -1;
      *puVar12 = *puVar15;
    }
    puStack_b8 = (undefined8 *)*param_1;
    *param_1 = (ulong)puVar8;
    param_1[1] = (ulong)puVar12;
    puStack_a0 = (undefined8 *)param_1[3];
    puStack_a8 = (undefined8 *)param_1[2];
    param_1[2] = (ulong)puVar11;
    param_1[3] = (ulong)puVar13;
    puStack_b0 = puVar9;
    func_0x00010783b9d8(&uStack_d0);
    func_0x000107838b50(&puStack_b8);
  }
  return;
}



/* Entry: 10783bacc; end: 10783bb4f;  */

void FUN_10783bacc(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  
  puVar1 = param_3;
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x30);
  }
  plVar2 = *(long **)(param_2 + 0x38);
  for (plVar3 = *(long **)(param_2 + 0x30); plVar3 != plVar2; plVar3 = plVar3 + 1) {
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 0x28) = param_1;
      func_0x00010783beb4(*plVar3,puVar1);
      *plVar3 = 0;
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    param_3 = (undefined8 *)(*(long *)(param_2 + 0x28) + 0x30);
  }
  func_0x00010783bf04(param_2,*param_3,param_3[1]);
  func_0x0001078426ec();
  return;
}



/* Entry: 10783bfa4; end: 10783bfcb;  */

undefined8 FUN_10783bfa4(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3d == 0) {
    func_0x0001078432e0();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  func_0x00010783bfec();
  func_0x000107842254();
  func_0x00010784214c();
  return param_1;
}



/* Entry: 10783c540; end: 10783c563;  */

void FUN_10783c540(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10783ce4c; end: 10783d02b;  */

void FUN_10783ce4c(long param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *unaff_x20;
  long unaff_x21;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puStack_78;
  long lStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar7 = param_1;
  func_0x000107842f78();
  func_0x00010783ed28(&puStack_78,*(undefined8 *)(lVar7 + 0xa8));
  func_0x00010783e134(param_1 + 0x80);
  func_0x000107842c90();
  lVar7 = param_1 + 0x80;
  func_0x00010783c48c();
  while (puVar6 = puStack_78, uVar2 = unaff_x21 == lVar7, !(bool)uVar2) {
    func_0x00010783ed7c(&puStack_78,unaff_x21);
    func_0x0001078428d4();
    if ((bool)uVar2) {
      unaff_x20 = unaff_x20 + 1;
      unaff_x21 = *unaff_x20;
    }
  }
  lVar7 = lStack_70 - (long)puStack_78 >> 3;
  uStack_50 = 0;
  uStack_48 = 0;
  uVar2 = lVar7 == 0x81;
  if (lVar7 < 0x81) {
    func_0x000107842e88();
  }
  else {
    func_0x00010783ede0(auStack_60,lVar7);
    func_0x00010783ee20(&uStack_50,auStack_60);
    func_0x00010783efbc(auStack_60);
  }
  FUN_107840674(puVar6,lStack_70,lVar7);
  func_0x00010783efbc(&uStack_50);
  puVar6 = puStack_78;
  do {
    func_0x0001078431fc();
    if ((bool)uVar2) {
      func_0x000107842cec();
      return;
    }
    uVar5 = *puVar6;
    uVar2 = 0;
    if (*(long *)(uVar5 + 0x48) != 0) {
      func_0x00010783e1a8();
      uVar2 = uVar5 == 3;
      if (2 < uVar5) {
        func_0x000107842ad4();
        iVar3 = (int)uVar5;
        func_0x000107835a34();
        if (iVar3 == 0) {
          *(undefined1 *)(*puVar6 + 0x59) = 1;
          puVar9 = puVar6;
          do {
            do {
              puVar8 = puVar9;
              uVar2 = puVar8 == puStack_78;
              if ((bool)uVar2) {
                iVar3 = (int)*puVar6;
                func_0x00010783e244();
                if (iVar3 != 0) {
                  func_0x000107842698();
                  __ZNSt13runtime_errorC1EPKc();
                  func_0x0001078421d4();
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10783d004);
                  (*pcVar1)();
                }
                func_0x000107842fbc(*puVar6,0);
                goto LAB_10783cf54;
              }
              puVar9 = puVar8 + -1;
              iVar3 = (int)*puVar9;
              func_0x00010783e244();
              iVar4 = (int)*puVar6;
              func_0x00010783e244();
              uVar2 = iVar3 == iVar4;
            } while ((bool)uVar2);
            uVar5 = *puVar6;
            func_0x00010783fd3c(uVar5,*puVar9);
          } while ((int)uVar5 == 0);
          func_0x000107842fbc(*puVar6,puVar8[-1]);
          goto LAB_10783cf54;
        }
      }
      func_0x00010783e1dc(*puVar6,param_1);
    }
LAB_10783cf54:
    puVar6 = puVar6 + 1;
  } while( true );
}



/* Entry: 10783e04c; end: 10783e133;  */

undefined8 * FUN_10783e04c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  long extraout_x9;
  long lVar5;
  long extraout_x9_00;
  long extraout_x11;
  undefined8 *puVar6;
  undefined8 *extraout_x11_00;
  long extraout_x12;
  undefined8 extraout_x12_00;
  undefined8 *extraout_x13;
  undefined8 *extraout_x14;
  undefined8 *extraout_x15;
  undefined8 unaff_x21;
  
  puVar6 = param_3;
  if ((param_1 != param_2) && (puVar6 = param_1, param_2 != param_3)) {
    if (param_1 + 1 == param_2) {
      func_0x000107842900();
      *(undefined8 *)((long)param_1 + (long)param_3) = unaff_x21;
      puVar6 = (undefined8 *)((long)param_1 + (long)param_3);
    }
    else {
      bVar3 = param_2 + 1 == param_3;
      if (bVar3) {
        func_0x000107842ea0();
        if (!bVar3) {
          func_0x000107842764();
          _memmove();
        }
        *param_1 = unaff_x21;
        puVar6 = param_3;
      }
      else {
        func_0x000107843208();
        puVar4 = param_2;
        if (bVar3) {
          while (puVar6 = param_2, param_1 != param_2 && puVar4 != param_3) {
            func_0x0001078431c8();
            puVar4 = extraout_x8;
          }
        }
        else {
          do {
            func_0x000107842a28();
          } while (extraout_x11 != 0);
          puVar6 = param_1 + extraout_x12;
          lVar5 = extraout_x9;
          while( true ) {
            cVar1 = SBORROW8((long)puVar6,(long)param_1);
            cVar2 = (long)puVar6 - (long)param_1 < 0;
            if (puVar6 == param_1) break;
            func_0x000107842d8c();
            do {
              func_0x000107842a18();
              func_0x0001078431dc();
              puVar6 = extraout_x15;
              if (cVar2 == cVar1) {
                puVar6 = extraout_x14;
              }
              cVar1 = SBORROW8((long)puVar6,(long)extraout_x11_00);
              cVar2 = (long)puVar6 - (long)extraout_x11_00 < 0;
            } while (puVar6 != extraout_x11_00);
            *extraout_x13 = extraout_x12_00;
            lVar5 = extraout_x9_00;
            puVar6 = extraout_x11_00;
          }
          puVar6 = (undefined8 *)(lVar5 + (long)param_1);
        }
      }
    }
  }
  return puVar6;
}



/* Entry: 10783e750; end: 10783e7c3;  */

void FUN_10783e750(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x38);
  for (plVar2 = *(long **)(param_1 + 0x30); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if (*plVar2 != 0) {
      *plVar2 = 0;
    }
  }
  func_0x000107842778();
  func_0x0001078426ec();
  return;
}



/* Entry: 10783efa4; end: 10783efbb;  */

void FUN_10783efa4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10783f7c4; end: 10783fb63;  */

void FUN_10783f7c4(long *param_1,long *param_2,long *param_3,long param_4,long param_5,long *param_6
                  ,long param_7)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *extraout_x9;
  long *extraout_x9_00;
  long lVar13;
  long extraout_x10;
  long extraout_x10_00;
  uint extraout_w11;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  
  func_0x0001078427d4();
LAB_10783f7f0:
  plVar9 = param_2;
  lVar11 = param_5;
  lVar17 = param_4;
  if (param_5 == 0) {
    return;
  }
LAB_10783f800:
  if (lVar11 <= param_7 || lVar17 <= param_7) {
    plVar12 = param_6;
    plVar10 = param_1;
    if (lVar17 <= lVar11) {
      for (; plVar10 != plVar9; plVar10 = plVar10 + 1) {
        *plVar12 = *plVar10;
        plVar12 = plVar12 + 1;
      }
      while( true ) {
        if (plVar12 == param_6) {
          return;
        }
        cVar6 = SBORROW8((long)plVar9,(long)param_3);
        cVar7 = (long)plVar9 - (long)param_3 < 0;
        bVar8 = plVar9 == param_3;
        if (bVar8) break;
        func_0x000107842d1c();
        if (bVar8) {
          func_0x0001078432cc();
          plVar12 = extraout_x9_00;
          lVar11 = extraout_x10_00;
          uVar14 = extraout_w11;
        }
        else {
          uVar14 = (uint)(!bVar8 && cVar7 == cVar6);
          plVar12 = extraout_x9;
          lVar11 = extraout_x10;
        }
        lVar17 = lVar11;
        plVar10 = plVar9;
        if (uVar14 == 0) {
          lVar17 = 0;
          plVar10 = param_6;
        }
        plVar9 = (long *)((long)plVar9 + lVar17);
        lVar17 = 0;
        if (uVar14 == 0) {
          lVar17 = lVar11;
        }
        param_6 = (long *)((long)param_6 + lVar17);
        *param_1 = *plVar10;
        param_1 = param_1 + 1;
      }
      func_0x0001078431f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memmove_11034c660)();
      return;
    }
    for (lVar11 = 0; (long *)((long)plVar9 + lVar11) != param_3; lVar11 = lVar11 + 8) {
      *(long *)((long)param_6 + lVar11) = *(long *)((long)plVar9 + lVar11);
    }
    plVar12 = (long *)((long)param_6 + lVar11);
    while( true ) {
      param_3 = param_3 + -1;
      if (plVar12 == param_6) {
        return;
      }
      if (plVar9 == param_1) break;
      lVar11 = plVar9[-1];
      lVar17 = plVar12[-1];
      iVar2 = *(int *)(lVar17 + 0xc);
      iVar3 = *(int *)(lVar11 + 0xc);
      if (iVar2 == iVar3) {
        bVar8 = *(int *)(lVar17 + 8) < *(int *)(lVar11 + 8);
      }
      else {
        bVar8 = iVar3 < iVar2;
      }
      plVar10 = plVar12;
      plVar5 = plVar9 + -1;
      plVar19 = plVar9;
      if (!bVar8) {
        plVar10 = plVar12 + -1;
        plVar5 = plVar9;
        plVar19 = plVar12;
      }
      plVar9 = plVar5;
      *param_3 = plVar19[-1];
      plVar12 = plVar10;
    }
    while (plVar12 != param_6) {
      plVar12 = plVar12 + -1;
      *param_3 = *plVar12;
      param_3 = param_3 + -1;
    }
    return;
  }
  lVar18 = 0;
  plVar10 = param_1;
  plVar12 = param_1;
  do {
    param_4 = lVar17 - lVar18;
    if (param_4 == 0) {
      return;
    }
    lVar13 = *plVar9;
    lVar15 = param_1[lVar18];
    if (*(int *)(lVar13 + 0xc) == *(int *)(lVar15 + 0xc)) {
      if (*(int *)(lVar13 + 8) < *(int *)(lVar15 + 8)) break;
    }
    else if (*(int *)(lVar15 + 0xc) < *(int *)(lVar13 + 0xc)) break;
    plVar12 = plVar12 + 1;
    lVar18 = lVar18 + 1;
    plVar10 = plVar10 + 1;
  } while( true );
  if (param_4 < lVar11) {
    param_5 = lVar11 / 2;
    plVar19 = plVar9 + param_5;
    uVar4 = (long)plVar9 - (long)plVar10 >> 3;
    param_2 = plVar12;
    while (uVar4 != 0) {
      uVar16 = uVar4 >> 1;
      lVar13 = param_2[uVar16];
      iVar2 = *(int *)(*plVar19 + 0xc);
      iVar3 = *(int *)(lVar13 + 0xc);
      if (iVar2 == iVar3) {
        bVar8 = *(int *)(*plVar19 + 8) < *(int *)(lVar13 + 8);
      }
      else {
        bVar8 = iVar3 < iVar2;
      }
      uVar1 = uVar4 + ~uVar16;
      uVar4 = uVar16;
      if (!bVar8) {
        uVar4 = uVar1;
        param_2 = param_2 + uVar16 + 1;
      }
    }
    param_4 = (long)param_2 - (long)plVar10 >> 3;
  }
  else {
    if (lVar17 + -1 == lVar18) {
      param_1[lVar18] = lVar13;
      *plVar9 = lVar15;
      return;
    }
    param_4 = param_4 / 2;
    param_2 = plVar12 + param_4;
    uVar4 = (long)param_3 - (long)plVar9 >> 3;
    plVar10 = plVar9;
    while (plVar19 = plVar10, uVar4 != 0) {
      uVar16 = uVar4 >> 1;
      lVar13 = plVar19[uVar16];
      iVar2 = *(int *)(lVar13 + 0xc);
      iVar3 = *(int *)(param_1[param_4 + lVar18] + 0xc);
      if (iVar2 == iVar3) {
        bVar8 = *(int *)(lVar13 + 8) < *(int *)(param_1[param_4 + lVar18] + 8);
      }
      else {
        bVar8 = iVar3 < iVar2;
      }
      uVar4 = uVar4 + ~uVar16;
      plVar10 = plVar19 + uVar16 + 1;
      if (!bVar8) {
        uVar4 = uVar16;
        plVar10 = plVar19;
      }
    }
    param_5 = (long)plVar19 - (long)plVar9 >> 3;
  }
  lVar13 = (lVar17 - param_4) - lVar18;
  lVar15 = lVar11 - param_5;
  param_1 = param_2;
  FUN_10783e04c(param_2,plVar9,plVar19);
  if (((lVar17 + lVar11) - (param_4 + param_5)) - lVar18 <= param_4 + param_5) goto LAB_10783f9f0;
  FUN_10783f7c4(plVar12,param_2,param_1,param_4,param_5,param_6,param_7);
  plVar9 = plVar19;
  lVar11 = lVar15;
  lVar17 = lVar13;
  if (lVar15 == 0) {
    return;
  }
  goto LAB_10783f800;
LAB_10783f9f0:
  FUN_10783f7c4(param_1,plVar19,param_3,lVar13,lVar15,param_6,param_7);
  param_3 = param_1;
  param_1 = plVar12;
  goto LAB_10783f7f0;
}



/* Entry: 10783fff0; end: 107840077;  */

ulong FUN_10783fff0(double param_1,double param_2,ulong param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  ulong unaff_x19;
  ulong unaff_x20;
  int iVar6;
  int iVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  func_0x0001078425f8();
  func_0x00010783e244();
  iVar6 = (int)param_3;
  if (unaff_x19 == 0) {
    if ((param_3 & 1) != 0) goto LAB_107840054;
  }
  else {
    param_3 = unaff_x19;
    func_0x00010783e244();
    if (iVar6 == (int)param_3) {
LAB_107840054:
      func_0x000107842698();
      __ZNSt13runtime_errorC1EPKc();
      func_0x0001078422a0();
      func_0x000107843090();
      func_0x0001078429bc();
      func_0x000107842744();
      iVar6 = *(int *)(param_3 + 8);
      iVar7 = *(int *)(param_3 + 0xc);
      bVar2 = true;
      bVar1 = true;
      uVar5 = param_3;
      uVar8 = param_3;
      do {
        dVar11 = (double)iVar6;
        dVar9 = (double)iVar7;
        uVar8 = *(ulong *)(uVar8 + 0x10);
        iVar6 = *(int *)(uVar8 + 8);
        iVar7 = *(int *)(uVar8 + 0xc);
        dVar12 = (double)iVar6;
        dVar10 = (double)iVar7;
        func_0x000107835a3c(dVar10,param_2);
        if (((int)uVar5 != 0) &&
           ((func_0x000107835a3c(dVar12,param_1), (uVar5 & 1) != 0 ||
            ((func_0x000107835a3c(dVar9,param_2), (int)uVar5 != 0 &&
             (param_1 <= dVar11 != param_1 < dVar12)))))) {
code_r0x0001078401ac:
          bVar1 = true;
          break;
        }
        bVar3 = bVar1;
        bVar4 = bVar2;
        if (dVar9 < param_2 == param_2 <= dVar10) {
          func_0x00010783be88(dVar11,param_1);
          if ((int)uVar5 == 0) {
            if (dVar12 > param_1) goto code_r0x000107840154;
          }
          else if (dVar12 <= param_1) {
code_r0x000107840154:
            dVar11 = -((dVar9 - param_2) * (dVar12 - param_1)) +
                     (dVar10 - param_2) * (dVar11 - param_1);
            func_0x000107835a34(dVar11);
            if ((uVar5 & 1) != 0) goto code_r0x0001078401ac;
            bVar3 = !bVar2;
            bVar4 = !bVar2;
            if (dVar10 <= dVar9 == 0.0 < dVar11) {
              bVar3 = bVar1;
              bVar4 = bVar2;
            }
          }
          else {
            bVar3 = !bVar1;
            bVar4 = !bVar1;
          }
        }
        bVar2 = bVar4;
        bVar1 = bVar3;
      } while (param_3 != uVar8);
      return (ulong)(uint)(int)bVar1;
    }
  }
  uVar5 = unaff_x20;
  func_0x00010783bf04();
  func_0x000107842af4();
  *(ulong *)(unaff_x20 + 0x28) = unaff_x19;
  return uVar5;
}



/* Entry: 107840674; end: 1078407c7;  */

/* WARNING: Possible PIC construction at 0x000107840a04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107840a18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107840a08) */
/* WARNING: Removing unreachable block (ram,0x000107840a10) */
/* WARNING: Removing unreachable block (ram,0x000107840a1c) */

void FUN_107840674(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x9;
  undefined8 *extraout_x10;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long lVar12;
  undefined8 *unaff_x23;
  undefined8 *puVar13;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined *unaff_x30;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000070;
  undefined *in_stack_00000078;
  
  func_0x0001078430f4();
  cVar4 = SBORROW8(param_3,2);
  cVar5 = (long)(param_3 - 2) < 0;
  bVar6 = param_3 == 2;
  if (param_3 < 2) {
    return;
  }
  if (bVar6) {
    uVar9 = param_2[-1];
    func_0x0001078407c8(uVar9,param_1);
    if ((int)uVar9 == 0) {
      return;
    }
    func_0x000107842618();
    return;
  }
  puVar11 = param_1;
  func_0x000107842b4c();
  if (!bVar6 && cVar5 == cVar4) {
    func_0x000107842190();
    if (bVar6 || cVar5 != cVar4) {
      func_0x000107840810();
      func_0x0001078422fc();
      func_0x000107840810();
      puVar11 = unaff_x21 + (long)unaff_x23;
      func_0x000107842c9c();
      while( true ) {
        if (unaff_x21 == unaff_x22) {
          while (unaff_x23 != puVar11) {
            func_0x000107842b88();
          }
          return;
        }
        if (unaff_x23 == puVar11) break;
        uVar9 = *unaff_x23;
        func_0x0001078407c8(uVar9,unaff_x21);
        bVar6 = (int)uVar9 == 0;
        puVar13 = unaff_x23;
        if (bVar6) {
          puVar13 = unaff_x21;
        }
        puVar1 = (undefined8 *)0x0;
        if (bVar6) {
          puVar1 = unaff_x24;
        }
        unaff_x21 = (undefined8 *)((long)unaff_x21 + (long)puVar1);
        puVar1 = unaff_x24;
        if (bVar6) {
          puVar1 = (undefined8 *)0x0;
        }
        unaff_x23 = (undefined8 *)((long)unaff_x23 + (long)puVar1);
        func_0x000107842b70(puVar13);
      }
      while (unaff_x21 != unaff_x22) {
        func_0x000107842b20();
      }
      return;
    }
    FUN_107840674();
    func_0x000107842314();
    FUN_107840674();
    func_0x00010784220c();
    func_0x000107842f84();
    while( true ) {
      func_0x0001078427d4();
      in_stack_00000070 = unaff_x29;
      in_stack_00000078 = unaff_x30;
      func_0x0001078424cc();
      func_0x00010784292c();
      if (unaff_x23 == (undefined8 *)0x0) {
        return;
      }
      if ((long)unaff_x24 <= (long)unaff_x22 || (long)unaff_x25 <= (long)unaff_x22) break;
      while( true ) {
        if (unaff_x25 == (undefined8 *)0x0) {
          return;
        }
        puVar11 = (undefined8 *)*unaff_x21;
        func_0x000107843080();
        if (((ulong)puVar11 & 1) != 0) break;
        param_2 = param_2 + 1;
        unaff_x25 = (undefined8 *)((long)unaff_x25 + -1);
      }
      cVar4 = SBORROW8((long)unaff_x25,(long)unaff_x24);
      cVar5 = (long)unaff_x25 - (long)unaff_x24 < 0;
      uVar7 = unaff_x25 == unaff_x24;
      if ((long)unaff_x25 < (long)unaff_x24) {
        func_0x0001078424ac();
        while (unaff_x23 != (undefined8 *)0x0) {
          func_0x000107842840();
          func_0x0001078407c8();
          func_0x0001078426d4();
          unaff_x23 = unaff_x27;
          if ((bool)uVar7) {
            unaff_x23 = extraout_x9;
          }
        }
        func_0x000107842d4c();
      }
      else {
        cVar4 = SBORROW8((long)unaff_x25,1);
        cVar5 = (long)unaff_x25 + -1 < 0;
        uVar7 = unaff_x25 == (undefined8 *)0x1;
        if ((bool)uVar7) {
          func_0x00010784296c();
          return;
        }
        func_0x00010784245c();
        puVar13 = unaff_x22;
        while (unaff_x22 = puVar13, unaff_x27 != (undefined8 *)0x0) {
          func_0x00010784282c();
          func_0x0001078407c8();
          func_0x000107842818();
          puVar13 = unaff_x28;
          if ((bool)uVar7) {
            puVar13 = unaff_x22;
          }
        }
        func_0x000107842e2c();
      }
      func_0x000107842444();
      func_0x000107842874();
      unaff_x29 = &stack0x00000070;
      if (cVar5 == cVar4) {
        func_0x0001078424fc();
        unaff_x30 = &UNK_107840a1c;
      }
      else {
        func_0x00010784241c();
        unaff_x30 = &UNK_107840a08;
      }
    }
    if ((long)unaff_x24 < (long)unaff_x25) {
      lVar12 = 0;
      while ((undefined8 *)((long)unaff_x21 + lVar12) != in_stack_00000010) {
        func_0x0001078429ec();
        lVar12 = extraout_x8;
        in_stack_00000010 = extraout_x10;
      }
      puVar13 = (undefined8 *)((long)unaff_x26 + lVar12);
      while( true ) {
        in_stack_00000010 = in_stack_00000010 + -1;
        if (puVar13 == unaff_x26) {
          return;
        }
        if (unaff_x21 == param_2) break;
        func_0x0001078427f0();
        func_0x0001078407c8();
        puVar1 = puVar13;
        puVar3 = unaff_x22;
        puVar2 = unaff_x21;
        if ((int)puVar11 == 0) {
          puVar1 = unaff_x24;
          puVar3 = unaff_x21;
          puVar2 = puVar13;
        }
        unaff_x21 = puVar3;
        *in_stack_00000010 = puVar2[-1];
        puVar13 = puVar1;
      }
      while (puVar13 != unaff_x26) {
        func_0x000107843278();
      }
      return;
    }
    func_0x000107842e4c();
    puVar11 = extraout_x8_00;
    while (puVar11 != unaff_x21) {
      func_0x000107842e3c();
      puVar11 = extraout_x8_01;
    }
    while( true ) {
      bVar6 = unaff_x22 == unaff_x26;
      if (bVar6) {
        return;
      }
      func_0x0001078431fc();
      if (bVar6) break;
      iVar8 = (int)*unaff_x21;
      func_0x0001078407c8();
      puVar11 = unaff_x21;
      if (iVar8 == 0) {
        puVar11 = unaff_x26;
      }
      lVar12 = 8;
      if (iVar8 == 0) {
        lVar12 = 0;
      }
      unaff_x21 = (undefined8 *)((long)unaff_x21 + lVar12);
      func_0x000107842d3c(puVar11);
    }
    func_0x000107842604();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)();
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  lVar12 = 0;
  puVar11 = param_1;
  do {
    puVar13 = puVar11 + 1;
    if (puVar13 == param_2) {
      return;
    }
    uVar10 = puVar11[1];
    func_0x0001078407c8();
    if ((int)uVar10 != 0) {
      uVar9 = *puVar13;
      do {
        func_0x000107842d7c();
        puVar11 = param_1;
        if (lVar12 == 0) goto LAB_107840718;
        func_0x000107842dcc();
        func_0x0001078407c8();
      } while ((uVar10 & 1) != 0);
      puVar11 = (undefined8 *)((long)param_1 + lVar12 + 8);
LAB_107840718:
      *puVar11 = uVar9;
    }
    lVar12 = lVar12 + 8;
    puVar11 = puVar13;
  } while( true );
}



/* Entry: 107840da8; end: 107840f8b;  */

void FUN_107840da8(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
                  long param_6,long param_7,long param_8)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong in_stack_00000018;
  
  func_0x0001078427d4();
  puVar6 = &stack0x00000018;
  puVar9 = param_1;
  in_stack_00000018 = param_5;
  func_0x000107840fb8();
  while (puVar9 != puVar6) {
    uVar3 = *(ulong *)puVar9[3];
    uVar8 = *(ulong *)puVar9[4];
    if (((uVar3 == param_5 && uVar3 != 0) && uVar8 != 0) &&
       ((func_0x00010783e244(), (uVar3 & 1) != 0 || (func_0x000107842c88(), (uVar3 & 1) != 0)))) {
      if ((uVar8 == param_4) && ((param_3 == param_4 || (param_3 == *(ulong *)(uVar8 + 0x28))))) {
        iVar1 = *(int *)(puVar9[4] + 8);
        iVar2 = *(int *)(puVar9[4] + 0xc);
        if ((*(int *)(param_8 + 8) != iVar1 || *(int *)(param_8 + 0xc) != iVar2) &&
           (*(int *)(param_7 + 8) != iVar1 || *(int *)(param_7 + 0xc) != iVar2)) goto LAB_107840e80;
      }
      puVar9 = (undefined8 *)*puVar9;
    }
    else {
      puVar5 = param_1;
      func_0x0001078410e8(param_1,puVar9);
      puVar9 = puVar5;
    }
  }
  puVar6 = &stack0x00000018;
  puVar9 = param_1;
  func_0x000107840fb8();
  func_0x000107840d08(param_6,param_5);
  while( true ) {
    uVar4 = 0;
    if ((puVar9 == puVar6) || (puVar9 == (undefined8 *)0x0)) goto LAB_107840f78;
    if (puVar9[2] != param_5) break;
    uVar3 = *(ulong *)puVar9[4];
    plVar7 = (long *)(param_6 + 8);
    while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
      if ((ulong)plVar7[4] <= uVar3) {
        if (uVar3 <= (ulong)plVar7[4]) goto LAB_107840f6c;
        plVar7 = plVar7 + 1;
      }
    }
    if ((uVar3 != 0) && ((param_3 == uVar3 || (param_3 == *(ulong *)(uVar3 + 0x28))))) {
      uVar8 = uVar3;
      func_0x00010783e790();
      func_0x000107835a34();
      if (((uVar8 & 1) == 0) &&
         ((*(int *)(param_8 + 8) != *(int *)(puVar9[4] + 8) ||
           *(int *)(param_8 + 0xc) != *(int *)(puVar9[4] + 0xc) &&
          (puVar5 = param_1, FUN_107840da8(param_1,param_2,param_3,param_4,uVar3,param_6,param_7),
          ((ulong)puVar5 & 1) != 0)))) goto LAB_107840e80;
    }
LAB_107840f6c:
    puVar9 = (undefined8 *)*puVar9;
  }
  uVar4 = 0;
LAB_107840f78:
  func_0x00010784266c(uVar4,extraout_x8);
  return;
LAB_107840e80:
  func_0x000107840f8c(param_2,param_5,puVar9 + 3);
  uVar4 = 1;
  goto LAB_107840f78;
}



/* Entry: 1078415cc; end: 10784171f;  */

void FUN_1078415cc(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 auStack_78 [16];
  undefined8 *puStack_68;
  
  plVar2 = (long *)param_2[1];
  for (plVar6 = (long *)*param_2; plVar6 != plVar2; plVar6 = plVar6 + 1) {
    lVar5 = *plVar6;
    if (lVar5 != 0) {
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 < (undefined8 *)param_1[2]) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar7 = puVar1 + 3;
        puVar1[2] = 0;
      }
      else {
        plVar4 = param_1;
        func_0x0001072c8bb0(param_1,((long)puVar1 - *param_1) / 0x18 + 1);
        func_0x0001072c89f8(auStack_78,plVar4,(param_1[1] - *param_1) / 0x18,param_1 + 2);
        *puStack_68 = 0;
        puStack_68[1] = 0;
        puStack_68[2] = 0;
        func_0x0001078424ec();
        func_0x0001072c89d0(param_1,auStack_78);
        puVar7 = (undefined8 *)param_1[1];
        func_0x0001072c8aa0(auStack_78);
      }
      param_1[1] = (long)puVar7;
      func_0x000107841720(puVar7 + -3,lVar5,param_3);
      plVar3 = *(long **)(lVar5 + 0x38);
      for (plVar4 = *(long **)(lVar5 + 0x30); plVar4 != plVar3; plVar4 = plVar4 + 1) {
        if (*plVar4 != 0) {
          func_0x000107841720(param_1[1] + -0x18,*plVar4,param_3);
        }
      }
      plVar3 = *(long **)(lVar5 + 0x38);
      for (plVar4 = *(long **)(lVar5 + 0x30); plVar4 != plVar3; plVar4 = plVar4 + 1) {
        lVar5 = *plVar4;
        if ((lVar5 != 0) && (*(long *)(lVar5 + 0x30) != *(long *)(lVar5 + 0x38))) {
          FUN_1078415cc(param_1,(long *)(lVar5 + 0x30),param_3);
        }
      }
    }
  }
  return;
}



/* Entry: 107841ae0; end: 107841b1f;  */

long * FUN_107841ae0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107841b20();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar1 != lVar2) {
    func_0x000107842ff4();
  }
  func_0x000107841ba0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107841c94; end: 107841c9f;  */

void FUN_107841c94(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001078423e8();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x000107841cd8(param_4);
  }
  func_0x000107842be0();
  return;
}



/* Entry: 107841f1c; end: 107841f4b;  */

void FUN_107841f1c(void)

{
  undefined1 in_CY;
  
  func_0x000107842998();
  if ((bool)in_CY) {
    func_0x000107841f50();
  }
  else {
    func_0x000107841f4c();
  }
  func_0x00010784321c();
  return;
}



/* Entry: 107843320; end: 10784358f;  */

long FUN_107843320(undefined4 param_1,long param_2,long param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,long param_15,undefined8 param_16,
                  undefined1 param_17)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uStack_72;
  undefined1 uStack_71;
  
  lVar1 = param_2;
  func_0x0001078481ac();
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  uVar2 = *param_4;
  *(undefined8 *)(lVar1 + 0x20) = param_4[1];
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *(undefined8 *)(lVar1 + 0x30) = param_5;
  *(undefined8 *)(lVar1 + 0x38) = param_6;
  func_0x000104c2fe00(lVar1 + 0x40,param_7);
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0x78) = param_8;
  *(undefined4 *)(param_2 + 0x80) = param_9;
  *(undefined4 *)(param_2 + 0x84) = param_1;
  *(undefined1 *)(param_2 + 0x88) = param_17;
  *(undefined **)(param_2 + 0xa0) = &UNK_10e52b660;
  *(undefined1 *)(param_2 + 0xe0) = 0;
  *(undefined1 *)(param_2 + 0xe8) = 0;
  *(undefined1 *)(param_2 + 0x100) = 0;
  *(undefined1 *)(param_2 + 0x108) = 0;
  *(undefined1 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x138) = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined4 *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_2 + 200) = 0;
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *(undefined1 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(undefined8 **)(param_2 + 0x130) = (undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_2 + 0x168) = 0;
  *(undefined8 *)(param_2 + 0x150) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0;
  *(undefined8 *)(param_2 + 0x160) = 0;
  *(undefined8 *)(param_2 + 0x158) = 0;
  *(undefined4 *)(param_2 + 0x168) = 0x3f800000;
  *(undefined8 *)(param_2 + 400) = 0;
  *(long *)(param_2 + 0x198) = param_2 + 0x1a0;
  *(undefined8 *)(param_2 + 0x178) = 0;
  *(undefined8 *)(param_2 + 0x170) = 0;
  *(undefined8 *)(param_2 + 0x188) = 0;
  *(undefined8 *)(param_2 + 0x180) = 0;
  *(undefined4 *)(param_2 + 400) = 0x3f800000;
  *(undefined8 *)(param_2 + 0x1a0) = 0;
  *(undefined8 *)(param_2 + 0x1a8) = 0;
  *(undefined8 *)(param_2 + 0x1d0) = 0;
  *(undefined8 *)(param_2 + 0x1c8) = 0;
  *(undefined8 *)(param_2 + 0x1c0) = 0;
  *(undefined8 *)(param_2 + 0x1b8) = 0;
  *(undefined8 *)(param_2 + 0x1b0) = 0;
  *(undefined4 *)(param_2 + 0x1d0) = 0x3f800000;
  *(undefined8 *)(param_2 + 0x1f8) = 0;
  *(undefined8 *)(param_2 + 0x1e0) = 0;
  *(undefined8 *)(param_2 + 0x1d8) = 0;
  *(undefined8 *)(param_2 + 0x1f0) = 0;
  *(undefined8 *)(param_2 + 0x1e8) = 0;
  *(undefined4 *)(param_2 + 0x1f8) = 0x3f800000;
  *(undefined8 *)(param_2 + 0x220) = 0;
  *(undefined8 *)(param_2 + 0x218) = 0;
  *(undefined8 *)(param_2 + 0x210) = 0;
  *(undefined8 *)(param_2 + 0x208) = 0;
  *(undefined8 *)(param_2 + 0x200) = 0;
  *(undefined4 *)(param_2 + 0x220) = 0x3f800000;
  func_0x00010747e6e0(param_2 + 0x228);
  func_0x000107846cc0(param_2 + 0x238,param_12);
  *(undefined8 *)(param_2 + 0x2b0) = param_13;
  *(undefined1 *)(param_2 + 0x2b8) = param_10;
  *(undefined1 *)(param_2 + 0x2b9) = 1;
  *(undefined8 *)(param_2 + 0x2c0) = param_14;
  *(long *)(param_2 + 0x2c8) = param_15;
  *(undefined8 *)(param_2 + 0x2d0) = param_16;
  uStack_71 = 0;
  param_15 = param_15 + 0x700;
  func_0x00010724e2c8(param_15,&uStack_71);
  *(char *)(param_2 + 0x2d8) = (char)param_15;
  uStack_72 = 0;
  lVar1 = *(long *)(param_2 + 0x2c8) + 0x6f0;
  func_0x00010724e2c8(lVar1,&uStack_72);
  *(char *)(param_2 + 0x2d9) = (char)lVar1;
  return param_2;
}



/* Entry: 107845218; end: 107845273;  */

void FUN_107845218(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x000107847ea8();
  if ((bool)in_ZR) {
    func_0x0001074f4f04(unaff_x19 + 0xe8);
    *(undefined1 *)(unaff_x19 + 0x100) = 0;
  }
  if (*(char *)(unaff_x19 + 0x110) == '\x01') {
    func_0x0001077b6c4c(unaff_x19 + 0x108);
    *(undefined1 *)(unaff_x19 + 0x110) = 0;
  }
  *(undefined8 *)(unaff_x19 + 200) = param_2;
  if ((*(uint *)(unaff_x19 + 0xc0) | 2) == 3) {
    func_0x0001078481c0();
  }
  return;
}



/* Entry: 107846bb8; end: 107846cbf;  */

void FUN_107846bb8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 auStack_70 [7];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = (int)param_1 == 1;
  if ((bool)uVar4) {
    func_0x000107848154(param_3,param_1,&DAT_10f6389e8,"none");
    func_0x000107847d58();
    func_0x000107847ce0();
    func_0x000107847cac();
    func_0x000107847c98();
    func_0x00010743fa9c();
  }
  else if ((int)param_1 == 0) {
    func_0x000107848154(param_3,param_1,&DAT_10f6389e8,"unknown");
    func_0x000107847d58();
    func_0x000107847ce0();
    func_0x000107847cac();
    func_0x000107847c98();
    func_0x00010743fa9c();
  }
  else {
    func_0x000107848154(param_3,param_1,&DAT_10f6389e8,&UNK_10f415912);
    func_0x000107847d58();
    func_0x000107847ce0();
    func_0x000107847cac();
    func_0x000107847c98();
    func_0x00010743fa9c();
  }
  func_0x000104c2f714(auStack_70);
  func_0x000107847c84(uStack_38);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = auStack_70;
  func_0x000104c2f714();
  func_0x000107847d28();
  lVar6 = param_1[1];
  uVar7 = *param_1;
  puVar5[1] = param_1[1];
  *puVar5 = uVar7;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar8 = param_1[3];
  uVar7 = param_1[2];
  uVar9 = param_1[4];
  uVar11 = param_1[7];
  uVar10 = param_1[6];
  puVar5[5] = param_1[5];
  puVar5[4] = uVar9;
  puVar5[7] = uVar11;
  puVar5[6] = uVar10;
  puVar5[3] = uVar8;
  puVar5[2] = uVar7;
  lVar6 = param_1[9];
  uVar7 = param_1[8];
  puVar5[9] = param_1[9];
  puVar5[8] = uVar7;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = param_1[0xb];
  uVar7 = param_1[10];
  puVar5[0xb] = param_1[0xb];
  puVar5[10] = uVar7;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = param_1[0xd];
  uVar7 = param_1[0xc];
  puVar5[0xd] = param_1[0xd];
  puVar5[0xc] = uVar7;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(puVar5 + 0xe) = *(undefined1 *)(param_1 + 0xe);
  return;
}



/* Entry: 107846ed4; end: 107846eeb;  */

void FUN_107846ed4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107847078; end: 1078470a7;  */

void FUN_107847078(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109e1478;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107847358; end: 10784748f;  */

undefined8 * FUN_107847358(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = param_1;
  puVar2 = param_2;
  func_0x0001078481ac();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  uVar3 = puVar2[3];
  puVar1[4] = puVar2[4];
  puVar1[3] = uVar3;
  puVar1[5] = puVar2[5];
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  uVar3 = puVar2[6];
  puVar1[7] = puVar2[7];
  puVar1[6] = uVar3;
  puVar1[8] = puVar2[8];
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  uVar3 = puVar2[9];
  puVar1[10] = puVar2[10];
  puVar1[9] = uVar3;
  puVar1[0xb] = puVar2[0xb];
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  func_0x0001072638b4(puVar1 + 0xc,puVar2 + 0xc);
  func_0x000107466dac(param_1 + 0x11,param_2 + 0x11);
  func_0x000107466dac(param_1 + 0x14,param_2 + 0x14);
  uVar3 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar3;
  return param_1;
}



/* Entry: 107847614; end: 107847627;  */

void FUN_107847614(void)

{
  func_0x000107847650();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10784782c; end: 107847857;  */

undefined8 * FUN_10784782c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e1608;
  func_0x000107810050(param_1 + 4);
  return param_1;
}



/* Entry: 107847968; end: 10784797b;  */

void FUN_107847968(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107847a30; end: 107847a43;  */

void FUN_107847a30(void)

{
  func_0x000107847b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107847b48; end: 107847b7b;  */

long FUN_107847b48(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010784814c(param_2,param_1,&PTR_DAT_1109e17b8);
  param_1 = param_1 + 0x18;
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1078486b4; end: 1078486b7;  */

undefined8 * FUN_1078486b4(undefined8 *param_1)

{
  func_0x00010725b238(param_1 + 0x7a);
  func_0x00010750db08(param_1 + 0x78);
  func_0x0001078493c0(param_1 + 0x76);
  func_0x00010724b54c(param_1 + 0x74);
  func_0x000107849384(param_1 + 0x25);
  *param_1 = &PTR_DAT_1109e1d40;
  func_0x00010750bcd8(param_1 + 0x13);
  func_0x000104c2f714(param_1 + 4);
  return param_1;
}



/* Entry: 107848a40; end: 107848b8b;  */

void FUN_107848a40(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  undefined8 extraout_x8;
  long *unaff_x19;
  long lVar3;
  undefined1 auStack_78 [8];
  long alStack_70 [3];
  undefined1 auStack_58 [16];
  undefined **ppuStack_48;
  undefined8 uStack_40;
  
  func_0x0001078496c0();
  plVar1 = *(long **)(param_1 + 0x208);
  if (plVar1 == (long *)0x0) {
    lVar3 = *unaff_x19;
    func_0x00010002b838(alStack_70,&UNK_10f42b2a8);
    func_0x0001078489f8(auStack_78);
    func_0x0001073787c0(auStack_58,auStack_78);
    *(undefined1 *)(lVar3 + 0x8a) = 1;
    (**(code **)(**(long **)(lVar3 + 0x90) + 0x18))(*(long **)(lVar3 + 0x90),lVar3,alStack_70);
    func_0x0001073787dc(alStack_70);
    func_0x000107849760();
  }
  else {
    *(undefined1 *)((long)unaff_x19 + 0x11) = 2;
    unaff_x19[0x2e] = unaff_x19[0x44];
    *(char *)(unaff_x19 + 0x2f) = (char)unaff_x19[0x45];
    ppuStack_48 = &PTR_DAT_1109e19b8;
    uStack_40 = 0;
    (**(code **)(*plVar1 + 0x10))(alStack_70,plVar1,unaff_x19 + 2,&ppuStack_48);
    lVar3 = alStack_70[0];
    alStack_70[0] = 0;
    lVar2 = unaff_x19[0x43];
    unaff_x19[0x43] = lVar3;
    if (lVar2 != 0) {
      func_0x000107849690();
      lVar3 = alStack_70[0];
      alStack_70[0] = 0;
      if (lVar3 != 0) {
        func_0x000107849690();
      }
    }
    func_0x0001072ad0c8(&ppuStack_48);
  }
  func_0x0001078496ac(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073787dc(alStack_70);
  func_0x000107849760();
  func_0x000107849708();
  func_0x000104c03f28(&DAT_10f62a4d8);
  return;
}



/* Entry: 107849070; end: 1078490d3;  */

long FUN_107849070(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x00010002b838(auStack_38);
  func_0x0001072a0374(param_1 + 0x20,auStack_38,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return param_1;
}



/* Entry: 107849384; end: 1078493e3;  */

long FUN_107849384(long param_1)

{
  func_0x000104c2f714(param_1 + 0x230);
  func_0x0001072aca78(param_1 + 0x218);
  func_0x00010724bd50(param_1 + 0x208);
  func_0x00010724b374(param_1 + 0x10);
  return param_1;
}



/* Entry: 1078494c4; end: 1078494d3;  */

undefined8 * FUN_1078494c4(long param_1)

{
  func_0x00010750db08(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109b9158;
  func_0x000107518510(param_1 + 0x80);
  func_0x000107518478(param_1 + 0x58);
  func_0x0001075183b4(param_1 + 0x30);
  func_0x00010751838c(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10784961c; end: 10784961f;  */

void FUN_10784961c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107849814; end: 107849beb;  */

void FUN_107849814(undefined8 *param_1,undefined8 **param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  long lVar5;
  long unaff_x21;
  undefined8 uVar6;
  undefined8 *unaff_x22;
  undefined8 uVar7;
  long lStack_3a0;
  undefined8 *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 *apuStack_330 [3];
  undefined1 uStack_318;
  undefined1 uStack_310;
  undefined8 *puStack_2c0;
  undefined1 auStack_2b8 [56];
  undefined1 auStack_280 [56];
  undefined8 *apuStack_248 [8];
  char cStack_208;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  long lStack_38;
  
  ppuVar4 = apuStack_330;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2c0 = param_3;
  if (*param_2 == (undefined8 *)0x0) {
    func_0x00010724bb70(&uStack_140,param_1 + 1);
    puVar2 = puStack_2c0;
    lVar5 = CONCAT71(uStack_13f,uStack_140);
    if (lVar5 != 0) {
      uVar6 = *param_1;
      puVar1 = (undefined8 *)0x30;
      __Znwm();
      *puVar1 = &PTR_DAT_1109e1bb8;
      puVar1[1] = uVar6;
      puVar1[2] = &UNK_107848780;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = puVar2;
      param_2 = apuStack_248;
      apuStack_248[0] = puVar1;
      func_0x0001073ae140(lVar5);
      puVar2 = apuStack_248[0];
      apuStack_248[0] = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        func_0x000107849f1c();
      }
    }
    ppuVar3 = (undefined8 **)&uStack_140;
    func_0x00010724bcd8();
  }
  else {
    puVar2 = param_1;
    func_0x00010785f1f4();
    uStack_140 = 0;
    puVar2 = puVar2 + 0x146;
    func_0x00010724e2c8(puVar2,&uStack_140);
    if ((int)puVar2 == 0) {
      func_0x000107849f28(&UNK_110996710);
      func_0x000107849f68();
      func_0x000107849fc8();
      func_0x000107288cd8(apuStack_248);
      func_0x000107849f58();
      func_0x000104c2fe00(auStack_2b8,param_1 + 5);
      func_0x000107371bc4(unaff_x21 + 8,"source",auStack_2b8);
      func_0x000104c2f714(auStack_2b8);
      param_3 = (undefined8 *)(ulong)*(byte *)(param_1 + 3);
      func_0x000107849f98();
      puVar1 = *param_2;
      lVar5 = (long)*(char *)((long)puVar1 + 0x17);
      puVar2 = puVar1;
      if (lVar5 < 0) {
        puVar2 = (undefined8 *)*puVar1;
        lVar5 = puVar1[1];
      }
      FUN_1078ba1ec(apuStack_248,puVar2,lVar5);
      puVar2 = (undefined8 *)0x198;
      __Znwm();
      ppuVar4 = apuStack_248;
      func_0x000107456200();
      ppuVar3 = apuStack_248;
      apuStack_330[0] = puVar2;
      func_0x00010724e5f4();
      func_0x000107849fb8();
      func_0x000107849f60();
    }
    else {
      func_0x000107849f28(&UNK_110996710);
      func_0x000107849f68();
      func_0x000107849fc8();
      func_0x000107288cd8(apuStack_248);
      func_0x000107849f58();
      func_0x000104c2fe00(auStack_280,param_1 + 5);
      func_0x000107371bc4(unaff_x21 + 8,"source",auStack_280);
      func_0x000104c2f714(auStack_280);
      param_3 = (undefined8 *)(ulong)*(byte *)(param_1 + 3);
      func_0x000107849f98();
      puVar1 = *param_2;
      lVar5 = (long)*(char *)((long)puVar1 + 0x17);
      puVar2 = puVar1;
      if (lVar5 < 0) {
        puVar2 = (undefined8 *)*puVar1;
        lVar5 = puVar1[1];
      }
      func_0x0001073c97c8(apuStack_248,puVar2,lVar5);
      if (cStack_208 == '\x01') {
        puVar2 = (undefined8 *)0x198;
        __Znwm();
        ppuVar4 = apuStack_248;
        func_0x000107456298();
        apuStack_330[0] = puVar2;
        func_0x000107849fb8();
        func_0x000107849f60();
      }
      else {
        func_0x00010002b838(apuStack_330,&UNK_10f42b2c6);
        uStack_318 = 0;
        uStack_310 = 0;
        func_0x000107849ff0();
        func_0x0001073787dc(apuStack_330);
      }
      ppuVar3 = apuStack_248;
      func_0x00010725b590();
    }
    func_0x000107849ffc();
    param_2 = ppuVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107849f60();
  func_0x00010725b590(apuStack_248);
  func_0x000107849ffc();
  __Unwind_Resume(ppuVar3);
  func_0x000107849f80();
  if (lStack_3a0 != 0) {
    uVar7 = *unaff_x22;
    uVar6 = *param_3;
    puVar1 = *param_2;
    *param_2 = (undefined8 *)0x0;
    puVar2 = (undefined8 *)0x30;
    puStack_390 = puVar1;
    uStack_388 = uVar6;
    __Znwm();
    puStack_390 = (undefined8 *)0x0;
    *puVar2 = &PTR_DAT_1109e1bf8;
    puVar2[1] = uVar7;
    puVar2[2] = &UNK_107848780;
    puVar2[3] = 0;
    uStack_380 = 0;
    puVar2[4] = puVar1;
    puVar2[5] = uVar6;
    uStack_378 = uVar6;
    func_0x000107849df0(&uStack_380);
    ppuVar4 = &puStack_390;
    func_0x000107849df0();
    func_0x000107849fe4();
    func_0x00010784a018();
    if (ppuVar4 != (undefined8 **)0x0) {
      func_0x000107849f1c();
    }
  }
  func_0x000107849fb0();
  return;
}



/* Entry: 107849e38; end: 107849e83;  */

void FUN_107849e38(long *param_1)

{
  long extraout_x8;
  code *extraout_x9;
  code *pcVar1;
  uint extraout_w11;
  
  func_0x00010784a004();
  pcVar1 = extraout_x9;
  if ((extraout_w11 & 1) != 0) {
    pcVar1 = *(code **)(*param_1 + ((ulong)extraout_x9 & 0xffffffff));
  }
  *(undefined8 *)(extraout_x8 + 0x20) = 0;
  (*pcVar1)();
  func_0x000107849f78();
  return;
}



/* Entry: 10784a108; end: 10784a193;  */

undefined8 * FUN_10784a108(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_DAT_1109e1c78;
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[2] = param_3[1];
  param_1[1] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010784a588(param_1 + 3);
  func_0x00010726ed14(param_1 + 0xe);
  param_1[0x10] = param_1;
  return param_1;
}



/* Entry: 10784a5f8; end: 10784a61f;  */

void FUN_10784a5f8(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x00010784a620(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 10784a778; end: 10784a7e7;  */

undefined8 FUN_10784a778(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10784a108(param_1,param_2,&uStack_30);
  func_0x00010724b8b8(&uStack_30);
  return param_1;
}



/* Entry: 10784ab24; end: 10784ab9b;  */

void FUN_10784ab24(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  puVar1 = &UNK_10f42b2ec;
  if (*(char *)(param_1 + 8) != '\x01') {
    puVar1 = &UNK_10f42b2f3;
  }
  puVar2 = &UNK_10f42b2e3;
  if (*(char *)(param_1 + 8) != '\0') {
    puVar2 = puVar1;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(&uStack_38,puVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  return;
}



/* Entry: 10784af18; end: 10784afc7;  */

void FUN_10784af18(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  while (puVar1 != param_1 + 1) {
    (**(code **)(*(long *)puVar1[6] + 0xa8))((long *)puVar1[6],param_2,1);
    func_0x00010002c7d4();
  }
  return;
}



/* Entry: 10784b1e8; end: 10784b273;  */

void FUN_10784b1e8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10784b518; end: 10784b54f;  */

void FUN_10784b518(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x00010784d970();
  *param_1 = param_3;
  param_1[1] = param_4;
  func_0x00010784becc(param_1 + 2);
  func_0x0001073139fc(*(long *)(unaff_x20 + 0x10) + 0x238);
  return;
}



/* Entry: 10784b964; end: 10784b977;  */

void FUN_10784b964(void)

{
  func_0x00010784b91c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10784beec; end: 10784bf57;  */

/* WARNING: Possible PIC construction at 0x00010784bf10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010784bf14) */
/* WARNING: Removing unreachable block (ram,0x00010784bf40) */
/* WARNING: Removing unreachable block (ram,0x00010784bf54) */
/* WARNING: Removing unreachable block (ram,0x00010784bf30) */

undefined1 * FUN_10784beec(void)

{
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  func_0x00010784d84c();
  uStack_38 = 1;
  func_0x00010784bf80();
  return auStack_40;
}



/* Entry: 10784c060; end: 10784c087;  */

undefined1 * FUN_10784c060(undefined1 *param_1)

{
  _bzero(param_1,0x2b0);
  *param_1 = 0;
  param_1[0xd8] = 0;
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0x188) = 0;
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 400);
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x2a5) = 0;
  *(undefined8 *)(param_1 + 0x29d) = 0;
  return param_1;
}



/* Entry: 10784c258; end: 10784c287;  */

undefined8 * FUN_10784c258(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x1745d1745d1745e) {
    puVar1 = (undefined8 *)(param_2 * 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109e1ee8;
  func_0x00010784c2e8(param_1 + 3);
  return param_1;
}



/* Entry: 10784c3f4; end: 10784c407;  */

void FUN_10784c3f4(void)

{
  func_0x00010784c3c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10784cc68; end: 10784cc87;  */

void FUN_10784cc68(long param_1)

{
  if (*(char *)(param_1 + 400) == '\x01') {
    func_0x00010784be90();
  }
  return;
}



/* Entry: 10784d7c0; end: 10784d80f;  */

long * FUN_10784d7c0(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    puVar3 = (ulong *)param_1[1];
    for (uVar2 = 0; uVar2 < *puVar3; uVar2 = uVar2 + 1) {
      func_0x00010784be90(lVar1);
      lVar1 = lVar1 + 400;
    }
  }
  return param_1;
}



/* Entry: 10784df3c; end: 10784df4f;  */

void FUN_10784df3c(void)

{
  func_0x00010784dfa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10784e100; end: 10784e21b;  */

void FUN_10784e100(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_70 [32];
  long *aplStack_50 [4];
  
  FUN_1077c2408(auStack_70);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010726fc00(aplStack_50,param_1 + 0x10);
  if (aplStack_50[0] == (long *)0x0) {
    func_0x0001072508cc(aplStack_50);
  }
  else {
    lVar3 = *aplStack_50[0];
    func_0x0001072508cc(aplStack_50);
    if ((lVar3 != -1) && (*(long *)(lVar2 + 0x368) == *(long *)(param_1 + 0x28))) {
      plVar1 = (long *)0x40;
      __Znwm();
      FUN_1077c2408(aplStack_50,auStack_70);
      func_0x00010784e2a4(plVar1,aplStack_50,lVar2 + 0x1b8);
      func_0x0001077c1d38(aplStack_50);
      aplStack_50[0] = plVar1;
      func_0x00010782d44c(lVar2,aplStack_50,0,0);
      plVar1 = aplStack_50[0];
      aplStack_50[0] = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        func_0x00010784e340();
      }
    }
  }
  func_0x0001077c1d38(auStack_70);
  return;
}



/* Entry: 10784e3f4; end: 10784e47b;  */

void FUN_10784e3f4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  uVar1 = 0x40;
  __Znwm();
  func_0x0001077c25b8(auStack_50,param_2 + 8);
  func_0x00010784e2a4(uVar1,auStack_50,param_2 + 0x28);
  func_0x0001077c1d38(auStack_50);
  *param_1 = uVar1;
  return;
}



/* Entry: 10784e808; end: 10784e81b;  */

void FUN_10784e808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010784e810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10784e928; end: 10784e92f;  */

void FUN_10784e928(void)

{
  return;
}



/* Entry: 10784ed74; end: 10784ee6f;  */

void FUN_10784ed74(long param_1)

{
  long lVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  long alStack_70 [9];
  undefined8 uStack_28;
  
  func_0x00010784f54c();
  uStack_28 = extraout_x8;
  if (*(long *)(param_1 + 0x208) == 0) {
    uVar3 = *unaff_x19;
    func_0x00010784f4dc();
    func_0x0001078489f8(auStack_78);
    func_0x00010784f5ac();
    func_0x00010782d3f0(uVar3,alStack_70);
    func_0x00010784f560();
    __ZNSt13exception_ptrD1Ev(auStack_78);
  }
  else {
    *(undefined1 *)((long)unaff_x19 + 0x11) = 2;
    unaff_x19[0x2e] = unaff_x19[0x44];
    *(undefined1 *)(unaff_x19 + 0x2f) = *(undefined1 *)(unaff_x19 + 0x45);
    func_0x00010784f5fc(&PTR_DAT_1109e25a8);
    func_0x00010784f59c();
    lVar1 = alStack_70[0];
    alStack_70[0] = 0;
    lVar2 = unaff_x19[0x43];
    unaff_x19[0x43] = lVar1;
    if (lVar2 != 0) {
      func_0x00010784f4d0();
      lVar1 = alStack_70[0];
      alStack_70[0] = 0;
      if (lVar1 != 0) {
        func_0x00010784f4d0();
      }
    }
    func_0x00010784f5e4();
  }
  func_0x00010784f568(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010784f560();
  __ZNSt13exception_ptrD1Ev(auStack_78);
  func_0x00010784f62c();
  return;
}



/* Entry: 10784f2bc; end: 10784f2e7;  */

void FUN_10784f2bc(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x00010784f614();
  *param_1 = &PTR_DAT_1109e25a8;
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar1;
  return;
}



/* Entry: 10784fcf4; end: 10784fe8f;  */

void FUN_10784fcf4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lStack_78;
  undefined8 uStack_70;
  ulong *puStack_68;
  ulong uStack_60;
  ulong uStack_50;
  long lStack_48;
  
  uStack_50 = param_2 + 0x1f8;
  lStack_48 = CONCAT71(lStack_48._1_7_,1);
  func_0x00010724e404();
  if (*(char *)(param_2 + 0x2b0) == '\x01') {
    func_0x000107851e9c();
    uVar6 = *(undefined8 *)(*(long *)(param_2 + 0x2a0) + 0x18);
    func_0x000107297b88(param_1);
    param_2 = param_2 + 0x2a0;
    func_0x000104c2db28();
    lStack_78 = param_2;
    uStack_70 = uVar6;
    while (lStack_78 != 0) {
      func_0x000107851e00();
      func_0x000104c2de10(&lStack_78);
    }
    func_0x000107851d28();
  }
  else {
    func_0x000107851d28();
    func_0x000107851e9c();
    uVar8 = *(ulong *)(param_2 + 0xa0);
    lVar9 = *(long *)(param_2 + 0xa8);
    uVar1 = *(ulong *)(param_2 + 0xb0);
    lVar2 = *(long *)(param_2 + 0xb8);
    uVar7 = uVar8;
    uStack_50 = uVar8;
    lStack_48 = lVar9;
    func_0x000104c32864(uVar8,lVar9,uVar1,lVar2);
    if (0 < (long)uVar7) {
      uVar7 = uVar7 >> 1;
      func_0x000107297b88(param_1);
      while (uVar8 != uVar1 || lVar9 != lVar2) {
        puVar4 = &uStack_50;
        func_0x000107851d08();
        puStack_68 = puVar4;
        uStack_60 = uVar7;
        func_0x000107851df8();
        if (uStack_50 == uVar1 && lStack_48 == lVar2) {
          func_0x000107851d00();
          func_0x000107851dd4();
          func_0x000107851cd4();
          ___cxa_throw(puVar4);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10784fe40);
          (*pcVar3)();
        }
        func_0x000104c32af8(&uStack_50);
        puVar5 = (ulong *)(*(long *)(param_2 + 0x50) + 0x58);
        func_0x000104c32820(puVar5,(ulong)puVar4 & 0xffffffff);
        uVar7 = *puVar5;
        func_0x000107851e00();
        uVar8 = uStack_50;
        lVar9 = lStack_48;
      }
    }
  }
  return;
}



/* Entry: 107850750; end: 1078507f7;  */

void FUN_107850750(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  *puVar1 = &PTR_DAT_1109a3bf8;
  uVar3 = *(undefined8 *)(param_2 + 8);
  puVar1[2] = *(undefined8 *)(param_2 + 0x10);
  puVar1[1] = uVar3;
  if (*(long *)(param_2 + 0x10) != 0) {
    do {
      func_0x000107851c94();
    } while (extraout_w10 != 0);
  }
  func_0x000107332298(puVar1 + 3,param_2 + 0x18);
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_2 + 0x30);
  lVar2 = *(long *)(param_2 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  puVar1[8] = *(undefined8 *)(param_2 + 0x40);
  puVar1[7] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107851c94();
    } while (extraout_w10_00 != 0);
  }
  *param_1 = puVar1;
  return;
}


