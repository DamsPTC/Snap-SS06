/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1013fd818; end: 1013fd85f;  */

void FUN_1013fd818(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001013fcd9c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1013fd860; end: 1013fd87f;  */

void FUN_1013fd860(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1013fd880; end: 1013fd89f;  */

/* WARNING: Possible PIC construction at 0x0001013fc1c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc2b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc30c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc3a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc40c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc4b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc4d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc58c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc5b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc5d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc66c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013fc660) */
/* WARNING: Removing unreachable block (ram,0x0001013fc628) */
/* WARNING: Removing unreachable block (ram,0x0001013fc608) */
/* WARNING: Removing unreachable block (ram,0x0001013fc5dc) */
/* WARNING: Removing unreachable block (ram,0x0001013fc5b4) */
/* WARNING: Removing unreachable block (ram,0x0001013fc590) */
/* WARNING: Removing unreachable block (ram,0x0001013fc4d8) */
/* WARNING: Removing unreachable block (ram,0x0001013fc4b8) */
/* WARNING: Removing unreachable block (ram,0x0001013fc48c) */
/* WARNING: Removing unreachable block (ram,0x0001013fc45c) */
/* WARNING: Removing unreachable block (ram,0x0001013fc410) */
/* WARNING: Removing unreachable block (ram,0x0001013fc3a8) */
/* WARNING: Removing unreachable block (ram,0x0001013fc3bc) */
/* WARNING: Removing unreachable block (ram,0x0001013fc364) */
/* WARNING: Removing unreachable block (ram,0x0001013fc310) */
/* WARNING: Removing unreachable block (ram,0x0001013fc2bc) */
/* WARNING: Removing unreachable block (ram,0x0001013fc268) */
/* WARNING: Removing unreachable block (ram,0x0001013fc1c4) */
/* WARNING: Removing unreachable block (ram,0x0001013fc670) */
/* WARNING: Removing unreachable block (ram,0x0001013fc680) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fd880(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112d7c738);
    *(long *)(lVar2 + _DAT_112d7c738) = param_1;
    func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1013fd8a0; end: 1013fd9d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fd8a0(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112d7c720;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d7c738) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7c740) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7c748) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7c750) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7c758) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7c760) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d7c768) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d7c770) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d7c778);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d7c780);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d7c788);
  *puVar2 = 0;
  puVar2[1] = 0xf000000000000000;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d7c790);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d7c798);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d7c7a0);
  *puVar2 = 0;
  puVar2[1] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "COSServicesImpl/COSPasskeyEnrollmentView.swift",0x2e,2,0x125,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1013fd9d4);
  (*pcVar3)();
}



/* Entry: 1013fd9d4; end: 1013fdb23;  */

/* WARNING: Possible PIC construction at 0x0001013fdadc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fdaf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013fdae0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fd9d4(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7c758);
  if (lVar3 != 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112d7c718);
    func_0x000107c615f0(lVar3);
    lVar1 = lVar4;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c61170();
      if (*(long *)(unaff_x20 + _DAT_112d7c740) != 0) {
        func_0x000107c5a378();
      }
      func_0x000107c4ffe8();
      func_0x000107c61180();
      if (lVar4 != 0) {
        puVar2 = &UNK_1103b27e8;
        func_0x000107c613fc(&UNK_1103b27e8,0x18,7);
        *(long *)(puVar2 + 0x10) = lVar3;
        uStack_40 = 0x1013fdc6c;
        puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_58 = 0x42000000;
        puStack_50 = &UNK_1000b0c7c;
        puStack_48 = &UNK_1103b2800;
        puStack_38 = puVar2;
        func_0x000107c60bc4(&puStack_60);
        puVar2 = puStack_38;
        func_0x000107c615f0(lVar3);
        func_0x000107c615f0(lVar4);
        func_0x000107c61574(puVar2);
        func_0x000107c5e2a4(lVar4);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
    return;
  }
  return;
}



/* Entry: 1013fdb24; end: 1013fdb57;  */

void FUN_1013fdb24(long *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c30ef0();
  func_0x000107c4e5ec(uVar1);
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b97f468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 1013fdb58; end: 1013fdc6f;  */

void FUN_1013fdb58(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001013fcd9c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1013fdc70; end: 1013fdf13;  */

undefined * FUN_1013fdc70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uStack_a8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  uStack_80 = 0x20;
  uStack_78 = 0xe100000000000000;
  uStack_90 = 0;
  uStack_88 = 0xe000000000000000;
  puStack_70 = param_1;
  puStack_68 = param_2;
  FUN_100e8b654();
  puVar4 = PTR___sSSN_11034da80;
  puVar6 = &uStack_80;
  puVar12 = &uStack_90;
  func_0x000107c601fc(puVar6,puVar12,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                      PTR___sSSN_11034da80,param_1,param_1,param_1);
  puVar7 = puVar6;
  puVar13 = puVar12;
  FUN_1013fe034();
  if ((ulong)puVar7 >> 0x3e == 0) {
    puVar15 = *(undefined8 **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar15 = (undefined8 *)((ulong)puVar7 & 0xffffffffffffff8);
    if ((undefined8 *)0x7fffffffffffffff < puVar7) {
      puVar15 = puVar7;
    }
    func_0x000107c60480();
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar3;
  if (puVar15 != (undefined8 *)0x0) {
    uStack_a8 = (ulong)puVar7 & 0xffffffffffffff8;
    puVar16 = (undefined8 *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar7 & 0xc000000000000001) == 0) {
          if (*(undefined8 **)(uStack_a8 + 0x10) <= puVar16) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1013fdeb8);
            (*pcVar5)();
          }
          puVar8 = (undefined8 *)puVar7[(long)puVar16 + 4];
          func_0x000107c61174();
        }
        else {
          puVar8 = puVar16;
          puVar13 = puVar7;
          FUN_1013e42f0();
        }
        puVar1 = (undefined8 *)((long)puVar16 + 1);
        if (SCARRY8((long)puVar16,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1013fdeb4);
          (*pcVar5)();
        }
        puVar9 = puVar8;
        func_0x000107c40884();
        func_0x000107c61180();
        puVar10 = puVar9;
        func_0x000107c5faec();
        func_0x000107c61170(puVar9);
        uStack_80 = 0x20;
        uStack_78 = 0xe100000000000000;
        uStack_90 = 0;
        uStack_88 = 0xe000000000000000;
        puVar9 = &uStack_80;
        puVar14 = &uStack_90;
        puStack_70 = puVar10;
        puStack_68 = puVar13;
        func_0x000107c601fc(puVar9,puVar14,0,0,0,1,puVar4,puVar4,puVar4,param_1,param_1,param_1);
        func_0x000107c6142c(puVar13);
        puVar10 = puVar6;
        puVar13 = puVar12;
        func_0x000107c5fbb4(puVar6,puVar12,puVar9,puVar14);
        func_0x000107c6142c(puVar14);
        if (((ulong)puVar10 & 1) != 0) break;
        func_0x000107c61170(puVar8);
        puVar16 = (undefined8 *)((long)puVar16 + 1);
        if (puVar1 == puVar15) goto LAB_1013fdee0;
      }
      puVar11 = puVar3;
      func_0x000107c61558();
      if (((ulong)puVar11 & 1) == 0) {
        puVar13 = (undefined8 *)(*(long *)(puVar3 + 0x10) + 1);
        func_0x0001013fe8e0(0,puVar13,1);
      }
      uVar2 = *(ulong *)(puVar3 + 0x10);
      puVar16 = (undefined8 *)(uVar2 + 1);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar2) {
        puVar13 = puVar16;
        func_0x0001013fe8e0(1 < *(ulong *)(puVar3 + 0x18),puVar16,1);
      }
      *(undefined8 **)(puVar3 + 0x10) = puVar16;
      *(undefined8 **)(puVar3 + uVar2 * 8 + 0x20) = puVar8;
      puVar16 = puVar1;
    } while (puVar1 != puVar15);
  }
LAB_1013fdee0:
  func_0x000107c6142c(puVar12);
  func_0x000107c6142c(puVar7);
  return puVar3;
}



/* Entry: 1013fdf14; end: 1013fdfab; -[_TtC15COSServicesImpl17COSPhoneFormatter getCountryCodesFromSearchWithQueryString:] */

void FUN_1013fdf14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1013fdc70(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  uVar1 = 0;
  FUN_1013fea30(0,0x112d7b968,&PTR_PTR_1126a6cd8);
  uVar2 = param_3;
  func_0x000107c5fc48(param_3,uVar1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013fdfac; end: 1013fe033; -[_TtC15COSServicesImpl17COSPhoneFormatter isValidClientPhoneNumberFormatWithNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1013fdfac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001000d224c(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4a6b8(uStack_38,param_2,param_3);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1013fe034; end: 1013fe2c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1013fe034(void)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_68;
  
  func_0x0001000d224c(&puStack_68);
  puVar12 = puStack_68;
  func_0x000107c441dc();
  func_0x000107c61180();
  func_0x000107c61170(puStack_68);
  puVar3 = (undefined *)0x0;
  FUN_1013fea30(0,0x112d7b970,&PTR_PTR_1126af250);
  puVar4 = puVar12;
  func_0x000107c5fc54(puVar12,puVar3);
  func_0x000107c61170(puVar12);
  if ((ulong)puVar4 >> 0x3e == 0) {
    puVar12 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar12 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      puVar12 = puVar4;
    }
    func_0x000107c60480();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
  if (puVar12 != (undefined *)0x0) {
    if ((long)puVar12 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013fe2c8);
      (*pcVar2)();
    }
    puVar13 = (undefined *)0x0;
    do {
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        puVar5 = *(undefined **)(puVar4 + (long)puVar13 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar5 = puVar13;
        puVar3 = puVar4;
        func_0x0001013e4120(puVar13,puVar4);
      }
      puVar9 = puVar5;
      func_0x000107c40884();
      func_0x000107c61180();
      puVar7 = puVar3;
      if (puVar9 == (undefined *)0x0) {
        func_0x000107c5faec();
        puVar7 = puVar3;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar3);
      }
      puVar6 = puVar5;
      func_0x000107c4088c();
      func_0x000107c61180();
      puVar8 = puVar7;
      if (puVar6 == (undefined *)0x0) {
        func_0x000107c5faec();
        puVar8 = puVar7;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar7);
      }
      puVar7 = puVar5;
      func_0x000107c40868();
      func_0x000107c61180();
      puVar3 = puVar8;
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c5faec();
        puVar3 = puVar8;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar8);
      }
      puVar8 = PTR_PTR_1126a6cd8;
      func_0x000107c610f8();
      func_0x000107c4621c();
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar7);
      puVar9 = puVar10;
      func_0x000107c61550();
      if ((((int)puVar9 == 0) || ((long)puVar10 < 0)) ||
         (puVar9 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar10 >> 0x3e == 0) {
          puVar3 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar3 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar10) {
            puVar3 = puVar10;
          }
          func_0x000107c60480();
        }
        puVar3 = puVar3 + 1;
        puVar9 = (undefined *)0x0;
        func_0x0001013e3d08(0,puVar3,1,puVar10);
      }
      uVar11 = (ulong)puVar9 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar11 + 0x10);
      puVar7 = (undefined *)(uVar1 + 1);
      puVar10 = puVar9;
      if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar1) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
        puVar3 = puVar7;
        func_0x0001013e3d08(puVar10,puVar7,1,puVar9);
        uVar11 = (ulong)puVar10 & 0xffffffffffffff8;
      }
      puVar13 = puVar13 + 1;
      *(undefined **)(uVar11 + 0x10) = puVar7;
      *(undefined **)(uVar11 + uVar1 * 8 + 0x20) = puVar8;
      func_0x000107c61170(puVar5);
    } while (puVar12 != puVar13);
  }
  func_0x000107c6142c(puVar4);
  return puVar10;
}



