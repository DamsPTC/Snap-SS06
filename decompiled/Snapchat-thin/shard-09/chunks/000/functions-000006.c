/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067dfa14; end: 1067dfa1b;  */

void FUN_1067dfa14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067dfd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 1067dfa1c; end: 1067dfa53;  */

void FUN_1067dfa1c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_1067df790();
  func_0x0001067dfbc4(&UNK_110cefce8);
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x7e) = *(undefined8 *)(param_2 + 0x7e);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  return;
}



/* Entry: 1067dfa54; end: 1067dfa73;  */

void FUN_1067dfa54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093eb80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1067dfa74; end: 1067dfa97;  */

void FUN_1067dfa74(long param_1)

{
  func_0x0001067dfc54();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1067dfa98; end: 1067dfa9b;  */

void FUN_1067dfa98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093ebd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1067dfa9c; end: 1067dfaaf;  */

void FUN_1067dfa9c(void)

{
  FUN_1067dfb04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067dfab0; end: 1067dfabb;  */

void FUN_1067dfab0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067dfd34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1067dfabc; end: 1067dfacf;  */

void FUN_1067dfabc(void)

{
  FUN_1067dfad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067dfad0; end: 1067dfad7;  */

void FUN_1067dfad0(void)

{
  return;
}



/* Entry: 1067dfad8; end: 1067dfb03;  */

undefined8 * FUN_1067dfad8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11093ec20;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 1067dfb04; end: 1067dfb0f;  */

void FUN_1067dfb04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093ebd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1067dfb10; end: 1067dfb57;  */

void FUN_1067dfb10(long param_1)

{
  func_0x0001067dfc54();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1067dfb58; end: 1067dfd5f;  */

void FUN_1067dfb58(void)

{
  return;
}



/* Entry: 1067dfd60; end: 1067dfef3;  */

void FUN_1067dfd60(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined ***pppuVar1;
  long *plVar2;
  long unaff_x24;
  undefined1 auStack_150 [40];
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  ulong uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined1 auStack_78 [40];
  
  uStack_118 = 0;
  uStack_110 = 0;
  ppuStack_128 = &PTR_FUN_11093e9c0;
  uStack_120 = 0;
  uStack_108 = 7;
  pppuVar1 = &ppuStack_128;
  FUN_1067ded58(pppuVar1,param_4 == 0);
  func_0x0001067df494(auStack_78,pppuVar1);
  func_0x0001067e0200();
  func_0x0001067e01a4();
  func_0x0001067e0218();
  FUN_1067df504(&ppuStack_128);
  func_0x0001002a8234(unaff_x24 + 0x38,param_3);
  func_0x0001002a8234(&uStack_110,param_2);
  uStack_80 = 2;
  if (param_4 != 1) {
    uStack_80 = 0;
  }
  if (param_4 == 0) {
    uStack_80 = 1;
  }
  uStack_7c = 1;
  plVar2 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar2 + 0x10))();
  uStack_a0 = (ulong)plVar2 / 1000;
  uStack_98 = 1;
  uStack_88 = 1;
  uStack_90 = param_5;
  func_0x0001067e01c8();
  func_0x0001067e0220(&ppuStack_128);
  func_0x0001067e01b8();
  FUN_1067dede0(auStack_150,&ppuStack_128);
  func_0x0001067e01e0();
  func_0x0001067e020c();
  func_0x0001067e01c0();
  FUN_1067df828(auStack_150);
  func_0x0001067e01d8();
  func_0x0001067df4e4(auStack_78);
  return;
}



/* Entry: 1067dfef4; end: 1067dffaf;  */

void FUN_1067dfef4(undefined8 param_1,int param_2)

{
  undefined ***pppuVar1;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [40];
  
  pppuVar1 = &ppuStack_70;
  uStack_60 = 0;
  uStack_58 = 0;
  ppuStack_70 = &PTR_FUN_11093e9c0;
  uStack_68 = 0;
  uStack_50 = 8;
  FUN_1067ded58(&ppuStack_70,param_2 == 0);
  FUN_1067deeb8();
  func_0x0001067df494(auStack_48,pppuVar1);
  func_0x0001067df4e4(&ppuStack_70);
  FUN_1067e01a4();
  func_0x0001067e0218();
  func_0x0001067df4e4(auStack_48);
  return;
}



/* Entry: 1067dffb0; end: 1067e014b;  */

void FUN_1067dffb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5)

{
  undefined ***pppuVar1;
  long unaff_x24;
  undefined1 auStack_140 [40];
  undefined **ppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined1 auStack_e0 [68];
  undefined4 uStack_9c;
  undefined1 uStack_98;
  ushort uStack_94;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [40];
  
  uStack_108 = 0;
  uStack_100 = 0;
  ppuStack_118 = &PTR_FUN_11093e9c0;
  uStack_110 = 0;
  uStack_f8 = 9;
  func_0x00010002b838(auStack_90,&DAT_10f398ba5);
  pppuVar1 = &ppuStack_118;
  FUN_1067df23c(pppuVar1,auStack_90,param_5);
  func_0x0001067df494(auStack_78,pppuVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  func_0x0001067e0200();
  func_0x0001067e01a4();
  func_0x0001067e0218();
  FUN_1067df5c0(&ppuStack_118);
  uStack_94 = (ushort)param_5 | 0x100;
  uStack_9c = 2;
  if (param_4 != 1) {
    uStack_9c = 0;
  }
  if (param_4 == 0) {
    uStack_9c = 1;
  }
  uStack_98 = 1;
  func_0x0001002a8234(unaff_x24 + 0x18,param_2);
  func_0x0001002a8234(auStack_e0,param_3);
  func_0x0001067e01c8();
  func_0x0001067e0220(&ppuStack_118);
  func_0x0001067e01b8();
  FUN_1067df288(auStack_140,&ppuStack_118);
  func_0x0001067e01e0();
  func_0x0001067e020c();
  func_0x0001067e01c0();
  FUN_1067dfa74(auStack_140);
  func_0x0001067e01d8();
  func_0x0001067df4e4(auStack_78);
  return;
}



/* Entry: 1067e014c; end: 1067e014f;  */

undefined8 * FUN_1067e014c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093ecf8;
  func_0x0001009ba308(param_1 + 4);
  func_0x00010055b138(param_1 + 2);
  return param_1;
}



/* Entry: 1067e0150; end: 1067e0163;  */

void FUN_1067e0150(void)

{
  FUN_1067e0164();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e0164; end: 1067e01a3;  */

undefined8 * FUN_1067e0164(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093ecf8;
  func_0x0001009ba308(param_1 + 4);
  func_0x00010055b138(param_1 + 2);
  return param_1;
}



/* Entry: 1067e01a4; end: 1067e022b;  */

void FUN_1067e01a4(void)

{
  return;
}



/* Entry: 1067e022c; end: 1067e02cf;  */

undefined8 * FUN_1067e022c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  *param_1 = &PTR_FUN_11093ed58;
  func_0x000100ade470(param_1 + 8,0);
  plVar2 = param_1 + 7;
  lVar1 = *plVar2;
  *plVar2 = 0;
  if (lVar1 != 0) {
    FUN_1067e060c();
  }
  plVar3 = param_1 + 9;
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_1067e060c();
  }
  plVar4 = param_1 + 6;
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_1067e060c();
  }
  func_0x0001067e0414(plVar3);
  func_0x000100ade50c(param_1 + 8);
  func_0x0001067e03e8(plVar2);
  func_0x000105275748(plVar4);
  func_0x0001005d0538(param_1 + 1);
  return param_1;
}



/* Entry: 1067e02d0; end: 1067e02d3;  */

undefined8 * FUN_1067e02d0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  *param_1 = &PTR_FUN_11093ed58;
  func_0x000100ade470(param_1 + 8,0);
  plVar2 = param_1 + 7;
  lVar1 = *plVar2;
  *plVar2 = 0;
  if (lVar1 != 0) {
    FUN_1067e060c();
  }
  plVar3 = param_1 + 9;
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_1067e060c();
  }
  plVar4 = param_1 + 6;
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_1067e060c();
  }
  func_0x0001067e0414(plVar3);
  func_0x000100ade50c(param_1 + 8);
  func_0x0001067e03e8(plVar2);
  func_0x000105275748(plVar4);
  func_0x0001005d0538(param_1 + 1);
  return param_1;
}



/* Entry: 1067e02d4; end: 1067e02e7;  */

void FUN_1067e02d4(void)

{
  FUN_1067e022c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e02e8; end: 1067e03c7;  */

void FUN_1067e02e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  func_0x0001004c3c6c(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x38);
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_60,param_2);
    uStack_48 = param_3;
    FUN_1067e0580(lVar1,auStack_60,&uStack_48);
    func_0x0001067e0624();
    func_0x000100852678(*(undefined8 *)(param_1 + 0x48),&UNK_10dde0b30);
  }
  return;
}



/* Entry: 1067e03c8; end: 1067e03e7;  */

bool FUN_1067e03c8(long param_1)

{
  param_1 = param_1 + 8;
  FUN_1067e0440(param_1);
  return param_1 != 0;
}



/* Entry: 1067e03e8; end: 1067e043f;  */

long * FUN_1067e03e8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1067e060c();
  }
  return param_1;
}



/* Entry: 1067e0440; end: 1067e045b;  */

bool FUN_1067e0440(long param_1)

{
  FUN_1067e045c();
  return param_1 != 0;
}



/* Entry: 1067e045c; end: 1067e0523;  */

