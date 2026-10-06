/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10125b434; end: 10125b7d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10125b434(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5164c();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113044a80);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar5 = &UNK_1103998d8;
  func_0x000107c613fc(&UNK_1103998d8,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar3;
  *(undefined8 *)(puVar5 + 0x18) = uVar7;
  *(undefined8 *)(puVar5 + 0x20) = uVar2;
  *(undefined8 *)(puVar5 + 0x28) = uVar1;
  pcStack_60 = FUN_10125b7d4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1004725e8;
  puStack_68 = &UNK_1103998f0;
  puStack_58 = puVar5;
  func_0x000107c60bc4(&puStack_80);
  puVar5 = puStack_58;
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61574(puVar5);
  func_0x000107c408f0(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  puVar5 = puVar4;
  func_0x000107c5cb24(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar4);
  return puVar5;
}



/* Entry: 10125b7d4; end: 10125b7df;  */

/* WARNING: Possible PIC construction at 0x00010125b5c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010125b5dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010125b620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010125b75c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010125b624) */
/* WARNING: Removing unreachable block (ram,0x00010125b64c) */
/* WARNING: Removing unreachable block (ram,0x00010125b628) */
/* WARNING: Removing unreachable block (ram,0x00010125b654) */
/* WARNING: Removing unreachable block (ram,0x00010125b640) */
/* WARNING: Removing unreachable block (ram,0x00010125b65c) */
/* WARNING: Removing unreachable block (ram,0x00010125b660) */
/* WARNING: Removing unreachable block (ram,0x00010125b648) */
/* WARNING: Removing unreachable block (ram,0x00010125b790) */
/* WARNING: Removing unreachable block (ram,0x00010125b5e0) */
/* WARNING: Removing unreachable block (ram,0x00010125b5f0) */
/* WARNING: Removing unreachable block (ram,0x00010125b5cc) */
/* WARNING: Removing unreachable block (ram,0x00010125b60c) */
/* WARNING: Removing unreachable block (ram,0x00010125b614) */
/* WARNING: Removing unreachable block (ram,0x00010125b5d0) */
/* WARNING: Removing unreachable block (ram,0x00010125b760) */

void FUN_10125b7d4(void)

{
  long unaff_x20;
  
  func_0x000107c5c734(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10125b7e0; end: 10125b9d3;  */

void FUN_10125b7e0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  
  func_0x000100672b50(param_1,auStack_90);
  if (lStack_78 == 0) {
    func_0x00010125baac(auStack_90,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar2 = 0;
    FUN_10125ba6c(0,0x112d6c340,&PTR_PTR_1126b4a30);
    plVar3 = &lStack_98;
    puVar10 = auStack_90;
    func_0x000107c6147c(plVar3,puVar10,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar4 = lStack_98;
      func_0x000107c5cab0();
      func_0x000107c61180();
      puVar11 = puVar10;
      if (lVar4 == 0) {
        func_0x000107c5faec();
        puVar11 = puVar10;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar10);
      }
      lVar5 = lStack_98;
      func_0x000107c424f8();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar11);
      }
      lVar6 = lStack_98;
      func_0x000107c5bbec(lStack_98);
      lVar7 = lStack_98;
      func_0x000107c4237c(lStack_98);
      lVar8 = lStack_98;
      func_0x000107c3ef38(lStack_98);
      puVar9 = PTR_PTR_1126b4a38;
      func_0x000107c610f8(PTR_PTR_1126b4a38);
      func_0x000107c48d5c((double)lVar6,(double)lVar7,(double)lVar8);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar5);
      func_0x000107c4d664(param_3);
      func_0x000107c61170(lStack_98);
      func_0x000107c61170(puVar9);
    }
  }
  ppuVar1 = &PTR_PTR_1108670e0;
  if (param_2 != 0) {
    ppuVar1 = &PTR_PTR_1108670d8;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuVar1 = &PTR_PTR_1108670d0;
  }
  puVar9 = *ppuVar1;
  func_0x000107c61174(puVar9);
  func_0x000108c7a174(param_4,puVar9,1);
  func_0x000107c3fedc(param_3);
  func_0x000107c61170(puVar9);
  return;
}



/* Entry: 10125b9d4; end: 10125b9ef;  */

void FUN_10125b9d4(long param_1,long param_2)

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



/* Entry: 10125b9f0; end: 10125ba33;  */

void FUN_10125b9f0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10125ba34; end: 10125ba43;  */

undefined1  [16] FUN_10125ba34(void)

{
  return ZEXT816(0x110399928);
}



/* Entry: 10125ba44; end: 10125ba63;  */

void FUN_10125ba44(void)

{
  func_0x000107c61168(&PTR_PTR_112d6c2c0);
  return;
}



/* Entry: 10125ba64; end: 10125ba6b;  */

void FUN_10125ba64(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long unaff_x20;
  long lStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100672b50(param_1,auStack_90);
  if (lStack_78 == 0) {
    func_0x00010125baac(auStack_90,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar4 = 0;
    FUN_10125ba6c(0,0x112d6c340,&PTR_PTR_1126b4a30);
    plVar5 = &lStack_98;
    puVar12 = auStack_90;
    func_0x000107c6147c(plVar5,puVar12,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)plVar5 & 1) != 0) {
      lVar6 = lStack_98;
      func_0x000107c5cab0();
      func_0x000107c61180();
      puVar13 = puVar12;
      if (lVar6 == 0) {
        func_0x000107c5faec();
        puVar13 = puVar12;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar12);
      }
      lVar7 = lStack_98;
      func_0x000107c424f8();
      func_0x000107c61180();
      if (lVar7 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar13);
      }
      lVar8 = lStack_98;
      func_0x000107c5bbec(lStack_98);
      lVar9 = lStack_98;
      func_0x000107c4237c(lStack_98);
      lVar10 = lStack_98;
      func_0x000107c3ef38(lStack_98);
      puVar11 = PTR_PTR_1126b4a38;
      func_0x000107c610f8(PTR_PTR_1126b4a38);
      func_0x000107c48d5c((double)lVar8,(double)lVar9,(double)lVar10);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar7);
      func_0x000107c4d664(uVar2);
      func_0x000107c61170(lStack_98);
      func_0x000107c61170(puVar11);
    }
  }
  ppuVar1 = &PTR_PTR_1108670e0;
  if (param_2 != 0) {
    ppuVar1 = &PTR_PTR_1108670d8;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuVar1 = &PTR_PTR_1108670d0;
  }
  puVar11 = *ppuVar1;
  func_0x000107c61174(puVar11);
  func_0x000108c7a174(uVar3,puVar11,1);
  func_0x000107c3fedc(uVar2);
  func_0x000107c61170(puVar11);
  return;
}



/* Entry: 10125ba6c; end: 10125baeb;  */

void FUN_10125ba6c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10125baec; end: 10125baf3;  */

