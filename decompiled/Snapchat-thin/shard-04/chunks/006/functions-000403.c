/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036bc630; end: 1036bc6bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bc630(code *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  uVar1 = uStack_48;
  uVar2 = uStack_48;
  func_0x000107c5ac40();
  func_0x000107c615e8(uVar1);
  if ((uint)uVar2 != 0) {
    func_0x0001000d224c(&uStack_48);
    func_0x000107c5d000(uStack_48);
    func_0x000107c615e8(uStack_48);
  }
  (*param_1)((uint)uVar2 ^ 1);
  return;
}



/* Entry: 1036bc6c0; end: 1036bc7cf; -[_TtC27LensSnapEditorEventListener27LensSnapEditorEventListener shareActionGuard] */

void FUN_1036bc6c0(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  puVar2 = PTR_PTR_1126d1348;
  func_0x000107c61168();
  puVar3 = &UNK_11067fa20;
  func_0x000107c613fc(&UNK_11067fa20,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  puVar4 = &UNK_11067fa48;
  func_0x000107c613fc(&UNK_11067fa48,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x1036bd084;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uStack_40 = 0x1036bd0a0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_102827bd8;
  puStack_48 = &UNK_11067fa60;
  puStack_38 = puVar4;
  func_0x000107c60bc4(&puStack_60);
  puVar3 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c4f24c();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036bc7d0);
  (*pcVar1)();
}



/* Entry: 1036bc7d0; end: 1036bca2f;  */

undefined8 FUN_1036bc7d0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  puVar4 = &UNK_11067fc28;
  func_0x000107c613fc(&UNK_11067fc28,0x18,7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_48;
  puVar5 = &UNK_11067fc50;
  func_0x000107c613fc(&UNK_11067fc50,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x1036bd044;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  uStack_58 = 0x1036bd0ac;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  pcStack_68 = FUN_1036b08fc;
  puStack_60 = &UNK_11067fc68;
  ppuVar6 = &puStack_78;
  puStack_50 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar1 = puStack_50;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6dc();
  func_0x000107c60bd0(ppuVar6);
  uVar2 = uStack_48;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x6b,0xd5,0x1d,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1036bc900);
  (*pcVar3)();
}



/* Entry: 1036bca30; end: 1036bca8f; -[_TtC27LensSnapEditorEventListener27LensSnapEditorEventListener init] */

void FUN_1036bca30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensSnapEditorEventListener.LensSnapEditorEventListener",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036bca5c);
  (*pcVar1)();
}



/* Entry: 1036bca90; end: 1036bcaf7; -[_TtC27LensSnapEditorEventListener27LensSnapEditorEventListener .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036bcabc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036bcadc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036bcac0) */
/* WARNING: Removing unreachable block (ram,0x0001036bcae0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bca90(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f86cb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f86cc0));
  return;
}



/* Entry: 1036bcaf8; end: 1036bcb17;  */

void FUN_1036bcaf8(void)

{
  func_0x000107c61168(&PTR_PTR_1128e0eb0);
  return;
}



/* Entry: 1036bcb18; end: 1036bcb2b;  */

