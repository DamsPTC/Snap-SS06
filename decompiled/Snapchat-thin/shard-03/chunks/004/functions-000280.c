/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102867500; end: 102867517; -[_TtC34SCPollStatusMessageRenderingPlugin34SCPollStatusMessageRenderingPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x000102867514) */

void FUN_102867500(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102867518; end: 10286751f; -[_TtC34SCPollStatusMessageRenderingPlugin34SCPollStatusMessageRenderingPlugin pluginType] */

undefined8 FUN_102867518(void)

{
  return 1;
}



/* Entry: 102867520; end: 10286757f; -[_TtC34SCPollStatusMessageRenderingPlugin34SCPollStatusMessageRenderingPlugin init] */

void FUN_102867520(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPollStatusMessageRenderingPlugin.SCPollStatusMessageRenderingPlugin",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10286754c);
  (*pcVar1)();
}



/* Entry: 102867580; end: 1028675d7; -[_TtC34SCPollStatusMessageRenderingPlugin34SCPollStatusMessageRenderingPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102867580(long param_1)

{
  func_0x000100e3b598(param_1 + _DAT_112ec4e70);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4e78));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4e80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec4e88));
  return;
}



/* Entry: 1028675d8; end: 1028675f7;  */

void FUN_1028675d8(void)

{
  func_0x000107c61168(&PTR_PTR_112866f80);
  return;
}



/* Entry: 1028675f8; end: 1028677af;  */

undefined ** FUN_1028675f8(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar12 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar12 = param_1;
    }
    func_0x000107c60480();
  }
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar12 != 0) {
    puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar8 = uVar12 & ((long)uVar12 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100403514(0,uVar8,0);
    if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028677b0);
      (*pcVar1)();
    }
    uVar13 = 0;
    do {
      puVar10 = puStack_88;
      if ((param_1 & 0xc000000000000001) == 0) {
        uVar2 = *(ulong *)(param_1 + uVar13 * 8 + 0x20);
        func_0x000107c61174();
        uVar9 = uVar8;
      }
      else {
        uVar2 = uVar13;
        uVar9 = param_1;
        func_0x000101681cac();
      }
      uVar3 = uVar2;
      func_0x000107c4cde0();
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c5faec();
      uVar8 = uVar9;
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar3);
      uVar3 = *(ulong *)(puVar10 + 0x10);
      uVar2 = uVar3 + 1;
      puStack_88 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar3) {
        uVar8 = uVar2;
        func_0x000100403514(1 < *(ulong *)(puVar10 + 0x18),uVar2,1);
      }
      uVar13 = uVar13 + 1;
      *(ulong *)(puStack_88 + 0x10) = uVar2;
      *(ulong *)(puStack_88 + uVar3 * 0x10 + 0x20) = uVar4;
      *(ulong *)(puStack_88 + uVar3 * 0x10 + 0x28) = uVar9;
      puVar10 = puStack_88;
    } while (uVar12 != uVar13);
  }
  puVar5 = puVar10;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar10);
  ppuVar11 = *(undefined ***)(puVar5 + 0x10);
  if (ppuVar11 == (undefined **)0x0) {
    func_0x000107c6142c(puVar5);
    ppuVar6 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    ppuVar6 = ppuVar11;
    func_0x00010109b448(ppuVar11,0);
    ppuVar7 = &puStack_88;
    func_0x00010109b930(ppuVar7,ppuVar6 + 4,ppuVar11,puVar5);
    func_0x00010109bac0(puStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
    if (ppuVar7 != ppuVar11) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102867760);
      (*pcVar1)();
    }
  }
  return ppuVar6;
}



/* Entry: 1028677b0; end: 1028678b7;  */

void FUN_1028677b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *apuStack_60 [3];
  undefined8 uStack_48;
  
  FUN_1028675f8();
  puVar1 = PTR_PTR_1126ab500;
  func_0x000107c610f8();
  uVar2 = param_1;
  func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
  func_0x000107c6142c(param_1);
  func_0x000107c49560();
  func_0x000107c61170(uVar2);
  uVar2 = 0x112ec4eb8;
  uVar3 = 0;
  FUN_1028678b8(0,0x112ec4eb8,&PTR_PTR_1126ab508);
  func_0x000107c614e8();
  func_0x000107c3ff48();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  uVar3 = 0;
  FUN_1028678b8(0,0x112ec4ec0,&PTR_PTR_1126ab500);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  apuStack_60[0] = puVar1;
  uStack_48 = uVar3;
  func_0x000107c610f8(PTR_PTR_1126c67d8);
  FUN_1027efbc4(uVar4,uVar2,apuStack_60,&uStack_80);
  return;
}



/* Entry: 1028678b8; end: 102867943;  */

void FUN_1028678b8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102867944; end: 102867a0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102867944(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar4 = *(undefined8 *)(lStack_38 + _DAT_11301aef0);
  func_0x000107c615f0(uVar4);
  func_0x000107c61170(lStack_38);
  lVar1 = 0;
  FUN_1028675d8();
  lVar2 = lVar1;
  func_0x000107c610f8();
  func_0x000107c61614(lVar2 + _DAT_112ec4e70,0);
  *(undefined8 *)(lVar2 + _DAT_112ec4e78) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ec4e80) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ec4e88) = uVar4;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 102867a10; end: 102867a27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102867a10(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar4 = *(undefined8 *)(lStack_38 + _DAT_11301aef0);
  func_0x000107c615f0(uVar4);
  func_0x000107c61170(lStack_38);
  lVar1 = 0;
  FUN_1028675d8();
  lVar2 = lVar1;
  func_0x000107c610f8();
  func_0x000107c61614(lVar2 + _DAT_112ec4e70,0);
  *(undefined8 *)(lVar2 + _DAT_112ec4e78) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ec4e80) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ec4e88) = uVar4;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 102867a28; end: 102867d97;  */

void FUN_102867a28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110559ca0;
  func_0x000107c613fc(&UNK_110559ca0,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000823a8(0x102867b14,puVar1);
  return;
}



/* Entry: 102867d98; end: 102867da7;  */

undefined1  [16] FUN_102867d98(void)

{
  return ZEXT816(0x110559cc8);
}



/* Entry: 102867da8; end: 102867e63;  */

void FUN_102867da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110559d90;
  func_0x000107c613fc(&UNK_110559d90,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_102867e64,puVar1);
  return;
}



/* Entry: 102867e64; end: 102868083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102867e64(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000100083b20(&puStack_90);
  uVar8 = 0x112e4ccf0;
  func_0x0001000285a8(0x112e4ccf0,&UNK_10daaf8a0);
  func_0x000107c610f8();
  puVar3 = puStack_90;
  func_0x00010017da58(puStack_90,uVar8);
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8(PTR_PTR_1126a73e0);
  func_0x000107c4907c();
  func_0x000107c61170(puVar3);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar3 = &UNK_110559dd8;
  func_0x000107c613fc(&UNK_110559dd8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  pcStack_70 = FUN_102868094;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1028681f0;
  puStack_78 = &UNK_110559df0;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar6);
  puVar3 = puStack_68;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61174(puVar5);
  func_0x000100083b20(&puStack_90);
  puVar3 = puStack_90;
  puVar7 = puStack_90;
  func_0x000107c5b488(puStack_90);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61174(puVar4);
  func_0x000100083b20(&lStack_98);
  uVar8 = *(undefined8 *)(lStack_98 + _DAT_11301aef0);
  func_0x000107c615f0(uVar8);
  func_0x000107c61170(lStack_98);
  puVar3 = PTR_PTR_1126ab518;
  func_0x000107c610f8();
  func_0x000107c48828();
  func_0x000107c615e8(uVar8);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar5);
  *param_1 = puVar3;
  return;
}



/* Entry: 102868084; end: 102868093;  */

