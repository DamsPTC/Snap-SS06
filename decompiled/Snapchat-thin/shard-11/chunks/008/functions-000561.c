/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108963938; end: 1089639ab;  */

void FUN_108963938(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(param_1 + 0x10) + 0x10))();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010bd42e30();
    FUN_10894fe18();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 1089639ac; end: 1089639c3;  */

void FUN_1089639ac(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10894efc4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1089639c4; end: 1089639df;  */

void FUN_1089639c4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10894efc4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089639e0; end: 108963a0b;  */

void FUN_1089639e0(long param_1)

{
  undefined8 *in_x9;
  
                    /* WARNING: Could not recover jumptable at 0x0001089639e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_x9)(param_1 + 8);
  return;
}



/* Entry: 108963a0c; end: 108963e77;  */

undefined8 *
FUN_108963a0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,long param_7)

{
  long *plVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ushort uStack_100;
  undefined1 uStack_fe;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  param_1[1] = &PTR_DAT_110a9f758;
  puVar13 = param_1 + 2;
  *puVar13 = &PTR_DAT_110a9f7b0;
  *param_1 = &PTR_FUN_110a9f6d0;
  param_1[3] = param_3;
  param_1[4] = param_4;
  func_0x0001089ba4dc(param_1 + 5);
  param_1[0x19] = 30000000;
  lVar6 = 0x20;
  __Znwm();
  FUN_10894c9fc();
  lStack_b8 = lVar6;
  func_0x0001089af30c(param_1 + 0x8e,&lStack_b8);
  lVar6 = lStack_b8;
  lStack_b8 = 0;
  if (lVar6 != 0) {
    FUN_108964514();
  }
  FUN_10899d868();
  func_0x0001089b19d4();
  puVar7 = (undefined8 *)0x20;
  __Znwm();
  *puVar7 = &PTR_FUN_110a9fa28;
  puVar8 = (undefined8 *)0x18;
  __Znwm();
  *(undefined1 *)(puVar8 + 1) = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_DAT_110aa4200;
  puVar7[1] = puVar8;
  puVar7[2] = param_2;
  puVar7[3] = &PTR_DAT_110aa8518;
  param_1[0xae] = puVar7;
  plVar1 = param_1 + 0xaf;
  param_1[0xaf] = 0;
  lVar6 = param_5[1];
  uVar14 = param_5[1];
  uVar12 = *param_5;
  puVar7 = (undefined8 *)0x18;
  __Znwm();
  if (lVar6 != 0) {
    plVar9 = (long *)(lVar6 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar7 = &PTR_FUN_110a9fa88;
  puVar7[2] = uVar14;
  puVar7[1] = uVar12;
  uStack_118 = 0;
  uStack_110 = 0;
  puVar8 = &uStack_118;
  func_0x000108950ac8(puVar8);
  func_0x0001089b19d4();
  if ((bRam000000011372cef8 & 1) == 0) {
    iVar5 = 0x1372cef8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      puVar10 = &UNK_10f4ed6dd;
      func_0x000107c30184(&UNK_10f4ed6dd,0x11,0);
      puRam000000011372cef0 = puVar10;
      ___cxa_guard_release(0x11372cef8);
    }
  }
  uVar11 = (ulong)puRam000000011372cef0 | 0x100;
  if ((undefined *)0x1 < puRam000000011372cef0 + -1) {
    uVar11 = 0;
  }
  func_0x0001089a5014(auStack_c8,puVar8,uVar11);
  (**(code **)(*(long *)*param_5 + 0x20))(&uStack_118);
  func_0x0001089a4f6c(&lStack_e0,&uStack_118);
  func_0x0001089a4f6c(&uStack_f8,param_7);
  uVar14 = param_1[0xae];
  uVar12 = param_1[0xac];
  FUN_108963e78();
  lVar6 = 0x1bf0;
  __Znwm();
  func_0x0001089c86d0(auStack_78,auStack_c8);
  uStack_88 = uStack_d8;
  lStack_90 = lStack_e0;
  uStack_80 = uStack_d0;
  uStack_a8 = uStack_f0;
  uStack_b0 = uStack_f8;
  uStack_a0 = uStack_e8;
  func_0x0001089bbd24(lVar6,auStack_78,&lStack_90,&uStack_b0,uVar14,uVar12,puVar7,1,1);
  func_0x0001089c8698(auStack_78);
  func_0x0001089c8698(auStack_c8);
  *(undefined8 *)(lVar6 + 0x9d0) = 5000000;
  *(undefined8 **)(lVar6 + 0x1128) = puVar13;
  *(undefined8 **)(lVar6 + 0x13e8) = puVar13;
  func_0x0001089bc698(lVar6,0x4b0);
  uVar2 = *(ushort *)(param_7 + 2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_118,param_6);
  uStack_fe = 0;
  uStack_100 = uVar2 >> 8 | uVar2 << 8;
  FUN_108963e78();
  plVar9 = (long *)0xb20;
  __Znwm();
  lStack_90 = lVar6;
  func_0x00010899df60();
  if (lStack_90 != 0) {
    FUN_108964514();
  }
  lVar6 = *plVar1;
  *plVar1 = (long)plVar9;
  if (lVar6 != 0) {
    FUN_108964514();
    plVar9 = (long *)*plVar1;
  }
  (**(code **)(*plVar9 + 0x170))(plVar9);
  (**(code **)(**(long **)(param_1[0xaf] + 0xae8) + 400))();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_118);
  return param_1;
}



/* Entry: 108963e78; end: 108963f9f;  */

long FUN_108963e78(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 *puStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam000000011372cf00 & 1) == 0) {
    lVar2 = 0x11372cf00;
    param_1 = lVar2;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      uStack_40 = 0x5000000002;
      lStack_68 = 0;
      lStack_60 = 0;
      lStack_70 = 0;
      uStack_48 = 0;
      lVar1 = 8;
      puStack_50 = (undefined1 *)&lStack_70;
      __Znwm();
      lStack_60 = lVar1 + 8;
      lStack_70 = lVar1;
      lStack_68 = lVar1;
      func_0x00010896430c(&lStack_70,&uStack_40,&lStack_38,1);
      uStack_48 = 1;
      FUN_10896432c(&puStack_50);
      lRam000000011372cf18 = lStack_68;
      lRam000000011372cf10 = lStack_70;
      lRam000000011372cf20 = lStack_60;
      lStack_70 = 0;
      lStack_68 = 0;
      lStack_60 = 0;
      puStack_50 = (undefined1 *)&lStack_70;
      FUN_108964358(&puStack_50);
      ___cxa_guard_release();
      param_1 = lVar2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10896432c(&puStack_50);
  ___cxa_guard_abort(0x11372cf00);
  __Unwind_Resume(param_1);
  func_0x000108964430(param_1 + 0x578);
  func_0x000108964404(param_1 + 0x570);
  FUN_108964378(param_1 + 0x560);
  func_0x0001089af3c4(param_1 + 0x470);
  func_0x0001089bacd0(param_1 + 0x28);
  return param_1;
}



/* Entry: 108963fa0; end: 108963fe3;  */

long FUN_108963fa0(long param_1)

{
  func_0x000108964430(param_1 + 0x578);
  func_0x000108964404(param_1 + 0x570);
  FUN_108964378(param_1 + 0x560);
  func_0x0001089af3c4(param_1 + 0x470);
  func_0x0001089bacd0(param_1 + 0x28);
  return param_1;
}



/* Entry: 108963fe4; end: 108963ff7;  */

long FUN_108963fe4(long param_1)

{
  func_0x000108964430(param_1 + 0x578);
  func_0x000108964404(param_1 + 0x570);
  FUN_108964378(param_1 + 0x560);
  func_0x0001089af3c4(param_1 + 0x470);
  func_0x0001089bacd0(param_1 + 0x28);
  return param_1;
}



/* Entry: 108963ff8; end: 10896400b;  */

void FUN_108963ff8(void)

