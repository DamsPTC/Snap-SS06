/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b43ce4; end: 101b43d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b43ce4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e03410) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e03418) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b43d48; end: 101b43d4f; -[_TtC34MemoriesHeaderBannerImplementation28MemoriesHeaderBannerProvider isPersistent] */

undefined8 FUN_101b43d48(void)

{
  return 1;
}



/* Entry: 101b43d50; end: 101b43f93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code **** FUN_101b43d50(undefined8 param_1)

{
  code ***pppcVar1;
  code ***pppcVar2;
  code *pcVar3;
  code ***pppcVar4;
  undefined *puVar5;
  code ***pppcVar6;
  code ***pppcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  code ****ppppcVar11;
  code ****ppppcVar12;
  undefined *puVar13;
  code ***pppcStack_a0;
  undefined *puStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000100083b20(&pppcStack_a0);
  pppcVar1 = pppcStack_a0;
  func_0x000100083b20(&pppcStack_a0);
  pppcVar2 = pppcStack_a0;
  pppcVar4 = pppcStack_a0;
  func_0x000107c4f07c();
  func_0x000107c61180();
  puVar5 = &UNK_1104484d8;
  func_0x000107c613fc(&UNK_1104484d8,0x20,7);
  *(undefined **)(puVar5 + 0x18) = puStack_98;
  *(code ****)(puVar5 + 0x10) = pppcVar1;
  func_0x000107c615f0(pppcVar1);
  func_0x000107c43d1c();
  pppcVar6 = pppcStack_a0;
  func_0x000107c61180();
  pppcVar7 = pppcVar6;
  func_0x000107c4a058();
  func_0x000107c615e8(pppcVar6);
  puVar8 = &UNK_110448500;
  func_0x000107c613fc(&UNK_110448500,0x18,7);
  *(code ****)(puVar8 + 0x10) = pppcVar4;
  puVar9 = &UNK_110448528;
  func_0x000107c613fc(&UNK_110448528,0x18,7);
  func_0x000107c61614(puVar9 + 0x10,param_1);
  uVar10 = 0x112e03420;
  func_0x0001000285a8(0x112e03420,&UNK_10dad0b60);
  pppcStack_a0 = (code ***)FUN_101b44098;
  uStack_90 = 0;
  uStack_8f = SUB81(pppcVar7,0);
  uStack_88 = 0x101b440a0;
  uStack_78 = 0x101b440a8;
  puStack_98 = puVar5;
  puStack_80 = puVar8;
  puStack_70 = puVar9;
  FUN_101b440b0();
  func_0x000107c615f0(pppcVar4);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(puVar8);
  func_0x000107c6157c(puVar9);
  ppppcVar11 = &pppcStack_a0;
  func_0x000107c5f76c(ppppcVar11,&UNK_1104483d8,uVar10);
  ppppcVar12 = &pppcStack_a0;
  pppcStack_a0 = (code ***)ppppcVar11;
  func_0x0001027004f4(ppppcVar12,1);
  func_0x000107c61174();
  ppppcVar11 = ppppcVar12;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (ppppcVar11 != (code ****)0x0) {
    puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c52b50(ppppcVar11);
    func_0x000107c61170(ppppcVar12);
    func_0x000107c61170(ppppcVar11);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(pppcVar2);
    func_0x000107c61574(puVar9);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(puVar5);
    func_0x000107c615e8(pppcVar4);
    func_0x000107c615e8(pppcVar1);
    return ppppcVar12;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101b43f94);
  (*pcVar3)();
}



/* Entry: 101b43f94; end: 101b43fe7;  */

void FUN_101b43f94(undefined8 param_1)

{
  FUN_101b43100();
  func_0x000107c613fc();
  func_0x000107c615f0(param_1);
  FUN_101b42214();
  return;
}



/* Entry: 101b43fe8; end: 101b4403b;  */

void FUN_101b43fe8(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c41d94();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 101b4403c; end: 101b44097; -[_TtC34MemoriesHeaderBannerImplementation28MemoriesHeaderBannerProvider bannerViewControllerWithDelegate:] */

void FUN_101b4403c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101b43d50(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101b44098; end: 101b440af;  */

void FUN_101b44098(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101b43100();
  func_0x000107c613fc();
  func_0x000107c615f0(uVar1);
  FUN_101b42214();
  return;
}



/* Entry: 101b440b0; end: 101b440ef;  */

void FUN_101b440b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e03428 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d5c58;
  func_0x000107c61520(&UNK_10d9d5c58,&UNK_1104483d8);
  puRam0000000112e03428 = puVar1;
  return;
}



/* Entry: 101b440f0; end: 101b4414f; -[_TtC34MemoriesHeaderBannerImplementation28MemoriesHeaderBannerProvider init] */

void FUN_101b440f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesHeaderBannerImplementation.MemoriesHeaderBannerProvider",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b4411c);
  (*pcVar1)();
}



/* Entry: 101b44150; end: 101b4415f;  */

undefined1  [16] FUN_101b44150(void)

{
  return ZEXT816(0x110448550);
}



/* Entry: 101b44160; end: 101b44197; -[_TtC34MemoriesHeaderBannerImplementation28MemoriesHeaderBannerProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b4417c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b44180) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b44160(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e03410));
  return;
}



/* Entry: 101b44198; end: 101b441b7;  */

void FUN_101b44198(void)

{
  func_0x000107c61168(&PTR_PTR_1127f9418);
  return;
}



/* Entry: 101b441b8; end: 101b441ff;  */

void FUN_101b441b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000cad14();
  uVar1 = 0;
  func_0x0001002aec20(0);
  func_0x000107c610f8();
  func_0x000103a7f4b8(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 101b44200; end: 101b44217;  */

void FUN_101b44200(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x0001000cad14();
  uVar1 = 0;
  func_0x0001002aec20(0);
  func_0x000107c610f8();
  func_0x000103a7f4b8(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 101b44218; end: 101b443af;  */

undefined1  [16] FUN_101b44218(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffed;
  func_0x000107c5fadc(0xd000000000000013,0x800000010effe940);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010effe960);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b442e4);
  (*pcVar1)();
}



/* Entry: 101b443b0; end: 101b443f7;  */

undefined1  [16] FUN_101b443b0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x735f72656e6e6162;
  func_0x000107c5fadc(0x735f72656e6e6162,0xef656c7469746275);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010effe960);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b444a8);
  (*pcVar1)();
}



/* Entry: 101b443f8; end: 101b444f3;  */

undefined1  [16] FUN_101b443f8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010effe960);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b444a8);
  (*pcVar1)();
}



/* Entry: 101b444f4; end: 101b444fb;  */

void FUN_101b444f4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  FUN_101b45b24();
  func_0x000107c610f8();
  func_0x000107c6157c();
  FUN_101b4452c();
  *param_1 = unaff_x20;
  param_1[1] = &PTR_DAT_110448678;
  return;
}



