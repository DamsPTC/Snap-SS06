/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1007b0bc4; end: 1007b0bcf; -[SCAUserSessionScopeStart toProtoWithAllowedFields:] */

void FUN_1007b0bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 1007b0bd0; end: 1007b0cb3; -[SCLensExplorerBadgeServiceProvider provide] */

void FUN_1007b0bd0(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126cc990;
  func_0x000107c610f4(PTR_PTR_1126cc990);
  func_0x000107c47298();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1007b0cb4; end: 1007b0d27; -[SCLensExplorerBadgeServices initWithLensExplorerBadgeTracking:] */

undefined1 * FUN_1007b0cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112700af8;
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



/* Entry: 1007b0d28; end: 1007b0d5b;  */

void FUN_1007b0d28(void)

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



/* Entry: 1007b0d5c; end: 1007b0d63;  */

void FUN_1007b0d5c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x88);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b0d64; end: 1007b0db7;  */

void FUN_1007b0d64(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x88);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b0db8; end: 1007b16db;  */

void FUN_1007b0db8(long *param_1,long param_2)

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
  FUN_100340f50();
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
  puVar1 = PTR_PTR_1126cc9a0;
  func_0x000107c610f8();
  uVar2 = uStack_e0;
  func_0x000107c61174();
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
  func_0x000107c61174(uStack_c8);
  uVar14 = uStack_d0;
  func_0x000107c61174();
  func_0x000107c615f0(uStack_d8);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar15 = auStack_70[0];
  func_0x000107c61174();
  uVar18 = 0xd000000000000013;
  uVar16 = uVar18;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar16 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar16 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar16 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c280);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0x536b726f7774656e;
  func_0x000107c5fadc(0x536b726f7774656e,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar16);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f03ee50);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f03ef30);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc6f10);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1f610);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef235a0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar16);
  func_0x000107c615f0(uStack_d8);
  func_0x000107c61174();
  uVar16 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef3db20);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c615e8(uStack_d8);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  uVar16 = 0x112de3bf8;
  FUN_1000285a8(0x112de3bf8,&UNK_10da415a0);
  func_0x000107c60184();
  uVar18 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc6af0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c615e8(uVar16);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  uVar16 = uVar17;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar15);
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
  func_0x000107c615e8(uStack_d8);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(param_2 + 0x88) = uVar16;
  *param_1 = param_2;
  return;
}



/* Entry: 1007b16dc; end: 1007b171f;  */

void FUN_1007b16dc(void)

