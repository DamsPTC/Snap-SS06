/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e778a4; end: 101e77b63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e778a4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  code *pcVar7;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar6 = _DAT_112e343e8;
  if (*(long *)(unaff_x20 + _DAT_112e343e8) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000103b7a91c();
    uVar2 = *(undefined8 *)(unaff_x20 + lVar6);
  }
  *(undefined8 *)(unaff_x20 + lVar6) = 0;
  func_0x000107c61170(uVar2);
  FUN_101e713a0();
  func_0x000101e6b314();
  lVar6 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  lVar4 = lVar6;
  func_0x000107c61490(lVar6,puVar3,0,0,0);
  func_0x000107c4e980();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  if (lVar4 != 0) {
    puStack_68 = PTR_DAT_1126a00f0;
    lVar6 = lVar4;
    func_0x000107c61494(lVar4,1,&puStack_68);
    if (lVar6 != 0) {
      func_0x000107c5015c();
    }
    func_0x000107c61170(lVar4);
  }
  lVar6 = unaff_x20 + _DAT_112e34410;
  uVar2 = *(undefined8 *)(lVar6 + 0x18);
  lVar4 = *(long *)(lVar6 + 0x20);
  func_0x0001000a8868(lVar6,uVar2);
  (**(code **)(lVar4 + 0x28))(uVar2,lVar4);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + _DAT_112e34418)) +
              0x148))(0);
  FUN_101e75338(0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e343e0);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(unaff_x20 + _DAT_112e34420) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e34428) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e34430) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e34438) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e343c8) = 0;
  lVar6 = _DAT_112e343d0;
  if (*(char *)(unaff_x20 + _DAT_112e343d0) == '\x01') {
    lVar4 = unaff_x20;
    func_0x000107c4aba4();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
    func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
    lVar5 = lVar4;
    func_0x000107c61490(lVar4,puVar3,0,0,0);
    func_0x000107c4e980();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      puStack_60 = PTR_DAT_1126a00f0;
      lVar4 = lVar5;
      func_0x000107c61494(lVar5,1,&puStack_60);
      if (lVar4 != 0) {
        func_0x000107c3f4c4();
      }
      func_0x000107c61170(lVar5);
    }
    *(undefined1 *)(unaff_x20 + lVar6) = 0;
    if (SCARRY8(*(long *)(unaff_x20 + _DAT_112e343d8),1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x101e77b64);
      (*pcVar7)();
    }
    *(long *)(unaff_x20 + _DAT_112e343d8) = *(long *)(unaff_x20 + _DAT_112e343d8) + 1;
  }
  lVar6 = *(long *)(unaff_x20 + _DAT_112e34440);
  if (lVar6 != 0) {
    lVar5 = ((long *)(unaff_x20 + _DAT_112e34440))[1];
    lVar4 = lVar6;
    func_0x000107c614f0(lVar6);
    pcVar7 = *(code **)(lVar5 + 8);
    func_0x000107c615f0(lVar6);
    (*pcVar7)(lVar4,lVar5);
    func_0x000107c615e8(lVar6);
  }
  return;
}



/* Entry: 101e77b64; end: 101e77d97;  */