void FUN_1036bcb18(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001036bcb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 1036bcb2c; end: 1036bd023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bcb2c(code *param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  byte bVar11;
  long unaff_x20;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  ulong uStack_68;
  
  func_0x0001000d224c(&uStack_90);
  uVar12 = uStack_90;
  uVar2 = uStack_90;
  func_0x000107c5ac40();
  func_0x000107c615e8(uVar12);
  if ((uVar2 & 1) != 0) {
    func_0x0001000d224c(&uStack_90);
    uVar12 = uStack_90;
    func_0x000107c5d000(uStack_90);
LAB_1036bcbc8:
    func_0x000107c615e8(uVar12);
    goto LAB_1036bcbcc;
  }
  uVar12 = *(ulong *)(unaff_x20 + _DAT_112f86cc8);
  if (uVar12 == 0) goto LAB_1036bcbcc;
  uVar3 = uVar12;
  func_0x000107c615f0();
  func_0x000107c49c6c();
  if ((uVar3 & 1) != 0) goto LAB_1036bcbc8;
  uVar3 = uVar12;
  func_0x000107c4b6c0();
  func_0x000107c61180();
  if (uVar3 == 0) {
    uVar4 = uVar12;
    func_0x000107c40dd4();
    func_0x000107c61180();
    if (uVar4 == 0) goto LAB_1036bcbc8;
    func_0x000107c61170();
  }
  uVar4 = uVar12;
  func_0x000107c4b3f4();
  func_0x000107c61180();
  if (uVar4 == 0) {
LAB_1036bcfec:
    func_0x000107c615e8(uVar12);
    func_0x000107c61170(uVar3);
    goto LAB_1036bcbcc;
  }
  uVar5 = uVar4;
  func_0x000107c5faec();
  uVar10 = param_2;
  func_0x000107c61170(uVar4);
  uVar4 = uVar12;
  func_0x000107c4b3e0();
  func_0x000107c61180();
  if (uVar4 == 0) {
    uVar13 = 0;
    if (uVar3 != 0) goto LAB_1036bcc8c;
LAB_1036bccb4:
    if (uVar13 != 0) {
      bVar11 = 1;
      goto LAB_1036bccbc;
    }
    bVar1 = true;
    bVar11 = 1;
    if (uVar3 == 0) goto LAB_1036bccec;
LAB_1036bcd1c:
    uVar4 = uVar3;
    func_0x000107c4a2a0();
    if (((int)uVar4 == 0) && ((bVar11 & 1) != 0 || bVar1)) {
      uVar4 = uVar3;
      func_0x000107c4b1dc();
      func_0x000107c61180();
LAB_1036bcd40:
      uVar8 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(uVar4);
      uVar4 = uVar12;
      func_0x000107c4b3e0();
      func_0x000107c61180();
      if (uVar4 == 0) {
        func_0x000107c615e8(uVar12);
        func_0x000107c6142c(param_2);
        func_0x000107c6142c(uVar10);
        goto LAB_1036bd010;
      }
      uVar9 = uVar4;
      func_0x0001036bc900();
      if (uVar9 == 0) {
        func_0x000107c61170(uVar4);
        func_0x000107c6142c(param_2);
        param_2 = uVar10;
        goto LAB_1036bd004;
      }
      lVar6 = 0;
      func_0x0001036bc0dc();
      func_0x000107c613fc();
      *(ulong *)(lVar6 + 0x10) = uVar5;
      *(undefined8 *)(lVar6 + 0x18) = param_2;
      func_0x000107c61434();
      func_0x000107c55be8(uVar12);
      func_0x000107c61574(lVar6);
      uVar7 = uVar12;
      func_0x000107c4a0ac();
      uStack_68 = uVar9 | 0x8000000000000000;
      uStack_70 = (undefined1)uVar7;
      uStack_90 = uVar5;
      uStack_88 = param_2;
      uStack_80 = uVar8;
      uStack_78 = uVar10;
      func_0x000107c61174(uVar9);
      func_0x0001000d224c(auStack_b8);
      func_0x0001000a8868(auStack_b8,uStack_a0);
      (**(code **)(lStack_98 + 8))(&uStack_90,uStack_a0,lStack_98);
      func_0x000107c6142c(uVar10);
      func_0x000107c6142c(param_2);
      func_0x000107c61170(uVar3);
      func_0x000107c615e8(uVar12);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar4);
      uVar3 = uVar13;
    }
    else {
      uVar4 = uVar12;
      func_0x000107c4a328();
      if (((int)uVar4 != 0) && (uVar4 = uVar12, func_0x000107c4a63c(), (int)uVar4 == 0)) {
LAB_1036bd004:
        func_0x000107c6142c(param_2);
        func_0x000107c615e8(uVar12);
LAB_1036bd010:
        func_0x000107c61170(uVar3);
        goto LAB_1036bd018;
      }
      if (uVar13 == 0) {
        func_0x000107c6142c(param_2);
        goto LAB_1036bcfec;
      }
      lVar6 = 0;
      func_0x0001036bc0dc();
      uVar10 = 0x20;
      func_0x000107c613fc();
      *(ulong *)(lVar6 + 0x10) = uVar5;
      *(undefined8 *)(lVar6 + 0x18) = param_2;
      func_0x000107c61434(param_2);
      func_0x000107c55be8(uVar12);
      func_0x000107c61574(lVar6);
      uVar4 = uVar12;
      func_0x000107c4a0ac();
      uVar8 = uVar3;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar9 = uVar8;
      func_0x000107c5faec();
      func_0x000107c61170(uVar8);
      uStack_70 = (undefined1)uVar4;
      uStack_90 = uVar5;
      uStack_88 = param_2;
      uStack_80 = uVar9;
      uStack_78 = uVar10;
      uStack_68 = uVar13;
      func_0x000107c61174(uVar13);
      func_0x0001000d224c(auStack_b8);
      func_0x0001000a8868(auStack_b8,uStack_a0);
      (**(code **)(lStack_98 + 8))(&uStack_90,uStack_a0,lStack_98);
      func_0x000107c6142c(uVar10);
      func_0x000107c6142c(param_2);
      func_0x000107c615e8(uVar12);
      func_0x000107c61170(uVar13);
      func_0x000107c61170(uVar13);
    }
    func_0x000107c61170(uVar3);
    func_0x0001000834e4(auStack_b8);
  }
  else {
    uVar13 = uVar4;
    FUN_1036bc7d0();
    func_0x000107c61170(uVar4);
    if (uVar3 == 0) goto LAB_1036bccb4;
LAB_1036bcc8c:
    uVar4 = uVar3;
    func_0x000107c4a63c();
    if ((int)uVar4 == 0) goto LAB_1036bccb4;
    if (uVar13 == 0) {
      bVar11 = 1;
      bVar1 = true;
      goto LAB_1036bcd1c;
    }
    bVar11 = *(byte *)(uVar13 + _DAT_113076f88) ^ 1;
LAB_1036bccbc:
    bVar1 = *(long *)(uVar13 + _DAT_113076f78 + 8) == 0;
    if (uVar3 != 0) goto LAB_1036bcd1c;
LAB_1036bccec:
    uVar4 = uVar12;
    func_0x000107c40dd4();
    func_0x000107c61180();
    if (uVar4 != 0) goto LAB_1036bcd40;
    func_0x000107c6142c(param_2);
    func_0x000107c615e8(uVar12);
LAB_1036bd018:
    func_0x000107c61170(uVar13);
  }
LAB_1036bcbcc:
  (*param_1)((uint)uVar2 ^ 1);
  return;
}



