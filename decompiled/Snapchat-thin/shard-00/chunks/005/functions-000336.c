/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10070189c; end: 100701a77;  */

void FUN_10070189c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a9958;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef857e0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 100701a78; end: 100701b9f; -[SCDiscoverVideoCatalogServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100701a78(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1 + _DAT_112769838;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c3fa08();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  param_1 = param_1 + _DAT_11276983c;
  func_0x000107c61148();
  lVar1 = param_1;
  func_0x000107c4d594();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar3 = PTR_PTR_1126ae720;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  puStack_50 = &UNK_107aaf980;
  puStack_48 = &UNK_1109f9270;
  lStack_40 = lVar2;
  lStack_38 = lVar1;
  func_0x000107c61174(lVar1);
  func_0x000107c61174(lVar2);
  func_0x000107c3e4fc(puVar3,param_2,&puStack_60);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126d63b0;
  func_0x000107c610f4(PTR_PTR_1126d63b0);
  func_0x000107c465d0();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lStack_38);
  func_0x000107c61170(lStack_40);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100701ba0; end: 100701ba7; -[SCNetworkConnectivityAnnouncerServices networkConnectivityAnnouncer] */

undefined8 FUN_100701ba0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100701ba8; end: 100701c1b; -[SCDiscoverVideoCatalogServices initWithDiscoverVideoCatalogService:] */

undefined1 * FUN_100701ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f9bc8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100701c1c; end: 100701c4f;  */

void FUN_100701c1c(void)

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



/* Entry: 100701c50; end: 100701c57;  */

void FUN_100701c50(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100701c58; end: 100701cab;  */

void FUN_100701c58(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100701cac; end: 100701cbf;  */

void FUN_100701cac(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_1001f79d0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  puVar2 = PTR_PTR_1126a87f0;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar10 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc3410);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar10 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef857e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  puVar11 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined **)(lVar1 + 0x48) = puVar11;
  *param_1 = lVar1;
  return;
}



/* Entry: 100701cc0; end: 10070211b;  */

void FUN_100701cc0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_1001f79d0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  puVar1 = PTR_PTR_1126a87f0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar9 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc3410);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef857e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  puVar10 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x48) = puVar10;
  *param_1 = param_2;
  return;
}



/* Entry: 10070211c; end: 10070227b; -[SCSafeBrowsingServiceProvider provide] */

void FUN_10070211c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1056dc704;
  puStack_68 = &UNK_1108a9be0;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126bd310;
  func_0x000107c610f4(PTR_PTR_1126bd310);
  func_0x000107c48458();
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10070227c; end: 10070231f; -[SCSafeBrowsingServices initWithSafeBrowsingAPI:composerSafeBrowsingAPI:] */

undefined1 *
FUN_10070227c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270b960;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100702320; end: 100702373;  */

