/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100ea434c; end: 100ea440f;  */

/* WARNING: Possible PIC construction at 0x000100ea43f4: Changing call to branch */

void FUN_100ea434c(long param_1,char param_2)

{
  code *pcVar1;
  
  if (param_2 == '\x01') {
    param_1 = -0x2fffffffffffffe2;
    func_0x000107c5fadc(0xd00000000000001e,0x800000010ef16cc0);
    func_0x000107c56bcc();
  }
  else {
    func_0x0001002ed07c(0);
    if (param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ea4410);
      (*pcVar1)();
    }
    func_0x000107c60110(param_1);
    func_0x000107c5fadc(0xd00000000000001e,0x800000010ef16cc0);
    func_0x000107c56bcc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ea4410; end: 100ea456b;  */

/* WARNING: Possible PIC construction at 0x000100ea4424: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ea4428) */

void FUN_100ea4410(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 100ea456c; end: 100ea486b;  */

void FUN_100ea456c(void)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_a8 [72];
  
  func_0x0001000285a8(0x112d46b30,&UNK_10d917640);
  lVar6 = 0x12;
  func_0x000107c602e8();
  lVar13 = 0;
  lVar1 = lVar6 + 0x38;
  do {
    uVar3 = *(ulong *)(lVar13 * 0x10 + 0x112d46b60);
    uVar4 = *(ulong *)(lVar13 * 0x10 + 0x112d46b68);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar6 + 0x28));
    func_0x000107c61434(uVar4);
    puVar7 = auStack_a8;
    func_0x000107c5fb58(puVar7,uVar3,uVar4);
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar12 = (ulong)puVar7 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar12 >> 6;
    uVar9 = *(ulong *)(lVar1 + uVar8 * 8);
    uVar10 = 1L << (uVar12 & 0x3f);
    if ((uVar10 & uVar9) != 0) {
      do {
        puVar2 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar12 * 0x10);
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        if ((uVar8 == uVar3 && uVar9 == uVar4) ||
           (func_0x000107c605b8(uVar8,uVar9,uVar3,uVar4,0), (uVar8 & 1) != 0)) {
          func_0x000107c6142c(uVar4);
          goto LAB_100ea45d4;
        }
        uVar12 = uVar12 + 1 & ~uVar11;
        uVar8 = uVar12 >> 6;
        uVar9 = *(ulong *)(lVar1 + uVar8 * 8);
        uVar10 = 1L << (uVar12 & 0x3f);
      } while ((uVar10 & uVar9) != 0);
    }
    *(ulong *)(lVar1 + uVar8 * 8) = uVar10 | uVar9;
    puVar2 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar12 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100ea46ec);
      (*pcVar5)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
LAB_100ea45d4:
    lVar13 = lVar13 + 1;
    if (lVar13 == 0x12) {
      func_0x000107c61408(0x112d46b60,0x12,PTR___sSSN_11034da80);
      lRam0000000112d46a70 = lVar6;
      return;
    }
  } while( true );
}



/* Entry: 100ea486c; end: 100ea489f; -[_TtC52NGOPreferredVerificationMethodServicesImplementation48NGOPreferredVerificationMethodProviderClientImpl preferredVerificationMethod] */

undefined8 FUN_100ea486c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100ea48a0();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100ea48a0; end: 100ea49c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100ea48a0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112d46a30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c4a75c();
    func_0x000107c61180();
    func_0x000107c615e8(uVar1);
    if (uVar2 != 0) {
      uVar1 = uVar2;
      func_0x000107c5faec();
      func_0x000107c61170(uVar2);
      if (lRam0000000112d46a68 != -1) {
        func_0x000107c61568(0x112d46a68,FUN_100ea456c);
      }
      uVar2 = uVar1;
      func_0x0001000f66f0(uVar1,param_2,uRam0000000112d46a70);
      if ((uVar2 & 1) != 0) {
        func_0x000107c6142c(param_2);
        return 3;
      }
      if (lRam0000000112d46a78 != -1) {
        func_0x000107c61568(0x112d46a78,0x100ea46ec);
      }
      func_0x0001000f66f0(uVar1,param_2,uRam0000000112d46a80);
      func_0x000107c6142c(param_2);
      if ((uVar1 & 1) != 0) {
        return 0;
      }
    }
  }
  return *(undefined8 *)(unaff_x20 + _DAT_112d46a38);
}



/* Entry: 100ea49c4; end: 100ea4a23; -[_TtC52NGOPreferredVerificationMethodServicesImplementation48NGOPreferredVerificationMethodProviderClientImpl init] */

void FUN_100ea49c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NGOPreferredVerificationMethodServicesImplementation.NGOPreferredVerificationMethodProviderClientImpl"
                      ,0x65,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ea49f0);
  (*pcVar1)();
}



/* Entry: 100ea4a24; end: 100ea4a33; -[_TtC52NGOPreferredVerificationMethodServicesImplementation48NGOPreferredVerificationMethodProviderClientImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea4a24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d46a30));
  return;
}



/* Entry: 100ea4a34; end: 100ea4a53;  */

void FUN_100ea4a34(void)

{
  func_0x000107c61168(&PTR_PTR_11279cf00);
  return;
}



/* Entry: 100ea4a54; end: 100ea4ac7; -[_TtC52NGOPreferredVerificationMethodServicesImplementation42NGOPreferredVerificationMethodProviderImpl preferredVerificationMethod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100ea4a54(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = _DAT_112d46c98;
  uVar4 = *(ulong *)(param_1 + _DAT_112d46c98);
  lVar2 = param_1;
  func_0x000107c61174();
  func_0x00010537bd78();
  if ((uVar4 & 1) == 0) {
    lVar3 = *(long *)(param_1 + lVar1);
    func_0x000106bfda74();
    uVar4 = 1;
    if (lVar3 != 1) {
      uVar4 = *(ulong *)(param_1 + lVar1);
      func_0x00010537bc9c(uVar4);
      goto LAB_100ea4aa8;
    }
  }
  FUN_100ea4ac8();
LAB_100ea4aa8:
  func_0x000107c61170(lVar2);
  return uVar4;
}



/* Entry: 100ea4ac8; end: 100ea4cbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100ea4ac8(void)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  
  lVar4 = unaff_x20 + _DAT_112d46c80;
  uVar5 = *(undefined8 *)(lVar4 + 0x18);
  lVar6 = *(long *)(lVar4 + 0x28);
  FUN_100ea4dfc(lVar4,uVar5);
  (**(code **)(lVar6 + 8))(uVar5);
  if (((uint)lVar6 & 0xff) == 1) {
    lVar4 = unaff_x20 + _DAT_112d46c88;
    uVar5 = *(undefined8 *)(lVar4 + 0x18);
    lVar6 = *(long *)(lVar4 + 0x20);
    FUN_100ea4dfc(lVar4,uVar5);
    (**(code **)(lVar6 + 8))(uVar5);
    plVar2 = (long *)(unaff_x20 + _DAT_112d46ca0);
    FUN_100ea4dfc(plVar2,plVar2[3]);
    lVar4 = *plVar2;
    lVar1 = plVar2[1];
    puVar3 = PTR_PTR_1126a5e98;
    func_0x000107c610f8(PTR_PTR_1126a5e98);
    func_0x000107c453e4();
    func_0x000107c49d90(lVar1);
    func_0x000107c55654(puVar3);
    if (((uint)lVar6 & 0xff) == 1) {
      func_0x000107c59558(puVar3);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c61170(puVar3);
      }
      else {
        func_0x000107c4be1c();
        func_0x000107c61170(puVar3);
        func_0x000107c615e8(lVar4);
      }
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d46c90);
                    /* WARNING: Could not recover jumptable at 0x00010c106f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar5,PTR_s_preferredVerificationMethod_11261f600);
      return uVar5;
    }
    func_0x000107c59558(puVar3);
    func_0x000107c5c734();
    func_0x000107c61180();
  }
  else {
    plVar2 = (long *)(unaff_x20 + _DAT_112d46ca0);
    FUN_100ea4dfc(plVar2,plVar2[3]);
    lVar4 = *plVar2;
    lVar6 = plVar2[1];
    puVar3 = PTR_PTR_1126a5e98;
    func_0x000107c610f8(PTR_PTR_1126a5e98);
    func_0x000107c453e4();
    func_0x000107c49d90(lVar6);
    func_0x000107c55654(puVar3);
    func_0x000107c59558(puVar3);
    func_0x000107c5c734();
    func_0x000107c61180();
  }
  if (lVar4 == 0) {
    func_0x000107c61170(puVar3);
  }
  else {
    func_0x000107c4be1c();
    func_0x000107c61170(puVar3);
    func_0x000107c615e8(lVar4);
  }
  return uVar5;
}



/* Entry: 100ea4cc0; end: 100ea4d1f; -[_TtC52NGOPreferredVerificationMethodServicesImplementation42NGOPreferredVerificationMethodProviderImpl init] */