void FUN_10125baec(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = 0;
  FUN_10125ba6c(0,0x112d6c340,&PTR_PTR_1126b4a30);
  auStack_50[0] = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_1);
  (*pcVar1)(auStack_50,0);
  func_0x00010125baac(auStack_50,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 10125baf4; end: 10125bb43;  */

void FUN_10125baf4(void)

{
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  (**(code **)(unaff_x20 + 0x10))(&uStack_40,0);
  func_0x00010125baac(&uStack_40,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 10125bb44; end: 10125bb6b;  */

void FUN_10125bb44(long param_1)

{
  code *pcVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lVar5 = param_1;
  pcVar3 = pcVar1;
  func_0x000107c4d3e4(param_1,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61180();
  lVar2 = lVar5;
  func_0x000107c5faec();
  func_0x000107c61170(lVar5);
  uVar4 = 0xe200000000000000;
  func_0x000107c5fb78(0x203a,0xe200000000000000);
  func_0x000107c4f9dc();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar5 = 0;
    uVar4 = 0xe000000000000000;
  }
  else {
    lVar5 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  func_0x000103bdf920(0);
  func_0x000107c5fb78(lVar5,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000103bdd7a8(lVar2,pcVar3);
  func_0x000107c6142c(pcVar3);
  (*pcVar1)(&uStack_60,lVar2);
  func_0x000107c61170(lVar2);
  func_0x00010125baac(&uStack_60,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 10125bb6c; end: 10125bb7b; -[_TtC24MyProfile3Implementation28NativeAttentionSourceContext attentionSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10125bb6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d6c348));
  return;
}



/* Entry: 10125bb7c; end: 10125bbaf; -[_TtC24MyProfile3Implementation28NativeAttentionSourceContext setAttentionSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10125bb7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d6c348);
  *(undefined8 *)(param_1 + _DAT_112d6c348) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10125bbb0; end: 10125be4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10125bbb0(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = _DAT_112d6c350;
  ppuVar5 = &puStack_80;
  FUN_1011eb06c(0);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000107c61170(puVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c358) = 0;
  func_0x000107c5cb24();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + _DAT_112d6c348) = puVar3;
  func_0x00010125bf78();
  puVar4 = &stack0xffffffffffffffb0;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  puVar2 = &UNK_110399a60;
  func_0x000107c613fc(&UNK_110399a60,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,puVar4);
  pcStack_60 = FUN_10125bf98;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100b5fdac;
  puStack_68 = &UNK_110399a78;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  uVar6 = param_1;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c60bd0(ppuVar5);
  uVar7 = *(undefined8 *)(puVar4 + _DAT_112d6c358);
  *(undefined8 *)(puVar4 + _DAT_112d6c358) = uVar6;
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar7);
  return puVar4;
}



/* Entry: 10125be50; end: 10125be93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10125be50(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112d6c358) != 0) {
    func_0x000107c4218c();
  }
  func_0x00010125bf78();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10125be94; end: 10125befb; -[_TtC24MyProfile3Implementation28NativeAttentionSourceContext dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10125be94(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + _DAT_112d6c358);
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x000107c61174();
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c4218c();
  }
  func_0x00010125bf78();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10125befc; end: 10125bf43; -[_TtC24MyProfile3Implementation28NativeAttentionSourceContext .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010125bf18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010125bf1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10125befc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6c348));
  return;
}



/* Entry: 10125bf44; end: 10125bf4b; -[_TtC24MyProfile3Implementation28NativeAttentionSourceContext shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_10125bf44(void)

{
  return 0;
}



/* Entry: 10125bf4c; end: 10125bf97; -[_TtC24MyProfile3Implementation28NativeAttentionSourceContext init] */

void FUN_10125bf4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyProfile3Implementation.NativeAttentionSourceContext",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10125bf78);
  (*pcVar1)();
}



/* Entry: 10125bf98; end: 10125bfbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10125bf98(int param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c3ebcc();
    if (param_1 != 0) {
      uVar5 = *(undefined8 *)(lVar2 + _DAT_112d6c350);
      lVar3 = 0x112d38dc0;
      func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      puVar1 = PTR_PTR_1133ba4c8;
      uVar4 = 0;
      func_0x00010124bb30();
      *(undefined8 *)(lVar3 + 0x38) = uVar4;
      *(undefined **)(lVar3 + 0x20) = puVar1;
      FUN_1011eb06c(0);
      func_0x000107c61174(uVar5);
      func_0x000107c61174(puVar1);
      func_0x000107c600f0(lVar3);
      func_0x000107c4d664(uVar5);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10125bfbc; end: 10125c053;  */

void FUN_10125bfbc(undefined8 param_1)

{
  func_0x0001000285a8(0x112d6c388,&UNK_10d92f2b0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10125c054,param_1);
  return;
}



/* Entry: 10125c054; end: 10125c05b;  */

void FUN_10125c054(long *param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_10125c188();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_28;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10125c05c; end: 10125c153;  */

void FUN_10125c05c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10125c154; end: 10125c177;  */

void FUN_10125c154(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10125c178; end: 10125c187;  */

undefined1  [16] FUN_10125c178(void)

{
  return ZEXT816(0x110399ab0);
}



/* Entry: 10125c188; end: 10125c1a7;  */

void FUN_10125c188(void)

{
  func_0x000107c61168(&PTR_PTR_112d6c3d0);
  return;
}



/* Entry: 10125c1a8; end: 10125c46f;  */

undefined1  [16]
FUN_10125c1a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined1 auVar9 [16];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar6 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  func_0x00010125d9bc(0);
  func_0x000107c613fc();
  func_0x000107c61434(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c615f0(param_3);
  uVar1 = param_2;
  FUN_10125d288(param_2,param_1,param_3);
  puVar2 = &UNK_110399af8;
  func_0x000107c613fc(&UNK_110399af8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar3 = &UNK_110399b20;
  func_0x000107c613fc(&UNK_110399b20,0x11,7);
  puVar3[0x10] = 0;
  puVar7 = &UNK_110399b48;
  puVar4 = puVar7;
  func_0x000107c613fc(&UNK_110399b48,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,param_4);
  puVar5 = &UNK_110399b70;
  func_0x000107c613fc(&UNK_110399b70,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  pcStack_80 = (code *)0x10125d9e8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110399b88;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c61434(param_2);
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(puVar5);
  func_0x000107c4e524(param_3);
  func_0x000107c60bd0(ppuVar6);
  FUN_10125da10();
  func_0x000107c613fc(&UNK_110399b48,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,param_4);
  puVar5 = &UNK_110399bc0;
  func_0x000107c613fc(&UNK_110399bc0,0x38,7);
  *(undefined **)(puVar5 + 0x10) = puVar7;
  *(undefined8 *)(puVar5 + 0x18) = param_2;
  *(undefined8 *)(puVar5 + 0x20) = uVar1;
  *(undefined **)(puVar5 + 0x28) = puVar3;
  *(undefined **)(puVar5 + 0x30) = puVar2;
  pcStack_80 = FUN_10125db48;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110399bd8;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar7 = puStack_78;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar7);
  func_0x000107c4e524(param_3);
  func_0x000107c60bd0(ppuVar8);
  puVar7 = &UNK_110399c10;
  func_0x000107c613fc(&UNK_110399c10,0x30,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = param_3;
  *(undefined **)(puVar7 + 0x20) = puVar3;
  *(undefined **)(puVar7 + 0x28) = puVar2;
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar2);
  uVar1 = 0x10125db58;
  func_0x0001000b6d50(0x10125db58,puVar7);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  auVar9._8_8_ = &PTR_DAT_1107aaa40;
  auVar9._0_8_ = uVar1;
  return auVar9;
}



/* Entry: 10125c470; end: 10125c5df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10125c470(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112d6c440;
  if (param_1 == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + _DAT_112d6c440);
  lVar2 = lVar4;
  if (lVar4 == 0) {
    lVar2 = param_1;
    (**(code **)(param_1 + _DAT_112d6c430))();
    uVar5 = *(undefined8 *)(param_1 + lVar1);
    *(long *)(param_1 + lVar1) = lVar2;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar5);
    if (lVar2 == 0) {
      FUN_10125c5e0();
      goto LAB_10125c5b0;
    }
    lVar4 = 0;
  }
  func_0x000107c615f0(lVar4);
  func_0x000107c5fc48(param_3,PTR___sSSN_11034da80);
  pcStack_78 = FUN_10125dd44;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  uStack_88 = 0x10125c89c;
  puStack_80 = &UNK_110399d18;
  ppuVar3 = &puStack_98;
  uStack_70 = param_2;
  func_0x000107c60bc4(ppuVar3);
  uVar5 = uStack_70;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar5);
  func_0x000107c443ac(lVar2);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(lVar2);
  param_1 = param_3;
LAB_10125c5b0:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10125c5e0; end: 10125c647;  */

/* WARNING: Possible PIC construction at 0x00010125c61c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010125c620) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_10125c5e0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c4b940(uVar1);
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    *(undefined1 *)(unaff_x20 + 0x30) = 1;
    func_0x000100c7f554();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 10125c648; end: 10125c7ab;  */

void FUN_10125c648(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_a0 [80];
  
  puVar6 = auStack_a0;
  puVar5 = (undefined *)0x0;
  if (param_3 != 0) {
    lVar2 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    puVar1 = PTR___sSSN_11034da80;
    *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar2 + 0x28) = puVar6;
    *(undefined8 *)(lVar2 + 0x30) = param_2;
    *(long *)(lVar2 + 0x38) = param_3;
    func_0x000107c61434(param_3);
    lVar4 = lVar2;
    func_0x000100214a84(lVar2);
    func_0x000107c61588(lVar2);
    FUN_100f15a0c((undefined8 *)(lVar2 + 0x20));
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar3 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010ef31c20);
    lVar2 = lVar4;
    func_0x000107c5f9dc(lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar4);
    func_0x000107c466bc(puVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar2);
  }
  FUN_10125c7ac(param_1,puVar5);
  func_0x000107c614ac(puVar5);
  return;
}



/* Entry: 10125c7ac; end: 10125c93f;  */

void FUN_10125c7ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = &UNK_110399cb0;
  func_0x000107c613fc(&UNK_110399cb0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_110399d50;
  func_0x000107c613fc(&UNK_110399d50,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  pcStack_50 = FUN_10125dd98;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110399d68;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c614b0(param_2);
  func_0x000107c61434(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 10125c940; end: 10125cbe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10125c940(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  ppuVar6 = &puStack_c0;
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  uVar2 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112d6c440;
  if (uVar2 == 0) {
    return;
  }
  uVar8 = *(ulong *)(uVar2 + _DAT_112d6c440);
  uVar7 = uVar8;
  if (uVar8 == 0) {
    uVar7 = uVar2;
    (**(code **)(uVar2 + _DAT_112d6c430))();
    uVar4 = *(undefined8 *)(uVar2 + lVar1);
    *(ulong *)(uVar2 + lVar1) = uVar7;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar4);
    if (uVar7 == 0) goto LAB_10125cb88;
  }
  uVar3 = uVar7;
  func_0x000107c61150(uVar7,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_observeViewStateWithOrganicStory_112615e90);
  if ((uVar3 & 1) == 0) {
    func_0x000107c615f0(uVar8);
    func_0x000107c61170(uVar2);
    goto LAB_10125cbc0;
  }
  uVar3 = uVar7;
  func_0x000107c61150(uVar7,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_observeViewStateWithOrganicStory_112615e90);
  if ((uVar3 & 1) == 0) {
    func_0x000107c615f0(uVar8);
    func_0x000107c61428(param_4 + 0x10,&puStack_c0,0,0);
    uVar8 = 0;
    if ((*(byte *)(param_4 + 0x10) & 1) == 0) goto LAB_10125cb94;
  }
  else {
    uVar4 = 0;
    FUN_10125db78(0,0x112d6c550,&PTR_PTR_1126a67d8);
    func_0x000107c615f0(uVar8);
    func_0x000107c6157c(param_3);
    func_0x000107c5fc48(param_2,uVar4);
    uVar4 = 0;
    FUN_10125db78(0,0x112d6c558,&PTR_PTR_1126a67e0);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar4);
    uStack_a0 = 0x10125db70;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    pcStack_b0 = FUN_10125cbe4;
    puStack_a8 = &UNK_110399c78;
    uStack_98 = param_3;
    func_0x000107c60bc4(&puStack_c0);
    uVar8 = uVar7;
    func_0x000107c4dab8();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(param_2);
    func_0x000107c61170(puVar5);
    func_0x000107c61574(uStack_98);
    func_0x000107c61428(param_4 + 0x10,&puStack_c0,0,0);
    if ((*(byte *)(param_4 + 0x10) & 1) == 0) {
LAB_10125cb94:
      func_0x000107c615e8(uVar7);
      func_0x000107c61170(uVar2);
      func_0x000107c61428(param_5 + 0x10,auStack_90,1,0);
      uVar7 = *(ulong *)(param_5 + 0x10);
      *(ulong *)(param_5 + 0x10) = uVar8;
LAB_10125cbc0:
      func_0x000107c615e8(uVar7);
      return;
    }
    if (uVar8 != 0) {
      func_0x000107c615f0(uVar8);
      func_0x000107c3f474();
      func_0x000107c615e8(uVar7);
      func_0x000107c615ec(uVar8,2);
      goto LAB_10125cb88;
    }
  }
  func_0x000107c615e8(uVar7);
LAB_10125cb88:
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10125cbe4; end: 10125cc93;  */

/* WARNING: Possible PIC construction at 0x00010125cc78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010125cc7c) */

void FUN_10125cbe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  FUN_10125db78(0,0x112d6c548,&PTR_PTR_1126c55e8);
  func_0x000107c5fc54(param_2,uVar3);
  uVar3 = 0;
  FUN_10125db78(0,0x112d6c560,&PTR_PTR_1126a67e8);
  func_0x000107c5fc54(param_3,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10125cc94; end: 10125cd6f;  */

void FUN_10125cc94(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  puVar1 = &UNK_110399cb0;
  func_0x000107c613fc(&UNK_110399cb0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,param_3);
  puVar2 = &UNK_110399cd8;
  func_0x000107c613fc(&UNK_110399cd8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  pcStack_40 = FUN_10125dbb8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110399cf0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61434(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 10125cd70; end: 10125ce6f;  */

void FUN_10125cd70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4b940(uVar4);
  *(undefined1 *)(param_1 + 0x30) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  func_0x000107c61574(uVar1);
  func_0x000107c5d278(uVar4);
  puVar2 = &UNK_110399c38;
  func_0x000107c613fc(&UNK_110399c38,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(long *)(puVar2 + 0x20) = param_1;
  uStack_50 = 0x10125db64;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110399c50;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(param_2);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 10125ce70; end: 10125cf03;  */

void FUN_10125ce70(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,1,0);
  *(undefined1 *)(param_1 + 0x10) = 1;
  func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
  if (*(long *)(param_2 + 0x10) != 0) {
    func_0x000107c3f474();
  }
  func_0x000107c61428(param_2 + 0x10,auStack_78,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  func_0x000107c615e8(uVar1);
  FUN_10125c5e0();
  return;
}



/* Entry: 10125cf04; end: 10125d153;  */

undefined1 FUN_10125cf04(long *param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  lVar16 = *param_1;
  lVar14 = *param_2;
  lVar4 = lVar16;
  func_0x000107c40808();
  lVar15 = lVar14;
  func_0x000107c40808();
  if (lVar4 == lVar15) {
    lVar4 = lVar16;
    func_0x000107c40808();
    puVar1 = PTR___sypN_11034f1a8;
    if (lVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10125d154);
      (*pcVar3)();
    }
    lVar15 = 0;
    do {
      if (lVar4 == lVar15) {
        return 1;
      }
      if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10125d150);
        (*pcVar3)();
      }
      lVar5 = lVar16;
      func_0x000107c4d9a4(lVar16);
      func_0x000107c61180();
      func_0x000107c60234(auStack_80);
      func_0x000107c615e8(lVar5);
      uVar6 = 0;
      FUN_10125db78(0,0x112d6c548,&PTR_PTR_1126c55e8);
      puVar7 = &uStack_88;
      func_0x000107c6147c(puVar7,auStack_80,puVar1 + 8,uVar6,6);
      uVar11 = uStack_88;
      if (((ulong)puVar7 & 1) == 0) {
        return 0;
      }
      lVar5 = lVar14;
      func_0x000107c4d9a4(lVar14);
      func_0x000107c61180();
      func_0x000107c60234(auStack_80);
      func_0x000107c615e8(lVar5);
      puVar7 = &uStack_88;
      puVar12 = auStack_80;
      func_0x000107c6147c(puVar7,puVar12,puVar1 + 8,uVar6,6);
      uVar2 = uStack_88;
      if (((ulong)puVar7 & 1) == 0) {
LAB_10125d120:
        func_0x000107c61170(uVar11);
        return 0;
      }
      uVar8 = uVar11;
      func_0x000107c5b2d0();
      func_0x000107c61180();
      uVar9 = uVar8;
      func_0x000107c5faec();
      puVar13 = puVar12;
      func_0x000107c61170(uVar8);
      uVar8 = uVar2;
      func_0x000107c5b2d0();
      func_0x000107c61180();
      uVar10 = uVar8;
      func_0x000107c5faec();
      func_0x000107c61170(uVar8);
      if ((uVar9 == uVar10) && (puVar12 == puVar13)) {
        func_0x000107c6142c(puVar12);
        func_0x000107c6142c(puVar13);
      }
      else {
        func_0x000107c605b8(uVar9,puVar12,uVar10,puVar13,0);
        func_0x000107c6142c(puVar12);
        func_0x000107c6142c(puVar13);
        if ((uVar9 & 1) == 0) {
          func_0x000107c61170(uVar11);
          uVar11 = uVar2;
          goto LAB_10125d120;
        }
      }
      uVar8 = uVar11;
      func_0x000107c5df44();
      uVar9 = uVar2;
      func_0x000107c5df44();
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar2);
      lVar15 = lVar15 + 1;
    } while ((int)uVar8 == (int)uVar9);
  }
  return 0;
}



/* Entry: 10125d154; end: 10125d287; -[_TtC24MyProfile3Implementation43StorySnapViewStateProvidingObservableBridge observeViewStatesForSnapIdsWithSnapIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10125d154(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112d6c438);
  puVar2 = &UNK_110399ad0;
  func_0x000107c613fc(&UNK_110399ad0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = uVar5;
  *(long *)(puVar2 + 0x20) = param_1;
  *(long *)(puVar2 + 0x28) = lVar1;
  func_0x0001000285a8(0x112d6c540,&UNK_10d92f3c0);
  func_0x000107c613fc();
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61434(param_3);
  func_0x000107c615f0(uVar5);
  pcVar3 = FUN_10125d9dc;
  func_0x0001000b64ac(FUN_10125d9dc,puVar2);
  pcVar4 = FUN_10125cf04;
  func_0x00010487de38(FUN_10125cf04,0);
  func_0x000107c61574(pcVar3);
  func_0x0001004575f0();
  func_0x000107c61574(pcVar4);
  pcVar4 = pcVar3;
  func_0x000107c5cb24(pcVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c61170(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar4);
  return;
}



/* Entry: 10125d288; end: 10125d2ef;  */

void FUN_10125d288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar1 = PTR__OBJC_CLASS___NSRecursiveLock_1126b3138;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x28) = puVar1;
  *(undefined2 *)(unaff_x20 + 0x30) = 0;
  *(undefined **)(unaff_x20 + 0x38) = PTR___swiftEmptySetSingleton_11034f1d8;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000107c61574(uVar2);
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 10125d2f0; end: 10125d443;  */

void FUN_10125d2f0(long param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c4b940(*(undefined8 *)(param_1 + 0x28));
    bVar2 = *(byte *)(param_1 + 0x30);
    func_0x000107c5d278(*(undefined8 *)(param_1 + 0x28));
    if ((bVar2 & 1) == 0) {
      if (param_2 == 0) {
        puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (param_3 != (undefined *)0x0) {
          puVar1 = param_3;
        }
        func_0x000107c61434(param_3);
        FUN_10125d444(puVar1);
        func_0x000107c6142c(puVar1);
      }
      else {
        func_0x000107c61428(param_1 + 0x38,auStack_70,0,0);
        uVar5 = *(undefined8 *)(param_1 + 0x38);
        func_0x000107c61434(uVar5);
        func_0x000107c614b0(param_2);
        uVar3 = uVar5;
        FUN_10125d688();
        func_0x000107c6142c(uVar5);
        func_0x000107c4b940(*(undefined8 *)(param_1 + 0x28));
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 == 0) {
          func_0x000107c5d278(*(undefined8 *)(param_1 + 0x28));
          func_0x000107c614ac(param_2);
          func_0x000107c61170(uVar3);
        }
        else {
          uStack_78 = uVar3;
          func_0x000107c6157c(lVar4);
          func_0x000100087f6c(&uStack_78);
          func_0x000107c5d278(*(undefined8 *)(param_1 + 0x28));
          func_0x000107c614ac(param_2);
          func_0x000107c61170(uVar3);
          func_0x000107c61574(lVar4);
        }
      }
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 10125d444; end: 10125d597;  */

void FUN_10125d444(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined8 auStack_48 [3];
  
  FUN_10125dbc0();
  func_0x000107c61428(unaff_x20 + 0x38,auStack_48,0x21,0);
  func_0x00010105ba6c(param_1);
  func_0x000107c614a8(auStack_48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = uVar3;
  func_0x000107c61434();
  FUN_10125d688();
  func_0x000107c6142c(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c4b940(uVar3);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if (lVar2 == 0) {
    func_0x000107c5d278(uVar3);
    func_0x000107c61170(uVar1);
  }
  else {
    auStack_48[0] = uVar1;
    func_0x000107c6157c(lVar2);
    func_0x000100087f6c(auStack_48);
    func_0x000107c5d278(uVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 10125d598; end: 10125d687;  */

void FUN_10125d598(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_58 [8];
  
  lVar6 = 0;
  puVar5 = (ulong *)(param_1 + 0x38);
  uVar7 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if (-uVar7 < 0x40) {
    uVar8 = ~(-1L << (-uVar7 & 0x3f));
  }
  uVar8 = uVar8 & *puVar5;
  lVar1 = lVar6;
  while( true ) {
    for (; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar2 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      FUN_10125e974(auStack_58,
                    *(undefined8 *)
                     (*(long *)(param_1 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                     lVar1 * 0x200));
      lVar6 = lVar1;
    }
    bVar4 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar7 >> 6) <= lVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff,puVar5,~uVar7,lVar6,0);
      return;
    }
    uVar8 = puVar5[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10125d688);
  (*pcVar3)();
}



/* Entry: 10125d688; end: 10125d8ab;  */

undefined * FUN_10125d688(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auStack_b0 [72];
  undefined *puStack_68;
  
  lVar14 = *(long *)(unaff_x20 + 0x10);
  uVar12 = *(ulong *)(lVar14 + 0x10);
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar12 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000101275234(0,uVar12,0);
    uVar15 = 0;
    do {
      puVar13 = puStack_68;
      if (*(ulong *)(lVar14 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10125d8ac);
        (*pcVar4)();
      }
      puVar1 = (ulong *)(lVar14 + 0x20 + uVar15 * 0x10);
      uVar8 = *puVar1;
      uVar2 = puVar1[1];
      if (*(long *)(param_1 + 0x10) == 0) {
        func_0x000107c61434(uVar2);
      }
      else {
        func_0x000107c6068c(auStack_b0,*(undefined8 *)(param_1 + 0x28));
        func_0x000107c61434(uVar2);
        puVar5 = auStack_b0;
        func_0x000107c5fb58(puVar5,uVar8,uVar2);
        func_0x000107c606a8();
        uVar10 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
        uVar11 = (ulong)puVar5 & (uVar10 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_1 + 0x38 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0) {
          do {
            puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + uVar11 * 0x10);
            uVar6 = *puVar1;
            uVar3 = puVar1[1];
            if ((uVar6 == uVar8 && uVar3 == uVar2) ||
               (func_0x000107c605b8(uVar6,uVar3,uVar8,uVar2,0), (uVar6 & 1) != 0)) break;
            uVar11 = uVar11 + 1 & ~uVar10;
          } while ((*(ulong *)(param_1 + 0x38 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0);
        }
      }
      puVar7 = PTR_PTR_1126c55e8;
      func_0x000107c610f8();
      func_0x000107c5fadc(uVar8,uVar2);
      func_0x000107c6142c(uVar2);
      func_0x000107c487a4();
      func_0x000107c61170(uVar8);
      uVar8 = *(ulong *)(puVar13 + 0x10);
      puStack_68 = puVar13;
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar8) {
        func_0x000101275234(1 < *(ulong *)(puVar13 + 0x18),uVar8 + 1,1);
      }
      uVar15 = uVar15 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar8 + 1;
      *(undefined **)(puStack_68 + uVar8 * 8 + 0x20) = puVar7;
      puVar13 = puStack_68;
    } while (uVar15 != uVar12);
  }
  uVar9 = 0;
  FUN_10125db78(0,0x112d6c548,&PTR_PTR_1126c55e8);
  puVar7 = puVar13;
  func_0x000107c5fc48(puVar13,uVar9);
  func_0x000107c6142c(puVar13);
  return puVar7;
}



/* Entry: 10125d8ac; end: 10125d8ef;  */

void FUN_10125d8ac(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10125d8f0; end: 10125d94f; -[_TtC24MyProfile3Implementation43StorySnapViewStateProvidingObservableBridge init] */

void FUN_10125d8f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyProfile3Implementation.StorySnapViewStateProvidingObservableBridge",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10125d91c);
  (*pcVar1)();
}



/* Entry: 10125d950; end: 10125d99b; -[_TtC24MyProfile3Implementation43StorySnapViewStateProvidingObservableBridge .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010125d980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010125d984) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10125d950(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6c430 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d6c438));
  return;
}



/* Entry: 10125d99c; end: 10125d9db;  */

void FUN_10125d99c(void)

{
  func_0x000107c61168(&PTR_PTR_1127bff78);
  return;
}



/* Entry: 10125d9dc; end: 10125da0f;  */

undefined1  [16] FUN_10125d9dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long unaff_x20;
  undefined1 auVar12 [16];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar8 = &puStack_a0;
  ppuVar11 = &puStack_a0;
  func_0x00010125d9bc(0);
  func_0x000107c613fc();
  func_0x000107c61434(uVar9);
  func_0x000107c6157c(param_1);
  func_0x000107c615f0(uVar2);
  uVar3 = uVar9;
  FUN_10125d288(uVar9,param_1,uVar2);
  puVar4 = &UNK_110399af8;
  func_0x000107c613fc(&UNK_110399af8,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  puVar5 = &UNK_110399b20;
  func_0x000107c613fc(&UNK_110399b20,0x11,7);
  puVar5[0x10] = 0;
  puVar10 = &UNK_110399b48;
  puVar6 = puVar10;
  func_0x000107c613fc(&UNK_110399b48,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,uVar1);
  puVar7 = &UNK_110399b70;
  func_0x000107c613fc(&UNK_110399b70,0x28,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar9;
  pcStack_80 = (code *)0x10125d9e8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110399b88;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar7 = puStack_78;
  func_0x000107c61434(uVar9);
  func_0x000107c6157c(uVar3);
  func_0x000107c61574(puVar7);
  func_0x000107c4e524(uVar2);
  func_0x000107c60bd0(ppuVar8);
  FUN_10125da10();
  func_0x000107c613fc(&UNK_110399b48,0x18,7);
  func_0x000107c61614(puVar10 + 0x10,uVar1);
  puVar7 = &UNK_110399bc0;
  func_0x000107c613fc(&UNK_110399bc0,0x38,7);
  *(undefined **)(puVar7 + 0x10) = puVar10;
  *(undefined8 *)(puVar7 + 0x18) = uVar9;
  *(undefined8 *)(puVar7 + 0x20) = uVar3;
  *(undefined **)(puVar7 + 0x28) = puVar5;
  *(undefined **)(puVar7 + 0x30) = puVar4;
  pcStack_80 = FUN_10125db48;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110399bd8;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar10 = puStack_78;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar10);
  func_0x000107c4e524(uVar2);
  func_0x000107c60bd0(ppuVar11);
  puVar10 = &UNK_110399c10;
  func_0x000107c613fc(&UNK_110399c10,0x30,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar3;
  *(undefined8 *)(puVar10 + 0x18) = uVar2;
  *(undefined **)(puVar10 + 0x20) = puVar5;
  *(undefined **)(puVar10 + 0x28) = puVar4;
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar2);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(puVar4);
  uVar9 = 0x10125db58;
  func_0x0001000b6d50(0x10125db58,puVar10);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  auVar12._8_8_ = &PTR_DAT_1107aaa40;
  auVar12._0_8_ = uVar9;
  return auVar12;
}



/* Entry: 10125da10; end: 10125db47;  */

undefined * FUN_10125da10(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    FUN_101275200(0,lVar7,0);
    puVar8 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar6 = puVar8[-1];
      uVar2 = *puVar8;
      puVar4 = PTR_PTR_1126a67d8;
      func_0x000107c610f8();
      func_0x000107c61434(uVar2);
      func_0x000107c453e4();
      uVar5 = 0;
      func_0x000107c5fadc(0,0xe000000000000000);
      func_0x000107c59950(puVar4);
      func_0x000107c61170(uVar5);
      func_0x000107c5fadc(uVar6,uVar2);
      func_0x000107c593e4(puVar4);
      func_0x000107c6142c(uVar2);
      func_0x000107c61170(uVar6);
      uVar1 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        FUN_101275200(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
      }
      puVar8 = puVar8 + 2;
      *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
      *(undefined **)(puVar3 + uVar1 * 8 + 0x20) = puVar4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return puVar3;
}



/* Entry: 10125db48; end: 10125db77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10125db48(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x20;
  ulong uVar12;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar11 = *(long *)(unaff_x20 + 0x30);
  ppuVar9 = &puStack_c0;
  func_0x000107c61428(lVar1 + 0x10,auStack_78,0,0);
  uVar4 = lVar1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112d6c440;
  if (uVar4 == 0) {
    return;
  }
  uVar12 = *(ulong *)(uVar4 + _DAT_112d6c440);
  uVar10 = uVar12;
  if (uVar12 == 0) {
    uVar10 = uVar4;
    (**(code **)(uVar4 + _DAT_112d6c430))();
    uVar6 = *(undefined8 *)(uVar4 + lVar1);
    *(ulong *)(uVar4 + lVar1) = uVar10;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar6);
    if (uVar10 == 0) goto LAB_10125cb88;
  }
  uVar5 = uVar10;
  func_0x000107c61150(uVar10,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_observeViewStateWithOrganicStory_112615e90);
  if ((uVar5 & 1) == 0) {
    func_0x000107c615f0(uVar12);
    func_0x000107c61170(uVar4);
    goto LAB_10125cbc0;
  }
  uVar5 = uVar10;
  func_0x000107c61150(uVar10,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_observeViewStateWithOrganicStory_112615e90);
  if ((uVar5 & 1) == 0) {
    func_0x000107c615f0(uVar12);
    func_0x000107c61428(lVar3 + 0x10,&puStack_c0,0,0);
    uVar12 = 0;
    if ((*(byte *)(lVar3 + 0x10) & 1) == 0) goto LAB_10125cb94;
  }
  else {
    uVar6 = 0;
    FUN_10125db78(0,0x112d6c550,&PTR_PTR_1126a67d8);
    func_0x000107c615f0(uVar12);
    func_0x000107c6157c(uVar2);
    func_0x000107c5fc48(uVar7,uVar6);
    uVar6 = 0;
    FUN_10125db78(0,0x112d6c558,&PTR_PTR_1126a67e0);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar6);
    uStack_a0 = 0x10125db70;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    pcStack_b0 = FUN_10125cbe4;
    puStack_a8 = &UNK_110399c78;
    uStack_98 = uVar2;
    func_0x000107c60bc4(&puStack_c0);
    uVar12 = uVar10;
    func_0x000107c4dab8();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61574(uStack_98);
    func_0x000107c61428(lVar3 + 0x10,&puStack_c0,0,0);
    if ((*(byte *)(lVar3 + 0x10) & 1) == 0) {
LAB_10125cb94:
      func_0x000107c615e8(uVar10);
      func_0x000107c61170(uVar4);
      func_0x000107c61428(lVar11 + 0x10,auStack_90,1,0);
      uVar10 = *(ulong *)(lVar11 + 0x10);
      *(ulong *)(lVar11 + 0x10) = uVar12;
LAB_10125cbc0:
      func_0x000107c615e8(uVar10);
      return;
    }
    if (uVar12 != 0) {
      func_0x000107c615f0(uVar12);
      func_0x000107c3f474();
      func_0x000107c615e8(uVar10);
      func_0x000107c615ec(uVar12,2);
      goto LAB_10125cb88;
    }
  }
  func_0x000107c615e8(uVar10);
LAB_10125cb88:
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 10125db78; end: 10125dbb7;  */

void FUN_10125db78(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10125dbb8; end: 10125dbbf;  */

void FUN_10125dbb8(void)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    func_0x000107c4b940(*(undefined8 *)(lVar3 + 0x28));
    bVar2 = *(byte *)(lVar3 + 0x30);
    func_0x000107c5d278(*(undefined8 *)(lVar3 + 0x28));
    if ((bVar2 & 1) == 0) {
      *(undefined1 *)(lVar3 + 0x31) = 1;
      FUN_10125d444(uVar1);
    }
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 10125dbc0; end: 10125dd43;  */

undefined8 FUN_10125dbc0(undefined *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61434();
  uVar3 = 0;
  puVar7 = PTR___sSSN_11034da80;
  func_0x000107c5fe14(0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  puVar8 = (undefined *)0x0;
  puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
  puVar1 = puVar10;
  if ((undefined *)0x7fffffffffffffff < param_1) {
    puVar1 = param_1;
  }
  uStack_68 = uVar3;
  if ((ulong)param_1 >> 0x3e != 0) goto LAB_10125dc30;
  while (puVar9 = *(undefined **)(puVar10 + 0x10), puVar6 = puVar8, puVar8 != puVar9) {
    while( true ) {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if ((long)puVar6 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10125dd3c);
            (*pcVar2)();
          }
          if (*(undefined **)(puVar10 + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10125dd44);
            (*pcVar2)();
          }
          puVar4 = *(undefined **)(param_1 + (long)puVar6 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar4 = puVar6;
          puVar7 = param_1;
          FUN_10125fd0c(puVar6,param_1);
        }
        puVar8 = puVar6 + 1;
        if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10125dd40);
          (*pcVar2)();
        }
        puVar5 = puVar4;
        func_0x000107c5df44();
        if (((ulong)puVar5 & 1) != 0) break;
        func_0x000107c61170(puVar4);
        puVar6 = puVar6 + 1;
        if (puVar8 == puVar9) goto LAB_10125dd0c;
      }
      func_0x000107c61174(puVar4);
      puVar9 = puVar4;
      func_0x000107c5b2d0();
      func_0x000107c61180();
      puVar6 = puVar9;
      func_0x000107c5faec();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar9);
      func_0x000100403b00(auStack_78,puVar6,puVar7);
      func_0x000107c6142c(uStack_70);
      puVar7 = puVar6;
      if ((ulong)param_1 >> 0x3e == 0) break;
LAB_10125dc30:
      puVar9 = puVar1;
      func_0x000107c60480();
      puVar6 = puVar8;
      if (puVar8 == puVar9) goto LAB_10125dd0c;
    }
  }
LAB_10125dd0c:
  func_0x000107c6142c(param_1);
  return uStack_68;
}



/* Entry: 10125dd44; end: 10125dd4b;  */

void FUN_10125dd44(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_a0 [80];
  
  puVar6 = auStack_a0;
  puVar5 = (undefined *)0x0;
  if (param_3 != 0) {
    lVar2 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    puVar1 = PTR___sSSN_11034da80;
    *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar2 + 0x28) = puVar6;
    *(undefined8 *)(lVar2 + 0x30) = param_2;
    *(long *)(lVar2 + 0x38) = param_3;
    func_0x000107c61434(param_3);
    lVar4 = lVar2;
    func_0x000100214a84(lVar2);
    func_0x000107c61588(lVar2);
    FUN_100f15a0c((undefined8 *)(lVar2 + 0x20));
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar3 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010ef31c20);
    lVar2 = lVar4;
    func_0x000107c5f9dc(lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar4);
    func_0x000107c466bc(puVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar2);
  }
  FUN_10125c7ac(param_1,puVar5);
  func_0x000107c614ac(puVar5);
  return;
}



/* Entry: 10125dd4c; end: 10125dd97;  */

void FUN_10125dd4c(code *param_1,code *param_2)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10125dd98; end: 10125ddd3;  */

void FUN_10125dd98(void)

{
  undefined *puVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  puVar6 = *(undefined **)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    func_0x000107c4b940(*(undefined8 *)(lVar4 + 0x28));
    bVar3 = *(byte *)(lVar4 + 0x30);
    func_0x000107c5d278(*(undefined8 *)(lVar4 + 0x28));
    if ((bVar3 & 1) == 0) {
      if (lVar2 == 0) {
        puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar6 != (undefined *)0x0) {
          puVar1 = puVar6;
        }
        func_0x000107c61434(puVar6);
        FUN_10125d444(puVar1);
        func_0x000107c6142c(puVar1);
      }
      else {
        func_0x000107c61428(lVar4 + 0x38,auStack_70,0,0);
        uVar8 = *(undefined8 *)(lVar4 + 0x38);
        func_0x000107c61434(uVar8);
        func_0x000107c614b0(lVar2);
        uVar5 = uVar8;
        FUN_10125d688();
        func_0x000107c6142c(uVar8);
        func_0x000107c4b940(*(undefined8 *)(lVar4 + 0x28));
        lVar7 = *(long *)(lVar4 + 0x18);
        if (lVar7 == 0) {
          func_0x000107c5d278(*(undefined8 *)(lVar4 + 0x28));
          func_0x000107c614ac(lVar2);
          func_0x000107c61170(uVar5);
        }
        else {
          uStack_78 = uVar5;
          func_0x000107c6157c(lVar7);
          func_0x000100087f6c(&uStack_78);
          func_0x000107c5d278(*(undefined8 *)(lVar4 + 0x28));
          func_0x000107c614ac(lVar2);
          func_0x000107c61170(uVar5);
          func_0x000107c61574(lVar7);
        }
      }
    }
    func_0x000107c61574(lVar4);
  }
  return;
}



/* Entry: 10125ddd4; end: 10125ddf3; -[_TtC24MyProfile3Implementation23MyProfile3LoggingHelper blizzardLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10125ddd4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d6c568));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10125ddf4; end: 10125de27; -[_TtC24MyProfile3Implementation23MyProfile3LoggingHelper setBlizzardLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10125ddf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d6c568);
  *(undefined8 *)(param_1 + _DAT_112d6c568) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10125de28; end: 10125de73; -[_TtC24MyProfile3Implementation23MyProfile3LoggingHelper profileSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10125de28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d6c570);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d6c570))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10125de74; end: 10125deaf; -[_TtC24MyProfile3Implementation23MyProfile3LoggingHelper setProfileSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10125de74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112d6c570);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 10125deb0; end: 10125df3b; -[_TtC24MyProfile3Implementation23MyProfile3LoggingHelper friendshipStatus] */

void FUN_10125deb0(void)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x0001000e2834(0);
  pcVar2 = "";
  func_0x000107c60124("",0,2);
  func_0x000107c4a8a4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(pcVar2);
  puVar3 = puVar1;
  func_0x000107c5cb24(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10125df3c; end: 10125df43; -[_TtC24MyProfile3Implementation23MyProfile3LoggingHelper shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_10125df3c(void)

{
  return 1;
}



/* Entry: 10125df44; end: 10125df9f; -[_TtC24MyProfile3Implementation23MyProfile3LoggingHelper init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10125df44(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112d6c568) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112d6c570);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10125dfa0; end: 10125dfd3;  */

void FUN_10125dfa0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10125dfd4; end: 10125e00f; -[_TtC24MyProfile3Implementation23MyProfile3LoggingHelper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10125dfd4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d6c568));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d6c570 + 8))
  ;
  return;
}



/* Entry: 10125e010; end: 10125e02f;  */

void FUN_10125e010(void)

{
  func_0x000107c61168(&PTR_PTR_1127c0048);
  return;
}



/* Entry: 10125e030; end: 10125e19b;  */

uint FUN_10125e030(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lStack_68 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_68 + 0x40));
  puVar8 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (*(long *)(param_2 + 0x10) != 0) {
    uVar6 = *(ulong *)(param_2 + 0x28);
    uVar2 = 0x112d6c668;
    FUN_10125e934(0x112d6c668,PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    func_0x000107c5fa4c(uVar6,lVar1,uVar2);
    uVar4 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
    uVar6 = uVar6 & (uVar4 ^ 0xffffffffffffffff);
    if ((*(ulong *)(param_2 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0) {
      lVar9 = *(long *)(lStack_68 + 0x48);
      pcVar7 = *(code **)(lStack_68 + 0x10);
      do {
        (*pcVar7)(puVar8,*(long *)(param_2 + 0x30) + lVar9 * uVar6,lVar1);
        uVar2 = 0x112d68098;
        FUN_10125e934(0x112d68098,PTR___s10Foundation4UUIDVSQAAMc_110350c50);
        puVar3 = puVar8;
        func_0x000107c5fab8(puVar8,param_1,lVar1,uVar2);
        uVar5 = (uint)puVar3;
        (**(code **)(lStack_68 + 8))(puVar8,lVar1);
        if (((ulong)puVar3 & 1) != 0) break;
        uVar6 = uVar6 + 1 & ~uVar4;
      } while ((*(ulong *)(param_2 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
      goto LAB_10125e178;
    }
  }
  uVar5 = 0;
LAB_10125e178:
  return uVar5 & 1;
}



/* Entry: 10125e19c; end: 10125e1df;  */

void FUN_10125e19c(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + 0x18) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10125e1e0; end: 10125e4a3;  */

void FUN_10125e1e0(double param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_d0 [48];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  func_0x000107c61428(unaff_x20 + 0x18,auStack_78,0,0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61434(uVar7);
  uVar2 = param_2;
  func_0x0001000f66f0(param_2,param_3,uVar7);
  func_0x000107c6142c(uVar7);
  if ((uVar2 & 1) == 0) {
    func_0x000107c61428(unaff_x20 + 0x18,auStack_a0,0x21,0);
    func_0x000107c61434(param_3);
    func_0x000100403b00(auStack_88,param_2,param_3);
    func_0x000107c614a8(auStack_a0);
    func_0x000107c6142c(uStack_80);
    func_0x000107c5eea0(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee8c();
    (**(code **)(lVar8 + 8))(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    puVar3 = PTR_PTR_1126a67f0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar2 = param_2;
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c58d7c(puVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c57310(puVar3);
    func_0x000107c59dcc(param_1 * 1000.0,puVar3);
    puVar4 = PTR_PTR_1126a67f0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c58d7c(puVar4);
    func_0x000107c61170(param_2);
    func_0x000107c57310(puVar4);
    func_0x000107c59dcc(param_1 * 1000.0,puVar4);
    lVar1 = 0x112d6c5a0;
    FUN_10125e60c(0x112d6c5a0,&PTR_PTR_1126a67f0,0x112d6c688,&UNK_10d92f468);
    func_0x000107c61534();
    *(undefined8 *)(lVar1 + 0x18) = 5;
    *(undefined8 *)(lVar1 + 0x10) = 2;
    *(undefined **)(lVar1 + 0x20) = puVar3;
    *(undefined **)(lVar1 + 0x28) = puVar4;
    func_0x000107c61428(unaff_x20 + 0x20,auStack_a0,0x21,0);
    func_0x000107c61174(puVar3);
    func_0x000107c61174(puVar4);
    FUN_10125e4a4(lVar1);
    func_0x000107c614a8(auStack_a0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
    FUN_10125f6b8(0,0x112d6c5a0,&PTR_PTR_1126a67f0);
    uVar7 = uVar6;
    func_0x000107c61434(uVar6);
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar6);
    func_0x000107c4d664(uVar5);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar7);
  }
  return;
}



/* Entry: 10125e4a4; end: 10125e58f;  */

void FUN_10125e4a4(ulong param_1)

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
    FUN_10125f6f8(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_101276f70(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10125e58c);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10125e590);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10125e588);
  (*pcVar1)();
}



/* Entry: 10125e590; end: 10125e5c3;  */

void FUN_10125e590(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10125e5c4; end: 10125e60b;  */

void FUN_10125e5c4(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d6c660;
  plVar5 = (long *)&UNK_10d92f448;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10125f6b8(0,0x112d6c550,&PTR_PTR_1126a67d8);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10125e60c; end: 10125e683;  */

void FUN_10125e60c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10125f6b8(0,param_1,param_2);
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



/* Entry: 10125e684; end: 10125e6a7;  */

void FUN_10125e684(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d6c688;
  plVar5 = (long *)&UNK_10d92f468;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10125f6b8(0,0x112d6c5a0,&PTR_PTR_1126a67f0);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10125e6a8; end: 10125e703;  */

void FUN_10125e6a8(void)

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
    FUN_1012783bc();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d6c678;
  plVar5 = (long *)&UNK_10d92f458;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 10125e704; end: 10125e913;  */

undefined8 FUN_10125e704(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  code *pcVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar10 = &stack0xffffffffffffff70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = *unaff_x20;
  uVar6 = *(ulong *)(lVar5 + 0x28);
  uVar2 = 0x112d6c668;
  FUN_10125e934(0x112d6c668,PTR___s10Foundation4UUIDVSHAAMc_110350c48);
  func_0x000107c5fa4c(uVar6,lVar1,uVar2);
  uVar4 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar6 = uVar6 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar5 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0) {
    pcVar7 = *(code **)(lVar11 + 0x10);
  }
  else {
    lVar8 = *(long *)(lVar11 + 0x48);
    pcVar7 = *(code **)(lVar11 + 0x10);
    do {
      lVar12 = lVar8 * uVar6;
      (*pcVar7)(puVar10,*(long *)(lVar5 + 0x30) + lVar12,lVar1);
      uVar2 = 0x112d68098;
      FUN_10125e934(0x112d68098,PTR___s10Foundation4UUIDVSQAAMc_110350c50);
      puVar3 = puVar10;
      func_0x000107c5fab8(puVar10,param_2,lVar1,uVar2);
      pcVar9 = *(code **)(lVar11 + 8);
      (*pcVar9)(puVar10,lVar1);
      if (((ulong)puVar3 & 1) != 0) {
        (*pcVar9)(param_2,lVar1);
        (*pcVar7)(param_1,*(long *)(lVar5 + 0x30) + lVar12,lVar1);
        return 0;
      }
      uVar6 = uVar6 + 1 & ~uVar4;
    } while ((*(ulong *)(lVar5 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
  }
  lVar5 = *unaff_x20;
  func_0x000107c61558(lVar5);
  (*pcVar7)(puVar10,param_2,lVar1);
  lVar8 = *unaff_x20;
  FUN_10125ea4c(puVar10,uVar6,lVar5);
  *unaff_x20 = lVar8;
  (**(code **)(lVar11 + 0x20))(param_1,param_2,lVar1);
  return 1;
}



/* Entry: 10125e914; end: 10125e933;  */

void FUN_10125e914(void)

{
  func_0x000107c61168(&PTR_PTR_112d6c5e8);
  return;
}



/* Entry: 10125e934; end: 10125e973;  */

void FUN_10125e934(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000107c5eec8(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 10125e974; end: 10125ea4b;  */

undefined8 FUN_10125e974(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar5 = *unaff_x20;
  uVar1 = *(ulong *)(lVar5 + 0x28);
  func_0x000107c60688();
  uVar3 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      lVar4 = *(long *)(*(long *)(lVar5 + 0x30) + uVar1 * 8);
      if (lVar4 == param_2) {
        uVar2 = 0;
        goto LAB_10125ea30;
      }
      uVar1 = uVar1 + 1 & ~uVar3;
    } while ((*(ulong *)(lVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  lVar5 = *unaff_x20;
  func_0x000107c61558(lVar5);
  lVar4 = *unaff_x20;
  FUN_10125ec30(param_2,uVar1,lVar5);
  *unaff_x20 = lVar4;
  uVar2 = 1;
  lVar4 = param_2;
LAB_10125ea30:
  *param_1 = lVar4;
  return uVar2;
}



/* Entry: 10125ea4c; end: 10125ec2f;  */

void FUN_10125ea4c(undefined8 param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  ulong uVar5;
  long lVar6;
  long *unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar5 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_1012741a8();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      func_0x00010125ed38(uVar5 + 1);
    }
    else {
      func_0x00010125f1c0();
    }
    lVar9 = *unaff_x20;
    param_2 = *(ulong *)(lVar9 + 0x28);
    uVar3 = 0x112d6c668;
    FUN_10125e934(0x112d6c668,PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    func_0x000107c5fa4c(param_2,lVar2,uVar3);
    uVar5 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar5 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar9 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      lVar6 = *(long *)(lVar8 + 0x48);
      pcVar1 = *(code **)(lVar8 + 0x10);
      do {
        (*pcVar1)(puVar7,*(long *)(lVar9 + 0x30) + lVar6 * param_2,lVar2);
        uVar3 = 0x112d68098;
        FUN_10125e934(0x112d68098,PTR___s10Foundation4UUIDVSQAAMc_110350c50);
        puVar4 = puVar7;
        func_0x000107c5fab8(puVar7,param_1,lVar2,uVar3);
        (**(code **)(lVar8 + 8))(puVar7,lVar2);
        if (((ulong)puVar4 & 1) != 0) {
          func_0x000107c60620(lVar2);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10125ec30);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar5;
      } while ((*(ulong *)(lVar9 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar6 = *unaff_x20;
  lVar9 = lVar6 + (param_2 >> 6) * 8;
  *(ulong *)(lVar9 + 0x38) = *(ulong *)(lVar9 + 0x38) | 1L << (param_2 & 0x3f);
  (**(code **)(lVar8 + 0x20))
            (*(long *)(lVar6 + 0x30) + *(long *)(lVar8 + 0x48) * param_2,param_1,lVar2);
  if (!SCARRY8(*(long *)(lVar6 + 0x10),1)) {
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10125ec24);
  (*pcVar1)();
}



/* Entry: 10125ec30; end: 10125ed37;  */

void FUN_10125ec30(long param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_10127437c();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      func_0x00010125efd0(uVar3 + 1);
    }
    else {
      func_0x00010125f494();
    }
    lVar4 = *unaff_x20;
    param_2 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(param_2,param_1);
    uVar3 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        if (*(long *)(*(long *)(lVar4 + 0x30) + param_2 * 8) == param_1) {
          func_0x000107c60620(PTR___sSON_11034d8b8);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10125ed38);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar2 = *unaff_x20;
  lVar4 = lVar2 + (param_2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x38) = *(ulong *)(lVar4 + 0x38) | 1L << (param_2 & 0x3f);
  *(long *)(*(long *)(lVar2 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar2 + 0x10),1)) {
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10125ed28);
  (*pcVar1)();
}



/* Entry: 10125ed38; end: 10125f6b7;  */

void FUN_10125ed38(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar4 = 0;
  func_0x000107c5eec8();
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar5 = 0x112d6c670;
  func_0x0001000285a8(0x112d6c670,&UNK_10d92f450);
  lVar6 = lVar15;
  func_0x000107c602e0(lVar15,lVar1,0,uVar5);
  if (*(long *)(lVar15 + 0x10) == 0) {
    func_0x000107c61574(lVar15);
LAB_10125efa4:
    *unaff_x20 = lVar6;
    return;
  }
  uVar10 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(lVar15 + 0x38);
  lVar1 = lVar6 + 0x38;
  lVar16 = 0;
  do {
    if (uVar13 == 0) {
      do {
        lVar14 = lVar16 + 1;
        if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10125efcc);
          (*pcVar3)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar14) {
          func_0x000107c61574(lVar15);
          goto LAB_10125efa4;
        }
        uVar13 = ((ulong *)(lVar15 + 0x38))[lVar14];
        lVar16 = lVar16 + 1;
      } while (uVar13 == 0);
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
    }
    else {
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar14 = lVar16;
    }
    lVar16 = *(long *)(lVar7 + 0x48);
    (**(code **)(lVar7 + 0x10))
              (&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(long *)(lVar15 + 0x30) + lVar16 * (LZCOUNT(uVar8) | lVar14 << 6),lVar4);
    uVar12 = *(ulong *)(lVar6 + 0x28);
    uVar5 = 0x112d6c668;
    FUN_10125e934(0x112d6c668,PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    func_0x000107c5fa4c(uVar12,lVar4,uVar5);
    uVar11 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar12 = uVar12 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar12 >> 6;
    uVar8 = -1L << (uVar12 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar2 = false;
      uVar8 = 0x3f - uVar11 >> 6;
      do {
        uVar12 = uVar9 + 1;
        if ((uVar12 == uVar8) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10125efd0);
          (*pcVar3)();
        }
        uVar9 = 0;
        if (uVar12 != uVar8) {
          uVar9 = uVar12;
        }
        bVar2 = (bool)(uVar12 == uVar8 | bVar2);
        uVar12 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar12 == 0xffffffffffffffff);
      uVar12 = ~uVar12;
      uVar8 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar9 << 6;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar12 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar8 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    (**(code **)(lVar7 + 0x20))
              (*(long *)(lVar6 + 0x30) + uVar8 * lVar16,
               &stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar16 = lVar14;
  } while( true );
}



/* Entry: 10125f6b8; end: 10125f6f7;  */

void FUN_10125f6b8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10125f6f8; end: 10125f7a7;  */

void FUN_10125f6f8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  FUN_101274638();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 10125f7a8; end: 10125f817;  */

long FUN_10125f7a8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x000100431464();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  func_0x000107c61614(unaff_x20 + 0x20,0);
  *(undefined1 *)(unaff_x20 + 0x28) = 0;
  puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x000107c61168();
  func_0x000107c5e15c();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + 0x30) = puVar2;
  return unaff_x20;
}



/* Entry: 10125f818; end: 10125fa47;  */

/* WARNING: Possible PIC construction at 0x00010125f9f8: Changing call to branch */

void FUN_10125f818(ulong param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  lVar7 = unaff_x20 + 0x20;
  func_0x000107c61618();
  if (lVar7 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c4d664(lVar7);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(puVar1);
  }
  if ((((param_1 & 1) == 0) && ((param_2 & 1) == 0)) && ((param_3 & 1) == 0)) {
    return;
  }
  puVar2 = *(ulong **)(unaff_x20 + 0x18);
  puVar3 = puVar2;
  if (puVar2 == (ulong *)0x0) {
    puVar3 = *(ulong **)(unaff_x20 + 0x10);
    func_0x000107c61174();
    puVar2 = (ulong *)0x0;
  }
  pcVar9 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar3) + 0x90);
  func_0x000107c61174(puVar2);
  (*pcVar9)(0xd000000000000033,0x800000010ef31c50,0,0,0);
  (*pcVar9)(0xd000000000000032,0x800000010ef31c90,0,0,0);
  func_0x000107c61170(puVar3);
  uVar4 = *(ulong *)(unaff_x20 + 0x30);
  func_0x000107c3db80();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar4);
  if (uVar5 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar4 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar4 == 0) {
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
    return;
  }
  if ((long)uVar4 < 1) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10125fa48);
    (*pcVar9)();
  }
  lVar7 = 0;
  if ((uVar5 & 0xc000000000000001) == 0) goto LAB_10125f9a0;
  do {
    lVar8 = lVar7;
    FUN_10125fef0(lVar7,uVar5);
    while( true ) {
      lVar6 = lVar8;
      func_0x000107c615f0();
      func_0x000107c61494();
      if (lVar6 != 0) {
        func_0x000107c5d23c();
      }
      func_0x000107c615ec(lVar8,2);
      if (uVar4 - 1 == lVar7) goto code_r0x000107c6142c;
      lVar7 = lVar7 + 1;
      if ((uVar5 & 0xc000000000000001) != 0) break;
LAB_10125f9a0:
      lVar8 = *(long *)(uVar5 + lVar7 * 8 + 0x20);
      func_0x000107c615f0(lVar8);
    }
  } while( true );
}



/* Entry: 10125fa48; end: 10125faeb;  */

void FUN_10125fa48(ulong param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  long unaff_x20;
  code *pcVar3;
  
  if ((((param_1 & 1) == 0) && ((param_2 & 1) == 0)) && ((param_3 & 1) == 0)) {
    return;
  }
  puVar1 = *(ulong **)(unaff_x20 + 0x18);
  puVar2 = puVar1;
  if (puVar1 == (ulong *)0x0) {
    puVar2 = *(ulong **)(unaff_x20 + 0x10);
    func_0x000107c61174();
    puVar1 = (ulong *)0x0;
  }
  pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x90);
  func_0x000107c61174(puVar1);
  (*pcVar3)(0xd000000000000032,0x800000010ef31cd0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10125faec; end: 10125fccf;  */

/* WARNING: Possible PIC construction at 0x00010125fc70: Changing call to branch */

void FUN_10125faec(ulong param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  code *pcVar7;
  long lVar8;
  
  if ((param_1 & 1) == 0) {
    return;
  }
  puVar1 = *(ulong **)(unaff_x20 + 0x18);
  puVar2 = puVar1;
  if (puVar1 == (ulong *)0x0) {
    puVar2 = *(ulong **)(unaff_x20 + 0x10);
    func_0x000107c61174();
    puVar1 = (ulong *)0x0;
  }
  pcVar7 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x90);
  func_0x000107c61174(puVar1);
  (*pcVar7)(0xd000000000000034,0x800000010ef31d10,0,0,0);
  (*pcVar7)(0xd000000000000032,0x800000010ef31d50,0,0,0);
  uVar3 = *(ulong *)(unaff_x20 + 0x30);
  func_0x000107c3db80();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar3);
  if (uVar4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar3 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar3 == 0) {
    func_0x000107c61170(puVar2);
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
    return;
  }
  if ((long)uVar3 < 1) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10125fcd0);
    (*pcVar7)();
  }
  lVar6 = 0;
  if ((uVar4 & 0xc000000000000001) == 0) goto LAB_10125fc10;
  do {
    lVar8 = lVar6;
    FUN_10125fef0(lVar6,uVar4);
    while( true ) {
      lVar5 = lVar8;
      func_0x000107c615f0();
      func_0x000107c61494();
      if (lVar5 != 0) {
        func_0x000107c5d234();
      }
      func_0x000107c615ec(lVar8,2);
      if (uVar3 - 1 == lVar6) {
        func_0x000107c61170(puVar2);
        goto code_r0x000107c6142c;
      }
      lVar6 = lVar6 + 1;
      if ((uVar4 & 0xc000000000000001) != 0) break;
LAB_10125fc10:
      lVar8 = *(long *)(uVar4 + lVar6 * 8 + 0x20);
      func_0x000107c615f0(lVar8);
    }
  } while( true );
}



/* Entry: 10125fcd0; end: 10125fd0b;  */

void FUN_10125fcd0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61610(unaff_x20 + 0x20);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10125fd0c; end: 10125fd33;  */

ulong FUN_10125fd0c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10125fe18);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10125fe1c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c55e8;
    func_0x000107c61168(PTR_PTR_1126c55e8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126c55e8;
    func_0x000107c61168(PTR_PTR_1126c55e8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000101260290(0,0x112d6c548,&PTR_PTR_1126c55e8);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10125fef0);
  (*pcVar2)();
}



/* Entry: 10125fd34; end: 10125feef;  */

ulong FUN_10125fd34(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10125fe18);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10125fe1c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000101260290(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10125fef0);
  (*pcVar2)();
}



/* Entry: 10125fef0; end: 10125ff2f;  */

void FUN_10125fef0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  
  if (param_2 >> 0x3e != 0) {
    uVar1 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar1 = param_2;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdb9620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss18_CocoaArrayWrapperVyyXlSicig_11034e900)(param_1,uVar1);
    return;
  }
  if (-1 < (long)param_1) {
    if (param_1 < *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRetain_11034f540)
                (*(undefined8 *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20));
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10125ff30);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10125ff2c);
  (*pcVar2)();
}



/* Entry: 10125ff30; end: 10125ff4f;  */

void FUN_10125ff30(void)

{
  func_0x000107c61168(&PTR_PTR_112d6c6d0);
  return;
}



/* Entry: 10125ff50; end: 1012602cf;  */

ulong FUN_10125ff50(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101260020);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101260024);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_1012783bc(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    FUN_1012783bc(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000015,0x800000010ef31db0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012600ec);
  (*pcVar2)();
}



/* Entry: 1012602d0; end: 10126034f;  */

void FUN_1012602d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d6c750,&UNK_10d92f4d0);
  puVar1 = &UNK_110399da0;
  func_0x000107c613fc(&UNK_110399da0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10126046c,puVar1);
  return;
}



