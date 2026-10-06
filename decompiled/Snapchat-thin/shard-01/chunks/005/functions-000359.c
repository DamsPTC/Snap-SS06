/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10118bb24; end: 10118bb37;  */

/* WARNING: Possible PIC construction at 0x00010118bb60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010118bb64) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */

undefined8 FUN_10118bb24(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  if ((*(char *)(param_1 + 3) != '\x03') && (*(char *)(param_1 + 3) != '\x01')) {
    return *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1,uVar1,param_1[2]);
  return uVar1;
}



/* Entry: 10118bb38; end: 10118bb7f;  */

/* WARNING: Possible PIC construction at 0x00010118bb60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010118bb64) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */

void FUN_10118bb38(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 != '\x03') && (param_4 != '\x01')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10118bb80; end: 10118bc47;  */

undefined8 * FUN_10118bb80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  FUN_10118badc(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Entry: 10118bc48; end: 10118bc93;  */

undefined8 * FUN_10118bc48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  FUN_10118bb38(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 10118bc94; end: 10118bd73;  */

int FUN_10118bc94(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xfc;
  }
  uVar1 = *(byte *)(param_1 + 6) ^ 0xff;
  if (*(byte *)(param_1 + 6) < 5) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10118bd74; end: 10118be0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118bd74(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d62a10) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10118be0c; end: 10118be6b; -[MemoriesMashupSourceSnapDocProvisionServices init] */

void FUN_10118be0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesMashupSourceSnapDocProvisionServicesAPI.MemoriesMashupSourceSnapDocProvisionServices"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10118be38);
  (*pcVar1)();
}



/* Entry: 10118be6c; end: 10118be7b; -[MemoriesMashupSourceSnapDocProvisionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118be6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d62a10));
  return;
}



/* Entry: 10118be7c; end: 10118be9b;  */

void FUN_10118be7c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b3840);
  return;
}



/* Entry: 10118be9c; end: 10118bf93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118be9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d62a40) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d62a48) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d62a50) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d62a58) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d62a60) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d62a68);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d62a70);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d62a78);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10118bf94; end: 10118c0d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_10118bf94(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d62a48);
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0(uStack_40);
  (**(code **)(lStack_38 + 8))();
  func_0x000107c615e8(uStack_40);
  func_0x000107c6157c(uVar6);
  pcVar2 = FUN_10118c230;
  func_0x0001000bfde0(FUN_10118c230,uVar6,PTR___sSiN_11034deb0);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar6);
  puVar3 = PTR___sSiSQsWP_11034ded0;
  func_0x0001000c2068();
  func_0x000107c61574(pcVar2);
  puVar4 = &UNK_11038b840;
  func_0x000107c613fc(&UNK_11038b840,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(long *)(puVar4 + 0x18) = unaff_x20;
  func_0x0001000285a8(0x112d62a80,&UNK_10d928940);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar3);
  func_0x000107c61174();
  pcVar2 = FUN_10118c354;
  func_0x0001000b64ac(FUN_10118c354,puVar4);
  pcVar5 = pcVar2;
  func_0x0001004575f0();
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar2);
  return pcVar5;
}



/* Entry: 10118c0d8; end: 10118c22f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118c0d8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar7 = *param_2;
  func_0x0001000d224c(auStack_88);
  func_0x0001000a8868(auStack_88,uStack_70);
  lVar1 = _DAT_1138127d0;
  if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + _DAT_11303e918), lVar7 == 0)) {
    lVar2 = 0;
    func_0x000107c5eea4();
    pcVar5 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
    uVar4 = 1;
  }
  else {
    lVar2 = 0;
    func_0x000107c5eea4();
    lVar8 = *(long *)(lVar2 + -8);
    (**(code **)(lVar8 + 0x10))(puVar6,lVar7 + lVar1,lVar2);
    pcVar5 = *(code **)(lVar8 + 0x38);
    uVar4 = 0;
  }
  (*pcVar5)(puVar6,uVar4,1,lVar2);
  puVar3 = puVar6;
  (**(code **)(lStack_68 + 0x10))(puVar6,uStack_70,lStack_68);
  func_0x0001000d1dcc(puVar6);
  *param_1 = puVar3;
  FUN_10118e3ec(auStack_88);
  return;
}



/* Entry: 10118c230; end: 10118c237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118c230(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar7 = *param_2;
  func_0x0001000d224c(auStack_88);
  func_0x0001000a8868(auStack_88,uStack_70);
  lVar1 = _DAT_1138127d0;
  if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + _DAT_11303e918), lVar7 == 0)) {
    lVar2 = 0;
    func_0x000107c5eea4();
    pcVar5 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
    uVar4 = 1;
  }
  else {
    lVar2 = 0;
    func_0x000107c5eea4();
    lVar8 = *(long *)(lVar2 + -8);
    (**(code **)(lVar8 + 0x10))(puVar6,lVar7 + lVar1,lVar2);
    pcVar5 = *(code **)(lVar8 + 0x38);
    uVar4 = 0;
  }
  (*pcVar5)(puVar6,uVar4,1,lVar2);
  puVar3 = puVar6;
  (**(code **)(lStack_68 + 0x10))(puVar6,uStack_70,lStack_68);
  func_0x0001000d1dcc(puVar6);
  *param_1 = puVar3;
  FUN_10118e3ec(auStack_88);
  return;
}



/* Entry: 10118c238; end: 10118c353;  */