undefined1  [16] FUN_101e77b64(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar6 = 0x6c696e;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  lVar2 = unaff_x20;
  func_0x000107c61490(unaff_x20,puVar1,0,0,0);
  func_0x000107c4e980();
  func_0x000107c61180();
  func_0x000107c61170(unaff_x20);
  if (lVar2 == 0) {
    uStack_60 = 0xe300000000000000;
    goto LAB_101e77d78;
  }
  puStack_58 = PTR_DAT_1126a00f0;
  lVar3 = lVar2;
  func_0x000107c61494(lVar2,1,&puStack_58);
  if (lVar3 == 0) {
    func_0x000107c61170(lVar2);
    uStack_60 = 0xe300000000000000;
    goto LAB_101e77d78;
  }
  func_0x000107c4f8e0();
  lVar4 = lVar3;
  func_0x000107c5c9cc();
  if (lVar4 == 0) {
    uVar6 = 0xe600000000000000;
    uVar7 = 0x646573756170;
  }
  else {
    uVar6 = 0xe700000000000000;
    if (lVar4 == 1) {
      uVar7 = 0x74696177;
    }
    else {
      if (lVar4 != 2) {
        uVar7 = 0x6e776f6e6b6e75;
        goto LAB_101e77c84;
      }
      uVar7 = 0x79616c70;
    }
    uVar7 = uVar7 | 0x676e6900000000;
  }
LAB_101e77c84:
  uStack_68 = 0;
  uStack_60 = 0xe000000000000000;
  func_0x000107c602fc(0x17);
  uVar5 = 0xe100000000000000;
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c417f0(lVar3);
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5faec();
  func_0x000107c61170(lVar3);
  func_0x000107c5fb78(lVar4,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c5fb78(0x203a65746172202c,0xe800000000000000);
  func_0x000107c5fe00(param_1,&uStack_68,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x203a736374202c,0xe700000000000000);
  func_0x000107c5fb78(uVar7,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c5fb78(0x5d,0xe100000000000000);
  func_0x000107c61170(lVar2);
  uVar6 = uStack_68;
LAB_101e77d78:
  auVar8._8_8_ = uStack_60;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



/* Entry: 101e77d98; end: 101e77f9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e77d98(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  lVar4 = lVar2;
  func_0x000107c61490(lVar2,puVar3,0,0,0);
  func_0x000107c4e980();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar4 != 0) {
    puStack_68 = PTR_DAT_1126a00f0;
    lVar2 = lVar4;
    func_0x000107c61494(lVar4,1,&puStack_68);
    lVar10 = lVar4;
    if (lVar2 != 0) {
      lVar5 = lVar2;
      func_0x000107c40f5c();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar6 = lVar5;
        func_0x000107c5bd00();
        lVar10 = lVar5;
        if (lVar6 == 1) {
          lVar10 = *(long *)(unaff_x20 + _DAT_112e343d8) + 1;
          if (SCARRY8(*(long *)(unaff_x20 + _DAT_112e343d8),1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101e77fa0);
            (*pcVar1)();
          }
          *(long *)(unaff_x20 + _DAT_112e343d8) = lVar10;
          *(undefined1 *)(unaff_x20 + _DAT_112e343d0) = 1;
          pcVar7 = "prerollIfReady(rate:)";
          func_0x0001000c10c0();
          func_0x000107c61180();
          puVar3 = &UNK_1104906b0;
          func_0x000107c613fc(&UNK_1104906b0,0x18,7);
          func_0x000107c61614(puVar3 + 0x10);
          puVar8 = &UNK_110490990;
          func_0x000107c613fc(&UNK_110490990,0x2c,7);
          *(char **)(puVar8 + 0x10) = pcVar7;
          *(undefined **)(puVar8 + 0x18) = puVar3;
          *(long *)(puVar8 + 0x20) = lVar10;
          *(int *)(puVar8 + 0x28) = (int)param_1;
          pcStack_78 = FUN_101e7a94c;
          puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_90 = 0x42000000;
          puStack_88 = &UNK_100ab47f8;
          puStack_80 = &UNK_1104909a8;
          ppuVar9 = &puStack_98;
          puStack_70 = puVar8;
          func_0x000107c60bc4(ppuVar9);
          puVar3 = puStack_70;
          lVar10 = lVar4;
          func_0x000107c61174(lVar4);
          func_0x000107c615f0(pcVar7);
          func_0x000107c61574(puVar3);
          func_0x000107c4ee50(param_1,lVar2);
          func_0x000107c60bd0(ppuVar9);
          func_0x000107c61170(lVar5);
          func_0x000107c615e8(pcVar7);
        }
        func_0x000107c61170(lVar4);
      }
    }
    func_0x000107c61170(lVar10);
  }
  return;
}



/* Entry: 101e77fa0; end: 101e780b7;  */

void FUN_101e77fa0(undefined4 param_1,undefined1 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  puVar1 = &UNK_1104906b0;
  func_0x000107c613fc(&UNK_1104906b0,0x18,7);
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618(param_4);
  func_0x000107c61614(puVar1 + 0x10,param_4);
  func_0x000107c61170(param_4);
  puVar2 = &UNK_1104909e0;
  func_0x000107c613fc(&UNK_1104909e0,0x25,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined4 *)(puVar2 + 0x20) = param_1;
  puVar2[0x24] = param_2;
  uStack_78 = 0x101e7a95c;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  puStack_80 = &UNK_1104909f8;
  ppuVar3 = &puStack_98;
  puStack_70 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_70);
  func_0x000107c4e590(param_3);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 101e780b8; end: 101e78123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e780b8(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (param_2 == *(long *)(param_1 + _DAT_112e343d8)) {
      *(undefined1 *)(param_1 + _DAT_112e343d0) = 0;
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 101e78124; end: 101e78183; -[_TtC28SCPlaybackPlayerServicesImpl14SCAVPlayerView initWithFrame:] */

void FUN_101e78124(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlaybackPlayerServicesImpl.SCAVPlayerView",0x2b,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e78150);
  (*pcVar1)();
}



/* Entry: 101e78184; end: 101e782ef; -[_TtC28SCPlaybackPlayerServicesImpl14SCAVPlayerView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101e781b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e781f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e781b4) */
/* WARNING: Removing unreachable block (ram,0x000101e781fc) */
/* WARNING: Removing unreachable block (ram,0x0001000834e4) */
/* WARNING: Removing unreachable block (ram,0x0001000834fc) */
/* WARNING: Removing unreachable block (ram,0x0001000834f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e78184(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e343e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e34450));
  return;
}



/* Entry: 101e782f0; end: 101e7834b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e782f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e343e0);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 101e7834c; end: 101e7838b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101e7834c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112e343e0;
  func_0x000107c61428(unaff_x20 + _DAT_112e343e0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_101e7838c;
  return auVar2;
}



/* Entry: 101e7838c; end: 101e7838f;  */

void FUN_101e7838c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 101e78390; end: 101e783d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e78390(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e343b8;
  func_0x000107c61428(unaff_x20 + _DAT_112e343b8,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 101e783d4; end: 101e783d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e783d4(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112e343b8;
  func_0x000107c61428(unaff_x20 + _DAT_112e343b8,auStack_58,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c615f0(param_1);
  func_0x000107c615e8(uVar6);
  *(undefined1 *)(unaff_x20 + _DAT_112e343c0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e343c8) = 0;
  lVar1 = _DAT_112e343d0;
  if (*(char *)(unaff_x20 + _DAT_112e343d0) != '\x01') {
    func_0x000107c615e8(param_1);
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  lVar5 = lVar3;
  func_0x000107c61490(lVar3,puVar4,0,0,0);
  func_0x000107c4e980();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar5 != 0) {
    puStack_60 = PTR_DAT_1126a00f0;
    lVar3 = lVar5;
    func_0x000107c61494(lVar5,1,&puStack_60);
    if (lVar3 == 0) {
      func_0x000107c615e8(param_1);
      func_0x000107c61170(lVar5);
      goto LAB_101e7545c;
    }
    func_0x000107c3f4c4();
    func_0x000107c61170(lVar5);
  }
  func_0x000107c615e8(param_1);
LAB_101e7545c:
  *(undefined1 *)(unaff_x20 + lVar1) = 0;
  if (!SCARRY8(*(long *)(unaff_x20 + _DAT_112e343d8),1)) {
    *(long *)(unaff_x20 + _DAT_112e343d8) = *(long *)(unaff_x20 + _DAT_112e343d8) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e75494);
  (*pcVar2)();
}



/* Entry: 101e783d8; end: 101e78433;  */

undefined8 FUN_101e783d8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x6f8e);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_101e75494();
  *(long *)(lVar1 + 0x20) = lVar2;
  return 0x101e7aad8;
}



/* Entry: 101e78434; end: 101e7843b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e78434(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  bool bVar4;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e343b8;
  func_0x000107c61428(unaff_x20 + _DAT_112e343b8,auStack_48,0,0);
  lVar1 = *(long *)(unaff_x20 + lVar1);
  if (lVar1 == 0) {
    bVar4 = true;
  }
  else {
    func_0x000107c4d444();
    func_0x000107c61180();
    puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x000107c61168(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    lVar3 = lVar1;
    func_0x000107c6148c(lVar1,puVar2);
    bVar4 = lVar3 == 0;
    if (!bVar4) {
      func_0x000107c3abfc();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      func_0x000107c5edb4(param_1,lVar3);
      lVar1 = lVar3;
    }
    func_0x000107c61170(lVar1);
  }
  lVar1 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,bVar4,1,lVar1);
  return;
}



/* Entry: 101e7843c; end: 101e78497;  */

code * FUN_101e7843c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x51a3);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  func_0x000101e75878();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_101e78498;
}



/* Entry: 101e78498; end: 101e784a3;  */

void FUN_101e78498(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 101e784a4; end: 101e78527;  */

void FUN_101e784a4(long param_1)

{
  long lVar1;
  undefined8 unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = param_1;
  func_0x000107c61480(param_1,unaff_x20);
  if (lVar1 != 0) {
    FUN_101e7aa04(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c615f0(param_1);
    func_0x000107c60118();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 101e78528; end: 101e78533;  */

undefined1  [16] FUN_101e78528(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar6 = 0x6c696e;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  lVar2 = unaff_x20;
  func_0x000107c61490(unaff_x20,puVar1,0,0,0);
  func_0x000107c4e980();
  func_0x000107c61180();
  func_0x000107c61170(unaff_x20);
  if (lVar2 == 0) {
    uStack_60 = 0xe300000000000000;
    goto LAB_101e77d78;
  }
  puStack_58 = PTR_DAT_1126a00f0;
  lVar3 = lVar2;
  func_0x000107c61494(lVar2,1,&puStack_58);
  if (lVar3 == 0) {
    func_0x000107c61170(lVar2);
    uStack_60 = 0xe300000000000000;
    goto LAB_101e77d78;
  }
  func_0x000107c4f8e0();
  lVar4 = lVar3;
  func_0x000107c5c9cc();
  if (lVar4 == 0) {
    uVar6 = 0xe600000000000000;
    uVar7 = 0x646573756170;
  }
  else {
    uVar6 = 0xe700000000000000;
    if (lVar4 == 1) {
      uVar7 = 0x74696177;
    }
    else {
      if (lVar4 != 2) {
        uVar7 = 0x6e776f6e6b6e75;
        goto LAB_101e77c84;
      }
      uVar7 = 0x79616c70;
    }
    uVar7 = uVar7 | 0x676e6900000000;
  }
LAB_101e77c84:
  uStack_68 = 0;
  uStack_60 = 0xe000000000000000;
  func_0x000107c602fc(0x17);
  uVar5 = 0xe100000000000000;
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c417f0(lVar3);
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5faec();
  func_0x000107c61170(lVar3);
  func_0x000107c5fb78(lVar4,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c5fb78(0x203a65746172202c,0xe800000000000000);
  func_0x000107c5fe00(param_1,&uStack_68,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x203a736374202c,0xe700000000000000);
  func_0x000107c5fb78(uVar7,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c5fb78(0x5d,0xe100000000000000);
  func_0x000107c61170(lVar2);
  uVar6 = uStack_68;
LAB_101e77d78:
  auVar8._8_8_ = uStack_60;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



/* Entry: 101e78534; end: 101e785bf;  */

undefined8 FUN_101e78534(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c4aba4(uVar1);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  func_0x000107c61490(uVar1,puVar2,0,0,0);
  func_0x000107c5dde8();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 101e785c0; end: 101e785df;  */

void FUN_101e785c0(void)

{
  FUN_101e785e0();
  return;
}



/* Entry: 101e785e0; end: 101e786f7;  */

void FUN_101e785e0(double param_1,double param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  lVar3 = lVar1;
  func_0x000107c61490(lVar1,puVar2,0,0,0);
  func_0x000107c4e980();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x000107c40f5c();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar1 != 0) {
      lVar3 = lVar1;
      func_0x000107c5bd00();
      if (lVar3 == 1) {
        func_0x000107c4f058(lVar1);
        func_0x000107c61170(lVar1);
        if ((param_1 == 0.0) && (param_2 == 0.0)) {
          return;
        }
      }
      else {
        func_0x000107c61170(lVar1);
      }
    }
  }
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  func_0x000107c61490(unaff_x20,puVar2,0,0,0);
  return;
}



/* Entry: 101e786f8; end: 101e78703;  */

undefined8 FUN_101e786f8(void)

{
  return 0;
}



/* Entry: 101e78704; end: 101e78ad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e78704(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *unaff_x20;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_a8 [24];
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined *puStack_68;
  
  lVar8 = _DAT_112e343c0;
  if (unaff_x20[_DAT_112e343c0] != '\x01') goto LAB_101e78840;
  puVar2 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  puVar4 = puVar2;
  func_0x000107c61490(puVar2,puVar3,0,0,0);
  func_0x000107c4e980();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (puVar4 == (undefined *)0x0) goto LAB_101e78840;
  puStack_90 = PTR_DAT_1126a00f0;
  puVar2 = puVar4;
  func_0x000107c61494(puVar4,1,&puStack_90);
  puVar3 = puVar4;
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c40f5c();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      unaff_x20[lVar8] = 0;
      lVar1 = _DAT_112e343b8;
      func_0x000107c61428(unaff_x20 + _DAT_112e343b8,auStack_a8,0,0);
      if (*(long *)(unaff_x20 + lVar1) == 0) goto LAB_101e78838;
      func_0x000107c4d444();
      func_0x000107c61180();
      unaff_x20[lVar8] = 1;
      puVar3 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
      func_0x000107c610f8(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
      func_0x000107c457a0();
      func_0x000101e7630c();
      func_0x000107c61170(puVar4);
    }
    func_0x000107c61170();
  }
LAB_101e78838:
  func_0x000107c61170(puVar3);
LAB_101e78840:
  puVar2 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  puVar4 = puVar2;
  func_0x000107c61490(puVar2,puVar3,0,0,0);
  func_0x000107c4e980();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (puVar4 != (undefined *)0x0) {
    puStack_68 = PTR_DAT_1126a00f0;
    puVar2 = puVar4;
    func_0x000107c61494(puVar4,1,&puStack_68);
    lVar8 = _DAT_112e343b8;
    if (puVar2 != (undefined *)0x0) {
      func_0x000107c61428(unaff_x20 + _DAT_112e343b8,auStack_80,0,0);
      lVar8 = *(long *)(unaff_x20 + lVar8);
      if (lVar8 != 0) {
        puVar3 = unaff_x20 + _DAT_112e34410;
        uVar7 = *(undefined8 *)(puVar3 + 0x18);
        lVar1 = *(long *)(puVar3 + 0x20);
        func_0x0001000a8868(puVar3,uVar7);
        pcVar9 = *(code **)(lVar1 + 0x18);
        func_0x000107c615f0(lVar8);
        (*pcVar9)(uVar7,lVar1);
        lVar1 = _DAT_112e343e8;
        if (*(long *)(unaff_x20 + _DAT_112e343e8) == 0) {
          func_0x000103b7aae4(0);
          func_0x000107c610f8();
          puVar3 = unaff_x20;
          func_0x000107c61174();
          func_0x000103b7a5f8();
          uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
          *(undefined **)(unaff_x20 + lVar1) = puVar3;
          func_0x000107c61170(uVar7);
        }
        func_0x000101e76084();
        unaff_x20[_DAT_112e343c8] = 0;
        lVar1 = _DAT_112e343d0;
        if (unaff_x20[_DAT_112e343d0] == '\x01') {
          puVar3 = unaff_x20;
          func_0x000107c4aba4();
          func_0x000107c61180();
          puVar5 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
          func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
          puVar6 = puVar3;
          func_0x000107c61490(puVar3,puVar5,0,0,0);
          func_0x000107c4e980();
          func_0x000107c61180();
          func_0x000107c61170(puVar3);
          if (puVar6 != (undefined *)0x0) {
            puStack_88 = PTR_DAT_1126a00f0;
            puVar3 = puVar6;
            func_0x000107c61494(puVar6,1,&puStack_88);
            if (puVar3 != (undefined *)0x0) {
              func_0x000107c3f4c4();
            }
            func_0x000107c61170(puVar6);
          }
          unaff_x20[lVar1] = 0;
          if (SCARRY8(*(long *)(unaff_x20 + _DAT_112e343d8),1)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x101e78ad4);
            (*pcVar9)();
          }
          *(long *)(unaff_x20 + _DAT_112e343d8) = *(long *)(unaff_x20 + _DAT_112e343d8) + 1;
        }
        func_0x000107c4e868(puVar2);
        unaff_x20[_DAT_112e34420] = 1;
        if (unaff_x20[_DAT_112e34448] == '\x01') {
          *(undefined1 *)(*(long *)(unaff_x20 + _DAT_112e34400) + _DAT_112e34340) = 1;
        }
        FUN_101e7108c(puVar2);
        FUN_101e6b420();
        func_0x000103b7a088(0);
        func_0x000103b79814(lVar8);
        func_0x000107c61170(puVar4);
        func_0x000107c615e8(lVar8);
        return;
      }
    }
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 101e78ad4; end: 101e78beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e78ad4(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_38;
  
  *(undefined1 *)(unaff_x20 + _DAT_112e34420) = 0;
  if (*(char *)(unaff_x20 + _DAT_112e34448) == '\x01') {
    *(undefined1 *)(*(long *)(unaff_x20 + _DAT_112e34400) + _DAT_112e34340) = 0;
  }
  lVar1 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  lVar3 = lVar1;
  func_0x000107c61490(lVar1,puVar2,0,0,0);
  func_0x000107c4e980();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar3 != 0) {
    puStack_38 = PTR_DAT_1126a00f0;
    lVar1 = lVar3;
    func_0x000107c61494(lVar3,1,&puStack_38);
    if (lVar1 != 0) {
      func_0x000107c4e454();
    }
    func_0x000107c61170(lVar3);
  }
  lVar1 = _DAT_112e343e8;
  if (*(long *)(unaff_x20 + _DAT_112e343e8) == 0) {
    uVar4 = 0;
  }
  else {
    func_0x000103b7a91c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61170(uVar4);
  FUN_101e713a0();
  return;
}



/* Entry: 101e78bec; end: 101e78dfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e78bec(undefined *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  if ((*(byte *)(unaff_x20 + _DAT_112e34438) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112e34438) = 1;
    func_0x000107c4aba4();
    func_0x000107c61180();
    puVar1 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
    func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
    lVar2 = unaff_x20;
    func_0x000107c61490(unaff_x20,puVar1,0,0,0);
    func_0x000107c4e980();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    if (lVar2 != 0) {
      puStack_68 = PTR_DAT_1126a00f0;
      lVar3 = lVar2;
      func_0x000107c61494(lVar2,1,&puStack_68);
      if (lVar3 != 0) {
        puVar1 = &UNK_1104906b0;
        func_0x000107c613fc(&UNK_1104906b0,0x18,7);
        func_0x000107c61614(puVar1 + 0x10);
        puVar4 = &UNK_1104906d8;
        func_0x000107c613fc(&UNK_1104906d8,0x40,7);
        *(undefined **)(puVar4 + 0x10) = puVar1;
        *(undefined **)(puVar4 + 0x18) = param_1;
        *(int *)(puVar4 + 0x20) = (int)param_2;
        *(int *)(puVar4 + 0x24) = (int)((ulong)param_2 >> 0x20);
        *(undefined8 *)(puVar4 + 0x28) = param_3;
        *(code **)(puVar4 + 0x30) = param_4;
        *(undefined8 *)(puVar4 + 0x38) = param_5;
        uStack_78 = 0x101e7a3e8;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        puStack_88 = &UNK_100ab47f8;
        puStack_80 = &UNK_1104906f0;
        ppuVar5 = &puStack_98;
        puStack_70 = puVar4;
        func_0x000107c60bc4(ppuVar5);
        puVar1 = puStack_70;
        func_0x000101e7a3f8(param_4,param_5);
        func_0x000107c61574(puVar1);
        puStack_98 = param_1;
        uStack_90 = param_2;
        puStack_88 = (undefined *)param_3;
        func_0x000107c51bec(lVar3);
        func_0x000107c60bd0(ppuVar5);
      }
      func_0x000107c61170(lVar2);
    }
  }
  else if (param_4 != (code *)0x0) {
    (*param_4)(0);
  }
  return;
}



/* Entry: 101e78dfc; end: 101e78e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e78dfc(ulong param_1,long param_2)

{
  code *in_x5;
  undefined4 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + _DAT_112e34438) = 0;
    if (in_x5 != (code *)0x0) {
      uVar1 = 1;
      if ((param_1 & 1) != 0) {
        uVar1 = 2;
      }
      (*in_x5)(uVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 101e78e84; end: 101e79037;  */

void FUN_101e78e84(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar8 = *(long *)(param_2 + 0x10);
  if (lVar8 != 0) {
    func_0x000107c61428(param_4 + 0x10,auStack_88,0,0);
    plVar7 = (long *)(param_2 + 0x28);
    do {
      uVar1 = plVar7[-1];
      uVar9 = param_1;
      if ((uVar1 == 0x6e6f697461727564 && *plVar7 == -0x1800000000000000) ||
         (func_0x000107c605b8(uVar1,*plVar7,0x6e6f697461727564,0xe800000000000000,0),
         uVar9 = param_1, (uVar1 & 1) != 0)) {
        lVar2 = param_4 + 0x10;
        func_0x000107c61618();
        param_1 = uVar9;
        if (lVar2 != 0) {
          func_0x000107c42378(&puStack_b8,param_3);
          func_0x000107c600d4(puStack_b8,uStack_b0,puStack_a8);
          pcVar3 = "didLoadMediaDuration(_:)";
          param_1 = uVar9;
          func_0x0001000c10c0("didLoadMediaDuration(_:)");
          func_0x000107c61180();
          puVar4 = &UNK_1104906b0;
          func_0x000107c613fc(&UNK_1104906b0,0x18,7);
          func_0x000107c61614(puVar4 + 0x10,lVar2);
          puVar5 = &UNK_110490a80;
          func_0x000107c613fc(&UNK_110490a80,0x20,7);
          *(undefined **)(puVar5 + 0x10) = puVar4;
          *(undefined8 *)(puVar5 + 0x18) = uVar9;
          uStack_98 = 0x101e7a9d4;
          puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b0 = 0x42000000;
          puStack_a8 = &UNK_1000f6b44;
          puStack_a0 = &UNK_110490a98;
          ppuVar6 = &puStack_b8;
          puStack_90 = puVar5;
          func_0x000107c60bc4(ppuVar6);
          func_0x000107c61574(puStack_90);
          func_0x000107c4e524(pcVar3);
          func_0x000107c60bd0(ppuVar6);
          func_0x000107c61170(lVar2);
          func_0x000107c615e8(pcVar3);
        }
      }
      plVar7 = plVar7 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



/* Entry: 101e79038; end: 101e790c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e79038(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112e34450);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_2);
    uStack_58 = 0;
    uStack_50 = 1;
    uStack_60 = param_1;
    func_0x0001002a64a8(&uStack_60);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 101e790c8; end: 101e7910b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101e790c8(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e343f0;
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + _DAT_112e343f0,auStack_38,0,0);
  return *(undefined1 *)(lVar2 + lVar1);
}



/* Entry: 101e7910c; end: 101e7915b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7910c(undefined1 param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e343f0;
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + _DAT_112e343f0,auStack_48,1,0);
  *(undefined1 *)(lVar2 + lVar1) = param_1;
  return;
}



/* Entry: 101e7915c; end: 101e791df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101e7915c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = _DAT_112e343f0;
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + _DAT_112e343f0,param_1,0x21,0);
  auVar3._8_8_ = lVar2 + lVar1;
  auVar3._0_8_ = 0x101e7aad0;
  return auVar3;
}



/* Entry: 101e791e0; end: 101e79253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e791e0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar1 = *unaff_x20 + _DAT_112e34410;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 0x28))(uVar2,lVar3);
  FUN_101e78ad4();
  FUN_101e78bec(*(undefined8 *)PTR__kCMTimeZero_110348670,
                *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8),
                *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10),0,0);
  return;
}



/* Entry: 101e79254; end: 101e79303;  */

void FUN_101e79254(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *unaff_x20;
  undefined *puStack_38;
  
  lVar1 = *unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  lVar3 = lVar1;
  func_0x000107c61490(lVar1,puVar2,0,0,0);
  func_0x000107c4e980();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar3 != 0) {
    puStack_38 = PTR_DAT_1126a00f0;
    lVar1 = lVar3;
    func_0x000107c61494(lVar3,1,&puStack_38);
    if (lVar1 != 0) {
      func_0x000107c57b28(param_1);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 101e79304; end: 101e7945f;  */

undefined1  [16] FUN_101e79304(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 uVar4;
  undefined1 auVar5 [16];
  
  *param_1 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  lVar2 = unaff_x20;
  func_0x000107c61490(unaff_x20,puVar1,0,0,0);
  func_0x000107c4e980();
  func_0x000107c61180();
  func_0x000107c61170(unaff_x20);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c4a0c4();
    uVar4 = (undefined1)lVar3;
    func_0x000107c61170(lVar2);
  }
  *(undefined1 *)(param_1 + 1) = uVar4;
  auVar5._8_8_ = param_1 + 1;
  auVar5._0_8_ = 0x101e793ac;
  return auVar5;
}



/* Entry: 101e79460; end: 101e7950f;  */

undefined1  [16] FUN_101e79460(undefined4 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  *param_2 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  lVar2 = unaff_x20;
  func_0x000107c61490(unaff_x20,puVar1,0,0,0);
  func_0x000107c4e980();
  func_0x000107c61180();
  func_0x000107c61170(unaff_x20);
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5e028(lVar2);
    func_0x000107c61170(lVar2);
  }
  *(undefined4 *)(param_2 + 1) = param_1;
  auVar3._8_8_ = param_2 + 1;
  auVar3._0_8_ = FUN_101e79510;
  return auVar3;
}



/* Entry: 101e79510; end: 101e795c3;  */

/* WARNING: Possible PIC construction at 0x000101e795a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e795a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e79510(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *param_1;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(lVar2 + _DAT_112e34418)) +
              0xf0))((int)param_1[1]);
  func_0x000107c4aba4(lVar2);
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  func_0x000107c61490(lVar2,puVar1,0,0,0);
  func_0x000107c4e980();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101e795c4; end: 101e7964f;  */

long FUN_101e795c4(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  lVar3 = lVar1;
  func_0x000107c61490(lVar1,puVar2,0,0,0);
  func_0x000107c4e980();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar3;
    func_0x000107c4a0c4(lVar3);
    func_0x000107c61170(lVar3);
  }
  return lVar1;
}



/* Entry: 101e79650; end: 101e7975f;  */

/* WARNING: Possible PIC construction at 0x000101e796dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e796e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e79650(void)

{
  undefined *puVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(lVar2 + _DAT_112e34418)) +
              0x108))();
  func_0x000107c4aba4(lVar2);
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  func_0x000107c61490(lVar2,puVar1,0,0,0);
  func_0x000107c4e980();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101e79760; end: 101e798a3;  */

undefined8 FUN_101e79760(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  lVar3 = lVar1;
  func_0x000107c61490(lVar1,puVar2,0,0,0);
  func_0x000107c4e980();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar3 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5e028(lVar3);
    func_0x000107c61170(lVar3);
  }
  return param_1;
}



/* Entry: 101e798a4; end: 101e79903;  */

undefined8 FUN_101e798a4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x84df);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_101e79460();
  *(long *)(lVar1 + 0x20) = lVar2;
  return 0x101e7aae0;
}



/* Entry: 101e79904; end: 101e799b7;  */

void FUN_101e79904(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 101e799b8; end: 101e79bd7;  */

undefined8 FUN_101e799b8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 auStack_60 [3];
  undefined *puStack_48;
  
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  lVar2 = unaff_x20;
  func_0x000107c61490(unaff_x20,puVar1,0,0,0);
  func_0x000107c4e980();
  func_0x000107c61180();
  func_0x000107c61170(unaff_x20);
  if (lVar2 != 0) {
    puStack_48 = PTR_DAT_1126a00f0;
    lVar3 = lVar2;
    func_0x000107c61494(lVar2,1,&puStack_48);
    if (lVar3 == 0) {
      func_0x000107c61170(lVar2);
    }
    else {
      func_0x000107c40f5c();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 != 0) {
        func_0x000107c41014(auStack_60,lVar3);
        func_0x000107c61170(lVar3);
        return auStack_60[0];
      }
    }
  }
  return *(undefined8 *)PTR__kCMTimeZero_110348670;
}



/* Entry: 101e79bd8; end: 101e79c17;  */

void FUN_101e79bd8(void)

{
  FUN_101e74b78();
  return;
}



/* Entry: 101e79c18; end: 101e79cb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e79c18(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar1 = *unaff_x20 + _DAT_112e34410;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 0x10))(uVar2,lVar3);
  return;
}



/* Entry: 101e79cb8; end: 101e79d07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101e79cb8(undefined8 param_1)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + _DAT_112e34450);
  FUN_101e67cb0();
  func_0x000107c6157c(uVar1);
  func_0x0001000c2068(param_1);
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101e79d08; end: 101e79e07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e79d08(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  lVar1 = unaff_x20 + _DAT_112e34410;
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar3);
  (**(code **)(lVar2 + 0x20))(1,uVar3,lVar2);
  if ((*(byte *)(unaff_x20 + _DAT_112e34428) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112e34428) = 1;
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e34450);
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 3;
    func_0x000107c6157c(uVar3);
    func_0x0001002a64a8(&uStack_60);
    func_0x000107c61574(uVar3);
    if ((*(byte *)(unaff_x20 + _DAT_112e343c8) & 1) != 0) {
      *(undefined1 *)(unaff_x20 + _DAT_112e343c8) = 0;
      FUN_101e77d98(0x3f800000);
    }
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e34450);
  uStack_58 = 0;
  uStack_60 = 2;
  uStack_50 = 3;
  func_0x000107c6157c(uVar3);
  func_0x0001002a64a8(&uStack_60);
  func_0x000107c61574(uVar3);
  return;
}



/* Entry: 101e79e08; end: 101e79e2f; -[_TtC28SCPlaybackPlayerServicesImpl14SCAVPlayerView playerDidResumeFromStall] */

void FUN_101e79e08(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101e79d08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e79e30; end: 101e79ed7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e79e30(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  lVar1 = unaff_x20 + _DAT_112e34410;
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar3);
  (**(code **)(lVar2 + 0x20))(0,uVar3,lVar2);
  if (*(char *)(unaff_x20 + _DAT_112e34420) == '\x01') {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e34450);
    uStack_48 = 0;
    uStack_50 = 1;
    uStack_40 = 3;
    func_0x000107c6157c(uVar3);
    func_0x0001002a64a8(&uStack_50);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 101e79ed8; end: 101e79eff; -[_TtC28SCPlaybackPlayerServicesImpl14SCAVPlayerView playerDidStall] */

void FUN_101e79ed8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101e79e30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e79f00; end: 101e7a20f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101e79f00(void)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long extraout_x8;
  undefined8 uVar12;
  undefined *unaff_x20;
  long lVar13;
  undefined auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar3 = unaff_x20;
  func_0x000107c614f0();
  lVar4 = 0;
  func_0x000107c5f804();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar10 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (unaff_x20[_DAT_112e34458] == '\x01') {
    puVar5 = unaff_x20;
    func_0x000107c4aba4();
    func_0x000107c61180();
    puVar6 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
    func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
    puVar7 = puVar5;
    func_0x000107c61490(puVar5,puVar6,0,0,0);
    func_0x000107c4e980();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    if (puVar7 != (undefined *)0x0) {
      puStack_68 = PTR_DAT_1126a00f0;
      puVar5 = puVar7;
      func_0x000107c61494(puVar7,1,&puStack_68);
      if (puVar5 == (undefined *)0x0) {
        func_0x000107c61170(puVar7);
      }
      else {
        func_0x000107c40f5c();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        if (puVar5 != (undefined *)0x0) {
          puVar6 = unaff_x20 + _DAT_112e34410;
          uVar8 = *(undefined8 *)(puVar6 + 0x18);
          lVar9 = *(long *)(puVar6 + 0x20);
          func_0x0001000a8868(puVar6,uVar8);
          (**(code **)(lVar9 + 8))();
          uVar12 = 0;
          if (lVar9 != 0) {
            uVar12 = uVar8;
          }
          lVar1 = -0x2000000000000000;
          if (lVar9 != 0) {
            lVar1 = lVar9;
          }
          func_0x0001000285a8(0x112e34460,&UNK_10da1dd40);
          func_0x000107c613fc();
          lVar9 = 0;
          func_0x00010095c380();
          puVar6 = PTR__OBJC_CLASS___NSThread_1126b47e0;
          func_0x000107c61168();
          iVar2 = (int)puVar6;
          func_0x000107c4a02c();
          if (iVar2 == 0) {
            puVar3 = puVar5;
            FUN_101e7a65c(puVar5,uVar12,lVar1);
            func_0x000107c6142c(lVar1);
            puStack_98 = puVar3;
            func_0x000100b60084(&puStack_98);
            func_0x000107c61170(puVar3);
          }
          else {
            FUN_101e7aa04(0,0x112d56378,&PTR_PTR_1126ae790);
            (**(code **)(lVar13 + 0x68))
                      (puVar10,*(undefined4 *)
                                PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar4);
            puVar6 = puVar10;
            func_0x000104188018(puVar10,0,0);
            (**(code **)(lVar13 + 8))(puVar10,lVar4);
            puVar10 = &UNK_110490728;
            func_0x000107c613fc(&UNK_110490728,0x38,7);
            *(long *)(puVar10 + 0x10) = lVar9;
            *(undefined **)(puVar10 + 0x18) = puVar5;
            *(undefined8 *)(puVar10 + 0x20) = uVar12;
            *(long *)(puVar10 + 0x28) = lVar1;
            *(undefined **)(puVar10 + 0x30) = puVar3;
            pcStack_78 = FUN_101e7a91c;
            puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_90 = 0x42000000;
            puStack_88 = &UNK_1000f6b44;
            puStack_80 = &UNK_110490740;
            ppuVar11 = &puStack_98;
            puStack_70 = puVar10;
            func_0x000107c60bc4(ppuVar11);
            puVar3 = puStack_70;
            func_0x000107c6157c(lVar9);
            func_0x000107c61174(puVar5);
            func_0x000107c61574(puVar3);
            func_0x000107c4e524(puVar6);
            func_0x000107c61170(puVar5);
            func_0x000107c60bd0(ppuVar11);
            puVar5 = puVar6;
          }
          func_0x000107c61170(puVar5);
          uVar12 = *(undefined8 *)(lVar9 + 0x10);
          func_0x000107c6157c(uVar12);
          func_0x000107c61574(lVar9);
          return uVar12;
        }
      }
    }
  }
  return 0;
}



/* Entry: 101e7a210; end: 101e7a2f3;  */

void FUN_101e7a210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  
  FUN_101e7a65c(param_2,param_3,param_4);
  uStack_28 = param_2;
  func_0x000100b60084(&uStack_28);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 101e7a2f4; end: 101e7a2fb;  */

undefined8 FUN_101e7a2f4(void)

{
  return 0;
}



/* Entry: 101e7a2fc; end: 101e7a31b;  */

void FUN_101e7a2fc(void)

{
  FUN_101e79f00();
  return;
}



/* Entry: 101e7a31c; end: 101e7a31f;  */

void FUN_101e7a31c(void)

{
  return;
}



/* Entry: 101e7a320; end: 101e7a363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101e7a320(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e343f8;
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + _DAT_112e343f8,auStack_38,0,0);
  return *(undefined1 *)(lVar2 + lVar1);
}



/* Entry: 101e7a364; end: 101e7a3b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7a364(undefined1 param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e343f8;
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + _DAT_112e343f8,auStack_48,1,0);
  *(undefined1 *)(lVar2 + lVar1) = param_1;
  return;
}



/* Entry: 101e7a3b4; end: 101e7a3e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7a3b4(void)

{
  FUN_101e67970();
  func_0x0001000c2068();
  return;
}



/* Entry: 101e7a3e4; end: 101e7a407;  */

void FUN_101e7a3e4(void)

{
  return;
}



/* Entry: 101e7a408; end: 101e7a473;  */

void FUN_101e7a408(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_101e7aa04(0,0x112e32da8,&PTR_PTR_1126a9668);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e34550;
  plVar5 = (long *)&UNK_10da1da68;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101e7a474; end: 101e7a65b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7a474(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112e343e8) = 0;
  lVar2 = _DAT_112e34450;
  uVar4 = 0x112e33e30;
  func_0x0001000285a8(0x112e33e30,&UNK_10da1d340);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e34470);
  *puVar1 = 0x79616c5056414353;
  puVar1[1] = 0xee00776569567265;
  *(undefined8 *)(unaff_x20 + _DAT_112e343b8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e343e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e343f0) = 2;
  lVar2 = _DAT_112e34468;
  uVar4 = 0x112e33e38;
  func_0x0001000285a8(0x112e33e38,&UNK_10da1dd50);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  *(undefined1 *)(unaff_x20 + _DAT_112e343f8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e343c0) = 0;
  lVar2 = _DAT_112e34418;
  uVar4 = 0;
  func_0x000103bae79c();
  func_0x000107c610f8();
  func_0x000103bae528();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e34440);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e34420) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e34428) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e34430) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e34448) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e34458) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e34438) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e343c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e343d8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e343d0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCPlaybackPlayerServicesImpl/SCAVPlayerView.swift",0x31,2,0xac,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101e7a65c);
  (*pcVar3)();
}