void FUN_100ea4cc0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NGOPreferredVerificationMethodServicesImplementation.NGOPreferredVerificationMethodProviderImpl"
                      ,0x5f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ea4cec);
  (*pcVar1)();
}



/* Entry: 100ea4d20; end: 100ea4d8b; -[_TtC52NGOPreferredVerificationMethodServicesImplementation42NGOPreferredVerificationMethodProviderImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea4d20(long param_1)

{
  func_0x000100ea4e20(param_1 + _DAT_112d46c80);
  func_0x000100ea4e20(param_1 + _DAT_112d46c88);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d46c90));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d46c98));
  func_0x000100ea4e20(param_1 + _DAT_112d46ca0);
  return;
}



/* Entry: 100ea4d8c; end: 100ea4dab;  */

void FUN_100ea4d8c(void)

{
  func_0x000107c61168(&PTR_PTR_11279cfc8);
  return;
}



/* Entry: 100ea4dac; end: 100ea4dfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea4dac(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar1 = *unaff_x20 + _DAT_112d46c80;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  FUN_100ea4dfc(lVar1,uVar2);
  (**(code **)(lVar3 + 8))(uVar2,lVar3);
  return;
}



/* Entry: 100ea4dfc; end: 100ea4e3f;  */

long * FUN_100ea4dfc(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 100ea4e40; end: 100ea4f1f;  */

void FUN_100ea4e40(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,0x800000010ef16cc0);
    lVar3 = lVar1;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (lVar3 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c61168(PTR__OBJC_CLASS___NSNumber_1126ae570);
      lVar5 = lVar3;
      func_0x000107c6148c(lVar3,puVar4);
      if (lVar5 == 0) {
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(lVar3);
      }
      else {
        func_0x000107c5d388();
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(lVar1);
        FUN_100ea4f84(lVar5);
      }
    }
  }
  return;
}



/* Entry: 100ea4f20; end: 100ea4f63;  */

void FUN_100ea4f20(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100ea4f64; end: 100ea4f83;  */

void FUN_100ea4f64(void)

{
  FUN_100ea4e40();
  return;
}



/* Entry: 100ea4f84; end: 100ea4f93;  */

undefined1  [16] FUN_100ea4f84(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 7) {
    uVar1 = param_1;
  }
  auVar2[8] = 6 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 100ea4f94; end: 100ea52f7;  */

void FUN_100ea4f94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar8 = &puStack_a0;
  puVar2 = PTR_PTR_1126a5ea0;
  func_0x000107c610f8(PTR_PTR_1126a5ea0);
  func_0x000107c453e4();
  puVar3 = *(undefined **)(unaff_x20 + 0x40);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    puVar10 = puVar3;
    func_0x000107c4a75c();
    func_0x000107c61180();
    func_0x000107c615e8(puVar3);
    if (puVar10 != (undefined *)0x0) goto LAB_100ea5008;
  }
  puVar10 = (undefined *)0x0;
LAB_100ea5008:
  func_0x000107c57668(puVar2);
  func_0x000107c61170();
  func_0x000107c2bc20();
  puVar3 = PTR___ss5Int64VN_11034ee50;
  puVar9 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  puStack_a0 = puVar10;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  puVar10 = puVar9;
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar9);
  func_0x000107c5732c(puVar2);
  func_0x000107c61170(puVar3);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lVar4 = 0;
    puVar10 = (undefined *)0xe000000000000000;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c43f7c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    lVar4 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
  }
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  puVar3 = puVar10;
  func_0x000107c5fadc(lVar4,puVar10);
  func_0x000107c6142c(puVar10);
  (**(code **)(unaff_x20 + 0x48))();
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar3);
  uVar6 = 0x1d;
  func_0x0001054087c4(0x1d,uVar7,uVar1,uVar12,uVar11,lVar4,puVar10,*(undefined8 *)(unaff_x20 + 0x70)
                     );
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar10);
  func_0x000107c527a8(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c6071c();
  lVar4 = *(long *)(unaff_x20 + 0x68);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar7 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,0x800000010ef16db0);
    func_0x000107c4bbd0(lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar7);
  }
  func_0x000105407d00(uVar11,0);
  func_0x000107c61180();
  lVar4 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c615e8(uVar11);
    func_0x000107c61170(puVar2);
  }
  else {
    puVar3 = &UNK_110360b58;
    func_0x000107c613fc(&UNK_110360b58,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    puVar10 = &UNK_110360b80;
    func_0x000107c613fc(&UNK_110360b80,0x20,7);
    *(undefined **)(puVar10 + 0x10) = puVar3;
    *(undefined8 *)(puVar10 + 0x18) = param_1;
    pcStack_80 = FUN_100ea5788;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100ea55f4;
    puStack_88 = &UNK_110360b98;
    puStack_78 = puVar10;
    func_0x000107c60bc4(&puStack_a0);
    puVar3 = puStack_78;
    func_0x000107c61174(puVar2);
    func_0x000107c615f0(uVar11);
    func_0x000107c61574(puVar3);
    func_0x000107c441f4(lVar4);
    func_0x000107c615e8(uVar11);
    func_0x000107c61170(puVar2);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c615e8(uVar11);
  }
  return;
}



/* Entry: 100ea52f8; end: 100ea5593;  */