undefined1  [16] FUN_10118c238(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  
  puVar1 = &UNK_11038b868;
  func_0x000107c613fc(&UNK_11038b868,0x11,7);
  puVar1[0x10] = 0;
  puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = &UNK_11038b890;
  func_0x000107c613fc(&UNK_11038b890,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_3);
  puVar4 = &UNK_11038b8b8;
  func_0x000107c613fc(&UNK_11038b8b8,0x30,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(undefined **)(puVar4 + 0x20) = puVar1;
  *(undefined8 *)(puVar4 + 0x28) = param_1;
  pcVar6 = *(code **)(*param_2 + 0x70);
  func_0x000107c61580(param_1,2);
  func_0x000107c61174(puVar2);
  func_0x000107c6157c(puVar1);
  pcVar5 = FUN_10118e18c;
  puVar3 = puVar4;
  (*pcVar6)(FUN_10118e18c,puVar4,0x10118e198,param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(param_1);
  auVar7._8_8_ = puVar3;
  auVar7._0_8_ = pcVar5;
  return auVar7;
}



/* Entry: 10118c354; end: 10118c35b;  */

undefined1  [16] FUN_10118c354(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  long unaff_x20;
  code *pcVar8;
  undefined1 auVar9 [16];
  
  plVar1 = *(long **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = &UNK_11038b868;
  func_0x000107c613fc(&UNK_11038b868,0x11,7);
  puVar3[0x10] = 0;
  puVar4 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = &UNK_11038b890;
  func_0x000107c613fc(&UNK_11038b890,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,uVar2);
  puVar6 = &UNK_11038b8b8;
  func_0x000107c613fc(&UNK_11038b8b8,0x30,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined **)(puVar6 + 0x18) = puVar4;
  *(undefined **)(puVar6 + 0x20) = puVar3;
  *(undefined8 *)(puVar6 + 0x28) = param_1;
  pcVar8 = *(code **)(*plVar1 + 0x70);
  func_0x000107c61580(param_1,2);
  func_0x000107c61174(puVar4);
  func_0x000107c6157c(puVar3);
  pcVar7 = FUN_10118e18c;
  puVar5 = puVar6;
  (*pcVar8)(FUN_10118e18c,puVar6,0x10118e198,param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(param_1);
  auVar9._8_8_ = puVar5;
  auVar9._0_8_ = pcVar7;
  return auVar9;
}



/* Entry: 10118c35c; end: 10118c4c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118c35c(long *param_1,long param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined1 auStack_a0 [24];
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar4 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  func_0x000107c4b940(param_3);
  if (lVar4 < 1) {
    func_0x000107c61428(param_4 + 0x10,auStack_70,0,0);
    if (*(char *)(param_4 + 0x10) != '\x01') {
      func_0x000107c5d278(param_3);
      goto LAB_10118c49c;
    }
    func_0x000107c61428(param_4 + 0x10,auStack_a0,1,0);
    *(undefined1 *)(param_4 + 0x10) = 0;
    func_0x000107c5d278(param_3);
    param_3 = PTR_PTR_1126a6480;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    func_0x000107c61428(param_4 + 0x10,auStack_a0,1,0);
    *(undefined1 *)(param_4 + 0x10) = 1;
    func_0x000107c5d278();
    FUN_10118c9c4();
  }
  puVar1 = param_3;
  FUN_10118c920();
  puVar2 = puVar1;
  func_0x000107c610f8();
  puVar2[_DAT_112d62aa0] = 0 < lVar4;
  *(undefined **)(puVar2 + _DAT_112d62aa8) = param_3;
  ppuVar3 = &puStack_80;
  puStack_80 = puVar2;
  puStack_78 = puVar1;
  func_0x000107c61154(ppuVar3,PTR_s_init_1125d9248);
  ppuStack_88 = ppuVar3;
  func_0x000100087f6c(&ppuStack_88);
  func_0x000107c61170(ppuVar3);
LAB_10118c49c:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10118c4c8; end: 10118c4fb; -[MemoriesSnapsTabLockedSnapModalCardPlugin viewModel] */

void FUN_10118c4c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10118bf94();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10118c4fc; end: 10118c703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10118c4fc(long param_1,byte param_2)

{
  byte bVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x20;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 auStack_88 [24];
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  FUN_10118c920();
  func_0x000107c61480(param_1,lVar4);
  if (param_1 == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d62a58);
    func_0x00010118c940();
    lVar4 = param_1;
    func_0x000107c610f8();
    *(undefined1 *)(lVar4 + _DAT_112d62a88) = 0;
    *(undefined8 *)(lVar4 + _DAT_112d62a90) = uVar7;
    puVar2 = PTR_s_init_1125d9248;
    lStack_70 = lVar4;
    lStack_68 = param_1;
    func_0x000107c61174(uVar7);
    plVar8 = &lStack_70;
    func_0x000107c61154(plVar8,puVar2);
    func_0x000107c53e08();
    lVar4 = _DAT_112d62a88;
    func_0x000107c61428((long)plVar8 + _DAT_112d62a88,auStack_88,1,0);
    bVar1 = *(byte *)((long)plVar8 + lVar4);
    *(byte *)((long)plVar8 + lVar4) = param_2 & 1;
    if ((param_2 & 1) != bVar1) {
      plVar5 = plVar8;
      func_0x000107c3fd68();
      func_0x000107c61180();
      if (plVar5 != (long *)0x0) {
        plVar9 = plVar5;
        func_0x000107c5dfd4();
        func_0x000107c61180();
        func_0x000107c615e8(plVar5);
        uVar7 = 0;
        FUN_10118e14c(0,0x112d62a98,&PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
        plVar5 = plVar9;
        func_0x000107c5fc54(plVar9,uVar7);
        func_0x000107c61170(plVar9);
        if ((ulong)plVar5 >> 0x3e == 0) {
          plVar9 = *(long **)(((ulong)plVar5 & 0xffffffffffffff8) + 0x10);
        }
        else {
          plVar9 = (long *)((ulong)plVar5 & 0xffffffffffffff8);
          if ((long *)0x7fffffffffffffff < plVar5) {
            plVar9 = plVar5;
          }
          func_0x000107c60480();
        }
        if (plVar9 != (long *)0x0) {
          uVar10 = 0;
          do {
            if (((ulong)plVar5 & 0xc000000000000001) == 0) {
              if (*(ulong *)(((ulong)plVar5 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10118c6b0);
                (*pcVar3)();
              }
              uVar6 = plVar5[uVar10 + 4];
              func_0x000107c61174(uVar6);
            }
            else {
              uVar6 = uVar10;
              FUN_10118dc90(uVar10,plVar5);
            }
            if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10118c6a4);
              (*pcVar3)();
            }
            plVar11 = (long *)(uVar10 + 1);
            func_0x000107e8846c();
            func_0x000107c61170(uVar6);
            uVar10 = uVar10 + 1;
          } while (plVar11 != plVar9);
        }
        func_0x000107c6142c(plVar5);
      }
      func_0x000107c5d3dc(plVar8);
    }
  }
  return plVar8;
}



/* Entry: 10118c704; end: 10118c793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10118c704(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  puVar2 = auStack_30;
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112d62a88) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d62a90) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61154(auStack_30,puVar1);
  func_0x000107c61180();
  func_0x000107c53e08();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 10118c794; end: 10118c91f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118c794(byte param_1)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_78 [24];
  
  lVar2 = _DAT_112d62a88;
  func_0x000107c61428(unaff_x20 + _DAT_112d62a88,auStack_78,1,0);
  bVar1 = *(byte *)(unaff_x20 + lVar2);
  *(byte *)(unaff_x20 + lVar2) = param_1;
  if ((param_1 & 1) != bVar1) {
    func_0x000107c3fd68();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      uVar7 = unaff_x20;
      func_0x000107c5dfd4();
      func_0x000107c61180();
      func_0x000107c615e8(unaff_x20);
      uVar4 = 0;
      FUN_10118e14c(0,0x112d62a98,&PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
      uVar5 = uVar7;
      func_0x000107c5fc54(uVar7,uVar4);
      func_0x000107c61170(uVar7);
      if (uVar5 >> 0x3e == 0) {
        uVar7 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar7 = uVar5 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar5) {
          uVar7 = uVar5;
        }
        func_0x000107c60480();
      }
      if (uVar7 != 0) {
        uVar8 = 0;
        do {
          if ((uVar5 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10118c8d0);
              (*pcVar3)();
            }
            uVar6 = *(ulong *)(uVar5 + uVar8 * 8 + 0x20);
            func_0x000107c61174(uVar6);
          }
          else {
            uVar6 = uVar8;
            FUN_10118dc90(uVar8,uVar5);
          }
          if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10118c8cc);
            (*pcVar3)();
          }
          uVar9 = uVar8 + 1;
          func_0x000107e8846c();
          func_0x000107c61170(uVar6);
          uVar8 = uVar8 + 1;
        } while (uVar9 != uVar7);
      }
      func_0x000107c6142c(uVar5);
    }
    func_0x000107c5d3dc();
  }
  return;
}



/* Entry: 10118c920; end: 10118c95f;  */

void FUN_10118c920(void)

{
  func_0x000107c61168(&PTR_PTR_1127b39f8);
  return;
}



/* Entry: 10118c960; end: 10118c9c3; -[MemoriesSnapsTabLockedSnapModalCardPlugin sectionControllerForViewModel:selectMode:] */

void FUN_10118c960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10118c4fc(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10118c9c4; end: 10118cd53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10118c9c4(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar7 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  ppuVar11 = &puStack_a0;
  puVar3 = PTR_PTR_1126a6480;
  func_0x000107c610f8(PTR_PTR_1126a6480);
  func_0x000107c453e4();
  lVar4 = *(long *)(unaff_x20 + _DAT_112d62a50);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c59558(puVar3);
    puVar5 = &UNK_11038b8e0;
    func_0x000107c613fc(&UNK_11038b8e0,0x18,7);
    *(long *)(puVar5 + 0x10) = lVar4;
    puVar6 = PTR_PTR_1126b1678;
    func_0x000107c610f8(PTR_PTR_1126b1678);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = (code *)0x10118e19c;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_101016bdc;
    puStack_88 = &UNK_11038b8f8;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c615f0(lVar4);
    func_0x000107c46b38(puVar6);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61574(puStack_78);
    func_0x000107c598d8(puVar3);
    func_0x000107c61170(puVar6);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d62a68);
    puVar5 = &UNK_11038b930;
    func_0x000107c613fc(&UNK_11038b930,0x20,7);
    uVar12 = puVar1[1];
    uVar13 = *puVar1;
    *(undefined8 *)(puVar5 + 0x18) = puVar1[1];
    *(undefined8 *)(puVar5 + 0x10) = uVar13;
    puVar6 = PTR_PTR_1126b1678;
    func_0x000107c610f8(PTR_PTR_1126b1678);
    pcStack_80 = FUN_10118e1c0;
    puStack_a0 = puVar2;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_101016bdc;
    puStack_88 = &UNK_11038b948;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c6157c(uVar12);
    func_0x000107c46b38(puVar6);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(puStack_78);
    func_0x000107c564cc(puVar3);
    func_0x000107c61170(puVar6);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d62a70);
    puVar5 = &UNK_11038b980;
    func_0x000107c613fc(&UNK_11038b980,0x20,7);
    uVar12 = puVar1[1];
    uVar13 = *puVar1;
    *(undefined8 *)(puVar5 + 0x18) = puVar1[1];
    *(undefined8 *)(puVar5 + 0x10) = uVar13;
    puVar6 = PTR_PTR_1126b1678;
    func_0x000107c610f8(PTR_PTR_1126b1678);
    pcStack_80 = (code *)0x10118e42c;
    puStack_a0 = puVar2;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_101016bdc;
    puStack_88 = &UNK_11038b998;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c6157c(uVar12);
    func_0x000107c46b38(puVar6);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61574(puStack_78);
    func_0x000107c564c8(puVar3);
    func_0x000107c61170(puVar6);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d62a78);
    puVar5 = &UNK_11038b9d0;
    func_0x000107c613fc(&UNK_11038b9d0,0x20,7);
    uVar12 = puVar1[1];
    uVar13 = *puVar1;
    *(undefined8 *)(puVar5 + 0x18) = puVar1[1];
    *(undefined8 *)(puVar5 + 0x10) = uVar13;
    pcStack_80 = FUN_10118e1e0;
    puStack_a0 = puVar2;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_1000f6b44;
    puStack_88 = &UNK_11038b9e8;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&puStack_a0);
    puVar5 = puStack_78;
    func_0x000107c6157c(uVar12);
    func_0x000107c61574(puVar5);
    func_0x000107c56ed0(puVar3);
    func_0x000107c60bd0(ppuVar10);
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d62a60);
    puVar5 = &UNK_11038ba20;
    func_0x000107c613fc(&UNK_11038ba20,0x18,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar12;
    pcStack_80 = (code *)0x10118e1e8;
    puStack_a0 = puVar2;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_1000f6b44;
    puStack_88 = &UNK_11038ba38;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&puStack_a0);
    puVar5 = puStack_78;
    func_0x000107c61174(uVar12);
    func_0x000107c61574(puVar5);
    func_0x000107c56f10(puVar3);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c615e8(lVar4);
  }
  return puVar3;
}



