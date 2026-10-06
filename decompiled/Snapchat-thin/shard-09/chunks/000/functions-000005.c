/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067dd8a4; end: 1067dd93f;  */

void FUN_1067dd8a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 1067dd940; end: 1067dd9d3; -[SCNTivRequestV2 initWithAppLandingPageProto:receiptType:] */

undefined1 * FUN_1067dd940(void)

{
  undefined1 *puVar1;
  undefined8 in_x3;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x0001067ddb98();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    _objc_release(uVar2);
    *(undefined8 *)(puVar1 + 0x10) = in_x3;
  }
  func_0x0001067ddb88();
  return puVar1;
}



/* Entry: 1067dd9d4; end: 1067ddacf; -[SCNTivRequestV2 isEqual:] */

bool FUN_1067dd9d4(void)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong unaff_x19;
  ulong unaff_x21;
  
  func_0x0001067ddb98();
  _objc_opt_class(PTR_PTR_1126ce258);
  uVar2 = unaff_x19;
  _objc_opt_isKindOfClass();
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain();
    uVar2 = unaff_x21;
    func_0x00010bf05820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf05820();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c071cc0();
    if ((int)uVar3 == 0) {
      bVar1 = false;
    }
    else {
      func_0x00010c1220e0();
      func_0x00010c1220e0();
      bVar1 = unaff_x21 == unaff_x19;
    }
    func_0x0001067ddb90();
    _objc_release(uVar2);
    func_0x0001067ddb88();
  }
  func_0x0001067ddb88();
  return bVar1;
}



/* Entry: 1067ddad0; end: 1067ddb6b; -[SCNTivRequestV2 hash] */

ulong FUN_1067ddad0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar2 = param_1;
  func_0x00010bf05820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010c1220e0(param_1);
  func_0x0001067ddb90();
  func_0x0001067ddb88();
  return uVar2 ^ uVar1 ^ param_1;
}



/* Entry: 1067ddb6c; end: 1067ddb73; -[SCNTivRequestV2 appLandingPageProto] */

undefined8 FUN_1067ddb6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1067ddb74; end: 1067ddb7b; -[SCNTivRequestV2 receiptType] */

undefined8 FUN_1067ddb74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1067ddb7c; end: 1067ddba7; -[SCNTivRequestV2 .cxx_destruct] */

void FUN_1067ddb7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067ddba8; end: 1067ddc73; -[SCNTivTransactionDescription initWithTitle:destination:] */

undefined1 *
FUN_1067ddba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f34a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  func_0x0001067dded4();
  func_0x0001067ddecc();
  return (undefined1 *)puVar1;
}



/* Entry: 1067ddc74; end: 1067dddc7; -[SCNTivTransactionDescription isEqual:] */

undefined8 FUN_1067ddc74(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ce290;
  _objc_opt_class(PTR_PTR_1126ce290);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    _objc_retain(param_3);
    uVar4 = param_1;
    func_0x00010c2711a0();
    iVar1 = (int)uVar4;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      func_0x00010bf6eb60(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6eb60(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010c0720c0(param_1);
      _objc_release(param_3);
      _objc_release(param_1);
    }
    func_0x0001067ddedc();
    func_0x0001067dded4();
    func_0x0001067ddecc();
  }
  func_0x0001067ddecc();
  return uVar4;
}



/* Entry: 1067dddc8; end: 1067dde8b; -[SCNTivTransactionDescription hash] */

ulong FUN_1067dddc8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar2 = param_1;
  func_0x00010c2711a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010bf6eb60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x0001067ddedc();
  func_0x0001067dded4();
  func_0x0001067ddecc();
  return uVar2 ^ uVar1 ^ param_1;
}



/* Entry: 1067dde8c; end: 1067dde93; -[SCNTivTransactionDescription title] */

undefined8 FUN_1067dde8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1067dde94; end: 1067dde9b; -[SCNTivTransactionDescription destination] */

undefined8 FUN_1067dde94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1067dde9c; end: 1067ddecb; -[SCNTivTransactionDescription .cxx_destruct] */

void FUN_1067dde9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067ddecc; end: 1067ddee3;  */

void FUN_1067ddecc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1067ddee4; end: 1067ddf5b;  */

undefined8 * FUN_1067ddee4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093e480;
  FUN_1067ddf5c();
  func_0x000100bbba78(param_1 + 0x19);
  func_0x000100bbb874(param_1 + 0x17);
  func_0x000100bbba9c(param_1 + 0x15);
  func_0x00010048d450(param_1 + 0x13);
  func_0x0001005544a0(param_1 + 0x11);
  func_0x000100450be4(param_1 + 0xf);
  func_0x000100bbbb4c(param_1 + 0xd);
  func_0x000100bbbb9c(param_1 + 0xb);
  func_0x000100bbbbc0(param_1 + 1);
  return param_1;
}



/* Entry: 1067ddf5c; end: 1067de02f;  */