undefined1  [16] FUN_102868084(void)

{
  return ZEXT816(0x110559db8);
}



/* Entry: 102868094; end: 1028681ef;  */

undefined * FUN_102868094(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar1 = uStack_48;
  func_0x000107c439d8(uStack_48);
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&uStack_50);
  uVar2 = uStack_50;
  func_0x000107c5b478(uStack_50);
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  func_0x000100083b20(&uStack_58);
  uVar3 = uStack_58;
  func_0x000107c5b4b4(uStack_58);
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  func_0x000100083b20(&uStack_60);
  uVar4 = uStack_60;
  func_0x000107c5b484(uStack_60);
  func_0x000107c61180();
  func_0x000107c61170(uStack_60);
  func_0x000100083b20(&uStack_68);
  uVar5 = uStack_68;
  func_0x000107c43a50(uStack_68);
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  puVar6 = PTR_PTR_1126ab520;
  func_0x000107c610f8(PTR_PTR_1126ab520);
  func_0x000107c46a3c();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  return puVar6;
}



/* Entry: 1028681f0; end: 102868227;  */

void FUN_1028681f0(long param_1)

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



/* Entry: 102868228; end: 102868243;  */

void FUN_102868228(long param_1,long param_2)

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



/* Entry: 102868244; end: 1028684bf;  */

void FUN_102868244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110559ed0;
  func_0x000107c613fc(&UNK_110559ed0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(0x102868300,puVar1);
  return;
}



/* Entry: 1028684c0; end: 1028684cf;  */

undefined1  [16] FUN_1028684c0(void)

{
  return ZEXT816(0x110559ef8);
}



/* Entry: 1028684d0; end: 102868ac3;  */

void FUN_1028684d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110559fc0;
  func_0x000107c613fc(&UNK_110559fc0,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_10;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_13;
  *(undefined8 *)(puVar1 + 0x30) = param_12;
  *(undefined8 *)(puVar1 + 0x38) = param_11;
  *(undefined8 *)(puVar1 + 0x40) = param_1;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  *(undefined8 *)(puVar1 + 0x50) = param_4;
  *(undefined8 *)(puVar1 + 0x58) = param_7;
  *(undefined8 *)(puVar1 + 0x60) = param_6;
  *(undefined8 *)(puVar1 + 0x68) = param_8;
  *(undefined8 *)(puVar1 + 0x70) = param_9;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_14);
  func_0x0001000823a8(0x102868614,puVar1);
  return;
}



/* Entry: 102868ac4; end: 102868ad3;  */

undefined1  [16] FUN_102868ac4(void)

{
  return ZEXT816(0x110559fe8);
}



/* Entry: 102868ad4; end: 102868b3b;  */

undefined8 FUN_102868ad4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c44588(uStack_28);
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  uVar2 = uVar1;
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 102868b3c; end: 102868b57;  */

void FUN_102868b3c(long param_1,long param_2)

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



/* Entry: 102868b58; end: 102868c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102868b58(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112ec4f00;
  uVar4 = (uint)*(byte *)(unaff_x20 + _DAT_112ec4f00);
  if (*(byte *)(unaff_x20 + _DAT_112ec4f00) == 2) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112ec4ef8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      lVar3 = lVar2;
      func_0x000107c516dc();
      uVar4 = (uint)lVar3;
      func_0x000107c615e8(lVar2);
    }
    *(char *)(unaff_x20 + lVar1) = (char)uVar4;
  }
  return uVar4 & 1;
}



/* Entry: 102868c40; end: 102868f9f;  */

undefined * FUN_102868c40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  
  func_0x0001000285a8(0x112d3bec8,&UNK_10d905040);
  func_0x0001000b637c();
  uVar1 = param_1;
  func_0x00010487f7f8();
  func_0x000107c61574(param_1);
  uVar2 = uVar1;
  func_0x000102868db8(uVar1,param_2);
  puVar3 = &UNK_11055a0d8;
  func_0x000107c613fc(&UNK_11055a0d8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  uVar4 = 0x112ec4ec8;
  func_0x0001000285a8(0x112ec4ec8,&UNK_10dae50d8);
  pcVar5 = FUN_10286901c;
  func_0x0001000bfde0(FUN_10286901c,puVar3,uVar4);
  func_0x000107c61574(puVar3);
  FUN_102869024();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar5);
  puVar6 = &UNK_11055a100;
  func_0x000107c613fc(&UNK_11055a100,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  func_0x000107c61174(uVar2);
  uVar4 = 0x112d38358;
  func_0x0001000285a8(0x112d38358,&UNK_10d902090);
  pcVar5 = FUN_10286930c;
  func_0x0001000bfde0(FUN_10286930c,puVar6,uVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar6);
  func_0x0001004575f0();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(pcVar5);
  return puVar6;
}



/* Entry: 102868fa0; end: 10286901b;  */

void FUN_102868fa0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_1028690ac();
    func_0x000107c61170(param_3);
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10286901c; end: 102869023;  */

void FUN_10286901c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_2;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_1028690ac();
    func_0x000107c61170(lVar1);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 102869024; end: 1028690ab;  */

void FUN_102869024(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112ec4ed0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ec4ec8;
  func_0x00010002969c(0x112ec4ec8,&UNK_10dae50d8);
  uVar2 = 0x112ec4ed8;
  FUN_102869d5c(0x112ec4ed8,0x112ec4ee0,&PTR_PTR_1126ab538);
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112ec4ed0 = puVar3;
  return;
}



/* Entry: 1028690ac; end: 102869193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1028690ac(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar2 = param_1;
  FUN_1028693b4();
  if ((uVar2 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1;
    func_0x000107c49f70();
    if ((uVar2 & 1) == 0) {
      func_0x000107c4a0ac(param_1);
    }
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec4ef0);
    uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ec4ef0))[1];
    func_0x000107c4cde0();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    puVar3 = PTR_PTR_1126ab538;
    func_0x000107c610f8(PTR_PTR_1126ab538);
    func_0x000107c5fadc(uVar4,uVar1);
    func_0x000107c462f0(puVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(param_1);
  }
  return puVar3;
}



/* Entry: 102869194; end: 10286930b;  */