/* Entry: 101e7a65c; end: 101e7a91b;  */

/* WARNING: Type propagation algorithm not settling */

undefined * FUN_101e7a65c(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  func_0x000107c3cee0();
  func_0x000107c61180();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    puVar8 = param_1;
    func_0x000107c42afc();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    uVar3 = 0;
    FUN_101e7aa04(0,0x112e344a8,&PTR__OBJC_CLASS___AVPlayerItemAccessLogEvent_1126a96a0);
    puVar4 = puVar8;
    func_0x000107c5fc54(puVar8,uVar3);
    func_0x000107c61170(puVar8);
  }
  if ((ulong)puVar4 >> 0x3e == 0) {
    puVar8 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar8 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      puVar8 = puVar4;
    }
    func_0x000107c60480();
  }
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c6142c(puVar4);
    puVar10 = (undefined *)0x0;
  }
  else {
    if ((long)puVar8 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e7a91c);
      (*pcVar1)();
    }
    puVar10 = (undefined *)0x0;
    puVar7 = (undefined *)0x0;
    puVar9 = (undefined *)0x0;
    do {
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        puVar5 = *(undefined **)(puVar4 + (long)puVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar5 = puVar9;
        FUN_101e7dd58(puVar9,puVar4);
      }
      puVar6 = puVar5;
      func_0x000107c4d918();
      if ((0 < (long)puVar6) &&
         (bVar2 = SCARRY8((long)puVar7,(long)puVar6), puVar7 = puVar7 + (long)puVar6, bVar2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e7a90c);
        (*pcVar1)();
      }
      puVar6 = puVar5;
      func_0x000107c4d938();
      if ((long)puVar6 < 1) {
        func_0x000107c61170(puVar5);
      }
      else {
        puVar6 = puVar5;
        func_0x000107c4d938();
        func_0x000107c61170(puVar5);
        bVar2 = SCARRY8((long)puVar10,(long)puVar6);
        puVar10 = puVar10 + (long)puVar6;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e7a78c);
          (*pcVar1)();
        }
      }
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar9);
    func_0x000107c6142c(puVar4);
    if ((long)puVar7 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e7a910);
      (*pcVar1)();
    }
    if (0x7fffffff < (long)puVar7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e7a7b0);
      (*pcVar1)();
    }
  }
  puVar4 = PTR_PTR_1126dd348;
  func_0x000107c610f8();
  func_0x000107c461f8();
  puVar8 = PTR_PTR_1126dd450;
  func_0x000107c610f8(PTR_PTR_1126dd450);
  uVar3 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c4765c(puVar8);
  func_0x000107c61170(uVar3);
  if ((long)puVar10 < -0x80000000) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e7a914);
    (*pcVar1)();
  }
  if (0x7fffffff < (long)puVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e7a918);
    (*pcVar1)();
  }
  puVar10 = PTR_PTR_1126dd5f8;
  func_0x000107c610f8(PTR_PTR_1126dd5f8);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c46d9c(puVar10);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_2);
  return puVar10;
}