long FUN_1067e045c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000100102e7c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar2 != plVar4) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x0001000e107c(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 1067e0524; end: 1067e0527;  */

undefined8 * FUN_1067e0524(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 1067e0528; end: 1067e053b;  */

void FUN_1067e0528(void)

{
  func_0x00010054c360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e053c; end: 1067e053f;  */

undefined8 * FUN_1067e053c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 1067e0540; end: 1067e0553;  */

void FUN_1067e0540(void)

{
  func_0x00010054c360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e0554; end: 1067e057f;  */

long FUN_1067e0554(long param_1,long param_2)

{
  func_0x000100066230();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}



/* Entry: 1067e0580; end: 1067e060b;  */

void FUN_1067e0580(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_38;
  
  lStack_38 = param_1;
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  func_0x000105653c84(param_1,param_2,param_3);
  func_0x00010054c3a4(param_1);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
  func_0x00010062155c(&lStack_38);
  return;
}



/* Entry: 1067e060c; end: 1067e064f;  */

void FUN_1067e060c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067e0614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1067e0650; end: 1067e0763;  */

undefined8 * FUN_1067e0650(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long extraout_x9;
  int extraout_w10;
  long *plVar4;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [360];
  undefined4 uStack_b8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_48;
  
  puVar2 = &uStack_230;
  puVar3 = &uStack_230;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = *(long **)(param_1 + 0x48);
  uStack_228 = *(undefined8 *)(param_1 + 0x10);
  uStack_230 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x000100bbc2b0();
    } while (extraout_w10 != 0);
  }
  FUN_1067e09c0(auStack_220);
  pcStack_a8 = FUN_1067e11b8;
  ppuStack_a0 = &PTR_FUN_11093ef58;
  puVar1 = (undefined8 *)0x180;
  uStack_b8 = param_3;
  __Znwm();
  puVar1[1] = uStack_228;
  *puVar1 = uStack_230;
  uStack_230 = 0;
  uStack_228 = 0;
  FUN_1067e0b4c(puVar1 + 2,auStack_220);
  *(undefined4 *)(puVar1 + 0x2f) = uStack_b8;
  puStack_98 = puVar1;
  (**(code **)(*plVar4 + 0x10))(plVar4,&pcStack_a8);
  func_0x0001067e1f6c();
  FUN_1067e0764();
  func_0x000100bbc1dc(uStack_48);
  if (extraout_x9 != extraout_x8) {
    ___stack_chk_fail();
    func_0x0001067e1f6c();
    FUN_1067e0764();
    func_0x0001067e1efc();
    FUN_1067dad64((undefined1 *)((long)puVar3 + 0x10));
    func_0x00010055b12c();
    if (puVar3 != (undefined8 *)0x0) {
      func_0x000107c60d68();
    }
    return (undefined8 *)(undefined1 *)puVar2;
  }
  return puVar2;
}



/* Entry: 1067e0764; end: 1067e078b;  */

undefined8 FUN_1067e0764(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1067dad64(param_1 + 0x10);
  func_0x00010055b12c();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 1067e078c; end: 1067e07d7;  */

void FUN_1067e078c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 1067e07d8; end: 1067e089b;  */

bool FUN_1067e07d8(ulong param_1,long param_2)

{
  ulong uVar1;
  code *extraout_x8;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  
  uVar1 = param_1;
  func_0x000100bbc2c0();
  (*extraout_x8)();
  dVar5 = (double)(*(long *)(param_2 + 0x68) - *(long *)(param_2 + 0x60)) * 0.95 +
          (double)*(long *)(param_2 + 0x60);
  uVar2 = (long)dVar5 - (ulong)(dVar5 < (double)(long)dVar5);
  uVar3 = uVar2 + 1;
  dVar6 = dVar5 - (double)(long)uVar2;
  dVar5 = (double)(long)uVar3 - dVar5;
  uVar4 = 0;
  if (dVar6 != dVar5) {
    uVar4 = 0xffffff81;
  }
  if (dVar5 < dVar6) {
    uVar4 = 1;
  }
  if (dVar6 < dVar5) {
    uVar4 = 0xffffffff;
  }
  if ((uVar4 != 1) && (uVar3 = uVar2, (uVar4 & 0xff) != 0xff)) {
    uVar3 = (uVar2 & 1) + uVar2;
  }
  return (long)uVar3 < (long)(*(long *)(param_1 + 8) + uVar1 / 1000);
}



/* Entry: 1067e089c; end: 1067e0907;  */

void FUN_1067e089c(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 != 0) {
    plVar2 = (long *)*param_1;
    uVar1 = (param_1[1] - *plVar2) / 0x178 + param_2;
    if ((long)uVar1 < 1) {
      plVar2 = plVar2 + -(0xf - uVar1 >> 4);
      lVar3 = *plVar2 + (ulong)(~(uint)(0xf - uVar1) & 0xf) * 0x178;
    }
    else {
      plVar2 = plVar2 + (uVar1 >> 4);
      lVar3 = *plVar2 + (uVar1 & 0xf) * 0x178;
    }
    *param_1 = (long)plVar2;
    param_1[1] = lVar3;
  }
  return;
}



/* Entry: 1067e0908; end: 1067e09a7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1067e0908(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long extraout_x8;
  long *plVar4;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 auStack_280 [360];
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long alStack_58 [5];
  
  (**(code **)(**(long **)(param_1 + 0x58) + 0x28))();
  *(undefined1 *)(param_1 + 0xb0) = 0;
  FUN_1067e1edc();
  lVar3 = extraout_x8_00 + (extraout_x9_00 & 0xffffffff) * 0x178;
  func_0x000100bbc2c0(*(undefined8 *)(param_1 + 0x40),lVar3,*(undefined8 *)(lVar3 + 0x60));
  (*extraout_x8_01)();
  FUN_1067e1edc();
  FUN_1067dad64(extraout_x8_02 + (extraout_x9_01 & 0xffffffff) * 0x178);
  *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + -1;
  *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
  FUN_1067e1af8(param_1 + 0x80);
  if (((*(char *)(param_1 + 0xb1) == '\x01') && ((*(byte *)(param_1 + 0xb0) & 1) == 0)) &&
     (*(long *)(param_1 + 0xa8) != 0)) {
    FUN_1067e1edc();
    lVar3 = extraout_x8 + (extraout_x9 & 0xffffffff) * 0x178;
    FUN_1067e09c0(auStack_280,lVar3);
    uStack_110 = *(undefined8 *)(lVar3 + 0x170);
    uStack_118 = *(ulong *)(lVar3 + 0x168);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    FUN_1067e07d8(uVar1,auStack_280);
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(**(long **)(param_1 + 0x58) + 0x20))
                (*(long **)(param_1 + 0x58),auStack_280,uVar1,uStack_110,uStack_118 & 0xffffffff);
      *(undefined1 *)(param_1 + 0xb0) = 1;
      (**(code **)(**(long **)(param_1 + 0x30) + 0x10))
                (auStack_d0,*(long **)(param_1 + 0x30),auStack_280,uVar1);
      func_0x000107c60c94(&uStack_108,auStack_280);
      uStack_e8 = *(undefined8 *)(param_1 + 0x10);
      uStack_f0 = *(undefined8 *)(param_1 + 8);
      if (*(long *)(param_1 + 0x10) != 0) {
        do {
          func_0x000100bbc2b0();
        } while (extraout_w10 != 0);
      }
      alStack_58[3] = 0;
      alStack_58[4] = 0;
      alStack_58[1] = 0;
      alStack_58[2] = 0;
      FUN_1067db8fc(&uStack_a0,auStack_d0,alStack_58 + 1);
      FUN_1067db958(alStack_58 + 3,&uStack_a0);
      FUN_1067db748(&uStack_a0);
      func_0x0001067e1fa0();
      func_0x0001003b69cc(alStack_58);
      func_0x0001003b6c18(&uStack_70,alStack_58[0]);
      lStack_78 = alStack_58[0];
      uStack_90 = uStack_f8;
      uStack_98 = uStack_100;
      uStack_a0 = uStack_108;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_80 = uStack_e8;
      uStack_88 = uStack_f0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      alStack_58[0] = 0;
      lStack_b0 = 0;
      lStack_a8 = 0;
      lStack_c0 = alStack_58[3] + 0x38;
      lStack_b8 = CONCAT71(lStack_b8._1_7_,1);
      func_0x000107c60d88();
      lVar3 = alStack_58[3];
      func_0x0001067e0cbc();
      if ((int)lVar3 == 0) {
        puVar2 = (undefined8 *)0x38;
        func_0x000107c60e20();
        lVar3 = lStack_78;
        *puVar2 = &PTR_SUB_11093ef18;
        puVar2[3] = uStack_90;
        puVar2[2] = uStack_98;
        puVar2[1] = uStack_a0;
        uStack_a0 = 0;
        uStack_98 = 0;
        puVar2[5] = uStack_80;
        puVar2[4] = uStack_88;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        puVar2[6] = lVar3;
        plVar4 = *(long **)(alStack_58[3] + 0x80);
        *(undefined8 **)(alStack_58[3] + 0x80) = puVar2;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
      else {
        FUN_1067db958(&lStack_b0,alStack_58 + 3);
      }
      func_0x0001000df5a0(&lStack_c0);
      if (lStack_b0 != 0) {
        lStack_c0 = lStack_b0;
        lStack_b8 = lStack_a8;
        if (lStack_a8 != 0) {
          do {
            func_0x000100bbc2b0();
          } while (extraout_w10_00 != 0);
        }
        FUN_1067e0d08(&uStack_a0,&lStack_c0);
        FUN_1067db748(&lStack_c0);
      }
      uStack_d8 = uStack_68;
      uStack_e0 = uStack_70;
      uStack_70 = 0;
      uStack_68 = 0;
      FUN_1067db748(&lStack_b0);
      FUN_1067e0f60(&uStack_a0);
      func_0x0001003b6c64(&uStack_70);
      lVar3 = alStack_58[0];
      alStack_58[0] = 0;
      if (lVar3 != 0) {
        func_0x0001067e1f3c();
      }
      func_0x0001067e1f84();
      func_0x0001003b6c64(&uStack_e0);
      func_0x0001067e0980(&uStack_108);
      FUN_1067db748(auStack_d0);
    }
    FUN_1067dad64(auStack_280);
  }
  return;
}



/* Entry: 1067e09a8; end: 1067e09ab;  */

undefined8 * FUN_1067e09a8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
  plVar5 = param_1 + 0x10;
  *param_1 = &PTR_FUN_11093ee90;
  plVar1 = plVar5;
  FUN_1067e078c();
  lVar2 = param_2;
  func_0x0001067e07b0(plVar5);
  do {
    lVar8 = param_2 + -0x1780;
    do {
      if (param_2 == lVar2) {
        param_1[0x15] = 0;
        puVar6 = (undefined8 *)param_1[0x11];
        while( true ) {
          puVar7 = (undefined8 *)param_1[0x12];
          uVar3 = (long)puVar7 - (long)puVar6 >> 3;
          if (uVar3 < 3) break;
          __ZdlPv(*puVar6);
          puVar6 = (undefined8 *)(param_1[0x11] + 8);
          param_1[0x11] = puVar6;
        }
        if (uVar3 == 1) {
          uVar4 = 8;
        }
        else {
          if (uVar3 != 2) goto LAB_1067e10fc;
          uVar4 = 0x10;
        }
        param_1[0x14] = uVar4;
LAB_1067e10fc:
        for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
          __ZdlPv(*puVar6);
        }
        FUN_1067e1170(plVar5,param_1[0x11]);
        if (param_1[0x10] != 0) {
          __ZdlPv();
        }
        func_0x0001009ba308(param_1 + 0xd);
        func_0x000100ade708(param_1 + 0xb);
        func_0x000100450be4(param_1 + 9);
        FUN_1067e118c(param_1 + 8);
        func_0x000100bbbb9c(param_1 + 6);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 3);
        func_0x000100ade72c(param_1 + 1);
        return param_1;
      }
      FUN_1067dad64(param_2);
      param_2 = param_2 + 0x178;
      lVar8 = lVar8 + 0x178;
    } while (*plVar1 != lVar8);
    plVar1 = plVar1 + 1;
    param_2 = *plVar1;
  } while( true );
}



/* Entry: 1067e09ac; end: 1067e09bf;  */

void FUN_1067e09ac(void)

{
  FUN_1067e1020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e09c0; end: 1067e0b4b;  */

long FUN_1067e09c0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (lVar1 + 0x18,param_2 + 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x30,param_2 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x48,param_2 + 0x48);
  func_0x0001067e1fa8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x78,param_2 + 0x78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x90,param_2 + 0x90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0xa8,param_2 + 0xa8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0xc0,param_2 + 0xc0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0xd8,param_2 + 0xd8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0xf0,param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x110,param_2 + 0x110);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x128,param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  func_0x000104be0ccc(param_1 + 0x148,param_2 + 0x148);
  return param_1;
}



/* Entry: 1067e0b4c; end: 1067e0d07;  */

undefined8 * FUN_1067e0b4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[6] = 0;
  uVar2 = param_2[10];
  uVar1 = param_2[9];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  param_1[9] = uVar1;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  uVar2 = param_2[0x10];
  uVar1 = param_2[0xf];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar2;
  param_1[0xf] = uVar1;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  uVar2 = param_2[0x13];
  uVar1 = param_2[0x12];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar1;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  uVar2 = param_2[0x16];
  uVar1 = param_2[0x15];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar2;
  param_1[0x15] = uVar1;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  uVar2 = param_2[0x19];
  uVar1 = param_2[0x18];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar2;
  param_1[0x18] = uVar1;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  uVar2 = param_2[0x1c];
  uVar1 = param_2[0x1b];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar2;
  param_1[0x1b] = uVar1;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  uVar2 = param_2[0x1f];
  uVar1 = param_2[0x1e];
  param_1[0x20] = param_2[0x20];
  param_1[0x1f] = uVar2;
  param_1[0x1e] = uVar1;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  uVar2 = param_2[0x23];
  uVar1 = param_2[0x22];
  param_1[0x24] = param_2[0x24];
  param_1[0x23] = uVar2;
  param_1[0x22] = uVar1;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x22] = 0;
  uVar2 = param_2[0x26];
  uVar1 = param_2[0x25];
  param_1[0x27] = param_2[0x27];
  param_1[0x26] = uVar2;
  param_1[0x25] = uVar1;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x25] = 0;
  param_1[0x28] = param_2[0x28];
  func_0x0001006b78fc(param_1 + 0x29,param_2 + 0x29);
  return param_1;
}



