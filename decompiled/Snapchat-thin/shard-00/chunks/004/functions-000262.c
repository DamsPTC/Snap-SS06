/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005e0f94; end: 1005e0f9b;  */

void FUN_1005e0f94(undefined8 *param_1)

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



/* Entry: 1005e0f9c; end: 1005e0fef;  */

void FUN_1005e0f9c(undefined8 *param_1)

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



/* Entry: 1005e0ff0; end: 1005e0ff7;  */

void FUN_1005e0ff0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  func_0x0001005c4ef4();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1005e1080(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005e0ff8; end: 1005e107f;  */

void FUN_1005e0ff8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  func_0x0001005c4ef4();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1005e1080(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005e1080; end: 1005e1243;  */

void FUN_1005e1080(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126abd78;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0x49556172656d6163;
  func_0x000107c5fadc(0x49556172656d6163,0xed000065706f6353);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0dbef0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x28) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005e1244);
  (*pcVar1)();
}



/* Entry: 1005e1244; end: 1005e1343; -[SCWidgetServicesImplEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005e1244(long param_1)

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
  puVar2 = PTR_PTR_1126c80d0;
  func_0x000107c610f4(PTR_PTR_1126c80d0);
  func_0x000107c495cc();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_11273f75c));
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 1005e1344; end: 1005e13b7; -[SCWidgetServices initWithWidgetAPI:] */

undefined1 * FUN_1005e1344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126efbf8;
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



/* Entry: 1005e13b8; end: 1005e13bf;  */

void FUN_1005e13b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005e13c0; end: 1005e140b;  */

void FUN_1005e13c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005e140c; end: 1005e1bab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005e140c(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  lVar2 = 0;
  uStack_f0 = param_1;
  lStack_d0 = param_3;
  lStack_c8 = param_2;
  func_0x000107c5f804();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar3 = &UNK_1105935c0;
  func_0x000107c613fc(&UNK_1105935c0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  FUN_1000285a8(0x112dd07d0,&UNK_10d991cb0);
  func_0x000107c613fc();
  func_0x000107c61174();
  puVar4 = &UNK_102ab48d8;
  uStack_f8 = param_5;
  FUN_1000bdd8c(&UNK_102ab48d8,puVar3);
  (**(code **)(lVar14 + 0x68))
            (auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO10backgroundyA2EmFWC_11034f7d0,lVar2);
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar5 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f0e64e0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar5);
  (**(code **)(lVar14 + 8))(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puStack_100 = (undefined *)_DAT_113083868;
  uVar5 = *(undefined8 *)(param_4 + _DAT_113083868);
  lStack_d8 = param_4;
  func_0x000107c61174();
  uStack_c0 = param_6;
  func_0x000107c4ec80();
  func_0x000107c61180();
  lStack_e8 = param_7;
  func_0x000107c42eac();
  func_0x000107c61180();
  if (param_7 != 0) {
    lStack_110 = _DAT_113091b70;
    uStack_128 = *(undefined8 *)(lStack_d0 + _DAT_113091b70);
    uStack_e0 = param_9;
    uVar12 = *(undefined8 *)(lStack_c8 + _DAT_113083f78);
    func_0x000107c615f0();
    func_0x000107c61174();
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar9 = uVar12;
    func_0x000107c5faec();
    func_0x000107c61170(uVar12);
    uVar12 = param_8;
    func_0x000107c5e2bc();
    func_0x000107c61180();
    lVar14 = 0;
    uStack_108 = param_8;
    FUN_1005e1c04();
    func_0x000107c613fc();
    *(undefined8 *)(lVar14 + 0x40) = 0;
    *(undefined8 *)(lVar14 + 0x48) = 0;
    FUN_1000285a8(0x112ee8ab0,&UNK_10db15d18);
    func_0x000107c613fc();
    puVar6 = puVar4;
    func_0x000107c6157c();
    FUN_1000c2754();
    *(undefined8 *)(lVar14 + 0x10) = uVar5;
    *(undefined **)(lVar14 + 0x18) = puVar4;
    *(undefined8 *)(lVar14 + 0x20) = param_6;
    *(long *)(lVar14 + 0x28) = param_7;
    *(undefined **)(lVar14 + 0x30) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(lVar14 + 0x38) = puVar3;
    *(undefined8 *)(lVar14 + 0x50) = uVar9;
    *(long *)(lVar14 + 0x58) = lVar2;
    *(undefined8 *)(lVar14 + 0x60) = uVar12;
    *(undefined **)(lVar14 + 0x68) = puVar6;
    func_0x000107c61174();
    lStack_118 = uVar5;
    func_0x000107c61174();
    func_0x000107c6157c(puVar4);
    func_0x000107c61174(param_6);
    func_0x000107c61174(param_7);
    func_0x000107c61174();
    uVar5 = uStack_128;
    uVar9 = uStack_128;
    uStack_120 = uVar12;
    func_0x000107c41bd0();
    func_0x000107c61180();
    puVar6 = &UNK_1105934d0;
    puVar7 = puVar6;
    func_0x000107c613fc(&UNK_1105934d0,0x18,7);
    func_0x000107c61644(puVar7 + 0x10,lVar14);
    puVar11 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = &UNK_100c1deac;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100c1de60;
    puStack_90 = &UNK_1105935d8;
    ppuVar8 = &puStack_a8;
    puStack_80 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_80;
    func_0x000107c6157c(lVar14);
    func_0x000107c61574(puVar7);
    uVar12 = uVar9;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(uVar9);
    uVar9 = *(undefined8 *)(lVar14 + 0x40);
    *(undefined8 *)(lVar14 + 0x40) = uVar12;
    func_0x000107c61170(uVar9);
    uVar9 = uVar5;
    func_0x000107c5e370();
    func_0x000107c61180();
    func_0x000107c613fc(&UNK_1105934d0,0x18,7);
    func_0x000107c61644(puVar6 + 0x10,lVar14);
    func_0x000107c61574(lVar14);
    puStack_88 = &UNK_102ab48d0;
    puStack_a8 = puVar11;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100c1de60;
    puStack_90 = &UNK_110593600;
    ppuVar8 = &puStack_a8;
    puStack_80 = puVar6;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c61574(puStack_80);
    uVar12 = uVar9;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c61170(lStack_118);
    func_0x000107c61574(puVar4);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uStack_120);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c615e8(uVar5);
    func_0x000107c61170(uVar9);
    uVar5 = *(undefined8 *)(lVar14 + 0x48);
    *(undefined8 *)(lVar14 + 0x48) = uVar12;
    func_0x000107c61170(uVar5);
    *(long *)(unaff_x20 + 0x10) = lVar14;
    func_0x0001005c6e80(0);
    func_0x000107c610f8();
    func_0x000107c6157c();
    FUN_1005e1c50();
    lStack_118 = lVar14;
    func_0x000107c42c20(uStack_e0);
    uVar10 = *(undefined8 *)(lStack_d8 + (long)puStack_100);
    func_0x000107c61174();
    uVar5 = uStack_c0;
    func_0x000107c4ec80();
    func_0x000107c61180();
    lVar2 = lStack_d0;
    uVar13 = *(undefined8 *)(lStack_d0 + lStack_110);
    lVar14 = 0;
    FUN_1005e1cac();
    func_0x000107c613fc();
    *(undefined8 *)(lVar14 + 0x30) = 0;
    *(undefined8 *)(lVar14 + 0x38) = 0;
    *(undefined8 *)(lVar14 + 0x10) = uVar10;
    *(undefined **)(lVar14 + 0x18) = puVar4;
    *(undefined8 *)(lVar14 + 0x20) = uVar5;
    *(undefined **)(lVar14 + 0x28) = puVar3;
    func_0x000107c61174();
    puStack_100 = puVar3;
    func_0x000107c6157c(puVar4);
    func_0x000107c61174(uVar10);
    func_0x000107c615f0(uVar13);
    func_0x000107c61174(uVar5);
    uVar9 = uVar13;
    func_0x000107c41bd0();
    func_0x000107c61180();
    puVar3 = &UNK_110593548;
    puVar11 = puVar3;
    func_0x000107c613fc(&UNK_110593548,0x18,7);
    func_0x000107c61644(puVar11 + 0x10,lVar14);
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = &UNK_100c1dfc8;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100c1de60;
    puStack_90 = &UNK_110593628;
    ppuVar8 = &puStack_a8;
    puStack_80 = puVar11;
    func_0x000107c60bc4(ppuVar8);
    puVar11 = puStack_80;
    func_0x000107c6157c(lVar14);
    func_0x000107c61574(puVar11);
    uVar12 = uVar9;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(uVar9);
    uVar9 = *(undefined8 *)(lVar14 + 0x30);
    *(undefined8 *)(lVar14 + 0x30) = uVar12;
    func_0x000107c61170(uVar9);
    uVar9 = uVar13;
    func_0x000107c5e370();
    func_0x000107c61180();
    func_0x000107c613fc(&UNK_110593548,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,lVar14);
    func_0x000107c61574(lVar14);
    puStack_88 = &UNK_102ab48d4;
    puStack_a8 = puVar6;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100c1de60;
    puStack_90 = &UNK_110593650;
    ppuVar8 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c61574(puStack_80);
    uVar12 = uVar9;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    func_0x000107c61574(puVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puStack_100);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c615e8(uVar13);
    func_0x000107c61170(uVar9);
    uVar5 = *(undefined8 *)(lVar14 + 0x38);
    *(undefined8 *)(lVar14 + 0x38) = uVar12;
    func_0x000107c61170(lStack_d8);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lStack_c8);
    func_0x000107c61170(uStack_f0);
    func_0x000107c61170(uStack_f8);
    func_0x000107c61170(uStack_c0);
    func_0x000107c61170(lStack_e8);
    func_0x000107c61170(uStack_108);
    func_0x000107c61170(uStack_e0);
    func_0x000107c61170(lStack_118);
    func_0x000107c61170(uVar5);
    *(long *)(unaff_x20 + 0x18) = lVar14;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005e1bac);
  (*pcVar1)();
}



/* Entry: 1005e1bac; end: 1005e1bf3;  */

