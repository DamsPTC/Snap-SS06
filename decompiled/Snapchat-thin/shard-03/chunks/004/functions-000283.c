/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102876848; end: 10287687b;  */

void FUN_102876848(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10287687c; end: 102876947;  */

void FUN_10287687c(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *param_2;
  func_0x0001000285a8(0x112ec5510,&UNK_10dae5798);
  puVar2 = &uStack_48;
  uStack_48 = uVar6;
  func_0x0001000838ec();
  FUN_102878b20(uVar3);
  func_0x000100082720("GroupChatNonFriendWarningWebBrowsingScopeExposerServiceProvider",0x3f,2);
  puVar4 = puVar2;
  FUN_102876970(puVar2,uVar1,uVar5,uVar3);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar2);
  func_0x000100082720("GroupChatNonFriendWarningAlertEntryPointEntryPointProvider",0x3a,2);
  *param_1 = (long)puVar4;
  return;
}



/* Entry: 102876948; end: 10287696f;  */

void FUN_102876948(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba4f0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puRam0000000112ec5578 = puVar1;
  return;
}



/* Entry: 102876970; end: 102876a13;  */

void FUN_102876970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec5518,&UNK_10dae57a0);
  puVar1 = &UNK_11055b4f0;
  func_0x000107c613fc(&UNK_11055b4f0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_102876c6c,puVar1);
  return;
}



/* Entry: 102876a14; end: 102876c6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102876a14(long *param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&lStack_78);
  func_0x000100083b20(&uStack_80);
  FUN_102878858();
  lVar3 = param_2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ec5520) = lStack_68;
  *(undefined8 *)(lVar3 + _DAT_112ec5528) = uStack_70;
  uVar11 = *(undefined8 *)(lStack_78 + _DAT_113083868);
  *(undefined8 *)(lVar3 + _DAT_112ec5530) = uVar11;
  *(undefined8 *)(lVar3 + _DAT_112ec5538) = uStack_80;
  lVar1 = _DAT_112f151f0;
  lVar12 = *(long *)(lStack_68 + _DAT_112f151f0);
  lVar4 = lStack_68;
  func_0x000107c61174();
  uVar5 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar11);
  uVar11 = uStack_80;
  func_0x000107c61174();
  func_0x000107c444fc();
  func_0x000107c61180();
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102876c68);
    (*pcVar2)();
  }
  lVar6 = lVar12;
  func_0x000107c5faec();
  func_0x000107c61170(lVar12);
  uVar7 = *(ulong *)(lStack_68 + lVar1);
  func_0x000107c4e04c();
  func_0x000107c61180();
  if (uVar7 != 0) {
    uVar10 = 0x112d64d20;
    func_0x0001000285a8(0x112d64d20,&UNK_10d92bec0);
    uVar8 = uVar7;
    func_0x000107c5fc54(uVar7,uVar10);
    func_0x000107c61170(uVar7);
    if (uVar8 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = uVar8 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar8) {
        uVar7 = uVar8;
      }
      func_0x000107c60480();
    }
    func_0x000107c6142c(uVar8);
    lVar12 = *(long *)(*(long *)(lVar4 + _DAT_112f151f8) + 0x10);
    plVar9 = (long *)(lVar3 + _DAT_112ec5540);
    *plVar9 = lVar6;
    plVar9[1] = param_3;
    plVar9[2] = uVar7;
    plVar9[3] = lVar12;
    plVar9 = &lStack_90;
    lStack_90 = lVar3;
    lStack_88 = param_2;
    func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
    uVar10 = *(undefined8 *)(lStack_68 + lVar1);
    func_0x000107c61174();
    func_0x000107c615f0(uVar10);
    FUN_102876e8c();
    func_0x000107c61170(plVar9);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lStack_78);
    func_0x000107c61170(uVar11);
    func_0x000107c615e8(uVar10);
    *param_1 = (long)plVar9;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102876c6c);
  (*pcVar2)();
}



/* Entry: 102876c6c; end: 102876c77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102876c6c(long *param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar11 = *(long *)(unaff_x20 + 0x18);
  func_0x000100083b20(&lStack_68,lVar3,lVar11,*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&lStack_78);
  func_0x000100083b20(&uStack_80);
  FUN_102878858();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(long *)(lVar4 + _DAT_112ec5520) = lStack_68;
  *(undefined8 *)(lVar4 + _DAT_112ec5528) = uStack_70;
  uVar13 = *(undefined8 *)(lStack_78 + _DAT_113083868);
  *(undefined8 *)(lVar4 + _DAT_112ec5530) = uVar13;
  *(undefined8 *)(lVar4 + _DAT_112ec5538) = uStack_80;
  lVar1 = _DAT_112f151f0;
  lVar14 = *(long *)(lStack_68 + _DAT_112f151f0);
  lVar5 = lStack_68;
  func_0x000107c61174();
  uVar6 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar13);
  uVar13 = uStack_80;
  func_0x000107c61174();
  func_0x000107c444fc();
  func_0x000107c61180();
  if (lVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102876c68);
    (*pcVar2)();
  }
  lVar7 = lVar14;
  func_0x000107c5faec();
  func_0x000107c61170(lVar14);
  uVar8 = *(ulong *)(lStack_68 + lVar1);
  func_0x000107c4e04c();
  func_0x000107c61180();
  if (uVar8 != 0) {
    uVar12 = 0x112d64d20;
    func_0x0001000285a8(0x112d64d20,&UNK_10d92bec0);
    uVar9 = uVar8;
    func_0x000107c5fc54(uVar8,uVar12);
    func_0x000107c61170(uVar8);
    if (uVar9 >> 0x3e == 0) {
      uVar8 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar8 = uVar9 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar9) {
        uVar8 = uVar9;
      }
      func_0x000107c60480();
    }
    func_0x000107c6142c(uVar9);
    lVar14 = *(long *)(*(long *)(lVar5 + _DAT_112f151f8) + 0x10);
    plVar10 = (long *)(lVar4 + _DAT_112ec5540);
    *plVar10 = lVar7;
    plVar10[1] = lVar11;
    plVar10[2] = uVar8;
    plVar10[3] = lVar14;
    plVar10 = &lStack_90;
    lStack_90 = lVar4;
    lStack_88 = lVar3;
    func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
    uVar12 = *(undefined8 *)(lStack_68 + lVar1);
    func_0x000107c61174();
    func_0x000107c615f0(uVar12);
    FUN_102876e8c();
    func_0x000107c61170(plVar10);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(lStack_78);
    func_0x000107c61170(uVar13);
    func_0x000107c615e8(uVar12);
    *param_1 = (long)plVar10;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102876c6c);
  (*pcVar2)();
}



/* Entry: 102876c78; end: 102876e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102876c78(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  
  lVar9 = param_2;
  func_0x000107c610f8();
  *(long *)(unaff_x20 + _DAT_112ec5520) = param_1;
  *(long *)(unaff_x20 + _DAT_112ec5528) = param_2;
  uVar10 = *(undefined8 *)(param_3 + _DAT_113083868);
  *(undefined8 *)(unaff_x20 + _DAT_112ec5530) = uVar10;
  *(undefined8 *)(unaff_x20 + _DAT_112ec5538) = param_4;
  lVar2 = _DAT_112f151f0;
  lVar11 = *(long *)(param_1 + _DAT_112f151f0);
  lVar4 = param_1;
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  func_0x000107c444fc();
  func_0x000107c61180();
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102876e88);
    (*pcVar3)();
  }
  lVar5 = lVar11;
  func_0x000107c5faec();
  func_0x000107c61170(lVar11);
  uVar6 = *(ulong *)(param_1 + lVar2);
  func_0x000107c4e04c();
  func_0x000107c61180();
  if (uVar6 != 0) {
    uVar10 = 0x112d64d20;
    func_0x0001000285a8(0x112d64d20,&UNK_10d92bec0);
    uVar7 = uVar6;
    func_0x000107c5fc54(uVar6,uVar10);
    func_0x000107c61170(uVar6);
    if (uVar7 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar7 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar7) {
        uVar6 = uVar7;
      }
      func_0x000107c60480();
    }
    func_0x000107c6142c(uVar7);
    lVar11 = *(long *)(*(long *)(lVar4 + _DAT_112f151f8) + 0x10);
    plVar1 = (long *)(unaff_x20 + _DAT_112ec5540);
    *plVar1 = lVar5;
    plVar1[1] = lVar9;
    plVar1[2] = uVar6;
    plVar1[3] = lVar11;
    puVar8 = auStack_70;
    func_0x000107c61154(puVar8,PTR_s_init_1125d9248);
    uVar10 = *(undefined8 *)(param_1 + lVar2);
    func_0x000107c61174();
    func_0x000107c615f0(uVar10);
    FUN_102876e8c();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c615e8(uVar10);
    return puVar8;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102876e8c);
  (*pcVar3)();
}



/* Entry: 102876e8c; end: 1028772ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102876e8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  uVar9 = param_1;
  FUN_102878c10();
  puVar7 = &UNK_11055b5c0;
  puVar1 = puVar7;
  func_0x000107c613fc(&UNK_11055b5c0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_11055b5e8;
  func_0x000107c613fc(&UNK_11055b5e8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x000107c6157c(puVar1);
  func_0x000107c615f0(param_1);
  uVar11 = param_2;
  func_0x000107c5fadc(uVar9,param_2);
  func_0x000107c6142c(param_2);
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x102878a10;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e381c8;
  puStack_88 = &UNK_11055b600;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar4 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x000107c3dad4();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar9);
  puVar2 = puStack_78;
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000102878cdc();
  puVar1 = puVar7;
  func_0x000107c613fc(&UNK_11055b5c0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  func_0x000107c6157c(puVar1);
  uVar9 = uVar11;
  func_0x000107c5fadc(puVar2,uVar11);
  func_0x000107c6142c(uVar11);
  uStack_80 = 0x102878a34;
  puStack_a0 = puVar8;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100de205c;
  puStack_88 = &UNK_11055b628;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar1;
  func_0x000107c60bc4(ppuVar3);
  puVar6 = puVar4;
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(puVar2);
  puVar2 = puStack_78;
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000102878da8();
  func_0x000107c613fc(&UNK_11055b5c0,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  func_0x000107c6157c(puVar7);
  uVar11 = uVar9;
  func_0x000107c5fadc(puVar2,uVar9);
  func_0x000107c6142c(uVar9);
  uStack_80 = 0x102878a3c;
  puStack_a0 = puVar8;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100de205c;
  puStack_88 = &UNK_11055b650;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(puVar2);
  puVar2 = puStack_78;
  func_0x000107c61574(puVar7);
  func_0x000107c61574();
  func_0x000102878e74();
  puVar7 = puVar2;
  uVar9 = uVar11;
  func_0x000102878f40();
  puVar8 = puVar7;
  func_0x000100de9c28();
  func_0x000107c613fc();
  *(undefined8 *)(puVar8 + 0x18) = 7;
  *(undefined8 *)(puVar8 + 0x10) = 3;
  *(undefined **)(puVar8 + 0x20) = puVar5;
  *(undefined **)(puVar8 + 0x28) = puVar6;
  *(undefined **)(puVar8 + 0x30) = puVar4;
  puVar1 = PTR_PTR_1126aed78;
  func_0x000107c610f8(PTR_PTR_1126aed78);
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  func_0x000107c61174(puVar4);
  func_0x000107c5fadc(puVar2,uVar11);
  func_0x000107c6142c(uVar11);
  func_0x000107c5fadc(puVar7,uVar9);
  func_0x000107c6142c(uVar9);
  uVar9 = 0;
  FUN_102878aa8(0,0x112d360a8,&PTR_PTR_1126aed70);
  puVar10 = puVar8;
  func_0x000107c5fc48(puVar8,uVar9);
  func_0x000107c61574(puVar8);
  func_0x000107c48d50(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar10);
  func_0x000107c53fcc(puVar1);
  func_0x000107c3e2c0(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ec5520) + _DAT_112f15200));
  if (lRam0000000112ec5570 != -1) {
    func_0x000107c61568(0x112ec5570,FUN_102876948);
  }
  func_0x00010845f284(uRam0000000112ec5578,1);
  FUN_10287810c();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 102877300; end: 1028774c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102877300(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  lVar1 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (lRam0000000112ec5570 != -1) {
      func_0x000107c61568(0x112ec5570,FUN_102876948);
    }
    uVar4 = uRam0000000112ec5578;
    uVar2 = 0x6168635f6e65706f;
    func_0x000107c5fadc(0x6168635f6e65706f,0xe900000000000074);
    func_0x00010845f2fc(uVar4,uVar2,1);
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ab5e8;
    func_0x000107c610f8(PTR_PTR_1126ab5e8);
    func_0x000107c453e4();
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112ec5540);
    func_0x000107c5fadc(uVar4,((undefined8 *)(lVar1 + _DAT_112ec5540))[1]);
    func_0x000107c56718(puVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c52194(puVar3);
    func_0x000107c54f84(puVar3);
    func_0x000107c56acc(puVar3);
    lVar5 = *(long *)(lVar1 + _DAT_112ec5530);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      func_0x000107c4bfb0();
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar5);
    }
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61428(param_3 + 0x10,auStack_80,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_1028776a8(param_4,param_1,param_2);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1028774c4; end: 1028776a7;  */