undefined8 * FUN_1067ddf5c(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 0xd8) = 1;
  plVar2 = *(long **)(param_1 + 0x98);
  if (plVar2 != (long *)0x0) {
    func_0x00010096cd40();
    func_0x00010002b838(&pcStack_88);
    (**(code **)(*plVar2 + 0x20))(plVar2,&pcStack_88);
    func_0x0001067de3c0();
  }
  pcStack_88 = FUN_1067de364;
  ppuStack_80 = &PTR_FUN_11093e8e0;
  lStack_78 = param_1;
  (**(code **)(**(long **)(param_1 + 0x78) + 0x10))(*(long **)(param_1 + 0x78),&pcStack_88);
  func_0x0001067de3c8();
  puVar1 = *(undefined8 **)(param_1 + 0x78);
  func_0x00010bcceaec();
  func_0x000100bbbb2c(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x0001067de3c0();
  func_0x0001067de3ec();
  *puVar1 = &PTR_FUN_11093e480;
  FUN_1067ddf5c();
  func_0x000100bbba78(puVar1 + 0x19);
  func_0x000100bbb874(puVar1 + 0x17);
  func_0x000100bbba9c(puVar1 + 0x15);
  func_0x00010048d450(puVar1 + 0x13);
  func_0x0001005544a0(puVar1 + 0x11);
  func_0x000100450be4(puVar1 + 0xf);
  func_0x000100bbbb4c(puVar1 + 0xd);
  func_0x000100bbbb9c(puVar1 + 0xb);
  func_0x000100bbbbc0(puVar1 + 1);
  return puVar1;
}



/* Entry: 1067de030; end: 1067de033;  */

undefined8 * FUN_1067de030(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093e480;
  FUN_1067ddf5c();
  func_0x000100bbba78(param_1 + 0x19);
  func_0x000100bbb874(param_1 + 0x17);
  func_0x000100bbba9c(param_1 + 0x15);
  func_0x00010048d450(param_1 + 0x13);
  func_0x0001005544a0(param_1 + 0x11);
  func_0x000100450be4(param_1 + 0xf);
  func_0x000100bbbb4c(param_1 + 0xd);
  func_0x000100bbbb9c(param_1 + 0xb);
  func_0x000100bbbbc0(param_1 + 1);
  return param_1;
}



/* Entry: 1067de034; end: 1067de047;  */

void FUN_1067de034(void)

{
  FUN_1067ddee4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067de048; end: 1067de087;  */

void FUN_1067de048(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0xd8) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001067de064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))(*(long **)(param_1 + 0xb8),param_2,0);
  return;
}



/* Entry: 1067de088; end: 1067de09b;  */

void FUN_1067de088(void)