void FUN_102869194(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 auStack_90 [3];
  undefined8 uStack_78;
  long alStack_70 [3];
  undefined8 uStack_58;
  
  lVar6 = *param_2;
  puVar4 = PTR_PTR_1126ae750;
  if (lVar6 == 0) {
    func_0x000107c61168();
    func_0x000107c4d73c();
    func_0x000107c61180();
  }
  else {
    func_0x000107c61168();
    uVar5 = 0x112ec4f38;
    uVar1 = 0;
    func_0x000102869d9c(0,0x112ec4f38,&PTR_PTR_1126ab540);
    func_0x000107c614e8();
    func_0x000107c61174();
    func_0x000107c3ff48(uVar1);
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
    uVar1 = 0;
    func_0x000102869d9c(0,0x112ec4ee0,&PTR_PTR_1126ab538);
    uVar3 = 0;
    alStack_70[0] = lVar6;
    uStack_58 = uVar1;
    func_0x000102869d9c(0,0x112ec4f40,&PTR_PTR_1126ab548);
    auStack_90[0] = param_3;
    uStack_78 = uVar3;
    func_0x000107c610f8(PTR_PTR_1126c67d8);
    func_0x000107c61174(lVar6);
    func_0x000107c61174(param_3);
    FUN_1027efbc4(uVar2,uVar5,alStack_70,auStack_90);
    func_0x000107c5b58c();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar6);
  }
  *param_1 = puVar4;
  return;
}



/* Entry: 10286930c; end: 102869313;  */

void FUN_10286930c(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 auStack_90 [3];
  undefined8 uStack_78;
  long alStack_70 [3];
  undefined8 uStack_58;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar7 = *param_2;
  puVar4 = PTR_PTR_1126ae750;
  if (lVar7 == 0) {
    func_0x000107c61168();
    func_0x000107c4d73c();
    func_0x000107c61180();
  }
  else {
    func_0x000107c61168();
    uVar5 = 0x112ec4f38;
    uVar1 = 0;
    func_0x000102869d9c(0,0x112ec4f38,&PTR_PTR_1126ab540);
    func_0x000107c614e8();
    func_0x000107c61174();
    func_0x000107c3ff48(uVar1);
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
    uVar1 = 0;
    func_0x000102869d9c(0,0x112ec4ee0,&PTR_PTR_1126ab538);
    uVar3 = 0;
    alStack_70[0] = lVar7;
    uStack_58 = uVar1;
    func_0x000102869d9c(0,0x112ec4f40,&PTR_PTR_1126ab548);
    auStack_90[0] = uVar6;
    uStack_78 = uVar3;
    func_0x000107c610f8(PTR_PTR_1126c67d8);
    func_0x000107c61174(lVar7);
    func_0x000107c61174(uVar6);
    FUN_1027efbc4(uVar2,uVar5,alStack_70,auStack_90);
    func_0x000107c5b58c();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar7);
  }
  *param_1 = puVar4;
  return;
}



/* Entry: 102869314; end: 10286938b; -[_TtC32SnapStatusMessageAccessoryPlugin32SnapStatusMessageAccessoryPlugin accessoryParamsForMessage:conversationInformation:] */

void FUN_102869314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102868c40(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10286938c; end: 102869393; -[_TtC32SnapStatusMessageAccessoryPlugin32SnapStatusMessageAccessoryPlugin isApplicableToMessage:] */

void FUN_10286938c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07ea90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_isSnapMessage_1125fd4b0);
  return;
}



/* Entry: 102869394; end: 10286939b; -[_TtC32SnapStatusMessageAccessoryPlugin32SnapStatusMessageAccessoryPlugin pluginType] */

undefined8 FUN_102869394(void)

{
  return 0;
}



/* Entry: 10286939c; end: 1028693b3; -[_TtC32SnapStatusMessageAccessoryPlugin32SnapStatusMessageAccessoryPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001028693b0) */

void FUN_10286939c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1028693b4; end: 10286960b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1028693b4(ulong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ec4ef0);
  func_0x000107c5fadc(uVar2,((undefined8 *)(unaff_x20 + _DAT_112ec4ef0))[1]);
  uVar3 = param_1;
  func_0x000107c4a128();
  func_0x000107c61170(uVar2);
  if (((uVar3 & 1) == 0) && (uVar3 = param_1, FUN_102869bdc(), (uVar3 & 1) == 0)) {
    bVar1 = false;
  }
  else {
    uVar3 = param_1;
    func_0x000107c4a384();
    if (((int)uVar3 == 0) ||
       ((uVar3 = param_1, func_0x000107c4a0ac(), (int)uVar3 != 0 &&
        (uVar3 = param_1, func_0x000107c49f70(), (uVar3 & 1) == 0)))) {
      uVar3 = param_1;
      func_0x000107c4ce20();
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c519f0();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      uVar2 = 0;
      func_0x000102869d9c(0,0x112d4e810,&PTR_PTR_1126b0cd8);
      uVar3 = uVar4;
      func_0x000107c5fc54(uVar4,uVar2);
      func_0x000107c61170(uVar4);
      if (uVar3 >> 0x3e == 0) {
        uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar4 = uVar3 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar3) {
          uVar4 = uVar3;
        }
        func_0x000107c60480();
      }
      func_0x000107c6142c(uVar3);
      if ((long)uVar4 < 1) {
        uVar3 = param_1;
        func_0x000107c4ce20();
        func_0x000107c61180();
        uVar4 = uVar3;
        func_0x000107c519f4();
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        uVar3 = uVar4;
        func_0x000107c5fc54(uVar4,uVar2);
        func_0x000107c61170(uVar4);
        if (uVar3 >> 0x3e == 0) {
          uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar4 = uVar3 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar3) {
            uVar4 = uVar3;
          }
          func_0x000107c60480();
        }
        func_0x000107c6142c(uVar3);
        if ((long)uVar4 < 1) {
          func_0x000107c4ce20();
          func_0x000107c61180();
          uVar3 = param_1;
          func_0x000107c5019c();
          func_0x000107c61180();
          func_0x000107c61170(param_1);
          uVar2 = 0;
          func_0x000102869d9c(0,0x112ec4f48,&PTR_PTR_1126dabd0);
          uVar4 = uVar3;
          func_0x000107c5fc54(uVar3,uVar2);
          func_0x000107c61170(uVar3);
          if (uVar4 >> 0x3e == 0) {
            uVar3 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar3 = uVar4 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar4) {
              uVar3 = uVar4;
            }
            func_0x000107c60480(uVar3);
          }
          func_0x000107c6142c(uVar4);
          return 0 < (long)uVar3;
        }
      }
    }
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10286960c; end: 102869b9b;  */

