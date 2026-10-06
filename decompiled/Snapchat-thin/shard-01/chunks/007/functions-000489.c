/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10141b910; end: 10141b94b;  */

void FUN_10141b910(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10141b94c; end: 10141b95b;  */

/* WARNING: Possible PIC construction at 0x00010141bcb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010141bcb4) */

void FUN_10141b94c(void)

{
  func_0x000107c6157c();
  func_0x0001001ca524(0,0,0x94,4,0,0,&UNK_10d93c328);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 10141b95c; end: 10141b9e7;  */

void FUN_10141b95c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar1;
  lVar2 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x60) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10141b9e8,0,0);
  return;
}



/* Entry: 10141b9e8; end: 10141bbf7;  */

void FUN_10141b9e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x40);
  lVar4 = *(long *)(unaff_x22 + 0x40);
  lVar5 = lVar4;
  func_0x000107c5c1ac();
  func_0x000107c61180();
  func_0x000107c615e8(lVar4);
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
    lVar4 = *(long *)(unaff_x22 + 0x68);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar1 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    func_0x000107c5edd0(uVar7,lVar1,param_2);
    func_0x000107c6142c(param_2);
    (**(code **)(lVar4 + 0x30))(uVar7,1,uVar6);
    if ((int)uVar7 == 1) {
      func_0x0001000293e4(*(undefined8 *)(unaff_x22 + 0x58));
    }
    else {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
      (**(code **)(*(long *)(unaff_x22 + 0x68) + 0x20))
                (uVar6,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
      func_0x0001000d224c(unaff_x22 + 0x48);
      lVar5 = *(long *)(unaff_x22 + 0x48);
      if (lVar5 != 0) {
        uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
        func_0x000107c5ed90();
        puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
        puVar3 = puVar2;
        func_0x000107c5f9dc();
        func_0x000107c6142c(puVar2);
        puVar2 = &UNK_1103b4e78;
        func_0x000107c613fc(&UNK_1103b4e78,0x18,7);
        func_0x000107c61644(puVar2 + 0x10,uVar7);
        *(code **)(unaff_x22 + 0x30) = FUN_10141bdc4;
        *(undefined **)(unaff_x22 + 0x38) = puVar2;
        *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
        *(undefined8 *)(unaff_x22 + 0x20) = 0x1010f39c4;
        *(undefined **)(unaff_x22 + 0x28) = &UNK_1103b4e90;
        lVar4 = unaff_x22 + 0x10;
        func_0x000107c60bc4(lVar4);
        func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
        func_0x000107c4462c(lVar5);
        func_0x000107c60bd0(lVar4);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(uVar6);
        func_0x000107c615e8(lVar5);
      }
      (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))
                (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x60));
    }
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010141bbf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10141bbf8; end: 10141bc3f;  */

void FUN_10141bbf8(void)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10141bef4;
  plVar3[10] = unaff_x20;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0xb] = uVar1;
  lVar2 = 0;
  func_0x000107c5ede0();
  plVar3[0xc] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar3[0xd] = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0xe] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10141b9e8,0,0);
  return;
}



/* Entry: 10141bc40; end: 10141bc4f;  */

/* WARNING: Possible PIC construction at 0x00010141bcb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010141bcb4) */

void FUN_10141bc40(void)

{
  func_0x000107c6157c();
  func_0x0001001ca524(1,0,0x94,4,0,0,&UNK_10d93c338);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 10141bc50; end: 10141bccb;  */

/* WARNING: Possible PIC construction at 0x00010141bcb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010141bcb4) */

void FUN_10141bc50(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c6157c();
  func_0x0001001ca524(param_1,0,0x94,4,0,0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 10141bccc; end: 10141bce3;  */

void FUN_10141bccc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10141bce4,0,0);
  return;
}



/* Entry: 10141bce4; end: 10141bdc3;  */

void FUN_10141bce4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c504e8(uVar1);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010141bd2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10141bdc4; end: 10141be53;  */

void FUN_10141bdc4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c6157c();
    func_0x0001001ca524(1,0,0x94,4,0,0,&UNK_10d93c360,lVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574();
    func_0x000107c61578(lVar1,2);
  }
  return;
}



/* Entry: 10141be54; end: 10141be6f;  */

void FUN_10141be54(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10141be70; end: 10141bef3;  */

void FUN_10141be70(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10141beb8;
  plVar1[3] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10141bce4,0,0);
  return;
}



/* Entry: 10141bef4; end: 10141befb;  */

void FUN_10141bef4(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010141bef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10141befc; end: 10141bfd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141befc(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar2 = _DAT_112d7e0e0;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  puVar3 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c610f8();
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef3e240);
  func_0x000107c48b70();
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + _DAT_112d7e0e8) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7e0f0);
  *puVar1 = 0xd000000000000017;
  puVar1[1] = 0x800000010ef3e260;
  FUN_10141c988();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10141bfd4; end: 10141bff3; -[SCAppClipSharedUserDefaults init] */

void FUN_10141bfd4(void)

{
  FUN_10141befc();
  return;
}