/* Entry: 1036bd024; end: 1036bd06f;  */

void FUN_1036bd024(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1036bd070; end: 1036bd0bb;  */

void FUN_1036bd070(long param_1,long param_2)

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



/* Entry: 1036bd0bc; end: 1036bd15f;  */

void FUN_1036bd0bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e869c0,&UNK_10da98530);
  puVar1 = &UNK_11067fca0;
  func_0x000107c613fc(&UNK_11067fca0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1036bd2e8,puVar1);
  return;
}



/* Entry: 1036bd160; end: 1036bd2e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bd160(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  plVar5 = &lStack_80;
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&lStack_60);
  uVar6 = *(undefined8 *)(lStack_60 + _DAT_113076e20);
  func_0x000107c6157c(uVar6);
  func_0x000107c61170(lStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&lStack_70);
  lVar2 = 0;
  FUN_1036bcaf8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f86cb8) = uStack_58;
  *(undefined8 *)(lVar3 + _DAT_112f86cc0) = uVar6;
  func_0x000107c6157c(uVar6);
  uVar4 = uStack_58;
  func_0x000107c61174(uStack_58);
  uVar7 = uStack_68;
  func_0x000107c4ad1c();
  func_0x000107c61180();
  *(undefined8 *)(lVar3 + _DAT_112f86cc8) = uVar7;
  *(undefined8 *)(lVar3 + _DAT_112f86cd0) = *(undefined8 *)(lStack_70 + _DAT_112ff4f00);
  uVar7 = *(undefined8 *)(lStack_70 + _DAT_112ff4f08);
  *(undefined8 *)(lVar3 + _DAT_112f86cd8) = uVar7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_80 = lVar3;
  lStack_78 = lVar2;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_80,puVar1);
  func_0x000107c61170(lStack_70);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uStack_68);
  *param_1 = plVar5;
  return;
}



/* Entry: 1036bd2e8; end: 1036bd303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bd2e8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  plVar5 = &lStack_80;
  func_0x000100083b20(&uStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&lStack_60);
  uVar6 = *(undefined8 *)(lStack_60 + _DAT_113076e20);
  func_0x000107c6157c(uVar6);
  func_0x000107c61170(lStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&lStack_70);
  lVar2 = 0;
  FUN_1036bcaf8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f86cb8) = uStack_58;
  *(undefined8 *)(lVar3 + _DAT_112f86cc0) = uVar6;
  func_0x000107c6157c(uVar6);
  uVar4 = uStack_58;
  func_0x000107c61174(uStack_58);
  uVar7 = uStack_68;
  func_0x000107c4ad1c();
  func_0x000107c61180();
  *(undefined8 *)(lVar3 + _DAT_112f86cc8) = uVar7;
  *(undefined8 *)(lVar3 + _DAT_112f86cd0) = *(undefined8 *)(lStack_70 + _DAT_112ff4f00);
  uVar7 = *(undefined8 *)(lStack_70 + _DAT_112ff4f08);
  *(undefined8 *)(lVar3 + _DAT_112f86cd8) = uVar7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_80 = lVar3;
  lStack_78 = lVar2;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_80,puVar1);
  func_0x000107c61170(lStack_70);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uStack_68);
  *param_1 = plVar5;
  return;
}



/* Entry: 1036bd304; end: 1036bd34f;  */

void FUN_1036bd304(undefined8 param_1)

{
  func_0x0001000285a8(0x112f86040,&UNK_10dbf9bb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1036bd350,param_1);
  return;
}



/* Entry: 1036bd350; end: 1036bd457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bd350(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  puVar1 = PTR_PTR_1133bb578;
  lVar4 = *(long *)(lStack_38 + _DAT_11302bab8);
  lVar5 = 0;
  if (lVar4 == 0) {
LAB_1036bd438:
    func_0x000107c61170(lStack_38);
  }
  else {
    if (*(long *)(lVar4 + 0x10) != 0) {
      uVar3 = 0;
      func_0x000107c61438(lVar4);
      func_0x000100fac3bc();
      if ((uVar3 & 1) != 0) {
        lVar6 = *(long *)(*(long *)(lVar4 + 0x38) + (long)puVar1 * 8);
        func_0x000107c615f0(lVar6);
        func_0x000107c61430(lVar4,2);
        puVar1 = PTR_PTR_1126c81c0;
        func_0x000107c61168(PTR_PTR_1126c81c0);
        lVar5 = lVar6;
        func_0x000107c6148c(lVar6,puVar1);
        if (lVar5 == 0) {
          func_0x000107c615e8(lVar6);
        }
        else {
          uVar2 = 0;
          FUN_1036bd6c0(0);
          func_0x000107c610f8();
          func_0x0001036bd4b4(lVar5,uVar2);
        }
        goto LAB_1036bd438;
      }
      func_0x000107c61430(lVar4,2);
    }
    func_0x000107c61170(lStack_38);
    lVar5 = 0;
  }
  *param_1 = lVar5;
  return;
}



/* Entry: 1036bd458; end: 1036bd467;  */

