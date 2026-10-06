/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102417aac; end: 102417bfb;  */

/* WARNING: Possible PIC construction at 0x000102417b00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102417b04) */

void FUN_102417aac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aa7d8;
  func_0x000107c610f8(PTR_PTR_1126aa7d8);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c46d30(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102417bfc; end: 102417c93;  */

/* WARNING: Possible PIC construction at 0x000102417c6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102417c70) */

void FUN_102417bfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c5faec(param_2);
  uVar3 = uVar2;
  func_0x000107c5faec(param_3);
  uVar4 = uVar3;
  func_0x000107c5faec(param_4);
  (*pcVar1)(param_2,uVar2,param_3,uVar3,param_4,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 102417c94; end: 102417cff; -[_TtC32ComposerListStoreServiceProvider17ComposerListStore fetchListRecipientsWithListId:source:] */

void FUN_102417c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102417250(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102417d00; end: 102417f67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102417d00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  FUN_10241bf90(param_1,param_2,param_3,0,0);
  lVar2 = *(long *)(unaff_x20 + _DAT_112e97b50);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    uVar6 = 0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010daa2fc0);
    uVar7 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010f099db0);
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    puVar9 = puVar8;
    func_0x000107c5ed2c(puVar8);
    func_0x000107c61170(puVar8);
    func_0x000107c43b70(puVar1);
    func_0x000107c61170(puVar9);
  }
  else {
    puVar8 = &UNK_1105038b8;
    func_0x000107c613fc(&UNK_1105038b8,0x18,7);
    *(undefined **)(puVar8 + 0x10) = puVar1;
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_10241c2e8;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)&UNK_1000f6b44;
    puStack_78 = &UNK_1105038d0;
    puStack_68 = puVar8;
    func_0x000107c60bc4(&puStack_90);
    puVar8 = puStack_68;
    func_0x000107c61174(param_1);
    puVar4 = puVar1;
    func_0x000107c61174();
    func_0x000107c61574(puVar8);
    puVar8 = &UNK_110503908;
    func_0x000107c613fc(&UNK_110503908,0x18,7);
    *(undefined **)(puVar8 + 0x10) = puVar4;
    pcStack_70 = (code *)0x10241c300;
    puStack_90 = puVar9;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_102417f68;
    puStack_78 = &UNK_110503920;
    puStack_68 = puVar8;
    func_0x000107c60bc4(&puStack_90);
    puVar8 = puStack_68;
    func_0x000107c61174(puVar4);
    func_0x000107c61574(puVar8);
    func_0x000107c40a70(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar3);
  }
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 102417f68; end: 102417fcb;  */

void FUN_102417f68(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102417fcc; end: 102418067; -[_TtC32ComposerListStoreServiceProvider17ComposerListStore createListWithListName:recipients:] */

void FUN_102417fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = 0;
  FUN_10241c8d0(0,0x112e97bc0,&PTR_PTR_1126aa7d8);
  func_0x000107c5fc54(param_4,uVar1);
  func_0x000107c61174(param_1);
  FUN_102417d00(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102418068; end: 1024182d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_102418068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  FUN_10241bf90(param_3,param_4,param_5,param_1,param_2);
  lVar2 = *(long *)(unaff_x20 + _DAT_112e97b50);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    uVar6 = 0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010daa2fc0);
    uVar7 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010f099db0);
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    puVar9 = puVar8;
    func_0x000107c5ed2c(puVar8);
    func_0x000107c61170(puVar8);
    func_0x000107c43b70(puVar1);
    func_0x000107c61170(puVar9);
  }
  else {
    puVar8 = &UNK_110503818;
    func_0x000107c613fc(&UNK_110503818,0x18,7);
    *(undefined **)(puVar8 + 0x10) = puVar1;
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x10241ca60;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)&UNK_1000f6b44;
    puStack_78 = &UNK_110503830;
    puStack_68 = puVar8;
    func_0x000107c60bc4(&puStack_90);
    puVar8 = puStack_68;
    func_0x000107c61174(param_3);
    puVar4 = puVar1;
    func_0x000107c61174();
    func_0x000107c61574(puVar8);
    puVar8 = &UNK_110503868;
    func_0x000107c613fc(&UNK_110503868,0x18,7);
    *(undefined **)(puVar8 + 0x10) = puVar4;
    uStack_70 = 0x10241ca54;
    puStack_90 = puVar9;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_102417f68;
    puStack_78 = &UNK_110503880;
    puStack_68 = puVar8;
    func_0x000107c60bc4(&puStack_90);
    puVar8 = puStack_68;
    func_0x000107c61174(puVar4);
    func_0x000107c61574(puVar8);
    func_0x000107c5d52c(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar3);
  }
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1024182d8; end: 1024183a3; -[_TtC32ComposerListStoreServiceProvider17ComposerListStore updateListWithListId:listName:recipients:] */

void FUN_1024182d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar2 = param_2;
  func_0x000107c5faec(param_4);
  uVar1 = 0;
  FUN_10241c8d0(0,0x112e97bc0,&PTR_PTR_1126aa7d8);
  func_0x000107c5fc54(param_5,uVar1);
  func_0x000107c61174(param_1);
  FUN_102418068(param_3,param_2,param_4,uVar2,param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1024183a4; end: 1024185db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1024183a4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar6 = &puStack_90;
  puVar2 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar3 = *(long *)(unaff_x20 + _DAT_112e97b50);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    uVar7 = 0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010daa2fc0);
    uVar8 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010f099db0);
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    param_1 = puVar9;
    func_0x000107c5ed2c(puVar9);
    func_0x000107c61170(puVar9);
    func_0x000107c43b70(puVar2);
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    puVar9 = &UNK_110503778;
    func_0x000107c613fc(&UNK_110503778,0x18,7);
    *(undefined **)(puVar9 + 0x10) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x10241ca6c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)&UNK_1000f6b44;
    puStack_78 = &UNK_110503790;
    puStack_68 = puVar9;
    func_0x000107c60bc4(&puStack_90);
    puVar9 = puStack_68;
    puVar5 = puVar2;
    func_0x000107c61174();
    func_0x000107c61574(puVar9);
    puVar9 = &UNK_1105037c8;
    func_0x000107c613fc(&UNK_1105037c8,0x18,7);
    *(undefined **)(puVar9 + 0x10) = puVar5;
    uStack_70 = 0x10241ca58;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_102417f68;
    puStack_78 = &UNK_1105037e0;
    puStack_68 = puVar9;
    func_0x000107c60bc4(&puStack_90);
    puVar9 = puStack_68;
    func_0x000107c61174(puVar5);
    func_0x000107c61574(puVar9);
    func_0x000107c41700(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
  }
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1024185dc; end: 10241861b;  */

void FUN_1024185dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aa7d0;
  func_0x000107c610f8(PTR_PTR_1126aa7d0);
  func_0x000107c453e4();
  func_0x000107c43b74(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10241861c; end: 10241869f;  */

/* WARNING: Possible PIC construction at 0x00010241867c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102418680) */

void FUN_10241861c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aa7d0;
  func_0x000107c610f8(PTR_PTR_1126aa7d0);
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c54654(puVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1024186a0; end: 102418707; -[_TtC32ComposerListStoreServiceProvider17ComposerListStore deleteListWithListId:] */

void FUN_1024186a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1024183a4(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102418708; end: 10241896b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102418708(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  code *pcVar11;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + _DAT_112e97b48);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar1 == (undefined8 *)0x0) {
      func_0x000107c61170(param_1);
    }
    else {
      puVar2 = puVar1;
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar3 = *puVar2;
      func_0x000107c61174(uVar3);
      uVar4 = 0xd00000000000002a;
      func_0x000100029b28(0xd00000000000002a,0x800000010f099e80);
      func_0x000107c61170(uVar3);
      lVar10 = *(long *)(param_1 + _DAT_112e97b58);
      func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
      uVar3 = 0;
      if (lVar10 == 0) {
        FUN_1024163fc(0,puVar1);
        pcVar6 = (code *)0x102418bec;
      }
      else {
        FUN_102416a88();
        pcVar6 = FUN_10241896c;
      }
      uVar5 = uVar3;
      func_0x0001000b637c(uVar3);
      func_0x000107c61170(uVar3);
      uVar3 = 0x112d38270;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      func_0x0001000bfde0(pcVar6,0,uVar3);
      func_0x000107c61574(uVar5);
      puVar7 = &UNK_1105040d8;
      func_0x000107c613fc(&UNK_1105040d8,0x11,7);
      puVar7[0x10] = 0;
      puVar8 = &UNK_110503ae8;
      func_0x000107c613fc(&UNK_110503ae8,0x18,7);
      func_0x000107c61614(puVar8 + 0x10,param_1);
      puVar9 = &UNK_110504100;
      func_0x000107c613fc(&UNK_110504100,0x38,7);
      *(undefined **)(puVar9 + 0x10) = puVar8;
      *(undefined **)(puVar9 + 0x18) = puVar7;
      *(undefined8 *)(puVar9 + 0x20) = uVar4;
      *(undefined8 *)(puVar9 + 0x28) = 0;
      *(undefined8 **)(puVar9 + 0x30) = puVar1;
      pcVar11 = *(code **)(*(long *)pcVar6 + 0x60);
      func_0x000107c6157c(pcVar6);
      func_0x000107c6157c(puVar7);
      func_0x000107c615f0(puVar1);
      uVar3 = 0x10241c970;
      puVar8 = puVar9;
      (*pcVar11)();
      func_0x000107c61574(puVar9);
      func_0x000107c615e8(puVar1);
      func_0x000107c61578(pcVar6,2);
      puVar1 = (undefined8 *)(param_1 + _DAT_112e97b88);
      uVar4 = *puVar1;
      *puVar1 = uVar3;
      puVar1[1] = puVar8;
      func_0x000107c61574(puVar7);
      func_0x000107c61170(param_1);
      func_0x000107c615e8(uVar4);
    }
  }
  return;
}