{
  FUN_108963fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10896400c; end: 10896406f;  */

void FUN_10896400c(long param_1)

{
  FUN_108963fa0(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108964070; end: 108964153;  */

void FUN_108964070(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  long *plStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  plVar1 = *(long **)(param_1 + 0x570);
  (**(code **)(*plVar1 + 0x10))();
  (**(code **)(*plVar1 + 0x18))();
  uStack_68 = 0;
  ppuStack_80 = &PTR_DAT_110aa7df0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  plVar2 = *(long **)(param_1 + 0x578);
  uStack_78 = param_4;
  uStack_70 = param_5;
  plStack_60 = plVar1;
  FUN_1089a4f6c(auStack_98,param_2);
  FUN_1089a4f6c(auStack_b0,param_3);
  (**(code **)(*plVar2 + 0x1d8))(plVar2,auStack_98,auStack_b0,&ppuStack_80);
  func_0x0001089de120(&ppuStack_80);
  return;
}



/* Entry: 108964154; end: 10896415b;  */

void FUN_108964154(long param_1)

{
  long *plVar1;
  undefined1 auStack_38 [24];
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x578) + 0x58);
  FUN_1080e3e74(auStack_38,&UNK_10f4ee012);
  (**(code **)(*plVar1 + 0x1b8))(plVar1,0x10,auStack_38,2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 10896415c; end: 108964187;  */

void FUN_10896415c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x578);
  func_0x00010899e1a8(uVar1,*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x580) = uVar1;
  return;
}



/* Entry: 108964188; end: 108964197;  */

void FUN_108964188(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108964530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108964198; end: 1089641f7;  */

void FUN_108964198(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  
  iVar2 = (int)param_3;
  plVar3 = *(long **)(param_1 + 0x18);
  func_0x0001089d1d80(param_3);
  uVar1 = param_3;
  _strlen();
                    /* WARNING: Could not recover jumptable at 0x0001089641f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 8))(plVar3,param_3,uVar1,param_4,iVar2 != 0x10 || param_5 == 0);
  return;
}



/* Entry: 1089641f8; end: 10896432b;  */

void FUN_1089641f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  
  iVar2 = (int)param_3;
  plVar3 = *(long **)(param_1 + 0x10);
  func_0x0001089d1d80(param_3);
  uVar1 = param_3;
  _strlen();
                    /* WARNING: Could not recover jumptable at 0x0001089641f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 8))(plVar3,param_3,uVar1,param_4,iVar2 != 0x10 || param_5 == 0);
  return;
}



/* Entry: 10896432c; end: 108964357;  */

long FUN_10896432c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_108964358(param_1);
  }
  return param_1;
}



/* Entry: 108964358; end: 108964377;  */

void FUN_108964358(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 108964378; end: 10896439f;  */

long FUN_108964378(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1089643a0; end: 1089643a3;  */

undefined8 * FUN_1089643a0(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_110a9fa28;
  param_1[1] = 0;
  if (lVar1 != 0) {
    FUN_108964514();
  }
  return param_1;
}



/* Entry: 1089643a4; end: 1089643b7;  */

void FUN_1089643a4(void)

{
  FUN_1089643d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089643b8; end: 1089643cf;  */

undefined8 FUN_1089643b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1089643d0; end: 10896445b;  */

undefined8 * FUN_1089643d0(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_110a9fa28;
  param_1[1] = 0;
  if (lVar1 != 0) {
    FUN_108964514();
  }
  return param_1;
}



/* Entry: 10896445c; end: 10896445f;  */

undefined8 * FUN_10896445c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9fa88;
  func_0x000108950ac8(param_1 + 1);
  return param_1;
}



/* Entry: 108964460; end: 108964473;  */

void FUN_108964460(void)

{
  FUN_1089644e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108964474; end: 1089644af;  */

void FUN_108964474(undefined4 *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  (**(code **)(**(long **)(param_2 + 8) + 0x30))();
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = param_4;
  return;
}



/* Entry: 1089644b0; end: 1089644e7;  */

undefined8 FUN_1089644b0(void)

{
  return 0;
}



/* Entry: 1089644e8; end: 108964513;  */

undefined8 * FUN_1089644e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9fa88;
  func_0x000108950ac8(param_1 + 1);
  return param_1;
}



/* Entry: 108964514; end: 108964547;  */

void FUN_108964514(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010896451c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 108964548; end: 1089645d3;  */

void FUN_108964548(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x588;
  __Znwm();
  FUN_108963a0c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1089645d4; end: 1089645db;  */

void FUN_1089645d4(void)

{
  return;
}



/* Entry: 1089645dc; end: 10896462f;  */

void FUN_1089645dc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  FUN_1089a3c0c();
  lStack_30 = lVar1;
  lStack_28 = param_1;
  FUN_108964630(&lStack_30,0x3d,0x3e,param_1);
  FUN_108964630(&lStack_30,0x3f,0x40,param_1 + 0x20);
  return;
}



/* Entry: 108964630; end: 10896475b;  */

void FUN_108964630(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined ***pppuVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  undefined8 *puVar2;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar2 = (undefined8 *)*param_1;
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_68 = &PTR_DAT_1107eac58;
  uStack_60 = 0;
  pppuVar1 = &ppuStack_68;
  uStack_48 = param_2;
  func_0x000108964764(pppuVar1,3);
  func_0x00010896477c(*puVar2,pppuVar1,*param_4);
  (*extraout_x8)();
  func_0x00010896475c();
  puVar2 = (undefined8 *)*param_1;
  func_0x00010896476c();
  pppuVar1 = &ppuStack_68;
  uStack_48 = param_2;
  func_0x000108964764(pppuVar1,4);
  func_0x00010896477c(*puVar2,pppuVar1,param_4[2]);
  (*extraout_x8_00)();
  func_0x00010896475c();
  puVar2 = (undefined8 *)*param_1;
  func_0x00010896476c();
  pppuVar1 = &ppuStack_68;
  uStack_48 = param_3;
  func_0x000108964764(pppuVar1,3);
  func_0x00010896477c(*puVar2,pppuVar1,param_4[1]);
  (*extraout_x8_01)();
  func_0x00010896475c();
  param_1 = (undefined8 *)*param_1;
  func_0x00010896476c();
  pppuVar1 = &ppuStack_68;
  uStack_48 = param_3;
  func_0x000108964764(pppuVar1,4);
  func_0x00010896477c(*param_1,pppuVar1,param_4[3]);
  (*extraout_x8_02)();
  func_0x00010896475c();
  return;
}



/* Entry: 10896475c; end: 108964787;  */

undefined1 * FUN_10896475c(void)

{
  undefined **ppuStack0000000000000008;
  
  ppuStack0000000000000008 = &PTR_DAT_1107eacc0;
  func_0x0001000e30f4(&stack0x00000010);
  return (undefined1 *)&stack0x00000008;
}



/* Entry: 108964788; end: 1089647fb;  */

long FUN_108964788(long param_1)

{
  long lVar1;
  
  if (*(long **)(param_1 + 0x1a0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1a0) + 0x30))();
  }
  lVar1 = *(long *)(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  FUN_1089657a4(param_1 + 0x1a0);
  FUN_108955e54(param_1 + 400);
  func_0x0001089554c4(param_1 + 0x180);
  func_0x000108965504(param_1 + 0x118);
  func_0x000108965504(param_1 + 0xb0);
  FUN_108965748(param_1 + 0x20);
  return param_1;
}



/* Entry: 1089647fc; end: 1089647ff;  */

long FUN_1089647fc(long param_1)

{
  long lVar1;
  
  if (*(long **)(param_1 + 0x1a0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1a0) + 0x30))();
  }
  lVar1 = *(long *)(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  FUN_1089657a4(param_1 + 0x1a0);
  FUN_108955e54(param_1 + 400);
  func_0x0001089554c4(param_1 + 0x180);
  func_0x000108965504(param_1 + 0x118);
  func_0x000108965504(param_1 + 0xb0);
  FUN_108965748(param_1 + 0x20);
  return param_1;
}



/* Entry: 108964800; end: 108964813;  */

void FUN_108964800(void)

{
  FUN_108964788();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108964814; end: 10896484b;  */

void FUN_108964814(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1e8);
  func_0x0001089668c4();
  func_0x000108966950();
  func_0x0001089668b4();
  *(undefined1 *)(lVar1 + 0x60) = 0;
  return;
}



/* Entry: 10896484c; end: 10896489b;  */

void FUN_10896484c(void)

{
  long extraout_x8;
  long unaff_x19;
  long lVar1;
  
  func_0x000108966a9c();
  lVar1 = *(long *)(unaff_x19 + 0x1e8);
  func_0x0001089668c4();
  func_0x0001089668b4((&PTR_FUN_110a9fcc8)[extraout_x8],&stack0xffffffffffffff80);
  *(undefined1 *)(lVar1 + 0x60) = 0;
  func_0x000108966a94();
  return;
}



/* Entry: 10896489c; end: 1089648f3;  */

void FUN_10896489c(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  func_0x000108afd080();
  (**(code **)(*plVar1 + 0x10))();
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar2;
  param_1[3] = (long)plVar1;
  *(undefined1 *)(param_1 + 4) = 1;
  FUN_10895a610(param_1 + 5,param_2);
  return;
}



/* Entry: 1089648f4; end: 108964943;  */

void FUN_1089648f4(void)

{
  long extraout_x8;
  long unaff_x19;
  long lVar1;
  
  func_0x000108966a9c();
  lVar1 = *(long *)(unaff_x19 + 0x1e8);
  func_0x0001089668c4();
  func_0x0001089668b4((&PTR_FUN_110a9fcf0)[extraout_x8],&stack0xffffffffffffff80);
  *(undefined1 *)(lVar1 + 0x60) = 0;
  func_0x000108966a94();
  return;
}



/* Entry: 108964944; end: 10896494b;  */

void FUN_108964944(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x000108966a9c(param_1 + -8);
  lVar1 = *(long *)(unaff_x19 + 0x1e8);
  func_0x0001089668c4();
  func_0x0001089668b4((&PTR_FUN_110a9fcf0)[extraout_x8],&stack0xffffffffffffff80);
  *(undefined1 *)(lVar1 + 0x60) = 0;
  func_0x000108966a94();
  return;
}



/* Entry: 10896494c; end: 1089649d7;  */

void FUN_10896494c(void)

{
  long unaff_x19;
  
  func_0x000108966a60();
  func_0x000108966968();
  *(undefined1 *)(unaff_x19 + 0x60) = 0;
  return;
}



/* Entry: 1089649d8; end: 108964bd3;  */

void FUN_1089649d8(undefined ***param_1,undefined **param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 in_ZR;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  undefined8 extraout_x8;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined ***unaff_x22;
  long *plVar16;
  undefined4 uVar17;
  undefined **ppuStack_2e8;
  undefined ***pppuStack_2e0;
  undefined *puStack_2d8;
  undefined ***pppuStack_2d0;
  undefined ***pppuStack_2c8;
  undefined1 *puStack_2c0;
  code *pcStack_2b8;
  char *pcStack_2b0;
  undefined8 uStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_298;
  undefined **ppuStack_288;
  undefined1 *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 auStack_268 [504];
  undefined8 uStack_70;
  
  pppuVar4 = param_1;
  ppuVar15 = param_2;
  func_0x000108966aac();
  uStack_70 = extraout_x8;
  FUN_108964bd4();
  puStack_280 = auStack_268;
  ppuStack_288 = &PTR_DAT_11099bc38;
  uStack_270 = 500;
  uStack_278 = 0;
  plVar16 = (long *)(param_3 + 0x10);
  while (pppuVar5 = pppuVar4, plVar16 = (long *)*plVar16, plVar16 != (long *)0x0) {
    iVar1 = *(int *)(plVar16 + 2);
    if (iVar1 - 10U < 2) {
      uVar17 = 2;
    }
    else if (iVar1 == 0 || iVar1 == 9) {
      uVar17 = 0;
    }
    else if (iVar1 == 0xc) {
      uVar17 = 3;
    }
    else {
      uVar17 = 1;
    }
    uVar2 = *(undefined4 *)((long)plVar16 + 0x14);
    func_0x000108966ad0();
    *(undefined4 *)pppuVar5 = uVar2;
    *(int *)((long)pppuVar5 + 4) = iVar1;
    pppuVar5[1] = param_2;
    *(undefined4 *)(pppuVar5 + 2) = uVar17;
    pppuVar4 = param_1 + 6;
    pppuVar9 = pppuVar5;
    FUN_108965d28(pppuVar4,pppuVar5,pppuVar5);
    if (pppuVar4 == pppuVar5) {
      param_1[0x14] = (undefined **)((long)param_1[0x14] + 1);
    }
    else {
      __ZdlPv(pppuVar5);
    }
    uVar3 = *(uint *)(plVar16 + 2);
    in_ZR = uVar3 == 0xc;
    pcStack_2b0 = "UNKNOWN";
    if (uVar3 < 0xd) {
      pcStack_2b0 = (&PTR_DAT_110a9ff38)[uVar3];
    }
    uStack_2a0 = (ulong)*(uint *)((long)plVar16 + 0x14);
    uStack_2a8 = 0;
    uStack_298 = 0;
    ppuVar15 = (undefined **)&UNK_10f4ed6ef;
    func_0x000107c2793c();
    pppuVar4 = &ppuStack_288;
    func_0x000107c31740(pppuVar4,ppuVar15,pppuVar9,0x2c,&pcStack_2b0,0);
    unaff_x22 = pppuVar5;
  }
  pppuVar4 = &ppuStack_288;
  func_0x000107c283e8();
  func_0x00010896699c(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pppuVar5 = &ppuStack_288;
  func_0x000107c283e8();
  func_0x000108966994();
  puStack_2d8 = &UNK_10f4ed6ef;
  pcStack_2b8 = FUN_108964bd4;
  ppuVar6 = ppuVar15;
  pppuStack_2e0 = unaff_x22;
  pppuStack_2d0 = param_1;
  pppuStack_2c8 = pppuVar4;
  puStack_2c0 = &stack0xfffffffffffffff0;
  func_0x00010872325c(ppuVar15,pppuVar5[7]);
  puVar7 = pppuVar5[10][(long)ppuVar6];
  while (puVar7 != (undefined *)0x0) {
    if (ppuVar15 == *(undefined ***)(puVar7 + -0x10)) {
      ppuVar15 = (undefined **)(puVar7 + -0x18);
      func_0x000108966374();
      ppuStack_2e8 = ppuVar15;
      ppuVar6 = (undefined **)0x0;
      if (puVar7 != (undefined *)0x0) {
        ppuVar6 = (undefined **)(puVar7 + -0x18);
      }
      goto LAB_108964c44;
    }
    FUN_108966338();
  }
  ppuVar15 = pppuVar5[5];
  ppuStack_2e8 = ppuVar15;
  ppuVar6 = ppuVar15;
LAB_108964c44:
  while (ppuVar8 = ppuStack_2e8, ppuStack_2e8 != ppuVar6) {
    if (*(char *)(pppuVar5 + 0x22) == '\x01') {
      FUN_108b82844(pppuVar5 + 0x16,*(undefined4 *)ppuStack_2e8);
    }
    if (*(char *)(pppuVar5 + 0x2f) == '\x01') {
      FUN_108b82844(pppuVar5 + 0x23,*(undefined4 *)ppuVar8);
    }
    FUN_1089663bc(&ppuStack_2e8);
  }
  do {
    if (ppuVar15 == ppuVar6) {
      return;
    }
    ppuStack_2e8 = ppuVar15;
    FUN_1089663bc(&ppuStack_2e8);
    pppuVar5[0x14] = (undefined **)((long)pppuVar5[0x14] + -1);
    func_0x0001087235dc(ppuVar15 + 5);
    ppuVar8 = ppuVar15 + 3;
    puVar10 = (undefined8 *)*ppuVar8;
    ppuVar12 = (undefined **)puVar10[1];
    if (ppuVar12 == ppuVar8) {
      puVar11 = (undefined8 *)ppuVar15[4];
      if ((undefined **)*puVar11 == ppuVar8) {
        puVar10[1] = puVar11;
LAB_108964d94:
        puVar10 = (undefined8 *)ppuVar15[4];
        goto LAB_108964d98;
      }
      ppuVar12 = *(undefined ***)*puVar11;
      if (ppuVar12 != ppuVar8) {
        if ((undefined **)ppuVar12[1] == ppuVar8) {
          puVar10[1] = puVar11;
          goto LAB_108964db4;
        }
        puVar13 = *(undefined8 **)puVar11[1];
        if ((undefined **)puVar11[1] == ppuVar8) {
          *puVar13 = puVar11;
          puVar11[1] = puVar13;
        }
        else {
          *puVar13 = puVar10;
          puVar10[1] = puVar11;
        }
        goto LAB_108964da0;
      }
      puVar10[1] = puVar11;
LAB_108964d84:
      puVar7 = ppuVar15[3];
      puVar10 = *(undefined8 **)ppuVar15[4];
LAB_108964d9c:
      *puVar10 = puVar7;
    }
    else {
      puVar11 = (undefined8 *)ppuVar15[4];
      ppuVar14 = (undefined **)*puVar11;
      if ((undefined **)*ppuVar12 == ppuVar8) {
        if (ppuVar14 == ppuVar8) {
          *ppuVar12 = (undefined *)puVar11;
          goto LAB_108964d94;
        }
        if ((undefined **)*ppuVar14 != ppuVar8) {
          *ppuVar12 = (undefined *)puVar11;
LAB_108964db4:
          func_0x000108966430();
          goto LAB_108964da0;
        }
        *ppuVar12 = (undefined *)0x0;
        puVar10 = (undefined8 *)ppuVar15[4];
        *(undefined8 **)(ppuVar15[3] + 8) = puVar10;
        puVar10 = (undefined8 *)*puVar10;
LAB_108964d98:
        puVar7 = ppuVar15[3];
        goto LAB_108964d9c;
      }
      if ((undefined **)*ppuVar14 == ppuVar8) {
        func_0x000108966464();
        goto LAB_108964d84;
      }
      puVar7 = ((undefined **)*puVar10)[1];
      if (*(undefined ***)(puVar7 + 8) != ppuVar8) {
        func_0x000108966464();
        goto LAB_108964d94;
      }
      if ((undefined **)*puVar10 == ppuVar8) {
        *(undefined8 **)(puVar7 + 8) = puVar10;
        *puVar10 = puVar7;
      }
      else {
        *(undefined8 **)(puVar7 + 8) = puVar11;
        *puVar11 = puVar10;
      }
    }
LAB_108964da0:
    __ZdlPv(ppuVar15);
    ppuVar15 = ppuStack_2e8;
  } while( true );
}



/* Entry: 108964bd4; end: 108964df7;  */

void FUN_108964bd4(long param_1,long param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puStack_38;
  
  lVar2 = param_2;
  func_0x00010872325c(param_2,*(undefined8 *)(param_1 + 0x38));
  lVar2 = *(long *)(*(long *)(param_1 + 0x50) + lVar2 * 8);
  while (lVar2 != 0) {
    if (param_2 == *(long *)(lVar2 + -0x10)) {
      puVar9 = (undefined4 *)(lVar2 + -0x18);
      func_0x000108966374();
      puStack_38 = puVar9;
      puVar10 = (undefined4 *)0x0;
      if (lVar2 != 0) {
        puVar10 = (undefined4 *)(lVar2 + -0x18);
      }
      goto LAB_108964c44;
    }
    FUN_108966338();
  }
  puVar9 = *(undefined4 **)(param_1 + 0x28);
  puStack_38 = puVar9;
  puVar10 = puVar9;
LAB_108964c44:
  while (puVar1 = puStack_38, puStack_38 != puVar10) {
    if (*(char *)(param_1 + 0x110) == '\x01') {
      FUN_108b82844(param_1 + 0xb0,*puStack_38);
    }
    if (*(char *)(param_1 + 0x178) == '\x01') {
      FUN_108b82844(param_1 + 0x118,*puVar1);
    }
    FUN_1089663bc(&puStack_38);
  }
  do {
    if (puVar9 == puVar10) {
      return;
    }
    puStack_38 = puVar9;
    FUN_1089663bc(&puStack_38);
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + -1;
    func_0x0001087235dc(puVar9 + 10);
    puVar4 = (undefined8 *)(puVar9 + 6);
    plVar3 = (long *)*puVar4;
    puVar7 = (undefined8 *)plVar3[1];
    if (puVar7 == puVar4) {
      puVar7 = *(undefined8 **)(puVar9 + 8);
      if ((undefined8 *)*puVar7 == puVar4) {
        plVar3[1] = (long)puVar7;
LAB_108964d94:
        puVar4 = *(undefined8 **)(puVar9 + 8);
        goto LAB_108964d98;
      }
      puVar5 = *(undefined8 **)*puVar7;
      if (puVar5 != puVar4) {
        if ((undefined8 *)puVar5[1] == puVar4) {
          plVar3[1] = (long)puVar7;
          goto LAB_108964db4;
        }
        puVar5 = *(undefined8 **)puVar7[1];
        if ((undefined8 *)puVar7[1] == puVar4) {
          *puVar5 = puVar7;
          puVar7[1] = puVar5;
        }
        else {
          *puVar5 = plVar3;
          plVar3[1] = (long)puVar7;
        }
        goto LAB_108964da0;
      }
      plVar3[1] = (long)puVar7;
LAB_108964d84:
      uVar6 = *(undefined8 *)(puVar9 + 6);
      puVar4 = (undefined8 *)**(undefined8 **)(puVar9 + 8);
LAB_108964d9c:
      *puVar4 = uVar6;
    }
    else {
      puVar5 = *(undefined8 **)(puVar9 + 8);
      puVar8 = (undefined8 *)*puVar5;
      if ((undefined8 *)*puVar7 == puVar4) {
        if (puVar8 == puVar4) {
          *puVar7 = puVar5;
          goto LAB_108964d94;
        }
        if ((undefined8 *)*puVar8 != puVar4) {
          *puVar7 = puVar5;
LAB_108964db4:
          func_0x000108966430();
          goto LAB_108964da0;
        }
        *puVar7 = 0;
        puVar4 = *(undefined8 **)(puVar9 + 8);
        *(undefined8 **)(*(long *)(puVar9 + 6) + 8) = puVar4;
        puVar4 = (undefined8 *)*puVar4;
LAB_108964d98:
        uVar6 = *(undefined8 *)(puVar9 + 6);
        goto LAB_108964d9c;
      }
      if ((undefined8 *)*puVar8 == puVar4) {
        func_0x000108966464();
        goto LAB_108964d84;
      }
      lVar2 = ((undefined8 *)*plVar3)[1];
      if (*(undefined8 **)(lVar2 + 8) != puVar4) {
        func_0x000108966464();
        goto LAB_108964d94;
      }
      if ((undefined8 *)*plVar3 == puVar4) {
        *(long **)(lVar2 + 8) = plVar3;
        *plVar3 = lVar2;
      }
      else {
        *(undefined8 **)(lVar2 + 8) = puVar5;
        *puVar5 = plVar3;
      }
    }
LAB_108964da0:
    __ZdlPv(puVar9);
    puVar9 = puStack_38;
  } while( true );
}



/* Entry: 108964df8; end: 108964e2f;  */

void FUN_108964df8(long param_1)

{
  long extraout_x8;
  long lVar1;
  undefined1 uStack_21;
  
  lVar1 = *(long *)(param_1 + 0x1e8);
  func_0x0001089668c4();
  func_0x0001089668b4((&PTR_DAT_110a9fde0)[extraout_x8],&uStack_21);
  *(undefined1 *)(lVar1 + 0x60) = 0;
  return;
}



/* Entry: 108964e30; end: 108964e37;  */

long FUN_108964e30(long param_1)

{
  return param_1 + 0x1a8;
}



/* Entry: 108964e38; end: 108964e6f;  */

void FUN_108964e38(long param_1)

{
  long extraout_x8;
  long lVar1;
  undefined1 uStack_21;
  
  lVar1 = *(long *)(param_1 + 0x1e8);
  func_0x0001089668c4();
  func_0x0001089668b4((&PTR_FUN_110a9fe08)[extraout_x8],&uStack_21);
  *(undefined1 *)(lVar1 + 0x60) = 0;
  return;
}



/* Entry: 108964e70; end: 108964e77;  */

void FUN_108964e70(long param_1)

{
  long extraout_x8;
  long lVar1;
  undefined1 uStack_21;
  
  lVar1 = *(long *)(param_1 + 0x1e0);
  func_0x0001089668c4();
  func_0x0001089668b4((&PTR_FUN_110a9fe08)[extraout_x8],&uStack_21);
  *(undefined1 *)(lVar1 + 0x60) = 0;
  return;
}



/* Entry: 108964e78; end: 108964eaf;  */

void FUN_108964e78(long param_1)

{
  long extraout_x8;
  long lVar1;
  undefined1 uStack_21;
  
  lVar1 = *(long *)(param_1 + 0x1e8);
  func_0x0001089668c4();
  func_0x0001089668b4((&PTR_FUN_110a9fe58)[extraout_x8],&uStack_21);
  *(undefined1 *)(lVar1 + 0x60) = 0;
  return;
}



/* Entry: 108964eb0; end: 108964eb7;  */

void FUN_108964eb0(long param_1)

{
  long extraout_x8;
  long lVar1;
  undefined1 uStack_21;
  
  lVar1 = *(long *)(param_1 + 0x1e0);
  func_0x0001089668c4();
  func_0x0001089668b4((&PTR_FUN_110a9fe58)[extraout_x8],&uStack_21);
  *(undefined1 *)(lVar1 + 0x60) = 0;
  return;
}



/* Entry: 108964eb8; end: 108964f0f;  */

bool FUN_108964eb8(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x178) == '\x01') {
    iVar2 = (int)param_1 + 0x148;
    func_0x000108b828e4();
    bVar1 = iVar2 == 0;
    lVar3 = 0x1d0;
    if (!bVar1) {
      lVar3 = 0x1e0;
    }
  }
  else {
    bVar1 = false;
    lVar3 = 0x1e0;
  }
  *(long *)(param_1 + lVar3) = *(long *)(param_1 + lVar3) + 1;
  return bVar1;
}



/* Entry: 108964f10; end: 1089650e3;  */

void FUN_108964f10(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  do {
    plVar6 = param_4;
    puVar5 = param_3;
    puVar3 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar4 = param_2;
    func_0x000108966aac();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    *(undefined8 *)((long)register0x00000008 + -0x68) = *puVar4;
    uVar7 = puVar4[1];
    *(undefined8 *)((long)register0x00000008 + -0x58) = puVar4[2];
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar7;
    unaff_x23 = (undefined8 *)((long)register0x00000008 + -0x68);
    FUN_1089870c0();
    unaff_x19 = unaff_x23;
    if ((ulong)unaff_x23 >> 0x20 != 0) {
      unaff_x19 = (undefined8 *)((ulong)unaff_x23 & 0xffffffff);
      puVar4 = *(undefined8 **)(puVar3 + 0x70);
      func_0x00010872325c();
      plVar1 = *(long **)(*(long *)(puVar3 + 0x88) + (long)unaff_x19 * 8);
      while (plVar1 != (long *)0x0) {
        if ((int)plVar1[-5] == (int)unaff_x23) {
          in_ZR = *(long **)(puVar3 + 0x28) == plVar1 + -5;
          if (!(bool)in_ZR) {
            lVar9 = plVar1[-4];
            lVar8 = plVar1[-5];
            *(long *)((long)register0x00000008 + -0xa0) = plVar1[-3];
            *(long *)((long)register0x00000008 + -0xa8) = lVar9;
            *(long *)((long)register0x00000008 + -0xb0) = lVar8;
            *(undefined1 *)((long)register0x00000008 + -0x98) = 1;
            if (((*(byte *)(puVar5 + 0xc) & 1) == 0) ||
               (unaff_x19 = puVar5, puVar4 = param_2, FUN_108b82874(), (int)unaff_x19 != 0))
            goto LAB_108965074;
            *plVar6 = *plVar6 + 1;
            in_ZR = param_2[1] == 4;
            if (3 < (ulong)param_2[1]) {
              cVar2 = *(char *)*param_2;
              in_ZR = cVar2 == -0x41;
              if (cVar2 < -0x40) {
                in_ZR = (((char *)*param_2)[1] & 0xf8U) == 200;
                *(undefined1 *)((long)register0x00000008 + -0x69) = in_ZR;
                if ((bool)in_ZR) {
                  uVar7 = *param_2;
                  *(undefined8 *)((long)register0x00000008 + -0x88) = param_2[1];
                  *(undefined8 *)((long)register0x00000008 + -0x90) = uVar7;
                  *(undefined8 *)((long)register0x00000008 + -0x80) = param_2[2];
                  puVar4 = (undefined8 *)0x28;
                  __Znwm();
                  *puVar4 = &PTR_FUN_110a9feb8;
                  puVar4[1] = (undefined1 *)((long)register0x00000008 + -0xb0);
                  puVar4[2] = puVar3;
                  puVar4[3] = param_2;
                  puVar4[4] = (undefined1 *)((long)register0x00000008 + -0x69);
                  *(undefined8 **)((long)register0x00000008 + -0x50) = puVar4;
                  param_2 = (undefined8 *)((long)register0x00000008 + -0x68);
                  FUN_1089f5a28((undefined1 *)((long)register0x00000008 + -0x90));
                  unaff_x19 = (undefined8 *)((long)register0x00000008 + -0x68);
                  FUN_1089667b4();
                  goto LAB_108965080;
                }
              }
            }
            unaff_x19 = *(undefined8 **)(puVar3 + 0x10);
            (**(code **)*unaff_x19)
                      (unaff_x19,param_2,*(undefined8 *)((long)register0x00000008 + -0xa8),
                       *(undefined4 *)((long)register0x00000008 + -0xa0),0);
            goto LAB_108965080;
          }
          break;
        }
        in_ZR = *(long **)plVar1[1] == plVar1;
        plVar1 = (long *)plVar1[1];
        if (!(bool)in_ZR) {
          plVar1 = (long *)0x0;
        }
      }
      *(undefined1 *)((long)register0x00000008 + -0x98) = 0;
    }
LAB_108965074:
    param_2 = puVar4;
    plVar6[2] = plVar6[2] + 1;
LAB_108965080:
    func_0x00010896699c(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    param_1 = (undefined1 *)((long)register0x00000008 + -0x68);
    FUN_1089667b4();
    unaff_x30 = FUN_1089650e4;
    func_0x000108966994();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
    param_3 = (undefined8 *)(param_1 + 0x118);
    param_4 = (long *)(param_1 + 0x1c8);
    unaff_x20 = puVar3;
    unaff_x21 = plVar6;
    unaff_x22 = puVar5;
  } while( true );
}



/* Entry: 1089650e4; end: 1089650ef;  */

void FUN_1089650e4(undefined1 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  undefined1 in_ZR;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  do {
    puVar4 = param_1;
    plVar1 = (long *)(puVar4 + 0x1c8);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar5 = param_2;
    func_0x000108966aac();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    *(undefined8 *)((long)register0x00000008 + -0x68) = *puVar5;
    uVar6 = puVar5[1];
    *(undefined8 *)((long)register0x00000008 + -0x58) = puVar5[2];
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar6;
    unaff_x23 = (undefined8 *)((long)register0x00000008 + -0x68);
    FUN_1089870c0();
    unaff_x19 = unaff_x23;
    if ((ulong)unaff_x23 >> 0x20 != 0) {
      unaff_x19 = (undefined8 *)((ulong)unaff_x23 & 0xffffffff);
      puVar5 = *(undefined8 **)(puVar4 + 0x70);
      func_0x00010872325c();
      plVar2 = *(long **)(*(long *)(puVar4 + 0x88) + (long)unaff_x19 * 8);
      while (plVar2 != (long *)0x0) {
        if ((int)plVar2[-5] == (int)unaff_x23) {
          in_ZR = *(long **)(puVar4 + 0x28) == plVar2 + -5;
          if (!(bool)in_ZR) {
            lVar8 = plVar2[-4];
            lVar7 = plVar2[-5];
            *(long *)((long)register0x00000008 + -0xa0) = plVar2[-3];
            *(long *)((long)register0x00000008 + -0xa8) = lVar8;
            *(long *)((long)register0x00000008 + -0xb0) = lVar7;
            *(undefined1 *)((long)register0x00000008 + -0x98) = 1;
            if (((puVar4[0x178] & 1) == 0) ||
               (unaff_x19 = (undefined8 *)(puVar4 + 0x118), puVar5 = param_2, FUN_108b82874(),
               (int)unaff_x19 != 0)) goto LAB_108965074;
            *plVar1 = *plVar1 + 1;
            in_ZR = param_2[1] == 4;
            if (3 < (ulong)param_2[1]) {
              cVar3 = *(char *)*param_2;
              in_ZR = cVar3 == -0x41;
              if (cVar3 < -0x40) {
                in_ZR = (((char *)*param_2)[1] & 0xf8U) == 200;
                *(undefined1 *)((long)register0x00000008 + -0x69) = in_ZR;
                if ((bool)in_ZR) {
                  uVar6 = *param_2;
                  *(undefined8 *)((long)register0x00000008 + -0x88) = param_2[1];
                  *(undefined8 *)((long)register0x00000008 + -0x90) = uVar6;
                  *(undefined8 *)((long)register0x00000008 + -0x80) = param_2[2];
                  puVar5 = (undefined8 *)0x28;
                  __Znwm();
                  *puVar5 = &PTR_FUN_110a9feb8;
                  puVar5[1] = (undefined1 *)((long)register0x00000008 + -0xb0);
                  puVar5[2] = puVar4;
                  puVar5[3] = param_2;
                  puVar5[4] = (undefined1 *)((long)register0x00000008 + -0x69);
                  *(undefined8 **)((long)register0x00000008 + -0x50) = puVar5;
                  param_2 = (undefined8 *)((long)register0x00000008 + -0x68);
                  FUN_1089f5a28((undefined1 *)((long)register0x00000008 + -0x90));
                  unaff_x19 = (undefined8 *)((long)register0x00000008 + -0x68);
                  FUN_1089667b4();
                  goto LAB_108965080;
                }
              }
            }
            unaff_x19 = *(undefined8 **)(puVar4 + 0x10);
            (**(code **)*unaff_x19)
                      (unaff_x19,param_2,*(undefined8 *)((long)register0x00000008 + -0xa8),
                       *(undefined4 *)((long)register0x00000008 + -0xa0),0);
            goto LAB_108965080;
          }
          break;
        }
        in_ZR = *(long **)plVar2[1] == plVar2;
        plVar2 = (long *)plVar2[1];
        if (!(bool)in_ZR) {
          plVar2 = (long *)0x0;
        }
      }
      *(undefined1 *)((long)register0x00000008 + -0x98) = 0;
    }
LAB_108965074:
    param_2 = puVar5;
    *(long *)(puVar4 + 0x1d8) = *(long *)(puVar4 + 0x1d8) + 1;
LAB_108965080:
    func_0x00010896699c(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    param_1 = (undefined1 *)((long)register0x00000008 + -0x68);
    FUN_1089667b4();
    unaff_x30 = FUN_1089650e4;
    func_0x000108966994();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
    unaff_x20 = puVar4;
    unaff_x21 = plVar1;
    unaff_x22 = (undefined8 *)(puVar4 + 0x118);
  } while( true );
}



/* Entry: 1089650f0; end: 1089651bb;  */

void FUN_1089650f0(long param_1,long param_2)

{
  undefined4 uStack_24;
  
  uStack_24 = 0;
  param_2 = param_2 + 8;
  FUN_1089667f8(param_2,&uStack_24);
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0x14);
    *(undefined1 *)(param_1 + 0xac) = 1;
  }
  return;
}



/* Entry: 1089651bc; end: 108965277;  */

void FUN_1089651bc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = param_1;
  func_0x000108966ad0();
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(puVar1 + 2) = param_4;
  puVar1[4] = param_5;
  puVar2 = param_1;
  FUN_108965d28(param_1,puVar1,puVar1);
  if (puVar2 != puVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  *(long *)(param_1 + 0x1c) = *(long *)(param_1 + 0x1c) + 1;
  return;
}



/* Entry: 108965278; end: 108965313;  */

ulong FUN_108965278(long param_1)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  FUN_1089650f0();
  uVar3 = *(ulong *)(param_1 + 0x18);
  switch(*(undefined8 *)(param_1 + 0x38)) {
  case 1:
    uVar4 = 0x61;
    break;
  case 2:
    uVar4 = 0xc1;
    break;
  case 3:
    uVar4 = 0x185;
    break;
  case 4:
    uVar4 = 0x301;
    break;
  case 5:
    uVar4 = 0x607;
    break;
  case 6:
    uVar4 = 0xc07;
    break;
  case 7:
    uVar4 = 0x1807;
    break;
  case 8:
    uVar4 = 0x3001;
    break;
  case 9:
    uVar4 = 0x6011;
    break;
  case 10:
    uVar4 = 0xc005;
    break;
  case 0xb:
    uVar4 = 0x1800d;
    break;
  case 0xc:
    uVar4 = 0x30005;
    break;
  case 0xd:
    uVar4 = 0x60019;
    break;
  case 0xe:
    uVar4 = 0xc0001;
    break;
  case 0xf:
    uVar4 = 0x180005;
    break;
  case 0x10:
    uVar4 = 0x30000b;
    break;
  case 0x11:
    uVar4 = 0x60000d;
    break;
  case 0x12:
    uVar4 = 0xc00005;
    break;
  case 0x13:
    uVar4 = 0x1800013;
    break;
  case 0x14:
    uVar4 = 0x3000005;
    break;
  case 0x15:
    uVar4 = 0x6000017;
    break;
  case 0x16:
    uVar4 = 0xc000013;
    break;
  case 0x17:
    uVar4 = 0x18000005;
    break;
  case 0x18:
    uVar4 = 0x30000059;
    break;
  case 0x19:
    uVar4 = 0x60000005;
    break;
  case 0x1a:
    uVar4 = 0xc0000001;
    break;
  case 0x1b:
    uVar4 = 0x17ffffffb;
    break;
  case 0x1c:
    uVar4 = 0x300000005;
    break;
  case 0x1d:
    uVar4 = 0x5ffffffe7;
    break;
  case 0x1e:
    uVar4 = 0xffff000bffffffff;
    goto code_r0x0001087234f0;
  case 0x1f:
    uVar4 = 0x1800000007;
    break;
  case 0x20:
    uVar4 = 0x3000000001;
    break;
  case 0x21:
    uVar4 = 0x6000000019;
    break;
  case 0x22:
    uVar4 = 0xffff00bfffffffff;
    goto code_r0x0001087234f0;
  case 0x23:
    uVar4 = 0x17ffffffff3;
    break;
  case 0x24:
    uVar4 = 0x2ffffffffed;
    break;
  case 0x25:
    uVar4 = 0x60000000001;
    break;
  case 0x26:
    uVar4 = 0xbfffffffff3;
    break;
  case 0x27:
    uVar4 = 0xffff17ffffffffff;
code_r0x0001087234f0:
    uVar4 = uVar4 & 0xffffffffffff;
    break;
  case 0x28:
    uVar4 = 0x300000000037;
    break;
  case 0x29:
    uVar4 = 0x5ffffffffff9;
    break;
  case 0x2a:
    uVar4 = 0xbfffffffffe9;
    break;
  case 0x2b:
    uVar4 = 0x1800000000011;
    break;
  case 0x2c:
    uVar4 = 0x2fffffffffffb;
    break;
  case 0x2d:
    uVar4 = 0x6000000000011;
    break;
  case 0x2e:
    uVar4 = 0xbfffffffffff5;
    break;
  case 0x2f:
    uVar4 = 0x17fffffffffff3;
    break;
  case 0x30:
    uVar4 = 0x2ffffffffffffb;
    break;
  case 0x31:
    uVar4 = 0x5fffffffffffdb;
    break;
  case 0x32:
    uVar4 = 0xc0000000000005;
    break;
  case 0x33:
    uVar4 = 0x17fffffffffffff;
    break;
  case 0x34:
    uVar4 = 0x300000000000023;
    break;
  case 0x35:
    uVar4 = 0x600000000000005;
    break;
  case 0x36:
    uVar4 = 0xbffffffffffffe7;
    break;
  case 0x37:
    uVar4 = 0x1800000000000011;
    break;
  case 0x38:
    uVar4 = 0x3000000000000005;
    break;
  case 0x39:
    uVar4 = 0x600000000000002f;
    break;
  case 0x3a:
    uVar4 = uVar3 + 0x3fffffffffffffef;
    bVar2 = 0xc000000000000010 < uVar3;
    goto code_r0x0001087234ac;
  case 0x3b:
    uVar4 = uVar3 + 0x3b;
    bVar2 = 0xffffffffffffffc4 < uVar3;
code_r0x0001087234ac:
    if (bVar2) {
      uVar3 = uVar4;
    }
    return uVar3;
  default:
    uVar4 = 0x35;
  }
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = uVar3 / uVar4;
  }
  return uVar3 - uVar1 * uVar4;
}