/* Entry: 101e7a91c; end: 101e7a92b;  */

void FUN_101e7a91c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_101e7a65c(uVar1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  uStack_28 = uVar1;
  func_0x000100b60084(&uStack_28);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 101e7a92c; end: 101e7a94b;  */

void FUN_101e7a92c(void)

{
  func_0x000107c61168(&PTR_PTR_112806d48);
  return;
}



/* Entry: 101e7a94c; end: 101e7a977;  */

void FUN_101e7a94c(undefined1 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined4 uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined4 *)(unaff_x20 + 0x28);
  puVar2 = &UNK_1104906b0;
  func_0x000107c613fc(&UNK_1104906b0,0x18,7);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618(lVar3);
  func_0x000107c61614(puVar2 + 0x10,lVar3);
  func_0x000107c61170(lVar3);
  puVar4 = &UNK_1104909e0;
  func_0x000107c613fc(&UNK_1104909e0,0x25,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar6;
  *(undefined4 *)(puVar4 + 0x20) = uVar7;
  puVar4[0x24] = param_1;
  uStack_78 = 0x101e7a95c;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  puStack_80 = &UNK_1104909f8;
  ppuVar5 = &puStack_98;
  puStack_70 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_70);
  func_0x000107c4e590(uVar1);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 101e7a978; end: 101e7a9cb;  */

void FUN_101e7a978(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e344f8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_101e7aa04(0xff,0x112e34500,&PTR_PTR_1126dd630);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112e344f8 = puVar2;
  return;
}



/* Entry: 101e7a9cc; end: 101e7aa03;  */

void FUN_101e7a9cc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_101e76c78(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101e7aa04; end: 101e7aa43;  */

void FUN_101e7aa04(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101e7aa44; end: 101e7aae3;  */

void FUN_101e7aa44(void)

{
  FUN_101e78704();
  return;
}



/* Entry: 101e7aae4; end: 101e7ac1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101e7aae4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + _DAT_112e34558);
  func_0x000107c4c960();
  func_0x000107c61180();
  if (lVar1 == 0) {
    if (param_3 != 0) {
      uVar4 = 0xd00000000000003c;
      func_0x000107c5fadc(0xd00000000000003c,0x800000010f015ef0);
      func_0x000107c4dc70(param_3);
      func_0x000107c61170(uVar4);
    }
    lVar5 = -1;
  }
  else {
    puVar2 = &UNK_110490c80;
    func_0x000107c613fc(&UNK_110490c80,0x18,7);
    *(long *)(puVar2 + 0x10) = param_3;
    uStack_50 = 0x101e7b110;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_101e7ace0;
    puStack_58 = &UNK_110490c98;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c615f0(param_3);
    func_0x000107c61574(puVar2);
    lVar5 = lVar1;
    func_0x000107c4b720(lVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar1);
  }
  return lVar5;
}



/* Entry: 101e7ac1c; end: 101e7acdf;  */

void FUN_101e7ac1c(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  if (param_4 == 0) {
    if (param_2 >> 0x3c < 0xf) {
      if (param_6 == 0) {
        return;
      }
      func_0x00010006c00c();
      param_3 = param_1;
      func_0x000107c5ee20(param_1,param_2);
      func_0x000107c4dc6c(param_6);
      func_0x0001000b44c0(param_1,param_2);
      goto LAB_101e7ac80;
    }
    if (param_6 == 0) {
      return;
    }
    param_4 = -0x7ffffffef0fea0d0;
    param_3 = 0xd00000000000002b;
  }
  else if (param_6 == 0) {
    return;
  }
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c4dc70(param_6);
LAB_101e7ac80:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101e7ace0; end: 101e7ada3;  */

void FUN_101e7ace0(long param_1,long param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    lVar4 = param_2;
    func_0x000107c6157c(uVar2);
    lVar5 = -0x1000000000000000;
  }
  else {
    lVar5 = param_2;
    func_0x000107c6157c(uVar2);
    lVar3 = param_2;
    func_0x000107c61174(param_2);
    func_0x000107c5ee30(param_2);
    lVar4 = lVar5;
    func_0x000107c61170(lVar3);
  }
  if (param_3 == 0) {
    param_3 = 0;
    lVar4 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  (*pcVar1)(param_2,lVar5,param_3,lVar4,param_4);
  func_0x000107c6142c(lVar4);
  func_0x0001000b44c0(param_2,lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101e7ada4; end: 101e7af33; -[_TtC28SCPlaybackPlayerServicesImpl25SCNeoPlayerCMDataProvider loadDataChunk:chunkSize:completion:] */

undefined8
FUN_101e7ada4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_101e7aae4(param_3,param_4,param_5);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
  return param_3;
}



/* Entry: 101e7af34; end: 101e7af9b;  */

void FUN_101e7af34(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  if (param_4 == 0) {
    if (param_6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0e34d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_6,PTR_s_onDataSizeResolved__112616748,param_5);
      return;
    }
  }
  else if (param_6 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c4dc70(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 101e7af9c; end: 101e7aff7; -[_TtC28SCPlaybackPlayerServicesImpl25SCNeoPlayerCMDataProvider getTotalDataSize:] */

undefined8 FUN_101e7af9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000101e7ae14(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101e7aff8; end: 101e7b05b; -[_TtC28SCPlaybackPlayerServicesImpl25SCNeoPlayerCMDataProvider cancelLoad:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7aff8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112e34558);
  func_0x000107c61174();
  func_0x000107c4c960();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3f4b0();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e7b05c; end: 101e7b0bb; -[_TtC28SCPlaybackPlayerServicesImpl25SCNeoPlayerCMDataProvider init] */

void FUN_101e7b05c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlaybackPlayerServicesImpl.SCNeoPlayerCMDataProvider",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e7b088);
  (*pcVar1)();
}



/* Entry: 101e7b0bc; end: 101e7b0cb; -[_TtC28SCPlaybackPlayerServicesImpl25SCNeoPlayerCMDataProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7b0bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e34558));
  return;
}



/* Entry: 101e7b0cc; end: 101e7b0eb;  */

void FUN_101e7b0cc(void)

{
  func_0x000107c61168(&PTR_PTR_112806ec0);
  return;
}



/* Entry: 101e7b0ec; end: 101e7b11f;  */

void FUN_101e7b0ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_4 == 0) {
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0e34d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_onDataSizeResolved__112616748,param_5);
      return;
    }
  }
  else if (lVar1 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c4dc70(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 101e7b120; end: 101e7b13f; -[_TtC28SCPlaybackPlayerServicesImpl32SCNeoPlayerCMDataProviderFactory dataProviderWithURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7b120(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112e34588));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101e7b140; end: 101e7b19f; -[_TtC28SCPlaybackPlayerServicesImpl32SCNeoPlayerCMDataProviderFactory init] */

void FUN_101e7b140(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlaybackPlayerServicesImpl.SCNeoPlayerCMDataProviderFactory",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e7b16c);
  (*pcVar1)();
}



/* Entry: 101e7b1a0; end: 101e7b1af; -[_TtC28SCPlaybackPlayerServicesImpl32SCNeoPlayerCMDataProviderFactory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7b1a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e34588));
  return;
}



/* Entry: 101e7b1b0; end: 101e7b1cf;  */

void FUN_101e7b1b0(void)

{
  func_0x000107c61168(&PTR_PTR_112806f80);
  return;
}



/* Entry: 101e7b1d0; end: 101e7b1e3;  */

bool FUN_101e7b1d0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101e7b1e4; end: 101e7b28f;  */

void FUN_101e7b1e4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101e7b290; end: 101e7b2bb;  */

void FUN_101e7b290(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 101e7b2bc; end: 101e7bd27;  */

undefined1  [16] FUN_101e7b2bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined1 auVar9 [16];
  
  func_0x0001048969bc();
  puVar8 = PTR_PTR_1126dd4c8;
  func_0x000107c610f8(PTR_PTR_1126dd4c8);
  func_0x000107c462b4();
  func_0x000107c61174();
  func_0x000107c544c4();
  func_0x000107c54dc4(puVar8);
  func_0x000107c539b4(puVar8);
  func_0x000107c61170(puVar8);
  uVar1 = 0x100;
  if (*(char *)(param_3 + 0x38) == '\0') {
    uVar1 = 0;
  }
  uVar2 = 0x10000;
  if (*(char *)(param_3 + 0x39) == '\0') {
    uVar2 = 0;
  }
  uVar3 = 0x1000000;
  if (*(char *)(param_3 + 0x28) == '\0') {
    uVar3 = 0;
  }
  uVar4 = 0x100000000;
  if (*(char *)(param_3 + 0x25) == '\0') {
    uVar4 = 0;
  }
  uVar5 = 0x10000000000;
  if (*(char *)(param_3 + 0x26) == '\0') {
    uVar5 = 0;
  }
  uVar6 = 0x1000000000000;
  if (*(char *)(param_3 + 0x27) == '\0') {
    uVar6 = 0;
  }
  uVar7 = 0x100000000000000;
  if (*(char *)(param_3 + 0x48) == '\0') {
    uVar7 = 0;
  }
  auVar9._8_8_ = uVar1 | *(byte *)(param_3 + 0x3a) | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7;
  auVar9._0_8_ = puVar8;
  return auVar9;
}



/* Entry: 101e7bd28; end: 101e7bf0f;  */

void FUN_101e7bd28(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_90 [96];
  
  uVar2 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f016600);
  uVar3 = param_1;
  func_0x000107c4980c();
  func_0x000107c61170(uVar2);
  if ((int)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e7be18);
    (*pcVar1)();
  }
  uVar2 = 0xd00000000000003a;
  func_0x000107c5fadc(0xd00000000000003a,0x800000010f016630);
  uVar4 = param_1;
  func_0x000107c4980c();
  func_0x000107c61170(uVar2);
  if (-1 < (int)uVar4) {
    func_0x000101e7b4e0(auStack_90,param_1,0);
    func_0x000101e7b2bc(uVar3 & 0xffffffff,uVar4 & 0xffffffff,auStack_90);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e7be1c);
  (*pcVar1)();
}



/* Entry: 101e7bf10; end: 101e7c047;  */

void FUN_101e7bf10(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_a0 [96];
  
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f015fa0);
  uVar3 = param_1;
  func_0x000107c4980c();
  func_0x000107c61170(uVar2);
  if ((int)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e7c044);
    (*pcVar1)();
  }
  uVar2 = 0xd000000000000031;
  func_0x000107c5fadc(0xd000000000000031,0x800000010f015fd0);
  uVar4 = param_1;
  func_0x000107c4980c();
  func_0x000107c61170(uVar2);
  if (-1 < (int)uVar4) {
    uVar2 = 0xd00000000000003b;
    func_0x000107c5fadc(0xd00000000000003b,0x800000010f016010);
    uVar5 = param_1;
    func_0x000107c4980c(param_1);
    func_0x000107c61170(uVar2);
    func_0x000101e7b4e0(auStack_a0,param_1,(long)(int)uVar5);
    func_0x000101e7b2bc(uVar3 & 0xffffffff,uVar4 & 0xffffffff,auStack_a0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e7c048);
  (*pcVar1)();
}



/* Entry: 101e7c048; end: 101e7c04b;  */

void FUN_101e7c048(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e345b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1dac0;
  func_0x000107c61520(&UNK_10da1dac0,&UNK_110490dd8);
  puRam0000000112e345b8 = puVar1;
  return;
}



/* Entry: 101e7c04c; end: 101e7c08b;  */

void FUN_101e7c04c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e345b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1dac0;
  func_0x000107c61520(&UNK_10da1dac0,&UNK_110490dd8);
  puRam0000000112e345b8 = puVar1;
  return;
}



/* Entry: 101e7c08c; end: 101e7c297;  */

void FUN_101e7c08c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 101e7c298; end: 101e7c31b;  */

undefined8 * FUN_101e7c298(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  *(undefined1 *)((long)param_1 + 10) = *(undefined1 *)((long)param_2 + 10);
  *(undefined1 *)((long)param_1 + 0xb) = *(undefined1 *)((long)param_2 + 0xb);
  *(undefined1 *)((long)param_1 + 0xc) = *(undefined1 *)((long)param_2 + 0xc);
  *(undefined1 *)((long)param_1 + 0xd) = *(undefined1 *)((long)param_2 + 0xd);
  *(undefined1 *)((long)param_1 + 0xe) = *(undefined1 *)((long)param_2 + 0xe);
  *(undefined1 *)((long)param_1 + 0xf) = *(undefined1 *)((long)param_2 + 0xf);
  return param_1;
}



/* Entry: 101e7c31c; end: 101e7c38f;  */

undefined8 * FUN_101e7c31c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  *(undefined1 *)((long)param_1 + 10) = *(undefined1 *)((long)param_2 + 10);
  *(undefined1 *)((long)param_1 + 0xb) = *(undefined1 *)((long)param_2 + 0xb);
  *(undefined1 *)((long)param_1 + 0xc) = *(undefined1 *)((long)param_2 + 0xc);
  *(undefined1 *)((long)param_1 + 0xd) = *(undefined1 *)((long)param_2 + 0xd);
  *(undefined1 *)((long)param_1 + 0xe) = *(undefined1 *)((long)param_2 + 0xe);
  *(undefined1 *)((long)param_1 + 0xf) = *(undefined1 *)((long)param_2 + 0xf);
  return param_1;
}



/* Entry: 101e7c390; end: 101e7c43b;  */

int FUN_101e7c390(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101e7c43c; end: 101e7ca17;  */

long FUN_101e7c43c(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long extraout_x8;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined1 *puVar22;
  undefined *puVar23;
  ulong uVar24;
  undefined1 auStack_c0 [8];
  undefined1 *puStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  ulong *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar22 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = param_1;
  func_0x000107c5ed2c();
  lVar20 = lVar6;
  func_0x0001090967b0();
  func_0x000107c61170(lVar6);
  if ((int)lVar20 != 0) {
    lVar6 = param_1;
    func_0x000107c5ed2c();
    lVar20 = lVar6;
    func_0x000109096a00();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar20 != 0) {
      lVar6 = lVar20;
      func_0x000107c5f9e8(lVar20,PTR___sSSN_11034da80,PTR___s10Foundation4DataVN_110350ae0,
                          PTR___sSSSHsWP_11034da90);
      func_0x000107c61170(lVar20);
      pcVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001830b8();
      pcVar8 = pcVar7;
      func_0x0001048969bc();
      if (*pcVar8 == '\x01') {
        lVar20 = 0;
        puStack_a0 = (ulong *)(lVar6 + 0x40);
        uVar17 = 1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
        uVar24 = 0xffffffffffffffff;
        if ((*(byte *)(lVar6 + 0x20) & 0x3f) < 6) {
          uVar24 = ~(-1L << (uVar17 & 0x3f));
        }
        uVar24 = uVar24 & *puStack_a0;
        uStack_a8 = uVar17 + 0x3f >> 6;
        lStack_98 = lVar6;
        lStack_b0 = param_1;
        puStack_b8 = puVar22;
        while( true ) {
          while (uVar24 != 0) {
            uVar17 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
            uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
            uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            uVar16 = lVar20 << 10 | LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) << 4;
            puVar1 = (ulong *)(*(long *)(lStack_98 + 0x30) + uVar16);
            uVar17 = *puVar1;
            uVar3 = puVar1[1];
            puVar2 = (undefined8 *)(*(long *)(lStack_98 + 0x38) + uVar16);
            uVar12 = *puVar2;
            uVar13 = puVar2[1];
            func_0x000107c61434(uVar3);
            func_0x00010006c00c(uVar12,uVar13);
            uVar10 = 0;
            uVar9 = uVar12;
            func_0x000107c5ee24(0,uVar12,uVar13);
            pcVar8 = pcVar7;
            uStack_90 = uVar10;
            uStack_88 = uVar9;
            func_0x000107c61558();
            uVar16 = uVar17;
            uVar15 = uVar3;
            pcStack_80 = pcVar7;
            func_0x000100029284();
            uVar18 = (ulong)~(uint)uVar15 & 1;
            lVar6 = *(long *)(pcVar7 + 0x10) + uVar18;
            if (SCARRY8(*(long *)(pcVar7 + 0x10),uVar18)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101e7ca00);
              (*pcVar4)();
            }
            if (*(long *)(pcVar7 + 0x18) < lVar6) {
              func_0x0001001833c8(lVar6,pcVar8);
              uVar16 = uVar17;
              uVar18 = uVar3;
              func_0x000100029284();
              if (((uint)uVar15 & 1) != ((uint)uVar18 & 1)) goto LAB_101e7ca08;
            }
            else if (((ulong)pcVar8 & 1) == 0) {
              func_0x000100184498();
            }
            pcVar7 = pcStack_80;
            uVar24 = uVar24 - 1 & uVar24;
            if ((uVar15 & 1) == 0) {
              *(ulong *)(pcStack_80 + (uVar16 >> 6) * 8 + 0x40) =
                   *(ulong *)(pcStack_80 + (uVar16 >> 6) * 8 + 0x40) | 1L << (uVar16 & 0x3f);
              puVar1 = (ulong *)(*(long *)(pcStack_80 + 0x30) + uVar16 * 0x10);
              *puVar1 = uVar17;
              puVar1[1] = uVar3;
              puVar2 = (undefined8 *)(*(long *)(pcStack_80 + 0x38) + uVar16 * 0x10);
              *puVar2 = uStack_90;
              puVar2[1] = uStack_88;
              func_0x00010006c090(uVar12,uVar13);
              if (SCARRY8(*(long *)(pcVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x101e7ca04);
                (*pcVar4)();
              }
              *(long *)(pcVar7 + 0x10) = *(long *)(pcVar7 + 0x10) + 1;
            }
            else {
              puVar2 = (undefined8 *)(*(long *)(pcStack_80 + 0x38) + uVar16 * 0x10);
              uVar9 = puVar2[1];
              *puVar2 = uStack_90;
              puVar2[1] = uStack_88;
              func_0x000107c6142c(uVar9);
              func_0x00010006c090(uVar12,uVar13);
              func_0x000107c6142c(uVar3);
            }
          }
          bVar5 = SCARRY8(lVar20,1);
          lVar20 = lVar20 + 1;
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101e7c9fc);
            (*pcVar4)();
          }
          if ((long)uStack_a8 <= lVar20) break;
          uVar24 = puStack_a0[lVar20];
        }
        func_0x000107c61574(lStack_98);
        puVar22 = puStack_b8;
        param_1 = lStack_b0;
      }
      else {
        func_0x000107c6142c(lVar6);
      }
      puVar23 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x000107c61168();
      pcVar8 = pcVar7;
      puVar19 = PTR___sSSN_11034da80;
      func_0x000107c5f9dc(pcVar7,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90)
      ;
      pcStack_80 = (char *)0x0;
      func_0x000107c41300();
      func_0x000107c61180();
      func_0x000107c61170(pcVar8);
      pcVar8 = pcStack_80;
      func_0x000107c61174(pcStack_80);
      if (puVar23 == (undefined *)0x0) {
        uVar12 = pcVar8;
        func_0x000107c5ed30();
        func_0x000107c61170(pcVar8);
        func_0x000107c61654();
        func_0x000107c614ac(uVar12);
LAB_101e7c844:
        puVar23 = (undefined *)0x0;
        puVar21 = (undefined *)0xe000000000000000;
      }
      else {
        puVar11 = puVar23;
        func_0x000107c5ee30(puVar23);
        func_0x000107c61170(puVar23);
        func_0x000107c5fb04(puVar22);
        puVar23 = puVar11;
        puVar21 = puVar19;
        func_0x000107c5faf0(puVar11,puVar19,puVar22);
        if (puVar21 == (undefined *)0x0) {
          func_0x00010006c090(puVar11);
          goto LAB_101e7c844;
        }
        func_0x00010006c090(puVar11);
      }
      lVar6 = param_1;
      func_0x000107c5ed2c();
      lVar20 = lVar6;
      func_0x0001090967f8();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar20 == 0) {
        lVar6 = 0;
        puVar19 = (undefined *)0xe000000000000000;
      }
      else {
        lVar6 = lVar20;
        func_0x000107c5faec();
        func_0x000107c61170(lVar20);
      }
      pcVar8 = (char *)0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      pcVar8[0x18] = '\x04';
      pcVar8[0x19] = '\0';
      pcVar8[0x1a] = '\0';
      pcVar8[0x1b] = '\0';
      pcVar8[0x1c] = '\0';
      pcVar8[0x1d] = '\0';
      pcVar8[0x1e] = '\0';
      pcVar8[0x1f] = '\0';
      pcVar8[0x10] = '\x02';
      pcVar8[0x11] = '\0';
      pcVar8[0x12] = '\0';
      pcVar8[0x13] = '\0';
      pcVar8[0x14] = '\0';
      pcVar8[0x15] = '\0';
      pcVar8[0x16] = '\0';
      pcVar8[0x17] = '\0';
      *(long *)(pcVar8 + 0x20) = lVar6;
      *(undefined **)(pcVar8 + 0x28) = puVar19;
      pcStack_80 = (char *)0x7461446775626564;
      uStack_78 = 0xeb000000000a3a61;
      func_0x000107c5fb78(puVar23,puVar21);
      *(char **)(pcVar8 + 0x30) = pcStack_80;
      *(undefined8 *)(pcVar8 + 0x38) = uStack_78;
      uVar12 = 0x112d38270;
      pcStack_80 = pcVar8;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      uVar13 = uVar12;
      func_0x00010011d734();
      lVar14 = 10;
      uVar9 = 0xe100000000000000;
      func_0x000107c5fa80(10,0xe100000000000000,uVar12,uVar13);
      func_0x000107c61574(pcVar8);
      func_0x000107c5ed2c(param_1);
      lVar6 = param_1;
      func_0x00010909689c();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      func_0x000107c5fadc(lVar14,uVar9);
      func_0x000107c6142c(uVar9);
      lVar20 = lVar14;
      func_0x000109096480(lVar14,lVar6);
      func_0x000107c61180();
      func_0x000107c6142c(pcVar7);
      func_0x000107c6142c(puVar21);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar14);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return lVar20;
      }
      goto LAB_101e7ca04;
    }
  }
  func_0x000107c614b0(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
LAB_101e7ca04:
  func_0x000107c60e78();
LAB_101e7ca08:
  func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101e7ca18);
  (*pcVar4)();
}