/* WARNING: Possible PIC construction at 0x00010287759c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028775dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028775a0) */
/* WARNING: Removing unreachable block (ram,0x0001028775e0) */
/* WARNING: Removing unreachable block (ram,0x000102877620) */
/* WARNING: Removing unreachable block (ram,0x000102877634) */

void FUN_1028774c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == 2) {
    if (lRam0000000112ec5570 != -1) {
      func_0x000107c61568(0x112ec5570,FUN_102876948);
    }
    uVar2 = 0x6f6d5f6e7261656c;
    uVar3 = 0xea00000000006572;
  }
  else if (param_1 == 1) {
    if (lRam0000000112ec5570 != -1) {
      func_0x000107c61568(0x112ec5570,FUN_102876948);
    }
    uVar2 = 0x6c65636e6163;
    uVar3 = 0xe600000000000000;
  }
  else {
    if (param_1 != 0) {
      return;
    }
    if (lRam0000000112ec5570 != -1) {
      func_0x000107c61568(0x112ec5570,FUN_102876948);
    }
    uVar2 = 0x6168635f6e65706f;
    uVar3 = 0xe900000000000074;
  }
  uVar1 = uRam0000000112ec5578;
  func_0x000107c5fadc(uVar2,uVar3);
  func_0x00010845f2fc(uVar1,uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1028776a8; end: 10287789b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028776a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar8 = &puStack_80;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec5528);
  func_0x000107c44570();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      func_0x000107c55ff0(param_3);
      uVar4 = param_1;
      func_0x000107c444fc(param_1);
      func_0x000107c61180();
      uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ec5520) + _DAT_112f151f8);
      uVar5 = uVar9;
      func_0x000107c61434(uVar9);
      func_0x000107c5fe08();
      func_0x000107c6142c(uVar9);
      puVar6 = &UNK_11055b5c0;
      func_0x000107c613fc(&UNK_11055b5c0,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar7 = &UNK_11055b700;
      func_0x000107c613fc(&UNK_11055b700,0x30,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(undefined8 *)(puVar7 + 0x18) = param_3;
      *(undefined8 *)(puVar7 + 0x20) = param_2;
      *(undefined8 *)(puVar7 + 0x28) = param_1;
      uStack_60 = 0x102878a9c;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      pcStack_70 = FUN_102878378;
      puStack_68 = &UNK_11055b718;
      puStack_58 = puVar7;
      func_0x000107c60bc4(&puStack_80);
      puVar6 = puStack_58;
      func_0x000107c615f0(param_3);
      func_0x000107c61174(param_2);
      func_0x000107c615f0(param_1);
      func_0x000107c61574(puVar6);
      uVar9 = 0;
      FUN_102878aa8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      func_0x000107c5ffdc();
      func_0x000107c44478(lVar3);
      func_0x000107c61170(uVar9);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar5);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10287789c);
  (*pcVar1)();
}



/* Entry: 10287789c; end: 102877a1f;  */

void FUN_10287789c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1028774c4(1);
    func_0x000107c61170(lVar1);
  }
  pcStack_58 = FUN_102878a94;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_11055b6c8;
  ppuVar2 = &puStack_78;
  lStack_50 = param_2;
  func_0x000107c60bc4(ppuVar2);
  lVar1 = lStack_50;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(lVar1);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102877a20; end: 102877bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102877a20(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (lRam0000000112ec5570 != -1) {
      func_0x000107c61568(0x112ec5570,FUN_102876948);
    }
    uVar4 = uRam0000000112ec5578;
    uVar2 = 0x6f6d5f6e7261656c;
    func_0x000107c5fadc(0x6f6d5f6e7261656c,0xea00000000006572);
    func_0x00010845f2fc(uVar4,uVar2,1);
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ab5e8;
    func_0x000107c610f8(PTR_PTR_1126ab5e8);
    func_0x000107c453e4();
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112ec5540);
    func_0x000107c5fadc(uVar4,((undefined8 *)(lVar1 + _DAT_112ec5540))[1]);
    func_0x000107c56718(puVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c52194(puVar3);
    func_0x000107c54f84(puVar3);
    func_0x000107c56acc(puVar3);
    lVar5 = *(long *)(lVar1 + _DAT_112ec5530);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      func_0x000107c4bfb0();
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar5);
    }
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102877bc8(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102877bc8; end: 10287810b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102877bc8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  long lVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long alStack_110 [7];
  undefined1 auStack_d8 [8];
  code *pcStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0x112d3ae80;
  uStack_a8 = param_1;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)&pcStack_d0 - extraout_x8;
  lVar1 = 0;
  func_0x000104638d5c();
  puStack_b8 = (undefined *)lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar12 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12;
  lVar1 = 0x112d36580;
  lStack_b0 = lVar12;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar12 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar12 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar18 - extraout_x12_01;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar22 = *(long *)(lVar2 + -8);
  lVar21 = *(long *)(lVar22 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar17 - (lVar21 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar20 - extraout_x12_02;
  lVar13 = *(long *)(unaff_x20 + _DAT_112ec5538);
  lVar1 = lVar13;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar13);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  func_0x000107c5edd0(lVar17,0xd000000000000061,0x800000010f0c37d0);
  lVar1 = lVar17;
  (**(code **)(lVar22 + 0x30))(lVar17,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x0001000293e4(lVar17);
  }
  else {
    pcStack_d0 = *(code **)(lVar22 + 0x20);
    lStack_c0 = lVar10;
    (*pcStack_d0)(lVar10,lVar17,lVar2);
    pcVar14 = *(code **)(lVar22 + 0x38);
    lStack_c8 = lVar13;
    (*pcVar14)(lVar18,1,1,lVar2);
    (*pcVar14)(lVar12,1,1,lVar2);
    lVar1 = 0;
    func_0x0001046305a8();
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar15,1,1,lVar1);
    *(undefined1 *)(lVar10 + -8) = 0;
    *(undefined8 *)(lVar10 + -0x10) = 0;
    *(undefined8 *)(lVar10 + -0x18) = 0;
    *(undefined8 *)(lVar10 + -0x20) = 0;
    *(undefined8 *)(lVar10 + -0x28) = 0;
    *(undefined8 *)(lVar10 + -0x30) = 0;
    *(undefined8 *)(lVar10 + -0x38) = 0;
    *(long *)(lVar10 + -0x40) = lVar15;
    lVar10 = lStack_b0;
    func_0x000104638e24(lStack_b0,4,lVar18,0,lVar12,0,0,0,0);
    lVar12 = (long)*(int *)((long)puStack_b8 + 0x14);
    func_0x0001000293e4(lVar10 + lVar12);
    lVar1 = lStack_c0;
    pcVar19 = *(code **)(lVar22 + 0x10);
    (*pcVar19)(lVar10 + lVar12,lStack_c0,lVar2);
    (*pcVar14)(lVar10 + lVar12,0,1,lVar2);
    puVar3 = PTR_PTR_1126ae560;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puStack_b8 = puVar3;
    func_0x000107c43bf4();
    func_0x000107c61180();
    puVar4 = &UNK_11055b5c0;
    func_0x000107c613fc(&UNK_11055b5c0,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,unaff_x20);
    (*pcVar19)(lVar20,lVar1,lVar2);
    uVar11 = (ulong)*(byte *)(lVar22 + 0x50);
    uVar16 = uVar11 + 0x18 & (uVar11 ^ 0xffffffffffffffff);
    puVar5 = &UNK_11055b688;
    func_0x000107c613fc(&UNK_11055b688,uVar16 + lVar21,uVar11 | 7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    (*pcStack_d0)(puVar5 + uVar16,lVar20,lVar2);
    pcStack_70 = FUN_102878a44;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100e38b5c;
    puStack_78 = &UNK_11055b6a0;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_68);
    pcVar7 = "presentLearnMore(from:)";
    func_0x0001000c10c0("presentLearnMore(from:)");
    func_0x000107c61180();
    func_0x000107c5dc68(puVar3);
    func_0x000107c615e8(pcVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(puVar3);
    puVar5 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    uVar8 = 0;
    func_0x0001000956f0(0);
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar1 = lStack_a0;
    func_0x000100e39298(lVar10,lStack_a0);
    uVar9 = 0;
    func_0x000104652fec(0);
    func_0x000107c610f8();
    func_0x000104651d90(lVar1,uVar9);
    func_0x000107c61174(puVar5);
    puVar4 = puStack_b8;
    lVar12 = lVar1;
    func_0x000103c5d254(lVar1,puStack_b8,puVar5,unaff_x20,0,0,0,1);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar5);
    func_0x000107c42c1c(lStack_c8);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar12);
    (**(code **)(lVar22 + 8))(lStack_c0,lVar2);
    func_0x000100e392dc(lVar10);
  }
  return;
}



/* Entry: 10287810c; end: 1028781b7;  */

/* WARNING: Possible PIC construction at 0x000102878158: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010287815c) */
/* WARNING: Removing unreachable block (ram,0x000102878190) */
/* WARNING: Removing unreachable block (ram,0x0001028781a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10287810c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126ab5f0;
  func_0x000107c610f8(PTR_PTR_1126ab5f0);
  func_0x000107c453e4();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ec5540);
  func_0x000107c5fadc(uVar2,((undefined8 *)(unaff_x20 + _DAT_112ec5540))[1]);
  func_0x000107c56718(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1028781b8; end: 1028782d7;  */

void FUN_1028781b8(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    func_0x000107c55ff0(param_5);
    if ((param_3 & 1) == 0) {
      func_0x000107c61170(param_4);
    }
    else {
      puVar1 = &UNK_11055b750;
      func_0x000107c613fc(&UNK_11055b750,0x20,7);
      *(long *)(puVar1 + 0x10) = param_4;
      *(undefined8 *)(puVar1 + 0x18) = param_7;
      pcStack_68 = FUN_102878ae8;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_11055b768;
      ppuVar2 = &puStack_88;
      puStack_60 = puVar1;
      func_0x000107c60bc4(ppuVar2);
      puVar1 = puStack_60;
      func_0x000107c61174(param_4);
      func_0x000107c615f0(param_7);
      func_0x000107c61574(puVar1);
      func_0x000107c420a8(param_6);
      func_0x000107c61170(param_4);
      func_0x000107c60bd0(ppuVar2);
    }
  }
  return;
}



/* Entry: 1028782d8; end: 102878377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028782d8(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f15208;
  lVar3 = *(long *)(param_1 + _DAT_112ec5520);
  func_0x000107c61428(lVar3 + _DAT_112f15208,auStack_48,0,0);
  lVar3 = lVar3 + lVar1;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c444fc();
    func_0x000107c61180();
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102878378);
      (*pcVar2)();
    }
    func_0x000107c41c04(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102878378; end: 1028783eb;  */

void FUN_102878378(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    param_2 = 0;
    lVar3 = 0;
  }
  else {
    lVar3 = param_2;
    func_0x000107c5faec(param_2);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,lVar3,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar3);
  return;
}