/* Entry: 10118cd54; end: 10118ce13;  */

/* WARNING: Possible PIC construction at 0x00010118cdf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010118cdfc) */

void FUN_10118cd54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_11038bac0;
  func_0x000107c613fc(&UNK_11038bac0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  puVar2 = &UNK_11038bae8;
  func_0x000107c613fc(&UNK_11038bae8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10d928a88;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c6157c(param_2);
  func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10d928a98,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 10118ce14; end: 10118ce7f;  */

void FUN_10118ce14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10118ce80,uVar1,uVar2);
  return;
}



/* Entry: 10118ce80; end: 10118ceb7;  */

void FUN_10118ce80(void)

{
  code *pcVar1;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010118ceb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10118ceb8; end: 10118cef3;  */

void FUN_10118ceb8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010118cef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10118cef4; end: 10118cfb7;  */

/* WARNING: Possible PIC construction at 0x00010118cf9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010118cfa0) */

void FUN_10118cef4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11038ba70;
  func_0x000107c613fc(&UNK_11038ba70,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_11038ba98;
  func_0x000107c613fc(&UNK_11038ba98,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10d928a60;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10d928a70,puVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 10118cfb8; end: 10118d023;  */

void FUN_10118cfb8(undefined8 param_1)

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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10118d024,uVar1,uVar2);
  return;
}



/* Entry: 10118d024; end: 10118d083;  */

void FUN_10118d024(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4ab18();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010118d080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar1 == 0);
  return;
}