void FUN_10286960c(undefined8 *param_1,ulong *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined **ppuVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar15 = *param_2;
  puVar2 = PTR_PTR_1126ab550;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar3 = uVar15;
  func_0x000107c516d8();
  func_0x000107c61180();
  uVar17 = uVar3;
  if (uVar3 == 0) {
    func_0x000107c5fc54();
    uVar17 = uVar3;
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar3);
  }
  func_0x000107c5a354(puVar2);
  func_0x000107c61170(uVar17);
  uVar3 = uVar15;
  func_0x000107c4ce20();
  func_0x000107c61180();
  uVar17 = uVar3;
  func_0x000107c519f0();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar4 = 0;
  func_0x000102869d9c(0,0x112d4e810,&PTR_PTR_1126b0cd8);
  uVar3 = uVar17;
  func_0x000107c5fc54(uVar17,uVar4);
  func_0x000107c61170(uVar17);
  if (uVar3 >> 0x3e == 0) {
    uVar17 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar17 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar17 = uVar3;
    }
    func_0x000107c60480();
  }
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar17 == 0) {
    func_0x000107c6142c(uVar3);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar12 = uVar17 & ((long)uVar17 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100403514(0,uVar12,0);
    if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102869b98);
      (*pcVar1)();
    }
    uVar18 = 0;
    do {
      puVar14 = puStack_88;
      if ((uVar3 & 0xc000000000000001) == 0) {
        uVar8 = *(ulong *)(uVar3 + uVar18 * 8 + 0x20);
        func_0x000107c61174();
        uVar13 = uVar12;
      }
      else {
        uVar8 = uVar18;
        uVar13 = uVar3;
        func_0x000100bc2938();
      }
      uVar5 = uVar8;
      func_0x000107c5cb4c();
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x000107c5faec();
      uVar12 = uVar13;
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar5);
      uVar5 = *(ulong *)(puVar14 + 0x10);
      uVar8 = uVar5 + 1;
      puStack_88 = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar5) {
        uVar12 = uVar8;
        func_0x000100403514(1 < *(ulong *)(puVar14 + 0x18),uVar8,1);
      }
      puVar9 = puStack_88;
      uVar18 = uVar18 + 1;
      *(ulong *)(puStack_88 + 0x10) = uVar8;
      *(ulong *)(puStack_88 + uVar5 * 0x10 + 0x20) = uVar6;
      *(ulong *)(puStack_88 + uVar5 * 0x10 + 0x28) = uVar13;
    } while (uVar17 != uVar18);
    func_0x000107c6142c(uVar3);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  puVar7 = puVar9;
  func_0x000107c5fc48(puVar9,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar9);
  func_0x000107c5a358(puVar2);
  func_0x000107c61170(puVar7);
  uVar3 = uVar15;
  func_0x000107c4ce20();
  func_0x000107c61180();
  uVar17 = uVar3;
  func_0x000107c519f4();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = uVar17;
  func_0x000107c5fc54(uVar17,uVar4);
  func_0x000107c61170(uVar17);
  if (uVar3 >> 0x3e == 0) {
    uVar17 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar17 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar17 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar17 == 0) {
    func_0x000107c6142c(uVar3);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar12 = uVar17 & ((long)uVar17 >> 0x3f ^ 0xffffffffffffffffU);
    puStack_88 = puVar14;
    func_0x000100403514(0,uVar12,0);
    if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102869b9c);
      (*pcVar1)();
    }
    uVar18 = 0;
    do {
      puVar14 = puStack_88;
      if ((uVar3 & 0xc000000000000001) == 0) {
        uVar8 = *(ulong *)(uVar3 + uVar18 * 8 + 0x20);
        func_0x000107c61174();
        uVar13 = uVar12;
      }
      else {
        uVar8 = uVar18;
        uVar13 = uVar3;
        func_0x000100bc2938();
      }
      uVar5 = uVar8;
      func_0x000107c5cb4c();
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x000107c5faec();
      uVar12 = uVar13;
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar5);
      uVar5 = *(ulong *)(puVar14 + 0x10);
      uVar8 = uVar5 + 1;
      puStack_88 = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar5) {
        uVar12 = uVar8;
        func_0x000100403514(1 < *(ulong *)(puVar14 + 0x18),uVar8,1);
      }
      puVar14 = puStack_88;
      uVar18 = uVar18 + 1;
      *(ulong *)(puStack_88 + 0x10) = uVar8;
      *(ulong *)(puStack_88 + uVar5 * 0x10 + 0x20) = uVar6;
      *(ulong *)(puStack_88 + uVar5 * 0x10 + 0x28) = uVar13;
    } while (uVar17 != uVar18);
    func_0x000107c6142c(uVar3);
  }
  puVar9 = puVar14;
  func_0x000107c5fc48(puVar14,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar14);
  func_0x000107c5a35c(puVar2);
  func_0x000107c61170(puVar9);
  uVar3 = uVar15;
  func_0x000107c50190();
  func_0x000107c61180();
  uVar17 = uVar3;
  func_0x000107c5fe10();
  func_0x000107c61170(uVar3);
  ppuVar16 = *(undefined ***)(uVar17 + 0x10);
  if (ppuVar16 == (undefined **)0x0) {
    func_0x000107c6142c(uVar17);
    ppuVar10 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    ppuVar10 = ppuVar16;
    func_0x00010109b448(ppuVar16,0);
    ppuVar11 = &puStack_88;
    func_0x00010109b930(ppuVar11,ppuVar10 + 4,ppuVar16,uVar17);
    func_0x00010109bac0(puStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
    if (ppuVar11 != ppuVar16) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102869a6c);
      (*pcVar1)();
    }
  }
  ppuVar16 = ppuVar10;
  func_0x000107c5fc48(ppuVar10,PTR___sSSN_11034da80);
  func_0x000107c61574(ppuVar10);
  func_0x000107c5a34c(puVar2);
  func_0x000107c61170(ppuVar16);
  func_0x000107c50184();
  func_0x000107c61180();
  uVar3 = uVar15;
  func_0x000107c5fe10();
  func_0x000107c61170(uVar15);
  ppuVar16 = *(undefined ***)(uVar3 + 0x10);
  if (ppuVar16 == (undefined **)0x0) {
    func_0x000107c6142c(uVar3);
    ppuVar10 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    ppuVar10 = ppuVar16;
    func_0x00010109b448(ppuVar16,0);
    ppuVar11 = &puStack_88;
    func_0x00010109b930(ppuVar11,ppuVar10 + 4,ppuVar16,uVar3);
    func_0x00010109bac0(puStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
    if (ppuVar11 != ppuVar16) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102869b2c);
      (*pcVar1)();
    }
  }
  ppuVar16 = ppuVar10;
  func_0x000107c5fc48(ppuVar10,PTR___sSSN_11034da80);
  func_0x000107c61574(ppuVar10);
  func_0x000107c5a350(puVar2);
  func_0x000107c61170(ppuVar16);
  *param_1 = puVar2;
  return;
}



/* Entry: 102869b9c; end: 102869bdb;  */

void FUN_102869b9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  func_0x000107c500a4(*param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar1;
  return;
}



/* Entry: 102869bdc; end: 102869c8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102869bdc(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ec4ef0);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112ec4ef0))[1]);
  uVar2 = param_1;
  func_0x000107c4a394();
  func_0x000107c61170(uVar1);
  if ((int)uVar2 != 0) {
    func_0x000107c4c930();
    func_0x000107c61180();
    if (param_1 != 0) {
      uVar2 = param_1;
      FUN_102868b58();
      if ((uVar2 & 1) == 0) {
        uVar2 = param_1;
        func_0x000107c4ca5c();
        uVar3 = (uint)uVar2;
        func_0x0001085436ac();
        if (uVar3 == 0) {
          uVar3 = 0;
        }
        else {
          func_0x000102868bcc();
        }
      }
      else {
        uVar3 = 1;
      }
      func_0x000107c61170(param_1);
      goto LAB_102869c7c;
    }
  }
  uVar3 = 0;
LAB_102869c7c:
  return uVar3 & 1;
}



/* Entry: 102869c90; end: 102869cef; -[_TtC32SnapStatusMessageAccessoryPlugin32SnapStatusMessageAccessoryPlugin init] */