/* Entry: 101e7ca18; end: 101e7cb63;  */

void FUN_101e7ca18(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *unaff_x20;
  long lVar10;
  
  func_0x0001000285a8(0x112e33eb0,&UNK_10da1d450);
  lVar10 = *unaff_x20;
  lVar3 = lVar10;
  func_0x000107c6048c();
  if (*(long *)(lVar10 + 0x10) != 0) {
    lVar1 = lVar10 + 0x40;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar10 || lVar1 + uVar4 * 8 <= lVar3 + 0x40U) {
      func_0x000107c610b8(lVar3 + 0x40U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar10 + 0x40);
    lVar7 = lVar5;
    if (uVar4 == 0) goto LAB_101e7caf0;
    do {
      uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 - 1 & uVar4;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      while( true ) {
        uVar9 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + uVar8 * 8);
        *(undefined1 *)(*(long *)(lVar3 + 0x30) + uVar8) =
             *(undefined1 *)(*(long *)(lVar10 + 0x30) + uVar8);
        *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar8 * 8) = uVar9;
        lVar7 = lVar5;
        if (uVar4 != 0) break;
LAB_101e7caf0:
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101e7cb64);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_101e7cb44;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
    } while( true );
  }
LAB_101e7cb44:
  func_0x000107c61574(lVar10);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 101e7cb64; end: 101e7cdd7;  */