/* Entry: 10241896c; end: 1024190cf;  */

void FUN_10241896c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  undefined *puStack_68;
  
  uVar16 = *param_2;
  puStack_68 = (undefined *)0x0;
  uVar6 = 0;
  FUN_10241c8d0(0,0x112e551a8,&PTR_PTR_1126ce438);
  func_0x000107c5fc50(uVar16,&puStack_68,uVar6);
  puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puStack_68 != (undefined *)0x0) {
    puVar2 = puStack_68;
  }
  if ((ulong)puVar2 >> 0x3e == 0) {
    puVar17 = *(undefined **)(((ulong)puVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar17 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar2) {
      puVar17 = puVar2;
    }
    func_0x000107c60480();
  }
  if (puVar17 == (undefined *)0x0) {
    func_0x000107c6142c(puVar2);
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = puVar18;
    uVar13 = (ulong)puVar17 & ((long)puVar17 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100403514(0,uVar13,0);
    if ((long)puVar17 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102418bec);
      (*pcVar5)();
    }
    if (((ulong)puVar2 & 0xc000000000000001) == 0) {
      puVar19 = (undefined8 *)(puVar2 + 0x20);
      do {
        puVar18 = puStack_68;
        uVar11 = *puVar19;
        func_0x000107c61174();
        func_0x000107c61174();
        uVar6 = uVar11;
        func_0x000107c5aaf0();
        func_0x000107c61180();
        uVar16 = uVar6;
        func_0x000107c5aaf8();
        func_0x000107c61180();
        uVar12 = uVar16;
        func_0x000107c5faec();
        uVar15 = uVar13;
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar16);
        uVar3 = *(ulong *)(puVar18 + 0x10);
        uVar1 = uVar3 + 1;
        puStack_68 = puVar18;
        if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar3) {
          uVar15 = uVar1;
          func_0x000100403514(1 < *(ulong *)(puVar18 + 0x18),uVar1,1);
        }
        *(ulong *)(puStack_68 + 0x10) = uVar1;
        *(undefined8 *)(puStack_68 + uVar3 * 0x10 + 0x20) = uVar12;
        *(ulong *)(puStack_68 + uVar3 * 0x10 + 0x28) = uVar13;
        puVar17 = puVar17 + -1;
        uVar13 = uVar15;
        puVar19 = puVar19 + 1;
      } while (puVar17 != (undefined *)0x0);
    }
    else {
      puVar18 = (undefined *)0x0;
      do {
        puVar4 = puStack_68;
        puVar7 = puVar18;
        puVar14 = puVar2;
        FUN_10241a250(puVar18,puVar2,&PTR_PTR_1126ce438,0x112e551a8);
        puVar8 = puVar7;
        func_0x000107c615f0();
        func_0x000107c5aaf0();
        func_0x000107c61180();
        puVar9 = puVar8;
        func_0x000107c5aaf8();
        func_0x000107c61180();
        puVar10 = puVar9;
        func_0x000107c5faec();
        func_0x000107c615ec(puVar7,2);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar9);
        uVar13 = *(ulong *)(puVar4 + 0x10);
        puStack_68 = puVar4;
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar13) {
          func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar13 + 1,1);
        }
        puVar18 = puVar18 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar13 + 1;
        *(undefined **)(puStack_68 + uVar13 * 0x10 + 0x20) = puVar10;
        *(undefined **)(puStack_68 + uVar13 * 0x10 + 0x28) = puVar14;
      } while (puVar17 != puVar18);
    }
    puVar18 = puStack_68;
    func_0x000107c6142c(puVar2);
  }
  *param_1 = puVar18;
  return;
}



/* Entry: 1024190d0; end: 10241912b;  */

void FUN_1024190d0(long *param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + *param_4);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    *(long *)(param_2 + *param_4) = param_3;
    func_0x000107c61174();
    func_0x000107c61174();
    lVar1 = 0;
    lVar2 = param_3;
  }
  *param_1 = lVar2;
  func_0x000107c61174(lVar1);
  return;
}



/* Entry: 10241912c; end: 1024191e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10241912c(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112e97b80;
  func_0x000107c61428(param_2 + _DAT_112e97b80,auStack_58,0x20,0);
  lVar1 = *(long *)(param_2 + lVar1);
  if (*(long *)(lVar1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c61434(lVar1);
    func_0x000100029284();
    if ((param_4 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + param_3 * 8);
      func_0x000107c61174(uVar2);
    }
    func_0x000107c6142c(lVar1);
  }
  *param_1 = uVar2;
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1024191e8; end: 10241932f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024191e8(undefined8 *param_1,long param_2,long param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112e97b80;
  func_0x000107c61428(param_2 + _DAT_112e97b80,auStack_68,0x20,0);
  lVar6 = *(long *)(param_2 + lVar1);
  if (*(long *)(lVar6 + 0x10) != 0) {
    func_0x000107c61434(lVar6);
    lVar2 = param_3;
    uVar4 = param_4;
    func_0x000100029284();
    if ((uVar4 & 1) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + lVar2 * 8);
      func_0x000107c61174();
      func_0x000107c614a8(auStack_68);
      func_0x000107c6142c(lVar6);
      *param_1 = uVar3;
      return;
    }
    func_0x000107c6142c(lVar6);
  }
  func_0x000107c614a8(auStack_68);
  func_0x000107c61428(param_2 + lVar1,auStack_68,0x21,0);
  func_0x000107c61434(param_4);
  func_0x000107c61174();
  uVar3 = *(undefined8 *)(param_2 + lVar1);
  func_0x000107c61558(uVar3);
  uVar5 = *(undefined8 *)(param_2 + lVar1);
  *(undefined8 *)(param_2 + lVar1) = 0x8000000000000000;
  FUN_10241b0f4(param_5,param_3,param_4,uVar3);
  func_0x000107c6142c(param_4);
  *(undefined8 *)(param_2 + lVar1) = uVar5;
  func_0x000107c614a8(auStack_68);
  *param_1 = param_5;
  func_0x000107c61174(param_5);
  return;
}



/* Entry: 102419330; end: 102419a27;  */

void FUN_102419330(long *param_1,ulong *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puStack_68;
  
  uVar3 = *param_2;
  func_0x000107c5fc54(uVar3,PTR___syXlN_11034f1a0 + 8);
  uVar14 = uVar3 & 0xffffffffffffff8;
  if (uVar3 >> 0x3e == 0) {
    uVar9 = *(ulong *)(uVar14 + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar9 = uVar14;
    if (0x7fffffffffffffff < uVar3) {
      uVar9 = uVar3;
    }
    func_0x000107c60480();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar5;
  if (uVar9 != 0) {
    uVar11 = 0;
    do {
      while( true ) {
        if ((uVar3 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar14 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1024194c8);
            (*pcVar2)();
          }
          uVar13 = *(ulong *)(uVar3 + uVar11 * 8 + 0x20);
          func_0x000107c615f0(uVar13);
        }
        else {
          uVar13 = uVar11;
          func_0x00010125fef0(uVar11,uVar3);
        }
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1024194c4);
          (*pcVar2)();
        }
        uVar8 = uVar11 + 1;
        uVar4 = uVar13;
        puStack_68 = PTR_DAT_11269d940;
        func_0x000107c61494(uVar13,1,&puStack_68);
        if (uVar4 == 0) break;
        puVar15 = puVar5;
        func_0x000107c61550();
        if ((((int)puVar15 == 0) || ((long)puVar5 < 0)) ||
           (puVar15 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar5 >> 0x3e == 0) {
            puVar10 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar10 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar5) {
              puVar10 = puVar5;
            }
            func_0x000107c60480(puVar10);
          }
          puVar15 = (undefined *)0x0;
          FUN_10241a8d0(0,puVar10 + 1,1,puVar5);
        }
        uVar13 = (ulong)puVar15 & 0xffffffffffffff8;
        uVar11 = *(ulong *)(uVar13 + 0x10);
        puVar5 = puVar15;
        if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar11) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
          FUN_10241a8d0(puVar5,uVar11 + 1,1,puVar15);
          uVar13 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar13 + 0x10) = uVar11 + 1;
        *(ulong *)(uVar13 + uVar11 * 8 + 0x20) = uVar4;
        uVar11 = uVar8;
        if (uVar8 == uVar9) goto LAB_1024194e4;
      }
      func_0x000107c615e8(uVar13);
      uVar11 = uVar11 + 1;
    } while (uVar8 != uVar9);
  }