/* Entry: 101b444fc; end: 101b4452b;  */

void FUN_101b444fc(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_101b4452c(param_1);
  return;
}



/* Entry: 101b4452c; end: 101b44677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101b4452c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  func_0x000107c614f0();
  lVar1 = _DAT_112e03468;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000d6600();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112e03470) = param_1;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c6157c(param_1);
  puVar3 = &stack0xffffffffffffffc0;
  func_0x000107c61154(puVar3,puVar2);
  puVar2 = &UNK_110448610;
  func_0x000107c613fc(&UNK_110448610,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,puVar3);
  puVar4 = &UNK_110448638;
  func_0x000107c613fc(&UNK_110448638,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  pcStack_50 = FUN_101b45ae8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110448650;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar6 = (undefined1 *)ppuVar5;
  func_0x000107c60bc4();
  func_0x000107c6157c(puVar2);
  func_0x000107c60bd0(ppuVar5);
  puVar7 = puVar6;
  func_0x000107c60bc4(puVar6);
  func_0x000107c60bd0(puVar6);
  func_0x000107c60bd0(puVar7);
  puVar4 = puStack_48;
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar4);
  return puVar3;
}



/* Entry: 101b44678; end: 101b447ab;  */

void FUN_101b44678(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 auStack_60 [8];
  long alStack_58 [3];
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000100083b20(alStack_58);
  lVar2 = alStack_58[0];
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(alStack_58[0]);
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    lVar2 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(auStack_60 + -extraout_x8,1,1,lVar2);
    lVar2 = lVar1;
    func_0x000107c61174(lVar1);
    FUN_101b45bd0(auStack_60 + -extraout_x8);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61428(param_2 + 0x10,alStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_101b447ac();
    func_0x000107c61170(param_2);
  }
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 101b447ac; end: 101b44993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b447ac(void)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar5 = 0x112e00a00;
  func_0x0001000285a8(0x112e00a00,&UNK_10d9d5e90);
  lStack_88 = *(long *)(lVar5 + -8);
  lStack_80 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_88 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar7 = (long)&uStack_90 - extraout_x8;
  lVar5 = 0x112e009e8;
  func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = _DAT_112e03468;
  func_0x000107c61428(unaff_x20 + _DAT_112e03468,auStack_78,0,0);
  lVar8 = *(long *)(unaff_x20 + lVar8);
  puVar9 = (ulong *)(lVar8 + 0x40);
  uStack_90 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (-uStack_90 < 0x40) {
    uVar11 = ~(-1L << (-uStack_90 & 0x3f));
  }
  uVar11 = uVar11 & *puVar9;
  uVar6 = 0x3f - uStack_90;
  func_0x000107c61438(lVar8,2);
  lVar10 = 0;
  lVar1 = lVar10;
  while( true ) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar2 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      (**(code **)(lVar12 + 0x10))
                (lVar7 - extraout_x8_00,
                 *(long *)(lVar8 + 0x38) +
                 *(long *)(lVar12 + 0x48) * (LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) | lVar1 << 6),
                 lVar5);
      func_0x000107c5fd24(lVar7);
      (**(code **)(lStack_88 + 8))(lVar7,lStack_80);
      (**(code **)(lVar12 + 8))(lVar7 - extraout_x8_00,lVar5);
      lVar10 = lVar1;
    }
    bVar4 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar4) break;
    if ((long)(uVar6 >> 6) <= lVar1) {
      func_0x000107c6142c(lVar8);
      func_0x0001000ee560(lVar8,puVar9,~uStack_90,lVar10,0);
      return;
    }
    uVar11 = puVar9[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101b44994);
  (*pcVar3)();
}



/* Entry: 101b44994; end: 101b44adf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b44994(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  code *pcVar6;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar3 = lStack_38;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  lVar1 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar1 != 0) {
    uVar2 = 0xd000000000000015;
    func_0x000107c5fadc(0xd000000000000015,0x800000010effe9a0);
    lVar3 = lVar1;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar1);
    if (lVar3 != 0) {
      uVar2 = 0x112d373e8;
      func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
      lVar3 = 0;
      func_0x000107c5eea4();
      uVar4 = param_1;
      func_0x000107c6147c(param_1,&lStack_38,uVar2,lVar3,6);
      pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
      uVar5 = (uint)uVar4 ^ 1;
      goto LAB_101b44ac8;
    }
  }
  lVar3 = 0;
  func_0x000107c5eea4();
  pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  uVar5 = 1;
LAB_101b44ac8:
  (*pcVar6)(param_1,uVar5,1,lVar3);
  return;
}



/* Entry: 101b44ae0; end: 101b44f3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b44ae0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar6;
  long lVar7;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined8 uStack_80;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar11 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)puVar11 - extraout_x8_00;
  lVar7 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar7 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_88 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar13 = lVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = uVar13 - extraout_x12_00;
  uStack_80 = *(undefined8 *)(unaff_x20 + _DAT_112e03470);
  func_0x000100083b20(&lStack_68);
  lVar7 = lStack_68;
  lVar2 = lStack_68;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  lVar7 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar7 == 0) {
LAB_101b44ce0:
    pcVar6 = *(code **)(lVar12 + 0x38);
    uVar5 = 1;
  }
  else {
    uVar3 = 0xd000000000000015;
    func_0x000107c5fadc(0xd000000000000015,0x800000010effe9a0);
    lVar2 = lVar7;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar7);
    if (lVar2 == 0) goto LAB_101b44ce0;
    uVar3 = 0x112d373e8;
    lStack_68 = lVar2;
    func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
    lVar7 = lVar9;
    func_0x000107c6147c(lVar9,&lStack_68,uVar3,lVar1,6);
    pcVar6 = *(code **)(lVar12 + 0x38);
    uVar5 = (uint)lVar7 ^ 1;
  }
  (*pcVar6)(lVar9,uVar5,1,lVar1);
  lVar8 = (long)*(int *)(lVar8 + 0x30);
  func_0x000101b45b84(lVar9,lVar10,0x112d373d8,&UNK_10d9014c0);
  func_0x000101b45b84(param_1,lVar10 + lVar8,0x112d373d8,&UNK_10d9014c0);
  pcVar6 = *(code **)(lVar12 + 0x30);
  lVar7 = lVar10;
  (*pcVar6)(lVar10,1,lVar1);
  if ((int)lVar7 == 1) {
    lVar8 = lVar10 + lVar8;
    (*pcVar6)(lVar8,1,lVar1);
    if ((int)lVar8 == 1) {
      func_0x000100c95ed0(lVar10,0x112d373d8,&UNK_10d9014c0);
      goto LAB_101b44e68;
    }
LAB_101b44dcc:
    func_0x000100c95ed0(lVar10,0x112d373d0,&UNK_10d90f8f0);
  }
  else {
    func_0x000101b45b84(lVar10,uVar13,0x112d373d8,&UNK_10d9014c0);
    lVar7 = lVar10 + lVar8;
    (*pcVar6)(lVar7,1,lVar1);
    if ((int)lVar7 == 1) {
      (**(code **)(lVar12 + 8))(uVar13,lVar1);
      goto LAB_101b44dcc;
    }
    (**(code **)(lVar12 + 0x20))(puVar11,lVar10 + lVar8,lVar1);
    uVar3 = 0x112d373e0;
    func_0x0001000fb874(0x112d373e0,PTR___s10Foundation4DateVMa_110350bb8,
                        PTR___s10Foundation4DateVSQAAMc_110350be0);
    uVar4 = uVar13;
    func_0x000107c5fab8(uVar13,puVar11,lVar1,uVar3);
    pcVar6 = *(code **)(lVar12 + 8);
    (*pcVar6)(puVar11,lVar1);
    (*pcVar6)(uVar13,lVar1);
    func_0x000100c95ed0(lVar10,0x112d373d8,&UNK_10d9014c0);
    if ((uVar4 & 1) != 0) goto LAB_101b44e68;
  }
  func_0x000100083b20(&lStack_68);
  lVar8 = lStack_68;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(lStack_68);
  lVar7 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  lVar8 = lStack_88;
  if (lVar7 != 0) {
    func_0x000101b45b84(param_1,lStack_88,0x112d373d8,&UNK_10d9014c0);
    FUN_101b45bd0(lVar8);
    func_0x000107c61170(lVar7);
  }
  FUN_101b447ac();
LAB_101b44e68:
  func_0x000100c95ed0(param_1,0x112d373d8,&UNK_10d9014c0);
  func_0x000100c95ed0(lVar9,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 101b44f40; end: 101b44f73; -[_TtC41MemoriesQuickCutPreferencesImplementation34DefaultMemoriesQuickCutPreferences isFirstTimeQuickCutUser] */