undefined1  [16] FUN_1036bd458(void)

{
  return ZEXT816(0x11067fd90);
}



/* Entry: 1036bd468; end: 1036bd4ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bd468(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f86d08) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036bd500; end: 1036bd607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bd500(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  puVar1 = PTR_PTR_1126ad430;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5372c();
  puVar2 = &UNK_11067fe58;
  func_0x000107c613fc(&UNK_11067fe58,0x18,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  puVar3 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_40 = FUN_1036bd608;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_101016bdc;
  puStack_48 = &UNK_11067fe70;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61174(puVar1);
  func_0x000107c46b38(puVar3);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(puStack_38);
  func_0x000107c58edc(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 1036bd608; end: 1036bd60f;  */

void FUN_1036bd608(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1036bd610; end: 1036bd65f; -[_TtC47SnapEditorSendToMoreFriendsPluginImplementation33SnapEditorSendToMoreFriendsPlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x0001036bd648: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036bd64c) */

void FUN_1036bd610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036bd500(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036bd660; end: 1036bd693;  */

void FUN_1036bd660(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036bd694; end: 1036bd6bf; -[_TtC47SnapEditorSendToMoreFriendsPluginImplementation33SnapEditorSendToMoreFriendsPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bd694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f86d08));
  return;
}



/* Entry: 1036bd6c0; end: 1036bd6df;  */

void FUN_1036bd6c0(void)

{
  func_0x000107c61168(&PTR_PTR_1128e0f90);
  return;
}



/* Entry: 1036bd6e0; end: 1036bd72b;  */

void FUN_1036bd6e0(undefined8 param_1)

{
  func_0x0001000285a8(0x112f86040,&UNK_10dbf9bb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1036bd72c,param_1);
  return;
}



/* Entry: 1036bd72c; end: 1036bd813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bd72c(long *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  puVar1 = PTR_PTR_1133bb590;
  lVar2 = *(long *)(lStack_38 + _DAT_11302bab8);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    func_0x000107c61434(lVar2);
    func_0x000100fac3bc();
    if ((param_3 & 1) == 0) {
      func_0x000107c6142c(lVar2);
    }
    else {
      lVar3 = *(long *)(*(long *)(lVar2 + 0x38) + (long)puVar1 * 8);
      func_0x000107c615f0(lVar3);
      func_0x000107c6142c(lVar2);
      puVar1 = PTR_PTR_1126c81f0;
      func_0x000107c61168(PTR_PTR_1126c81f0);
      lVar2 = lVar3;
      func_0x000107c6148c(lVar3,puVar1);
      func_0x000107c615e8(lVar3);
      if (lVar2 != 0) {
        FUN_1036bda34(0);
        func_0x000107c610f8();
        func_0x0001036bd870();
        goto LAB_1036bd7fc;
      }
    }
  }
  func_0x000107c61170(lStack_38);
  lStack_38 = 0;
LAB_1036bd7fc:
  *param_1 = lStack_38;
  return;
}



/* Entry: 1036bd814; end: 1036bd823;  */

undefined1  [16] FUN_1036bd814(void)

{
  return ZEXT816(0x11067ff50);
}



/* Entry: 1036bd824; end: 1036bd8bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bd824(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f86d38) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036bd8bc; end: 1036bd99f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bd8bc(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1133bb590;
  lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_112f86d38) + _DAT_11302bab8);
  lVar5 = 0;
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x10) == 0) {
      lVar5 = 0;
    }
    else {
      uVar2 = 0;
      func_0x000107c61438(lVar4);
      func_0x000100fac3bc();
      if ((uVar2 & 1) == 0) {
        func_0x000107c61430(lVar4,2);
        lVar5 = 0;
      }
      else {
        lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + (long)puVar1 * 8);
        func_0x000107c615f0(lVar3);
        func_0x000107c61430(lVar4,2);
        puVar1 = PTR_PTR_1126c81f0;
        func_0x000107c61168(PTR_PTR_1126c81f0);
        lVar5 = lVar3;
        func_0x000107c6148c(lVar3,puVar1);
        if (lVar5 == 0) {
          func_0x000107c615e8(lVar3);
        }
      }
    }
  }
  func_0x000107c5973c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1036bd9a0; end: 1036bd9ef; -[_TtC45SnapEditorSpotlightSubmissionPluginEntryPoint35SnapEditorSpotlightSubmissionPlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x0001036bd9d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036bd9dc) */

void FUN_1036bd9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036bd8bc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036bd9f0; end: 1036bda23;  */

void FUN_1036bd9f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036bda24; end: 1036bda33; -[_TtC45SnapEditorSpotlightSubmissionPluginEntryPoint35SnapEditorSpotlightSubmissionPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bda24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f86d38));
  return;
}



/* Entry: 1036bda34; end: 1036bda53;  */

void FUN_1036bda34(void)