LAB_1024194e4:
  func_0x000107c6142c(uVar3);
  puVar15 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar10 = *(undefined **)(puVar15 + 0x10);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar10 = puVar15;
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar10 = puVar5;
    }
    func_0x000107c60480();
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar1;
  if (puVar10 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar5 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar15 + 0x10) <= puVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1024195fc);
            (*pcVar2)();
          }
          puVar12 = *(undefined **)(puVar5 + (long)puVar7 * 8 + 0x20);
          func_0x000107c615f0(puVar12);
        }
        else {
          puVar12 = puVar7;
          FUN_10241a40c(puVar7,puVar5);
        }
        if (SCARRY8((long)puVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1024195f8);
          (*pcVar2)();
        }
        puVar16 = puVar7 + 1;
        puVar6 = puVar12;
        func_0x000107c5ab44();
        if (((ulong)puVar6 & 1) == 0) break;
        puVar7 = puVar1;
        func_0x000107c61558();
        if (((ulong)puVar7 & 1) == 0) {
          FUN_10241ad48(0,*(long *)(puVar1 + 0x10) + 1,1);
        }
        uVar3 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
          FUN_10241ad48(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
        }
        *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
        *(undefined **)(puVar1 + uVar3 * 8 + 0x20) = puVar12;
        puVar7 = puVar16;
        if (puVar16 == puVar10) goto LAB_102419618;
      }
      func_0x000107c615e8(puVar12);
      puVar7 = puVar7 + 1;
    } while (puVar16 != puVar10);
  }
LAB_102419618:
  func_0x000107c6142c(puVar5);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 102419a28; end: 102419a7f;  */

void FUN_102419a28(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c61434(param_3);
  func_0x000107c61434(uVar1);
  FUN_102419a80(param_3,uVar1);
  *param_1 = param_3;
  return;
}



/* Entry: 102419a80; end: 102419b5f;  */

void FUN_102419a80(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x21;
  undefined *puStack_38;
  
  puVar3 = *(undefined **)(param_1 + 0x10);
  if ((ulong)param_2 >> 0x3e == 0) {
    puVar1 = *(undefined **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar1 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_2) {
      puVar1 = param_2;
    }
    func_0x000107c60480();
  }
  if ((long)puVar3 <= (long)puVar1) {
    puVar1 = puVar3;
  }
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar1 != (undefined *)0x0) {
    uVar2 = 0x112e550f8;
    func_0x0001000285a8(0x112e550f8,&UNK_10da57230);
    func_0x000107c60498(puVar1,uVar2);
    puStack_38 = puVar1;
  }
  FUN_10241c420(param_1,param_2,1,&puStack_38);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_1);
  if (unaff_x21 != 0) {
    func_0x000107c61574(puStack_38);
  }
  return;
}



/* Entry: 102419b60; end: 102419b67;  */

void FUN_102419b60(void)

{
  return;
}



/* Entry: 102419b68; end: 102419ba7;  */

void FUN_102419b68(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  func_0x000107c58d8c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102419ba8; end: 102419fe3;  */

void FUN_102419ba8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  ulong uVar17;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar4 = &UNK_110503c28;
  func_0x000107c613fc(&UNK_110503c28,0x18,7);
  *(long *)(puVar4 + 0x10) = param_2 + 0x10;
  puVar5 = &UNK_110503c50;
  func_0x000107c613fc(&UNK_110503c50,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10241c694;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x10241c6d4;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1011a7a34;
  puStack_88 = &UNK_110503c68;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4();
  puVar7 = puStack_78;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_110503ca0;
  func_0x000107c613fc(&UNK_110503ca0,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = param_3;
  puVar8 = &UNK_110503cc8;
  func_0x000107c613fc(&UNK_110503cc8,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_10241c6f4;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  pcStack_80 = FUN_10241c6fc;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_110503ce0;
  ppuVar9 = &puStack_a0;
  puStack_78 = puVar8;
  func_0x000107c60bc4();
  puVar10 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_110503d18;
  func_0x000107c613fc(&UNK_110503d18,0x20,7);
  *(long *)(puVar10 + 0x10) = param_2 + 0x10;
  *(undefined8 *)(puVar10 + 0x18) = param_4;
  puVar11 = &UNK_110503d40;
  func_0x000107c613fc(&UNK_110503d40,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = 0x10241c71c;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  pcStack_80 = (code *)0x10241cacc;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_110503d58;
  ppuVar12 = &puStack_a0;
  puStack_78 = puVar11;
  func_0x000107c60bc4(ppuVar12);
  puVar13 = puStack_78;
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar13);
  puVar13 = &UNK_110503d90;
  func_0x000107c613fc(&UNK_110503d90,0x18,7);
  *(undefined8 *)(puVar13 + 0x10) = param_3;
  puVar14 = &UNK_110503db8;
  func_0x000107c613fc(&UNK_110503db8,0x20,7);
  *(code **)(puVar14 + 0x10) = FUN_10241c758;
  *(undefined **)(puVar14 + 0x18) = puVar13;
  pcStack_80 = FUN_10241c760;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100eb5728;
  puStack_88 = &UNK_110503dd0;
  ppuVar15 = &puStack_a0;
  puStack_78 = puVar14;
  func_0x000107c60bc4(ppuVar15);
  puVar2 = puStack_78;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(puVar14);
  func_0x000107c61574(puVar2);
  pcStack_80 = (code *)0x102419b64;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_110503df8;
  ppuVar16 = &puStack_a0;
  func_0x000107c60bc4(ppuVar16);
  func_0x000107c61574(puStack_78);
  func_0x000107c4c5bc(param_1);
  func_0x000107c60bd0(ppuVar16);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x56,0x18e,0x22,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102419fd4);
    (*pcVar3)();
  }
  puVar4 = puVar8;
  func_0x000107c61544(puVar8,"",0x56,400,0x1c,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102419fd8);
    (*pcVar3)();
  }
  puVar4 = puVar11;
  func_0x000107c61544(puVar11,"",0x56,0x192,0x23,1);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102419fdc);
    (*pcVar3)();
  }
  puVar4 = puVar14;
  func_0x000107c61544(puVar14,"",0x56,0x194,0x1b,1);
  func_0x000107c61574(puVar14);
  if (((ulong)puVar4 & 1) == 0) {
    uVar17 = 0;
    func_0x000107c61544(0,"",0x56,0x197,0x1d,1);
    if ((uVar17 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102419fe4);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102419fe0);
  (*pcVar3)();
}



/* Entry: 102419fe4; end: 10241a027;  */

void FUN_102419fe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c59254(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10241a028; end: 10241a093;  */

/* WARNING: Possible PIC construction at 0x00010241a058: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010241a05c) */

void FUN_10241a028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5fadc();
  func_0x000107c53ce0(param_4,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10241a094; end: 10241a0df; -[_TtC32ComposerListStoreServiceProvider17ComposerListStore init] */

void FUN_10241a094(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerListStoreServiceProvider.ComposerListStore",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10241a0c0);
  (*pcVar1)();
}



/* Entry: 10241a0e0; end: 10241a15b;  */

void FUN_10241a0e0(long param_1,long param_2)

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



/* Entry: 10241a15c; end: 10241a1d3;  */

void FUN_10241a15c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10241c8d0(0,param_1,param_2);
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



/* Entry: 10241a1d4; end: 10241a1e7;  */

void FUN_10241a1d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e97c08 == (undefined *)0x0 || ((ulong)puRam0000000112e97c08 & 1) != 0) {
    puVar1 = &UNK_10e90725c;
    func_0x000107c61518(&UNK_10e90725c,0x24,0,0);
    puRam0000000112e97c08 = puVar1;
  }
  return;
}



/* Entry: 10241a1e8; end: 10241a24f;  */

/* WARNING: Possible PIC construction at 0x00010241a218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010241a21c) */
/* WARNING: Removing unreachable block (ram,0x00010241a220) */