uint FUN_101b44f40(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101b44f74();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101b44f74; end: 101b454cf;  */

uint FUN_101b44f74(void)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar11 = 0x112d373d0;
  puStack_68 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar8 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar10 - extraout_x12_00;
  FUN_101b44994(lVar9);
  (**(code **)(lVar7 + 0x38))(lVar10,1,1,lVar2);
  lVar11 = (long)*(int *)(lVar11 + 0x30);
  func_0x000101b45b84(lVar9,lVar6,0x112d373d8,&UNK_10d9014c0);
  func_0x000101b45b84(lVar10,lVar6 + lVar11,0x112d373d8,&UNK_10d9014c0);
  pcVar12 = *(code **)(lVar7 + 0x30);
  lVar3 = lVar6;
  (*pcVar12)(lVar6,1,lVar2);
  if ((int)lVar3 == 1) {
    func_0x000100c95ed0(lVar10,0x112d373d8,&UNK_10d9014c0);
    func_0x000100c95ed0(lVar9,0x112d373d8,&UNK_10d9014c0);
    lVar11 = lVar6 + lVar11;
    (*pcVar12)(lVar11,1,lVar2);
    if ((int)lVar11 == 1) {
      func_0x000100c95ed0(lVar6,0x112d373d8,&UNK_10d9014c0);
      uVar5 = 1;
      goto LAB_101b452a0;
    }
  }
  else {
    func_0x000101b45b84(lVar6,lVar8,0x112d373d8,&UNK_10d9014c0);
    lVar3 = lVar6 + lVar11;
    (*pcVar12)(lVar3,1,lVar2);
    puVar1 = puStack_68;
    if ((int)lVar3 != 1) {
      (**(code **)(lVar7 + 0x20))(puStack_68,lVar6 + lVar11,lVar2);
      uVar4 = 0x112d373e0;
      func_0x0001000fb874(0x112d373e0,PTR___s10Foundation4DateVMa_110350bb8,
                          PTR___s10Foundation4DateVSQAAMc_110350be0);
      lVar11 = lVar8;
      func_0x000107c5fab8(lVar8,puVar1,lVar2,uVar4);
      uVar5 = (uint)lVar11;
      pcVar12 = *(code **)(lVar7 + 8);
      (*pcVar12)(puVar1,lVar2);
      func_0x000100c95ed0(lVar10,0x112d373d8,&UNK_10d9014c0);
      func_0x000100c95ed0(lVar9,0x112d373d8,&UNK_10d9014c0);
      (*pcVar12)(lVar8,lVar2);
      func_0x000100c95ed0(lVar6,0x112d373d8,&UNK_10d9014c0);
      goto LAB_101b452a0;
    }
    func_0x000100c95ed0(lVar10,0x112d373d8,&UNK_10d9014c0);
    func_0x000100c95ed0(lVar9,0x112d373d8,&UNK_10d9014c0);
    (**(code **)(lVar7 + 8))(lVar8,lVar2);
  }
  func_0x000100c95ed0(lVar6,0x112d373d0,&UNK_10d90f8f0);
  uVar5 = 0;
LAB_101b452a0:
  return uVar5 & 1;
}



/* Entry: 101b454d0; end: 101b455e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b454d0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x112e00a18;
  func_0x0001000285a8(0x112e00a18,&UNK_10d9de5a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_60 + -extraout_x8;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    lVar1 = 0x112e009e8;
    func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,1,1,lVar1);
  }
  else {
    func_0x000107c61428(param_2 + _DAT_112e03468,auStack_60,0x21,0);
    func_0x000100c95f10(puVar2,param_3);
    func_0x000107c614a8(auStack_60);
    func_0x000107c61170(param_2);
  }
  func_0x000100c95ed0(puVar2,0x112e00a18,&UNK_10d9de5a0);
  return;
}



/* Entry: 101b455e8; end: 101b45647; -[_TtC41MemoriesQuickCutPreferencesImplementation34DefaultMemoriesQuickCutPreferences init] */

void FUN_101b455e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesQuickCutPreferencesImplementation.DefaultMemoriesQuickCutPreferences"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b45614);
  (*pcVar1)();
}



/* Entry: 101b45648; end: 101b4567f; -[_TtC41MemoriesQuickCutPreferencesImplementation34DefaultMemoriesQuickCutPreferences .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b45648(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e03470));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e03468));
  return;
}



/* Entry: 101b45680; end: 101b45687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b45680(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  code *pcVar6;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar3 = lStack_38;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  lVar1 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar1 != 0) {
    uVar2 = 0xd000000000000015;
    func_0x000107c5fadc(0xd000000000000015,0x800000010effe9a0);
    lVar3 = lVar1;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar1);
    if (lVar3 != 0) {
      uVar2 = 0x112d373e8;
      func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
      lVar3 = 0;
      func_0x000107c5eea4();
      uVar4 = param_1;
      func_0x000107c6147c(param_1,&lStack_38,uVar2,lVar3,6);
      pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
      uVar5 = (uint)uVar4 ^ 1;
      goto LAB_101b44ac8;
    }
  }
  lVar3 = 0;
  func_0x000107c5eea4();
  pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  uVar5 = 1;
LAB_101b44ac8:
  (*pcVar6)(param_1,uVar5,1,lVar3);
  return;
}



/* Entry: 101b45688; end: 101b45723;  */

