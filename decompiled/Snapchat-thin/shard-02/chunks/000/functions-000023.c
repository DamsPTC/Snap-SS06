/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016d678c; end: 1016d679b; -[_TtC30LensTurnBasedRetryServicesImpl31LensTurnBasedRetryAnnouncerImpl retryDisclaimerRequestEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d678c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112dc1df0));
  return;
}



/* Entry: 1016d679c; end: 1016d67f7; -[_TtC30LensTurnBasedRetryServicesImpl31LensTurnBasedRetryAnnouncerImpl init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d679c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + _DAT_112dc1df0) = puVar2;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016d67f8; end: 1016d6807; -[_TtC30LensTurnBasedRetryServicesImpl31LensTurnBasedRetryAnnouncerImpl requestRetryDisclaimerForLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d67f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dc1df0),PTR_s_next__112614028);
  return;
}



/* Entry: 1016d6808; end: 1016d683b;  */

void FUN_1016d6808(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016d683c; end: 1016d684b; -[_TtC30LensTurnBasedRetryServicesImpl31LensTurnBasedRetryAnnouncerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d683c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc1df0));
  return;
}



/* Entry: 1016d684c; end: 1016d686b;  */

void FUN_1016d684c(void)

{
  func_0x000107c61168(&PTR_PTR_1127e7800);
  return;
}



/* Entry: 1016d686c; end: 1016d6b2b;  */

void FUN_1016d686c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  uVar1 = uStack_68;
  func_0x000100083b20(&uStack_68);
  uVar2 = uStack_68;
  func_0x000100083b20(&uStack_68);
  uVar3 = uStack_68;
  func_0x000100083b20(&uStack_68);
  func_0x0001000285a8(0x112dc1e28,&UNK_10d97e7e8);
  func_0x000107c613fc();
  pcVar4 = FUN_1016d6b48;
  func_0x0001000bdd8c(FUN_1016d6b48,0);
  func_0x0001000285a8(0x112dc0fd8,&UNK_10d97e7f0);
  uVar11 = uVar1;
  func_0x000107c5cec4();
  func_0x000107c61180();
  uVar5 = uVar11;
  func_0x0001000bda74();
  func_0x000107c61170(uVar11);
  func_0x0001000285a8(0x112d5ce60,&UNK_10d923870);
  uVar11 = uVar2;
  func_0x000107c4f598();
  func_0x000107c61180();
  uVar6 = uVar11;
  func_0x0001000bda74();
  func_0x000107c61170(uVar11);
  puVar7 = &UNK_1103f9ce0;
  func_0x000107c613fc(&UNK_1103f9ce0,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar3;
  func_0x0001000285a8(0x112da8d98,&UNK_10d9501f0);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar3);
  pcVar8 = FUN_1016d6b78;
  func_0x0001000bdd8c(FUN_1016d6b78,puVar7);
  func_0x0001000285a8(0x112d5ce70,&UNK_10d9238e0);
  uVar11 = uStack_68;
  func_0x000107c44498();
  func_0x000107c61180();
  uVar9 = uVar11;
  func_0x0001000bda74();
  func_0x000107c61170(uVar11);
  puVar7 = &UNK_1103f9d08;
  func_0x000107c613fc(&UNK_1103f9d08,0x30,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar5;
  *(undefined8 *)(puVar7 + 0x18) = uVar6;
  *(code **)(puVar7 + 0x20) = pcVar8;
  *(undefined8 *)(puVar7 + 0x28) = uVar9;
  func_0x0001000285a8(0x112dc1e30,&UNK_10d97e800);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(pcVar8);
  func_0x000107c6157c(uVar9);
  pcVar10 = FUN_1016d6e58;
  func_0x0001000bdd8c(FUN_1016d6e58,puVar7);
  uVar11 = 0;
  func_0x000100216744(0);
  func_0x000107c610f8();
  func_0x000103f543f4(pcVar4,pcVar10,uVar11);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar5);
  func_0x000107c615e8(uVar3);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1016d6b2c; end: 1016d6b47;  */

void FUN_1016d6b2c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = uStack_68;
  func_0x000100083b20(&uStack_68);
  uVar2 = uStack_68;
  func_0x000100083b20(&uStack_68);
  uVar3 = uStack_68;
  func_0x000100083b20(&uStack_68);
  func_0x0001000285a8(0x112dc1e28,&UNK_10d97e7e8);
  func_0x000107c613fc();
  pcVar4 = FUN_1016d6b48;
  func_0x0001000bdd8c(FUN_1016d6b48,0);
  func_0x0001000285a8(0x112dc0fd8,&UNK_10d97e7f0);
  uVar11 = uVar1;
  func_0x000107c5cec4();
  func_0x000107c61180();
  uVar5 = uVar11;
  func_0x0001000bda74();
  func_0x000107c61170(uVar11);
  func_0x0001000285a8(0x112d5ce60,&UNK_10d923870);
  uVar11 = uVar2;
  func_0x000107c4f598();
  func_0x000107c61180();
  uVar6 = uVar11;
  func_0x0001000bda74();
  func_0x000107c61170(uVar11);
  puVar7 = &UNK_1103f9ce0;
  func_0x000107c613fc(&UNK_1103f9ce0,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar3;
  func_0x0001000285a8(0x112da8d98,&UNK_10d9501f0);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar3);
  pcVar8 = FUN_1016d6b78;
  func_0x0001000bdd8c(FUN_1016d6b78,puVar7);
  func_0x0001000285a8(0x112d5ce70,&UNK_10d9238e0);
  uVar11 = uStack_68;
  func_0x000107c44498();
  func_0x000107c61180();
  uVar9 = uVar11;
  func_0x0001000bda74();
  func_0x000107c61170(uVar11);
  puVar7 = &UNK_1103f9d08;
  func_0x000107c613fc(&UNK_1103f9d08,0x30,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar5;
  *(undefined8 *)(puVar7 + 0x18) = uVar6;
  *(code **)(puVar7 + 0x20) = pcVar8;
  *(undefined8 *)(puVar7 + 0x28) = uVar9;
  func_0x0001000285a8(0x112dc1e30,&UNK_10d97e800);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(pcVar8);
  func_0x000107c6157c(uVar9);
  pcVar10 = FUN_1016d6e58;
  func_0x0001000bdd8c(FUN_1016d6e58,puVar7);
  uVar11 = 0;
  func_0x000100216744(0);
  func_0x000107c610f8();
  func_0x000103f543f4(pcVar4,pcVar10,uVar11);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar5);
  func_0x000107c615e8(uVar3);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1016d6b48; end: 1016d6b77;  */

void FUN_1016d6b48(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1016d684c();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 1016d6b78; end: 1016d6b83;  */

void FUN_1016d6b78(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 1016d6b84; end: 1016d6e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d6b84(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar2 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar3 = 0;
  FUN_1016d5d00();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112dc1d40) = 1;
  *(undefined8 *)(lVar4 + _DAT_112dc1d48) = 0x40f5180000000000;
  *(undefined8 *)(lVar4 + _DAT_112dc1d50) = 0x409c200000000000;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112dc1d58);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112dc1d60);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112dc1d68);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined8 *)((long)puVar1 + 0x31) = 0;
  *(undefined8 *)((long)puVar1 + 0x29) = 0;
  *(undefined8 *)(lVar4 + _DAT_112dc1d70) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112dc1d78) = param_5;
  *(undefined **)(lVar4 + _DAT_112dc1d80) = puVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  func_0x000107c61174(puVar2);
  func_0x0001000d224c(&lStack_68);
  lVar7 = lStack_68;
  lVar5 = lStack_68;
  func_0x000107c4f800();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  *(long *)(lVar4 + _DAT_112dc1d88) = lVar5;
  plVar6 = &lStack_78;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 == 0) {
    func_0x000107c61170(puVar2);
  }
  else {
    lVar7 = lStack_68;
    func_0x000107c4104c(lStack_68);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_68);
    func_0x0001000285a8(0x112dc1d90,&UNK_10d97e620);
    lVar4 = lVar7;
    func_0x0001000b637c(lVar7);
    plVar8 = *(long **)((long)plVar6 + _DAT_112dc1d88);
    func_0x000107c61174();
    plVar9 = plVar8;
    func_0x000100471e0c();
    func_0x000107c61574(lVar4);
    func_0x000107c61170(plVar8);
    puVar10 = &UNK_1103f9d30;
    func_0x000107c613fc(&UNK_1103f9d30,0x18,7);
    func_0x000107c61614(puVar10 + 0x10,plVar6);
    uVar11 = 0x1016d6e64;
    puVar13 = puVar10;
    (**(code **)(*plVar9 + 0x60))();
    func_0x000107c61574(plVar9);
    func_0x000107c61574(puVar10);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar7);
    puVar1 = (undefined8 *)((long)plVar6 + _DAT_112dc1d60);
    uVar12 = *puVar1;
    *puVar1 = uVar11;
    puVar1[1] = puVar13;
    func_0x000107c615e8(uVar12);
  }
  *param_1 = plVar6;
  return;
}



/* Entry: 1016d6e1c; end: 1016d6e57;  */

void FUN_1016d6e1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016d6e58; end: 1016d6e6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d6e58(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long unaff_x20;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar2 = PTR_PTR_1126aeea8;
  func_0x000107c610f8(PTR_PTR_1126aeea8,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c453e4();
  lVar3 = 0;
  FUN_1016d5d00();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112dc1d40) = 1;
  *(undefined8 *)(lVar4 + _DAT_112dc1d48) = 0x40f5180000000000;
  *(undefined8 *)(lVar4 + _DAT_112dc1d50) = 0x409c200000000000;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112dc1d58);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112dc1d60);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112dc1d68);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined8 *)((long)puVar1 + 0x31) = 0;
  *(undefined8 *)((long)puVar1 + 0x29) = 0;
  *(undefined8 *)(lVar4 + _DAT_112dc1d70) = uVar11;
  *(undefined8 *)(lVar4 + _DAT_112dc1d78) = uVar12;
  *(undefined **)(lVar4 + _DAT_112dc1d80) = puVar2;
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar12);
  func_0x000107c61174(puVar2);
  func_0x0001000d224c(&lStack_68);
  lVar7 = lStack_68;
  lVar5 = lStack_68;
  func_0x000107c4f800();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  *(long *)(lVar4 + _DAT_112dc1d88) = lVar5;
  plVar6 = &lStack_78;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 == 0) {
    func_0x000107c61170(puVar2);
  }
  else {
    lVar7 = lStack_68;
    func_0x000107c4104c(lStack_68);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_68);
    func_0x0001000285a8(0x112dc1d90,&UNK_10d97e620);
    lVar4 = lVar7;
    func_0x0001000b637c(lVar7);
    plVar8 = *(long **)((long)plVar6 + _DAT_112dc1d88);
    func_0x000107c61174();
    plVar9 = plVar8;
    func_0x000100471e0c();
    func_0x000107c61574(lVar4);
    func_0x000107c61170(plVar8);
    puVar10 = &UNK_1103f9d30;
    func_0x000107c613fc(&UNK_1103f9d30,0x18,7);
    func_0x000107c61614(puVar10 + 0x10,plVar6);
    uVar11 = 0x1016d6e64;
    puVar13 = puVar10;
    (**(code **)(*plVar9 + 0x60))();
    func_0x000107c61574(plVar9);
    func_0x000107c61574(puVar10);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar7);
    puVar1 = (undefined8 *)((long)plVar6 + _DAT_112dc1d60);
    uVar12 = *puVar1;
    *puVar1 = uVar11;
    puVar1[1] = puVar13;
    func_0x000107c615e8(uVar12);
  }
  *param_1 = plVar6;
  return;
}