{
  func_0x0001067de0b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067de09c; end: 1067de0bf;  */

void FUN_1067de09c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067de3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1067de0c0; end: 1067de0d3;  */

void FUN_1067de0c0(void)

{
  FUN_1067de184();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067de0d4; end: 1067de0df;  */

void FUN_1067de0d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067de3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1067de0e0; end: 1067de0f3;  */

void FUN_1067de0e0(void)

{
  FUN_1067de158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067de0f4; end: 1067de157;  */

void FUN_1067de0f4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010002b838(auStack_38,"x-snap-route-tag");
    func_0x0001004b5d48(param_2,auStack_38,param_1 + 8);
    func_0x0001067de3c0();
  }
  return;
}



/* Entry: 1067de158; end: 1067de183;  */

undefined8 * FUN_1067de158(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11093e5d8;
  func_0x0001001148fc(param_1 + 1);
  return param_1;
}



/* Entry: 1067de184; end: 1067de193;  */

void FUN_1067de184(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11093e588;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1067de194; end: 1067de1a7;  */

void FUN_1067de194(void)

{
  func_0x0001067de1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067de1a8; end: 1067de1b3;  */

void FUN_1067de1a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067de3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1067de1b4; end: 1067de1c7;  */

void FUN_1067de1b4(void)

{
  func_0x0001067de1d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067de1c8; end: 1067de1ef;  */

void FUN_1067de1c8(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000100561f34();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1067de1f0; end: 1067de203;  */

void FUN_1067de1f0(void)

{
  func_0x0001067de20c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067de204; end: 1067de21b;  */

void FUN_1067de204(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067de3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1067de21c; end: 1067de22f;  */

void FUN_1067de21c(void)

{
  func_0x0001067de2d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067de230; end: 1067de23b;  */

void FUN_1067de230(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067de3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1067de23c; end: 1067de24f;  */

void FUN_1067de23c(void)

{
  FUN_1067de2c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067de250; end: 1067de25b;  */

void FUN_1067de250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067de3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1067de25c; end: 1067de26f;  */

void FUN_1067de25c(void)

{
  func_0x0001067de294();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067de270; end: 1067de2c3;  */

void FUN_1067de270(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined1 auStack_1d8 [40];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [112];
  undefined1 auStack_128 [40];
  long *plStack_100;
  undefined8 uStack_f8;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_28;
  
  func_0x00010044fab4();
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *param_3;
  if (lVar7 != 0) {
    plVar4 = *(long **)(param_2 + 0x10);
    lStack_90 = param_3[1];
    if (lStack_90 != 0) {
      plVar1 = (long *)(lStack_90 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_88 = &UNK_10b4a73f8;
    ppuStack_80 = &PTR_DAT_110cee278;
    if (lStack_90 != 0) {
      plVar1 = (long *)(lStack_90 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_98 = lVar7;
    lStack_78 = param_2;
    lStack_70 = lVar7;
    lStack_68 = lStack_90;
    (**(code **)(*plVar4 + 0x10))(plVar4,&puStack_88);
    (*(code *)*ppuStack_80)(&ppuStack_80);
    func_0x000105979594();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(&ppuStack_80);
  plVar4 = &lStack_98;
  func_0x000105979594();
  func_0x00010b4a7728();
  lVar7 = plVar4[2];
  plStack_100 = (long *)0x0;
  uStack_f8 = 0;
  __ZNSt3__15mutex4lockEv(lVar7 + 0x20);
  func_0x000107c3012c(&plStack_100,lVar7);
  __ZNSt3__15mutex6unlockEv(lVar7 + 0x20);
  if (plStack_100 != (long *)0x0) {
    puVar5 = (undefined8 *)(plVar4[3] + 8);
    (**(code **)*puVar5)(auStack_128);
    func_0x00010b4a771c();
    (**(code **)(extraout_x8 + 0x28))();
    if ((uint)puVar5 < 5) {
      uVar8 = *(undefined4 *)(&UNK_10e5b3d70 + ((ulong)puVar5 & 0xffffffff) * 4);
    }
    else {
      uVar8 = 3;
    }
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_00 + 0x30))();
    puVar6 = puVar5;
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_01 + 0x20))(auStack_1b0);
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_02 + 8))();
    func_0x000107c27bc0(auStack_1d8,auStack_128);
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_03 + 0x38))();
    uVar9 = param_1;
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_04 + 0x40))();
    uVar10 = uVar9;
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_05 + 0x48))();
    FUN_106af5b68(param_1,uVar9,uVar10,auStack_198,puVar5,auStack_1b0,puVar6,auStack_1d8,uVar8);
    func_0x000107c278e0(auStack_1d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b0);
    plVar1 = plStack_100;
    lVar7 = plVar4[4];
    lVar12 = plVar4[4];
    lVar11 = plVar4[3];
    puVar5 = (undefined8 *)0x30;
    __Znwm();
    puVar5[2] = 0;
    *puVar5 = &PTR_DAT_110cee238;
    puVar5[1] = 0;
    puStack_1e8 = puVar5 + 3;
    *puStack_1e8 = &PTR_DAT_110cee2a0;
    puVar5[5] = lVar12;
    puVar5[4] = lVar11;
    if (lVar7 != 0) {
      plVar4 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    puStack_1e0 = puVar5;
    (**(code **)(*plVar1 + 0x10))(plVar1,auStack_198,&puStack_1e8);
    FUN_106af61cc(&puStack_1e8);
    func_0x00010b4a7688(&uStack_1f8);
    func_0x00010b4a76b0(auStack_198);
    func_0x000107c278e0(auStack_128);
  }
  func_0x000107c28368(&plStack_100);
  return;
}



/* Entry: 1067de2c4; end: 1067de2e3;  */

void FUN_1067de2c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11093e760;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1067de2e4; end: 1067de2f7;  */

void FUN_1067de2e4(void)

{
  func_0x0001067de300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067de2f8; end: 1067de30f;  */

void FUN_1067de2f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067de3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1067de310; end: 1067de323;  */

void FUN_1067de310(void)

{
  func_0x0001067de32c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067de324; end: 1067de33b;  */

void FUN_1067de324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067de3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1067de33c; end: 1067de34f;  */

void FUN_1067de33c(void)

{
  func_0x0001067de358();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067de350; end: 1067de363;  */

void FUN_1067de350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067de3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1067de364; end: 1067de393;  */

void FUN_1067de364(long param_1)

{
  long lVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar1 = *(long *)(param_1 + 0x10);
  uStack_18 = *(undefined8 *)(lVar1 + 0xc0);
  uStack_20 = *(undefined8 *)(lVar1 + 0xb8);
  *(undefined8 *)(lVar1 + 0xb8) = 0;
  *(undefined8 *)(lVar1 + 0xc0) = 0;
  func_0x000100bbb874(&uStack_20);
  return;
}



/* Entry: 1067de394; end: 1067de3f3;  */

void FUN_1067de394(void)

{
  return;
}



/* Entry: 1067de3f4; end: 1067de8f7;  */

void FUN_1067de3f4(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined **ppuVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined1 auStack_438 [360];
  undefined1 auStack_2d0 [24];
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  int iStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  FUN_1067de8f8(auStack_2d0);
  plVar3 = (long *)*param_2;
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)0x0;
LAB_1067de45c:
    param_2 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x10))();
    param_2 = (long *)*param_2;
    if (param_2 == (long *)0x0) goto LAB_1067de45c;
    (**(code **)(*param_2 + 0x18))();
  }
  puVar4 = auStack_2d0;
  func_0x00010006369c(puVar4,plVar3,param_2);
  if (((ulong)puVar4 & 1) == 0) goto LAB_1067de7d8;
  FUN_1067de948(uStack_2b8,auStack_98);
  FUN_1067de948(uStack_2a0,auStack_b0);
  FUN_1067de948(uStack_2b0,auStack_c8);
  FUN_1067de948(uStack_2a8,auStack_e0);
  func_0x0001067de950(uStack_290);
  FUN_1067de948(*(undefined8 *)(extraout_x8 + 0x10),auStack_f8);
  func_0x0001067de950(uStack_290);
  FUN_1067de948(*(undefined8 *)(extraout_x8_00 + 0x18),auStack_110);
  func_0x0001067de950(uStack_288);
  FUN_1067de948(*(undefined8 *)(extraout_x8_01 + 0x18),&uStack_188);
  func_0x0001067de950(uStack_288);
  FUN_1067de948(*(undefined8 *)(extraout_x8_02 + 0x20),&uStack_1a0);
  func_0x0001067de950(uStack_288);
  FUN_1067de948(*(undefined8 *)(extraout_x8_03 + 0x28),&uStack_1b8);
  func_0x0001067de950(uStack_288);
  FUN_1067de948(*(undefined8 *)(extraout_x8_04 + 0x30),&uStack_1d0);
  uStack_160 = uStack_178;
  uStack_130 = uStack_1a8;
  uStack_168 = uStack_180;
  uStack_170 = uStack_188;
  uStack_178 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_150 = uStack_198;
  uStack_158 = uStack_1a0;
  uStack_148 = uStack_190;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_190 = 0;
  uStack_138 = uStack_1b0;
  uStack_140 = uStack_1b8;
  uStack_1a8 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_118 = uStack_1c0;
  uStack_120 = uStack_1c8;
  uStack_128 = uStack_1d0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1c0 = 0;
  iVar1 = iStack_258;
  if (2 < iStack_258 - 1U) {
    iVar1 = 0;
  }
  ppuVar5 = &PTR_PTR_113164eb8;
  if (ppuStack_280 != (undefined **)0x0) {
    ppuVar5 = ppuStack_280;
  }
  FUN_1067de948(ppuVar5[2],&uStack_218);
  ppuVar5 = &PTR_PTR_113164eb8;
  if (ppuStack_280 != (undefined **)0x0) {
    ppuVar5 = ppuStack_280;
  }
  FUN_1067de948(ppuVar5[3],&uStack_230);
  uStack_1f0 = uStack_208;
  uStack_1f8 = uStack_210;
  uStack_200 = uStack_218;
  uStack_208 = 0;
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_1d8 = uStack_220;
  uStack_1e0 = uStack_228;
  uStack_1e8 = uStack_230;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_220 = 0;
  ppuVar5 = &PTR_PTR_113165008;
  if (ppuStack_278 != (undefined **)0x0) {
    ppuVar5 = ppuStack_278;
  }
  if (*(int *)((long)ppuVar5 + 0x1c) == 1) {
    ppuVar8 = (undefined **)ppuVar5[2];
  }
  else {
    ppuVar8 = &PTR_PTR_113164ee0;
  }
  cVar2 = *(char *)(((ulong)ppuVar8[2] & 0xfffffffffffffffc) + 0x17);
  if (cVar2 < '\0') {
    if (*(long *)(((ulong)ppuVar8[2] & 0xfffffffffffffffc) + 8) != 0) goto LAB_1067de67c;
LAB_1067de694:
    uStack_250 = uStack_250 & 0xffffffffffffff00;
    uStack_238 = 0;
  }
  else {
    if (cVar2 == '\0') goto LAB_1067de694;
LAB_1067de67c:
    if (*(int *)((long)ppuVar5 + 0x1c) == 1) {
      ppuVar5 = (undefined **)ppuVar5[2];
    }
    else {
      ppuVar5 = &PTR_PTR_113164ee0;
    }
    puVar7 = (undefined8 *)((ulong)ppuVar5[2] & 0xfffffffffffffffc);
    lVar6 = (long)*(char *)((long)puVar7 + 0x17);
    if (lVar6 < 0) {
      lVar6 = puVar7[1];
      puVar7 = (undefined8 *)*puVar7;
    }
    func_0x00010069648c(&uStack_80,puVar7,(long)puVar7 + lVar6);
    uStack_248 = uStack_78;
    uStack_250 = uStack_80;
    uStack_240 = uStack_70;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_238 = 1;
    func_0x000100100fec();
  }
  FUN_1067dc3fc(auStack_438,auStack_98,auStack_b0,auStack_c8,auStack_e0,uStack_270,uStack_268,
                uStack_260,auStack_f8,auStack_110,&uStack_170,iVar1);
  func_0x0001002a2294(&uStack_250);
  func_0x0001067dadbc(&uStack_200);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_230);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_218);
  func_0x0001067dade0(&uStack_170);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_188);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),auStack_438,1);
  func_0x0001067dad64(auStack_438);