undefined1  [16] FUN_101b45688(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  *param_1 = unaff_x20;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar3 = *(undefined8 *)(*(long *)(lVar1 + -8) + 0x40);
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    uVar2 = uVar3;
    func_0x000107c610a0();
    param_1[1] = uVar2;
    func_0x000107c610a0();
  }
  else {
    uVar2 = uVar3;
    func_0x000107c61458(uVar3,0xf467);
    param_1[1] = uVar2;
    func_0x000107c61458(uVar3,0xf467);
  }
  param_1[2] = uVar3;
  FUN_101b44994(uVar3);
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = FUN_101b45724;
  return auVar4;
}



/* Entry: 101b45724; end: 101b457ab;  */

/* WARNING: Possible PIC construction at 0x000101b45790: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b45794) */

void FUN_101b45724(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  if ((param_2 & 1) == 0) {
    FUN_101b44ae0(uVar2);
  }
  else {
    func_0x000101b45b84(uVar2,uVar1,0x112d373d8,&UNK_10d9014c0);
    FUN_101b44ae0(uVar1);
    func_0x000100c95ed0(uVar2,0x112d373d8,&UNK_10d9014c0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar2);
  return;
}



/* Entry: 101b457ac; end: 101b4585b;  */

void FUN_101b457ac(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x12;
  undefined1 auStack_50 [16];
  
  func_0x0001000285a8(0x112e009f0,&UNK_10d9d0d60);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (**(code **)(extraout_x8 + 0x68))
            (auStack_50 + -extraout_x12,
             *(undefined4 *)
              PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20);
  func_0x000107c5fd48(param_1,PTR___sytN_11034f1b0 + 8,auStack_50 + -extraout_x12,FUN_101b45bcc,
                      auStack_50,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 101b4585c; end: 101b45ae7;  */

void FUN_101b4585c(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  long extraout_x8_00;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *unaff_x20;
  long lVar14;
  long lVar15;
  ulong uStack_68;
  
  lVar3 = 0x112e009e8;
  func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffff40 + -extraout_x8;
  lVar4 = 0;
  func_0x000107c5eec8();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar9 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112e034a0,&UNK_10d9d5e88);
  lVar15 = *unaff_x20;
  lVar5 = lVar15;
  func_0x000107c6048c();
  if (*(long *)(lVar15 + 0x10) == 0) {
    func_0x000107c61574(lVar15);
LAB_101b45ac0:
    *unaff_x20 = lVar5;
    return;
  }
  lVar1 = lVar15 + 0x40;
  uVar10 = (1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if ((lVar5 != lVar15) || (lVar1 + uVar10 * 8 <= lVar5 + 0x40U)) {
    func_0x000107c610b8(lVar5 + 0x40U,lVar1,uVar10 << 3);
  }
  lVar13 = 0;
  *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar15 + 0x10);
  uVar10 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uStack_68 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uStack_68 = ~(-1L << (uVar10 & 0x3f));
  }
  uStack_68 = uStack_68 & *(ulong *)(lVar15 + 0x40);
  if (uStack_68 == 0) goto LAB_101b459dc;
  do {
    uVar11 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
    uStack_68 = uStack_68 - 1 & uStack_68;
    while( true ) {
      uVar11 = LZCOUNT(uVar11) | lVar13 << 6;
      lVar12 = *(long *)(lVar8 + 0x48) * uVar11;
      (**(code **)(lVar8 + 0x10))(lVar9,*(long *)(lVar15 + 0x30) + lVar12,lVar4);
      lVar14 = *(long *)(lVar6 + 0x48) * uVar11;
      (**(code **)(lVar6 + 0x10))(puVar7,*(long *)(lVar15 + 0x38) + lVar14,lVar3);
      (**(code **)(lVar8 + 0x20))(*(long *)(lVar5 + 0x30) + lVar12,lVar9,lVar4);
      (**(code **)(lVar6 + 0x20))(*(long *)(lVar5 + 0x38) + lVar14,puVar7,lVar3);
      if (uStack_68 != 0) break;
LAB_101b459dc:
      do {
        lVar12 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101b45ae8);
          (*pcVar2)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar12) {
          func_0x000107c61574(lVar15);
          goto LAB_101b45ac0;
        }
        uStack_68 = *(ulong *)(lVar1 + lVar12 * 8);
        lVar13 = lVar13 + 1;
      } while (uStack_68 == 0);
      uVar11 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uStack_68 = uStack_68 - 1 & uStack_68;
      lVar13 = lVar12;
    }
  } while( true );
}



/* Entry: 101b45ae8; end: 101b45b23;  */

