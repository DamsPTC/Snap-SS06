/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072cc008; end: 1072cc083;  */

void FUN_1072cc008(undefined8 *param_1)

{
  long lVar1;
  code *extraout_x8;
  int extraout_w10;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0001072ce940();
  func_0x0001072ced58();
  *param_1 = &PTR_DAT_1109a8410;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 8);
  param_1[2] = *(undefined8 *)(unaff_x20 + 0x10);
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  func_0x0001072cedc0();
  func_0x0001072ce9c4();
  (*extraout_x8)();
  func_0x0001072cf558();
  if (param_1 != (undefined8 *)0x0) {
    func_0x0001072ce338();
  }
  return;
}



/* Entry: 1072cc084; end: 1072cc0ab;  */

void FUN_1072cc084(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099b408);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072cc0ac; end: 1072cc0bf;  */

undefined ** FUN_1072cc0ac(void)

{
  return &PTR_DAT_11099b408;
}



/* Entry: 1072cc0c0; end: 1072cc0e7;  */

void FUN_1072cc0c0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001072ce718();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_11099b428;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1072cc0e8; end: 1072cc107;  */

void FUN_1072cc0e8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_11099b428;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1072cc108; end: 1072cc153;  */

void FUN_1072cc108(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x0001072b70d0(auStack_38,*(undefined4 *)(lVar1 + 0x2d0));
  func_0x000107503770(param_2,auStack_38,lVar1 + 0x2d8);
  func_0x0001003ac718();
  return;
}



/* Entry: 1072cc154; end: 1072cc17b;  */

void FUN_1072cc154(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099b488);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072cc17c; end: 1072cc187;  */

undefined ** FUN_1072cc17c(void)

{
  return &PTR_DAT_11099b488;
}



/* Entry: 1072cc188; end: 1072cc1af;  */

undefined8 FUN_1072cc188(undefined8 param_1)

{
  func_0x0001072cfe6c(&PTR_FUN_11099b4a8);
  return param_1;
}



/* Entry: 1072cc1b0; end: 1072cc1c3;  */

void FUN_1072cc1b0(void)

{
  FUN_1072cc188();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072cc1c4; end: 1072cc1e7;  */

long FUN_1072cc1c4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072cedd4();
  func_0x0001072ce940();
  func_0x0001072cfe74(&PTR_FUN_11099b4a8);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return unaff_x20;
}



/* Entry: 1072cc1e8; end: 1072cc207;  */

void FUN_1072cc1e8(long param_1,undefined8 param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce940(param_2,param_1 + 8);
  func_0x0001072cfe74(&PTR_FUN_11099b4a8);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1072cc208; end: 1072cc2a7;  */

void FUN_1072cc208(void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_50 [48];
  
  func_0x0001072ce940();
  func_0x0001072cfd78();
  iVar1 = (int)unaff_x20 + 8;
  func_0x0001072cae3c();
  if (iVar1 != 0) {
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xa8);
    if (*(int *)(unaff_x19 + 0x30) == 1) {
      if (lVar2 != 0) {
        func_0x0001072cf144();
        func_0x0001072cf384();
        func_0x0001072cfa5c();
        func_0x00010028ad98(auStack_50);
      }
    }
    else if (*(int *)(unaff_x19 + 0x30) == 0) {
      if (lVar2 != 0) {
        func_0x0001072cf144();
        func_0x0001072cfebc();
      }
    }
    else if (lVar2 != 0) {
      func_0x0001072cfd2c(*(undefined8 *)(**(long **)(*(long *)(unaff_x20 + 0x20) + 0x158) + 0x38));
    }
  }
  func_0x0001072cf1c4();
  return;
}



/* Entry: 1072cc2a8; end: 1072cc2cf;  */

void FUN_1072cc2a8(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099b508);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072cc2d0; end: 1072cc2db;  */

undefined ** FUN_1072cc2d0(void)

{
  return &PTR_DAT_11099b508;
}



/* Entry: 1072cc2dc; end: 1072cc33f;  */

void FUN_1072cc2dc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce940();
  func_0x0001072cfe74(&PTR_FUN_11099b4a8);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1072cc340; end: 1072cc343;  */

undefined8 * FUN_1072cc340(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099b528;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 4);
  return param_1;
}



/* Entry: 1072cc344; end: 1072cc357;  */

void FUN_1072cc344(void)

{
  FUN_1072cc37c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072cc358; end: 1072cc37b;  */

void FUN_1072cc358(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001072cc378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20);
  return;
}



/* Entry: 1072cc37c; end: 1072cc3a7;  */