LAB_1067de7d8:
  FUN_1067e3f84(auStack_2d0);
  return;
}



/* Entry: 1067de8f8; end: 1067de903;  */

void FUN_1067de8f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093f500;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &DAT_11383d918;
  param_1[4] = &DAT_11383d918;
  param_1[5] = &DAT_11383d918;
  param_1[6] = &DAT_11383d918;
  param_1[7] = &DAT_11383d918;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  return;
}



/* Entry: 1067de904; end: 1067de917;  */

void FUN_1067de904(void)

{
  FUN_1067de918();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067de918; end: 1067de947;  */

undefined8 * FUN_1067de918(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11093e908;
  func_0x000100bbb874(param_1 + 1);
  return param_1;
}



/* Entry: 1067de948; end: 1067de95b;  */

void FUN_1067de948(ulong param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_2,param_1 & 0xfffffffffffffffc);
  return;
}



/* Entry: 1067de95c; end: 1067ded57;  */

void FUN_1067de95c(long param_1,long param_2,int param_3,ulong param_4)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined1 uStack_180;
  ulong uStack_170;
  ulong uStack_168;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [80];
  ulong uStack_c0;
  undefined1 uStack_b8;
  ulong uStack_b0;
  undefined1 uStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [24];
  
  uStack_220 = 0;
  uStack_218 = 0;
  iVar4 = param_3;
  func_0x0001067dfb60();
  uStack_228 = 0;
  uStack_210 = 0;
  puVar1 = &uStack_230;
  FUN_1067ded58(puVar1,iVar4 == 0);
  func_0x00010002b838(auStack_98,&UNK_10f398b80);
  if (param_4 < 0xb) {
    puVar5 = (&PTR_DAT_11093ec90)[param_4];
  }
  else if (param_4 - 0xb < 4) {
    puVar5 = &UNK_10f398b31;
  }
  else if (param_4 - 0x11 < 3) {
    puVar5 = &UNK_10f398b38;
  }
  else if (param_4 - 0x14 < 10) {
    puVar5 = &UNK_10f398b3f;
  }
  else if (param_4 - 0x1e < 10) {
    puVar5 = &UNK_10f398b46;
  }
  else if (param_4 - 0x28 < 10) {
    puVar5 = &UNK_10f398b4d;
  }
  else if (param_4 - 0x32 < 10) {
    puVar5 = &UNK_10f398b54;
  }
  else if (param_4 - 0x3c < 10) {
    puVar5 = &UNK_10f398b5b;
  }
  else if (param_4 - 0x46 < 10) {
    puVar5 = &UNK_10f398b62;
  }
  else if (param_4 - 0x50 < 10) {
    puVar5 = &UNK_10f398b69;
  }
  else {
    puVar5 = &UNK_10f398b70;
    if (10 < param_4 - 0x5a) {
      puVar5 = &UNK_10f398b78;
    }
  }
  FUN_1067ded8c(puVar1,auStack_98,puVar5);
  func_0x0001067df494(auStack_80,puVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  func_0x0001067dfc2c();
  func_0x0001067dfbd4(*(undefined8 *)(param_1 + 0x28));
  func_0x0001067dfbbc();
  FUN_1067df504(auStack_148);
  func_0x0001002a8234(auStack_110,param_2);
  func_0x0001002a8234(auStack_130,param_2 + 0x18);
  uStack_a0 = 2;
  if (param_3 != 1) {
    uStack_a0 = 0;
  }
  if (param_3 == 0) {
    uStack_a0 = 1;
  }
  uStack_9c = 1;
  plVar2 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar2 + 0x10))();
  uStack_c0 = (ulong)plVar2 / 1000;
  uStack_b8 = 1;
  uStack_a8 = 1;
  uStack_b0 = param_4;
  func_0x0001067dfbf8();
  func_0x0001067dfd40(auStack_148);
  func_0x0001067dfc44();
  func_0x00010044fab4();
  FUN_1067dede0(&uStack_170,auStack_148);
  uStack_228 = uStack_168;
  uStack_230 = uStack_170;
  uStack_170 = 0;
  uStack_168 = 0;
  func_0x00010b4a72ec(plVar2,&uStack_230);
  func_0x0001067dfc3c();
  FUN_1067df828(&uStack_170);
  func_0x0001067dfcac(&UNK_11093f310);
  uStack_150 = 0;
  func_0x0001001a53d4(auStack_158,param_2 + 0x18,0);
  uVar6 = uStack_168;
  if ((uStack_168 & 1) != 0) {
    uVar6 = *(ulong *)(uStack_168 & 0xfffffffffffffffe);
  }
  func_0x0001001a53d4(auStack_160,param_2,uVar6);
  uStack_230 = uStack_230 & 0xffffffffffffff00;
  uStack_180 = 0;
  puVar3 = (undefined8 *)0x38;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_11093eab0;
  func_0x00010002b838(auStack_58,&UNK_10f398b8a);
  puVar3[3] = &PTR_DAT_11093eb00;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar3 + 4,auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  uStack_250 = 0;
  uStack_248 = 0;
  puStack_240 = puVar3 + 3;
  puStack_238 = puVar3;
  func_0x0001067dfd4c();
  FUN_1067e2f48();
  func_0x0001067df8e8(&puStack_240);
  func_0x0001067df8c4(&uStack_250);
  func_0x0001067dfc34();
  FUN_1067e4ef0(&uStack_170);
  FUN_1067df57c(auStack_148);
  func_0x0001067df4e4(auStack_80);
  return;
}