void FUN_101b45ae8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 auStack_60 [8];
  long alStack_58 [3];
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000100083b20(alStack_58);
  lVar2 = alStack_58[0];
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(alStack_58[0]);
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    lVar2 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(auStack_60 + -extraout_x8,1,1,lVar2);
    lVar2 = lVar1;
    func_0x000107c61174(lVar1);
    FUN_101b45bd0(auStack_60 + -extraout_x8);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61428(lVar3 + 0x10,alStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    FUN_101b447ac();
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 101b45b24; end: 101b45b43;  */

void FUN_101b45b24(void)

{
  func_0x000107c61168(&PTR_PTR_1127f94e0);
  return;
}



/* Entry: 101b45b44; end: 101b45bcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b45b44(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  ulong uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = 0;
  func_0x000107c5eec8();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0x112e00a18;
  func_0x0001000285a8(0x112e00a18,&UNK_10d9de5a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar1 = 0x112e009e8;
    func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar4,1,1,lVar1);
  }
  else {
    func_0x000107c61428(lVar2 + _DAT_112e03468,auStack_60,0x21,0);
    func_0x000100c95f10(puVar4,unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)));
    func_0x000107c614a8(auStack_60);
    func_0x000107c61170(lVar2);
  }
  func_0x000100c95ed0(puVar4,0x112e00a18,&UNK_10d9de5a0);
  return;
}



/* Entry: 101b45bcc; end: 101b45bcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b45bcc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  ulong uVar5;
  long extraout_x12;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lStack_80 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0x112e00a18;
  uStack_88 = param_1;
  func_0x0001000285a8(0x112e00a18,&UNK_10d9de5a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_90 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar13 = *(long *)(lVar2 + -8);
  lVar11 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar12 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar10 - extraout_x12;
  func_0x000107c5eec4(lVar9);
  pcVar6 = *(code **)(lVar13 + 0x10);
  (*pcVar6)(lVar10,lVar9,lVar2);
  lVar1 = 0x112e009e8;
  func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
  lVar8 = *(long *)(lVar1 + -8);
  (**(code **)(lVar8 + 0x10))(puVar12,param_1,lVar1);
  (**(code **)(lVar8 + 0x38))(puVar12,0,1,lVar1);
  lVar8 = lStack_80;
  func_0x000107c61428(lStack_80 + _DAT_112e03468,auStack_78,0x21,0);
  func_0x0001000f2ba4(puVar12,lVar10);
  func_0x000107c614a8(auStack_78);
  puVar3 = &UNK_110448610;
  func_0x000107c613fc(&UNK_110448610,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,lVar8);
  (*pcVar6)(lVar10,lVar9,lVar2);
  uVar5 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar7 = uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff);
  puVar4 = &UNK_1104486d0;
  func_0x000107c613fc(&UNK_1104486d0,uVar7 + lVar11,uVar5 | 7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  (**(code **)(lVar13 + 0x20))(puVar4 + uVar7,lVar10,lVar2);
  func_0x000107c5fd1c(FUN_101b45b44,puVar4,lVar1);
  (**(code **)(lVar13 + 8))(lVar9,lVar2);
  return;
}



/* Entry: 101b45bd0; end: 101b45ce7;  */

void FUN_101b45bd0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x0001009f0578(param_1,puVar3);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  puVar4 = puVar3;
  (**(code **)(lVar5 + 0x30))(puVar3,1,lVar1);
  if ((int)puVar4 == 1) {
    func_0x0001000d1dcc(puVar3);
    puVar4 = (undefined1 *)0x0;
  }
  else {
    func_0x000107c5ee70();
    (**(code **)(lVar5 + 8))(puVar3,lVar1);
  }
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010effe9a0);
  func_0x000107c56bd8();
  func_0x000107c615e8(puVar4);
  func_0x000107c61170(uVar2);
  func_0x0001000d1dcc(param_1);
  return;
}



/* Entry: 101b45ce8; end: 101b45cf7;  */

undefined1  [16] FUN_101b45ce8(void)

{
  return ZEXT816(0x110448780);
}



/* Entry: 101b45cf8; end: 101b45e3f;  */

void FUN_101b45cf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e034b0,&UNK_10d9d5ee0);
  puVar1 = &UNK_110448828;
  func_0x000107c613fc(&UNK_110448828,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x101b45d78,puVar1);
  return;
}



/* Entry: 101b45e40; end: 101b45e4f;  */

undefined1  [16] FUN_101b45e40(void)

{
  return ZEXT816(0x110448850);
}



/* Entry: 101b45e50; end: 101b45fd3;  */

void FUN_101b45e50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e034b0,&UNK_10d9d5ee0);
  puVar1 = &UNK_1104488f8;
  func_0x000107c613fc(&UNK_1104488f8,0x98,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_14;
  *(undefined8 *)(puVar1 + 0x38) = param_13;
  *(undefined8 *)(puVar1 + 0x40) = param_15;
  *(undefined8 *)(puVar1 + 0x48) = param_16;
  *(undefined8 *)(puVar1 + 0x50) = param_17;
  *(undefined8 *)(puVar1 + 0x58) = param_5;
  *(undefined8 *)(puVar1 + 0x60) = param_6;
  *(undefined8 *)(puVar1 + 0x68) = param_7;
  *(undefined8 *)(puVar1 + 0x70) = param_9;
  *(undefined8 *)(puVar1 + 0x78) = param_10;
  *(undefined8 *)(puVar1 + 0x80) = param_11;
  *(undefined8 *)(puVar1 + 0x88) = param_18;
  *(undefined8 *)(puVar1 + 0x90) = param_12;
  func_0x000107c6157c();
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_12);
  func_0x0001000823a8(FUN_101b45fd4,puVar1);
  return;
}



/* Entry: 101b45fd4; end: 101b462c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b45fd4(undefined8 *param_1)

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
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  long unaff_x20;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  uVar19 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar22 = *(undefined8 *)(unaff_x20 + 0x90);
  puVar16 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar17 = &UNK_110448940;
  func_0x000107c613fc(&UNK_110448940,0x20,7);
  *(undefined8 *)(puVar17 + 0x10) = uVar19;
  *(undefined8 *)(puVar17 + 0x18) = uVar8;
  pcStack_88 = FUN_101b462d8;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_101b4638c;
  puStack_90 = &UNK_110448958;
  ppuVar18 = &puStack_a8;
  puStack_80 = puVar17;
  func_0x000107c60bc4(ppuVar18);
  puVar17 = puStack_80;
  func_0x000107c6157c(uVar19);
  func_0x000107c6157c(uVar8);
  func_0x000107c61574(puVar17);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar18);
  puVar17 = &UNK_110448990;
  func_0x000107c613fc(&UNK_110448990,0x98,7);
  *(undefined8 *)(puVar17 + 0x10) = uVar1;
  *(undefined8 *)(puVar17 + 0x18) = uVar9;
  *(undefined **)(puVar17 + 0x20) = puVar16;
  *(undefined8 *)(puVar17 + 0x28) = uVar8;
  *(undefined8 *)(puVar17 + 0x30) = uVar2;
  *(undefined8 *)(puVar17 + 0x38) = uVar10;
  *(undefined8 *)(puVar17 + 0x40) = uVar3;
  *(undefined8 *)(puVar17 + 0x48) = uVar11;
  *(undefined8 *)(puVar17 + 0x50) = uVar4;
  *(undefined8 *)(puVar17 + 0x58) = uVar12;
  *(undefined8 *)(puVar17 + 0x60) = uVar5;
  *(undefined8 *)(puVar17 + 0x68) = uVar13;
  *(undefined8 *)(puVar17 + 0x70) = uVar6;
  *(undefined8 *)(puVar17 + 0x78) = uVar14;
  *(undefined8 *)(puVar17 + 0x80) = uVar7;
  *(undefined8 *)(puVar17 + 0x88) = uVar15;
  *(undefined8 *)(puVar17 + 0x90) = uVar22;
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c61174(puVar16);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar22);
  func_0x000107c6157c(puVar17);
  func_0x000100083b20(&lStack_b0);
  uVar19 = *(undefined8 *)(lStack_b0 + _DAT_11302e640);
  func_0x000107c61174(uVar19);
  func_0x000107c61170(lStack_b0);
  puVar20 = PTR_PTR_1126a8a88;
  func_0x000107c610f8(PTR_PTR_1126a8a88);
  pcStack_88 = FUN_101b463e0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_101b46890;
  puStack_90 = &UNK_1104489a8;
  ppuVar18 = &puStack_a8;
  puStack_80 = puVar17;
  func_0x000107c60bc4(ppuVar18);
  func_0x000107c48534(puVar20);
  func_0x000107c60bd0(ppuVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61574(puStack_80);
  puVar21 = PTR_PTR_1126a8a90;
  func_0x000107c610f8();
  func_0x000107c48530();
  func_0x000107c61170(puVar20);
  func_0x000107c61170(puVar16);
  func_0x000107c61574(puVar17);
  *param_1 = puVar21;
  return;
}



/* Entry: 101b462c8; end: 101b462d7;  */