void FUN_100ea52f8(double param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 auStack_a0 [2];
  long lStack_90;
  undefined1 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  uVar4 = 0;
  dVar7 = param_1;
  func_0x000107c61428(param_4 + 0x10,auStack_78,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 != 0) {
    if (param_2 != 0) {
      func_0x000107c5bd10(param_2);
    }
    if (param_3 != 0) {
      lStack_90 = param_3;
      func_0x000107c614b0(param_3);
      uVar6 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      uVar3 = 0;
      func_0x000100ea57c8(0);
      func_0x000107c6147c(auStack_a0,&lStack_90,uVar6,uVar3,6);
      if ((uVar4 & 1) != 0) {
        func_0x000107c3fcb0(auStack_a0[0]);
        func_0x000107c61170(auStack_a0[0]);
      }
    }
    func_0x000107c6071c();
    dVar7 = (dVar7 - param_1) * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ea558c);
      (*pcVar1)();
    }
    if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ea5590);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ea5594);
      (*pcVar1)();
    }
    lVar5 = *(long *)(param_4 + 0x68);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      uVar6 = 0xd00000000000001e;
      func_0x000107c5fadc(0xd00000000000001e,0x800000010ef16db0);
      func_0x000107c4bbd4(lVar5);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(uVar6);
    }
    if ((param_2 == 0) || (param_3 != 0)) {
      func_0x000107c61574(param_4);
    }
    else {
      func_0x000107c61174();
      lVar5 = param_2;
      func_0x000107c5bd10();
      iVar2 = (int)lVar5;
      if (((0 < iVar2) && (iVar2 != 10)) && (iVar2 == 1)) {
        uVar6 = *(undefined8 *)(param_4 + 0x10);
        lStack_80 = param_2;
        func_0x000107c6157c(uVar6);
        func_0x000100075034(0x100ea57b0,&lStack_90,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(uVar6);
        lVar5 = *(long *)(param_4 + 0x60);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar5 != 0) {
          uVar6 = *(undefined8 *)(param_4 + 0x10);
          func_0x000107c6157c(uVar6);
          func_0x0001000c74f0(&lStack_90);
          func_0x000107c61574(uVar6);
          FUN_100ea434c(lStack_90,uStack_88);
          func_0x000107c61170(lVar5);
        }
      }
      func_0x000107c61574(param_4);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 100ea5594; end: 100ea55f3;  */

void FUN_100ea5594(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c5dcec();
  func_0x000107c61180();
  if (param_2 != 0) {
    lVar2 = param_2;
    func_0x000107c5dad8();
    func_0x000107c61170(param_2);
    *param_1 = lVar2;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ea55f4);
  (*pcVar1)();
}



/* Entry: 100ea55f4; end: 100ea566b;  */

/* WARNING: Possible PIC construction at 0x000100ea5650: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ea5654) */

void FUN_100ea55f4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 100ea566c; end: 100ea571f;  */

void FUN_100ea566c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 100ea5720; end: 100ea5787;  */

undefined1  [16] FUN_100ea5720(void)

{
  long *unaff_x20;
  undefined8 uVar1;
  undefined1 auVar2 [16];
  unkuint9 Stack_30;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c6157c(uVar1);
  func_0x0001000c74f0(&Stack_30);
  func_0x000107c61574(uVar1);
  auVar2._9_7_ = 0;
  auVar2._0_9_ = Stack_30;
  return auVar2;
}



/* Entry: 100ea5788; end: 100ea57af;  */

void FUN_100ea5788(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  double dVar8;
  double dVar9;
  undefined8 auStack_a0 [2];
  long lStack_90;
  undefined1 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  dVar8 = *(double *)(unaff_x20 + 0x18);
  uVar4 = 0;
  dVar9 = dVar8;
  func_0x000107c61428(lVar7 + 0x10,auStack_78,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61648();
  if (lVar7 != 0) {
    if (param_1 != 0) {
      func_0x000107c5bd10(param_1);
    }
    if (param_2 != 0) {
      lStack_90 = param_2;
      func_0x000107c614b0(param_2);
      uVar6 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      uVar3 = 0;
      func_0x000100ea57c8(0);
      func_0x000107c6147c(auStack_a0,&lStack_90,uVar6,uVar3,6);
      if ((uVar4 & 1) != 0) {
        func_0x000107c3fcb0(auStack_a0[0]);
        func_0x000107c61170(auStack_a0[0]);
      }
    }
    func_0x000107c6071c();
    dVar9 = (dVar9 - dVar8) * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar9)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ea558c);
      (*pcVar1)();
    }
    if (dVar9 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ea5590);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ea5594);
      (*pcVar1)();
    }
    lVar5 = *(long *)(lVar7 + 0x68);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      uVar6 = 0xd00000000000001e;
      func_0x000107c5fadc(0xd00000000000001e,0x800000010ef16db0);
      func_0x000107c4bbd4(lVar5);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(uVar6);
    }
    if ((param_1 == 0) || (param_2 != 0)) {
      func_0x000107c61574(lVar7);
    }
    else {
      func_0x000107c61174();
      lVar5 = param_1;
      func_0x000107c5bd10();
      iVar2 = (int)lVar5;
      if (((0 < iVar2) && (iVar2 != 10)) && (iVar2 == 1)) {
        uVar6 = *(undefined8 *)(lVar7 + 0x10);
        lStack_80 = param_1;
        func_0x000107c6157c(uVar6);
        func_0x000100075034(0x100ea57b0,&lStack_90,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(uVar6);
        lVar5 = *(long *)(lVar7 + 0x60);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar5 != 0) {
          uVar6 = *(undefined8 *)(lVar7 + 0x10);
          func_0x000107c6157c(uVar6);
          func_0x0001000c74f0(&lStack_90);
          func_0x000107c61574(uVar6);
          FUN_100ea434c(lStack_90,uStack_88);
          func_0x000107c61170(lVar5);
        }
      }
      func_0x000107c61574(lVar7);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 100ea57b0; end: 100ea580b;  */

void FUN_100ea57b0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100ea5594(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100ea580c; end: 100ea58af;  */

void FUN_100ea580c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_10;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_12;
  *(undefined8 *)(unaff_x20 + 0x58) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_13;
  *(undefined8 *)(unaff_x20 + 0x70) = param_14;
  return;
}



/* Entry: 100ea58b0; end: 100ea5913;  */

long FUN_100ea58b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    FUN_100ea591c();
    func_0x000107c61574(param_1);
  }
  return lVar1;
}



/* Entry: 100ea5914; end: 100ea591b;  */

long FUN_100ea5914(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_100ea591c();
    func_0x000107c61574(lVar1);
  }
  return lVar2;
}