void FUN_100702320(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100702374; end: 10070237b;  */

void FUN_100702374(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x2a0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10070237c; end: 1007023cf;  */

void FUN_10070237c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x2a0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007023d0; end: 100705653;  */

void FUN_1007023d0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_100083b20(&uStack_118);
  FUN_100083b20(&uStack_120);
  FUN_100083b20(&uStack_128);
  FUN_100083b20(&uStack_130);
  FUN_100083b20(&uStack_138);
  FUN_100083b20(&uStack_140);
  FUN_100083b20(&uStack_148);
  FUN_100083b20(&uStack_150);
  FUN_100083b20(&uStack_158);
  FUN_100083b20(&uStack_160);
  FUN_100083b20(&uStack_168);
  FUN_100083b20(&uStack_170);
  FUN_100083b20(&uStack_178);
  FUN_100083b20(&uStack_180);
  FUN_100083b20(&uStack_188);
  FUN_100083b20(&uStack_190);
  FUN_100083b20(&uStack_198);
  FUN_100083b20(&uStack_1a0);
  FUN_100083b20(&uStack_1a8);
  FUN_100083b20(&uStack_1b0);
  FUN_100083b20(&uStack_1b8);
  FUN_100083b20(&uStack_1c0);
  FUN_100083b20(&uStack_1c8);
  FUN_100083b20(&uStack_1d0);
  FUN_100083b20(&uStack_1d8);
  FUN_100083b20(&uStack_1e0);
  FUN_100083b20(&uStack_1e8);
  FUN_100083b20(&uStack_1f0);
  FUN_100083b20(&uStack_1f8);
  FUN_100083b20(&uStack_200);
  FUN_100083b20(&uStack_208);
  FUN_100083b20(&uStack_210);
  FUN_100083b20(&uStack_218);
  FUN_100083b20(&uStack_220);
  FUN_100083b20(&uStack_228);
  FUN_100083b20(&uStack_230);
  FUN_100083b20(&uStack_238);
  FUN_100083b20(&uStack_240);
  FUN_100083b20(&uStack_248);
  FUN_100083b20(&uStack_250);
  FUN_100083b20(&uStack_258);
  FUN_100083b20(&uStack_260);
  FUN_100083b20(&uStack_268);
  FUN_100083b20(&uStack_270);
  FUN_100083b20(&uStack_278);
  FUN_100083b20(&uStack_280);
  FUN_100083b20(&uStack_288);
  FUN_100083b20(&uStack_290);
  FUN_100083b20(&uStack_298);
  FUN_100083b20(&uStack_2a0);
  FUN_100083b20(&uStack_2a8);
  FUN_100083b20(&uStack_2b0);
  FUN_100083b20(&uStack_2b8);
  FUN_100083b20(&uStack_2c0);
  FUN_100083b20(&uStack_2c8);
  FUN_100083b20(&uStack_2d0);
  FUN_100083b20(&uStack_2d8);
  FUN_100083b20(&uStack_2e0);
  FUN_100083b20(&uStack_2e8);
  FUN_100083b20(&uStack_2f0);
  FUN_100083b20(&uStack_2f8);
  FUN_10036c5c0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  *(undefined8 *)(param_2 + 0x68) = uStack_b8;
  *(undefined8 *)(param_2 + 0x70) = uStack_c0;
  *(undefined8 *)(param_2 + 0x78) = uStack_c8;
  *(undefined8 *)(param_2 + 0x80) = uStack_d0;
  *(undefined8 *)(param_2 + 0x88) = uStack_d8;
  *(undefined8 *)(param_2 + 0x90) = uStack_e0;
  *(undefined8 *)(param_2 + 0x98) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_f0;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f8;
  *(undefined8 *)(param_2 + 0xb0) = uStack_100;
  *(undefined8 *)(param_2 + 0xb8) = uStack_108;
  *(undefined8 *)(param_2 + 0xc0) = uStack_110;
  *(undefined8 *)(param_2 + 200) = uStack_118;
  *(undefined8 *)(param_2 + 0xd0) = uStack_120;
  *(undefined8 *)(param_2 + 0xd8) = uStack_128;
  *(undefined8 *)(param_2 + 0xe0) = uStack_130;
  *(undefined8 *)(param_2 + 0xe8) = uStack_138;
  *(undefined8 *)(param_2 + 0xf0) = uStack_140;
  *(undefined8 *)(param_2 + 0xf8) = uStack_148;
  *(undefined8 *)(param_2 + 0x100) = uStack_150;
  *(undefined8 *)(param_2 + 0x108) = uStack_158;
  *(undefined8 *)(param_2 + 0x110) = uStack_160;
  *(undefined8 *)(param_2 + 0x118) = uStack_168;
  *(undefined8 *)(param_2 + 0x120) = uStack_170;
  *(undefined8 *)(param_2 + 0x128) = uStack_178;
  *(undefined8 *)(param_2 + 0x130) = uStack_180;
  *(undefined8 *)(param_2 + 0x138) = uStack_188;
  *(undefined8 *)(param_2 + 0x140) = uStack_190;
  *(undefined8 *)(param_2 + 0x148) = uStack_198;
  *(undefined8 *)(param_2 + 0x150) = uStack_1a0;
  *(undefined8 *)(param_2 + 0x158) = uStack_1a8;
  *(undefined8 *)(param_2 + 0x160) = uStack_1b0;
  *(undefined8 *)(param_2 + 0x168) = uStack_1b8;
  *(undefined8 *)(param_2 + 0x170) = uStack_1c0;
  *(undefined8 *)(param_2 + 0x178) = uStack_1c8;
  *(undefined8 *)(param_2 + 0x180) = uStack_1d0;
  *(undefined8 *)(param_2 + 0x188) = uStack_1d8;
  *(undefined8 *)(param_2 + 400) = uStack_1e0;
  *(undefined8 *)(param_2 + 0x198) = uStack_1e8;
  *(undefined8 *)(param_2 + 0x1a0) = uStack_1f0;
  *(undefined8 *)(param_2 + 0x1a8) = uStack_1f8;
  *(undefined8 *)(param_2 + 0x1b0) = uStack_200;
  *(undefined8 *)(param_2 + 0x1b8) = uStack_208;
  *(undefined8 *)(param_2 + 0x1c0) = uStack_210;
  *(undefined8 *)(param_2 + 0x1c8) = uStack_218;
  *(undefined8 *)(param_2 + 0x1d0) = uStack_220;
  *(undefined8 *)(param_2 + 0x1d8) = uStack_228;
  *(undefined8 *)(param_2 + 0x1e0) = uStack_230;
  *(undefined8 *)(param_2 + 0x1e8) = uStack_238;
  *(undefined8 *)(param_2 + 0x1f0) = uStack_240;
  *(undefined8 *)(param_2 + 0x1f8) = uStack_248;
  *(undefined8 *)(param_2 + 0x200) = uStack_250;
  *(undefined8 *)(param_2 + 0x208) = uStack_258;
  *(undefined8 *)(param_2 + 0x210) = uStack_260;
  *(undefined8 *)(param_2 + 0x218) = uStack_268;
  *(undefined8 *)(param_2 + 0x220) = uStack_270;
  *(undefined8 *)(param_2 + 0x228) = uStack_278;
  *(undefined8 *)(param_2 + 0x230) = uStack_280;
  *(undefined8 *)(param_2 + 0x238) = uStack_288;
  *(undefined8 *)(param_2 + 0x240) = uStack_290;
  *(undefined8 *)(param_2 + 0x248) = uStack_298;
  *(undefined8 *)(param_2 + 0x250) = uStack_2a0;
  *(undefined8 *)(param_2 + 600) = uStack_2a8;
  *(undefined8 *)(param_2 + 0x260) = uStack_2b0;
  *(undefined8 *)(param_2 + 0x268) = uStack_2b8;
  *(undefined8 *)(param_2 + 0x270) = uStack_2c0;
  *(undefined8 *)(param_2 + 0x278) = uStack_2c8;
  *(undefined8 *)(param_2 + 0x280) = uStack_2d0;
  *(undefined8 *)(param_2 + 0x288) = uStack_2d8;
  *(undefined8 *)(param_2 + 0x290) = uStack_2e0;
  *(undefined8 *)(param_2 + 0x298) = uStack_2e8;
  FUN_1000285a8(0x112e4a008,&UNK_10da41b88);
  func_0x000107c610f8();
  uVar1 = uStack_2a0;
  func_0x000107c61174();
  uVar74 = uStack_2a8;
  func_0x000107c61174();
  uVar75 = uStack_2b0;
  func_0x000107c61174();
  uVar76 = uStack_2b8;
  func_0x000107c61174();
  uVar77 = uStack_2c0;
  func_0x000107c61174();
  uVar78 = uStack_2c8;
  func_0x000107c61174();
  uVar79 = uStack_2d0;
  func_0x000107c61174();
  uVar80 = uStack_2d8;
  func_0x000107c61174();
  uVar81 = uStack_2e0;
  func_0x000107c61174();
  uVar82 = uStack_2e8;
  func_0x000107c61174();
  func_0x000107c6157c(uStack_2f0);
  uVar33 = uStack_78;
  func_0x000107c61174();
  uVar35 = uStack_80;
  func_0x000107c61174();
  uVar36 = uStack_88;
  func_0x000107c61174();
  uVar37 = uStack_90;
  func_0x000107c61174();
  uVar38 = uStack_98;
  func_0x000107c61174();
  uVar39 = uStack_a0;
  func_0x000107c61174();
  uVar2 = uStack_a8;
  func_0x000107c61174();
  uVar3 = uStack_b0;
  func_0x000107c61174();
  uVar4 = uStack_b8;
  func_0x000107c61174();
  uVar5 = uStack_c0;
  func_0x000107c61174();
  uVar6 = uStack_c8;
  func_0x000107c61174();
  uVar7 = uStack_d0;
  func_0x000107c61174();
  uVar8 = uStack_d8;
  func_0x000107c61174();
  uVar9 = uStack_e0;
  func_0x000107c61174();
  uVar10 = uStack_e8;
  func_0x000107c61174();
  uVar11 = uStack_f0;
  func_0x000107c61174();
  uVar12 = uStack_f8;
  func_0x000107c61174();
  uVar13 = uStack_100;
  func_0x000107c61174();
  uVar14 = uStack_108;
  func_0x000107c61174();
  uVar15 = uStack_110;
  func_0x000107c61174();
  uVar16 = uStack_118;
  func_0x000107c61174();
  uVar17 = uStack_120;
  func_0x000107c61174();
  uVar18 = uStack_128;
  func_0x000107c61174();
  uVar19 = uStack_130;
  func_0x000107c61174();
  uVar20 = uStack_138;
  func_0x000107c61174();
  uVar21 = uStack_140;
  func_0x000107c61174();
  uVar22 = uStack_148;
  func_0x000107c61174();
  uVar23 = uStack_150;
  func_0x000107c61174();
  uVar24 = uStack_158;
  func_0x000107c61174();
  uVar25 = uStack_160;
  func_0x000107c61174();
  uVar26 = uStack_168;
  func_0x000107c61174();
  uVar27 = uStack_170;
  func_0x000107c61174();
  uVar28 = uStack_178;
  func_0x000107c61174();
  uVar29 = uStack_180;
  func_0x000107c61174();
  uVar30 = uStack_188;
  func_0x000107c61174();
  uVar40 = uStack_190;
  func_0x000107c61174();
  uVar41 = uStack_198;
  func_0x000107c61174();
  uVar42 = uStack_1a0;
  func_0x000107c61174();
  uVar43 = uStack_1a8;
  func_0x000107c61174();
  uVar44 = uStack_1b0;
  func_0x000107c61174();
  uVar45 = uStack_1b8;
  func_0x000107c61174();
  uVar46 = uStack_1c0;
  func_0x000107c61174();
  uVar47 = uStack_1c8;
  func_0x000107c61174();
  uVar48 = uStack_1d0;
  func_0x000107c61174();
  uVar49 = uStack_1d8;
  func_0x000107c61174();
  uVar50 = uStack_1e0;
  func_0x000107c61174();
  uVar51 = uStack_1e8;
  func_0x000107c61174();
  uVar52 = uStack_1f0;
  func_0x000107c61174();
  uVar53 = uStack_1f8;
  func_0x000107c61174();
  uVar54 = uStack_200;
  func_0x000107c61174();
  uVar55 = uStack_208;
  func_0x000107c61174();
  uVar56 = uStack_210;
  func_0x000107c61174();
  uVar57 = uStack_218;
  func_0x000107c61174();
  uVar58 = uStack_220;
  func_0x000107c61174();
  uVar59 = uStack_228;
  func_0x000107c61174();
  uVar60 = uStack_230;
  func_0x000107c61174();
  uVar61 = uStack_238;
  func_0x000107c61174();
  uVar62 = uStack_240;
  func_0x000107c61174();
  uVar63 = uStack_248;
  func_0x000107c61174();
  uVar64 = uStack_250;
  func_0x000107c61174();
  uVar65 = uStack_258;
  func_0x000107c61174();
  uVar66 = uStack_260;
  func_0x000107c61174();
  uVar67 = uStack_268;
  func_0x000107c61174();
  uVar68 = uStack_270;
  func_0x000107c61174();
  uVar69 = uStack_278;
  func_0x000107c61174();
  uVar70 = uStack_280;
  func_0x000107c61174();
  uVar71 = uStack_288;
  func_0x000107c61174();
  uVar72 = uStack_290;
  func_0x000107c61174();
  uVar73 = uStack_298;
  func_0x000107c61174();
  uVar83 = uStack_2f0;
  FUN_1003b3b80(uStack_2f0);
  puVar31 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar83);
  *(undefined **)(param_2 + 0x18) = puVar31;
  FUN_1000285a8(0x112e4a010,&UNK_10da41b90);
  func_0x000107c610f8();
  uVar83 = uStack_2f8;
  func_0x000107c6157c(uStack_2f8);
  FUN_1003b3b80();
  puVar31 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar83);
  *(undefined **)(param_2 + 0x20) = puVar31;
  puVar31 = PTR_PTR_1126ac248;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar31;
  func_0x000107c61174();
  uVar32 = auStack_70[0];
  func_0x000107c61174();
  uVar87 = 0xd000000000000013;
  uVar83 = uVar87;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar31);
  func_0x000107c61170(puVar31);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar83);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar34);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar34);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar34);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2a580);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar83);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar34);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efbb870);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar34);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar86 = 0xd000000000000012;
  uVar83 = uVar86;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f007130);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar83);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar83 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef10e10);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar83);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1ae00);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar34);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar83 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar83);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar85 = 0xd000000000000010;
  uVar83 = uVar85;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar83);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1e0e0);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar34);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0x7672655364416b73;
  func_0x000107c5fadc(0x7672655364416b73,0xec00000073656369);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar34);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0071b0);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar34);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0x6553617461446461;
  func_0x000107c5fadc(0x6553617461446461,0xee00736563697672);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar34);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efbba10);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar83);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar34 = 0x53616964654d6461;
  func_0x000107c5fadc(0x53616964654d6461,0xef73656369767265);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar34);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar34);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10b10);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar34);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar34);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar34 = 0x536b726f7774656e;
  func_0x000107c5fadc(0x536b726f7774656e,0xef73656369767265);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar34);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = uVar87;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar83);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = uVar85;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efc7090);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar83);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef2b6f0);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar34);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar84 = 0xd000000000000011;
  uVar83 = uVar84;
  func_0x000107c5fadc(0xd000000000000011,0x800000010efbba30);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar83);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar83);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f017eb0);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar34);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = uVar86;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f007040);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar83);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0x5377656956626577;
  func_0x000107c5fadc(0x5377656956626577,0xef73656369767265);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar34);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar83 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef38ef0);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar83);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd80);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar34);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar34 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1f630);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar34);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar83);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = uVar85;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef13520);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar83);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f108520);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar83);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010efbb820);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar83);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f108540);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar83);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar83);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar34 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar34);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1a530);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar34);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f108570);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar34);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = uVar85;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar83);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efe1e70);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar34);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = uVar86;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef13090);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar83);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007ee0);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar83);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efc3d20);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar50);
  func_0x000107c61170(uVar83);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f1084e0);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar51);
  func_0x000107c61170(uVar83);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000012,0x800000010f052150);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar86);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = uVar84;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f108590);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar53);
  func_0x000107c61170(uVar83);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar83 = uVar87;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f1085b0);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar83);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f1085d0);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar55);
  func_0x000107c61170(uVar34);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f01a8d0);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar56);
  func_0x000107c61170(uVar83);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f1085f0);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar83);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar83 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f089520);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar83);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  func_0x000107c5fadc(0xd000000000000010,0x800000010efbb8f0);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar59);
  func_0x000107c61170(uVar85);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar60);
  func_0x000107c61170(uVar34);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar61);
  func_0x000107c61170(uVar34);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1bf20);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar62);
  func_0x000107c61170(uVar34);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f03f060);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar34);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f007150);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar83);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar83 = uVar87;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1e730);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar83);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0x72655374736f6f62;
  func_0x000107c5fadc(0x72655374736f6f62,0xed00007365636976);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar34);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efbb850);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar67);
  func_0x000107c61170(uVar83);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f007060);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar68);
  func_0x000107c61170(uVar34);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar83 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2a530);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar69);
  func_0x000107c61170(uVar83);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef2dc90);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar70);
  func_0x000107c61170(uVar83);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2c420);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar71);
  func_0x000107c61170(uVar87);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  func_0x000107c5fadc(0xd000000000000011,0x800000010f108500);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar72);
  func_0x000107c61170(uVar84);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f05bfd0);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar73);
  func_0x000107c61170(uVar34);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar83 = 0x112dca948;
  FUN_1000285a8(0x112dca948,&UNK_10d99f4a0);
  func_0x000107c60184();
  uVar86 = 0x5372657070696c66;
  func_0x000107c5fadc(0x5372657070696c66,0xef73656369767265);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c615e8(uVar83);
  func_0x000107c61170(uVar86);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0071d0);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar74);
  func_0x000107c61170(uVar34);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f007190);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar75);
  func_0x000107c61170(uVar34);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f108620);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar76);
  func_0x000107c61170(uVar83);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f052240);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar77);
  func_0x000107c61170(uVar83);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f108640);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar78);
  func_0x000107c61170(uVar83);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar83);
  uVar34 = 0x767265536b636564;
  func_0x000107c5fadc(0x767265536b636564,0xec00000073656369);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar79);
  func_0x000107c61170(uVar34);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0070a0);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar80);
  func_0x000107c61170(uVar83);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar34);
  uVar83 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef18630);
  func_0x000107c5a49c(uVar34);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar81);
  func_0x000107c61170(uVar83);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar34 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef2a560);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar82);
  func_0x000107c61170(uVar34);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  uVar34 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar83);
  func_0x000107c61174(uVar34);
  uVar86 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar86);
  uVar83 = *(undefined8 *)(param_2 + 0x10);
  uVar34 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar86 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2a5a0);
  func_0x000107c5a49c(uVar83);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar86);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar83 = uVar34;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar50);
  func_0x000107c61170(uVar51);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar53);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar55);
  func_0x000107c61170(uVar56);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar59);
  func_0x000107c61170(uVar60);
  func_0x000107c61170(uVar61);
  func_0x000107c61170(uVar62);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar67);
  func_0x000107c61170(uVar68);
  func_0x000107c61170(uVar69);
  func_0x000107c61170(uVar70);
  func_0x000107c61170(uVar71);
  func_0x000107c61170(uVar72);
  func_0x000107c61170(uVar73);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar74);
  func_0x000107c61170(uVar75);
  func_0x000107c61170(uVar76);
  func_0x000107c61170(uVar77);
  func_0x000107c61170(uVar78);
  func_0x000107c61170(uVar79);
  func_0x000107c61170(uVar80);
  func_0x000107c61170(uVar81);
  func_0x000107c61170(uVar82);
  func_0x000107c61574(uStack_2f0);
  func_0x000107c61574(uStack_2f8);
  *(undefined8 *)(param_2 + 0x2a0) = uVar83;
  *param_1 = param_2;
  return;
}



