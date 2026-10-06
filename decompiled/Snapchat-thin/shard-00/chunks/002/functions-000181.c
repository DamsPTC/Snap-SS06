/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100428be8; end: 100428c8b; -[SCLensFavoritesServices initWithLensFavoritesObservable:lensFavoritesUpdater:] */

undefined1 *
FUN_100428be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702cf0;
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



/* Entry: 100428c8c; end: 100428d4b;  */

void FUN_100428c8c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100428d4c; end: 100428eef;  */

void FUN_100428d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_110429840;
  func_0x000107c613fc(&UNK_110429840,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  pcStack_70 = FUN_100b9e85c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100b9e824;
  puStack_78 = &UNK_110429858;
  ppuVar3 = &puStack_90;
  puStack_68 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_68;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar2 = PTR_PTR_1126a8418;
  func_0x000107c610f8();
  func_0x000107c473dc();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(puVar1);
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  return;
}



/* Entry: 100428ef0; end: 100428f07;  */

void FUN_100428ef0(long param_1,long param_2)

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



/* Entry: 100428f08; end: 100428f7b; -[SCLensRemovalServices initWithLensRemovalManager:] */

undefined1 * FUN_100428f08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701ed8;
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



/* Entry: 100428f7c; end: 100428f83;  */

void FUN_100428f7c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100428f84; end: 100428fd7;  */

void FUN_100428f84(void)

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



/* Entry: 100428fd8; end: 100428fdf;  */

void FUN_100428fd8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x150);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100428fe0; end: 100429033;  */

void FUN_100428fe0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x150);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100429034; end: 10042903b;  */

void FUN_100429034(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x120);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10042903c; end: 10042908f;  */

void FUN_10042903c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x120);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100429090; end: 100429097;  */

void FUN_100429090(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100429098; end: 1004290eb;  */

void FUN_100429098(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004290ec; end: 1004290ff;  */

void FUN_1004290ec(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
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
  FUN_10020f884();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  *(undefined8 *)(lVar2 + 0x40) = uStack_90;
  *(undefined8 *)(lVar2 + 0x48) = uStack_98;
  *(undefined8 *)(lVar2 + 0x50) = uStack_a0;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174();
  uVar5 = uStack_78;
  func_0x000107c61174();
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar9 = uStack_98;
  func_0x000107c61174();
  uVar10 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = PTR_PTR_1126a8268;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar11 = uStack_68;
  func_0x000107c61174();
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar12 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar12 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  uVar14 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efb7000);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6600);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  lVar13 = *(long *)(lVar2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc15d0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c3e740(uVar14);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar13 != 0) {
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    *(long *)(lVar2 + 0x58) = lVar13;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100429674);
  (*pcVar1)();
}



/* Entry: 100429100; end: 100429673;  */

void FUN_100429100(long *param_1,long param_2)

{
  code *pcVar1;
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
  long lVar12;
  undefined8 uVar13;
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
  FUN_10020f884();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174();
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
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a8268;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar11 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efb7000);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6600);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  lVar12 = *(long *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc15d0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(uVar13);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar12 != 0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    *(long *)(param_2 + 0x58) = lVar12;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100429674);
  (*pcVar1)();
}



/* Entry: 100429674; end: 10042987f; -[SCLensCrashLoggerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100429674(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61174();
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = puVar1;
  func_0x000107c4c280(puVar1);
  func_0x000107c61180();
  puVar4 = puVar1;
  func_0x000107c4c280(puVar1);
  func_0x000107c61180();
  puVar5 = puVar1;
  func_0x000107c4c280(puVar1);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126bb930;
  func_0x000107c610f4(PTR_PTR_1126bb930);
  func_0x000107c47224();
  uVar7 = 0;
  if (param_1 != 0) {
    uVar7 = *(undefined8 *)(param_1 + _DAT_1127263b0);
  }
  func_0x000107c61174(uVar7);
  func_0x000107c42c20(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  return;
}



/* Entry: 100429880; end: 1004299a3; -[SCLensCrashLoggerServices initWithLensCrashLogger:postCaptureLogger:previewLogger:transcodingLogger:factory:] */

undefined1 *
FUN_100429880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_112704e60;
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
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004299a4; end: 1004299ff;  */

void FUN_1004299a4(void)

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



/* Entry: 100429a00; end: 100429a07;  */