/* Entry: 10141bff4; end: 10141c0a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141bff4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  uVar1 = 0x6b6e696c70656564;
  if (param_2 != 0) {
    uVar1 = 0x6e776f6e6b6e75;
  }
  uVar2 = 0xeb000000006c7255;
  if (param_2 != 0) {
    uVar2 = 0xe700000000000000;
  }
  func_0x0001000bb420(param_1,auStack_50);
  func_0x000107c61428(unaff_x20 + _DAT_112d7e0e0,auStack_68,0x21,0);
  func_0x000100102934(auStack_50,uVar1,uVar2);
  func_0x000107c614a8(auStack_68);
  FUN_10141c0a4();
  return;
}



/* Entry: 10141c0a4; end: 10141c25f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141c0a4(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *puVar8;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(unaff_x20 + _DAT_112d7e0e8);
  puVar4 = unaff_x20;
  if (lVar7 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x000107c61168();
    lVar2 = _DAT_112d7e0e0;
    func_0x000107c61428(unaff_x20 + _DAT_112d7e0e0,auStack_60,0,0);
    puVar8 = *(undefined **)(unaff_x20 + lVar2);
    func_0x000107c61434(puVar8);
    func_0x000107c61174();
    puVar4 = puVar8;
    puVar5 = PTR___sSSN_11034da80;
    func_0x000107c5f9dc(puVar8,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar8);
    puStack_68 = (undefined *)0x0;
    param_4 = (undefined *)0x0;
    param_3 = puVar4;
    func_0x000107c3e100();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar4 = puStack_68;
    func_0x000107c61174();
    if (puVar3 == (undefined *)0x0) {
      unaff_x21 = puVar4;
      func_0x000107c5ed30();
      func_0x000107c61170(puVar4);
      func_0x000107c61654();
      func_0x000107c61170(lVar7);
      param_1 = unaff_x21;
      func_0x000107c614ac(unaff_x21);
      unaff_x22 = unaff_x21;
    }
    else {
      unaff_x22 = puVar3;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar3);
      unaff_x21 = unaff_x22;
      func_0x000107c5ee20(unaff_x22,puVar5);
      puVar4 = *(undefined **)(unaff_x20 + _DAT_112d7e0f0);
      func_0x000107c5fadc(puVar4,*(undefined8 *)((long)(unaff_x20 + _DAT_112d7e0f0) + 8));
      param_3 = unaff_x21;
      param_4 = puVar4;
      func_0x000107c56bcc(lVar7);
      func_0x000107c61170(unaff_x21);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(lVar7);
      param_1 = unaff_x22;
      func_0x00010006c090(unaff_x22,puVar5);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  pcStack_78 = FUN_10141c260;
  puStack_a0 = unaff_x22;
  puStack_98 = unaff_x21;
  puStack_90 = puVar4;
  lStack_88 = lVar7;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_c0,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = 0x6b6e696c70656564;
  if (param_4 != (undefined *)0x0) {
    uVar1 = 0x6e776f6e6b6e75;
  }
  uVar6 = 0xeb000000006c7255;
  if (param_4 != (undefined *)0x0) {
    uVar6 = 0xe700000000000000;
  }
  func_0x0001000bb420(auStack_c0,auStack_e0);
  func_0x000107c61428(param_1 + _DAT_112d7e0e0,auStack_f8,0x21,0);
  func_0x000100102934(auStack_e0,uVar1,uVar6);
  func_0x000107c614a8(auStack_f8);
  FUN_10141c0a4();
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_c0);
  return;
}



/* Entry: 10141c260; end: 10141c353; -[SCAppClipSharedUserDefaults set:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141c260(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = 0x6b6e696c70656564;
  if (param_4 != 0) {
    uVar1 = 0x6e776f6e6b6e75;
  }
  uVar2 = 0xeb000000006c7255;
  if (param_4 != 0) {
    uVar2 = 0xe700000000000000;
  }
  func_0x0001000bb420(auStack_50,auStack_70);
  func_0x000107c61428(param_1 + _DAT_112d7e0e0,auStack_88,0x21,0);
  func_0x000100102934(auStack_70,uVar1,uVar2);
  func_0x000107c614a8(auStack_88);
  FUN_10141c0a4();
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10141c354; end: 10141c3c3;  */

undefined1  [16] FUN_10141c354(void)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [24];
  long lStack_18;
  
  iVar1 = (int)&uStack_40;
  FUN_10141c3c4(auStack_30);
  if (lStack_18 == 0) {
    func_0x00010006e7f4(auStack_30);
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x000107c6147c(&uStack_40,auStack_30,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (iVar1 == 0) {
      uStack_40 = 0;
      uStack_38 = 0;
    }
  }
  auVar2._8_8_ = uStack_38;
  auVar2._0_8_ = uStack_40;
  return auVar2;
}



/* Entry: 10141c3c4; end: 10141c713;  */