{
  long unaff_x20;
  
  FUN_1007b0db8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 1007b1720; end: 1007b1727;  */

void FUN_1007b1720(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b1728; end: 1007b177b;  */

void FUN_1007b1728(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b177c; end: 1007b1787;  */

void FUN_1007b177c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100325028();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_1007b1890(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  FUN_1007b190c(uStack_58,uVar2,uVar3,uStack_70);
  *(undefined8 *)(lVar1 + 0x10) = uStack_58;
  FUN_1007b1dc8();
  *(undefined8 *)(lVar1 + 0x30) = uStack_58;
  *param_1 = lVar1;
  return;
}



/* Entry: 1007b1788; end: 1007b188f;  */

void FUN_1007b1788(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100325028();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_1007b1890(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  FUN_1007b190c(uStack_58,uVar1,uVar2,uStack_70);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  FUN_1007b1dc8();
  *(undefined8 *)(param_2 + 0x30) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 1007b1890; end: 1007b190b;  */

void FUN_1007b1890(undefined8 param_1)

{
  if (lRam0000000112f1e4b8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e733c70);
  return;
}



/* Entry: 1007b190c; end: 1007b1c27;  */

void FUN_1007b190c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined1 auStack_b0 [40];
  long alStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  FUN_1000285a8(0x112e2fb98,&UNK_10da84c50);
  uVar1 = param_4;
  func_0x000107c421c8();
  func_0x000107c61180();
  uVar2 = uVar1;
  FUN_1000bda74();
  func_0x000107c61170(uVar1);
  puVar3 = &UNK_1105d9f10;
  func_0x000107c613fc(&UNK_1105d9f10,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  FUN_1000285a8(0x112d54e08,&UNK_10d91bfb0);
  func_0x000107c613fc();
  func_0x000107c61174();
  puVar4 = &UNK_102e31acc;
  FUN_1000bdd8c(&UNK_102e31acc,puVar3);
  lVar5 = 0;
  FUN_1007b1c58();
  lVar6 = lVar5;
  func_0x000107c613fc();
  *(undefined **)(lVar6 + 0x18) = puVar4;
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x10) = uVar2;
  ppuStack_68 = &PTR_DAT_1105da2a0;
  alStack_88[0] = lVar6;
  lStack_70 = lVar5;
  FUN_1007b1c78(alStack_88,auStack_b0);
  puVar3 = &UNK_1105d9f38;
  func_0x000107c613fc(&UNK_1105d9f38,0x40,7);
  FUN_1007b1cbc(auStack_b0,puVar3 + 0x10);
  *(undefined8 *)(puVar3 + 0x38) = param_2;
  FUN_1000285a8(0x112f1e470,&UNK_10db56870);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  puVar4 = &UNK_102e31ac8;
  FUN_1000bdd8c(&UNK_102e31ac8,puVar3);
  FUN_1007b1c78(alStack_88,auStack_b0);
  puVar3 = &UNK_1105d9f60;
  func_0x000107c613fc(&UNK_1105d9f60,0x40,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  FUN_1007b1cbc(auStack_b0,puVar3 + 0x18);
  FUN_1000285a8(0x112f1e478,&UNK_10db56878);
  func_0x000107c613fc();
  func_0x000107c61174(param_3);
  puVar7 = &UNK_102e31abc;
  FUN_1000bdd8c(&UNK_102e31abc,puVar3);
  puVar8 = puVar7;
  FUN_1003a5b88();
  func_0x000107c61574(puVar7);
  uVar1 = 0x112f1e480;
  FUN_1000285a8(0x112f1e480,&UNK_10db56880);
  puVar3 = &UNK_102e31ac0;
  FUN_1000cb480(&UNK_102e31ac0,0,uVar1);
  puVar7 = puVar3;
  FUN_1003a5b88();
  func_0x000107c61574(puVar3);
  uVar1 = 0x112f1e488;
  FUN_1000285a8(0x112f1e488,&UNK_10db56888);
  puVar3 = &UNK_102e31ac4;
  FUN_1000cb480(&UNK_102e31ac4,0,uVar1);
  puVar9 = puVar3;
  FUN_1003a5b88();
  func_0x000107c61574(puVar3);
  puVar3 = PTR_PTR_1126ac570;
  func_0x000107c610f8();
  func_0x000107c46720();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61574(puVar4);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar9);
  func_0x0001000834e4(alStack_88);
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  return;
}



/* Entry: 1007b1c28; end: 1007b1c4b;  */

void FUN_1007b1c28(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007b1c4c; end: 1007b1c57;  */

void FUN_1007b1c4c(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007b1c58; end: 1007b1c77;  */

void FUN_1007b1c58(void)

{
  func_0x000107c61168(&PTR_PTR_112f1e720);
  return;
}



/* Entry: 1007b1c78; end: 1007b1cbb;  */

long FUN_1007b1c78(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1007b1cbc; end: 1007b1cd3;  */

undefined8 * FUN_1007b1cbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1007b1cd4; end: 1007b1cf3;  */

void FUN_1007b1cd4(void)

{
  func_0x000107c61168(&PTR_PTR_1128a89a8);
  return;
}



/* Entry: 1007b1cf4; end: 1007b1cfb; -[SCAFideliusGraphRead getEventQoS] */

undefined8 FUN_1007b1cf4(void)

{
  return 1;
}



/* Entry: 1007b1cfc; end: 1007b1dc7; -[SCLensExplorerDynamicLayoutServices initWithDynamicLayoutFetcher:layoutBuilder:customLayoutBuilder:] */

undefined1 *
FUN_1007b1cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f55c0;
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



/* Entry: 1007b1dc8; end: 1007b1dcf;  */

void FUN_1007b1dc8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1007b1dd0; end: 1007b1e0b;  */

void FUN_1007b1dd0(void)

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



/* Entry: 1007b1e0c; end: 1007b1e13;  */

void FUN_1007b1e0c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x118);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b1e14; end: 1007b1e67;  */

void FUN_1007b1e14(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x118);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b1e68; end: 1007b1e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b1e68(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11274d790);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007b1e8c; end: 1007b24ff; -[SCLensExplorerDataServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b1e8c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  
  lVar2 = param_1;
  FUN_1007b1e68();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4b100();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  lVar2 = param_1;
  FUN_1007b2500();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c40870();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = param_1;
  func_0x0001007b2524();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_11274d79c;
    func_0x000107c61148();
  }
  lVar5 = param_1;
  func_0x0001007b2548();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_11274d7b0;
    func_0x000107c61148();
  }
  lVar6 = lVar26;
  func_0x000107c49840();
  func_0x000107c61180();
  func_0x000107c61170(lVar26);
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar26 = param_1;
  func_0x0001007b256c();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c61174();
  func_0x000107c61174(puVar7);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_11274d7b8;
    func_0x000107c61148();
  }
  lVar10 = lVar27;
  func_0x000107c4b020();
  func_0x000107c61180();
  lVar11 = lVar10;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c4cfb8();
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar27);
  if (param_1 == 0) {
    uVar28 = 0;
  }
  else {
    uVar28 = param_1 + _DAT_11274d7c0;
    func_0x000107c61148();
  }
  puVar12 = PTR_PTR_1126cc9a8;
  func_0x000107c61158(PTR_PTR_1126cc9a8);
  uVar13 = uVar28;
  func_0x000107c6115c(uVar28,puVar12);
  uVar1 = uVar28;
  if ((uVar13 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(uVar28);
  puVar12 = PTR_PTR_1126cc9b0;
  func_0x000107c610f4();
  lVar27 = param_1;
  FUN_1007b1e68();
  func_0x000107c61180();
  if (param_1 == 0) {
    uStack_190 = 0;
  }
  else {
    uStack_190 = param_1 + _DAT_11274d7a4;
    func_0x000107c61148();
  }
  lVar10 = param_1;
  func_0x0001007b2548();
  func_0x000107c61180();
  if (param_1 == 0) {
    uStack_1a0 = 0;
  }
  else {
    uStack_1a0 = param_1 + _DAT_11274d7a0;
    func_0x000107c61148();
  }
  lVar11 = param_1;
  func_0x0001007b2524();
  func_0x000107c61180();
  lVar14 = param_1;
  FUN_1007b2500();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar30 = 0;
    lVar29 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_11274d7ac;
    func_0x000107c61148();
    lVar29 = param_1 + _DAT_11274d7b4;
    func_0x000107c61148();
  }
  func_0x0001007b256c();
  func_0x000107c61180();
  func_0x000107c483a8();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uStack_1a0);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(uStack_190);
  func_0x000107c61170(lVar27);
  puVar15 = PTR_PTR_1126cc9b8;
  func_0x000107c610f4();
  puVar16 = puVar12;
  func_0x000107c4f74c(puVar12);
  func_0x000107c61180();
  puVar17 = puVar12;
  func_0x000107c4f74c(puVar12);
  func_0x000107c61180();
  puVar18 = puVar12;
  func_0x000107c4f74c(puVar12);
  func_0x000107c61180();
  puVar19 = puVar12;
  func_0x000107c4f74c();
  func_0x000107c61180();
  puVar20 = puVar12;
  func_0x000107c4f74c(puVar12);
  func_0x000107c61180();
  puVar21 = puVar12;
  func_0x000107c4f74c(puVar12);
  func_0x000107c61180();
  puVar22 = puVar12;
  func_0x000107c4f74c();
  func_0x000107c61180();
  puVar23 = puVar12;
  func_0x000107c4f74c();
  func_0x000107c61180();
  puVar24 = puVar12;
  func_0x000107c4f74c();
  func_0x000107c61180();
  puVar25 = puVar12;
  func_0x000107c4f74c();
  func_0x000107c61180();
  func_0x000107c4649c();
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar24);
  func_0x000107c61170(puVar23);
  func_0x000107c61170(puVar22);
  func_0x000107c61170(puVar21);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar31);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 1007b2500; end: 1007b258f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b2500(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11274d794);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007b2590; end: 1007b25df; -[SCLensDataConfigProvider mixerNamespaceCacheOptimizationEnabled] */

undefined8 FUN_1007b2590(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1007b25e0; end: 1007b25eb;  */

void FUN_1007b25e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf461f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_configProviderForNamespace__1125af220,7);
  return;
}