/* Entry: 108965314; end: 1089654eb;  */

void FUN_108965314(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar4 = (undefined8 *)0x1f0;
  __Znwm();
  *puVar4 = &PTR_FUN_110a9fb60;
  puVar4[1] = &PTR_FUN_110a9fbe0;
  puVar4[2] = param_3;
  puVar4[3] = param_4;
  puVar5 = puVar4;
  func_0x000108966ad0();
  puVar4[5] = puVar5;
  FUN_10896567c(puVar4 + 7,puVar5 + 3,0);
  *(undefined4 *)(puVar4 + 0xb) = 0x3f800000;
  func_0x000108965644(puVar4 + 6);
  FUN_10896567c(puVar4 + 0xe,puVar4[5] + 0x28,0);
  *(undefined4 *)(puVar4 + 0x12) = 0x3f800000;
  func_0x00010896560c(puVar4 + 6);
  *(undefined1 *)(puVar4 + 0x16) = 0;
  puVar4[0x14] = 0;
  *(undefined1 *)(puVar4 + 0x15) = 0;
  *(undefined1 *)((long)puVar4 + 0xac) = 0;
  *(undefined1 *)(puVar4 + 0x22) = 0;
  *(undefined1 *)(puVar4 + 0x23) = 0;
  *(undefined1 *)(puVar4 + 0x2f) = 0;
  lVar6 = param_5[1];
  uVar7 = *param_5;
  puVar4[0x31] = param_5[1];
  puVar4[0x30] = uVar7;
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
  lVar6 = *(long *)(param_2 + 0x10);
  uVar7 = *(undefined8 *)(param_2 + 8);
  puVar4[0x33] = *(undefined8 *)(param_2 + 0x10);
  puVar4[0x32] = uVar7;
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
  puVar4[0x3c] = 0;
  puVar4[0x39] = 0;
  puVar4[0x38] = 0;
  puVar4[0x3b] = 0;
  puVar4[0x3a] = 0;
  puVar4[0x35] = 0;
  puVar4[0x34] = 0;
  puVar4[0x37] = 0;
  puVar4[0x36] = 0;
  puVar5 = (undefined8 *)0x68;
  __Znwm();
  *puVar5 = puVar4;
  puVar5[1] = &DAT_10f3637f7;
  *(undefined2 *)(puVar5 + 2) = 0;
  puVar5[3] = &UNK_10f4ed727;
  puVar5[4] = 0;
  puVar5[6] = &UNK_10f4ed72d;
  puVar5[7] = 1;
  *(undefined1 *)((long)puVar5 + 0x42) = 0;
  puVar5[9] = &UNK_10f4ed734;
  *(undefined1 *)(puVar5 + 0xb) = 0;
  *(undefined1 *)(puVar5 + 0xc) = 0;
  puVar4[0x3d] = puVar5;
  *param_1 = puVar4;
  return;
}