/* WARNING: Removing unreachable block (ram,0x00010141c5f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141c3c4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  long lVar9;
  long alStack_b0 [5];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar9 = _DAT_112d7e0e0;
  lVar4 = 0x6b6e696c70656564;
  if (param_2 != 0) {
    lVar4 = 0x6e776f6e6b6e75;
  }
  uVar7 = 0xeb000000006c7255;
  if (param_2 != 0) {
    uVar7 = 0xe700000000000000;
  }
  func_0x000107c61428(unaff_x20 + _DAT_112d7e0e0,auStack_88,0,0);
  uVar8 = *(ulong *)(unaff_x20 + lVar9);
  if (*(long *)(uVar8 + 0x10) == 0) {
    alStack_b0[1] = 0;
    alStack_b0[0] = 0;
    alStack_b0[3] = 0;
    alStack_b0[2] = 0;
    uVar8 = uVar7;
  }
  else {
    func_0x000107c61434(uVar8);
    lVar9 = lVar4;
    uVar5 = uVar7;
    func_0x000100029284(lVar4);
    if ((uVar5 & 1) == 0) {
      alStack_b0[1] = 0;
      alStack_b0[0] = 0;
      alStack_b0[3] = 0;
      alStack_b0[2] = 0;
    }
    else {
      func_0x0001000bb420(*(long *)(uVar8 + 0x38) + lVar9 * 0x20,alStack_b0);
    }
    func_0x000107c6142c(uVar7);
  }
  func_0x000107c6142c(uVar8);
  if (alStack_b0[3] != 0) {
    func_0x000100102924(alStack_b0,auStack_70);
    func_0x000100102924(auStack_70,param_1);
    return;
  }
  func_0x00010006e7f4(alStack_b0);
  lVar9 = *(long *)(unaff_x20 + _DAT_112d7e0e8);
  if (lVar9 == 0) {
LAB_10141c610:
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  uVar6 = 0x800000010ef3e260;
  uVar1 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef3e260);
  func_0x000107c41238();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (lVar9 == 0) goto LAB_10141c610;
  lVar2 = lVar9;
  func_0x000107c5ee30(lVar9);
  func_0x000107c61170(lVar9);
  FUN_10141c9a8(0,0x112d7e120,&PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
  lVar9 = 0x112d7e128;
  func_0x0001000285a8(0x112d7e128,&UNK_10d93c3b0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar9 + 0x18) = 6;
  *(undefined8 *)(lVar9 + 0x10) = 3;
  uVar1 = 0;
  FUN_10141c9a8(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
  *(undefined8 *)(lVar9 + 0x20) = uVar1;
  uVar1 = 0;
  FUN_10141c9a8(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
  *(undefined8 *)(lVar9 + 0x28) = uVar1;
  uVar1 = 0;
  FUN_10141c9a8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar9 + 0x30) = uVar1;
  func_0x000107c5ffa8(auStack_70,lVar9,lVar2,uVar6);
  func_0x000107c61574(lVar9);
  if (lStack_58 == 0) {
    func_0x00010006c090(lVar2,uVar6);
    func_0x00010006e7f4(auStack_70);
    goto LAB_10141c610;
  }
  uVar1 = 0x112d472a8;
  func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
  plVar3 = alStack_b0;
  func_0x000107c6147c(plVar3,auStack_70,PTR___sypN_11034f1a8 + 8,uVar1,6);
  lVar9 = alStack_b0[0];
  if (((ulong)plVar3 & 1) == 0) {
    func_0x00010006c090(lVar2,uVar6);
    goto LAB_10141c610;
  }
  if (*(long *)(alStack_b0[0] + 0x10) != 0) {
    func_0x000107c61434(alStack_b0[0]);
    uVar8 = uVar7;
    func_0x000100029284(lVar4);
    if ((uVar8 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar9 + 0x38) + lVar4 * 0x20,param_1);
      func_0x000107c6142c(lVar9);
      goto LAB_10141c6f4;
    }
    func_0x000107c6142c(lVar9);
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
LAB_10141c6f4:
  func_0x00010006c090(lVar2,uVar6);
  func_0x000107c6142c(lVar9);
  func_0x000107c6142c(uVar7);
  return;
}



/* Entry: 10141c714; end: 10141c7af; -[SCAppClipSharedUserDefaults stringForKey:] */