void FUN_100429a00(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 100429a08; end: 10042a16f; -[SCUcoServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100429a08(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_10569b0bc;
  puStack_90 = &UNK_1108a6d98;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar20 = param_1;
  FUN_10042a170();
  func_0x000107c61180();
  lVar2 = lVar20;
  func_0x000107c3ee24();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160();
  lVar4 = param_1;
  FUN_10042a19c();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5d164();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  FUN_100078e94();
  func_0x000107c61180();
  lVar21 = (long)_DAT_112727814;
  lVar20 = param_1 + lVar21;
  func_0x000107c61148(lVar20);
  lVar6 = lVar20;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  lVar7 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar8 = lVar5;
  func_0x000107c40a10();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c3d798(puVar3);
  lVar4 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c3d798(puVar3);
  lVar20 = param_1;
  FUN_10042a19c();
  func_0x000107c61180();
  lVar5 = lVar20;
  func_0x000107c3f9bc();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  FUN_100078e94();
  func_0x000107c61180();
  lVar21 = param_1 + lVar21;
  func_0x000107c61148(lVar21);
  lVar6 = lVar21;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  lVar7 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar10 = lVar5;
  func_0x000107c40a10();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c3d798(puVar3);
  lVar21 = param_1;
  func_0x000107c3bca8();
  func_0x000107c61180();
  lVar20 = param_1 + _DAT_112727818;
  func_0x000107c61148();
  lVar6 = lVar20;
  func_0x000107c4fb14();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  puVar11 = PTR_PTR_1126ae720;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  puStack_c8 = &UNK_10569b1f4;
  puStack_c0 = &UNK_1108a6e38;
  func_0x000107c61174(lVar4);
  lStack_b8 = lVar4;
  lStack_b0 = param_1;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_e0,auStack_80);
  func_0x000107c61174(lVar2);
  func_0x000107c61174(lVar21);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar13 = PTR_PTR_1126ae720;
  func_0x000107c61174();
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar14 = PTR_PTR_1126bcc68;
  func_0x000107c610f4(PTR_PTR_1126bcc68);
  func_0x000107c4900c();
  if (param_1 == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = *(undefined8 *)(param_1 + _DAT_11272786c);
  }
  func_0x000107c61174(uVar19);
  func_0x000107c42c20(uVar19);
  func_0x000107c61170(uVar19);
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11272785c;
    func_0x000107c61148();
  }
  lVar7 = lVar20;
  func_0x000107c4b020();
  func_0x000107c61180();
  lVar15 = param_1;
  func_0x000107c3cb14(param_1);
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar20);
  if (param_1 == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = *(undefined8 *)(param_1 + _DAT_112727864);
  }
  func_0x000107c61174(uVar19);
  func_0x000107c42c20(uVar19);
  func_0x000107c61170(uVar19);
  puVar16 = PTR_PTR_1126bcc70;
  func_0x000107c610f4(PTR_PTR_1126bcc70);
  lVar20 = lVar15;
  func_0x000107c5d138(lVar15);
  func_0x000107c61180();
  lVar7 = lVar15;
  func_0x000107c5d170(lVar15);
  func_0x000107c61180();
  func_0x000107c49004(puVar16);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar20);
  if (param_1 == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = *(undefined8 *)(param_1 + _DAT_112727868);
  }
  func_0x000107c61174(uVar19);
  func_0x000107c42c20(uVar19);
  func_0x000107c61170(uVar19);
  puVar17 = PTR_PTR_1126ae720;
  func_0x000107c61174(puVar13);
  func_0x000107c3e4fc(puVar17);
  func_0x000107c61180();
  puVar18 = PTR_PTR_1126bcc78;
  func_0x000107c610f4(PTR_PTR_1126bcc78);
  func_0x000107c48b8c();
  uVar19 = 0;
  if (param_1 != 0) {
    uVar19 = *(undefined8 *)(param_1 + _DAT_112727870);
  }
  func_0x000107c61174(uVar19);
  func_0x000107c42c20(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(0);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar2);
  func_0x000107c61120(auStack_e0);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(lStack_b8);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  return;
}



/* Entry: 10042a170; end: 10042a193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042a170(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11272784c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10042a194; end: 10042a19b; -[SCBundledLensProviderServices bundledLensProvider] */