/* Entry: 1028783ec; end: 10287853b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028783ec(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112ec5538;
  if (param_3 != 0) {
    if (param_2 == 0) {
      if (param_1 == 0) {
        lVar3 = *(long *)(param_3 + _DAT_112ec5538);
        func_0x000107c5194c();
        func_0x000107c61180();
        if (lVar3 != 0) {
          func_0x000107c61170();
          uVar1 = *(undefined8 *)(param_3 + lVar2);
          func_0x000107c4ffe8(uVar1);
          func_0x000107c61180();
          func_0x000107c61170(param_3);
          func_0x000107c615e8(uVar1);
          return;
        }
      }
      else {
        lVar2 = param_1;
        func_0x000107c615f0(param_1);
        func_0x000107c5ed90();
        func_0x000107c4b788(param_1);
        func_0x000107c61170(param_3);
        func_0x000107c615e8(param_1);
        param_3 = lVar2;
      }
    }
    else {
      lVar3 = *(long *)(param_3 + _DAT_112ec5538);
      func_0x000107c614b0(param_2);
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c61170();
        uVar1 = *(undefined8 *)(param_3 + lVar2);
        func_0x000107c4ffe8(uVar1);
        func_0x000107c61180();
        func_0x000107c614ac(param_2);
        func_0x000107c61170(param_3);
        func_0x000107c615e8(uVar1);
        return;
      }
      func_0x000107c614ac(param_2);
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 10287853c; end: 10287859b; -[_TtC46SCGroupChatNonFriendWarningAlertImplementation40GroupChatNonFriendWarningAlertEntryPoint init] */

void FUN_10287853c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGroupChatNonFriendWarningAlertImplementation.GroupChatNonFriendWarningAlertEntryPoint"
                      ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102878568);
  (*pcVar1)();
}



/* Entry: 10287859c; end: 102878607; -[_TtC46SCGroupChatNonFriendWarningAlertImplementation40GroupChatNonFriendWarningAlertEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10287859c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec5520));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec5528));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec5530));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec5538));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ec5540 + 8))
  ;
  return;
}



/* Entry: 102878608; end: 102878653; -[_TtC46SCGroupChatNonFriendWarningAlertImplementation40GroupChatNonFriendWarningAlertEntryPoint dialogDidDismiss:] */

/* WARNING: Possible PIC construction at 0x00010287863c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102878640) */

void FUN_102878608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001028786d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102878654; end: 102878847; -[_TtC46SCGroupChatNonFriendWarningAlertImplementation40GroupChatNonFriendWarningAlertEntryPoint webBrowserDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000102878690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028786ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102878694) */
/* WARNING: Removing unreachable block (ram,0x0001028786b0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102878654(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102878848; end: 102878857;  */

undefined1  [16] FUN_102878848(void)

{
  return ZEXT816(0x11055b518);
}



/* Entry: 102878858; end: 102878877;  */

void FUN_102878858(void)

{
  func_0x000107c61168(&PTR_PTR_112867b60);
  return;
}



/* Entry: 102878878; end: 1028788a3;  */

long FUN_102878878(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1028788a4; end: 1028788ab;  */

void FUN_1028788a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1028788ac; end: 1028788df;  */

undefined8 * FUN_1028788ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1028788e0; end: 10287893b;  */

undefined8 * FUN_1028788e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



/* Entry: 10287893c; end: 102878977;  */

undefined8 * FUN_10287893c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 102878978; end: 102878a43;  */

int FUN_102878978(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102878a44; end: 102878a93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102878a44(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_48 [24];
  
  lVar3 = 0;
  func_0x000107c5ede0();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff),lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112ec5538;
  if (lVar3 != 0) {
    if (param_2 == 0) {
      if (param_1 == 0) {
        lVar5 = *(long *)(lVar3 + _DAT_112ec5538);
        func_0x000107c5194c();
        func_0x000107c61180();
        if (lVar5 != 0) {
          func_0x000107c61170();
          uVar1 = *(undefined8 *)(lVar3 + lVar2);
          func_0x000107c4ffe8(uVar1);
          func_0x000107c61180();
          func_0x000107c61170(lVar3);
          func_0x000107c615e8(uVar1);
          return;
        }
      }
      else {
        lVar2 = param_1;
        func_0x000107c615f0(param_1);
        func_0x000107c5ed90();
        func_0x000107c4b788(param_1);
        func_0x000107c61170(lVar3);
        func_0x000107c615e8(param_1);
        lVar3 = lVar2;
      }
    }
    else {
      lVar5 = *(long *)(lVar3 + _DAT_112ec5538);
      func_0x000107c614b0(param_2);
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar5 != 0) {
        func_0x000107c61170();
        uVar1 = *(undefined8 *)(lVar3 + lVar2);
        func_0x000107c4ffe8(uVar1);
        func_0x000107c61180();
        func_0x000107c614ac(param_2);
        func_0x000107c61170(lVar3);
        func_0x000107c615e8(uVar1);
        return;
      }
      func_0x000107c614ac(param_2);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102878a94; end: 102878aa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102878a94(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f15208;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + _DAT_112ec5520);
    func_0x000107c61428(lVar3 + _DAT_112f15208,auStack_60,0,0);
    lVar3 = lVar3 + lVar1;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c61170(lVar2);
    }
    else {
      func_0x000107c4d714();
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 102878aa8; end: 102878ae7;  */

void FUN_102878aa8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102878ae8; end: 102878b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102878ae8(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f15208;
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ec5520);
  func_0x000107c61428(lVar4 + _DAT_112f15208,auStack_48,0,0);
  lVar4 = lVar4 + lVar1;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x000107c444fc();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102878378);
      (*pcVar2)();
    }
    func_0x000107c41c04(lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102878b20; end: 102878b6b;  */

void FUN_102878b20(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102878bf8,param_1);
  return;
}



/* Entry: 102878b6c; end: 102878bf7;  */

void FUN_102878b6c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e4de20;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 102878bf8; end: 102878c0f;  */

void FUN_102878bf8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e4de20;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 102878c10; end: 10287900b;  */

undefined1  [16] FUN_102878c10(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffd9;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0c3950);
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0c3890);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102878cdc);
  (*pcVar1)();
}



/* Entry: 10287900c; end: 1028790bb; -[_TtC49SCGroupChatNonFriendWarningServicesImplementation34SCGroupChatNonFriendWarningChecker initWithMessagingExperimentService:snapchattersSynchronousDataFetcher:acknowledgmentStore:groupsDataMutator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10287900c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ec5580) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ec5588) = param_4;
  *(undefined8 *)(param_1 + _DAT_112ec5590) = param_5;
  *(undefined8 *)(param_1 + _DAT_112ec5598) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 1028790bc; end: 1028794eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028790bc(undefined *param_1,ulong param_2,ulong param_3,undefined1 *param_4,
                  undefined8 *param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  long unaff_x20;
  
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  puVar2 = param_1;
  uVar12 = param_2;
  func_0x000107c444fc();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  puVar3 = puVar2;
  func_0x000107c5faec();
  uVar7 = (ulong)puVar3 & 0xffffffffffff;
  if ((uVar12 & 0x2000000000000000) != 0) {
    uVar7 = uVar12 >> 0x38 & 0xf;
  }
  if (uVar7 != 0) {
    uVar7 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar7 = param_3 >> 0x38 & 0xf;
    }
    if (uVar7 != 0) {
      puVar4 = param_1;
      func_0x000107c406d4();
      func_0x000107c61180();
      if (puVar4 != (undefined *)0x0) {
        puVar5 = puVar4;
        func_0x000107c49820();
        func_0x000107c61170(puVar4);
        if (puVar5 == (undefined *)0x8) goto LAB_102879238;
      }
      puVar4 = param_1;
      func_0x000107c49b6c();
      if (((ulong)puVar4 & 1) == 0) {
        lVar6 = *(long *)(unaff_x20 + _DAT_112ec5588);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar6 != 0) {
          uVar7 = *(ulong *)(unaff_x20 + _DAT_112ec5590);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (uVar7 != 0) {
            func_0x000107c615f0(lVar6);
            func_0x000107c5fadc(param_2,param_3);
            puVar4 = param_1;
            func_0x000108ef33e8(param_1,lVar6,param_2);
            func_0x000107c61180();
            func_0x000107c615e8(lVar6);
            func_0x000107c61170(param_2);
            puVar5 = PTR___swiftEmptySetSingleton_11034f1d8;
            if (puVar4 != (undefined *)0x0) {
              puVar5 = puVar4;
              func_0x000107c5fe10(puVar4,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
              func_0x000107c61170(puVar4);
            }
            if (*(long *)(puVar5 + 0x10) != 0) {
              uVar8 = *(ulong *)(unaff_x20 + _DAT_112ec5580);
              func_0x000107c5c734();
              func_0x000107c61180();
              if (uVar8 == 0) {
                func_0x000107c61170(puVar2);
                func_0x000107c615e8(lVar6);
              }
              else {
                uVar9 = uVar8;
                func_0x000107c4a640();
                func_0x000107c615e8(uVar8);
                if ((uVar9 & 1) != 0) {
                  func_0x000107c61174();
                  uVar8 = uVar7;
                  func_0x000107c3cf70();
                  func_0x000107c61180();
                  uVar9 = uVar8;
                  func_0x000107c5fe10();
                  func_0x000107c61170(uVar8);
                  func_0x000107c4d710();
                  func_0x000107c61180();
                  if (param_1 == (undefined *)0x0) {
                    func_0x000107c61170(puVar2);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1028794ec);
                    (*pcVar1)();
                  }
                  uVar10 = 0;
                  FUN_102879830(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
                  puVar4 = param_1;
                  func_0x000107c5f9e8(param_1,PTR___sSSN_11034da80,uVar10,PTR___sSSSHsWP_11034da90);
                  func_0x000107c61170(param_1);
                  FUN_1024e8d34();
                  if (*(long *)(uVar9 + 0x10) == 0) {
                    func_0x000107c61170(puVar2);
                    func_0x000107c61170(puVar2);
                  }
                  else {
                    puVar11 = puVar4;
                    func_0x000101117e30(puVar4,uVar9);
                    func_0x000107c61170(puVar2);
                    if (((ulong)puVar11 & 1) == 0) {
                      func_0x000107c61170(puVar2);
                      FUN_1028794ec(puVar3,uVar12,uVar9,puVar4);
                    }
                    else {
                      func_0x000107c3fa60(uVar7);
                      func_0x000107c61170(puVar2);
                    }
                  }
                  func_0x00010105ba6c(puVar4);
                  if (param_5 != (undefined8 *)0x0) {
                    puVar2 = puVar5;
                    func_0x000107c5fe08(puVar5,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
                    func_0x000107c61104();
                    *param_5 = puVar2;
                  }
                  uVar8 = uVar9;
                  func_0x000101117e30(uVar9,puVar5);
                  func_0x000107c6142c(uVar9);
                  if ((uVar8 & 1) != 0) {
                    if (param_4 != (undefined1 *)0x0) {
                      *param_4 = 1;
                    }
                    func_0x000107c615e8(uVar7);
                    func_0x000107c615e8(lVar6);
                    func_0x000107c6142c(uVar12);
                    func_0x000107c6142c(puVar5);
                    return;
                  }
                  func_0x000107c6142c(puVar5);
                  func_0x000107c6142c(uVar12);
                  func_0x000107c615e8(uVar7);
                  func_0x000107c615e8(lVar6);
                  return;
                }
                func_0x000107c61170(puVar2);
                func_0x000107c615e8(lVar6);
              }
              func_0x000107c615e8(uVar7);
              func_0x000107c6142c(puVar5);
              func_0x000107c6142c(uVar12);
              return;
            }
            func_0x000107c6142c(uVar12);
            func_0x000107c6142c(puVar5);
            func_0x000107c615e8(uVar7);
            func_0x000107c615e8(lVar6);
            goto LAB_102879240;
          }
          func_0x000107c615e8(lVar6);
        }
      }
    }
  }
LAB_102879238:
  func_0x000107c6142c(uVar12);
LAB_102879240:
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1028794ec; end: 10287969f;  */

/* WARNING: Possible PIC construction at 0x0001028795c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028795c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028794ec(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long unaff_x20;
  
  if (*(ulong *)(param_3 + 0x10) >> 3 < *(ulong *)(param_4 + 0x10)) {
    func_0x000107c61434(param_3);
    func_0x000101baba54(param_4,param_3);
    lVar1 = *(long *)(param_4 + 0x10);
  }
  else {
    func_0x000107c61434(param_3);
    func_0x0001012eef50(param_4);
    lVar1 = *(long *)(param_3 + 0x10);
    param_4 = param_3;
  }
  if (lVar1 != 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112ec5598);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c5fe08(param_4,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 1028796a0; end: 102879737; -[_TtC49SCGroupChatNonFriendWarningServicesImplementation34SCGroupChatNonFriendWarningChecker shouldPresentNonFriendWarningForGroup:userId:logSuppressedIfNotPresent:nonFriendUserIds:] */