/* Entry: 1007b25ec; end: 1007b25f3; -[SCBlizzardEventConfigurer timeProvider] */

undefined8 FUN_1007b25ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1007b25f4; end: 1007b267b; -[SCBlizzardEvent _setDateInPropertiesMap:usingKey:] */

/* WARNING: Possible PIC construction at 0x0001007b265c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007b2660) */

void FUN_1007b25f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c5c9e4(param_3);
  func_0x000107c4d954(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c4d2e0(param_1);
  func_0x000107c61180();
  func_0x000107c56bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1007b267c; end: 1007b28b3; -[SCLensExplorerDataQueryContextFactory initWithRequestProviderFactory:requestManager:studySettingsServices:userStorageServices:performerServices:lensFavoritesService:lensFavoritesMockService:networkServices:userIPInferredLocationServices:dynamicLayoutServices:mixerNamespaceServices:mixerNamespaceCacheOptimizationEnabled:lensCoreVersionProvider:] */

undefined8 *
FUN_1007b267c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_16);
  puStack_68 = PTR_PTR_1126f2938;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 3,param_5);
    func_0x000107c611a0(puVar1 + 4,param_6);
    func_0x000107c611a0(puVar1 + 5,param_7);
    func_0x000107c611a0(puVar1 + 6,param_8);
    func_0x000107c611a0(puVar1 + 7,param_9);
    func_0x000107c611a0(puVar1 + 8,param_10);
    func_0x000107c611a0(puVar1 + 9,param_11);
    func_0x000107c611a0(puVar1 + 10,param_12);
    func_0x000107c611a0(puVar1 + 0xb,param_13);
    *(undefined1 *)(puVar1 + 0xc) = param_14;
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1007b28b4; end: 1007b28bb; -[SCLensExplorerDataQueryContextFactory queryContextForContext:] */

void FUN_1007b28b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11d2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_queryContextForContext_decorator_112624ed8,param_3,0);
  return;
}



/* Entry: 1007b28bc; end: 1007b297b; -[SCLensExplorerDataQueryContextFactory queryContextForContext:decorator:] */

void FUN_1007b28bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x000107c61174(param_4);
  lVar1 = param_1;
  func_0x000107c3af7c(param_1,param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = param_1 + 0x18;
  func_0x000107c61148(lVar3);
  func_0x000107c3c1e0(param_1,param_2,param_3,param_4,uVar2,uVar4,lVar3,lVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1007b297c; end: 1007b29fb; -[SCLensExplorerDataQueryContextFactory _cacheEnabledForContext:] */

long FUN_1007b297c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == 6) {
    return 0;
  }
  param_1 = param_1 + 0x18;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c4b100();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c42f04();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  return lVar3;
}



/* Entry: 1007b29fc; end: 1007b2a8b; -[SCLensExplorerExperiments feedCacheEnabled] */

undefined8 FUN_1007b29fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1007b2a8c; end: 1007b2ae7; -[SCLensExplorerStudySettingsServiceProvider _configProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b2a8c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112726550;
    func_0x000107c61148(param_1);
  }
  lVar1 = param_1;
  func_0x000107c400d4(param_1,param_2,7);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1007b2ae8; end: 1007b2aff;  */

void FUN_1007b2ae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be916b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126cc9a0,PTR_s__requestProviderFactoryWithstudy_112581f48,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1007b2b00; end: 1007b2c5b; +[SCLensExplorerDataServiceProvider _requestProviderFactoryWithstudySettings:ipCodeProvider:historyProvider:] */