void FUN_101e7cb64(long param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_a8 [72];
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar16 = 0x112e33eb0;
  func_0x0001000285a8(0x112e33eb0,&UNK_10da1d450);
  lVar5 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar16);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_101e7cda4:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar5;
    return;
  }
  puVar13 = (ulong *)(lVar11 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *puVar13;
  lVar1 = lVar5 + 0x40;
  lVar7 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101e7cdd4);
          (*pcVar4)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar12 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar12 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_101e7cda4;
        }
        uVar12 = puVar13[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar12 == 0);
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar15 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar15 << 6;
    bVar2 = *(byte *)(*(long *)(lVar11 + 0x30) + uVar6);
    uVar14 = (ulong)bVar2;
    uVar16 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar6 * 8);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar10 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar14 = uVar14 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar14 >> 6;
    uVar6 = -1L << (uVar14 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar3 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar14 = uVar8 + 1;
        if ((uVar14 == uVar6) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101e7cdd8);
          (*pcVar4)();
        }
        uVar8 = 0;
        if (uVar14 != uVar6) {
          uVar8 = uVar14;
        }
        bVar3 = (bool)(uVar14 == uVar6 | bVar3);
        uVar14 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar14 == 0xffffffffffffffff);
      uVar14 = ~uVar14;
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar14 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(byte *)(*(long *)(lVar5 + 0x30) + uVar6) = bVar2;
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar6 * 8) = uVar16;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 101e7cdd8; end: 101e7d8af;  */