/* Entry: 1067ded58; end: 1067ded8b;  */

void FUN_1067ded58(void)

{
  func_0x0001067dfb9c();
  func_0x0001067dfbe4();
  func_0x0001067dfce8();
  func_0x0001067dfb78();
  return;
}



/* Entry: 1067ded8c; end: 1067deddb;  */

undefined8 FUN_1067ded8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = param_3;
  func_0x0001067dfc10();
  _strlen(uVar1);
  FUN_1067df454(param_1,auStack_40,param_3,uVar1);
  func_0x0001067dfb84();
  return param_3;
}



/* Entry: 1067deddc; end: 1067deddf;  */

void FUN_1067deddc(void)

{
  func_0x0001067dfcc4();
  func_0x0001000e30f4();
  return;
}



/* Entry: 1067dede0; end: 1067dee03;  */

void FUN_1067dede0(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1067df634(&uStack_11,param_1);
  return;
}



/* Entry: 1067dee04; end: 1067deeb7;  */

void FUN_1067dee04(long param_1,undefined8 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [40];
  
  puVar1 = auStack_70;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x0001067dfb60();
  uStack_68 = 0;
  uStack_50 = 1;
  FUN_1067ded58(auStack_70,param_3 == 0);
  FUN_1067deeb8();
  func_0x0001067df494(auStack_48,puVar1);
  func_0x0001067dfd38();
  func_0x0001067dfbd4(*(undefined8 *)(param_1 + 0x28));
  func_0x0001067dfbbc();
  func_0x0001067df4e4(auStack_48);
  return;
}