void FUN_10241a1e8(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112e97bf8;
    plVar5 = (long *)&UNK_10dafe550;
  }
  else {
    puVar3 = (ulong *)0x112d3b7d0;
    plVar5 = (long *)&UNK_10d904cc0;
    unaff_x30 = 0x10241a21c;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 10241a250; end: 10241a40b;  */

ulong FUN_10241a250(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10241a334);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10241a338);
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
  FUN_10241c8d0(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10241a40c);
  (*pcVar2)();
}



/* Entry: 10241a40c; end: 10241a5af;  */

ulong FUN_10241a40c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10241a4e4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10241a4e8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
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
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000017,0x800000010f099dd0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10241a5b0);
  (*pcVar2)();
}



/* Entry: 10241a5b0; end: 10241a76f;  */

ulong FUN_10241a5b0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10241a694);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10241a698);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
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
    puVar4 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
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
  func_0x0001000285a8(0x112d38358,&UNK_10d902090);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10241a770);
  (*pcVar2)();
}



/* Entry: 10241a770; end: 10241a8cf;  */

ulong FUN_10241a770(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10241a8d0);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_10241a9f8(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10241a8cc);
      (*pcVar1)();
    }
    FUN_10241ab08(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 10241a8d0; end: 10241a9f7;  */

ulong FUN_10241a8d0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10241a9f8);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x00010241aa88(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10241a9f4);
      (*pcVar1)();
    }
    func_0x00010241ac24(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 10241a9f8; end: 10241ab07;  */

undefined *
FUN_10241a9f8(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_10241a15c(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 10241ab08; end: 10241ad47;  */

long FUN_10241ab08(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10241ac20);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10241ac24);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10241c8d0(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_10241c8d0(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10241ac1c);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 10241ad48; end: 10241ad7f;  */

void FUN_10241ad48(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x00010241ae94();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10241ad80; end: 10241b0f3;  */

undefined *
FUN_10241ad80(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10241ae94);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSSN_11034da80);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 10241b0f4; end: 10241b3c7;  */

void FUN_10241b0f4(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10241b1dc);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_10241b3c8(lVar6,param_4 & 1,0x112d72920,&UNK_10daa3030);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10241b1a4);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x00010241b268(0x112d72920,&UNK_10daa3030);
    lVar6 = *unaff_x20;
    goto joined_r0x00010241b204;
  }
  lVar6 = *unaff_x20;
joined_r0x00010241b204:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10241b268);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 10241b3c8; end: 10241b65b;  */

void FUN_10241b3c8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_3,param_4);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,param_3);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_10241b628:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10241b658);
          (*pcVar6)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_10241b628;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar3,uVar4);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10241b65c);
          (*pcVar6)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar5 = (bool)(uVar13 == uVar9 | bVar5);
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
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 10241b65c; end: 10241b753;  */

undefined * FUN_10241b65c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(param_2,param_3);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10241b750);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10241b754);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 10241b754; end: 10241ba97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10241b754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  long extraout_x8;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 auStack_b0 [2];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  auStack_b0[0] = param_3;
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5f804();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar2 = _DAT_112e97b68;
  lVar12 = (long)auStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112e97b70) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e97b78) = 0;
  lVar2 = _DAT_112e97b80;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10241b65c(PTR___swiftEmptyArrayStorage_11034f1c8,0x112d72920,&UNK_10daa3030);
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e97b88);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112e97b90;
  (**(code **)(lVar11 + 0x68))
            (lVar12,*(undefined4 *)
                     PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar3);
  puVar5 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f099df0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar11 + 8))(lVar12,lVar3);
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112e97b48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e97b50) = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  uVar6 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f099e20);
  uVar7 = auStack_b0[0];
  uVar4 = auStack_b0[0];
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  *(undefined8 *)(unaff_x20 + _DAT_112e97b58) = uVar4;
  uVar4 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f099e50);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar4);
  *(char *)(unaff_x20 + _DAT_112e97b60) = (char)uVar7;
  puVar8 = &stack0xffffffffffffff90;
  func_0x000107c61154(puVar8,PTR_s_init_1125d9248);
  if (puVar8[_DAT_112e97b60] == '\x01') {
    uVar4 = *(undefined8 *)(puVar8 + _DAT_112e97b90);
    puVar5 = &UNK_110503ae8;
    func_0x000107c613fc(&UNK_110503ae8,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,puVar8);
    pcStack_80 = FUN_10241c968;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1105040a0;
    ppuVar9 = &puStack_a0;
    puStack_78 = puVar5;
    func_0x000107c60bc4(ppuVar9);
    puVar5 = puStack_78;
    puVar10 = puVar8;
    func_0x000107c61174(puVar8);
    func_0x000107c61574(puVar5);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(puVar10);
  }
  return puVar8;
}



/* Entry: 10241ba98; end: 10241bf8f;  */