/* Entry: 100ea591c; end: 100ea5d73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100ea591c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 auStack_170 [5];
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  long alStack_d0 [3];
  long lStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined1 uStack_a0;
  long lStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_70;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c5dc44(uVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126aee18;
  func_0x000107c610f8(PTR_PTR_1126aee18);
  func_0x000107c45e54();
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000105407ab4(uVar2,puVar3);
  func_0x000107c61180();
  uStack_140 = uVar2;
  func_0x000107c61170(puVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c44fe4();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_148 = uVar2;
  func_0x000107c3e474();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  auStack_170[4] = uVar4;
  func_0x000107c4fd04();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x48) + _DAT_113083770);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x10);
  auStack_170[3] = uVar2;
  func_0x000107c61174();
  uVar2 = uVar13;
  auStack_170[2] = uVar4;
  func_0x000107c4d1c4();
  func_0x000107c61180();
  lVar5 = *(long *)(unaff_x20 + 0x18);
  auStack_170[1] = uVar2;
  lStack_138 = lVar5;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ea5d70);
    (*pcVar1)();
  }
  uVar15 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar2 = uVar15;
  func_0x000107c4ec80();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  func_0x000107c44ff4();
  func_0x000107c61180();
  uVar14 = *(undefined8 *)(*(long *)(unaff_x20 + 0x70) + _DAT_11305c1e8);
  lVar6 = 0;
  func_0x000100ea5700();
  lVar7 = lVar6;
  func_0x000107c613fc();
  lStack_a8 = 0;
  uStack_a0 = 1;
  func_0x0001000285a8(0x112d46fa0,&UNK_10d90e300);
  func_0x000107c613fc();
  func_0x000107c61174();
  plVar8 = &lStack_a8;
  func_0x00010006c248();
  *(long **)(lVar7 + 0x10) = plVar8;
  *(undefined8 *)(lVar7 + 0x18) = uStack_140;
  *(undefined8 *)(lVar7 + 0x20) = uStack_148;
  *(undefined8 *)(lVar7 + 0x28) = auStack_170[4];
  *(undefined8 *)(lVar7 + 0x30) = auStack_170[3];
  *(undefined8 *)(lVar7 + 0x38) = auStack_170[2];
  *(undefined8 *)(lVar7 + 0x60) = uVar2;
  *(undefined8 *)(lVar7 + 0x68) = uVar4;
  *(undefined8 *)(lVar7 + 0x70) = uVar14;
  *(undefined8 *)(lVar7 + 0x40) = auStack_170[1];
  *(code **)(lVar7 + 0x48) = FUN_100ea5dc8;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(long *)(lVar7 + 0x58) = lVar5;
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar9 = 0;
  func_0x000100ea4f44();
  lVar5 = lVar9;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar15;
  func_0x000107c4d1c4();
  func_0x000107c61180();
  lVar10 = 0;
  FUN_100ea4a34();
  lVar11 = lVar10;
  func_0x000107c610f8();
  *(undefined8 *)(lVar11 + _DAT_112d46a38) = 2;
  *(undefined8 *)(lVar11 + _DAT_112d46a30) = uVar13;
  plVar8 = &lStack_78;
  lStack_78 = lVar11;
  lStack_70 = lVar10;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  func_0x000107c4fd0c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x68);
  func_0x000107c61174();
  lVar11 = lStack_138;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar11 != 0) {
    ppuStack_88 = &PTR_DAT_110360b28;
    ppuStack_80 = &PTR_DAT_110360b38;
    ppuStack_b0 = &PTR_DAT_110360b10;
    puStack_e0 = &UNK_110360ad0;
    ppuStack_d8 = &PTR_DAT_110360ae8;
    lVar10 = 0;
    uStack_f8 = uVar2;
    uStack_f0 = uVar4;
    alStack_d0[0] = lVar5;
    lStack_b8 = lVar9;
    lStack_a8 = lVar7;
    lStack_90 = lVar6;
    FUN_100ea4d8c();
    lVar7 = lVar10;
    func_0x000107c610f8();
    func_0x0001000c6518(&uStack_f8,&UNK_110360ad0);
    (*(code *)PTR____chkstk_darwin_11034bd40)(0x10);
    lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    puVar12 = (undefined8 *)((long)auStack_170 + lVar5);
    (**(code **)(extraout_x12 + 0x10))(puVar12);
    puStack_108 = &UNK_110360ad0;
    ppuStack_100 = &PTR_DAT_110360ae8;
    uStack_118 = *(undefined8 *)((long)auStack_170 + lVar5 + 8);
    uStack_120 = *puVar12;
    *(long *)(lVar7 + _DAT_112d46c98) = lVar11;
    FUN_100ea60e4(&lStack_a8,lVar7 + _DAT_112d46c80);
    func_0x000100ea6128(alStack_d0,lVar7 + _DAT_112d46c88);
    *(long **)(lVar7 + _DAT_112d46c90) = plVar8;
    func_0x000100ea6128(&uStack_120,lVar7 + _DAT_112d46ca0);
    plVar8 = &lStack_130;
    lStack_130 = lVar7;
    lStack_128 = lVar10;
    func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
    FUN_100ea616c(alStack_d0);
    FUN_100ea616c(&lStack_a8);
    FUN_100ea616c(&uStack_120);
    FUN_100ea616c(&uStack_f8);
    return plVar8;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ea5d74);
  (*pcVar1)();
}



/* Entry: 100ea5d74; end: 100ea5dab;  */

void FUN_100ea5d74(long param_1)

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



/* Entry: 100ea5dac; end: 100ea5dc7;  */

void FUN_100ea5dac(long param_1,long param_2)

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



/* Entry: 100ea5dc8; end: 100ea5e57;  */

undefined1  [16] FUN_100ea5dc8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar3 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c5eec4(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5eeac();
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = lVar2;
  return auVar4;
}



/* Entry: 100ea5e58; end: 100ea5ffb;  */

/* WARNING: Possible PIC construction at 0x000100ea5e64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ea5e74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ea5e84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ea5e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ea5ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ea5eb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ea5ea8) */
/* WARNING: Removing unreachable block (ram,0x000100ea5e98) */
/* WARNING: Removing unreachable block (ram,0x000100ea5e88) */
/* WARNING: Removing unreachable block (ram,0x000100ea5e78) */
/* WARNING: Removing unreachable block (ram,0x000100ea5e68) */
/* WARNING: Removing unreachable block (ram,0x000100ea5eb8) */

void FUN_100ea5e58(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100ea5ffc; end: 100ea60e3;  */

void FUN_100ea5ffc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_110360be0;
  func_0x000107c613fc(&UNK_110360be0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uStack_40 = 0x100ea6194;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_100ea5d74;
  puStack_48 = &UNK_110360bf8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  FUN_100ec9b94(0);
  func_0x000107c610f8();
  func_0x000100ec9ad8();
  *param_1 = puVar1;
  return;
}



/* Entry: 100ea60e4; end: 100ea616b;  */

long FUN_100ea60e4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_2 + 0x20) = uVar2;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100ea616c; end: 100ea6197;  */