uint FUN_1028796a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_4);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028790bc(param_3,param_4,param_2,param_5,param_6);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 102879738; end: 10287973b;  */

void FUN_102879738(void)

{
  return;
}



/* Entry: 10287973c; end: 10287979b; -[_TtC49SCGroupChatNonFriendWarningServicesImplementation34SCGroupChatNonFriendWarningChecker init] */

void FUN_10287973c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGroupChatNonFriendWarningServicesImplementation.SCGroupChatNonFriendWarningChecker"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102879768);
  (*pcVar1)();
}



/* Entry: 10287979c; end: 1028797f3; -[_TtC49SCGroupChatNonFriendWarningServicesImplementation34SCGroupChatNonFriendWarningChecker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028797b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028797d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028797bc) */
/* WARNING: Removing unreachable block (ram,0x0001028797dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10287979c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec5580));
  return;
}



/* Entry: 1028797f4; end: 102879813;  */

void FUN_1028797f4(void)

{
  func_0x000107c61168(&PTR_PTR_112867c40);
  return;
}



/* Entry: 102879814; end: 10287982f;  */

void FUN_102879814(long param_1,long param_2)

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



/* Entry: 102879830; end: 10287986f;  */

void FUN_102879830(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102879870; end: 102879983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102879870(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ec55c8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ec55d0) = param_3;
  *(long *)(unaff_x20 + _DAT_112ec55d8) = param_4;
  *(long *)(unaff_x20 + _DAT_112ec55e0) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_3);
  lVar3 = param_5;
  func_0x000107c61174();
  func_0x000107c61154(&stack0xffffffffffffffb0,puVar2);
  if (param_5 == 0) {
    func_0x000107c615e8(param_3);
  }
  else {
    lVar5 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      func_0x000107c3d740();
      func_0x000107c615e8(lVar5);
    }
    func_0x000107c615e8(param_3);
    func_0x000107c61170(param_4);
    param_4 = lVar3;
  }
  func_0x000107c61170(param_4);
  return puVar4;
}



/* Entry: 102879984; end: 102879a03; -[_TtC49SCGroupChatNonFriendWarningServicesImplementation51SCGroupChatNonFriendWarningLocalAcknowledgmentStore initWithUserId:storagePerformer:preferences:groupsDataTracker:] */

void FUN_102879984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c5faec(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  FUN_102879870(param_3,param_2,param_4,param_5,param_6);
  return;
}



/* Entry: 102879a04; end: 102879a7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102879a04(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec55e0);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c4ff64();
      func_0x000107c615e8(lVar1);
    }
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102879a80; end: 102879b17; -[_TtC49SCGroupChatNonFriendWarningServicesImplementation51SCGroupChatNonFriendWarningLocalAcknowledgmentStore dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102879a80(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = *(long *)(param_1 + _DAT_112ec55e0);
  if (lVar2 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4ff64();
      func_0x000107c615e8(lVar2);
    }
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102879b18; end: 102879b73; -[_TtC49SCGroupChatNonFriendWarningServicesImplementation51SCGroupChatNonFriendWarningLocalAcknowledgmentStore .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102879b58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102879b5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102879b18(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec55c8 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec55d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec55d8));
  return;
}



/* Entry: 102879b74; end: 102879e87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102879b74(undefined *param_1,ulong param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [16];
  undefined *puStack_38;
  
  puStack_38 = PTR___swiftEmptySetSingleton_11034f1d8;
  ppuVar2 = &puStack_a0;
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112ec55d0);
    if (lVar5 == 0) {
      puVar3 = param_1;
      func_0x000102879d68();
      if ((*(long *)(puVar3 + 0x10) != 0) && (func_0x000100029284(), (param_2 & 1) != 0)) {
        puVar6 = *(undefined **)(*(long *)(puVar3 + 0x38) + (long)param_1 * 8);
        func_0x000107c61434(puVar6);
        func_0x000107c6142c(puVar3);
        puVar4 = puVar6;
        func_0x000100403a6c();
        func_0x000107c6142c(puVar6);
        puVar3 = puStack_38;
        puStack_38 = puVar4;
      }
      func_0x000107c6142c(puVar3);
    }
    else {
      puVar3 = &UNK_11055ba40;
      func_0x000107c613fc(&UNK_11055ba40,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = 0x10287b28c;
      *(undefined1 **)(puVar3 + 0x18) = auStack_70;
      uStack_80 = 0x10287b2d0;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_10006eb60;
      puStack_88 = &UNK_11055ba58;
      puStack_78 = puVar3;
      func_0x000107c60bc4(&puStack_a0);
      puVar3 = puStack_78;
      func_0x000107c615f0(lVar5);
      func_0x000107c61574(puVar3);
      func_0x000107c4e530(lVar5);
      func_0x000107c60bd0(ppuVar2);
      func_0x000107c615e8(lVar5);
    }
  }
  return puStack_38;
}



/* Entry: 102879e88; end: 10287a013; -[_TtC49SCGroupChatNonFriendWarningServicesImplementation51SCGroupChatNonFriendWarningLocalAcknowledgmentStore acknowledgedNonFriendUserIdsForGroupId:] */