/* Entry: 1089654ec; end: 1089654ef;  */

undefined8 * FUN_1089654ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9fc08;
  FUN_108955e54(param_1 + 1);
  return param_1;
}



/* Entry: 1089654f0; end: 108965523;  */

void FUN_1089654f0(void)

{
  func_0x00010896554c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108965524; end: 108965577;  */

/* WARNING: Possible PIC construction at 0x000108965538: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010896553c) */

long FUN_108965524(long param_1)

{
  func_0x000108b829f8(param_1 + 0x30);
  return param_1;
}



/* Entry: 108965578; end: 1089655e7;  */

void FUN_108965578(undefined4 param_1,long *param_2)

{
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  uStack_14 = 1;
  uStack_1c = 1;
  uStack_18 = param_1;
  (**(code **)(*param_2 + 8))(param_2,&uStack_1c);
  return;
}



/* Entry: 1089655e8; end: 10896560b;  */

undefined8 * FUN_1089655e8(undefined8 *param_1)

{
  __ZdlPv(*param_1);
  return param_1;
}



/* Entry: 10896560c; end: 10896567b;  */

void FUN_10896560c(long param_1)

{
  long lVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x60) *
          (float)*(ulong *)(&UNK_10df4afd0 + *(long *)(param_1 + 0x40) * 8);
  lVar1 = (long)fVar2;
  if (1.8446744e+19 <= fVar2) {
    lVar1 = -1;
  }
  *(long *)(param_1 + 0x68) = lVar1;
  return;
}