/* WARNING: Removing unreachable block (ram,0x000101e7d790) */
/* WARNING: Removing unreachable block (ram,0x000101e7d348) */
/* WARNING: Removing unreachable block (ram,0x000101e7d2d0) */
/* WARNING: Removing unreachable block (ram,0x000101e7d2d8) */
/* WARNING: Removing unreachable block (ram,0x000101e7d2e0) */
/* WARNING: Removing unreachable block (ram,0x000101e7d2fc) */
/* WARNING: Removing unreachable block (ram,0x000101e7d308) */
/* WARNING: Removing unreachable block (ram,0x000101e7d30c) */
/* WARNING: Removing unreachable block (ram,0x000101e7d310) */
/* WARNING: Removing unreachable block (ram,0x000101e7d314) */
/* WARNING: Removing unreachable block (ram,0x000101e7d318) */
/* WARNING: Removing unreachable block (ram,0x000101e7d31c) */
/* WARNING: Removing unreachable block (ram,0x000101e7d340) */
/* WARNING: Removing unreachable block (ram,0x000101e7d350) */
/* WARNING: Removing unreachable block (ram,0x000101e7d358) */
/* WARNING: Removing unreachable block (ram,0x000101e7d898) */
/* WARNING: Removing unreachable block (ram,0x000101e7d894) */
/* WARNING: Removing unreachable block (ram,0x000101e7d890) */