void FUN_102879e88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102879b74(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  uVar1 = param_3;
  func_0x000107c5fe08(param_3,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10287a014; end: 10287a1bb;  */

/* WARNING: Possible PIC construction at 0x00010287a058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287a104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287a17c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010287a108) */
/* WARNING: Removing unreachable block (ram,0x00010287a05c) */
/* WARNING: Removing unreachable block (ram,0x00010287a130) */
/* WARNING: Removing unreachable block (ram,0x00010287a134) */
/* WARNING: Removing unreachable block (ram,0x00010287a084) */
/* WARNING: Removing unreachable block (ram,0x00010287a088) */
/* WARNING: Removing unreachable block (ram,0x00010287a180) */
/* WARNING: Removing unreachable block (ram,0x00010287a194) */

void FUN_10287a014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000102879d68();
  func_0x000101e4887c(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 10287a1bc; end: 10287a217; -[_TtC49SCGroupChatNonFriendWarningServicesImplementation51SCGroupChatNonFriendWarningLocalAcknowledgmentStore clearAcknowledgmentForGroupId:] */

void FUN_10287a1bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  func_0x000102879f14(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10287a218; end: 10287a21b; -[_TtC49SCGroupChatNonFriendWarningServicesImplementation51SCGroupChatNonFriendWarningLocalAcknowledgmentStore didUpdateGroupsDataRequest:groupId:] */

void FUN_10287a218(void)

{
  return;
}



/* Entry: 10287a21c; end: 10287a513;  */

void FUN_10287a21c(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  puVar6 = &UNK_11055b888;
  puVar3 = puVar6;
  func_0x000107c613fc(&UNK_11055b888,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_11055b8b0;
  func_0x000107c613fc(&UNK_11055b8b0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x10287adc4;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x10287b2c8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1011ac670;
  puStack_88 = &UNK_11055b8c8;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar7 = puStack_78;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar7);
  func_0x000107c613fc(&UNK_11055b888,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  puVar7 = &UNK_11055b900;
  func_0x000107c613fc(&UNK_11055b900,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_10287ae00;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = FUN_10287ae20;
  puStack_a0 = puVar11;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101bd4c50;
  puStack_88 = &UNK_11055b918;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  pcStack_80 = FUN_10287a79c;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar11;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100de6bdc;
  puStack_88 = &UNK_11055b940;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  pcStack_80 = FUN_10287a79c;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar11;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_11055b968;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  func_0x000107c4c784(param_1);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar11 = puVar4;
  func_0x000107c61544(puVar4,"",0x96,0x49,0x27,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar11 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10287a508);
    (*pcVar2)();
  }
  puVar6 = puVar7;
  func_0x000107c61544(puVar7,"",0x96,0x4b,0x15,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10287a50c);
    (*pcVar2)();
  }
  uVar12 = 0;
  func_0x000107c61544(0,"",0x96,0x4d,0x13,1);
  if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10287a510);
    (*pcVar2)();
  }
  uVar12 = 0;
  func_0x000107c61544(0,"",0x96,0x4d,0x2c,1);
  if ((uVar12 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10287a514);
  (*pcVar2)();
}



/* Entry: 10287a514; end: 10287a63f;  */

/* WARNING: Possible PIC construction at 0x00010287a5e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287a61c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010287a5e8) */
/* WARNING: Removing unreachable block (ram,0x00010287a5f4) */
/* WARNING: Removing unreachable block (ram,0x00010287a620) */

void FUN_10287a514(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1;
  func_0x000107c444fc();
  func_0x000107c61180();
  if (uVar2 == 0) {
    return;
  }
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  uVar2 = uVar3 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if ((uVar2 != 0) && (FUN_102879b74(uVar3,param_2), *(long *)(uVar3 + 0x10) != 0)) {
    func_0x000107c4d710();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10287a640);
      (*pcVar1)();
    }
    uVar4 = 0;
    func_0x0001002ed07c(0);
    uVar2 = param_1;
    func_0x000107c5f9e8(param_1,PTR___sSSN_11034da80,uVar4,PTR___sSSSHsWP_11034da90);
    func_0x000107c61170(param_1);
    FUN_1024e8d34(uVar2);
    func_0x000101117e30();
    param_2 = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10287a640; end: 10287a79b;  */

void FUN_10287a640(undefined8 param_1,long param_2,code *param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    (*param_3)(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10287a79c; end: 10287a7a3;  */

void FUN_10287a79c(void)

{
  return;
}



/* Entry: 10287a7a4; end: 10287a7f3; -[_TtC49SCGroupChatNonFriendWarningServicesImplementation51SCGroupChatNonFriendWarningLocalAcknowledgmentStore didGroupsUpdateDataRequest:] */

/* WARNING: Possible PIC construction at 0x00010287a7dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010287a7e0) */

void FUN_10287a7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10287a21c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10287a7f4; end: 10287ad77;  */

/* WARNING: Possible PIC construction at 0x00010287a940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287a954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287a9c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287ab10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287ab38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287ab5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287ac68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287ac80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287ad40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287ad0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287ad24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287ab70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287aadc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287aa64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287aa78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287aac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287a9dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287a9ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010287aacc) */
/* WARNING: Removing unreachable block (ram,0x00010287aa7c) */
/* WARNING: Removing unreachable block (ram,0x00010287aa68) */
/* WARNING: Removing unreachable block (ram,0x00010287aae0) */
/* WARNING: Removing unreachable block (ram,0x00010287ab74) */
/* WARNING: Removing unreachable block (ram,0x00010287ad28) */
/* WARNING: Removing unreachable block (ram,0x00010287ad10) */
/* WARNING: Removing unreachable block (ram,0x00010287ac84) */
/* WARNING: Removing unreachable block (ram,0x00010287ad34) */
/* WARNING: Removing unreachable block (ram,0x00010287ad44) */
/* WARNING: Removing unreachable block (ram,0x00010287ac6c) */
/* WARNING: Removing unreachable block (ram,0x00010287ab60) */
/* WARNING: Removing unreachable block (ram,0x00010287ab7c) */
/* WARNING: Removing unreachable block (ram,0x00010287aba4) */
/* WARNING: Removing unreachable block (ram,0x00010287ad68) */
/* WARNING: Removing unreachable block (ram,0x00010287ab3c) */
/* WARNING: Removing unreachable block (ram,0x00010287ab14) */
/* WARNING: Removing unreachable block (ram,0x00010287ab64) */
/* WARNING: Removing unreachable block (ram,0x00010287ab18) */
/* WARNING: Removing unreachable block (ram,0x00010287aba8) */
/* WARNING: Removing unreachable block (ram,0x00010287ab2c) */
/* WARNING: Removing unreachable block (ram,0x00010287a9c8) */
/* WARNING: Removing unreachable block (ram,0x00010287aa84) */
/* WARNING: Removing unreachable block (ram,0x00010287aa94) */
/* WARNING: Removing unreachable block (ram,0x00010287a9d4) */
/* WARNING: Removing unreachable block (ram,0x00010287aae8) */
/* WARNING: Removing unreachable block (ram,0x00010287a958) */
/* WARNING: Removing unreachable block (ram,0x00010287ad74) */
/* WARNING: Removing unreachable block (ram,0x00010287a96c) */
/* WARNING: Removing unreachable block (ram,0x00010287a9f4) */
/* WARNING: Removing unreachable block (ram,0x00010287ad70) */
/* WARNING: Removing unreachable block (ram,0x00010287aa20) */
/* WARNING: Removing unreachable block (ram,0x00010287aab4) */
/* WARNING: Removing unreachable block (ram,0x00010287aa38) */
/* WARNING: Removing unreachable block (ram,0x00010287a9ac) */
/* WARNING: Removing unreachable block (ram,0x00010287aad8) */
/* WARNING: Removing unreachable block (ram,0x00010287a9b0) */
/* WARNING: Removing unreachable block (ram,0x00010287a944) */
/* WARNING: Removing unreachable block (ram,0x00010287a9f0) */
/* WARNING: Removing unreachable block (ram,0x00010287aaa0) */
/* WARNING: Removing unreachable block (ram,0x00010287abc4) */
/* WARNING: Removing unreachable block (ram,0x00010287acc0) */
/* WARNING: Removing unreachable block (ram,0x00010287acc4) */
/* WARNING: Removing unreachable block (ram,0x00010287abe8) */
/* WARNING: Removing unreachable block (ram,0x00010287abec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10287a7f4(undefined1 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  func_0x000102879d68();
  puVar1 = PTR___sypN_11034f1a8;
  if ((*(long *)(param_1 + 0x10) != 0) && (lVar8 = *(long *)(param_2 + 0x10), lVar8 != 0)) {
    lVar10 = 1;
    lVar9 = lVar8;
    do {
      param_2 = param_2 + 0x20;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10287ad68);
        (*pcVar3)();
      }
      func_0x0001000bb420(param_2,auStack_80);
      uVar4 = 0x112d6dfd0;
      func_0x0001000285a8(0x112d6dfd0,&UNK_10db63bd0);
      plVar5 = &lStack_88;
      puVar7 = auStack_80;
      func_0x000107c6147c(plVar5,puVar7,puVar1 + 8,uVar4,6);
      lVar2 = lStack_88;
      if (((ulong)plVar5 & 1) != 0) {
        lVar6 = lStack_88;
        func_0x000107c444fc();
        func_0x000107c61180();
        if (lVar6 != 0) {
          lVar8 = lVar6;
          func_0x000107c5faec();
          func_0x000107c61170(lVar6);
          if (*(long *)(param_1 + 0x10) == 0) {
            func_0x000107c615e8(lVar2);
            param_1 = puVar7;
          }
          else {
            func_0x000107c61434(param_1);
            func_0x000100029284();
            if (((ulong)puVar7 & 1) != 0) {
              func_0x000107c61434(*(undefined8 *)(*(long *)(param_1 + 0x38) + lVar8 * 8));
            }
          }
          break;
        }
        func_0x000107c615e8(lVar2);
      }
      lVar9 = lVar9 + -1;
      lVar10 = lVar10 + 1;
    } while (lVar10 - lVar8 != 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
  return;
}



/* Entry: 10287ad78; end: 10287ade3; -[_TtC49SCGroupChatNonFriendWarningServicesImplementation51SCGroupChatNonFriendWarningLocalAcknowledgmentStore init] */

void FUN_10287ad78(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGroupChatNonFriendWarningServicesImplementation.SCGroupChatNonFriendWarningLocalAcknowledgmentStore"
                      ,0x65,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10287ada4);
  (*pcVar1)();
}



/* Entry: 10287ade4; end: 10287adff;  */

void FUN_10287ade4(long param_1,long param_2)

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



/* Entry: 10287ae00; end: 10287ae1f;  */

void FUN_10287ae00(void)

{
  FUN_10287a640();
  return;
}



/* Entry: 10287ae20; end: 10287ae3f;  */

void FUN_10287ae20(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10287ae40; end: 10287ae47;  */

/* WARNING: Possible PIC construction at 0x00010287a940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287a954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287a9c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287ab10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287ab38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287ab5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287ac68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287ac80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287ad40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287ad0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287ad24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287ab70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287aadc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287aa64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287aa78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287aac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287a9dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287a9ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010287aacc) */
/* WARNING: Removing unreachable block (ram,0x00010287aa7c) */
/* WARNING: Removing unreachable block (ram,0x00010287aa68) */
/* WARNING: Removing unreachable block (ram,0x00010287aae0) */
/* WARNING: Removing unreachable block (ram,0x00010287ab74) */
/* WARNING: Removing unreachable block (ram,0x00010287ad28) */
/* WARNING: Removing unreachable block (ram,0x00010287ad10) */
/* WARNING: Removing unreachable block (ram,0x00010287ac84) */
/* WARNING: Removing unreachable block (ram,0x00010287ad34) */
/* WARNING: Removing unreachable block (ram,0x00010287ad44) */
/* WARNING: Removing unreachable block (ram,0x00010287ac6c) */
/* WARNING: Removing unreachable block (ram,0x00010287ab60) */
/* WARNING: Removing unreachable block (ram,0x00010287ab7c) */
/* WARNING: Removing unreachable block (ram,0x00010287aba4) */
/* WARNING: Removing unreachable block (ram,0x00010287ad68) */
/* WARNING: Removing unreachable block (ram,0x00010287ab3c) */
/* WARNING: Removing unreachable block (ram,0x00010287ab14) */
/* WARNING: Removing unreachable block (ram,0x00010287ab64) */
/* WARNING: Removing unreachable block (ram,0x00010287ab18) */
/* WARNING: Removing unreachable block (ram,0x00010287aba8) */
/* WARNING: Removing unreachable block (ram,0x00010287ab2c) */
/* WARNING: Removing unreachable block (ram,0x00010287a9c8) */
/* WARNING: Removing unreachable block (ram,0x00010287aa84) */
/* WARNING: Removing unreachable block (ram,0x00010287aa94) */
/* WARNING: Removing unreachable block (ram,0x00010287a9d4) */
/* WARNING: Removing unreachable block (ram,0x00010287aae8) */
/* WARNING: Removing unreachable block (ram,0x00010287a958) */
/* WARNING: Removing unreachable block (ram,0x00010287ad74) */
/* WARNING: Removing unreachable block (ram,0x00010287a96c) */
/* WARNING: Removing unreachable block (ram,0x00010287a9f4) */
/* WARNING: Removing unreachable block (ram,0x00010287ad70) */
/* WARNING: Removing unreachable block (ram,0x00010287aa20) */
/* WARNING: Removing unreachable block (ram,0x00010287aab4) */
/* WARNING: Removing unreachable block (ram,0x00010287aa38) */
/* WARNING: Removing unreachable block (ram,0x00010287a9ac) */
/* WARNING: Removing unreachable block (ram,0x00010287aad8) */
/* WARNING: Removing unreachable block (ram,0x00010287a9b0) */
/* WARNING: Removing unreachable block (ram,0x00010287a944) */
/* WARNING: Removing unreachable block (ram,0x00010287a9f0) */
/* WARNING: Removing unreachable block (ram,0x00010287aaa0) */
/* WARNING: Removing unreachable block (ram,0x00010287abc4) */
/* WARNING: Removing unreachable block (ram,0x00010287acc0) */
/* WARNING: Removing unreachable block (ram,0x00010287acc4) */
/* WARNING: Removing unreachable block (ram,0x00010287abe8) */
/* WARNING: Removing unreachable block (ram,0x00010287abec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10287ae40(void)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  puVar4 = *(undefined1 **)(unaff_x20 + 0x10);
  lVar12 = *(long *)(unaff_x20 + 0x18);
  func_0x000102879d68();
  puVar1 = PTR___sypN_11034f1a8;
  if ((*(long *)(puVar4 + 0x10) != 0) && (lVar9 = *(long *)(lVar12 + 0x10), lVar9 != 0)) {
    lVar11 = 1;
    lVar10 = lVar9;
    do {
      lVar12 = lVar12 + 0x20;
      if (lVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10287ad68);
        (*pcVar3)();
      }
      func_0x0001000bb420(lVar12,auStack_80);
      uVar5 = 0x112d6dfd0;
      func_0x0001000285a8(0x112d6dfd0,&UNK_10db63bd0);
      plVar6 = &lStack_88;
      puVar8 = auStack_80;
      func_0x000107c6147c(plVar6,puVar8,puVar1 + 8,uVar5,6);
      lVar2 = lStack_88;
      if (((ulong)plVar6 & 1) != 0) {
        lVar7 = lStack_88;
        func_0x000107c444fc();
        func_0x000107c61180();
        if (lVar7 != 0) {
          lVar12 = lVar7;
          func_0x000107c5faec();
          func_0x000107c61170(lVar7);
          if (*(long *)(puVar4 + 0x10) == 0) {
            func_0x000107c615e8(lVar2);
            puVar4 = puVar8;
          }
          else {
            func_0x000107c61434(puVar4);
            func_0x000100029284();
            if (((ulong)puVar8 & 1) != 0) {
              func_0x000107c61434(*(undefined8 *)(*(long *)(puVar4 + 0x38) + lVar12 * 8));
            }
          }
          break;
        }
        func_0x000107c615e8(lVar2);
      }
      lVar10 = lVar10 + -1;
      lVar11 = lVar11 + 1;
    } while (lVar11 - lVar9 != 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar4);
  return;
}



/* Entry: 10287ae48; end: 10287ae67;  */

void FUN_10287ae48(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10287ae68; end: 10287b013;  */

/* WARNING: Removing unreachable block (ram,0x00010287afcc) */

ulong FUN_10287ae68(long param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined1 auStack_f8 [72];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (undefined1 *)
            ((1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f)) + 0x3fU >> 3 & 0xffffffffffffff8);
  if (0xd < (*(byte *)(param_2 + 0x20) & 0x3f)) {
    iVar7 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    if ((iVar7 == 0) || (puVar8 = puVar10, func_0x000107c61594(puVar10,8), ((ulong)puVar8 & 1) == 0)
       ) {
      func_0x000107c6158c(puVar10,0xffffffffffffffff);
      func_0x000107c60ee4();
      puVar8 = puVar10;
      FUN_10287b014(puVar10,param_1,param_2);
      param_1 = -1;
      param_2 = -1;
      func_0x000107c61590();
      goto LAB_10287af14;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar10 = auStack_50 + -((ulong)(puVar10 + 0xf) & 0x1ffffffffffffff0);
  func_0x000107c60ee4(puVar10);
  FUN_10287b014();
  puVar8 = puVar10;
LAB_10287af14:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (ulong)puVar8 & 1;
  }
  func_0x000107c60e78();
  puVar20 = (ulong *)(param_1 + 0x40);
  uVar16 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if (-uVar16 < 0x40) {
    uVar18 = ~(-1L << (-uVar16 & 0x3f));
  }
  uVar18 = uVar18 & *puVar20;
  func_0x000107c61434(param_1);
  lVar15 = 0;
  lVar21 = 0;
  lVar4 = lVar21;
  uVar3 = uVar18;
  do {
    do {
      while( true ) {
        while (uVar12 = uVar3, lVar22 = lVar4, uVar18 == 0) {
          bVar6 = SCARRY8(lVar21,1);
          lVar21 = lVar21 + 1;
          if (bVar6) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10287b27c);
            (*pcVar5)();
          }
          if ((long)(0x3f - uVar16 >> 6) <= lVar21) {
            uVar12 = 0;
            uVar18 = 0;
            goto LAB_10287b23c;
          }
          lVar4 = lVar22;
          uVar3 = uVar12;
          uVar18 = puVar20[lVar21];
        }
        uVar3 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
        uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        uVar18 = uVar18 - 1 & uVar18;
        puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x10
                          + lVar21 * 0x400);
        uVar13 = *puVar1;
        uVar2 = puVar1[1];
        func_0x000107c6068c(auStack_f8,*(undefined8 *)(param_2 + 0x28));
        func_0x000107c61434(uVar2);
        puVar8 = auStack_f8;
        func_0x000107c5fb58(puVar8,uVar13,uVar2);
        func_0x000107c606a8();
        uVar14 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
        uVar19 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
        uVar17 = uVar19 >> 6;
        uVar23 = 1L << (uVar19 & 0x3f);
        lVar4 = lVar21;
        uVar3 = uVar18;
        if ((uVar23 & *(ulong *)(param_2 + 0x38 + uVar17 * 8)) != 0) break;
LAB_10287b200:
        func_0x000107c6142c(uVar2);
      }
      puVar1 = (ulong *)(*(long *)(param_2 + 0x30) + uVar19 * 0x10);
      uVar9 = *puVar1;
      uVar11 = puVar1[1];
      if (uVar9 != uVar13 || uVar11 != uVar2) {
        do {
          func_0x000107c605b8(uVar9,uVar11,uVar13,uVar2,0);
          if ((uVar9 & 1) != 0) break;
          uVar19 = uVar19 + 1 & ~uVar14;
          uVar17 = uVar19 >> 6;
          uVar23 = 1L << (uVar19 & 0x3f);
          if ((uVar23 & *(ulong *)(param_2 + 0x38 + uVar17 * 8)) == 0) goto LAB_10287b200;
          puVar1 = (ulong *)(*(long *)(param_2 + 0x30) + uVar19 * 0x10);
          uVar9 = *puVar1;
          uVar11 = puVar1[1];
        } while ((uVar9 != uVar13) || (uVar11 != uVar2));
      }
      func_0x000107c6142c(uVar2);
      uVar13 = *(ulong *)(puVar10 + uVar17 * 8);
      *(ulong *)(puVar10 + uVar17 * 8) = uVar13 | uVar23;
    } while ((uVar13 & uVar23) != 0);
    bVar6 = SCARRY8(lVar15,1);
    lVar15 = lVar15 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10287b280);
      (*pcVar5)();
    }
  } while (lVar15 != *(long *)(param_2 + 0x10));
  uVar18 = 1;
LAB_10287b23c:
  func_0x000101316148(param_1,puVar20,~uVar16,lVar22,uVar12);
  return uVar18;
}



/* Entry: 10287b014; end: 10287b27f;  */

undefined8 FUN_10287b014(long param_1,long param_2,long param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined1 auStack_a8 [72];
  
  puVar19 = (ulong *)(param_2 + 0x40);
  uVar14 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (-uVar14 < 0x40) {
    uVar17 = ~(-1L << (-uVar14 & 0x3f));
  }
  uVar17 = uVar17 & *puVar19;
  func_0x000107c61434(param_2);
  lVar13 = 0;
  lVar20 = 0;
  lVar4 = lVar20;
  uVar3 = uVar17;
  do {
    do {
      while( true ) {
        while (uVar10 = uVar3, lVar21 = lVar4, uVar17 == 0) {
          bVar6 = SCARRY8(lVar20,1);
          lVar20 = lVar20 + 1;
          if (bVar6) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10287b27c);
            (*pcVar5)();
          }
          if ((long)(0x3f - uVar14 >> 6) <= lVar20) {
            uVar10 = 0;
            uVar15 = 0;
            goto LAB_10287b23c;
          }
          lVar4 = lVar21;
          uVar3 = uVar10;
          uVar17 = puVar19[lVar20];
        }
        uVar3 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
        uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        uVar17 = uVar17 - 1 & uVar17;
        puVar1 = (ulong *)(*(long *)(param_2 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x10
                          + lVar20 * 0x400);
        uVar11 = *puVar1;
        uVar2 = puVar1[1];
        func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_3 + 0x28));
        func_0x000107c61434(uVar2);
        puVar7 = auStack_a8;
        func_0x000107c5fb58(puVar7,uVar11,uVar2);
        func_0x000107c606a8();
        uVar12 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
        uVar18 = (ulong)puVar7 & (uVar12 ^ 0xffffffffffffffff);
        uVar16 = uVar18 >> 6;
        uVar22 = 1L << (uVar18 & 0x3f);
        lVar4 = lVar20;
        uVar3 = uVar17;
        if ((uVar22 & *(ulong *)(param_3 + 0x38 + uVar16 * 8)) != 0) break;
LAB_10287b200:
        func_0x000107c6142c(uVar2);
      }
      puVar1 = (ulong *)(*(long *)(param_3 + 0x30) + uVar18 * 0x10);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      if (uVar8 != uVar11 || uVar9 != uVar2) {
        do {
          func_0x000107c605b8(uVar8,uVar9,uVar11,uVar2,0);
          if ((uVar8 & 1) != 0) break;
          uVar18 = uVar18 + 1 & ~uVar12;
          uVar16 = uVar18 >> 6;
          uVar22 = 1L << (uVar18 & 0x3f);
          if ((uVar22 & *(ulong *)(param_3 + 0x38 + uVar16 * 8)) == 0) goto LAB_10287b200;
          puVar1 = (ulong *)(*(long *)(param_3 + 0x30) + uVar18 * 0x10);
          uVar8 = *puVar1;
          uVar9 = puVar1[1];
        } while ((uVar8 != uVar11) || (uVar9 != uVar2));
      }
      func_0x000107c6142c(uVar2);
      uVar11 = *(ulong *)(param_1 + uVar16 * 8);
      *(ulong *)(param_1 + uVar16 * 8) = uVar11 | uVar22;
    } while ((uVar11 & uVar22) != 0);
    bVar6 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10287b280);
      (*pcVar5)();
    }
  } while (lVar13 != *(long *)(param_3 + 0x10));
  uVar15 = 1;