/* Entry: 10118d084; end: 10118d0c7;  */

void FUN_10118d084(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010118d0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 10118d0c8; end: 10118d12b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118d0c8(undefined1 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112d62aa0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d62aa8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10118d12c; end: 10118d157; -[MemoriesSnapsTabLockedSnapModalCardPlugin init] */

void FUN_10118d12c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSnapsTabLockedSnapModalCardPlugin.MemoriesSnapsTabLockedSnapModalCardPluginImpl"
                      ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10118d158);
  (*pcVar1)();
}



/* Entry: 10118d158; end: 10118d24b; -[MemoriesSnapsTabLockedSnapModalCardPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010118d174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118d1c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010118d178) */
/* WARNING: Removing unreachable block (ram,0x00010118d1cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118d158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d62a40));
  return;
}



/* Entry: 10118d24c; end: 10118d25b; -[MemoriesSnapsTabLockedSnapModalCardViewModel isRenderable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10118d24c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112d62aa0);
}



/* Entry: 10118d25c; end: 10118d26b; -[MemoriesSnapsTabLockedSnapModalCardViewModel componentContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118d25c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d62aa8));
  return;
}



/* Entry: 10118d26c; end: 10118d2db; -[MemoriesSnapsTabLockedSnapModalCardViewModel initWithIsRenderable:componentContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118d26c(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112d62aa0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112d62aa8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10118d2dc; end: 10118d31b; -[MemoriesSnapsTabLockedSnapModalCardViewModel diffIdentifier] */

void FUN_10118d2dc(void)

{
  if (lRam0000000112d62ab0 != -1) {
    func_0x000107c61568(0x112d62ab0,0x10118d1fc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000112d62ab8);
  return;
}



/* Entry: 10118d31c; end: 10118d37f; -[MemoriesSnapsTabLockedSnapModalCardViewModel isEqualToDiffableObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10118d31c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x000107c614f0();
    func_0x000107c61480(param_3,lVar1);
    if (param_3 == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = *(byte *)(param_1 + _DAT_112d62aa0) ^ *(byte *)(param_3 + _DAT_112d62aa0) ^ 1;
    }
    return bVar2 & 1;
  }
  return 0;
}



/* Entry: 10118d380; end: 10118d3ab; -[MemoriesSnapsTabLockedSnapModalCardViewModel init] */

void FUN_10118d380(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSnapsTabLockedSnapModalCardPlugin.MemoriesSnapsTabLockedSnapModalCardViewModel"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10118d3ac);
  (*pcVar1)();
}



/* Entry: 10118d3ac; end: 10118d3bb; -[MemoriesSnapsTabLockedSnapModalCardViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118d3ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d62aa8));
  return;
}



/* Entry: 10118d3bc; end: 10118d3ff; -[MemoriesSnapsTabLockedSnapModalCardSectionController selectMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10118d3bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62a88;
  func_0x000107c61428(param_1 + _DAT_112d62a88,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 10118d400; end: 10118d42f; -[MemoriesSnapsTabLockedSnapModalCardSectionController setSelectMode:] */

void FUN_10118d400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10118c794(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10118d430; end: 10118d4c7; -[MemoriesSnapsTabLockedSnapModalCardSectionController sectionController:cellForViewModel:atIndex:] */

void FUN_10118d430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [32];
  
  puVar1 = auStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_4);
  func_0x000107c615e8(param_4);
  FUN_10118de54(auStack_50,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  FUN_10118e3ec(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10118d4c8; end: 10118d563; -[MemoriesSnapsTabLockedSnapModalCardSectionController sectionController:sizeForViewModel:atIndex:] */

undefined1  [16]
FUN_10118d4c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  undefined1 auStack_60 [32];
  
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_3);
  func_0x000107c60234(auStack_60,param_6);
  func_0x000107c615e8(param_6);
  FUN_10118dfc0(auStack_60);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  FUN_10118e3ec(auStack_60);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 10118d564; end: 10118d61b; -[MemoriesSnapsTabLockedSnapModalCardSectionController sectionController:viewModelsForObject:] */

void FUN_10118d564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [32];
  
  puVar1 = auStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_4);
  func_0x000107c615e8(param_4);
  FUN_10118e060(auStack_50);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  FUN_10118e3ec(auStack_50);
  uVar2 = 0x112d62bf0;
  func_0x0001000285a8(0x112d62bf0,&UNK_10d928a48);
  puVar3 = puVar1;
  func_0x000107c5fc48(puVar1,uVar2);
  func_0x000107c6142c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10118d61c; end: 10118d647; -[MemoriesSnapsTabLockedSnapModalCardSectionController init] */

void FUN_10118d61c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSnapsTabLockedSnapModalCardPlugin.MemoriesSnapsTabLockedSnapModalCardSectionController"
                      ,0x5e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10118d648);
  (*pcVar1)();
}