void FUN_102869c90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapStatusMessageAccessoryPlugin.SnapStatusMessageAccessoryPlugin",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102869cbc);
  (*pcVar1)();
}



/* Entry: 102869cf0; end: 102869d3b; -[_TtC32SnapStatusMessageAccessoryPlugin32SnapStatusMessageAccessoryPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102869d0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102869d10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102869cf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec4ee8));
  return;
}



/* Entry: 102869d3c; end: 102869d5b;  */

void FUN_102869d3c(void)

{
  func_0x000107c61168(&PTR_PTR_112867058);
  return;
}



/* Entry: 102869d5c; end: 102869ddb;  */

void FUN_102869d5c(long *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000102869d9c(0xff);
    puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
    func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 102869ddc; end: 102869fd7;  */

void FUN_102869ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec3540,&UNK_10dae3580);
  puVar1 = &UNK_11055a128;
  func_0x000107c613fc(&UNK_11055a128,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_102869fd8,puVar1);
  return;
}



/* Entry: 102869fd8; end: 102869ff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102869fd8(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),uVar8,
                      *(undefined8 *)(unaff_x20 + 0x20));
  uVar2 = uStack_48;
  func_0x000107c5da38();
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&lStack_50);
  uVar3 = *(undefined8 *)(lStack_50 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_50);
  uVar4 = uVar3;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = uVar4;
  func_0x000107c5faec();
  func_0x000107c61170(uVar4);
  func_0x000100083b20(&uStack_58);
  uVar4 = uStack_58;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  lVar5 = 0;
  FUN_102869d3c();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined1 *)(lVar6 + _DAT_112ec4f00) = 2;
  *(undefined1 *)(lVar6 + _DAT_112ec4f08) = 2;
  *(undefined8 *)(lVar6 + _DAT_112ec4ee8) = uVar2;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112ec4ef0);
  *puVar1 = uVar3;
  puVar1[1] = uVar8;
  *(undefined8 *)(lVar6 + _DAT_112ec4ef8) = uVar4;
  plVar7 = &lStack_68;
  lStack_68 = lVar6;
  lStack_60 = lVar5;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  *param_1 = (long)plVar7;
  return;
}



/* Entry: 102869ff4; end: 10286a003; -[_TtC20StickerMessagePlugin20StickerMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102869ff4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4f60));
  return;
}



/* Entry: 10286a004; end: 10286a037; -[_TtC20StickerMessagePlugin20StickerMessagePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286a004(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4f60);
  *(undefined8 *)(param_1 + _DAT_112ec4f60) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10286a038; end: 10286a047; -[_TtC20StickerMessagePlugin20StickerMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286a038(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4f68));
  return;
}



/* Entry: 10286a048; end: 10286a07b; -[_TtC20StickerMessagePlugin20StickerMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286a048(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4f68);
  *(undefined8 *)(param_1 + _DAT_112ec4f68) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10286a07c; end: 10286a0e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10286a07c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ec4f98;
  lVar3 = *(long *)(unaff_x20 + _DAT_112ec4f98);
  lVar2 = lVar3;
  if (lVar3 == 1) {
    lVar2 = unaff_x20;
    FUN_10286a0e8();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c615f0();
    FUN_102820b1c(uVar4);
  }
  func_0x000102820b2c(lVar3);
  return lVar2;
}



/* Entry: 10286a0e8; end: 10286a217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286a0e8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_112ec4f78);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      puVar3 = &UNK_11055a2e0;
      func_0x000107c613fc(&UNK_11055a2e0,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,param_1);
      uStack_40 = 0x10286b294;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_100f11710;
      puStack_48 = &UNK_11055a2f8;
      puStack_38 = puVar3;
      func_0x000107c60bc4(&puStack_60);
      func_0x000107c61574(puStack_38);
      FUN_10286b29c(0,0x112ec36f8,&PTR_PTR_1126b2f40);
      func_0x000107c614e8();
      func_0x000107c4c214(lVar2);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 10286a218; end: 10286a2a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286a218(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c453e4();
  }
  else {
    func_0x000107c610f8(PTR_PTR_1126b2f40);
    func_0x000107c45b10();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10286a2a8; end: 10286a2bf; -[_TtC20StickerMessagePlugin20StickerMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x00010286a2bc) */

void FUN_10286a2a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10286a2c0; end: 10286a2c7; -[_TtC20StickerMessagePlugin20StickerMessagePlugin quotedRenderingStyleForMessage:] */

undefined8 FUN_10286a2c0(void)

{
  return 0;
}



/* Entry: 10286a2c8; end: 10286a59f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10286a2c8(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined *apuStack_a0 [3];
  undefined8 uStack_88;
  undefined *apuStack_80 [3];
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec4f90);
  uVar13 = param_2;
  func_0x000107c4ce08(lVar1,param_2,param_1);
  func_0x000107c61180();
  lVar2 = lVar1;
  if ((param_2 & 1) == 0) {
    func_0x000107c4f858();
  }
  else {
    func_0x000107c4051c();
  }
  func_0x000107c61180();
  lVar3 = lVar2;
  FUN_10286a07c();
  if (lVar3 == 0) {
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lVar2);
  }
  else {
    if (lVar2 == 0) {
      func_0x000107c615e8();
    }
    else {
      lVar4 = lVar1;
      if ((param_2 & 1) == 0) {
        func_0x000107c4f85c();
      }
      else {
        func_0x000107c40e28();
      }
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar5 = lVar4;
        func_0x000107c41214();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c615e8(lVar1);
          func_0x000107c61170(lVar2);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(lVar4);
          return 0;
        }
        lVar6 = lVar5;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar5);
        puVar7 = PTR_PTR_1126b3800;
        func_0x000107c610f8();
        func_0x00010006c00c(lVar6,uVar13);
        lVar5 = lVar6;
        func_0x000107c5ee20(lVar6,uVar13);
        func_0x000107c45ae0();
        func_0x000107c61170(lVar5);
        func_0x00010006c090(lVar6,uVar13);
        puVar8 = PTR_PTR_1126ab160;
        func_0x000107c610f8();
        func_0x000107c47930();
        puVar9 = PTR_PTR_1126ab168;
        func_0x000107c610f8();
        func_0x000107c46288();
        uVar14 = 0x112ec36e0;
        uVar10 = 0;
        FUN_10286b29c(0,0x112ec36e0,&PTR_PTR_1126ab170);
        func_0x000107c614e8();
        func_0x000107c3ff48();
        func_0x000107c61180();
        uVar11 = uVar10;
        func_0x000107c5faec();
        func_0x000107c61170(uVar10);
        uVar10 = 0;
        FUN_10286b29c(0,0x112ec36e8,&PTR_PTR_1126ab160);
        uVar12 = 0;
        apuStack_80[0] = puVar8;
        uStack_68 = uVar10;
        FUN_10286b29c(0,0x112ec36f0,&PTR_PTR_1126ab168);
        apuStack_a0[0] = puVar9;
        uStack_88 = uVar12;
        func_0x000107c610f8(PTR_PTR_1126c67d8);
        func_0x000107c61174(puVar8);
        func_0x000107c61174(puVar9);
        FUN_1027efbc4(uVar11,uVar14,apuStack_80,apuStack_a0);
        func_0x000107c61170(lVar4);
        func_0x00010006c090(lVar6,uVar13);
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar8);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(puVar7);
        return uVar11;
      }
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar2);
      lVar1 = lVar3;
    }
    func_0x000107c615e8(lVar1);
  }
  return 0;
}



/* Entry: 10286a5a0; end: 10286a5ff; -[_TtC20StickerMessagePlugin20StickerMessagePlugin valdiContextParamsForQuotedMessage:conversationParticipants:] */