undefined8 FUN_10042a194(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10042a19c; end: 10042a1bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042a19c(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112727850);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10042a1c0; end: 10042a1c7; -[SCLensScheduleMetadataStoreServices ucoScheduleMetadataStoreCreator] */

undefined8 FUN_10042a1c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10042a1c8; end: 10042a1e3;  */

void FUN_10042a1c8(void)

{
  func_0x000107c61160(PTR_PTR_1126bb958);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10042a1e4; end: 10042a347; -[SCLensBasePerformerProvider init] */

undefined1 * FUN_10042a1e4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9340;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10042a348; end: 10042a44f;  */

void FUN_10042a348(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_4);
  puVar1 = PTR_PTR_1126ae720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10042a450; end: 10042a483; -[SCLensFilteredMetadataStoreBlockCreator createFilteredMetadataStoreWithAnnouncerPerformer:context:performerProvider:] */

void FUN_10042a450(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4,param_5);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10042a484; end: 10042a4bb;  */

void FUN_10042a484(void)

{
  func_0x000107c610f4(PTR_PTR_1126de888);
  func_0x000107c484c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10042a4bc; end: 10042a5f3; -[SCLensScheduleNamespaceFilteredMetadataStore initWithScheduleService:announcerPerformer:lensPerformerProvider:lensDataConfig:filteringByApplicableContext:] */

undefined1 *
FUN_10042a4bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1127016a0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126bcc50;
    func_0x000107c610f4();
    func_0x000107c456b0();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x30) = param_7;
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0x40) = 0;
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10042a5f4; end: 10042a737; -[SCGenericLensMetadataStore initWithAnnouncerPerformer:ownerMetadataStore:] */

undefined1 *
FUN_10042a5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112705af0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = param_4;
    func_0x000107c61158();
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)puVar1;
      func_0x000107c61158();
    }
    func_0x000107c60b14();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined1 **)((long)puVar1 + 0x38) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar4);
    puVar3 = PTR_PTR_1126ddc80;
    func_0x000107c61160();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x40),param_4);
    puVar3 = PTR____NSArray0__struct_11034ab48;
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = PTR____NSArray0__struct_11034ab48;
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar4);
    *(undefined4 *)((long)puVar1 + 8) = 0;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10042a738; end: 10042a813; -[SCLensMetadataStoreListenerAnnouncer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042a738(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = _DAT_113082ca8;
  uVar2 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(param_1 + lVar3) = uVar2;
  *(undefined **)(param_1 + _DAT_113082cb0) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar1 = _DAT_113082c90;
  lVar3 = 0x113082c78;
  FUN_1000285a8(0x113082c78,&UNK_10dd125e0);
  lVar4 = lVar3;
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(long *)(param_1 + lVar1) = lVar4;
  lVar1 = _DAT_113082ca0;
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  func_0x000107c5f1f0();
  *(long *)(param_1 + lVar1) = lVar3;
  FUN_10042a814();
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10042a814; end: 10042a833;  */

void FUN_10042a814(void)

{
  func_0x000107c61168(&PTR_PTR_1129c9658);
  return;
}



/* Entry: 10042a834; end: 10042a83b; -[SCLensScheduleMetadataStoreServices cheeriosScheduleMetadataStoreCreator] */

undefined8 FUN_10042a834(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10042a83c; end: 10042a927; -[SCUcoServicesEntryPoint _lensMetadataRepositoryWithExtraStores:] */

void FUN_10042a83c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(param_3);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10042a928; end: 10042a92f; -[SCLensDataLoggerServices redownloadLogger] */

undefined8 FUN_10042a928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10042a930; end: 10042aa2b; -[SCUcoServices initWithUcoDependencyFactory:remoteAssetsLoader:lensMetadataRepository:ucoLogger:] */

undefined1 *
FUN_10042a930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ffea8;
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



/* Entry: 10042aa2c; end: 10042ad5f; -[SCUcoServicesEntryPoint _ucoDefaultServicesWithUcoDependencyFactory:unlockLensMetadataStore:remoteAssetsLoader:lensMetadataRepository:scheduleLensMetadataStore:ucoLensMetadataSettingManager:lensDataConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042aa2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  puStack_a0 = &UNK_10569b588;
  puStack_98 = &UNK_1108a6e98;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c61174(param_6);
  uStack_90 = param_6;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_b8,auStack_80);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  lVar3 = param_1;
  func_0x000107c3b40c(param_1);
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_112727830;
    func_0x000107c61148(lVar6);
  }
  lVar4 = lVar6;
  func_0x000107c4b1cc(lVar6);
  func_0x000107c61180();
  func_0x000107c3cb1c(param_1);
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar6);
  puVar5 = PTR_PTR_1126bcca0;
  func_0x000107c610f4(PTR_PTR_1126bcca0);
  func_0x000107c49004();
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_4);
  func_0x000107c61120(auStack_b8);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uStack_90);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10042ad60; end: 10042aea3; -[SCUcoServicesEntryPoint _dataFetcherWithUcoDependencyFactory:lensMetadataStoreTuple:remoteAssetsLoader:] */

void FUN_10042ad60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10042aea4; end: 10042aeab; -[SCLensContentServices lensIconRepository] */

undefined8 FUN_10042aea4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10042aeac; end: 10042afef; -[SCUcoServicesEntryPoint _ucoViewModelGeneratorWithUcoDependencyFactory:lensMetadataRepository:lensIconRepository:] */

void FUN_10042aeac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10042aff0; end: 10042b093; -[SCUcoDefaultServices initWithUcoDataFetcher:ucoViewModelGenerator:] */

undefined1 *
FUN_10042aff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112701ea8;
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



/* Entry: 10042b094; end: 10042b09b; -[SCUcoDefaultServices ucoDataFetcher] */

undefined8 FUN_10042b094(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10042b09c; end: 10042b0a3; -[SCUcoDefaultServices ucoViewModelGenerator] */

undefined8 FUN_10042b09c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10042b0a4; end: 10042b147; -[SCUcoMemoriesServices initWithUcoDataFetcher:ucoViewModelGenerator:] */

undefined1 *
FUN_10042b0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112701ea0;
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



/* Entry: 10042b148; end: 10042b1bb; -[SCLensUCOLoggerServices initWithSwipeFunnelLogger:] */

undefined1 * FUN_10042b148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270a250;
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



/* Entry: 10042b1bc; end: 10042b27f;  */

void FUN_10042b1bc(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10042b280; end: 10042b543; -[SCBloopsServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042b280(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
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
  puVar1 = PTR_PTR_1126ae720;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_1054b0e30;
  puStack_90 = &UNK_11088f6b8;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c4d77c(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  puStack_d0 = puVar5;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_1054b0eb8;
  puStack_b8 = &UNK_11088f728;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  lVar4 = param_1;
  func_0x000107c3b2f4();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_d8,auStack_80);
  func_0x000107c4d77c(puVar5);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126b98f8;
  func_0x000107c610f4(PTR_PTR_1126b98f8);
  func_0x000107c47c58();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112724128));
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(param_1 + _DAT_11272412c);
  puVar8 = PTR_PTR_1126b9900;
  func_0x000107c610f4(PTR_PTR_1126b9900);
  func_0x000107c47c5c();
  func_0x000107c42c20(uVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  return;
}



/* Entry: 10042b544; end: 10042b5fb; -[SCBloopsServicesEntryPoint _createOnboardingControllerFactory] */

void FUN_10042b544(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c4d77c(puVar1);
  func_0x000107c61180();
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10042b5fc; end: 10042b6c7; -[SCBloopsServices initWithOnboardingControllerFactory:targetsService:bloopsMetricsService:] */

undefined1 *
FUN_10042b5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126fd848;
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
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10042b6c8; end: 10042b793; -[SCBloopsCTAServices initWithOnboardingStateProvider:onboardingFactory:targetsService:] */

undefined1 *
FUN_10042b6c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126fd830;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10042b794; end: 10042b85f;  */

void FUN_10042b794(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10042b860; end: 10042b867;  */

void FUN_10042b860(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xb0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10042b868; end: 10042b8bb;  */

void FUN_10042b868(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xb0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10042b8bc; end: 10042c4b3;  */

void FUN_10042b8bc(long *param_1,long param_2)

{
  code *pcVar1;
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
  long lVar22;
  long lVar23;
  long lVar24;
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
  FUN_100239b30();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  *(undefined8 *)(param_2 + 0x60) = uStack_a8;
  *(undefined8 *)(param_2 + 0x68) = uStack_b0;
  *(undefined8 *)(param_2 + 0x70) = uStack_b8;
  *(undefined8 *)(param_2 + 0x78) = uStack_c0;
  *(undefined8 *)(param_2 + 0x80) = uStack_c8;
  *(undefined8 *)(param_2 + 0x88) = uStack_d0;
  *(undefined8 *)(param_2 + 0x90) = uStack_d8;
  *(undefined8 *)(param_2 + 0x98) = uStack_e0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f0;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174();
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  uVar10 = uStack_b0;
  func_0x000107c61174();
  uVar11 = uStack_b8;
  func_0x000107c61174();
  uVar12 = uStack_c0;
  func_0x000107c61174();
  uVar13 = uStack_c8;
  func_0x000107c61174();
  uVar14 = uStack_d0;
  func_0x000107c61174();
  uVar15 = uStack_d8;
  func_0x000107c61174();
  uVar16 = uStack_e0;
  func_0x000107c61174();
  uVar17 = uStack_e8;
  func_0x000107c61174();
  uVar18 = uStack_f0;
  func_0x000107c61174(uStack_f0);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x28) = puVar2;
  puVar2 = PTR_PTR_1126a82b0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar19 = auStack_70[0];
  func_0x000107c61174();
  uVar20 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar20 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar20);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0x6553726567676f6c;
  func_0x000107c5fadc(0x6553726567676f6c,0xee00736563697672);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar20);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar21);
  uVar20 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef132d0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc6b50);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174(uVar21);
  uVar20 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efc6b70);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efc6b90);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174(uVar21);
  uVar20 = 0x7265536f69647561;
  func_0x000107c5fadc(0x7265536f69647561,0xed00007365636976);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar20);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc66c0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef23540);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6600);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc6bb0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef20290);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar20);
  func_0x000107c61174(uVar17);
  func_0x000107c61174();
  uVar20 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efc15b0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef26270);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar20);
  lVar22 = *(long *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc6bd0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(uVar20);
  lVar23 = *(long *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6bf0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(uVar20);
  lVar24 = *(long *)(param_2 + 0x28);
  func_0x000107c61174(uVar21);
  func_0x000107c61174();
  uVar20 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010efc6c20);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(uVar20);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar22 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10042c4ac);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0xb0) = lVar22;
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar23 != 0) {
    *(long *)(param_2 + 0xb8) = lVar23;
    func_0x000107c52018();
    func_0x000107c61180();
    if (lVar24 != 0) {
      func_0x000107c61170(uVar19);
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
      *(long *)(param_2 + 0xc0) = lVar24;
      *param_1 = param_2;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10042c4b4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10042c4b0);
  (*pcVar1)();
}