/* Entry: 10118d648; end: 10118d64b;  */

void FUN_10118d648(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10118d64c; end: 10118d65b; -[MemoriesSnapsTabLockedSnapModalCardSectionController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118d64c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d62a90));
  return;
}



/* Entry: 10118d65c; end: 10118d787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118d65c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  func_0x0001000bb420(param_1,auStack_50);
  FUN_10118c920();
  puVar1 = &uStack_58;
  func_0x000107c6147c(puVar1,auStack_50,PTR___sypN_11034f1a8 + 8,param_1,6);
  if ((int)puVar1 != 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112d62ac0);
    if (lVar4 == 0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_112d62ac8);
      if (lVar4 != 0) {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar4 != 0) {
          lVar3 = lVar4;
          func_0x000107c509b4();
          func_0x000107c61180();
          if (lVar3 != 0) {
            FUN_10118d788(uStack_58,lVar3);
            func_0x000107c61170(uStack_58);
            func_0x000107c615e8(lVar4);
            func_0x000107c615e8(lVar3);
            return;
          }
          func_0x000107c61170(uStack_58);
          func_0x000107c615e8(lVar4);
          return;
        }
      }
    }
    else {
      puVar2 = PTR_PTR_1126a6470;
      func_0x000107c610f8(PTR_PTR_1126a6470);
      func_0x000107c61174(lVar4);
      func_0x000107c453e4(puVar2);
      func_0x000107c5a588(lVar4);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar2);
    }
    func_0x000107c61170(uStack_58);
  }
  return;
}



/* Entry: 10118d788; end: 10118da8b;  */

/* WARNING: Possible PIC construction at 0x00010118d7ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118d824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118d8a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118d8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118d914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118d934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118d980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118d9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118d9c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118d9f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118da14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118da60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010118da18) */
/* WARNING: Removing unreachable block (ram,0x00010118d9f8) */
/* WARNING: Removing unreachable block (ram,0x00010118d9cc) */
/* WARNING: Removing unreachable block (ram,0x00010118d9a4) */
/* WARNING: Removing unreachable block (ram,0x00010118d984) */
/* WARNING: Removing unreachable block (ram,0x00010118d938) */
/* WARNING: Removing unreachable block (ram,0x00010118d918) */
/* WARNING: Removing unreachable block (ram,0x00010118d8cc) */
/* WARNING: Removing unreachable block (ram,0x00010118d8ac) */
/* WARNING: Removing unreachable block (ram,0x00010118d828) */
/* WARNING: Removing unreachable block (ram,0x00010118d7f0) */
/* WARNING: Removing unreachable block (ram,0x00010118da64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118d788(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a6470;
  func_0x000107c610f8(PTR_PTR_1126a6470);
  func_0x000107c453e4();
  func_0x000107c610f8(PTR_PTR_1126a6478);
  func_0x000107c49520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10118da8c; end: 10118daf3; -[MemoriesSnapsTabLockedSnapModalCardCell bindViewModel:] */

void FUN_10118da8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_40,param_3);
  func_0x000107c615e8(param_3);
  FUN_10118d65c(auStack_40);
  func_0x000107c61170(param_1);
  FUN_10118e3ec(auStack_40);
  return;
}



/* Entry: 10118daf4; end: 10118db77; -[MemoriesSnapsTabLockedSnapModalCardCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118daf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_5;
  func_0x000107c614f0();
  *(undefined8 *)(param_5 + _DAT_112d62ac0) = 0;
  *(undefined8 *)(param_5 + _DAT_112d62ac8) = 0;
  lStack_50 = param_5;
  lStack_48 = lVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 10118db78; end: 10118dc0f; -[MemoriesSnapsTabLockedSnapModalCardCell initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10118db78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112d62ac0) = 0;
  *(undefined8 *)(param_1 + _DAT_112d62ac8) = 0;
  puVar1 = PTR_s_initWithCoder__1125dd730;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (plVar3 != (long *)0x0) {
    func_0x000107c61170(plVar3);
  }
  return (undefined1 *)plVar3;
}



/* Entry: 10118dc10; end: 10118dc43;  */

void FUN_10118dc10(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10118dc44; end: 10118dc7b; -[MemoriesSnapsTabLockedSnapModalCardCell .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010118dc60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010118dc64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118dc44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d62ac0));
  return;
}



/* Entry: 10118dc7c; end: 10118dc8f;  */

void FUN_10118dc7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d62bf8 == (undefined *)0x0 || ((ulong)puRam0000000112d62bf8 & 1) != 0) {
    puVar1 = &UNK_10e84ad04;
    func_0x000107c61518(&UNK_10e84ad04,0x1b,0,0);
    puRam0000000112d62bf8 = puVar1;
  }
  return;
}



/* Entry: 10118dc90; end: 10118de53;  */