undefined1  [16] FUN_101b462c8(void)

{
  return ZEXT816(0x110448920);
}



/* Entry: 101b462d8; end: 101b4638b;  */

undefined * FUN_101b462d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4ec80(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000100083b20(&uStack_40);
  uVar2 = uStack_40;
  func_0x000107c3fa04(uStack_40);
  func_0x000107c61180();
  func_0x000107c61170(uStack_40);
  puVar3 = PTR_PTR_1126a8aa0;
  func_0x000107c610f8(PTR_PTR_1126a8aa0);
  func_0x000107c492dc();
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar1);
  return puVar3;
}



/* Entry: 101b4638c; end: 101b463c3;  */

void FUN_101b4638c(long param_1)

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



/* Entry: 101b463c4; end: 101b463df;  */

void FUN_101b463c4(long param_1,long param_2)

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



/* Entry: 101b463e0; end: 101b4688f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101b463e0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
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
  undefined *puVar18;
  undefined8 uVar19;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long alStack_70 [2];
  
  func_0x000100083b20(alStack_70);
  lVar3 = alStack_70[0];
  lVar2 = alStack_70[0];
  func_0x000107c45064();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000100083b20(alStack_70);
  uVar4 = *(undefined8 *)(alStack_70[0] + _DAT_11302e240);
  func_0x000107c61174();
  func_0x000107c61170(alStack_70[0]);
  func_0x000100083b20(&lStack_78);
  uVar5 = *(undefined8 *)(lStack_78 + _DAT_11302e248);
  func_0x000107c61174();
  func_0x000107c61170(lStack_78);
  func_0x000100083b20(&lStack_80);
  lVar2 = lStack_80;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_80);
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101b4688c);
    (*pcVar1)();
  }
  func_0x000100083b20(&lStack_88);
  uVar6 = *(undefined8 *)(lStack_88 + _DAT_112fee608);
  func_0x000107c61174();
  func_0x000107c61170(lStack_88);
  func_0x000100083b20(&lStack_90);
  lVar7 = lStack_90;
  func_0x000107c444a0();
  func_0x000107c61180();
  func_0x000107c61170(lStack_90);
  if (lVar7 != 0) {
    func_0x000100083b20(&uStack_98);
    uVar8 = uStack_98;
    func_0x000107c439fc();
    func_0x000107c61180();
    func_0x000107c61170(uStack_98);
    func_0x000100083b20(&lStack_a0);
    uVar9 = *(undefined8 *)(lStack_a0 + _DAT_11307d3e0);
    func_0x000107c615f0();
    func_0x000107c61170(lStack_a0);
    func_0x000100083b20(&lStack_a8);
    uVar10 = *(undefined8 *)(lStack_a8 + _DAT_11302e640);
    func_0x000107c61174();
    func_0x000107c61170(lStack_a8);
    func_0x000100083b20(&lStack_b0);
    uVar11 = *(undefined8 *)(lStack_b0 + _DAT_112ff1c20);
    func_0x000107c61174();
    func_0x000107c61170(lStack_b0);
    func_0x000100083b20(&uStack_b8);
    uVar12 = uStack_b8;
    func_0x000107c51d00();
    func_0x000107c61180();
    func_0x000107c61170(uStack_b8);
    func_0x000100083b20(&uStack_c0);
    uVar13 = uStack_c0;
    func_0x000107c42eac();
    func_0x000107c61180();
    func_0x000107c61170(uStack_c0);
    func_0x000100083b20(&uStack_c8);
    uVar14 = uStack_c8;
    func_0x000107c5bf98();
    func_0x000107c61180();
    func_0x000107c61170(uStack_c8);
    func_0x000100083b20(&lStack_d0);
    uVar15 = *(undefined8 *)(lStack_d0 + _DAT_113080ad0);
    func_0x000107c61174();
    func_0x000107c61170(lStack_d0);
    func_0x000100083b20(&uStack_d8);
    uVar16 = uStack_d8;
    func_0x000107c42e5c();
    func_0x000107c61180();
    func_0x000107c61170(uStack_d8);
    func_0x000100083b20(&lStack_e0);
    uVar17 = *(undefined8 *)(lStack_e0 + _DAT_112fee5d8);
    func_0x000107c61174();
    func_0x000107c61170(lStack_e0);
    func_0x000100083b20(&lStack_e8);
    uVar19 = *(undefined8 *)(lStack_e8 + _DAT_1130807f0);
    func_0x000107c615f0(uVar19);
    func_0x000107c61170(lStack_e8);
    puVar18 = PTR_PTR_1126a8a98;
    func_0x000107c610f8();
    func_0x000107c46df0();
    func_0x000107c615e8(uVar19);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar15);
    func_0x000107c615e8(uVar14);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar10);
    func_0x000107c615e8(uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c615e8(lVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(lVar3);
    return puVar18;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b46890);
  (*pcVar1)();
}



/* Entry: 101b46890; end: 101b468d7;  */

void FUN_101b46890(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 101b468d8; end: 101b468df;  */

void FUN_101b468d8(long param_1,long param_2)

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



/* Entry: 101b468e0; end: 101b4694f;  */

void FUN_101b468e0(void)

{
  func_0x0001000285a8(0x112e034b0,&UNK_10d9d5ee0);
  func_0x0001000823a8(0x101b46920,0);
  return;
}



/* Entry: 101b46950; end: 101b4695f;  */

undefined1  [16] FUN_101b46950(void)

{
  return ZEXT816(0x110448a88);
}



/* Entry: 101b46960; end: 101b46aa3;  */

void FUN_101b46960(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e034b0,&UNK_10d9d5ee0);
  puVar1 = &UNK_110448b30;
  func_0x000107c613fc(&UNK_110448b30,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x101b469e0,puVar1);
  return;
}



/* Entry: 101b46aa4; end: 101b46ab3;  */

undefined1  [16] FUN_101b46aa4(void)

{
  return ZEXT816(0x110448b58);
}



/* Entry: 101b46ab4; end: 101b46ae7;  */

void FUN_101b46ab4(long *param_1,long param_2)

{
  FUN_101b46c94();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *param_1 = param_2;
  return;
}