void FUN_1007b2b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126cc9d8;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  uVar2 = param_3;
  func_0x000107c4b0bc(param_3);
  func_0x000107c61180();
  func_0x000107c491b0(puVar1,param_2,param_4,uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  puVar3 = PTR_PTR_1126cc9e0;
  func_0x000107c610f4(PTR_PTR_1126cc9e0);
  uVar2 = param_5;
  func_0x000107c5c734(param_5);
  func_0x000107c61180();
  func_0x000107c61170(param_5);
  func_0x000107c46ce8(puVar3,param_2,uVar2);
  func_0x000107c61170(uVar2);
  puVar4 = PTR_PTR_1126cc9e8;
  func_0x000107c610f4(PTR_PTR_1126cc9e8);
  uVar2 = param_3;
  func_0x000107c4b0a8(param_3);
  func_0x000107c61180();
  uVar5 = param_3;
  func_0x000107c4b0f8(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c46218(puVar4,param_2,puVar1,puVar3,uVar2,uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1007b2c5c; end: 1007b2c67;  */

undefined ** FUN_1007b2c5c(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 1007b2c68; end: 1007b2cab; -[SCLensExplorerExperiments lensExplorerCountryCodeOverride] */

void FUN_1007b2c68(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1007b2c5c();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5c190();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1007b2cac; end: 1007b2d4f; -[SCLensExplorerCountryCodeProviderImpl initWithUserCountryCodeProvider:countryCodeOverride:] */

undefined1 *
FUN_1007b2cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f2998;
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



/* Entry: 1007b2d50; end: 1007b2d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b2d50(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long unaff_x20;
  long lStack_68;
  long lStack_60;
  char cStack_51;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar4 = (undefined *)*param_2;
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126bc040;
    func_0x000107c610f8(PTR_PTR_1126bc040,*(undefined8 *)(unaff_x20 + 0x10));
    func_0x000107c46770();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b2ebc);
      (*pcVar3)();
    }
  }
  else {
    func_0x000107c4983c();
    func_0x000107c61180();
  }
  puVar5 = puVar4;
  func_0x000107c426e0();
  if ((int)puVar5 != 0) {
    FUN_1000d224c(&cStack_51);
    if (cStack_51 == '\x01') {
      puVar5 = puVar4;
      func_0x000107c5e404();
      puVar6 = puVar4;
      func_0x000107c42b0c();
      puVar7 = puVar4;
      func_0x000107c42b04();
      puVar8 = PTR_PTR_1126aeea8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      lVar9 = 0;
      FUN_1007b3680();
      lVar10 = lVar9;
      func_0x000107c610f8();
      *(undefined8 *)(lVar10 + _DAT_112de77c8) = uVar2;
      *(undefined **)(lVar10 + _DAT_112de77d0) = puVar8;
      puVar1 = (undefined8 *)(lVar10 + _DAT_112de77d8);
      *puVar1 = puVar5;
      puVar1[1] = puVar6;
      puVar1[2] = puVar7;
      puVar5 = PTR_s_init_1125d9248;
      lStack_68 = lVar10;
      lStack_60 = lVar9;
      func_0x000107c6157c(uVar2);
      plVar11 = &lStack_68;
      func_0x000107c61154(plVar11,puVar5);
      goto LAB_1007b2e8c;
    }
  }
  plVar11 = (long *)0x0;
  func_0x0001019ddc9c();
  func_0x000107c610f8();
  func_0x000107c453e4();
LAB_1007b2e8c:
  func_0x000107c61170(puVar4);
  *param_1 = (long)plVar11;
  return;
}



/* Entry: 1007b2d58; end: 1007b2ebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b2d58(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lStack_68;
  long lStack_60;
  char cStack_51;
  
  puVar3 = (undefined *)*param_2;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126bc040;
    func_0x000107c610f8();
    func_0x000107c46770();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b2ebc);
      (*pcVar2)();
    }
  }
  else {
    func_0x000107c4983c();
    func_0x000107c61180();
  }
  puVar4 = puVar3;
  func_0x000107c426e0();
  if ((int)puVar4 != 0) {
    FUN_1000d224c(&cStack_51);
    if (cStack_51 == '\x01') {
      puVar4 = puVar3;
      func_0x000107c5e404();
      puVar5 = puVar3;
      func_0x000107c42b0c();
      puVar6 = puVar3;
      func_0x000107c42b04();
      puVar7 = PTR_PTR_1126aeea8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      lVar8 = 0;
      FUN_1007b3680();
      lVar9 = lVar8;
      func_0x000107c610f8();
      *(undefined8 *)(lVar9 + _DAT_112de77c8) = param_4;
      *(undefined **)(lVar9 + _DAT_112de77d0) = puVar7;
      puVar1 = (undefined8 *)(lVar9 + _DAT_112de77d8);
      *puVar1 = puVar4;
      puVar1[1] = puVar5;
      puVar1[2] = puVar6;
      puVar4 = PTR_s_init_1125d9248;
      lStack_68 = lVar9;
      lStack_60 = lVar8;
      func_0x000107c6157c(param_4);
      plVar10 = &lStack_68;
      func_0x000107c61154(plVar10,puVar4);
      goto LAB_1007b2e8c;
    }
  }
  plVar10 = (long *)0x0;
  func_0x0001019ddc9c();
  func_0x000107c610f8();
  func_0x000107c453e4();
LAB_1007b2e8c:
  func_0x000107c61170(puVar3);
  *param_1 = (long)plVar10;
  return;
}



/* Entry: 1007b2ebc; end: 1007b2fa3; -[SCLensDataConfigProvider interactionHistoryConfig] */

void FUN_1007b2ebc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x000107c4f558(lVar1,param_2,&PTR____CFConstantStringClassReference_110df0798,0,0);
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar4 = PTR_PTR_1126bc040;
    func_0x000107c4157c(PTR_PTR_1126bc040);
    func_0x000107c61180();
  }
  else {
    puVar2 = PTR_PTR_1126bc060;
    func_0x000107c610f4();
    lVar3 = lVar1;
    func_0x000107c5dc0c(lVar1);
    func_0x000107c61180();
    func_0x000107c4636c(puVar2,param_2,lVar3,0);
    func_0x000107c61170(lVar3);
    puVar4 = PTR_PTR_1126bc040;
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c4157c(PTR_PTR_1126bc040);
      func_0x000107c61180();
    }
    else {
      func_0x000107c40094(PTR_PTR_1126bc040,param_2,puVar2);
      func_0x000107c61180();
    }
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1007b2fa4; end: 1007b2fab; -[SCAFideliusGraphRead getPayloadIdentifier] */

undefined8 FUN_1007b2fa4(void)

{
  return 0x375;
}



/* Entry: 1007b2fac; end: 1007b2fb7; -[SCAFideliusGraphRead toProtoWithAllowedFields:] */

void FUN_1007b2fac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 1007b2fb8; end: 1007b301f; +[SCLensCarouselInteractionHistoryConfig descriptor] */

void FUN_1007b2fb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd2f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a51210,
                        &PTR____CFConstantStringClassReference_110df0b18,&PTR_DAT_1130ede70,
                        &PTR_s_enabled_1130ede88,4,0x10,0x1c);
    puRam00000001136bd2f8 = puVar1;
  }
  return;
}



/* Entry: 1007b3020; end: 1007b30b7; +[SCLensInteractionHistoryConfig configFromProto:] */

void FUN_1007b3020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bc040;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  uVar2 = param_3;
  func_0x000107c426e0(param_3);
  uVar3 = param_3;
  func_0x000107c5e404(param_3);
  uVar4 = param_3;
  func_0x000107c42b10(param_3);
  uVar5 = param_3;
  func_0x000107c42b08(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c46770(puVar1,param_2,uVar2,(long)(int)uVar3,(long)(int)uVar4,(long)(int)uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007b30b8; end: 1007b311b; -[SCLensInteractionHistoryConfig initWithEnabled:windowToSendMin:eventsTTLMin:eventsLimit:] */

void FUN_1007b30b8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270a230;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  return;
}



/* Entry: 1007b311c; end: 1007b3123; -[SCLensInteractionHistoryConfig enabled] */

undefined1 FUN_1007b311c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1007b3124; end: 1007b31ab;  */

void FUN_1007b3124(undefined8 param_1,long *param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  long lVar4;
  long lVar3;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    lVar3 = lVar4;
    func_0x000107c615f0();
    iVar2 = (int)lVar3;
    func_0x000107c4a27c();
    if (iVar2 != 0) {
      lVar3 = lVar4;
      func_0x000107c4420c(lVar4,param_3,6);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      if (lVar3 != 0) {
        func_0x000107c61170(lVar3);
      }
      bVar1 = lVar3 != 0;
      goto LAB_1007b3198;
    }
    func_0x000107c615e8(lVar4);
  }
  bVar1 = false;
LAB_1007b3198:
  *(bool *)param_1 = bVar1;
  return;
}



/* Entry: 1007b31ac; end: 1007b3263; -[SCRTUSConfigProviderImpl isProductEnabledForRtusLaunch:] */

undefined8 FUN_1007b31ac(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1007b3264;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001137f0d90 != -1) {
    FUN_10002a2fc(0x1137f0d90,&puStack_48);
  }
  uVar2 = uRam00000001137f0d88;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c40404(uVar2);
  func_0x000107c61170(puVar1);
  return uVar2;
}



