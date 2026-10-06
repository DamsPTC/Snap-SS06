/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1024fd564; end: 1024fd583;  */

void FUN_1024fd564(void)

{
  func_0x000107c61168(&PTR_PTR_11284a3d8);
  return;
}



/* Entry: 1024fd584; end: 1024fd5cf;  */

void FUN_1024fd584(long param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000100f1d1c0(param_2,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar4 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    func_0x000107c605b0(puVar3,lStack_58);
    (**(code **)(lVar4 + 8))(puVar3,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(puVar2);
  return;
}



/* Entry: 1024fd5d0; end: 1024fd6ab;  */

void FUN_1024fd5d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  puVar1 = &UNK_110519518;
  func_0x000107c613fc(&UNK_110519518,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1024fd6ac,puVar1);
  return;
}



/* Entry: 1024fd6ac; end: 1024fd6b3;  */

void FUN_1024fd6ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_1024fd994();
  func_0x000107c610f8();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  FUN_1024fd6f4(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1024fd6b4; end: 1024fd6f3;  */

void FUN_1024fd6b4(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  FUN_1024fd6f4(param_1,param_2);
  return;
}



/* Entry: 1024fd6f4; end: 1024fd87f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1024fd6f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c614f0();
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  uVar10 = *(undefined8 *)(lStack_68 + _DAT_11306fa38);
  uVar9 = *(undefined8 *)(lStack_68 + _DAT_11306fa40);
  func_0x000107c6157c(uVar10);
  uVar4 = uVar9;
  func_0x000107c6157c(uVar9);
  func_0x000100083b20(&lStack_68);
  func_0x00010451338c();
  func_0x000107c61170(lStack_68);
  lVar5 = 0;
  FUN_1024fd564();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar2 = _DAT_112ea2730;
  func_0x000107c61614(lVar6 + _DAT_112ea2730,0);
  *(undefined8 *)(lVar6 + _DAT_112ea2738) = uVar10;
  *(undefined8 *)(lVar6 + _DAT_112ea2740) = uVar9;
  func_0x000107c61604(lVar6 + lVar2,uVar4);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar6;
  lStack_70 = lVar5;
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar9);
  plVar7 = &lStack_78;
  func_0x000107c61154(plVar7,puVar1);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar9);
  func_0x000107c61170(uVar4);
  *(long **)(unaff_x20 + _DAT_112ea2778) = plVar7;
  puVar8 = &stack0xffffffffffffff78;
  func_0x000107c61154(puVar8,PTR_s_init_1125d9248);
  func_0x000107c61170(lVar3);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  return puVar8;
}



/* Entry: 1024fd880; end: 1024fd90f; -[_TtC25PlayGamesViewPageLauncher29PlayGamesViewPageLaunchPlugin nativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fd880(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000100f1b134();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112ea2778);
  func_0x000107c61174();
  uVar2 = 0x112d4bc28;
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1024fd910; end: 1024fd913; -[_TtC25PlayGamesViewPageLauncher29PlayGamesViewPageLaunchPlugin setNativePayloadHandlers:] */

void FUN_1024fd910(void)

{
  return;
}



/* Entry: 1024fd914; end: 1024fd973; -[_TtC25PlayGamesViewPageLauncher29PlayGamesViewPageLaunchPlugin init] */

void FUN_1024fd914(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlayGamesViewPageLauncher.PlayGamesViewPageLaunchPlugin",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024fd940);
  (*pcVar1)();
}



/* Entry: 1024fd974; end: 1024fd993; -[_TtC25PlayGamesViewPageLauncher29PlayGamesViewPageLaunchPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fd974(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea2778));
  return;
}



/* Entry: 1024fd994; end: 1024fd9b3;  */

void FUN_1024fd994(void)

{
  func_0x000107c61168(&PTR_PTR_11284a4a8);
  return;
}



/* Entry: 1024fd9b4; end: 1024fd9c3;  */

undefined1  [16] FUN_1024fd9b4(void)

{
  return ZEXT816(0x110519630);
}



/* Entry: 1024fd9c4; end: 1024fdacf;  */

undefined * FUN_1024fd9c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x0001000285a8(0x112e4cd28,&UNK_10daaf350);
  func_0x000107c610f8();
  func_0x00010017da58(uVar1);
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8(PTR_PTR_1126a73e0);
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e4de20;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar3 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8(PTR_PTR_1126a73e0);
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  puVar5 = PTR_PTR_1126aa998;
  func_0x000107c610f8(PTR_PTR_1126aa998);
  func_0x000107c485b8();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  return puVar5;
}



/* Entry: 1024fdad0; end: 1024fdb07;  */

void FUN_1024fdad0(long param_1)

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



/* Entry: 1024fdb08; end: 1024fdb0f;  */

void FUN_1024fdb08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1024fdb10; end: 1024fdbab;  */

void FUN_1024fdb10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_4;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  return;
}



/* Entry: 1024fdbac; end: 1024fdd4f;  */

void FUN_1024fdbac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar7 = &puStack_90;
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar4 = &UNK_110519748;
  func_0x000107c613fc(&UNK_110519748,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar8;
  *(undefined8 *)(puVar4 + 0x18) = uVar1;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_1024fdd50;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x1024fdf20;
  puStack_78 = &UNK_110519760;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar1);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_110519798;
  func_0x000107c613fc(&UNK_110519798,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar8;
  *(undefined8 *)(puVar4 + 0x18) = uVar1;
  pcStack_70 = (code *)0x1024fdd78;
  puStack_90 = puVar2;
  uStack_88 = 0x42000000;
  uStack_80 = 0x1024fdf1c;
  puStack_78 = &UNK_1105197b0;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar1);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc(puVar6);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  uVar8 = 0;
  func_0x000100372c40(0);
  func_0x000107c610f8();
  func_0x000102679bc8(puVar3,puVar6,uVar8);
  return;
}