LAB_10287b23c:
  func_0x000101316148(param_2,puVar19,~uVar14,lVar21,uVar10);
  return uVar15;
}



/* Entry: 10287b280; end: 10287b2d3;  */

/* WARNING: Possible PIC construction at 0x00010287a058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287a104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287a17c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010287a108) */
/* WARNING: Removing unreachable block (ram,0x00010287a05c) */
/* WARNING: Removing unreachable block (ram,0x00010287a130) */
/* WARNING: Removing unreachable block (ram,0x00010287a134) */
/* WARNING: Removing unreachable block (ram,0x00010287a084) */
/* WARNING: Removing unreachable block (ram,0x00010287a088) */
/* WARNING: Removing unreachable block (ram,0x00010287a180) */
/* WARNING: Removing unreachable block (ram,0x00010287a194) */

void FUN_10287b280(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000102879d68();
  func_0x000101e4887c(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 10287b2d4; end: 10287b457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10287b2d4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = 0x48;
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  return unaff_x20;
}



/* Entry: 10287b458; end: 10287b51b;  */

undefined8
FUN_10287b458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x00010287b3a0(param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return param_1;
}



/* Entry: 10287b51c; end: 10287b7ab;  */

undefined * FUN_10287b51c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  undefined8 uVar14;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar8 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar14 = uVar11;
  func_0x000107c5fadc(uVar11,uVar1);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = uVar12;
  func_0x000107c4ec80(uVar12);
  func_0x000107c61180();
  func_0x000108ef72c8(uVar14,uVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar4);
  lVar13 = *(long *)(unaff_x20 + 0x40);
  lVar5 = lVar13;
  func_0x000107c44574();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uVar14 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar7 = &UNK_11055ba90;
  func_0x000107c613fc(&UNK_11055ba90,0x38,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar14;
  *(undefined8 *)(puVar7 + 0x18) = uVar11;
  *(undefined8 *)(puVar7 + 0x20) = uVar1;
  *(undefined8 *)(puVar7 + 0x28) = uVar12;
  *(long *)(puVar7 + 0x30) = lVar5;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_10287b950;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x10287bc54;
  puStack_88 = &UNK_11055baa8;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar7 = puStack_78;
  func_0x000107c61434(uVar1);
  func_0x000107c61174(uVar14);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(lVar5);
  func_0x000107c61574(puVar7);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c5c734(puVar6);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c44570();
  func_0x000107c61180();
  if (lVar13 != 0) {
    puVar9 = PTR_PTR_1126ae720;
    func_0x000107c61168(PTR_PTR_1126ae720);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
    puVar7 = &UNK_11055bae0;
    func_0x000107c613fc(&UNK_11055bae0,0x30,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar11;
    *(undefined8 *)(puVar7 + 0x18) = uVar1;
    *(undefined **)(puVar7 + 0x20) = puVar6;
    *(long *)(puVar7 + 0x28) = lVar13;
    pcStack_80 = FUN_10287ba4c;
    puStack_a0 = puVar2;
    uStack_98 = 0x42000000;
    uStack_90 = 0x10287bc50;
    puStack_88 = &UNK_11055baf8;
    puStack_78 = puVar7;
    func_0x000107c60bc4(&puStack_a0);
    puVar7 = puStack_78;
    func_0x000107c61174(uVar11);
    func_0x000107c61174(uVar1);
    func_0x000107c61174(puVar6);
    func_0x000107c61174(lVar13);
    func_0x000107c61574(puVar7);
    func_0x000107c3e4fc(puVar9);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar10);
    uVar11 = 0;
    FUN_102d83308(0);
    func_0x000107c610f8();
    func_0x000102d83194(puVar6,puVar9,uVar11);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar13);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10287b7ac);
  (*pcVar3)();
}



/* Entry: 10287b7ac; end: 10287b94f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10287b7ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lStack_60;
  long lStack_58;
  
  plVar6 = &lStack_60;
  lVar3 = *(long *)(param_1 + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar7 = 0;
  }
  else {
    uVar4 = 0xd000000000000038;
    func_0x000107c5fadc(0xd000000000000038,0x800000010f0c3ae0);
    lVar7 = lVar3;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar4);
  }
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar5 = 0;
  func_0x00010287ada4();
  lVar3 = lVar5;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112ec55c8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(long *)(lVar3 + _DAT_112ec55d0) = lVar7;
  *(undefined8 *)(lVar3 + _DAT_112ec55d8) = param_4;
  *(long *)(lVar3 + _DAT_112ec55e0) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar5;
  func_0x000107c61434(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(lVar7);
  lVar3 = param_5;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_60,puVar2);
  if (param_5 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c3d740();
      func_0x000107c615e8(lVar3);
    }
  }
  func_0x000107c615e8(lVar7);
  func_0x000107c61170(param_4);
  return (undefined1 *)plVar6;
}



/* Entry: 10287b950; end: 10287b97b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10287b950(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar10 = *(long *)(unaff_x20 + 0x30);
  plVar9 = &lStack_60;
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    lVar11 = 0;
  }
  else {
    uVar6 = 0xd000000000000038;
    func_0x000107c5fadc(0xd000000000000038,0x800000010f0c3ae0);
    lVar11 = lVar5;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(uVar6);
  }
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar8 = 0;
  func_0x00010287ada4();
  lVar5 = lVar8;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112ec55c8);
  *puVar1 = uVar3;
  puVar1[1] = uVar2;
  *(long *)(lVar5 + _DAT_112ec55d0) = lVar11;
  *(undefined8 *)(lVar5 + _DAT_112ec55d8) = uVar7;
  *(long *)(lVar5 + _DAT_112ec55e0) = lVar10;
  puVar4 = PTR_s_init_1125d9248;
  lStack_60 = lVar5;
  lStack_58 = lVar8;
  func_0x000107c61434(uVar2);
  func_0x000107c61174(uVar7);
  func_0x000107c615f0(lVar11);
  lVar5 = lVar10;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_60,puVar4);
  if (lVar10 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      func_0x000107c3d740();
      func_0x000107c615e8(lVar5);
    }
  }
  func_0x000107c615e8(lVar11);
  func_0x000107c61170(uVar7);
  return (undefined1 *)plVar9;
}



/* Entry: 10287b97c; end: 10287ba4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10287b97c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c5b4dc();
  func_0x000107c61180();
  if (param_2 != 0) {
    lVar3 = 0;
    FUN_1028797f4();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(undefined8 *)(lVar4 + _DAT_112ec5580) = param_1;
    *(long *)(lVar4 + _DAT_112ec5588) = param_2;
    *(undefined8 *)(lVar4 + _DAT_112ec5590) = param_3;
    *(undefined8 *)(lVar4 + _DAT_112ec5598) = param_4;
    puVar1 = PTR_s_init_1125d9248;
    lStack_50 = lVar4;
    lStack_48 = lVar3;
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61154(&lStack_50,puVar1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10287ba4c);
  (*pcVar2)();
}



/* Entry: 10287ba4c; end: 10287ba57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10287ba4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c5b4dc();
  func_0x000107c61180();
  if (lVar6 != 0) {
    lVar7 = 0;
    FUN_1028797f4();
    lVar8 = lVar7;
    func_0x000107c610f8();
    *(undefined8 *)(lVar8 + _DAT_112ec5580) = uVar5;
    *(long *)(lVar8 + _DAT_112ec5588) = lVar6;
    *(undefined8 *)(lVar8 + _DAT_112ec5590) = uVar1;
    *(undefined8 *)(lVar8 + _DAT_112ec5598) = uVar2;
    puVar3 = PTR_s_init_1125d9248;
    lStack_50 = lVar8;
    lStack_48 = lVar7;
    func_0x000107c61174(uVar1);
    func_0x000107c61174(uVar2);
    func_0x000107c61154(&lStack_50,puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10287ba4c);
  (*pcVar4)();
}



/* Entry: 10287ba58; end: 10287bac3;  */