undefined8 * FUN_1072cc37c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099b528;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 4);
  return param_1;
}



/* Entry: 1072cc3a8; end: 1072cc3ab;  */

void FUN_1072cc3a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099b568;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072cc3ac; end: 1072cc3bf;  */

void FUN_1072cc3ac(void)

{
  func_0x0001072cc680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072cc3c0; end: 1072cc3d7;  */

void FUN_1072cc3c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072cc3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x28))();
  return;
}



/* Entry: 1072cc3d8; end: 1072cc3ff;  */

void FUN_1072cc3d8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001072ce718();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_11099b5b8;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1072cc400; end: 1072cc41f;  */

void FUN_1072cc400(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_11099b5b8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1072cc420; end: 1072cc457;  */

void FUN_1072cc420(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = &UNK_10de2d003;
  FUN_1072cc48c(*(undefined8 *)(*(long *)(param_1 + 8) + 0xb0),0x178,1,&puStack_18);
  return;
}



/* Entry: 1072cc458; end: 1072cc47f;  */

void FUN_1072cc458(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099b618);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072cc480; end: 1072cc48b;  */

undefined ** FUN_1072cc480(void)

{
  return &PTR_DAT_11099b618;
}



/* Entry: 1072cc48c; end: 1072cc53b;  */

void FUN_1072cc48c(long param_1,code *UNRECOVERED_JUMPTABLE)

{
  long *plVar1;
  int iVar2;
  code *extraout_x8;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined1 auStack_48 [24];
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001072ce8d4();
    iVar2 = (int)param_1;
    func_0x0001072cf5a4();
    (*extraout_x8)();
    if (iVar2 == 0) {
      (**(code **)(*unaff_x21 + 0x20))(auStack_48);
      func_0x0001072cea9c(auStack_48,UNRECOVERED_JUMPTABLE);
      FUN_1072cc53c();
      func_0x0001072cefac();
    }
    else {
      (**(code **)(*unaff_x21 + 0x18))();
      if (unaff_x21 != (long *)0x0) {
        plVar1 = (long *)((long)unaff_x21 + ((long)unaff_x20 >> 1));
        if ((unaff_x20 & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
        }
                    /* WARNING: Could not recover jumptable at 0x0001072cc4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar1,*unaff_x19);
        return;
      }
    }
  }
  return;
}



/* Entry: 1072cc53c; end: 1072cc5d7;  */

void FUN_1072cc53c(long *param_1)

{
  long lVar1;
  undefined1 auStack_58 [8];
  long alStack_50 [2];
  
  func_0x0001072cebd4();
  FUN_10724bb70(alStack_50,param_1 + 1);
  if (alStack_50[0] != 0) {
    lVar1 = *param_1;
    func_0x0001072ce640(auStack_58);
    FUN_1072cc5d8();
    func_0x0001072ce9c4();
    func_0x0001073ae140();
    func_0x0001072cf558();
    if (lVar1 != 0) {
      func_0x0001072ce338();
    }
  }
  func_0x00010724bcd8(alStack_50);
  return;
}



/* Entry: 1072cc5d8; end: 1072cc607;  */

void FUN_1072cc5d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = *param_4;
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_1072cc608(param_1,&uStack_20,&uStack_28);
  return;
}



/* Entry: 1072cc608; end: 1072cc64f;  */

void FUN_1072cc608(undefined8 *param_1)

{
  undefined8 *extraout_x8;
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar2;
  
  func_0x0001003ac100();
  func_0x0001072cedd4();
  uVar1 = *unaff_x19;
  *param_1 = &PTR_FUN_11099bc68;
  param_1[1] = unaff_x21;
  uVar2 = *unaff_x20;
  param_1[3] = unaff_x20[1];
  param_1[2] = uVar2;
  param_1[4] = uVar1;
  *extraout_x8 = param_1;
  return;
}



/* Entry: 1072cc650; end: 1072cc68f;  */

void FUN_1072cc650(void)

{
  return;
}



/* Entry: 1072cc690; end: 1072cc6a3;  */

void FUN_1072cc690(void)

{
  func_0x0001072cc6ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072cc6a4; end: 1072cc6b7;  */

void FUN_1072cc6a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072ce9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072cc6b8; end: 1072cc72b;  */

void FUN_1072cc6b8(long param_1)

{
  func_0x0001072cea78();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 1072cc72c; end: 1072cc73f;  */

void FUN_1072cc72c(void)

{
  func_0x0001072cc700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072cc740; end: 1072cc763;  */

void FUN_1072cc740(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x0001072cedd4();
  puVar2 = param_1 + 1;
  *puVar1 = &PTR_SUB_11099b688;
  lVar3 = param_1[2];
  uVar4 = *puVar2;
  puVar1[2] = param_1[2];
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  lVar3 = puVar2[3];
  uVar4 = puVar2[2];
  puVar1[4] = puVar2[3];
  puVar1[3] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1072cc764; end: 1072cc787;  */

void FUN_1072cc764(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_SUB_11099b688;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  lVar2 = puVar1[3];
  uVar3 = puVar1[2];
  param_2[4] = puVar1[3];
  param_2[3] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1072cc788; end: 1072cc8bf;  */

void FUN_1072cc788(undefined **param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined ***pppuStack_50;
  undefined8 uStack_48;
  
  ppuVar5 = &puStack_a0;
  ppuVar3 = param_1;
  func_0x0001072ce328();
  puVar1 = ppuVar3[1];
  puVar2 = ppuVar3[2];
  puStack_a0 = puVar1;
  puStack_98 = puVar2;
  uStack_48 = extraout_x8;
  if (puVar2 != (undefined *)0x0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  func_0x0001072cf830();
  puStack_78 = param_1[4];
  puStack_80 = param_1[3];
  if (param_1[4] != (undefined *)0x0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10_00 != 0);
  }
  if (puVar2 != (undefined *)0x0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10_01 != 0);
  }
  ppuStack_68 = &PTR_FUN_11099b6f8;
  uStack_90 = 0;
  uStack_88 = 0;
  pppuStack_50 = &ppuStack_68;
  puStack_60 = puVar1;
  puStack_58 = puVar2;
  func_0x000107394890(ppuVar3,&puStack_80,&ppuStack_68);
  func_0x0001072ccd08(&ppuStack_68);
  FUN_1072cc6b8(&uStack_90);
  ppuVar4 = &puStack_80;
  func_0x0001072cc6dc();
  ppuStack_68 = ppuVar3;
  func_0x0001072cedc0();
  func_0x0001072ceb4c();
  func_0x0001072d0154();
  if (ppuVar4 != (undefined **)0x0) {
    func_0x0001072ce338();
  }
  FUN_1072cc6b8();
  func_0x0001072ce0cc(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001072d0154();
    if (ppuVar5 != (undefined **)0x0) {
      func_0x0001072ce338();
    }
    FUN_1072cc6b8(&puStack_a0);
    func_0x0001072ce900();
    func_0x0001072cea90();
    func_0x0001072cea04();
    func_0x0001072ce484();
    return;
  }
  return;
}



/* Entry: 1072cc8c0; end: 1072cc8e7;  */

void FUN_1072cc8c0(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099b7b8);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072cc8e8; end: 1072cc94b;  */

undefined ** FUN_1072cc8e8(void)

{
  return &PTR_DAT_11099b7b8;
}



/* Entry: 1072cc94c; end: 1072cc977;  */

undefined8 * FUN_1072cc94c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099b6f8;
  FUN_1072cc6b8(param_1 + 1);
  return param_1;
}



/* Entry: 1072cc978; end: 1072cc98b;  */

void FUN_1072cc978(void)

{
  FUN_1072cc94c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072cc98c; end: 1072cc9bf;  */

void FUN_1072cc98c(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x0001072ce7fc();
  func_0x0001072ceba0(&PTR_FUN_11099b6f8);
  if (extraout_x8 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1072cc9c0; end: 1072cca07;  */

void FUN_1072cc9c0(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_11099b6f8;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072ced88(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1072cca08; end: 1072ccbff;  */

void FUN_1072cca08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plStack_108;
  long lStack_100;
  undefined8 auStack_f8 [3];
  long alStack_e0 [2];
  undefined1 auStack_d0 [24];
  undefined8 auStack_b8 [3];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *apuStack_90 [8];
  
  plStack_108 = (long *)0x0;
  lStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_100 = lVar1;
    if (lVar1 != 0) {
      plVar4 = *(long **)(param_1 + 8);
      plStack_108 = plVar4;
      if (plVar4 != (long *)0x0) {
        func_0x0001072cf668();
        if ((*(byte *)(plVar4 + 1) & 1) == 0) {
          plVar2 = plVar4;
          (**(code **)(*plVar4 + 0x10))();
          if ((int)plVar2 == 0) {
            (**(code **)(*plVar4 + 0x20))(auStack_f8,plVar4);
            func_0x0001072cff04(alStack_e0);
            if (alStack_e0[0] != 0) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (auStack_d0,param_2);
              puVar3 = auStack_b8;
              FUN_1072ab9cc(puVar3,param_3);
              uStack_98 = 0;
              uStack_a0 = 0;
              func_0x0001072cf804();
              FUN_1072ccc34(apuStack_90,auStack_d0);
              *puVar3 = &PTR_FUN_11099b778;
              puVar3[1] = auStack_f8[0];
              puVar3[3] = 1;
              puVar3[2] = 0x110;
              FUN_1072ccc34(puVar3 + 4,apuStack_90);
              func_0x0001072cccdc(apuStack_90);
              apuStack_90[0] = puVar3;
              func_0x0001072cccdc(auStack_d0);
              func_0x0001073ae140(alStack_e0[0],apuStack_90);
              puVar3 = apuStack_90[0];
              apuStack_90[0] = (undefined8 *)0x0;
              if (puVar3 != (undefined8 *)0x0) {
                func_0x0001072ce338();
              }
            }
            func_0x00010724bcd8(alStack_e0);
            func_0x0001072cefac();
          }
          else {
            (**(code **)(*plVar4 + 0x18))();
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x110))();
            }
          }
        }
        func_0x0001072cec0c();
      }
    }
  }
  func_0x00010725b6e0(&plStack_108);
  return;
}



/* Entry: 1072ccc00; end: 1072ccc27;  */

void FUN_1072ccc00(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099b7a8);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072ccc28; end: 1072ccc33;  */

undefined ** FUN_1072ccc28(void)

{
  return &PTR_DAT_11099b7a8;
}



/* Entry: 1072ccc34; end: 1072ccc6b;  */

void FUN_1072ccc34(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001072ce940();
  func_0x0001072d02e4(*param_2);
  *param_2 = 0;
  func_0x0001072a6994();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x38) = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  return;
}



/* Entry: 1072ccc6c; end: 1072ccc6f;  */

undefined8 * FUN_1072ccc6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099b778;
  func_0x0001072cccdc(param_1 + 4);
  return param_1;
}



/* Entry: 1072ccc70; end: 1072ccc83;  */

void FUN_1072ccc70(void)

{
  FUN_1072cccb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072ccc84; end: 1072cccaf;  */

void FUN_1072ccc84(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001072cccac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20,param_1 + 0x38,param_1 + 0x50);
  return;
}



/* Entry: 1072cccb0; end: 1072ccd3b;  */

undefined8 * FUN_1072cccb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099b778;
  func_0x0001072cccdc(param_1 + 4);
  return param_1;
}



/* Entry: 1072ccd3c; end: 1072ccd43;  */

void FUN_1072ccd3c(void)

{
  return;
}



/* Entry: 1072ccd44; end: 1072ccd6b;  */

void FUN_1072ccd44(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001072ce718();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_11099b7d8;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1072ccd6c; end: 1072ccd9b;  */

void FUN_1072ccd6c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_11099b7d8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1072ccd9c; end: 1072ccdc3;  */

void FUN_1072ccd9c(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099b838);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072ccdc4; end: 1072ccdcf;  */

undefined ** FUN_1072ccdc4(void)

{
  return &PTR_DAT_11099b838;
}



/* Entry: 1072ccdd0; end: 1072ccf87;  */

void FUN_1072ccdd0(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  func_0x0001003ac1fc();
  _memcpy();
  _memcpy(unaff_x19 + 200,unaff_x20 + 200,0xa0);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x178);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x168);
  *(undefined8 *)(unaff_x19 + 0x170) = *(undefined8 *)(unaff_x20 + 0x170);
  *(undefined8 *)(unaff_x19 + 0x168) = uVar3;
  *(undefined1 *)(unaff_x19 + 0x178) = uVar2;
  func_0x0001072cec1c(unaff_x19 + 0x180,unaff_x20 + 0x180);
  func_0x0001072cec1c(unaff_x19 + 0x200,unaff_x20 + 0x200);
  func_0x0001072cec1c(unaff_x19 + 0x280,unaff_x20 + 0x280);
  func_0x0001072cec1c(unaff_x19 + 0x300,unaff_x20 + 0x300);
  _memcpy(unaff_x19 + 0x380,unaff_x20 + 0x380,0x60);
  func_0x0001072cf640(unaff_x19 + 0x4a0,unaff_x20 + 0x4a0);
  func_0x0001072cf640(unaff_x19 + 0x560,unaff_x20 + 0x560);
  func_0x0001072cf640(unaff_x19 + 0x3e0,unaff_x20 + 0x3e0);
  _memcpy(unaff_x19 + 0x620,unaff_x20 + 0x620,0x1e0);
  func_0x0001072cec1c(unaff_x19 + 0x800,unaff_x20 + 0x800);
  func_0x0001072cf8d8(unaff_x19 + 0x880,unaff_x20 + 0x880);
  func_0x0001072cec1c(unaff_x19 + 0x8c8,unaff_x20 + 0x8c8);
  func_0x0001072cf8d8(unaff_x19 + 0x948,unaff_x20 + 0x948);
  func_0x0001072cec1c(unaff_x19 + 0x990,unaff_x20 + 0x990);
  func_0x0001072cec1c(unaff_x19 + 0xa10,unaff_x20 + 0xa10);
  uVar1 = *(undefined4 *)(unaff_x20 + 0xa90);
  *(undefined1 *)(unaff_x19 + 0xa94) = *(undefined1 *)(unaff_x20 + 0xa94);
  *(undefined4 *)(unaff_x19 + 0xa90) = uVar1;
  *(undefined4 *)(unaff_x19 + 0xa98) = *(undefined4 *)(unaff_x20 + 0xa98);
  func_0x0001072cec1c(unaff_x19 + 0xaa0,unaff_x20 + 0xaa0);
  func_0x0001072cec1c(unaff_x19 + 0xb20,unaff_x20 + 0xb20);
  func_0x0001072cf8d8(unaff_x19 + 0xba0,unaff_x20 + 0xba0);
  func_0x0001072cec1c(unaff_x19 + 0xbe8,unaff_x20 + 0xbe8);
  func_0x0001072cf8d8(unaff_x19 + 0xc68,unaff_x20 + 0xc68);
  func_0x0001072cec1c(unaff_x19 + 0xcb0,unaff_x20 + 0xcb0);
  func_0x0001072cec1c(unaff_x19 + 0xd30,unaff_x20 + 0xd30);
  func_0x0001072cec1c(unaff_x19 + 0xdb0,unaff_x20 + 0xdb0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xe30);
  *(undefined8 *)(unaff_x19 + 0xe38) = *(undefined8 *)(unaff_x20 + 0xe38);
  *(undefined8 *)(unaff_x19 + 0xe30) = uVar3;
  uVar3 = *(undefined8 *)(unaff_x20 + 0xe40);
  *(undefined8 *)(unaff_x19 + 0xe48) = *(undefined8 *)(unaff_x20 + 0xe48);
  *(undefined8 *)(unaff_x19 + 0xe40) = uVar3;
  return;
}



/* Entry: 1072ccf88; end: 1072ccf9b;  */

void FUN_1072ccf88(void)

{
  func_0x0001072ccf60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072ccf9c; end: 1072ccfbf;  */

long FUN_1072ccf9c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072cedd4();
  func_0x0001072ce940();
  func_0x0001072cfe74(&PTR_SUB_11099b858);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return unaff_x20;
}



/* Entry: 1072ccfc0; end: 1072ccfdf;  */

void FUN_1072ccfc0(long param_1,undefined8 param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce940(param_2,param_1 + 8);
  func_0x0001072cfe74(&PTR_SUB_11099b858);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1072ccfe0; end: 1072cd07f;  */

void FUN_1072ccfe0(void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_50 [48];
  
  func_0x0001072ce940();
  func_0x0001072cfd78();
  iVar1 = (int)unaff_x20 + 8;
  func_0x0001072cae3c();
  if (iVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if (*(int *)(unaff_x19 + 0x30) == 1) {
      if (*(long *)(lVar2 + 0xa8) != 0) {
        func_0x0001072cf144();
        func_0x0001072cf384();
        func_0x0001072cfa5c();
        func_0x00010028ad98(auStack_50);
      }
    }
    else if (*(int *)(unaff_x19 + 0x30) == 0) {
      if (*(long *)(lVar2 + 0xa8) != 0) {
        func_0x0001072cf144();
        func_0x0001072cfebc();
      }
    }
    else {
      func_0x0001072cfd2c(*(undefined8 *)(**(long **)(lVar2 + 0x158) + 0x38));
    }
  }
  func_0x0001072cf1c4();
  return;
}



/* Entry: 1072cd080; end: 1072cd0a7;  */

void FUN_1072cd080(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099b8b8);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072cd0a8; end: 1072cd0b3;  */

undefined ** FUN_1072cd0a8(void)

{
  return &PTR_DAT_11099b8b8;
}



/* Entry: 1072cd0b4; end: 1072cd10f;  */

void FUN_1072cd0b4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce940();
  func_0x0001072cfe74(&PTR_SUB_11099b858);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1072cd110; end: 1072cd123;  */

void FUN_1072cd110(void)

{
  func_0x0001072cd0e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072cd124; end: 1072cd15f;  */

undefined8 FUN_1072cd124(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x110;
  __Znwm(0x110);
  FUN_1072cd1dc();
  return uVar1;
}



/* Entry: 1072cd160; end: 1072cd1a7;  */

undefined8 * FUN_1072cd160(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_SUB_11099b8d8;
  func_0x000104c2fe00(param_2 + 1);
  func_0x000104c2fe00(param_2 + 8,param_1 + 0x40);
  func_0x000104c2fe00(param_2 + 0xf,param_1 + 0x78);
  func_0x000104c2fe00(param_2 + 0x16,param_1 + 0xb0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_2 + 0x1d,param_1 + 0xe8);
  func_0x000107277f30(param_2 + 0x20,param_1 + 0x100);
  return param_2;
}



/* Entry: 1072cd1a8; end: 1072cd1cf;  */

void FUN_1072cd1a8(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099b938);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072cd1d0; end: 1072cd1db;  */

undefined ** FUN_1072cd1d0(void)

{
  return &PTR_DAT_11099b938;
}



/* Entry: 1072cd1dc; end: 1072cd28b;  */

undefined8 * FUN_1072cd1dc(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_SUB_11099b8d8;
  func_0x000104c2fe00(param_1 + 1);
  func_0x000104c2fe00(param_1 + 8,param_2 + 0x38);
  func_0x000104c2fe00(param_1 + 0xf,param_2 + 0x70);
  func_0x000104c2fe00(param_1 + 0x16,param_2 + 0xa8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x1d,param_2 + 0xe0);
  func_0x000107277f30(param_1 + 0x20,param_2 + 0xf8);
  return param_1;
}



/* Entry: 1072cd28c; end: 1072cd2af;  */

void FUN_1072cd28c(long param_1)

{
  func_0x0001072cea78();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1072cd2b0; end: 1072cd31f;  */

ulong FUN_1072cd2b0(void)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long alStack_40 [2];
  
  FUN_107289c70(alStack_40);
  if (alStack_40[0] == 0) {
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    FUN_1072cd320();
    uVar3 = (uint)alStack_40[0] & 0xffffff00;
    uVar1 = (uint)alStack_40[0] & 0xff;
    uVar2 = 0x100000000;
  }
  func_0x000107289cc8(alStack_40);
  return uVar2 | (uVar3 | uVar1);
}



/* Entry: 1072cd320; end: 1072cd35b;  */

undefined4 FUN_1072cd320(long param_1)

{
  undefined4 uVar1;
  long lStack_30;
  undefined1 uStack_28;
  
  uStack_28 = 1;
  lStack_30 = param_1;
  FUN_10724e404();
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  FUN_10724e49c(&lStack_30);
  return uVar1;
}



/* Entry: 1072cd35c; end: 1072cd3b3;  */

long FUN_1072cd35c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x0001072cfa78(param_1,&DAT_10f34bc88);
  FUN_1072a0374(param_1 + 0x20,auStack_38,param_2);
  func_0x0001003ac718();
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return param_1;
}



/* Entry: 1072cd3b4; end: 1072cd3bb;  */

void FUN_1072cd3b4(void)

{
  return;
}



/* Entry: 1072cd3bc; end: 1072cd3e7;  */

void FUN_1072cd3bc(undefined8 *param_1)

{
  long unaff_x19;
  
  func_0x0001072ce718();
  *param_1 = &PTR_FUN_11099b958;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(unaff_x19 + 8);
  return;
}



/* Entry: 1072cd3e8; end: 1072cd403;  */

void FUN_1072cd3e8(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_11099b958;
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 8);
  return;
}



/* Entry: 1072cd404; end: 1072cd497;  */

void FUN_1072cd404(void)

{
  long *unaff_x19;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x0001072ce940();
  (**(code **)(*unaff_x19 + 0x108))();
  if ((*(char *)(unaff_x20 + 9) == '\x01') && ((*(byte *)(unaff_x20 + 8) & 1) != 0)) {
    func_0x000100060b18(auStack_38,&PTR_DAT_11099b9b8);
    func_0x0001072d01c8();
    func_0x0001072cf668();
    func_0x0001072cf4e4(*(undefined8 *)(*unaff_x19 + 0x110));
    func_0x0001072cec0c();
    func_0x0001072cf958();
    func_0x0001072cecfc();
  }
  return;
}



/* Entry: 1072cd498; end: 1072cd4bf;  */

void FUN_1072cd498(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099b9c8);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072cd4c0; end: 1072cd4d3;  */

undefined ** FUN_1072cd4c0(void)

{
  return &PTR_DAT_11099b9c8;
}



/* Entry: 1072cd4d4; end: 1072cd4f3;  */

void FUN_1072cd4d4(undefined8 *param_1)

{
  func_0x0001072ceb0c();
  *param_1 = &PTR_DAT_11099b9e8;
  return;
}



/* Entry: 1072cd4f4; end: 1072cd533;  */

void FUN_1072cd4f4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_11099b9e8;
  return;
}



/* Entry: 1072cd534; end: 1072cd55b;  */

void FUN_1072cd534(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099ba48);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072cd55c; end: 1072cd56f;  */

undefined ** FUN_1072cd55c(void)

{
  return &PTR_DAT_11099ba48;
}



/* Entry: 1072cd570; end: 1072cd59f;  */

void FUN_1072cd570(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001072cf4dc();
  func_0x0001072cee44(&PTR_DAT_11099ba68);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 1072cd5a0; end: 1072cd5cf;  */

void FUN_1072cd5a0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_11099ba68;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1072cd5d0; end: 1072cd8ff;  */

void FUN_1072cd5d0(long param_1,long *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 ***pppuVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_x8;
  undefined8 uVar11;
  int *piVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_1c8 [40];
  int *piStack_1a0;
  int *piStack_198;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [24];
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined1 *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 **ppuStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [56];
  undefined1 auStack_48 [56];
  undefined8 uStack_10;
  
  func_0x0001072cfcb0();
  func_0x0001072ce328();
  auVar15._0_8_ = **(ulong **)(param_1 + 8) & 0xffffffff;
  auVar15._8_8_ = **(ulong **)(param_1 + 8) >> 0x20;
  auVar15 = NEON_ucvtf(auVar15,8);
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_170 = auVar15._8_8_;
  uStack_178 = auVar15._0_8_;
  uStack_10 = extraout_x8;
  _bzero(&puStack_130,0xe0);
  uStack_90 = 1;
  uStack_88 = 1;
  func_0x000100060964(auStack_48,"friends");
  FUN_1072cd934(auStack_1c8,auStack_48,1);
  func_0x000107299c44(auStack_80,auStack_1c8);
  puVar7 = &uStack_188;
  (**(code **)(*param_2 + 0x50))(&piStack_1a0,param_2,puVar7,&puStack_130);
  FUN_1072981bc(auStack_1c8);
  func_0x0001072cec14();
  FUN_1072997a8(&puStack_130);
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  puStack_130 = (undefined1 *)(((long)piStack_198 - (long)piStack_1a0) / 0x1b0);
  uStack_128 = 0;
  puVar2 = &UNK_10f40924a;
  func_0x0001003a91d4(&UNK_10f40924a);
  func_0x0001072ced20(uVar11,puVar2,puVar7,puVar7,&puStack_130);
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  for (piVar12 = piStack_1a0; uVar1 = piVar12 == piStack_198, !(bool)uVar1; piVar12 = piVar12 + 0x6c
      ) {
    FUN_10726236c(&puStack_130,piVar12 + 0xc);
    uVar8 = 0x1138369c0;
    FUN_107262398(auStack_48,&puStack_130);
    func_0x00010724b3d8(&puStack_130);
    if (*piVar12 == 6) {
      piVar3 = piVar12;
      func_0x000104c2d3c0();
      uVar14 = *(undefined8 *)piVar3;
      uVar13 = *(ulong *)(piVar3 + 2);
    }
    else {
      uVar13 = 0;
      uVar14 = 0;
    }
    puStack_130 = *(undefined1 **)(piVar12 + 0x4e);
    uStack_128 = *(undefined8 *)(piVar12 + 0x50);
    puStack_120 = &DAT_10f68f19e;
    uStack_118 = 2;
    ppuStack_150 = &puStack_130;
    pcStack_148 = FUN_106e535bc;
    func_0x0001003a91d4(&DAT_10f2fb62f);
    func_0x0001003a9204(auStack_1c8);
    if ((char)piVar12[0x6b] == '\x01') {
      puStack_130 = (undefined1 *)(ulong)*(byte *)(piVar12 + 0x68);
      puStack_120 = (undefined *)(ulong)(uint)piVar12[0x69];
      uStack_110 = (ulong)(uint)piVar12[0x6a];
      uStack_128 = 0;
      uStack_118 = 0;
      uStack_108 = 0;
      func_0x0001003a91d4(&UNK_10f409262);
      func_0x0001003a9204(&ppuStack_150);
    }
    else {
      func_0x0001072d03c8(&ppuStack_150);
      func_0x00010002b838();
    }
    FUN_10724ef84(auStack_168,auStack_48);
    puVar4 = auStack_168;
    func_0x0001005d466c();
    pppuVar5 = &ppuStack_150;
    uVar9 = uVar8;
    func_0x0001005d466c();
    puVar6 = auStack_1c8;
    uVar10 = uVar9;
    func_0x0001005d466c();
    uStack_118 = 0;
    uStack_108 = 0;
    puVar2 = &UNK_10f40926b;
    puStack_130 = puVar4;
    uStack_128 = uVar8;
    puStack_120 = (undefined *)uVar14;
    uStack_110 = uVar13;
    ppuStack_100 = pppuVar5;
    uStack_f8 = uVar9;
    puStack_f0 = puVar6;
    uStack_e8 = uVar10;
    func_0x0001003a91d4(&UNK_10f40926b);
    func_0x0001072ced80(uVar11,puVar2,uVar10,0xddaad,&puStack_130);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
    func_0x0001072ceea4();
    func_0x0001003ac718();
    func_0x0001072cec14();
  }
  func_0x00010ae7dc58(*(undefined8 *)(param_1 + 0x18));
  func_0x00010729d51c();
  func_0x0001072ce0cc(uStack_10);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010729d51c(&piStack_1a0);
    func_0x0001072ce900();
    func_0x0001072cea90();
    func_0x0001072cea04();
    func_0x0001072ce484();
    return;
  }
  return;
}



/* Entry: 1072cd900; end: 1072cd927;  */

void FUN_1072cd900(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099bac8);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072cd928; end: 1072cd933;  */

undefined ** FUN_1072cd928(void)

{
  return &PTR_DAT_11099bac8;
}



/* Entry: 1072cd934; end: 1072cd96b;  */

undefined8 FUN_1072cd934(undefined8 param_1)

{
  func_0x0001072d0320();
  FUN_1072cd96c();
  return param_1;
}



/* Entry: 1072cd96c; end: 1072cd99f;  */

void FUN_1072cd96c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001003ac100();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x38) {
    func_0x0001072cefcc();
    FUN_107298a08();
  }
  return;
}