undefined * FUN_10241ba98(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar1 = param_1;
  func_0x000107c5aaf8();
  func_0x000107c61180();
  uVar12 = param_2;
  if (lVar1 == 0) {
    func_0x000107c5faec();
    uVar12 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  lVar2 = param_1;
  func_0x000107c5cab0();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar12);
  }
  func_0x000107c4a684(param_1);
  puVar3 = PTR_PTR_1126aa7e8;
  func_0x000107c610f8();
  func_0x000107c47470();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
  puVar4 = PTR_PTR_1126aa7f0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar1 = param_1;
  func_0x000107c44f7c();
  func_0x000107c61180();
  puVar13 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar1 == 0) {
    pcStack_b0 = (code *)0x0;
    puStack_a8 = (undefined *)0x0;
    uStack_c0 = 0;
    puStack_b8 = (undefined *)0x0;
    uStack_c8 = 0;
    puVar13 = (undefined *)0x0;
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  }
  else {
    puStack_a8 = &UNK_110503f48;
    func_0x000107c613fc(&UNK_110503f48,0x18,7);
    *(undefined **)(puStack_a8 + 0x10) = puVar4;
    puVar5 = &UNK_110503f70;
    func_0x000107c613fc(&UNK_110503f70,0x20,7);
    pcStack_b0 = FUN_10241c7bc;
    *(code **)(puVar5 + 0x10) = FUN_10241c7bc;
    *(undefined **)(puVar5 + 0x18) = puStack_a8;
    pcStack_80 = (code *)0x10241c7f0;
    puStack_a0 = puVar13;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101769670;
    puStack_88 = &UNK_110503f88;
    ppuVar6 = &puStack_a0;
    puStack_78 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_78;
    puVar7 = puVar4;
    func_0x000107c61174();
    func_0x000107c61574(puVar5);
    puStack_b8 = &UNK_110503fc0;
    func_0x000107c613fc(&UNK_110503fc0,0x18,7);
    *(undefined **)(puStack_b8 + 0x10) = puVar7;
    puVar5 = &UNK_110503fe8;
    func_0x000107c613fc(&UNK_110503fe8,0x20,7);
    uStack_c0 = 0x10241c810;
    *(undefined8 *)(puVar5 + 0x10) = 0x10241c810;
    *(undefined **)(puVar5 + 0x18) = puStack_b8;
    pcStack_80 = (code *)0x10241cac4;
    puStack_a0 = puVar13;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100de6bdc;
    puStack_88 = &UNK_110504000;
    ppuVar8 = &puStack_a0;
    puStack_78 = puVar5;
    func_0x000107c60bc4(ppuVar8);
    puVar13 = puStack_78;
    func_0x000107c61174();
    func_0x000107c61574(puVar13);
    puVar13 = &UNK_110504038;
    func_0x000107c613fc(&UNK_110504038,0x18,7);
    *(undefined **)(puVar13 + 0x10) = puVar7;
    puVar5 = &UNK_110504060;
    func_0x000107c613fc(&UNK_110504060,0x20,7);
    uStack_c8 = 0x10241c844;
    *(undefined8 *)(puVar5 + 0x10) = 0x10241c844;
    *(undefined **)(puVar5 + 0x18) = puVar13;
    pcStack_80 = (code *)0x10241cac8;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100de6bdc;
    puStack_88 = &UNK_110504078;
    ppuVar9 = &puStack_a0;
    puStack_78 = puVar5;
    func_0x000107c60bc4(ppuVar9);
    puVar5 = puStack_78;
    func_0x000107c61174(puVar7);
    func_0x000107c61574(puVar5);
    func_0x000107c4c66c(lVar1);
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c551e8(puVar3);
  func_0x000107c51b68(param_1);
  func_0x000107c61180();
  pcStack_80 = FUN_102419b60;
  puStack_78 = (undefined *)0x0;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_110503e20;
  ppuVar6 = &puStack_a0;
  puStack_a0 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_78);
  puVar7 = &UNK_110503e58;
  func_0x000107c613fc(&UNK_110503e58,0x18,7);
  *(undefined **)(puVar7 + 0x10) = puVar3;
  puVar10 = &UNK_110503e80;
  func_0x000107c613fc(&UNK_110503e80,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = 0x10241c780;
  *(undefined **)(puVar10 + 0x18) = puVar7;
  pcStack_80 = (code *)0x10241cabc;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100de6bdc;
  puStack_88 = &UNK_110503e98;
  ppuVar8 = &puStack_a0;
  puStack_a0 = puVar5;
  puStack_78 = puVar10;
  func_0x000107c60bc4(ppuVar8);
  puVar10 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_110503ed0;
  func_0x000107c613fc(&UNK_110503ed0,0x18,7);
  *(undefined **)(puVar10 + 0x10) = puVar3;
  puVar11 = &UNK_110503ef8;
  func_0x000107c613fc(&UNK_110503ef8,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_10241c7b4;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  pcStack_80 = (code *)0x10241cac0;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100de58f0;
  puStack_88 = &UNK_110503f10;
  ppuVar9 = &puStack_a0;
  puStack_a0 = puVar5;
  puStack_78 = puVar11;
  func_0x000107c60bc4(ppuVar9);
  puVar5 = puStack_78;
  func_0x000107c61174(puVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c4c608(param_1);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  func_0x000100cf0f28(pcStack_b0,puStack_a8);
  func_0x000100cf0f28(uStack_c0,puStack_b8);
  func_0x000100cf0f28(uStack_c8,puVar13);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar7);
  return puVar3;
}



/* Entry: 10241bf90; end: 10241c2e7;  */

undefined *
FUN_10241bf90(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uStack_90;
  ulong uStack_88;
  
  uVar13 = param_3 & 0xffffffffffffff8;
  uVar5 = param_2;
  if (param_3 >> 0x3e == 0) {
    uVar14 = *(ulong *)(uVar13 + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar14 = uVar13;
    if (0x7fffffffffffffff < param_3) {
      uVar14 = param_3;
    }
    func_0x000107c60480();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  puVar8 = puVar10;
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
  if (uVar14 != 0) {
    uVar6 = 0;
LAB_10241bfec:
    do {
      if ((param_3 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar13 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10241c1cc);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(param_3 + uVar6 * 8 + 0x20);
        func_0x000107c61174();
        uStack_90 = uVar5;
      }
      else {
        uVar4 = uVar6;
        uStack_90 = param_3;
        FUN_10241a250(uVar6,param_3,&PTR_PTR_1126aa7d8,0x112e97bc0);
      }
      uVar1 = uVar6 + 1;
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10241c1c8);
        (*pcVar3)();
      }
      uVar5 = uVar4;
      func_0x000107c5d0f0();
      if ((int)uVar5 == 1) {
        uVar6 = uVar4;
        func_0x000107c44fcc();
        func_0x000107c61180();
        uStack_88 = uVar6;
        func_0x000107c5faec();
        uVar5 = uStack_90;
        func_0x000107c61170(uVar6);
        puVar7 = puVar8;
        func_0x000107c61558();
        puVar9 = puVar8;
        if (((ulong)puVar7 & 1) == 0) {
          uVar5 = *(long *)(puVar8 + 0x10) + 1;
          puVar9 = (undefined *)0x0;
          FUN_10241ad80(0,uVar5,1,puVar8,PTR__swift_bridgeObjectRelease_11034f258);
        }
        uVar2 = *(ulong *)(puVar9 + 0x10);
        uVar6 = uVar2 + 1;
        puVar8 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          uVar5 = uVar6;
          FUN_10241ad80(puVar8,uVar6,1,puVar9,PTR__swift_bridgeObjectRelease_11034f258);
        }
        *(ulong *)(puVar8 + 0x10) = uVar6;
        puVar7 = puVar8 + uVar2 * 0x10;
      }
      else {
        uVar5 = uVar4;
        func_0x000107c5d0f0();
        if ((int)uVar5 != 2) {
          func_0x000107c61170(uVar4);
          uVar5 = uStack_90;
          uVar6 = uVar6 + 1;
          if (uVar1 == uVar14) break;
          goto LAB_10241bfec;
        }
        uVar6 = uVar4;
        func_0x000107c44fcc();
        func_0x000107c61180();
        uStack_88 = uVar6;
        func_0x000107c5faec();
        uVar5 = uStack_90;
        func_0x000107c61170(uVar6);
        puVar7 = puVar10;
        func_0x000107c61558();
        puVar9 = puVar10;
        if (((ulong)puVar7 & 1) == 0) {
          uVar5 = *(long *)(puVar10 + 0x10) + 1;
          puVar9 = (undefined *)0x0;
          FUN_10241ad80(0,uVar5,1,puVar10,PTR__swift_bridgeObjectRelease_11034f258);
        }
        uVar2 = *(ulong *)(puVar9 + 0x10);
        uVar6 = uVar2 + 1;
        puVar10 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          uVar5 = uVar6;
          FUN_10241ad80(puVar10,uVar6,1,puVar9,PTR__swift_bridgeObjectRelease_11034f258);
        }
        *(ulong *)(puVar10 + 0x10) = uVar6;
        puVar7 = puVar10 + uVar2 * 0x10;
      }
      *(ulong *)(puVar7 + 0x20) = uStack_88;
      *(ulong *)(puVar7 + 0x28) = uStack_90;
      func_0x000107c61170(uVar4);
      uVar6 = uVar1;
    } while (uVar1 != uVar14);
  }
  if (param_5 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107c5fadc(param_4);
  }
  puVar9 = PTR_PTR_1126b5478;
  func_0x000107c610f8();
  func_0x000107c5fadc(param_1,param_2);
  puVar7 = PTR___sSSN_11034da80;
  puVar11 = puVar8;
  func_0x000107c5fc48(puVar8,PTR___sSSN_11034da80);
  puVar12 = puVar10;
  func_0x000107c5fc48(puVar10,puVar7);
  func_0x000107c47474(0);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar12);
  if (puVar9 != (undefined *)0x0) {
    func_0x000107c6142c(puVar8);
    func_0x000107c6142c(puVar10);
    return puVar9;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10241c2e8);
  (*pcVar3)();
}



/* Entry: 10241c2e8; end: 10241c317;  */

void FUN_10241c2e8(void)