/* Entry: 101b46ae8; end: 101b46af3; -[_TtC41ContentSDNPublishingServiceImplementation41ContentSDNPublishingServiceImplementation nonfriendStoriesSDNObservable] */

void FUN_101b46ae8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_101b46af4();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101b46af4; end: 101b46b57;  */

undefined * FUN_101b46af4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x10);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    *(undefined **)(unaff_x20 + 0x10) = puVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar1);
  return puVar2;
}



/* Entry: 101b46b58; end: 101b46b83; -[_TtC41ContentSDNPublishingServiceImplementation41ContentSDNPublishingServiceImplementation setNonfriendStoriesSDNObservable:] */

void FUN_101b46b58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101b46b84; end: 101b46b8f; -[_TtC41ContentSDNPublishingServiceImplementation41ContentSDNPublishingServiceImplementation friendStoriesSDNObservable] */

void FUN_101b46b84(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_101b46bc8();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101b46b90; end: 101b46bc7;  */

void FUN_101b46b90(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  (*param_3)();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101b46bc8; end: 101b46c2b;  */

undefined * FUN_101b46bc8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x18);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined **)(unaff_x20 + 0x18) = puVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar1);
  return puVar2;
}



/* Entry: 101b46c2c; end: 101b46c57; -[_TtC41ContentSDNPublishingServiceImplementation41ContentSDNPublishingServiceImplementation setFriendStoriesSDNObservable:] */

void FUN_101b46c2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101b46c58; end: 101b46c83;  */

void FUN_101b46c58(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b46c84; end: 101b46c93;  */

undefined1  [16] FUN_101b46c84(void)

{
  return ZEXT816(0x110448bf8);
}



/* Entry: 101b46c94; end: 101b46cb3;  */

void FUN_101b46c94(void)

{
  func_0x000107c61168(&PTR_PTR_112e03500);
  return;
}



/* Entry: 101b46cb4; end: 101b46cff;  */

void FUN_101b46cb4(undefined8 param_1)

{
  func_0x0001000285a8(0x112df8910,&UNK_10d9c8e80);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101b46d70,param_1);
  return;
}



/* Entry: 101b46d00; end: 101b46d6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b46d00(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  lVar1 = 0;
  FUN_101b46e28();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e03590) = uStack_38;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 101b46d70; end: 101b46db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b46d70(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  lVar1 = 0;
  FUN_101b46e28();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e03590) = uStack_38;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 101b46db8; end: 101b46e17; -[_TtC40AddFriendsPageBillboardFSTSignalProvider40AddFriendsPageBillboardFSTSignalProvider init] */

void FUN_101b46db8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddFriendsPageBillboardFSTSignalProvider.AddFriendsPageBillboardFSTSignalProvider"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b46de4);
  (*pcVar1)();
}



/* Entry: 101b46e18; end: 101b46e27; -[_TtC40AddFriendsPageBillboardFSTSignalProvider40AddFriendsPageBillboardFSTSignalProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b46e18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e03590));
  return;
}



/* Entry: 101b46e28; end: 101b46e47;  */

void FUN_101b46e28(void)

{
  func_0x000107c61168(&PTR_PTR_1127f95a8);
  return;
}



/* Entry: 101b46e48; end: 101b46e4f; -[_TtC40AddFriendsPageBillboardFSTSignalProvider40AddFriendsPageBillboardFSTSignalProvider preCheckSource] */

undefined8 FUN_101b46e48(void)

{
  return 0x2c;
}



/* Entry: 101b46e50; end: 101b46f63;  */

void FUN_101b46e50(ulong param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  if ((param_1 & 1) == 0) {
    (*param_2)(0x6567677573206f6e,0xee00736e6f697473);
  }
  else {
    puVar1 = &UNK_110448d68;
    func_0x000107c613fc(&UNK_110448d68,0x28,7);
    *(code **)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = param_3;
    *(undefined8 *)(puVar1 + 0x20) = param_6;
    uStack_50 = 0x101b47408;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    uStack_60 = 0x101b470bc;
    puStack_58 = &UNK_110448d80;
    puStack_48 = puVar1;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c6157c(param_3);
    func_0x000107c61174(param_6);
    func_0x000107c61574(puVar1);
    func_0x000107c4e4e8(param_4);
    func_0x000107c60bd0(ppuVar2);
  }
  return;
}



/* Entry: 101b46f64; end: 101b470f7;  */

void FUN_101b46f64(ulong param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101b470bc);
    (*pcVar1)();
  }
  if (2 < param_1) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c3fefc(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  func_0x000107c602fc(0x16);
  func_0x000107c6142c(0xe000000000000000);
  puVar2 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
  func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  func_0x000107c5fb78(0x6f68736572687420,0xeb000000003d646c);
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  (*param_2)(0x3d6e6565736e75,0xe700000000000000);
  func_0x000107c6142c(0xe700000000000000);
  return;
}



/* Entry: 101b470f8; end: 101b4712b; -[_TtC40AddFriendsPageBillboardFSTSignalProvider40AddFriendsPageBillboardFSTSignalProvider eligibleWithRequestor:campaignName:] */

void FUN_101b470f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101b4712c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101b4712c; end: 101b47397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101b4712c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(unaff_x20 + _DAT_112e03590);
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
      puVar7 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c451b0(puVar7);
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
    }
    else {
      puVar5 = PTR_PTR_1126ae560;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x0001000295c4(0);
      (**(code **)(lVar10 + 0x68))
                (lVar9,*(undefined4 *)
                        PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar2);
      lVar3 = lVar9;
      func_0x000107c5fff0();
      (**(code **)(lVar10 + 8))(lVar9,lVar2);
      puVar8 = &UNK_110448cf0;
      func_0x000107c613fc(&UNK_110448cf0,0x18,7);
      *(undefined **)(puVar8 + 0x10) = puVar5;
      puVar7 = &UNK_110448d18;
      func_0x000107c613fc(&UNK_110448d18,0x38,7);
      *(code **)(puVar7 + 0x10) = FUN_101b47398;
      *(undefined **)(puVar7 + 0x18) = puVar8;
      *(long *)(puVar7 + 0x20) = lVar4;
      *(long *)(puVar7 + 0x28) = lVar3;
      *(undefined **)(puVar7 + 0x30) = puVar5;
      pcStack_60 = FUN_101b473dc;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_100ab47f8;
      puStack_68 = &UNK_110448d30;
      ppuVar6 = &puStack_80;
      puStack_58 = puVar7;
      func_0x000107c60bc4(ppuVar6);
      puVar7 = puStack_58;
      func_0x000107c61174(puVar5);
      func_0x000107c61174();
      func_0x000107c6157c(puVar8);
      func_0x000107c615f0(lVar4);
      func_0x000107c61174(lVar3);
      func_0x000107c61574(puVar7);
      func_0x000107c44b70(lVar4);
      func_0x000107c60bd0(ppuVar6);
      puVar7 = puVar5;
      func_0x000107c43bf4(puVar5);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(lVar3);
      func_0x000107c61574(puVar8);
    }
    return puVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b47398);
  (*pcVar1)();
}