void FUN_1005e1bac(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005e1bf4; end: 1005e1bfb;  */

void FUN_1005e1bf4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005e1bfc; end: 1005e1c03; -[SCWidgetServices widgetAPI] */

undefined8 FUN_1005e1bfc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1005e1c04; end: 1005e1c23;  */

void FUN_1005e1c04(void)

{
  func_0x000107c61168(&PTR_PTR_112ee89b8);
  return;
}



/* Entry: 1005e1c24; end: 1005e1c33;  */

undefined1  [16] FUN_1005e1c24(void)

{
  return ZEXT816(0x110593c30);
}



/* Entry: 1005e1c34; end: 1005e1c4f;  */

void FUN_1005e1c34(long param_1,long param_2)

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



/* Entry: 1005e1c50; end: 1005e1cab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005e1c50(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee8f38);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1005e1cac; end: 1005e1ccb;  */

void FUN_1005e1cac(void)

{
  func_0x000107c61168(&PTR_PTR_112ee8ba0);
  return;
}



/* Entry: 1005e1ccc; end: 1005e1cd7;  */

void FUN_1005e1ccc(long param_1,long param_2)

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



/* Entry: 1005e1cd8; end: 1005e1cf7;  */

void FUN_1005e1cd8(void)

{
  func_0x000107c61168(&PTR_PTR_112ee8828);
  return;
}



/* Entry: 1005e1cf8; end: 1005e2177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005e1cf8(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined1 *param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puVar12;
  long extraout_x8;
  code *pcVar13;
  long unaff_x20;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  lVar11 = param_2;
  uStack_a8 = param_1;
  func_0x000107c5f804();
  lStack_e0 = *(long *)(lVar2 + -8);
  lStack_d8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  puVar14 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(param_2 + _DAT_113083f78);
  lStack_b8 = param_2;
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar15 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  plVar4 = *(long **)(param_3 + _DAT_112ee8f38);
  lVar2 = ((undefined8 *)(param_3 + _DAT_112ee8f38))[1];
  lStack_b0 = param_3;
  func_0x000107c614f0();
  (**(code **)(lVar2 + 8))();
  lStack_a0 = param_4;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_4 != 0) {
    lVar5 = *(long *)(param_5 + _DAT_113093a90);
    lStack_c8 = param_5;
    func_0x000107c61174();
    puStack_c0 = param_6;
    func_0x000107c3dda8();
    func_0x000107c61180();
    lVar6 = 0;
    FUN_1005e21ac();
    func_0x000107c613fc();
    uVar3 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    FUN_1000c6580();
    *(undefined8 *)(lVar6 + 0x28) = uVar3;
    *(undefined8 *)(lVar6 + 0x30) = 1;
    *(undefined8 *)(lVar6 + 0x10) = uVar15;
    *(long *)(lVar6 + 0x18) = lVar11;
    *(undefined1 **)(lVar6 + 0x20) = param_6;
    puVar7 = &UNK_1105931a0;
    func_0x000107c613fc(&UNK_1105931a0,0x18,7);
    func_0x000107c61644(puVar7 + 0x10,lVar6);
    pcVar13 = *(code **)(*plVar4 + 0x60);
    func_0x000107c61174();
    puStack_d0 = param_6;
    func_0x000107c6157c(lVar6);
    puVar8 = &UNK_102ab0660;
    puVar12 = puVar7;
    (*pcVar13)(&UNK_102ab0660);
    func_0x000107c61574(puVar7);
    func_0x000107c614f0(puVar8);
    uVar15 = *(undefined8 *)(lVar6 + 0x28);
    pcVar13 = *(code **)(puVar12 + 0x10);
    func_0x000107c6157c(uVar15);
    (*pcVar13)();
    func_0x000107c615e8(puVar8);
    func_0x000107c61574(uVar15);
    lVar2 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61574(plVar4);
      func_0x000107c615e8(param_4);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(puStack_d0);
      func_0x000107c61574(lVar6);
      func_0x000107c61170(lStack_b8);
      func_0x000107c61170(lStack_b0);
      func_0x000107c61170(lStack_c8);
      func_0x000107c61170(uStack_a8);
      func_0x000107c61170(lStack_a0);
      puVar9 = puStack_c0;
    }
    else {
      FUN_100079360(0);
      uVar3 = 0;
      func_0x0001005e21cc();
      FUN_1005e21ec();
      uVar15 = uVar3;
      FUN_1005e2264();
      uStack_e8 = uVar15;
      func_0x000107c61170(uVar3);
      uVar3 = 0;
      func_0x0001000aad1c(0);
      FUN_1005e2264();
      FUN_1000295c4(0);
      lVar1 = lStack_d8;
      lVar11 = lStack_e0;
      (**(code **)(lStack_e0 + 0x68))
                (puVar14,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
                 lStack_d8);
      puVar9 = puVar14;
      func_0x000107c5fff0(puVar14);
      (**(code **)(lVar11 + 8))(puVar14,lVar1);
      puVar7 = &UNK_1105931a0;
      func_0x000107c613fc(&UNK_1105931a0,0x18,7);
      func_0x000107c61644(puVar7 + 0x10,lVar6);
      func_0x000107c61574(lVar6);
      puVar8 = &UNK_110593218;
      func_0x000107c613fc(&UNK_110593218,0x20,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(long *)(puVar8 + 0x18) = param_4;
      puStack_70 = &UNK_102ab065c;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      pcStack_80 = FUN_1000f6b44;
      puStack_78 = &UNK_110593230;
      ppuVar10 = &puStack_90;
      puStack_68 = puVar8;
      func_0x000107c60bc4(ppuVar10);
      puVar7 = puStack_68;
      func_0x000107c615f0(param_4);
      func_0x000107c61574(puVar7);
      uVar15 = uStack_e8;
      lVar11 = lVar2;
      func_0x000107c5e070(lVar2);
      func_0x000107c61180();
      func_0x000107c61574(plVar4);
      func_0x000107c615e8(param_4);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(puStack_d0);
      func_0x000107c61170(lStack_b8);
      func_0x000107c61170(lStack_b0);
      func_0x000107c61170(lStack_c8);
      func_0x000107c61170(uStack_a8);
      func_0x000107c61170(lStack_a0);
      func_0x000107c61170(puStack_c0);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c615e8(lVar11);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170(puVar9);
    *(long *)(unaff_x20 + 0x10) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x1005e2178);
  (*pcVar13)();
}



/* Entry: 1005e2178; end: 1005e219b;  */

void FUN_1005e2178(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005e219c; end: 1005e21ab;  */

void FUN_1005e219c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005e21ac; end: 1005e21eb;  */

void FUN_1005e21ac(void)

{
  func_0x000107c61168(&PTR_PTR_112ee86d8);
  return;
}



/* Entry: 1005e21ec; end: 1005e21f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005e21ec(void)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309b568) = 8;
  *(undefined8 *)(unaff_x20 + _DAT_11309b570) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309b578) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309b580) = 0;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1005e21f4; end: 1005e2263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005e21f4(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309b568) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11309b570) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309b578) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309b580) = 0;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1005e2264; end: 1005e228b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005e2264(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_100079360();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_11309ac58) = 0x13;
  *(undefined8 *)(lVar3 + _DAT_11309ac60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf0) = 0;
  *(long *)(lVar3 + _DAT_11309acf8) = param_1;
  *(undefined8 *)(lVar3 + _DAT_11309ad00) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad08) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad10) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad18) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad20) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad28) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad30) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad38) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad40) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad48) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad50) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad58) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309adb0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1005e228c; end: 1005e22d7;  */

void FUN_1005e228c(void)

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



/* Entry: 1005e22d8; end: 1005e22e3;  */

undefined ** FUN_1005e22d8(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 1005e22e4; end: 1005e230f;  */

void FUN_1005e22e4(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 1005e2310; end: 1005e2317;  */

void FUN_1005e2310(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f6d38);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005e2318; end: 1005e239b;  */

void FUN_1005e2318(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f6d38,param_2,&UNK_1029f6d3c,param_2,&UNK_1029f6d64,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005e239c; end: 1005e23a7;  */

undefined ** FUN_1005e239c(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 1005e23a8; end: 1005e23d3;  */

void FUN_1005e23a8(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 1005e23d4; end: 1005e23db;  */

void FUN_1005e23d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f6ebc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005e23dc; end: 1005e245f;  */

void FUN_1005e23dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f6ebc,param_2,&UNK_1029f6ec0,param_2,&UNK_1029f6ee8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005e2460; end: 1005e246b;  */

undefined ** FUN_1005e2460(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 1005e246c; end: 1005e2497;  */

void FUN_1005e246c(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 1005e2498; end: 1005e249f;  */

void FUN_1005e2498(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f74e8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005e24a0; end: 1005e2523;  */

void FUN_1005e24a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f74e8,param_2,&UNK_1029f74ec,param_2,&UNK_1029f7514,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005e2524; end: 1005e252f;  */

undefined ** FUN_1005e2524(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 1005e2530; end: 1005e255b;  */

void FUN_1005e2530(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 1005e255c; end: 1005e2563;  */

void FUN_1005e255c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f7718);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005e2564; end: 1005e25e7;  */

void FUN_1005e2564(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f7718,param_2,&UNK_1029f771c,param_2,&UNK_1029f7744,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005e25e8; end: 1005e25f3;  */

undefined ** FUN_1005e25e8(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 1005e25f4; end: 1005e261f;  */

void FUN_1005e25f4(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 1005e2620; end: 1005e2627;  */

void FUN_1005e2620(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f79d4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005e2628; end: 1005e26ab;  */

void FUN_1005e2628(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f79d4,param_2,&UNK_1029f79d8,param_2,&UNK_1029f7a00,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005e26ac; end: 1005e26b7;  */

undefined ** FUN_1005e26ac(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 1005e26b8; end: 1005e26e3;  */

void FUN_1005e26b8(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 1005e26e4; end: 1005e26eb;  */

void FUN_1005e26e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1029f7cc8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005e26ec; end: 1005e276f;  */

void FUN_1005e26ec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1029f7cc8,param_2,FUN_1005e2770,param_2,&UNK_1029f7ccc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005e2770; end: 1005e2797;  */

void FUN_1005e2770(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1005e2798; end: 1005e27bb;  */

void FUN_1005e2798(long *param_1)

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
  long unaff_x20;
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
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  func_0x0001005c6b60();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  *(undefined8 *)(lVar2 + 0x40) = uStack_90;
  *(undefined8 *)(lVar2 + 0x48) = uStack_98;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar9 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  FUN_1005e2a10();
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = uVar10;
  FUN_1005e2a30();
  *(undefined8 *)(lVar2 + 0x10) = uVar11;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005e2a10);
    (*pcVar1)();
  }
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  *(undefined **)(lVar2 + 0x50) = puVar3;
  *param_1 = lVar2;
  return;
}



/* Entry: 1005e27bc; end: 1005e2a0f;  */

void FUN_1005e27bc(long *param_1,long param_2)

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
  func_0x0001005c6b60();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  puVar2 = PTR_PTR_1126a7200;
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
  uVar8 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  FUN_1005e2a10();
  func_0x000107c613fc();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = uVar9;
  FUN_1005e2a30();
  *(undefined8 *)(param_2 + 0x10) = uVar10;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    *(undefined **)(param_2 + 0x50) = puVar2;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005e2a10);
  (*pcVar1)();
}



/* Entry: 1005e2a10; end: 1005e2a2f;  */

void FUN_1005e2a10(void)

{
  func_0x000107c61168(&PTR_PTR_112ee3140);
  return;
}



/* Entry: 1005e2a30; end: 1005e32c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1005e2a30(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             long param_6,long param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 ***pppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 ****ppppuVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 unaff_x20;
  undefined8 uVar25;
  code *pcVar26;
  undefined8 ***apppuStack_98 [3];
  long lStack_80;
  long lStack_78;
  long alStack_70 [2];
  
  pppuVar4 = *(undefined8 ****)(param_6 + _DAT_113083868);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (pppuVar4 == (undefined8 ***)0x0) {
LAB_1005e2b18:
    uVar24 = 0;
    func_0x000102a34734(0);
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar6 = PTR_PTR_1126abdb8;
    func_0x000107c610f8(PTR_PTR_1126abdb8);
    func_0x000107c471cc();
    func_0x000107c61170(uVar24);
    func_0x000107c42c20(param_8);
    func_0x000107c61170(param_8);
  }
  else {
    lVar5 = param_7;
    func_0x000107c4b2ec();
    func_0x000107c61180();
    lVar7 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar7 == 0) {
      func_0x000107c615e8(pppuVar4);
      goto LAB_1005e2b18;
    }
    lVar5 = lVar7;
    func_0x000107c4c020();
    func_0x000107c61180();
    func_0x000107c615e8(lVar7);
    if (*(long *)(param_1 + _DAT_113082430) == 1) {
      uVar24 = 4;
LAB_1005e2b74:
      FUN_1005e32f0(0);
      func_0x000107c613fc();
      lVar7 = 8;
      FUN_1005e3310(8,uVar24);
      pcVar8 = PTR_PTR_1126b1600;
      func_0x000107c61168();
      func_0x000107c6157c(lVar7);
      func_0x000107c5aa18();
      func_0x000107c61180();
      pcVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (pcVar8 != (char *)0x0) {
        pcVar9 = pcVar8;
        FUN_1005e3364();
        if (*pcVar9 == '\x01') {
          func_0x000102a345c8();
          func_0x000107c613fc();
          pcVar9[0x18] = '\x03';
          pcVar9[0x19] = '\0';
          pcVar9[0x1a] = '\0';
          pcVar9[0x1b] = '\0';
          pcVar9[0x1c] = '\0';
          pcVar9[0x1d] = '\0';
          pcVar9[0x1e] = '\0';
          pcVar9[0x1f] = '\0';
          pcVar9[0x10] = '\x01';
          pcVar9[0x11] = '\0';
          pcVar9[0x12] = '\0';
          pcVar9[0x13] = '\0';
          pcVar9[0x14] = '\0';
          pcVar9[0x15] = '\0';
          pcVar9[0x16] = '\0';
          pcVar9[0x17] = '\0';
          pcVar10 = pcVar9;
          FUN_1000298f0();
          func_0x000107c61428();
          uVar25 = *(undefined8 *)pcVar10;
          uVar24 = 0;
          FUN_1005e33a0(0);
          func_0x000107c613fc();
          func_0x000102a37844(pcVar8,uVar25,uVar24);
          *(char **)(pcVar9 + 0x20) = pcVar8;
          func_0x000107c61174(uVar25);
        }
        else {
          func_0x000107c61170(pcVar8);
          pcVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
      }
      FUN_1005e3370(0);
      func_0x000107c613fc();
      pppuVar11 = pppuVar4;
      FUN_1005e3390();
      apppuStack_98[0] = pppuVar11;
      FUN_1000285a8(0x112ee3008,&UNK_10db0e190);
      func_0x000107c613fc();
      ppppuVar12 = apppuStack_98;
      func_0x0001005f3ccc(ppppuVar12,pcVar9);
      FUN_1000285a8(0x112e38b68,&UNK_10da23398);
      uVar25 = *(undefined8 *)(param_2 + _DAT_113091b80);
      func_0x000107c6157c(pppuVar11);
      func_0x000107c61174();
      func_0x000107c615f0(pppuVar4);
      uVar24 = uVar25;
      func_0x0001000b637c();
      func_0x000107c61170(uVar25);
      FUN_1000285a8(0x112d3b3f8,&UNK_10d904aa0);
      uVar13 = *(undefined8 *)(param_1 + _DAT_113082480);
      func_0x000107c61174();
      uVar25 = uVar13;
      func_0x0001000b637c();
      func_0x000107c61170(uVar13);
      FUN_1000285a8(0x112ee3010,&UNK_10db0e2d0);
      uVar14 = *(undefined8 *)(param_2 + _DAT_113091b70);
      func_0x000107c5bc9c();
      func_0x000107c61180();
      uVar13 = uVar14;
      func_0x0001000b637c();
      func_0x000107c61170(uVar14);
      uVar14 = param_5;
      func_0x000107c4afc4();
      func_0x000107c61180();
      puVar6 = PTR_PTR_1126af680;
      func_0x000107c61168();
      func_0x000107c5a9f0();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1005e32c4);
        (*pcVar3)();
      }
      lVar15 = 0;
      FUN_1005f6070();
      lVar16 = lVar15;
      func_0x000107c610f8();
      lVar2 = _DAT_112ee31d0;
      uVar17 = 0;
      func_0x0001005f60b4();
      func_0x000107c613fc();
      func_0x000107c615f0(lVar5);
      ppppuVar18 = ppppuVar12;
      func_0x000107c6157c();
      FUN_1005f60d4();
      *(undefined8 *****)(lVar16 + lVar2) = ppppuVar18;
      lVar2 = _DAT_112ee31d8;
      func_0x000107c613fc(uVar17,0x20,7);
      FUN_1005f60d4();
      *(undefined8 *)(lVar16 + lVar2) = uVar17;
      lVar2 = _DAT_112ee31e0;
      uVar17 = 0;
      FUN_10006a340();
      func_0x000107c613fc();
      FUN_10006a360();
      *(undefined8 *)(lVar16 + lVar2) = uVar17;
      *(undefined1 *)(lVar16 + _DAT_112ee31e8) = 0;
      puVar1 = (undefined8 *)(lVar16 + _DAT_112ee31f0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined8 *****)(lVar16 + _DAT_112ee31f8) = ppppuVar12;
      *(undefined8 *)(lVar16 + _DAT_112ee3200) = uVar14;
      *(long *)(lVar16 + _DAT_112ee3208) = lVar7;
      *(long *)(lVar16 + _DAT_112ee3210) = lVar5;
      *(undefined **)(lVar16 + _DAT_112ee3218) = puVar6;
      uVar17 = 0x112d38280;
      FUN_1000285a8(0x112d38280,&UNK_10d901fc0);
      uVar19 = uVar17;
      func_0x000107c61538();
      func_0x000107c61538(uVar17,0x112ee30d0);
      apppuStack_98[0] = ppppuVar12;
      alStack_70[0] = lVar7;
      FUN_1000285a8(0x112ee3088,&UNK_10db0e198);
      func_0x000107c613fc();
      func_0x000107c61580(lVar7,2);
      func_0x000107c615f4(lVar5,2);
      func_0x000107c61580(ppppuVar12,2);
      func_0x000107c61174(uVar14);
      func_0x000107c61174(puVar6);
      ppppuVar18 = apppuStack_98;
      FUN_100614580(0,ppppuVar18,alStack_70,uVar19,uVar17,lVar5);
      *(undefined8 *****)(lVar16 + _DAT_112ee3290) = ppppuVar18;
      plVar20 = &lStack_80;
      lStack_80 = lVar16;
      lStack_78 = lVar15;
      func_0x000107c61154(plVar20,PTR_s_init_1125d9248);
      func_0x000107c61180();
      pcVar3 = FUN_1008547f0;
      FUN_1000bfde0(FUN_1008547f0,0,PTR___sSbN_11034dd40);
      func_0x000107c61428(lVar7 + 0x30,apppuStack_98,0,0);
      if (*(long *)(lVar7 + 0x30) == 4) {
        puVar21 = &UNK_110589698;
        func_0x000107c613fc(&UNK_110589698,0x18,7);
        func_0x000107c61614(puVar21 + 0x10,plVar20);
        puVar22 = &UNK_1105896e8;
        func_0x000107c613fc(&UNK_1105896e8,0x20,7);
        *(undefined **)(puVar22 + 0x10) = puVar21;
        *(code **)(puVar22 + 0x18) = pcVar3;
        pcVar26 = *(code **)(*(long *)pcVar3 + 0x60);
        func_0x000107c6157c(pcVar3);
        puVar21 = &UNK_102a346a4;
        puVar23 = puVar22;
        (*pcVar26)(&UNK_102a346a4);
        func_0x000107c61574(puVar22);
        puVar22 = puVar21;
        func_0x000107c614f0(puVar21);
        (**(code **)(puVar23 + 0x18))
                  (*(undefined8 *)((long)plVar20 + _DAT_112ee31d0),puVar22,puVar23);
        func_0x000107c61574(uVar13);
        func_0x000107c61170(uVar14);
        func_0x000107c61170(puVar6);
        func_0x000107c615e8(lVar5);
        func_0x000107c61574(pcVar3);
        func_0x000107c61170(plVar20);
        func_0x000107c615e8(puVar21);
      }
      else {
        FUN_100619b88(uVar13,uVar24,pcVar3);
        func_0x000107c61574(uVar13);
        func_0x000107c61170(uVar14);
        func_0x000107c61170(puVar6);
        func_0x000107c615e8(lVar5);
        func_0x000107c61574(pcVar3);
        func_0x000107c61170(plVar20);
      }
      func_0x000107c61574(lVar7);
      func_0x000107c61574(ppppuVar12);
      func_0x000107c61574(uVar24);
      func_0x000107c61574(uVar25);
      puVar6 = PTR_PTR_1126abdb8;
      func_0x000107c610f8(PTR_PTR_1126abdb8);
      func_0x000107c471cc();
      func_0x000107c42c20(param_8);
      func_0x000107c61170(param_8);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(plVar20);
      func_0x000107c61574(ppppuVar12);
      func_0x000107c61574(pppuVar11);
      func_0x000107c615e8(lVar5);
      func_0x000107c615e8(pppuVar4);
      func_0x000107c61574(lVar7);
      goto LAB_1005e3264;
    }
    if (*(long *)(param_1 + _DAT_113082430) == 3) {
      uVar24 = 3;
      goto LAB_1005e2b74;
    }
    uVar24 = 0;
    func_0x000102a34734(0);
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar6 = PTR_PTR_1126abdb8;
    func_0x000107c610f8(PTR_PTR_1126abdb8);
    func_0x000107c471cc();
    func_0x000107c61170(uVar24);
    func_0x000107c42c20(param_8);
    func_0x000107c61170(param_8);
    func_0x000107c615e8(lVar5);
    func_0x000107c615e8(pppuVar4);
  }
  func_0x000107c61170(puVar6);
LAB_1005e3264:
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_7);
  return unaff_x20;
}



/* Entry: 1005e32c4; end: 1005e32e7;  */

void FUN_1005e32c4(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005e32e8; end: 1005e32ef;  */

void FUN_1005e32e8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005e32f0; end: 1005e330f;  */

void FUN_1005e32f0(void)

{
  func_0x000107c61168(&PTR_PTR_112ee36e8);
  return;
}



/* Entry: 1005e3310; end: 1005e3363;  */

void FUN_1005e3310(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 3;
  *(undefined8 *)(unaff_x20 + 0x28) = 1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61428(unaff_x20 + 0x30,auStack_38,1,0);
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 1005e3364; end: 1005e336f;  */

undefined * FUN_1005e3364(void)

{
  return &UNK_10dd3d5e8;
}



/* Entry: 1005e3370; end: 1005e338f;  */

void FUN_1005e3370(void)

{
  func_0x000107c61168(&PTR_PTR_112ee37d0);
  return;
}



/* Entry: 1005e3390; end: 1005e339f;  */

void FUN_1005e3390(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 1005e33a0; end: 1005e33bf;  */

void FUN_1005e33a0(void)

{
  func_0x000107c61168(&PTR_PTR_112ee38a8);
  return;
}



/* Entry: 1005e33c0; end: 1005e340b;  */

void FUN_1005e33c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000028);
  return;
}



/* Entry: 1005e340c; end: 1005e3483;  */

undefined8 FUN_1005e340c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x000107c60ddc(auStack_58,param_3);
  FUN_1005e3484(param_1,&uStack_40,auStack_58);
  FUN_1005e34b8();
  func_0x0001005e34c4();
  return param_1;
}



/* Entry: 1005e3484; end: 1005e34b7;  */

long FUN_1005e3484(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1000fecf4(param_1 + 8);
  FUN_1000fecf4(param_1 + 8,param_3);
  return param_1;
}



/* Entry: 1005e34b8; end: 1005e34cb;  */

void FUN_1005e34b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 1005e34cc; end: 1005e3517;  */

void FUN_1005e34cc(void)

{
  func_0x000100550490();
  FUN_1005504ac();
  FUN_10055053c();
  return;
}



/* Entry: 1005e3518; end: 1005e3547;  */

long FUN_1005e3518(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if ((char)param_1[2] == '\x01') {
    func_0x000100552990();
    lVar1 = (long)param_1 + lVar1;
  }
  return lVar1;
}



/* Entry: 1005e3548; end: 1005e3553;  */

undefined8 FUN_1005e3548(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [72];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((bRam0000000113828028 & 1) == 0) {
    iVar1 = 0x13828028;
    uStack_20 = param_1;
    uStack_18 = param_2;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_1005e3618(auStack_68);
      puVar2 = auStack_68;
      FUN_10028f4b0();
      puRam0000000113828020 = puVar2;
      FUN_100164334(auStack_68);
      func_0x000107c60e4c(0x113828028);
    }
  }
  return 0x113828020;
}



/* Entry: 1005e3554; end: 1005e3577;  */

void FUN_1005e3554(void)

{
  undefined8 *extraout_x8;
  
  FUN_1005e3548();
  func_0x0001005e6ff8();
                    /* WARNING: Could not recover jumptable at 0x0001005e700c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*extraout_x8)();
  return;
}



/* Entry: 1005e3578; end: 1005e3617;  */

undefined8 FUN_1005e3578(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [72];
  
  if ((bRam0000000113828028 & 1) == 0) {
    iVar1 = 0x13828028;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_1005e3618(auStack_68);
      puVar2 = auStack_68;
      FUN_10028f4b0();
      puRam0000000113828020 = puVar2;
      FUN_100164334(auStack_68);
      func_0x000107c60e4c(0x113828028);
    }
  }
  return 0x113828020;
}



/* Entry: 1005e3618; end: 1005e6fcf;  */

undefined8 * FUN_1005e3618(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  long lVar4;
  undefined8 uStack_4580;
  undefined8 uStack_4578;
  undefined8 uStack_4570;
  undefined8 uStack_4568;
  undefined8 uStack_4560;
  undefined8 uStack_4558;
  undefined8 uStack_4550;
  undefined8 uStack_4548;
  undefined8 uStack_4540;
  undefined1 auStack_4538 [6120];
  undefined1 auStack_2d50 [48];
  undefined1 auStack_2d20 [48];
  undefined1 auStack_2cf0 [48];
  undefined1 auStack_2cc0 [48];
  undefined1 auStack_2c90 [48];
  undefined1 auStack_2c60 [48];
  undefined1 auStack_2c30 [48];
  undefined1 auStack_2c00 [48];
  undefined1 auStack_2bd0 [48];
  undefined1 auStack_2ba0 [48];
  undefined1 auStack_2b70 [48];
  undefined1 auStack_2b40 [48];
  undefined1 auStack_2b10 [48];
  undefined1 auStack_2ae0 [48];
  undefined1 auStack_2ab0 [48];
  undefined1 auStack_2a80 [48];
  undefined1 auStack_2a50 [48];
  undefined1 auStack_2a20 [48];
  undefined1 auStack_29f0 [48];
  undefined1 auStack_29c0 [48];
  undefined1 auStack_2990 [48];
  undefined1 auStack_2960 [48];
  undefined1 auStack_2930 [48];
  undefined1 auStack_2900 [48];
  undefined1 auStack_28d0 [48];
  undefined1 auStack_28a0 [48];
  undefined1 auStack_2870 [48];
  undefined1 auStack_2840 [48];
  undefined1 auStack_2810 [48];
  undefined1 auStack_27e0 [48];
  undefined1 auStack_27b0 [48];
  undefined1 auStack_2780 [48];
  undefined1 auStack_2750 [48];
  undefined1 auStack_2720 [48];
  undefined1 auStack_26f0 [48];
  undefined1 auStack_26c0 [48];
  undefined1 auStack_2690 [48];
  undefined1 auStack_2660 [48];
  undefined1 auStack_2630 [48];
  undefined1 auStack_2600 [48];
  undefined1 auStack_25d0 [48];
  undefined1 auStack_25a0 [48];
  undefined1 auStack_2570 [48];
  undefined1 auStack_2540 [48];
  undefined1 auStack_2510 [48];
  undefined1 auStack_24e0 [48];
  undefined1 auStack_24b0 [48];
  undefined1 auStack_2480 [48];
  undefined1 auStack_2450 [48];
  undefined1 auStack_2420 [48];
  undefined1 auStack_23f0 [48];
  undefined1 auStack_23c0 [48];
  undefined1 auStack_2390 [48];
  undefined1 auStack_2360 [48];
  undefined1 auStack_2330 [48];
  undefined1 auStack_2300 [48];
  undefined1 auStack_22d0 [48];
  undefined1 auStack_22a0 [48];
  undefined1 auStack_2270 [48];
  undefined1 auStack_2240 [48];
  undefined1 auStack_2210 [48];
  undefined1 auStack_21e0 [48];
  undefined1 auStack_21b0 [48];
  undefined1 auStack_2180 [48];
  undefined1 auStack_2150 [48];
  undefined1 auStack_2120 [48];
  undefined1 auStack_20f0 [48];
  undefined1 auStack_20c0 [48];
  undefined1 auStack_2090 [48];
  undefined1 auStack_2060 [48];
  undefined1 auStack_2030 [48];
  undefined1 auStack_2000 [48];
  undefined1 auStack_1fd0 [48];
  undefined1 auStack_1fa0 [48];
  undefined1 auStack_1f70 [48];
  undefined1 auStack_1f40 [48];
  undefined1 auStack_1f10 [48];
  undefined1 auStack_1ee0 [48];
  undefined1 auStack_1eb0 [48];
  undefined1 auStack_1e80 [48];
  undefined1 auStack_1e50 [48];
  undefined1 auStack_1e20 [48];
  undefined1 auStack_1df0 [48];
  undefined1 auStack_1dc0 [48];
  undefined1 auStack_1d90 [48];
  undefined1 auStack_1d60 [48];
  undefined1 auStack_1d30 [48];
  undefined1 auStack_1d00 [48];
  undefined1 auStack_1cd0 [48];
  undefined1 auStack_1ca0 [48];
  undefined1 auStack_1c70 [48];
  undefined1 auStack_1c40 [48];
  undefined1 auStack_1c10 [48];
  undefined1 auStack_1be0 [48];
  undefined1 auStack_1bb0 [48];
  undefined1 auStack_1b80 [48];
  undefined1 auStack_1b50 [48];
  undefined1 auStack_1b20 [48];
  undefined1 auStack_1af0 [48];
  undefined1 auStack_1ac0 [48];
  undefined1 auStack_1a90 [48];
  undefined1 auStack_1a60 [48];
  undefined1 auStack_1a30 [48];
  undefined1 auStack_1a00 [48];
  undefined1 auStack_19d0 [48];
  undefined1 auStack_19a0 [48];
  undefined1 auStack_1970 [48];
  undefined1 auStack_1940 [48];
  undefined1 auStack_1910 [48];
  undefined1 auStack_18e0 [48];
  undefined1 auStack_18b0 [48];
  undefined1 auStack_1880 [48];
  undefined1 auStack_1850 [48];
  undefined1 auStack_1820 [48];
  undefined1 auStack_17f0 [48];
  undefined1 auStack_17c0 [48];
  undefined1 auStack_1790 [48];
  undefined1 auStack_1760 [48];
  undefined1 auStack_1730 [48];
  undefined1 auStack_1700 [48];
  undefined1 auStack_16d0 [48];
  undefined1 auStack_16a0 [48];
  undefined1 auStack_1670 [48];
  undefined1 auStack_1640 [48];
  undefined1 auStack_1610 [48];
  undefined1 auStack_15e0 [48];
  undefined1 auStack_15b0 [48];
  undefined1 auStack_1580 [48];
  undefined1 auStack_1550 [24];
  undefined1 auStack_1538 [24];
  undefined1 auStack_1520 [48];
  undefined1 auStack_14f0 [48];
  undefined1 auStack_14c0 [48];
  undefined1 auStack_1490 [48];
  undefined1 auStack_1460 [48];
  undefined1 auStack_1430 [48];
  undefined1 auStack_1400 [48];
  undefined1 auStack_13d0 [48];
  undefined1 auStack_13a0 [48];
  undefined1 auStack_1370 [48];
  undefined1 auStack_1340 [48];
  undefined1 auStack_1310 [48];
  undefined1 auStack_12e0 [48];
  undefined1 auStack_12b0 [48];
  undefined1 auStack_1280 [48];
  undefined1 auStack_1250 [48];
  undefined1 auStack_1220 [48];
  undefined1 auStack_11f0 [48];
  undefined1 auStack_11c0 [48];
  undefined1 auStack_1190 [48];
  undefined1 auStack_1160 [48];
  undefined1 auStack_1130 [48];
  undefined1 auStack_1100 [48];
  undefined1 auStack_10d0 [48];
  undefined1 auStack_10a0 [48];
  undefined1 auStack_1070 [48];
  undefined1 auStack_1040 [48];
  undefined1 auStack_1010 [48];
  undefined1 auStack_fe0 [48];
  undefined1 auStack_fb0 [48];
  undefined1 auStack_f80 [48];
  undefined1 auStack_f50 [48];
  undefined1 auStack_f20 [48];
  undefined1 auStack_ef0 [48];
  undefined1 auStack_ec0 [48];
  undefined1 auStack_e90 [48];
  undefined1 auStack_e60 [48];
  undefined1 auStack_e30 [48];
  undefined1 auStack_e00 [48];
  undefined1 auStack_dd0 [48];
  undefined1 auStack_da0 [48];
  undefined1 auStack_d70 [48];
  undefined1 auStack_d40 [48];
  undefined1 auStack_d10 [48];
  undefined1 auStack_ce0 [48];
  undefined1 auStack_cb0 [48];
  undefined1 auStack_c80 [48];
  undefined1 auStack_c50 [48];
  undefined1 auStack_c20 [48];
  undefined1 auStack_bf0 [48];
  undefined1 auStack_bc0 [48];
  undefined1 auStack_b90 [48];
  undefined1 auStack_b60 [48];
  undefined1 auStack_b30 [48];
  undefined1 auStack_b00 [48];
  undefined1 auStack_ad0 [48];
  undefined1 auStack_aa0 [48];
  undefined1 auStack_a70 [48];
  undefined1 auStack_a40 [48];
  undefined1 auStack_a10 [48];
  undefined1 auStack_9e0 [48];
  undefined1 auStack_9b0 [48];
  undefined1 auStack_980 [48];
  undefined1 auStack_950 [48];
  undefined1 auStack_920 [48];
  undefined1 auStack_8f0 [48];
  undefined1 auStack_8c0 [48];
  undefined1 auStack_890 [48];
  undefined1 auStack_860 [48];
  undefined1 auStack_830 [48];
  undefined1 auStack_800 [48];
  undefined1 auStack_7d0 [48];
  undefined1 auStack_7a0 [48];
  undefined1 auStack_770 [48];
  undefined1 auStack_740 [48];
  undefined1 auStack_710 [48];
  undefined1 auStack_6e0 [48];
  undefined1 auStack_6b0 [48];
  undefined1 auStack_680 [48];
  undefined1 auStack_650 [48];
  undefined1 auStack_620 [48];
  undefined1 auStack_5f0 [48];
  undefined1 auStack_5c0 [48];
  undefined1 auStack_590 [48];
  undefined1 auStack_560 [48];
  undefined1 auStack_530 [48];
  undefined1 auStack_500 [48];
  undefined1 auStack_4d0 [48];
  undefined1 auStack_4a0 [48];
  undefined1 auStack_470 [48];
  undefined1 auStack_440 [48];
  undefined1 auStack_410 [48];
  undefined1 auStack_3e0 [48];
  undefined1 auStack_3b0 [48];
  undefined1 auStack_380 [48];
  undefined1 auStack_350 [48];
  undefined1 auStack_320 [48];
  undefined1 auStack_2f0 [48];
  undefined1 auStack_2c0 [48];
  undefined1 auStack_290 [48];
  undefined1 auStack_260 [48];
  undefined1 auStack_230 [48];
  undefined1 auStack_200 [48];
  undefined1 auStack_1d0 [48];
  undefined1 auStack_1a0 [48];
  undefined1 auStack_170 [48];
  undefined1 auStack_140 [48];
  undefined1 auStack_110 [48];
  undefined1 auStack_e0 [48];
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10002b838(&uStack_4550,&UNK_10f4b57da);
  FUN_10002b838(&uStack_4568,"");
  FUN_10002b838(auStack_4538,&UNK_10f4b57e8);
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1008);
  func_0x0001005e6fd8(0x1020);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1038);
  func_0x0001005e6fd8(0x1050);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1068);
  func_0x0001005e6fd8(0x1080);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1098);
  func_0x0001005e6fd8(0x10b0);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x10c8);
  func_0x0001005e6fd8(0x10e0);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x10f8);
  func_0x0001005e6fd8(0x1110);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1128);
  func_0x0001005e6fd8(0x1140);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1158);
  func_0x0001005e6fd8(0x1170);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1188);
  func_0x0001005e6fd8(0x11a0);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x11b8);
  func_0x0001005e6fd8(0x11d0);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x11e8);
  func_0x0001005e6fd8(0x1200);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1218);
  func_0x0001005e6fd8(0x1230);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1248);
  func_0x0001005e6fd8(0x1260);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1278);
  func_0x0001005e6fd8(0x1290);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x12a8);
  func_0x0001005e6fd8(0x12c0);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x12d8);
  func_0x0001005e6fd8(0x12f0);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1308);
  func_0x0001005e6fd8(0x1320);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1338);
  func_0x0001005e6fd8(0x1350);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1368);
  func_0x0001005e6fd8(0x1380);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1398);
  func_0x0001005e6fd8(0x13b0);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x13c8);
  func_0x0001005e6fd8(0x13e0);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x13f8);
  func_0x0001005e6fd8(0x1410);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1428);
  func_0x0001005e6fd8(0x1440);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1458);
  func_0x0001005e6fd8(0x1470);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1488);
  func_0x0001005e6fd8(0x14a0);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x14b8);
  func_0x0001005e6fd8(0x14d0);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x14e8);
  func_0x0001005e6fd8(0x1500);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1518);
  func_0x0001005e6fd8(0x1530);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1548);
  func_0x0001005e6fd8(0x1560);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1578);
  func_0x0001005e6fd8(0x1590);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x15a8);
  func_0x0001005e6fd8(0x15c0);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x15d8);
  func_0x0001005e6fd8(0x15f0);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1608);
  func_0x0001005e6fd8(0x1620);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1638);
  func_0x0001005e6fd8(0x1650);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1668);
  func_0x0001005e6fd8(0x1680);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1698);
  func_0x0001005e6fd8(0x16b0);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x16c8);
  func_0x0001005e6fd8(0x16e0);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x16f8);
  func_0x0001005e6fd8(0x1710);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1728);
  func_0x0001005e6fd8(0x1740);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1758);
  func_0x0001005e6fd8(6000);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x1788);
  func_0x0001005e6fd8(0x17a0);
  FUN_1005e6fd0();
  FUN_1005e6fd0(0x17b8);
  func_0x0001005e6fd8(0x17d0);
  FUN_1005e6fd0();
  func_0x0001005e6fe4(auStack_2d50,&UNK_10f4b7011);
  func_0x0001005e6fec(0x1800);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2d20,&UNK_10f4b7046);
  func_0x0001005e6fec(0x1830);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2cf0,&UNK_10f4b7077);
  func_0x0001005e6fec(0x1860);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2cc0,&UNK_10f4b70a6);
  func_0x0001005e6fec(0x1890);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2c90,&UNK_10f4b70d9);
  func_0x0001005e6fec(0x18c0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2c60,&UNK_10f4b7107);
  func_0x0001005e6fec(0x18f0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2c30,&UNK_10f4b7135);
  func_0x0001005e6fec(0x1920);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2c00,&UNK_10f4b716a);
  func_0x0001005e6fec(0x1950);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2bd0,&UNK_10f4b719d);
  func_0x0001005e6fec(0x1980);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2ba0,&UNK_10f4b71d4);
  func_0x0001005e6fec(0x19b0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2b70,&UNK_10f4b7206);
  func_0x0001005e6fec(0x19e0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2b40,&UNK_10f4b7234);
  func_0x0001005e6fec(0x1a10);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2b10,&UNK_10f4b7265);
  func_0x0001005e6fec(0x1a40);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2ae0,&UNK_10f4b7294);
  func_0x0001005e6fec(0x1a70);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2ab0,&UNK_10f4b72c7);
  func_0x0001005e6fec(0x1aa0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2a80,&UNK_10f4b72fd);
  func_0x0001005e6fec(0x1ad0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2a50,&UNK_10f4b7337);
  func_0x0001005e6fec(0x1b00);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2a20,&UNK_10f4b7370);
  func_0x0001005e6fec(0x1b30);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_29f0,&UNK_10f4b73ad);
  func_0x0001005e6fec(0x1b60);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_29c0,&UNK_10f4b73e5);
  func_0x0001005e6fec(0x1b90);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2990,&UNK_10f4b741c);
  func_0x0001005e6fec(0x1bc0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2960,&UNK_10f4b7459);
  func_0x0001005e6fec(0x1bf0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2930,&UNK_10f4b7494);
  func_0x0001005e6fec(0x1c20);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2900,&UNK_10f4b74d3);
  func_0x0001005e6fec(0x1c50);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_28d0,&UNK_10f4b750d);
  func_0x0001005e6fec(0x1c80);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_28a0,&UNK_10f4b7542);
  func_0x0001005e6fec(0x1cb0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2870,&UNK_10f4b7579);
  func_0x0001005e6fec(0x1ce0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2840,&UNK_10f4b75b2);
  func_0x0001005e6fec(0x1d10);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2810,&UNK_10f4b75eb);
  func_0x0001005e6fec(0x1d40);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_27e0,&UNK_10f4b7626);
  func_0x0001005e6fec(0x1d70);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_27b0,&UNK_10f4b7657);
  func_0x0001005e6fec(0x1da0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2780,&UNK_10f4b7690);
  func_0x0001005e6fec(0x1dd0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2750,&UNK_10f4b76cb);
  func_0x0001005e6fec(0x1e00);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2720,&UNK_10f4b7706);
  func_0x0001005e6fec(0x1e30);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_26f0,&UNK_10f4b7743);
  func_0x0001005e6fec(0x1e60);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_26c0,&UNK_10f4b7776);
  func_0x0001005e6fec(0x1e90);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2690,&UNK_10f4b77b3);
  func_0x0001005e6fec(0x1ec0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2660,&UNK_10f4b77f2);
  func_0x0001005e6fec(0x1ef0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2630,&UNK_10f4b7831);
  func_0x0001005e6fec(0x1f20);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2600,&UNK_10f4b7872);
  func_0x0001005e6fec(0x1f50);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_25d0,&UNK_10f4b78a9);
  func_0x0001005e6fec(0x1f80);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_25a0,&UNK_10f4b78e0);
  func_0x0001005e6fec(0x1fb0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2570,&UNK_10f4b7919);
  func_0x0001005e6fec(0x1fe0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2540,&UNK_10f4b7952);
  func_0x0001005e6fec(0x2010);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2510,&UNK_10f4b798d);
  func_0x0001005e6fec(0x2040);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_24e0,&UNK_10f4b79be);
  func_0x0001005e6fec(0x2070);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_24b0,&UNK_10f4b79e7);
  func_0x0001005e6fec(0x20a0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2480,&UNK_10f4b7a1f);
  func_0x0001005e6fec(0x20d0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2450,&UNK_10f4b7a5e);
  func_0x0001005e6fec(0x2100);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2420,&UNK_10f4b7a99);
  func_0x0001005e6fec(0x2130);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_23f0,&UNK_10f4b7ad4);
  func_0x0001005e6fec(0x2160);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_23c0,&UNK_10f4b7b13);
  func_0x0001005e6fec(0x2190);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2390,&UNK_10f4b7b4a);
  func_0x0001005e6fec(0x21c0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2360,&UNK_10f4b7b80);
  func_0x0001005e6fec(0x21f0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2330,&UNK_10f4b7baf);
  func_0x0001005e6fec(0x2220);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2300,&UNK_10f4b7bd5);
  func_0x0001005e6fec(0x2250);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_22d0,&UNK_10f4b7c04);
  func_0x0001005e6fec(0x2280);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_22a0,&UNK_10f4b7c33);
  func_0x0001005e6fec(0x22b0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2270,&UNK_10f4b7c62);
  func_0x0001005e6fec(0x22e0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2240,&UNK_10f4b7c91);
  func_0x0001005e6fec(0x2310);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2210,&UNK_10f4b7cba);
  func_0x0001005e6fec(0x2340);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_21e0,&UNK_10f4b7ce5);
  func_0x0001005e6fec(0x2370);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_21b0,&UNK_10f4b7d17);
  func_0x0001005e6fec(0x23a0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2180,&UNK_10f4b7d52);
  func_0x0001005e6fec(0x23d0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2150,&UNK_10f4b7d92);
  func_0x0001005e6fec(0x2400);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2120,&UNK_10f4b7dc8);
  func_0x0001005e6fec(0x2430);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_20f0,&UNK_10f4b7df5);
  func_0x0001005e6fec(0x2460);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_20c0,&UNK_10f4b7e31);
  func_0x0001005e6fec(0x2490);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2090,&UNK_10f4b7e6a);
  func_0x0001005e6fec(0x24c0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2060,&UNK_10f4b7e9d);
  func_0x0001005e6fec(0x24f0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2030,&UNK_10f4b7ece);
  func_0x0001005e6fec(0x2520);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2000,&UNK_10f4b7f00);
  func_0x0001005e6fec(0x2550);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1fd0,&UNK_10f4b7f1e);
  func_0x0001005e6fec(0x2580);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1fa0,&UNK_10f4b7f4e);
  func_0x0001005e6fec(0x25b0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1f70,&UNK_10f4b7f7f);
  func_0x0001005e6fec(0x25e0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1f40,&UNK_10f4b7fa8);
  func_0x0001005e6fec(0x2610);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1f10,&UNK_10f4b7fd5);
  func_0x0001005e6fec(0x2640);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1ee0,&UNK_10f4b8003);
  func_0x0001005e6fec(0x2670);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1eb0,&UNK_10f4b8035);
  func_0x0001005e6fec(0x26a0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1e80,&UNK_10f4b806a);
  func_0x0001005e6fec(0x26d0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1e50,&UNK_10f4b80a1);
  func_0x0001005e6fec(0x2700);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1e20,&UNK_10f4b80de);
  func_0x0001005e6fec(0x2730);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1df0,&UNK_10f4b811b);
  func_0x0001005e6fec(0x2760);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1dc0,&UNK_10f4b8152);
  func_0x0001005e6fec(0x2790);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1d90,&UNK_10f4b8186);
  func_0x0001005e6fec(0x27c0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1d60,&UNK_10f4b81b5);
  func_0x0001005e6fec(0x27f0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1d30,&UNK_10f4b81e9);
  func_0x0001005e6fec(0x2820);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1d00,&UNK_10f4b8210);
  func_0x0001005e6fec(0x2850);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1cd0,&UNK_10f4b823f);
  func_0x0001005e6fec(0x2880);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1ca0,&UNK_10f4b8266);
  func_0x0001005e6fec(0x28b0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1c70,&UNK_10f4b829b);
  func_0x0001005e6fec(0x28e0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1c40,&UNK_10f4b82d0);
  func_0x0001005e6fec(0x2910);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1c10,&UNK_10f4b82ff);
  func_0x0001005e6fec(0x2940);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1be0,&UNK_10f4b8332);
  func_0x0001005e6fec(0x2970);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1bb0,&UNK_10f4b8366);
  func_0x0001005e6fec(0x29a0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1b80,&UNK_10f4b83a1);
  func_0x0001005e6fec(0x29d0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1b50,&UNK_10f4b83db);
  func_0x0001005e6fec(0x2a00);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1b20,&UNK_10f4b8417);
  func_0x0001005e6fec(0x2a30);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1af0,&UNK_10f4b844a);
  func_0x0001005e6fec(0x2a60);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1ac0,&UNK_10f4b847a);
  func_0x0001005e6fec(0x2a90);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1a90,&UNK_10f4b84a6);
  func_0x0001005e6fec(0x2ac0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1a60,&UNK_10f4b84db);
  func_0x0001005e6fec(0x2af0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1a30,&UNK_10f4b8517);
  func_0x0001005e6fec(0x2b20);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1a00,&UNK_10f4b8559);
  func_0x0001005e6fec(0x2b50);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_19d0,&UNK_10f4b8594);
  func_0x0001005e6fec(0x2b80);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_19a0,&UNK_10f4b85ca);
  func_0x0001005e6fec(0x2bb0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1970,&UNK_10f4b85f1);
  func_0x0001005e6fec(0x2be0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1940,&UNK_10f4b8618);
  func_0x0001005e6fec(0x2c10);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1910,&UNK_10f4b8649);
  func_0x0001005e6fec(0x2c40);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_18e0,&UNK_10f4b8676);
  func_0x0001005e6fec(0x2c70);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_18b0,&UNK_10f4b86a9);
  func_0x0001005e6fec(0x2ca0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1880,&UNK_10f4b86e0);
  func_0x0001005e6fec(0x2cd0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1850,&UNK_10f4b8710);
  func_0x0001005e6fec(0x2d00);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1820,&UNK_10f4b8743);
  func_0x0001005e6fec(0x2d30);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_17f0,&UNK_10f4b8780);
  func_0x0001005e6fec(0x2d60);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_17c0,&UNK_10f4b87b4);
  func_0x0001005e6fec(0x2d90);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1790,&UNK_10f4b87ec);
  func_0x0001005e6fec(0x2dc0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1760,&UNK_10f4b8822);
  func_0x0001005e6fec(0x2df0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1730,&UNK_10f4b8842);
  func_0x0001005e6fec(0x2e20);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1700,&UNK_10f4b886c);
  func_0x0001005e6fec(0x2e50);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_16d0,&UNK_10f4b8897);
  func_0x0001005e6fec(0x2e80);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_16a0,&UNK_10f4b88c2);
  func_0x0001005e6fec(0x2eb0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1670,&UNK_10f4b88f5);
  func_0x0001005e6fec(12000);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1640,&UNK_10f4b891e);
  func_0x0001005e6fec(0x2f10);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1610,&UNK_10f4b8953);
  func_0x0001005e6fec(0x2f40);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_15e0,&UNK_10f4b8992);
  func_0x0001005e6fec(0x2f70);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_15b0,&UNK_10f4b89b7);
  func_0x0001005e6fec(0x2fa0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1580,&UNK_10f4b89f2);
  func_0x0001005e6fec(0x2fd0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1550,&UNK_10f4b8a30);
  func_0x0001005e6fe4(auStack_1538,&UNK_10f4b8a47);
  func_0x0001005e6fe4(auStack_1520,&UNK_10f4b8a5a);
  func_0x0001005e6fec(0x3030);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_14f0,&UNK_10f4b8a93);
  func_0x0001005e6fec(0x3060);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_14c0,&UNK_10f4b8acd);
  func_0x0001005e6fec(0x3090);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1490,&UNK_10f4b8af7);
  func_0x0001005e6fec(0x30c0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1460,&UNK_10f4b8b35);
  func_0x0001005e6fec(0x30f0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1430,&UNK_10f4b8b53);
  func_0x0001005e6fec(0x3120);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1400,&UNK_10f4b8b80);
  func_0x0001005e6fec(0x3150);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_13d0,&UNK_10f4b8bb0);
  func_0x0001005e6fec(0x3180);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_13a0,&UNK_10f4b8bf0);
  func_0x0001005e6fec(0x31b0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1370,&UNK_10f4b8c2e);
  func_0x0001005e6fec(0x31e0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1340,&UNK_10f4b8c6a);
  func_0x0001005e6fec(0x3210);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1310,&UNK_10f4b8c99);
  func_0x0001005e6fec(0x3240);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_12e0,&UNK_10f4b8cd1);
  func_0x0001005e6fec(0x3270);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_12b0,&UNK_10f4b8d06);
  func_0x0001005e6fec(0x32a0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1280,&UNK_10f4b8d44);
  func_0x0001005e6fec(0x32d0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1250,&UNK_10f4b8d76);
  func_0x0001005e6fec(0x3300);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1220,&UNK_10f4b8da1);
  func_0x0001005e6fec(0x3330);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_11f0,&UNK_10f4b8dd1);
  func_0x0001005e6fec(0x3360);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_11c0,&UNK_10f4b8dfd);
  func_0x0001005e6fec(0x3390);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1190,&UNK_10f4b8e2a);
  func_0x0001005e6fec(0x33c0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1160,&UNK_10f4b8e4d);
  func_0x0001005e6fec(0x33f0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1130,&UNK_10f4b8e7f);
  func_0x0001005e6fec(0x3420);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1100,&UNK_10f4b8ea9);
  func_0x0001005e6fec(0x3450);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_10d0,&UNK_10f4b8ecc);
  func_0x0001005e6fec(0x3480);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_10a0,&UNK_10f4b8ef5);
  func_0x0001005e6fec(0x34b0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1070,&UNK_10f4b8f26);
  func_0x0001005e6fec(0x34e0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1040,&UNK_10f4b8f50);
  func_0x0001005e6fec(0x3510);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1010,&UNK_10f4b8f8c);
  func_0x0001005e6fec(0x3540);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_fe0,&UNK_10f4b8fc7);
  func_0x0001005e6fec(0x3570);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_fb0,&UNK_10f4b8fea);
  func_0x0001005e6fec(0x35a0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_f80,&UNK_10f4b901c);
  func_0x0001005e6fec(0x35d0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_f50,&UNK_10f4b9046);
  func_0x0001005e6fec(0x3600);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_f20,&UNK_10f4b9069);
  func_0x0001005e6fec(0x3630);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_ef0,&UNK_10f4b9097);
  func_0x0001005e6fec(0x3660);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_ec0,&UNK_10f4b90b6);
  func_0x0001005e6fec(0x3690);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_e90,&UNK_10f4b90e1);
  func_0x0001005e6fec(0x36c0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_e60,&UNK_10f4b910c);
  func_0x0001005e6fec(0x36f0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_e30,&UNK_10f4b9137);
  func_0x0001005e6fec(0x3720);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_e00,&UNK_10f4b9167);
  func_0x0001005e6fec(0x3750);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_dd0,&UNK_10f4b919a);
  func_0x0001005e6fec(0x3780);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_da0,&UNK_10f4b91bd);
  func_0x0001005e6fec(0x37b0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_d70,&UNK_10f4b91e7);
  func_0x0001005e6fec(0x37e0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_d40,&UNK_10f4b921b);
  func_0x0001005e6fec(0x3810);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_d10,&UNK_10f4b9254);
  func_0x0001005e6fec(0x3840);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_ce0,&UNK_10f4b927f);
  func_0x0001005e6fec(0x3870);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_cb0,&UNK_10f4b92b2);
  func_0x0001005e6fec(0x38a0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_c80,&UNK_10f4b92e2);
  func_0x0001005e6fec(0x38d0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_c50,&UNK_10f4b930c);
  func_0x0001005e6fec(0x3900);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_c20,&DAT_10f4b9336);
  func_0x0001005e6fec(0x3930);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_bf0,&UNK_10f4b935f);
  func_0x0001005e6fec(0x3960);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_bc0,&UNK_10f4b938b);
  func_0x0001005e6fec(0x3990);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_b90,&UNK_10f4b93be);
  func_0x0001005e6fec(0x39c0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_b60,&UNK_10f4b93ef);
  func_0x0001005e6fec(0x39f0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_b30,&UNK_10f4b9420);
  func_0x0001005e6fec(0x3a20);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_b00,&UNK_10f4b944f);
  func_0x0001005e6fec(0x3a50);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_ad0,&UNK_10f4b9489);
  func_0x0001005e6fec(0x3a80);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_aa0,&UNK_10f4b94c2);
  func_0x0001005e6fec(0x3ab0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_a70,&UNK_10f4b94f0);
  func_0x0001005e6fec(0x3ae0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_a40,&UNK_10f4b9513);
  func_0x0001005e6fec(0x3b10);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_a10,&UNK_10f4b9547);
  func_0x0001005e6fec(0x3b40);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_9e0,&UNK_10f4b9574);
  func_0x0001005e6fec(0x3b70);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_9b0,&UNK_10f4b95a6);
  func_0x0001005e6fec(0x3ba0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_980,&UNK_10f4b95d7);
  func_0x0001005e6fec(0x3bd0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_950,&UNK_10f4b960e);
  func_0x0001005e6fec(0x3c00);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_920,&UNK_10f4b963d);
  func_0x0001005e6fec(0x3c30);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_8f0,&UNK_10f4b9668);
  func_0x0001005e6fec(0x3c60);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_8c0,&UNK_10f4b969f);
  func_0x0001005e6fec(0x3c90);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_890,&UNK_10f4b96c2);
  func_0x0001005e6fec(0x3cc0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_860,&UNK_10f4b96f1);
  func_0x0001005e6fec(0x3cf0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_830,&UNK_10f4b9724);
  func_0x0001005e6fec(0x3d20);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_800,&UNK_10f4b9757);
  func_0x0001005e6fec(0x3d50);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_7d0,&UNK_10f4b9792);
  func_0x0001005e6fec(0x3d80);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_7a0,&UNK_10f4b97d0);
  func_0x0001005e6fec(0x3db0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_770,&UNK_10f4b9806);
  func_0x0001005e6fec(0x3de0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_740,&UNK_10f4b983b);
  func_0x0001005e6fec(0x3e10);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_710,&UNK_10f4b986a);
  func_0x0001005e6fec(0x3e40);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_6e0,&UNK_10f4b98a8);
  func_0x0001005e6fec(0x3e70);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_6b0,&UNK_10f4b98e2);
  func_0x0001005e6fec(0x3ea0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_680,&UNK_10f4b991c);
  func_0x0001005e6fec(0x3ed0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_650,&UNK_10f4b9958);
  func_0x0001005e6fec(0x3f00);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_620,&UNK_10f4b9993);
  func_0x0001005e6fec(0x3f30);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_5f0,&UNK_10f4b99c5);
  func_0x0001005e6fec(0x3f60);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_5c0,&UNK_10f4b99f8);
  func_0x0001005e6fec(0x3f90);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_590,&UNK_10f4b9a2b);
  func_0x0001005e6fec(0x3fc0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_560,&UNK_10f4b9a5e);
  func_0x0001005e6fec(0x3ff0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_530,&UNK_10f4b9a90);
  func_0x0001005e6fec(0x4020);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_500,&UNK_10f4b9ac3);
  func_0x0001005e6fec(0x4050);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_4d0,&UNK_10f4b9afb);
  func_0x0001005e6fec(0x4080);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_4a0,&UNK_10f4b9b36);
  func_0x0001005e6fec(0x40b0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_470,&UNK_10f4b9b71);
  func_0x0001005e6fec(0x40e0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_440,&UNK_10f4b9ba6);
  func_0x0001005e6fec(0x4110);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_410,&UNK_10f4b9bdf);
  func_0x0001005e6fec(0x4140);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_3e0,&UNK_10f4b9c1c);
  func_0x0001005e6fec(0x4170);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_3b0,&UNK_10f4b9c52);
  func_0x0001005e6fec(0x41a0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_380,&UNK_10f4b9c8a);
  func_0x0001005e6fec(0x41d0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_350,&UNK_10f4b9cb7);
  func_0x0001005e6fec(0x4200);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_320,&UNK_10f4b9ce3);
  func_0x0001005e6fec(0x4230);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2f0,&UNK_10f4b9d02);
  func_0x0001005e6fec(0x4260);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_2c0,&UNK_10f4b9d25);
  func_0x0001005e6fec(0x4290);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_290,&UNK_10f4b9d5e);
  func_0x0001005e6fec(0x42c0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_260,&UNK_10f4b9d96);
  func_0x0001005e6fec(0x42f0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_230,&UNK_10f4b9dc4);
  func_0x0001005e6fec(0x4320);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_200,&UNK_10f4b9dfb);
  func_0x0001005e6fec(0x4350);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1d0,&UNK_10f4b9e33);
  func_0x0001005e6fec(0x4380);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_1a0,&UNK_10f4b9e6a);
  func_0x0001005e6fec(0x43b0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_170,&UNK_10f4b9e9f);
  func_0x0001005e6fec(0x43e0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_140,&UNK_10f4b9ed2);
  func_0x0001005e6fec(0x4410);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_110,&UNK_10f4b9f08);
  func_0x0001005e6fec(0x4440);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_e0,&UNK_10f4b9f39);
  func_0x0001005e6fec(0x4470);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_b0,&UNK_10f4b9f6b);
  func_0x0001005e6fec(0x44a0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_80,&UNK_10f4b9fa2);
  func_0x0001005e6fec(0x44d0);
  func_0x0001005e6fe4();
  func_0x0001005e6fe4(auStack_50,&UNK_10f4b9fd4);
  puVar1 = auStack_4538;
  FUN_1000e3098(&uStack_4580,puVar1,0x2e0);
  extraout_x8[1] = uStack_4548;
  *extraout_x8 = uStack_4550;
  extraout_x8[2] = uStack_4540;
  uStack_4548 = 0;
  uStack_4540 = 0;
  extraout_x8[4] = uStack_4560;
  extraout_x8[3] = uStack_4568;
  extraout_x8[5] = uStack_4558;
  uStack_4568 = 0;
  uStack_4560 = 0;
  uStack_4558 = 0;
  uStack_4550 = 0;
  extraout_x8[7] = uStack_4578;
  extraout_x8[6] = uStack_4580;
  extraout_x8[8] = uStack_4570;
  uStack_4578 = 0;
  uStack_4570 = 0;
  uStack_4580 = 0;
  FUN_1000e30f4(&uStack_4580);
  puVar2 = auStack_50;
  lVar4 = -0x4500;
  do {
    func_0x000107c60ca0(puVar2);
    puVar2 = puVar2 + -0x18;
    lVar4 = lVar4 + 0x18;
  } while (lVar4 != 0);
  func_0x000107c60ca0(&uStack_4568);
  puVar3 = &uStack_4550;
  func_0x000107c60ca0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar3;
  }
  func_0x000107c60e78();
  puVar2 = auStack_50;
  lVar4 = -0x4500;
  do {
    func_0x000107c60ca0(puVar2);
    puVar2 = puVar2 + -0x18;
    lVar4 = lVar4 + 0x18;
  } while (lVar4 != 0);
  func_0x000107c60ca0(&uStack_4568);
  func_0x000107c60ca0(&uStack_4550);
  func_0x000107c60bd8(puVar3);
  func_0x00010002b82c(0);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50(0,puVar3,puVar1);
  return (undefined8 *)0x0;
}