{
  func_0x000107c61168(&PTR_PTR_1128e1050);
  return;
}



/* Entry: 1036bda54; end: 1036bdb47;  */

void FUN_1036bda54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f86040,&UNK_10dbf9bb0);
  puVar1 = &UNK_1106800f0;
  func_0x000107c613fc(&UNK_1106800f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x1036bdad4,puVar1);
  return;
}



/* Entry: 1036bdb48; end: 1036bdb57;  */

undefined1  [16] FUN_1036bdb48(void)

{
  return ZEXT816(0x110680118);
}



/* Entry: 1036bdb58; end: 1036bdc03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1036bdb58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar7 = &lStack_40;
  puVar4 = PTR_PTR_1126ad438;
  func_0x000107c610f8(PTR_PTR_1126ad438);
  func_0x000107c453e4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar5 = 0;
  FUN_1036be43c();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112f86e40) = uVar1;
  *(undefined8 *)(lVar6 + _DAT_112f86e48) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar6;
  lStack_38 = lVar5;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  func_0x000107c59998(puVar4);
  func_0x000107c61170(plVar7);
  return puVar4;
}



/* Entry: 1036bdc04; end: 1036bdc4f;  */

void FUN_1036bdc04(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036bdc50; end: 1036bdd37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bdc50(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  lVar1 = 0;
  func_0x0001036bdc30();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  *(long *)(unaff_x20 + _DAT_112f86e10) = lVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036bdd38; end: 1036bdd3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1036bdd38(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar7 = &lStack_40;
  puVar4 = PTR_PTR_1126ad438;
  func_0x000107c610f8(PTR_PTR_1126ad438);
  func_0x000107c453e4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar5 = 0;
  FUN_1036be43c();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112f86e40) = uVar1;
  *(undefined8 *)(lVar6 + _DAT_112f86e48) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar6;
  lStack_38 = lVar5;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  func_0x000107c59998(puVar4);
  func_0x000107c61170(plVar7);
  return puVar4;
}



/* Entry: 1036bdd3c; end: 1036bde37; -[_TtC31SnapEditorStoryPluginEntryPoint21SnapEditorStoryPlugin populateDependencies:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bdd3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f86e10);
  puVar1 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  uStack_50 = 0x1036bdeec;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101016bdc;
  puStack_58 = &UNK_110680200;
  uStack_48 = uVar3;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar3);
  func_0x000107c46b38(puVar1,param_2,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(uStack_48);
  func_0x000107c5993c(param_3,param_2,puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1036bde38; end: 1036bde97; -[_TtC31SnapEditorStoryPluginEntryPoint21SnapEditorStoryPlugin init] */

void FUN_1036bde38(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorStoryPluginEntryPoint.SnapEditorStoryPlugin",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036bde64);
  (*pcVar1)();
}



/* Entry: 1036bde98; end: 1036bdec3; -[_TtC31SnapEditorStoryPluginEntryPoint21SnapEditorStoryPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bde98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f86e10));
  return;
}



/* Entry: 1036bdec4; end: 1036bdee3;  */

void FUN_1036bdec4(void)

{
  func_0x000107c61168(&PTR_PTR_1128e1110);
  return;
}



/* Entry: 1036bdee4; end: 1036bdeef;  */

void FUN_1036bdee4(long param_1,long param_2)

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



/* Entry: 1036bdef0; end: 1036be067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036bdef0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  ppuVar4 = &puStack_60;
  func_0x0001000285a8(0x112d3bf08,&UNK_10d913340);
  func_0x000107c613fc();
  lVar2 = 0;
  func_0x00010095c380();
  lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112f86e40) + _DAT_112ff2c78);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    puStack_60 = puVar5;
    func_0x000100b60084(&puStack_60);
    func_0x000107c61170(puVar5);
    uVar7 = *(undefined8 *)(lVar2 + 0x10);
    uVar6 = uVar7;
    func_0x000107c6157c(uVar7);
    func_0x000103edf0bc();
    func_0x000107c61574(lVar2);
  }
  else {
    uStack_40 = 0x1036be47c;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_100ab47f8;
    puStack_48 = &UNK_110680228;
    lStack_38 = lVar2;
    func_0x000107c60bc4(&puStack_60);
    lVar1 = lStack_38;
    func_0x000107c6157c(lVar2);
    func_0x000107c61574(lVar1);
    func_0x000107c4f780(lVar3);
    func_0x000107c60bd0(ppuVar4);
    uVar7 = *(undefined8 *)(lVar2 + 0x10);
    uVar6 = uVar7;
    func_0x000107c6157c(uVar7);
    func_0x000103edf0bc();
    func_0x000107c61574(lVar2);
    func_0x000107c615e8(lVar3);
  }
  func_0x000107c61574(uVar7);
  return uVar6;
}



/* Entry: 1036be068; end: 1036be0bb;  */

void FUN_1036be068(void)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  puStack_28 = puVar1;
  func_0x000100b60084(&puStack_28);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1036be0bc; end: 1036be0ef; -[_TtC31SnapEditorStoryPluginEntryPoint23SnapEditorStoryServices hasCustomStories] */

void FUN_1036be0bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1036bdef0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036be0f0; end: 1036be2af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036be0f0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_38;
  
  func_0x0001000285a8(0x112d3bf08,&UNK_10d913340);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112f86e48) + _DAT_112f86ed8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    puStack_38 = puVar6;
    func_0x000100b60084(&puStack_38);
    func_0x000107c61170(puVar6);
    uVar7 = *(undefined8 *)(lVar1 + 0x10);
    uVar5 = uVar7;
    func_0x000107c6157c(uVar7);
    func_0x000103edf0bc();
    func_0x000107c61574(lVar1);
    func_0x000107c61574(uVar7);
  }
  else {
    func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
    lVar3 = lVar2;
    func_0x000107c5ab90(lVar2);
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000100759c94();
    func_0x000107c61170(lVar3);
    func_0x000107c6157c(lVar1);
    uVar5 = 0;
    func_0x00010488a220(0,1,0x1036be45c,lVar1);
    func_0x000107c61574(lVar4);
    func_0x000107c61574(lVar1);
    func_0x000107c6157c(lVar1);
    func_0x000104888fc0(0,1,FUN_1036be474,lVar1);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(lVar1);
    uVar7 = *(undefined8 *)(lVar1 + 0x10);
    uVar5 = uVar7;
    func_0x000107c6157c(uVar7);
    func_0x000103edf0bc();
    func_0x000107c61574(lVar1);
    func_0x000107c615e8(lVar2);
    func_0x000107c61574(uVar7);
  }
  return uVar5;
}