/* Entry: 1067e0d08; end: 1067e0f5f;  */

void FUN_1067e0d08(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  code *pcVar7;
  long lVar8;
  int *piVar9;
  int extraout_w10;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long alStack_88 [2];
  undefined1 auStack_78 [8];
  int *piStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int *piStack_50;
  undefined1 uStack_48;
  int *piStack_40;
  long lStack_38;
  
  uStack_a8 = *param_2;
  lStack_a0 = param_2[1];
  if (lStack_a0 == 0) {
    lStack_90 = 0;
  }
  else {
    plVar1 = (long *)(lStack_a0 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      lStack_90 = lStack_a0;
    } while (cVar4 != '\0');
  }
  uStack_98 = uStack_a8;
  func_0x000100bbd704(alStack_88,param_1 + 0x18);
  if ((alStack_88[0] != 0) && (*(char *)(alStack_88[0] + 0xb0) == '\x01')) {
    lVar8 = *(long *)(*(long *)(alStack_88[0] + 0x88) + (*(ulong *)(alStack_88[0] + 0xa0) >> 4) * 8)
            + (*(ulong *)(alStack_88[0] + 0xa0) & 0xf) * 0x178;
    func_0x0001000e107c(lVar8,param_1);
    if ((int)lVar8 != 0) {
      piStack_40 = (int *)0x0;
      lStack_38 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      FUN_1067db8fc(&piStack_50,&uStack_98,&uStack_60);
      FUN_1067db958(&piStack_40,&piStack_50);
      func_0x0001067e1fa0();
      FUN_1067db748(&uStack_60);
      piStack_50 = piStack_40 + 0xe;
      uStack_48 = 1;
      __ZNSt3__15mutex4lockEv();
      piVar6 = piStack_40;
      piStack_70 = piStack_40;
      lStack_68 = lStack_38;
      if (lStack_38 != 0) {
        do {
          func_0x000100bbc2b0();
        } while (extraout_w10 != 0);
      }
      while (piVar9 = piVar6, func_0x0001067e0cbc(), ((ulong)piVar9 & 1) == 0) {
        __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(piVar6 + 2,&piStack_50);
      }
      FUN_1067db748(&piStack_70);
      if (*(long *)(piStack_40 + 0x1e) != 0) {
        __ZNSt13exception_ptrC1ERKS_(auStack_78);
        __ZSt17rethrow_exceptionSt13exception_ptr(auStack_78);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1067e0eb4);
        (*pcVar7)();
      }
      iVar3 = *piStack_40;
      func_0x0001000df5a0(&piStack_50);
      func_0x0001067e1f84();
      iVar2 = iVar3 + 0x20006;
      if (2 < iVar3 - 1U) {
        iVar2 = 0x20006;
      }
      FUN_1067e0908(alStack_88[0],iVar2);
    }
  }
  func_0x000100ade750(alStack_88);
  FUN_1067db748(&uStack_98);
  FUN_1067db748(&uStack_a8);
  func_0x0001003b8370(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1067e0f60; end: 1067e0fb3;  */

void FUN_1067e0f60(long param_1)

{
  func_0x0001003b6cec(param_1 + 0x28);
  func_0x000100ade72c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1067e0fb4; end: 1067e0fc7;  */

void FUN_1067e0fb4(void)

{
  func_0x0001067e0f88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e0fc8; end: 1067e101f;  */

void FUN_1067e0fc8(long param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000100bbc2b0();
    } while (extraout_w10 != 0);
  }
  FUN_1067e0d08(param_1 + 8,&uStack_30);
  FUN_1067db748(&uStack_30);
  return;
}



/* Entry: 1067e1020; end: 1067e116f;  */

undefined8 * FUN_1067e1020(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
  plVar5 = param_1 + 0x10;
  *param_1 = &PTR_FUN_11093ee90;
  plVar1 = plVar5;
  FUN_1067e078c();
  lVar2 = param_2;
  func_0x0001067e07b0(plVar5);
  do {
    lVar8 = param_2 + -0x1780;
    do {
      if (param_2 == lVar2) {
        param_1[0x15] = 0;
        puVar6 = (undefined8 *)param_1[0x11];
        while( true ) {
          puVar7 = (undefined8 *)param_1[0x12];
          uVar3 = (long)puVar7 - (long)puVar6 >> 3;
          if (uVar3 < 3) break;
          __ZdlPv(*puVar6);
          puVar6 = (undefined8 *)(param_1[0x11] + 8);
          param_1[0x11] = puVar6;
        }
        if (uVar3 == 1) {
          uVar4 = 8;
        }
        else {
          if (uVar3 != 2) goto LAB_1067e10fc;
          uVar4 = 0x10;
        }
        param_1[0x14] = uVar4;
LAB_1067e10fc:
        for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
          __ZdlPv(*puVar6);
        }
        FUN_1067e1170(plVar5,param_1[0x11]);
        if (param_1[0x10] != 0) {
          __ZdlPv();
        }
        func_0x0001009ba308(param_1 + 0xd);
        func_0x000100ade708(param_1 + 0xb);
        func_0x000100450be4(param_1 + 9);
        FUN_1067e118c(param_1 + 8);
        func_0x000100bbbb9c(param_1 + 6);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 3);
        func_0x000100ade72c(param_1 + 1);
        return param_1;
      }
      FUN_1067dad64(param_2);
      param_2 = param_2 + 0x178;
      lVar8 = lVar8 + 0x178;
    } while (*plVar1 != lVar8);
    plVar1 = plVar1 + 1;
    param_2 = *plVar1;
  } while( true );
}



/* Entry: 1067e1170; end: 1067e118b;  */

void FUN_1067e1170(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1067e118c; end: 1067e11b7;  */

long * FUN_1067e118c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1067e1f3c();
  }
  return param_1;
}



/* Entry: 1067e11b8; end: 1067e1a53;  */

void FUN_1067e11b8(long param_1)