/* Entry: 1016d6e6c; end: 1016d6ebf;  */

void FUN_1016d6e6c(long *param_1,long param_2)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1016d70b8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uStack_28;
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_1103f9d48;
  return;
}



/* Entry: 1016d6ec0; end: 1016d6ec7;  */

void FUN_1016d6ec0(long *param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1016d70b8();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_28;
  *param_1 = unaff_x20;
  param_1[1] = (long)&PTR_DAT_1103f9d48;
  return;
}



/* Entry: 1016d6ec8; end: 1016d6ef7;  */

void FUN_1016d6ec8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1016d6ef8; end: 1016d6fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d6ef8(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lStack_38;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130344f0);
  func_0x000107c6157c(uVar2);
  func_0x000104875e28(&lStack_38);
  func_0x000107c61574(uVar2);
  if (lStack_38 != 0) {
    puVar1 = &UNK_1103f9dd0;
    func_0x000107c613fc(&UNK_1103f9dd0,0x18,7);
    *(long *)(puVar1 + 0x10) = lStack_38;
    func_0x000107c615f0(lStack_38);
    uVar2 = 9;
    func_0x0001001ca524(9,4,0x38,4,0,0,&UNK_10d97e8c8,puVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(lStack_38);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 1016d6fcc; end: 1016d6fe3;  */

void FUN_1016d6fcc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016d6fe4,0,0);
  return;
}



/* Entry: 1016d6fe4; end: 1016d7037;  */

void FUN_1016d6fe4(void)