/* Entry: 1007b3264; end: 1007b33eb;  */

long FUN_1007b3264(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar7 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x000107c61160();
  uVar6 = puRam00000001137f0d88;
  puRam00000001137f0d88 = puVar1;
  func_0x000107c61170(uVar6);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x000107c5c760();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c3db60();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  func_0x000107c61174(lVar4);
  lVar3 = lVar4;
  func_0x000107c4080c(lVar4,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar3 != 0) {
    lVar2 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar2) {
          func_0x000107c61128(lVar4);
        }
        lVar8 = *(long *)(lStack_118 + lVar9 * 8);
        lVar5 = lVar8;
        func_0x000107c49820();
        if (lVar5 != 0) {
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          func_0x000107c3b0a0(uVar6,param_2,lVar5);
          if ((int)uVar6 != 0) {
            func_0x000107c3d798(puRam00000001137f0d88,param_2,lVar8);
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar4;
      puVar7 = &uStack_120;
      func_0x000107c4080c(lVar4,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar3 != 0);
  }
  func_0x000107c61170(lVar4);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar4;
  }
  func_0x000107c60e78();
  lVar3 = lVar4;
  func_0x000107c40730();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = lVar3;
  func_0x000107c5d798();
  func_0x000107c61180();
  func_0x000107c51804(puVar1,param_2,&PTR____CFConstantStringClassReference_110f3d6d8);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = *(long *)(lVar4 + 0x20);
  func_0x000107c3bb70(lVar4,param_2,puVar7);
  func_0x000107c3ebd4(lVar2,param_2,puVar1,lVar4,0);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar3);
  return lVar2;
}



/* Entry: 1007b33ec; end: 1007b34af; -[SCRTUSConfigProviderImpl _cofEnabledForProduct:] */

undefined8 FUN_1007b33ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x000107c40730();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = lVar1;
  func_0x000107c5d798();
  func_0x000107c61180();
  func_0x000107c51804(puVar3,param_2,&PTR____CFConstantStringClassReference_110f3d6d8);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3bb70(param_1,param_2,param_3);
  func_0x000107c3ebd4(uVar4,param_2,puVar3,param_1,0);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar1);
  return uVar4;
}



/* Entry: 1007b34b0; end: 1007b3523; -[SCRTUSConfigProviderImpl _isProductFullyLaunched:] */