{
  long unaff_x20;
  
  FUN_1024185dc(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10241c318; end: 10241c333;  */

void FUN_10241c318(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110504148;
  if (lRam0000000112e97c30 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e97c30 = param_1;
  }
  return;
}



/* Entry: 10241c334; end: 10241c353;  */

void FUN_10241c334(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10241c354; end: 10241c363;  */

/* WARNING: Possible PIC construction at 0x000102417b70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102417b74) */

void FUN_10241c354(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126aa7d8;
  func_0x000107c610f8(PTR_PTR_1126aa7d8,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c46d30(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10241c364; end: 10241c383;  */

void FUN_10241c364(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10241c384; end: 10241c3bb;  */

void FUN_10241c384(void)

{
  long unaff_x20;
  
  FUN_10241912c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10241c3bc; end: 10241c3df;  */

void FUN_10241c3bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *****pppppuVar1;
  ulong uVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  byte bVar5;
  undefined8 ****ppppuVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 *****pppppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *****pppppuVar16;
  undefined8 *****pppppuVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 *****pppppuVar20;
  long unaff_x20;
  undefined8 *****pppppuVar21;
  undefined *puStack_88;
  undefined8 ****ppppuStack_68;
  
  pppppuVar3 = *(undefined8 ******)(unaff_x20 + 0x10);
  pppppuVar4 = *(undefined8 ******)(unaff_x20 + 0x18);
  bVar5 = *(byte *)(unaff_x20 + 0x20);
  uVar19 = *param_2;
  ppppuStack_68 = (undefined8 *****)0x0;
  uVar8 = 0;
  FUN_10241c8d0(0,0x112e97c20,&PTR_PTR_1126b1498,bVar5,*(undefined8 *)(unaff_x20 + 0x28));
  pppppuVar16 = &ppppuStack_68;
  func_0x000107c5fc50(uVar19,pppppuVar16,uVar8);
  ppppuVar6 = ppppuStack_68;
  if ((undefined8 *****)ppppuStack_68 == (undefined8 *****)0x0) {
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    pppppuVar21 = (undefined8 *****)((ulong)ppppuStack_68 & 0xffffffffffffff8);
    if ((ulong)ppppuStack_68 >> 0x3e == 0) {
      pppppuVar20 = (undefined8 *****)pppppuVar21[2];
    }
    else {
      pppppuVar20 = (undefined8 *****)ppppuStack_68;
      if (-1 < (long)ppppuStack_68) {
        pppppuVar20 = pppppuVar21;
      }
      func_0x000107c60480();
    }
    puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (pppppuVar20 != (undefined8 *****)0x0) {
      pppppuVar12 = (undefined8 *****)0x0;
      do {
        while( true ) {
          if (((ulong)ppppuVar6 & 0xc000000000000001) == 0) {
            if (pppppuVar21[2] <= pppppuVar12) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1024167d8);
              (*pcVar7)();
            }
            pppppuVar9 = (undefined8 *****)ppppuVar6[(long)((long)pppppuVar12 + 4)];
            func_0x000107c61174();
            pppppuVar17 = pppppuVar16;
          }
          else {
            pppppuVar9 = pppppuVar12;
            pppppuVar17 = (undefined8 *****)ppppuVar6;
            FUN_10241a250(pppppuVar12,ppppuVar6,&PTR_PTR_1126b1498,0x112e97c20);
          }
          pppppuVar1 = (undefined8 *****)((long)pppppuVar12 + 1);
          if (SCARRY8((long)pppppuVar12,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1024167d4);
            (*pcVar7)();
          }
          pppppuVar10 = pppppuVar9;
          func_0x000107c5aaf8();
          func_0x000107c61180();
          pppppuVar11 = pppppuVar10;
          func_0x000107c5faec();
          pppppuVar16 = pppppuVar17;
          func_0x000107c61170(pppppuVar10);
          if (pppppuVar11 == pppppuVar3 && pppppuVar17 == pppppuVar4) break;
          pppppuVar16 = pppppuVar17;
          func_0x000107c605b8(pppppuVar11,pppppuVar17,pppppuVar3,pppppuVar4,0);
          func_0x000107c6142c(pppppuVar17);
          if ((((ulong)pppppuVar11 & 1) == 0) || ((bVar5 & 1) != 0)) goto LAB_1024166b4;
LAB_102416674:
          func_0x000107c61170(pppppuVar9);
          pppppuVar12 = (undefined8 *****)((long)pppppuVar12 + 1);
          if (pppppuVar1 == pppppuVar20) goto LAB_1024167fc;
        }
        func_0x000107c6142c(pppppuVar17);
        if ((bVar5 & 1) == 0) goto LAB_102416674;
LAB_1024166b4:
        pppppuVar12 = pppppuVar9;
        FUN_10241ba98();
        func_0x000107c61170(pppppuVar9);
        puVar13 = puStack_88;
        func_0x000107c61550();
        if ((((int)puVar13 == 0) || ((long)puStack_88 < 0)) ||
           (puVar13 = puStack_88, ((ulong)puStack_88 >> 0x3e & 1) != 0)) {
          if ((ulong)puStack_88 >> 0x3e == 0) {
            puVar13 = *(undefined **)(((ulong)puStack_88 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar13 = (undefined *)((ulong)puStack_88 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puStack_88) {
              puVar13 = puStack_88;
            }
            func_0x000107c60480();
          }
          pppppuVar16 = (undefined8 *****)(puVar13 + 1);
          puVar13 = (undefined *)0x0;
          FUN_10241a770(0,pppppuVar16,1,puStack_88,0x112e97c10,&PTR_PTR_1126aa7e8,0x112e97c18,
                        &UNK_10daa3070);
        }
        uVar18 = (ulong)puVar13 & 0xffffffffffffff8;
        uVar2 = *(ulong *)(uVar18 + 0x10);
        pppppuVar9 = (undefined8 *****)(uVar2 + 1);
        puStack_88 = puVar13;
        if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar2) {
          puStack_88 = (undefined *)(ulong)(1 < *(ulong *)(uVar18 + 0x18));
          pppppuVar16 = pppppuVar9;
          FUN_10241a770(puStack_88,pppppuVar9,1,puVar13,0x112e97c10,&PTR_PTR_1126aa7e8,0x112e97c18,
                        &UNK_10daa3070);
          uVar18 = (ulong)puStack_88 & 0xffffffffffffff8;
        }
        *(undefined8 ******)(uVar18 + 0x10) = pppppuVar9;
        *(undefined8 ******)(uVar18 + uVar2 * 8 + 0x20) = pppppuVar12;
        pppppuVar12 = pppppuVar1;
      } while (pppppuVar1 != pppppuVar20);
    }
LAB_1024167fc:
    func_0x000107c6142c(ppppuVar6);
    puVar14 = puStack_88;
    func_0x00010241689c(puStack_88,&PTR_PTR_1126aa7e8,0x112e97c10);
    func_0x000107c6142c(puStack_88);
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8();
    puVar15 = puVar14;
    func_0x000107c5fc48(puVar14,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(puVar14);
    func_0x000107c45788();
    func_0x000107c61170(puVar15);
  }
  *param_1 = puVar13;
  return;
}



/* Entry: 10241c3e0; end: 10241c40f;  */

void FUN_10241c3e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))(uVar1,param_2[1]);
  *param_1 = uVar1;
  return;
}



/* Entry: 10241c410; end: 10241c41f;  */

void FUN_10241c410(long *param_1,ulong *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puStack_68;
  
  uVar3 = *param_2;
  func_0x000107c5fc54(uVar3,PTR___syXlN_11034f1a0 + 8);
  uVar14 = uVar3 & 0xffffffffffffff8;
  if (uVar3 >> 0x3e == 0) {
    uVar9 = *(ulong *)(uVar14 + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar9 = uVar14;
    if (0x7fffffffffffffff < uVar3) {
      uVar9 = uVar3;
    }
    func_0x000107c60480();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar5;
  if (uVar9 != 0) {
    uVar11 = 0;
    do {
      while( true ) {
        if ((uVar3 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar14 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1024194c8);
            (*pcVar2)();
          }
          uVar13 = *(ulong *)(uVar3 + uVar11 * 8 + 0x20);
          func_0x000107c615f0(uVar13);
        }
        else {
          uVar13 = uVar11;
          func_0x00010125fef0(uVar11,uVar3);
        }
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1024194c4);
          (*pcVar2)();
        }
        uVar8 = uVar11 + 1;
        uVar4 = uVar13;
        puStack_68 = PTR_DAT_11269d940;
        func_0x000107c61494(uVar13,1,&puStack_68);
        if (uVar4 == 0) break;
        puVar15 = puVar5;
        func_0x000107c61550();
        if ((((int)puVar15 == 0) || ((long)puVar5 < 0)) ||
           (puVar15 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar5 >> 0x3e == 0) {
            puVar10 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar10 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar5) {
              puVar10 = puVar5;
            }
            func_0x000107c60480(puVar10);
          }
          puVar15 = (undefined *)0x0;
          FUN_10241a8d0(0,puVar10 + 1,1,puVar5);
        }
        uVar13 = (ulong)puVar15 & 0xffffffffffffff8;
        uVar11 = *(ulong *)(uVar13 + 0x10);
        puVar5 = puVar15;
        if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar11) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
          FUN_10241a8d0(puVar5,uVar11 + 1,1,puVar15);
          uVar13 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar13 + 0x10) = uVar11 + 1;
        *(ulong *)(uVar13 + uVar11 * 8 + 0x20) = uVar4;
        uVar11 = uVar8;
        if (uVar8 == uVar9) goto LAB_1024194e4;
      }
      func_0x000107c615e8(uVar13);
      uVar11 = uVar11 + 1;
    } while (uVar8 != uVar9);
  }
LAB_1024194e4:
  func_0x000107c6142c(uVar3);
  puVar15 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar10 = *(undefined **)(puVar15 + 0x10);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar10 = puVar15;
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar10 = puVar5;
    }
    func_0x000107c60480();
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar1;
  if (puVar10 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar5 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar15 + 0x10) <= puVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1024195fc);
            (*pcVar2)();
          }
          puVar12 = *(undefined **)(puVar5 + (long)puVar7 * 8 + 0x20);
          func_0x000107c615f0(puVar12);
        }
        else {
          puVar12 = puVar7;
          FUN_10241a40c(puVar7,puVar5);
        }
        if (SCARRY8((long)puVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1024195f8);
          (*pcVar2)();
        }
        puVar16 = puVar7 + 1;
        puVar6 = puVar12;
        func_0x000107c5ab44();
        if (((ulong)puVar6 & 1) == 0) break;
        puVar7 = puVar1;
        func_0x000107c61558();
        if (((ulong)puVar7 & 1) == 0) {
          FUN_10241ad48(0,*(long *)(puVar1 + 0x10) + 1,1);
        }
        uVar3 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
          FUN_10241ad48(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
        }
        *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
        *(undefined **)(puVar1 + uVar3 * 8 + 0x20) = puVar12;
        puVar7 = puVar16;
        if (puVar16 == puVar10) goto LAB_102419618;
      }
      func_0x000107c615e8(puVar12);
      puVar7 = puVar7 + 1;
    } while (puVar16 != puVar10);
  }
LAB_102419618:
  func_0x000107c6142c(puVar5);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10241c420; end: 10241c687;  */