/* Entry: 1067deeb8; end: 1067deeeb;  */

void FUN_1067deeb8(void)

{
  func_0x0001067dfb9c();
  func_0x0001067dfbe4();
  func_0x0001067dfce8();
  func_0x0001067dfb78();
  return;
}



/* Entry: 1067deeec; end: 1067df23b;  */

void FUN_1067deeec(long param_1,long param_2,undefined8 param_3,long param_4,int param_5)

{
  long lVar1;
  undefined ***pppuVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined **ppuStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined1 uStack_180;
  undefined **ppuStack_170;
  ulong uStack_168;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  long lStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [68];
  undefined4 uStack_c4;
  undefined1 uStack_c0;
  ushort uStack_bc;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [24];
  
  uStack_220 = 0;
  uStack_218 = 0;
  ppuStack_230 = &PTR_FUN_11093e9c0;
  uStack_228 = 0;
  uStack_210 = 2;
  func_0x00010002b838(auStack_b8,&DAT_10f398ba5);
  pppuVar2 = &ppuStack_230;
  FUN_1067df23c(pppuVar2,auStack_b8,param_3);
  func_0x0001067df494(auStack_a0,pppuVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
  func_0x0001067dfc2c();
  func_0x0001067dfbd4(*(undefined8 *)(param_1 + 0x28));
  func_0x0001067dfbbc();
  FUN_1067df5c0(auStack_140);
  uStack_bc = (ushort)param_3 | 0x100;
  uStack_c4 = 2;
  if (param_5 != 1) {
    uStack_c4 = 0;
  }
  if (param_5 == 0) {
    uStack_c4 = 1;
  }
  uStack_c0 = 1;
  func_0x0001002a8234(auStack_128,param_2 + 0x18);
  puVar3 = auStack_108;
  func_0x0001002a8234(puVar3,param_2);
  func_0x0001067dfbf8();
  func_0x0001067dfd40(auStack_140);
  func_0x0001067dfc44();
  func_0x00010044fab4();
  FUN_1067df288(&ppuStack_170,auStack_140);
  uStack_228 = uStack_168;
  ppuStack_230 = ppuStack_170;
  ppuStack_170 = (undefined **)0x0;
  uStack_168 = 0;
  func_0x00010b4a72ec(puVar3,&ppuStack_230);
  func_0x0001067dfc3c();
  FUN_1067dfa74(&ppuStack_170);
  func_0x0001067dfcac(&UNK_11093f3b0);
  lStack_150 = 0;
  uStack_148 = 0;
  func_0x0001001a53d4(auStack_158,param_2 + 0x18,0);
  uVar6 = uStack_168;
  if ((uStack_168 & 1) != 0) {
    uVar6 = *(ulong *)(uStack_168 & 0xfffffffffffffffe);
  }
  func_0x0001001a53d4(auStack_160,param_2,uVar6);
  uVar7 = 1;
  if (param_5 == 0) {
    uVar7 = 2;
  }
  uStack_148 = CONCAT44(uStack_148._4_4_,uVar7);
  plVar4 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar4 + 0x10))();
  lVar1 = (long)plVar4 - param_4;
  if ((long)plVar4 - param_4 < 1) {
    uStack_220 = 0;
    uStack_218 = 0;
    ppuStack_230 = &PTR_FUN_11093e9c0;
    uStack_228 = 0;
    uStack_210 = 6;
    func_0x0001067dfbd4(*(undefined8 *)(param_1 + 0x28));
    func_0x0001067dfbbc();
    func_0x0001067dfc2c();
    lVar1 = lStack_150;
  }
  lStack_150 = lVar1;
  ppuStack_230 = (undefined **)((ulong)ppuStack_230 & 0xffffffffffffff00);
  uStack_180 = 0;
  puVar5 = (undefined8 *)0x38;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_11093ebd0;
  func_0x00010002b838(auStack_78,&UNK_10f398bb0);
  puVar5[3] = &PTR_DAT_11093ec20;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar5 + 4,auStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  uStack_250 = 0;
  uStack_248 = 0;
  puStack_240 = puVar5 + 3;
  puStack_238 = puVar5;
  func_0x0001067dfd4c();
  FUN_1067e306c();
  func_0x0001067dfb34(&puStack_240);
  func_0x0001067dfb10(&uStack_250);
  func_0x0001067dfc34();
  FUN_1067e4b7c(&ppuStack_170);
  FUN_1067df57c(auStack_140);
  func_0x0001067df4e4(auStack_a0);
  return;
}