undefined8 FUN_1007b34b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c3b84c();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c40404(param_1,param_2,puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 1007b3524; end: 1007b3577; -[SCRTUSConfigProviderImpl _getFullyLaunchedProducts] */

void FUN_1007b3524(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f0da0 != -1) {
    FUN_10002a2fc(0x1137f0da0,&PTR___NSConcreteGlobalBlock_110c98b28);
  }
  uVar1 = uRam00000001137f0d98;
  func_0x000107c61174(uRam00000001137f0d98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1007b3578; end: 1007b35d3;  */

void FUN_1007b3578(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x000107c5a790(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2640);
  func_0x000107c61180();
  uVar1 = puRam00000001137f0d98;
  puRam00000001137f0d98 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007b35d4; end: 1007b3667; -[SCRTUSConfigProviderImpl getProductConfigFor:] */

void FUN_1007b35d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c5c760();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x000107c4d9e8(uVar1,param_2,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1007b3668; end: 1007b366f; -[SCLensInteractionHistoryConfig windowToSendMin] */

undefined8 FUN_1007b3668(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1007b3670; end: 1007b3677; -[SCLensInteractionHistoryConfig eventsTTLMin] */

undefined8 FUN_1007b3670(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1007b3678; end: 1007b367f; -[SCLensInteractionHistoryConfig eventsLimit] */

undefined8 FUN_1007b3678(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1007b3680; end: 1007b36cb;  */

void FUN_1007b3680(void)

{
  func_0x000107c61168(&PTR_PTR_1127effe0);
  return;
}



/* Entry: 1007b36cc; end: 1007b373f; -[SCLensExplorerStoredInteractionHistoryProvider initWithHistoryProvider:] */

undefined1 * FUN_1007b36cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f28e8;
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



/* Entry: 1007b3740; end: 1007b374b; -[SCLensExplorerExperiments lensExplorerBaseUrl] */

void FUN_1007b3740(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 1007b374c; end: 1007b37a7; -[SCLensExplorerExperiments lensExplorerServerApiRouteTag] */

void FUN_1007b374c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c1dc();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1007b37a8; end: 1007b38a3; -[SCLensExplorerRequestProviderFactory initWithCountryCodeProvider:interactionHistoryProvider:customBaseUrl:apiRouteTag:] */

undefined1 *
FUN_1007b37a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f29b0;
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



/* Entry: 1007b38a4; end: 1007b4673; -[SCLensExplorerDataQueryContextFactory _queryContextWrapperForContext:decorator:requestProviderFactory:requestManager:studySettingsServices:cacheEnabled:] */

void FUN_1007b38a4(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined8 uStack_460;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  lVar1 = param_1 + 0x20;
  func_0x000107c61148();
  lVar2 = param_1 + 0x28;
  func_0x000107c61148();
  lVar3 = param_1 + 0x30;
  func_0x000107c61148();
  lVar4 = param_1 + 0x38;
  func_0x000107c61148();
  lVar5 = param_1 + 0x40;
  func_0x000107c61148();
  lVar6 = param_1 + 0x58;
  func_0x000107c61148();
  lVar7 = param_1 + 0x48;
  func_0x000107c61148();
  lVar8 = lVar7;
  func_0x000107c40870();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  uVar9 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c61174();
  lVar7 = param_1;
  func_0x000107c3c738();
  if ((int)lVar7 == 0) {
    uStack_460 = 0;
  }
  else {
    uVar10 = param_7;
    func_0x000107c4b100();
    func_0x000107c61180();
    uVar11 = uVar10;
    func_0x000107c5c734();
    func_0x000107c61180();
    uStack_460 = uVar11;
    func_0x000107c411fc();
    func_0x000107c61180();
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar10);
  }
  puVar12 = PTR_PTR_1126cd288;
  func_0x000107c610fc();
  puVar13 = param_4;
  func_0x000107c61164(param_4,PTR_s_decorateSectionConfigurationsDat_1125b7730);
  puVar14 = puVar12;
  if (((ulong)puVar13 & 1) != 0) {
    puVar14 = param_4;
    func_0x000107c41490();
    func_0x000107c61180();
    func_0x000107c61170(puVar12);
  }
  puVar12 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_1066f39dc;
  puStack_88 = &UNK_110935f40;
  func_0x000107c61174(puVar14);
  puStack_80 = puVar14;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar13 = PTR_PTR_1126ae720;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_1007b4778;
  puStack_b0 = &UNK_1066f3a04;
  uStack_a8 = 0;
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar14);
  func_0x000107c61174(uStack_460);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar15 = PTR_PTR_1126ae720;
  func_0x000107c61174();
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar16 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar17 = PTR_PTR_1126cd290;
  func_0x000107c610f4();
  lVar7 = lVar1;
  func_0x000107c421c8(lVar1);
  func_0x000107c61180();
  lVar18 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar19 = lVar2;
  func_0x000107c4b2ec(lVar2);
  func_0x000107c61180();
  lVar20 = lVar19;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar21 = lVar20;
  func_0x000107c51f40();
  func_0x000107c61180();
  func_0x000107c4664c();
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar7);
  puVar22 = PTR_PTR_1126cd298;
  func_0x000107c610fc();
  puVar23 = PTR_PTR_1126cd2a0;
  func_0x000107c610f4();
  func_0x000107c4852c();
  func_0x000107c61174();
  puVar24 = PTR_PTR_1126cd2a8;
  func_0x000107c610f4(PTR_PTR_1126cd2a8);
  lVar7 = param_1 + 0x50;
  func_0x000107c61148(lVar7);
  lVar18 = lVar7;
  func_0x000107c4abe8();
  func_0x000107c61180();
  lVar19 = lVar2;
  func_0x000107c4b2ec(lVar2);
  func_0x000107c61180();
  lVar20 = lVar19;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar21 = lVar20;
  func_0x000107c51f40();
  func_0x000107c61180();
  func_0x000107c4592c(puVar24);
  func_0x000107c61170(puVar23);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar7);
  puVar25 = puVar24;
  if (param_8 != 0) {
    puVar25 = PTR_PTR_1126cd2b0;
    func_0x000107c610f4(PTR_PTR_1126cd2b0);
    func_0x000107c45930();
    func_0x000107c61170(puVar24);
  }
  puVar24 = PTR_PTR_1126cd2b8;
  func_0x000107c610f4(PTR_PTR_1126cd2b8);
  func_0x000107c45928();
  func_0x000107c61170(puVar25);
  puVar26 = PTR_PTR_1126cd2c0;
  func_0x000107c610f4();
  func_0x000107c45928();
  func_0x000107c61174();
  func_0x000107c61170(puVar24);
  puVar27 = PTR_PTR_1126cd2c8;
  func_0x000107c610fc();
  func_0x000107c3c804();
  lVar7 = param_1 + 0x18;
  func_0x000107c61148();
  lVar18 = lVar7;
  func_0x000107c4b100();
  func_0x000107c61180();
  lVar19 = lVar18;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c43cdc();
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar7);
  param_1 = param_1 + 0x18;
  func_0x000107c61148();
  lVar7 = param_1;
  func_0x000107c4b100();
  func_0x000107c61180();
  lVar18 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c43ce0();
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(param_1);
  puVar24 = PTR_PTR_1126ae720;
  func_0x000107c61174(puVar13);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(lVar3);
  func_0x000107c61174(lVar4);
  func_0x000107c61174(puVar26);
  func_0x000107c61174(puVar17);
  func_0x000107c61174(lVar6);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar23);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar25 = PTR_PTR_1126ae720;
  func_0x000107c61174(puVar16);
  func_0x000107c61174(puVar24);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar26);
  func_0x000107c61174(lVar2);
  func_0x000107c61174(puVar17);
  func_0x000107c61174(lVar6);
  func_0x000107c61174(param_4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar28 = PTR_PTR_1126ae720;
  func_0x000107c61174();
  func_0x000107c61174(puVar16);
  func_0x000107c61174(puVar24);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar29 = PTR_PTR_1126ae720;
  func_0x000107c61174(lVar5);
  func_0x000107c61174(param_7);
  func_0x000107c61174(lVar8);
  func_0x000107c61174(lVar2);
  func_0x000107c61174(uVar9);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar30 = PTR_PTR_1126ae720;
  func_0x000107c61174(puVar24);
  func_0x000107c61174(puVar29);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar26);
  func_0x000107c61174(puVar16);
  func_0x000107c61174(param_7);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar31 = PTR_PTR_1126ae720;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar26);
  func_0x000107c61174(puVar14);
  func_0x000107c61174(puVar16);
  func_0x000107c61174(puVar24);
  func_0x000107c61174(lVar6);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c61174(param_4);
  puVar32 = puVar13;
  func_0x000107c4c280();
  func_0x000107c61180();
  puVar33 = PTR_PTR_1126cd2e0;
  func_0x000107c610f4();
  func_0x000107c481f4();
  func_0x000107c61170(puVar32);
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar31);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(puVar24);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar26);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(puVar30);
  func_0x000107c61170(param_7);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar26);
  func_0x000107c61170(param_5);
  func_0x000107c61170(puVar29);
  func_0x000107c61170(puVar24);
  func_0x000107c61170(puVar29);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puVar28);
  func_0x000107c61170(puVar24);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(param_4);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar26);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(puVar24);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar24);
  func_0x000107c61170(puVar23);
  func_0x000107c61170(param_4);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(puVar26);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar27);
  func_0x000107c61170(puVar26);
  func_0x000107c61170(puVar26);
  func_0x000107c61170(puVar23);
  func_0x000107c61170(puVar22);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uStack_460);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(param_7);
  func_0x000107c60bcc(&uStack_d0,8);
  func_0x000107c61170(uStack_a8);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puStack_80);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uStack_460);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar33);
  return;
}