/* Entry: 100705654; end: 100705767;  */

void FUN_100705654(void)

{
  long unaff_x20;
  
  FUN_1007023d0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 100705768; end: 10070576f;  */

void FUN_100705768(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100705770; end: 1007057c3;  */

void FUN_100705770(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007057c4; end: 1007057cb;  */

void FUN_1007057c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_100217c9c();
  func_0x000107c613fc();
  FUN_100705840(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007057cc; end: 10070583f;  */

void FUN_1007057cc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_100217c9c();
  func_0x000107c613fc();
  FUN_100705840(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 100705840; end: 1007059a7;  */

void FUN_100705840(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a7f18;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd80);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 1007059a8; end: 100705a8b; -[SCDynamicImageSourceServiceProvider provide] */

void FUN_1007059a8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b9f90;
  func_0x000107c610f4(PTR_PTR_1126b9f90);
  func_0x000107c4671c();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100705a8c; end: 100705aff; -[SCDynamicImageSourceProviderServices initWithDynamicImageSourceProviderFactory:] */

undefined1 * FUN_100705a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112705e98;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100705b00; end: 100705b2b;  */

void FUN_100705b00(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100705b2c; end: 100705b33;  */

void FUN_100705b2c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100705b34; end: 100705b87;  */

void FUN_100705b34(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100705b88; end: 10070628f;  */

void FUN_100705b88(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_10036bbe0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  FUN_1000285a8(0x112e4cd00,&UNK_10da47050);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  uVar11 = uStack_b8;
  func_0x000107c6157c(uStack_b8);
  FUN_10017da58();
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x18) = puVar9;
  FUN_1000285a8(0x112e4cd08,&UNK_10da47800);
  func_0x000107c610f8();
  uVar11 = uStack_c0;
  func_0x000107c6157c(uStack_c0);
  FUN_10017da58();
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x20) = puVar9;
  puVar9 = PTR_PTR_1126ac250;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar9;
  func_0x000107c61174();
  uVar10 = auStack_70[0];
  func_0x000107c61174();
  uVar11 = 0x65706f635376616e;
  func_0x000107c5fadc(0x65706f635376616e,0xe800000000000000);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef26830);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f1085b0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f089520);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar11 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efbba10);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f01a8d0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f09c8c0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f09c8e0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  uVar13 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f09c900);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar11);
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f09c920);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  uVar11 = uVar12;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(uStack_b8);
  func_0x000107c61574(uStack_c0);
  *(undefined8 *)(param_2 + 0x68) = uVar11;
  *param_1 = param_2;
  return;
}