/* Entry: 10042c4b4; end: 10042c4f7;  */

void FUN_10042c4b4(void)

{
  long unaff_x20;
  
  FUN_10042b8bc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 10042c4f8; end: 10042c4ff;  */

void FUN_10042c4f8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x158);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10042c500; end: 10042c553;  */

void FUN_10042c500(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x158);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10042c554; end: 10042c55b;  */

void FUN_10042c554(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10042c55c; end: 10042c5af;  */

void FUN_10042c55c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10042c5b0; end: 10042c5b7;  */

void FUN_10042c5b0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xa0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10042c5b8; end: 10042c60b;  */

void FUN_10042c5b8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xa0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10042c60c; end: 10042d0fb;  */

void FUN_10042c60c(long *param_1,long param_2)

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
  FUN_1002327dc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  *(undefined8 *)(param_2 + 0x80) = uStack_e0;
  *(undefined8 *)(param_2 + 0x88) = uStack_e8;
  *(undefined8 *)(param_2 + 0x90) = uStack_f0;
  *(undefined8 *)(param_2 + 0x98) = uStack_f8;
  puVar1 = PTR_PTR_1126a7c10;
  func_0x000107c610f8();
  uVar2 = uStack_f0;
  func_0x000107c61174();
  uVar3 = uStack_f8;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174();
  uVar5 = uStack_80;
  func_0x000107c61174();
  uVar6 = uStack_88;
  func_0x000107c61174();
  uVar7 = uStack_90;
  func_0x000107c61174();
  uVar8 = uStack_98;
  func_0x000107c61174();
  uVar9 = uStack_a0;
  func_0x000107c61174();
  uVar10 = uStack_a8;
  func_0x000107c61174();
  uVar11 = uStack_b0;
  func_0x000107c61174();
  uVar12 = uStack_b8;
  func_0x000107c61174();
  uVar13 = uStack_c0;
  func_0x000107c61174();
  uVar14 = uStack_c8;
  func_0x000107c61174();
  uVar15 = uStack_d0;
  func_0x000107c61174();
  uVar16 = uStack_d8;
  func_0x000107c61174();
  uVar17 = uStack_e0;
  func_0x000107c61174(uStack_e0);
  uVar18 = uStack_e8;
  func_0x000107c61174(uStack_e8);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar19 = auStack_70[0];
  func_0x000107c61174();
  uVar20 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar20 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef10e10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar20 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar20);
  uVar22 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efbb8f0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efbb910);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efbb930);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efbb950);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efbb970);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010efbb990);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar20);
  func_0x000107c61174(uVar15);
  func_0x000107c61174(uVar22);
  uVar20 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010efbb9c0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar20);
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar22);
  uVar20 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efbb870);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar20);
  uVar22 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar22);
  uVar20 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efbb850);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar20);
  func_0x000107c61174(uVar18);
  func_0x000107c61174(uVar22);
  uVar20 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar20);
  func_0x000107c61174(uVar22);
  uVar20 = 0x112dca948;
  FUN_1000285a8(0x112dca948,&UNK_10d99f4a0);
  func_0x000107c60184();
  uVar21 = 0x5372657070696c66;
  func_0x000107c5fadc(0x5372657070696c66,0xef73656369767265);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c615e8(uVar20);
  func_0x000107c61170(uVar21);
  uVar22 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef857e0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  uVar20 = uVar22;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar19);
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
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(param_2 + 0xa0) = uVar20;
  *param_1 = param_2;
  return;
}