void FUN_10286a5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10286a2c8(param_3,0);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10286a600; end: 10286a65f; -[_TtC20StickerMessagePlugin20StickerMessagePlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:] */

void FUN_10286a600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10286a2c8(param_3,1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10286a660; end: 10286a6bf; -[_TtC20StickerMessagePlugin20StickerMessagePlugin init] */

void FUN_10286a660(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StickerMessagePlugin.StickerMessagePlugin",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10286a68c);
  (*pcVar1)();
}



/* Entry: 10286a6c0; end: 10286a75b; -[_TtC20StickerMessagePlugin20StickerMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010286a740: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010286a744) */
/* WARNING: Removing unreachable block (ram,0x000102820b1c) */
/* WARNING: Removing unreachable block (ram,0x000102820b28) */
/* WARNING: Removing unreachable block (ram,0x000102820b24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286a6c0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4f60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4f68));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec4f70 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4f78));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4f80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4f88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec4f90));
  return;
}



/* Entry: 10286a75c; end: 10286a77b;  */

void FUN_10286a75c(void)

{
  func_0x000107c61168(&PTR_PTR_112867138);
  return;
}



/* Entry: 10286a77c; end: 10286a7ef; -[_TtC20StickerMessagePlugin20StickerMessagePlugin canForwardMessageFromActionMenu:focusedMessageContent:] */

uint FUN_10286a77c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x00010286a94c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10286a7f0; end: 10286a7f7; -[_TtC20StickerMessagePlugin20StickerMessagePlugin canForwardMessageFromCTA:] */

undefined8 FUN_10286a7f0(void)

{
  return 0;
}



/* Entry: 10286a7f8; end: 10286a88b; -[_TtC20StickerMessagePlugin20StickerMessagePlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:] */

void FUN_10286a7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10286ab30(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10286a88c; end: 10286ab2f; -[_TtC20StickerMessagePlugin20StickerMessagePlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:] */

/* WARNING: Possible PIC construction at 0x00010286a920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286a930: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010286a924) */
/* WARNING: Removing unreachable block (ram,0x00010286a934) */

void FUN_10286a88c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c60bc4(param_7);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_10286abe8(param_3,param_5,param_6,param_1,param_7);
  func_0x000107c60bd0(param_7);
  func_0x000107c60bd0(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10286ab30; end: 10286abe7;  */

undefined * FUN_10286ab30(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_10286a2c8(param_1,1);
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126c6898;
    func_0x000107c61168(PTR_PTR_1126c6898);
    func_0x000107c3fff0();
    func_0x000107c61180();
  }
  puVar1 = PTR_PTR_1126c68a0;
  func_0x000107c61168(PTR_PTR_1126c68a0);
  func_0x000107c5dd48(0x3ff0000000000000);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c68a8;
  func_0x000107c610f8(PTR_PTR_1126c68a8);
  func_0x000107c480c8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  return puVar2;
}



/* Entry: 10286abe8; end: 10286b23b;  */

/* WARNING: Possible PIC construction at 0x00010286acc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286acf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286ad10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286ad30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286ad7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286ada4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286adc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286aea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286aeb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286af98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286afa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286afb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286afd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286b1e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286b1f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286b200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286b228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286b0f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286b100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286b120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286b19c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286b1ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010286b1a0) */
/* WARNING: Removing unreachable block (ram,0x00010286b124) */
/* WARNING: Removing unreachable block (ram,0x00010286b104) */
/* WARNING: Removing unreachable block (ram,0x00010286b0f4) */
/* WARNING: Removing unreachable block (ram,0x00010286b22c) */
/* WARNING: Removing unreachable block (ram,0x00010286b204) */
/* WARNING: Removing unreachable block (ram,0x00010286b1f4) */
/* WARNING: Removing unreachable block (ram,0x00010286b1e4) */
/* WARNING: Removing unreachable block (ram,0x00010286afdc) */
/* WARNING: Removing unreachable block (ram,0x00010286b12c) */
/* WARNING: Removing unreachable block (ram,0x00010286afbc) */
/* WARNING: Removing unreachable block (ram,0x00010286afac) */
/* WARNING: Removing unreachable block (ram,0x00010286af9c) */
/* WARNING: Removing unreachable block (ram,0x00010286aeb4) */
/* WARNING: Removing unreachable block (ram,0x00010286b1d4) */
/* WARNING: Removing unreachable block (ram,0x00010286aed0) */
/* WARNING: Removing unreachable block (ram,0x00010286aea4) */
/* WARNING: Removing unreachable block (ram,0x00010286adc4) */
/* WARNING: Removing unreachable block (ram,0x00010286add4) */
/* WARNING: Removing unreachable block (ram,0x00010286afe0) */
/* WARNING: Removing unreachable block (ram,0x00010286aff0) */
/* WARNING: Removing unreachable block (ram,0x00010286b190) */
/* WARNING: Removing unreachable block (ram,0x00010286b00c) */
/* WARNING: Removing unreachable block (ram,0x00010286b230) */
/* WARNING: Removing unreachable block (ram,0x00010286b028) */
/* WARNING: Removing unreachable block (ram,0x00010286ade8) */
/* WARNING: Removing unreachable block (ram,0x00010286b210) */
/* WARNING: Removing unreachable block (ram,0x00010286ae00) */
/* WARNING: Removing unreachable block (ram,0x00010286b21c) */
/* WARNING: Removing unreachable block (ram,0x00010286ae1c) */
/* WARNING: Removing unreachable block (ram,0x00010286ae54) */
/* WARNING: Removing unreachable block (ram,0x00010286ae74) */
/* WARNING: Removing unreachable block (ram,0x00010286ada8) */
/* WARNING: Removing unreachable block (ram,0x00010286ad80) */
/* WARNING: Removing unreachable block (ram,0x00010286ad34) */
/* WARNING: Removing unreachable block (ram,0x00010286ad48) */
/* WARNING: Removing unreachable block (ram,0x00010286ad60) */
/* WARNING: Removing unreachable block (ram,0x00010286ad14) */
/* WARNING: Removing unreachable block (ram,0x00010286acf4) */
/* WARNING: Removing unreachable block (ram,0x00010286acc4) */
/* WARNING: Removing unreachable block (ram,0x00010286b1b0) */
/* WARNING: Removing unreachable block (ram,0x00010286b1b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286abe8(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = &UNK_11055a218;
  func_0x000107c613fc(&UNK_11055a218,0x18,7);
  *(long *)(puVar2 + 0x10) = param_5;
  lVar5 = *(long *)(param_4 + _DAT_112ec4f90);
  func_0x000107c60bc4(param_5);
  func_0x000107c4ce08();
  func_0x000107c61180();
  lVar3 = lVar5;
  func_0x000107c4ce14();
  func_0x000107c61180();
  if (lVar3 == 0) {
    (**(code **)(param_5 + 0x10))(param_5,0);
    func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar5);
    return;
  }
  uVar6 = *(undefined8 *)(param_2 + _DAT_11307fc80);
  uVar4 = 0;
  func_0x0001044c309c(0);
  func_0x000107c5fc48(uVar6,uVar4);
  if (-1 < param_3) {
    func_0x0001086063d8();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10286b210);
  (*pcVar1)();
}



/* Entry: 10286b23c; end: 10286b24f;  */

void FUN_10286b23c(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010286b24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 10286b250; end: 10286b277;  */

void FUN_10286b250(long param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(param_1 == 0);
  return;
}



/* Entry: 10286b278; end: 10286b29b;  */

void FUN_10286b278(long param_1,long param_2)

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



/* Entry: 10286b29c; end: 10286b2db;  */

void FUN_10286b29c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10286b2dc; end: 10286b2ef;  */

void FUN_10286b2dc(long param_1,long param_2)

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



/* Entry: 10286b2f0; end: 10286b5a7;  */

void FUN_10286b2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_11055a330;
  func_0x000107c613fc(&UNK_11055a330,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_10286b5a8,puVar1);
  return;
}



/* Entry: 10286b5a8; end: 10286b5c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286b5a8(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&lStack_58,*(undefined8 *)(unaff_x20 + 0x10),uVar9,
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  uVar2 = *(undefined8 *)(lStack_58 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_58);
  uVar3 = uVar2;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  func_0x000100083b20(&uStack_60);
  uVar3 = uStack_60;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_60);
  func_0x000100083b20(&uStack_68);
  uVar4 = uStack_68;
  func_0x000107c5bdcc();
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&uStack_70);
  uVar5 = uStack_70;
  func_0x000107c4a7c8();
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  func_0x000100083b20(&lStack_78);
  uVar10 = *(undefined8 *)(lStack_78 + _DAT_11301aef0);
  func_0x000107c615f0(uVar10);
  func_0x000107c61170(lStack_78);
  lVar6 = 0;
  FUN_10286a75c();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112ec4f60) = 0;
  *(undefined8 *)(lVar7 + _DAT_112ec4f68) = 0;
  *(undefined8 *)(lVar7 + _DAT_112ec4f98) = 1;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112ec4f70);
  *puVar1 = uVar2;
  puVar1[1] = uVar9;
  *(undefined8 *)(lVar7 + _DAT_112ec4f78) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112ec4f80) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112ec4f88) = uVar5;
  *(undefined8 *)(lVar7 + _DAT_112ec4f90) = uVar10;
  plVar8 = &lStack_88;
  lStack_88 = lVar7;
  lStack_80 = lVar6;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 10286b5c8; end: 10286b5d7; -[_TtC26StoryReactionMessagePlugin26StoryReactionMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286b5c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4fc8));
  return;
}



/* Entry: 10286b5d8; end: 10286b60b; -[_TtC26StoryReactionMessagePlugin26StoryReactionMessagePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286b5d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4fc8);
  *(undefined8 *)(param_1 + _DAT_112ec4fc8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10286b60c; end: 10286b61b; -[_TtC26StoryReactionMessagePlugin26StoryReactionMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286b60c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4fd0));
  return;
}



/* Entry: 10286b61c; end: 10286b64f; -[_TtC26StoryReactionMessagePlugin26StoryReactionMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286b61c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4fd0);
  *(undefined8 *)(param_1 + _DAT_112ec4fd0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10286b650; end: 10286bab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10286b650(undefined8 param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined *apuStack_a0 [3];
  undefined8 uStack_88;
  undefined *apuStack_80 [3];
  undefined8 uStack_68;
  
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ec4ff0);
  uVar13 = param_2;
  func_0x000107c4ce08(puVar2,param_2,param_1);
  func_0x000107c61180();
  puVar3 = puVar2;
  if ((param_2 & 1) == 0) {
    func_0x000107c4051c();
  }
  else {
    func_0x000107c4f858();
  }
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) goto LAB_10286b734;
  puVar4 = puVar3;
  func_0x000107c5b3c0();
  func_0x000107c61180();
  if (puVar4 != (undefined *)0x0) {
    puVar15 = puVar4;
    func_0x000107c501fc();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    if (puVar15 != (undefined *)0x0) {
      puVar4 = puVar15;
      func_0x000107c4f930();
      func_0x000107c61180();
      func_0x000107c61170(puVar15);
      if (puVar4 != (undefined *)0x0) {
        puVar15 = puVar2;
        if ((param_2 & 1) == 0) {
          func_0x000107c4cde0();
          func_0x000107c61180();
LAB_10286b76c:
          puVar14 = puVar15;
          func_0x000107c5faec();
          func_0x000107c61170(puVar15);
        }
        else {
          func_0x000107c3f91c();
          func_0x000107c61180();
          if (puVar15 != (undefined *)0x0) goto LAB_10286b76c;
          puVar14 = (undefined *)0x0;
          uVar13 = 0xe000000000000000;
        }
        func_0x000107c5fadc(puVar14,uVar13);
        func_0x000107c6142c(uVar13);
        puVar15 = puVar14;
        func_0x0001070b210c();
        func_0x000107c61180();
        func_0x000107c61170(puVar14);
        puVar14 = puVar15;
        if (param_3 == 0) {
LAB_10286b814:
          lVar16 = 0;
          puVar15 = (undefined *)0x0;
        }
        else {
          lVar16 = param_3;
          func_0x000107c3e9e8();
          func_0x000107c61180();
          puVar14 = puVar15;
          if (lVar16 == 0) goto LAB_10286b814;
          lVar5 = lVar16;
          func_0x000107c3e978();
          func_0x000107c61180();
          func_0x000107c61170(lVar16);
          puVar14 = puVar15;
          if (lVar5 == 0) goto LAB_10286b814;
          lVar16 = lVar5;
          func_0x000107c5faec(lVar5);
          puVar14 = puVar15;
          func_0x000107c61170(lVar5);
        }
        puVar6 = PTR_PTR_1126ab030;
        func_0x000107c610f8(PTR_PTR_1126ab030);
        func_0x000107c453e4();
        puVar7 = puVar4;
        func_0x000107c49830();
        if (puVar7 == (undefined *)0x0) {
          puVar7 = puVar4;
          func_0x000107c424f8();
          func_0x000107c61180();
          if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10286bab4);
            (*pcVar1)();
          }
          puVar8 = puVar7;
          func_0x000107c5faec();
          func_0x000107c61170(puVar7);
          func_0x000107c5fb5c(puVar8,puVar14);
          func_0x000107c6142c(puVar14);
          if ((long)puVar8 < 1) goto LAB_10286b8e4;
          puVar14 = puVar4;
          func_0x000107c424f8(puVar4);
          func_0x000107c61180();
          func_0x000107c5446c(puVar6);
        }
        else {
          func_0x000107c49830(puVar4);
          puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c490d8();
          func_0x000107c52d28(puVar6);
        }
        func_0x000107c61170(puVar14);
LAB_10286b8e4:
        puVar14 = PTR_PTR_1126ab558;
        func_0x000107c610f8();
        func_0x000107c453e4();
        if (puVar15 == (undefined *)0x0) {
          lVar16 = 0;
        }
        else {
          func_0x000107c5fadc(lVar16,puVar15);
          func_0x000107c6142c(puVar15);
        }
        func_0x000107c52ae0(puVar14);
        func_0x000107c61170(lVar16);
        func_0x000107c533b0(puVar14);
        puVar15 = PTR_PTR_1126ab560;
        func_0x000107c610f8();
        func_0x000107c453e4();
        uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ec4fe0);
        func_0x000107c5c734(uVar9);
        func_0x000107c61180();
        func_0x000107c52704(puVar15);
        func_0x000107c615e8(uVar9);
        uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ec4fd8);
        func_0x000107c5c734(uVar9);
        func_0x000107c61180();
        func_0x000107c57b50(puVar15);
        func_0x000107c615e8(uVar9);
        uVar9 = 0x112ec5020;
        uVar10 = 0;
        FUN_10286bc50(0,0x112ec5020,&PTR_PTR_1126ab568);
        func_0x000107c614e8();
        func_0x000107c3ff48();
        func_0x000107c61180();
        uVar11 = uVar10;
        func_0x000107c5faec();
        func_0x000107c61170(uVar10);
        uVar10 = 0;
        FUN_10286bc50(0,0x112ec5028,&PTR_PTR_1126ab558);
        uVar12 = 0;
        apuStack_80[0] = puVar14;
        uStack_68 = uVar10;
        FUN_10286bc50(0,0x112ec5030,&PTR_PTR_1126ab560);
        apuStack_a0[0] = puVar15;
        uStack_88 = uVar12;
        func_0x000107c610f8(PTR_PTR_1126c67d8);
        func_0x000107c61174(puVar14);
        func_0x000107c61174(puVar15);
        FUN_1027efbc4(uVar11,uVar9,apuStack_80,apuStack_a0);
        func_0x000107c615e8(puVar2);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar15);
        func_0x000107c61170(puVar14);
        func_0x000107c61170(param_3);
        func_0x000107c61170(puVar3);
        return uVar11;
      }
    }
  }
  func_0x000107c61170(puVar3);
LAB_10286b734:
  func_0x000107c615e8(puVar2);
  return 0;
}



/* Entry: 10286bab4; end: 10286bb2f; -[_TtC26StoryReactionMessagePlugin26StoryReactionMessagePlugin valdiContextParamsForQuotedMessage:conversationParticipants:] */

void FUN_10286bab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10286b650(param_3,1,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10286bb30; end: 10286bb47; -[_TtC26StoryReactionMessagePlugin26StoryReactionMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x00010286bb44) */

void FUN_10286bb30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10286bb48; end: 10286bb4f; -[_TtC26StoryReactionMessagePlugin26StoryReactionMessagePlugin pluginType] */

undefined8 FUN_10286bb48(void)

{
  return 0;
}



/* Entry: 10286bb50; end: 10286bb57; -[_TtC26StoryReactionMessagePlugin26StoryReactionMessagePlugin quotedRenderingStyleForMessage:] */

undefined8 FUN_10286bb50(void)

{
  return 0;
}



/* Entry: 10286bb58; end: 10286bbb7; -[_TtC26StoryReactionMessagePlugin26StoryReactionMessagePlugin init] */

void FUN_10286bb58(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StoryReactionMessagePlugin.StoryReactionMessagePlugin",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10286bb84);
  (*pcVar1)();
}



/* Entry: 10286bbb8; end: 10286bc2f; -[_TtC26StoryReactionMessagePlugin26StoryReactionMessagePlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286bbb8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4fc8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4fd0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4fd8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4fe0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4fe8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec4ff0));
  return;
}



/* Entry: 10286bc30; end: 10286bc4f;  */

void FUN_10286bc30(void)

{
  func_0x000107c61168(&PTR_PTR_112867230);
  return;
}



/* Entry: 10286bc50; end: 10286bc8f;  */

void FUN_10286bc50(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10286bc90; end: 10286bc93; -[_TtC26StoryReactionMessagePlugin26StoryReactionMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_10286bc90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10286b650(param_3,0,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10286bc94; end: 10286bc97; -[_TtC26StoryReactionMessagePlugin26StoryReactionMessagePlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:] */

void FUN_10286bc94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10286b650(param_3,0,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10286bc98; end: 10286bea7;  */

void FUN_10286bc98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_11055a420;
  func_0x000107c613fc(&UNK_11055a420,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_10286bea8,puVar1);
  return;
}



/* Entry: 10286bea8; end: 10286bec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286bea8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar6 = &lStack_70;
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = uStack_48;
  func_0x000107c3ff84();
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&uStack_50);
  uVar2 = uStack_50;
  func_0x000107c5dec8();
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  func_0x000100083b20(&uStack_58);
  uVar3 = uStack_58;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  func_0x000100083b20(&lStack_60);
  uVar7 = *(undefined8 *)(lStack_60 + _DAT_11301aef0);
  func_0x000107c615f0(uVar7);
  func_0x000107c61170(lStack_60);
  lVar4 = 0;
  FUN_10286bc30();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112ec4fc8) = 0;
  *(undefined8 *)(lVar5 + _DAT_112ec4fd0) = 0;
  *(undefined8 *)(lVar5 + _DAT_112ec4fd8) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112ec4fe0) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112ec4fe8) = uVar3;
  *(undefined8 *)(lVar5 + _DAT_112ec4ff0) = uVar7;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  *param_1 = plVar6;
  return;
}



/* Entry: 10286bec4; end: 10286bed3; -[_TtC24UnavailableMessagePlugin24UnavailableMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286bec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec5038));
  return;
}



/* Entry: 10286bed4; end: 10286bf07; -[_TtC24UnavailableMessagePlugin24UnavailableMessagePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286bed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec5038);
  *(undefined8 *)(param_1 + _DAT_112ec5038) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10286bf08; end: 10286bf17; -[_TtC24UnavailableMessagePlugin24UnavailableMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286bf08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec5040));
  return;
}



/* Entry: 10286bf18; end: 10286bf4b; -[_TtC24UnavailableMessagePlugin24UnavailableMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286bf18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec5040);
  *(undefined8 *)(param_1 + _DAT_112ec5040) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10286bf4c; end: 10286bf5f; -[_TtC24UnavailableMessagePlugin24UnavailableMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_10286bf4c(void)

{
  FUN_10286c060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10286bf60; end: 10286bf77; -[_TtC24UnavailableMessagePlugin24UnavailableMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x00010286bf74) */

void FUN_10286bf60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10286bf78; end: 10286bf7f; -[_TtC24UnavailableMessagePlugin24UnavailableMessagePlugin pluginType] */

undefined8 FUN_10286bf78(void)

{
  return 0;
}



/* Entry: 10286bf80; end: 10286bfd3; -[_TtC24UnavailableMessagePlugin24UnavailableMessagePlugin init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286bf80(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ec5038) = 0;
  *(undefined8 *)(param_1 + _DAT_112ec5040) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10286bfd4; end: 10286c007;  */

void FUN_10286bfd4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