/* Entry: 1072cd9a0; end: 1072cd9bf;  */

void FUN_1072cd9a0(void)

{
  func_0x0001072cfc8c();
  FUN_1072cd9c0();
  return;
}



/* Entry: 1072cd9c0; end: 1072cda07;  */

void FUN_1072cd9c0(void)

{
  undefined1 auStack_48 [40];
  
  func_0x0001003ac6c4();
  FUN_1072cd934(auStack_48);
  FUN_1072cda08();
  FUN_1072981bc(auStack_48);
  return;
}



/* Entry: 1072cda08; end: 1072cda1b;  */

void FUN_1072cda08(undefined8 param_1,long param_2)

{
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    if ((bRam00000001131ad260 & 1) == 0) {
      iVar1 = 0x131ad260;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_1072cdaa0(0x1131ad250);
        ___cxa_guard_release(0x1131ad260);
      }
    }
    func_0x0001072cfb08();
    if (extraout_x8 != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10 != 0);
    }
    return;
  }
  func_0x0001072cfc38(param_2);
  FUN_1072cdbd8();
  return;
}



/* Entry: 1072cda1c; end: 1072cda9f;  */

void FUN_1072cda1c(void)

{
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  
  if ((bRam00000001131ad260 & 1) == 0) {
    iVar1 = 0x131ad260;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1072cdaa0(0x1131ad250);
      ___cxa_guard_release(0x1131ad260);
    }
  }
  func_0x0001072cfb08();
  if (extraout_x8 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1072cdaa0; end: 1072cdabb;  */

void FUN_1072cdaa0(void)

{
  undefined1 uStack_11;
  
  FUN_1072cdabc(&uStack_11);
  return;
}



/* Entry: 1072cdabc; end: 1072cdb2f;  */

void FUN_1072cdabc(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x0001072ce294();
  func_0x0001072cf450();
  FUN_1072cdb30();
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_11099be48;
  puStack_30[1] = 0;
  puStack_30[8] = 0;
  puStack_30[7] = 0;
  puStack_30[4] = 0;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  *(undefined4 *)(puStack_30 + 7) = 0x3f800000;
  func_0x0001072ce344();
  func_0x0001072cdbac();
  func_0x0001072ce0cc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x0001072cfca4();
  FUN_1072cdb50();
  func_0x0001072cfbc0();
  return;
}