{
  long lVar1;
  long ***ppplVar2;
  long ***ppplVar3;
  long ***ppplVar4;
  long *plVar5;
  ulong uVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long ***ppplVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  undefined8 uVar15;
  code *extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  undefined8 *puVar16;
  undefined4 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long ****pppplVar21;
  long ****pppplVar22;
  long ****pppplVar23;
  long lVar24;
  long ****pppplVar25;
  long alStack_278 [2];
  long ***ppplStack_268;
  long ***ppplStack_260;
  long ***ppplStack_258;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  long **pplStack_f8;
  long ***ppplStack_f0;
  long ***ppplStack_e8;
  long ***ppplStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long ***ppplStack_c8;
  long ***ppplStack_c0;
  long ***ppplStack_b8;
  long ***ppplStack_b0;
  undefined8 *puStack_a8;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  long ***ppplStack_90;
  long ***ppplStack_88;
  undefined8 *puStack_80;
  
  lVar18 = *(long *)(param_1 + 0x10);
  func_0x000100bbd704(alStack_278,lVar18);
  if (alStack_278[0] != 0) {
    if (*(int *)(lVar18 + 0x178) == 0) {
      uVar17 = 0;
    }
    else {
      FUN_1067e2e54(*(undefined8 *)(alStack_278[0] + 0x68),*(undefined8 *)(lVar18 + 0x80));
      uVar17 = *(undefined4 *)(lVar18 + 0x178);
    }
    lVar1 = alStack_278[0];
    lVar19 = alStack_278[0] + 0x18;
    func_0x0001000e107c(lVar19,lVar18 + 0x40);
    if ((int)lVar19 == 0) {
      uVar15 = 1;
    }
    else {
      plVar5 = *(long **)(lVar1 + 0x40);
      lVar19 = lVar18 + 0x10;
      (**(code **)(*plVar5 + 0x18))();
      if (((ulong)plVar5 & 1) == 0) {
        plVar5 = (long *)(lVar1 + 0x80);
        FUN_1067e078c();
        lVar11 = lVar19;
        func_0x0001067e07b0(lVar1 + 0x80);
        lVar12 = lVar11;
        do {
          lVar24 = lVar19 + -0x1780;
          do {
            lVar20 = lVar11;
            if (lVar19 == lVar11) {
LAB_1067e12ac:
              func_0x0001067e07b0(lVar1 + 0x80);
              if (lVar20 != lVar12) {
                uVar15 = 0;
                goto LAB_1067e13ac;
              }
              plVar5 = (long *)(lVar1 + 0x80);
              FUN_1067e078c();
              goto LAB_1067e12d4;
            }
            uVar6 = lVar18 + 0x10;
            lVar12 = lVar19;
            func_0x0001000e107c();
            lVar20 = lVar19;
            if ((uVar6 & 1) != 0) goto LAB_1067e12ac;
            lVar19 = lVar19 + 0x178;
            lVar24 = lVar24 + 0x178;
          } while (*plVar5 != lVar24);
          plVar5 = plVar5 + 1;
          lVar19 = *plVar5;
        } while( true );
      }
      uVar15 = 2;
    }
LAB_1067e13ac:
    (**(code **)(**(long **)(lVar1 + 0x58) + 0x18))
              (*(long **)(lVar1 + 0x58),lVar18 + 0x10,uVar17,uVar15);
  }
LAB_1067e13c4:
  func_0x000100ade750(alStack_278);
  return;
LAB_1067e12d4:
  lVar19 = lVar12 + -0x1780;
LAB_1067e12d8:
  if (lVar12 != lVar20) {
    if (*(long *)(lVar12 + 0x60) <= *(long *)(lVar18 + 0x70)) goto code_r0x0001067e12ec;
    uVar15 = 3;
    goto LAB_1067e13ac;
  }
  func_0x000100bbc2c0(*(undefined8 *)(alStack_278[0] + 0x58));
  (*extraout_x8)();
  uVar6 = *(ulong *)(alStack_278[0] + 0x68);
  func_0x000100bbc2c0();
  (*extraout_x8_00)();
  if (*(long *)(lVar18 + 0x78) < (long)(uVar6 / 1000)) {
    func_0x0001067e1fbc();
    (**(code **)(extraout_x8_01 + 0x38))();
  }
  pppplVar7 = *(long *****)(alStack_278[0] + 0x68);
  pppplVar13 = (long ****)(lVar18 + 0x10);
  FUN_1067e07d8();
  if ((int)pppplVar7 != 0) {
    func_0x0001067e1fbc();
    (**(code **)(extraout_x8_02 + 0x30))();
  }
  uVar17 = *(undefined4 *)(lVar18 + 0x178);
  func_0x0001067e1f98();
  ppplStack_f0 = (long ***)pppplVar7;
  ppplStack_e8 = (long ***)pppplVar13;
  if (*(char *)(alStack_278[0] + 0xb0) == '\x01') {
    pppplVar7 = &ppplStack_f0;
    pppplVar13 = (long ****)0x1;
    FUN_1067e089c();
  }
  ppplVar9 = ppplStack_e8;
  pppplVar21 = (long ****)ppplStack_f0;
  func_0x0001067e1f7c();
  plVar5 = (long *)(alStack_278[0] + 0xa8);
  func_0x0001067e1a8c();
  pppplVar23 = pppplVar7;
  func_0x0001067e1f98();
  ppplStack_a0 = (long ***)pppplVar23;
  ppplStack_98 = (long ***)pppplVar13;
  func_0x0001067e1a8c(pppplVar21,ppplVar9,pppplVar23,pppplVar13);
  pppplVar22 = &ppplStack_a0;
  pppplVar14 = pppplVar21;
  FUN_1067e1acc();
  ppplStack_c8 = (long ***)pppplVar22;
  ppplStack_c0 = (long ***)pppplVar14;
  if ((long)pppplVar7 < 1) goto LAB_1067e1628;
  lVar19 = *plVar5;
  pppplVar8 = &ppplStack_c8;
  pppplVar25 = pppplVar7;
  FUN_1067e1acc();
  if ((long ****)((ulong)(lVar19 - (long)pppplVar7) >> 1) < pppplVar21) {
    pppplVar13 = pppplVar8;
    pppplVar23 = pppplVar25;
    func_0x0001067e1f7c();
    ppplStack_e0 = (long ***)&ppplStack_268;
    ppplStack_268 = (long ***)pppplVar22;
    ppplStack_260 = (long ***)pppplVar14;
    if (pppplVar8 != pppplVar13) {
      pppplVar22 = (long ****)*pppplVar8;
      do {
        FUN_1067e1d1c(&ppplStack_e0,pppplVar25,pppplVar22 + 0x2f0);
        pppplVar8 = pppplVar8 + 1;
        pppplVar25 = (long ****)*pppplVar8;
        pppplVar22 = pppplVar25;
      } while (pppplVar8 != pppplVar13);
    }
    FUN_1067e1d1c(&ppplStack_e0,pppplVar25,pppplVar23);
    pppplVar13 = (long ****)ppplStack_260;
    pppplVar22 = (long ****)ppplStack_268;
    func_0x0001067e1f7c();
    pppplVar14 = pppplVar25;
    do {
      pppplVar23 = pppplVar13 + -0x2f0;
      do {
        if (pppplVar13 == pppplVar25) {
          *(long *)(alStack_278[0] + 0xa8) = *(long *)(alStack_278[0] + 0xa8) - (long)pppplVar7;
          while( true ) {
            pppplVar22 = (long ****)(alStack_278[0] + 0x80);
            FUN_1067e1dec();
            if (pppplVar22 < (long ****)0x20) break;
            __ZdlPv(*(undefined8 *)(*(long *)(alStack_278[0] + 0x90) + -8));
            pppplVar14 = (long ****)(*(long *)(alStack_278[0] + 0x90) + -8);
            FUN_1067e1170(alStack_278[0] + 0x80);
          }
          goto LAB_1067e1628;
        }
        FUN_1067dad64(pppplVar13);
        pppplVar13 = pppplVar13 + 0x2f;
        pppplVar23 = pppplVar23 + 0x2f;
      } while ((long ****)*pppplVar22 != pppplVar23);
      pppplVar22 = pppplVar22 + 1;
      pppplVar13 = (long ****)*pppplVar22;
    } while( true );
  }
  pppplVar14 = pppplVar13;
  if (pppplVar23 == pppplVar22) {
    func_0x0001067e1f5c(&ppplStack_268);
    pppplVar22 = (long ****)ppplStack_258;
  }
  else {
    func_0x0001067e1f5c(&ppplStack_268,*pppplVar22);
    while (pppplVar22 = pppplVar22 + -1, pppplVar22 != pppplVar23) {
      FUN_1067e1b4c(&ppplStack_268,*pppplVar22,*pppplVar22 + 0x2f0,ppplStack_260,ppplStack_258);
    }
    FUN_1067e1b4c(&ppplStack_268,pppplVar13,*pppplVar22 + 0x2f0,ppplStack_260,ppplStack_258);
    pppplVar22 = (long ****)ppplStack_258;
  }
  goto LAB_1067e15d4;
code_r0x0001067e12ec:
  lVar19 = lVar19 + 0x178;
  lVar12 = lVar12 + 0x178;
  if (*plVar5 == lVar19) goto code_r0x0001067e1300;
  goto LAB_1067e12d8;
code_r0x0001067e1300:
  plVar5 = plVar5 + 1;
  lVar12 = *plVar5;
  goto LAB_1067e12d4;
LAB_1067e15d4:
  pppplVar25 = pppplVar13 + -0x2f0;
  do {
    if (pppplVar13 == pppplVar22) {
      *(long *)(alStack_278[0] + 0xa0) = *(long *)(alStack_278[0] + 0xa0) + (long)pppplVar7;
      *(long *)(alStack_278[0] + 0xa8) = *(long *)(alStack_278[0] + 0xa8) - (long)pppplVar7;
      do {
        pppplVar22 = (long ****)(alStack_278[0] + 0x80);
        FUN_1067e1af8();
      } while (((ulong)pppplVar22 & 1) != 0);
LAB_1067e1628:
      func_0x0001067e1f98();
      ppplStack_268 = (long ***)pppplVar22;
      ppplStack_260 = (long ***)pppplVar14;
      FUN_1067e1acc(&ppplStack_268,pppplVar21);
      pppplVar13 = (long ****)(lVar18 + 0x10);
      FUN_1067e09c0(&ppplStack_268);
      ppplVar9 = *(long ****)(alStack_278[0] + 0x68);
      uStack_100 = uVar17;
      func_0x000100bbc2c0();
      (*extraout_x8_03)();
      lVar18 = alStack_278[0] + 0x80;
      pplStack_f8 = (long **)ppplVar9;
      FUN_1067e1dec();
      pppplVar7 = pppplVar13;
      if (lVar18 == 0) {
        if (*(ulong *)(alStack_278[0] + 0xa0) < 0x10) {
          puVar16 = (undefined8 *)(alStack_278[0] + 0x98);
          pppplVar7 = (long ****)*puVar16;
          pppplVar22 = *(long *****)(alStack_278[0] + 0x88);
          pppplVar21 = *(long *****)(alStack_278[0] + 0x90);
          pppplVar23 = *(long *****)(alStack_278[0] + 0x80);
          uVar6 = (long)pppplVar21 - (long)pppplVar22;
          if (uVar6 < (ulong)((long)pppplVar7 - (long)pppplVar23)) {
            ppplVar9 = (long ***)0x1780;
            __Znwm();
            if (pppplVar7 == pppplVar21) {
              if (pppplVar22 == pppplVar23) {
                lVar18 = (long)pppplVar7 - (long)pppplVar22 >> 2;
                if (pppplVar21 == pppplVar22) {
                  lVar18 = 1;
                }
                lVar19 = lVar18;
                puStack_80 = puVar16;
                FUN_1067e1e3c(lVar18);
                FUN_1067e1f04(lVar19 + (lVar18 * 2 + 6U & 0xfffffffffffffff8));
                pppplVar22 = *(long *****)(alStack_278[0] + 0x88);
              }
              pppplVar22[-1] = ppplVar9;
              goto LAB_1067e1688;
            }
            *pppplVar21 = ppplVar9;
            *(long *****)(alStack_278[0] + 0x90) = pppplVar21 + 1;
            pppplVar7 = pppplVar13;
          }
          else {
            pppplVar14 = (long ****)((long)pppplVar7 - (long)pppplVar23 >> 2);
            if (pppplVar7 == pppplVar23) {
              pppplVar14 = (long ****)0x1;
            }
            puStack_a8 = puVar16;
            FUN_1067e1e3c();
            pppplVar23 = (long ****)((long)pppplVar14 + uVar6);
            pppplVar25 = pppplVar14 + (long)pppplVar13;
            ppplVar9 = (long ***)0x1780;
            pppplVar7 = pppplVar13;
            ppplStack_c8 = (long ***)pppplVar14;
            ppplStack_c0 = (long ***)pppplVar23;
            ppplStack_b8 = (long ***)pppplVar23;
            ppplStack_b0 = (long ***)pppplVar25;
            __Znwm();
            uStack_d0 = 0x10;
            pppplVar8 = pppplVar23;
            plStack_d8 = plVar5;
            if (uVar6 == (long)pppplVar13 * 8) {
              if (pppplVar21 == pppplVar22) {
                pppplVar13 = (long ****)0x1;
                ppplStack_e0 = ppplVar9;
                puStack_80 = puVar16;
                FUN_1067e1e3c();
                ppplStack_88 = (long ***)(pppplVar13 + (long)pppplVar7);
                pppplVar7 = pppplVar23;
                ppplStack_a0 = (long ***)pppplVar13;
                ppplStack_98 = (long ***)pppplVar13;
                ppplStack_90 = (long ***)pppplVar13;
                func_0x0001067e1e14(&ppplStack_a0,pppplVar23,pppplVar23);
                ppplVar4 = ppplStack_88;
                pppplVar8 = (long ****)ppplStack_90;
                ppplVar3 = ppplStack_98;
                ppplVar2 = ppplStack_a0;
                ppplStack_c8 = ppplStack_a0;
                ppplStack_c0 = ppplStack_98;
                ppplStack_b0 = ppplStack_88;
                ppplStack_a0 = (long ***)pppplVar14;
                ppplStack_98 = (long ***)pppplVar23;
                ppplStack_90 = (long ***)pppplVar23;
                ppplStack_88 = (long ***)pppplVar25;
                func_0x0001067e1e9c(&ppplStack_a0);
                pppplVar14 = (long ****)ppplVar2;
                pppplVar23 = (long ****)ppplVar3;
                pppplVar25 = (long ****)ppplVar4;
              }
              else {
                pppplVar23 = pppplVar23 + (((long)pppplVar23 - (long)pppplVar14 >> 3) + 1) / -2;
                pppplVar8 = pppplVar23;
                ppplStack_c0 = (long ***)pppplVar23;
              }
            }
            pppplVar13 = pppplVar8 + 1;
            *pppplVar8 = ppplVar9;
            ppplStack_e0 = (long ***)0x0;
            pppplVar22 = *(long *****)(alStack_278[0] + 0x90);
            ppplStack_b8 = (long ***)pppplVar13;
            while (pppplVar21 = *(long *****)(alStack_278[0] + 0x88), pppplVar22 != pppplVar21) {
              pppplVar21 = pppplVar23;
              if (pppplVar23 == pppplVar14) {
                if (pppplVar13 < pppplVar25) {
                  lVar18 = (long)pppplVar13 - (long)pppplVar14;
                  pppplVar8 = pppplVar13 + (((long)pppplVar25 - (long)pppplVar13 >> 3) + 1) / 2;
                  pppplVar21 = (long ****)((long)pppplVar8 - ((long)pppplVar13 - (long)pppplVar14));
                  pppplVar13 = pppplVar8;
                  if (lVar18 != 0) {
                    _memmove(pppplVar21,pppplVar23,lVar18);
                    pppplVar7 = pppplVar23;
                  }
                }
                else {
                  pppplVar21 = (long ****)((long)pppplVar25 - (long)pppplVar14 >> 2);
                  if ((long)pppplVar25 - (long)pppplVar14 == 0) {
                    pppplVar21 = (long ****)0x1;
                  }
                  pppplVar8 = pppplVar21;
                  puStack_80 = puVar16;
                  FUN_1067e1e3c();
                  ppplStack_98 = (long ***)
                                 ((long)pppplVar8 + ((long)pppplVar21 * 2 + 6U & 0xfffffffffffffff8)
                                 );
                  ppplStack_88 = (long ***)(pppplVar8 + (long)pppplVar7);
                  pppplVar7 = pppplVar14;
                  ppplStack_a0 = (long ***)pppplVar8;
                  ppplStack_90 = ppplStack_98;
                  func_0x0001067e1e14(&ppplStack_a0,pppplVar14,pppplVar13);
                  ppplVar3 = ppplStack_88;
                  ppplVar2 = ppplStack_90;
                  pppplVar21 = (long ****)ppplStack_98;
                  ppplVar9 = ppplStack_a0;
                  ppplStack_a0 = (long ***)pppplVar14;
                  ppplStack_98 = (long ***)pppplVar23;
                  ppplStack_90 = (long ***)pppplVar13;
                  ppplStack_88 = (long ***)pppplVar25;
                  func_0x0001067e1e9c(&ppplStack_a0);
                  pppplVar14 = (long ****)ppplVar9;
                  pppplVar13 = (long ****)ppplVar2;
                  pppplVar25 = (long ****)ppplVar3;
                }
              }
              pppplVar22 = pppplVar22 + -1;
              pppplVar23 = pppplVar21 + -1;
              *pppplVar23 = *pppplVar22;
            }
            ppplStack_c8 = *(long ****)(alStack_278[0] + 0x80);
            *(long *****)(alStack_278[0] + 0x80) = pppplVar14;
            *(long *****)(alStack_278[0] + 0x88) = pppplVar23;
            ppplStack_b0 = *(long ****)(alStack_278[0] + 0x98);
            ppplStack_b8 = *(long ****)(alStack_278[0] + 0x90);
            *(long *****)(alStack_278[0] + 0x90) = pppplVar13;
            *(long *****)(alStack_278[0] + 0x98) = pppplVar25;
            ppplStack_c0 = (long ***)pppplVar21;
            func_0x0001067e1e70(&ppplStack_e0);
            func_0x0001067e1e9c(&ppplStack_c8);
          }
        }
        else {
          *(ulong *)(alStack_278[0] + 0xa0) = *(ulong *)(alStack_278[0] + 0xa0) - 0x10;
          pppplVar22 = (long ****)(*(undefined8 **)(alStack_278[0] + 0x88) + 1);
          ppplVar9 = (long ***)**(undefined8 **)(alStack_278[0] + 0x88);
LAB_1067e1688:
          *(long *****)(alStack_278[0] + 0x88) = pppplVar22;
          puVar16 = *(undefined8 **)(alStack_278[0] + 0x90);
          if (puVar16 == *(undefined8 **)(alStack_278[0] + 0x98)) {
            pppplVar7 = *(long *****)(alStack_278[0] + 0x80);
            if (pppplVar22 < pppplVar7 || (long)pppplVar22 - (long)pppplVar7 == 0) {
              uVar6 = (long)puVar16 - (long)pppplVar7 >> 2;
              if ((long)puVar16 - (long)pppplVar7 == 0) {
                uVar6 = 1;
              }
              uVar10 = uVar6;
              puStack_80 = (undefined8 *)(alStack_278[0] + 0x98);
              FUN_1067e1e3c(uVar6);
              FUN_1067e1f04(uVar10 + (uVar6 >> 2) * 8);
              puVar16 = *(undefined8 **)(alStack_278[0] + 0x90);
            }
            else {
              lVar18 = (((long)pppplVar22 - (long)pppplVar7 >> 3) + 1) / -2;
              pppplVar7 = pppplVar22 + lVar18;
              lVar19 = (long)puVar16 - (long)pppplVar22;
              pppplVar21 = pppplVar22;
              if (lVar19 != 0) {
                _memmove(pppplVar7,pppplVar22,lVar19);
                pppplVar21 = *(long *****)(alStack_278[0] + 0x88);
                pppplVar13 = pppplVar22;
              }
              puVar16 = (undefined8 *)((long)pppplVar7 + lVar19);
              *(long *****)(alStack_278[0] + 0x88) = pppplVar21 + lVar18;
            }
          }
          *puVar16 = ppplVar9;
          *(undefined8 **)(alStack_278[0] + 0x90) = puVar16 + 1;
          pppplVar7 = pppplVar13;
        }
      }
      func_0x0001067e1f7c();
      FUN_1067e0b4c(pppplVar7,&ppplStack_268);
      pppplVar7[0x2e] = (long ***)pplStack_f8;
      pppplVar7[0x2d] = (long ***)CONCAT44(uStack_fc,uStack_100);
      *(long *)(alStack_278[0] + 0xa8) = *(long *)(alStack_278[0] + 0xa8) + 1;
      FUN_1067dad64(&ppplStack_268);
      if ((*(char *)(alStack_278[0] + 0x78) == '\x01') &&
         (*(char *)(alStack_278[0] + 0xb0) == '\x01')) {
        FUN_1067e0908(alStack_278[0],0x2000a);
      }
      else {
        func_0x000100bbd7b0(alStack_278[0]);
      }
      goto LAB_1067e13c4;
    }
    FUN_1067dad64(pppplVar13);
    pppplVar13 = pppplVar13 + 0x2f;
    pppplVar25 = pppplVar25 + 0x2f;
  } while ((long ****)*pppplVar23 != pppplVar25);
  pppplVar23 = pppplVar23 + 1;
  pppplVar13 = (long ****)*pppplVar23;
  goto LAB_1067e15d4;
}