/* Entry: 101b47398; end: 101b473db;  */

void FUN_101b47398(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c3fefc(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101b473dc; end: 101b4741b;  */

void FUN_101b473dc(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  ppuVar5 = &puStack_70;
  if ((param_1 & 1) == 0) {
    (*pcVar1)(0x6567677573206f6e,0xee00736e6f697473);
  }
  else {
    puVar4 = &UNK_110448d68;
    func_0x000107c613fc(&UNK_110448d68,0x28,7);
    *(code **)(puVar4 + 0x10) = pcVar1;
    *(undefined8 *)(puVar4 + 0x18) = uVar3;
    *(undefined8 *)(puVar4 + 0x20) = uVar6;
    uStack_50 = 0x101b47408;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    uStack_60 = 0x101b470bc;
    puStack_58 = &UNK_110448d80;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    puVar4 = puStack_48;
    func_0x000107c6157c(uVar3);
    func_0x000107c61174(uVar6);
    func_0x000107c61574(puVar4);
    func_0x000107c4e4e8(uVar2);
    func_0x000107c60bd0(ppuVar5);
  }
  return;
}



/* Entry: 101b4741c; end: 101b47487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4741c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101b47810();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e035c8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101b47488; end: 101b474f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b47488(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e035c8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b474f4; end: 101b47553; -[_TtC46AddFriendsTakeOverScopedFactoryServiceProvider34SCAddFriendsTakeOverScopedServices init] */

void FUN_101b474f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddFriendsTakeOverScopedFactoryServiceProvider.SCAddFriendsTakeOverScopedServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b47520);
  (*pcVar1)();
}



/* Entry: 101b47554; end: 101b47563; -[_TtC46AddFriendsTakeOverScopedFactoryServiceProvider34SCAddFriendsTakeOverScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b47554(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e035c8));
  return;
}



/* Entry: 101b47564; end: 101b475cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b47564(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110448f70;
  func_0x000107c613fc(&UNK_110448f70,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101b478ec,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101b475d0; end: 101b4766b;  */

void FUN_101b475d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110448e80;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110448e80;
  return;
}



/* Entry: 101b4766c; end: 101b476a3;  */

void FUN_101b4766c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 101b476a4; end: 101b476ab;  */

undefined8 FUN_101b476a4(void)

{
  return 0x1b;
}



/* Entry: 101b476ac; end: 101b477df;  */

void FUN_101b476ac(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110448f98;
  func_0x000107c613fc(&UNK_110448f98,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101b478c4;
  func_0x00010058fa64(FUN_101b478c4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101b477e0; end: 101b4780f;  */

undefined ** FUN_101b477e0(void)

{
  return &PTR_DAT_112e1a6a0;
}



/* Entry: 101b47810; end: 101b4782f;  */

void FUN_101b47810(void)

{
  func_0x000107c61168(&PTR_PTR_1127f9668);
  return;
}



/* Entry: 101b47830; end: 101b4787f;  */

undefined1  [16] FUN_101b47830(void)

{
  return ZEXT816(0x110448ed0);
}



/* Entry: 101b47880; end: 101b478c3;  */

void FUN_101b47880(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e03630 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a8ab8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e03630 = puVar1;
  return;
}



/* Entry: 101b478c4; end: 101b478eb;  */

void FUN_101b478c4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101b478ec; end: 101b478ef;  */

void FUN_101b478ec(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101b478f0; end: 101b47a1f;  */

/* WARNING: Possible PIC construction at 0x000101b479c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b479d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b479e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b479f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b479e4) */
/* WARNING: Removing unreachable block (ram,0x000101b479d4) */
/* WARNING: Removing unreachable block (ram,0x000101b479c4) */
/* WARNING: Removing unreachable block (ram,0x000101b479f4) */

void FUN_101b478f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110449020;
  func_0x000107c613fc(&UNK_110449020,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  uVar2 = 0x112e03640;
  func_0x0001000285a8(0x112e03640,&UNK_10d9d6388);
  func_0x000107c613fc();
  uVar3 = 0x101b47e44;
  func_0x0001000841fc(0x101b47e44,puVar1,uVar2);
  func_0x000100084214(&UNK_10d9d6350,0x30,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101b47a20; end: 101b47a53;  */

void FUN_101b47a20(void)

{
  long unaff_x20;
  
  FUN_101b478f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101b47a54; end: 101b47a63;  */

undefined1  [16] FUN_101b47a54(void)

{
  return ZEXT816(0x110449000);
}



/* Entry: 101b47a64; end: 101b47ddf;  */

void FUN_101b47a64(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e03648,&UNK_10d9d6390);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_101b49468();
  func_0x000100082720("AddFriendsTakeOverScopeGraphBridgeServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e03650,&UNK_10d9d63a0);
  puVar3 = &UNK_110449048;
  func_0x000107c613fc(&UNK_110449048,0x60,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  *(undefined8 *)(puVar3 + 0x40) = param_8;
  *(undefined8 *)(puVar3 + 0x48) = param_9;
  *(undefined8 *)(puVar3 + 0x50) = param_10;
  *(undefined8 *)(puVar3 + 0x58) = param_11;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  uVar8 = 0x101b47e78;
  func_0x0001000823a8(0x101b47e78,puVar3);
  func_0x000100082720("SCAddFriendsTakeOverEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101b4766c;
  func_0x0001000823a8(FUN_101b4766c,0);
  func_0x000100082720("SCAddFriendsTakeOverScopedServicesCleanupRelayServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112e03658,&UNK_10d9d6398);
  puVar3 = &UNK_110449070;
  func_0x000107c613fc(&UNK_110449070,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_101b47eac;
  func_0x0001000823a8(FUN_101b47eac,puVar3);
  func_0x000100082720("SCAddFriendsTakeOverScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112e035d0,&UNK_10d9d6120);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x101b47eb8;
  func_0x0001000823a8(0x101b47eb8,pcVar5);
  func_0x000100082720("SCAddFriendsTakeOverScopeInitializationServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e035c0,&UNK_10d9d6110);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101b47ec0;
  func_0x0001000823a8(0x101b47ec0,uVar6);
  func_0x000100082720("SCAddFriendsTakeOverScopedServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_110449098;
  func_0x000107c613fc(&UNK_110449098,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x101b47ec8;
  func_0x0001000823a8(0x101b47ec8,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCAddFriendsTakeOverScopeEntryPointProvider",0x2b,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 101b47de0; end: 101b47eab;  */

void FUN_101b47de0(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b47eac; end: 101b47ecf;  */

void FUN_101b47eac(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101b48c24(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCAddFriendsTakeOverScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}