void FUN_10141c714(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [24];
  long lStack_28;
  
  uVar1 = 0;
  func_0x000107c61174();
  FUN_10141c3c4(auStack_40,param_3);
  func_0x000107c61170(param_1);
  if (lStack_28 == 0) {
    func_0x00010006e7f4(auStack_40);
  }
  else {
    func_0x000107c6147c(&uStack_50,auStack_40,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((uVar1 & 1) != 0) {
      uVar2 = uStack_50;
      func_0x000107c5fadc(uStack_50,uStack_48);
      func_0x000107c6142c(uStack_48);
      goto LAB_10141c7a0;
    }
  }
  uVar2 = 0;
LAB_10141c7a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10141c7b0; end: 10141c853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141c7b0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84();
  lVar3 = _DAT_112d7e0e0;
  func_0x000107c61428(unaff_x20 + _DAT_112d7e0e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  func_0x000107c6142c(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7e0e8);
  if (lVar3 != 0) {
    uVar2 = 0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010ef3e260);
    func_0x000107c4ff88(lVar3);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10141c854; end: 10141c90b; -[SCAppClipSharedUserDefaults reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141c854(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61174();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84();
  lVar3 = _DAT_112d7e0e0;
  func_0x000107c61428(param_1 + _DAT_112d7e0e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  func_0x000107c6142c(uVar2);
  lVar4 = *(long *)(param_1 + _DAT_112d7e0e8);
  lVar3 = param_1;
  if (lVar4 != 0) {
    lVar3 = -0x2fffffffffffffe9;
    func_0x000107c5fadc(0xd000000000000017,0x800000010ef3e260);
    func_0x000107c4ff88(lVar4);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 10141c90c; end: 10141c93b;  */

void FUN_10141c90c(void)

{
  FUN_10141c988();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10141c93c; end: 10141c987; -[SCAppClipSharedUserDefaults .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010141c96c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010141c970) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141c93c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7e0e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d7e0f0 + 8))
  ;
  return;
}



/* Entry: 10141c988; end: 10141c9a7;  */

void FUN_10141c988(void)

{
  func_0x000107c61168(&PTR_PTR_1127d4540);
  return;
}



/* Entry: 10141c9a8; end: 10141c9e7;  */

void FUN_10141c9a8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10141c9e8; end: 10141c9ff;  */

bool FUN_10141c9e8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10141ca00; end: 10141ca3f;  */

void FUN_10141ca00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7e130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93c3c0;
  func_0x000107c61520(&UNK_10d93c3c0,&UNK_1103b4f38);
  puRam0000000112d7e130 = puVar1;
  return;
}



/* Entry: 10141ca40; end: 10141caeb;  */

void FUN_10141ca40(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10141caec; end: 10141cb1f;  */

void FUN_10141caec(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = 0;
  *(bool *)(param_1 + 1) = lVar1 != 0;
  return;
}



/* Entry: 10141cb20; end: 10141cb6b;  */

undefined8 FUN_10141cb20(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10141cb6c(param_1,param_2);
  return unaff_x20;
}



/* Entry: 10141cb6c; end: 10141cd0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141cb6c(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = param_2;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(param_1 + _DAT_112e62050);
      uVar7 = puVar1[1];
      uVar9 = puVar1[1];
      uVar8 = *puVar1;
      puVar4 = PTR_PTR_1126a6d28;
      func_0x000107c610f8(PTR_PTR_1126a6d28);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_1103b5020;
      ppuVar5 = &puStack_80;
      uStack_60 = uVar8;
      uStack_58 = uVar9;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c6157c(uVar7);
      func_0x000107c47c38(puVar4);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61574(uStack_58);
      puVar6 = PTR_PTR_1126a6d30;
      func_0x000107c610f8(PTR_PTR_1126a6d30);
      func_0x000107c49520();
      uVar7 = *(undefined8 *)(param_1 + _DAT_112e62048);
      func_0x000107c615f0(uVar7);
      func_0x000107c3e2c8();
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(param_1);
      func_0x000107c615e8(uVar7);
      goto LAB_10141cce8;
    }
  }
  func_0x000107c61170(param_1);
LAB_10141cce8:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10141cd10; end: 10141cd47;  */

void FUN_10141cd10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10141cd48; end: 10141cd67;  */

void FUN_10141cd48(void)

{
  func_0x000107c61168(&PTR_PTR_112d7e178);
  return;
}



/* Entry: 10141cd68; end: 10141cda7;  */

void FUN_10141cd68(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  FUN_10141cda8(param_1,param_2);
  return;
}



/* Entry: 10141cda8; end: 10141cf53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10141cda8(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  ulong uStack_68;
  
  func_0x000107c614f0();
  *(long *)(unaff_x20 + _DAT_112d7e1d0) = param_1;
  func_0x000107c61174();
  lVar5 = param_2;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar2 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar2;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
  }
  *(long *)(unaff_x20 + _DAT_112d7e1d8) = lVar5;
  puVar3 = &stack0xffffffffffffffa0;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  uStack_68 = *(ulong *)(param_1 + _DAT_112e62088);
  if (uStack_68 < 2) {
    uVar4 = *(undefined8 *)(*(long *)(puVar3 + _DAT_112d7e1d0) + _DAT_112e62080);
    func_0x000107c61174(puVar3);
    func_0x000107c615f0(uVar4);
    FUN_10141d140();
  }
  else {
    if (uStack_68 != 2) {
      func_0x000107c61174(puVar3);
      func_0x000107c60614(&UNK_1104dd810,&uStack_68,&UNK_1104dd810,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10141cf54);
      (*pcVar1)();
    }
    uVar4 = *(undefined8 *)(*(long *)(puVar3 + _DAT_112d7e1d0) + _DAT_112e62080);
    func_0x000107c61174(puVar3);
    func_0x000107c615f0(uVar4);
    FUN_10141cf54();
  }
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return puVar3;
}



/* Entry: 10141cf54; end: 10141d13f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141cf54(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar6 = &puStack_d0;
  lVar7 = *(long *)(unaff_x20 + _DAT_112d7e1d8);
  if (lVar7 != 0) {
    puVar2 = &UNK_1103b50e0;
    func_0x000107c613fc(&UNK_1103b50e0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d7e1d0);
    puVar3 = &UNK_1103b51f8;
    func_0x000107c613fc(&UNK_1103b51f8,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar8;
    puVar4 = PTR_PTR_1126a6d48;
    func_0x000107c610f8(PTR_PTR_1126a6d48);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x10141dc68;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1103b5210;
    ppuVar5 = &puStack_a0;
    puStack_78 = puVar2;
    func_0x000107c60bc4(ppuVar5);
    pcStack_b0 = FUN_10141dcbc;
    puStack_d0 = puVar1;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_1000f6b44;
    puStack_b8 = &UNK_1103b5238;
    puStack_a8 = puVar3;
    func_0x000107c60bc4(&puStack_d0);
    func_0x000107c615f0(lVar7);
    func_0x000107c6157c(puVar2);
    func_0x000107c61174(uVar8);
    func_0x000107c46584(puVar4);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(puStack_a8);
    puVar3 = puStack_78;
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar3);
    puVar2 = PTR_PTR_1126a6d50;
    func_0x000107c610f8(PTR_PTR_1126a6d50);
    func_0x000107c49520();
    puVar3 = PTR_PTR_1126afcd0;
    func_0x000107c610f8(PTR_PTR_1126afcd0);
    func_0x000107c49460();
    func_0x000107c5677c();
    func_0x000107c3e2c0(param_1);
    func_0x000107c615e8(lVar7);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 10141d140; end: 10141d37b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141d140(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [24];
  
  lVar7 = *(long *)(unaff_x20 + _DAT_112d7e1d8);
  if (lVar7 != 0) {
    puVar1 = &UNK_1103b5090;
    func_0x000107c613fc(&UNK_1103b5090,0x18,7);
    puVar8 = (undefined8 *)(puVar1 + 0x10);
    *puVar8 = 0;
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d7e1d0);
    puVar2 = &UNK_1103b50b8;
    func_0x000107c613fc(&UNK_1103b50b8,0x20,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = uVar9;
    puVar3 = &UNK_1103b50e0;
    func_0x000107c613fc(&UNK_1103b50e0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_1103b5108;
    func_0x000107c613fc(&UNK_1103b5108,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(code **)(puVar4 + 0x18) = FUN_10141da78;
    *(undefined **)(puVar4 + 0x20) = puVar2;
    puVar3 = &UNK_1103b5130;
    func_0x000107c613fc(&UNK_1103b5130,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar9;
    *(code **)(puVar3 + 0x18) = FUN_10141da78;
    *(undefined **)(puVar3 + 0x20) = puVar2;
    puVar5 = &UNK_1103b5158;
    func_0x000107c613fc(&UNK_1103b5158,0x18,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar9;
    func_0x000107c610f8(PTR_PTR_1126a6d38);
    func_0x000107c61174(uVar9);
    func_0x000107c61174();
    func_0x000107c61580(puVar2,2);
    func_0x000107c61174(uVar9);
    func_0x000107c615f0(lVar7);
    func_0x000107c6157c(puVar1);
    uVar9 = 0x10141da80;
    FUN_10141db2c(0x10141da80,puVar4,FUN_10141da8c,puVar3,FUN_10141daf8,puVar5);
    puVar3 = PTR_PTR_1126a6d40;
    func_0x000107c610f8(PTR_PTR_1126a6d40);
    func_0x000107c49520();
    puVar4 = PTR_PTR_1126afcd0;
    func_0x000107c610f8();
    func_0x000107c49460();
    func_0x000107c61180();
    func_0x000107c5677c();
    func_0x000107c61428(puVar8,auStack_78,1,0);
    uVar6 = *puVar8;
    *puVar8 = puVar4;
    func_0x000107c61170(uVar6);
    func_0x000107c3e2c0(param_1);
    func_0x000107c615e8(lVar7);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 10141d37c; end: 10141d4fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10141d37c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    puVar4 = *(undefined **)(param_2 + _DAT_112e62080);
  }
  else {
    puVar4 = *(undefined **)(param_2 + _DAT_112e62080);
    puVar1 = PTR_PTR_1126aead0;
    func_0x000107c61168(PTR_PTR_1126aead0);
    puVar2 = puVar4;
    func_0x000107c6148c(puVar4,puVar1);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126aead8;
      func_0x000107c610f8(PTR_PTR_1126aead8);
      func_0x000107c4807c();
      return puVar4;
    }
    func_0x000107c61174();
    lVar3 = lVar5;
    func_0x000107c4d508();
    func_0x000107c61180();
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126aead0;
      func_0x000107c610f8(PTR_PTR_1126aead0);
      func_0x000107c47994();
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar3);
      return puVar4;
    }
    func_0x000107c61170(lVar5);
  }
  func_0x000107c615f0(puVar4);
  return puVar4;
}



/* Entry: 10141d4fc; end: 10141d54f;  */

void FUN_10141d4fc(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10141d550();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10141d550; end: 10141d97f;  */

void FUN_10141d550(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar12;
  long extraout_x12;
  long lVar13;
  undefined8 unaff_x20;
  undefined8 *puVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar17 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
  puVar12 = &stack0xffffffffffffff50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = (long)puVar12 - extraout_x12;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar18 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar17 = 4;
  puVar14 = (undefined8 *)0x112d7e238;
  do {
    puStack_90 = (undefined *)puVar14[-1];
    uStack_88 = *puVar14;
    func_0x000107c61434();
    func_0x000107c5fb78(0x69726961702f2f3a,0xea0000000000676e);
    uVar10 = uStack_88;
    func_0x000107c5edd0(lVar16,puStack_90,uStack_88);
    func_0x000107c6142c(uVar10);
    pcVar15 = *(code **)(lVar13 + 0x30);
    lVar3 = lVar16;
    (*pcVar15)(lVar16,1,lVar1);
    if ((int)lVar3 == 1) {
      func_0x0001000293e4(lVar16);
    }
    else {
      (**(code **)(lVar13 + 0x20))(lVar18,lVar16,lVar1);
      puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x000107c61168();
      puVar5 = puVar4;
      func_0x000107c5a9c4();
      func_0x000107c61180();
      puVar6 = puVar5;
      func_0x000107c5ed90();
      puVar7 = puVar5;
      func_0x000107c3f3f4();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      if ((int)puVar7 != 0) {
        func_0x000107c5a9c4(puVar4);
        func_0x000107c61180();
        puVar6 = puVar4;
        func_0x000107c5ed90();
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
        uVar9 = 0;
        FUN_100dfa6ec(0);
        uVar10 = uVar9;
        FUN_100f33384();
        puVar7 = puVar5;
        func_0x000107c5f9dc(puVar5,uVar9,PTR___sypN_11034f1a8 + 8,uVar10);
        func_0x000107c6142c(puVar5);
        puVar5 = &UNK_1103b5270;
        func_0x000107c613fc(&UNK_1103b5270,0x18,7);
        *(undefined8 *)(puVar5 + 0x10) = unaff_x20;
        pcStack_70 = FUN_10141dc70;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_100ab47f8;
        puStack_78 = &UNK_1103b5288;
        ppuVar11 = &puStack_90;
        puStack_68 = puVar5;
        func_0x000107c60bc4(ppuVar11);
        puVar5 = puStack_68;
        func_0x000107c61174(unaff_x20);
        func_0x000107c61574(puVar5);
        func_0x000107c4de70(puVar4);
        func_0x000107c61408(0x112d7e230,4,PTR___sSSN_11034da80);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar7);
        (**(code **)(lVar13 + 8))(lVar18,lVar2);
        return;
      }
      (**(code **)(lVar13 + 8))(lVar18,lVar2);
      lVar1 = lVar2;
    }
    puVar14 = puVar14 + 2;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  func_0x000107c61408(0x112d7e230,4,PTR___sSSN_11034da80);
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c5edd0(puVar12,0xd00000000000002d,0x800000010ef3e2e0);
  puVar8 = puVar12;
  (*pcVar15)(puVar12,1,lVar1);
  if ((int)puVar8 != 1) {
    func_0x000107c5ed90();
    (**(code **)(lVar13 + 8))(puVar12,lVar1);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar9 = 0;
    FUN_100dfa6ec(0);
    uVar10 = uVar9;
    FUN_100f33384();
    puVar6 = puVar5;
    func_0x000107c5f9dc(puVar5,uVar9,PTR___sypN_11034f1a8 + 8,uVar10);
    func_0x000107c6142c(puVar5);
    func_0x000107c4de70(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x10141d980);
  (*pcVar15)();
}



/* Entry: 10141d980; end: 10141d9df; -[_TtC41SCSpectaclesInterstitialPairingScreenImpl49SpectaclesInterstitialPairingScreenImplEntryPoint init] */

void FUN_10141d980(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpectaclesInterstitialPairingScreenImpl.SpectaclesInterstitialPairingScreenImplEntryPoint"
                      ,0x5b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10141d9ac);
  (*pcVar1)();
}



/* Entry: 10141d9e0; end: 10141da17; -[_TtC41SCSpectaclesInterstitialPairingScreenImpl49SpectaclesInterstitialPairingScreenImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141d9e0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7e1d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d7e1d8));
  return;
}



/* Entry: 10141da18; end: 10141da1b;  */

void FUN_10141da18(void)

{
  return;
}



/* Entry: 10141da1c; end: 10141da77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10141da1c(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  
  func_0x000107c41864(*(undefined8 *)(*(long *)(*unaff_x20 + _DAT_112d7e1d0) + _DAT_112e62080),
                      param_2,0);
  return 0;
}



/* Entry: 10141da78; end: 10141da8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10141da78(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar5 + 0x10,auStack_48,0,0);
  lVar5 = *(long *)(lVar5 + 0x10);
  if (lVar5 == 0) {
    puVar4 = *(undefined **)(lVar3 + _DAT_112e62080);
  }
  else {
    puVar4 = *(undefined **)(lVar3 + _DAT_112e62080);
    puVar1 = PTR_PTR_1126aead0;
    func_0x000107c61168(PTR_PTR_1126aead0);
    puVar2 = puVar4;
    func_0x000107c6148c(puVar4,puVar1);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126aead8;
      func_0x000107c610f8(PTR_PTR_1126aead8);
      func_0x000107c4807c();
      return puVar4;
    }
    func_0x000107c61174();
    lVar3 = lVar5;
    func_0x000107c4d508();
    func_0x000107c61180();
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126aead0;
      func_0x000107c610f8(PTR_PTR_1126aead0);
      func_0x000107c47994();
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar3);
      return puVar4;
    }
    func_0x000107c61170(lVar5);
  }
  func_0x000107c615f0(puVar4);
  return puVar4;
}



/* Entry: 10141da8c; end: 10141daf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141da8c(undefined8 param_1)

{
  long unaff_x20;
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)(unaff_x20 + 0x10) + _DAT_112e62098);
  if (pcVar1 != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x18))(*(undefined8 *)(unaff_x20 + 0x20));
    (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10141daf8; end: 10141db2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141daf8(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + _DAT_112e62090))();
  return;
}



/* Entry: 10141db2c; end: 10141dc4b;  */

undefined8
FUN_10141db2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar4 = &puStack_f0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1103b5170;
  ppuVar2 = &puStack_90;
  uStack_70 = param_1;
  uStack_68 = param_2;
  func_0x000107c60bc4(ppuVar2);
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_1103b5198;
  ppuVar3 = &puStack_c0;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  func_0x000107c60bc4(ppuVar3);
  puStack_f0 = puVar1;
  uStack_e8 = 0x42000000;
  puStack_e0 = &UNK_1000f6b44;
  puStack_d8 = &UNK_1103b51c0;
  uStack_d0 = param_5;
  uStack_c8 = param_6;
  func_0x000107c60bc4(&puStack_f0);
  func_0x000107c4657c();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(uStack_c8);
  func_0x000107c61574(uStack_98);
  func_0x000107c61574(uStack_68);
  return unaff_x20;
}



/* Entry: 10141dc4c; end: 10141dc6f;  */

void FUN_10141dc4c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10141dc70; end: 10141dcbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141dc70(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d7e1d0) + _DAT_112e62090);
  pcVar2 = (code *)*puVar1;
  uVar3 = puVar1[1];
  func_0x000107c6157c(uVar3);
  (*pcVar2)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar3);
  return;
}



/* Entry: 10141dcbc; end: 10141dce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141dcbc(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + _DAT_112e62090))();
  return;
}



/* Entry: 10141dce8; end: 10141dcf3; -[SCSpectaclesInterstitialPairingScreenImplEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141dce8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7e270;
  func_0x000107c61428(param_1 + _DAT_112d7e270,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10141dcf4; end: 10141dcff; -[SCSpectaclesInterstitialPairingScreenImplEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141dcf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7e270;
  func_0x000107c61428(param_1 + _DAT_112d7e270,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10141dd00; end: 10141dd0b; -[SCSpectaclesInterstitialPairingScreenImplEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141dd00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7e278;
  func_0x000107c61428(param_1 + _DAT_112d7e278,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10141dd0c; end: 10141dd4f;  */

void FUN_10141dd0c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10141dd50; end: 10141dd5b; -[SCSpectaclesInterstitialPairingScreenImplEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141dd50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7e278;
  func_0x000107c61428(param_1 + _DAT_112d7e278,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10141dd5c; end: 10141ddaf;  */

void FUN_10141dd5c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10141ddb0; end: 10141de4f; -[SCSpectaclesInterstitialPairingScreenImplEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x00010141de28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010141de2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141ddb0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x000107c40014();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      uVar3 = 0;
      func_0x00010141da58(0);
      func_0x000107c610f8();
      FUN_10141cda8(lVar1,lVar2,uVar3);
      *(long *)(param_1 + _DAT_112d7e280) = lVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10141de50; end: 10141decb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141de50(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  if (*(long *)(unaff_x20 + _DAT_112d7e280) != 0) {
    func_0x000107c41864(*(undefined8 *)
                         (*(long *)(*(long *)(unaff_x20 + _DAT_112d7e280) + _DAT_112d7e1d0) +
                         _DAT_112e62080));
  }
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_end_1125c29d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10141decc; end: 10141deff; -[SCSpectaclesInterstitialPairingScreenImplEntryPoint end] */

void FUN_10141decc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10141de50();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10141df00; end: 10141e097;  */

void FUN_10141df00(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SCSpectaclesInterstitialPairingScreenImpl/SCSpectaclesInterstitialPairingScreenImplEntryPoint.swift"
                            ,99,2,0x29,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10141e098);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c536e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10141e098; end: 10141e143; -[SCSpectaclesInterstitialPairingScreenImplEntryPoint setValue:forIvarName:] */

void FUN_10141e098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10141df00(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10141e144; end: 10141e1b7; -[SCSpectaclesInterstitialPairingScreenImplEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141e144(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d7e270,0);
  func_0x000107c61614(param_1 + _DAT_112d7e278,0);
  *(undefined8 *)(param_1 + _DAT_112d7e280) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10141e1b8; end: 10141e1eb;  */

void FUN_10141e1b8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10141e1ec; end: 10141e233; -[SCSpectaclesInterstitialPairingScreenImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141e1ec(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d7e270);
  func_0x000107c61610(param_1 + _DAT_112d7e278);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7e280));
  return;
}



/* Entry: 10141e234; end: 10141e253;  */

void FUN_10141e234(void)

{
  func_0x000107c61168(&PTR_PTR_1127d4700);
  return;
}



/* Entry: 10141e254; end: 10141e25f; -[SCSpectaclesDeviceInfoCardEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141e254(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7e2b0;
  func_0x000107c61428(param_1 + _DAT_112d7e2b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10141e260; end: 10141e26b; -[SCSpectaclesDeviceInfoCardEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141e260(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7e2b0;
  func_0x000107c61428(param_1 + _DAT_112d7e2b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10141e26c; end: 10141e277; -[SCSpectaclesDeviceInfoCardEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141e26c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7e2b8;
  func_0x000107c61428(param_1 + _DAT_112d7e2b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10141e278; end: 10141e2bb;  */

void FUN_10141e278(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10141e2bc; end: 10141e2c7; -[SCSpectaclesDeviceInfoCardEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141e2bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7e2b8;
  func_0x000107c61428(param_1 + _DAT_112d7e2b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10141e2c8; end: 10141e31b;  */

void FUN_10141e2c8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10141e31c; end: 10141e3cf; -[SCSpectaclesDeviceInfoCardEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x00010141e39c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010141e3a0) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141e31c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x000107c40014();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      uVar3 = 0;
      FUN_10141cd48(0);
      func_0x000107c613fc();
      FUN_10141cb6c(lVar1,lVar2,uVar3);
      *(long *)(param_1 + _DAT_112d7e2c0) = lVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10141e3d0; end: 10141e413; -[SCSpectaclesDeviceInfoCardEntryPoint end] */

void FUN_10141e3d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10141e414; end: 10141e5ab;  */

void FUN_10141e414(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SCSpectaclesInterstitialPairingScreenImpl/SCSpectaclesDeviceInfoCardEntryPoint.swift"
                            ,0x54,2,0x29,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10141e5ac);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c536e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10141e5ac; end: 10141e657; -[SCSpectaclesDeviceInfoCardEntryPoint setValue:forIvarName:] */

void FUN_10141e5ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10141e414(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10141e658; end: 10141e6cb; -[SCSpectaclesDeviceInfoCardEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141e658(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d7e2b0,0);
  func_0x000107c61614(param_1 + _DAT_112d7e2b8,0);
  *(undefined8 *)(param_1 + _DAT_112d7e2c0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10141e6cc; end: 10141e6ff;  */

void FUN_10141e6cc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10141e700; end: 10141e747; -[SCSpectaclesDeviceInfoCardEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141e700(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d7e2b0);
  func_0x000107c61610(param_1 + _DAT_112d7e2b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d7e2c0));
  return;
}



/* Entry: 10141e748; end: 10141e767;  */

void FUN_10141e748(void)

{
  func_0x000107c61168(&PTR_PTR_1127d47c8);
  return;
}



/* Entry: 10141e768; end: 10141e77f; +[_TtC24SCSpectaclesPairingUtils12GradientView layerClass] */

void FUN_10141e768(void)

{
  func_0x00010141e858(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 10141e780; end: 10141e7d7; -[_TtC24SCSpectaclesPairingUtils12GradientView initWithCoder:] */

void FUN_10141e780(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCSpectaclesPairingUtils/GradientView.swift",0x2b,2,0x19,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10141e7d8);
  (*pcVar1)();
}



/* Entry: 10141e7d8; end: 10141e89b; -[_TtC24SCSpectaclesPairingUtils12GradientView initWithFrame:] */

void FUN_10141e7d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpectaclesPairingUtils.GradientView",0x25,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10141e804);
  (*pcVar1)();
}



/* Entry: 10141e89c; end: 10141e8d7; -[SCSpectaclesPairingFullscreenMediaView isHidden] */

void FUN_10141e89c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_isHidden_1125fad18);
  return;
}



/* Entry: 10141e8d8; end: 10141e907; -[SCSpectaclesPairingFullscreenMediaView setHidden:] */

void FUN_10141e8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10141e908(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10141e908; end: 10141e9bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141e908(uint param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_68 [24];
  
  func_0x000107c614f0();
  puVar3 = &stack0xffffffffffffffc0;
  func_0x000107c61154(puVar3,PTR_s_setHidden__1126479f8,param_1 & 1);
  FUN_10141e9c0();
  puVar4 = &stack0xffffffffffffffb0;
  func_0x000107c61154(puVar4,PTR_s_isHidden_1125fad18);
  lVar2 = _DAT_112d7e3e0;
  uVar1 = (uint)puVar4 ^ 1;
  func_0x000107c61428(puVar3 + _DAT_112d7e3e0,auStack_68,1,0);
  puVar3[lVar2] = (char)uVar1;
  if ((uVar1 & 1) == 0) {
    func_0x000107c4e454();
  }
  else {
    func_0x000107c4e868(*(undefined8 *)(puVar3 + _DAT_112d7e3e8));
  }
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 10141e9c0; end: 10141ea6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10141e9c0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d7e320;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d7e320);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112d7e360);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d7e368);
    FUN_101420b6c();
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c615f0(uVar4);
    FUN_1014205fc(lVar3,uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 10141ea70; end: 10141ecdf;  */

undefined1 * FUN_10141ea70(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = &uStack_70;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5af88();
  func_0x000107c61180();
  uVar3 = 0;
  func_0x00010141e838();
  uVar9 = uVar3;
  func_0x000107c610f8();
  uStack_70 = uVar9;
  uStack_68 = uVar3;
  func_0x000107c61154(0,0,0,0,&uStack_70,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar5 = (undefined1 *)puVar4;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar6 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x000107c61168(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  puVar7 = puVar5;
  func_0x000107c61490(puVar5,puVar6,0,0,0);
  lVar8 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 4;
  *(undefined8 *)(lVar8 + 0x10) = 2;
  puVar6 = puVar2;
  func_0x000107c3ab24();
  func_0x000107c61180();
  uVar9 = 0;
  func_0x000100ef8bfc();
  *(undefined8 *)(lVar8 + 0x38) = uVar9;
  *(undefined **)(lVar8 + 0x20) = puVar6;
  puVar6 = puVar1;
  func_0x000107c3ab24();
  func_0x000107c61180();
  *(undefined8 *)(lVar8 + 0x58) = uVar9;
  *(undefined **)(lVar8 + 0x40) = puVar6;
  lVar10 = lVar8;
  func_0x000107c5fc48(lVar8,PTR___sypN_11034f1a8 + 8);
  func_0x000107c61574(lVar8);
  func_0x000107c535a0(puVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar10);
  puVar5 = (undefined1 *)puVar4;
  func_0x000107c4aba4(puVar4);
  func_0x000107c61180();
  puVar6 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x000107c61168(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  func_0x000107c61490(puVar5,puVar6,0,0,0);
  func_0x000107c597c4(0x3fe0000000000000,0);
  func_0x000107c61170(puVar5);
  puVar5 = (undefined1 *)puVar4;
  func_0x000107c4aba4(puVar4);
  func_0x000107c61180();
  puVar6 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x000107c61168(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  func_0x000107c61490(puVar5,puVar6,0,0,0);
  func_0x000107c54598(0x3fe0000000000000,0x3ff0000000000000);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar5);
  func_0x000107c5a050(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar4);
  return (undefined1 *)puVar4;
}



/* Entry: 10141ece0; end: 10141edcf;  */

undefined * FUN_10141ece0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c5a100(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c59c74(puVar1);
  if (lRam0000000112d7e3c8 != -1) {
    func_0x000107c61568(0x112d7e3c8,FUN_10142023c);
  }
  uVar3 = uRam0000000112d7e3d0;
  func_0x000107c5fadc(uRam0000000112d7e3d0,uRam0000000112d7e3d8);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  return puVar1;
}



/* Entry: 10141edd0; end: 10141f007;  */

undefined * FUN_10141edd0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x000107c61168(PTR_PTR_1126aec40);
  func_0x000107c3ee98();
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5a050();
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef3e550);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c30a7c();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c3e580();
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  func_0x000107c55260(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c3d8b8(puVar1);
  func_0x000107c52b54(puVar1);
  func_0x000107c552c8(puVar1);
  func_0x000107c5381c(0x443b8000,puVar1);
  return puVar1;
}



/* Entry: 10141f008; end: 10141f1ab;  */

undefined * FUN_10141f008(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  uVar2 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef3e500);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  puVar3 = puVar1;
  func_0x000107c5cac0();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    puVar4 = puVar3;
    func_0x000107c30a7c();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c43780();
    func_0x000107c61180();
    func_0x000107c615e8(puVar4);
    func_0x000107c54adc(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59e34(puVar1);
  func_0x000107c61170(puVar3);
  if (lRam0000000112d7e398 != -1) {
    func_0x000107c61568(0x112d7e398,0x10142026c);
  }
  uVar2 = uRam0000000112d7e3a0;
  uVar6 = uRam0000000112d7e3a8;
  func_0x000107c5fb24(uRam0000000112d7e3a0,uRam0000000112d7e3a8);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar6);
  func_0x000107c59e1c(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c3d8b8(puVar1);
  return puVar1;
}



/* Entry: 10141f1ac; end: 10141f347;  */

long FUN_10141f1ac(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 10141f348; end: 10141fcf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10141f348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  puVar5 = auStack_70;
  func_0x000107c610f8();
  lVar2 = _DAT_112d7e318;
  lVar4 = unaff_x20 + _DAT_112d7e318;
  func_0x000107c61614(lVar4,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d7e320) = 0;
  lVar3 = _DAT_112d7e328;
  FUN_10141ea70();
  *(long *)(unaff_x20 + lVar3) = lVar4;
  lVar3 = _DAT_112d7e330;
  FUN_10141ece0();
  *(long *)(unaff_x20 + lVar3) = lVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112d7e338) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7e340) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7e348) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7e350) = 0;
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112d7e358) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d7e360) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d7e368) = param_4;
  puVar1 = PTR_s_initWithFrame__1125e2948;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61154(0,0,0,0,auStack_70,puVar1);
  func_0x000107c61180();
  func_0x00010141f688();
  FUN_10141fcf8(param_5,param_6);
  func_0x000107c61170(puVar5);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c6142c(param_6);
  return puVar5;
}



/* Entry: 10141fcf8; end: 10141fe2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141fcf8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  char *pcVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + _DAT_112d7e358);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    lVar2 = lVar1;
    func_0x000107c5ddb0(lVar1);
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_1);
    puVar3 = &UNK_1103b5370;
    func_0x000107c613fc(&UNK_1103b5370,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_40 = FUN_101420434;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_10141ff74;
    puStack_48 = &UNK_1103b5388;
    puStack_38 = puVar3;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    pcVar5 = "loadVideo(from:)";
    func_0x0001000c10c0("loadVideo(from:)");
    func_0x000107c61180();
    func_0x000107c5dc64(lVar2);
    func_0x000107c615e8(pcVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10141fe30; end: 10141fecb; -[SCSpectaclesPairingFullscreenMediaView initWithDelegate:onDemandResourceFetcher:playerProvider:appLifecycleEvents:videoURL:] */

void FUN_10141fe30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c5faec(param_7);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x00010141f4e8(param_3,param_4,param_5,param_6,param_7,param_2);
  return;
}



/* Entry: 10141fecc; end: 10141fef3; -[SCSpectaclesPairingFullscreenMediaView initWithCoder:] */

void FUN_10141fecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_101420368();
  return;
}



/* Entry: 10141fef4; end: 10141ff73;  */

void FUN_10141fef4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar1 = param_3;
    FUN_10141e9c0();
    func_0x000107c61170(param_3);
    func_0x000107c61174(param_1);
    FUN_1014204d8(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10141ff74; end: 10141ffeb;  */

/* WARNING: Possible PIC construction at 0x00010141ffd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010141ffd4) */

void FUN_10141ff74(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}