/* Entry: 10896567c; end: 10896571f;  */

long * FUN_10896567c(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  FUN_108722fc0();
  *param_1 = param_3;
  lVar2 = *(long *)(&UNK_10df4afd0 + param_3 * 8);
  param_1[2] = lVar2 + 1;
  if (lVar2 == -1) {
    plVar1 = (long *)0x0;
    lVar2 = -1;
  }
  else {
    plVar1 = param_1 + 1;
    FUN_108723080();
    lVar2 = *(long *)(&UNK_10df4afd0 + *param_1 * 8);
  }
  param_1[3] = (long)plVar1;
  for (lVar2 = lVar2 << 3; lVar2 != 0; lVar2 = lVar2 + -8) {
    *plVar1 = 0;
    plVar1 = plVar1 + 1;
  }
  *(long *)param_2 = param_2;
  *(long *)(param_1[3] + *(long *)(&UNK_10df4afd0 + *param_1 * 8) * 8) = param_2;
  *(long *)(param_2 + 8) = param_1[3] + *(long *)(&UNK_10df4afd0 + *param_1 * 8) * 8;
  return param_1;
}



/* Entry: 108965720; end: 108965747;  */

long FUN_108965720(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000108966ac8();
  }
  return param_1;
}



/* Entry: 108965748; end: 1089657a3;  */