/* Entry: 1067e1a54; end: 1067e1a73;  */

void FUN_1067e1a54(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1067e0764();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1067e1a74; end: 1067e1acb;  */

void FUN_1067e1a74(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1067e1acc; end: 1067e1af7;  */

undefined1  [16] FUN_1067e1acc(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_1067e089c(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 1067e1af8; end: 1067e1b4b;  */

bool FUN_1067e1af8(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  if (0x1f < uVar1) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x10;
  }
  return 0x1f < uVar1;
}



/* Entry: 1067e1b4c; end: 1067e1c43;  */

void FUN_1067e1b4c(long *param_1,long param_2,long param_3,long *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 != param_3) {
    lVar2 = *param_4;
    lVar3 = param_3;
    while( true ) {
      lVar1 = (param_5 - lVar2) / 0x178;
      lVar2 = (lVar3 - param_2) / 0x178;
      if (lVar1 <= lVar2) {
        lVar2 = lVar1;
      }
      lVar1 = lVar3 + lVar2 * -0x178;
      for (lVar2 = lVar2 * -0x178; lVar2 != 0; lVar2 = lVar2 + 0x178) {
        lVar3 = lVar3 + -0x178;
        param_5 = param_5 + -0x178;
        FUN_1067e1c44(param_5,lVar3);
      }
      if (param_2 == lVar1) break;
      param_4 = param_4 + -1;
      lVar2 = *param_4;
      param_5 = lVar2 + 0x1780;
      lVar3 = lVar1;
    }
    param_2 = param_3;
    if (param_5 == *param_4 + 0x1780) {
      param_4 = param_4 + 1;
      param_5 = *param_4;
    }
  }
  *param_1 = param_2;
  param_1[1] = (long)param_4;
  param_1[2] = param_5;
  return;
}



/* Entry: 1067e1c44; end: 1067e1d1b;  */

long FUN_1067e1c44(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000100066230();
  func_0x000100066230(param_1 + 0x18,param_2 + 0x18);
  func_0x000100066230(param_1 + 0x30,param_2 + 0x30);
  func_0x000100066230(param_1 + 0x48,param_2 + 0x48);
  func_0x0001067e1fa8();
  func_0x000100066230(param_1 + 0x78,param_2 + 0x78);
  func_0x000100066230(param_1 + 0x90,param_2 + 0x90);
  func_0x000100066230(param_1 + 0xa8,param_2 + 0xa8);
  func_0x000100066230(param_1 + 0xc0,param_2 + 0xc0);
  func_0x000100066230(param_1 + 0xd8,param_2 + 0xd8);
  func_0x000100066230(param_1 + 0xf0,param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  func_0x000100066230(param_1 + 0x110,param_2 + 0x110);
  func_0x000100066230(param_1 + 0x128,param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  func_0x0001052b2b60(param_1 + 0x148,param_2 + 0x148);
  uVar1 = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x168) = uVar1;
  return param_1;
}



/* Entry: 1067e1d1c; end: 1067e1deb;  */

void FUN_1067e1d1c(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)*param_1;
  lVar2 = ((undefined8 *)*param_1)[1];
  if (param_2 != param_3) {
    lVar4 = *plVar3;
    while( true ) {
      lVar1 = ((lVar4 - lVar2) + 0x1780) / 0x178;
      lVar4 = (param_3 - param_2) / 0x178;
      if (lVar1 <= lVar4) {
        lVar4 = lVar1;
      }
      lVar4 = lVar4 * 0x178;
      lVar1 = param_2 + lVar4;
      for (; lVar4 != 0; lVar4 = lVar4 + -0x178) {
        FUN_1067e1c44(lVar2,param_2);
        param_2 = param_2 + 0x178;
        lVar2 = lVar2 + 0x178;
      }
      if (param_3 == lVar1) break;
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
      lVar4 = lVar2;
      param_2 = lVar1;
    }
    if (lVar2 == *plVar3 + 0x1780) {
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
    }
  }
  param_1 = (undefined8 *)*param_1;
  *param_1 = plVar3;
  param_1[1] = lVar2;
  return;
}



/* Entry: 1067e1dec; end: 1067e1e3b;  */

long FUN_1067e1dec(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) * 2 + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}



/* Entry: 1067e1e3c; end: 1067e1edb;  */

undefined1  [16] FUN_1067e1e3c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1067e1edc; end: 1067e1f03;  */

void FUN_1067e1edc(void)

{
  return;
}



/* Entry: 1067e1f04; end: 1067e1f3b;  */

long * FUN_1067e1f04(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *(long *)(unaff_x29 + -0x90) = param_2;
  *(undefined8 *)(unaff_x29 + -0x88) = param_1;
  *(undefined8 *)(unaff_x29 + -0x80) = param_1;
  *(long *)(unaff_x29 + -0x78) = param_2 + param_3 * 8;
  func_0x0001067e1e14(unaff_x29 + -0x90,*(undefined8 *)(unaff_x19 + 0x88),
                      *(undefined8 *)(unaff_x19 + 0x90));
  uVar3 = *(undefined8 *)(unaff_x19 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x90);
  uVar6 = *unaff_x27;
  uVar8 = unaff_x27[3];
  uVar7 = unaff_x27[2];
  *(undefined8 *)(unaff_x19 + 0x88) = unaff_x27[1];
  *(undefined8 *)(unaff_x19 + 0x80) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x98) = uVar8;
  *(undefined8 *)(unaff_x19 + 0x90) = uVar7;
  unaff_x27[1] = uVar3;
  *unaff_x27 = uVar2;
  unaff_x27[3] = uVar5;
  unaff_x27[2] = uVar4;
  lVar1 = *(long *)(unaff_x29 + -0x80);
  while (lVar1 != *(long *)(unaff_x29 + -0x88)) {
    lVar1 = lVar1 + -8;
    *(long *)(unaff_x29 + -0x80) = lVar1;
  }
  if (*(long *)(unaff_x29 + -0x90) != 0) {
    __ZdlPv();
  }
  return (long *)(unaff_x29 + -0x90);
}



/* Entry: 1067e1f3c; end: 1067e1fcf;  */

void FUN_1067e1f3c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067e1f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1067e1fd0; end: 1067e20d3;  */

undefined8 * FUN_1067e1fd0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long extraout_x9;
  int extraout_w10;
  long *plVar3;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  long lStack_58;
  undefined8 uStack_38;
  
  puVar1 = &uStack_d0;
  puVar2 = &uStack_d0;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = *(long **)(param_1 + 0x48);
  uStack_c8 = *(undefined8 *)(param_1 + 0x10);
  uStack_d0 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x000100bbc514();
    } while (extraout_w10 != 0);
  }
  FUN_1067e2274(&uStack_c0);
  uStack_80 = uStack_c8;
  uStack_88 = uStack_d0;
  pcStack_98 = FUN_1067e2670;
  ppuStack_90 = &PTR_DAT_11093f050;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_70 = uStack_b8;
  uStack_78 = uStack_c0;
  uStack_68 = uStack_b0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c0 = 0;
  uStack_60 = uStack_a8;
  lStack_a0 = param_1;
  lStack_58 = param_1;
  (**(code **)(*plVar3 + 0x10))(plVar3,&pcStack_98);
  func_0x0001067e2e14();
  FUN_1067e20d4();
  func_0x000100bbc440(uStack_38);
  if (extraout_x9 != extraout_x8) {
    ___stack_chk_fail();
    func_0x0001067e2e14();
    FUN_1067e20d4();
    func_0x0001067e2e04();
    func_0x000100100fec((undefined1 *)((long)puVar2 + 0x10));
    func_0x00010055b12c();
    if (puVar2 != (undefined8 *)0x0) {
      func_0x000107c60d68();
    }
    return (undefined8 *)(undefined1 *)puVar1;
  }
  return puVar1;
}