void FUN_10287ba58(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10287bac4; end: 10287bb2b;  */

void FUN_10287bac4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGroupChatNonFriendWarningServicesImplementation.SCGroupChatNonFriendWarningServiceProvider"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10287baf0);
  (*pcVar1)();
}



/* Entry: 10287bb2c; end: 10287bb97;  */

void FUN_10287bb2c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c6157c();
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10287bb98; end: 10287bc23;  */

void FUN_10287bb98(undefined8 param_1)

{
  if (lRam0000000112ec5638 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6f8a9c);
  return;
}



/* Entry: 10287bc24; end: 10287bc47;  */

void FUN_10287bc24(undefined8 *param_1,undefined8 param_2)

{
  FUN_10287b51c();
  *param_1 = param_2;
  return;
}



/* Entry: 10287bc48; end: 10287bc57;  */

void FUN_10287bc48(long param_1,long param_2)

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



/* Entry: 10287bc58; end: 10287bf8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10287bc58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  
  func_0x000107c610f8();
  lVar1 = _DAT_112ec5718;
  uStack_68 = *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
  func_0x0001000285a8(0x112ec5708,&UNK_10dae59e0);
  func_0x000107c613fc();
  puVar2 = &uStack_68;
  func_0x00010006c248();
  *(undefined8 **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112ec5720;
  uStack_68 = 0;
  func_0x0001000285a8(0x112ec5710,&UNK_10dae59e8);
  func_0x000107c613fc();
  puVar2 = &uStack_68;
  func_0x00010006c248();
  *(undefined8 **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112ec5728;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ec5730) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ec5738) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ec5740) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ec5748) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ec5750) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ec5758) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ec5760) = param_9;
  FUN_102881c68(param_10,unaff_x20 + _DAT_112ec5768,0x112d36580,&UNK_10d9016d0);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ec5770);
  *puVar2 = param_11;
  puVar2[1] = param_12;
  puVar4 = PTR_PTR_1126ab5f8;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112ec5778) = puVar4;
  func_0x0001000285a8(0x112d61fd0,&UNK_10d9295a0);
  uVar3 = param_7;
  func_0x0001000bda74(param_7);
  uVar5 = 0;
  FUN_10287bfb8(0);
  pcVar6 = FUN_10287bf8c;
  func_0x0001000cb480(FUN_10287bf8c,0,uVar5);
  func_0x000107c61574(uVar3);
  *(code **)(unaff_x20 + _DAT_112ec5780) = pcVar6;
  puVar7 = auStack_78;
  func_0x000107c61154(puVar7,PTR_s_init_1125d9248);
  func_0x000107c61180();
  FUN_10287bfcc(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(puVar7);
  FUN_102881d74(param_10,0x112d36580,&UNK_10d9016d0);
  return puVar7;
}



/* Entry: 10287bf8c; end: 10287bfb7;  */

void FUN_10287bf8c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    func_0x000107c4247c();
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 10287bfb8; end: 10287bfcb;  */

void FUN_10287bfb8(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11055bc68;
  if (lRam0000000112ec57f0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112ec57f0 = param_1;
  }
  return;
}



/* Entry: 10287bfcc; end: 10287c16b;  */

/* WARNING: Possible PIC construction at 0x00010287c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010287c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10287bfcc(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  
  func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
  func_0x000107c5e370();
  func_0x000107c61180();
  plVar1 = param_1;
  func_0x0001000b637c();
  func_0x000107c61170(param_1);
  puVar2 = &UNK_11055bbf0;
  func_0x000107c613fc(&UNK_11055bbf0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcVar3 = FUN_102881f50;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_102881f50);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112ec5728),pcVar4,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar3);
  return;
}



/* Entry: 10287c16c; end: 10287c367; -[_TtC33ConvoLiveActivityServicesProvider28ConvoLiveActivityManagerImpl initWithApplicationLifecycleEvents:backgroundTaskWrapper:bitmojiImageFetcher:bitmojiSelfieFetcher:conversationDataFetcher:groupsDataFetcher:messagingExperimentService:snapchattersDataFetcher:snapchattersUserInfoRepository:userDirectory:currentUserId:] */

undefined8
FUN_10287c16c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
             undefined8 param_13)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long extraout_x8;
  long lVar8;
  long alStack_b0 [4];
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_70 = param_11;
  uStack_80 = param_9;
  uStack_78 = param_10;
  lVar1 = 0x112d36580;
  uStack_68 = param_1;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  lVar8 = (long)&uStack_90 + lVar1;
  if (param_12 == 0) {
    lVar2 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(lVar8,param_12);
    lVar2 = 0;
    func_0x000107c5ede0();
  }
  uVar7 = (ulong)(param_12 == 0);
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar8,uVar7,1);
  func_0x000107c5faec();
  uStack_90 = uVar7;
  uStack_88 = param_13;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_70;
  func_0x000107c61174();
  *(ulong *)((long)alStack_b0 + lVar1 + 0x18) = uStack_90;
  uVar6 = uStack_88;
  *(long *)((long)alStack_b0 + lVar1 + 8) = lVar8;
  *(undefined8 *)((long)alStack_b0 + lVar1 + 0x10) = uVar6;
  *(undefined8 *)((long)alStack_b0 + lVar1) = uVar5;
  uVar6 = param_3;
  FUN_102881320(param_3,param_4,param_5,param_6,param_7,param_8,uVar3,uVar4);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  return uVar6;
}



/* Entry: 10287c368; end: 10287c42f;  */