undefined * FUN_101e7cdd8(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 *****pppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  code *pcVar7;
  bool bVar8;
  undefined *puVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *****pppppuVar15;
  undefined8 *****pppppuVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long lVar20;
  undefined **ppuVar21;
  uint uVar22;
  undefined **ppuVar23;
  undefined8 *****pppppuVar24;
  long unaff_x20;
  undefined *puVar25;
  long lVar26;
  undefined *puVar27;
  undefined8 *puVar28;
  long *plVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined *puStack_258;
  undefined8 uStack_250;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  uint uStack_20c;
  uint uStack_1fc;
  undefined2 uStack_1e7;
  undefined1 uStack_1e5;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 ****ppppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_250 = 2;
  puVar9 = param_1;
  func_0x000107c615f4();
  FUN_101e7df28();
  puVar25 = param_1;
  func_0x000107c40518();
  func_0x000107c31188();
  func_0x000107c61180();
  if (puVar25 == (undefined *)0x0) {
    func_0x000107c615e8(param_1);
    puStack_258 = (undefined *)0x6c6c756e;
    uStack_250 = 0xe400000000000000;
  }
  else {
    puStack_258 = puVar25;
    func_0x000107c5faec();
    func_0x000107c615e8(param_1);
    func_0x000107c61170(puVar25);
  }
  pppppuVar24 = *(undefined8 ******)(unaff_x20 + 0x10);
  uVar1 = (uint)puVar9 & 0xff;
  ppuVar23 = (undefined **)0xd00000000000002a;
  pcVar2 = "es_neo_player_media_data_config";
  if (uVar1 != 3) {
    pcVar2 = "orward_decoded_frames_size";
  }
  pcVar3 = "es_neo_player_media_data_config";
  if (uVar1 != 2) {
    ppuVar23 = (undefined **)0xd00000000000002f;
    pcVar3 = pcVar2;
  }
  ppuVar21 = (undefined **)0xd00000000000002c;
  pcVar2 = "mdp_mix_feed_neo_player_media_data_config";
  if (((ulong)puVar9 & 0xff) != 0) {
    ppuVar21 = (undefined **)0xd000000000000029;
    pcVar2 = "mdp_spotlight_neo_player_media_data_config";
  }
  if (uVar1 == 1 || ((ulong)puVar9 & 0xff) == 0) {
    ppuVar23 = ppuVar21;
  }
  if (uVar1 == 1 || ((ulong)puVar9 & 0xff) == 0) {
    pcVar3 = pcVar2 + 0x10;
  }
  uVar17 = (ulong)pcVar3 | 0x8000000000000000;
  func_0x000107c5fadc(ppuVar23);
  func_0x000107c6142c((ulong)pcVar3 | 0x8000000000000000);
  ppuVar21 = ppuVar23;
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar23);
  bVar8 = ((ulong)puVar9 & 0xff) == 0;
  fStack_218 = 1.0;
  if (!bVar8) {
    fStack_218 = 3.0;
  }
  fStack_214 = 5.0;
  if (!bVar8) {
    fStack_214 = 8.0;
  }
  fStack_210 = 30.0;
  if (!bVar8) {
    fStack_210 = 25.0;
  }
  uStack_20c = 0x200;
  if (!bVar8) {
    uStack_20c = 0x20;
  }
  uStack_f0 = 0x100;
  uVar30 = NEON_fmov(0xbf800000,4);
  uStack_ec = (undefined4)uVar30;
  uStack_e8 = (undefined4)((ulong)uVar30 >> 0x20);
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = CONCAT31(uStack_d0._1_3_,bVar8);
  uStack_cc = 0;
  uStack_c0 = 0xc000000000000000;
  uStack_c8 = 0;
  uStack_120 = (ulong)uStack_d0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_110 = 0xc000000000000000;
  uStack_148 = CONCAT44(uStack_20c,fStack_210);
  uStack_150 = CONCAT44(fStack_214,fStack_218);
  uStack_138 = CONCAT44(uStack_e4,uStack_e8);
  uStack_140 = CONCAT44(uStack_ec,0x100);
  fStack_100 = fStack_218;
  fStack_fc = fStack_214;
  fStack_f8 = fStack_210;
  uStack_f4 = uStack_20c;
  if (pppppuVar24 != (undefined8 *****)0x0) {
    pppppuVar10 = pppppuVar24;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    if (pppppuVar10 != (undefined8 *****)0x0) {
      pppppuVar11 = pppppuVar10;
      func_0x000107c5ee30();
      func_0x000107c61170();
      uVar1 = (uint)(uVar17 >> 0x20);
      uVar22 = uVar1 >> 0x1e;
      lVar20 = (long)pppppuVar11 >> 0x20;
      if (uVar1 >> 0x1e < 2) {
        if (uVar22 == 0) {
          if ((uVar17 & 0xff000000000000) == 0) {
LAB_101e7d0d4:
            func_0x00010006c090(pppppuVar11,uVar17);
            goto LAB_101e7d0e0;
          }
        }
        else if ((int)pppppuVar11 == lVar20) goto LAB_101e7d0d4;
      }
      else if ((uVar22 != 2) || (pppppuVar11[2] == pppppuVar11[3])) goto LAB_101e7d0d4;
      uStack_1b0 = 0;
      uStack_1c8 = 0;
      puStack_1d0 = (undefined *)0x0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      if (uVar22 == 2) {
        ppppuVar5 = pppppuVar11[2];
        ppppuVar6 = pppppuVar11[3];
        func_0x000107c5ec30();
        pppppuVar16 = pppppuVar10;
        if (pppppuVar10 != (undefined8 *****)0x0) {
          pppppuVar15 = pppppuVar10;
          func_0x000107c5ec3c();
          if (SBORROW8((long)ppppuVar5,(long)pppppuVar15)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x101e7d8a8);
            (*pcVar7)();
          }
          pppppuVar16 = (undefined8 *****)
                        (((long)ppppuVar5 - (long)pppppuVar15) + (long)pppppuVar10);
          pppppuVar10 = pppppuVar15;
        }
        pppppuVar15 = (undefined8 *****)((long)ppppuVar6 - (long)ppppuVar5);
        if (SBORROW8((long)ppppuVar6,(long)ppppuVar5)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101e7d8a4);
          (*pcVar7)();
        }
        func_0x000107c5ec38();
        pppppuVar4 = pppppuVar10;
        if ((long)pppppuVar15 <= (long)pppppuVar10) {
          pppppuVar4 = pppppuVar15;
        }
        lVar20 = 0;
        if (pppppuVar16 != (undefined8 *****)0x0) {
          lVar20 = (long)pppppuVar4 + (long)pppppuVar16;
        }
LAB_101e7d758:
        FUN_101e7e2b0();
      }
      else {
        if (uVar22 == 1) {
          lVar26 = (long)(int)pppppuVar11;
          if (lVar20 < lVar26) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x101e7d8a0);
            (*pcVar7)();
          }
          func_0x000107c5ec30();
          if (pppppuVar10 == (undefined8 *****)0x0) {
            func_0x000107c5ec38();
            pppppuVar16 = (undefined8 *****)0x0;
          }
          else {
            pppppuVar15 = pppppuVar10;
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pppppuVar15)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x101e7d8ac);
              (*pcVar7)();
            }
            pppppuVar16 = (undefined8 *****)((lVar26 - (long)pppppuVar15) + (long)pppppuVar10);
            func_0x000107c5ec38();
            pppppuVar10 = pppppuVar15;
            if (pppppuVar16 != (undefined8 *****)0x0) {
              if (lVar20 - lVar26 <= (long)pppppuVar15) {
                pppppuVar15 = (undefined8 *****)(lVar20 - lVar26);
              }
              lVar20 = (long)pppppuVar15 + (long)pppppuVar16;
              goto LAB_101e7d758;
            }
          }
          lVar20 = 0;
          goto LAB_101e7d758;
        }
        uStack_198._0_6_ = (undefined6)uVar17;
        lVar20 = (long)&ppppuStack_1a0 + (uVar17 >> 0x30 & 0xff);
        ppppuStack_1a0 = pppppuVar11;
        FUN_101e7e2b0();
        pppppuVar16 = &ppppuStack_1a0;
      }
      ppuVar21 = &puStack_1d0;
      func_0x00010006ae80(pppppuVar16,lVar20,ppuVar21,0,100,0,&UNK_1104921f8,pppppuVar10);
      FUN_101e7e27c(&fStack_100);
      func_0x00010006c090(pppppuVar11,uVar17);
      func_0x000100ee9068(&puStack_1d0);
      fStack_218 = 0.0;
      fStack_214 = 0.0;
      fStack_210 = 0.0;
      uStack_20c = 0;
      uStack_180 = 0;
      uStack_160 = 0xc000000000000000;
      uStack_168 = 0;
      ppppuStack_1a0 = (undefined8 ****)0x0;
      uStack_198 = 0;
      uStack_190 = 0;
      lStack_188 = (ulong)uStack_1fc << 0x20;
      uStack_178 = 0;
      plVar29 = (long *)0x0;
      uVar31 = 0;
      uVar30 = 0;
      lStack_170 = (ulong)CONCAT12(uStack_1e5,uStack_1e7) << 8;
      goto LAB_101e7d114;
    }
  }
LAB_101e7d0e0:
  uStack_160 = uStack_c0;
  lStack_170 = CONCAT44(uStack_cc,uStack_d0);
  uStack_178 = uStack_d8;
  uStack_180 = uStack_e0;
  uStack_168 = uStack_c8;
  uStack_198 = CONCAT44(uStack_f4,fStack_f8);
  ppppuStack_1a0 = (undefined8 ****)CONCAT44(fStack_fc,fStack_100);
  lStack_188 = CONCAT44(uStack_e4,uStack_e8);
  uStack_190 = CONCAT44(uStack_ec,uStack_f0);
  uVar30 = 0xbff0000000000000;
  plVar29 = (long *)0x40000;
  uVar31 = 0xbff0000000000000;
LAB_101e7d114:
  uVar18 = 0;
  func_0x000107c4ed0c();
  func_0x000107c61180();
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    ppuVar21 = &PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar12 = 0;
    FUN_101e7e2f0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar9 = param_1;
    func_0x000107c5fc54(param_1,uVar12);
    func_0x000107c61170(param_1);
  }
  func_0x000107c4ed10();
  if ((ulong)puVar9 >> 0x3e == 0) {
    puVar25 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar25 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar9) {
      puVar25 = puVar9;
    }
    func_0x000107c60480();
  }
  puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar25 != (undefined *)0x0) {
    ppuVar21 = (undefined **)0x0;
    func_0x000100dd4260(0,(ulong)puVar25 & ((long)puVar25 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar25 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x101e7d890);
      (*pcVar7)();
    }
    if (((ulong)puVar9 & 0xc000000000000001) == 0) {
      puVar28 = (undefined8 *)(puVar9 + 0x20);
      do {
        uVar12 = *puVar28;
        func_0x000107c49820();
        uVar17 = *(ulong *)(puVar19 + 0x10);
        if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar17) {
          ppuVar21 = (undefined **)0x1;
          func_0x000100dd4260(1 < *(ulong *)(puVar19 + 0x18),uVar17 + 1,1);
        }
        *(ulong *)(puVar19 + 0x10) = uVar17 + 1;
        *(undefined8 *)(puVar19 + uVar17 * 8 + 0x20) = uVar12;
        puVar25 = puVar25 + -1;
        puVar28 = puVar28 + 1;
      } while (puVar25 != (undefined *)0x0);
    }
    else {
      puVar27 = (undefined *)0x0;
      do {
        puVar13 = puVar27;
        ppuVar21 = &PTR__OBJC_CLASS___NSNumber_1126ae570;
        FUN_101e7dd6c(puVar27,puVar9,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
        puVar14 = puVar13;
        func_0x000107c49820();
        func_0x000107c615e8(puVar13);
        uVar17 = *(ulong *)(puVar19 + 0x10);
        if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar17) {
          ppuVar21 = (undefined **)0x1;
          func_0x000100dd4260(1 < *(ulong *)(puVar19 + 0x18),uVar17 + 1,1);
        }
        puVar27 = puVar27 + 1;
        *(ulong *)(puVar19 + 0x10) = uVar17 + 1;
        *(undefined **)(puVar19 + uVar17 * 8 + 0x20) = puVar14;
      } while (puVar25 != puVar27);
    }
  }
  uVar12 = 0;
  func_0x000107c6142c(puVar19);
  FUN_101e7e044(0,(ulong)uStack_20c << 10,0);
  ppuVar23 = ppuVar21;
  func_0x000107c6142c(puVar9);
  FUN_101e7e044(0);
  func_0x0001000298f0();
  func_0x000107c61428();
  puVar27 = (undefined *)*plVar29;
  puStack_1d0 = (undefined *)0x0;
  uStack_1c8 = 0xe000000000000000;
  func_0x000107c61174();
  func_0x000107c602fc(0x2b);
  func_0x000107c6142c(uStack_1c8);
  puStack_1d0 = (undefined *)0xd000000000000013;
  uStack_1c8 = 0x800000010f015bd0;
  func_0x000107c5fb78(param_2,param_3);
  func_0x000107c5fb78(0x7c,0xe100000000000000);
  func_0x000107c5fb78(puStack_258,uStack_250);
  func_0x000107c6142c(uStack_250);
  func_0x000107c5fb78(0x3d4374737269667c,0xe800000000000000);
  puVar25 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
  puVar9 = PTR___sSuN_11034e220;
  puVar19 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
  func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar19);
  func_0x000107c5fb78(uVar12,ppuVar21);
  func_0x000107c6142c(ppuVar21);
  func_0x000107c5fb78(0x3d437c,0xe300000000000000);
  func_0x000107c6057c(puVar9,puVar25);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar25);
  func_0x000107c5fb78(uVar18,ppuVar23);
  func_0x000107c6142c(ppuVar23);
  uVar18 = uStack_1c8;
  func_0x0001048d85b4(puStack_1d0,uStack_1c8);
  func_0x000107c61170(puVar27);
  func_0x000107c6142c(uVar18);
  puVar9 = PTR_PTR_1126dd3b0;
  func_0x000107c610f8(PTR_PTR_1126dd3b0);
  func_0x000107c4781c((double)fStack_218,(double)fStack_214,(double)fStack_210,uVar31,uVar30);
  FUN_101e7e27c(&ppppuStack_1a0);
  func_0x000107c61170(pppppuVar24);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
    func_0x000107c60e78();
    func_0x000107c615e8(*(undefined8 *)(puVar27 + 0x10));
    func_0x000107c61574(*(undefined8 *)(puVar27 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_deallocClassInstance_11034f290)(puVar27,0x20,7);
    return puVar27;
  }
  return puVar9;
}



/* Entry: 101e7d8b0; end: 101e7d933;  */

void FUN_101e7d8b0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