/* Entry: 10042d0fc; end: 10042d13f;  */

void FUN_10042d0fc(void)

{
  long unaff_x20;
  
  FUN_10042c60c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 10042d140; end: 10042d147;  */

void FUN_10042d140(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10042d148; end: 10042d19b;  */

void FUN_10042d148(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10042d19c; end: 10042d1a3;  */

void FUN_10042d19c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1001b82c4();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_10042d23c();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10042d2f8();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10042d1a4; end: 10042d23b;  */

void FUN_10042d1a4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1001b82c4();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_10042d23c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10042d2f8();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 10042d23c; end: 10042d2a7;  */

void FUN_10042d23c(undefined8 param_1)

{
  if (lRam0000000112e928d8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6d3474);
  return;
}



/* Entry: 10042d2a8; end: 10042d2bf; -[SCAFideliusGraphRead setFailureReason:] */

void FUN_10042d2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbdcd8,2,param_3,0);
  return;
}



/* Entry: 10042d2c0; end: 10042d2d7; -[SCAFideliusGraphRead setSource:] */

void FUN_10042d2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dae8d8,3,param_3,0);
  return;
}



/* Entry: 10042d2d8; end: 10042d2f7;  */

void FUN_10042d2d8(void)

{
  func_0x000107c61168(&PTR_PTR_11283a088);
  return;
}