void FUN_10241c420(long param_1,ulong param_2,uint param_3,long *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong *puVar16;
  ulong uVar17;
  
  uVar12 = *(ulong *)(param_1 + 0x10);
  func_0x000107c61434();
  func_0x000107c61434(param_2);
  if (uVar12 != 0) {
    uVar17 = 0;
    uVar13 = param_2 & 0xffffffffffffff8;
    uVar2 = uVar13;
    if (0x7fffffffffffffff < param_2) {
      uVar2 = param_2;
    }
    puVar16 = (ulong *)(param_1 + 0x28);
    do {
      uVar3 = puVar16[-1];
      uVar4 = *puVar16;
      if (param_2 >> 0x3e == 0) {
        uVar7 = *(ulong *)(uVar13 + 0x10);
      }
      else {
        uVar7 = uVar2;
        func_0x000107c60480();
      }
      if (uVar17 == uVar7) break;
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar13 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10241c674);
          (*pcVar5)();
        }
        uVar7 = *(ulong *)(param_2 + uVar17 * 8 + 0x20);
        func_0x000107c61434(uVar4);
        func_0x000107c61174();
      }
      else {
        func_0x000107c61434(uVar4);
        uVar7 = uVar17;
        FUN_10241a5b0(uVar17,param_2);
      }
      lVar14 = *param_4;
      uVar8 = uVar3;
      uVar9 = uVar4;
      func_0x000100029284();
      lVar10 = *(long *)(lVar14 + 0x10);
      uVar11 = (ulong)~(uint)uVar9 & 1;
      lVar15 = lVar10 + uVar11;
      if (SCARRY8(lVar10,uVar11)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10241c670);
        (*pcVar5)();
      }
      if (*(long *)(lVar14 + 0x18) < lVar15) {
        FUN_10241b3c8(lVar15,param_3 & 1,0x112e550f8,&UNK_10da57230);
        uVar8 = uVar3;
        uVar11 = uVar4;
        func_0x000100029284();
        if (((uint)uVar9 & 1) != ((uint)uVar11 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10241c688);
          (*pcVar5)();
        }
      }
      else if ((param_3 & 1) == 0) {
        func_0x00010241b268(0x112e550f8,&UNK_10da57230);
      }
      lVar15 = *param_4;
      if ((uVar9 & 1) == 0) {
        lVar10 = lVar15 + (uVar8 >> 6) * 8;
        *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar8 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar15 + 0x30) + uVar8 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        *(ulong *)(*(long *)(lVar15 + 0x38) + uVar8 * 8) = uVar7;
        if (SCARRY8(*(long *)(lVar15 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10241c678);
          (*pcVar5)();
        }
        *(long *)(lVar15 + 0x10) = *(long *)(lVar15 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar4);
        uVar6 = *(undefined8 *)(*(long *)(lVar15 + 0x38) + uVar8 * 8);
        *(ulong *)(*(long *)(lVar15 + 0x38) + uVar8 * 8) = uVar7;
        func_0x000107c61170(uVar6);
      }
      uVar17 = uVar17 + 1;
      puVar16 = puVar16 + 2;
      param_3 = 1;
    } while (uVar12 != uVar17);
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_1);
  return;
}



/* Entry: 10241c688; end: 10241c693;  */

void FUN_10241c688(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  ulong uVar19;
  undefined8 uVar20;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x10) + 0x10;
  puVar5 = &UNK_110503c28;
  func_0x000107c613fc(&UNK_110503c28,0x18,7);
  *(long *)(puVar5 + 0x10) = lVar1;
  puVar6 = &UNK_110503c50;
  func_0x000107c613fc(&UNK_110503c50,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_10241c694;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x10241c6d4;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1011a7a34;
  puStack_88 = &UNK_110503c68;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4();
  puVar8 = puStack_78;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  puVar8 = &UNK_110503ca0;
  func_0x000107c613fc(&UNK_110503ca0,0x18,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar11;
  puVar9 = &UNK_110503cc8;
  func_0x000107c613fc(&UNK_110503cc8,0x20,7);
  *(code **)(puVar9 + 0x10) = FUN_10241c6f4;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  pcStack_80 = FUN_10241c6fc;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_110503ce0;
  ppuVar10 = &puStack_a0;
  puStack_78 = puVar9;
  func_0x000107c60bc4();
  puVar12 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar12);
  puVar12 = &UNK_110503d18;
  func_0x000107c613fc(&UNK_110503d18,0x20,7);
  *(long *)(puVar12 + 0x10) = lVar1;
  *(undefined8 *)(puVar12 + 0x18) = uVar20;
  puVar13 = &UNK_110503d40;
  func_0x000107c613fc(&UNK_110503d40,0x20,7);
  *(undefined8 *)(puVar13 + 0x10) = 0x10241c71c;
  *(undefined **)(puVar13 + 0x18) = puVar12;
  pcStack_80 = (code *)0x10241cacc;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_110503d58;
  ppuVar14 = &puStack_a0;
  puStack_78 = puVar13;
  func_0x000107c60bc4(ppuVar14);
  puVar15 = puStack_78;
  func_0x000107c6157c(puVar13);
  func_0x000107c61574(puVar15);
  puVar15 = &UNK_110503d90;
  func_0x000107c613fc(&UNK_110503d90,0x18,7);
  *(undefined8 *)(puVar15 + 0x10) = uVar11;
  puVar16 = &UNK_110503db8;
  func_0x000107c613fc(&UNK_110503db8,0x20,7);
  *(code **)(puVar16 + 0x10) = FUN_10241c758;
  *(undefined **)(puVar16 + 0x18) = puVar15;
  pcStack_80 = FUN_10241c760;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100eb5728;
  puStack_88 = &UNK_110503dd0;
  ppuVar17 = &puStack_a0;
  puStack_78 = puVar16;
  func_0x000107c60bc4(ppuVar17);
  puVar3 = puStack_78;
  func_0x000107c61174(uVar11);
  func_0x000107c6157c(puVar16);
  func_0x000107c61574(puVar3);
  pcStack_80 = (code *)0x102419b64;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_110503df8;
  ppuVar18 = &puStack_a0;
  func_0x000107c60bc4(ppuVar18);
  func_0x000107c61574(puStack_78);
  func_0x000107c4c5bc(param_1);
  func_0x000107c60bd0(ppuVar18);
  func_0x000107c60bd0(ppuVar17);
  func_0x000107c60bd0(ppuVar14);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puVar5);
  puVar5 = puVar6;
  func_0x000107c61544(puVar6,"",0x56,0x18e,0x22,1);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102419fd4);
    (*pcVar4)();
  }
  puVar5 = puVar9;
  func_0x000107c61544(puVar9,"",0x56,400,0x1c,1);
  func_0x000107c61574(puVar12);
  func_0x000107c61574(puVar9);
  if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102419fd8);
    (*pcVar4)();
  }
  puVar5 = puVar13;
  func_0x000107c61544(puVar13,"",0x56,0x192,0x23,1);
  func_0x000107c61574(puVar15);
  func_0x000107c61574(puVar13);
  if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102419fdc);
    (*pcVar4)();
  }
  puVar5 = puVar16;
  func_0x000107c61544(puVar16,"",0x56,0x194,0x1b,1);
  func_0x000107c61574(puVar16);
  if (((ulong)puVar5 & 1) == 0) {
    uVar19 = 0;
    func_0x000107c61544(0,"",0x56,0x197,0x1d,1);
    if ((uVar19 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102419fe4);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102419fe0);
  (*pcVar4)();
}



/* Entry: 10241c694; end: 10241c6f3;  */

void FUN_10241c694(undefined8 param_1)

{
  long unaff_x20;
  undefined8 *puVar1;
  undefined1 auStack_38 [24];
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x000107c61428(puVar1,auStack_38,1,0);
  *puVar1 = param_1;
  return;
}



/* Entry: 10241c6f4; end: 10241c6fb;  */

void FUN_10241c6f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c59254(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10241c6fc; end: 10241c757;  */

void FUN_10241c6fc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10241c758; end: 10241c75f;  */

/* WARNING: Possible PIC construction at 0x00010241a058: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010241a05c) */

void FUN_10241c758(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c53ce0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10241c760; end: 10241c7b3;  */

void FUN_10241c760(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10241c7b4; end: 10241c7bb;  */

void FUN_10241c7b4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  func_0x000107c58d8c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10241c7bc; end: 10241c877;  */

void FUN_10241c7bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c552b8(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10241c878; end: 10241c8af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10241c878(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e97b78);
  func_0x000107c61174();
  return;
}



/* Entry: 10241c8b0; end: 10241c8cf;  */

void FUN_10241c8b0(void)

{
  long unaff_x20;
  
  FUN_1024190d0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),&DAT_112e97b78);
  return;
}



/* Entry: 10241c8d0; end: 10241c90f;  */

void FUN_10241c8d0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10241c910; end: 10241c947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10241c910(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e97b70);
  func_0x000107c61174();
  return;
}



/* Entry: 10241c948; end: 10241c967;  */

void FUN_10241c948(void)

{
  long unaff_x20;
  
  FUN_1024190d0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),&DAT_112e97b70);
  return;
}