long FUN_108965748(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + 0x28);
  puVar1 = (undefined8 *)*puVar3;
  while (puVar1 != puVar3) {
    puVar2 = puVar1 + -5;
    puVar1 = (undefined8 *)*puVar1;
    __ZdlPv(puVar2);
  }
  FUN_108965720(param_1 + 0x58);
  FUN_108965720(param_1 + 0x20);
  FUN_1089655e8((long *)(param_1 + 8));
  return param_1;
}



/* Entry: 1089657a4; end: 1089657cf;  */

long * FUN_1089657a4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x0001089669b0();
  }
  return param_1;
}



/* Entry: 1089657d0; end: 1089657d3;  */

undefined8 FUN_1089657d0(void)

{
  return 0;
}



/* Entry: 1089657d4; end: 108965883;  */

undefined8 FUN_1089657d4(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_3;
  if ((*(byte *)(lVar2 + 0x110) & 1) != 0) {
    lVar1 = lVar2 + 0xe0;
    func_0x000108b828e4(lVar1,*param_1);
    if ((int)lVar1 == 0) {
      *(long *)(lVar2 + 0x1b0) = *(long *)(lVar2 + 0x1b0) + 1;
      func_0x000108966928(*(undefined8 *)(lVar2 + 0x180));
      return 1;
    }
  }
  *(long *)(lVar2 + 0x1c0) = *(long *)(lVar2 + 0x1c0) + 1;
  return 1;
}