/* Entry: 10042d2f8; end: 10042d343;  */

void FUN_10042d2f8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10042d2d8(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  FUN_1001b8300(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  FUN_10042d398();
  return;
}



/* Entry: 10042d344; end: 10042d397; -[_TtC23DpaLensSnapAdConfigImpl23DpaLensSnapAdConfigImpl init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042d344(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112e92880);
  lVar2 = param_1;
  FUN_10042d2d8();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10042d398; end: 10042d3fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042d398(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113013000) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113013008) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10042d3fc; end: 10042d403;  */

void FUN_10042d3fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10042d404; end: 10042d457;  */

void FUN_10042d404(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10042d458; end: 10042d45f;  */

void FUN_10042d458(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1001d4f50();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_10042d4f8();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10042d584();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10042d460; end: 10042d4f7;  */

void FUN_10042d460(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1001d4f50();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_10042d4f8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10042d584();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 10042d4f8; end: 10042d583;  */

void FUN_10042d4f8(undefined8 param_1)

{
  if (lRam0000000112ee24e0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e70ca40);
  return;
}



/* Entry: 10042d584; end: 10042d5ff;  */

void FUN_10042d584(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = 0;
  func_0x00010042d564();
  func_0x000107c613fc();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10042d600();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  puVar2 = puVar3;
  FUN_10042d700();
  *(undefined **)(lVar1 + 0x18) = puVar2;
  FUN_10042d808();
  *(undefined **)(lVar1 + 0x20) = puVar3;
  FUN_1001d4f8c(0);
  func_0x000107c610f8();
  func_0x000107c6157c(lVar1);
  FUN_10042d81c();
  return;
}



/* Entry: 10042d600; end: 10042d6ff;  */

undefined * FUN_10042d600(long param_1)

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
    FUN_1000285a8(0x112ee2260,&UNK_10db0d150);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10042d6fc);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10042d700);
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



/* Entry: 10042d700; end: 10042d713;  */

undefined * FUN_10042d700(long param_1)

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
    FUN_1000285a8(0x112ee2258,&UNK_10db0d270);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10042d804);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10042d808);
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