ulong FUN_10118dc90(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10118dd74);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10118dd78);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
    func_0x000107c61168(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
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
    puVar4 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
    func_0x000107c61168(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
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
  FUN_10118e14c(0,0x112d62a98,&PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10118de54);
  (*pcVar2)();
}



/* Entry: 10118de54; end: 10118dfbf;  */

/* WARNING: Possible PIC construction at 0x00010118df94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010118df98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10118de54(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_58 [24];
  
  lVar2 = unaff_x20;
  func_0x000107c3fd68();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x00010118e12c();
  if (lVar2 == 0) {
    func_0x000107c610f8(lVar3);
  }
  else {
    func_0x000107c614e8(lVar3);
    lVar4 = lVar2;
    func_0x000107c417d4();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c61480();
    if (lVar5 != 0) {
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d62a90);
      uVar6 = *(undefined8 *)(lVar5 + _DAT_112d62ac8);
      *(undefined8 *)(lVar5 + _DAT_112d62ac8) = uVar7;
      func_0x000107c61170(uVar6);
      lVar3 = _DAT_112d62a88;
      func_0x000107c61428(unaff_x20 + _DAT_112d62a88,auStack_58,0,0);
      uVar1 = *(undefined1 *)(unaff_x20 + lVar3);
      func_0x000107c61174(uVar7);
      func_0x000107c61174(lVar4);
      func_0x000107e8846c(lVar5,uVar1);
      func_0x000107c61170(lVar4);
      func_0x000107c615e8(lVar2);
      return lVar5;
    }
    func_0x000107c61170(lVar4);
    func_0x000107c610f8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c013df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,0,0,0);
  return lVar3;
}



/* Entry: 10118dfc0; end: 10118e05f;  */

undefined1  [16] FUN_10118dfc0(double param_1)

{
  long unaff_x20;
  double dVar1;
  undefined1 auVar2 [16];
  
  func_0x000107c3fd68();
  func_0x000107c61180();
  dVar1 = 0.0;
  if (unaff_x20 == 0) {
    param_1 = 0.0;
  }
  else {
    func_0x000107c403a4();
    func_0x000107c615e8(unaff_x20);
    if (0.0 < param_1) {
      dVar1 = ((param_1 + -32.0 + -12.0) * 0.25) / 0.55 + 112.0 + 16.0;
    }
  }
  auVar2._8_8_ = dVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10118e060; end: 10118e10b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118e060(undefined8 param_1)

{
  long *plVar1;
  long lStack_48;
  undefined1 auStack_40 [32];
  
  func_0x0001000bb420(param_1,auStack_40);
  FUN_10118c920();
  plVar1 = &lStack_48;
  func_0x000107c6147c(plVar1,auStack_40,PTR___sypN_11034f1a8 + 8,param_1,6);
  if (((ulong)plVar1 & 1) != 0) {
    if (*(char *)(lStack_48 + _DAT_112d62aa0) == '\x01') {
      FUN_10118dc7c();
      func_0x000107c613fc();
      plVar1[3] = 3;
      plVar1[2] = 1;
      plVar1[4] = lStack_48;
    }
    else {
      func_0x000107c61170(lStack_48);
    }
  }
  return;
}



/* Entry: 10118e10c; end: 10118e14b;  */

void FUN_10118e10c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b3900);
  return;
}



/* Entry: 10118e14c; end: 10118e18b;  */

void FUN_10118e14c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10118e18c; end: 10118e1bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118e18c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_a0 [24];
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  puVar3 = *(undefined **)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar7 = *param_1;
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0,*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c4b940(puVar3);
  if (lVar7 < 1) {
    func_0x000107c61428(lVar1 + 0x10,auStack_70,0,0);
    if (*(char *)(lVar1 + 0x10) != '\x01') {
      func_0x000107c5d278(puVar3);
      goto LAB_10118c49c;
    }
    func_0x000107c61428(lVar1 + 0x10,auStack_a0,1,0);
    *(undefined1 *)(lVar1 + 0x10) = 0;
    func_0x000107c5d278(puVar3);
    puVar3 = PTR_PTR_1126a6480;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    func_0x000107c61428(lVar1 + 0x10,auStack_a0,1,0);
    *(undefined1 *)(lVar1 + 0x10) = 1;
    func_0x000107c5d278();
    FUN_10118c9c4();
  }
  puVar4 = puVar3;
  FUN_10118c920();
  puVar5 = puVar4;
  func_0x000107c610f8();
  puVar5[_DAT_112d62aa0] = 0 < lVar7;
  *(undefined **)(puVar5 + _DAT_112d62aa8) = puVar3;
  ppuVar6 = &puStack_80;
  puStack_80 = puVar5;
  puStack_78 = puVar4;
  func_0x000107c61154(ppuVar6,PTR_s_init_1125d9248);
  ppuStack_88 = ppuVar6;
  func_0x000100087f6c(&ppuStack_88);
  func_0x000107c61170(ppuVar6);
LAB_10118c49c:
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 10118e1c0; end: 10118e1df;  */

void FUN_10118e1c0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10118e1e0; end: 10118e1ef;  */

/* WARNING: Possible PIC construction at 0x00010118cdf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010118cdfc) */

void FUN_10118e1e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = &UNK_11038bac0;
  func_0x000107c613fc(&UNK_11038bac0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  puVar4 = &UNK_11038bae8;
  func_0x000107c613fc(&UNK_11038bae8,0x20,7);
  *(undefined **)(puVar4 + 0x10) = &UNK_10d928a88;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  func_0x000107c6157c(uVar2);
  func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10d928a98,puVar4,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar4);
  return;
}



/* Entry: 10118e1f0; end: 10118e27f;  */

void FUN_10118e1f0(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10118e23c;
  plVar2[2] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[3] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10118d024,lVar1,lVar3);
  return;
}



/* Entry: 10118e280; end: 10118e2ef;  */