/* Entry: 1067e20d4; end: 1067e20fb;  */

undefined8 FUN_1067e20d4(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000100100fec(param_1 + 0x10);
  func_0x00010055b12c();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 1067e20fc; end: 1067e216f;  */

void FUN_1067e20fc(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 1067e2170; end: 1067e2233;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1067e2170(long param_1)

{
  undefined8 *puVar1;
  code *extraout_x8;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar3;
  ulong uVar4;
  undefined1 auStack_1b8 [32];
  undefined1 auStack_198 [24];
  undefined4 uStack_180;
  undefined8 uStack_178;
  ulong uStack_150;
  long lStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long alStack_78 [5];
  
  *(undefined1 *)(param_1 + 0xa8) = 0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x80) + (*(ulong *)(param_1 + 0x98) / 0x1c) * 8) +
          (*(ulong *)(param_1 + 0x98) % 0x1c) * 0x90;
  (**(code **)(**(long **)(param_1 + 0x40) + 0x10))
            (*(long **)(param_1 + 0x40),lVar2 + 0x20,*(undefined8 *)(lVar2 + 0x40));
  FUN_1067e230c(*(long *)(*(long *)(param_1 + 0x80) + (*(ulong *)(param_1 + 0x98) / 0x1c) * 8) +
                (*(ulong *)(param_1 + 0x98) % 0x1c) * 0x90);
  uVar4 = *(long *)(param_1 + 0x98) + 1;
  *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + -1;
  *(ulong *)(param_1 + 0x98) = uVar4;
  if (0x37 < uVar4) {
    __ZdlPv(**(undefined8 **)(param_1 + 0x80));
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 8;
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + -0x1c;
  }
  if (((*(char *)(param_1 + 0xa9) == '\x01') && ((*(byte *)(param_1 + 0xa8) & 1) == 0)) &&
     (*(long *)(param_1 + 0xa0) != 0)) {
    FUN_1067e2298(auStack_1b8,
                  *(long *)(*(long *)(param_1 + 0x80) + (*(ulong *)(param_1 + 0x98) / 0x1c) * 8) +
                  (*(ulong *)(param_1 + 0x98) % 0x1c) * 0x90);
    if (*(long *)(param_1 + 0x30) == 0) {
      FUN_1067e2170(param_1);
    }
    else {
      plVar3 = *(long **)(param_1 + 0x68);
      lVar2 = *(long *)(param_1 + 0x58);
      func_0x000100bbc524(lVar2);
      (*extraout_x8)();
      (**(code **)(*plVar3 + 0x20))
                (plVar3,auStack_198,uStack_150 & 0xfffffffffffffffc,uStack_180,lStack_138 < lVar2,
                 uStack_178);
      *(undefined1 *)(param_1 + 0xa8) = 1;
      (**(code **)(**(long **)(param_1 + 0x30) + 0x10))
                (auStack_f0,*(long **)(param_1 + 0x30),auStack_1b8);
      func_0x000107c60c94(&uStack_128,auStack_198);
      uStack_108 = *(undefined8 *)(param_1 + 0x10);
      uStack_110 = *(undefined8 *)(param_1 + 8);
      if (*(long *)(param_1 + 0x10) != 0) {
        do {
          func_0x000100bbc514();
        } while (extraout_w10 != 0);
      }
      alStack_78[3] = 0;
      alStack_78[4] = 0;
      alStack_78[1] = 0;
      alStack_78[2] = 0;
      func_0x0001003b8394(&uStack_c0,auStack_f0,alStack_78 + 1);
      func_0x0001003b8400(alStack_78 + 3,&uStack_c0);
      func_0x0001003b6c64(&uStack_c0);
      func_0x0001003b6c64(alStack_78 + 1);
      func_0x0001003b69cc(alStack_78);
      func_0x0001003b6c18(&uStack_90,alStack_78[0]);
      lStack_98 = alStack_78[0];
      uStack_b0 = uStack_118;
      uStack_b8 = uStack_120;
      uStack_c0 = uStack_128;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_a0 = uStack_108;
      uStack_a8 = uStack_110;
      uStack_110 = 0;
      uStack_108 = 0;
      alStack_78[0] = 0;
      lStack_d0 = 0;
      lStack_c8 = 0;
      lStack_e0 = alStack_78[3] + 0x38;
      lStack_d8 = CONCAT71(lStack_d8._1_7_,1);
      func_0x000107c60d88();
      lVar2 = alStack_78[3];
      func_0x0001052a9e98();
      if ((int)lVar2 == 0) {
        puVar1 = (undefined8 *)0x38;
        func_0x000107c60e20();
        lVar2 = lStack_98;
        *puVar1 = &PTR_SUB_11093f020;
        puVar1[3] = uStack_b0;
        puVar1[2] = uStack_b8;
        puVar1[1] = uStack_c0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        puVar1[5] = uStack_a0;
        puVar1[4] = uStack_a8;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        puVar1[6] = lVar2;
        plVar3 = *(long **)(alStack_78[3] + 0x80);
        *(undefined8 **)(alStack_78[3] + 0x80) = puVar1;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
      else {
        func_0x0001003b8400(&lStack_d0,alStack_78 + 3);
      }
      func_0x0001000df5a0(&lStack_e0);
      if (lStack_d0 != 0) {
        lStack_e0 = lStack_d0;
        lStack_d8 = lStack_c8;
        if (lStack_c8 != 0) {
          do {
            func_0x000100bbc514();
          } while (extraout_w10_00 != 0);
        }
        FUN_1067e233c(&uStack_c0,&lStack_e0);
        func_0x0001003b6c64(&lStack_e0);
      }
      uStack_f8 = uStack_88;
      uStack_100 = uStack_90;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x0001003b6c64(&lStack_d0);
      FUN_1067e2460(&uStack_c0);
      func_0x0001003b6c64(&uStack_90);
      lVar2 = alStack_78[0];
      alStack_78[0] = 0;
      if (lVar2 != 0) {
        func_0x0001067e2e40();
      }
      func_0x0001003b6c64(alStack_78 + 3);
      func_0x0001003b6c64(&uStack_100);
      FUN_1067e2234(&uStack_128);
      func_0x0001003b6c64(auStack_f0);
    }
    FUN_1067e230c(auStack_1b8);
  }
  return;
}



/* Entry: 1067e2234; end: 1067e225b;  */

void FUN_1067e2234(long param_1)

{
  func_0x000100bbb824(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1067e225c; end: 1067e225f;  */

undefined8 * FUN_1067e225c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  plVar6 = param_1 + 0xf;
  *param_1 = &PTR_FUN_11093ef98;
  plVar1 = plVar6;
  FUN_1067e20fc();
  plVar2 = plVar6;
  func_0x0001067e2138();
  do {
    plVar9 = param_2 + -0x1f8;
    do {
      if (param_2 == plVar2) {
        param_1[0x14] = 0;
        puVar7 = (undefined8 *)param_1[0x10];
        while( true ) {
          puVar8 = (undefined8 *)param_1[0x11];
          uVar3 = (long)puVar8 - (long)puVar7 >> 3;
          if (uVar3 < 3) break;
          __ZdlPv(*puVar7);
          puVar7 = (undefined8 *)(param_1[0x10] + 8);
          param_1[0x10] = puVar7;
        }
        if (uVar3 == 1) {
          uVar4 = 0xe;
        }
        else {
          if (uVar3 != 2) goto LAB_1067e25f4;
          uVar4 = 0x1c;
        }
        param_1[0x13] = uVar4;
LAB_1067e25f4:
        for (; puVar7 != puVar8; puVar7 = puVar7 + 1) {
          __ZdlPv(*puVar7);
        }
        lVar5 = param_1[0x11];
        while (lVar5 != param_1[0x10]) {
          lVar5 = lVar5 + -8;
          param_1[0x11] = lVar5;
        }
        if (*plVar6 != 0) {
          __ZdlPv();
        }
        func_0x000100bbb800(param_1 + 0xd);
        func_0x0001009ba308(param_1 + 0xb);
        func_0x000100450be4(param_1 + 9);
        FUN_1067e118c(param_1 + 8);
        func_0x000100bbbb78(param_1 + 6);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 3);
        func_0x000100bbb824(param_1 + 1);
        return param_1;
      }
      FUN_1067e230c(param_2);
      param_2 = param_2 + 0x12;
      plVar9 = plVar9 + 0x12;
    } while ((long *)*plVar1 != plVar9);
    plVar1 = plVar1 + 1;
    param_2 = (long *)*plVar1;
  } while( true );
}



/* Entry: 1067e2260; end: 1067e2273;  */

void FUN_1067e2260(void)

{
  FUN_1067e2520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e2274; end: 1067e2297;  */

void FUN_1067e2274(long param_1,long param_2)

{
  func_0x00010054f8dc();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return;
}



/* Entry: 1067e2298; end: 1067e22ff;  */

long FUN_1067e2298(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  FUN_1067e2274();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (lVar1 + 0x20,param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  FUN_1067e2300(param_1 + 0x48,param_2 + 0x48);
  return param_1;
}



/* Entry: 1067e2300; end: 1067e230b;  */

undefined8 * FUN_1067e2300(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110cf51f0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4fc1e0();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_2 + 0x18;
  func_0x000107c2809c(lVar2,0);
  param_1[3] = lVar2;
  lVar2 = param_2 + 0x20;
  func_0x000107c2809c(lVar2,0);
  param_1[4] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    func_0x000108c6f470(0,*(undefined8 *)(param_2 + 0x28));
  }
  param_1[5] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    func_0x000108c6f470(0,*(undefined8 *)(param_2 + 0x30));
  }
  param_1[6] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  param_1[7] = uVar3;
  return param_1;
}



/* Entry: 1067e230c; end: 1067e233b;  */

long FUN_1067e230c(long param_1)

{
  long lStack_28;
  
  func_0x00010b4fa1c0(param_1 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x20);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 1067e233c; end: 1067e245f;  */

void FUN_1067e233c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long alStack_40 [2];
  
  uStack_60 = *param_2;
  lStack_58 = param_2[1];
  if (lStack_58 == 0) {
    lStack_48 = 0;
  }
  else {
    plVar1 = (long *)(lStack_58 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      lStack_48 = lStack_58;
    } while (cVar2 != '\0');
  }
  uStack_50 = uStack_60;
  func_0x000100bbdafc(alStack_40,param_1 + 0x18);
  if (alStack_40[0] != 0) {
    FUN_1067e2170();
  }
  func_0x000100bbb848(alStack_40);
  func_0x0001003b6c64(&uStack_50);
  func_0x0001003b6c64(&uStack_60);
  func_0x0001003b8370(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1067e2460; end: 1067e24b3;  */

void FUN_1067e2460(long param_1)

{
  func_0x0001003b6cec(param_1 + 0x28);
  func_0x000100bbb824(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1067e24b4; end: 1067e24c7;  */

void FUN_1067e24b4(void)

{
  func_0x0001067e2488();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e24c8; end: 1067e251f;  */

void FUN_1067e24c8(long param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000100bbc514();
    } while (extraout_w10 != 0);
  }
  FUN_1067e233c(param_1 + 8,&uStack_30);
  func_0x0001003b6c64(&uStack_30);
  return;
}



/* Entry: 1067e2520; end: 1067e266f;  */

undefined8 * FUN_1067e2520(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  plVar6 = param_1 + 0xf;
  *param_1 = &PTR_FUN_11093ef98;
  plVar1 = plVar6;
  FUN_1067e20fc();
  plVar2 = plVar6;
  func_0x0001067e2138();
  do {
    plVar9 = param_2 + -0x1f8;
    do {
      if (param_2 == plVar2) {
        param_1[0x14] = 0;
        puVar7 = (undefined8 *)param_1[0x10];
        while( true ) {
          puVar8 = (undefined8 *)param_1[0x11];
          uVar3 = (long)puVar8 - (long)puVar7 >> 3;
          if (uVar3 < 3) break;
          __ZdlPv(*puVar7);
          puVar7 = (undefined8 *)(param_1[0x10] + 8);
          param_1[0x10] = puVar7;
        }
        if (uVar3 == 1) {
          uVar4 = 0xe;
        }
        else {
          if (uVar3 != 2) goto LAB_1067e25f4;
          uVar4 = 0x1c;
        }
        param_1[0x13] = uVar4;
LAB_1067e25f4:
        for (; puVar7 != puVar8; puVar7 = puVar7 + 1) {
          __ZdlPv(*puVar7);
        }
        lVar5 = param_1[0x11];
        while (lVar5 != param_1[0x10]) {
          lVar5 = lVar5 + -8;
          param_1[0x11] = lVar5;
        }
        if (*plVar6 != 0) {
          __ZdlPv();
        }
        func_0x000100bbb800(param_1 + 0xd);
        func_0x0001009ba308(param_1 + 0xb);
        func_0x000100450be4(param_1 + 9);
        FUN_1067e118c(param_1 + 8);
        func_0x000100bbbb78(param_1 + 6);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 3);
        func_0x000100bbb824(param_1 + 1);
        return param_1;
      }
      FUN_1067e230c(param_2);
      param_2 = param_2 + 0x12;
      plVar9 = plVar9 + 0x12;
    } while ((long *)*plVar1 != plVar9);
    plVar1 = plVar1 + 1;
    param_2 = (long *)*plVar1;
  } while( true );
}



/* Entry: 1067e2670; end: 1067e2cbf;  */

void FUN_1067e2670(long param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  code *extraout_x8;
  code *extraout_x8_00;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined4 *puVar23;
  undefined1 *puVar24;
  undefined8 *puVar25;
  undefined1 auStack_1d0 [24];
  undefined4 auStack_1b8 [2];
  undefined1 auStack_1b0 [24];
  undefined4 auStack_198 [2];
  undefined8 uStack_190;
  undefined1 auStack_188 [48];
  undefined **ppuStack_158;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  undefined4 uStack_118;
  long alStack_110 [2];
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  
  lVar20 = *(long *)(param_1 + 0x40);
  func_0x000100bbdafc(alStack_110,param_1 + 0x10);
  if (alStack_110[0] != 0) {
    ppuStack_140 = &PTR_DAT_110cf5330;
    uStack_138 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    ppuStack_128 = (undefined **)0x0;
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    pppuVar8 = &ppuStack_140;
    func_0x00010006369c(pppuVar8,uVar12,*(int *)(param_1 + 0x28) - (int)uVar12);
    if (((ulong)pppuVar8 & 1) != 0) {
      FUN_1067e2274(auStack_1d0,(undefined8 *)(param_1 + 0x20));
      ppuVar3 = &PTR_PTR_11337c1a0;
      if (ppuStack_128 != (undefined **)0x0) {
        ppuVar3 = ppuStack_128;
      }
      ppuVar2 = &PTR_PTR_11338cea0;
      if ((undefined **)ppuVar3[5] != (undefined **)0x0) {
        ppuVar2 = (undefined **)ppuVar3[5];
      }
      func_0x0001067e2ea4(auStack_1b0,ppuVar2);
      auStack_198[0] = *(undefined4 *)(param_1 + 0x38);
      uVar12 = *(undefined8 *)(lVar20 + 0x58);
      func_0x000100bbc524();
      (*extraout_x8)();
      ppuVar3 = &PTR_PTR_11337c1a0;
      if (ppuStack_128 != (undefined **)0x0) {
        ppuVar3 = ppuStack_128;
      }
      uStack_190 = uVar12;
      FUN_1067e2300(auStack_188,ppuVar3);
      lVar20 = alStack_110[0];
      ppuVar3 = &PTR_PTR_11338cea0;
      if (ppuStack_158 != (undefined **)0x0) {
        ppuVar3 = ppuStack_158;
      }
      func_0x0001067e2ea4(&ppuStack_100,ppuVar3);
      puVar23 = auStack_198;
      pppuVar8 = &ppuStack_100;
      func_0x0001000e107c(pppuVar8,lVar20 + 0x18);
      if (((ulong)pppuVar8 & 1) == 0) {
        uVar12 = 1;
      }
      else {
        plVar9 = *(long **)(lVar20 + 0x40);
        puVar18 = auStack_1b0;
        (**(code **)(*plVar9 + 0x18))();
        if (((ulong)plVar9 & 1) == 0) {
          puVar25 = (undefined8 *)(lVar20 + 0x78);
          FUN_1067e20fc();
          puVar10 = (undefined1 *)(lVar20 + 0x78);
          func_0x0001067e2138();
          do {
            puVar24 = puVar18 + -0xfc0;
            do {
              puVar19 = puVar10;
              if (puVar18 == puVar10) {
LAB_1067e2804:
                puVar18 = (undefined1 *)(lVar20 + 0x78);
                func_0x0001067e2138();
                if (puVar19 == puVar18) {
                  func_0x0001067e2e4c();
                  func_0x000100bbc524(*(undefined8 *)(alStack_110[0] + 0x68));
                  puVar18 = auStack_1b0;
                  (*extraout_x8_00)();
                  uStack_f8 = 0;
                  uStack_f0 = 0;
                  uStack_e8 = 0;
                  puVar21 = *(undefined8 **)(alStack_110[0] + 0x80);
                  puVar25 = *(undefined8 **)(alStack_110[0] + 0x88);
                  uVar4 = (long)puVar25 - (long)puVar21;
                  ppuStack_100 = &PTR_DAT_110cf5330;
                  uStack_d8 = 0;
                  lVar20 = 0;
                  if (uVar4 != 0) {
                    lVar20 = ((long)puVar25 - (long)puVar21 >> 3) * 0x1c + -1;
                  }
                  uVar13 = *(ulong *)(alStack_110[0] + 0x98);
                  plVar9 = (long *)(alStack_110[0] + 0xa0);
                  if (lVar20 == *plVar9 + uVar13) {
                    if (uVar13 < 0x1c) {
                      plVar17 = (long *)(alStack_110[0] + 0x90);
                      puVar16 = (undefined8 *)*plVar17;
                      puVar22 = *(undefined8 **)(alStack_110[0] + 0x78);
                      if (uVar4 < (ulong)((long)puVar16 - (long)puVar22)) {
                        uVar12 = 0xfc0;
                        __Znwm();
                        if (puVar16 == puVar25) {
                          if (puVar21 == puVar22) {
                            lVar20 = (long)puVar16 - (long)puVar21 >> 2;
                            if (puVar25 == puVar21) {
                              lVar20 = 1;
                            }
                            plStack_70 = plVar17;
                            FUN_1067e2d44(lVar20);
                            func_0x0001067e2e24(lVar20 << 1);
                            puVar18 = *(undefined1 **)(alStack_110[0] + 0x80);
                            func_0x0001067e2d1c(&puStack_90,puVar18,
                                                *(undefined8 *)(alStack_110[0] + 0x88));
                            func_0x0001067e2de4();
                            puVar21 = *(undefined8 **)(alStack_110[0] + 0x80);
                          }
                          puVar21[-1] = uVar12;
                          puVar25 = *(undefined8 **)(alStack_110[0] + 0x88);
                          goto LAB_1067e28f0;
                        }
                        goto LAB_1067e2a98;
                      }
                      puVar14 = (undefined8 *)((long)puVar16 - (long)puVar22 >> 2);
                      if (puVar16 == puVar22) {
                        puVar14 = (undefined8 *)0x1;
                      }
                      plStack_98 = plVar17;
                      FUN_1067e2d44();
                      puVar16 = (undefined8 *)((long)puVar14 + uVar4);
                      puVar22 = puVar14 + (long)puVar18;
                      uVar12 = 0xfc0;
                      puVar10 = puVar18;
                      puStack_b8 = puVar14;
                      puStack_b0 = puVar16;
                      puStack_a8 = puVar16;
                      puStack_a0 = puVar22;
                      __Znwm();
                      uStack_c0 = 0x1c;
                      puVar15 = puVar16;
                      plStack_c8 = plVar9;
                      if (uVar4 == (long)puVar18 * 8) {
                        if (puVar25 == puVar21) {
                          puVar25 = (undefined8 *)0x1;
                          uStack_d0 = uVar12;
                          plStack_70 = plVar17;
                          FUN_1067e2d44();
                          puStack_78 = puVar25 + (long)puVar10;
                          puStack_90 = puVar25;
                          puStack_88 = puVar25;
                          puStack_80 = puVar25;
                          func_0x0001067e2d1c(&puStack_90,puVar16,puVar16);
                          puVar1 = puStack_78;
                          puVar15 = puStack_80;
                          puVar21 = puStack_88;
                          puVar25 = puStack_90;
                          puStack_b8 = puStack_90;
                          puStack_b0 = puStack_88;
                          puStack_a0 = puStack_78;
                          puStack_90 = puVar14;
                          puStack_88 = puVar16;
                          puStack_80 = puVar16;
                          puStack_78 = puVar22;
                          func_0x0001067e2da4(&puStack_90);
                          puVar14 = puVar25;
                          puVar16 = puVar21;
                          puVar22 = puVar1;
                        }
                        else {
                          puStack_b0 = puVar16 + (((long)puVar16 - (long)puVar14 >> 3) + 1) / -2;
                          puVar16 = puStack_b0;
                          puVar15 = puStack_b0;
                        }
                      }
                      puVar25 = puVar15 + 1;
                      *puVar15 = uVar12;
                      uStack_d0 = 0;
                      puVar21 = *(undefined8 **)(alStack_110[0] + 0x88);
                      puStack_a8 = puVar25;
                      while (puVar15 = *(undefined8 **)(alStack_110[0] + 0x80), puVar21 != puVar15)
                      {
                        puVar15 = puVar16;
                        if (puVar16 == puVar14) {
                          if (puVar25 < puVar22) {
                            lVar20 = (long)puVar25 - (long)puVar14;
                            puVar1 = puVar25 + (((long)puVar22 - (long)puVar25 >> 3) + 1) / 2;
                            puVar15 = (undefined8 *)((long)puVar1 - ((long)puVar25 - (long)puVar14))
                            ;
                            puVar25 = puVar1;
                            if (lVar20 != 0) {
                              _memmove(puVar15,puVar16,lVar20);
                            }
                          }
                          else {
                            lVar20 = (long)puVar22 - (long)puVar14 >> 2;
                            if ((long)puVar22 - (long)puVar14 == 0) {
                              lVar20 = 1;
                            }
                            plStack_70 = plVar17;
                            FUN_1067e2d44(lVar20);
                            func_0x0001067e2e24(lVar20 << 1);
                            func_0x0001067e2d1c(&puStack_90,puVar14,puVar25);
                            puVar7 = puStack_78;
                            puVar6 = puStack_80;
                            puVar15 = puStack_88;
                            puVar1 = puStack_90;
                            puStack_90 = puVar14;
                            puStack_88 = puVar16;
                            puStack_80 = puVar25;
                            puStack_78 = puVar22;
                            func_0x0001067e2da4(&puStack_90);
                            puVar14 = puVar1;
                            puVar25 = puVar6;
                            puVar22 = puVar7;
                          }
                        }
                        puVar21 = puVar21 + -1;
                        puVar16 = puVar15 + -1;
                        *puVar16 = *puVar21;
                      }
                      puStack_b8 = *(undefined8 **)(alStack_110[0] + 0x78);
                      *(undefined8 **)(alStack_110[0] + 0x78) = puVar14;
                      *(undefined8 **)(alStack_110[0] + 0x80) = puVar16;
                      puStack_a0 = *(undefined8 **)(alStack_110[0] + 0x90);
                      puStack_a8 = *(undefined8 **)(alStack_110[0] + 0x88);
                      *(undefined8 **)(alStack_110[0] + 0x88) = puVar25;
                      *(undefined8 **)(alStack_110[0] + 0x90) = puVar22;
                      puStack_b0 = puVar15;
                      func_0x0001067e2d78(&uStack_d0);
                      func_0x0001067e2da4(&puStack_b8);
                    }
                    else {
                      *(ulong *)(alStack_110[0] + 0x98) = uVar13 - 0x1c;
                      uVar12 = *puVar21;
                      puVar21 = puVar21 + 1;
LAB_1067e28f0:
                      *(undefined8 **)(alStack_110[0] + 0x80) = puVar21;
                      if (puVar25 == *(undefined8 **)(alStack_110[0] + 0x90)) {
                        puVar16 = *(undefined8 **)(alStack_110[0] + 0x78);
                        if (puVar21 < puVar16 || (long)puVar21 - (long)puVar16 == 0) {
                          puVar21 = (undefined8 *)((long)puVar25 - (long)puVar16 >> 2);
                          if ((long)puVar25 - (long)puVar16 == 0) {
                            puVar21 = (undefined8 *)0x1;
                          }
                          puVar25 = puVar21;
                          plStack_70 = (long *)(alStack_110[0] + 0x90);
                          FUN_1067e2d44();
                          puStack_88 = puVar25 + ((ulong)puVar21 >> 2);
                          puStack_78 = puVar25 + (long)puVar18;
                          puStack_90 = puVar25;
                          puStack_80 = puStack_88;
                          func_0x0001067e2d1c(&puStack_90,*(undefined8 *)(alStack_110[0] + 0x80),
                                              *(undefined8 *)(alStack_110[0] + 0x88));
                          func_0x0001067e2de4();
                          puVar25 = *(undefined8 **)(alStack_110[0] + 0x88);
                        }
                        else {
                          lVar20 = (((long)puVar21 - (long)puVar16 >> 3) + 1) / -2;
                          puVar16 = puVar21 + lVar20;
                          lVar5 = (long)puVar25 - (long)puVar21;
                          if (lVar5 != 0) {
                            _memmove(puVar16,puVar21,lVar5);
                            puVar21 = *(undefined8 **)(alStack_110[0] + 0x80);
                          }
                          puVar25 = (undefined8 *)((long)puVar16 + lVar5);
                          *(undefined8 **)(alStack_110[0] + 0x80) = puVar21 + lVar20;
                        }
                      }
LAB_1067e2a98:
                      *puVar25 = uVar12;
                      *(undefined8 **)(alStack_110[0] + 0x88) = puVar25 + 1;
                    }
                  }
                  func_0x0001067e2138(alStack_110[0] + 0x78);
                  FUN_1067e2298();
                  *(long *)(alStack_110[0] + 0xa0) = *(long *)(alStack_110[0] + 0xa0) + 1;
                  func_0x000100bbdbec(alStack_110[0]);
                  func_0x00010b4f9c08(&ppuStack_100);
                  goto LAB_1067e2830;
                }
                uVar12 = 0;
                goto LAB_1067e2818;
              }
              puVar11 = auStack_1b0;
              func_0x0001000e107c(puVar11,puVar18 + 0x20);
              puVar19 = puVar18;
              if (((ulong)puVar11 & 1) != 0) goto LAB_1067e2804;
              puVar18 = puVar18 + 0x90;
              puVar24 = puVar24 + 0x90;
            } while ((undefined1 *)*puVar25 != puVar24);
            puVar25 = puVar25 + 1;
            puVar18 = (undefined1 *)*puVar25;
          } while( true );
        }
        puVar23 = auStack_1b8;
        uVar12 = 2;
      }
LAB_1067e2818:
      (**(code **)(**(long **)(lVar20 + 0x68) + 0x18))(*(long **)(lVar20 + 0x68),*puVar23,uVar12);
      func_0x0001067e2e4c();
LAB_1067e2830:
      FUN_1067e230c(auStack_1d0);
    }
    func_0x00010b4f9c08(&ppuStack_140);
  }
  func_0x000100bbb848(alStack_110);
  return;
}



/* Entry: 1067e2cc0; end: 1067e2d43;  */

void FUN_1067e2cc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_11093f050;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[2];
  param_1[4] = param_2[3];
  param_1[3] = uVar1;
  param_1[5] = param_2[4];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 5);
  param_1[7] = param_2[6];
  return;
}



/* Entry: 1067e2d44; end: 1067e2de3;  */

undefined1  [16] FUN_1067e2d44(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1067e2de4; end: 1067e2e53;  */

long * FUN_1067e2de4(void)

{
  long lVar1;
  long unaff_x25;
  long unaff_x29;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *(undefined8 *)(unaff_x25 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x25 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x29 + -0x80);
  uVar7 = *(undefined8 *)(unaff_x29 + -0x68);
  uVar6 = *(undefined8 *)(unaff_x29 + -0x70);
  *(undefined8 *)(unaff_x25 + 0x80) = *(undefined8 *)(unaff_x29 + -0x78);
  *(undefined8 *)(unaff_x25 + 0x78) = uVar4;
  uVar5 = *(undefined8 *)(unaff_x25 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x25 + 0x88);
  *(undefined8 *)(unaff_x25 + 0x90) = uVar7;
  *(undefined8 *)(unaff_x25 + 0x88) = uVar6;
  *(undefined8 *)(unaff_x29 + -0x78) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x80) = uVar2;
  *(undefined8 *)(unaff_x29 + -0x68) = uVar5;
  *(undefined8 *)(unaff_x29 + -0x70) = uVar4;
  lVar1 = *(long *)(unaff_x29 + -0x70);
  while (lVar1 != *(long *)(unaff_x29 + -0x78)) {
    lVar1 = lVar1 + -8;
    *(long *)(unaff_x29 + -0x70) = lVar1;
  }
  if (*(long *)(unaff_x29 + -0x80) != 0) {
    __ZdlPv();
  }
  return (long *)(unaff_x29 + -0x80);
}



/* Entry: 1067e2e54; end: 1067e2f1b;  */

void FUN_1067e2e54(long *param_1,long param_2)

{
  long *plVar1;
  
  if ((param_2 != 0) && (param_1[2] <= param_2)) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x10))();
    param_1[1] = param_2 - (ulong)plVar1 / 1000;
  }
  return;
}