/* Entry: 1005e6fd0; end: 1005e7037;  */

void FUN_1005e6fd0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c();
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 1005e7038; end: 1005e706f;  */

bool FUN_1005e7038(uint param_1,uint param_2)

{
  param_1 = param_1 & 0xff;
  func_0x000107c60e80(param_1);
  param_2 = param_2 & 0xff;
  func_0x000107c60e80(param_2);
  return param_1 == param_2;
}



/* Entry: 1005e7070; end: 1005e715f;  */

undefined4
FUN_1005e7070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [80];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long alStack_70 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_60 = param_1;
  uStack_58 = param_2;
  uStack_50 = param_3;
  uStack_48 = param_4;
  FUN_100100ed0(alStack_70);
  if (alStack_70[0] != 0) {
    if (param_6 == 0) {
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c39820(&uStack_90);
    }
    FUN_100060b18(auStack_f8,&uStack_50);
    uVar2 = uStack_80;
    uVar1 = uStack_90;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    FUN_10011c010(uVar2,uVar1);
    func_0x00010011c04c();
    puVar3 = &uStack_60;
    func_0x0001005e7250(puVar3,alStack_70,auStack_e0);
    func_0x00010011c87c();
    FUN_100100fec(&uStack_90);
    if (((ulong)puVar3 >> 0x20 & 1) != 0) {
      uVar4 = SUB84(puVar3,0);
      goto LAB_1005e7114;
    }
  }
  uVar4 = *param_5;