/* Entry: 1013fe2c8; end: 1013fe32b; -[_TtC15COSServicesImpl17COSPhoneFormatter getCountryCodes] */

void FUN_1013fe2c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1013fe034();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  FUN_1013fea30(0,0x112d7b968,&PTR_PTR_1126a6cd8);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1013fe32c; end: 1013fe3ff; -[_TtC15COSServicesImpl17COSPhoneFormatter formatAsYouTypeWithNumber:countryCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fe32c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x0001000d224c(&lStack_48);
  lVar1 = lStack_48;
  func_0x000107c43864();
  func_0x000107c61180();
  func_0x000107c61170(lStack_48);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  if (lVar1 == 0) {
    lVar1 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1013fe400; end: 1013fe4af; -[_TtC15COSServicesImpl17COSPhoneFormatter getFormattedFullCountryNameWithFlagForRegionWithCountryCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fe400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001000d224c(&lStack_38);
  lVar1 = lStack_38;
  func_0x000107c44090();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  func_0x000107c61170(param_3);
  if (lVar1 == 0) {
    lVar1 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1013fe4b0; end: 1013fe53f; -[_TtC15COSServicesImpl17COSPhoneFormatter getCurrentOrUSDefaultCountryCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fe4b0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&lStack_38);
  lVar1 = lStack_38;
  func_0x000107c43ff0();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  if (lVar1 == 0) {
    lVar1 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1013fe540; end: 1013fe643; -[_TtC15COSServicesImpl17COSPhoneFormatter getCountryCodeAbbreviationWithCountryCodeNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fe540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_48;
  
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  func_0x0001000d224c(&lStack_48);
  uVar2 = param_2;
  func_0x000107c5fadc(param_3,param_2);
  lVar1 = lStack_48;
  func_0x000107c43fc8();
  func_0x000107c61180();
  func_0x000107c61170(lStack_48);
  func_0x000107c61170(param_3);
  if (lVar1 == 0) {
    func_0x000107c61170(param_1);
    func_0x000107c6142c(param_2);
    lVar3 = 0;
    uVar2 = 0xe000000000000000;
  }
  else {
    lVar3 = lVar1;
    func_0x000107c5faec(lVar1);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(param_2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c5fadc(lVar3,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1013fe644; end: 1013fe6f3; -[_TtC15COSServicesImpl17COSPhoneFormatter getFullCountryNameFromCountryCodeAbbreviationWithCountryCodeAbbrevation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fe644(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001000d224c(&lStack_38);
  lVar1 = lStack_38;
  func_0x000107c440a0();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  func_0x000107c61170(param_3);
  if (lVar1 == 0) {
    lVar1 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1013fe6f4; end: 1013fe7a3; -[_TtC15COSServicesImpl17COSPhoneFormatter getCountryCodeNumberWithCountryCodeAbbrevation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fe6f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001000d224c(&lStack_38);
  lVar1 = lStack_38;
  func_0x000107c43fcc();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  func_0x000107c61170(param_3);
  if (lVar1 == 0) {
    lVar1 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1013fe7a4; end: 1013fe853; -[_TtC15COSServicesImpl17COSPhoneFormatter formatAsYouTypeCountryCodeWithCountryCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fe7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001000d224c(&lStack_38);
  lVar1 = lStack_38;
  func_0x000107c43860();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  func_0x000107c61170(param_3);
  if (lVar1 == 0) {
    lVar1 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1013fe854; end: 1013fe8af; -[_TtC15COSServicesImpl17COSPhoneFormatter init] */

void FUN_1013fe854(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSPhoneFormatter",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013fe880);
  (*pcVar1)();
}



/* Entry: 1013fe8b0; end: 1013fe8bf; -[_TtC15COSServicesImpl17COSPhoneFormatter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fe8b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d7c808));
  return;
}



/* Entry: 1013fe8c0; end: 1013fe8fb;  */

void FUN_1013fe8c0(void)

{
  func_0x000107c61168(&PTR_PTR_1127d2728);
  return;
}



/* Entry: 1013fe8fc; end: 1013fea2f;  */

undefined * FUN_1013fe8fc(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013fea30);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    func_0x00010140e218();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1013fea30(0,0x112d7b968,&PTR_PTR_1126a6cd8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1013fea30; end: 1013fea6f;  */

void FUN_1013fea30(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1013fea70; end: 1013febd3;  */

void FUN_1013fea70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_1103b29c8;
  func_0x000107c613fc(&UNK_1103b29c8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  uStack_50 = 0x1013ff2b8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1103b29e0;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x0001000d76cc("COS Answer success",ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1013febd4; end: 1013fecd3;  */

void FUN_1013febd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  puVar1 = &UNK_1103b28b0;
  func_0x000107c613fc(&UNK_1103b28b0,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  uStack_60 = 0x1013ff254;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1103b28c8;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c6157c(param_2);
  func_0x000107c614b0(param_1);
  func_0x000107c615f0(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar1);
  func_0x0001000d76cc("COS Answer failure",ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1013fecd4; end: 1013fee37;  */

void FUN_1013fecd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103b2900;
  func_0x000107c613fc(&UNK_1103b2900,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c614b0(param_2);
  (*param_5)(0x1013ff264,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1013fee38; end: 1013fee9b;  */

void FUN_1013fee38(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103b2888;
  func_0x000107c613fc(&UNK_1103b2888,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  func_0x000107c615f0(param_2);
  (*param_3)(0x1013ff244,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1013fee9c; end: 1013ff197;  */

void FUN_1013fee9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  puVar2 = PTR_PTR_1126aff58;
  func_0x000107c610f8();
  func_0x000107c48080();
  puVar3 = puVar2;
  func_0x000105219810();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    puVar4 = &UNK_1103b2928;
    func_0x000107c613fc(&UNK_1103b2928,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar2;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    *(undefined8 *)(puVar4 + 0x20) = param_3;
    pcStack_50 = FUN_1013ff2a4;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_100de205c;
    puStack_58 = &UNK_1103b2940;
    ppuVar5 = &puStack_70;
    puStack_48 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = PTR_PTR_1126aed70;
    func_0x000107c61168();
    func_0x000107c615f0(param_2);
    func_0x000107c61174(puVar2);
    func_0x000107c614b0(param_3);
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar3);
    func_0x000107c61574(puStack_48);
    func_0x000107c614cc(param_3,auStack_78,auStack_90);
    lVar6 = lStack_88;
    uVar8 = uStack_80;
    func_0x000107c60640(lStack_88,uStack_80);
    lVar7 = lVar6;
    FUN_100de9c28();
    func_0x000107c613fc();
    *(undefined8 *)(lVar7 + 0x18) = 3;
    *(undefined8 *)(lVar7 + 0x10) = 1;
    *(undefined **)(lVar7 + 0x20) = puVar4;
    puVar3 = PTR_PTR_1126aed78;
    func_0x000107c610f8(PTR_PTR_1126aed78);
    func_0x000107c61174(puVar4);
    func_0x000107c5fadc(lVar6,uVar8);
    func_0x000107c6142c(uVar8);
    uVar8 = 0;
    FUN_100dfe1a0(0);
    lVar9 = lVar7;
    func_0x000107c5fc48(lVar7,uVar8);
    func_0x000107c61574(lVar7);
    func_0x000107c4656c(puVar3);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar9);
    func_0x000107c59bc8(puVar3);
    func_0x000107c3e2c0(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013ff0d0);
  (*pcVar1)();
}



/* Entry: 1013ff198; end: 1013ff1d7;  */

void FUN_1013ff198(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    func_0x000107c5ed2c(param_2);
    func_0x000107c3ab54(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1013ff1d8; end: 1013ff21b;  */

void FUN_1013ff1d8(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013ff21c; end: 1013ff26f;  */

void FUN_1013ff21c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  puVar3 = &UNK_1103b2888;
  func_0x000107c613fc(&UNK_1103b2888,0x18,7,*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  func_0x000107c615f0(uVar2);
  (*pcVar1)(0x1013ff244,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 1013ff270; end: 1013ff2a3;  */

void FUN_1013ff270(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c614ac(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1013ff2a4; end: 1013ff2fb;  */

void FUN_1013ff2a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar4 = &puStack_70;
  puVar3 = &UNK_1103b2978;
  func_0x000107c613fc(&UNK_1103b2978,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar5;
  uStack_50 = 0x1013ff2b0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000b0c7c;
  puStack_58 = &UNK_1103b2990;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c615f0(uVar2);
  func_0x000107c614b0(uVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c41864(uVar1);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 1013ff2fc; end: 101400297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_1013ff2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined4 param_9,
             undefined4 param_10,undefined8 param_11,long param_12,undefined8 param_13,long param_14
             ,undefined8 param_15,undefined8 param_16,undefined8 param_17,undefined8 param_18,
             undefined8 param_19,undefined8 param_20,undefined8 param_21,undefined8 param_22,
             undefined8 param_23,undefined8 param_24)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long **pplVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined8 *unaff_x20;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [24];
  long *plStack_a8;
  long *plStack_a0;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  uVar25 = *unaff_x20;
  puVar7 = PTR_PTR_1126a6d20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar8 = puVar7;
  FUN_101400b9c();
  puVar9 = puVar8;
  func_0x000107c610f8();
  *(undefined **)(puVar9 + _DAT_112d7c9f8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(puVar9 + _DAT_112d7c9e8) = param_1;
  *(undefined **)(puVar9 + _DAT_112d7c9f0) = puVar7;
  puVar21 = PTR_s_initWithNibName_bundle__1125e9850;
  puStack_88 = puVar9;
  puStack_80 = puVar8;
  func_0x000107c61174();
  func_0x000107c615f0(param_1);
  ppuVar10 = &puStack_88;
  func_0x000107c61154(ppuVar10,puVar21,0,0);
  lVar11 = 0;
  func_0x0001013f2540();
  func_0x000107c613fc();
  *(undefined8 *)(lVar11 + 0x18) = 0;
  *(undefined8 *)(lVar11 + 0x10) = 0;
  *(undefined8 *)(lVar11 + 0x28) = 0;
  *(undefined8 *)(lVar11 + 0x20) = 0;
  *(undefined8 *)(lVar11 + 0x38) = 0;
  *(undefined8 *)(lVar11 + 0x30) = 0;
  *(undefined8 *)(lVar11 + 0x48) = 0;
  *(undefined8 *)(lVar11 + 0x40) = 0;
  uVar29 = unaff_x20[0xc];
  uVar20 = unaff_x20[0xf];
  uVar3 = unaff_x20[0x10];
  uVar28 = unaff_x20[0x11];
  lVar12 = 0;
  func_0x000101402bfc();
  uVar26 = unaff_x20[0xe];
  uVar31 = unaff_x20[0xe];
  uVar30 = unaff_x20[0xd];
  lVar22 = lVar12;
  func_0x000107c610f8();
  lVar23 = _DAT_112d7ca68;
  func_0x000107c61614(lVar22 + _DAT_112d7ca68,0);
  lVar1 = lVar22 + _DAT_112d7ca90;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined1 *)(lVar22 + _DAT_112d7caa0) = 0;
  *(undefined8 *)(lVar22 + _DAT_112d7caa8) = 0;
  func_0x000107c61604(lVar22 + lVar23,ppuVar10);
  *(undefined8 *)(lVar22 + _DAT_112d7ca70) = uVar29;
  puVar4 = (undefined8 *)(lVar22 + _DAT_112d7ca78);
  puVar4[1] = uVar31;
  *puVar4 = uVar30;
  *(undefined8 *)(lVar22 + _DAT_112d7ca80) = uVar20;
  *(undefined8 *)(lVar22 + _DAT_112d7ca88) = uVar3;
  *(undefined ***)(lVar1 + 8) = &PTR_DAT_1103b1530;
  func_0x000107c61604(lVar1,lVar11);
  *(undefined8 *)(lVar22 + _DAT_112d7ca98) = uVar28;
  puVar21 = PTR_s_init_1125d9248;
  lStack_98 = lVar22;
  lStack_90 = lVar12;
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  func_0x000107c6157c(uVar26);
  func_0x000107c61174(uVar20);
  func_0x000107c61174(uVar3);
  func_0x000107c6157c(uVar28);
  plVar13 = &lStack_98;
  func_0x000107c61154(plVar13,puVar21);
  plVar14 = plVar13;
  FUN_101401088();
  plVar15 = plVar14;
  func_0x000107c610f8();
  lVar1 = _DAT_112d7ca28;
  func_0x000107c61614((long)plVar15 + _DAT_112d7ca28,0);
  func_0x000107c61604((long)plVar15 + lVar1,param_15);
  puVar21 = PTR_s_init_1125d9248;
  *(undefined8 *)((long)plVar15 + _DAT_112d7ca30) = param_16;
  *(undefined8 *)((long)plVar15 + _DAT_112d7ca38) = param_17;
  ((undefined8 *)((long)plVar15 + _DAT_112d7ca38))[1] = param_18;
  plStack_a8 = plVar15;
  plStack_a0 = plVar14;
  func_0x000107c615f0();
  func_0x000107c6157c(param_18);
  pplVar16 = &plStack_a8;
  func_0x000107c61154(pplVar16,puVar21);
  lVar1 = _DAT_112d7c9f8;
  func_0x000107c61428((long)ppuVar10 + _DAT_112d7c9f8,&puStack_f0,0x21,0);
  func_0x000107c6157c(lVar11);
  func_0x0001014010cc();
  uVar24 = *(ulong *)((long)ppuVar10 + lVar1);
  uVar27 = uVar24 & 0xffffffffffffff8;
  uVar2 = *(ulong *)(uVar27 + 0x10);
  if (*(ulong *)(uVar27 + 0x18) >> 1 <= uVar2) {
    uVar24 = (ulong)(1 < *(ulong *)(uVar27 + 0x18));
    FUN_1013e3bac(uVar24,uVar2 + 1,1);
    uVar27 = uVar24 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar27 + 0x10) = uVar2 + 1;
  *(long *)(uVar27 + uVar2 * 8 + 0x20) = lVar11;
  *(ulong *)((long)ppuVar10 + lVar1) = uVar24;
  func_0x000107c61174();
  func_0x0001014010cc();
  uVar24 = *(ulong *)((long)ppuVar10 + lVar1);
  uVar27 = uVar24 & 0xffffffffffffff8;
  uVar2 = *(ulong *)(uVar27 + 0x10);
  if (*(ulong *)(uVar27 + 0x18) >> 1 <= uVar2) {
    uVar24 = (ulong)(1 < *(ulong *)(uVar27 + 0x18));
    FUN_1013e3bac(uVar24,uVar2 + 1,1);
    uVar27 = uVar24 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar27 + 0x10) = uVar2 + 1;
  *(long ***)(uVar27 + uVar2 * 8 + 0x20) = pplVar16;
  *(ulong *)((long)ppuVar10 + lVar1) = uVar24;
  func_0x000107c61174();
  func_0x0001014010cc();
  uVar24 = *(ulong *)((long)ppuVar10 + lVar1);
  uVar27 = uVar24 & 0xffffffffffffff8;
  uVar2 = *(ulong *)(uVar27 + 0x10);
  if (*(ulong *)(uVar27 + 0x18) >> 1 <= uVar2) {
    uVar24 = (ulong)(1 < *(ulong *)(uVar27 + 0x18));
    FUN_1013e3bac(uVar24,uVar2 + 1,1);
    uVar27 = uVar24 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar27 + 0x10) = uVar2 + 1;
  *(long **)(uVar27 + uVar2 * 8 + 0x20) = plVar13;
  *(ulong *)((long)ppuVar10 + lVar1) = uVar24;
  func_0x000107c614a8(&puStack_f0);
  func_0x000107c5ee20(param_2,param_3);
  func_0x000107c532e8(puVar7);
  func_0x000107c61170(param_2);
  func_0x0001000d224c(&puStack_f0);
  puVar21 = puStack_f0;
  uVar20 = param_1;
  FUN_10140d588(param_1);
  func_0x000107c61574(puVar21);
  func_0x000107c5a6c8(puVar7);
  func_0x000107c615e8(uVar20);
  uVar20 = 0;
  if (unaff_x20[3] != 0) {
    func_0x0001000d224c(&puStack_f0);
    puVar21 = puStack_f0;
    func_0x000107c6157c(lVar11);
    uVar20 = param_1;
    FUN_10140c948(param_1,lVar11,puVar21);
    func_0x000107c61574(puVar21);
    func_0x000107c61574(lVar11);
  }
  func_0x000107c570f4(puVar7);
  func_0x000107c615e8(uVar20);
  func_0x0001000d224c(&puStack_f0);
  puVar21 = puStack_f0;
  func_0x000107c53e14(puVar7);
  func_0x000107c615e8(puVar21);
  func_0x0001000d224c(&puStack_f0);
  puVar21 = puStack_f0;
  func_0x000107c52834(puVar7);
  func_0x000107c615e8(puVar21);
  puVar21 = (undefined *)0x0;
  if (unaff_x20[7] != 0) {
    func_0x0001000d224c(&puStack_f0);
    puVar21 = puStack_f0;
  }
  func_0x000107c5735c(puVar7);
  func_0x000107c615e8(puVar21);
  func_0x000107c5ee20(param_4,param_5);
  func_0x000107c52a38(puVar7);
  func_0x000107c61170(param_4);
  func_0x000107c61428(0x112d7cf28,auStack_c0,0,0);
  uVar3 = uRam0000000112d7cf30;
  uVar20 = uRam0000000112d7cf28;
  func_0x000107c61434(uRam0000000112d7cf30);
  func_0x000107c5fadc(uVar20,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c55940(puVar7);
  func_0x000107c61170(uVar20);
  uVar20 = 0;
  if (unaff_x20[4] != 0) {
    func_0x0001000d224c(&puStack_f0);
    puVar21 = puStack_f0;
    func_0x000107c6157c(lVar11);
    uVar20 = param_1;
    func_0x00010140cbb0(param_1,lVar11,puVar21);
    func_0x000107c61574(puVar21);
    func_0x000107c61574(lVar11);
  }
  func_0x000107c5a0f4(puVar7);
  func_0x000107c615e8(uVar20);
  uVar20 = 0;
  if (unaff_x20[5] != 0) {
    func_0x0001000d224c(&puStack_f0);
    puVar21 = puStack_f0;
    func_0x000107c6157c(lVar11);
    uVar20 = param_1;
    func_0x00010140ce18(param_1,lVar11,puVar21);
    func_0x000107c61574(puVar21);
    func_0x000107c61574(lVar11);
  }
  func_0x000107c58dc8(puVar7);
  func_0x000107c615e8(uVar20);
  puVar21 = PTR___NSConcreteStackBlock_11034bd00;
  if (unaff_x20[6] == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001000d224c(&lStack_108);
    puVar8 = &UNK_1103b2c30;
    func_0x000107c613fc(&UNK_1103b2c30,0x18,7);
    *(undefined8 *)(puVar8 + 0x10) = param_16;
    puVar9 = &UNK_1103b2c58;
    func_0x000107c613fc(&UNK_1103b2c58,0x18,7);
    *(undefined8 *)(puVar9 + 0x10) = param_16;
    *(undefined ***)(lStack_108 + 0x28) = &PTR_DAT_1103b1530;
    func_0x000107c61604(lStack_108 + 0x20,lVar11);
    puVar17 = &UNK_1103b2c80;
    func_0x000107c613fc(&UNK_1103b2c80,0x38,7);
    *(long *)(puVar17 + 0x10) = lStack_108;
    *(undefined8 *)(puVar17 + 0x18) = 0x1014011dc;
    *(undefined **)(puVar17 + 0x20) = puVar8;
    *(undefined8 *)(puVar17 + 0x28) = 0x1014011f4;
    *(undefined **)(puVar17 + 0x30) = puVar9;
    pcStack_d0 = (code *)0x10140120c;
    puStack_f0 = puVar21;
    uStack_e8 = 0x42000000;
    pcStack_e0 = (code *)0x100f11710;
    puStack_d8 = &UNK_1103b2c98;
    ppuVar18 = &puStack_f0;
    puStack_c8 = puVar17;
    func_0x000107c60bc4(ppuVar18);
    puVar17 = puStack_c8;
    func_0x000107c615f4(param_16,2);
    func_0x000107c6157c(lVar11);
    func_0x000107c6157c(lStack_108);
    func_0x000107c6157c(puVar8);
    func_0x000107c6157c(puVar9);
    func_0x000107c61574(puVar17);
    pcStack_d0 = (code *)0x10140121c;
    puStack_c8 = (undefined *)lStack_108;
    puStack_f0 = puVar21;
    uStack_e8 = 0x42000000;
    pcStack_e0 = FUN_100f10508;
    puStack_d8 = &UNK_1103b2cc0;
    ppuVar19 = &puStack_f0;
    func_0x000107c60bc4(ppuVar19);
    puVar21 = puStack_c8;
    func_0x000107c6157c(lStack_108);
    func_0x000107c61574(puVar21);
    FUN_1013fd66c(0);
    func_0x000107c614e8();
    func_0x000107c4c214(param_1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar19);
    func_0x000107c60bd0(ppuVar18);
    func_0x000107c61574(lStack_108);
    func_0x000107c61574(lVar11);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(puVar9);
  }
  func_0x000107c5725c(puVar7);
  func_0x000107c615e8(param_1);
  if (param_7 == 0) {
    param_6 = 0;
  }
  else {
    func_0x000107c5fadc(param_6);
  }
  func_0x000107c54440(puVar7);
  func_0x000107c61170(param_6);
  if (param_8 == 0) {
    func_0x000107c5734c(puVar7);
  }
  else {
    if (((undefined8 *)(param_8 + _DAT_1130937d8))[1] == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(undefined8 *)(param_8 + _DAT_1130937d8);
      func_0x000107c5fadc(uVar20);
    }
    func_0x000107c5734c(puVar7);
    func_0x000107c61170(uVar20);
    if (((undefined8 *)(param_8 + _DAT_1130937e0))[1] != 0) {
      uVar20 = *(undefined8 *)(param_8 + _DAT_1130937e0);
      func_0x000107c5fadc(uVar20);
      goto LAB_1013ffb74;
    }
  }
  uVar20 = 0;
LAB_1013ffb74:
  func_0x000107c57354(puVar7);
  func_0x000107c61170(uVar20);
  uVar20 = 0;
  if (param_12 != 0) {
    func_0x000107c5fadc(param_11,param_12);
    uVar20 = param_11;
  }
  func_0x000107c550a0(puVar7);
  func_0x000107c61170(uVar20);
  uVar20 = 0;
  if (param_14 != 0) {
    func_0x000107c5fadc(param_13,param_14);
    uVar20 = param_13;
  }
  func_0x000107c5509c(puVar7);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(unaff_x20[10] + _DAT_113083808);
  func_0x000107c5c734(uVar20);
  func_0x000107c61180();
  func_0x000107c52d78(puVar7);
  func_0x000107c615e8(uVar20);
  puVar21 = PTR_PTR_1126aead8;
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
  lVar22 = unaff_x20[0xb];
  func_0x000107c3dae4();
  func_0x000107c61180();
  lVar23 = lVar22;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar22);
  if (lVar23 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = lVar23;
    func_0x000107c4c1e0(lVar23);
    func_0x000107c61180();
    func_0x000107c615e8(lVar23);
  }
  func_0x000107c52604(puVar7);
  func_0x000107c615e8(lVar22);
  puVar8 = &UNK_1103b2a50;
  func_0x000107c613fc(&UNK_1103b2a50,0x38,7);
  *(undefined8 *)(puVar8 + 0x10) = param_19;
  *(undefined8 *)(puVar8 + 0x18) = param_20;
  *(undefined8 *)(puVar8 + 0x20) = param_21;
  *(undefined8 *)(puVar8 + 0x28) = param_22;
  *(undefined8 *)(puVar8 + 0x30) = uVar25;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_d0 = FUN_10140113c;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0x42000000;
  pcStack_e0 = (code *)0x101341328;
  puStack_d8 = &UNK_1103b2a68;
  ppuVar18 = &puStack_f0;
  puStack_c8 = puVar8;
  func_0x000107c60bc4(ppuVar18);
  puVar8 = puStack_c8;
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_22);
  func_0x000107c61574(puVar8);
  func_0x000107c56cb0(puVar7);
  func_0x000107c60bd0(ppuVar18);
  puVar8 = &UNK_1103b2aa0;
  func_0x000107c613fc(&UNK_1103b2aa0,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = param_23;
  *(undefined8 *)(puVar8 + 0x18) = param_24;
  pcStack_d0 = FUN_101401168;
  puStack_f0 = puVar5;
  uStack_e8 = 0x42000000;
  pcStack_e0 = (code *)&UNK_1000f6b44;
  puStack_d8 = &UNK_1103b2ab8;
  ppuVar18 = &puStack_f0;
  puStack_c8 = puVar8;
  func_0x000107c60bc4(ppuVar18);
  puVar8 = puStack_c8;
  func_0x000107c6157c(param_24);
  func_0x000107c61574(puVar8);
  func_0x000107c56c2c(puVar7);
  func_0x000107c60bd0(ppuVar18);
  puVar8 = &UNK_1103b2af0;
  func_0x000107c613fc(&UNK_1103b2af0,0x28,7);
  *(undefined8 *)(puVar8 + 0x10) = param_21;
  *(undefined8 *)(puVar8 + 0x18) = param_22;
  *(undefined8 *)(puVar8 + 0x20) = uVar25;
  pcStack_d0 = FUN_101401188;
  puStack_f0 = puVar5;
  uStack_e8 = 0x42000000;
  pcStack_e0 = FUN_10140b00c;
  puStack_d8 = &UNK_1103b2b08;
  ppuVar18 = &puStack_f0;
  puStack_c8 = puVar8;
  func_0x000107c60bc4(ppuVar18);
  puVar8 = puStack_c8;
  func_0x000107c6157c(param_22);
  func_0x000107c61574(puVar8);
  func_0x000107c56d44(puVar7);
  func_0x000107c60bd0(ppuVar18);
  func_0x000107c56980(puVar7);
  puVar8 = &UNK_1103b2b40;
  puVar9 = puVar8;
  func_0x000107c613fc(&UNK_1103b2b40,0x18,7);
  func_0x000107c61644(puVar9 + 0x10,lVar11);
  pcStack_d0 = FUN_101401194;
  puStack_f0 = puVar5;
  uStack_e8 = 0x42000000;
  pcStack_e0 = FUN_100f11160;
  puStack_d8 = &UNK_1103b2b58;
  ppuVar18 = &puStack_f0;
  puStack_c8 = puVar9;
  func_0x000107c60bc4(ppuVar18);
  puVar9 = puStack_c8;
  func_0x000107c6157c(lVar11);
  func_0x000107c61574(puVar9);
  func_0x000107c56e34(puVar7);
  func_0x000107c60bd0(ppuVar18);
  puVar9 = puVar8;
  func_0x000107c613fc(&UNK_1103b2b40,0x18,7);
  func_0x000107c61644(puVar9 + 0x10,lVar11);
  pcStack_d0 = (code *)0x1014011b4;
  puStack_f0 = puVar5;
  uStack_e8 = 0x42000000;
  pcStack_e0 = FUN_100f11160;
  puStack_d8 = &UNK_1103b2b80;
  ppuVar18 = &puStack_f0;
  puStack_c8 = puVar9;
  func_0x000107c60bc4(ppuVar18);
  func_0x000107c61574(puStack_c8);
  func_0x000107c56f14(puVar7);
  func_0x000107c60bd0(ppuVar18);
  puVar9 = &UNK_1103b2bb8;
  func_0x000107c613fc(&UNK_1103b2bb8,0x18,7);
  func_0x000107c61614(puVar9 + 0x10,plVar13);
  func_0x000107c613fc(&UNK_1103b2b40,0x18,7);
  func_0x000107c61644(puVar8 + 0x10,lVar11);
  func_0x000107c61574(lVar11);
  puVar17 = &UNK_1103b2be0;
  func_0x000107c613fc(&UNK_1103b2be0,0x20,7);
  *(undefined **)(puVar17 + 0x10) = puVar9;
  *(undefined **)(puVar17 + 0x18) = puVar8;
  pcStack_d0 = FUN_1014011d4;
  puStack_f0 = puVar5;
  uStack_e8 = 0x42000000;
  pcStack_e0 = (code *)&UNK_1000f6b44;
  puStack_d8 = &UNK_1103b2bf8;
  ppuVar18 = &puStack_f0;
  puStack_c8 = puVar17;
  func_0x000107c60bc4(ppuVar18);
  func_0x000107c61574(puStack_c8);
  func_0x000107c56cec(puVar7);
  func_0x000107c60bd0(ppuVar18);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c52644(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c61174(plVar13);
  uVar20 = 0x724265766974616e;
  func_0x000107c5fadc(0x724265766974616e,0xec00000065676469);
  func_0x000107c5a4a0(puVar7);
  func_0x000107c61170(plVar13);
  func_0x000107c61170(uVar20);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  uVar20 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef3d5c0);
  func_0x000107c5a4a0(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar20);
  iVar6 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar6 != 0) {
    lVar12 = 0;
    FUN_1013fa598();
    lVar22 = lVar12;
    func_0x000107c610f8();
    lVar23 = _DAT_112d7c5c8;
    func_0x000107c61614(lVar22 + _DAT_112d7c5c8,0);
    *(undefined8 *)(lVar22 + _DAT_112d7c5d0) = 0;
    *(undefined8 *)(lVar22 + _DAT_112d7c5d8) = 0;
    func_0x000107c61604(lVar22 + lVar23,ppuVar10);
    plVar14 = &lStack_100;
    lStack_100 = lVar22;
    lStack_f8 = lVar12;
    func_0x000107c61154(plVar14,PTR_s_init_1125d9248);
    func_0x000107c57254(puVar7);
    func_0x000107c61428((long)ppuVar10 + lVar1,&puStack_f0,0x21,0);
    func_0x000107c61174();
    func_0x0001014010cc();
    uVar24 = *(ulong *)((long)ppuVar10 + lVar1);
    uVar27 = uVar24 & 0xffffffffffffff8;
    uVar2 = *(ulong *)(uVar27 + 0x10);
    if (*(ulong *)(uVar27 + 0x18) >> 1 <= uVar2) {
      uVar24 = (ulong)(1 < *(ulong *)(uVar27 + 0x18));
      FUN_1013e3bac(uVar24,uVar2 + 1,1);
      uVar27 = uVar24 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar27 + 0x10) = uVar2 + 1;
    *(long **)(uVar27 + uVar2 * 8 + 0x20) = plVar14;
    *(ulong *)((long)ppuVar10 + lVar1) = uVar24;
    func_0x000107c614a8(&puStack_f0);
    func_0x000107c61170(plVar14);
  }
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar21);
  func_0x000107c61170(plVar13);
  func_0x000107c61170(pplVar16);
  func_0x000107c61574(lVar11);
  func_0x000107c61170(ppuVar10);
  return ppuVar10;
}



/* Entry: 101400298; end: 10140038b;  */

/* WARNING: Possible PIC construction at 0x000101400334: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101400338) */
/* WARNING: Removing unreachable block (ram,0x000101400310) */

void FUN_101400298(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  
  func_0x000107c610f8(PTR_PTR_1126af830);
  func_0x00010006c00c(param_1,param_2);
  uVar1 = param_1;
  FUN_10140d1f4(param_1,param_2);
  func_0x00010006c090(param_1,param_2);
  (*param_3)(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10140038c; end: 10140045b;  */

void FUN_10140038c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  if (param_1 != 0) {
    func_0x000107c49820();
  }
  FUN_101401234();
  (*param_4)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(param_1);
  return;
}



/* Entry: 10140045c; end: 101400627;  */

void FUN_10140045c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 auStack_b0 [24];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  lVar2 = param_1 + 0x10;
  func_0x000107c61618();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    puVar3 = &UNK_1103b2cf8;
    func_0x000107c613fc(&UNK_1103b2cf8,0x18,7);
    *(long *)(puVar3 + 0x10) = lVar2;
    uStack_78 = 0x101401224;
    puStack_98 = puVar1;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1103b2d10;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_70;
    func_0x000107c61174(lVar2);
    func_0x000107c61574(puVar3);
    func_0x0001000d76cc("COS Communication input complete pending submission",ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_b0,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar3 = &UNK_1103b2d48;
    func_0x000107c613fc(&UNK_1103b2d48,0x18,7);
    *(long *)(puVar3 + 0x10) = param_1;
    uStack_78 = 0x10140122c;
    puStack_98 = puVar1;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1103b2d60;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar1 = puStack_70;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar1);
    func_0x0001000d76cc("COS OTP complete pending submission",ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61428(param_2 + 0x10,&puStack_98,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1013f248c();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101400628; end: 1014006f3;  */

void FUN_101400628(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 1014006f4; end: 10140075f; -[_TtC15COSServicesImpl37COSPromiseChallengeHostViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014006f4(long param_1)

{
  code *pcVar1;
  
  *(undefined **)(param_1 + _DAT_112d7c9f8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "COSServicesImpl/COSPromiseChallengeHostContentFactory.swift",0x3b,2,0xd4,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101400760);
  (*pcVar1)();
}



/* Entry: 101400760; end: 101400afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101400760(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_loadView_112604be0);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c453e4();
  func_0x000107c5a568();
  func_0x000107c61170(puVar2);
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101400ae8);
    (*pcVar1)();
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af90();
  func_0x000107c61180();
  func_0x000107c52b50(lVar3);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126a6d18;
  func_0x000107c610f8();
  func_0x000107c49520();
  func_0x000107c61180();
  func_0x000107c5a050();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101400aec);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 9;
  *(undefined8 *)(lVar3 + 0x10) = 4;
  puVar4 = puVar2;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101400af0);
    (*pcVar1)();
  }
  lVar6 = lVar5;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  puVar7 = puVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar6);
  *(undefined **)(lVar3 + 0x20) = puVar7;
  puVar4 = puVar2;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    puVar7 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar6);
    *(undefined **)(lVar3 + 0x28) = puVar7;
    puVar4 = puVar2;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101400af8);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    puVar7 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar6);
    *(undefined **)(lVar3 + 0x30) = puVar7;
    puVar4 = puVar2;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar5 = unaff_x20;
      func_0x000107c5ce8c(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      puVar8 = puVar4;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(lVar5);
      *(undefined **)(lVar3 + 0x38) = puVar8;
      uVar9 = 0;
      func_0x000100847984(0);
      lVar5 = lVar3;
      func_0x000107c5fc48(lVar3,uVar9);
      func_0x000107c61574(lVar3);
      func_0x000107c3d048(puVar7);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(lVar5);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101400afc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101400af4);
  (*pcVar1)();
}



/* Entry: 101400afc; end: 101400b23; -[_TtC15COSServicesImpl37COSPromiseChallengeHostViewController loadView] */

void FUN_101400afc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101400760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101400b24; end: 101400b4f; -[_TtC15COSServicesImpl37COSPromiseChallengeHostViewController initWithNibName:bundle:] */

void FUN_101400b24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSPromiseChallengeHostViewController",0x35,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101400b50);
  (*pcVar1)();
}



/* Entry: 101400b50; end: 101400b53;  */

void FUN_101400b50(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101400b54; end: 101400b9b; -[_TtC15COSServicesImpl37COSPromiseChallengeHostViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101400b54(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7c9e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7c9f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d7c9f8));
  return;
}



/* Entry: 101400b9c; end: 101400bbb;  */

void FUN_101400b9c(void)

{
  func_0x000107c61168(&PTR_PTR_1127d2838);
  return;
}



/* Entry: 101400bbc; end: 101400c6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101400bbc(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x20;
  
  func_0x000107c5fadc();
  uVar1 = param_1;
  func_0x000107c31190();
  func_0x000107c61170(param_1);
  uVar2 = unaff_x20 + _DAT_112d7ca28;
  func_0x000107c61618();
  if (uVar2 != 0) {
    func_0x000107c4bd2c();
    func_0x000107c615e8();
  }
  (**(code **)(unaff_x20 + _DAT_112d7ca38))();
  if ((uVar2 & 0xff00000000) != 0x100000000) {
    if (*(long *)(unaff_x20 + _DAT_112d7ca30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0ab510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(unaff_x20 + _DAT_112d7ca30),
                 PTR_s_logOnCOSChallengeReceivedWithCha_112608750,uVar1,uVar2);
      return;
    }
  }
  return;
}



/* Entry: 101400c6c; end: 101400d83; -[_TtC15COSServicesImpl41COSPromiseChallengeNativeLoggingCallbacks onChallengeReceivedWithChallengeType:] */

void FUN_101400c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101400bbc(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101400d84; end: 101400df3; -[_TtC15COSServicesImpl41COSPromiseChallengeNativeLoggingCallbacks onChallengeAttemptedWithChallengeType:loggingData:] */

void FUN_101400d84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  func_0x000101400cc8(param_3,param_2,param_4);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101400df4; end: 101400f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101400df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  func_0x000107c5fadc();
  uVar1 = param_1;
  func_0x000107c31190();
  func_0x000107c61170(param_1);
  uVar4 = 0;
  if (param_6 != 0) {
    func_0x000107c5fadc(param_5,param_6);
    uVar4 = param_5;
  }
  uVar2 = uVar4;
  func_0x000107c3118c(uVar4);
  func_0x000107c61170(uVar4);
  uVar3 = unaff_x20 + _DAT_112d7ca28;
  func_0x000107c61618();
  if (uVar3 != 0) {
    func_0x000107c4bd34();
    func_0x000107c615e8();
  }
  (**(code **)(unaff_x20 + _DAT_112d7ca38))();
  if ((uVar3 & 0xff00000000) != 0x100000000) {
    if (*(long *)(unaff_x20 + _DAT_112d7ca30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0ab550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(unaff_x20 + _DAT_112d7ca30),
                 PTR_s_logOnCOSChallengeResultedWithCha_112608760,uVar1,param_3,param_4,uVar2,
                 param_7,uVar3);
      return;
    }
  }
  return;
}



/* Entry: 101400f18; end: 101400fdb; -[_TtC15COSServicesImpl41COSPromiseChallengeNativeLoggingCallbacks onChallengeResultWithChallengeType:grpcStatusCode:protoStatusCode:statusCode:loggingData:] */

/* WARNING: Possible PIC construction at 0x000101400fbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101400fc0) */

void FUN_101400f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_6 == 0) {
    param_6 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x000107c5faec(param_6);
  }
  func_0x000107c615f0(param_7);
  func_0x000107c61174(param_1);
  FUN_101400df4(param_3,param_2,param_4,param_5,param_6,uVar1,param_7);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101400fdc; end: 10140103b; -[_TtC15COSServicesImpl41COSPromiseChallengeNativeLoggingCallbacks init] */

void FUN_101400fdc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSPromiseChallengeNativeLoggingCallbacks",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101401008);
  (*pcVar1)();
}



/* Entry: 10140103c; end: 101401087; -[_TtC15COSServicesImpl41COSPromiseChallengeNativeLoggingCallbacks .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140103c(long param_1)

{
  FUN_1014010a8(param_1 + _DAT_112d7ca28);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7ca30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d7ca38 + 8));
  return;
}



/* Entry: 101401088; end: 1014010a7;  */

void FUN_101401088(void)

{
  func_0x000107c61168(&PTR_PTR_1127d2908);
  return;
}



/* Entry: 1014010a8; end: 10140113b;  */

undefined8 FUN_1014010a8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10140113c; end: 101401167;  */

/* WARNING: Possible PIC construction at 0x000101400334: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101400338) */
/* WARNING: Removing unreachable block (ram,0x000101400310) */

void FUN_10140113c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  func_0x000107c610f8(PTR_PTR_1126af830,param_2,pcVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x00010006c00c(param_1,param_2);
  uVar2 = param_1;
  FUN_10140d1f4(param_1,param_2);
  func_0x00010006c090(param_1,param_2);
  (*pcVar1)(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101401168; end: 101401187;  */

void FUN_101401168(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101401188; end: 101401193;  */

void FUN_101401188(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    func_0x000107c49820();
  }
  FUN_101401234();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(param_1);
  return;
}



/* Entry: 101401194; end: 1014011d3;  */

void FUN_101401194(void)

{
  func_0x0001014003e8();
  return;
}



/* Entry: 1014011d4; end: 101401233;  */

void FUN_1014011d4(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_b0 [24];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar5 + 0x10,auStack_68,0,0);
  lVar2 = lVar5 + 0x10;
  func_0x000107c61618();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    puVar3 = &UNK_1103b2cf8;
    func_0x000107c613fc(&UNK_1103b2cf8,0x18,7);
    *(long *)(puVar3 + 0x10) = lVar2;
    uStack_78 = 0x101401224;
    puStack_98 = puVar1;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1103b2d10;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_70;
    func_0x000107c61174(lVar2);
    func_0x000107c61574(puVar3);
    func_0x0001000d76cc("COS Communication input complete pending submission",ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61428(lVar5 + 0x10,auStack_b0,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    puVar3 = &UNK_1103b2d48;
    func_0x000107c613fc(&UNK_1103b2d48,0x18,7);
    *(long *)(puVar3 + 0x10) = lVar5;
    uStack_78 = 0x10140122c;
    puStack_98 = puVar1;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1103b2d60;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar1 = puStack_70;
    func_0x000107c61174(lVar5);
    func_0x000107c61574(puVar1);
    func_0x0001000d76cc("COS OTP complete pending submission",ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar5);
  }
  func_0x000107c61428(lVar6 + 0x10,&puStack_98,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61648();
  if (lVar6 != 0) {
    FUN_1013f248c();
    func_0x000107c61574(lVar6);
  }
  return;
}



/* Entry: 101401234; end: 1014013cf;  */

undefined * FUN_101401234(undefined8 param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_a0 [80];
  
  puVar5 = auStack_a0;
  lVar1 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  lVar2 = *(long *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(long *)(lVar1 + 0x20) = lVar2;
  *(undefined1 **)(lVar1 + 0x28) = puVar5;
  *(undefined **)(lVar1 + 0x48) = PTR___sSSN_11034da80;
  puVar6 = param_4;
  if (param_4 == (undefined1 *)0x0) {
    func_0x000105219840();
    func_0x000107c61180();
    if (lVar2 == 0) {
      param_3 = 0;
      puVar6 = (undefined1 *)0xe000000000000000;
    }
    else {
      param_3 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      puVar6 = puVar5;
    }
  }
  *(long *)(lVar1 + 0x30) = param_3;
  *(undefined1 **)(lVar1 + 0x38) = puVar6;
  func_0x000107c61434(param_4);
  lVar2 = lVar1;
  func_0x000100214a84(lVar1);
  func_0x000107c61588(lVar1);
  FUN_100f15a0c((long *)(lVar1 + 0x20));
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef3ce40);
  lVar1 = lVar2;
  func_0x000107c5f9dc(lVar2,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar2);
  func_0x000107c466bc(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar1);
  return puVar3;
}



/* Entry: 1014013d0; end: 10140141b;  */

void FUN_1014013d0(long param_1,long param_2)

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



/* Entry: 10140141c; end: 1014015bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140141c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112d7caa8);
  if (lVar1 == 0) goto LAB_101401528;
  func_0x000107c61174();
  func_0x000107c61174();
  lVar7 = lVar1;
  func_0x000107c4f090();
  func_0x000107c61180();
  if (lVar7 == 0) {
    lVar7 = unaff_x20 + _DAT_112d7ca68;
    func_0x000107c61618();
    if (lVar7 == 0) goto LAB_101401470;
    lVar6 = lVar7;
    func_0x000107c4f078();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar6 == 0) {
      func_0x000107c61170(lVar1);
LAB_1014015b0:
      func_0x000107c61170(lVar7);
      lVar7 = 0;
    }
    else {
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar1);
      if (lVar6 != lVar1) goto LAB_1014015b0;
    }
  }
  else {
LAB_101401470:
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar1);
  }
  puVar2 = &UNK_1103b31d8;
  func_0x000107c613fc(&UNK_1103b31d8,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar7;
  puVar3 = &UNK_1103b3200;
  func_0x000107c613fc(&UNK_1103b3200,0x20,7);
  *(undefined **)(puVar3 + 0x10) = &UNK_10d93b730;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x000107c61174(lVar7);
  uVar4 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar5 = 3;
  func_0x0001001ca524(3,0,0x5c,4,0,0,&UNK_10d93b740,puVar3,uVar4);
  func_0x000107c61170(lVar7);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar5);
LAB_101401528:
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014015c0; end: 10140162b;  */

void FUN_1014015c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10140162c,uVar1,uVar2);
  return;
}



/* Entry: 10140162c; end: 10140167b;  */

void FUN_10140162c(void)

{
  bool bVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  bVar1 = lVar2 == 0;
  if (!bVar1) {
    func_0x000107c420a8(*(undefined8 *)(unaff_x22 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x000101401678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(bVar1);
  return;
}



/* Entry: 10140167c; end: 1014016bf;  */

void FUN_10140167c(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001014016bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 1014016c0; end: 1014016e3; -[_TtC15COSServicesImpl31COSPromiseChallengeNativeBridge dealloc] */

void FUN_1014016c0(void)

{
  func_0x000107c61174();
  FUN_10140141c();
  return;
}



/* Entry: 1014016e4; end: 10140177f; -[_TtC15COSServicesImpl31COSPromiseChallengeNativeBridge .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101401710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101401734: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101401714) */
/* WARNING: Removing unreachable block (ram,0x000101401738) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014016e4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d7ca68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7ca70));
  return;
}



/* Entry: 101401780; end: 1014018db;  */

/* WARNING: Possible PIC construction at 0x0001014017d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014018b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014017dc) */
/* WARNING: Removing unreachable block (ram,0x0001014018b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101401780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + _DAT_112d7caa0) & 1) != 0) {
    uVar1 = 0xd00000000000002e;
    FUN_101402ca8(0xd00000000000002e,0x800000010ef3d720);
    func_0x000107c5ed2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  *(undefined1 *)(unaff_x20 + _DAT_112d7caa0) = 1;
  puVar2 = &UNK_1103b2df0;
  func_0x000107c613fc(&UNK_1103b2df0,0x11,7);
  puVar2[0x10] = 0;
  puVar3 = &UNK_1103b2e18;
  func_0x000107c613fc(&UNK_1103b2e18,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_1103b3070;
  func_0x000107c613fc(&UNK_1103b3070,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar2);
  func_0x000107c61174(param_3);
  FUN_1013dc87c(param_2,0x101403700,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1014018dc; end: 101401baf;  */

/* WARNING: Possible PIC construction at 0x000101401b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101401b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101401b14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101401b08) */
/* WARNING: Removing unreachable block (ram,0x000101401b80) */
/* WARNING: Removing unreachable block (ram,0x000101401b18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014018dc(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lStack_70;
  long lStack_68;
  
  lVar7 = _DAT_112d7caa0;
  if ((*(byte *)(unaff_x20 + _DAT_112d7caa0) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112d7caa0) = 1;
    lVar2 = unaff_x20 + _DAT_112d7ca68;
    func_0x000107c61618();
    if (lVar2 != 0) {
      puVar3 = &UNK_1103b2df0;
      func_0x000107c613fc(&UNK_1103b2df0,0x11,7);
      puVar3[0x10] = 0;
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112d7ca80);
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d7ca88);
      uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d7ca98);
      puVar4 = &UNK_1103b2e18;
      func_0x000107c613fc(&UNK_1103b2e18,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      puVar5 = &UNK_1103b3160;
      func_0x000107c613fc(&UNK_1103b3160,0x28,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(undefined **)(puVar5 + 0x18) = puVar3;
      *(undefined8 *)(puVar5 + 0x20) = param_2;
      lVar6 = 0;
      FUN_1013e5274();
      lVar7 = lVar6;
      func_0x000107c610f8();
      FUN_1013e2dc4(0);
      func_0x000107c610f8();
      func_0x000107c6157c(uVar12);
      func_0x000107c6157c(puVar4);
      func_0x000107c6157c(puVar3);
      func_0x000107c61174(param_2);
      func_0x000107c61174();
      func_0x000107c61174(uVar10);
      FUN_1013de2f4(0,0,0,0,uVar11,uVar10,uVar12);
      *(undefined8 *)(lVar7 + _DAT_112d7b978) = uVar11;
      lVar8 = 0;
      FUN_1013dcf3c();
      func_0x000107c613fc();
      *(undefined1 *)(lVar8 + 0x28) = 0;
      func_0x000107c61614(lVar8 + 0x30,0);
      *(undefined8 *)(lVar8 + 0x10) = param_1;
      *(undefined8 *)(lVar8 + 0x18) = 0x101403770;
      *(undefined **)(lVar8 + 0x20) = puVar5;
      *(long *)(lVar7 + _DAT_112d7b980) = lVar8;
      puVar3 = PTR_s_initWithNibName_bundle__1125e9850;
      lStack_70 = lVar7;
      lStack_68 = lVar6;
      func_0x000107c61174();
      plVar9 = &lStack_70;
      func_0x000107c61154(plVar9,puVar3,0,0);
      func_0x000107c61574(puVar4);
      func_0x000107c5677c(plVar9);
      FUN_101401ec0(plVar9,lVar2);
      goto code_r0x000107c61170;
    }
    *(undefined1 *)(unaff_x20 + lVar7) = 0;
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d7caa8);
    *(undefined8 *)(unaff_x20 + _DAT_112d7caa8) = 0;
    func_0x000107c61170(uVar10);
    pcVar1 = "Missing presenting view controller";
    lVar2 = -0x2fffffffffffffde;
  }
  else {
    pcVar1 = "Communication input launch already in progress";
    lVar2 = -0x2fffffffffffffd2;
  }
  FUN_101402ca8(lVar2,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5ed2c();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101401bb0; end: 101401bd3; -[_TtC15COSServicesImpl31COSPromiseChallengeNativeBridge collectCommunicationInputWithParams:] */

void FUN_101401bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &UNK_1103b3020;
  ppuVar3 = &puStack_80;
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  func_0x000107c613fc(&UNK_1103b3020,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  uStack_60 = 0x1014036cc;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1103b3038;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar1);
  func_0x000107c61574(puVar2);
  func_0x0001000d76cc("COS Communication input launch",ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 101401bd4; end: 101401c6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101401bd4(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + _DAT_112d7caa8);
  if (uVar3 != 0) {
    uVar1 = 0;
    FUN_1013e5274(0);
    uVar2 = uVar3;
    func_0x000107c61480(uVar3,uVar1);
    if (uVar2 != 0) {
      func_0x000107c61174();
      uVar2 = uVar3;
      FUN_1013e139c();
      if ((uVar2 & 1) == 0) {
        func_0x0001013e153c();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 101401c6c; end: 101401cbf;  */

/* WARNING: Possible PIC construction at 0x000101401d6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101401dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101401dec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101401e94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101401df0) */
/* WARNING: Removing unreachable block (ram,0x000101401dd8) */
/* WARNING: Removing unreachable block (ram,0x000101401d70) */
/* WARNING: Removing unreachable block (ram,0x000101401e98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101401c6c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar5 = *(long *)(param_1 + _DAT_112d7caa8);
  if (lVar5 == 0) {
    return;
  }
  uVar1 = 0;
  FUN_1013f4e10(0);
  func_0x000107c61480(lVar5,uVar1);
  if (lVar5 == 0) {
    return;
  }
  puVar2 = &UNK_1103b2e18;
  func_0x000107c613fc(&UNK_1103b2e18,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  puVar3 = &UNK_1103b3228;
  func_0x000107c613fc(&UNK_1103b3228,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(code **)(puVar3 + 0x18) = FUN_101401cc0;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  lVar5 = *(long *)(param_1 + _DAT_112d7caa8);
  if (lVar5 == 0) {
    func_0x000107c6157c(puVar2);
  }
  else {
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(puVar2);
    lVar4 = lVar5;
    func_0x000107c4f090();
    func_0x000107c61180();
    if (lVar4 != 0) goto code_r0x000107c61574;
    param_1 = param_1 + _DAT_112d7ca68;
    func_0x000107c61618();
    if (param_1 == 0) {
      func_0x000107c61170(lVar5);
    }
    else {
      lVar4 = param_1;
      func_0x000107c4f078();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if ((lVar4 != 0) && (func_0x000107c61170(lVar4), lVar4 == lVar5)) {
        func_0x000107c61574(puVar2);
        func_0x000107c61170(lVar5);
        uStack_50 = 0x1014039d4;
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0x42000000;
        puStack_60 = &UNK_1000f6b44;
        puStack_58 = &UNK_1103b3240;
        puStack_48 = puVar3;
        func_0x000107c60bc4(&puStack_70);
        puVar2 = puStack_48;
        func_0x000107c6157c(puVar3);
        goto code_r0x000107c61574;
      }
      func_0x000107c61170(lVar5);
      lVar5 = param_1;
    }
    func_0x000107c61170(lVar5);
  }
  FUN_101402ae4(puVar2);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 101401cc0; end: 101401cc3;  */

void FUN_101401cc0(void)

{
  return;
}



/* Entry: 101401cc4; end: 101401ebf;  */

/* WARNING: Possible PIC construction at 0x000101401d6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101401dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101401dec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101401e94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101401df0) */
/* WARNING: Removing unreachable block (ram,0x000101401dd8) */
/* WARNING: Removing unreachable block (ram,0x000101401d70) */
/* WARNING: Removing unreachable block (ram,0x000101401e98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101401cc4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &UNK_1103b2e18;
  func_0x000107c613fc(&UNK_1103b2e18,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_1103b3228;
  func_0x000107c613fc(&UNK_1103b3228,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(code **)(puVar2 + 0x18) = FUN_101401cc0;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  lVar3 = *(long *)(param_1 + _DAT_112d7caa8);
  if (lVar3 == 0) {
    func_0x000107c6157c(puVar1);
  }
  else {
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(puVar1);
    lVar4 = lVar3;
    func_0x000107c4f090();
    func_0x000107c61180();
    if (lVar4 != 0) goto code_r0x000107c61574;
    param_1 = param_1 + _DAT_112d7ca68;
    func_0x000107c61618();
    if (param_1 == 0) {
      func_0x000107c61170(lVar3);
    }
    else {
      lVar4 = param_1;
      func_0x000107c4f078();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if ((lVar4 != 0) && (func_0x000107c61170(lVar4), lVar4 == lVar3)) {
        func_0x000107c61574(puVar1);
        func_0x000107c61170(lVar3);
        uStack_50 = 0x1014039d4;
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0x42000000;
        puStack_60 = &UNK_1000f6b44;
        puStack_58 = &UNK_1103b3240;
        puStack_48 = puVar2;
        func_0x000107c60bc4(&puStack_70);
        puVar1 = puStack_48;
        func_0x000107c6157c(puVar2);
        goto code_r0x000107c61574;
      }
      func_0x000107c61170(lVar3);
      lVar3 = param_1;
    }
    func_0x000107c61170(lVar3);
  }
  FUN_101402ae4(puVar1);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101401ec0; end: 101402173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101401ec0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_90;
  puVar2 = &UNK_1103b2e18;
  func_0x000107c613fc(&UNK_1103b2e18,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1103b2f58;
  func_0x000107c613fc(&UNK_1103b2f58,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  lVar1 = _DAT_112d7caa8;
  lVar4 = *(long *)(unaff_x20 + _DAT_112d7caa8);
  if ((lVar4 == 0) || (param_1 == lVar4)) {
    func_0x000107c6157c(puVar2);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174();
    func_0x000107c6157c(puVar2);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    lVar5 = lVar4;
    func_0x000107c4f090();
    func_0x000107c61180();
    if (lVar5 != 0) {
      func_0x000107c61574(puVar2);
      func_0x000107c61170(lVar4);
LAB_101401f98:
      uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
      *(undefined8 *)(unaff_x20 + lVar1) = 0;
      func_0x000107c61170(uVar6);
      puVar2 = &UNK_1103b2f80;
      func_0x000107c613fc(&UNK_1103b2f80,0x20,7);
      *(code **)(puVar2 + 0x10) = FUN_10140366c;
      *(undefined **)(puVar2 + 0x18) = puVar3;
      pcStack_70 = FUN_101403678;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1103b2f98;
      puStack_68 = puVar2;
      func_0x000107c60bc4(&puStack_90);
      puVar2 = puStack_68;
      func_0x000107c6157c(puVar3);
      func_0x000107c61574(puVar2);
      func_0x000107c420a8(lVar5);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61574(puVar3);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar5);
      return;
    }
    lVar5 = unaff_x20 + _DAT_112d7ca68;
    func_0x000107c61618();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar4);
    }
    else {
      lVar9 = lVar5;
      func_0x000107c4f078();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if ((lVar9 != 0) && (func_0x000107c61170(lVar9), lVar9 == lVar4)) {
        func_0x000107c61574(puVar2);
        goto LAB_101401f98;
      }
      func_0x000107c61170(lVar4);
      lVar4 = lVar5;
    }
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61428(puVar2 + 0x10,&puStack_90,0,0);
  puVar8 = puVar2 + 0x10;
  func_0x000107c61618();
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c61574(puVar2);
  }
  else {
    uVar6 = *(undefined8 *)(puVar8 + _DAT_112d7caa8);
    *(long *)(puVar8 + _DAT_112d7caa8) = param_1;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_1);
    func_0x000107c4f018(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(puVar8);
  }
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 101402174; end: 101402287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101402174(long param_1,long param_2,ulong param_3,undefined8 param_4,code *param_5,
                  code *param_6)

{
  ulong uVar1;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_80,0,0);
    if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
      func_0x000107c61428(param_2 + 0x10,auStack_98,1,0);
      *(undefined1 *)(param_2 + 0x10) = 1;
      uVar1 = param_3;
      (*param_5)();
      if ((uVar1 & 1) == 0) {
        func_0x000107c61174(param_4);
        func_0x000107c61174(param_3);
        (*param_6)(param_1,param_4,param_3);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_4);
      }
      else {
        *(undefined1 *)(param_1 + _DAT_112d7caa0) = 0;
        func_0x000107c43b74(param_4);
      }
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101402288; end: 10140233f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101402288(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5,
                  code *param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112d7caa8);
  if (lVar3 != 0) {
    uVar1 = 0;
    (*param_4)(0);
    lVar2 = lVar3;
    func_0x000107c61480(lVar3,uVar1);
    if ((lVar2 != 0) && ((*(byte *)(param_1 + _DAT_112d7caa0) & 1) == 0)) {
      func_0x000107c61174(lVar3);
      (*param_5)(lVar2,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
  }
  (*param_6)(param_2,param_3);
  return;
}



/* Entry: 101402340; end: 10140249b;  */

/* WARNING: Possible PIC construction at 0x000101402398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101402474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010140239c) */
/* WARNING: Removing unreachable block (ram,0x000101402478) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101402340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + _DAT_112d7caa0) & 1) != 0) {
    uVar1 = 0xd00000000000001e;
    FUN_101402ca8(0xd00000000000001e,0x800000010ef3d6a0);
    func_0x000107c5ed2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  *(undefined1 *)(unaff_x20 + _DAT_112d7caa0) = 1;
  puVar2 = &UNK_1103b2df0;
  func_0x000107c613fc(&UNK_1103b2df0,0x11,7);
  puVar2[0x10] = 0;
  puVar3 = &UNK_1103b2e18;
  func_0x000107c613fc(&UNK_1103b2e18,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_1103b2e40;
  func_0x000107c613fc(&UNK_1103b2e40,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar2);
  func_0x000107c61174(param_3);
  FUN_1013f4b00(param_2,FUN_101402c6c,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 10140249c; end: 101402823;  */

/* WARNING: Possible PIC construction at 0x0001014027f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101402774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101402784: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101402778) */
/* WARNING: Removing unreachable block (ram,0x0001014027f4) */
/* WARNING: Removing unreachable block (ram,0x000101402788) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140249c(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x20;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = _DAT_112d7caa0;
  if ((*(byte *)(unaff_x20 + _DAT_112d7caa0) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112d7caa0) = 1;
    lVar5 = unaff_x20 + _DAT_112d7ca68;
    func_0x000107c61618();
    if (lVar5 != 0) {
      puVar6 = &UNK_1103b2df0;
      func_0x000107c613fc(&UNK_1103b2df0,0x11,7);
      puVar6[0x10] = 0;
      uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112d7ca70);
      puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d7ca78);
      lVar3 = unaff_x20 + _DAT_112d7ca90;
      uVar16 = puVar2[1];
      uVar19 = puVar2[1];
      uVar18 = *puVar2;
      lVar7 = lVar3;
      func_0x000107c61618();
      uVar15 = *(undefined8 *)(lVar3 + 8);
      puVar8 = &UNK_1103b2e18;
      func_0x000107c613fc(&UNK_1103b2e18,0x18,7);
      func_0x000107c61614(puVar8 + 0x10);
      puVar9 = &UNK_1103b2f30;
      func_0x000107c613fc(&UNK_1103b2f30,0x28,7);
      *(undefined **)(puVar9 + 0x10) = puVar8;
      *(undefined **)(puVar9 + 0x18) = puVar6;
      *(undefined8 *)(puVar9 + 0x20) = param_2;
      lVar10 = 0;
      FUN_1013f4e10();
      lVar11 = lVar10;
      func_0x000107c610f8();
      lVar12 = 0;
      FUN_1013f6998();
      lVar13 = lVar12;
      func_0x000107c610f8();
      lVar3 = lVar13 + _DAT_112d7c2e8;
      *(undefined8 *)(lVar3 + 8) = 0;
      func_0x000107c61614(lVar3,0);
      func_0x000107c61614(lVar13 + _DAT_112d7c2f8,0);
      func_0x000107c61614(lVar13 + _DAT_112d7c300,0);
      *(undefined8 *)(lVar13 + _DAT_112d7c308) = 0;
      *(undefined1 *)(lVar13 + _DAT_112d7c310) = 0;
      *(undefined1 *)(lVar13 + _DAT_112d7c318) = 0;
      puVar2 = (undefined8 *)(lVar13 + _DAT_112d7c320);
      *puVar2 = 0;
      puVar2[1] = 0xe000000000000000;
      *(undefined8 *)(lVar13 + _DAT_112d7c2d0) = param_1;
      *(undefined8 *)(lVar13 + _DAT_112d7c2d8) = uVar17;
      puVar2 = (undefined8 *)(lVar13 + _DAT_112d7c2e0);
      puVar2[1] = uVar19;
      *puVar2 = uVar18;
      *(undefined8 *)(lVar3 + 8) = uVar15;
      func_0x000107c61604(lVar3,lVar7);
      puVar2 = (undefined8 *)(lVar13 + _DAT_112d7c2f0);
      *puVar2 = FUN_101403630;
      puVar2[1] = puVar9;
      puVar4 = PTR_s_init_1125d9248;
      lStack_70 = lVar13;
      lStack_68 = lVar12;
      func_0x000107c6157c(puVar8);
      func_0x000107c6157c(puVar6);
      func_0x000107c61174(param_2);
      func_0x000107c6157c(puVar9);
      func_0x000107c61174(param_1);
      func_0x000107c61174(uVar17);
      func_0x000107c6157c(uVar16);
      plVar14 = &lStack_70;
      func_0x000107c61154(plVar14,puVar4);
      *(long **)(lVar11 + _DAT_112d7c2a0) = plVar14;
      plVar14 = &lStack_80;
      lStack_80 = lVar11;
      lStack_78 = lVar10;
      func_0x000107c61154(plVar14,PTR_s_initWithNibName_bundle__1125e9850,0,0);
      func_0x000107c61574(puVar8);
      func_0x000107c615e8(lVar7);
      func_0x000107c61574(puVar9);
      func_0x000107c5677c(plVar14);
      FUN_101401ec0(plVar14,lVar5);
      goto code_r0x000107c61170;
    }
    *(undefined1 *)(unaff_x20 + lVar3) = 0;
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d7caa8);
    *(undefined8 *)(unaff_x20 + _DAT_112d7caa8) = 0;
    func_0x000107c61170(uVar15);
    pcVar1 = "Missing presenting view controller";
    lVar5 = -0x2fffffffffffffde;
  }
  else {
    pcVar1 = "OTP launch already in progress";
    lVar5 = -0x2fffffffffffffe2;
  }
  FUN_101402ca8(lVar5,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5ed2c();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 101402824; end: 101402847; -[_TtC15COSServicesImpl31COSPromiseChallengeNativeBridge collectOTPWithParams:] */

void FUN_101402824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &UNK_1103b2da0;
  ppuVar3 = &puStack_80;
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  func_0x000107c613fc(&UNK_1103b2da0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  uStack_60 = 0x101402c1c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1103b2db8;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar1);
  func_0x000107c61574(puVar2);
  func_0x0001000d76cc("COS OTP launch",ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 101402848; end: 101402a4f;  */

void FUN_101402848(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar3 = &puStack_80;
  puVar2 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  func_0x000107c613fc(param_4,0x28,7);
  *(undefined8 *)(param_4 + 0x10) = param_1;
  *(undefined8 *)(param_4 + 0x18) = param_3;
  *(undefined **)(param_4 + 0x20) = puVar2;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  uStack_68 = param_6;
  uStack_60 = param_5;
  lStack_58 = param_4;
  func_0x000107c60bc4(&puStack_80);
  lVar1 = lStack_58;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar2);
  func_0x000107c61574(lVar1);
  func_0x0001000d76cc(param_7,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101402a50; end: 101402ae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101402a50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112d7caa8);
    *(undefined8 *)(param_1 + _DAT_112d7caa8) = param_2;
    func_0x000107c61170(uVar1);
    func_0x000107c61174(param_2);
    func_0x000107c4f018(param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101402ae4; end: 101402b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101402ae4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112d7caa0) = 0;
    uVar1 = *(undefined8 *)(param_1 + _DAT_112d7caa8);
    *(undefined8 *)(param_1 + _DAT_112d7caa8) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 101402b50; end: 101402bcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101402b50(long param_1,code *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112d7caa0) = 0;
    uVar1 = *(undefined8 *)(param_1 + _DAT_112d7caa8);
    *(undefined8 *)(param_1 + _DAT_112d7caa8) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar1);
  }
  (*param_2)();
  return;
}



/* Entry: 101402bd0; end: 101402c4f; -[_TtC15COSServicesImpl31COSPromiseChallengeNativeBridge init] */

void FUN_101402bd0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSPromiseChallengeNativeBridge",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101402bfc);
  (*pcVar1)();
}



/* Entry: 101402c50; end: 101402c6b;  */

void FUN_101402c50(long param_1,long param_2)

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



/* Entry: 101402c6c; end: 101402ca7;  */

void FUN_101402c6c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000101402970(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),&UNK_1103b2e68,FUN_101402df4,&UNK_1103b2e80,
                      "COS OTP result");
  return;
}



/* Entry: 101402ca8; end: 101402df3;  */

undefined * FUN_101402ca8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  puVar6 = auStack_90;
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
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  *(undefined8 *)(lVar2 + 0x38) = param_2;
  func_0x000107c61434(param_2);
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  FUN_1014035f0((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010d93b6e0);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
  func_0x000107c466bc(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar2);
  return puVar5;
}



/* Entry: 101402df4; end: 101402e1f;  */

void FUN_101402df4(void)

{
  long unaff_x20;
  
  FUN_101402174(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),0x1014034dc,
                FUN_101403144);
  return;
}



/* Entry: 101402e20; end: 1014030bb;  */

/* WARNING: Possible PIC construction at 0x000101402f10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101402fa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101403010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010140302c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010140308c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010140303c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101403090) */
/* WARNING: Removing unreachable block (ram,0x000101403030) */
/* WARNING: Removing unreachable block (ram,0x000101403014) */
/* WARNING: Removing unreachable block (ram,0x000101403018) */
/* WARNING: Removing unreachable block (ram,0x0001014030b0) */
/* WARNING: Removing unreachable block (ram,0x000101402f14) */
/* WARNING: Removing unreachable block (ram,0x000101403028) */
/* WARNING: Removing unreachable block (ram,0x000101402fa4) */
/* WARNING: Removing unreachable block (ram,0x000101403040) */
/* WARNING: Removing unreachable block (ram,0x000101403044) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101402e20(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = &UNK_1103b30e8;
  func_0x000107c613fc(&UNK_1103b30e8,0x20,7);
  *(long *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  puVar2 = &UNK_1103b2e18;
  func_0x000107c613fc(&UNK_1103b2e18,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  puVar3 = &UNK_1103b3110;
  func_0x000107c613fc(&UNK_1103b3110,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = 0x1014039cc;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  lVar4 = *(long *)(param_1 + _DAT_112d7caa8);
  if (lVar4 == 0) {
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c6157c(puVar2);
    func_0x000107c6157c(puVar1);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_3);
    FUN_1014030bc(puVar2,param_2,param_3);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar3);
    lVar4 = param_2;
  }
  else {
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c6157c(puVar2);
    func_0x000107c6157c(puVar1);
    lVar5 = lVar4;
    func_0x000107c4f090();
    func_0x000107c61180();
    if (lVar5 == 0) {
      param_1 = param_1 + _DAT_112d7ca68;
      func_0x000107c61618();
      if (param_1 != 0) {
        func_0x000107c4f078();
        func_0x000107c61180();
      }
    }
    else {
      func_0x000107c61574(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1014030bc; end: 101403143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014030bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112d7caa0) = 0;
    uVar1 = *(undefined8 *)(param_1 + _DAT_112d7caa8);
    *(undefined8 *)(param_1 + _DAT_112d7caa8) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar1);
  }
  func_0x000107c43b74(param_2);
  return;
}



/* Entry: 101403144; end: 1014033df;  */

/* WARNING: Possible PIC construction at 0x000101403234: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014032c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101403334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101403350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014033b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101403360: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014033b4) */
/* WARNING: Removing unreachable block (ram,0x000101403354) */
/* WARNING: Removing unreachable block (ram,0x000101403338) */
/* WARNING: Removing unreachable block (ram,0x00010140333c) */
/* WARNING: Removing unreachable block (ram,0x0001014033d4) */
/* WARNING: Removing unreachable block (ram,0x000101403238) */
/* WARNING: Removing unreachable block (ram,0x00010140334c) */
/* WARNING: Removing unreachable block (ram,0x0001014032c8) */
/* WARNING: Removing unreachable block (ram,0x000101403364) */
/* WARNING: Removing unreachable block (ram,0x000101403368) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101403144(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = &UNK_1103b2eb8;
  func_0x000107c613fc(&UNK_1103b2eb8,0x20,7);
  *(long *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  puVar2 = &UNK_1103b2e18;
  func_0x000107c613fc(&UNK_1103b2e18,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  puVar3 = &UNK_1103b2ee0;
  func_0x000107c613fc(&UNK_1103b2ee0,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(code **)(puVar3 + 0x18) = FUN_1014035dc;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  lVar4 = *(long *)(param_1 + _DAT_112d7caa8);
  if (lVar4 == 0) {
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c6157c(puVar2);
    func_0x000107c6157c(puVar1);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_3);
    FUN_1014030bc(puVar2,param_2,param_3);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar3);
    lVar4 = param_2;
  }
  else {
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c6157c(puVar2);
    func_0x000107c6157c(puVar1);
    lVar5 = lVar4;
    func_0x000107c4f090();
    func_0x000107c61180();
    if (lVar5 == 0) {
      param_1 = param_1 + _DAT_112d7ca68;
      func_0x000107c61618();
      if (param_1 != 0) {
        func_0x000107c4f078();
        func_0x000107c61180();
      }
    }
    else {
      func_0x000107c61574(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1014033e0; end: 1014035db;  */

bool FUN_1014033e0(long param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uVar1 = 0x6e6f69746361;
  func_0x000107c5fadc(0x6e6f69746361,0xe600000000000000);
  func_0x000107c5dc2c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (param_1 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,param_1);
    func_0x000107c615e8(param_1);
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_1014035f0(&uStack_40,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar2 & 1) != 0) {
      uVar3 = uStack_68;
      func_0x000107c49820(uStack_68);
      func_0x000107c61170(uStack_68);
      return uVar3 < 2;
    }
  }
  return false;
}



/* Entry: 1014035dc; end: 1014035ef;  */

void FUN_1014035dc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfbb710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_fulfillWithSuccessValue__1125cc768,
             *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1014035f0; end: 10140362f;  */

undefined8 FUN_1014035f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101403630; end: 10140366b;  */

void FUN_101403630(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000101402970(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),&UNK_1103b2fd0,0x1014039a0,&UNK_1103b2fe8,
                      "COS OTP result");
  return;
}



/* Entry: 10140366c; end: 101403677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140366c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + _DAT_112d7caa8);
    *(undefined8 *)(lVar2 + _DAT_112d7caa8) = uVar1;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(uVar1);
    func_0x000107c4f018(uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 101403678; end: 101403697;  */

void FUN_101403678(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101403698; end: 1014038a3;  */

void FUN_101403698(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