/* Entry: 108965884; end: 108965887;  */

undefined8 FUN_108965884(void)

{
  return 0;
}



/* Entry: 108965888; end: 1089658db;  */

undefined8 FUN_108965888(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = *param_3;
  FUN_108964f10(lVar1,*param_1,lVar1 + 0xb0,lVar1 + 0x1a8);
  return 1;
}



/* Entry: 1089658dc; end: 1089658df;  */

undefined8 FUN_1089658dc(void)

{
  return 0;
}



/* Entry: 1089658e0; end: 1089658f3;  */

void FUN_1089658e0(void)

{
  FUN_108966a20();
  return;
}



/* Entry: 1089658f4; end: 108965987;  */

undefined8 FUN_1089658f4(void)

{
  undefined1 in_ZR;
  int extraout_w8;
  undefined8 *unaff_x21;
  
  func_0x000108966a00();
  if ((bool)in_ZR) {
    func_0x0001089669f4();
    func_0x000108966898();
    func_0x000108966938(3);
    func_0x000108965130();
    func_0x000108966980();
  }
  else {
    if (extraout_w8 != 0) {
      return 0;
    }
    func_0x0001089669f4();
    func_0x000108966898();
    func_0x000108966938(2);
    func_0x000108965130();
    FUN_108965278(*unaff_x21);
  }
  func_0x0001089669f4();
  func_0x000108966898();
  return 1;
}



/* Entry: 108965988; end: 10896598b;  */

undefined8 FUN_108965988(void)

{
  return 0;
}



/* Entry: 10896598c; end: 108965b47;  */

bool FUN_10896598c(int *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  int iVar1;
  int iVar2;
  code *extraout_x8;
  code *extraout_x8_00;
  
  iVar1 = *param_1;
  iVar2 = iVar1;
  if (iVar1 == 1) {
    func_0x0001089668ec(*param_5);
    (*extraout_x8)();
    *param_5 = 3;
    func_0x0001089652a0(*param_3,param_1);
    func_0x000108966950(*param_5);
    (*extraout_x8_00)();
    iVar2 = *param_1;
  }
  return iVar1 == 1 || iVar2 == 0;
}



/* Entry: 108965b48; end: 108965b4b;  */

undefined8 FUN_108965b48(void)

{
  return 0;
}



/* Entry: 108965b4c; end: 108965b6b;  */

undefined8 FUN_108965b4c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  if (*(long *)(*param_3 + 0x1a0) != 0) {
    func_0x00010896691c();
  }
  return 1;
}



/* Entry: 108965b6c; end: 108965b73;  */

undefined8 FUN_108965b6c(void)

{
  return 1;
}



/* Entry: 108965b74; end: 108965bcb;  */

undefined8 FUN_108965b74(undefined8 param_1,long param_2)

{
  func_0x000108966af0(*(undefined4 *)(param_2 + 0x18));
  return 1;
}



/* Entry: 108965bcc; end: 108965bcf;  */

undefined8 FUN_108965bcc(void)

{
  return 0;
}



/* Entry: 108965bd0; end: 108965bff;  */

undefined8 FUN_108965bd0(void)

{
  func_0x000108966a84();
  return 1;
}



/* Entry: 108965c00; end: 108965c87;  */

void FUN_108965c00(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  if (*(long **)(param_3 + 0x1a0) != (long *)0x0) {
    (**(code **)(**(long **)(param_3 + 0x1a0) + 0x30))();
  }
  (**(code **)**(undefined8 **)(param_3 + 400))
            (&lStack_38,*(undefined8 **)(param_3 + 400),param_3 + 8,param_1,param_2,
             *(undefined8 *)(param_3 + 0x18));
  lVar1 = lStack_38;
  lStack_38 = 0;
  lVar2 = *(long *)(param_3 + 0x1a0);
  *(long *)(param_3 + 0x1a0) = lVar1;
  if (lVar2 != 0) {
    func_0x0001089669b0();
    lVar1 = lStack_38;
    lStack_38 = 0;
    if (lVar1 != 0) {
      func_0x0001089669b0();
    }
  }
  return;
}



/* Entry: 108965c88; end: 108965c8f;  */

undefined8 FUN_108965c88(void)

{
  return 0;
}



/* Entry: 108965c90; end: 108965d23;  */

undefined8 FUN_108965c90(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x70);
  if (1 < uVar3) {
    lVar4 = *param_3;
    if (*(char *)(param_1 + 0x68) == '\x01') {
      plVar1 = *(long **)(lVar4 + 0x1a0);
      (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
      uVar3 = *(ulong *)(param_1 + 0x70);
    }
    plVar1 = (long *)(param_1 + 0x78);
    if ((uVar3 & 1) != 0) {
      plVar1 = (long *)*(long *)(param_1 + 0x78);
    }
    for (lVar5 = (uVar3 >> 1) * 0x1c; lVar5 != 0; lVar5 = lVar5 + -0x1c) {
      plVar2 = *(long **)(lVar4 + 0x1a0);
      (**(code **)(*plVar2 + 0x20))(plVar2,plVar1);
      plVar1 = (long *)((long)plVar1 + 0x1c);
    }
  }
  return 1;
}



/* Entry: 108965d24; end: 108965d27;  */

undefined8 FUN_108965d24(void)

{
  return 1;
}



/* Entry: 108965d28; end: 108966287;  */

long * FUN_108965d28(long param_1,uint *param_2,long *param_3)