{
  long unaff_x22;
  
  func_0x000107c5bed0(*(undefined8 *)(unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016d7010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016d7038; end: 1016d7047;  */

void FUN_1016d7038(void)

{
  return;
}



/* Entry: 1016d7048; end: 1016d7073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d7048(void)

{
  int iVar1;
  undefined8 uVar3;
  long unaff_x20;
  long lStack_38;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b5900;
  func_0x000107c61168();
  iVar1 = (int)puVar2;
  func_0x000107c49cd8();
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130344f0);
    func_0x000107c6157c(uVar3);
    func_0x000104875e28(&lStack_38);
    func_0x000107c61574(uVar3);
    if (lStack_38 != 0) {
      puVar2 = &UNK_1103f9dd0;
      func_0x000107c613fc(&UNK_1103f9dd0,0x18,7);
      *(long *)(puVar2 + 0x10) = lStack_38;
      func_0x000107c615f0(lStack_38);
      uVar3 = 9;
      func_0x0001001ca524(9,4,0x38,4,0,0,&UNK_10d97e8c8,puVar2,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lStack_38);
      func_0x000107c61574(puVar2);
      func_0x000107c61574(uVar3);
    }
    return;
  }
  return;
}



/* Entry: 1016d7074; end: 1016d7077;  */

void FUN_1016d7074(void)

{
  return;
}



/* Entry: 1016d7078; end: 1016d70a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d7078(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126b5900;
  func_0x000107c61168();
  func_0x000107c49cd8();
  if (((ulong)puVar1 & 1) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130344f0);
  func_0x000107c6157c(uVar2);
  func_0x000104875e28(&lStack_38);
  func_0x000107c61574(uVar2);
  if (lStack_38 != 0) {
    puVar1 = &UNK_1103f9dd0;
    func_0x000107c613fc(&UNK_1103f9dd0,0x18,7);
    *(long *)(puVar1 + 0x10) = lStack_38;
    func_0x000107c615f0(lStack_38);
    uVar2 = 9;
    func_0x0001001ca524(9,4,0x38,4,0,0,&UNK_10d97e8c8,puVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(lStack_38);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 1016d70a4; end: 1016d70b7;  */

void FUN_1016d70a4(void)

{
  return;
}



/* Entry: 1016d70b8; end: 1016d70d7;  */

void FUN_1016d70b8(void)

{
  func_0x000107c61168(&PTR_PTR_112dc1e78);
  return;
}



/* Entry: 1016d70d8; end: 1016d712f;  */

void FUN_1016d70d8(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1016d7130;
  plVar1[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016d6fe4,0,0);
  return;
}



/* Entry: 1016d7130; end: 1016d716b;  */

void FUN_1016d7130(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016d7168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1016d716c; end: 1016d71bb;  */

undefined1  [16] FUN_1016d716c(void)

{
  return ZEXT816(0x1103f9ed8);
}



/* Entry: 1016d71bc; end: 1016d71ef; -[_TtC28MapComplianceServiceProvider32MapStoryPostingComplianceChecker canPostToMap] */

uint FUN_1016d71bc(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_1016d71f0();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 1016d71f0; end: 1016d7403;  */

uint FUN_1016d71f0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  int iVar5;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  ulong uVar6;
  
  uVar1 = 0;
  func_0x000107c5efa8();
  lVar7 = *(long *)(uVar1 - 8);
  uVar6 = uVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  FUN_1016d7404();
  if ((uVar6 & 1) == 0) {
    func_0x000107c5efa4(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ef94();
    (**(code **)(lVar7 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar1);
    if (uVar6 == 0x492f65706f727545 && param_2 == -0x10938a9d919e8b8d) {
      func_0x000107c6142c(param_2);
    }
    else {
      func_0x000107c605b8(uVar6,param_2,0x492f65706f727545,0xef6c75626e617473,0);
      func_0x000107c6142c(param_2);
      if ((uVar6 & 1) == 0) {
        uVar6 = *(ulong *)(unaff_x20 + 0x20);
        iVar5 = (int)uVar6;
        uVar2 = 0xd00000000000002d;
        func_0x000107c5fadc(0xd00000000000002d,0x800000010efb7ac0);
        func_0x000107c3ebd4();
        func_0x000107c61170(uVar2);
        if ((uVar6 & 1) == 0) {
          uVar2 = 0xd000000000000024;
          func_0x000107c5fadc(0xd000000000000024,0x800000010efb7af0);
          func_0x000107c3ebd4();
          func_0x000107c61170(uVar2);
          if (iVar5 != 0) {
            lVar7 = *(long *)(unaff_x20 + 0x30);
            func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x28));
            puVar3 = PTR_PTR_1126b1278;
            func_0x000107c61168();
            func_0x000107c4f600();
            func_0x000107c61180();
            puVar4 = puVar3;
            (**(code **)(lVar7 + 8))();
            func_0x000107c61170(puVar3);
            if (((ulong)puVar4 & 1) != 0) {
              func_0x000100083b20(&uStack_58);
              uVar2 = uStack_58;
              func_0x000107c49e00(uStack_58);
              func_0x000107c615e8(uStack_58);
              return (uint)uVar2 ^ 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



/* Entry: 1016d7404; end: 1016d74ff;  */

uint FUN_1016d7404(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      func_0x000107c5eea0(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5ee70();
      (**(code **)(lVar5 + 8))
                (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
      lVar2 = lVar4;
      func_0x000107c3da20();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar4);
      lVar3 = lVar4;
      if (0xf < lVar2) {
        uVar1 = 0;
        goto LAB_1016d74e4;
      }
    }
  }
  uVar1 = (uint)lVar3;
  FUN_1016d7544();
LAB_1016d74e4:
  return uVar1 & 1;
}



/* Entry: 1016d7500; end: 1016d7543;  */

void FUN_1016d7500(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016d7544; end: 1016d7903;  */

void FUN_1016d7544(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  puVar2 = puVar1;
  func_0x000107c41050();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  puVar1 = puVar2;
  func_0x000107c4fcfc();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  puVar2 = puVar1;
  func_0x000107c5faec();
  func_0x000107c61170(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x000107c61168();
  puVar3 = puVar1;
  func_0x000107c40880();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5fe10();
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x0001000f66f0(puVar2,param_2,puVar4);
  func_0x000107c6142c(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
    func_0x000107c6142c(param_2);
    return;
  }
  uVar5 = 0x4b20646574696e55;
  lVar6 = -0x11ff92909b989197;
  func_0x000107c5fadc(0x4b20646574696e55);
  puVar3 = puVar1;
  func_0x000107c40864();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  if (puVar3 == (undefined *)0x0) {
LAB_1016d76d4:
    uVar5 = 0x646e616c656349;
    lVar6 = -0x1900000000000000;
    func_0x000107c5fadc(0x646e616c656349);
    puVar3 = puVar1;
    func_0x000107c40864();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar3;
      func_0x000107c5faec();
      func_0x000107c61170(puVar3);
      if ((puVar2 == puVar4) && (param_2 == lVar6)) goto LAB_1016d7864;
      puVar3 = puVar2;
      func_0x000107c605b8(puVar2,param_2,puVar4,lVar6,0);
      func_0x000107c6142c(lVar6);
      lVar6 = param_2;
      if (((ulong)puVar3 & 1) != 0) goto LAB_1016d7870;
    }
    uVar5 = 0x6e6574686365694c;
    lVar6 = -0x12ffff91969a8b8d;
    func_0x000107c5fadc(0x6e6574686365694c);
    puVar3 = puVar1;
    func_0x000107c40864();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar3;
      func_0x000107c5faec();
      func_0x000107c61170(puVar3);
      if ((puVar2 == puVar4) && (param_2 == lVar6)) goto LAB_1016d7864;
      puVar3 = puVar2;
      func_0x000107c605b8(puVar2,param_2,puVar4,lVar6,0);
      func_0x000107c6142c(lVar6);
      lVar6 = param_2;
      if (((ulong)puVar3 & 1) != 0) goto LAB_1016d7870;
    }
    uVar5 = 0x796177726f4e;
    lVar6 = -0x1a00000000000000;
    func_0x000107c5fadc(0x796177726f4e);
    func_0x000107c40864();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (puVar1 == (undefined *)0x0) {
      func_0x000107c6142c(param_2);
    }
    else {
      puVar3 = puVar1;
      func_0x000107c5faec();
      func_0x000107c61170(puVar1);
      if ((puVar2 == puVar3) && (param_2 == lVar6)) goto LAB_1016d7864;
      func_0x000107c605b8(puVar2,param_2,puVar3,lVar6,0);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(lVar6);
      if (((ulong)puVar2 & 1) != 0) goto LAB_1016d7878;
    }
    func_0x000107c61408(0x112dc1fe8,4,PTR___sSSN_11034da80);
  }
  else {
    puVar4 = puVar3;
    func_0x000107c5faec();
    func_0x000107c61170(puVar3);
    if ((puVar2 == puVar4) && (param_2 == lVar6)) {
LAB_1016d7864:
      func_0x000107c6142c(param_2);
    }
    else {
      puVar3 = puVar2;
      func_0x000107c605b8(puVar2,param_2,puVar4,lVar6,0);
      func_0x000107c6142c(lVar6);
      lVar6 = param_2;
      if (((ulong)puVar3 & 1) == 0) goto LAB_1016d76d4;
    }
LAB_1016d7870:
    func_0x000107c6142c(lVar6);
LAB_1016d7878:
    func_0x000107c61408(0x112dc1fe8,4,PTR___sSSN_11034da80);
  }
  return;
}



/* Entry: 1016d7904; end: 1016d7ba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1016d7904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5,undefined8 param_6,ulong param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar3 = auStack_60;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dc2028) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dc2030) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112dc2038) = param_3;
  *(undefined1 **)(unaff_x20 + _DAT_112dc2040) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc2048);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(auStack_60,puVar2);
  puVar4 = param_4;
  if ((param_7 & 1) != 0) {
    puVar4 = puVar3;
    func_0x000107c61174(puVar3);
    func_0x0001016d7a30();
    func_0x000107c61170(param_4);
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return puVar3;
}



/* Entry: 1016d7ba8; end: 1016d7c83; -[_TtC28MapComplianceServiceProvider29MapUKUnder18ComplianceChecker initWithUserBirthdayProvider:userRegistrationInfoProvider:applicationPreferences:featureSettingsService:currentUserId:isFromRegistration:] */

undefined8
FUN_1016d7ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_7);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  uVar1 = param_3;
  FUN_1016d8238(param_3,param_4,param_5,param_6,param_7,param_2,param_8);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  return uVar1;
}



/* Entry: 1016d7c84; end: 1016d7cb7; -[_TtC28MapComplianceServiceProvider29MapUKUnder18ComplianceChecker isUKUnder18] */

uint FUN_1016d7c84(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1016d7cb8();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1016d7cb8; end: 1016d7f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d7cb8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  
  uVar1 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(uVar1 - 8);
  uVar2 = uVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  func_0x000109022344();
  if ((uVar2 & 1) == 0) {
    puVar3 = *(undefined **)(unaff_x20 + _DAT_112dc2030);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar3;
      func_0x000107c41050();
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      if (puVar4 != (undefined *)0x0) {
        puVar3 = puVar4;
        func_0x000107c4fcfc();
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        if (puVar3 != (undefined *)0x0) {
          puVar4 = puVar3;
          func_0x000107c5faec();
          func_0x000107c61170(puVar3);
          puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
          func_0x000107c61168();
          uVar5 = 0x4b20646574696e55;
          lVar8 = -0x11ff92909b989197;
          func_0x000107c5fadc(0x4b20646574696e55);
          func_0x000107c40864();
          func_0x000107c61180();
          func_0x000107c61170(uVar5);
          if (puVar3 == (undefined *)0x0) {
            func_0x000107c6142c(param_2);
          }
          else {
            puVar6 = puVar3;
            func_0x000107c5faec();
            func_0x000107c61170(puVar3);
            if (puVar4 == puVar6 && param_2 == lVar8) {
              func_0x000107c6142c(param_2);
              func_0x000107c6142c(lVar8);
            }
            else {
              func_0x000107c605b8(puVar4,param_2,puVar6,lVar8,0);
              func_0x000107c6142c(param_2);
              func_0x000107c6142c(lVar8);
              if (((ulong)puVar4 & 1) == 0) {
                return;
              }
            }
            lVar8 = *(long *)(unaff_x20 + _DAT_112dc2028);
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar8 != 0) {
              lVar7 = lVar8;
              func_0x000107c41050();
              func_0x000107c61180();
              func_0x000107c61170(lVar8);
              if (lVar7 != 0) {
                func_0x000107c5eea0(&stack0xffffffffffffffa0 +
                                    -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
                func_0x000107c5ee70();
                (**(code **)(lVar9 + 8))
                          (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                           uVar1);
                func_0x000107c3da20(lVar7);
                func_0x000107c61170(lVar8);
                func_0x000107c61170(lVar7);
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1016d7f10; end: 1016d7f43; -[_TtC28MapComplianceServiceProvider29MapUKUnder18ComplianceChecker isConsentRequiredForCurrentUser] */

uint FUN_1016d7f10(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1016d7f44();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1016d7f44; end: 1016d816b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1016d7f44(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 auStack_70 [3];
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000109022344();
  if ((param_1 & 1) != 0) {
    return 1;
  }
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112dc2048);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112dc2048))[1];
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x19);
  func_0x000107c6142c(uStack_48);
  uStack_50 = 0xd000000000000017;
  uStack_48 = 0x800000010efb7b20;
  func_0x000107c5fb78(uVar7,uVar1);
  uVar1 = uStack_48;
  uVar7 = uStack_50;
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112dc2038);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar2 == 0) {
    func_0x000107c6142c(uVar1);
  }
  else {
    func_0x000107c5fadc(uVar7,uVar1);
    func_0x000107c6142c(uVar1);
    uVar3 = uVar2;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar7);
    if (uVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c61168(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar2 = uVar3;
      func_0x000107c6148c(uVar3,puVar4);
      if (uVar2 == 0) {
        func_0x000107c615e8(uVar3);
      }
      else {
        func_0x000107c3ebcc();
        func_0x000107c615e8(uVar3);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
      }
    }
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112dc2040);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x000107c5dc1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 != 0) {
      func_0x000107c60234(&uStack_50,lVar6);
      func_0x000107c615e8(lVar6);
      goto LAB_1016d80d4;
    }
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
LAB_1016d80d4:
  func_0x000100672b50(&uStack_50,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(&uStack_50);
    puVar8 = auStack_70;
  }
  else {
    uVar7 = 0;
    func_0x0001002ed07c(0);
    puVar8 = &uStack_78;
    func_0x000107c6147c(puVar8,auStack_70,PTR___sypN_11034f1a8 + 8,uVar7,6);
    if (((ulong)puVar8 & 1) != 0) {
      uVar7 = uStack_78;
      func_0x000107c3ebcc(uStack_78);
      func_0x000107c61170(uStack_78);
      func_0x00010006e7f4(&uStack_50);
      return uVar7;
    }
    puVar8 = &uStack_50;
  }
  func_0x00010006e7f4(puVar8);
  return 0;
}



/* Entry: 1016d816c; end: 1016d81cb; -[_TtC28MapComplianceServiceProvider29MapUKUnder18ComplianceChecker init] */

void FUN_1016d816c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapComplianceServiceProvider.MapUKUnder18ComplianceChecker",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016d8198);
  (*pcVar1)();
}



/* Entry: 1016d81cc; end: 1016d8237; -[_TtC28MapComplianceServiceProvider29MapUKUnder18ComplianceChecker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d81cc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dc2028));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dc2030));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dc2038));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dc2040));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112dc2048 + 8))
  ;
  return;
}



/* Entry: 1016d8238; end: 1016d832b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d8238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112dc2028) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dc2030) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112dc2038) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112dc2040) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc2048);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&stack0xffffffffffffffa0,puVar2);
  if ((param_7 & 1) != 0) {
    func_0x000107c61174();
    func_0x0001016d7a30();
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 1016d832c; end: 1016d8377; -[_TtC44MemoriesDirectCameraRollProviderServicesImpl23MemoriesCameraRollAlbum id2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d832c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112dc2078);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112dc2078))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1016d8378; end: 1016d83b3; -[_TtC44MemoriesDirectCameraRollProviderServicesImpl23MemoriesCameraRollAlbum setId2:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d8378(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112dc2078);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1016d83b4; end: 1016d840f; -[_TtC44MemoriesDirectCameraRollProviderServicesImpl23MemoriesCameraRollAlbum name] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d83b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112dc2080))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112dc2080);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1016d8410; end: 1016d845b; -[_TtC44MemoriesDirectCameraRollProviderServicesImpl23MemoriesCameraRollAlbum setName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d8410(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112dc2080);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 1016d845c; end: 1016d846b; -[_TtC44MemoriesDirectCameraRollProviderServicesImpl23MemoriesCameraRollAlbum isDefault] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d845c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112dc2088));
  return;
}



/* Entry: 1016d846c; end: 1016d849f; -[_TtC44MemoriesDirectCameraRollProviderServicesImpl23MemoriesCameraRollAlbum setIsDefault:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d846c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112dc2088);
  *(undefined8 *)(param_1 + _DAT_112dc2088) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1016d84a0; end: 1016d84af; -[_TtC44MemoriesDirectCameraRollProviderServicesImpl23MemoriesCameraRollAlbum itemCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d84a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112dc2090));
  return;
}



/* Entry: 1016d84b0; end: 1016d84e3; -[_TtC44MemoriesDirectCameraRollProviderServicesImpl23MemoriesCameraRollAlbum setItemCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d84b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112dc2090);
  *(undefined8 *)(param_1 + _DAT_112dc2090) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1016d84e4; end: 1016d8543; -[_TtC44MemoriesDirectCameraRollProviderServicesImpl23MemoriesCameraRollAlbum init] */

void FUN_1016d84e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesDirectCameraRollProviderServicesImpl.MemoriesCameraRollAlbum",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016d8510);
  (*pcVar1)();
}



/* Entry: 1016d8544; end: 1016d85a3; -[_TtC44MemoriesDirectCameraRollProviderServicesImpl23MemoriesCameraRollAlbum .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001016d8588: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016d858c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d8544(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112dc2078 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112dc2080 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc2088));
  return;
}



/* Entry: 1016d85a4; end: 1016d8613;  */

void FUN_1016d85a4(void)

{
  func_0x000107c61168(&PTR_PTR_1127e7998);
  return;
}



/* Entry: 1016d8614; end: 1016d8623;  */

void FUN_1016d8614(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1016d8624; end: 1016d868f;  */

void FUN_1016d8624(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_1016dd678();
  func_0x000107c610f8();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  uVar1 = param_2;
  func_0x0001016dcf98(param_2,param_3);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  *param_1 = uVar1;
  return;
}



/* Entry: 1016d8690; end: 1016d8697;  */

void FUN_1016d8690(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_1016dd678();
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  uVar3 = uVar1;
  func_0x0001016dcf98(uVar1,uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  *param_1 = uVar3;
  return;
}



/* Entry: 1016d8698; end: 1016d8743;  */

undefined8 FUN_1016d8698(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  func_0x0001016dcf98(param_1,param_2);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  return uVar1;
}



/* Entry: 1016d8744; end: 1016d890b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d8744(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112dc2128;
  if (param_3 != 0) {
    uVar6 = *(undefined8 *)(param_3 + _DAT_112dc2128);
    func_0x000107c6157c(uVar6);
    puVar4 = PTR___sytN_11034f1b0;
    func_0x000100075034(FUN_1016d890c,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar6);
    if (param_2 != 0) {
      uVar7 = param_2 & 0xffffffffffffff8;
      if (param_2 >> 0x3e == 0) {
        uVar3 = *(ulong *)(uVar7 + 0x10);
      }
      else {
        uVar3 = param_2;
        if (-1 < (long)param_2) {
          uVar3 = uVar7;
        }
        func_0x000107c60480();
      }
      if (uVar3 != 0) {
        if ((param_2 & 0xc000000000000001) == 0) {
          if (*(long *)(uVar7 + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1016d890c);
            (*pcVar2)();
          }
          uVar6 = *(undefined8 *)(param_2 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar6 = 0;
          FUN_1016dc9c4(0,param_2,&PTR_PTR_1126d22a8,0x112dc21d0);
        }
        uVar8 = *(undefined8 *)(param_3 + lVar1);
        lStack_b0 = param_3;
        uStack_a8 = uVar6;
        uStack_a0 = param_5;
        uStack_98 = param_1;
        uStack_90 = param_4;
        func_0x000107c6157c(uVar8);
        func_0x000100075034(FUN_1016dd8b4,auStack_c0,puVar4 + 8);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(param_3);
        func_0x000107c61574(uVar8);
        return;
      }
    }
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sypN_11034f1a8 + 8);
    func_0x000107c45788(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c4d664(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 1016d890c; end: 1016d896f;  */

void FUN_1016d890c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    func_0x000107c5fd50(lVar1,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                        PTR___ss5NeverOs5ErrorsWP_11034ee90);
    func_0x000107c61574(lVar1);
  }
  *param_1 = 0;
  return;
}



/* Entry: 1016d8970; end: 1016d8a83;  */

void FUN_1016d8970(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61574(*param_2);
  puVar1 = &UNK_1103fa1b8;
  func_0x000107c613fc(&UNK_1103fa1b8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_3);
  puVar2 = &UNK_1103fa480;
  func_0x000107c613fc(&UNK_1103fa480,0x38,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_4);
  uVar3 = 0x40;
  func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10d97ec58,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  *param_2 = uVar3;
  return;
}



/* Entry: 1016d8a84; end: 1016d8aa7;  */

void FUN_1016d8a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016d8aa8,0,0);
  return;
}



/* Entry: 1016d8aa8; end: 1016d8c8f;  */

/* WARNING: Removing unreachable block (ram,0x0001016d8b0c) */
/* WARNING: Removing unreachable block (ram,0x0001016d8b8c) */
/* WARNING: Removing unreachable block (ram,0x0001016d8b44) */

void FUN_1016d8aa8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x10,0,0);
  puVar1 = (undefined *)(lVar6 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x000107c5fd5c();
    if (((ulong)puVar2 & 1) == 0) {
      uVar3 = *(ulong *)(unaff_x22 + 0x30);
      FUN_1016dd2d0(*(undefined8 *)(unaff_x22 + 0x40));
      uVar4 = uVar3;
      func_0x000107c5fd5c();
      if ((uVar4 & 1) == 0) {
        uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
        uVar4 = uVar3;
        func_0x0001016d8e80(uVar3,&PTR_PTR_1126c6610,0x112d6bde8);
        func_0x000107c6142c(uVar3);
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
        uVar3 = uVar4;
        func_0x000107c5fc48(uVar4,PTR___sypN_11034f1a8 + 8);
        func_0x000107c6142c(uVar4);
        func_0x000107c45788(puVar2);
        func_0x000107c61170(uVar3);
        func_0x000107c4d664(uVar5);
        func_0x000107c61170(puVar1);
        puVar1 = puVar2;
      }
      else {
        func_0x000107c6142c(uVar3);
      }
    }
    func_0x000107c61170(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001016d8b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016d8c90; end: 1016d906b;  */

undefined * FUN_1016d8c90(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016d8e80);
      (*pcVar2)();
    }
    puVar6 = puStack_68;
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar8;
        func_0x000107c615f0();
        uVar4 = 0x112dc21a0;
        func_0x0001000285a8(0x112dc21a0,&UNK_10d97ec18);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        FUN_1016dcb80(uVar7,param_1);
        uVar4 = 0x112dc21a0;
        uStack_90 = uVar3;
        func_0x0001000285a8(0x112dc21a0,&UNK_10d97ec18);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 1016d906c; end: 1016d9227;  */

void FUN_1016d906c(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0;
    FUN_1016dd998(0,0x112dc21d0,&PTR_PTR_1126d22a8);
    func_0x000107c5fc54(param_2,uVar3);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1016d9228; end: 1016d94b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d9228(long *param_1,long *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined *puVar3;
  
  lVar10 = *param_2;
  if (lVar10 == 0) {
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000100083b20(&puStack_b0);
    puVar9 = puStack_b0;
    if (puStack_b0 == (undefined *)0x0) {
      lVar4 = 0;
      func_0x0001016de990();
      lVar7 = lVar4;
      func_0x000107c610f8();
      *(undefined4 *)(lVar7 + _DAT_112dc2230) = 1;
      plVar8 = &lStack_70;
      lStack_70 = lVar7;
      lStack_68 = lVar4;
      func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
      func_0x000107c4d664(puVar2);
      func_0x000107c61170(plVar8);
      puVar9 = puVar2;
      func_0x000107c5cb24();
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      *param_1 = (long)puVar9;
    }
    else {
      puVar3 = puStack_b0;
      func_0x000107c614f0();
      uVar1 = SUB84(puVar3,0);
      func_0x0001016de9b0();
      lVar4 = 0;
      func_0x0001016de990();
      lVar7 = lVar4;
      func_0x000107c610f8();
      *(undefined4 *)(lVar7 + _DAT_112dc2230) = uVar1;
      plVar8 = &lStack_80;
      lStack_80 = lVar7;
      lStack_78 = lVar4;
      func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
      func_0x000107c4d664(puVar2);
      puVar5 = puStack_b0;
      func_0x000107c4e6ec(puStack_b0);
      func_0x000107c61180();
      puVar3 = &UNK_1103fa4a8;
      func_0x000107c613fc(&UNK_1103fa4a8,0x28,7);
      *(long **)(puVar3 + 0x10) = plVar8;
      *(undefined **)(puVar3 + 0x18) = puStack_b0;
      *(undefined **)(puVar3 + 0x20) = puVar2;
      pcStack_90 = FUN_1016dd9d8;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      pcStack_a0 = FUN_1016d94b8;
      puStack_98 = &UNK_1103fa4c0;
      ppuVar6 = &puStack_b0;
      puStack_88 = puVar3;
      func_0x000107c60bc4(ppuVar6);
      puVar3 = puStack_88;
      func_0x000107c615f0(puVar9);
      func_0x000107c61174(plVar8);
      func_0x000107c61174();
      func_0x000107c61574(puVar3);
      puVar3 = puVar5;
      func_0x000107c5c320(puVar5);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(puVar5);
      func_0x000107c3e924(puVar3);
      func_0x000107c61170(puVar3);
      puVar3 = puVar2;
      func_0x000107c5cb24();
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      func_0x000107c615e8(puVar9);
      func_0x000107c61170(plVar8);
      *param_2 = (long)puVar3;
      *param_1 = (long)puVar3;
      func_0x000107c61174(puVar3);
    }
  }
  else {
    *param_1 = lVar10;
  }
  func_0x000107c61174(lVar10);
  return;
}



/* Entry: 1016d94b8; end: 1016d9503;  */

void FUN_1016d94b8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1016d9504; end: 1016d958f; -[_TtC44MemoriesDirectCameraRollProviderServicesImpl32MemoriesDirectCameraRollProvider limitPhotoLibraryAccessObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d9504(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112dc20e0);
  lStack_40 = param_1;
  func_0x000107c61174();
  func_0x000107c6157c(uVar2);
  uVar1 = 0x112d6cfe8;
  func_0x0001000285a8(0x112d6cfe8,&UNK_10d92fd10);
  func_0x000100075034(&uStack_38,0x1016ddc7c,auStack_50,uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_38);
  return;
}



/* Entry: 1016d9590; end: 1016da5ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1016d9590(double param_1,undefined *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  ulong uVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar12;
  long unaff_x20;
  code *pcVar13;
  code *pcVar14;
  long lVar15;
  undefined *puVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  ulong auStack_b0 [2];
  code *pcStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  puVar1 = (undefined *)0x0;
  func_0x000107c5eea4();
  puStack_f0 = *(undefined **)(puVar1 + -8);
  puStack_e8 = puVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puStack_f0 + 0x40));
  lVar7 = (long)&puStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar15 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puStack_e0 = puVar1;
  func_0x000107c4b624(param_2);
  puVar1 = param_2;
  dVar18 = param_1;
  func_0x000107c61150(param_2,PTR_s_respondsToSelector__11262c7e0,PTR_s_offset_112616128);
  puVar16 = (undefined *)0x0;
  if (((ulong)puVar1 & 1) != 0) {
    puVar16 = param_2;
    func_0x000107c4db10();
    func_0x000107c61180();
  }
  puVar1 = param_2;
  puVar5 = PTR_s_respondsToSelector__11262c7e0;
  func_0x000107c61150(param_2,PTR_s_respondsToSelector__11262c7e0,PTR_s_albumId_11259d668);
  if (((ulong)puVar1 & 1) == 0) {
LAB_1016d96f0:
    puVar9 = (undefined *)0x0;
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar1 = param_2;
    func_0x000107c3dab4();
    func_0x000107c61180();
    if (puVar1 == (undefined *)0x0) goto LAB_1016d96f0;
    puVar9 = puVar1;
    func_0x000107c5faec();
    func_0x000107c61170(puVar1);
  }
  puVar1 = param_2;
  func_0x000107c61150(param_2,PTR_s_respondsToSelector__11262c7e0,PTR_s_mediaType_11260f520);
  if (((ulong)puVar1 & 1) == 0) {
    puStack_c0 = (undefined *)0x0;
  }
  else {
    puStack_c0 = param_2;
    func_0x000107c4ca5c();
    func_0x000107c61180();
  }
  puVar1 = param_2;
  func_0x000107c61150(param_2,PTR_s_respondsToSelector__11262c7e0,PTR_s_startDateMs_112671438);
  if (((ulong)puVar1 & 1) == 0) {
    puStack_d0 = (undefined *)0x0;
  }
  else {
    puStack_d0 = param_2;
    func_0x000107c5bab4();
    func_0x000107c61180();
  }
  puVar1 = param_2;
  func_0x000107c61150(param_2,PTR_s_respondsToSelector__11262c7e0,PTR_s_endDateMs_1125c2b50);
  if (((ulong)puVar1 & 1) == 0) {
    puStack_c8 = (undefined *)0x0;
  }
  else {
    puStack_c8 = param_2;
    func_0x000107c42800();
    func_0x000107c61180();
  }
  puVar1 = param_2;
  func_0x000107c61150(param_2,PTR_s_respondsToSelector__11262c7e0,PTR_s_favoritesOnly_1125c5ed8);
  if (((ulong)puVar1 & 1) == 0) {
    param_2 = (undefined *)0x0;
  }
  else {
    func_0x000107c42e2c();
    func_0x000107c61180();
  }
  func_0x000100083b20(auStack_b0);
  puVar1 = puStack_c8;
  if (auStack_b0[0] == 0) {
    func_0x000107c6142c(puVar5);
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sypN_11034f1a8 + 8);
    func_0x000107c45788(puVar9);
    func_0x000107c61170(puVar5);
    puVar5 = puStack_e0;
    func_0x000107c4d664(puStack_e0);
    func_0x000107c61170(puVar9);
    puVar9 = puVar5;
    func_0x000107c5cb24(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puStack_c8 = puStack_d0;
  }
  else {
    uVar2 = auStack_b0[0];
    func_0x000107c614f0();
    func_0x0001016dea04();
    if ((uVar2 & 1) == 0) {
      func_0x000107c6142c(puVar5);
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sypN_11034f1a8 + 8);
      func_0x000107c45788(puVar9);
      func_0x000107c61170(puVar5);
      puVar5 = puStack_e0;
      func_0x000107c4d664(puStack_e0);
      func_0x000107c61170(puVar9);
      puVar9 = puVar5;
      func_0x000107c5cb24(puVar5);
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
    }
    else {
      uStack_f8 = auStack_b0[0];
      FUN_1016de110(puVar9,puVar5);
      func_0x000107c6142c(puVar5);
      if (puVar9 != (undefined *)0x0) {
        puStack_100 = param_2;
        if (puStack_d0 == (undefined *)0x0) {
          puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (puStack_c8 != (undefined *)0x0) {
            func_0x000107c4223c();
            func_0x000107c5ee88(lVar7,dVar18 / 1000.0);
            FUN_1016dd998(0,0x112d60c90,&PTR__OBJC_CLASS___NSPredicate_1126b06d0);
            lVar12 = 0x112d36008;
            func_0x0001000285a8(0x112d36008,&UNK_10d900720);
            func_0x000107c613fc();
            *(undefined8 *)(lVar12 + 0x18) = 2;
            *(undefined8 *)(lVar12 + 0x10) = 1;
            lVar15 = lVar12;
            func_0x000107c5ee70();
            uVar8 = 0;
            FUN_1016dd998(0,0x112d60c98,&PTR__OBJC_CLASS___NSDate_1126ae770);
            *(undefined8 *)(lVar12 + 0x38) = uVar8;
            uVar8 = 0x112d60ca0;
            FUN_1016dd4e8(0x112d60ca0,0x112d60c98,&PTR__OBJC_CLASS___NSDate_1126ae770);
            *(undefined8 *)(lVar12 + 0x40) = uVar8;
            *(long *)(lVar12 + 0x20) = lVar15;
            puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
            uVar8 = 0xd000000000000012;
            func_0x000107c5ff38(0xd000000000000012,0x800000010efb7bd0,lVar12);
            func_0x000107c61174();
            if ((ulong)puVar1 >> 0x3e == 0) {
              puVar5 = *(undefined **)(((ulong)puVar1 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar5 = (undefined *)((ulong)puVar1 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar1) {
                puVar5 = puVar1;
              }
              func_0x000107c60480(puVar5);
            }
            puVar6 = (undefined *)0x0;
            FUN_1016dc108(0,puVar5 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8,0x112d60c90,
                          &PTR__OBJC_CLASS___NSPredicate_1126b06d0,0x112dc21c8,&UNK_10d97ec40);
            uVar11 = (ulong)puVar6 & 0xffffffffffffff8;
            uVar2 = *(ulong *)(uVar11 + 0x10);
            puVar1 = puVar6;
            if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar2) {
              puVar1 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
              FUN_1016dc108(puVar1,uVar2 + 1,1,puVar6,0x112d60c90,
                            &PTR__OBJC_CLASS___NSPredicate_1126b06d0,0x112dc21c8,&UNK_10d97ec40);
              uVar11 = (ulong)puVar1 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar11 + 0x10) = uVar2 + 1;
            *(undefined8 *)(uVar11 + uVar2 * 8 + 0x20) = uVar8;
            func_0x000107c61170(uVar8);
            (**(code **)(puStack_f0 + 8))(lVar7,puStack_e8);
          }
        }
        else {
          func_0x000107c4223c(puStack_d0);
          if (puStack_c8 == (undefined *)0x0) {
            func_0x000107c4223c(puStack_d0);
            func_0x000107c5ee88(lVar15,dVar18 / 1000.0);
            FUN_1016dd998(0,0x112d60c90,&PTR__OBJC_CLASS___NSPredicate_1126b06d0);
            lVar12 = 0x112d36008;
            func_0x0001000285a8(0x112d36008,&UNK_10d900720);
            func_0x000107c613fc();
            *(undefined8 *)(lVar12 + 0x18) = 2;
            *(undefined8 *)(lVar12 + 0x10) = 1;
            lVar7 = lVar12;
            func_0x000107c5ee70();
            uVar8 = 0;
            FUN_1016dd998(0,0x112d60c98,&PTR__OBJC_CLASS___NSDate_1126ae770);
            *(undefined8 *)(lVar12 + 0x38) = uVar8;
            uVar8 = 0x112d60ca0;
            FUN_1016dd4e8(0x112d60ca0,0x112d60c98,&PTR__OBJC_CLASS___NSDate_1126ae770);
            *(undefined8 *)(lVar12 + 0x40) = uVar8;
            *(long *)(lVar12 + 0x20) = lVar7;
            uVar8 = 0xd000000000000012;
            func_0x000107c5ff38(0xd000000000000012,0x800000010efb7bf0,lVar12);
            puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
            func_0x000107c61174();
            if ((ulong)puVar1 >> 0x3e == 0) {
              puVar5 = *(undefined **)(((ulong)puVar1 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar5 = (undefined *)((ulong)puVar1 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar1) {
                puVar5 = puVar1;
              }
              func_0x000107c60480(puVar5);
            }
            puVar6 = (undefined *)0x0;
            FUN_1016dc108(0,puVar5 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8,0x112d60c90,
                          &PTR__OBJC_CLASS___NSPredicate_1126b06d0,0x112dc21c8,&UNK_10d97ec40);
            uVar11 = (ulong)puVar6 & 0xffffffffffffff8;
            uVar2 = *(ulong *)(uVar11 + 0x10);
            puVar1 = puVar6;
            if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar2) {
              puVar1 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
              FUN_1016dc108(puVar1,uVar2 + 1,1,puVar6,0x112d60c90,
                            &PTR__OBJC_CLASS___NSPredicate_1126b06d0,0x112dc21c8,&UNK_10d97ec40);
              uVar11 = (ulong)puVar1 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar11 + 0x10) = uVar2 + 1;
            *(undefined8 *)(uVar11 + uVar2 * 8 + 0x20) = uVar8;
            func_0x000107c61170(uVar8);
            (**(code **)(puStack_f0 + 8))(lVar15,puStack_e8);
          }
          else {
            dVar19 = dVar18;
            puStack_108 = puVar9;
            func_0x000107c4223c();
            func_0x000107c5ee88(lVar12 - extraout_x12_01,dVar18 / 1000.0);
            func_0x000107c5ee88(lVar12,dVar19 / 1000.0);
            puVar1 = (undefined *)0x0;
            FUN_1016dd998(0,0x112d60c90,&PTR__OBJC_CLASS___NSPredicate_1126b06d0);
            lVar7 = 0x112d36008;
            puStack_110 = puVar1;
            func_0x0001000285a8(0x112d36008,&UNK_10d900720);
            func_0x000107c613fc();
            *(undefined8 *)(lVar7 + 0x18) = 4;
            *(undefined8 *)(lVar7 + 0x10) = 2;
            lVar15 = lVar7;
            func_0x000107c5ee70();
            uVar3 = 0;
            FUN_1016dd998(0,0x112d60c98,&PTR__OBJC_CLASS___NSDate_1126ae770);
            *(undefined8 *)(lVar7 + 0x38) = uVar3;
            uVar8 = 0x112d60ca0;
            FUN_1016dd4e8(0x112d60ca0,0x112d60c98,&PTR__OBJC_CLASS___NSDate_1126ae770);
            *(undefined8 *)(lVar7 + 0x40) = uVar8;
            *(long *)(lVar7 + 0x20) = lVar15;
            uVar4 = uVar8;
            func_0x000107c5ee70();
            *(undefined8 *)(lVar7 + 0x60) = uVar3;
            *(undefined8 *)(lVar7 + 0x68) = uVar8;
            *(undefined8 *)(lVar7 + 0x48) = uVar4;
            uVar8 = 0xd000000000000029;
            func_0x000107c5ff38(0xd000000000000029,0x800000010efb7c10,lVar7);
            puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
            func_0x000107c61174();
            if ((ulong)puVar1 >> 0x3e == 0) {
              puVar5 = *(undefined **)(((ulong)puVar1 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar5 = (undefined *)((ulong)puVar1 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar1) {
                puVar5 = puVar1;
              }
              func_0x000107c60480(puVar5);
            }
            puVar6 = (undefined *)0x0;
            FUN_1016dc108(0,puVar5 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8,0x112d60c90,
                          &PTR__OBJC_CLASS___NSPredicate_1126b06d0,0x112dc21c8,&UNK_10d97ec40);
            param_2 = puStack_100;
            puVar9 = puStack_108;
            uVar11 = (ulong)puVar6 & 0xffffffffffffff8;
            uVar2 = *(ulong *)(uVar11 + 0x10);
            puVar1 = puVar6;
            if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar2) {
              puVar1 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
              FUN_1016dc108(puVar1,uVar2 + 1,1,puVar6,0x112d60c90,
                            &PTR__OBJC_CLASS___NSPredicate_1126b06d0,0x112dc21c8,&UNK_10d97ec40);
              uVar11 = (ulong)puVar1 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar11 + 0x10) = uVar2 + 1;
            *(undefined8 *)(uVar11 + uVar2 * 8 + 0x20) = uVar8;
            func_0x000107c61170(uVar8);
            puVar5 = puStack_e8;
            pcVar13 = *(code **)(puStack_f0 + 8);
            (*pcVar13)(lVar12,puStack_e8);
            (*pcVar13)(lVar12 - extraout_x12_01,puVar5);
          }
        }
        if (param_2 != (undefined *)0x0) {
          iVar17 = (int)param_2;
          func_0x000107c3ebcc();
          if (iVar17 != 0) {
            FUN_1016dd998(0,0x112d60c90,&PTR__OBJC_CLASS___NSPredicate_1126b06d0);
            uVar8 = 0x657469726f766166;
            func_0x000107c5ff38(0x657469726f766166,0xef534559203d3d20,
                                PTR___swiftEmptyArrayStorage_11034f1c8);
            func_0x000107c61180();
            puVar5 = puVar1;
            func_0x000107c61550();
            if ((((int)puVar5 == 0) || ((long)puVar1 < 0)) ||
               (puVar5 = puVar1, ((ulong)puVar1 >> 0x3e & 1) != 0)) {
              if ((ulong)puVar1 >> 0x3e == 0) {
                puVar6 = *(undefined **)(((ulong)puVar1 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar6 = (undefined *)((ulong)puVar1 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar1) {
                  puVar6 = puVar1;
                }
                func_0x000107c60480(puVar6);
              }
              puVar5 = (undefined *)0x0;
              FUN_1016dc108(0,puVar6 + 1,1,puVar1,0x112d60c90,
                            &PTR__OBJC_CLASS___NSPredicate_1126b06d0,0x112dc21c8,&UNK_10d97ec40);
            }
            uVar11 = (ulong)puVar5 & 0xffffffffffffff8;
            uVar2 = *(ulong *)(uVar11 + 0x10);
            puVar1 = puVar5;
            if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar2) {
              puVar1 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
              FUN_1016dc108(puVar1,uVar2 + 1,1,puVar5,0x112d60c90,
                            &PTR__OBJC_CLASS___NSPredicate_1126b06d0,0x112dc21c8,&UNK_10d97ec40);
              uVar11 = (ulong)puVar1 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar11 + 0x10) = uVar2 + 1;
            *(undefined8 *)(uVar11 + uVar2 * 8 + 0x20) = uVar8;
            func_0x000107c61170(uVar8);
          }
        }
        if (puStack_c0 != (undefined *)0x0) {
          func_0x000107c49820();
          FUN_1016dd998(0,0x112d60c90,&PTR__OBJC_CLASS___NSPredicate_1126b06d0);
          lVar12 = 0x112d36008;
          func_0x0001000285a8(0x112d36008,&UNK_10d900720);
          func_0x000107c613fc();
          *(undefined8 *)(lVar12 + 0x18) = 2;
          *(undefined8 *)(lVar12 + 0x10) = 1;
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8();
          func_0x000107c46ed0();
          uVar8 = 0;
          FUN_1016dd998(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          *(undefined8 *)(lVar12 + 0x38) = uVar8;
          uVar8 = 0x112dc2100;
          FUN_1016dd4e8(0x112dc2100,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          *(undefined8 *)(lVar12 + 0x40) = uVar8;
          *(undefined **)(lVar12 + 0x20) = puVar5;
          uVar8 = 0x707954616964656d;
          func_0x000107c5ff38(0x707954616964656d,0xef4025203d3d2065,lVar12);
          func_0x000107c61180();
          puVar5 = puVar1;
          func_0x000107c61550();
          if ((((int)puVar5 == 0) || ((long)puVar1 < 0)) ||
             (puVar5 = puVar1, ((ulong)puVar1 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar1 >> 0x3e == 0) {
              puVar6 = *(undefined **)(((ulong)puVar1 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar6 = (undefined *)((ulong)puVar1 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar1) {
                puVar6 = puVar1;
              }
              func_0x000107c60480(puVar6);
            }
            puVar5 = (undefined *)0x0;
            FUN_1016dc108(0,puVar6 + 1,1,puVar1,0x112d60c90,&PTR__OBJC_CLASS___NSPredicate_1126b06d0
                          ,0x112dc21c8,&UNK_10d97ec40);
          }
          uVar11 = (ulong)puVar5 & 0xffffffffffffff8;
          uVar2 = *(ulong *)(uVar11 + 0x10);
          puVar1 = puVar5;
          if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar2) {
            puVar1 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
            FUN_1016dc108(puVar1,uVar2 + 1,1,puVar5,0x112d60c90,
                          &PTR__OBJC_CLASS___NSPredicate_1126b06d0,0x112dc21c8,&UNK_10d97ec40);
            uVar11 = (ulong)puVar1 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar11 + 0x10) = uVar2 + 1;
          *(undefined8 *)(uVar11 + uVar2 * 8 + 0x20) = uVar8;
          func_0x000107c61170(uVar8);
        }
        puVar5 = PTR_PTR_1126b2688;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c5e6fc();
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c61174();
        puVar6 = puVar5;
        func_0x000107c5e448(puVar5);
        func_0x000107c61180();
        puStack_e8 = puVar9;
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar6);
        if ((ulong)puVar1 >> 0x3e == 0) {
          puVar9 = *(undefined **)(((ulong)puVar1 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar9 = (undefined *)((ulong)puVar1 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar1) {
            puVar9 = puVar1;
          }
          func_0x000107c60480();
        }
        if (puVar9 != (undefined *)0x0) {
          uVar8 = 0;
          FUN_1016dd998(0,0x112d60c90,&PTR__OBJC_CLASS___NSPredicate_1126b06d0);
          puVar9 = puVar1;
          func_0x000107c5fc48(puVar1,uVar8);
          puVar6 = puVar5;
          func_0x000107c5e72c(puVar5);
          func_0x000107c61180();
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar6);
        }
        puVar10 = puVar5;
        func_0x000107c3ecc8();
        func_0x000107c61180();
        func_0x000100083b20(auStack_b0);
        puStack_f0 = puVar1;
        func_0x0001000a8868(auStack_b0,uStack_98);
        puVar1 = &UNK_1103fa1b8;
        func_0x000107c613fc(&UNK_1103fa1b8,0x18,7);
        func_0x000107c61614(puVar1 + 0x10,unaff_x20);
        puVar9 = &UNK_1103fa1e0;
        func_0x000107c613fc(&UNK_1103fa1e0,0x38,7);
        puVar6 = puStack_e0;
        *(undefined **)(puVar9 + 0x10) = puVar1;
        *(undefined **)(puVar9 + 0x18) = puVar10;
        *(undefined **)(puVar9 + 0x20) = puVar16;
        *(double *)(puVar9 + 0x28) = param_1;
        *(undefined **)(puVar9 + 0x30) = puStack_e0;
        pcVar14 = *(code **)(lStack_90 + 0x10);
        puStack_108 = puVar5;
        func_0x000107c61174();
        puStack_110 = puVar16;
        func_0x000107c61174(puVar6);
        func_0x000107c6157c(puVar1);
        func_0x000107c61174();
        pcVar13 = FUN_1016dd4c0;
        puStack_e0 = puVar10;
        (*pcVar14)(FUN_1016dd4c0,puVar9,uStack_98,lStack_90);
        func_0x000107c61574(puVar1);
        func_0x000107c61574(puVar9);
        func_0x0001000834e4(auStack_b0);
        uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112dc20f8);
        pcStack_a0 = pcVar13;
        func_0x000107c6157c(uVar8);
        func_0x000100075034(FUN_1016dd4d4,auStack_b0,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(uVar8);
        func_0x000107c614f0(pcVar13);
        func_0x000107c615f0(pcVar13);
        puVar1 = puStack_e0;
        FUN_1016dcd24(param_1);
        func_0x000107c615e8(pcVar13);
        puVar9 = puVar6;
        func_0x000107c5cb24(puVar6);
        func_0x000107c61180();
        func_0x000107c6142c(puStack_f0);
        func_0x000107c615e8(uStack_f8);
        func_0x000107c615e8(pcVar13);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puStack_108);
        func_0x000107c61170(puStack_110);
        func_0x000107c61170(puVar1);
        param_2 = puStack_e8;
        puVar1 = puStack_d0;
        puVar16 = puStack_c0;
        puStack_c0 = puStack_100;
        goto LAB_1016d9b98;
      }
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sypN_11034f1a8 + 8);
      func_0x000107c45788(puVar9);
      func_0x000107c61170(puVar5);
      puVar5 = puStack_e0;
      func_0x000107c4d664(puStack_e0);
      func_0x000107c61170(puVar9);
      puVar9 = puVar5;
      func_0x000107c5cb24(puVar5);
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      auStack_b0[0] = uStack_f8;
    }
    func_0x000107c615e8(auStack_b0[0]);
    puStack_c8 = puStack_d0;
  }
LAB_1016d9b98:
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puStack_c8);
  func_0x000107c61170(puStack_c0);
  func_0x000107c61170(puVar16);
  return puVar9;
}



/* Entry: 1016da5ac; end: 1016da6bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016da5ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    uVar2 = *(undefined8 *)(param_4 + _DAT_112dc20f8);
    func_0x000107c6157c(uVar2);
    uVar1 = 0x112dc21d8;
    func_0x0001000285a8(0x112dc21d8,&UNK_10d97ec48);
    func_0x000100075034(&lStack_70,0x1016ddc4c,0,uVar1);
    func_0x000107c61574(uVar2);
    if (lStack_70 == 0) {
      func_0x000107c61170(param_4);
    }
    else {
      func_0x000107c614f0(lStack_70);
      func_0x000107c615f0(lStack_70);
      FUN_1016dcd24(param_1);
      func_0x000107c61170(param_4);
      func_0x000107c615ec(lStack_70,2);
    }
  }
  return;
}



/* Entry: 1016da6c0; end: 1016da6cb; -[_TtC44MemoriesDirectCameraRollProviderServicesImpl32MemoriesDirectCameraRollProvider observeCameraRollWithQuery:] */

void FUN_1016da6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1016d9590(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016da6cc; end: 1016dac27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1016da6cc(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long unaff_x20;
  code *pcVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong auStack_a0 [2];
  code *pcStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126b7e38;
  func_0x000107c61168();
  func_0x000107c50198();
  func_0x000107c61180();
  uVar2 = param_1;
  puVar13 = PTR_s_respondsToSelector__11262c7e0;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,PTR_s_albumId_11259d668);
  if ((uVar2 & 1) == 0) {
LAB_1016da760:
    uVar14 = 0;
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1;
    func_0x000107c3dab4();
    func_0x000107c61180();
    if (uVar2 == 0) goto LAB_1016da760;
    uVar14 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
  }
  uVar2 = param_1;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,PTR_s_mediaType_11260f520);
  if ((uVar2 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c4ca5c();
    func_0x000107c61180();
  }
  func_0x000100083b20(auStack_a0);
  if (auStack_a0[0] != 0) {
    uVar2 = auStack_a0[0];
    func_0x000107c614f0();
    func_0x0001016dea04();
    if ((uVar2 & 1) != 0) {
      FUN_1016de110(uVar14,puVar13);
      func_0x000107c6142c(puVar13);
      if (uVar14 != 0) {
        puVar13 = PTR_PTR_1126b2688;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c5e6fc();
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c61174();
        puVar3 = puVar13;
        func_0x000107c5e448(puVar13);
        func_0x000107c61180();
        func_0x000107c61170(uVar14);
        func_0x000107c61170(puVar3);
        if (param_1 != 0) {
          func_0x000107c49820();
          lVar10 = 0x112d60c90;
          FUN_1016dbb78(0x112d60c90,&PTR__OBJC_CLASS___NSPredicate_1126b06d0,0x112dc21c8,
                        &UNK_10d97ec40);
          func_0x000107c613fc();
          *(undefined8 *)(lVar10 + 0x18) = 3;
          *(undefined8 *)(lVar10 + 0x10) = 1;
          uVar4 = 0;
          FUN_1016dd998(0,0x112d60c90,&PTR__OBJC_CLASS___NSPredicate_1126b06d0);
          lVar9 = 0x112d36008;
          func_0x0001000285a8(0x112d36008,&UNK_10d900720);
          func_0x000107c613fc();
          *(undefined8 *)(lVar9 + 0x18) = 2;
          *(undefined8 *)(lVar9 + 0x10) = 1;
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8();
          func_0x000107c46ed0();
          uVar5 = 0;
          FUN_1016dd998(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          *(undefined8 *)(lVar9 + 0x38) = uVar5;
          uVar5 = 0x112dc2100;
          FUN_1016dd4e8(0x112dc2100,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          *(undefined8 *)(lVar9 + 0x40) = uVar5;
          *(undefined **)(lVar9 + 0x20) = puVar3;
          uVar5 = 0x707954616964656d;
          func_0x000107c5ff38(0x707954616964656d,0xef4025203d3d2065,lVar9);
          *(undefined8 *)(lVar10 + 0x20) = uVar5;
          lVar9 = lVar10;
          func_0x000107c5fc48(lVar10,uVar4);
          func_0x000107c61574(lVar10);
          puVar3 = puVar13;
          func_0x000107c5e72c(puVar13);
          func_0x000107c61180();
          func_0x000107c61170(lVar9);
          func_0x000107c61170(puVar3);
        }
        puVar6 = puVar13;
        func_0x000107c3ecc8();
        func_0x000107c61180();
        func_0x000100083b20(auStack_a0);
        func_0x0001000a8868(auStack_a0,uStack_88);
        puVar3 = &UNK_1103fa1b8;
        func_0x000107c613fc(&UNK_1103fa1b8,0x18,7);
        func_0x000107c61614(puVar3 + 0x10,unaff_x20);
        puVar7 = &UNK_1103fa208;
        func_0x000107c613fc(&UNK_1103fa208,0x28,7);
        *(undefined **)(puVar7 + 0x10) = puVar3;
        *(undefined **)(puVar7 + 0x18) = puVar6;
        *(undefined **)(puVar7 + 0x20) = puVar1;
        pcVar12 = *(code **)(lStack_80 + 0x10);
        func_0x000107c6157c(puVar3);
        func_0x000107c61174(puVar6);
        func_0x000107c61174(puVar1);
        pcVar8 = FUN_1016dd548;
        (*pcVar12)(FUN_1016dd548,puVar7,uStack_88,lStack_80);
        func_0x000107c61574(puVar3);
        func_0x000107c61574(puVar7);
        func_0x0001000834e4(auStack_a0);
        uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dc2118);
        pcStack_90 = pcVar8;
        func_0x000107c6157c(uVar5);
        func_0x000100075034(FUN_1016ddc68,auStack_a0,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(uVar5);
        func_0x000107c614f0(pcVar8);
        func_0x000107c615f0(pcVar8);
        FUN_1016dd598();
        func_0x000107c615e8(pcVar8);
        puVar3 = puVar1;
        func_0x000107c5cb24(puVar1);
        func_0x000107c61180();
        func_0x000107c61170(puVar1);
        func_0x000107c61170(param_1);
        func_0x000107c615e8(auStack_a0[0]);
        func_0x000107c61170(uVar14);
        func_0x000107c61170(puVar13);
        func_0x000107c61170(puVar6);
        func_0x000107c615e8(pcVar8);
        return puVar3;
      }
      func_0x000107c615e8(auStack_a0[0]);
      goto LAB_1016dab80;
    }
    func_0x000107c615e8(auStack_a0[0]);
  }
  func_0x000107c6142c(puVar13);
LAB_1016dab80:
  lVar9 = 0;
  FUN_1016dd528();
  lVar10 = lVar9;
  func_0x000107c610f8();
  *(undefined8 *)(lVar10 + _DAT_112dc2108) = 0;
  *(undefined8 *)(lVar10 + _DAT_112dc2110) = 0;
  plVar11 = &lStack_70;
  lStack_70 = lVar10;
  lStack_68 = lVar9;
  func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
  func_0x000107c4d664(puVar1);
  func_0x000107c61170(plVar11);
  puVar13 = puVar1;
  func_0x000107c5cb24(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  return puVar13;
}



/* Entry: 1016dac28; end: 1016dad1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016dac28(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_3 + _DAT_112dc2118);
    func_0x000107c6157c(uVar2);
    uVar1 = 0x112dc21d8;
    func_0x0001000285a8(0x112dc21d8,&UNK_10d97ec48);
    func_0x000100075034(&lStack_60,FUN_1016ddc38,0,uVar1);
    func_0x000107c61574(uVar2);
    if (lStack_60 == 0) {
      func_0x000107c61170(param_3);
    }
    else {
      func_0x000107c614f0(lStack_60);
      func_0x000107c615f0(lStack_60);
      FUN_1016dd598();
      func_0x000107c61170(param_3);
      func_0x000107c615ec(lStack_60,2);
    }
  }
  return;
}



/* Entry: 1016dad20; end: 1016dad2b; -[_TtC44MemoriesDirectCameraRollProviderServicesImpl32MemoriesDirectCameraRollProvider observeCameraRollIndexWithQuery:] */

void FUN_1016dad20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1016da6cc(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016dad2c; end: 1016dad8b;  */

void FUN_1016dad2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  (*param_4)(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016dad8c; end: 1016dada3;  */

void FUN_1016dad8c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016dada4,0,0);
  return;
}



/* Entry: 1016dada4; end: 1016dafd7;  */

void FUN_1016dada4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  long unaff_x22;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1016de228();
  FUN_1016dafd8();
  uVar2 = 0;
  FUN_1016dd998(0,0x112dc2198,&PTR__OBJC_CLASS___PHCollectionList_1126a7990);
  func_0x000107c614e8();
  func_0x000107c432f8();
  func_0x000107c61180();
  puVar3 = &UNK_1103fa390;
  func_0x000107c613fc(&UNK_1103fa390,0x18,7);
  puVar8 = (ulong *)(puVar3 + 0x10);
  *puVar8 = (ulong)puVar1;
  puVar10 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x30) = 0x1016dd854;
  *(undefined **)(unaff_x22 + 0x38) = puVar3;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined8 *)(unaff_x22 + 0x20) = 0x1016ddc64;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_1103fa3a8;
  puVar4 = puVar10;
  func_0x000107c60bc4(puVar10);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(uVar11);
  func_0x000107c429cc(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c60bd0(puVar4);
  func_0x000107c61428(puVar8,puVar10,0,0);
  uVar9 = *puVar8;
  func_0x000107c61434(uVar9);
  func_0x000107c61574(puVar3);
  if (uVar9 >> 0x3e == 0) {
    func_0x000107c61434(uVar9);
    func_0x000107c605f8();
    uVar7 = uVar9;
  }
  else {
    uVar7 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar7 = uVar9;
    }
    func_0x000107c61434(uVar9);
    uVar2 = 0x112dc21a0;
    func_0x0001000285a8(0x112dc21a0,&UNK_10d97ec18);
    func_0x000107c60458(uVar7,uVar2);
    func_0x000107c6142c(uVar9);
  }
  func_0x000107c6142c(uVar9);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  FUN_1016dafd8(uVar7);
  puVar3 = puVar1;
  FUN_1016d8c90(puVar1);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar6 = puVar3;
  func_0x000107c5fc48(puVar3,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar3);
  func_0x000107c45788(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c4d664(uVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c6142c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001016daf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016dafd8; end: 1016db0c3;  */

void FUN_1016dafd8(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_1016dc7c8(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_1016dce34(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016db0c0);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016db0c4);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016db0bc);
  (*pcVar1)();
}



/* Entry: 1016db0c4; end: 1016db193; -[_TtC44MemoriesDirectCameraRollProviderServicesImpl32MemoriesDirectCameraRollProvider getAllCameraRollAlbums] */

void FUN_1016db0c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = &UNK_1103fa2a0;
  func_0x000107c613fc(&UNK_1103fa2a0,0x18,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  func_0x000107c61174(puVar1);
  uVar3 = 0x40;
  func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10d97ebf8,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  puVar2 = puVar1;
  func_0x000107c5cb24(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1016db194; end: 1016db1ab;  */

void FUN_1016db194(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016db1ac,0,0);
  return;
}



/* Entry: 1016db1ac; end: 1016db37b;  */

void FUN_1016db1ac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long unaff_x22;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  puVar2 = &UNK_1103fa340;
  func_0x000107c613fc(&UNK_1103fa340,0x18,7);
  puVar6 = (undefined8 *)(puVar2 + 0x10);
  *puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar3 = PTR__OBJC_CLASS___PHAssetCollection_1126bf858;
  func_0x000107c61168(PTR__OBJC_CLASS___PHAssetCollection_1126bf858);
  func_0x000107c5fc48(uVar9,PTR___sSSN_11034da80);
  func_0x000107c42fc0(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  *(code **)(unaff_x22 + 0x30) = FUN_1016dd84c;
  *(undefined **)(unaff_x22 + 0x38) = puVar2;
  puVar8 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_1016ddc60;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_1103fa358;
  puVar4 = puVar8;
  func_0x000107c60bc4(puVar8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(uVar9);
  func_0x000107c429cc(puVar3);
  func_0x000107c60bd0(puVar4);
  func_0x000107c61428(puVar6,puVar8,0,0);
  uVar7 = *puVar6;
  uVar9 = uVar7;
  func_0x000107c61434(uVar7);
  func_0x0001016d8e80();
  func_0x000107c6142c(uVar7);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar7 = uVar9;
  func_0x000107c5fc48(uVar9,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(uVar9);
  func_0x000107c45788(puVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c4d664(uVar1);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0001016db378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016db37c; end: 1016db453;  */

void FUN_1016db37c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_48 [24];
  
  FUN_1016de744();
  if (param_1 != 0) {
    func_0x000107c61428(param_4 + 0x10,auStack_48,0x21,0);
    func_0x000107c61174();
    func_0x0001016dbcd0();
    uVar3 = *(ulong *)(param_4 + 0x10);
    uVar4 = uVar3 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar4 + 0x10);
    uVar2 = uVar3;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
      uVar2 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_1016dc108(uVar2,uVar1 + 1,1,uVar3,0x112dc2188,&PTR_PTR_1126a7988,0x112dc2190,
                    &UNK_10d97ec08);
      uVar4 = uVar2 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    *(long *)(uVar4 + uVar1 * 8 + 0x20) = param_1;
    *(ulong *)(param_4 + 0x10) = uVar2;
    func_0x000107c614a8(auStack_48);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1016db454; end: 1016db547; -[_TtC44MemoriesDirectCameraRollProviderServicesImpl32MemoriesDirectCameraRollProvider getCameraRollAlbumThumbnailUriWithAlbumIds:] */

void FUN_1016db454(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = &UNK_1103fa278;
  func_0x000107c613fc(&UNK_1103fa278,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61434(param_3);
  func_0x000107c61174(puVar1);
  uVar3 = 0x40;
  func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10d97ebf0,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  puVar2 = puVar1;
  func_0x000107c5cb24(puVar1);
  func_0x000107c61180();
  func_0x000107c6142c(param_3);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1016db548; end: 1016db70b;  */

/* WARNING: Possible PIC construction at 0x0001016db5b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016db6c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016db5b4) */
/* WARNING: Removing unreachable block (ram,0x0001016db6e8) */
/* WARNING: Removing unreachable block (ram,0x0001016db5c4) */
/* WARNING: Removing unreachable block (ram,0x0001016db6c4) */

void FUN_1016db548(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  func_0x000107c61168(PTR__OBJC_CLASS___PHAsset_1126bd898);
  func_0x000107c5fc48(param_2,PTR___sSSN_11034da80);
  func_0x000107c42fcc(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1016db70c; end: 1016db79f;  */

void FUN_1016db70c(undefined8 *param_1,undefined *param_2)

{
  undefined *puVar1;
  
  if (((ulong)param_1 & 1) == 0) {
    puVar1 = param_2;
    if (param_2 == (undefined *)0x0) {
      FUN_1016dd80c();
      puVar1 = &UNK_1103fa590;
      func_0x000107c613f8(&UNK_1103fa590,param_1,0,0);
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 2;
    }
    func_0x000107c614b0(param_2);
    func_0x00010488ade0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
    return;
  }
  func_0x000100b60084();
  return;
}



/* Entry: 1016db7a0; end: 1016db853; -[_TtC44MemoriesDirectCameraRollProviderServicesImpl32MemoriesDirectCameraRollProvider deleteItemsWithItemIds:] */

void FUN_1016db7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  puVar1 = &UNK_1103fa250;
  func_0x000107c613fc(&UNK_1103fa250,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61434(param_3);
  uVar2 = 0;
  func_0x0001048897a0(0,1,0,0x1016ddca4,puVar1);
  func_0x000107c61574(puVar1);
  func_0x000103edf384();
  func_0x000107c6142c(param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1016db854; end: 1016db87f; -[_TtC44MemoriesDirectCameraRollProviderServicesImpl32MemoriesDirectCameraRollProvider init] */

void FUN_1016db854(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesDirectCameraRollProviderServicesImpl.MemoriesDirectCameraRollProvider"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016db880);
  (*pcVar1)();
}



/* Entry: 1016db880; end: 1016db883;  */

void FUN_1016db880(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016db884; end: 1016db90b; -[_TtC44MemoriesDirectCameraRollProviderServicesImpl32MemoriesDirectCameraRollProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001016db8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016db8d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016db8f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016db8d4) */
/* WARNING: Removing unreachable block (ram,0x0001016db8a4) */
/* WARNING: Removing unreachable block (ram,0x0001016db8f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016db884(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc20f0));
  return;
}



/* Entry: 1016db90c; end: 1016db91b; -[_TtC44MemoriesDirectCameraRollProviderServicesImplP33_B83D264440515B7CDDC0874964276C3C29MemoriesIndexedCameraRollData itemCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1016db90c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112dc2110);
}



/* Entry: 1016db91c; end: 1016db92b; -[_TtC44MemoriesDirectCameraRollProviderServicesImplP33_B83D264440515B7CDDC0874964276C3C29MemoriesIndexedCameraRollData setItemCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016db91c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112dc2110) = param_1;
  return;
}



/* Entry: 1016db92c; end: 1016db937; -[_TtC44MemoriesDirectCameraRollProviderServicesImplP33_B83D264440515B7CDDC0874964276C3C29MemoriesIndexedCameraRollData pushToValdiMarshaller:] */

undefined8 FUN_1016db92c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af97f34(param_3,param_1);
  func_0x00010af97f2c();
  func_0x00010af97ee8();
  func_0x00010af97ef8();
  return param_3;
}



/* Entry: 1016db938; end: 1016dba43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1016db938(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  
  bVar2 = false;
  if ((0.0 <= param_1) && (bVar2 = false, !NAN((double)(long)param_1) && !NAN(param_1))) {
    bVar2 = (double)(long)param_1 == param_1;
  }
  if (bVar2) {
    uVar3 = *(ulong *)(unaff_x20 + _DAT_112dc2108);
    if (uVar3 == 0) {
      return 0;
    }
    func_0x000107c61174();
    uVar4 = uVar3;
    func_0x000107c40808();
    if (param_1 < (double)uVar4) {
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016dba3c);
        (*pcVar1)();
      }
      if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016dba40);
        (*pcVar1)();
      }
      if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016dba44);
        (*pcVar1)();
      }
      uVar4 = uVar3;
      func_0x000107c4d9a0(uVar3,param_5,(long)param_1);
      func_0x000107c61180();
      if (uVar4 != 0) {
        uVar5 = uVar4;
        func_0x000105f60ed0(param_2,param_3);
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar4);
        return uVar5;
      }
    }
    func_0x000107c61170(uVar3);
  }
  return 0;
}



/* Entry: 1016dba44; end: 1016dba9f; -[_TtC44MemoriesDirectCameraRollProviderServicesImplP33_B83D264440515B7CDDC0874964276C3C29MemoriesIndexedCameraRollData getItemWithIndex:preferredWidth:preferredHeight:] */

void FUN_1016dba44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_4;
  FUN_1016db938(param_1,param_2,param_3);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016dbaa0; end: 1016dbaff; -[_TtC44MemoriesDirectCameraRollProviderServicesImplP33_B83D264440515B7CDDC0874964276C3C29MemoriesIndexedCameraRollData init] */

void FUN_1016dbaa0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesDirectCameraRollProviderServicesImpl.MemoriesIndexedCameraRollData",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016dbacc);
  (*pcVar1)();
}



/* Entry: 1016dbb00; end: 1016dbb0f; -[_TtC44MemoriesDirectCameraRollProviderServicesImplP33_B83D264440515B7CDDC0874964276C3C29MemoriesIndexedCameraRollData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016dbb00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc2108));
  return;
}



/* Entry: 1016dbb10; end: 1016dbb77;  */

void FUN_1016dbb10(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1016dbb78; end: 1016dbbef;  */

void FUN_1016dbb78(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1016dd998(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1016dbbf0; end: 1016dbc03;  */

void FUN_1016dbbf0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc21b0 == (undefined *)0x0 || ((ulong)puRam0000000112dc21b0 & 1) != 0) {
    puVar1 = &UNK_10e877b32;
    func_0x000107c61518(&UNK_10e877b32,0x27,0,0);
    puRam0000000112dc21b0 = puVar1;
  }
  return;
}



/* Entry: 1016dbc04; end: 1016dbc5f;  */

void FUN_1016dbc04(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_1016d85a4();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112dc21a8;
  plVar5 = (long *)&UNK_10d97ec20;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1016dbc60; end: 1016dbd5f;  */

void FUN_1016dbc60(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    func_0x0001016dbfd8(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}