/* Entry: 1067df23c; end: 1067df287;  */

void FUN_1067df23c(void)

{
  func_0x0001067dfc10();
  FUN_1067ded8c();
  func_0x0001067dfb84();
  return;
}



/* Entry: 1067df288; end: 1067df2ab;  */

void FUN_1067df288(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1067df90c(&uStack_11,param_1);
  return;
}



/* Entry: 1067df2ac; end: 1067df33f;  */

void FUN_1067df2ac(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined1 auStack_38 [24];
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  uStack_50 = 0;
  uStack_48 = 0;
  uVar1 = param_2;
  func_0x0001067dfb60();
  uStack_58 = 0;
  uStack_40 = 3;
  func_0x00010002b838(auStack_38,(&PTR_DAT_113164e48)[uVar1 >> 0x10 & 0xffff]);
  func_0x0001067dfbe4();
  FUN_1067ded8c(auStack_60,auStack_38);
  func_0x0001067dfcf4();
  func_0x0001067dfbbc(*(undefined8 *)(*(long *)*puVar2 + 8),(long *)*puVar2,param_2);
  func_0x0001067dfd38();
  return;
}



/* Entry: 1067df340; end: 1067df3a3;  */

void FUN_1067df340(long param_1,int param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x0001067dfb60();
  uStack_40 = 0;
  uStack_28 = 4;
  puVar1 = auStack_48;
  FUN_1067ded58(puVar1,param_2 == 0);
  func_0x0001067dfbbc(*(undefined8 *)(*(long *)*puVar2 + 8),(long *)*puVar2,puVar1);
  func_0x0001067dfc4c();
  return;
}



/* Entry: 1067df3a4; end: 1067df407;  */

void FUN_1067df3a4(long param_1,int param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x0001067dfb60();
  uStack_40 = 0;
  uStack_28 = 5;
  puVar1 = auStack_48;
  FUN_1067ded58(puVar1,param_2 == 0);
  func_0x0001067dfbbc(*(undefined8 *)(*(long *)*puVar2 + 8),(long *)*puVar2,puVar1);
  func_0x0001067dfc4c();
  return;
}



/* Entry: 1067df408; end: 1067df40b;  */

undefined8 * FUN_1067df408(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093e948;
  func_0x0001009ba2dc(param_1 + 6);
  func_0x0001009ba308(param_1 + 3);
  func_0x000100bbbb4c(param_1 + 1);
  return param_1;
}



/* Entry: 1067df40c; end: 1067df433;  */

void FUN_1067df40c(void)

{
  FUN_1067df5f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067df434; end: 1067df453;  */

undefined4 FUN_1067df434(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 1067df454; end: 1067df503;  */

long FUN_1067df454(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x0001000fecf4(param_1 + 8);
  func_0x0001004c38a0(param_1 + 8,&uStack_30);
  return param_1;
}



/* Entry: 1067df504; end: 1067df547;  */

void FUN_1067df504(long param_1)

{
  FUN_1067df548();
  func_0x0001067dfbc4(&UNK_110cefc08);
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  return;
}



/* Entry: 1067df548; end: 1067df57b;  */

void FUN_1067df548(long param_1)

{
  func_0x0001067dfbc4(&UNK_110cefb70);
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}



/* Entry: 1067df57c; end: 1067df5bf;  */

undefined8 * FUN_1067df57c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cefb80;
  param_1[1] = &PTR_DAT_110cefbe8;
  func_0x0001001148fc(param_1 + 0xb);
  func_0x0001001148fc(param_1 + 7);
  func_0x0001001148fc(param_1 + 3);
  return param_1;
}



/* Entry: 1067df5c0; end: 1067df5ef;  */

void FUN_1067df5c0(long param_1)

{
  FUN_1067df548();
  func_0x0001067dfbc4(&UNK_110cefce8);
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined2 *)(param_1 + 0x84) = 0;
  return;
}



/* Entry: 1067df5f0; end: 1067df633;  */

undefined8 * FUN_1067df5f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093e948;
  func_0x0001009ba2dc(param_1 + 6);
  func_0x0001009ba308(param_1 + 3);
  func_0x000100bbbb4c(param_1 + 1);
  return param_1;
}



/* Entry: 1067df634; end: 1067df693;  */