/* Entry: 1036be2b0; end: 1036be31f;  */

void FUN_1036be2b0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_28;
  
  puVar1 = (undefined *)*param_1;
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    puVar1 = (undefined *)0x0;
  }
  puStack_28 = puVar2;
  func_0x000107c61174(puVar1);
  func_0x000100b60084(&puStack_28);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1036be320; end: 1036be36f;  */

void FUN_1036be320(void)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  puStack_28 = puVar1;
  func_0x000100b60084(&puStack_28);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1036be370; end: 1036be3a3; -[_TtC31SnapEditorStoryPluginEntryPoint23SnapEditorStoryServices shouldDirectPostToMyStory] */

void FUN_1036be370(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1036be0f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036be3a4; end: 1036be403; -[_TtC31SnapEditorStoryPluginEntryPoint23SnapEditorStoryServices init] */

void FUN_1036be3a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorStoryPluginEntryPoint.SnapEditorStoryServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036be3d0);
  (*pcVar1)();
}



/* Entry: 1036be404; end: 1036be43b; -[_TtC31SnapEditorStoryPluginEntryPoint23SnapEditorStoryServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036be420: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036be424) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036be404(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f86e40));
  return;
}



/* Entry: 1036be43c; end: 1036be473;  */

void FUN_1036be43c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e11d0);
  return;
}



/* Entry: 1036be474; end: 1036be49f;  */

void FUN_1036be474(void)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  puStack_28 = puVar1;
  func_0x000100b60084(&puStack_28);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1036be4a0; end: 1036be4ef; -[SCStorySelectionResult stories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036be4a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f86e78);
  func_0x000101345fdc(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036be4f0; end: 1036be4ff; -[SCStorySelectionResult postToMyStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1036be4f0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f86e80);
}



/* Entry: 1036be500; end: 1036be50f; -[SCStorySelectionResult postToPublicStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1036be500(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f86e88);
}



/* Entry: 1036be510; end: 1036be557; -[SCStorySelectionResult customStoryExternalIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036be510(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f86e90);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036be558; end: 1036be577; -[SCStorySelectionResult senderDataModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036be558(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f86e98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036be578; end: 1036be587; -[SCStorySelectionResult didDirectPost] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1036be578(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f86ea0);
}



/* Entry: 1036be588; end: 1036be597; -[SCStorySelectionResult shouldAutoShareSpotlightToStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1036be588(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f86ea8);
}



/* Entry: 1036be598; end: 1036be65b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036be598(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f86e78) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112f86e80) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112f86e88) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f86e90) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f86e98) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112f86ea0) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112f86ea8) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036be65c; end: 1036be75f; -[SCStorySelectionResult initWithStories:postToMyStory:postToPublicStory:customStoryExternalIds:senderDataModel:didDirectPost:shouldAutoShareSpotlightToStories:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036be65c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  uVar3 = 0;
  func_0x000101345fdc(0);
  func_0x000107c5fc54(param_3,uVar3);
  func_0x000107c5fc54(param_6,PTR___sSSN_11034da80);
  *(undefined8 *)(param_1 + _DAT_112f86e78) = param_3;
  *(undefined1 *)(param_1 + _DAT_112f86e80) = param_4;
  *(undefined1 *)(param_1 + _DAT_112f86e88) = param_5;
  *(undefined8 *)(param_1 + _DAT_112f86e90) = param_6;
  *(undefined8 *)(param_1 + _DAT_112f86e98) = param_7;
  *(undefined1 *)(param_1 + _DAT_112f86ea0) = param_8;
  *(undefined1 *)(param_1 + _DAT_112f86ea8) = param_9;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  func_0x000107c61174(param_7);
  func_0x000107c61154(&lStack_70,puVar1);
  return;
}



/* Entry: 1036be760; end: 1036be7bf; -[SCStorySelectionResult init] */