LAB_1005e7114:
  FUN_1000df75c(alStack_70);
  return uVar4;
}



/* Entry: 1005e7160; end: 1005e7197;  */

void FUN_1005e7160(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack_14;
  
  uStack_14 = param_1;
  FUN_1005e7070(0x20,1,param_2,param_3,&uStack_14,0);
  return;
}



/* Entry: 1005e7198; end: 1005e721b;  */

ulong FUN_1005e7198(void)

{
  ulong unaff_x21;
  
  func_0x00010011a8ac();
  FUN_10011a944();
  FUN_1001010e4();
  func_0x000107c61180();
  func_0x000107c44234();
  func_0x000107c61180();
  FUN_10011b4b4();
  FUN_1005e7610(unaff_x21);
  FUN_10011485c();
  func_0x00010011b62c();
  return unaff_x21 & 0xffffffffff;
}



/* Entry: 1005e721c; end: 1005e7267;  */

ulong FUN_1005e721c(ulong *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  code *pcVar2;
  
  pcVar2 = (code *)*param_1;
  plVar1 = (long *)(*param_2 + ((long)param_1[1] >> 1));
  if ((param_1[1] & 1) != 0) {
    pcVar2 = *(code **)(*plVar1 + ((ulong)pcVar2 & 0xffffffff));
  }
  (*pcVar2)(plVar1,param_3);
  return (ulong)plVar1 & 0xffffffffff;
}