undefined1 * FUN_1067df634(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 unaff_x20;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  
  puVar1 = auStack_40;
  func_0x0001067dfc60();
  FUN_1067df694(auStack_40,1);
  FUN_1067df6ec();
  func_0x0001067dfc94();
  func_0x0001067df818();
  func_0x0001067dfc7c();
  if ((bool)in_ZR) {
    return puStack_30;
  }
  ___stack_chk_fail();
  func_0x0001067df818();
  func_0x0001067dfb70();
  *(undefined8 *)(puVar1 + 8) = unaff_x20;
  puVar2 = puVar1;
  FUN_1067df6bc();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 1067df694; end: 1067df6bb;  */

long FUN_1067df694(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1067df6bc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1067df6bc; end: 1067df6eb;  */

undefined8 * FUN_1067df6bc(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x147ae147ae147af) {
    puVar1 = (undefined8 *)(param_2 * 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11093ea60;
  param_1[1] = 0;
  FUN_1067df748(param_1 + 3);
  return param_1;
}



/* Entry: 1067df6ec; end: 1067df727;  */

undefined8 * FUN_1067df6ec(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11093ea60;
  param_1[1] = 0;
  FUN_1067df748(param_1 + 3);
  return param_1;
}



/* Entry: 1067df728; end: 1067df72b;  */

void FUN_1067df728(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093ea60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1067df72c; end: 1067df73f;  */

void FUN_1067df72c(void)

{
  FUN_1067df808();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067df740; end: 1067df747;  */

void FUN_1067df740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067dfd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 1067df748; end: 1067df78f;  */

void FUN_1067df748(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_1067df790();
  func_0x0001067dfbc4(&UNK_110cefc08);
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  uVar4 = *(undefined8 *)(param_2 + 0x90);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  uVar6 = *(undefined8 *)(param_2 + 0xa0);
  uVar5 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa5) = *(undefined8 *)(param_2 + 0xa5);
  *(undefined8 *)(param_1 + 0xa0) = uVar6;
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  *(undefined8 *)(param_1 + 0x90) = uVar4;
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  return;
}



/* Entry: 1067df790; end: 1067df807;  */

long FUN_1067df790(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  lVar2 = param_2;
  func_0x0001067dfbc4(&UNK_110cefb70);
  *(undefined1 *)(lVar1 + 0x10) = *(undefined1 *)(lVar2 + 0x10);
  func_0x00010028af84(lVar1 + 0x18,lVar2 + 0x18);
  func_0x00010028af84(param_1 + 0x38,param_2 + 0x38);
  func_0x00010028af84(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



/* Entry: 1067df808; end: 1067df827;  */

void FUN_1067df808(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093ea60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1067df828; end: 1067df84b;  */

void FUN_1067df828(long param_1)

{
  func_0x0001067dfc54();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1067df84c; end: 1067df84f;  */

void FUN_1067df84c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093eab0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1067df850; end: 1067df863;  */

void FUN_1067df850(void)

{
  FUN_1067df8b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067df864; end: 1067df86f;  */

void FUN_1067df864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067dfd34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1067df870; end: 1067df883;  */

void FUN_1067df870(void)

{
  FUN_1067df88c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067df884; end: 1067df88b;  */

void FUN_1067df884(void)

{
  return;
}



/* Entry: 1067df88c; end: 1067df8b7;  */

undefined8 * FUN_1067df88c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11093eb00;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 1067df8b8; end: 1067df8c3;  */

void FUN_1067df8b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093eab0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1067df8c4; end: 1067df90b;  */

void FUN_1067df8c4(long param_1)

{
  func_0x0001067dfc54();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1067df90c; end: 1067df96b;  */

undefined1 * FUN_1067df90c(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 unaff_x20;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  
  puVar1 = auStack_40;
  func_0x0001067dfc60();
  FUN_1067df96c(auStack_40,1);
  FUN_1067df9c0();
  func_0x0001067dfc94();
  func_0x0001067dfa64();
  func_0x0001067dfc7c();
  if ((bool)in_ZR) {
    return puStack_30;
  }
  ___stack_chk_fail();
  func_0x0001067dfa64();
  func_0x0001067dfb70();
  *(undefined8 *)(puVar1 + 8) = unaff_x20;
  puVar2 = puVar1;
  FUN_1067df994();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 1067df96c; end: 1067df993;  */

long FUN_1067df96c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1067df994();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1067df994; end: 1067df9bf;  */

undefined8 * FUN_1067df994(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x19999999999999a) {
    puVar1 = (undefined8 *)(param_2 * 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11093eb80;
  param_1[1] = 0;
  FUN_1067dfa1c(param_1 + 3);
  return param_1;
}



/* Entry: 1067df9c0; end: 1067df9fb;  */

undefined8 * FUN_1067df9c0(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11093eb80;
  param_1[1] = 0;
  FUN_1067dfa1c(param_1 + 3);
  return param_1;
}



/* Entry: 1067df9fc; end: 1067df9ff;  */

void FUN_1067df9fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093eb80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1067dfa00; end: 1067dfa13;  */

void FUN_1067dfa00(void)

{
  FUN_1067dfa54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