/* Entry: 10042d714; end: 10042d807;  */

undefined * FUN_10042d714(long param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1000285a8(param_2,param_3);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10042d804);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10042d808);
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



/* Entry: 10042d808; end: 10042d81b;  */

undefined * FUN_10042d808(long param_1)

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
    FUN_1000285a8(0x112ee2250,&UNK_10db0d140);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10042d804);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10042d808);
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



/* Entry: 10042d81c; end: 10042d87f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042d81c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_11306bf28) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306bf30) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10042d880; end: 10042d887;  */

void FUN_10042d880(undefined8 *param_1)

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



/* Entry: 10042d888; end: 10042d8db;  */

void FUN_10042d888(undefined8 *param_1)

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



/* Entry: 10042d8dc; end: 10042d8e7;  */

void FUN_10042d8dc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_10023230c();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_10042e0b4(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 10042d8e8; end: 10042d997;  */

void FUN_10042d8e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_10023230c();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_10042e0b4(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 10042d998; end: 10042d99f;  */

void FUN_10042d998(undefined8 *param_1)

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



/* Entry: 10042d9a0; end: 10042d9f3;  */

void FUN_10042d9a0(undefined8 *param_1)

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



/* Entry: 10042d9f4; end: 10042d9fb;  */

void FUN_10042d9f4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_100083b20(&uStack_48);
  FUN_10023140c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  FUN_10042dac4(0);
  func_0x000107c613fc();
  func_0x000107c61580(uVar2,2);
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_10042db40();
  *(undefined8 *)(lVar1 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_10042db68();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar4;
  *param_1 = lVar1;
  return;
}



/* Entry: 10042d9fc; end: 10042dac3;  */

void FUN_10042d9fc(long *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_10023140c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = param_3;
  FUN_10042dac4(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_3,2);
  uVar1 = uStack_48;
  func_0x000107c61174();
  uVar2 = uVar1;
  FUN_10042db40();
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  uVar3 = uVar2;
  func_0x000107c6157c();
  FUN_10042db68();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar3;
  *param_1 = param_2;
  return;
}



/* Entry: 10042dac4; end: 10042db3f;  */

void FUN_10042dac4(undefined8 param_1)

{
  if (lRam0000000112dd5140 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e659578);
  return;
}



/* Entry: 10042db40; end: 10042db67;  */

void FUN_10042db40(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 10042db68; end: 10042dc6f;  */

undefined * FUN_10042db68(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_38 [8];
  
  puVar1 = &UNK_110413640;
  func_0x000107c613fc(&UNK_110413640,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  uVar2 = 0x112dd5108;
  FUN_1000285a8(0x112dd5108,&UNK_10d997700);
  func_0x000107c613fc();
  puVar3 = &UNK_10192b2f4;
  FUN_1000bdd8c(&UNK_10192b2f4,puVar1,uVar2);
  func_0x000107c61644(auStack_38);
  func_0x000107c61640(auStack_38);
  FUN_1000285a8(0x112dd5110,&UNK_10d997708);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar3);
  puVar1 = &UNK_10192b354;
  FUN_1000bdd8c(&UNK_10192b354,puVar3);
  FUN_100231498(0);
  func_0x000107c610f8();
  FUN_10042dc94(puVar1);
  func_0x000107c61574(puVar3);
  return puVar1;
}



/* Entry: 10042dc70; end: 10042dc93;  */

void FUN_10042dc70(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10042dc94; end: 10042dcdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042dc94(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112eae810) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10042dce0; end: 10042dd0b;  */

void FUN_10042dce0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