void FUN_1036be760(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StorySelectionServices.StorySelectionResult",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036be78c);
  (*pcVar1)();
}



/* Entry: 1036be7c0; end: 1036be807; -[SCStorySelectionResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036be7c0(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f86e78));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f86e90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f86e98));
  return;
}



/* Entry: 1036be808; end: 1036be827;  */

void FUN_1036be808(void)

{
  func_0x000107c61168(&PTR_PTR_1128e1298);
  return;
}



/* Entry: 1036be828; end: 1036be837; -[_TtC22StorySelectionServices22StorySelectionServices storySelectionProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036be828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f86ed8));
  return;
}



/* Entry: 1036be838; end: 1036be883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036be838(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f86ed8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036be884; end: 1036be8db; -[_TtC22StorySelectionServices22StorySelectionServices initWithStorySelectionProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036be884(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112f86ed8) = param_3;
  lVar2 = param_1;
  func_0x0001003541b4();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1036be8dc; end: 1036be937; -[_TtC22StorySelectionServices22StorySelectionServices init] */

void FUN_1036be8dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StorySelectionServices.StorySelectionServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036be908);
  (*pcVar1)();
}



/* Entry: 1036be938; end: 1036be947; -[_TtC22StorySelectionServices22StorySelectionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036be938(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f86ed8));
  return;
}



/* Entry: 1036be948; end: 1036be993;  */

void FUN_1036be948(undefined8 param_1)

{
  func_0x0001000285a8(0x112f86040,&UNK_10dbf9bb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1036be994,param_1);
  return;
}



/* Entry: 1036be994; end: 1036bea33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036be994(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  if (*(int *)(lStack_38 + _DAT_11302bb18) != 1) {
    lVar1 = *(long *)(lStack_38 + _DAT_11302bb20);
    if ((lVar1 == 0) || (func_0x000107c49804(), (int)lVar1 != 3)) {
      func_0x000107c61170(lStack_38);
      uVar2 = 0;
      goto LAB_1036bea1c;
    }
  }
  uVar2 = 0;
  FUN_1036bebb4();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(lStack_38);
LAB_1036bea1c:
  *param_1 = uVar2;
  return;
}



/* Entry: 1036bea34; end: 1036bea43;  */

undefined1  [16] FUN_1036bea34(void)

{
  return ZEXT816(0x1106803e0);
}



/* Entry: 1036bea44; end: 1036bea7f; -[_TtC35SnapEditorThumbnailPluginEntryPoint25SnapEditorThumbnailPlugin init] */

void FUN_1036bea44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036bea80; end: 1036bea9b;  */

void FUN_1036bea80(void)