/* Entry: 10241c968; end: 10241c993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10241c968(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long unaff_x20;
  code *pcVar12;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)(lVar1 + _DAT_112e97b48);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar2 == (undefined8 *)0x0) {
      func_0x000107c61170(lVar1);
    }
    else {
      puVar3 = puVar2;
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar4 = *puVar3;
      func_0x000107c61174(uVar4);
      uVar5 = 0xd00000000000002a;
      func_0x000100029b28(0xd00000000000002a,0x800000010f099e80);
      func_0x000107c61170(uVar4);
      lVar11 = *(long *)(lVar1 + _DAT_112e97b58);
      func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
      uVar4 = 0;
      if (lVar11 == 0) {
        FUN_1024163fc(0,puVar2);
        pcVar7 = (code *)0x102418bec;
      }
      else {
        FUN_102416a88();
        pcVar7 = FUN_10241896c;
      }
      uVar6 = uVar4;
      func_0x0001000b637c(uVar4);
      func_0x000107c61170(uVar4);
      uVar4 = 0x112d38270;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      func_0x0001000bfde0(pcVar7,0,uVar4);
      func_0x000107c61574(uVar6);
      puVar8 = &UNK_1105040d8;
      func_0x000107c613fc(&UNK_1105040d8,0x11,7);
      puVar8[0x10] = 0;
      puVar9 = &UNK_110503ae8;
      func_0x000107c613fc(&UNK_110503ae8,0x18,7);
      func_0x000107c61614(puVar9 + 0x10,lVar1);
      puVar10 = &UNK_110504100;
      func_0x000107c613fc(&UNK_110504100,0x38,7);
      *(undefined **)(puVar10 + 0x10) = puVar9;
      *(undefined **)(puVar10 + 0x18) = puVar8;
      *(undefined8 *)(puVar10 + 0x20) = uVar5;
      *(undefined8 *)(puVar10 + 0x28) = 0;
      *(undefined8 **)(puVar10 + 0x30) = puVar2;
      pcVar12 = *(code **)(*(long *)pcVar7 + 0x60);
      func_0x000107c6157c(pcVar7);
      func_0x000107c6157c(puVar8);
      func_0x000107c615f0(puVar2);
      uVar4 = 0x10241c970;
      puVar9 = puVar10;
      (*pcVar12)();
      func_0x000107c61574(puVar10);
      func_0x000107c615e8(puVar2);
      func_0x000107c61578(pcVar7,2);
      puVar2 = (undefined8 *)(lVar1 + _DAT_112e97b88);
      uVar5 = *puVar2;
      *puVar2 = uVar4;
      puVar2[1] = puVar9;
      func_0x000107c61574(puVar8);
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(uVar5);
    }
  }
  return;
}



/* Entry: 10241c994; end: 10241c9d7;  */

void FUN_10241c994(long param_1,long *param_2,long param_3)

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



/* Entry: 10241c9d8; end: 10241c9ff;  */

void FUN_10241c9d8(void)

{
  func_0x00010241c3a0();
  return;
}



/* Entry: 10241ca00; end: 10241cacf;  */

void FUN_10241ca00(long param_1,long param_2)

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



/* Entry: 10241cad0; end: 10241cc0f;  */

long FUN_10241cad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  lVar2 = param_4;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    *(long *)(unaff_x20 + 0x20) = lVar2;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10241cb7c);
  (*pcVar1)();
}



/* Entry: 10241cc10; end: 10241ccbb;  */

void FUN_10241cc10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5ab18(uVar1);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4b6b0(uVar2);
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x00010241a0c0(0);
  func_0x000107c610f8();
  func_0x000107c615f0(uVar4);
  uVar3 = uVar1;
  FUN_10241b754(uVar1,uVar2,uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar4);
  uVar1 = 0;
  FUN_10241cf74(0);
  func_0x000107c610f8();
  func_0x00010241cee4(uVar3,uVar1);
  return;
}



/* Entry: 10241ccbc; end: 10241ccdf;  */

void FUN_10241ccbc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10241cce0; end: 10241cd33;  */

void FUN_10241cce0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10241cd34; end: 10241cdef;  */

void FUN_10241cd34(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5ab18();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4b6b0(uVar2);
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x00010241a0c0(0);
  func_0x000107c610f8();
  func_0x000107c615f0(uVar4);
  uVar3 = uVar1;
  FUN_10241b754(uVar1,uVar2,uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar4);
  uVar1 = 0;
  FUN_10241cf74(0);
  func_0x000107c610f8();
  func_0x00010241cee4(uVar3,uVar1);
  *param_1 = uVar3;
  return;
}



/* Entry: 10241cdf0; end: 10241ce77;  */

void FUN_10241cdf0(undefined8 param_1)

{
  if (lRam0000000112e97c60 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6d62c8);
  return;
}



/* Entry: 10241ce78; end: 10241ce97; -[ComposerListStoreService listStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10241ce78(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112e97d18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10241ce98; end: 10241cf2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10241ce98(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e97d18) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10241cf30; end: 10241cf63;  */

void FUN_10241cf30(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10241cf64; end: 10241cf73; -[ComposerListStoreService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10241cf64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e97d18));
  return;
}



/* Entry: 10241cf74; end: 10241cf93;  */

void FUN_10241cf74(void)

{
  func_0x000107c61168(&PTR_PTR_11283d100);
  return;
}



/* Entry: 10241cf94; end: 10241d0a3;  */

/* WARNING: Possible PIC construction at 0x00010241d010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010241d034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010241d058: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010241d038) */
/* WARNING: Removing unreachable block (ram,0x00010241d014) */
/* WARNING: Removing unreachable block (ram,0x00010241d05c) */

void FUN_10241cf94(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aa7f8;
    func_0x000107c610f8(PTR_PTR_1126aa7f8);
    func_0x000107c453e4();
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c58f1c(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10241d0a4; end: 10241d153; -[_TtC22SendToActionMenuLogger30SendToActionMenuBlizzardLogger logActionMenuEndWithSendToSessionId:recipientId:recipientType:] */

/* WARNING: Possible PIC construction at 0x00010241d12c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010241d130) */

void FUN_10241d0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  uVar2 = uVar1;
  func_0x000107c5faec(param_5);
  func_0x000107c6157c(param_1);
  FUN_10241cf94(param_3,param_2,param_4,uVar1,param_5,uVar2);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10241d154; end: 10241d197;  */

void FUN_10241d154(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10241d198; end: 10241d1f3;  */

void FUN_10241d198(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 10241d1f4; end: 10241d303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10241d1f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083868);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_1105042d8;
  func_0x000107c613fc(&UNK_1105042d8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  pcStack_40 = FUN_10241d348;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_10241d350;
  puStack_48 = &UNK_1105042f0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  uVar4 = 0;
  FUN_10241d588(0);
  func_0x000107c610f8();
  func_0x00010241d4cc(puVar1,uVar4);
  func_0x000107c61170(uVar5);
  return puVar1;
}



/* Entry: 10241d304; end: 10241d347;  */

long FUN_10241d304(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x00010241d178();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  func_0x000107c61174(param_1);
  return lVar1;
}



/* Entry: 10241d348; end: 10241d34f;  */

long FUN_10241d348(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x00010241d178();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  func_0x000107c61174(uVar2);
  return lVar1;
}



/* Entry: 10241d350; end: 10241d387;  */

void FUN_10241d350(long param_1)

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



/* Entry: 10241d388; end: 10241d3ab;  */

void FUN_10241d388(long param_1,long param_2)

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



/* Entry: 10241d3ac; end: 10241d44b;  */

void FUN_10241d3ac(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10241d44c; end: 10241d46f;  */

void FUN_10241d44c(undefined8 *param_1,undefined8 param_2)

{
  FUN_10241d1f4();
  *param_1 = param_2;
  return;
}



/* Entry: 10241d470; end: 10241d47f; -[SendToActionMenuLoggerServices sendToActionMenuLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10241d470(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e97eb8));
  return;
}



/* Entry: 10241d480; end: 10241d517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10241d480(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e97eb8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10241d518; end: 10241d577; -[SendToActionMenuLoggerServices init] */

void FUN_10241d518(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToActionMenuLoggerServices.SendToActionMenuLoggerServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10241d544);
  (*pcVar1)();
}



/* Entry: 10241d578; end: 10241d587; -[SendToActionMenuLoggerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10241d578(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e97eb8));
  return;
}



/* Entry: 10241d588; end: 10241d5a7;  */

void FUN_10241d588(void)

{
  func_0x000107c61168(&PTR_PTR_11283d1c0);
  return;
}



/* Entry: 10241d5a8; end: 10241d72b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10241d5a8(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar2 = _DAT_112e97ee8;
  (**(code **)(lVar6 + 0x68))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar3);
  puVar4 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar5 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f09a080);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar5);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112e97ef8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e97f00);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e97f08);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e97f10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e97ef0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}