/* Entry: 1024fdd50; end: 1024fdd83;  */

void FUN_1024fdd50(void)

{
  func_0x000107c610f8(PTR_PTR_1126b5f28);
                    /* WARNING: Could not recover jumptable at 0x00010c025fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1024fdd84; end: 1024fdde7;  */

void FUN_1024fdd84(undefined8 *param_1)

{
  func_0x000107c610f8(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c025fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1024fdde8; end: 1024fde13;  */

/* WARNING: Possible PIC construction at 0x0001024fddf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024fde04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024fddf8) */
/* WARNING: Removing unreachable block (ram,0x0001024fde08) */

void FUN_1024fdde8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1024fde14; end: 1024fde6f;  */

void FUN_1024fde14(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024fde70; end: 1024fdeef;  */

void FUN_1024fde70(undefined8 param_1)

{
  if (lRam00000001134bb4c0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6df674);
  return;
}



/* Entry: 1024fdef0; end: 1024fdf13;  */

void FUN_1024fdef0(undefined8 *param_1,undefined8 param_2)

{
  FUN_1024fdbac();
  *param_1 = param_2;
  return;
}



/* Entry: 1024fdf14; end: 1024fdf23;  */

void FUN_1024fdf14(long param_1,long param_2)

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



/* Entry: 1024fdf24; end: 1024fdf7f;  */

void FUN_1024fdf24(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1024fdf80; end: 1024fdfeb;  */

void FUN_1024fdf80(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  FUN_102500ce8(0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3e0a4(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  FUN_102500b0c();
  func_0x000107c61170(uVar1);
  func_0x00010034c318(0);
  func_0x000107c610f8();
  func_0x000102500d74(uVar2);
  return;
}



/* Entry: 1024fdfec; end: 1024fdff3;  */

void FUN_1024fdfec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1024fdff4; end: 1024fe017;  */

void FUN_1024fdff4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024fe018; end: 1024fe08f;  */

void FUN_1024fe018(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  FUN_102500ce8(0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3e0a4();
  func_0x000107c61180();
  uVar2 = uVar1;
  FUN_102500b0c();
  func_0x000107c61170(uVar1);
  uVar1 = 0;
  func_0x00010034c318(0);
  func_0x000107c610f8();
  func_0x000102500d74(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1024fe090; end: 1024fe10b;  */

void FUN_1024fe090(undefined8 param_1)

{
  if (lRam0000000112ea28b0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6df6e4);
  return;
}



/* Entry: 1024fe10c; end: 1024fe343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1024fe10c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_88 [24];
  ulong uStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  func_0x0001000d224c(auStack_88);
  func_0x0001000a8868(auStack_88,uStack_70);
  uVar1 = uStack_70;
  (**(code **)(lStack_68 + 0x70))(uStack_70,lStack_68);
  func_0x0001000834e4(auStack_88);
  if ((uVar1 & 1) != 0) {
    FUN_102500ce8(0);
    uVar2 = param_4;
    func_0x000107c3e0a4(param_4);
    func_0x000107c61180();
    uVar3 = uVar2;
    FUN_102500b0c();
    func_0x000107c61170(uVar2);
    uVar6 = *(undefined8 *)(param_3 + _DAT_112eb2de0);
    FUN_102500aec(0);
    func_0x000107c610f8();
    func_0x000107c61174(uVar6);
    func_0x000107c615f0(uVar3);
    func_0x0001025007a0(uVar6,uVar3);
    puVar4 = &UNK_1105198c0;
    func_0x000107c613fc(&UNK_1105198c0,0x18,7);
    *(undefined8 *)(puVar4 + 0x10) = param_2;
    FUN_102501a68(0);
    func_0x000107c610f8();
    func_0x000107c61174(param_2);
    func_0x000107c61174(uVar6);
    pcVar5 = FUN_1024fe384;
    func_0x000102501744(FUN_1024fe384,puVar4,uVar6,&PTR_DAT_110519bd0);
    uVar2 = param_1;
    func_0x000107c4e9e4(param_1);
    func_0x000107c61180();
    func_0x000107c61174(pcVar5);
    func_0x000107c4fba8(uVar2);
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(pcVar5);
    func_0x000107c61170(pcVar5);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  return unaff_x20;
}



/* Entry: 1024fe344; end: 1024fe383;  */

undefined8 FUN_1024fe344(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010451338c();
  uVar1 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1024fe384; end: 1024fe3a7;  */

undefined8 FUN_1024fe384(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00010451338c(uVar2);
  uVar1 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  return uVar1;
}



/* Entry: 1024fe3a8; end: 1024fe3c7;  */

void FUN_1024fe3a8(void)

{
  func_0x000107c61168(&PTR_PTR_112ea2998);
  return;
}



/* Entry: 1024fe3c8; end: 1024fe3d3; -[SCLensNamespaceDeepLinkProcessorPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fe3c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea29f0;
  func_0x000107c61428(param_1 + _DAT_112ea29f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024fe3d4; end: 1024fe3df; -[SCLensNamespaceDeepLinkProcessorPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fe3d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea29f0;
  func_0x000107c61428(param_1 + _DAT_112ea29f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024fe3e0; end: 1024fe3eb; -[SCLensNamespaceDeepLinkProcessorPluginEntryPoint navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fe3e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea29f8;
  func_0x000107c61428(param_1 + _DAT_112ea29f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024fe3ec; end: 1024fe3f7; -[SCLensNamespaceDeepLinkProcessorPluginEntryPoint setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fe3ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea29f8;
  func_0x000107c61428(param_1 + _DAT_112ea29f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024fe3f8; end: 1024fe403; -[SCLensNamespaceDeepLinkProcessorPluginEntryPoint lensModularCameraNavigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fe3f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea2a00;
  func_0x000107c61428(param_1 + _DAT_112ea2a00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024fe404; end: 1024fe40f; -[SCLensNamespaceDeepLinkProcessorPluginEntryPoint setLensModularCameraNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fe404(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea2a00;
  func_0x000107c61428(param_1 + _DAT_112ea2a00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024fe410; end: 1024fe41b; -[SCLensNamespaceDeepLinkProcessorPluginEntryPoint lensExplorerDataServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fe410(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea2a08;
  func_0x000107c61428(param_1 + _DAT_112ea2a08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024fe41c; end: 1024fe427; -[SCLensNamespaceDeepLinkProcessorPluginEntryPoint setLensExplorerDataServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fe41c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea2a08;
  func_0x000107c61428(param_1 + _DAT_112ea2a08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024fe428; end: 1024fe433; -[SCLensNamespaceDeepLinkProcessorPluginEntryPoint lensConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fe428(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea2a10;
  func_0x000107c61428(param_1 + _DAT_112ea2a10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024fe434; end: 1024fe477;  */

void FUN_1024fe434(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1024fe478; end: 1024fe483; -[SCLensNamespaceDeepLinkProcessorPluginEntryPoint setLensConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fe478(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea2a10;
  func_0x000107c61428(param_1 + _DAT_112ea2a10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024fe484; end: 1024fe4d7;  */

void FUN_1024fe484(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024fe4d8; end: 1024fe7d3;  */

/* WARNING: Possible PIC construction at 0x0001024fe604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024fe6f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024fe700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024fe710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024fe720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024fe730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024fe79c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024fe7ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024fe78c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024fe7b0) */
/* WARNING: Removing unreachable block (ram,0x0001024fe7a0) */
/* WARNING: Removing unreachable block (ram,0x0001024fe734) */
/* WARNING: Removing unreachable block (ram,0x0001024fe724) */
/* WARNING: Removing unreachable block (ram,0x0001024fe714) */
/* WARNING: Removing unreachable block (ram,0x0001024fe704) */
/* WARNING: Removing unreachable block (ram,0x0001024fe6f4) */
/* WARNING: Removing unreachable block (ram,0x0001024fe608) */
/* WARNING: Removing unreachable block (ram,0x0001024fe790) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fe4d8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 auStack_88 [24];
  ulong uStack_70;
  long lStack_68;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4d52c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4b2b8();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar3 = unaff_x20;
        func_0x000107c4b0c0();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          func_0x000107c4afbc();
          func_0x000107c61180();
          if (unaff_x20 != 0) {
            FUN_1024fe3a8(0);
            func_0x000107c613fc();
            func_0x0001000d224c(auStack_88);
            FUN_1024feb24(auStack_88,uStack_70);
            uVar4 = uStack_70;
            (**(code **)(lStack_68 + 0x70))(uStack_70,lStack_68);
            FUN_1024fed90(auStack_88);
            lVar1 = unaff_x20;
            if ((uVar4 & 1) != 0) {
              FUN_102500ce8(0);
              func_0x000107c3e0a4(lVar3);
              func_0x000107c61180();
              FUN_102500b0c();
              lVar1 = lVar3;
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1024fe7d4; end: 1024fe7db;  */

undefined8 FUN_1024fe7d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00010451338c(uVar2);
  uVar1 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  return uVar1;
}



/* Entry: 1024fe7dc; end: 1024fe803; -[SCLensNamespaceDeepLinkProcessorPluginEntryPoint begin] */

void FUN_1024fe7dc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024fe4d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024fe804; end: 1024fe847; -[SCLensNamespaceDeepLinkProcessorPluginEntryPoint end] */

void FUN_1024fe804(undefined8 param_1)

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



/* Entry: 1024fe848; end: 1024feb23;  */

void FUN_1024fe848(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1024feb24(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10edf60)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000012,0x800000010ef120a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000023;
        if (((param_2 == -0x2fffffffffffffdd) && (param_3 == -0x7ffffffef0f58b00)) ||
           (func_0x000107c605b8(0xd000000000000023,0x800000010f0a7500,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          FUN_1024feb24(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55dd8();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef0f58ad0)) ||
             (func_0x000107c605b8(0xd000000000000018,0x800000010f0a7530,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            FUN_1024feb24(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55d0c();
          }
          else {
            uVar2 = 0xd000000000000019;
            if (((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10e0a30)) &&
               (func_0x000107c605b8(0xd000000000000019,0x800000010ef1f5d0,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "LensNamespaceIntegration/SCLensNamespaceDeepLinkProcessorPluginEntryPoint.swift"
                                  ,0x4f,2,0x37,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1024feb24);
              (*pcVar1)();
            }
            FUN_1024feb24(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55cbc();
          }
        }
        goto LAB_1024fe8d4;
      }
    }
    FUN_1024feb24(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c569f0();
  }
LAB_1024fe8d4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1024feb24; end: 1024feb47;  */

long * FUN_1024feb24(long *param_1,long param_2)

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



/* Entry: 1024feb48; end: 1024febf3; -[SCLensNamespaceDeepLinkProcessorPluginEntryPoint setValue:forIvarName:] */

void FUN_1024feb48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1024fe848(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_1024fed90(auStack_50);
  return;
}



/* Entry: 1024febf4; end: 1024feca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024febf4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112ea29f0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ea29f8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ea2a00,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ea2a08,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ea2a10,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ea2a18) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024feca4; end: 1024fecc3; -[SCLensNamespaceDeepLinkProcessorPluginEntryPoint init] */

void FUN_1024feca4(void)

{
  FUN_1024febf4();
  return;
}



/* Entry: 1024fecc4; end: 1024fecf7;  */

void FUN_1024fecc4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024fecf8; end: 1024fed6f; -[SCLensNamespaceDeepLinkProcessorPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fecf8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ea29f0);
  func_0x000107c61610(param_1 + _DAT_112ea29f8);
  func_0x000107c61610(param_1 + _DAT_112ea2a00);
  func_0x000107c61610(param_1 + _DAT_112ea2a08);
  func_0x000107c61610(param_1 + _DAT_112ea2a10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea2a18));
  return;
}



/* Entry: 1024fed70; end: 1024fed8f;  */

void FUN_1024fed70(void)

{
  func_0x000107c61168(&PTR_PTR_11284a568);
  return;
}



/* Entry: 1024fed90; end: 1024fedaf;  */

void FUN_1024fed90(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001024feda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1024fedb0; end: 1024fee23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fedb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea2a48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea2a50) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea2a58) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024fee24; end: 1024ff1df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1024fee24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  func_0x000107c614f0();
  func_0x0001000d224c(&puStack_90);
  puVar2 = puStack_90;
  if (puStack_90 != (undefined *)0x0) {
    uVar9 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    puVar1 = puVar2;
    func_0x000107c4b160();
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
    func_0x000107c61170(uVar9);
    puVar2 = puVar1;
    func_0x000107c3db5c();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c615e8(puVar1);
    }
    else {
      func_0x0001000d224c(&puStack_90);
      puVar7 = puStack_90;
      if (puStack_90 != (undefined *)0x0) {
        uVar9 = param_1;
        func_0x000107c5fadc(param_1,param_2);
        puVar3 = puVar7;
        func_0x000107c4b3a0();
        func_0x000107c61180();
        func_0x000107c615e8(puVar7);
        func_0x000107c61170(uVar9);
        puVar4 = PTR_PTR_1126ccbc8;
        func_0x000107c610f8(PTR_PTR_1126ccbc8);
        uVar9 = param_1;
        func_0x000107c5fadc(param_1,param_2);
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
        func_0x000107c48544(puVar4);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(puVar7);
        func_0x0001000d224c(&puStack_90);
        puVar7 = puStack_90;
        if (puStack_90 != (undefined *)0x0) {
          puVar5 = puStack_90;
          func_0x000107c43168(puStack_90);
          func_0x000107c61180();
          func_0x000107c615e8(puVar7);
          puVar7 = puVar3;
          func_0x000107c3f3fc();
          if ((int)puVar7 == 0) {
            func_0x000107c61170(puVar5);
          }
          else {
            pcStack_70 = FUN_1024ff1e0;
            uStack_68 = 0;
            puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_88 = 0x42000000;
            pcStack_80 = FUN_1024ff1e4;
            puStack_78 = &UNK_1105199f0;
            ppuVar6 = &puStack_90;
            func_0x000107c60bc4(ppuVar6);
            func_0x000107c50708(puVar3);
            func_0x000107c61170(puVar5);
            func_0x000107c60bd0(ppuVar6);
          }
        }
        func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
        puVar5 = puVar2;
        func_0x0001000b637c(puVar2);
        puVar7 = &UNK_1105199d8;
        func_0x000107c613fc(&UNK_1105199d8,0x28,7);
        *(undefined8 *)(puVar7 + 0x10) = param_1;
        *(undefined8 *)(puVar7 + 0x18) = param_2;
        *(undefined8 *)(puVar7 + 0x20) = unaff_x20;
        uVar9 = 0;
        FUN_1025006d4(0,0x112ea2a68,&PTR_PTR_1126ae6b0);
        func_0x000107c61434(param_2);
        pcVar8 = FUN_1024ff39c;
        func_0x0001000bfde0(FUN_1024ff39c,puVar7,uVar9);
        func_0x000107c61574(puVar5);
        func_0x000107c61574(puVar7);
        func_0x0001004575f0();
        func_0x000107c615e8(puVar1);
        func_0x000107c61170(puVar2);
        func_0x000107c615e8(puVar3);
        func_0x000107c61170(puVar4);
        goto LAB_1024ff1b4;
      }
      func_0x000107c615e8(puVar1);
      func_0x000107c61170(puVar2);
    }
  }
  func_0x0001000285a8(0x112ea2a60,&UNK_10dab4e50);
  puVar7 = PTR_PTR_1126ae6b0;
  func_0x000107c610f8();
  uVar9 = 0;
  FUN_1025006d4(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar9);
  func_0x000107c47440();
  func_0x000107c61170(puVar2);
  pcVar8 = (code *)&puStack_90;
  puStack_90 = puVar7;
  func_0x000100854cb0(pcVar8);
  func_0x000107c61170(puVar7);
  func_0x0001004575f0();
LAB_1024ff1b4:
  func_0x000107c61574(pcVar8);
  return puVar7;
}



/* Entry: 1024ff1e0; end: 1024ff1e3;  */

void FUN_1024ff1e0(void)

{
  return;
}



/* Entry: 1024ff1e4; end: 1024ff22f;  */

void FUN_1024ff1e4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1024ff230; end: 1024ff39b;  */

void FUN_1024ff230(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_48;
  
  uVar6 = *param_2;
  puStack_48 = (undefined *)0x0;
  uVar2 = 0;
  FUN_1025006d4(0,0x112e56278,&PTR_PTR_1126ccc20);
  func_0x000107c5fc50(uVar6,&puStack_48,uVar2);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puStack_48 != (undefined *)0x0) {
    puVar4 = puStack_48;
  }
  puVar3 = puVar4;
  FUN_1024ff3c4();
  func_0x000107c6142c(puVar4);
  if ((ulong)puVar3 >> 0x3e == 0) {
    puVar4 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar3) {
      puVar4 = puVar3;
    }
    func_0x000107c60480();
  }
  if (puVar4 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else if (((ulong)puVar3 & 0xc000000000000001) == 0) {
    if (*(long *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024ff39c);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(puVar3 + 0x20);
    func_0x000107c61174(uVar2);
  }
  else {
    uVar2 = 0;
    FUN_1024ffcbc(0,puVar3,&PTR_PTR_1126ae6a8,0x112d4d630);
  }
  puVar4 = PTR_PTR_1126ae6b0;
  func_0x000107c610f8();
  uVar6 = 0;
  FUN_1025006d4(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  puVar5 = puVar3;
  func_0x000107c5fc48(puVar3,uVar6);
  func_0x000107c6142c(puVar3);
  func_0x000107c47440();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar5);
  *param_1 = puVar4;
  return;
}



/* Entry: 1024ff39c; end: 1024ff3c3;  */

void FUN_1024ff39c(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_48;
  
  uVar6 = *param_2;
  puStack_48 = (undefined *)0x0;
  uVar2 = 0;
  FUN_1025006d4(0,0x112e56278,&PTR_PTR_1126ccc20,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c5fc50(uVar6,&puStack_48,uVar2);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puStack_48 != (undefined *)0x0) {
    puVar4 = puStack_48;
  }
  puVar3 = puVar4;
  FUN_1024ff3c4();
  func_0x000107c6142c(puVar4);
  if ((ulong)puVar3 >> 0x3e == 0) {
    puVar4 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar3) {
      puVar4 = puVar3;
    }
    func_0x000107c60480();
  }
  if (puVar4 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else if (((ulong)puVar3 & 0xc000000000000001) == 0) {
    if (*(long *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024ff39c);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(puVar3 + 0x20);
    func_0x000107c61174(uVar2);
  }
  else {
    uVar2 = 0;
    FUN_1024ffcbc(0,puVar3,&PTR_PTR_1126ae6a8,0x112d4d630);
  }
  puVar4 = PTR_PTR_1126ae6b0;
  func_0x000107c610f8();
  uVar6 = 0;
  FUN_1025006d4(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  puVar5 = puVar3;
  func_0x000107c5fc48(puVar3,uVar6);
  func_0x000107c6142c(puVar3);
  func_0x000107c47440();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar5);
  *param_1 = puVar4;
  return;
}



/* Entry: 1024ff3c4; end: 1024ff90b;  */

undefined * FUN_1024ff3c4(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 unaff_x20;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 >> 0x3e == 0) {
    uVar13 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar13 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar13 == 0) {
    pcVar1 = (code *)0x0;
    puVar9 = (undefined *)0x0;
    uVar2 = 0;
    puVar15 = (undefined *)0x0;
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    if ((long)uVar13 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024ff908);
      (*pcVar1)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c61174(uVar2);
    }
    else {
      uVar2 = 0;
      FUN_1024ffcbc(0,param_1,&PTR_PTR_1126ccc20,0x112e56278);
    }
    puVar9 = &UNK_110519a28;
    func_0x000107c613fc(&UNK_110519a28,0x18,7);
    *(undefined ***)(puVar9 + 0x10) = &puStack_78;
    func_0x000100cf7620(0,0);
    puVar15 = &UNK_110519a50;
    func_0x000107c613fc(&UNK_110519a50,0x20,7);
    *(code **)(puVar15 + 0x10) = FUN_1024ffe78;
    *(undefined **)(puVar15 + 0x18) = puVar9;
    puVar14 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_88 = FUN_1024ffe90;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = (code *)&UNK_1020995dc;
    puStack_90 = &UNK_110519a68;
    ppuVar3 = &puStack_a8;
    puStack_80 = puVar15;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_80);
    puVar15 = &UNK_110519aa0;
    func_0x000107c613fc(&UNK_110519aa0,0x20,7);
    *(undefined ***)(puVar15 + 0x10) = &puStack_78;
    *(undefined8 *)(puVar15 + 0x18) = unaff_x20;
    func_0x000100cf7620(0,0);
    puVar4 = &UNK_110519ac8;
    func_0x000107c613fc(&UNK_110519ac8,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x1024ffeb0;
    *(undefined **)(puVar4 + 0x18) = puVar15;
    pcStack_88 = (code *)0x102500730;
    puStack_a8 = puVar14;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_102500714;
    puStack_90 = &UNK_110519ae0;
    ppuVar5 = &puStack_a8;
    puStack_80 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_80);
    func_0x000107c4c684(uVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(uVar2);
    if (uVar13 != 1) {
      lVar12 = 5;
      puVar4 = puVar15;
      puVar14 = puVar9;
      do {
        if ((param_1 & 0xc000000000000001) == 0) {
          lVar8 = *(long *)(param_1 + lVar12 * 8);
          func_0x000107c61174(lVar8);
        }
        else {
          lVar8 = lVar12 + -4;
          FUN_1024ffcbc(lVar8,param_1,&PTR_PTR_1126ccc20,0x112e56278);
        }
        puVar9 = &UNK_110519a28;
        func_0x000107c613fc(&UNK_110519a28,0x18,7);
        *(undefined ***)(puVar9 + 0x10) = &puStack_78;
        func_0x000100cf7620(FUN_1024ffe78,puVar14);
        puVar15 = &UNK_110519a50;
        func_0x000107c613fc(&UNK_110519a50,0x20,7);
        *(code **)(puVar15 + 0x10) = FUN_1024ffe78;
        *(undefined **)(puVar15 + 0x18) = puVar9;
        puVar14 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_88 = FUN_1024ffe90;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        pcStack_98 = (code *)&UNK_1020995dc;
        puStack_90 = &UNK_110519a68;
        ppuVar3 = &puStack_a8;
        puStack_80 = puVar15;
        func_0x000107c60bc4(ppuVar3);
        func_0x000107c61574(puStack_80);
        puVar15 = &UNK_110519aa0;
        func_0x000107c613fc(&UNK_110519aa0,0x20,7);
        *(undefined ***)(puVar15 + 0x10) = &puStack_78;
        *(undefined8 *)(puVar15 + 0x18) = unaff_x20;
        func_0x000100cf7620(0x1024ffeb0,puVar4);
        puVar4 = &UNK_110519ac8;
        func_0x000107c613fc(&UNK_110519ac8,0x20,7);
        *(undefined8 *)(puVar4 + 0x10) = 0x1024ffeb0;
        *(undefined **)(puVar4 + 0x18) = puVar15;
        pcStack_88 = (code *)0x102500730;
        puStack_a8 = puVar14;
        uStack_a0 = 0x42000000;
        pcStack_98 = FUN_102500714;
        puStack_90 = &UNK_110519ae0;
        ppuVar5 = &puStack_a8;
        puStack_80 = puVar4;
        func_0x000107c60bc4(ppuVar5);
        func_0x000107c61574(puStack_80);
        func_0x000107c4c684(lVar8);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c60bd0(ppuVar3);
        func_0x000107c61170(lVar8);
        lVar12 = lVar12 + 1;
        puVar4 = puVar15;
        puVar14 = puVar9;
      } while ((1 - uVar13) + lVar12 != 5);
    }
    uVar2 = 0x1024ffeb0;
    pcVar1 = FUN_1024ffe78;
    puVar4 = puStack_78;
  }
  if ((ulong)puVar4 >> 0x3e == 0) {
    puVar14 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar14 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      puVar14 = puVar4;
    }
    func_0x000107c60480();
  }
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar14 != (undefined *)0x0) {
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61434(puVar4);
    func_0x0001019d4adc(0,(ulong)puVar14 & ((long)puVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024ff90c);
      (*pcVar1)();
    }
    puVar11 = (undefined *)0x0;
    do {
      puVar10 = puStack_a8;
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        puVar6 = *(undefined **)(puVar4 + (long)puVar11 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar6 = puVar11;
        FUN_1024ffcbc(puVar11,puVar4,&PTR_PTR_1126ccc38,0x112e55eb0);
      }
      puVar7 = puVar6;
      FUN_102500054();
      func_0x000107c61170(puVar6);
      uVar13 = *(ulong *)(puVar10 + 0x10);
      puStack_a8 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar13) {
        func_0x0001019d4adc(1 < *(ulong *)(puVar10 + 0x18),uVar13 + 1,1);
      }
      puVar10 = puStack_a8;
      puVar11 = puVar11 + 1;
      *(ulong *)(puStack_a8 + 0x10) = uVar13 + 1;
      *(undefined **)(puStack_a8 + uVar13 * 8 + 0x20) = puVar7;
    } while (puVar14 != puVar11);
    func_0x000107c6142c(puVar4);
  }
  func_0x000107c6142c(puStack_78);
  func_0x000100cf7620(pcVar1,puVar9);
  func_0x000100cf7620(uVar2,puVar15);
  return puVar10;
}



/* Entry: 1024ff90c; end: 1024ff973; -[_TtC30LensNamespaceModularCameraImpl37LensExplorerNamespaceLensDataProvider lensDataObservableForNamespaceId:] */

void FUN_1024ff90c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1024fee24(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1024ff974; end: 1024ffa5f;  */

void FUN_1024ff974(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_1024ffc0c(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_1024ffed4(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024ffa5c);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024ffa60);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024ffa58);
  (*pcVar1)();
}



/* Entry: 1024ffa60; end: 1024ffad3;  */

void FUN_1024ffa60(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  FUN_1024ffb9c();
  uVar2 = *param_2 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar2 + 0x10);
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x0001020a5124(uVar2,uVar1 + 1,1);
    *param_2 = uVar2;
    uVar2 = uVar2 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar2 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar2 + uVar1 * 8 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 1024ffad4; end: 1024ffb33; -[_TtC30LensNamespaceModularCameraImpl37LensExplorerNamespaceLensDataProvider init] */

void FUN_1024ffad4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensNamespaceModularCameraImpl.LensExplorerNamespaceLensDataProvider",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024ffb00);
  (*pcVar1)();
}



/* Entry: 1024ffb34; end: 1024ffb7b; -[_TtC30LensNamespaceModularCameraImpl37LensExplorerNamespaceLensDataProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024ffb50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024ffb54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ffb34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea2a48));
  return;
}



/* Entry: 1024ffb7c; end: 1024ffb9b;  */

void FUN_1024ffb7c(void)

{
  func_0x000107c61168(&PTR_PTR_11284a648);
  return;
}



/* Entry: 1024ffb9c; end: 1024ffc0b;  */

void FUN_1024ffb9c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    func_0x0001020a5124(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 1024ffc0c; end: 1024ffcbb;  */

void FUN_1024ffc0c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  func_0x0001020a5124();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 1024ffcbc; end: 1024ffe77;  */

ulong FUN_1024ffcbc(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024ffda0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024ffda4);
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
  FUN_1025006d4(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1024ffe78);
  (*pcVar2)();
}



/* Entry: 1024ffe78; end: 1024ffe8f;  */

void FUN_1024ffe78(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1024ffa60(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1024ffe90; end: 1024ffed3;  */

void FUN_1024ffe90(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1024ffed4; end: 102500053;  */

ulong FUN_1024ffed4(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102500054);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102500048);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_1025006d4(0,0x112e55eb0,&PTR_PTR_1126ccc38);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10250004c);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102500050);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_1024ffcbc(uVar7,param_3,&PTR_PTR_1126ccc38,0x112e55eb0);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 102500054; end: 1025003bf;  */

undefined * FUN_102500054(long param_1)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x12;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar11 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar11 - extraout_x12;
  lVar3 = param_1;
  func_0x000107c5d2ac();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = param_1;
    func_0x000107c44fb4();
    func_0x000107c61180();
    bVar1 = lVar4 == 0;
    if (bVar1) {
      func_0x000107c5ede0();
    }
    else {
      func_0x000107c5edb4(puVar11);
      func_0x000107c61170(lVar4);
      lVar4 = 0;
      func_0x000107c5ede0();
    }
    lVar13 = *(long *)(lVar4 + -8);
    (**(code **)(lVar13 + 0x38))(puVar11,bVar1,1,lVar4);
    func_0x0001001021cc(puVar11,lVar9);
    func_0x000107c5ede0(0);
    uVar7 = 1;
    lVar10 = lVar9;
    (**(code **)(lVar13 + 0x30))(lVar9,1,lVar4);
    if ((int)lVar10 == 1) {
      func_0x0001000293e4(lVar9);
      lVar10 = 0;
      uVar8 = uVar7;
    }
    else {
      func_0x000107c5ed70();
      (**(code **)(lVar13 + 8))(lVar9,lVar4);
      uVar8 = uVar7;
      func_0x000107c5fadc(lVar10,uVar7);
      func_0x000107c6142c(uVar7);
    }
    lVar4 = param_1;
    func_0x000107c4b2c0(param_1);
    func_0x000107c61180();
    lVar13 = param_1;
    func_0x000107c40ca8();
    func_0x000107c61180();
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      lVar12 = lVar13;
      func_0x000107c5d9e8();
      func_0x000107c61180();
      func_0x000107c61170(lVar13);
      lVar13 = lVar12;
      if (lVar12 != 0) {
        func_0x000107c5faec(lVar12);
        func_0x000107c61170(lVar12);
        uVar7 = uVar8;
        func_0x000107c5fadc(lVar13,uVar8);
        func_0x000107c6142c(uVar8);
        uVar8 = uVar7;
      }
    }
    lVar12 = param_1;
    func_0x000107c4c010();
    func_0x000107c61180();
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      lVar14 = lVar12;
      func_0x000107c4f8c4();
      func_0x000107c61180();
      func_0x000107c61170(lVar12);
      lVar12 = lVar14;
      if (lVar14 != 0) {
        func_0x000107c5faec(lVar14);
        func_0x000107c61170(lVar14);
        uVar7 = uVar8;
        func_0x000107c5fadc(lVar12,uVar8);
        func_0x000107c6142c(uVar8);
        uVar8 = uVar7;
      }
    }
    lVar14 = param_1;
    func_0x000107c4c010();
    func_0x000107c61180();
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      lVar5 = lVar14;
      func_0x000107c4f8c8();
      func_0x000107c61180();
      func_0x000107c61170(lVar14);
      lVar14 = lVar5;
      if (lVar5 != 0) {
        func_0x000107c5faec(lVar5);
        func_0x000107c61170(lVar5);
        func_0x000107c5fadc(lVar14,uVar8);
        func_0x000107c6142c(uVar8);
      }
    }
    puVar6 = PTR_PTR_1126ae6a8;
    func_0x000107c61168(PTR_PTR_1126ae6a8);
    func_0x000107c4a3a4();
    *(undefined8 *)(lVar9 + -8) = 0;
    *(char *)(lVar9 + -0x10) = (char)param_1;
    func_0x000107c4e824(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar14);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1025003c0);
  (*pcVar2)();
}



/* Entry: 1025003c0; end: 1025006d3;  */

undefined * FUN_1025003c0(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c4a7d4();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_1025006d4(0,0x112ea2a98,&PTR_PTR_1126ccd78);
  uVar3 = param_1;
  func_0x000107c5fc54(param_1,uVar2);
  func_0x000107c61170(param_1);
  if (uVar3 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar8 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar8 == 0) {
    func_0x000107c6142c(uVar3);
    uVar2 = 0;
    puVar7 = (undefined *)0x0;
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    if ((long)uVar8 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1025006d4);
      (*pcVar1)();
    }
    if ((uVar3 & 0xc000000000000001) == 0) {
      uVar2 = *(undefined8 *)(uVar3 + 0x20);
      func_0x000107c61174(uVar2);
    }
    else {
      uVar2 = 0;
      FUN_1024ffcbc(0,uVar3,&PTR_PTR_1126ccd78,0x112ea2a98);
    }
    puVar7 = &UNK_110519b18;
    func_0x000107c613fc(&UNK_110519b18,0x18,7);
    *(undefined ***)(puVar7 + 0x10) = &puStack_78;
    func_0x000100cf7620(0,0);
    puVar4 = &UNK_110519b40;
    func_0x000107c613fc(&UNK_110519b40,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x102500738;
    *(undefined **)(puVar4 + 0x18) = puVar7;
    uStack_88 = 0x102500734;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1020995dc;
    puStack_90 = &UNK_110519b58;
    ppuVar5 = &puStack_a8;
    puStack_80 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_80);
    func_0x000107c4c688(uVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar2);
    if (uVar8 != 1) {
      lVar9 = 5;
      puVar4 = puVar7;
      do {
        if ((uVar3 & 0xc000000000000001) == 0) {
          lVar6 = *(long *)(uVar3 + lVar9 * 8);
          func_0x000107c61174(lVar6);
        }
        else {
          lVar6 = lVar9 + -4;
          FUN_1024ffcbc(lVar6,uVar3,&PTR_PTR_1126ccd78,0x112ea2a98);
        }
        puVar7 = &UNK_110519b18;
        func_0x000107c613fc(&UNK_110519b18,0x18,7);
        *(undefined ***)(puVar7 + 0x10) = &puStack_78;
        func_0x000100cf7620(0x102500738,puVar4);
        puVar4 = &UNK_110519b40;
        func_0x000107c613fc(&UNK_110519b40,0x20,7);
        *(undefined8 *)(puVar4 + 0x10) = 0x102500738;
        *(undefined **)(puVar4 + 0x18) = puVar7;
        uStack_88 = 0x102500734;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1020995dc;
        puStack_90 = &UNK_110519b58;
        ppuVar5 = &puStack_a8;
        puStack_80 = puVar4;
        func_0x000107c60bc4(ppuVar5);
        func_0x000107c61574(puStack_80);
        func_0x000107c4c688(lVar6);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c61170(lVar6);
        lVar9 = lVar9 + 1;
        puVar4 = puVar7;
      } while ((1 - uVar8) + lVar9 != 5);
    }
    func_0x000107c6142c(uVar3);
    uVar2 = 0x102500738;
    puVar4 = puStack_78;
  }
  func_0x000100cf7620(uVar2,puVar7);
  return puVar4;
}



/* Entry: 1025006d4; end: 102500713;  */

void FUN_1025006d4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102500714; end: 10250073b;  */

void FUN_102500714(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10250073c; end: 102500803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250073c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea2aa0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea2aa8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102500804; end: 102500a0b;  */

/* WARNING: Possible PIC construction at 0x00010250089c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025008f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102500998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025009a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010250099c) */
/* WARNING: Removing unreachable block (ram,0x0001025008f8) */
/* WARNING: Removing unreachable block (ram,0x0001025008a0) */
/* WARNING: Removing unreachable block (ram,0x0001025009ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102500804(long param_1,long param_2,undefined8 param_3,undefined8 param_4,code *param_5)

{
  long unaff_x20;
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 == 0) {
    if (param_5 != (code *)0x0) {
      (*param_5)();
    }
    return;
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea2aa0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    if (param_5 != (code *)0x0) {
      (*param_5)();
    }
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ea2aa8);
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c4b034(uVar1);
    func_0x000107c61180();
    param_1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102500a0c; end: 102500a33;  */

void FUN_102500a0c(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 102500a34; end: 102500a4f;  */

void FUN_102500a34(long param_1,long param_2)

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



/* Entry: 102500a50; end: 102500aaf; -[_TtC30LensNamespaceModularCameraImpl35LensNamespaceModularCameraPresenter init] */

void FUN_102500a50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensNamespaceModularCameraImpl.LensNamespaceModularCameraPresenter",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102500a7c);
  (*pcVar1)();
}



/* Entry: 102500ab0; end: 102500ae7; -[_TtC30LensNamespaceModularCameraImpl35LensNamespaceModularCameraPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102500ab0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea2aa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ea2aa8));
  return;
}



/* Entry: 102500ae8; end: 102500aeb;  */

/* WARNING: Possible PIC construction at 0x00010250089c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025008f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102500998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025009a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010250099c) */
/* WARNING: Removing unreachable block (ram,0x0001025008f8) */
/* WARNING: Removing unreachable block (ram,0x0001025008a0) */
/* WARNING: Removing unreachable block (ram,0x0001025009ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102500ae8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,code *param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  if (param_1 == 0) {
    if (param_5 != (code *)0x0) {
      (*param_5)();
    }
    return;
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea2aa0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    if (param_5 != (code *)0x0) {
      (*param_5)();
    }
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ea2aa8);
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c4b034(uVar1);
    func_0x000107c61180();
    param_1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102500aec; end: 102500b0b;  */

void FUN_102500aec(void)

{
  func_0x000107c61168(&PTR_PTR_11284a718);
  return;
}



/* Entry: 102500b0c; end: 102500b0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102500b0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  func_0x0001000285a8(0x112ea2b00,&UNK_10db560c0);
  uVar1 = param_1;
  func_0x000107c4f758();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112ea2b08,&UNK_10dab4f20);
  uVar1 = param_1;
  func_0x000107c4f754();
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112ea2b10,&UNK_10dab4f28);
  func_0x000107c412bc();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x0001000bda74();
  func_0x000107c61170(param_1);
  lVar4 = 0;
  FUN_1024ffb7c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112ea2a48) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112ea2a50) = uVar3;
  *(undefined8 *)(lVar5 + _DAT_112ea2a58) = uVar1;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102500b10; end: 102500b47; +[_TtC30LensNamespaceModularCameraImpl32NamespaceLensDataProviderFactory makeProviderWithArBarQueryContext:] */

void FUN_102500b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_102500bb8();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102500b48; end: 102500b83; -[_TtC30LensNamespaceModularCameraImpl32NamespaceLensDataProviderFactory init] */

void FUN_102500b48(undefined8 param_1)

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



/* Entry: 102500b84; end: 102500bb7;  */

void FUN_102500b84(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102500bb8; end: 102500ce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102500bb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  func_0x0001000285a8(0x112ea2b00,&UNK_10db560c0);
  uVar1 = param_1;
  func_0x000107c4f758();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112ea2b08,&UNK_10dab4f20);
  uVar1 = param_1;
  func_0x000107c4f754();
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112ea2b10,&UNK_10dab4f28);
  func_0x000107c412bc();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x0001000bda74();
  func_0x000107c61170(param_1);
  lVar4 = 0;
  FUN_1024ffb7c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112ea2a48) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112ea2a50) = uVar3;
  *(undefined8 *)(lVar5 + _DAT_112ea2a58) = uVar1;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102500ce8; end: 102500d07;  */

void FUN_102500ce8(void)

{
  func_0x000107c61168(&PTR_PTR_11284a7e0);
  return;
}



/* Entry: 102500d08; end: 102500d27; -[_TtC27LensNamespaceCameraServices27LensNamespaceCameraServices namespaceLensDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102500d08(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ea2b18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102500d28; end: 102500dbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102500d28(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea2b18) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102500dc0; end: 102500e17; -[_TtC27LensNamespaceCameraServices27LensNamespaceCameraServices initWithNamespaceLensDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102500dc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ea2b18) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 102500e18; end: 102500e77; -[_TtC27LensNamespaceCameraServices27LensNamespaceCameraServices init] */

void FUN_102500e18(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensNamespaceCameraServices.LensNamespaceCameraServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102500e44);
  (*pcVar1)();
}