void FUN_10118e280(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10118e430;
  FUN_100ffbb74(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10118e2f0; end: 10118e33f;  */

void FUN_10118e2f0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10118e340;
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10118ce80,lVar1,lVar2);
  return;
}



/* Entry: 10118e340; end: 10118e37b;  */

void FUN_10118e340(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010118e378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10118e37c; end: 10118e3eb;  */

void FUN_10118e37c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10118e434;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10118e3ec; end: 10118e443;  */

void FUN_10118e3ec(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010118e400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 10118e444; end: 10118e4af;  */

void FUN_10118e444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  return;
}



/* Entry: 10118e4b0; end: 10118e81f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118e4b0(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_1130806b8);
  func_0x000107c6157c(uVar11);
  func_0x0001000d224c(&puStack_90);
  func_0x000107c61574(uVar11);
  puVar2 = puStack_90;
  func_0x000107c5ad64();
  func_0x000107c615e8(puStack_90);
  if ((int)puVar2 != 0) {
    lVar10 = *(long *)(unaff_x20 + 0x20);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar16 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar11 = uVar16;
    func_0x000107c3daf8();
    func_0x000107c61180();
    uVar3 = uVar16;
    func_0x000107c4eaa8();
    func_0x000107c61180();
    uVar13 = *(undefined8 *)(unaff_x20 + 0x40);
    puVar4 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    puVar2 = &UNK_11038bb10;
    func_0x000107c613fc(&UNK_11038bb10,0x30,7);
    *(undefined8 *)(puVar2 + 0x10) = uVar12;
    *(undefined8 *)(puVar2 + 0x18) = uVar11;
    *(undefined8 *)(puVar2 + 0x20) = uVar3;
    *(undefined8 *)(puVar2 + 0x28) = uVar13;
    pcStack_70 = FUN_10118e820;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    uStack_80 = 0x10118e848;
    puStack_78 = &UNK_11038bb28;
    ppuVar5 = &puStack_90;
    puStack_68 = puVar2;
    func_0x000107c60bc4(ppuVar5);
    puVar2 = puStack_68;
    func_0x000107c61174(uVar12);
    func_0x000107c615f0(uVar11);
    func_0x000107c61174();
    func_0x000107c61174(uVar13);
    func_0x000107c61574(puVar2);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    uVar12 = uVar16;
    func_0x000107c4dd50();
    func_0x000107c61180();
    puVar2 = &UNK_11038bb60;
    func_0x000107c613fc(&UNK_11038bb60,0x18,7);
    *(undefined8 *)(puVar2 + 0x10) = uVar12;
    uVar14 = *(undefined8 *)(lVar10 + _DAT_11303e8a0);
    uVar17 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar15 = *(undefined8 *)(lVar10 + _DAT_11303e8b8);
    uVar13 = *(undefined8 *)(lVar10 + _DAT_11303e8c8);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    puVar6 = &UNK_11038bb88;
    func_0x000107c613fc(&UNK_11038bb88,0x18,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar17;
    puVar7 = &UNK_11038bbb0;
    func_0x000107c613fc(&UNK_11038bbb0,0x18,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar17;
    lVar8 = 0;
    FUN_10118e10c();
    lVar10 = lVar8;
    func_0x000107c610f8();
    *(undefined8 *)(lVar10 + _DAT_112d62a40) = uVar14;
    *(undefined8 *)(lVar10 + _DAT_112d62a48) = uVar15;
    *(undefined8 *)(lVar10 + _DAT_112d62a50) = uVar13;
    *(undefined8 *)(lVar10 + _DAT_112d62a58) = uVar12;
    *(undefined **)(lVar10 + _DAT_112d62a60) = puVar4;
    puVar1 = (undefined8 *)(lVar10 + _DAT_112d62a68);
    *puVar1 = FUN_10118e8a8;
    puVar1[1] = puVar6;
    puVar1 = (undefined8 *)(lVar10 + _DAT_112d62a70);
    *puVar1 = 0x10118e8c8;
    puVar1[1] = puVar7;
    puVar1 = (undefined8 *)(lVar10 + _DAT_112d62a78);
    *puVar1 = 0x10118e89c;
    puVar1[1] = puVar2;
    puVar6 = PTR_s_init_1125d9248;
    lStack_a0 = lVar10;
    lStack_98 = lVar8;
    func_0x000107c61174(uVar17);
    func_0x000107c61174();
    func_0x000107c61174(puVar4);
    func_0x000107c6157c(puVar2);
    func_0x000107c6157c(uVar14);
    func_0x000107c6157c(uVar15);
    func_0x000107c61174(uVar13);
    plVar9 = &lStack_a0;
    func_0x000107c61154(plVar9,puVar6);
    func_0x000107c4e9e4(uVar16);
    func_0x000107c61180();
    func_0x000107c4fba8();
    func_0x000107c615e8(uVar11);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(plVar9);
    func_0x000107c61170(uVar16);
  }
  return;
}



/* Entry: 10118e820; end: 10118e87f;  */

void FUN_10118e820(void)

{
  long unaff_x20;
  
  func_0x0001022a9490(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 10118e880; end: 10118e8a7;  */

void FUN_10118e880(long param_1,long param_2)

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



/* Entry: 10118e8a8; end: 10118e8e7;  */

void FUN_10118e8a8(void)

{
  func_0x0001022a6c7c();
  return;
}



/* Entry: 10118e8e8; end: 10118e953;  */

void FUN_10118e8e8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 10118e954; end: 10118e973;  */

void FUN_10118e954(void)

{
  FUN_10118e4b0();
  return;
}



/* Entry: 10118e974; end: 10118e97b;  */

undefined8 FUN_10118e974(void)

{
  return 0;
}



/* Entry: 10118e97c; end: 10118e99b;  */

void FUN_10118e97c(void)

{
  func_0x000107c61168(&PTR_PTR_112d62c40);
  return;
}



/* Entry: 10118e99c; end: 10118e9a7; -[SCMemoriesSnapsTabLockedSnapModalCardPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118e99c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62cd0;
  func_0x000107c61428(param_1 + _DAT_112d62cd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10118e9a8; end: 10118e9b3; -[SCMemoriesSnapsTabLockedSnapModalCardPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118e9a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62cd0;
  func_0x000107c61428(param_1 + _DAT_112d62cd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10118e9b4; end: 10118e9bf; -[SCMemoriesSnapsTabLockedSnapModalCardPluginEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118e9b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62cd8;
  func_0x000107c61428(param_1 + _DAT_112d62cd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10118e9c0; end: 10118e9cb; -[SCMemoriesSnapsTabLockedSnapModalCardPluginEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118e9c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62cd8;
  func_0x000107c61428(param_1 + _DAT_112d62cd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10118e9cc; end: 10118e9d7; -[SCMemoriesSnapsTabLockedSnapModalCardPluginEntryPoint memoriesMonetizationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118e9cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62ce0;
  func_0x000107c61428(param_1 + _DAT_112d62ce0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10118e9d8; end: 10118e9e3; -[SCMemoriesSnapsTabLockedSnapModalCardPluginEntryPoint setMemoriesMonetizationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118e9d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62ce0;
  func_0x000107c61428(param_1 + _DAT_112d62ce0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10118e9e4; end: 10118e9ef; -[SCMemoriesSnapsTabLockedSnapModalCardPluginEntryPoint memoriesExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118e9e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62ce8;
  func_0x000107c61428(param_1 + _DAT_112d62ce8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10118e9f0; end: 10118e9fb; -[SCMemoriesSnapsTabLockedSnapModalCardPluginEntryPoint setMemoriesExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118e9f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62ce8;
  func_0x000107c61428(param_1 + _DAT_112d62ce8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10118e9fc; end: 10118ea07; -[SCMemoriesSnapsTabLockedSnapModalCardPluginEntryPoint lockedSnapsPageLauncherScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118e9fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62cf0;
  func_0x000107c61428(param_1 + _DAT_112d62cf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10118ea08; end: 10118ea13; -[SCMemoriesSnapsTabLockedSnapModalCardPluginEntryPoint setLockedSnapsPageLauncherScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118ea08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62cf0;
  func_0x000107c61428(param_1 + _DAT_112d62cf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10118ea14; end: 10118ea1f; -[SCMemoriesSnapsTabLockedSnapModalCardPluginEntryPoint memoriesLockedSnapsCardDataServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118ea14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62cf8;
  func_0x000107c61428(param_1 + _DAT_112d62cf8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10118ea20; end: 10118ea2b; -[SCMemoriesSnapsTabLockedSnapModalCardPluginEntryPoint setMemoriesLockedSnapsCardDataServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118ea20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62cf8;
  func_0x000107c61428(param_1 + _DAT_112d62cf8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10118ea2c; end: 10118ea37; -[SCMemoriesSnapsTabLockedSnapModalCardPluginEntryPoint composerCoreUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118ea2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62d00;
  func_0x000107c61428(param_1 + _DAT_112d62d00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10118ea38; end: 10118ea7b;  */

void FUN_10118ea38(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10118ea7c; end: 10118ea87; -[SCMemoriesSnapsTabLockedSnapModalCardPluginEntryPoint setComposerCoreUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118ea7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62d00;
  func_0x000107c61428(param_1 + _DAT_112d62d00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10118ea88; end: 10118eadb;  */

void FUN_10118ea88(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10118eadc; end: 10118ed67;  */

/* WARNING: Possible PIC construction at 0x00010118ec2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118ec3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118ec4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118ec5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118ed2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118ed3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118ecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118ed0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118ecdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118ecec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118eccc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010118ecf0) */
/* WARNING: Removing unreachable block (ram,0x00010118ece0) */
/* WARNING: Removing unreachable block (ram,0x00010118ed10) */
/* WARNING: Removing unreachable block (ram,0x00010118ed00) */
/* WARNING: Removing unreachable block (ram,0x00010118ed40) */
/* WARNING: Removing unreachable block (ram,0x00010118ed30) */
/* WARNING: Removing unreachable block (ram,0x00010118ec60) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x00010118ec50) */
/* WARNING: Removing unreachable block (ram,0x00010118ec40) */
/* WARNING: Removing unreachable block (ram,0x00010118ec30) */
/* WARNING: Removing unreachable block (ram,0x00010118ecd0) */

void FUN_10118eadc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c40014();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4cbf4();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c4cb8c();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c4b97c();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar6 = unaff_x20;
            func_0x000107c4cbbc();
            func_0x000107c61180();
            if (lVar6 != 0) {
              func_0x000107c3ff88();
              func_0x000107c61180();
              if (unaff_x20 == 0) {
                func_0x000107c61170(lVar1);
                lVar1 = lVar2;
              }
              else {
                lVar7 = 0;
                FUN_10118e97c();
                func_0x000107c613fc();
                *(long *)(lVar7 + 0x10) = lVar1;
                *(long *)(lVar7 + 0x18) = lVar2;
                *(long *)(lVar7 + 0x20) = lVar3;
                *(long *)(lVar7 + 0x28) = lVar4;
                *(long *)(lVar7 + 0x30) = lVar5;
                *(long *)(lVar7 + 0x38) = lVar6;
                *(long *)(lVar7 + 0x40) = unaff_x20;
                func_0x000107c61174(lVar1);
                func_0x000107c61174(lVar2);
                func_0x000107c61174(lVar3);
                func_0x000107c61174(lVar4);
                func_0x000107c61174(lVar5);
                func_0x000107c61174(lVar6);
                func_0x000107c61174(unaff_x20);
                FUN_10118e4b0();
                lVar1 = unaff_x20;
              }
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



/* Entry: 10118ed68; end: 10118ed8f; -[SCMemoriesSnapsTabLockedSnapModalCardPluginEntryPoint begin] */

void FUN_10118ed68(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10118eadc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10118ed90; end: 10118edd3; -[SCMemoriesSnapsTabLockedSnapModalCardPluginEntryPoint end] */

void FUN_10118ed90(undefined8 param_1)

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