/* Entry: 100706290; end: 1007062cb;  */

void FUN_100706290(void)

{
  long unaff_x20;
  
  FUN_100705b88(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1007062cc; end: 1007062d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007062cc(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10033eb2c();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fee2a0) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1007062d4; end: 10070633f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007062d4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10033eb2c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fee2a0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100706340; end: 100706347;  */

/* WARNING: Possible PIC construction at 0x0001007063d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007063dc) */

void FUN_100706340(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_110507ad8;
  func_0x000107c613fc(&UNK_110507ad8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112e99818;
  FUN_1000285a8(0x112e99818,&UNK_10daa5f40);
  func_0x000107c613fc();
  puVar4 = &UNK_102434c9c;
  FUN_1000841f8(&UNK_102434c9c,puVar2,uVar3);
  FUN_100084214(&UNK_10daa5f10,0x2e,2);
  *param_1 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100706348; end: 1007063ef;  */

/* WARNING: Possible PIC construction at 0x0001007063d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007063dc) */

void FUN_100706348(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_110507ad8;
  func_0x000107c613fc(&UNK_110507ad8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  uVar2 = 0x112e99818;
  FUN_1000285a8(0x112e99818,&UNK_10daa5f40);
  func_0x000107c613fc();
  puVar3 = &UNK_102434c9c;
  FUN_1000841f8(&UNK_102434c9c,puVar1,uVar2);
  FUN_100084214(&UNK_10daa5f10,0x2e,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1007063f0; end: 1007063f7;  */

void FUN_1007063f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007063f8; end: 100706423;  */

void FUN_1007063f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100706424; end: 10070642b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100706424(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10036ba98();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fee158) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10070642c; end: 100706497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10070642c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10036ba98();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fee158) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100706498; end: 100706617;  */

/* WARNING: Possible PIC construction at 0x000100706590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007065a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007065b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007065c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007065d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007065e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007065f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007065e4) */
/* WARNING: Removing unreachable block (ram,0x0001007065d4) */
/* WARNING: Removing unreachable block (ram,0x0001007065c4) */
/* WARNING: Removing unreachable block (ram,0x0001007065b4) */
/* WARNING: Removing unreachable block (ram,0x0001007065a4) */
/* WARNING: Removing unreachable block (ram,0x000100706594) */
/* WARNING: Removing unreachable block (ram,0x0001007065f4) */

void FUN_100706498(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_110506ec8;
  func_0x000107c613fc(&UNK_110506ec8,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  uVar2 = 0x112e99208;
  FUN_1000285a8(0x112e99208,&UNK_10daa5270);
  func_0x000107c613fc();
  puVar3 = &UNK_10242eee8;
  FUN_1000841f8(&UNK_10242eee8,puVar1,uVar2);
  FUN_100084214(&UNK_10daa5240,0x2c,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100706618; end: 10070661b;  */

void FUN_100706618(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10070661c; end: 100706657;  */

void FUN_10070661c(void)

{
  long unaff_x20;
  
  FUN_100706498(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 100706658; end: 10070665b;  */

void FUN_100706658(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10070665c; end: 1007066e7;  */

void FUN_10070665c(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007066e8; end: 1007069e3; -[SCAdReportServiceProvider provide] */

void FUN_1007066e8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c61160();
  puVar2 = PTR_PTR_1126ae720;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_106376bec;
  puStack_90 = &UNK_11091f388;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  puStack_d0 = puVar6;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_106376d10;
  puStack_b8 = &UNK_11091f3b8;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  puStack_f8 = puVar6;
  uStack_f0 = 0xc2000000;
  puStack_e8 = &UNK_106376db0;
  puStack_e0 = &UNK_11091f3e8;
  func_0x000107c6111c(auStack_d8,auStack_80);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  puStack_120 = puVar6;
  uStack_118 = 0xc2000000;
  puStack_110 = &UNK_106376f34;
  puStack_108 = &UNK_11091f418;
  func_0x000107c6111c(auStack_100,auStack_80);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_128,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126c9fa0;
  func_0x000107c610f4(PTR_PTR_1126c9fa0);
  func_0x000107c467e4();
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_128);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_100);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1007069e4; end: 100706ae3; -[_TtC16AdReportServices16AdReportServices initWithEventTrackerProvider:promotedStoryTileEventTrackerProvider:unlockableEventTrackerProvider:reportAdPagePresenter:adInfoPagePresenter:adReportEventObservableV2:sponsoredEventTrackerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007069e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  *(undefined8 *)(param_1 + _DAT_112fee3a8) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fee3b0) = param_4;
  *(undefined8 *)(param_1 + _DAT_112fee3b8) = param_5;
  *(undefined8 *)(param_1 + _DAT_112fee3c0) = param_6;
  *(undefined8 *)(param_1 + _DAT_112fee3c8) = param_7;
  *(undefined8 *)(param_1 + _DAT_112fee3d0) = param_8;
  *(undefined8 *)(param_1 + _DAT_112fee3d8) = param_9;
  lVar2 = param_1;
  FUN_10036bde8();
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61154(&lStack_60,puVar1);
  return;
}



/* Entry: 100706ae4; end: 100706b57;  */

void FUN_100706ae4(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100706b58; end: 100706b5f;  */

void FUN_100706b58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  FUN_1000cad14();
  uVar1 = 0;
  FUN_10033cb3c(0);
  func_0x000107c610f8();
  func_0x000100706ba8(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100706b60; end: 100706bff;  */

void FUN_100706b60(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1000cad14();
  uVar1 = 0;
  FUN_10033cb3c(0);
  func_0x000107c610f8();
  func_0x000100706ba8(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 100706c00; end: 100706c07;  */

void FUN_100706c00(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100706c08; end: 100706c5b;  */

void FUN_100706c08(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100706c5c; end: 100707383;  */

void FUN_100706c5c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_10033f5a0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  FUN_1000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar11 = uStack_b8;
  func_0x000107c6157c(uStack_b8);
  FUN_10017da58();
  puVar9 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x18) = puVar9;
  FUN_1000285a8(0x112e4de18,&UNK_10db46090);
  func_0x000107c610f8();
  uVar11 = uStack_c0;
  func_0x000107c6157c(uStack_c0);
  FUN_10017da58();
  puVar9 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x20) = puVar9;
  puVar9 = PTR_PTR_1126ac390;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar9;
  func_0x000107c61174();
  uVar10 = auStack_70[0];
  func_0x000107c61174();
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1bda0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1bd80);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef38ef0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd80);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f087780);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar9);
  uVar11 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  uVar13 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f052f80);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  uVar13 = uVar11;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(uStack_b8);
  func_0x000107c61574(uStack_c0);
  *(undefined8 *)(param_2 + 0x68) = uVar13;
  *param_1 = param_2;
  return;
}



/* Entry: 100707384; end: 1007073bf;  */

void FUN_100707384(void)

{
  long unaff_x20;
  
  FUN_100706c5c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1007073c0; end: 1007073c7;  */

void FUN_1007073c0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007073c8; end: 10070741b;  */

void FUN_1007073c8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10070741c; end: 100707423;  */

void FUN_10070741c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_1002991b8();
  func_0x000107c613fc();
  FUN_100707498(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100707424; end: 100707497;  */

void FUN_100707424(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_1002991b8();
  func_0x000107c613fc();
  FUN_100707498(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 100707498; end: 1007075fb;  */

void FUN_100707498(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a8ee0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 1007075fc; end: 1007076df; -[SCCommerceConfigServiceProvider provide] */

void FUN_1007075fc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126be5b0;
  func_0x000107c610f4(PTR_PTR_1126be5b0);
  func_0x000107c45ec4();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1007076e0; end: 100707753; -[SCCommerceConfigServices initWithCommerceConfigProvider:] */

undefined1 * FUN_1007076e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f8aa8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100707754; end: 10070777f;  */

void FUN_100707754(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100707780; end: 100707787;  */

void FUN_100707780(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100707788; end: 1007077db;  */

void FUN_100707788(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007077dc; end: 1007077ef;  */

void FUN_1007077dc(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100299494();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  *(undefined8 *)(lVar1 + 0x48) = uStack_a0;
  puVar2 = PTR_PTR_1126be220;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  uVar9 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1bda0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c280);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar11 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef38ef0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1bf20);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar11 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  puVar12 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  *(undefined **)(lVar1 + 0x50) = puVar12;
  *param_1 = lVar1;
  return;
}



/* Entry: 1007077f0; end: 100707cd3;  */

void FUN_1007077f0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100299494();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  puVar1 = PTR_PTR_1126be220;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1bda0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c280);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar10 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef38ef0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1bf20);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar10 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  puVar11 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x50) = puVar11;
  *param_1 = param_2;
  return;
}



/* Entry: 100707cd4; end: 100707f37; -[SCCommerceShowcaseServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100707cd4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x000107c61144(auStack_78,param_1);
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4();
  func_0x000107c470d0();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112729698);
  *(undefined **)(param_1 + _DAT_112729698) = puVar1;
  func_0x000107c61170(uVar6);
  puVar2 = PTR_PTR_1126ae720;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_10579da88;
  puStack_88 = &UNK_1108b1878;
  func_0x000107c6111c(auStack_80,auStack_78);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  puStack_b8 = &UNK_10579dac8;
  puStack_b0 = &UNK_1108b18a8;
  func_0x000107c6111c(auStack_a8,auStack_78);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_d0,auStack_78);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126be218;
  func_0x000107c610f4(PTR_PTR_1126be218);
  param_1 = param_1 + _DAT_11272969c;
  func_0x000107c61148(param_1);
  lVar5 = param_1;
  func_0x000107c423b0();
  func_0x000107c61180();
  func_0x000107c47180(puVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_d0);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_a8);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100707f38; end: 100707f3f; -[SCDynamicImageSourceProviderServices dynamicImageSourceProviderFactory] */

undefined8 FUN_100707f38(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100707f40; end: 10070803b; -[SCCommerceShowcaseServices initWithLegacyShowcaseFetcher:showcaseFetcher:imageSourceProvider:composerShowcaseGrpcService:] */

undefined1 *
FUN_100707f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_112703088;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10070803c; end: 100708097;  */

void FUN_10070803c(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100708098; end: 10070809f;  */

void FUN_100708098(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007080a0; end: 1007080f3;  */

void FUN_1007080a0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007080f4; end: 100708103;  */

void FUN_1007080f4(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_10029930c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a8ee8;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1bda0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  puVar10 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined **)(lVar1 + 0x40) = puVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 100708104; end: 1007084cb;  */

void FUN_100708104(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_10029930c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a8ee8;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1bda0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar9 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined **)(param_2 + 0x40) = puVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 1007084cc; end: 10070862b; -[SCCommerceServiceProvider provide] */

void FUN_1007084cc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1057abe40;
  puStack_68 = &UNK_1108b1fa8;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126be3b8;
  func_0x000107c610f4(PTR_PTR_1126be3b8);
  func_0x000107c48a24();
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10070862c; end: 1007086cf; -[SCCommerceServices initWithStoreInfoFetcher:pixelMetricsLogger:] */

undefined1 *
FUN_10070862c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f7568;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007086d0; end: 10070871b;  */

void FUN_1007086d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10070871c; end: 1007087ff; -[SCCommerceOperaServiceProvider provide] */

void FUN_10070871c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126d2568;
  func_0x000107c610f4(PTR_PTR_1126d2568);
  func_0x000107c486e0();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100708800; end: 1007088fb; -[SCManagedVideoStreamer captureOutput:didOutputSampleBuffer:fromConnection:] */

void FUN_100708800(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_5);
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    lVar4 = param_1;
    func_0x000107c3bb8c(param_1,param_2,param_5);
    func_0x000107c3b4d4(param_1,param_2,param_4,lVar4);
  }
  else {
    func_0x000107c49be8(*(undefined8 *)(param_1 + 0x158));
    piVar1 = (int *)(param_1 + 0x90);
    if (*piVar1 < 0xe) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      func_0x000107c607f4(param_4);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      puStack_58 = &UNK_10702eda0;
      puStack_50 = &UNK_110844b80;
      lStack_48 = param_1;
      func_0x000107c61174(param_5);
      uStack_40 = param_5;
      uStack_38 = param_4;
      func_0x000107c3c0f8(param_1,param_2,&puStack_68);
      func_0x000107c61170(uStack_40);
    }
    else {
      func_0x000107c41b50(param_1,param_2,param_4);
    }
  }
  func_0x000107c61170(param_5);
  return;
}



/* Entry: 1007088fc; end: 1007089b3; -[SCManagedVideoStreamer _isSecondaryCameraConnection:] */

bool FUN_1007088fc(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  func_0x000107c496f4();
  func_0x000107c61180();
  uVar3 = param_3;
  func_0x000107c43638();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar4 = uVar3;
  func_0x000107c61164(uVar3,PTR_s_sourceDevicePosition_11266f7e0);
  if ((uVar4 & 1) == 0) {
    bVar2 = false;
  }
  else {
    uVar4 = uVar3;
    func_0x000107c5b640();
    lVar5 = 1;
    if (uVar4 != 1) {
      lVar5 = -1;
    }
    lVar1 = 0;
    if (uVar4 != 2) {
      lVar1 = lVar5;
    }
    param_1 = param_1 + 8;
    func_0x000107c61148(param_1);
    lVar5 = param_1;
    func_0x000107c51b1c();
    FUN_1007089bc();
    func_0x000107c61170(param_1);
    bVar2 = lVar1 == lVar5;
  }
  func_0x000107c61170(uVar3);
  return bVar2;
}



/* Entry: 1007089b4; end: 1007089bb; -[SCCameraHardwareResourceImpl secondaryDevicePositions] */

undefined8 FUN_1007089b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 1007089bc; end: 100708a17;  */

undefined8 FUN_1007089bc(undefined *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afed0;
  func_0x000107c3e57c();
  if (param_1 == puVar1) {
    uVar2 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126afed0;
    func_0x000107c43b38();
    if (param_1 == puVar1) {
      uVar2 = 0;
    }
    else {
      func_0x000107c4d73c(PTR_PTR_1126afed0);
      uVar2 = 0xffffffffffffffff;
    }
  }
  return uVar2;
}



/* Entry: 100708a18; end: 100708a1f; +[SCManagedCaptureDevicePositionOption back] */

undefined8 FUN_100708a18(void)

{
  return 2;
}



/* Entry: 100708a20; end: 100708b1b; -[SCManagedVideoStreamer _didOutputSampleBuffer:isSecondaryCameraConnection:] */

void FUN_100708a20(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be998f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__saveSecondaryCameraBuffer__112583fd8,param_3);
    return;
  }
  puVar2 = &UNK_10f3f8805;
  FUN_1000ba800(&UNK_10f3f8805);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x000107c4a09c();
    if (iVar1 == 0) {
      func_0x000107c3b4d0(param_1);
    }
    else {
      func_0x000107c607f4(param_3);
      func_0x000107c3c0f8(param_1);
    }
  }
  func_0x0001000e2a84(puVar2);
  return;
}



/* Entry: 100708b1c; end: 100709087; -[SCManagedVideoStreamer _didOutputSampleBuffer:] */

void FUN_100708b1c(undefined8 param_1,double param_2,long param_3,undefined8 param_4,double param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dStack_d0;
  double dStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_98;
  double dStack_90;
  undefined8 uStack_88;
  
  func_0x000107c4a09c(*(undefined8 *)(param_3 + 0x18));
  iVar1 = (int)*(undefined8 *)(param_3 + 0x158);
  func_0x000107c49be8();
  if (iVar1 == 0) {
    return;
  }
  lVar2 = param_3 + 8;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c5de14();
  func_0x000107c61180();
  func_0x000107c515e8();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c60a24(&dStack_98,param_5);
  dStack_c8 = dStack_90;
  dStack_d0 = dStack_98;
  uStack_c0 = uStack_88;
  dVar13 = dStack_98;
  func_0x000107c60a3c(&dStack_d0);
  *(double *)(param_3 + 0x60) = dVar13;
  func_0x000107c6071c();
  lVar3 = *(long *)(param_3 + 0x178);
  dVar14 = dVar13;
  func_0x000107c500e0();
  func_0x000107c61180();
  lVar2 = lVar3;
  func_0x000107c40808();
  func_0x000107c61170(lVar3);
  dVar4 = param_5;
  if (lVar2 != 0) {
    dVar14 = *(double *)(param_3 + 0x98);
    uStack_c0 = *(undefined8 *)(param_3 + 0x28);
    uStack_b0 = 0;
    uStack_a8 = 0;
    dVar4 = *(double *)(param_3 + 0x178);
    uStack_b8 = 0;
    dStack_d0 = param_5;
    dStack_c8 = dVar14;
    func_0x000107c50080();
  }
  func_0x000107c3b8a8(param_3);
  if ((dVar14 != *(double *)(param_3 + 0xb8)) || (param_2 != *(double *)(param_3 + 0xc0))) {
    *(double *)(param_3 + 0xb8) = dVar14;
    *(double *)(param_3 + 0xc0) = param_2;
    uVar10 = *(undefined8 *)(param_3 + 0xb0);
    puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x000107c5dc48(PTR__OBJC_CLASS___NSValue_1126afdf8);
    func_0x000107c61180();
    func_0x000107c4d664(uVar10);
    func_0x000107c61170(puVar5);
  }
  if (*(long *)(param_3 + 0x28) == 0) {
    func_0x000107c3ba80(dVar14,param_2,param_3);
  }
  func_0x000107c3cbac(dVar14,param_2,param_3);
  lVar3 = param_3;
  func_0x000107c5df70();
  func_0x000107c61180();
  lVar2 = param_3 + 8;
  func_0x000107c61148(lVar2);
  lVar11 = lVar2;
  func_0x000107c5dd78();
  func_0x000107c61180();
  func_0x000107c5bd00();
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar2);
  lVar2 = param_3 + 8;
  func_0x000107c61148();
  lVar11 = lVar2;
  func_0x000107c5bde4();
  func_0x000107c61180();
  lVar12 = lVar11;
  func_0x000107c49b34();
  if ((int)lVar12 == 0) {
    lVar12 = param_3 + 8;
    func_0x000107c61148();
    lVar6 = lVar12;
    func_0x000107c3e0cc();
    func_0x000107c61180();
    lVar7 = lVar6;
    func_0x000107c49b34();
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar2);
    if ((int)lVar7 != 0) goto LAB_100708d84;
  }
  else {
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar2);
LAB_100708d84:
    if (*(char *)(param_3 + 0xa0) == '\x01') {
      lVar2 = param_3 + 8;
      func_0x000107c61148();
      lVar11 = lVar2;
      func_0x000107c5bde4();
      func_0x000107c61180();
      func_0x000107c41bf0();
      func_0x000107c61170(lVar11);
      func_0x000107c61170(lVar2);
    }
  }
  lVar11 = *(long *)(param_3 + 0x170);
  lVar12 = *(long *)(param_3 + 400);
  lVar2 = lVar11;
  func_0x000100709514(lVar11,lVar12);
  if ((((*(char *)(param_3 + 0x130) != '\x01') || (*(long *)(param_3 + 0x138) != lVar11)) ||
      (*(long *)(param_3 + 0x140) != lVar12)) || (*(long *)(param_3 + 0x148) != lVar2)) {
    *(undefined1 *)(param_3 + 0x130) = 1;
    *(long *)(param_3 + 0x138) = lVar11;
    *(long *)(param_3 + 0x140) = lVar12;
    *(long *)(param_3 + 0x148) = lVar2;
  }
  puVar5 = PTR_PTR_1126c8eb8;
  func_0x000107c610f4(PTR_PTR_1126c8eb8);
  func_0x000107c48464();
  func_0x000107c41c48(lVar3);
  func_0x000107c6071c();
  if (dVar4 == 0.0) goto LAB_100708f00;
  func_0x000107c4d648(*(undefined8 *)(param_3 + 0x48));
  if (lVar3 == 0) {
    if (*(char *)(param_3 + 0x40) == '\x01') {
      func_0x000107c428ec(*(undefined8 *)(param_3 + 0x48));
      goto LAB_100708ec4;
    }
  }
  else {
LAB_100708ec4:
    func_0x000107c3c0e4(param_3);
  }
  if (*(char *)(param_3 + 0xa1) == '\x01') {
    uVar10 = *(undefined8 *)(param_3 + 0x10);
    func_0x000107c43694(uVar10);
    func_0x000107c61180();
    func_0x000107c59f2c();
    func_0x000107c61170(uVar10);
    *(undefined1 *)(param_3 + 0xa1) = 0;
  }
LAB_100708f00:
  puVar8 = PTR_PTR_1126d3350;
  func_0x000107c610f4(PTR_PTR_1126d3350);
  func_0x000107c48460();
  uVar10 = *(undefined8 *)(param_3 + 0x30);
  dStack_c8 = dStack_90;
  dStack_d0 = dStack_98;
  uStack_c0 = uStack_88;
  puVar9 = PTR_PTR_1126cd5b8;
  func_0x000107c41c4c(PTR_PTR_1126cd5b8);
  func_0x000107c61180();
  func_0x000107c4d664(uVar10);
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  dVar4 = (dVar14 - dVar13) * 1000.0;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d954(dVar4,PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c56bd8(uVar10);
  func_0x000107c61170(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c6071c();
  func_0x000107c4d954((dVar4 - dVar14) * 1000.0,puVar9);
  func_0x000107c61180();
  func_0x000107c56bd8(uVar10);
  func_0x000107c61170(puVar9);
  lVar2 = param_3 + 8;
  func_0x000107c61148(lVar2);
  lVar11 = lVar2;
  func_0x000107c5de14();
  func_0x000107c61180();
  func_0x000107c515e4();
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar2);
  func_0x000107c41c64(*(undefined8 *)(param_3 + 0x60),dVar13,*(undefined8 *)(param_3 + 0x58));
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 100709088; end: 1007090d7; -[SCCameraVideoStreamStabilityMonitorImpl sampleBufferReceived:] */

/* WARNING: Possible PIC construction at 0x0001007090c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007090c4) */

void FUN_100709088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1007090d8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1007090d8; end: 100709213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007090d8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c60a24(&uStack_78);
  func_0x000107c6071c();
  func_0x000107c60a1c();
  func_0x000107c61180();
  if (param_2 == 0) {
    dVar5 = 0.0;
    dVar6 = 0.0;
  }
  else {
    lVar2 = param_2;
    func_0x000107c60ac8();
    lVar3 = param_2;
    func_0x000107c60ab8();
    func_0x000107c61170(param_2);
    dVar6 = (double)lVar2;
    dVar5 = (double)lVar3;
  }
  FUN_10006c804();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed69e0);
  func_0x000107c61428(puVar1,&uStack_78,1,0);
  dVar4 = (double)puVar1[9];
  if ((dVar4 == 0.0) && (dVar4 = (double)puVar1[10], dVar4 == 0.0)) {
    puVar1[9] = dVar6;
    puVar1[10] = dVar5;
  }
  dVar5 = (double)puVar1[0xd];
  uStack_90 = uStack_78;
  uStack_88 = uStack_70;
  uStack_80 = uStack_68;
  func_0x000107c60a3c(&uStack_90);
  puVar1[0xd] = dVar4;
  puVar1[0xe] = param_1;
  if (dVar5 != 0.0) {
    func_0x000107c3d93c(dVar4 - dVar5,*puVar1);
    FUN_10076b29c();
  }
  FUN_100070bfc();
  return;
}



/* Entry: 100709214; end: 100709237; -[SCProcessingPipelineImpl renderPipeline] */

void FUN_100709214(undefined8 param_1)

{
  func_0x000107c3af60();
                    /* WARNING: Could not recover jumptable at 0x00010c0ecc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_orderedModules_112618d18);
  return;
}



/* Entry: 100709238; end: 10070934f; -[SCProcessingPipelineImpl _buildOrderedPipelineIfNecessary] */

void FUN_100709238(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x000107c5ade8();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x000107c4e77c();
    func_0x000107c61180();
    func_0x000107c61170();
    lVar4 = param_1;
    if (lVar1 == 0) {
      func_0x000107c4f2ec(param_1);
      func_0x000107c61180();
      lVar1 = lVar4;
      func_0x000107c3db80();
      func_0x000107c61180();
      func_0x000107c5709c(param_1);
    }
    else {
      func_0x000107c4e77c();
      func_0x000107c61180();
      lVar1 = param_1;
      func_0x000107c4f2ec(param_1);
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x000107c3db80();
      func_0x000107c61180();
      lVar3 = lVar4;
      func_0x000107c5b5a8(lVar4);
      func_0x000107c61180();
      func_0x000107c5709c(param_1);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c2014d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setShouldUpdateOrderedModules__11265df58,0)
    ;
    return;
  }
  return;
}



/* Entry: 100709350; end: 100709357; -[SCProcessingPipelineImpl shouldUpdateOrderedModules] */

undefined1 FUN_100709350(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100709358; end: 10070935f; -[SCProcessingPipelineImpl orderedModules] */

undefined8 FUN_100709358(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100709360; end: 1007093ab; -[SCManagedVideoStreamer _getResolutionFromSampleBuffer:] */

undefined1  [16] FUN_100709360(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  func_0x000107c60a1c();
  if (param_3 == 0) {
    dVar2 = *(double *)(param_1 + 0xb8);
    dVar3 = *(double *)(param_1 + 0xc0);
  }
  else {
    uVar1 = param_3;
    func_0x000107c60ac8();
    func_0x000107c60ab8(param_3);
    dVar2 = (double)uVar1;
    dVar3 = (double)param_3;
  }
  auVar4._8_8_ = dVar3;
  auVar4._0_8_ = dVar2;
  return auVar4;
}



/* Entry: 1007093ac; end: 1007093f3; -[SCManagedVideoStreamer _is4By3Resolution:] */

bool FUN_1007093ac(double param_1,double param_2)

{
  float fVar1;
  
  fVar1 = ABS((float)((double)(float)param_2 / param_1) + 0.75) * 1.1920929e-07;
  if (fVar1 <= 1.1754944e-38) {
    fVar1 = 1.1754944e-38;
  }
  return ABS((float)((double)(float)param_2 / param_1) + -0.75) < fVar1;
}



/* Entry: 1007093f4; end: 1007094ff; -[SCManagedVideoStreamer _updateCameraRenderRegion:fillMode:] */

void FUN_1007093f4(double param_1,double param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  dVar4 = 0.0;
  param_2 = param_2 / param_1;
  uVar1 = param_3;
  if (param_5 == 0) {
    param_1 = 1.0;
    dVar6 = 0.0;
    dVar5 = 1.0;
  }
  else {
    func_0x0001008e3740();
    if (param_1 <= param_2) {
      dVar5 = param_1 / param_2;
      param_1 = 1.0;
      dVar4 = (1.0 - dVar5) * 0.5;
      dVar6 = 0.0;
    }
    else {
      param_1 = param_2 / param_1;
      dVar5 = 1.0;
      dVar6 = (1.0 - param_1) * 0.5;
    }
  }
  func_0x000107c609ac(dVar6,dVar4,param_1,dVar5,*(undefined8 *)(param_3 + 0x108),
                      *(undefined8 *)(param_3 + 0x110),*(undefined8 *)(param_3 + 0x118),
                      *(undefined8 *)(param_3 + 0x120));
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x100);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    dStack_80 = dVar6;
    dStack_78 = dVar4;
    dStack_70 = param_1;
    dStack_68 = dVar5;
    func_0x000107c5dc48(PTR__OBJC_CLASS___NSValue_1126afdf8,param_4,&dStack_80,
                        "{CGRect={CGPoint=dd}{CGSize=dd}}");
    func_0x000107c61180();
    func_0x000107c4d664(uVar3,param_4,puVar2);
    func_0x000107c61170(puVar2);
    *(double *)(param_3 + 0x108) = dVar6;
    *(double *)(param_3 + 0x110) = dVar4;
    *(double *)(param_3 + 0x118) = param_1;
    *(double *)(param_3 + 0x120) = dVar5;
  }
  *(double *)(param_3 + 0x128) = param_2;
  return;
}



/* Entry: 100709500; end: 10070950b; -[SCManagedVideoStreamer viewfinderProvider] */

void FUN_100709500(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x188,1);
  return;
}



/* Entry: 10070950c; end: 100709593; -[SCCameraHardwareResourceImpl arImageCapturer] */

undefined8 FUN_10070950c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 100709594; end: 100709647; -[SCSampleBufferImpl initWithSampleBuffer:savingSource:isFileSource:orientation:identifier:fillMode:] */

undefined1 *
FUN_100709594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_7);
  puStack_58 = PTR_PTR_1127003a8;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
  }
  func_0x000107c61170(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 100709648; end: 100709713; -[SCCameraLegacyDataSource didOutputSampleBuffer:devicePosition:] */

/* WARNING: Possible PIC construction at 0x00010070969c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007096f8: Changing call to branch */

void FUN_100709648(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c51704();
  if (uVar1 == 1) {
    func_0x000107c3e3d0(param_1);
    func_0x000107c61180();
    func_0x000107c5be0c();
    param_3 = param_1;
  }
  else {
    uVar2 = param_1;
    func_0x000107c3f318();
    uVar3 = param_3;
    func_0x000107c51704();
    uVar4 = param_3;
    func_0x000107c51704();
    if ((((uVar1 == 1) || ((uVar2 & 1) != 0)) || (uVar3 == 2)) || (uVar4 == 3)) {
      param_3 = param_1 + 0x38;
      func_0x000107c61148(param_3);
      func_0x000107c412a4();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100709714; end: 10070971b; -[SCSampleBufferImpl savingSource] */

undefined8 FUN_100709714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10070971c; end: 100709727; -[SCCameraLegacyDataSource cameraVisible] */

byte FUN_10070971c(long param_1)

{
  return *(byte *)(param_1 + 0x30) & 1;
}



/* Entry: 100709728; end: 1007097e7; -[SCCameraViewfinderRenderAgentImpl newSampleBufferReceived] */

void FUN_100709728(long param_1)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_60;
  func_0x000107c61144(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1007097e8;
  puStack_48 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61184(&puStack_60);
  func_0x000107c4e530(*(undefined8 *)(param_1 + 0x48));
  func_0x000107c61170(ppuVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 1007097e8; end: 100709813;  */

void FUN_1007097e8(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3bf94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100709814; end: 10070986f; -[SCCameraViewfinderRenderAgentImpl _newSampleBufferReceived] */

void FUN_100709814(long param_1)

{
  long lVar1;
  
  func_0x000107c5bdf4(*(undefined8 *)(param_1 + 0x50));
  if (*(char *)(param_1 + 0x42) == '\x01') {
    *(undefined1 *)(param_1 + 0x42) = 0;
    lVar1 = param_1 + 0x58;
    func_0x000107c61148(lVar1);
    func_0x000107c43914();
    func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0a2210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x60),PTR_s_logCameraOpenEventFirstFrameRece_112606290);
    return;
  }
  return;
}



/* Entry: 100709870; end: 100709873; -[SCCameraHealthMonitor stop] */

void FUN_100709870(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddad90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelSessionRunningMonitoring_112554500);
  return;
}