{
  func_0x000107c610f8(PTR_PTR_1126ad440);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1036bea9c; end: 1036beb63; -[_TtC35SnapEditorThumbnailPluginEntryPoint25SnapEditorThumbnailPlugin populateDependencies:] */

void FUN_1036bea9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_40 = FUN_1036bea80;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_101016bdc;
  puStack_48 = &UNK_110680498;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61174(param_3);
  func_0x000107c46b38(puVar1,param_2,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(uStack_38);
  func_0x000107c59d00(param_3,param_2,puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1036beb64; end: 1036beb97;  */

void FUN_1036beb64(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036beb98; end: 1036bebb3;  */

void FUN_1036beb98(long param_1,long param_2)

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



/* Entry: 1036bebb4; end: 1036bebd3;  */

void FUN_1036bebb4(void)

{
  func_0x000107c61168(&PTR_PTR_1128e1448);
  return;
}



/* Entry: 1036bebd4; end: 1036bebdb;  */

void FUN_1036bebd4(long param_1,long param_2)

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



/* Entry: 1036bebdc; end: 1036beca7;  */

void FUN_1036bebdc(undefined1 *param_1,ulong *param_2,long param_3,ulong param_4)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_2;
  func_0x000107c61434(uVar3);
  func_0x000100029284();
  func_0x000107c6142c(uVar3);
  if ((param_4 & 1) == 0) {
    uVar1 = 1;
  }
  else {
    uVar3 = *param_2;
    func_0x000107c61558();
    uVar2 = *param_2;
    if ((uVar3 & 1) == 0) {
      FUN_1036bef8c();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(uVar2 + 0x30) + param_3 * 0x10 + 8));
    func_0x0001036bf36c(param_3,uVar2);
    uVar1 = 0;
    *param_2 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1036beca8; end: 1036beccb;  */

void FUN_1036beca8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036beccc; end: 1036bee0f;  */

void FUN_1036beccc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c6157c(uVar1);
  func_0x000100075034(FUN_1036bf51c,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 1036bee10; end: 1036bee2f;  */

void FUN_1036bee10(void)

{
  func_0x000107c61168(&PTR_PTR_112f86f70);
  return;
}



/* Entry: 1036bee30; end: 1036bee57;  */

void FUN_1036bee30(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106805a8;
  if (lRam0000000112f86fd0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f86fd0 = param_1;
  }
  return;
}



/* Entry: 1036bee58; end: 1036bee6f;  */

void FUN_1036bee58(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1036bebdc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1036bee70; end: 1036bef8b;  */

void FUN_1036bee70(ulong param_1,ulong param_2,uint param_3)

{
  long lVar1;
  ulong *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar4 = param_1;
  uVar5 = param_2;
  func_0x000100029284();
  lVar6 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar5 & 1;
  lVar1 = lVar6 + uVar7;
  if (SCARRY8(lVar6,uVar7)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1036bef20);
    (*pcVar3)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar1) {
    FUN_1036bf0e8(lVar1,param_3 & 1);
    uVar4 = param_1;
    uVar7 = param_2;
    func_0x000100029284();
    if (((uint)uVar5 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1036bef00);
      (*pcVar3)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_1036bef8c();
  }
  if ((uVar5 & 1) == 0) {
    lVar6 = *unaff_x20;
    lVar1 = lVar6 + (uVar4 >> 6) * 8;
    *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar4 & 0x3f);
    puVar2 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar4 * 0x10);
    *puVar2 = param_1;
    puVar2[1] = param_2;
    if (!SCARRY8(*(long *)(lVar6 + 0x10),1)) {
      *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1036bef8c);
    (*pcVar3)();
  }
  return;
}



/* Entry: 1036bef8c; end: 1036bf0e7;  */

void FUN_1036bef8c(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  
  func_0x0001000285a8(0x112f86fe8,&UNK_10dbfb120);
  lVar11 = *unaff_x20;
  lVar6 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar7 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar6 != lVar11 || lVar1 + uVar7 * 8 <= lVar6 + 0x40U) {
      func_0x000107c610b8(lVar6 + 0x40U,lVar1,uVar7 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(lVar11 + 0x40);
    if (uVar7 == 0) goto LAB_1036bf068;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        lVar10 = (LZCOUNT(uVar9) | lVar12 << 6) * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + lVar10);
        uVar4 = puVar2[1];
        puVar3 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        func_0x000107c61434();
        if (uVar7 != 0) break;
LAB_1036bf068:
        do {
          lVar10 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1036bf0e8);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_1036bf0c0;
          uVar7 = *(ulong *)(lVar1 + lVar10 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar12 = lVar10;
      }
    } while( true );
  }
LAB_1036bf0c0:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar6;
  return;
}



/* Entry: 1036bf0e8; end: 1036bf51b;  */

void FUN_1036bf0e8(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  undefined1 auStack_a8 [72];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112f86fe8;
  func_0x0001000285a8(0x112f86fe8,&UNK_10dbfb120);
  lVar7 = lVar15;
  func_0x000107c60490(lVar15,lVar1,param_2,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_1036bf338:
    func_0x000107c61574(lVar15);
    *unaff_x20 = lVar7;
    return;
  }
  puVar17 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar16 = uVar16 & *puVar17;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar18 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1036bf368);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
            if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
              *puVar17 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar17,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar15 + 0x10) = 0;
          }
          goto LAB_1036bf338;
        }
        uVar16 = puVar17[lVar18];
        lVar10 = lVar10 + 1;
      } while (uVar16 == 0);
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar18 = lVar10;
    }
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + (LZCOUNT(uVar9) | lVar18 << 6) * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1036bf36c);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar18;
  } while( true );
}



/* Entry: 1036bf51c; end: 1036bf57f;  */

void FUN_1036bf51c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *param_1;
  func_0x000107c61558(uVar3);
  uVar4 = *param_1;
  FUN_1036bee70(uVar1,uVar2,uVar3);
  *param_1 = uVar4;
  return;
}



/* Entry: 1036bf580; end: 1036bf5c3;  */

void FUN_1036bf580(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1036bf5c4; end: 1036bf5d3;  */

void FUN_1036bf5c4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1036bf5d4; end: 1036bf5e7;  */

void FUN_1036bf5d4(void)

{
  FUN_1036bee58();
  return;
}



/* Entry: 1036bf5e8; end: 1036bf5ef;  */

void FUN_1036bf5e8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1036bf5f0; end: 1036bf613;  */

void FUN_1036bf5f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036bf614; end: 1036bf61b;  */

void FUN_1036bf614(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1036bf61c; end: 1036bf65f;  */

void FUN_1036bf61c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uStack_30;
  ulong uStack_28;
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uStack_30 = param_1;
    uStack_28 = param_2;
    func_0x0001002a64a8(&uStack_30);
  }
  return;
}



/* Entry: 1036bf660; end: 1036bf69f; -[_TtC32SCLensPlusServicesImplementation32CaptureButtonRingOverlayProvider captureButtonRingOverlayImage] */

void FUN_1036bf660(void)

{
  if (lRam0000000112f884d8 != -1) {
    func_0x000107c61568(0x112f884d8,FUN_1036e328c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380bab8);
  return;
}



/* Entry: 1036bf6a0; end: 1036bf6db; -[_TtC32SCLensPlusServicesImplementation32CaptureButtonRingOverlayProvider init] */

void FUN_1036bf6a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}