/* Entry: 101260350; end: 10126046b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101260350(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_60;
  long alStack_58 [3];
  
  func_0x000100083b20(alStack_58);
  lVar2 = alStack_58[0];
  uVar3 = 0;
  func_0x000101267c6c(0);
  func_0x000107c610f8();
  func_0x000107c483f8();
  func_0x000107c61180();
  uVar4 = uVar3;
  FUN_101261710();
  func_0x000107c5a048(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar4);
  func_0x000100083b20(alStack_58);
  func_0x000107c5677c(uVar3);
  lVar1 = _DAT_112fdea20;
  lVar5 = *(long *)(alStack_58[0] + 0x10);
  func_0x000107c61428(lVar5 + _DAT_112fdea20,alStack_58,1,0);
  func_0x000107c61604(lVar5 + lVar1,uVar3);
  func_0x000100083b20(&lStack_60);
  FUN_101267460(uVar3);
  func_0x000107c61170();
  FUN_101260610();
  param_1[3] = lStack_60;
  param_1[4] = (long)&PTR_DAT_110399de0;
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  *param_1 = alStack_58[0];
  return;
}



/* Entry: 10126046c; end: 101260473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10126046c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long alStack_58 [3];
  
  func_0x000100083b20(alStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  lVar2 = alStack_58[0];
  uVar3 = 0;
  func_0x000101267c6c(0);
  func_0x000107c610f8();
  func_0x000107c483f8();
  func_0x000107c61180();
  uVar4 = uVar3;
  FUN_101261710();
  func_0x000107c5a048(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar4);
  func_0x000100083b20(alStack_58);
  func_0x000107c5677c(uVar3);
  lVar1 = _DAT_112fdea20;
  lVar5 = *(long *)(alStack_58[0] + 0x10);
  func_0x000107c61428(lVar5 + _DAT_112fdea20,alStack_58,1,0);
  func_0x000107c61604(lVar5 + lVar1,uVar3);
  func_0x000100083b20(&lStack_60);
  FUN_101267460(uVar3);
  func_0x000107c61170();
  FUN_101260610();
  param_1[3] = lStack_60;
  param_1[4] = (long)&PTR_DAT_110399de0;
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  *param_1 = alStack_58[0];
  return;
}



/* Entry: 101260474; end: 10126058f;  */

void FUN_101260474(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d6c758,&UNK_10d92f4d8);
  puVar1 = &UNK_110399dc8;
  func_0x000107c613fc(&UNK_110399dc8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1012605bc,puVar1);
  return;
}



/* Entry: 101260590; end: 1012605bb;  */

void FUN_101260590(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