/* Entry: 1005e7268; end: 1005e72f3; -[SCCircumstanceEngineConfigurationMashaller getRealValue:] */

void FUN_1005e7268(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c5c64c();
  if (lVar1 == 0xc) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_3;
    FUN_100101430(param_3);
    func_0x000107c61180();
    func_0x000107c436ec(uVar2,param_2,lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  else {
    uVar2 = 0;
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1005e72f4; end: 1005e7447; -[SCCircumstanceEngineConfiguration floatValueForKey:] */

void FUN_1005e72f4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c4a8c4(param_3);
  func_0x000107c61180();
  func_0x000107c4baac(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  uVar2 = param_3;
  func_0x000107c5c64c();
  puVar3 = PTR_PTR_1126dec58;
  if (uVar2 == 0xc) {
    func_0x000107c61174(param_3);
    func_0x000107c61158(puVar3);
    uVar4 = param_3;
    func_0x000107c6115c(param_3,puVar3);
    uVar2 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    func_0x000107c61174(uVar2);
    func_0x000107c61170(param_3);
    func_0x000107c3b834(param_1);
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c4a8c4(uVar2);
    func_0x000107c61180();
    uVar5 = uVar2;
    func_0x000107c42e88(uVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    lVar6 = param_1;
    func_0x000107c436e8(param_1);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(param_1);
  }
  else {
    lVar6 = 0;
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1005e7448; end: 1005e74cb; -[SCLazyCircumstanceEngineProxy floatValueForConfigKeySync:featureProvidedSignals:] */

void FUN_1005e7448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3b5e8(param_1);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c436e8();
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1005e74cc; end: 1005e7547; -[SCCircumstanceEngine floatValueForConfigKeySync:featureProvidedSignals:] */

void FUN_1005e74cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3ade8(param_1,param_2,param_3,3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x000107c436e8(uVar1,param_2,param_3,param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1005e7548; end: 1005e75cf; -[SCCircumstanceEngineConfigProvider floatValueForConfigKeySync:featureProvidedSignals:] */

void FUN_1005e7548(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x000107c3c078();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x000107c436dc(lVar1);
    func_0x000107c4d958(puVar2);
    func_0x000107c61180();
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1005e75d0; end: 1005e760f;  */

undefined8 FUN_1005e75d0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  func_0x000107c436dc(param_2);
  FUN_1005e7630();
  return param_1;
}



/* Entry: 1005e7610; end: 1005e762f;  */

ulong FUN_1005e7610(uint param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    FUN_1005e75d0();
    uVar1 = (ulong)param_1 | 0x100000000;
  }
  return uVar1;
}



/* Entry: 1005e7630; end: 1005e7647;  */

void FUN_1005e7630(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1005e7648; end: 1005e76cb;  */

undefined8 FUN_1005e7648(undefined8 param_1)

{
  int iVar1;
  
  if ((bRam0000000113374c48 & 1) == 0) {
    iVar1 = 0x13374c48;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_1003ba188();
      uRam0000000113374c40 = param_1;
      func_0x000107c60e4c(0x113374c48);
    }
  }
  return uRam0000000113374c40;
}



/* Entry: 1005e76cc; end: 1005e771b;  */

undefined8 * FUN_1005e76cc(undefined8 *param_1)

{
  undefined **ppuVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  ppuVar1 = &PTR_DAT_110ced7c0;
  FUN_1005e7648();
  param_1[5] = ppuVar1;
  return param_1;
}



/* Entry: 1005e771c; end: 1005e774b;  */

void FUN_1005e771c(void)

{
  return;
}



/* Entry: 1005e774c; end: 1005e7773;  */

void FUN_1005e774c(void)

{
  FUN_100100d8c();
  FUN_100100dc8(0x30);
  FUN_1005e782c();
  return;
}



/* Entry: 1005e7774; end: 1005e782b;  */

void FUN_1005e7774(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined ***pppuVar1;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  
  FUN_1005e774c(&lStack_38,param_2,param_3,*(undefined8 *)(param_4 + 0x10),
                *(undefined8 *)(param_4 + 0x18));
  if (lStack_38 == lStack_30) {
    *param_1 = 0;
    param_1[0x30] = 0;
  }
  else {
    ppuStack_68 = &PTR_DAT_110cfb000;
    uStack_60 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_40 = 0;
    uStack_48 = 0;
    pppuVar1 = &ppuStack_68;
    FUN_10006369c(pppuVar1,lStack_38,(int)lStack_30 - (int)lStack_38);
    if (((ulong)pppuVar1 & 1) == 0) {
      *param_1 = 0;
      param_1[0x30] = 0;
    }
    else {
      func_0x000107c30020(param_1,&ppuStack_68);
    }
    func_0x000107c30530(&ppuStack_68);
  }
  FUN_100100fec(&lStack_38);
  return;
}



/* Entry: 1005e782c; end: 1005e790f;  */

void FUN_1005e782c(undefined8 *param_1)

{
  long *in_x4;
  long in_x5;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  char cStack_108;
  undefined1 auStack_e8 [104];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_60;
  
  func_0x000100100dd8();
  if (lStack_60 != 0) {
    if (in_x5 == 0) {
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x000107c3981c();
    }
    func_0x000100100f7c();
    func_0x000100100f88();
    func_0x000107c60ca0(auStack_e8);
    FUN_100101020();
    FUN_1005e7910();
    if (cStack_108 == '\x01') {
      param_1[1] = uStack_118;
      *param_1 = uStack_120;
      param_1[2] = uStack_110;
      uStack_118 = 0;
      uStack_110 = 0;
      uStack_120 = 0;
      FUN_1002a2294(&uStack_120);
      FUN_10011491c();
      FUN_10011494c();
      goto LAB_10011495c;
    }
    FUN_1002a2294(&uStack_120);
    FUN_10011491c();
    FUN_10011494c();
  }
  func_0x0001078dbb6c(param_1,*in_x4,*in_x4 + in_x4[1]);
LAB_10011495c:
  func_0x000100114954();
  return;
}



/* Entry: 1005e7910; end: 1005e7947;  */

void FUN_1005e7910(ulong *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar1 = (long *)(*param_2 + ((long)param_1[1] >> 1));
  if ((param_1[1] & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001005e792c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_3);
  return;
}



/* Entry: 1005e7948; end: 1005e7a1b;  */

bool FUN_1005e7948(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint unaff_w19;
  long unaff_x20;
  undefined8 auStack_68 [4];
  undefined1 auStack_48 [24];
  
  func_0x0001005e793c();
  FUN_10007847c(auStack_48,&UNK_10f4d3572);
  uVar1 = 0;
  func_0x000107c60e20();
  FUN_1005e7a28();
  auStack_68[0] = 0;
  FUN_1005ebbe4(unaff_x20 + 0x20);
  FUN_1005ec58c(auStack_68);
  FUN_1005ec684(auStack_68,*(undefined8 *)(unaff_x20 + 0x20));
  puVar2 = auStack_68;
  FUN_1005ec99c(puVar2);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  FUN_1005ecb04(auStack_68);
  FUN_100078bd8(auStack_48);
  return (int)unaff_w19 < 1 || (long)(ulong)unaff_w19 <= (long)puVar2;
}



/* Entry: 1005e7a1c; end: 1005e7a27;  */

void FUN_1005e7a1c(void)

{
  return;
}



/* Entry: 1005e7a28; end: 1005eb403;  */

void FUN_1005e7a28(long param_1)

{
  undefined8 ***pppuVar1;
  long extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 **ppuStack_78;
  undefined8 uStack_70;
  char cStack_61;
  
  FUN_1005e7a1c();
  FUN_1005eb430();
  FUN_1005eb488(param_1 + 0x78);
  FUN_1005eb4b4(&UNK_10f4d58b0);
  func_0x0001005eb4c0();
  func_0x0001005eb5dc();
  func_0x0001005eb5f4(unaff_x19 + 0xf0);
  func_0x0001005eb600();
  *(undefined ***)(unaff_x19 + 0xf0) = &PTR_DAT_110a7cbc0;
  ppuStack_78 = (undefined8 **)&UNK_10f4d58c0;
  uStack_70 = 0x26;
  *(undefined8 *)(unaff_x19 + 0x178) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x188) = 0;
  *(undefined8 *)(unaff_x19 + 0x180) = 0;
  *(undefined8 *)(unaff_x19 + 0x198) = 0;
  *(undefined8 *)(unaff_x19 + 400) = 0;
  *(undefined8 *)(unaff_x19 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x19 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x19 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x19 + 0x1b8) = unaff_x20;
  FUN_100060b18(unaff_x19 + 0x1c0,&ppuStack_78);
  *(long *)(unaff_x19 + 0x1d8) = unaff_x19 + 0x1d8;
  *(long *)(unaff_x19 + 0x1e0) = unaff_x19 + 0x1d8;
  *(undefined8 *)(unaff_x19 + 0x1e8) = 0;
  FUN_1005eb4b4(&UNK_10f4d58e7);
  func_0x0001005eb4c0();
  func_0x0001005eb5dc();
  func_0x0001005eb5f4(unaff_x19 + 0x1f0);
  func_0x0001005eb600();
  *(undefined ***)(unaff_x19 + 0x1f0) = &PTR_DAT_110a7cc00;
  FUN_10054bfa4(unaff_x19 + 0x278);
  FUN_1005eb608(unaff_x19 + 0x300);
  FUN_1005eb608(unaff_x19 + 0x378);
  FUN_1005eb608(unaff_x19 + 0x3f0);
  FUN_1005eb4b4(&UNK_10f4d5b33);
  FUN_1005eb634();
  func_0x0001005eb5dc();
  func_0x0001005eb5f4(unaff_x19 + 0x468);
  func_0x0001005eb600();
  *(undefined ***)(unaff_x19 + 0x468) = &PTR_DAT_110a7cc40;
  func_0x0001005eb63c(unaff_x19 + 0x4f0);
  FUN_1005eb644(unaff_x19 + 0x578);
  FUN_1005eb644(unaff_x19 + 0x5f0);
  FUN_1005eb67c(unaff_x19 + 0x668);
  FUN_10054bfa4(unaff_x19 + 0x6f0);
  FUN_10054bfa4(unaff_x19 + 0x778);
  FUN_1005eb718(unaff_x19 + 0x800);
  FUN_1005eb718(unaff_x19 + 0x878);
  FUN_1005eb718(unaff_x19 + 0x8f0);
  FUN_1005eb790(unaff_x19 + 0x968);
  FUN_1005eb790(unaff_x19 + 0x9e0);
  FUN_1005eb790(unaff_x19 + 0xa58);
  FUN_1005eb790(unaff_x19 + 0xad0);
  FUN_1005eb790(unaff_x19 + 0xb48);
  FUN_1005eb790(unaff_x19 + 0xbc0);
  FUN_1005eb790(unaff_x19 + 0xc38);
  FUN_1005eb790(unaff_x19 + 0xcb0);
  FUN_1005eb790(unaff_x19 + 0xd28);
  FUN_1005eb790(unaff_x19 + 0xda0);
  FUN_1005eb790(unaff_x19 + 0xe18);
  FUN_1005eb790(unaff_x19 + 0xe90);
  FUN_1005eb790(unaff_x19 + 0xf08);
  FUN_1005eb7bc(unaff_x19 + 0xf80);
  FUN_1005eb790(unaff_x19 + 0xff8);
  FUN_1005eb790(unaff_x19 + 0x1070);
  ppuStack_78 = (undefined8 **)&UNK_10f4d8cc4;
  uStack_70 = 0xaf;
  *(undefined8 *)(unaff_x19 + 0x10e8) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x10f8) = 0;
  *(undefined8 *)(unaff_x19 + 0x10f0) = 0;
  *(undefined8 *)(unaff_x19 + 0x1108) = 0;
  *(undefined8 *)(unaff_x19 + 0x1100) = 0;
  *(undefined8 *)(unaff_x19 + 0x1118) = 0;
  *(undefined8 *)(unaff_x19 + 0x1110) = 0;
  *(undefined8 *)(unaff_x19 + 0x1120) = 0;
  *(undefined8 *)(unaff_x19 + 0x1128) = unaff_x20;
  func_0x0001005eb7c8(0x1130);
  *(long *)(unaff_x19 + 0x1148) = unaff_x19 + 0x1148;
  *(long *)(unaff_x19 + 0x1150) = unaff_x19 + 0x1148;
  *(undefined8 *)(unaff_x19 + 0x1158) = 0;
  func_0x0001005eb7d4();
  FUN_1005eb7e0();
  FUN_1005eb790(unaff_x19 + 0x11d8);
  FUN_1005eb80c(0x1250);
  FUN_1005eb790();
  FUN_1005eb7bc(unaff_x19 + 0x12c8);
  FUN_1005eb790(unaff_x19 + 0x1340);
  func_0x0001005eb7d4();
  FUN_1005eb790();
  FUN_1005eb80c(0x1430);
  FUN_10054b908();
  ppuStack_78 = (undefined8 **)&UNK_10f4d9a58;
  uStack_70 = 0x265;
  *(undefined8 *)(unaff_x19 + 0x14a8) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x14b8) = 0;
  *(undefined8 *)(unaff_x19 + 0x14b0) = 0;
  *(undefined8 *)(unaff_x19 + 0x14c8) = 0;
  *(undefined8 *)(unaff_x19 + 0x14c0) = 0;
  *(undefined8 *)(unaff_x19 + 0x14d8) = 0;
  *(undefined8 *)(unaff_x19 + 0x14d0) = 0;
  *(undefined8 *)(unaff_x19 + 0x14e0) = 0;
  *(undefined8 *)(unaff_x19 + 0x14e8) = unaff_x20;
  func_0x0001005eb7c8(0x14f0);
  *(long *)(unaff_x19 + 0x1508) = unaff_x19 + 0x1508;
  *(long *)(unaff_x19 + 0x1510) = unaff_x19 + 0x1508;
  *(undefined8 *)(unaff_x19 + 0x1518) = 0;
  FUN_1005eb80c(0x1520);
  FUN_1005eb790();
  FUN_1005eb80c(0x1598);
  FUN_1005eb790();
  FUN_1005eb80c(0x1610);
  FUN_1005eb790();
  FUN_1005eb80c(0x1688);
  FUN_1005eb790();
  FUN_1005eb80c(0x1700);
  FUN_1005eb790();
  FUN_1005eb80c(0x1778);
  FUN_1005eb790();
  FUN_1005eb80c(0x17f0);
  FUN_1005eb430();
  FUN_1005eb80c(0x1868);
  FUN_1005eb430();
  FUN_1005eb80c(0x18e0);
  FUN_1005eb430();
  FUN_1005eb80c(0x1958);
  FUN_10054b908();
  FUN_1005eb80c(0x19d0);
  FUN_1005eb790();
  FUN_1005eb80c(0x1a48);
  FUN_1005eb430();
  FUN_1005eb80c(0x1ac0);
  FUN_1005eb790();
  FUN_1005eb80c(0x1b38);
  FUN_1005eb790();
  FUN_1005eb80c(0x1bb0);
  FUN_1005eb430();
  FUN_1005eb80c(0x1c28);
  FUN_1005eb430();
  FUN_1005eb80c(0x1ca0);
  FUN_1005eb430();
  FUN_1005eb80c(0x1d18);
  FUN_1005eb430();
  FUN_1005eb80c(0x1d90);
  FUN_1005eb790();
  FUN_1005eb80c(0x1e08);
  FUN_1005eb818();
  FUN_1005eb80c(0x1e80);
  FUN_1005eb430();
  FUN_1005eb80c(0x1ef8);
  FUN_1005eb430();
  FUN_1005eb80c(0x1f70);
  FUN_1005eb430();
  FUN_1005eb80c(0x1fe8);
  FUN_1005eb790();
  FUN_1005eb80c(0x2060);
  FUN_1005eb818();
  FUN_1005eb80c(0x20d8);
  FUN_1005eb790();
  FUN_1005eb80c(0x2150);
  FUN_1005eb790();
  FUN_1005eb80c(0x21c8);
  FUN_1005eb790();
  FUN_1005eb80c(0x2240);
  FUN_1005eb790();
  FUN_1005eb80c(0x22b8);
  FUN_1005eb790();
  FUN_1005eb80c(0x2330);
  FUN_1005eb790();
  FUN_1005eb80c(0x23a8);
  FUN_1005eb790();
  FUN_1005eb80c(0x2420);
  FUN_10054bfa4();
  FUN_1005eb80c(0x24a8);
  FUN_10054bfa4();
  FUN_1005eb80c(0x2530);
  FUN_10054bfa4();
  FUN_1005eb80c(0x25b8);
  FUN_10054bfa4();
  FUN_1005eb80c(0x2640);
  FUN_1005eb430();
  FUN_1005eb80c(0x26b8);
  FUN_1005eb790();
  FUN_1005eb80c(0x2730);
  FUN_10054b908();
  FUN_1005eb80c(0x27a8);
  FUN_1005eb844();
  FUN_1005eb80c(0x2820);
  FUN_1005eb844();
  FUN_1005eb80c(0x2898);
  FUN_1005eb844();
  ppuStack_78 = (undefined8 **)&UNK_10f4ded0b;
  uStack_70 = 0x210;
  *(undefined8 *)(unaff_x19 + 0x2910) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x2948) = 0;
  FUN_1005eb870(unaff_x19 + 0x2918);
  *(undefined8 *)(unaff_x19 + 0x2950) = unaff_x20;
  func_0x0001005eb7c8(0x2958);
  *(long *)(unaff_x19 + 0x2970) = unaff_x19 + 0x2970;
  *(long *)(unaff_x19 + 0x2978) = unaff_x19 + 0x2970;
  *(undefined8 *)(unaff_x19 + 0x2980) = 0;
  FUN_1005eb4b4();
  FUN_1005eb4c8();
  func_0x0001005eb5dc();
  func_0x0001005eb5f4(unaff_x19 + 0x2988);
  func_0x0001005eb600();
  *(undefined ***)(unaff_x19 + 0x2988) = &PTR_DAT_110a7cc80;
  func_0x0001005eb880(unaff_x19 + 0x2a10);
  FUN_1005eb80c(0x2a98);
  FUN_10054bfa4();
  FUN_1005eb80c(0x2b20);
  FUN_1005eb888();
  FUN_1005eb80c(0x2b98);
  FUN_1005eb8b4();
  FUN_1005eb80c(0x2c10);
  FUN_1005eb888();
  FUN_1005eb80c(0x2c88);
  FUN_1005eb888();
  FUN_1005eb80c(0x2d00);
  FUN_1005eb8e0();
  ppuStack_78 = (undefined8 **)&UNK_10f4df50e;
  uStack_70 = 0x1f6;
  *(undefined8 *)(unaff_x19 + 0x2d78) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x2d88) = 0;
  *(undefined8 *)(unaff_x19 + 0x2d80) = 0;
  *(undefined8 *)(unaff_x19 + 0x2d98) = 0;
  *(undefined8 *)(unaff_x19 + 0x2d90) = 0;
  *(undefined8 *)(unaff_x19 + 0x2da8) = 0;
  *(undefined8 *)(unaff_x19 + 0x2da0) = 0;
  *(undefined8 *)(unaff_x19 + 0x2db0) = 0;
  *(undefined8 *)(unaff_x19 + 0x2db8) = unaff_x20;
  func_0x0001005eb7c8(0x2dc0);
  *(long *)(unaff_x19 + 0x2dd8) = unaff_x19 + 0x2dd8;
  *(long *)(unaff_x19 + 0x2de0) = unaff_x19 + 0x2dd8;
  *(undefined8 *)(unaff_x19 + 0x2de8) = 0;
  FUN_1005eb80c(0x2df0);
  FUN_1005eb8b4();
  FUN_1005eb80c(0x2e68);
  FUN_1005eb90c();
  FUN_1005eb80c(12000);
  FUN_1005eb90c();
  FUN_1005eb80c(0x2f58);
  FUN_10054bfa4();
  FUN_1005eb80c(0x2fe0);
  FUN_10054bfa4();
  FUN_1005eb80c(0x3068);
  FUN_10054bfa4();
  FUN_1005eb80c(0x30f0);
  FUN_10054bfa4();
  FUN_1005eb80c(0x3178);
  FUN_10054bfa4();
  FUN_1005eb80c(0x3200);
  FUN_10054bfa4();
  FUN_1005eb80c(0x3288);
  FUN_10054bfa4();
  FUN_1005eb80c(0x3310);
  FUN_10054bfa4();
  FUN_1005eb80c(0x3398);
  FUN_1005eb888();
  FUN_1005eb80c(0x3410);
  FUN_1005eb8e0();
  FUN_1005eb80c(0x3488);
  FUN_1005eb938();
  FUN_1005eb4b4(&UNK_10f4e035d);
  FUN_1005eb4c8();
  func_0x0001005eb5dc();
  func_0x0001005eb5f4(unaff_x19 + 0x3500);
  func_0x0001005eb600();
  *(undefined ***)(unaff_x19 + 0x3500) = &PTR_DAT_110a7ccc0;
  FUN_1005eb7e0(unaff_x19 + 0x3588);
  ppuStack_78 = (undefined8 **)&UNK_10f4e03c3;
  uStack_70 = 0x385;
  *(undefined8 *)(unaff_x19 + 0x3600) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x3638) = 0;
  FUN_1005eb870(unaff_x19 + 0x3608);
  *(undefined8 *)(unaff_x19 + 0x3640) = unaff_x20;
  func_0x0001005eb7c8(0x3648);
  *(long *)(unaff_x19 + 0x3660) = unaff_x19 + 0x3660;
  *(long *)(unaff_x19 + 0x3668) = unaff_x19 + 0x3660;
  ppuStack_78 = (undefined8 **)&UNK_10f4e0749;
  uStack_70 = 0xc4;
  *(undefined8 *)(unaff_x19 + 0x3678) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x3670) = 0;
  uVar2 = 0;
  uVar3 = 0;
  *(undefined8 *)(unaff_x19 + 0x3688) = 0;
  *(undefined8 *)(unaff_x19 + 0x3680) = 0;
  *(undefined8 *)(unaff_x19 + 0x3698) = 0;
  *(undefined8 *)(unaff_x19 + 0x3690) = 0;
  *(undefined8 *)(unaff_x19 + 0x36a8) = 0;
  *(undefined8 *)(unaff_x19 + 0x36a0) = 0;
  *(undefined8 *)(unaff_x19 + 14000) = 0;
  *(undefined8 *)(unaff_x19 + 0x36b8) = unaff_x20;
  func_0x0001005eb7c8(0x36c0);
  *(long *)(unaff_x19 + 0x36d8) = unaff_x19 + 0x36d8;
  *(long *)(unaff_x19 + 0x36e0) = unaff_x19 + 0x36d8;
  FUN_1005eb964(&UNK_10f4e080e);
  *(undefined8 *)(unaff_x19 + 0x36f0) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x36e8) = uVar2;
  FUN_1005eb870(unaff_x19 + 0x36f8);
  *(undefined8 *)(unaff_x19 + 0x3728) = 0;
  *(undefined8 *)(unaff_x19 + 0x3730) = unaff_x20;
  func_0x0001005eb7c8(0x3738);
  *(long *)(unaff_x19 + 0x3750) = unaff_x19 + 0x3750;
  *(long *)(unaff_x19 + 0x3758) = unaff_x19 + 0x3750;
  *(undefined8 *)(unaff_x19 + 0x3760) = 0;
  FUN_1005eb80c(0x3768);
  FUN_10054bfa4();
  FUN_1005eb80c(0x37f0);
  FUN_10054bfa4();
  FUN_1005eb80c(0x3878);
  FUN_10054bfa4();
  FUN_1005eb80c(0x3900);
  FUN_1005eb970();
  FUN_1005eb80c(0x3978);
  FUN_1005eb970();
  FUN_1005eb4b4();
  func_0x0001005eb4c0();
  func_0x0001005eb5dc();
  func_0x0001005eb5f4(unaff_x19 + 0x39f0);
  func_0x0001005eb600();
  *(undefined ***)(unaff_x19 + 0x39f0) = &PTR_DAT_110a7cd00;
  FUN_10054bfa4(unaff_x19 + 0x3a78);
  FUN_1005eb4b4();
  FUN_1005eb99c();
  func_0x0001005eb5dc();
  func_0x0001005eb5f4(unaff_x19 + 0x3b00);
  func_0x0001005eb600();
  *(undefined ***)(unaff_x19 + 0x3b00) = &PTR_DAT_110a7cd40;
  ppuStack_78 = (undefined8 **)&UNK_10f4e0b68;
  uStack_70 = 0x46;
  *(undefined8 *)(unaff_x19 + 0x3b88) = 0x32aaaba7;
  uVar2 = 0;
  uVar3 = 0;
  *(undefined8 *)(unaff_x19 + 0x3b98) = 0;
  *(undefined8 *)(unaff_x19 + 0x3b90) = 0;
  *(undefined8 *)(unaff_x19 + 0x3ba8) = 0;
  *(undefined8 *)(unaff_x19 + 0x3ba0) = 0;
  *(undefined8 *)(unaff_x19 + 0x3bb8) = 0;
  *(undefined8 *)(unaff_x19 + 0x3bb0) = 0;
  *(undefined8 *)(unaff_x19 + 0x3bc0) = 0;
  *(undefined8 *)(unaff_x19 + 0x3bc8) = unaff_x20;
  func_0x0001005eb7c8(0x3bd0);
  *(long *)(unaff_x19 + 0x3be8) = unaff_x19 + 0x3be8;
  *(long *)(unaff_x19 + 0x3bf0) = unaff_x19 + 0x3be8;
  FUN_1005eb964(&UNK_10f4e0baf);
  *(undefined8 *)(unaff_x19 + 0x3c00) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x3bf8) = uVar2;
  FUN_1005eb870(unaff_x19 + 0x3c08);
  *(undefined8 *)(unaff_x19 + 0x3c38) = 0;
  *(undefined8 *)(unaff_x19 + 0x3c40) = unaff_x20;
  func_0x0001005eb7c8(0x3c48);
  *(long *)(unaff_x19 + 0x3c60) = unaff_x19 + 0x3c60;
  *(long *)(unaff_x19 + 0x3c68) = unaff_x19 + 0x3c60;
  *(undefined8 *)(unaff_x19 + 0x3c70) = 0;
  FUN_1005eb80c(0x3c78);
  func_0x0001005eb63c();
  FUN_1005eb80c(0x3d00);
  FUN_1005eb9a4();
  FUN_1005eb80c(0x3d78);
  FUN_1005eb9a4();
  FUN_1005eb4b4();
  FUN_1005eb99c();
  func_0x0001005eb5dc();
  FUN_1005eb9d0();
  func_0x0001005eb600();
  *(undefined ***)(unaff_x19 + 0x3df0) = &PTR_DAT_110a7cd80;
  FUN_1005eb80c(0x3e78);
  FUN_10054bfa4();
  FUN_1005eb80c(0x3f00);
  FUN_10054bfa4();
  FUN_1005eb80c(0x3f88);
  FUN_1005eb790();
  FUN_1005eb9e0(unaff_x19 + 0x4000);
  ppuStack_78 = (undefined8 **)&UNK_10f4e10c8;
  uStack_70 = 0x41;
  *(undefined8 *)(unaff_x19 + 0x4078) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x4088) = 0;
  *(undefined8 *)(unaff_x19 + 0x4080) = 0;
  *(undefined8 *)(unaff_x19 + 0x4098) = 0;
  *(undefined8 *)(unaff_x19 + 0x4090) = 0;
  *(undefined8 *)(unaff_x19 + 0x40a8) = 0;
  *(undefined8 *)(unaff_x19 + 0x40a0) = 0;
  *(undefined8 *)(unaff_x19 + 0x40b0) = 0;
  *(undefined8 *)(unaff_x19 + 0x40b8) = unaff_x20;
  func_0x0001005eb7c8(0x40c0);
  *(long *)(unaff_x19 + 0x40d8) = unaff_x19 + 0x40d8;
  *(long *)(unaff_x19 + 0x40e0) = unaff_x19 + 0x40d8;
  *(undefined8 *)(unaff_x19 + 0x40e8) = 0;
  FUN_1005eb4b4();
  FUN_1005eb4c8();
  func_0x0001005eb5dc();
  FUN_1005eb9d0();
  func_0x0001005eb600();
  *(undefined ***)(unaff_x19 + 0x40f0) = &PTR_DAT_110a7cdc0;
  FUN_1005eb80c(0x4178);
  FUN_1005eba0c();
  FUN_1005eb80c(0x41f0);
  FUN_1005eba0c();
  ppuStack_78 = (undefined8 **)&UNK_10f4e11b8;
  uStack_70 = 0x10f;
  *(undefined8 *)(unaff_x19 + 17000) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x4278) = 0;
  *(undefined8 *)(unaff_x19 + 0x4270) = 0;
  *(undefined8 *)(unaff_x19 + 0x4288) = 0;
  *(undefined8 *)(unaff_x19 + 0x4280) = 0;
  *(undefined8 *)(unaff_x19 + 0x4298) = 0;
  *(undefined8 *)(unaff_x19 + 0x4290) = 0;
  *(undefined8 *)(unaff_x19 + 0x42a0) = 0;
  *(undefined8 *)(unaff_x19 + 0x42a8) = unaff_x20;
  func_0x0001005eb7c8(0x42b0);
  *(long *)(unaff_x19 + 0x42c8) = unaff_x19 + 0x42c8;
  *(long *)(unaff_x19 + 0x42d0) = unaff_x19 + 0x42c8;
  *(undefined8 *)(unaff_x19 + 0x42d8) = 0;
  FUN_1005eb4b4();
  FUN_1005eba38();
  func_0x0001005eb5dc();
  FUN_1005eb9d0();
  func_0x0001005eb600();
  *(undefined ***)(unaff_x19 + 0x42e0) = &PTR_DAT_110a7ce00;
  FUN_1005eb80c(0x4368);
  FUN_10054bfa4();
  FUN_1005eb80c(0x43f0);
  FUN_10054bfa4();
  FUN_1005eb80c(0x4478);
  FUN_10054bfa4();
  FUN_1005eb80c(0x4500);
  FUN_1005eb9e0();
  FUN_1005eb80c(0x4578);
  FUN_10054b908();
  FUN_1005eb80c(0x45f0);
  FUN_10054b908();
  FUN_1005eb80c(0x4668);
  FUN_1005eb9e0();
  FUN_1005eb80c(0x46e0);
  FUN_1005eb9e0();
  FUN_1005eb80c(0x4758);
  FUN_1005eb9e0();
  FUN_1005eb80c(0x47d0);
  FUN_1005eb9e0();
  FUN_1005eb80c(0x4848);
  FUN_1005eb9e0();
  FUN_1005eb80c(0x48c0);
  FUN_1005eb9e0();
  FUN_1005eb80c(0x4938);
  FUN_1005eb9e0();
  FUN_1005eb80c(0x49b0);
  FUN_1005eb9e0();
  FUN_1005eb80c(0x4a28);
  FUN_10054b908();
  ppuStack_78 = (undefined8 **)&UNK_10f4e23f5;
  uStack_70 = 0x94;
  *(undefined8 *)(unaff_x19 + 0x4aa0) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x4ad8) = 0;
  FUN_1005eb870(unaff_x19 + 0x4aa8);
  *(undefined8 *)(unaff_x19 + 0x4ae0) = unaff_x20;
  func_0x0001005eb7c8(0x4ae8);
  *(long *)(unaff_x19 + 0x4b00) = unaff_x19 + 0x4b00;
  *(long *)(unaff_x19 + 0x4b08) = unaff_x19 + 0x4b00;
  *(undefined8 *)(unaff_x19 + 0x4b10) = 0;
  FUN_1005eb80c(0x4b18);
  FUN_1005eb9e0();
  FUN_1005eb80c(0x4b90);
  FUN_1005eb9e0();
  ppuStack_78 = (undefined8 **)&UNK_10f4e2667;
  uStack_70 = 0x2ea;
  *(undefined8 *)(unaff_x19 + 0x4c08) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x4c18) = 0;
  *(undefined8 *)(unaff_x19 + 0x4c10) = 0;
  *(undefined8 *)(unaff_x19 + 0x4c28) = 0;
  *(undefined8 *)(unaff_x19 + 0x4c20) = 0;
  *(undefined8 *)(unaff_x19 + 0x4c38) = 0;
  *(undefined8 *)(unaff_x19 + 0x4c30) = 0;
  *(undefined8 *)(unaff_x19 + 0x4c40) = 0;
  *(undefined8 *)(unaff_x19 + 0x4c48) = unaff_x20;
  func_0x0001005eb7c8(0x4c50);
  *(long *)(unaff_x19 + 0x4c68) = unaff_x19 + 0x4c68;
  *(long *)(unaff_x19 + 0x4c70) = unaff_x19 + 0x4c68;
  *(undefined8 *)(unaff_x19 + 0x4c78) = 0;
  FUN_1005eb80c(0x4c80);
  FUN_1005eb9e0();
  FUN_1005eb80c(0x4cf8);
  func_0x0001005eb880();
  FUN_1005eb80c(0x4d80);
  FUN_10054bfa4();
  FUN_1005eb80c(0x4e08);
  FUN_10054bfa4();
  FUN_1005eb80c(0x4e90);
  FUN_10054bfa4();
  FUN_1005eb80c(0x4f18);
  FUN_10054b908();
  FUN_1005eb80c(0x4f90);
  FUN_10054bfa4();
  FUN_1005eb80c(0x5018);
  FUN_1005eba40();
  FUN_1005eb80c(0x5090);
  FUN_1005eba6c();
  ppuStack_78 = (undefined8 **)&UNK_10f4e2caf;
  uStack_70 = 0x62;
  *(undefined8 *)(unaff_x19 + 0x5118) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x5128) = 0;
  *(undefined8 *)(unaff_x19 + 0x5120) = 0;
  *(undefined8 *)(unaff_x19 + 0x5138) = 0;
  *(undefined8 *)(unaff_x19 + 0x5130) = 0;
  *(undefined8 *)(unaff_x19 + 0x5148) = 0;
  *(undefined8 *)(unaff_x19 + 0x5140) = 0;
  *(undefined8 *)(unaff_x19 + 0x5150) = 0;
  *(undefined8 *)(unaff_x19 + 0x5158) = unaff_x20;
  func_0x0001005eb7c8(0x5160);
  *(long *)(unaff_x19 + 0x5178) = unaff_x19 + 0x5178;
  *(long *)(unaff_x19 + 0x5180) = unaff_x19 + 0x5178;
  *(undefined8 *)(unaff_x19 + 0x5188) = 0;
  FUN_1005eb4b4();
  FUN_1005eb4c8();
  func_0x0001005eb5dc();
  FUN_1005eb9d0();
  func_0x0001005eb600();
  *(undefined ***)(unaff_x19 + 0x5190) = &PTR_DAT_110a7ce80;
  FUN_1005eb80c(0x5218);
  FUN_10054bfa4();
  FUN_1005eb80c(0x52a0);
  FUN_10054bfa4();
  ppuStack_78 = (undefined8 **)&UNK_10f4e2d83;
  uStack_70 = 0x67;
  *(undefined8 *)(unaff_x19 + 0x5328) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x5338) = 0;
  *(undefined8 *)(unaff_x19 + 0x5330) = 0;
  *(undefined8 *)(unaff_x19 + 0x5348) = 0;
  *(undefined8 *)(unaff_x19 + 0x5340) = 0;
  *(undefined8 *)(unaff_x19 + 0x5358) = 0;
  *(undefined8 *)(unaff_x19 + 0x5350) = 0;
  *(undefined8 *)(unaff_x19 + 0x5360) = 0;
  *(undefined8 *)(unaff_x19 + 0x5368) = unaff_x20;
  func_0x0001005eb7c8(0x5370);
  *(long *)(unaff_x19 + 0x5388) = unaff_x19 + 0x5388;
  *(long *)(unaff_x19 + 0x5390) = unaff_x19 + 0x5388;
  *(undefined8 *)(unaff_x19 + 0x5398) = 0;
  FUN_1005eb80c(0x53a0);
  FUN_1005eb818();
  ppuStack_78 = (undefined8 **)&UNK_10f4e2e3d;
  uStack_70 = 0x62;
  *(undefined8 *)(unaff_x19 + 0x5418) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x5428) = 0;
  *(undefined8 *)(unaff_x19 + 0x5420) = 0;
  *(undefined8 *)(unaff_x19 + 0x5438) = 0;
  *(undefined8 *)(unaff_x19 + 0x5430) = 0;
  *(undefined8 *)(unaff_x19 + 0x5448) = 0;
  *(undefined8 *)(unaff_x19 + 0x5440) = 0;
  *(undefined8 *)(unaff_x19 + 0x5450) = 0;
  *(undefined8 *)(unaff_x19 + 0x5458) = unaff_x20;
  func_0x0001005eb7c8(0x5460);
  *(long *)(unaff_x19 + 0x5478) = unaff_x19 + 0x5478;
  *(long *)(unaff_x19 + 0x5480) = unaff_x19 + 0x5478;
  *(undefined8 *)(unaff_x19 + 0x5488) = 0;
  FUN_1005eb4b4(&UNK_10f4e2ea0);
  FUN_1005eb634();
  func_0x0001005eb5dc();
  FUN_1005eb9d0();
  func_0x0001005eb600();
  *(undefined ***)(unaff_x19 + 0x5490) = &PTR_DAT_110a7cec0;
  FUN_1005eb4b4();
  FUN_1005eb99c();
  func_0x0001005eb5dc();
  FUN_1005eb9d0();
  func_0x0001005eb600();
  *(undefined ***)(unaff_x19 + 0x5518) = &PTR_DAT_110a7cf00;
  FUN_1005eb4b4();
  FUN_1005eba38();
  func_0x0001005eb5dc();
  FUN_1005eb9d0();
  func_0x0001005eb600();
  *(undefined ***)(unaff_x19 + 0x55a0) = &PTR_DAT_110a7cf40;
  func_0x0001005eb7d4();
  FUN_10054bfa4();
  FUN_1005eb80c(0x56b0);
  FUN_1005ebaf8();
  FUN_1005eb80c(0x5728);
  FUN_1005ebaf8();
  FUN_1005eb4b4();
  FUN_1005eb4c8();
  func_0x0001005eb5dc();
  FUN_1005eb9d0();
  func_0x0001005eb600();
  *(undefined ***)(unaff_x19 + 0x57a0) = &PTR_DAT_110a7cf80;
  FUN_1005eb80c(0x5828);
  FUN_10054bfa4();
  FUN_1005eb80c(0x58b0);
  FUN_10054bfa4();
  FUN_1005eb80c(0x5938);
  FUN_10054bfa4();
  FUN_1005eb4b4();
  func_0x0001005eb4c0();
  func_0x0001005eb5dc();
  FUN_1005eb9d0();
  func_0x0001005eb600();
  *(undefined ***)(unaff_x19 + 0x59c0) = &PTR_DAT_110a7cfc0;
  FUN_1005eb80c(0x5a48);
  FUN_10054bfa4();
  FUN_1005eb80c(0x5ad0);
  FUN_1005ebb24();
  FUN_1005eb4b4(&UNK_10f4e3220);
  FUN_1005eb634();
  func_0x0001005eb5dc();
  FUN_1005eb9d0();
  func_0x0001005eb600();
  *(undefined ***)(unaff_x19 + 0x5b58) = &PTR_DAT_110a7d000;
  FUN_1005eb80c(0x5be0);
  FUN_10054bfa4();
  FUN_1005eb80c(0x5c68);
  func_0x0001005ebb2c();
  ppuStack_78 = (undefined8 **)&UNK_10f4e32f5;
  uStack_70 = 0x2b5;
  *(undefined8 *)(unaff_x19 + 0x5cf0) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x5d28) = 0;
  FUN_1005eb870(unaff_x19 + 0x5cf8);
  *(undefined8 *)(unaff_x19 + 0x5d30) = unaff_x20;
  func_0x0001005eb7c8(0x5d38);
  *(long *)(unaff_x19 + 0x5d50) = unaff_x19 + 0x5d50;
  *(long *)(unaff_x19 + 0x5d58) = unaff_x19 + 0x5d50;
  *(undefined8 *)(unaff_x19 + 0x5d60) = 0;
  FUN_1005eb80c(0x5d68);
  FUN_1005eb938();
  FUN_1005eb80c(0x5de0);
  FUN_1005ebb34();
  FUN_1005eb80c(0x5e58);
  FUN_1005ebb34();
  FUN_1005eb80c(0x5ed0);
  FUN_1005eb938();
  FUN_1005eb80c(0x5f48);
  FUN_1005eb938();
  FUN_1005eb80c(0x5fc0);
  FUN_1005eb938();
  FUN_1005eb80c(0x6038);
  FUN_1005ebb60();
  FUN_1005eb80c(0x60b0);
  FUN_1005ebb60();
  ppuStack_78 = (undefined8 **)&UNK_10f4e3d0c;
  uStack_70 = 0x51;
  *(undefined8 *)(unaff_x19 + 0x6128) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x6138) = 0;
  *(undefined8 *)(unaff_x19 + 0x6130) = 0;
  *(undefined8 *)(unaff_x19 + 0x6148) = 0;
  *(undefined8 *)(unaff_x19 + 0x6140) = 0;
  *(undefined8 *)(unaff_x19 + 0x6158) = 0;
  *(undefined8 *)(unaff_x19 + 0x6150) = 0;
  *(undefined8 *)(unaff_x19 + 0x6160) = 0;
  *(undefined8 *)(unaff_x19 + 0x6168) = unaff_x20;
  func_0x0001005eb7c8(0x6170);
  *(long *)(unaff_x19 + 0x6188) = unaff_x19 + 0x6188;
  *(long *)(unaff_x19 + 0x6190) = unaff_x19 + 0x6188;
  ppuStack_78 = (undefined8 **)&UNK_10f4e3d5e;
  uStack_70 = 0x4a;
  uVar3 = 0x32aaaba7;
  uVar2 = 0;
  *(undefined8 *)(unaff_x19 + 0x61a0) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x6198) = 0;
  FUN_1005eb870(unaff_x19 + 25000);
  *(undefined8 *)(unaff_x19 + 0x61d8) = 0;
  *(undefined8 *)(unaff_x19 + 0x61e0) = unaff_x20;
  func_0x0001005eb7c8(0x61e8);
  *(long *)(unaff_x19 + 0x6200) = unaff_x19 + 0x6200;
  *(long *)(unaff_x19 + 0x6208) = unaff_x19 + 0x6200;
  FUN_1005eb964(&UNK_10f4e3da9);
  *(undefined8 *)(unaff_x19 + 0x6218) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x6210) = uVar2;
  uVar2 = 0;
  uVar3 = 0;
  *(undefined8 *)(unaff_x19 + 0x6228) = 0;
  *(undefined8 *)(unaff_x19 + 0x6220) = 0;
  *(undefined8 *)(unaff_x19 + 0x6238) = 0;
  *(undefined8 *)(unaff_x19 + 0x6230) = 0;
  *(undefined8 *)(unaff_x19 + 0x6248) = 0;
  *(undefined8 *)(unaff_x19 + 0x6240) = 0;
  *(undefined8 *)(unaff_x19 + 0x6250) = 0;
  *(undefined8 *)(unaff_x19 + 0x6258) = unaff_x20;
  func_0x0001005eb7c8(0x6260);
  *(long *)(unaff_x19 + 0x6278) = unaff_x19 + 0x6278;
  *(long *)(unaff_x19 + 0x6280) = unaff_x19 + 0x6278;
  FUN_1005eb964(&UNK_10f4e3ee4);
  *(undefined8 *)(unaff_x19 + 0x6290) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x6288) = uVar2;
  FUN_1005eb870(unaff_x19 + 0x6298);
  *(undefined8 *)(unaff_x19 + 0x62c8) = 0;
  *(undefined8 *)(unaff_x19 + 0x62d0) = unaff_x20;
  func_0x0001005eb7c8(0x62d8);
  *(long *)(unaff_x19 + 0x62f0) = unaff_x19 + 0x62f0;
  *(long *)(unaff_x19 + 0x62f8) = unaff_x19 + 0x62f0;
  FUN_1005eb964(&UNK_10f4e3f24);
  *(undefined8 *)(unaff_x19 + 0x6308) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x6300) = uVar2;
  uVar2 = 0;
  uVar3 = 0;
  *(undefined8 *)(unaff_x19 + 0x6318) = 0;
  *(undefined8 *)(unaff_x19 + 0x6310) = 0;
  *(undefined8 *)(unaff_x19 + 0x6328) = 0;
  *(undefined8 *)(unaff_x19 + 0x6320) = 0;
  *(undefined8 *)(unaff_x19 + 0x6338) = 0;
  *(undefined8 *)(unaff_x19 + 0x6330) = 0;
  *(undefined8 *)(unaff_x19 + 0x6340) = 0;
  *(undefined8 *)(unaff_x19 + 0x6348) = unaff_x20;
  func_0x0001005eb7c8(0x6350);
  *(long *)(unaff_x19 + 0x6368) = unaff_x19 + 0x6368;
  *(long *)(unaff_x19 + 0x6370) = unaff_x19 + 0x6368;
  FUN_1005eb964(&UNK_10f4e3f6e);
  *(undefined8 *)(unaff_x19 + 0x6380) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x6378) = uVar2;
  FUN_1005eb870(unaff_x19 + 0x6388);
  *(undefined8 *)(unaff_x19 + 0x63b8) = 0;
  *(undefined8 *)(unaff_x19 + 0x63c0) = unaff_x20;
  func_0x0001005eb7c8(0x63c8);
  *(long *)(unaff_x19 + 0x63e0) = unaff_x19 + 0x63e0;
  *(long *)(unaff_x19 + 0x63e8) = unaff_x19 + 0x63e0;
  FUN_1005eb964(&UNK_10f4e3fc0);
  *(undefined8 *)(unaff_x19 + 0x63f8) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x63f0) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x6408) = 0;
  *(undefined8 *)(unaff_x19 + 0x6400) = 0;
  *(undefined8 *)(unaff_x19 + 0x6418) = 0;
  *(undefined8 *)(unaff_x19 + 0x6410) = 0;
  *(undefined8 *)(unaff_x19 + 0x6428) = 0;
  *(undefined8 *)(unaff_x19 + 0x6420) = 0;
  *(undefined8 *)(unaff_x19 + 0x6430) = 0;
  *(undefined8 *)(unaff_x19 + 0x6438) = unaff_x20;
  func_0x0001005eb7c8(0x6440);
  *(long *)(unaff_x19 + 0x6458) = unaff_x19 + 0x6458;
  *(long *)(unaff_x19 + 0x6460) = unaff_x19 + 0x6458;
  *(undefined8 *)(unaff_x19 + 0x6468) = 0;
  FUN_1005eb80c(0x6470);
  FUN_1005ebb34();
  FUN_1005eb80c(0x64e8);
  FUN_1005ebb34();
  FUN_1005eb80c(0x6560);
  FUN_10054bfa4();
  FUN_1005eb80c(0x65e8);
  func_0x0001005eb63c();
  FUN_1005eb80c(0x6670);
  FUN_10054bfa4();
  FUN_1005eb80c(0x66f8);
  FUN_10054bfa4();
  FUN_1005eb80c(0x6780);
  FUN_10054bfa4();
  FUN_1005eb80c(0x6808);
  FUN_10054bfa4();
  FUN_1005eb80c(0x6890);
  FUN_10054bfa4();
  FUN_1005eb80c(0x6918);
  FUN_10054bfa4();
  FUN_1005eb80c(0x69a0);
  FUN_1005ebb60();
  FUN_1005eb80c(0x6a18);
  FUN_1005ebb60();
  FUN_1005eb80c(0x6a90);
  FUN_1005ebb60();
  FUN_1005eb4b4(&UNK_10f4e4e58);
  FUN_1005eba38();
  func_0x0001005eb5dc();
  FUN_1005eb9d0();
  func_0x0001005eb600();
  *(undefined ***)(unaff_x19 + 0x6b08) = &PTR_DAT_110a7d040;
  FUN_1005eb80c(0x6b90);
  FUN_10054bfa4();
  FUN_1005eb80c(0x6c18);
  FUN_10054bfa4();
  FUN_1005eb80c(0x6ca0);
  FUN_10054bfa4();
  FUN_1005eb80c(0x6d28);
  FUN_10054b908();
  FUN_1005eb80c(0x6da0);
  FUN_10054b908();
  FUN_1005eb80c(0x6e18);
  FUN_10054b908();
  FUN_1005eb80c(0x6e90);
  FUN_10054b908();
  FUN_1005eb80c(0x6f08);
  FUN_10054b908();
  FUN_1005eb80c(0x6f80);
  FUN_10054b908();
  FUN_1005eb80c(0x6ff8);
  FUN_1005eb790();
  FUN_1005eb80c(0x7070);
  FUN_10054bfa4();
  FUN_1005eb80c(0x70f8);
  FUN_1005eb430();
  ppuStack_78 = (undefined8 **)&UNK_10f4e582c;
  uStack_70 = 0x46;
  *(undefined8 *)(unaff_x19 + 0x7170) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x71a8) = 0;
  FUN_1005eb870(unaff_x19 + 0x7178);
  *(undefined8 *)(unaff_x19 + 0x71b0) = unaff_x20;
  func_0x0001005eb7c8(0x71b8);
  *(long *)(unaff_x19 + 0x71d0) = unaff_x19 + 0x71d0;
  *(long *)(unaff_x19 + 0x71d8) = unaff_x19 + 0x71d0;
  *(undefined8 *)(unaff_x19 + 0x71e0) = 0;
  FUN_1005eb4b4();
  FUN_1005eb4c8();
  func_0x0001005eb5dc();
  FUN_1005eb9d0();
  func_0x0001005eb600();
  *(undefined ***)(unaff_x19 + 0x71e8) = &PTR_DAT_110a7d080;
  FUN_1005eb80c(0x7270);
  func_0x0001005eb63c();
  ppuStack_78 = (undefined8 **)&UNK_10f4e58d0;
  uStack_70 = 0x9e;
  *(undefined8 *)(unaff_x19 + 0x72f8) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x7308) = 0;
  *(undefined8 *)(unaff_x19 + 0x7300) = 0;
  *(undefined8 *)(unaff_x19 + 0x7318) = 0;
  *(undefined8 *)(unaff_x19 + 0x7310) = 0;
  *(undefined8 *)(unaff_x19 + 0x7328) = 0;
  *(undefined8 *)(unaff_x19 + 0x7320) = 0;
  *(undefined8 *)(unaff_x19 + 0x7330) = 0;
  *(undefined8 *)(unaff_x19 + 0x7338) = unaff_x20;
  func_0x0001005eb7c8(0x7340);
  *(long *)(unaff_x19 + 0x7358) = unaff_x19 + 0x7358;
  *(long *)(unaff_x19 + 0x7360) = unaff_x19 + 0x7358;
  ppuStack_78 = (undefined8 **)&UNK_10f4e596f;
  uStack_70 = 0xa6;
  *(undefined8 *)(unaff_x19 + 0x7370) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x7368) = 0;
  FUN_1005eb870(unaff_x19 + 0x7378);
  *(undefined8 *)(unaff_x19 + 0x73a8) = 0;
  *(undefined8 *)(unaff_x19 + 0x73b0) = unaff_x20;
  func_0x0001005eb7c8(0x73b8);
  *(long *)(unaff_x19 + 0x73d0) = unaff_x19 + 0x73d0;
  *(long *)(unaff_x19 + 0x73d8) = unaff_x19 + 0x73d0;
  *(undefined8 *)(unaff_x19 + 0x73e0) = 0;
  FUN_1005eb80c(0x73e8);
  FUN_1005eb790();
  FUN_1005eb80c(0x7460);
  FUN_1005eb9e0();
  FUN_1005eb80c(0x74d8);
  FUN_10054b908();
  ppuStack_78 = (undefined8 **)&UNK_10f4e5e9a;
  uStack_70 = 0xa0;
  *(undefined8 *)(unaff_x19 + 0x7550) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x7588) = 0;
  FUN_1005eb870(unaff_x19 + 0x7558);
  *(undefined8 *)(unaff_x19 + 0x7590) = unaff_x20;
  func_0x0001005eb7c8(0x7598);
  *(long *)(unaff_x19 + 0x75b0) = unaff_x19 + 0x75b0;
  *(long *)(unaff_x19 + 0x75b8) = unaff_x19 + 0x75b0;
  *(undefined8 *)(unaff_x19 + 0x75c0) = 0;
  FUN_1005eb80c(0x75c8);
  FUN_10054bfa4();
  FUN_1005eb80c(0x7650);
  FUN_1005eb718();
  FUN_1005eb80c(0x76c8);
  FUN_10054bfa4();
  FUN_1005eb80c(0x7750);
  func_0x0001005eb880();
  FUN_1005eb80c(0x77d8);
  FUN_10054bfa4();
  FUN_1005eb80c(0x7860);
  FUN_10054bfa4();
  ppuStack_78 = (undefined8 **)&UNK_10f4e6166;
  uStack_70 = 0x67;
  *(undefined8 *)(unaff_x19 + 0x78e8) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x78f8) = 0;
  *(undefined8 *)(unaff_x19 + 0x78f0) = 0;
  *(undefined8 *)(unaff_x19 + 0x7908) = 0;
  *(undefined8 *)(unaff_x19 + 0x7900) = 0;
  *(undefined8 *)(unaff_x19 + 31000) = 0;
  *(undefined8 *)(unaff_x19 + 0x7910) = 0;
  *(undefined8 *)(unaff_x19 + 0x7920) = 0;
  *(undefined8 *)(unaff_x19 + 0x7928) = unaff_x20;
  func_0x0001005eb7c8(0x7930);
  *(long *)(unaff_x19 + 0x7948) = unaff_x19 + 0x7948;
  *(long *)(unaff_x19 + 0x7950) = unaff_x19 + 0x7948;
  *(undefined8 *)(unaff_x19 + 0x7958) = 0;
  FUN_1005eb80c(0x7960);
  FUN_10054bfa4();
  FUN_1005eb80c(0x79e8);
  FUN_1005eb430();
  ppuStack_78 = (undefined8 **)&UNK_10f4e6334;
  uStack_70 = 0x41;
  *(undefined8 *)(unaff_x19 + 0x7a60) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x7a98) = 0;
  FUN_1005eb870(unaff_x19 + 0x7a68);
  *(undefined8 *)(unaff_x19 + 0x7aa0) = unaff_x20;
  func_0x0001005eb7c8(0x7aa8);
  *(long *)(unaff_x19 + 0x7ac0) = unaff_x19 + 0x7ac0;
  *(long *)(unaff_x19 + 0x7ac8) = unaff_x19 + 0x7ac0;
  *(undefined8 *)(unaff_x19 + 0x7ad0) = 0;
  FUN_1005eb80c(0x7ad8);
  FUN_1005eb790();
  FUN_1005eb80c(0x7b50);
  FUN_1005eb790();
  FUN_1005eb80c(0x7bc8);
  FUN_1005eb790();
  FUN_1005eb80c(0x7c40);
  FUN_1005eb644();
  FUN_1005eb80c(0x7cb8);
  FUN_10054bfa4();
  FUN_1005eb80c(0x7d40);
  FUN_1005eb644();
  FUN_1005eb80c(0x7db8);
  FUN_1005ebb8c();
  FUN_1005eb80c(0x7e30);
  FUN_1005ebb8c();
  FUN_1005eb80c(0x7ea8);
  FUN_1005ebb8c();
  FUN_1005eb80c(0x7f20);
  FUN_1005ebb8c();
  FUN_1005eb80c(0x7f98);
  FUN_1005ebb8c();
  FUN_1005eb80c(0x8010);
  FUN_1005ebb8c();
  FUN_1005eb80c(0x8088);
  FUN_1005ebb8c();
  FUN_1005eb80c(0x8100);
  FUN_1005ebb8c();
  FUN_1005eb80c(0x8178);
  FUN_10054b908();
  FUN_1005eb4c8(&ppuStack_78,&UNK_10f4e7395,0x1e,0x1d);
  pppuVar1 = (undefined8 ***)ppuStack_78;
  if (-1 < cStack_61) {
    pppuVar1 = &ppuStack_78;
  }
  func_0x000107c613d0(pppuVar1);
  FUN_10054bfa4((undefined8 *)(unaff_x19 + 0x81f0));
  func_0x0001005eb600();
  *(undefined8 *)(unaff_x19 + 0x81f0) = &PTR_DAT_110a7d0c0;
  FUN_1005eb80c(0x8278);
  FUN_10054bfa4();
  FUN_1005eb80c(0x8300);
  func_0x0001005ebb2c();
  FUN_1005eb80c(0x8388);
  FUN_10054bfa4();
  FUN_1005eb80c(0x8410);
  FUN_10054bfa4();
  FUN_1005eb80c(0x8498);
  FUN_1005ebb24();
  FUN_1005eb80c(0x8520);
  FUN_1005ebb24();
  FUN_1005eb80c(0x85a8);
  FUN_10054bfa4();
  FUN_1005eb80c(0x8630);
  FUN_10054bfa4();
  FUN_1005eb80c(0x86b8);
  FUN_10054bfa4();
  FUN_1005eb80c(0x8740);
  FUN_10054bfa4();
  FUN_1005eb80c(0x87c8);
  FUN_10054bfa4();
  FUN_1005eb80c(0x8850);
  FUN_1005ebb8c();
  FUN_1005eb80c(0x88c8);
  FUN_1005ebb8c();
  ppuStack_78 = (undefined8 **)&UNK_10f4e7be6;
  uStack_70 = 0x95;
  *(undefined8 *)(unaff_x19 + 0x8940) = 0x32aaaba7;
  FUN_1005eb870(unaff_x19 + 0x8948);
  *(undefined8 *)(extraout_x8 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x8980) = unaff_x20;
  func_0x0001005eb7c8(0x8988);
  *(long *)(unaff_x19 + 0x89a8) = unaff_x19 + 0x89a0;
  *(long *)(unaff_x19 + 0x89a0) = unaff_x19 + 0x89a0;
  *(undefined8 *)(unaff_x19 + 0x89b0) = 0;
  FUN_1005eb80c(0x89b8);
  FUN_10054b908();
  FUN_1005eb80c(0x8a30);
  FUN_10054bfa4();
  ppuStack_78 = (undefined8 **)&UNK_10f4e7ed2;
  uStack_70 = 0x16d;
  *(undefined8 *)(unaff_x19 + 0x8ab8) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x8ac8) = 0;
  *(undefined8 *)(unaff_x19 + 0x8ac0) = 0;
  *(undefined8 *)(unaff_x19 + 0x8ad8) = 0;
  *(undefined8 *)(unaff_x19 + 0x8ad0) = 0;
  *(undefined8 *)(unaff_x19 + 0x8ae8) = 0;
  *(undefined8 *)(unaff_x19 + 0x8ae0) = 0;
  *(undefined8 *)(unaff_x19 + 0x8af0) = 0;
  *(undefined8 *)(unaff_x19 + 0x8af8) = unaff_x20;
  func_0x0001005eb7c8(0x8b00);
  *(long *)(unaff_x19 + 0x8b18) = unaff_x19 + 0x8b18;
  *(long *)(unaff_x19 + 0x8b20) = unaff_x19 + 0x8b18;
  *(undefined8 *)(unaff_x19 + 0x8b28) = 0;
  FUN_1005eb80c(0x8b30);
  FUN_10054bfa4();
  ppuStack_78 = (undefined8 **)&UNK_10f4e809f;
  uStack_70 = 0x5a;
  *(undefined8 *)(unaff_x19 + 0x8bb8) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x8bc8) = 0;
  *(undefined8 *)(unaff_x19 + 0x8bc0) = 0;
  *(undefined8 *)(unaff_x19 + 0x8bd8) = 0;
  *(undefined8 *)(unaff_x19 + 0x8bd0) = 0;
  *(undefined8 *)(unaff_x19 + 0x8be8) = 0;
  *(undefined8 *)(unaff_x19 + 0x8be0) = 0;
  *(undefined8 *)(unaff_x19 + 0x8bf0) = 0;
  *(undefined8 *)(unaff_x19 + 0x8bf8) = unaff_x20;
  func_0x0001005eb7c8(0x8c00);
  *(long *)(unaff_x19 + 0x8c18) = unaff_x19 + 0x8c18;
  *(long *)(unaff_x19 + 0x8c20) = unaff_x19 + 0x8c18;
  *(undefined8 *)(unaff_x19 + 0x8c28) = 0;
  FUN_1005eb80c(0x8c30);
  FUN_10054bfa4();
  FUN_1005eb80c(0x8cb8);
  FUN_1005eb9e0();
  FUN_1005eb80c(0x8d30);
  FUN_10054bfa4();
  FUN_1005eb80c(0x8db8);
  FUN_1005ebbb8();
  FUN_1005eb80c(0x8e30);
  FUN_10054bfa4();
  FUN_1005eb80c(0x8eb8);
  FUN_1005ebbb8();
  FUN_1005eb80c(0x8f30);
  FUN_1005ebbb8();
  FUN_1005ebbb8(unaff_x19 + 0x8fa8);
  FUN_10054bfa4(unaff_x19 + 0x9020);
  func_0x0001005eb7d4();
  FUN_10054bfa4();
  FUN_1005eb7e0(unaff_x19 + 0x9130);
  FUN_1005eb718(unaff_x19 + 0x91a8);
  FUN_1005eb9e0(unaff_x19 + 0x9220);
  ppuStack_78 = (undefined8 **)&UNK_10f4e8d60;
  uStack_70 = 0x3a7;
  *(undefined8 *)(unaff_x19 + 0x9298) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x92a8) = 0;
  *(undefined8 *)(unaff_x19 + 0x92a0) = 0;
  *(undefined8 *)(unaff_x19 + 0x92b8) = 0;
  *(undefined8 *)(unaff_x19 + 0x92b0) = 0;
  *(undefined8 *)(unaff_x19 + 0x92c8) = 0;
  *(undefined8 *)(unaff_x19 + 0x92c0) = 0;
  *(undefined8 *)(unaff_x19 + 0x92d0) = 0;
  *(undefined8 *)(unaff_x19 + 0x92d8) = unaff_x20;
  func_0x0001005eb7c8(0x92e0);
  *(long *)(unaff_x19 + 0x92f8) = unaff_x19 + 0x92f8;
  *(long *)(unaff_x19 + 0x9300) = unaff_x19 + 0x92f8;
  *(undefined8 *)(unaff_x19 + 0x9308) = 0;
  return;
}



/* Entry: 1005eb404; end: 1005eb42f;  */

void FUN_1005eb404(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0x32aaaba7;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  return;
}