/* Entry: 1007b4674; end: 1007b46f3; -[SCLensExplorerDataQueryContextFactory _shouldEnableDailyGamesForContext:] */

long FUN_1007b4674(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == 5) {
    param_1 = param_1 + 0x18;
    func_0x000107c61148(param_1);
    lVar1 = param_1;
    func_0x000107c4b100();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c49c0c();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
    return lVar3;
  }
  return 0;
}



/* Entry: 1007b46f4; end: 1007b4777; -[SCLensExplorerSectionConfigurationsMemoryDataStore init] */

undefined1 * FUN_1007b46f4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2720;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1007b4778; end: 1007b4787;  */

void FUN_1007b4778(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1007b4788; end: 1007b478f; -[SCLensBasePerformerProvider serialInitiatedQueuePerformer] */

void FUN_1007b4788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 1007b4790; end: 1007b47c3;  */

void FUN_1007b4790(void)

{
  func_0x000107c610f4(PTR_PTR_1126ae790);
  func_0x000107c470d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007b47c4; end: 1007b486f; -[SCLensExplorerFeedModelsPersistentStorage initWithDocObjectContext:leContext:fetchingPerformer:] */

undefined1 *
FUN_1007b47c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126f2588;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007b4870; end: 1007b4913; -[SCLensExplorerDynamicBatchUpdateHandler initWithSectionConfigurationsDataStore:deepLinkProvider:] */

undefined1 *
FUN_1007b4870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f2878;
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



/* Entry: 1007b4914; end: 1007b491b; -[SCLensExplorerDynamicLayoutServices layoutFetcher] */

undefined8 FUN_1007b4914(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007b491c; end: 1007b4a03; -[SCLensExplorerDynamicLayoutBatchUpdateHandler initWithBaseBatchUpdateHandler:dynamicLayoutFetcher:performer:] */

undefined1 *
FUN_1007b491c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126f2880;
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
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007b4a04; end: 1007b4aa7; -[SCLensExplorerPersistingBatchUpdateHandler initWithBaseBatchUpdateHandler:feedModelsStorage:] */

undefined1 *
FUN_1007b4a04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f2898;
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



/* Entry: 1007b4aa8; end: 1007b4b1b; -[SCLensExplorerContainerFeedsBatchUpdateHandler initWithBaseBatchUpdateHandler:] */

undefined1 * FUN_1007b4aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f2870;
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



/* Entry: 1007b4b1c; end: 1007b4b8f; -[SCLensExplorerFeedLensesBatchUpdateHandler initWithBaseBatchUpdateHandler:] */

undefined1 * FUN_1007b4b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f2888;
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



/* Entry: 1007b4b90; end: 1007b4bf3; -[SCLensExplorerSelectedBatchQueryStatusCheckerFactory init] */

undefined1 * FUN_1007b4b90(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2980;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1007b4bf4; end: 1007b4ceb; -[SCLensExplorerDataQueryContextFactory _shouldUseLensGatorForContext:] */

long FUN_1007b4bf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  
  uVar1 = param_1 + 0x18;
  func_0x000107c61148();
  uVar2 = uVar1;
  func_0x000107c4b100();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  uVar1 = uVar3;
  func_0x000107c4b19c();
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c40404(uVar1,param_2,puVar4);
  if ((uVar2 & 1) == 0) {
    func_0x000107c3bf7c(param_1);
    func_0x000107c61180();
    lVar5 = param_1;
    func_0x000107c40404();
    func_0x000107c61170(param_1);
  }
  else {
    lVar5 = 1;
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  return lVar5;
}



/* Entry: 1007b4cec; end: 1007b4ddb; -[SCLensExplorerExperiments lensGatorMigratedContexts] */

void FUN_1007b4cec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x000107c5c734(puVar1);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5c1dc();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar1 = puVar2;
  func_0x000107c3ff54(puVar2);
  func_0x000107c61180();
  if (lRam0000000113727468 != -1) {
    FUN_10002a2fc(0x113727468,&PTR___NSConcreteGlobalBlock_1109f86b0);
  }
  if ((bRam0000000113727460 & 1) != 0) {
    func_0x000107c61170(puVar1);
    puVar1 = PTR____NSArray0__struct_11034ab48;
  }
  puVar3 = puVar1;
  func_0x000107c4c280(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007b4ddc; end: 1007b4e6b;  */

/* WARNING: Possible PIC construction at 0x0001007b4e28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007b4e2c) */

void FUN_1007b4ddc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c4f2b0();
  func_0x000107c61180();
  func_0x000107c3e148();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c40404();
  uRam0000000113727460 = SUB81(puVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1007b4e6c; end: 1007b4f03; -[SCLensExplorerDataQueryContextFactory _nativeMixerContexts] */

void FUN_1007b4e6c(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_111180ab8;
  func_0x000107c4d2d4(&PTR__OBJC_CLASS___NSConstantArray_111180ab8);
  param_1 = param_1 + 0x18;
  func_0x000107c61148();
  lVar2 = param_1;
  func_0x000107c4b100();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_1);
  lVar2 = lVar3;
  func_0x000107c49b40();
  if ((int)lVar2 != 0) {
    func_0x000107c3d798(ppuVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6b38);
  }
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1007b4f04; end: 1007b4f53; -[SCLensExplorerExperiments isChatDrawerUsingMigratedContext] */

undefined8 FUN_1007b4f04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1007b4f54; end: 1007b4fa3; -[SCLensExplorerExperiments gamesExplorerAuxFeedRankingFixEnabled] */

undefined8 FUN_1007b4f54(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1007b4fa4; end: 1007b4ff3; -[SCLensExplorerExperiments gamesExplorerCategoriesFromFeedsEnabled] */

undefined8 FUN_1007b4fa4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1007b4ff4; end: 1007b51c3; -[SCLensExplorerDataQueryContext initWithQueryFactory:categoriesProviderFactory:queryCoordinatorFactory:lensCollectionCategoryProvider:categoriesBatchRefreshFactory:dataStoreFactory:sectionConfigurationsDataStore:containersProvider:feedLensesProvider:] */

undefined1 *
FUN_1007b4ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_68 = PTR_PTR_112703b88;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
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
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007b51c4; end: 1007b5213; -[SCLensExplorerExperiments isDailyGamesSectionEnabled] */

undefined8 FUN_1007b51c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1007b5214; end: 1007b54d3; -[SCLensExplorerDataServices initWithDefultQueryContext:postCaptureQueryContext:directorsQueryContext:hermosaHomeQueryContext:hermosaConnectedQueryContext:arBarQueryContext:arBarReplyQueryContext:arBarCallQueryContext:memoriesTemplateQueryContext:gamesDrawerQueryContext:dataQueryContextProvider:requestRanker:] */

undefined8 *
FUN_1007b5214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  puStack_68 = PTR_PTR_112703b90;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[1];
    puVar1[1] = param_14;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1007b54d4; end: 1007b5567;  */

void FUN_1007b54d4(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007b5568; end: 1007b556f;  */

void FUN_1007b5568(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b5570; end: 1007b55c3;  */

void FUN_1007b5570(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b55c4; end: 1007b55cf;  */

void FUN_1007b55c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001dd2d0();
  func_0x000107c613fc();
  FUN_1007b5664(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b55d0; end: 1007b5663;  */

void FUN_1007b55d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001dd2d0();
  func_0x000107c613fc();
  FUN_1007b5664(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1007b5664; end: 1007b5847;  */

void FUN_1007b5664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a82b8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
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
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef9e300);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
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



/* Entry: 1007b5848; end: 1007b5963; -[SCLensMediaDownloaderServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b5848(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11272662c;
    func_0x000107c61148();
  }
  lVar1 = lVar5;
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  lVar5 = 0;
  if (param_1 != 0) {
    lVar5 = param_1 + _DAT_112726630;
    func_0x000107c61148();
  }
  lVar2 = lVar5;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  puStack_50 = &UNK_1055d2bd4;
  puStack_48 = &UNK_11089cfb8;
  puVar3 = PTR_PTR_1126ae720;
  lStack_40 = lVar1;
  lStack_38 = lVar2;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_60);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126bbc78;
  func_0x000107c610f4(PTR_PTR_1126bbc78);
  func_0x000107c47654();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}