void FUN_10287c368(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = &UNK_11055bbf0;
    func_0x000107c613fc(&UNK_11055bbf0,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_2);
    uVar2 = 6;
    func_0x0001001ca524(6,0,0x28,4,0,0,param_3,puVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_2);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 10287c430; end: 10287c48f; -[_TtC33ConvoLiveActivityServicesProvider28ConvoLiveActivityManagerImpl init] */

void FUN_10287c430(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ConvoLiveActivityServicesProvider.ConvoLiveActivityManagerImpl",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10287c45c);
  (*pcVar1)();
}



/* Entry: 10287c490; end: 10287c59b; -[_TtC33ConvoLiveActivityServicesProvider28ConvoLiveActivityManagerImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010287c560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287c580: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010287c564) */
/* WARNING: Removing unreachable block (ram,0x00010287c584) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10287c490(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec5730));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec5738));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec5740));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec5748));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec5750));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec5758));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec5760));
  FUN_102881d74(param_1 + _DAT_112ec5768,0x112d36580,&UNK_10d9016d0);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec5770 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec5778));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec5780));
  return;
}



/* Entry: 10287c59c; end: 10287cc2b;  */

/* WARNING: Removing unreachable block (ram,0x00010287ca84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10287c59c(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
                  ulong param_6,long param_7,ulong param_8,undefined8 param_9,ulong param_10)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 uVar15;
  long alStack_120 [2];
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  long lStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar3 = 0;
  lStack_d0 = param_1;
  uStack_c8 = param_2;
  uStack_c0 = param_6;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar14 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar13 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)puVar14 - extraout_x8_00;
  if (5 < param_8) {
    return;
  }
  if (param_8 == 3) {
    return;
  }
  if ((param_7 != 0) && (func_0x0001000d224c(&lStack_b0), lStack_b0 != 0)) {
    return;
  }
  if ((param_4 != 0) && (uVar4 = param_3, FUN_10287cc2c(param_3,param_4,param_5), (uVar4 & 1) == 0))
  {
    return;
  }
  uVar5 = 0;
  func_0x000107c5f02c();
  func_0x000107c613fc();
  func_0x000107c5f028();
  uVar4 = uVar5;
  func_0x000107c5f024();
  func_0x000107c61574(uVar5);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ec5778);
  if ((uVar4 & 1) == 0) {
    func_0x000105fc7354(uVar10,1);
    return;
  }
  uVar15 = 1;
  func_0x000105fc70f0(uVar10,1);
  lVar6 = param_7;
  if (param_7 == 0) {
    if (param_4 == 0) {
      return;
    }
    func_0x000107c61434(param_4);
    uVar15 = 0;
    lVar6 = param_4;
    uStack_c0 = param_3;
  }
  lStack_f0 = *(long *)(unaff_x20 + _DAT_112ec5770);
  lStack_f8 = ((long *)(unaff_x20 + _DAT_112ec5770))[1];
  uVar11 = 0x112ec5788;
  uStack_e0 = uVar10;
  func_0x0001000285a8(0x112ec5788,&UNK_10dae59f8);
  func_0x000107c61434(param_7);
  func_0x000107c61434(uStack_c8);
  lStack_d8 = lVar6;
  FUN_1028815ec(uStack_c0,lVar6,uVar15);
  uVar4 = param_10;
  func_0x000107c61434();
  uStack_e8 = uVar11;
  func_0x000107c5f008();
  if (uVar4 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    lVar6 = lStack_d0;
    uVar10 = uStack_c8;
  }
  else {
    uVar5 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar5 = uVar4;
    }
    func_0x000107c60480();
    lVar6 = lStack_d0;
    uVar10 = uStack_c8;
  }
  lStack_d0 = lVar6;
  uStack_c8 = uVar10;
  if (uVar5 == 0) {
    func_0x000107c6142c();
    uVar4 = uStack_c0;
    lVar1 = lStack_d8;
    uStack_108 = param_9;
    func_0x0001028815f4(uStack_c0,lStack_d8,uVar15);
    lStack_78 = lStack_f0;
    lStack_70 = lStack_f8;
    lVar6 = 0x112ec5790;
    func_0x0001000285a8(0x112ec5790,&UNK_10dae5a10);
    lStack_100 = *(long *)(lVar6 + -8);
    lStack_f8 = lVar6;
    lStack_f0 = lVar13;
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(lStack_100 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar12 = lVar13 - extraout_x8_01;
    lStack_b0 = lStack_d0;
    uStack_a8 = uStack_c8;
    uStack_a0 = uVar4;
    lStack_98 = lVar1;
    uStack_88 = uStack_108;
    uStack_80 = param_10;
    uStack_90 = uVar15;
    func_0x000107c5ee98(puVar14);
    func_0x000107c5ee7c(lVar13,0x403e000000000000,puVar14);
    (**(code **)(lVar9 + 8))(puVar14,lVar3);
    lVar6 = lVar13;
    (**(code **)(lVar9 + 0x38))(lVar13,0,1,lVar3);
    FUN_1028816b4();
    lVar3 = lVar6;
    func_0x0001028816f4();
    lVar9 = lVar3;
    func_0x000102881734();
    func_0x000107c5f044(lVar12,0,&lStack_b0,lVar13,&UNK_11055c248,lVar6,lVar3,lVar9);
    lVar13 = 0x112ec57b0;
    func_0x0001000285a8(0x112ec57b0,&UNK_10db75f50);
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar3 = lVar12 - extraout_x8_02;
    lVar13 = 0;
    func_0x000107c5f04c();
    (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lVar3,1,1,lVar13);
    func_0x000107c5f020(&lStack_78,lVar12,lVar3);
    func_0x000107c61574();
    FUN_102881d74(lVar3,0x112ec57b0,&UNK_10db75f50);
    (**(code **)(lStack_100 + 8))(lVar12,lStack_f8);
    lVar13 = lStack_f0;
    func_0x000105fc7168(uStack_e0,1);
    uVar10 = uStack_c8;
    lVar3 = lStack_d0;
    FUN_10287ce08(lStack_d0,uStack_c8);
    puVar7 = &UNK_11055bbf0;
    func_0x000107c613fc(&UNK_11055bbf0,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    puVar8 = &UNK_11055bc40;
    func_0x000107c613fc(&UNK_11055bc40,0x28,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(long *)(puVar8 + 0x18) = lVar3;
    *(undefined8 *)(puVar8 + 0x20) = uVar10;
    func_0x000107c61434(uVar10);
    *(undefined **)(lVar13 + -0x10) = PTR___sytN_11034f1b0 + 8;
    uVar10 = 6;
    func_0x0001001ca524(6,0,0x28,4,0,0,&UNK_10dae5a20,puVar8);
  }
  else {
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10287cc2c);
        (*pcVar2)();
      }
      uVar11 = *(undefined8 *)(uVar4 + 0x20);
      func_0x000107c6157c(uVar11);
    }
    else {
      uVar11 = 0;
      FUN_10288116c();
      uVar10 = uStack_c8;
      lVar6 = lStack_d0;
    }
    func_0x000107c6142c(uVar4);
    puVar7 = &UNK_11055bbf0;
    func_0x000107c613fc(&UNK_11055bbf0,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    puVar8 = &UNK_11055bc18;
    func_0x000107c613fc(&UNK_11055bc18,0x90,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(long *)(puVar8 + 0x18) = lVar6;
    *(undefined8 *)(puVar8 + 0x20) = uVar10;
    *(ulong *)(puVar8 + 0x28) = uStack_c0;
    *(long *)(puVar8 + 0x30) = lStack_d8;
    puVar8[0x38] = uVar15;
    *(undefined8 *)(puVar8 + 0x40) = param_9;
    *(ulong *)(puVar8 + 0x48) = param_10;
    *(undefined8 *)(puVar8 + 0x50) = uVar11;
    *(long *)(puVar8 + 0x58) = lVar6;
    *(undefined8 *)(puVar8 + 0x60) = uVar10;
    *(ulong *)(puVar8 + 0x68) = uStack_c0;
    *(long *)(puVar8 + 0x70) = lStack_d8;
    puVar8[0x78] = uVar15;
    *(undefined8 *)(puVar8 + 0x80) = param_9;
    *(ulong *)(puVar8 + 0x88) = param_10;
    func_0x000107c61434(uVar10);
    func_0x000107c61434(param_10);
    func_0x000107c6157c(uVar11);
    *(undefined **)(lVar13 + -0x10) = PTR___sytN_11034f1b0 + 8;
    uVar10 = 6;
    func_0x0001001ca524(6,0,0x28,4,0,0,&UNK_10dae5a08,puVar8);
    func_0x000107c61574(uVar11);
  }
  func_0x000107c61574(puVar8);
  func_0x000107c61574(uVar10);
  return;
}



/* Entry: 10287cc2c; end: 10287ce07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10287cc2c(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x000107c5fadc();
  func_0x000100bf0c60(param_3,lVar1);
  func_0x000107c61170(lVar1);
  if ((param_3 & 1) == 0) {
    func_0x0001000d224c(&lStack_48);
    uVar4 = 1;
    if (lStack_48 < 2) {
      if (lStack_48 == 0) goto LAB_10287cc78;
      if (lStack_48 == 1) {
        lVar1 = *(long *)(unaff_x20 + _DAT_112ec5760);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar1 != 0) {
          lVar3 = lVar1;
          func_0x000107c3e884();
          func_0x000107c61180();
          func_0x000107c615e8(lVar1);
          uVar4 = 0;
          if (lVar3 == 0) goto LAB_10287cc78;
          lVar2 = lVar3;
          func_0x000107c5fc54(lVar3,PTR___sSSN_11034da80);
          func_0x000107c61170(lVar3);
          if (*(long *)(lVar2 + 0x10) == 0) {
            uVar4 = 0;
            lVar1 = lVar2;
          }
          else {
            lVar3 = *(long *)(lVar2 + 0x20);
            lVar1 = *(long *)(lVar2 + 0x28);
            func_0x000107c61434(lVar1);
            func_0x000107c6142c(lVar2);
            if (lVar3 == param_1 && lVar1 == param_2) {
              uVar4 = 1;
            }
            else {
              func_0x000107c605b8(lVar3,lVar1,param_1,param_2,0);
              uVar4 = (uint)lVar3;
            }
          }
          goto LAB_10287cdf0;
        }
      }
    }
    else if (lStack_48 == 2) {
      lVar1 = *(long *)(unaff_x20 + _DAT_112ec5760);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar1 != 0) {
        lVar3 = lVar1;
        func_0x000107c3e884();
        func_0x000107c61180();
        func_0x000107c615e8(lVar1);
        uVar4 = 0;
        if (lVar3 == 0) goto LAB_10287cc78;
        lVar1 = lVar3;
        func_0x000107c5fc54(lVar3,PTR___sSSN_11034da80);
        func_0x000107c61170(lVar3);
        func_0x000100077018(param_1,param_2,lVar1);
        uVar4 = (uint)param_1;
LAB_10287cdf0:
        func_0x000107c6142c(lVar1);
        goto LAB_10287cc78;
      }
    }
    else if (lStack_48 == 3) goto LAB_10287cc78;
  }
  uVar4 = 0;
LAB_10287cc78:
  return uVar4 & 1;
}



/* Entry: 10287ce08; end: 10287d26f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10287ce08(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined1 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = 0;
  uStack_e8 = param_1;
  uStack_e0 = param_2;
  func_0x000107c5f83c();
  lStack_c0 = *(long *)(lVar2 + -8);
  lStack_b0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  puStack_c8 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar2 = 0;
  lStack_b8 = lVar10;
  func_0x000107c5f804();
  lStack_d8 = *(long *)(lVar2 + -8);
  lStack_d0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d8 + 0x40));
  lVar10 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f7fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar2 = _DAT_112ec5720;
  lVar14 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ec5720);
  func_0x000107c6157c(uVar11);
  func_0x0001000c74f0(&puStack_a0);
  func_0x000107c61574(uVar11);
  puVar5 = PTR___sytN_11034f1b0;
  if (puStack_a0 != (undefined *)0x0) {
    func_0x000107c61574();
    uVar11 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c6157c(uVar11);
    func_0x0001000c74f0(&puStack_a0);
    func_0x000107c61574(uVar11);
    if (puStack_a0 != (undefined *)0x0) {
      func_0x000107c5f848();
      func_0x000107c61574(puStack_a0);
    }
    uVar11 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c6157c(uVar11);
    func_0x000100075034(FUN_102882058,0,puVar5 + 8);
    func_0x000107c61574(uVar11);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_112ec5730);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lVar13 = *(long *)PTR__UIBackgroundTaskInvalid_110345af0;
  }
  else {
    uVar11 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010f0c3b80);
    lVar13 = lVar4;
    func_0x000107c3e764();
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar11);
  }
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ec5718);
  puStack_90 = (undefined *)lVar13;
  func_0x000107c6157c(uVar11);
  func_0x000100075034(FUN_102881e08,&puStack_a0,puVar5 + 8);
  func_0x000107c61574(uVar11);
  puVar5 = &UNK_11055bbf0;
  func_0x000107c613fc(&UNK_11055bbf0,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_11055be68;
  func_0x000107c613fc(&UNK_11055be68,0x28,7);
  uVar8 = uStack_e0;
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = uStack_e8;
  *(undefined8 *)(puVar6 + 0x20) = uStack_e0;
  pcStack_80 = FUN_102881e40;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_11055be80;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar11 = 0x112d4af88;
  FUN_102881974(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  func_0x000107c6157c(puVar5);
  func_0x000107c61434(uVar8);
  uVar8 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar9 = uVar8;
  func_0x0001001c7f30();
  func_0x000107c60264(lVar14,&puStack_a8,uVar8,uVar9,lVar3,uVar11);
  func_0x000107c5f850();
  func_0x000107c613fc();
  func_0x000107c5f844(lVar14,ppuVar7);
  puVar6 = puStack_78;
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  uVar11 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c6157c(uVar11);
  func_0x000100075034(FUN_102881e4c,lVar14,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar11);
  func_0x0001000295c4(0);
  lVar3 = lStack_d0;
  lVar2 = lStack_d8;
  (**(code **)(lStack_d8 + 0x68))
            (lVar10,*(undefined4 *)
                     PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,lStack_d0)
  ;
  lVar4 = lVar10;
  func_0x000107c5fff0(lVar10);
  (**(code **)(lVar2 + 8))(lVar10,lVar3);
  puVar1 = puStack_c8;
  func_0x000107c5f830(puStack_c8);
  lVar2 = lStack_b8;
  func_0x000107c5f85c(lStack_b8,0x403e000000000000,puVar1);
  lVar3 = lStack_b0;
  pcVar12 = *(code **)(lStack_c0 + 8);
  (*pcVar12)(puVar1,lStack_b0);
  func_0x000107c5ffcc(lVar2,lVar14);
  func_0x000107c61170(lVar4);
  func_0x000107c61574(lVar14);
  (*pcVar12)(lVar2,lVar3);
  return;
}



/* Entry: 10287d270; end: 10287d307;  */

void FUN_10287d270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0xf0) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_2;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0xf8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x100) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x108) = uVar2;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x110) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287d308,0,0);
  return;
}



/* Entry: 10287d308; end: 10287d503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10287d308(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar8 = *(long *)(unaff_x22 + 0xd0);
  func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x48,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x118) = lVar8;
  if (lVar8 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
    lVar2 = *(long *)(unaff_x22 + 0x100);
    puVar9 = *(undefined8 **)(unaff_x22 + 0xf0);
    func_0x000105fc7168(*(undefined8 *)(lVar8 + _DAT_112ec5778),1);
    lVar8 = 0x112ec5790;
    func_0x0001000285a8(0x112ec5790,&UNK_10dae5a10);
    *(long *)(unaff_x22 + 0x120) = lVar8;
    lVar8 = *(long *)(lVar8 + -8);
    *(long *)(unaff_x22 + 0x128) = lVar8;
    uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x130) = uVar4;
    uVar10 = *puVar9;
    *(undefined8 *)(unaff_x22 + 0x98) = puVar9[1];
    *(undefined8 *)(unaff_x22 + 0x90) = uVar10;
    uVar3 = *(undefined1 *)(puVar9 + 4);
    uVar10 = puVar9[2];
    *(undefined8 *)(unaff_x22 + 0x68) = puVar9[3];
    *(undefined8 *)(unaff_x22 + 0x60) = uVar10;
    *(undefined1 *)(unaff_x22 + 0x70) = uVar3;
    uVar10 = puVar9[5];
    *(undefined8 *)(unaff_x22 + 0xa8) = puVar9[6];
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar10;
    uVar11 = puVar9[1];
    uVar10 = *puVar9;
    uVar13 = puVar9[3];
    uVar12 = puVar9[2];
    uVar15 = puVar9[5];
    uVar14 = puVar9[4];
    *(undefined8 *)(unaff_x22 + 0x40) = puVar9[6];
    *(undefined8 *)(unaff_x22 + 0x28) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x18) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x10) = uVar10;
    func_0x000100402194(unaff_x22 + 0x90,unaff_x22 + 0xb0);
    FUN_102881f14(unaff_x22 + 0x60,unaff_x22 + 0x78);
    func_0x000100402194(unaff_x22 + 0xa0,unaff_x22 + 0xc0);
    func_0x000107c5ee98(uVar5);
    func_0x000107c5ee7c(uVar1,0x403e000000000000,uVar5);
    (**(code **)(lVar2 + 8))(uVar5,uVar6);
    uVar5 = uVar1;
    (**(code **)(lVar2 + 0x38))(uVar1,0,1,uVar6);
    FUN_1028816b4();
    uVar6 = uVar5;
    func_0x0001028816f4();
    uVar10 = uVar6;
    func_0x000102881734();
    func_0x000107c5f044(uVar4,0,unaff_x22 + 0x10,uVar1,&UNK_11055c248,uVar5,uVar6,uVar10);
    plVar7 = (long *)(ulong)*(uint *)(
                                     PTR___s11ActivityKit0A0C6updateyyAA0A7ContentVy0D5StateQzGYaFTjTu_11034b278
                                     + 4);
    UNRECOVERED_JUMPTABLE =
         (code *)(PTR___s11ActivityKit0A0C6updateyyAA0A7ContentVy0D5StateQzGYaFTjTu_11034b278 +
                 *(int *)PTR___s11ActivityKit0A0C6updateyyAA0A7ContentVy0D5StateQzGYaFTjTu_11034b278
                 );
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x138) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_10287d504;
                    /* WARNING: Could not recover jumptable at 0x00010287d4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar4);
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x110));
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010287d500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