{
  long *****ppppplVar1;
  long **pplVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  long *plVar6;
  long ****pppplVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 extraout_x8;
  undefined8 uVar11;
  long ***ppplVar12;
  long *****ppppplVar13;
  long ***ppplVar14;
  long ****pppplVar15;
  long ****pppplVar16;
  ulong uVar17;
  long lVar18;
  long *****ppppplVar19;
  long lVar20;
  long ****pppplVar21;
  long lVar22;
  long ****pppplStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [16];
  long lStack_a8;
  undefined1 auStack_a0 [16];
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar18 = param_1;
  func_0x000108966aac();
  uVar17 = *(long *)(lVar18 + 0x70) + 1;
  uStack_68 = extraout_x8;
  if (*(ulong *)(lVar18 + 0x68) < uVar17) {
    func_0x0001089669bc((float)uVar17,*(undefined4 *)(param_1 + 0x60));
    lVar18 = *(long *)(param_1 + -8);
    func_0x000108966ae4();
    ppppplVar1 = (long *****)(lVar18 + 0x28);
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_108966288(auStack_a0);
      func_0x0001089662b0(auStack_b8,*(undefined8 *)(param_1 + 0x70));
      lVar22 = *(long *)(param_1 + 0x70);
      for (lVar20 = 0; lVar22 != lVar20; lVar20 = lVar20 + 1) {
        pppplVar16 = *ppppplVar1;
        uVar17 = (ulong)*(uint *)(pppplVar16 + -5);
        *(ulong *)(lStack_90 + lVar20 * 8) = uVar17;
        *(long *****)(lStack_a8 + lVar20 * 8) = pppplVar16;
        FUN_108723df0(ppppplVar1);
        func_0x00010872325c(uVar17,uStack_88);
        func_0x000108723e2c(pppplVar16,lStack_70 + uVar17 * 8,&pppplStack_c8);
      }
      func_0x000108966b08();
      func_0x000108966b10();
    }
    ppppplVar19 = ppppplVar1;
    if ((long *****)pppplStack_c8 != &pppplStack_c8) {
      ppppplVar19 = (long *****)pppplStack_c8;
    }
    *(long ******)(lVar18 + 0x28) = ppppplVar19;
    *(undefined8 **)(lVar18 + 0x30) = puStack_c0;
    *(long ******)*puStack_c0 = ppppplVar1;
    **(undefined8 **)(*(long *)(lVar18 + 0x28) + 8) = ppppplVar1;
    uVar11 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = uStack_88;
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    lVar18 = *(long *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = uStack_78;
    *(long *)(param_1 + 0x58) = lStack_70;
    uStack_88 = uVar11;
    uStack_78 = uVar3;
    lStack_70 = lVar18;
    FUN_10896560c(param_1);
    func_0x00010896695c();
  }
  plVar10 = *(long **)(param_1 + 0x40);
  plVar6 = (long *)(ulong)*param_2;
  func_0x00010872325c();
  plVar9 = (long *)(*(long *)(param_1 + 0x58) + (long)plVar6 * 8);
  plVar8 = (long *)*plVar9;
  while (plVar8 != (long *)0x0) {
    if (*param_2 == *(uint *)(plVar8 + -5)) {
      param_3 = plVar8 + -5;
      uVar5 = 1;
      goto LAB_10896615c;
    }
    bVar4 = *(long **)plVar8[1] != plVar8;
    plVar8 = (long *)plVar8[1];
    if (bVar4) {
      plVar8 = (long *)0x0;
    }
  }
  uVar17 = *(long *)(param_1 + 0x70) + 1;
  uVar5 = uVar17 == *(ulong *)(param_1 + 0x30);
  if (*(ulong *)(param_1 + 0x30) < uVar17) {
    func_0x0001089669bc((float)uVar17,*(undefined4 *)(param_1 + 0x28));
    lVar18 = *(long *)(param_1 + -8);
    func_0x000108966ae4();
    ppppplVar1 = (long *****)(lVar18 + 0x18);
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_108966288(auStack_a0);
      func_0x0001089662b0(auStack_b8,*(undefined8 *)(param_1 + 0x70));
      lVar20 = 0;
      while (ppppplVar19 = (long *****)*ppppplVar1, ppppplVar19 != ppppplVar1) {
        pppplVar7 = ppppplVar19[-2];
        *(long *****)(lStack_90 + lVar20) = pppplVar7;
        *(long ******)(lStack_a8 + lVar20) = ppppplVar19;
        pppplVar21 = *ppppplVar1;
        ppplVar14 = *pppplVar21;
        pppplVar16 = (long ****)ppplVar14[1];
        if (pppplVar16 == pppplVar21) {
          ppplVar12 = pppplVar21[1];
LAB_108965f58:
          ppplVar14[1] = (long **)ppplVar12;
          pppplVar16 = pppplVar21;
        }
        else {
          pppplVar15 = (long ****)*pppplVar16;
          if (pppplVar15 == pppplVar21) {
            *pppplVar16 = (long ***)0x0;
            ppplVar14 = *pppplVar21;
            ppplVar12 = pppplVar21[1];
            goto LAB_108965f58;
          }
          if ((long ****)pppplVar15[1] == pppplVar16) {
            pppplVar15[1] = pppplVar21[1];
          }
          else {
            *pppplVar15[1] = (long **)0x0;
            (*pppplVar16)[1] = (long **)pppplVar21[1];
          }
        }
        *ppppplVar1 = (long ****)*pppplVar16;
        func_0x00010872325c(pppplVar7,uStack_88);
        pplVar2 = (long **)(lStack_70 + (long)pppplVar7 * 8);
        if (*pplVar2 == (long *)0x0) {
          *pppplVar16 = (long ***)pppplStack_c8;
          ppppplVar19[1] = (long ****)pppplStack_c8[1];
          (*pppplVar16)[1] = pplVar2;
          *pplVar2 = (long *)pppplVar16;
          ppppplVar13 = &pppplStack_c8;
        }
        else {
          *pppplVar16 = (long ***)**pplVar2;
          ppppplVar19[1] = (long ****)*pplVar2;
          *pplVar2 = (long *)pppplVar16;
          ppppplVar13 = (long *****)ppppplVar19[1];
        }
        *ppppplVar13 = (long ****)ppppplVar19;
        lVar20 = lVar20 + 8;
      }
      func_0x000108966b08();
      func_0x000108966b10();
    }
    uVar5 = (long *****)pppplStack_c8 == &pppplStack_c8;
    ppppplVar19 = ppppplVar1;
    if (!(bool)uVar5) {
      ppppplVar19 = (long *****)pppplStack_c8;
    }
    *(long ******)(lVar18 + 0x18) = ppppplVar19;
    *(undefined8 **)(lVar18 + 0x20) = puStack_c0;
    *(long ******)*puStack_c0 = ppppplVar1;
    **(undefined8 **)(*(long *)(lVar18 + 0x18) + 8) = ppppplVar1;
    uVar11 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uStack_88;
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    lVar18 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uStack_78;
    *(long *)(param_1 + 0x20) = lStack_70;
    uStack_88 = uVar11;
    uStack_78 = uVar3;
    lStack_70 = lVar18;
    func_0x000108965644(param_1);
    func_0x00010896695c();
  }
  lVar18 = *(long *)(param_2 + 2);
  func_0x00010872325c(lVar18,*(undefined8 *)(param_1 + 8));
  plVar6 = (long *)(*(long *)(param_1 + 0x20) + lVar18 * 8);
  lVar18 = *(long *)(param_2 + 2);
  plVar10 = (long *)*plVar6;
  plVar8 = plVar10;
  do {
    if (plVar8 == (long *)0x0) {
      plVar8 = param_3 + 3;
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(*(long *)(param_1 + -8) + 0x18);
        lVar18 = *plVar10;
        param_3[3] = lVar18;
        param_3[4] = *(long *)(lVar18 + 8);
        *(long **)(lVar18 + 8) = plVar6;
        *plVar6 = (long)plVar8;
      }
      else {
        param_3[3] = *plVar10;
        param_3[4] = *plVar6;
        *plVar6 = (long)plVar8;
        plVar10 = (long *)param_3[4];
      }
      *plVar10 = (long)plVar8;
LAB_108966148:
      plVar6 = param_3 + 5;
      func_0x000108723e2c(plVar6,plVar9,*(long *)(param_1 + -8) + 0x28);
      plVar10 = plVar9;
LAB_10896615c:
      func_0x00010896699c(uStack_68);
      if ((bool)uVar5) {
        return param_3;
      }
      ___stack_chk_fail();
      func_0x000108966b10();
      func_0x00010896695c();
      __Unwind_Resume(plVar6);
      func_0x000104bd46a0();
      plVar6[1] = (long)plVar10;
      plVar9 = plVar6;
      func_0x000104becd80();
      plVar6[2] = (long)plVar9;
      return plVar6;
    }
    uVar5 = lVar18 == plVar8[-2];
    if ((bool)uVar5) {
      plVar6 = (long *)plVar8[1];
      plVar10 = (long *)*plVar6;
      if (plVar10 == plVar8) {
        if (lVar18 != plVar6[-2]) {
          plVar6 = plVar8;
        }
      }
      else {
        plVar6 = plVar8;
        if ((long *)*plVar10 != plVar8) {
          plVar6 = plVar10;
        }
      }
      lVar18 = *plVar8;
      plVar10 = param_3 + 3;
      *plVar10 = lVar18;
      param_3[4] = (long)plVar8;
      if ((long *)**(long **)(*plVar8 + 8) == plVar8) {
        **(long **)(lVar18 + 8) = (long)plVar10;
      }
      else {
        *(long **)(lVar18 + 8) = plVar10;
      }
      if (plVar8 == plVar6) {
        *plVar6 = (long)plVar10;
        uVar5 = 1;
      }
      else {
        uVar5 = (long *)plVar8[1] == plVar6;
        if ((bool)uVar5) {
          *plVar8 = (long)plVar6;
          plVar8[1] = (long)plVar10;
        }
        else {
          lVar18 = *plVar6;
          *(long *)plVar8[1] = (long)plVar8;
          *plVar8 = (long)plVar6;
          *(long **)(lVar18 + 8) = plVar10;
        }
      }
      goto LAB_108966148;
    }
    FUN_108966338();
  } while( true );
}



/* Entry: 108966288; end: 108966337;  */

long FUN_108966288(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x000104becd80();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 108966338; end: 1089663bb;  */

long * FUN_108966338(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[1];
  plVar2 = (long *)*plVar1;
  if (plVar2 != param_1) {
    if ((long *)*plVar2 == param_1) {
      return (long *)0x0;
    }
    plVar1 = (long *)plVar2[1];
    if ((long *)*plVar1 != plVar2) {
      plVar1 = (long *)0x0;
    }
  }
  return plVar1;
}



/* Entry: 1089663bc; end: 1089663ef;  */

void FUN_1089663bc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1 + 0x18;
  FUN_1089663f0();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + -0x18;
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 1089663f0; end: 10896649b;  */

long * FUN_1089663f0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[1];
  plVar1 = (long *)*plVar2;
  if (plVar1 == param_1) {
    return plVar2;
  }
  if ((long *)*plVar1 != param_1) {
    if ((long *)((long *)*plVar1)[1] == param_1) {
      return plVar2;
    }
    plVar1 = *(long **)plVar2[1];
  }
  return plVar1;
}



/* Entry: 10896649c; end: 1089664c3;  */

undefined8 FUN_10896649c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  if (*(long **)(*param_3 + 0x1a0) != (long *)0x0) {
    (**(code **)(**(long **)(*param_3 + 0x1a0) + 0x38))();
  }
  return 1;
}



/* Entry: 1089664c4; end: 1089664cb;  */

undefined8 FUN_1089664c4(void)

{
  return 0;
}



/* Entry: 1089664cc; end: 108966523;  */

undefined8
FUN_1089664cc(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
             undefined1 *param_5)

{
  code *extraout_x8;
  
  func_0x000108966950(*param_5);
  (*extraout_x8)();
  *param_5 = 4;
  func_0x0001089655b4(*(undefined8 *)(*param_3 + 0x10));
  return 1;
}



/* Entry: 108966524; end: 108966527;  */

undefined8 FUN_108966524(void)

{
  return 0;
}



/* Entry: 108966528; end: 108966547;  */

undefined8 FUN_108966528(undefined8 param_1,undefined8 param_2,long *param_3)

{
  if (*(long *)(*param_3 + 0x1a0) != 0) {
    func_0x00010896691c();
  }
  return 1;
}



/* Entry: 108966548; end: 10896654b;  */

undefined8 FUN_108966548(void)

{
  return 0;
}



/* Entry: 10896654c; end: 1089665b3;  */

undefined8
FUN_10896654c(undefined8 param_1,long param_2,long *param_3,undefined8 param_4,undefined1 *param_5)

{
  code *extraout_x8;
  
  func_0x000108966950(*param_5);
  (*extraout_x8)();
  *param_5 = 3;
  FUN_108965578(*(undefined4 *)(param_2 + 0x30),*(undefined8 *)(*param_3 + 0x10));
  return 1;
}



/* Entry: 1089665b4; end: 1089665b7;  */

undefined8 FUN_1089665b4(void)

{
  return 0;
}