void FUN_100ea616c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100ea6180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 100ea6198; end: 100ea61a3; -[SCNGOPreferredVerificationMethodFetchingEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea6198(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d46fa8;
  func_0x000107c61428(param_1 + _DAT_112d46fa8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ea61a4; end: 100ea61af; -[SCNGOPreferredVerificationMethodFetchingEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea61a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d46fa8;
  func_0x000107c61428(param_1 + _DAT_112d46fa8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ea61b0; end: 100ea61bb; -[SCNGOPreferredVerificationMethodFetchingEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea61b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d46fb0;
  func_0x000107c61428(param_1 + _DAT_112d46fb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ea61bc; end: 100ea61c7; -[SCNGOPreferredVerificationMethodFetchingEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea61bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d46fb0;
  func_0x000107c61428(param_1 + _DAT_112d46fb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ea61c8; end: 100ea61d3; -[SCNGOPreferredVerificationMethodFetchingEntryPoint ngoPreferredVerificationMethodServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea61c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d46fb8;
  func_0x000107c61428(param_1 + _DAT_112d46fb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ea61d4; end: 100ea61df; -[SCNGOPreferredVerificationMethodFetchingEntryPoint setNgoPreferredVerificationMethodServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea61d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d46fb8;
  func_0x000107c61428(param_1 + _DAT_112d46fb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ea61e0; end: 100ea61eb; -[SCNGOPreferredVerificationMethodFetchingEntryPoint taskManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea61e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d46fc0;
  func_0x000107c61428(param_1 + _DAT_112d46fc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ea61ec; end: 100ea622f;  */

void FUN_100ea61ec(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ea6230; end: 100ea623b; -[SCNGOPreferredVerificationMethodFetchingEntryPoint setTaskManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea6230(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d46fc0;
  func_0x000107c61428(param_1 + _DAT_112d46fc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ea623c; end: 100ea628f;  */

void FUN_100ea623c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ea6290; end: 100ea63fb;  */

/* WARNING: Possible PIC construction at 0x000100ea635c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ea636c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ea63d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ea63c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ea63d8) */
/* WARNING: Removing unreachable block (ram,0x000100ea6370) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000100ea6360) */
/* WARNING: Removing unreachable block (ram,0x000100ea63c8) */

void FUN_100ea6290(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar1 = unaff_x20;
  func_0x000107c3fa0c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4d6a4();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c5c78c();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        lVar3 = 0;
        FUN_100ea432c();
        func_0x000107c613fc();
        *(long *)(lVar3 + 0x10) = lVar1;
        *(long *)(lVar3 + 0x18) = lVar2;
        *(long *)(lVar3 + 0x20) = unaff_x20;
        func_0x000107c61174(lVar1);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(unaff_x20);
        FUN_100ea3f68();
        lVar3 = unaff_x20;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100ea63fc; end: 100ea6423; -[SCNGOPreferredVerificationMethodFetchingEntryPoint begin] */

void FUN_100ea63fc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ea6290();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ea6424; end: 100ea6467; -[SCNGOPreferredVerificationMethodFetchingEntryPoint end] */

void FUN_100ea6424(undefined8 param_1)

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



/* Entry: 100ea6468; end: 100ea66d7;  */

void FUN_100ea6468(long param_1,long param_2,long param_3)

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
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10ed550)) ||
       (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53414();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffda) && (param_3 == -0x7ffffffef10e91c0)) ||
         (func_0x000107c605b8(0xd000000000000026,0x800000010ef16e40,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56aa4();
      }
      else {
        if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10edd20)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000016,0x800000010ef122e0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "NGOPreferredVerificationMethodServicesImplementation/SCNGOPreferredVerificationMethodFetchingEntryPoint.swift"
                                ,0x6d,2,0x31,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100ea66d8);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c59c2c();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ea66d8; end: 100ea6783; -[SCNGOPreferredVerificationMethodFetchingEntryPoint setValue:forIvarName:] */

void FUN_100ea66d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ea6468(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100ea6784; end: 100ea681f; -[SCNGOPreferredVerificationMethodFetchingEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea6784(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d46fa8,0);
  func_0x000107c61614(param_1 + _DAT_112d46fb0,0);
  func_0x000107c61614(param_1 + _DAT_112d46fb8,0);
  func_0x000107c61614(param_1 + _DAT_112d46fc0,0);
  *(undefined8 *)(param_1 + _DAT_112d46fc8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ea6820; end: 100ea6853;  */

void FUN_100ea6820(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100ea6854; end: 100ea68bb; -[SCNGOPreferredVerificationMethodFetchingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea6854(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d46fa8);
  func_0x000107c61610(param_1 + _DAT_112d46fb0);
  func_0x000107c61610(param_1 + _DAT_112d46fb8);
  func_0x000107c61610(param_1 + _DAT_112d46fc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d46fc8));
  return;
}



/* Entry: 100ea68bc; end: 100ea68db;  */

void FUN_100ea68bc(void)

{
  func_0x000107c61168(&PTR_PTR_11279d0a8);
  return;
}



/* Entry: 100ea68dc; end: 100ea68e7; -[SCNGOPreferredVerificationMethodServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea68dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d46ff8;
  func_0x000107c61428(param_1 + _DAT_112d46ff8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ea68e8; end: 100ea68f3; -[SCNGOPreferredVerificationMethodServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea68e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d46ff8;
  func_0x000107c61428(param_1 + _DAT_112d46ff8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ea68f4; end: 100ea68ff; -[SCNGOPreferredVerificationMethodServiceProvider circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea68f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d47000;
  func_0x000107c61428(param_1 + _DAT_112d47000,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ea6900; end: 100ea690b; -[SCNGOPreferredVerificationMethodServiceProvider setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea6900(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d47000;
  func_0x000107c61428(param_1 + _DAT_112d47000,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ea690c; end: 100ea6917; -[SCNGOPreferredVerificationMethodServiceProvider countryProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea690c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d47008;
  func_0x000107c61428(param_1 + _DAT_112d47008,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ea6918; end: 100ea6923; -[SCNGOPreferredVerificationMethodServiceProvider setCountryProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea6918(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d47008;
  func_0x000107c61428(param_1 + _DAT_112d47008,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ea6924; end: 100ea692f; -[SCNGOPreferredVerificationMethodServiceProvider clientFeatureGatingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea6924(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d47010;
  func_0x000107c61428(param_1 + _DAT_112d47010,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ea6930; end: 100ea693b; -[SCNGOPreferredVerificationMethodServiceProvider setClientFeatureGatingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea6930(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d47010;
  func_0x000107c61428(param_1 + _DAT_112d47010,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ea693c; end: 100ea6947; -[SCNGOPreferredVerificationMethodServiceProvider unifiedGrpcServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea693c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d47018;
  func_0x000107c61428(param_1 + _DAT_112d47018,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ea6948; end: 100ea6953; -[SCNGOPreferredVerificationMethodServiceProvider setUnifiedGrpcServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea6948(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d47018;
  func_0x000107c61428(param_1 + _DAT_112d47018,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ea6954; end: 100ea695f; -[SCNGOPreferredVerificationMethodServiceProvider deviceIdentifierProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea6954(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d47020;
  func_0x000107c61428(param_1 + _DAT_112d47020,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ea6960; end: 100ea696b; -[SCNGOPreferredVerificationMethodServiceProvider setDeviceIdentifierProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea6960(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d47020;
  func_0x000107c61428(param_1 + _DAT_112d47020,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ea696c; end: 100ea6977; -[SCNGOPreferredVerificationMethodServiceProvider authenticationSessionInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea696c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d47028;
  func_0x000107c61428(param_1 + _DAT_112d47028,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ea6978; end: 100ea6983; -[SCNGOPreferredVerificationMethodServiceProvider setAuthenticationSessionInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea6978(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d47028;
  func_0x000107c61428(param_1 + _DAT_112d47028,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ea6984; end: 100ea698f; -[SCNGOPreferredVerificationMethodServiceProvider registrationFlowUUIDService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea6984(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d47030;
  func_0x000107c61428(param_1 + _DAT_112d47030,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ea6990; end: 100ea699b; -[SCNGOPreferredVerificationMethodServiceProvider setRegistrationFlowUUIDService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea6990(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d47030;
  func_0x000107c61428(param_1 + _DAT_112d47030,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ea699c; end: 100ea69a7; -[SCNGOPreferredVerificationMethodServiceProvider blizzardClientIdProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea699c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d47038;
  func_0x000107c61428(param_1 + _DAT_112d47038,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ea69a8; end: 100ea69b3; -[SCNGOPreferredVerificationMethodServiceProvider setBlizzardClientIdProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea69a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d47038;
  func_0x000107c61428(param_1 + _DAT_112d47038,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ea69b4; end: 100ea69bf; -[SCNGOPreferredVerificationMethodServiceProvider applicationStorageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea69b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d47040;
  func_0x000107c61428(param_1 + _DAT_112d47040,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ea69c0; end: 100ea69cb; -[SCNGOPreferredVerificationMethodServiceProvider setApplicationStorageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea69c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d47040;
  func_0x000107c61428(param_1 + _DAT_112d47040,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ea69cc; end: 100ea69d7; -[SCNGOPreferredVerificationMethodServiceProvider registrationLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea69cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d47048;
  func_0x000107c61428(param_1 + _DAT_112d47048,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ea69d8; end: 100ea69e3; -[SCNGOPreferredVerificationMethodServiceProvider setRegistrationLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea69d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d47048;
  func_0x000107c61428(param_1 + _DAT_112d47048,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ea69e4; end: 100ea69ef; -[SCNGOPreferredVerificationMethodServiceProvider identityLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea69e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d47050;
  func_0x000107c61428(param_1 + _DAT_112d47050,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ea69f0; end: 100ea69fb; -[SCNGOPreferredVerificationMethodServiceProvider setIdentityLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea69f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d47050;
  func_0x000107c61428(param_1 + _DAT_112d47050,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ea69fc; end: 100ea6a07; -[SCNGOPreferredVerificationMethodServiceProvider systemInstallServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea69fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d47058;
  func_0x000107c61428(param_1 + _DAT_112d47058,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ea6a08; end: 100ea6a13; -[SCNGOPreferredVerificationMethodServiceProvider setSystemInstallServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea6a08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d47058;
  func_0x000107c61428(param_1 + _DAT_112d47058,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ea6a14; end: 100ea6a1f; -[SCNGOPreferredVerificationMethodServiceProvider cloudAccountIdServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea6a14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d47060;
  func_0x000107c61428(param_1 + _DAT_112d47060,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ea6a20; end: 100ea6a63;  */

void FUN_100ea6a20(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ea6a64; end: 100ea6a6f; -[SCNGOPreferredVerificationMethodServiceProvider setCloudAccountIdServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea6a64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d47060;
  func_0x000107c61428(param_1 + _DAT_112d47060,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ea6a70; end: 100ea6ac3;  */

void FUN_100ea6a70(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ea6ac4; end: 100ea7173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea6ac4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3fa0c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c40890();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c3fb7c();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          lVar1 = lVar3;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c5d22c();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar1);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar3);
            lVar1 = lVar4;
          }
          else {
            lVar6 = unaff_x20;
            func_0x000107c4190c();
            func_0x000107c61180();
            if (lVar6 == 0) {
              func_0x000107c61170(lVar1);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              lVar1 = lVar5;
            }
            else {
              lVar7 = unaff_x20;
              func_0x000107c3e474();
              func_0x000107c61180();
              if (lVar7 == 0) {
                func_0x000107c61170(lVar1);
                func_0x000107c61170(lVar2);
                func_0x000107c61170(lVar3);
                func_0x000107c61170(lVar4);
                func_0x000107c61170(lVar5);
                lVar1 = lVar6;
              }
              else {
                lVar8 = unaff_x20;
                func_0x000107c4fd04();
                func_0x000107c61180();
                if (lVar8 == 0) {
                  func_0x000107c61170(lVar1);
                  func_0x000107c61170(lVar2);
                  func_0x000107c61170(lVar3);
                  func_0x000107c61170(lVar4);
                  func_0x000107c61170(lVar5);
                  func_0x000107c61170(lVar6);
                  lVar1 = lVar7;
                }
                else {
                  lVar9 = unaff_x20;
                  func_0x000107c3ea9c();
                  func_0x000107c61180();
                  if (lVar9 == 0) {
                    func_0x000107c61170(lVar1);
                    func_0x000107c61170(lVar2);
                    func_0x000107c61170(lVar3);
                    func_0x000107c61170(lVar4);
                    func_0x000107c61170(lVar5);
                    func_0x000107c61170(lVar6);
                    func_0x000107c61170(lVar7);
                    lVar1 = lVar8;
                  }
                  else {
                    lVar10 = unaff_x20;
                    func_0x000107c3dfc8();
                    func_0x000107c61180();
                    if (lVar10 == 0) {
                      func_0x000107c61170(lVar1);
                      func_0x000107c61170(lVar2);
                      func_0x000107c61170(lVar3);
                      func_0x000107c61170(lVar4);
                      func_0x000107c61170(lVar5);
                      func_0x000107c61170(lVar6);
                      func_0x000107c61170(lVar7);
                      func_0x000107c61170(lVar8);
                      lVar1 = lVar9;
                    }
                    else {
                      lVar11 = unaff_x20;
                      func_0x000107c4fd10();
                      func_0x000107c61180();
                      if (lVar11 == 0) {
                        func_0x000107c61170(lVar1);
                        func_0x000107c61170(lVar2);
                        func_0x000107c61170(lVar3);
                        func_0x000107c61170(lVar4);
                        func_0x000107c61170(lVar5);
                        func_0x000107c61170(lVar6);
                        func_0x000107c61170(lVar7);
                        func_0x000107c61170(lVar8);
                        func_0x000107c61170(lVar9);
                        lVar1 = lVar10;
                      }
                      else {
                        lVar12 = unaff_x20;
                        func_0x000107c44ff0();
                        func_0x000107c61180();
                        if (lVar12 == 0) {
                          func_0x000107c61170(lVar1);
                          func_0x000107c61170(lVar2);
                          func_0x000107c61170(lVar3);
                          func_0x000107c61170(lVar4);
                          func_0x000107c61170(lVar5);
                          func_0x000107c61170(lVar6);
                          func_0x000107c61170(lVar7);
                          func_0x000107c61170(lVar8);
                          func_0x000107c61170(lVar9);
                          func_0x000107c61170(lVar10);
                          lVar1 = lVar11;
                        }
                        else {
                          lVar13 = unaff_x20;
                          func_0x000107c5c60c();
                          func_0x000107c61180();
                          if (lVar13 == 0) {
                            func_0x000107c61170(lVar1);
                            func_0x000107c61170(lVar2);
                            func_0x000107c61170(lVar3);
                            func_0x000107c61170(lVar4);
                            func_0x000107c61170(lVar5);
                            func_0x000107c61170(lVar6);
                            func_0x000107c61170(lVar7);
                            func_0x000107c61170(lVar8);
                            func_0x000107c61170(lVar9);
                            func_0x000107c61170(lVar10);
                            func_0x000107c61170(lVar11);
                            lVar1 = lVar12;
                          }
                          else {
                            lVar14 = unaff_x20;
                            func_0x000107c3fc40();
                            func_0x000107c61180();
                            if (lVar14 != 0) {
                              lVar15 = 0;
                              func_0x000100ea5f68();
                              func_0x000107c613fc();
                              *(long *)(lVar15 + 0x10) = lVar3;
                              *(long *)(lVar15 + 0x18) = lVar2;
                              *(long *)(lVar15 + 0x20) = lVar4;
                              *(long *)(lVar15 + 0x28) = lVar5;
                              *(long *)(lVar15 + 0x30) = lVar6;
                              *(long *)(lVar15 + 0x38) = lVar7;
                              *(long *)(lVar15 + 0x40) = lVar8;
                              *(long *)(lVar15 + 0x48) = lVar9;
                              *(long *)(lVar15 + 0x50) = lVar10;
                              *(long *)(lVar15 + 0x58) = lVar11;
                              *(long *)(lVar15 + 0x60) = lVar12;
                              *(long *)(lVar15 + 0x68) = lVar13;
                              *(long *)(lVar15 + 0x70) = lVar14;
                              uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112d47068);
                              *(long *)(unaff_x20 + _DAT_112d47068) = lVar15;
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174(lVar9);
                              func_0x000107c61174(lVar10);
                              func_0x000107c61174(lVar11);
                              func_0x000107c61174(lVar12);
                              func_0x000107c61174(lVar13);
                              func_0x000107c61174(lVar14);
                              func_0x000107c6157c(lVar15);
                              func_0x000107c61574(uVar19);
                              puVar16 = PTR_PTR_1126ae720;
                              func_0x000107c61168(PTR_PTR_1126ae720);
                              puVar17 = &UNK_110360c48;
                              func_0x000107c613fc(&UNK_110360c48,0x18,7);
                              func_0x000107c61644(puVar17 + 0x10,lVar15);
                              pcStack_78 = FUN_100ea7174;
                              puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
                              uStack_90 = 0x42000000;
                              pcStack_88 = FUN_100ea5d74;
                              puStack_80 = &UNK_110360c60;
                              ppuVar18 = &puStack_98;
                              puStack_70 = puVar17;
                              func_0x000107c60bc4(ppuVar18);
                              func_0x000107c61574(puStack_70);
                              func_0x000107c3e4fc(puVar16);
                              func_0x000107c61180();
                              func_0x000107c60bd0(ppuVar18);
                              uVar19 = 0;
                              FUN_100ec9b94(0);
                              func_0x000107c610f8();
                              func_0x000100ec9ad8(puVar16,uVar19);
                              func_0x000107c61170(lVar1);
                              func_0x000107c61170(lVar2);
                              func_0x000107c61170(lVar3);
                              func_0x000107c61170(lVar4);
                              func_0x000107c61170(lVar5);
                              func_0x000107c61170(lVar6);
                              func_0x000107c61170(lVar7);
                              func_0x000107c61170(lVar8);
                              func_0x000107c61170(lVar9);
                              func_0x000107c61170(lVar10);
                              func_0x000107c61170(lVar11);
                              func_0x000107c61170(lVar12);
                              func_0x000107c61170(lVar13);
                              func_0x000107c61170(lVar14);
                              func_0x000107c61574(lVar15);
                              return;
                            }
                            func_0x000107c61170(lVar1);
                            func_0x000107c61170(lVar2);
                            func_0x000107c61170(lVar3);
                            func_0x000107c61170(lVar4);
                            func_0x000107c61170(lVar5);
                            func_0x000107c61170(lVar6);
                            func_0x000107c61170(lVar7);
                            func_0x000107c61170(lVar8);
                            func_0x000107c61170(lVar9);
                            func_0x000107c61170(lVar10);
                            func_0x000107c61170(lVar11);
                            func_0x000107c61170(lVar12);
                            lVar1 = lVar13;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100ea7174; end: 100ea7197;  */

long FUN_100ea7174(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_100ea591c();
    func_0x000107c61574(lVar1);
  }
  return lVar2;
}



/* Entry: 100ea7198; end: 100ea7223; -[SCNGOPreferredVerificationMethodServiceProvider provide] */

void FUN_100ea7198(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_100ea6ac4();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "NGOPreferredVerificationMethodServicesImplementation/SCNGOPreferredVerificationMethodServiceProvider.swift"
                      ,0x6a,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ea7224);
  (*pcVar1)();
}



/* Entry: 100ea7224; end: 100ea7257; -[SCNGOPreferredVerificationMethodServiceProvider __safeProvide] */

void FUN_100ea7224(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100ea6ac4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100ea7258; end: 100ea729b; -[SCNGOPreferredVerificationMethodServiceProvider end] */

void FUN_100ea7258(undefined8 param_1)

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



/* Entry: 100ea729c; end: 100ea791b;  */

void FUN_100ea729c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar3 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
    goto LAB_100ea732c;
  }
  if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ed550)) {
    uVar3 = 0;
    func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0xd000000000000017;
      if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10e90b0)) ||
         (func_0x000107c605b8(0xd000000000000017,0x800000010ef16f50,param_2,param_3,0),
         (uVar3 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53a30();
      }
      else {
        uVar3 = 0xd00000000000001b;
        if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10e9090)) ||
           (func_0x000107c605b8(0xd00000000000001b,0x800000010ef16f70,param_2,param_3,0),
           (uVar3 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53454();
        }
        else {
          uVar3 = 0xd000000000000013;
          if (((param_2 == -0x2fffffffffffffed) && (param_3 == -0x7ffffffef10e9070)) ||
             (func_0x000107c605b8(0xd000000000000013,0x800000010ef16f90,param_2,param_3,0),
             (uVar3 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5a17c();
          }
          else {
            uVar3 = 0;
            if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef10e9050)) ||
               (uVar2 = uVar3,
               func_0x000107c605b8(0xd000000000000018,0x800000010ef16fb0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c54084();
            }
            else {
              uVar2 = 0xd000000000000021;
              if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef10e9030)) ||
                 (func_0x000107c605b8(0xd000000000000021,0x800000010ef16fd0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c52a4c();
              }
              else {
                if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10e9000)) {
                  uVar2 = 0xd00000000000001b;
                  func_0x000107c605b8(0xd00000000000001b,0x800000010ef17000,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef10e8fe0)) ||
                       (func_0x000107c605b8(0xd000000000000018,0x800000010ef17020,param_2,param_3,0)
                       , (uVar3 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c52d60();
                    }
                    else {
                      if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ef1f0)) {
                        uVar3 = 0;
                        func_0x000107c605b8(0xd00000000000001a,0x800000010ef10e10,param_2,param_3,0)
                        ;
                        if ((uVar3 & 1) == 0) {
                          if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10e8fc0))
                          {
                            uVar3 = 0;
                            func_0x000107c605b8(0xd00000000000001a,0x800000010ef17040,param_2,
                                                param_3,0);
                            if ((uVar3 & 1) == 0) {
                              uVar3 = 0;
                              if (((param_2 == -0x2fffffffffffffea) &&
                                  (param_3 == -0x7ffffffef10e8fa0)) ||
                                 (uVar2 = uVar3,
                                 func_0x000107c605b8(0xd000000000000016,0x800000010ef17060,param_2,
                                                     param_3,0), (uVar2 & 1) != 0)) {
                                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c55228();
                              }
                              else {
                                uVar2 = 0xd000000000000015;
                                if (((param_2 == -0x2fffffffffffffeb) &&
                                    (param_3 == -0x7ffffffef10e8f80)) ||
                                   (func_0x000107c605b8(0xd000000000000015,0x800000010ef17080,
                                                        param_2,param_3,0), (uVar2 & 1) != 0)) {
                                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c59b54();
                                }
                                else {
                                  if (((param_2 != -0x2fffffffffffffea) ||
                                      (param_3 != -0x7ffffffef10e8f60)) &&
                                     (func_0x000107c605b8(0xd000000000000016,0x800000010ef170a0,
                                                          param_2,param_3,0), (uVar3 & 1) == 0)) {
                                    func_0x000107c602fc(0x15);
                                    func_0x000107c6142c(0xe000000000000000);
                                    func_0x000107c5fb78(param_2,param_3);
                                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                        0x800000010ef0fc20,
                                                                                                                
                                                  "NGOPreferredVerificationMethodServicesImplementation/SCNGOPreferredVerificationMethodServiceProvider.swift"
                                                  ,0x6a,2,0x6a,0);
                    /* WARNING: Does not return */
                                    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ea791c);
                                    (*pcVar1)();
                                  }
                                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c534d0();
                                }
                              }
                              goto LAB_100ea732c;
                            }
                          }
                          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c57c54();
                          goto LAB_100ea732c;
                        }
                      }
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c52858();
                    }
                    goto LAB_100ea732c;
                  }
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c57c4c();
              }
            }
          }
        }
      }
      goto LAB_100ea732c;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53414();
LAB_100ea732c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ea791c; end: 100ea79c7; -[SCNGOPreferredVerificationMethodServiceProvider setValue:forIvarName:] */

void FUN_100ea791c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ea729c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100ea79c8; end: 100ea7b2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea79c8(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d46ff8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d47000,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d47008,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d47010,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d47018,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d47020,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d47028,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d47030,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d47038,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d47040,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d47048,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d47050,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d47058,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d47060,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d47068) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ea7b2c; end: 100ea7b4b; -[SCNGOPreferredVerificationMethodServiceProvider init] */

void FUN_100ea7b2c(void)

{
  FUN_100ea79c8();
  return;
}



/* Entry: 100ea7b4c; end: 100ea7b7f;  */

void FUN_100ea7b4c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100ea7b80; end: 100ea7c87; -[SCNGOPreferredVerificationMethodServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea7b80(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d46ff8);
  func_0x000107c61610(param_1 + _DAT_112d47000);
  func_0x000107c61610(param_1 + _DAT_112d47008);
  func_0x000107c61610(param_1 + _DAT_112d47010);
  func_0x000107c61610(param_1 + _DAT_112d47018);
  func_0x000107c61610(param_1 + _DAT_112d47020);
  func_0x000107c61610(param_1 + _DAT_112d47028);
  func_0x000107c61610(param_1 + _DAT_112d47030);
  func_0x000107c61610(param_1 + _DAT_112d47038);
  func_0x000107c61610(param_1 + _DAT_112d47040);
  func_0x000107c61610(param_1 + _DAT_112d47048);
  func_0x000107c61610(param_1 + _DAT_112d47050);
  func_0x000107c61610(param_1 + _DAT_112d47058);
  func_0x000107c61610(param_1 + _DAT_112d47060);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d47068));
  return;
}



/* Entry: 100ea7c88; end: 100ea7d0f;  */

void FUN_100ea7c88(void)

{
  func_0x000107c61168(&PTR_PTR_112d470b0);
  return;
}



/* Entry: 100ea7d10; end: 100ea89ff;  */

void FUN_100ea7d10(undefined8 *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 uStack_89;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uVar15 = *param_1;
  bVar1 = *(byte *)(param_1 + 10);
  bVar2 = bVar1 >> 6;
  if (bVar2 == 0) {
    uVar5 = param_1[1];
    uVar13 = param_1[2];
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_88 = 0;
    uStack_80 = 0xe000000000000000;
    pcStack_110 = (code *)&uStack_88;
    pcStack_b0 = pcStack_110;
    func_0x00010486ddec(0x100ea98c8,&puStack_120,0x100ea98cc,&puStack_c0);
    uVar14 = uStack_80;
    uVar12 = uStack_88;
    func_0x000107c5fadc(uStack_88,uStack_80);
    func_0x000107c6142c(uVar14);
    if ((bVar1 & 0x3f) == 1) {
      FUN_100eabae0(uVar15,uVar5,uVar13);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar5);
      func_0x000104cf63c4(uVar4,uVar12,uVar15,1);
      func_0x000107c61170(uVar12);
      goto LAB_100ea81b4;
    }
    uVar13 = 0x73736563637573;
    func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
    func_0x000107c6142c(0xe700000000000000);
    uVar5 = uVar12;
    func_0x000104cf63c4(uVar4,uVar12,uVar13,1);
    func_0x000107c61170(uVar12);
    func_0x000107c61170();
    func_0x00010011df08();
    func_0x000107c61180();
    uVar15 = uVar13;
    func_0x000107c5faec();
    func_0x000107c61170(uVar13);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x28) = uVar15;
    *(undefined8 *)(unaff_x20 + 0x30) = uVar5;
    func_0x000107c6142c(uVar13);
    lVar11 = *(long *)(unaff_x20 + 0x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar11 != 0) {
      uStack_88 = 0xffffffffffffffff;
      pcStack_110 = (code *)&uStack_88;
      pcStack_b0 = pcStack_110;
      func_0x00010486ddec(0x100ea98a8,&puStack_120,0x100ea98ac,&puStack_c0);
      uVar15 = *(undefined8 *)(unaff_x20 + 0x28);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
      func_0x000107c61434(uVar5);
      func_0x000107c5fadc(uVar15,uVar5);
      func_0x000107c6142c(uVar5);
      func_0x000107c4bc88(lVar11);
      func_0x000107c615e8(lVar11);
      func_0x000107c61170(uVar15);
    }
    lVar11 = *(long *)(unaff_x20 + 0x38);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar11 == 0) {
      return;
    }
    uStack_88 = 0xffffffffffffffff;
    pcStack_110 = (code *)&uStack_88;
    pcStack_b0 = pcStack_110;
    func_0x00010486ddec(0x100ea98a0,&puStack_120,0x100ea98a4,&puStack_c0);
    func_0x000107c4ba2c(lVar11);
  }
  else {
    if (bVar2 != 1) {
      uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
      uStack_88 = 0;
      uStack_80 = 0xe000000000000000;
      pcStack_110 = (code *)&uStack_88;
      pcStack_b0 = pcStack_110;
      func_0x00010486ddec(0x100ea98d0,&puStack_120,0x100ea98d4,&puStack_c0);
      uVar13 = uStack_80;
      uVar15 = uStack_88;
      func_0x000107c5fadc(uStack_88,uStack_80);
      func_0x000107c6142c(uVar13);
      func_0x000104cf6250(uVar5,uVar15,1);
LAB_100ea81b4:
      func_0x000107c61170(uVar15);
      return;
    }
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_88 = 0;
    uStack_80 = 0xe000000000000000;
    pcStack_110 = (code *)&uStack_88;
    pcStack_b0 = (code *)&uStack_88;
    func_0x00010486ddec(FUN_100ea8da0,&puStack_120,0x100ea8dc0,&puStack_c0);
    uVar13 = uStack_80;
    uVar4 = uStack_88;
    uVar14 = uStack_80;
    func_0x000107c5fadc(uStack_88,uStack_80);
    func_0x000107c6142c(uVar13);
    func_0x000100ea8364();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar14);
    func_0x000104cf65f4(uVar5,uVar4,uVar13,1);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar13);
    uStack_89 = 0;
    uVar5 = uVar15;
    func_0x000107c41870(uVar15);
    func_0x000107c61180();
    puVar6 = &UNK_110360d30;
    func_0x000107c613fc(&UNK_110360d30,0x20,7);
    *(undefined1 **)(puVar6 + 0x10) = &uStack_89;
    *(long *)(puVar6 + 0x18) = unaff_x20;
    puVar7 = &UNK_110360d58;
    func_0x000107c613fc(&UNK_110360d58,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x100ea8de0;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0x100ea8de8;
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0x42000000;
    pcStack_110 = FUN_100de6b2c;
    puStack_108 = &UNK_110360d70;
    ppuVar8 = &puStack_120;
    puStack_f8 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_f8;
    func_0x000107c6157c();
    func_0x000107c61574(puVar7);
    puVar7 = &UNK_110360da8;
    func_0x000107c613fc(&UNK_110360da8,0x20,7);
    *(long *)(puVar7 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar7 + 0x18) = uVar15;
    puVar9 = &UNK_110360dd0;
    func_0x000107c613fc(&UNK_110360dd0,0x20,7);
    *(undefined8 *)(puVar9 + 0x10) = 0x100ea8e0c;
    *(undefined **)(puVar9 + 0x18) = puVar7;
    uStack_a0 = 0x100ea8e14;
    puStack_c0 = puVar3;
    uStack_b8 = 0x42000000;
    pcStack_b0 = FUN_100de6bdc;
    puStack_a8 = &UNK_110360de8;
    ppuVar10 = &puStack_c0;
    puStack_98 = puVar9;
    func_0x000107c60bc4();
    puVar9 = puStack_98;
    func_0x000107c6157c();
    func_0x000100ea8e34(param_1,&puStack_120);
    func_0x000107c61574(puVar9);
    func_0x000107c4c764(uVar5);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(uVar5);
    lVar11 = *(long *)(unaff_x20 + 0x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar11 != 0) {
      uStack_88 = 0xffffffffffffffff;
      pcStack_110 = (code *)&uStack_88;
      pcStack_b0 = (code *)&uStack_88;
      func_0x00010486ddec(0x100ea9898,&puStack_120,0x100ea989c,&puStack_c0);
      func_0x000107c4458c(uVar15);
      func_0x000107c4f544(uVar15);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
      uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
      func_0x000107c61434(uVar13);
      func_0x000107c5fadc(uVar5,uVar13);
      func_0x000107c6142c(uVar13);
      func_0x000107c4bc84(lVar11);
      func_0x000107c615e8(lVar11);
      func_0x000107c61170(uVar5);
    }
    lVar11 = *(long *)(unaff_x20 + 0x38);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar11 == 0) {
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar6);
      return;
    }
    uStack_88 = 0xffffffffffffffff;
    pcStack_110 = (code *)&uStack_88;
    pcStack_b0 = pcStack_110;
    func_0x00010486ddec(FUN_100ea8e68,&puStack_120,0x100ea8e78,&puStack_c0);
    func_0x000107c4458c(uVar15);
    func_0x000107c4f544(uVar15);
    func_0x000107c4ba30(lVar11);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar6);
  }
  func_0x000107c615e8(lVar11);
  return;
}