/* Entry: 1067e2f1c; end: 1067e2f47;  */

void FUN_1067e2f1c(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  if (param_1 != param_2) {
    for (; param_2 = param_2 + -1, param_1 < param_2; param_1 = param_1 + 1) {
      uVar1 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar1;
    }
  }
  return;
}



/* Entry: 1067e2f48; end: 1067e306b;  */

void FUN_1067e2f48(int param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  undefined1 auStack_58 [24];
  
  func_0x0001067e3584();
  func_0x0001067e35e4();
  if (param_1 == 0) {
    func_0x0001067e34bc();
    func_0x0001067e3480();
    func_0x0001067e355c();
    func_0x0001067e349c();
    func_0x0001067e35fc();
    func_0x0001067e346c();
    func_0x0001067e34d4();
    func_0x0001067e34e4();
    func_0x0001067e34dc();
  }
  else {
    func_0x0001067e353c();
    lVar1 = *(long *)(unaff_x21 + 8);
    puVar2 = (undefined8 *)0x30;
    __Znwm();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_11093f0c0;
    if (lVar1 != 0) {
      do {
        func_0x0001067e34ac();
      } while (extraout_w10 != 0);
      do {
        func_0x0001067e34ac();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001067e35b4();
    func_0x0001067e359c(&PTR_DAT_11093f110);
    func_0x0001067e34ec();
    func_0x0001067e351c();
    func_0x0001067e356c();
    FUN_1067e32f4(auStack_58);
    func_0x0001067e3534();
  }
  func_0x0001067e3574();
  return;
}



/* Entry: 1067e306c; end: 1067e318f;  */

void FUN_1067e306c(int param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  undefined1 auStack_58 [24];
  
  func_0x0001067e3584();
  func_0x0001067e35e4();
  if (param_1 == 0) {
    func_0x0001067e34bc();
    func_0x0001067e3480();
    func_0x0001067e355c();
    func_0x0001067e349c();
    func_0x0001067e35fc();
    func_0x0001067e346c();
    func_0x0001067e34d4();
    func_0x0001067e34e4();
    func_0x0001067e34dc();
  }
  else {
    func_0x0001067e353c();
    lVar1 = *(long *)(unaff_x21 + 8);
    puVar2 = (undefined8 *)0x30;
    __Znwm();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_11093f178;
    if (lVar1 != 0) {
      do {
        func_0x0001067e34ac();
      } while (extraout_w10 != 0);
      do {
        func_0x0001067e34ac();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001067e35b4();
    func_0x0001067e359c(&PTR_DAT_11093f1c8);
    func_0x0001067e34ec();
    func_0x0001067e351c();
    func_0x0001067e356c();
    FUN_1067e3444(auStack_58);
    func_0x0001067e3534();
  }
  func_0x0001067e3574();
  return;
}



/* Entry: 1067e3190; end: 1067e31cb;  */

void FUN_1067e3190(void)

{
  func_0x0001067e35d8();
  return;
}



/* Entry: 1067e31cc; end: 1067e31cf;  */

void FUN_1067e31cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093f0c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1067e31d0; end: 1067e31e3;  */

void FUN_1067e31d0(void)

{
  FUN_1067e32e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e31e4; end: 1067e31ef;  */

void FUN_1067e31e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067e35c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1067e31f0; end: 1067e3203;  */

void FUN_1067e31f0(void)

{
  func_0x000100850ee8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e3204; end: 1067e32e3;  */

void FUN_1067e3204(long param_1)

{
  long lVar1;
  long *plVar2;
  int extraout_w10;
  long *plStack_148;
  long lStack_140;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  ppuStack_48 = &PTR_FUN_11093f2d0;
  uStack_40 = 0;
  uStack_38 = 0;
  lVar1 = param_1;
  func_0x0001067e35f0();
  if ((int)lVar1 == 0) {
    func_0x0001067e34bc();
    func_0x0001067e3480();
    func_0x0001067e354c();
    func_0x0001067e349c();
    func_0x0001067e35fc();
    func_0x0001067e346c();
    func_0x0001067e34d4();
    func_0x0001067e34e4();
    func_0x0001067e34dc();
  }
  else {
    plVar2 = *(long **)(param_1 + 8);
    lStack_140 = *(long *)(param_1 + 0x10);
    plStack_148 = plVar2;
    if (lStack_140 != 0) {
      do {
        func_0x0001067e34ac();
      } while (extraout_w10 != 0);
    }
    func_0x0001067e35cc(*(undefined8 *)(*plVar2 + 0x38));
    func_0x0001067df8e8(&plStack_148);
  }
  FUN_1067e516c(&ppuStack_48);
  return;
}



/* Entry: 1067e32e4; end: 1067e32f3;  */

void FUN_1067e32e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093f0c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1067e32f4; end: 1067e331b;  */

long FUN_1067e32f4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1067e331c; end: 1067e331f;  */

void FUN_1067e331c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093f178;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1067e3320; end: 1067e3333;  */

void FUN_1067e3320(void)

{
  FUN_1067e3434();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e3334; end: 1067e333f;  */

void FUN_1067e3334(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067e35c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


