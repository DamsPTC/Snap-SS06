/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1018e2a38; end: 1018e2a3f;  */

undefined8 FUN_1018e2a38(void)

{
  return 1;
}



/* Entry: 1018e2a40; end: 1018e2adf;  */

void FUN_1018e2a40(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1018e2ae0; end: 1018e2aef;  */

void FUN_1018e2ae0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1018e2af0; end: 1018e2c1f;  */

undefined1  [16] FUN_1018e2af0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c614e8();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c3ee00();
  func_0x000107c61180();
  uVar2 = 0x646961726d;
  func_0x000107c5fadc(0x646961726d,0xe500000000000000);
  uVar3 = 0x736a;
  puVar6 = (undefined *)0xe200000000000000;
  func_0x000107c5fadc(0x736a,0xe200000000000000);
  puVar4 = puVar1;
  func_0x000107c4e444();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  puVar5 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    FUN_1018e2c20();
    func_0x000107c613f8(&UNK_11040e620,uVar3,0,0);
    func_0x000107c61654();
  }
  else {
    func_0x000107c5faec(puVar4);
    func_0x000107c61170(puVar4);
    puVar1 = puVar6;
    func_0x000107c5fad0(puVar5,puVar6);
    func_0x000107c6142c(puVar6);
  }
  auVar7._8_8_ = puVar1;
  auVar7._0_8_ = puVar5;
  return auVar7;
}



/* Entry: 1018e2c20; end: 1018e2c5f;  */

void FUN_1018e2c20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd0978 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d991f10;
  func_0x000107c61520(&UNK_10d991f10,&UNK_11040e620);
  puRam0000000112dd0978 = puVar1;
  return;
}



/* Entry: 1018e2c60; end: 1018e2cc3;  */

ulong FUN_1018e2c60(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (5 < uVar1) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Entry: 1018e2cc4; end: 1018e2ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e2cc4(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x20;
  long lVar6;
  long lVar3;
  
  lVar3 = unaff_x20 + _DAT_112dd0948;
  lVar2 = lVar3;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar3 + 8);
  lVar3 = lVar2;
  FUN_1018e2848();
  uVar1 = (uint)lVar3;
  if (param_2 == 0) goto LAB_1018e2dc8;
  FUN_1018e2c60();
  uVar1 = uVar1 & 0xff;
  lVar3 = lVar2;
  if (uVar1 < 3) {
    if (uVar1 == 0) {
      func_0x000107c614f0(lVar2);
      pcVar5 = *(code **)(lVar6 + 0x10);
    }
    else {
      if (uVar1 != 1) {
        func_0x000107c614f0(lVar2);
        pcVar5 = *(code **)(lVar6 + 0x20);
        goto LAB_1018e2db8;
      }
      func_0x000107c614f0(lVar2);
      pcVar5 = *(code **)(lVar6 + 0x18);
    }
    (*pcVar5)();
    goto LAB_1018e2dc8;
  }
  if (uVar1 < 5) {
    if (uVar1 == 3) {
      func_0x000107c614f0(lVar2);
      pcVar5 = *(code **)(lVar6 + 0x20);
      goto LAB_1018e2d7c;
    }
    func_0x000107c614f0(lVar2);
    pcVar5 = *(code **)(lVar6 + 0x28);
LAB_1018e2db8:
    uVar4 = 1;
  }
  else {
    if (uVar1 != 5) goto LAB_1018e2dc8;
    func_0x000107c614f0(lVar2);
    pcVar5 = *(code **)(lVar6 + 0x28);
LAB_1018e2d7c:
    uVar4 = 0;
  }
  (*pcVar5)(uVar4,lVar3,lVar6);
LAB_1018e2dc8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 1018e2ddc; end: 1018e2dff;  */

undefined8 FUN_1018e2ddc(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1018e2e00; end: 1018e2eef;  */

uint FUN_1018e2e00(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1018e2ef0; end: 1018e2f2f;  */

void FUN_1018e2ef0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd0a48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d991ee8;
  func_0x000107c61520(&UNK_10d991ee8,&UNK_11040e620);
  puRam0000000112dd0a48 = puVar1;
  return;
}



/* Entry: 1018e2f30; end: 1018e2f93; -[_TtC38AdPlayableWebViewFactoryImplementation28AdPlayableLocalSchemeHandler webView:startURLSchemeTask:] */

/* WARNING: Possible PIC construction at 0x0001018e2f74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018e2f78) */

void FUN_1018e2f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_1018e313c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1018e2f94; end: 1018e2f97; -[_TtC38AdPlayableWebViewFactoryImplementation28AdPlayableLocalSchemeHandler webView:stopURLSchemeTask:] */

void FUN_1018e2f94(void)

{
  return;
}



/* Entry: 1018e2f98; end: 1018e2fd3; -[_TtC38AdPlayableWebViewFactoryImplementation28AdPlayableLocalSchemeHandler init] */

void FUN_1018e2f98(undefined8 param_1)

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



/* Entry: 1018e2fd4; end: 1018e3007;  */

void FUN_1018e2fd4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1018e3008; end: 1018e300b; -[_TtC38AdPlayableWebViewFactoryImplementation28AdPlayableLocalSchemeHandler .cxx_destruct] */

void FUN_1018e3008(void)

{
  return;
}



/* Entry: 1018e300c; end: 1018e302b;  */

void FUN_1018e300c(void)

{
  func_0x000107c61168(&PTR_PTR_1127eb7b0);
  return;
}



/* Entry: 1018e302c; end: 1018e3113;  */

undefined1  [16] FUN_1018e302c(undefined8 param_1,undefined8 param_2,char param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  if (param_3 == '\0') {
    func_0x000107c602fc(0x1d);
    func_0x000107c6142c(0xe000000000000000);
    pcVar1 = "Playable file not found at ";
    uVar2 = 0xd00000000000001b;
  }
  else {
    if (param_3 != '\x01') {
      uVar2 = 0xd000000000000017;
      uVar3 = 0x800000010efbf810;
      goto LAB_1018e3100;
    }
    func_0x000107c602fc(0x22);
    func_0x000107c6142c(0xe000000000000000);
    pcVar1 = "Failed to read playable file at ";
    uVar2 = 0xd000000000000020;
  }
  uVar3 = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
  func_0x000107c5fb78(param_1,param_2);
LAB_1018e3100:
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1018e3114; end: 1018e313b;  */

undefined1  [16] FUN_1018e3114(void)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *unaff_x20;
  undefined1 auVar6 [16];
  
  uVar2 = *unaff_x20;
  uVar3 = unaff_x20[1];
  if (*(char *)(unaff_x20 + 2) == '\0') {
    func_0x000107c602fc(0x1d);
    func_0x000107c6142c(0xe000000000000000);
    pcVar1 = "Playable file not found at ";
    uVar4 = 0xd00000000000001b;
  }
  else {
    if (*(char *)(unaff_x20 + 2) != '\x01') {
      uVar4 = 0xd000000000000017;
      uVar5 = 0x800000010efbf810;
      goto LAB_1018e3100;
    }
    func_0x000107c602fc(0x22);
    func_0x000107c6142c(0xe000000000000000);
    pcVar1 = "Failed to read playable file at ";
    uVar4 = 0xd000000000000020;
  }
  uVar5 = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
  func_0x000107c5fb78(uVar2,uVar3);
LAB_1018e3100:
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 1018e313c; end: 1018e363b;  */

void FUN_1018e313c(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar15;
  code *pcVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  undefined *apuStack_70 [2];
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)((long)apuStack_70 - extraout_x8);
  lVar2 = 0;
  func_0x000107c5eb08();
  lVar20 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  lVar17 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar19 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar18 = (undefined8 *)(lVar19 - extraout_x12);
  uVar9 = param_1;
  func_0x000107c50300(param_1);
  func_0x000107c61180();
  func_0x000107c5eae8(lVar17);
  func_0x000107c61170(uVar9);
  func_0x000107c5eaf0(puVar5);
  (**(code **)(lVar20 + 8))(lVar17,lVar2);
  puVar4 = puVar5;
  (**(code **)(lVar15 + 0x30))(puVar5,1,lVar3);
  if ((int)puVar4 == 1) {
    func_0x0001000293e4();
    puVar18 = puVar5;
  }
  else {
    puVar4 = puVar18;
    (**(code **)(lVar15 + 0x20))(puVar18,puVar5,lVar3);
    func_0x000107c5edc8();
    if (puVar5 != (undefined8 *)0x0) {
      puVar12 = puVar5;
      if (puVar4 == (undefined8 *)0x656c626179616c70 && puVar5 == (undefined8 *)0xe800000000000000)
      {
        func_0x000107c6142c();
LAB_1018e3374:
        apuStack_70[1] = (undefined *)param_1;
        func_0x000107c5edc4();
        puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        puVar7 = puVar6;
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar4 = puVar5;
        func_0x000107c5fadc(puVar5,puVar12);
        puVar8 = puVar7;
        func_0x000107c43418();
        func_0x000107c61170(puVar7);
        func_0x000107c61170();
        if ((int)puVar8 == 0) {
          FUN_1018e363c();
          puVar6 = &UNK_11040e710;
          func_0x000107c613f8(&UNK_11040e710,puVar4,0,0);
          *puVar4 = puVar5;
          puVar4[1] = puVar12;
          *(undefined1 *)(puVar4 + 2) = 0;
        }
        else {
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar4 = puVar5;
          puVar13 = puVar12;
          func_0x000107c5fadc();
          puVar7 = puVar6;
          func_0x000107c40520();
          func_0x000107c61180();
          func_0x000107c61170(puVar6);
          func_0x000107c61170();
          if (puVar7 != (undefined *)0x0) {
            puVar6 = puVar7;
            func_0x000107c5ee30();
            func_0x000107c6142c(puVar12);
            func_0x000107c61170(puVar7);
            (**(code **)(lVar15 + 0x10))(lVar19,puVar18,lVar3);
            uVar1 = (uint)((ulong)puVar13 >> 0x20);
            uVar14 = uVar1 >> 0x1e;
            apuStack_70[0] = puVar6;
            if (uVar1 >> 0x1e < 2) {
              if ((uVar14 != 0) && (SBORROW4((int)((ulong)puVar6 >> 0x20),(int)puVar6))) {
                    /* WARNING: Does not return */
                pcVar16 = (code *)SoftwareBreakpoint(1,0x1018e363c);
                (*pcVar16)();
              }
            }
            else if ((uVar14 == 2) && (SBORROW8(*(long *)(puVar6 + 0x18),*(long *)(puVar6 + 0x10))))
            {
                    /* WARNING: Does not return */
              pcVar16 = (code *)SoftwareBreakpoint(1,0x1018e3524);
              (*pcVar16)();
            }
            puVar8 = PTR__OBJC_CLASS___NSURLResponse_1126d55a0;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSURLResponse_1126d55a0);
            puVar6 = puVar8;
            func_0x000107c5ed90();
            uVar9 = 0x6d74682f74786574;
            func_0x000107c5fadc(0x6d74682f74786574,0xe90000000000006c);
            uVar10 = 0x382d667475;
            func_0x000107c5fadc(0x382d667475,0xe500000000000000);
            func_0x000107c48fc0(puVar8);
            func_0x000107c61170(puVar6);
            func_0x000107c61170(uVar9);
            func_0x000107c61170(uVar10);
            pcVar16 = *(code **)(lVar15 + 8);
            (*pcVar16)(lVar19,lVar3);
            puVar7 = apuStack_70[1];
            func_0x000107c41c8c(apuStack_70[1]);
            puVar6 = apuStack_70[0];
            puVar11 = apuStack_70[0];
            func_0x000107c5ee20(apuStack_70[0],puVar13);
            func_0x000107c41c78(puVar7);
            func_0x000107c61170(puVar11);
            func_0x000107c41bc4(puVar7);
            func_0x000107c61170(puVar8);
            func_0x00010006c090(puVar6,puVar13);
            (*pcVar16)(puVar18,lVar3);
            return;
          }
          FUN_1018e363c();
          puVar6 = &UNK_11040e710;
          func_0x000107c613f8(&UNK_11040e710,puVar4,0,0);
          *puVar4 = puVar5;
          puVar4[1] = puVar12;
          *(undefined1 *)(puVar4 + 2) = 1;
        }
        puVar7 = puVar6;
        func_0x000107c5ed2c();
        func_0x000107c614ac(puVar6);
        func_0x000107c41bc0(apuStack_70[1]);
        func_0x000107c61170(puVar7);
        (**(code **)(lVar15 + 8))(puVar18,lVar3);
        return;
      }
      func_0x000107c605b8();
      func_0x000107c6142c();
      if (((ulong)puVar4 & 1) != 0) goto LAB_1018e3374;
    }
    (**(code **)(lVar15 + 8))(puVar18,lVar3);
  }
  FUN_1018e363c();
  puVar6 = &UNK_11040e710;
  func_0x000107c613f8(&UNK_11040e710,puVar18,0,0);
  *puVar18 = 0;
  puVar18[1] = 0;
  *(undefined1 *)(puVar18 + 2) = 2;
  puVar7 = puVar6;
  func_0x000107c5ed2c();
  func_0x000107c614ac(puVar6);
  func_0x000107c41bc0(param_1);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 1018e363c; end: 1018e367b;  */

void FUN_1018e363c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd0a78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d991fcc;
  func_0x000107c61520(&UNK_10d991fcc,&UNK_11040e710);
  puRam0000000112dd0a78 = puVar1;
  return;
}



/* Entry: 1018e367c; end: 1018e36bb;  */

void FUN_1018e367c(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (param_3 < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 1018e36bc; end: 1018e3757;  */

undefined8 * FUN_1018e36bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1018e367c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 1018e3758; end: 1018e379b;  */

undefined8 * FUN_1018e3758(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x0001018e36a4(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 1018e379c; end: 1018e3887;  */

int FUN_1018e379c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1018e3888; end: 1018e38a7;  */

void FUN_1018e3888(void)

{
  func_0x000107c61168(&PTR_PTR_112dd0ac0);
  return;
}



/* Entry: 1018e38a8; end: 1018e38af;  */

void FUN_1018e38a8(void)

{
  return;
}



/* Entry: 1018e38b0; end: 1018e3a43;  */

undefined8
FUN_1018e38b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar5 = &puStack_90;
  puVar2 = &UNK_11040e800;
  func_0x000107c613fc(&UNK_11040e800,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_3);
  puVar3 = &UNK_11040e828;
  func_0x000107c613fc(&UNK_11040e828,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x1018e4e1c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100f11710;
  puStack_78 = &UNK_11040e840;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c615f0(param_4);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_11040e878;
  func_0x000107c613fc(&UNK_11040e878,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  uStack_70 = 0x1018e4e28;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100f10508;
  puStack_78 = &UNK_11040e890;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar2);
  FUN_1018e4b30(0);
  func_0x000107c614e8();
  func_0x000107c4c214(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar4);
  return param_1;
}



/* Entry: 1018e3a44; end: 1018e3adb;  */

void FUN_1018e3a44(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618(param_2);
  FUN_1018e4b30(0);
  func_0x000107c610f8();
  func_0x000107c6157c(param_1);
  func_0x000107c615f0(param_3);
  FUN_1018e3bd8(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 1018e3adc; end: 1018e3bd7;  */

void FUN_1018e3adc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  if (param_1 != 0) {
    ppuVar3 = &puStack_70;
    ppuVar4 = &puStack_70;
    uVar2 = 0x6c7275;
    func_0x000107c5fadc(0x6c7275,0xe300000000000000);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_50 = FUN_1018e513c;
    uStack_48 = 0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101137fac;
    puStack_58 = &UNK_11040e8b8;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(uStack_48);
    pcStack_50 = FUN_1018e4320;
    uStack_48 = 0;
    puStack_70 = puVar1;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101138058;
    puStack_58 = &UNK_11040e8e0;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c3e900(param_1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1018e3bd8; end: 1018e409f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1018e3bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long unaff_x20;
  long lStack_90;
  long lStack_88;
  
  lVar6 = unaff_x20 + _DAT_112dd0b20;
  *(undefined8 *)(lVar6 + 8) = 0;
  func_0x000107c61614(lVar6,0);
  *(undefined8 *)(unaff_x20 + _DAT_112dd0b28) = 0;
  lVar6 = _DAT_113803480;
  lVar1 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(unaff_x20 + lVar6,1,1,lVar1);
  lVar6 = _DAT_112dd0b30;
  uVar2 = 0;
  FUN_1018e300c();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar6) = uVar2;
  puVar3 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
  func_0x000107c610f8(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
  func_0x000107c453e4();
  uVar2 = *(undefined8 *)(unaff_x20 + lVar6);
  func_0x000107c61174(uVar2);
  uVar4 = 0x656c626179616c70;
  func_0x000107c5fadc(0x656c626179616c70,0xe800000000000000);
  func_0x000107c5a128(puVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  lVar5 = 0;
  FUN_1018e2828();
  lVar1 = lVar5;
  func_0x000107c610f8();
  lVar6 = lVar1 + _DAT_112dd0948;
  *(undefined8 *)(lVar6 + 8) = 0;
  func_0x000107c61614(lVar6,0);
  *(undefined8 *)(lVar6 + 8) = param_8;
  func_0x000107c61604();
  puVar8 = PTR_s_init_1125d9248;
  lStack_90 = lVar1;
  lStack_88 = lVar5;
  func_0x000107c615f0(param_7);
  plVar7 = &lStack_90;
  func_0x000107c61154(plVar7,puVar8);
  puVar8 = puVar3;
  func_0x000107c5d90c(puVar3);
  func_0x000107c61180();
  func_0x000107c61174(plVar7);
  uVar2 = 0x7461686370616e73;
  func_0x000107c5fadc(0x7461686370616e73,0xee00656764697242);
  func_0x000107c3d838(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(plVar7);
  func_0x000107c61170(uVar2);
  puVar8 = puVar3;
  func_0x000107c5d90c(puVar3);
  func_0x000107c61180();
  func_0x000107c61174(plVar7);
  uVar2 = 0x646961726d;
  func_0x000107c5fadc(0x646961726d,0xe500000000000000);
  func_0x000107c3d838(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(plVar7);
  func_0x000107c61170(uVar2);
  puVar8 = puVar3;
  func_0x000107c5d90c(puVar3);
  func_0x000107c61180();
  if (lRam0000000112dd0a40 != -1) {
    func_0x000107c61568(0x112dd0a40,FUN_1018e2420);
  }
  uVar4 = uRam0000000113803478;
  uVar2 = uRam0000000113803470;
  puVar9 = PTR__OBJC_CLASS___WKUserScript_1126d6bd0;
  func_0x000107c610f8(PTR__OBJC_CLASS___WKUserScript_1126d6bd0);
  func_0x000107c5fadc(uVar2,uVar4);
  func_0x000107c488ac(puVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c3d938(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar9);
  puVar8 = puVar3;
  func_0x000107c5d90c(puVar3);
  func_0x000107c61180();
  if (lRam0000000112dd0a38 != -1) {
    func_0x000107c61568(0x112dd0a38,FUN_1018e26c4);
  }
  uVar4 = uRam0000000113803468;
  uVar2 = uRam0000000113803460;
  puVar9 = PTR__OBJC_CLASS___WKUserScript_1126d6bd0;
  func_0x000107c610f8(PTR__OBJC_CLASS___WKUserScript_1126d6bd0);
  func_0x000107c5fadc(uVar2,uVar4);
  func_0x000107c488ac(puVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c3d938(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar9);
  func_0x000107c526a4(puVar3);
  func_0x000107c564a0(puVar3);
  *(undefined8 *)(unaff_x20 + _DAT_112dd0b18) = param_5;
  puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c6157c(param_5);
  func_0x000107c4c194(puVar8);
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar8);
  FUN_1018e4b30();
  puVar10 = &stack0xffffffffffffff60;
  func_0x000107c61154(param_1,param_2,param_3,param_4,puVar10,
                      PTR_s_initWithFrame_configuration__1125e2a10,puVar3);
  func_0x000107c61174();
  func_0x000107c569dc();
  *(undefined8 *)(puVar10 + _DAT_112dd0b20 + 8) = param_8;
  func_0x000107c61604(puVar10 + _DAT_112dd0b20,param_7);
  func_0x000107c615e8(param_7);
  puVar11 = puVar10;
  func_0x000107c51a60(puVar10);
  func_0x000107c61180();
  func_0x000107c53828();
  func_0x000107c61170(puVar10);
  func_0x000107c61574(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(plVar7);
  func_0x000107c61170(puVar11);
  return puVar10;
}



/* Entry: 1018e40a0; end: 1018e416b; -[_TtC38AdPlayableWebViewFactoryImplementation17AdPlayableWebView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e40a0(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + _DAT_112dd0b20;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(param_1 + _DAT_112dd0b28) = 0;
  lVar1 = _DAT_113803480;
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1 + lVar1,1,1,lVar3);
  lVar1 = _DAT_112dd0b30;
  uVar4 = 0;
  FUN_1018e300c();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(param_1 + lVar1) = uVar4;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "AdPlayableWebViewFactoryImplementation/AdPlayableWebView.swift",0x3e,2,0x55,0
                     );
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1018e416c);
  (*pcVar2)();
}



/* Entry: 1018e416c; end: 1018e41e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e416c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  lVar2 = lVar3 + _DAT_112dd0b20;
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar2 + 8);
    lVar2 = lVar1;
    func_0x000107c614f0();
    func_0x000107c42a78(lVar3);
    (**(code **)(lVar4 + 8))(lVar2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 1018e41e4; end: 1018e431f; -[_TtC38AdPlayableWebViewFactoryImplementation17AdPlayableWebView loadRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e41e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long extraout_x8;
  long lVar7;
  undefined1 auStack_60 [8];
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar1 = 0;
  func_0x000107c5eb08();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  func_0x000107c5eae8(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  puVar2 = &UNK_10d9920f8;
  lStack_48 = param_1;
  func_0x000107c614e0();
  func_0x000107c61174();
  puVar3 = puVar2;
  func_0x000107c5ed54(puVar2,1,FUN_1018e416c,0,
                      PTR___sSo8NSObjectC10Foundation27_KeyValueCodingAndObservingACWP_110351200);
  func_0x000107c61574(puVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112dd0b28);
  *(undefined **)(param_1 + _DAT_112dd0b28) = puVar3;
  func_0x000107c61170(uVar4);
  func_0x000107c5eae0();
  uVar5 = 0;
  FUN_1018e4b30();
  plVar6 = &lStack_58;
  lStack_58 = param_1;
  uStack_50 = uVar5;
  func_0x000107c61154(plVar6,PTR_s_loadRequest__112604a28,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  (**(code **)(lVar7 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar6);
  return;
}



/* Entry: 1018e4320; end: 1018e4323;  */

void FUN_1018e4320(void)

{
  return;
}



/* Entry: 1018e4324; end: 1018e49d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1018e4324(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar11;
  long extraout_x12;
  long lVar12;
  undefined *unaff_x20;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5eb08();
  lVar16 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar17 = &stack0xffffffffffffff10 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar18 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)puVar17 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar12 - extraout_x8_00;
  pcVar14 = *(code **)(lVar18 + 0x10);
  (*pcVar14)(lVar13,param_1,lVar2);
  (**(code **)(lVar18 + 0x38))(lVar13,0,1,lVar2);
  lVar8 = _DAT_113803480;
  func_0x000107c61428(unaff_x20 + _DAT_113803480,&puStack_d8,0x21,0);
  puVar7 = unaff_x20 + lVar8;
  func_0x0001014522e4(lVar13);
  ppuVar3 = &puStack_d8;
  func_0x000107c614a8();
  func_0x000107c5edbc();
  if (puVar7 == (undefined *)0x0) {
    (*pcVar14)(lVar12,param_1,lVar2);
    func_0x000107c5eaec(puVar17,0x404e000000000000,lVar12,0);
    func_0x000107c5eae0();
    (**(code **)(lVar16 + 8))(puVar17,lVar1);
    func_0x000107c4b768();
    func_0x000107c61180();
  }
  else {
    puVar4 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61534();
    *(undefined8 *)(puVar4 + 0x18) = 2;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    *(undefined ***)(puVar4 + 0x20) = ppuVar3;
    *(undefined **)(puVar4 + 0x28) = puVar7;
    func_0x0001000d224c(&uStack_a8);
    uVar5 = uStack_a8;
    func_0x000107c614f0(uStack_a8);
    puStack_d8 = (undefined *)0xd00000000000001f;
    uStack_d0 = 0x800000010efbf960;
    pcStack_c8 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
    (**(code **)(lStack_a0 + 8))
              (&uStack_68,&puStack_d8,&UNK_1107386a0,&PTR_DAT_11304a5d0,uVar5,lStack_a0);
    func_0x000107c615e8(uStack_a8);
    puStack_d8 = puVar4;
    func_0x00010109a32c(uStack_68);
    puVar7 = puStack_d8;
    func_0x0001000d224c(&puStack_d8);
    uVar5 = uStack_d0;
    puVar4 = puStack_d8;
    puVar6 = puStack_d8;
    func_0x000107c614f0(puStack_d8);
    uVar11 = 0xd000000000000037;
    uVar10 = 0x800000010efbf920;
    func_0x00010403c628(0xd000000000000037,0x800000010efbf920,puVar6,uVar5);
    func_0x000107c615e8(puVar4);
    puVar4 = puVar7;
    if ((uVar11 & 1) == 0) {
      func_0x0001018e5de4(puVar7);
    }
    else {
      FUN_1018e5140();
    }
    func_0x000107c6142c(puVar7);
    puVar7 = PTR__OBJC_CLASS___WKContentRuleListStore_1126a7d68;
    func_0x000107c61168();
    func_0x000107c41628();
    func_0x000107c61180();
    if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1018e4788);
      (*pcVar14)();
    }
    lVar8 = 0x7478456b636f6c42;
    func_0x000107c5fadc(0x7478456b636f6c42,0xed00006c616e7265);
    func_0x000107c5fadc(puVar4,uVar10);
    func_0x000107c6142c(uVar10);
    puVar6 = &UNK_11040e918;
    func_0x000107c613fc(&UNK_11040e918,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,unaff_x20);
    (*pcVar14)(lVar12,param_1,lVar2);
    uVar11 = (ulong)*(byte *)(lVar18 + 0x50);
    uVar15 = uVar11 + 0x18 & (uVar11 ^ 0xffffffffffffffff);
    puVar9 = &UNK_11040e940;
    func_0x000107c613fc(&UNK_11040e940,uVar15 + extraout_x12,uVar11 | 7);
    *(undefined **)(puVar9 + 0x10) = puVar6;
    (**(code **)(lVar18 + 0x20))(puVar9 + uVar15,lVar12,lVar2);
    pcStack_b8 = FUN_1018e6120;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0x42000000;
    pcStack_c8 = FUN_1018e49d8;
    puStack_c0 = &UNK_11040e958;
    ppuVar3 = &puStack_d8;
    puStack_b0 = puVar9;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_b0);
    func_0x000107c3fed4(puVar7);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(puVar7);
    lVar12 = lVar8;
    unaff_x20 = puVar4;
  }
  func_0x000107c61170(lVar12);
  func_0x000107c61170(unaff_x20);
  return 1;
}



/* Entry: 1018e49d8; end: 1018e4a4f;  */

/* WARNING: Possible PIC construction at 0x0001018e4a34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018e4a38) */

void FUN_1018e49d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1018e4a50; end: 1018e4aaf; -[_TtC38AdPlayableWebViewFactoryImplementation17AdPlayableWebView initWithFrame:configuration:] */

void FUN_1018e4a50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlayableWebViewFactoryImplementation.AdPlayableWebView",0x38,
                      "init(frame:configuration:)",0x1a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018e4a7c);
  (*pcVar1)();
}



/* Entry: 1018e4ab0; end: 1018e4b27; -[_TtC38AdPlayableWebViewFactoryImplementation17AdPlayableWebView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001018e4aec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018e4af0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e4ab0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dd0b18));
  FUN_1018e2ddc(param_1 + _DAT_112dd0b20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dd0b28));
  return;
}



/* Entry: 1018e4b28; end: 1018e4b2f;  */

void FUN_1018e4b28(void)

{
  if (lRam0000000112dd0b60 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e656ebc);
  return;
}



/* Entry: 1018e4b30; end: 1018e4b67;  */

void FUN_1018e4b30(undefined8 param_1)

{
  if (lRam0000000112dd0b60 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e656ebc);
  return;
}



/* Entry: 1018e4b68; end: 1018e4c27;  */

void FUN_1018e4b68(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_48 = PTR___sBoWV_11034d678 + 0x40;
  puStack_40 = &UNK_10d992088;
  puStack_38 = &UNK_10d9920a0;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBOWV_11034d658 + 0x40;
    func_0x000107c61630(param_1,0x100,5,&puStack_48,param_1 + 0x50);
  }
  return;
}



/* Entry: 1018e4c28; end: 1018e4cd7;  */

/* WARNING: Possible PIC construction at 0x0001018e4c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018e4cac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018e4cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018e4cb0) */
/* WARNING: Removing unreachable block (ram,0x0001018e4c84) */
/* WARNING: Removing unreachable block (ram,0x0001018e4cc4) */

void FUN_1018e4c28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___WKUserScript_1126d6bd0;
  func_0x000107c610f8(PTR__OBJC_CLASS___WKUserScript_1126d6bd0);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c488ac(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018e4cd8; end: 1018e4d8f;  */

void FUN_1018e4cd8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *unaff_x20;
  func_0x000107c5fadc();
  puVar4 = (undefined1 *)0x0;
  if (param_3 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101420ff8;
    puStack_58 = &UNK_11040e7c8;
    lStack_50 = param_3;
    uStack_48 = param_4;
    func_0x000107c60bc4(&puStack_70);
    uVar1 = uStack_48;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(uVar1);
    puVar4 = (undefined1 *)ppuVar2;
  }
  func_0x000107c42a80(uVar3,param_2,param_1,puVar4);
  func_0x000107c60bd0(puVar4);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1018e4d90; end: 1018e4d97;  */

void FUN_1018e4d90(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 1018e4d98; end: 1018e4dff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e4d98(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113803480;
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + _DAT_113803480,auStack_48,0,0);
  FUN_1018e6170(lVar2 + lVar1,param_1,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 1018e4e00; end: 1018e4e2f;  */

void FUN_1018e4e00(long param_1,long param_2)

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



/* Entry: 1018e4e30; end: 1018e4f5f;  */

undefined * FUN_1018e4e30(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  long extraout_x8;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  
  lVar3 = 0;
  func_0x000107c5ee4c();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar6 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar6 == 0) {
      puVar9 = (undefined1 *)(param_2 >> 0x30 & 0xff);
    }
    else {
      iVar7 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar7,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018e4f60);
        (*pcVar2)();
      }
      puVar9 = (undefined1 *)(long)(iVar7 - (int)param_1);
    }
  }
  else {
    if (uVar6 != 2) goto LAB_1018e4f28;
    puVar9 = (undefined1 *)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018e4f5c);
      (*pcVar2)();
    }
  }
  if (puVar9 != (undefined1 *)0x0) {
    puVar4 = puVar9;
    func_0x000100edbfc8(puVar9,0);
    puVar5 = puVar8;
    func_0x000107c5ee00(puVar8,puVar4 + 0x20,puVar9,param_1,param_2);
    func_0x00010006c090(param_1,param_2);
    (**(code **)(lVar10 + 8))(puVar8,lVar3);
    if (puVar5 == puVar9) {
      return puVar4;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1018e4f14);
    (*pcVar2)();
  }
LAB_1018e4f28:
  func_0x00010006c090(param_1,param_2);
  return PTR___swiftEmptyArrayStorage_11034f1c8;
}



/* Entry: 1018e4f60; end: 1018e4fc7;  */

long FUN_1018e4f60(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010006c00c();
  FUN_1018e4e30(param_1,param_2);
  lVar1 = param_1 + 0x20;
  func_0x000107c5fb50(lVar1,*(undefined8 *)(param_1 + 0x10));
  func_0x000107c6142c(param_1);
  return lVar1;
}



/* Entry: 1018e4fc8; end: 1018e4fff;  */

void FUN_1018e4fc8(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_3 - param_2;
  }
  func_0x000107c5fb50();
  *param_1 = param_2;
  param_1[1] = lVar1;
  return;
}



/* Entry: 1018e5000; end: 1018e513b;  */

undefined *
FUN_1018e5000(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018e513c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112d77ed0;
    func_0x0001000285a8(0x112d77ed0,&UNK_10d9379c0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d472a8;
    func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 1018e513c; end: 1018e513f;  */

undefined8 FUN_1018e513c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  FUN_1018e4b30(0);
  lVar1 = param_1;
  func_0x000107c61480(param_1,uVar3);
  uVar3 = 0;
  if ((lVar1 != 0) && (param_3 != 0)) {
    func_0x000107c61174(param_1);
    func_0x000107c5edd0(puVar5,param_2,param_3);
    puVar4 = puVar5;
    (**(code **)(lVar7 + 0x30))(puVar5,1,lVar2);
    if ((int)puVar4 == 1) {
      func_0x000107c61170(param_1);
      func_0x0001018e61b8(puVar5,0x112d36580,&UNK_10d9016d0);
      uVar3 = 0;
    }
    else {
      (**(code **)(lVar7 + 0x20))(lVar6,puVar5,lVar2);
      FUN_1018e4324(lVar6);
      func_0x000107c61170(param_1);
      (**(code **)(lVar7 + 8))(lVar6,lVar2);
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* Entry: 1018e5140; end: 1018e5faf;  */

undefined1  [16] FUN_1018e5140(long param_1)

{
  ulong *puVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined8 uVar20;
  bool bVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  undefined8 *puVar27;
  undefined1 auVar28 [16];
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_230;
  undefined *puStack_228;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined1 uStack_15f;
  undefined1 uStack_15e;
  undefined1 uStack_15d;
  undefined1 uStack_15c;
  undefined1 uStack_15b;
  undefined1 uStack_15a;
  undefined1 uStack_159;
  undefined1 uStack_158;
  undefined1 uStack_157;
  undefined1 uStack_156;
  undefined1 uStack_155;
  undefined1 uStack_154;
  undefined1 uStack_153;
  undefined2 uStack_152;
  undefined1 auStack_150 [8];
  ulong uStack_148;
  undefined8 uStack_140;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_260 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101395f90(0,2,0);
  puVar12 = puStack_260;
  func_0x0001000285a8(0x112d38330,&UNK_10d91d920);
  func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
  lVar24 = 0;
  bVar21 = false;
  do {
    uStack_d0 = 0x72656767697274;
    uStack_c8 = 0xe700000000000000;
    uStack_110 = 0x746c69662d6c7275;
    uStack_108 = 0xea00000000007265;
    uStack_160 = 0x5e;
    uStack_15f = 0;
    uStack_15e = 0;
    uStack_15d = 0;
    uStack_15c = 0;
    uStack_15b = 0;
    uStack_15a = 0;
    uStack_159 = 0;
    uStack_158 = 0;
    uStack_157 = 0;
    uStack_156 = 0;
    uStack_155 = 0;
    uStack_154 = 0;
    uStack_153 = 0;
    uStack_152 = 0xe100;
    func_0x000107c5fb78(*(undefined8 *)(lVar24 * 0x10 + 0x112dd0b98),
                        *(undefined8 *)(lVar24 * 0x10 + 0x112dd0ba0));
    func_0x000107c5fb78(0x2f2f3a,0xe300000000000000);
    uStack_100 = CONCAT17(uStack_159,
                          CONCAT16(uStack_15a,
                                   CONCAT15(uStack_15b,
                                            CONCAT14(uStack_15c,
                                                     CONCAT13(uStack_15d,
                                                              CONCAT12(uStack_15e,
                                                                       CONCAT11(uStack_15f,
                                                                                uStack_160)))))));
    uStack_f8 = CONCAT26(uStack_152,
                         CONCAT15(uStack_153,
                                  CONCAT14(uStack_154,
                                           CONCAT13(uStack_155,
                                                    CONCAT12(uStack_156,
                                                             CONCAT11(uStack_157,uStack_158))))));
    lVar24 = 1;
    func_0x000107c60498();
    func_0x000107c6157c();
    uVar9 = uStack_f8;
    uVar7 = uStack_100;
    uVar4 = uStack_108;
    uVar16 = uStack_110;
    func_0x000107c61434(uStack_108);
    func_0x000107c61434(uVar9);
    uVar6 = uVar16;
    uVar23 = uVar4;
    func_0x000100029284();
    if ((uVar23 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1018e5d58);
      (*pcVar5)();
    }
    lVar8 = lVar24 + (uVar6 >> 6) * 8;
    *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << (uVar6 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar24 + 0x30) + uVar6 * 0x10);
    *puVar1 = uVar16;
    puVar1[1] = uVar4;
    puVar27 = (undefined8 *)(*(long *)(lVar24 + 0x38) + uVar6 * 0x10);
    *puVar27 = uVar7;
    puVar27[1] = uVar9;
    if (SCARRY8(*(long *)(lVar24 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1018e5d5c);
      (*pcVar5)();
    }
    *(long *)(lVar24 + 0x10) = *(long *)(lVar24 + 0x10) + 1;
    func_0x000107c61574(lVar24);
    func_0x0001018e61b8(&uStack_110,0x112d38308,&UNK_10d902040);
    uVar7 = 0x112d550a0;
    func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
    uStack_a0 = 0x6e6f69746361;
    uStack_98 = 0xe600000000000000;
    lVar8 = 1;
    lStack_c0 = lVar24;
    uStack_a8 = uVar7;
    func_0x000107c60498();
    func_0x000107c6157c();
    uVar17 = uRam0000000112dd0bf8;
    uVar9 = uRam0000000112dd0bf0;
    uVar4 = uRam0000000112dd0be8;
    uVar16 = uRam0000000112dd0be0;
    func_0x000107c61434(uRam0000000112dd0be8);
    func_0x000107c61434(uVar17);
    uVar6 = uVar16;
    uVar23 = uVar4;
    func_0x000100029284();
    if ((uVar23 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1018e5d60);
      (*pcVar5)();
    }
    lVar24 = lVar8 + (uVar6 >> 6) * 8;
    *(ulong *)(lVar24 + 0x40) = *(ulong *)(lVar24 + 0x40) | 1L << (uVar6 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar6 * 0x10);
    *puVar1 = uVar16;
    puVar1[1] = uVar4;
    puVar27 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar6 * 0x10);
    *puVar27 = uVar9;
    puVar27[1] = uVar17;
    if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1018e5d64);
      (*pcVar5)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
    func_0x000107c61574(lVar8);
    func_0x0001018e61b8(0x112dd0be0,0x112d38308,&UNK_10d902040);
    lVar24 = 2;
    lStack_90 = lVar8;
    uStack_78 = uVar7;
    func_0x000107c60498();
    func_0x000107c6157c();
    func_0x0001018e6170(&uStack_d0,&uStack_160,0x112d4b5f0,&UNK_10d9127d0);
    uVar16 = CONCAT17(uStack_159,
                      CONCAT16(uStack_15a,
                               CONCAT15(uStack_15b,
                                        CONCAT14(uStack_15c,
                                                 CONCAT13(uStack_15d,
                                                          CONCAT12(uStack_15e,
                                                                   CONCAT11(uStack_15f,uStack_160)))
                                                ))));
    uVar4 = CONCAT26(uStack_152,
                     CONCAT15(uStack_153,
                              CONCAT14(uStack_154,
                                       CONCAT13(uStack_155,
                                                CONCAT12(uStack_156,CONCAT11(uStack_157,uStack_158))
                                               ))));
    uVar6 = uVar16;
    uVar23 = uVar4;
    func_0x000100029284();
    if ((uVar23 & 1) != 0) {
LAB_1018e5c38:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1018e5c3c);
      (*pcVar5)();
    }
    lVar8 = lVar24 + 0x40;
    uVar23 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar8 + uVar23) = *(ulong *)(lVar8 + uVar23) | 1L << (uVar6 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar24 + 0x30) + uVar6 * 0x10);
    *puVar1 = uVar16;
    puVar1[1] = uVar4;
    func_0x000100102924(auStack_150,*(long *)(lVar24 + 0x38) + uVar6 * 0x20);
    if (SCARRY8(*(long *)(lVar24 + 0x10),1)) {
LAB_1018e5c3c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1018e5c40);
      (*pcVar5)();
    }
    *(long *)(lVar24 + 0x10) = *(long *)(lVar24 + 0x10) + 1;
    func_0x0001018e6170(&uStack_a0,&uStack_160,0x112d4b5f0,&UNK_10d9127d0);
    uVar16 = CONCAT17(uStack_159,
                      CONCAT16(uStack_15a,
                               CONCAT15(uStack_15b,
                                        CONCAT14(uStack_15c,
                                                 CONCAT13(uStack_15d,
                                                          CONCAT12(uStack_15e,
                                                                   CONCAT11(uStack_15f,uStack_160)))
                                                ))));
    uVar4 = CONCAT26(uStack_152,
                     CONCAT15(uStack_153,
                              CONCAT14(uStack_154,
                                       CONCAT13(uStack_155,
                                                CONCAT12(uStack_156,CONCAT11(uStack_157,uStack_158))
                                               ))));
    uVar6 = uVar16;
    uVar23 = uVar4;
    func_0x000100029284();
    if ((uVar23 & 1) != 0) goto LAB_1018e5c38;
    uVar23 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar8 + uVar23) = *(ulong *)(lVar8 + uVar23) | 1L << (uVar6 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar24 + 0x30) + uVar6 * 0x10);
    *puVar1 = uVar16;
    puVar1[1] = uVar4;
    func_0x000100102924(auStack_150,*(long *)(lVar24 + 0x38) + uVar6 * 0x20);
    if (SCARRY8(*(long *)(lVar24 + 0x10),1)) goto LAB_1018e5c3c;
    *(long *)(lVar24 + 0x10) = *(long *)(lVar24 + 0x10) + 1;
    func_0x000107c61574(lVar24);
    uVar9 = 0x112d4b5f0;
    func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
    func_0x000107c61408(&uStack_d0,2);
    uVar16 = *(ulong *)(puVar12 + 0x10);
    puStack_260 = puVar12;
    if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar16) {
      func_0x000101395f90(1 < *(ulong *)(puVar12 + 0x18),uVar16 + 1,1);
    }
    *(ulong *)(puStack_260 + 0x10) = uVar16 + 1;
    *(long *)(puStack_260 + uVar16 * 8 + 0x20) = lVar24;
    lVar24 = 1;
    bVar2 = !bVar21;
    puVar12 = puStack_260;
    bVar21 = true;
  } while (bVar2);
  lVar24 = *(long *)(param_1 + 0x10);
  if (lVar24 != 0) {
    lVar8 = 0;
    do {
      puVar27 = (undefined8 *)(param_1 + 0x20 + lVar8 * 0x10);
      lVar8 = lVar8 + 1;
      uVar17 = *puVar27;
      uVar20 = puVar27[1];
      func_0x000107c5fb1c();
      uStack_160 = (undefined1)uVar17;
      uStack_15f = (undefined1)((ulong)uVar17 >> 8);
      uStack_15e = (undefined1)((ulong)uVar17 >> 0x10);
      uStack_15d = (undefined1)((ulong)uVar17 >> 0x18);
      uStack_15c = (undefined1)((ulong)uVar17 >> 0x20);
      uStack_15b = (undefined1)((ulong)uVar17 >> 0x28);
      uStack_15a = (undefined1)((ulong)uVar17 >> 0x30);
      uStack_159 = (undefined1)((ulong)uVar17 >> 0x38);
      uStack_158 = (undefined1)uVar20;
      uStack_157 = (undefined1)((ulong)uVar20 >> 8);
      uStack_156 = (undefined1)((ulong)uVar20 >> 0x10);
      uStack_155 = (undefined1)((ulong)uVar20 >> 0x18);
      uStack_154 = (undefined1)((ulong)uVar20 >> 0x20);
      uStack_153 = (undefined1)((ulong)uVar20 >> 0x28);
      uStack_152 = (undefined2)((ulong)uVar20 >> 0x30);
      puStack_260 = (undefined *)0x2e;
      uStack_258 = 0xe100000000000000;
      puStack_270 = (undefined *)0x2e5c;
      puStack_268 = (undefined *)0xe200000000000000;
      func_0x000100e8b654();
      ppuVar10 = &puStack_260;
      ppuVar18 = &puStack_270;
      func_0x000107c601fc(ppuVar10,ppuVar18,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                          PTR___sSSN_11034da80,uVar17,uVar17,uVar17);
      func_0x000107c6142c(uVar20);
      lVar25 = 0;
      puVar13 = puVar12;
      bVar21 = false;
      do {
        uVar17 = *(undefined8 *)(lVar25 * 0x10 + 0x112dd0b98);
        uVar20 = *(undefined8 *)(lVar25 * 0x10 + 0x112dd0ba0);
        uStack_1c0 = 0x72656767697274;
        uStack_1b8 = 0xe700000000000000;
        uStack_200 = 0x746c69662d6c7275;
        uStack_1f8 = 0xea00000000007265;
        uStack_160 = 0;
        uStack_15f = 0;
        uStack_15e = 0;
        uStack_15d = 0;
        uStack_15c = 0;
        uStack_15b = 0;
        uStack_15a = 0;
        uStack_159 = 0;
        uStack_158 = 0;
        uStack_157 = 0;
        uStack_156 = 0;
        uStack_155 = 0;
        uStack_154 = 0;
        uStack_153 = 0;
        uStack_152 = 0xe000;
        func_0x000107c61434(uVar20);
        func_0x000107c602fc(0x13);
        func_0x000107c6142c(CONCAT26(uStack_152,
                                     CONCAT15(uStack_153,
                                              CONCAT14(uStack_154,
                                                       CONCAT13(uStack_155,
                                                                CONCAT12(uStack_156,
                                                                         CONCAT11(uStack_157,
                                                                                  uStack_158)))))));
        uStack_160 = 0x5e;
        uStack_15f = 0;
        uStack_15e = 0;
        uStack_15d = 0;
        uStack_15c = 0;
        uStack_15b = 0;
        uStack_15a = 0;
        uStack_159 = 0;
        uStack_158 = 0;
        uStack_157 = 0;
        uStack_156 = 0;
        uStack_155 = 0;
        uStack_154 = 0;
        uStack_153 = 0;
        uStack_152 = 0xe100;
        func_0x000107c5fb78(uVar17,uVar20);
        func_0x000107c6142c(uVar20);
        func_0x000107c5fb78(0x2f2f3a,0xe300000000000000);
        func_0x000107c5fb78(ppuVar10,ppuVar18);
        func_0x000107c5fb78(0x2b5d392d305b3a28,0xeb000000002f3f29);
        uStack_1f0 = CONCAT17(uStack_159,
                              CONCAT16(uStack_15a,
                                       CONCAT15(uStack_15b,
                                                CONCAT14(uStack_15c,
                                                         CONCAT13(uStack_15d,
                                                                  CONCAT12(uStack_15e,
                                                                           CONCAT11(uStack_15f,
                                                                                    uStack_160))))))
                             );
        uStack_1e8 = CONCAT26(uStack_152,
                              CONCAT15(uStack_153,
                                       CONCAT14(uStack_154,
                                                CONCAT13(uStack_155,
                                                         CONCAT12(uStack_156,
                                                                  CONCAT11(uStack_157,uStack_158))))
                                      ));
        lVar25 = 1;
        func_0x000107c60498();
        func_0x000107c6157c();
        uVar20 = uStack_1e8;
        uVar17 = uStack_1f0;
        uVar4 = uStack_1f8;
        uVar16 = uStack_200;
        func_0x000107c61434(uStack_1f8);
        func_0x000107c61434(uVar20);
        uVar6 = uVar16;
        uVar23 = uVar4;
        func_0x000100029284();
        if ((uVar23 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1018e5c2c);
          (*pcVar5)();
        }
        lVar11 = lVar25 + (uVar6 >> 6) * 8;
        *(ulong *)(lVar11 + 0x40) = *(ulong *)(lVar11 + 0x40) | 1L << (uVar6 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar25 + 0x30) + uVar6 * 0x10);
        *puVar1 = uVar16;
        puVar1[1] = uVar4;
        puVar27 = (undefined8 *)(*(long *)(lVar25 + 0x38) + uVar6 * 0x10);
        *puVar27 = uVar17;
        puVar27[1] = uVar20;
        if (SCARRY8(*(long *)(lVar25 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1018e5c30);
          (*pcVar5)();
        }
        *(long *)(lVar25 + 0x10) = *(long *)(lVar25 + 0x10) + 1;
        func_0x000107c61574(lVar25);
        func_0x0001018e61b8(&uStack_200,0x112d38308,&UNK_10d902040);
        uStack_190 = 0x6e6f69746361;
        uStack_188 = 0xe600000000000000;
        lVar11 = 1;
        lStack_1b0 = lVar25;
        uStack_198 = uVar7;
        func_0x000107c60498();
        func_0x000107c6157c();
        puVar12 = PTR_s_Invalid_playable____URL_112dd0c40;
        uVar17 = uRam0000000112dd0c38;
        uVar4 = uRam0000000112dd0c30;
        uVar16 = uRam0000000112dd0c28;
        func_0x000107c61434(uRam0000000112dd0c30);
        func_0x000107c61434(puVar12);
        uVar6 = uVar16;
        uVar23 = uVar4;
        func_0x000100029284();
        if ((uVar23 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1018e5c34);
          (*pcVar5)();
        }
        lVar25 = lVar11 + (uVar6 >> 6) * 8;
        *(ulong *)(lVar25 + 0x40) = *(ulong *)(lVar25 + 0x40) | 1L << (uVar6 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar11 + 0x30) + uVar6 * 0x10);
        *puVar1 = uVar16;
        puVar1[1] = uVar4;
        puVar27 = (undefined8 *)(*(long *)(lVar11 + 0x38) + uVar6 * 0x10);
        *puVar27 = uVar17;
        puVar27[1] = puVar12;
        if (SCARRY8(*(long *)(lVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1018e5c38);
          (*pcVar5)();
        }
        *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
        func_0x000107c61574(lVar11);
        func_0x0001018e61b8(0x112dd0c28,0x112d38308,&UNK_10d902040);
        lVar25 = 2;
        lStack_180 = lVar11;
        uStack_168 = uVar7;
        func_0x000107c60498();
        func_0x000107c6157c();
        func_0x0001018e6170(&uStack_1c0,&uStack_160,0x112d4b5f0,&UNK_10d9127d0);
        uVar16 = CONCAT17(uStack_159,
                          CONCAT16(uStack_15a,
                                   CONCAT15(uStack_15b,
                                            CONCAT14(uStack_15c,
                                                     CONCAT13(uStack_15d,
                                                              CONCAT12(uStack_15e,
                                                                       CONCAT11(uStack_15f,
                                                                                uStack_160)))))));
        uVar4 = CONCAT26(uStack_152,
                         CONCAT15(uStack_153,
                                  CONCAT14(uStack_154,
                                           CONCAT13(uStack_155,
                                                    CONCAT12(uStack_156,
                                                             CONCAT11(uStack_157,uStack_158))))));
        uVar6 = uVar16;
        uVar23 = uVar4;
        func_0x000100029284();
        if ((uVar23 & 1) != 0) {
LAB_1018e5ba0:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1018e5ba4);
          (*pcVar5)();
        }
        lVar11 = lVar25 + 0x40;
        uVar23 = uVar6 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(lVar11 + uVar23) = *(ulong *)(lVar11 + uVar23) | 1L << (uVar6 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar25 + 0x30) + uVar6 * 0x10);
        *puVar1 = uVar16;
        puVar1[1] = uVar4;
        func_0x000100102924(auStack_150,*(long *)(lVar25 + 0x38) + uVar6 * 0x20);
        if (SCARRY8(*(long *)(lVar25 + 0x10),1)) {
LAB_1018e5ba4:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1018e5ba8);
          (*pcVar5)();
        }
        *(long *)(lVar25 + 0x10) = *(long *)(lVar25 + 0x10) + 1;
        func_0x0001018e6170(&uStack_190,&uStack_160,0x112d4b5f0,&UNK_10d9127d0);
        uVar16 = CONCAT17(uStack_159,
                          CONCAT16(uStack_15a,
                                   CONCAT15(uStack_15b,
                                            CONCAT14(uStack_15c,
                                                     CONCAT13(uStack_15d,
                                                              CONCAT12(uStack_15e,
                                                                       CONCAT11(uStack_15f,
                                                                                uStack_160)))))));
        uVar4 = CONCAT26(uStack_152,
                         CONCAT15(uStack_153,
                                  CONCAT14(uStack_154,
                                           CONCAT13(uStack_155,
                                                    CONCAT12(uStack_156,
                                                             CONCAT11(uStack_157,uStack_158))))));
        uVar6 = uVar16;
        uVar23 = uVar4;
        func_0x000100029284();
        if ((uVar23 & 1) != 0) goto LAB_1018e5ba0;
        uVar23 = uVar6 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(lVar11 + uVar23) = *(ulong *)(lVar11 + uVar23) | 1L << (uVar6 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar25 + 0x30) + uVar6 * 0x10);
        *puVar1 = uVar16;
        puVar1[1] = uVar4;
        func_0x000100102924(auStack_150,*(long *)(lVar25 + 0x38) + uVar6 * 0x20);
        if (SCARRY8(*(long *)(lVar25 + 0x10),1)) goto LAB_1018e5ba4;
        *(long *)(lVar25 + 0x10) = *(long *)(lVar25 + 0x10) + 1;
        func_0x000107c61574(lVar25);
        func_0x000107c61408(&uStack_1c0,2,uVar9);
        uVar16 = *(ulong *)(puVar13 + 0x10);
        puVar12 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar16) {
          puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
          FUN_1018e5000(puVar12,uVar16 + 1,1,puVar13,PTR__swift_bridgeObjectRelease_11034f258);
        }
        *(ulong *)(puVar12 + 0x10) = uVar16 + 1;
        *(long *)(puVar12 + uVar16 * 8 + 0x20) = lVar25;
        lVar25 = 1;
        bVar2 = !bVar21;
        puVar13 = puVar12;
        bVar21 = true;
      } while (bVar2);
      func_0x000107c6142c(ppuVar18);
    } while (lVar8 != lVar24);
  }
  puVar15 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  puVar13 = (undefined *)0x112d472a8;
  func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
  puVar19 = puVar12;
  func_0x000107c5fc48(puVar12);
  uStack_160 = 0;
  uStack_15f = 0;
  uStack_15e = 0;
  uStack_15d = 0;
  uStack_15c = 0;
  uStack_15b = 0;
  uStack_15a = 0;
  uStack_159 = 0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar19);
  uVar7 = CONCAT17(uStack_159,
                   CONCAT16(uStack_15a,
                            CONCAT15(uStack_15b,
                                     CONCAT14(uStack_15c,
                                              CONCAT13(uStack_15d,
                                                       CONCAT12(uStack_15e,
                                                                CONCAT11(uStack_15f,uStack_160))))))
                  );
  func_0x000107c61174();
  if (puVar15 == (undefined *)0x0) {
    uVar9 = uVar7;
    func_0x000107c5ed30();
    func_0x000107c61170(uVar7);
    func_0x000107c61654();
    func_0x000107c614ac(uVar9);
    func_0x000107c6142c(puVar12);
    puVar19 = (undefined *)0xe200000000000000;
    puVar15 = (undefined *)0x5d5b;
    goto LAB_1018e5d9c;
  }
  puVar14 = puVar15;
  func_0x000107c5ee30();
  func_0x000107c61170();
  uVar3 = (uint)((ulong)puVar13 >> 0x20);
  uVar22 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar22 == 0) {
      uStack_160 = SUB81(puVar14,0);
      uStack_15f = (undefined1)((ulong)puVar14 >> 8);
      uStack_15e = (undefined1)((ulong)puVar14 >> 0x10);
      uStack_15d = (undefined1)((ulong)puVar14 >> 0x18);
      uStack_15c = (undefined1)((ulong)puVar14 >> 0x20);
      uStack_15b = (undefined1)((ulong)puVar14 >> 0x28);
      uStack_15a = (undefined1)((ulong)puVar14 >> 0x30);
      uStack_159 = (undefined1)((ulong)puVar14 >> 0x38);
      uStack_158 = SUB81(puVar13,0);
      uStack_157 = (undefined1)((ulong)puVar13 >> 8);
      uStack_156 = (undefined1)((ulong)puVar13 >> 0x10);
      uStack_155 = (undefined1)((ulong)puVar13 >> 0x18);
      uStack_154 = (undefined1)((ulong)puVar13 >> 0x20);
      puVar19 = (undefined *)((ulong)puVar13 >> 0x30 & 0xff);
      uStack_153 = (undefined1)((ulong)puVar13 >> 0x28);
      goto LAB_1018e5c20;
    }
    lVar24 = (long)(int)puVar14;
    puVar26 = (undefined *)(((long)puVar14 >> 0x20) - lVar24);
    if ((long)puVar14 >> 0x20 < lVar24) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1018e5dd8);
      (*pcVar5)();
    }
    func_0x000107c5ec30();
    if (puVar15 != (undefined *)0x0) {
      puVar19 = puVar15;
      func_0x000107c5ec3c();
      if (SBORROW8(lVar24,(long)puVar19)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1018e5de0);
        (*pcVar5)();
      }
      puVar15 = puVar15 + (lVar24 - (long)puVar19);
      goto LAB_1018e5bdc;
    }
    func_0x000107c5ec38();
LAB_1018e5c48:
    puVar15 = (undefined *)0x0;
    puVar19 = (undefined *)0x0;
    func_0x000107c5fb50();
joined_r0x0001018e5bf8:
    if (puVar19 == (undefined *)0x0) {
      puStack_230 = puVar14;
      puStack_228 = puVar13;
      func_0x00010006c00c(puVar14,puVar13);
      uVar7 = 0x112dd0c48;
      func_0x0001000285a8(0x112dd0c48,&UNK_10dca5e20);
      ppuVar10 = &puStack_260;
      func_0x000107c6147c(ppuVar10,&puStack_230,PTR___s10Foundation4DataVN_110350ae0,uVar7,6);
      if (((ulong)ppuVar10 & 1) == 0) {
        uStack_240 = 0;
        uStack_258 = 0;
        puStack_260 = (undefined *)0x0;
        uStack_248 = 0;
        uStack_250 = 0;
        func_0x0001018e61b8(&puStack_260,0x112dd0c50,&UNK_10d9920d0);
      }
      else {
        FUN_1018e61f8(&puStack_260,&uStack_160);
        uVar7 = uStack_140;
        uVar16 = uStack_148;
        func_0x0001000a8868(&uStack_160,uStack_148);
        func_0x000107c604a4(uVar16,uVar7);
        if ((uVar16 & 1) != 0) {
          func_0x0001000a8868(&uStack_160,uStack_148);
          func_0x000107c604a0(&puStack_270,FUN_1018e4fc8,0,PTR___sSSN_11034da80,uStack_148,
                              uStack_140);
          func_0x00010006c090(puVar14,puVar13);
          func_0x0001000834e4(&uStack_160);
          func_0x000107c6142c(puVar12);
          puVar15 = puStack_270;
          puVar19 = puStack_268;
          goto LAB_1018e5d9c;
        }
        func_0x0001000834e4(&uStack_160);
      }
      puVar15 = puVar14;
      puVar19 = puVar13;
      FUN_1018e4f60();
    }
  }
  else {
    if (uVar22 == 2) {
      lVar24 = *(long *)(puVar14 + 0x10);
      lVar8 = *(long *)(puVar14 + 0x18);
      func_0x000107c5ec30();
      puVar19 = puVar15;
      if (puVar15 != (undefined *)0x0) {
        func_0x000107c5ec3c();
        if (SBORROW8(lVar24,(long)puVar19)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1018e5ddc);
          (*pcVar5)();
        }
        puVar15 = puVar15 + (lVar24 - (long)puVar19);
      }
      puVar26 = (undefined *)(lVar8 - lVar24);
      if (SBORROW8(lVar8,lVar24)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1018e5ba0);
        (*pcVar5)();
      }
LAB_1018e5bdc:
      func_0x000107c5ec38();
      if (puVar15 == (undefined *)0x0) goto LAB_1018e5c48;
      if ((long)puVar26 <= (long)puVar19) {
        puVar19 = puVar26;
      }
      func_0x000107c5fb50();
      goto joined_r0x0001018e5bf8;
    }
    uStack_158 = 0;
    uStack_157 = 0;
    uStack_156 = 0;
    uStack_155 = 0;
    uStack_154 = 0;
    uStack_153 = 0;
    uStack_160 = 0;
    uStack_15f = 0;
    uStack_15e = 0;
    uStack_15d = 0;
    uStack_15c = 0;
    uStack_15b = 0;
    uStack_15a = 0;
    uStack_159 = 0;
    puVar19 = (undefined *)0x0;
LAB_1018e5c20:
    puVar15 = &uStack_160;
    func_0x000107c5fb50();
  }
  func_0x00010006c090(puVar14,puVar13);
  func_0x000107c6142c(puVar12);
LAB_1018e5d9c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    auVar28._8_8_ = puVar19;
    auVar28._0_8_ = puVar15;
    return auVar28;
  }
  func_0x000107c60e78(puVar15,puVar19);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar24 = *(long *)(puVar15 + 0x10);
  if (lVar24 != 0) {
    func_0x000100403514(0,lVar24,0);
    puVar27 = (undefined8 *)(puVar15 + 0x28);
    do {
      uVar7 = puVar27[-1];
      uVar9 = *puVar27;
      func_0x000107c61434(uVar9);
      func_0x000107c5fb78(uVar7,uVar9);
      func_0x000107c5fb78(0x22,0xe100000000000000);
      func_0x000107c6142c(uVar9);
      uVar16 = *(ulong *)(puVar12 + 0x10);
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar16) {
        func_0x000100403514(1 < *(ulong *)(puVar12 + 0x18),uVar16 + 1,1);
      }
      puVar27 = puVar27 + 2;
      *(ulong *)(puVar12 + 0x10) = uVar16 + 1;
      *(undefined8 *)(puVar12 + uVar16 * 0x10 + 0x20) = 0x22;
      *(undefined8 *)(puVar12 + uVar16 * 0x10 + 0x28) = 0xe100000000000000;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  uVar7 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar9 = uVar7;
  func_0x00010011d734();
  uVar17 = 0x202c;
  uVar20 = 0xe200000000000000;
  func_0x000107c5fa80(0x202c,0xe200000000000000,uVar7,uVar9);
  func_0x000107c6142c(puVar12);
  func_0x000107c602fc(0xc3);
  func_0x000107c5fb78(0xd000000000000065,0x800000010efbf850);
  func_0x000107c5fb78(uVar17,uVar20);
  func_0x000107c6142c(uVar20);
  func_0x000107c5fb78(0xd00000000000005c,0x800000010efbf8c0);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 1018e5fb0; end: 1018e611f;  */

undefined8 FUN_1018e5fb0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  FUN_1018e4b30(0);
  lVar1 = param_1;
  func_0x000107c61480(param_1,uVar3);
  uVar3 = 0;
  if ((lVar1 != 0) && (param_3 != 0)) {
    func_0x000107c61174(param_1);
    func_0x000107c5edd0(puVar5,param_2,param_3);
    puVar4 = puVar5;
    (**(code **)(lVar7 + 0x30))(puVar5,1,lVar2);
    if ((int)puVar4 == 1) {
      func_0x000107c61170(param_1);
      func_0x0001018e61b8(puVar5,0x112d36580,&UNK_10d9016d0);
      uVar3 = 0;
    }
    else {
      (**(code **)(lVar7 + 0x20))(lVar6,puVar5,lVar2);
      FUN_1018e4324(lVar6);
      func_0x000107c61170(param_1);
      (**(code **)(lVar7 + 8))(lVar6,lVar2);
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* Entry: 1018e6120; end: 1018e616f;  */

void FUN_1018e6120(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar6 = 0;
  func_0x000107c5ede0();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar3 = unaff_x20 + (uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff));
  lVar1 = 0;
  func_0x000107c5ede0(0,param_2);
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = auStack_a8 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0;
  func_0x000107c5eb08();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_1 != 0) {
    lStack_b0 = lVar3;
    func_0x000107c61428(lVar6 + 0x10,auStack_90,0,0);
    lVar3 = lVar6 + 0x10;
    func_0x000107c61618();
    func_0x000107c61174(param_1);
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c40110(lVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
      func_0x000107c5d90c(lVar4);
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      func_0x000107c4fe70(lVar3);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61428(lVar6 + 0x10,auStack_a8,0,0);
    lVar3 = lVar6 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c40110();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
      func_0x000107c5d90c(lVar4);
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      func_0x000107c3d640(lVar3);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170(param_1);
    lVar3 = lStack_b0;
  }
  func_0x000107c61428(lVar6 + 0x10,auStack_78,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    (**(code **)(lVar8 + 0x10))(puVar5,lVar3,lVar1);
    func_0x000107c5eaec(lVar9,0x404e000000000000,puVar5,0);
    func_0x000107c5eae0();
    (**(code **)(lVar10 + 8))(lVar9,lVar2);
    lVar3 = lVar6;
    func_0x000107c4b768(lVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1018e6170; end: 1018e61f7;  */

undefined8 FUN_1018e6170(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1018e61f8; end: 1018e6243;  */

undefined8 * FUN_1018e61f8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1018e6244; end: 1018e6333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e6244(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lStack_68;
  long lStack_60;
  undefined *apuStack_58 [3];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  puVar3 = PTR__OBJC_CLASS___CMMotionManager_1126b78a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar4 = 0;
  FUN_1018e66c4();
  ppuStack_38 = &PTR_DAT_11040e540;
  lVar5 = 0;
  apuStack_58[0] = puVar3;
  uStack_40 = uVar4;
  FUN_1018e2354();
  lVar6 = lVar5;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar6 + _DAT_112dd0910);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = lVar6 + _DAT_112dd0918;
  *(undefined8 *)(lVar2 + 8) = 0;
  func_0x000107c61614(lVar2,0);
  FUN_1018e6708(apuStack_58,lVar6 + _DAT_112dd0900);
  puVar1 = (undefined8 *)(lVar6 + _DAT_112dd0908);
  *puVar1 = FUN_1018e1a58;
  puVar1[1] = 0;
  plVar7 = &lStack_68;
  lStack_68 = lVar6;
  lStack_60 = lVar5;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  func_0x0001000834e4(apuStack_58);
  param_1[3] = lVar5;
  param_1[4] = (long)&PTR_DAT_11040e588;
  *param_1 = (long)plVar7;
  return;
}



/* Entry: 1018e6334; end: 1018e65db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1018e6334(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined **ppuVar11;
  long *plVar12;
  long unaff_x20;
  undefined1 auVar13 [16];
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  undefined **ppuStack_58;
  
  plVar12 = &lStack_90;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    uVar5 = 0;
    FUN_1018e3888();
    uVar6 = uVar5;
    func_0x000107c613fc();
    ppuStack_58 = &PTR_DAT_11040e778;
    auStack_78[0] = uVar6;
    uStack_60 = uVar5;
  }
  else {
    (**(code **)(unaff_x20 + 0x28))(auStack_78);
  }
  lVar7 = 0;
  func_0x0001018e6c98();
  lVar8 = lVar7;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar8 + _DAT_112dd0e40);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  lVar4 = _DAT_112dd0e48;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c6157c(uVar3);
  func_0x000107c46ed0();
  lVar10 = 0x112dd0d28;
  puStack_80 = puVar9;
  func_0x0001000285a8(0x112dd0d28,&UNK_10d992170);
  func_0x000107c613fc();
  ppuVar11 = &puStack_80;
  func_0x00010042e6a0();
  *(undefined ***)(lVar8 + lVar4) = ppuVar11;
  lVar4 = _DAT_112dd0e50;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  puStack_80 = puVar9;
  func_0x000107c613fc(lVar10,*(undefined4 *)(lVar10 + 0x30),*(undefined2 *)(lVar10 + 0x34));
  ppuVar11 = &puStack_80;
  func_0x00010042e6a0();
  *(undefined ***)(lVar8 + lVar4) = ppuVar11;
  *(undefined1 *)(lVar8 + _DAT_112dd0e58) = 0;
  *(undefined1 *)(lVar8 + _DAT_112dd0e60) = 0;
  *(undefined1 *)(lVar8 + _DAT_112dd0e68) = 0;
  lVar10 = lVar8 + _DAT_112dd0e70;
  *(undefined8 *)(lVar10 + 8) = 0;
  func_0x000107c61614(lVar10,0);
  *(undefined8 *)(lVar8 + _DAT_112dd0e20) = uVar2;
  *(undefined8 *)(lVar8 + _DAT_112dd0e28) = uVar3;
  FUN_1018e6708(auStack_78,lVar8 + _DAT_112dd0e30);
  puVar1 = (undefined8 *)(lVar8 + _DAT_112dd0e38);
  *puVar1 = FUN_1018e66bc;
  puVar1[1] = uVar3;
  puVar9 = PTR_s_init_1125d9248;
  lStack_90 = lVar8;
  lStack_88 = lVar7;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_90,puVar9);
  func_0x0001000834e4(auStack_78);
  auVar13._8_8_ = &PTR_DAT_11040ea48;
  auVar13._0_8_ = plVar12;
  return auVar13;
}



/* Entry: 1018e65dc; end: 1018e662f;  */

void FUN_1018e65dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018e6630; end: 1018e6693;  */

void FUN_1018e6630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1018e4b30(0);
  FUN_1018e38b0(param_1,param_2,param_3,param_4,param_5,uVar1);
  return;
}



/* Entry: 1018e6694; end: 1018e66bb;  */

void FUN_1018e6694(void)

{
  FUN_1018e6334();
  return;
}



/* Entry: 1018e66bc; end: 1018e66c3;  */

void FUN_1018e66bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  uVar1 = 0;
  FUN_1018e4b30();
  func_0x000107c610f8();
  func_0x000107c615f0(param_2);
  func_0x000107c6157c();
  func_0x000107c615f0(param_3);
  FUN_1018e3bd8();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_11040e798;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1018e66c4; end: 1018e6707;  */

void FUN_1018e66c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd0d30 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___CMMotionManager_1126b78a8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dd0d30 = puVar1;
  return;
}



/* Entry: 1018e6708; end: 1018e674b;  */

long FUN_1018e6708(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1018e674c; end: 1018e67eb;  */

void FUN_1018e674c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 1018e67ec; end: 1018e67f3;  */

void FUN_1018e67ec(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1018e67e8);
    (*pcVar1)();
  }
  lVar2 = lVar3;
  func_0x000107c509b4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar3);
  if (lVar2 != 0) {
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018e67ec);
  (*pcVar1)();
}



/* Entry: 1018e67f4; end: 1018e689b;  */

/* WARNING: Possible PIC construction at 0x0001018e6880: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018e6884) */

void FUN_1018e67f4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c61168();
  func_0x000107c4f2b0();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4a758();
  func_0x000107c61170(puVar1);
  lVar3 = 0;
  func_0x0001018e6610();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = param_2;
  *(undefined8 *)(lVar4 + 0x18) = param_3;
  *(char *)(lVar4 + 0x20) = (char)puVar2;
  *(code **)(lVar4 + 0x28) = FUN_1018e6244;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_11040e980;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1018e689c; end: 1018e68a3;  */

/* WARNING: Possible PIC construction at 0x0001018e6880: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018e6884) */

void FUN_1018e689c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c61168();
  func_0x000107c4f2b0();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c4a758();
  func_0x000107c61170(puVar3);
  lVar5 = 0;
  func_0x0001018e6610();
  lVar6 = lVar5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = uVar1;
  *(undefined8 *)(lVar6 + 0x18) = uVar2;
  *(char *)(lVar6 + 0x20) = (char)puVar4;
  *(code **)(lVar6 + 0x28) = FUN_1018e6244;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  param_1[3] = lVar5;
  param_1[4] = (long)&PTR_DAT_11040e980;
  *param_1 = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1018e68a4; end: 1018e68bf;  */

/* WARNING: Possible PIC construction at 0x0001018e68b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018e68b4) */

void FUN_1018e68a4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1018e68c0; end: 1018e692f;  */

void FUN_1018e68c0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018e6930; end: 1018e6aa3;  */

/* WARNING: Removing unreachable block (ram,0x0001018e6a08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e6930(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [40];
  
  lVar3 = _DAT_112dd0e40;
  func_0x000107c61428(unaff_x20 + _DAT_112dd0e40,auStack_90,0,0);
  FUN_1018e8e7c(unaff_x20 + lVar3,auStack_b8,0x112dd0ea0,&UNK_10d992228);
  if (lStack_a0 == 0) {
    func_0x0001018e8ec4(auStack_b8,0x112dd0ea0,&UNK_10d992228);
    lVar5 = unaff_x20;
    (**(code **)(unaff_x20 + _DAT_112dd0e38))(param_1);
    uVar4 = 0;
    FUN_1018e2828(0);
    FUN_1018e2af0();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x0001000a8868(param_1,uVar1);
    (**(code **)(lVar2 + 0x10))(uVar4,lVar5,uVar1,lVar2);
    func_0x000107c6142c(lVar5);
    FUN_1018e8f6c(param_1,auStack_78);
    func_0x000107c61428(unaff_x20 + lVar3,auStack_b8,0x21,0);
    func_0x0001018e8f04(auStack_78,unaff_x20 + lVar3);
    func_0x000107c614a8(auStack_b8);
  }
  else {
    FUN_1018e8f54(auStack_b8,auStack_78);
    FUN_1018e8f54(auStack_78,param_1);
  }
  return;
}



/* Entry: 1018e6aa4; end: 1018e6b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e6aa4(void)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  FUN_1018e8f6c(unaff_x20 + _DAT_112dd0e30,auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x10))(uStack_40,lStack_38);
  func_0x0001000834e4();
  func_0x0001018e6c98();
  func_0x000107c61154(&stack0xffffffffffffff98,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1018e6b28; end: 1018e6bbf; -[_TtC38AdPlayableWebViewFactoryImplementation27AdPlayableWebViewInteractor dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e6b28(long param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lStack_78;
  undefined1 *puStack_70;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  FUN_1018e8f6c(param_1 + _DAT_112dd0e30,auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  pcVar2 = *(code **)(lStack_48 + 0x10);
  func_0x000107c61174();
  (*pcVar2)(uStack_50,lStack_48);
  puVar1 = auStack_68;
  func_0x0001000834e4();
  func_0x0001018e6c98();
  lStack_78 = param_1;
  puStack_70 = puVar1;
  func_0x000107c61154(&lStack_78,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1018e6bc0; end: 1018e6c6b; -[_TtC38AdPlayableWebViewFactoryImplementation27AdPlayableWebViewInteractor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1018e6bc0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dd0e20));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dd0e28));
  func_0x0001000834e4(param_1 + _DAT_112dd0e30);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dd0e38 + 8));
  func_0x0001018e8ec4(param_1 + _DAT_112dd0e40,0x112dd0ea0,&UNK_10d992228);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dd0e48));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dd0e50));
  param_1 = param_1 + _DAT_112dd0e70;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1018e6c6c; end: 1018e6cb7; -[_TtC38AdPlayableWebViewFactoryImplementation27AdPlayableWebViewInteractor init] */

void FUN_1018e6c6c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlayableWebViewFactoryImplementation.AdPlayableWebViewInteractor",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018e6c98);
  (*pcVar1)();
}



/* Entry: 1018e6cb8; end: 1018e6e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1018e6cb8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&uStack_58);
  puVar4 = &UNK_11040eb00;
  puVar2 = puVar4;
  func_0x000107c613fc(&UNK_11040eb00,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x1018e8878;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_100f11710;
  puStack_70 = &UNK_11040eb18;
  ppuVar3 = &puStack_88;
  puStack_60 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_60);
  func_0x000107c613fc(&UNK_11040eb00,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  uStack_68 = 0x1018e889c;
  puStack_88 = puVar1;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_100f10508;
  puStack_70 = &UNK_11040eb40;
  ppuVar5 = &puStack_88;
  puStack_60 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_60);
  FUN_1018e4b30(0);
  func_0x000107c614e8();
  uVar6 = uStack_58;
  func_0x000107c4c214(uStack_58);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(uStack_58);
  return uVar6;
}



/* Entry: 1018e6e24; end: 1018e6ebf;  */

undefined8 FUN_1018e6e24(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_1018e6930(auStack_70);
    func_0x000107c61170(param_1);
    func_0x0001000a8868(auStack_70,uStack_58);
    uVar1 = uStack_58;
    (**(code **)(lStack_50 + 0x20))(uStack_58,lStack_50);
    func_0x0001000834e4(auStack_70);
  }
  return uVar1;
}



/* Entry: 1018e6ec0; end: 1018e700b;  */

void FUN_1018e6ec0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  if (param_1 != 0) {
    uVar2 = 0x6c7275;
    func_0x000107c5fadc(0x6c7275,0xe300000000000000);
    puVar3 = &UNK_11040eb00;
    func_0x000107c613fc(&UNK_11040eb00,0x18,7);
    func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618(param_2);
    func_0x000107c61614(puVar3 + 0x10,param_2);
    func_0x000107c61170(param_2);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_68 = (code *)0x1018e88a4;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_101137fac;
    puStack_70 = &UNK_11040eb68;
    ppuVar4 = &puStack_88;
    puStack_60 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_60);
    pcStack_68 = FUN_1018e7688;
    puStack_60 = (undefined *)0x0;
    puStack_88 = puVar1;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_101138058;
    puStack_70 = &UNK_11040eb90;
    ppuVar5 = &puStack_88;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c3e900(param_1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1018e700c; end: 1018e7687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1018e700c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  uint uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long lStack_130;
  ulong uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar14 = 0x112d7e680;
  lStack_118 = param_5;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d36580;
  lStack_120 = (long)&lStack_130 - extraout_x8;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  uVar9 = ((long)&lStack_130 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_128 = uVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = uVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar17 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar16 - extraout_x12_01;
  lVar3 = 0;
  func_0x000107c5ede0();
  lStack_108 = *(long *)(lVar3 + -8);
  lStack_100 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar12 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_110 = lVar12 - extraout_x12_02;
  uVar4 = 0;
  FUN_1018e4b30(0);
  lVar3 = param_1;
  func_0x000107c61480(param_1,uVar4);
  uVar10 = 0;
  if ((lVar3 == 0) || (param_3 == 0)) goto LAB_1018e7498;
  func_0x000107c61174();
  func_0x000107c5edd0(lVar13,param_2,param_3);
  lVar8 = lStack_100;
  lVar6 = lStack_108;
  pcVar11 = *(code **)(lStack_108 + 0x30);
  lVar5 = lVar13;
  (*pcVar11)(lVar13,1,lStack_100);
  if ((int)lVar5 == 1) {
    func_0x000107c61170(param_1);
    func_0x0001018e8ec4(lVar13,0x112d36580,&UNK_10d9016d0);
    uVar10 = 0;
    goto LAB_1018e7498;
  }
  pcVar15 = *(code **)(lVar6 + 0x20);
  lStack_130 = param_1;
  (*pcVar15)(lStack_110,lVar13,lVar8);
  lVar6 = lStack_118;
  func_0x000107c61428(lStack_118 + 0x10,auStack_80,0,0);
  lVar13 = lVar6 + 0x10;
  func_0x000107c61618();
  if ((lVar13 == 0) ||
     (bVar1 = *(byte *)(lVar13 + _DAT_112dd0e58), func_0x000107c61170(), (bVar1 & 1) == 0)) {
    func_0x000107c61428(lVar6 + 0x10,auStack_98,0,0);
    lVar6 = lVar6 + 0x10;
    func_0x000107c61618();
    if ((lVar6 != 0) &&
       (cVar2 = *(char *)(lVar6 + _DAT_112dd0e60), func_0x000107c61170(), cVar2 == '\x01'))
    goto LAB_1018e7294;
LAB_1018e7464:
    lVar14 = lStack_110;
    lVar3 = lStack_110;
    FUN_1018e4324(lStack_110);
    uVar10 = (uint)lVar3;
    func_0x000107c61170(lStack_130);
    (**(code **)(lStack_108 + 8))(lVar14,lVar8);
    goto LAB_1018e7498;
  }
LAB_1018e7294:
  lVar13 = _DAT_113803480;
  func_0x000107c61428(lVar3 + _DAT_113803480,auStack_b0,0,0);
  func_0x0001018e8e7c(lVar3 + lVar13,lVar16,0x112d36580,&UNK_10d9016d0);
  lVar3 = lStack_108;
  (**(code **)(lStack_108 + 0x10))(lVar17,lStack_110,lStack_100);
  (**(code **)(lVar3 + 0x38))(lVar17,0,1,lStack_100);
  lVar3 = lStack_120;
  lVar14 = (long)*(int *)(lVar14 + 0x30);
  func_0x0001018e8e7c(lVar16,lStack_120,0x112d36580,&UNK_10d9016d0);
  lVar8 = lStack_100;
  func_0x0001018e8e7c(lVar17,lVar3 + lVar14,0x112d36580,&UNK_10d9016d0);
  lVar13 = lVar3;
  (*pcVar11)(lVar3,1,lVar8);
  uVar9 = uStack_128;
  if ((int)lVar13 == 1) {
    func_0x0001018e8ec4(lVar17,0x112d36580,&UNK_10d9016d0);
    lVar3 = lStack_120;
    func_0x0001018e8ec4(lVar16,0x112d36580,&UNK_10d9016d0);
    lVar14 = lVar3 + lVar14;
    (*pcVar11)(lVar14,1,lVar8);
    if ((int)lVar14 != 1) {
LAB_1018e744c:
      func_0x0001018e8ec4(lVar3,0x112d7e680,&UNK_10d95e350);
      goto LAB_1018e7464;
    }
    func_0x0001018e8ec4(lVar3,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x0001018e8e7c(lVar3,uStack_128,0x112d36580,&UNK_10d9016d0);
    lVar13 = lVar3 + lVar14;
    (*pcVar11)(lVar13,1,lVar8);
    if ((int)lVar13 == 1) {
      func_0x0001018e8ec4(lVar17,0x112d36580,&UNK_10d9016d0);
      lVar3 = lStack_120;
      func_0x0001018e8ec4(lVar16,0x112d36580,&UNK_10d9016d0);
      (**(code **)(lStack_108 + 8))(uVar9,lVar8);
      goto LAB_1018e744c;
    }
    lVar13 = lVar12;
    (*pcVar15)(lVar12,lVar3 + lVar14,lVar8);
    func_0x000101553b98();
    uVar7 = uVar9;
    func_0x000107c5fab8(uVar9,lVar12,lVar8,lVar13);
    pcVar11 = *(code **)(lStack_108 + 8);
    (*pcVar11)(lVar12,lVar8);
    func_0x0001018e8ec4(lVar17,0x112d36580,&UNK_10d9016d0);
    func_0x0001018e8ec4(lVar16,0x112d36580,&UNK_10d9016d0);
    (*pcVar11)(uVar9,lStack_100);
    lVar8 = lStack_100;
    func_0x0001018e8ec4(lVar3,0x112d36580,&UNK_10d9016d0);
    if ((uVar7 & 1) == 0) goto LAB_1018e7464;
  }
  lVar3 = lStack_118;
  func_0x000107c61428(lStack_118 + 0x10,auStack_c8,0,0);
  lVar14 = lVar3 + 0x10;
  func_0x000107c61618();
  lVar12 = lStack_130;
  if (lVar14 == 0) {
LAB_1018e7654:
    func_0x000107c61170(lVar12);
    pcVar11 = *(code **)(lStack_108 + 8);
LAB_1018e767c:
    (*pcVar11)(lStack_110,lVar8);
  }
  else {
    bVar1 = *(byte *)(lVar14 + _DAT_112dd0e58);
    func_0x000107c61170();
    lVar12 = lStack_130;
    if ((bVar1 & 1) != 0) {
      func_0x000107c61428(lVar3 + 0x10,auStack_e0,0,0);
      lVar3 = lVar3 + 0x10;
      func_0x000107c61618();
      if (lVar3 == 0) goto LAB_1018e7654;
      lVar14 = lVar3 + _DAT_112dd0e70;
      func_0x000107c61428(lVar14,auStack_f8,0,0);
      lVar13 = lVar14;
      func_0x000107c61618();
      lVar14 = *(long *)(lVar14 + 8);
      func_0x000107c61170(lVar3);
      if (lVar13 == 0) {
        func_0x000107c61170(lVar12);
      }
      else {
        func_0x000107c614f0(lVar13);
        (**(code **)(lVar14 + 8))();
        func_0x000107c61170(lVar12);
        func_0x000107c615e8(lVar13);
      }
      pcVar11 = *(code **)(lStack_108 + 8);
      lVar8 = lStack_100;
      goto LAB_1018e767c;
    }
    (**(code **)(lStack_108 + 8))(lStack_110,lVar8);
    func_0x000107c61170(lVar12);
  }
  uVar10 = 1;
LAB_1018e7498:
  return uVar10 & 1;
}



/* Entry: 1018e7688; end: 1018e768b;  */

void FUN_1018e7688(void)

{
  return;
}



/* Entry: 1018e768c; end: 1018e77e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e768c(void)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_80 [8];
  undefined *apuStack_78 [3];
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *(undefined1 *)(unaff_x20 + _DAT_112dd0e58) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112dd0e60) = 1;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  apuStack_78[0] = puVar2;
  func_0x0001007d6d78(apuStack_78);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  apuStack_78[0] = puVar2;
  func_0x0001007d6d78(apuStack_78);
  func_0x000107c61170(puVar2);
  FUN_1018e6930(apuStack_78);
  func_0x0001000a8868(apuStack_78,uStack_60);
  FUN_1018e77e8(puVar3);
  (**(code **)(lStack_58 + 8))(puVar3,uStack_60,lStack_58);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  func_0x0001000834e4(apuStack_78);
  return;
}



/* Entry: 1018e77e8; end: 1018e7bbb;  */

void FUN_1018e77e8(undefined8 param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [8];
  undefined1 *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar8 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar8 = 0x112d4b5b0;
  lStack_68 = lVar7;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar7 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar7 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar12 - extraout_x12_01;
  uVar2 = 0;
  func_0x000107c5ec24();
  lVar8 = *(long *)(uVar2 - 8);
  uVar3 = uVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar11 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ed5c();
  if ((uVar3 & 1) != 0) {
    puStack_78 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    func_0x000107c5ec20(lVar11);
    func_0x000107c5ec10(0x656c626179616c70,0xe800000000000000);
    func_0x000107c5ebf0(0,0xe000000000000000);
    func_0x000107c5edc4();
    func_0x000107c5ebf8();
    func_0x000107c5ebe4(lVar10);
    FUN_1018e8e7c(lVar10,lVar12,0x112d4b5b0,&UNK_10d912140);
    pcVar9 = *(code **)(lVar8 + 0x30);
    uVar6 = 1;
    lVar4 = lVar12;
    (*pcVar9)(lVar12,1,uVar2);
    uStack_70 = param_1;
    if ((int)lVar4 == 1) {
      func_0x0001018e8ec4(lVar12,0x112d4b5b0,&UNK_10d912140);
      lVar4 = 0;
      uVar6 = 0;
    }
    else {
      func_0x000107c5ebd0();
      (**(code **)(lVar8 + 8))(lVar12,uVar2);
    }
    func_0x000107c5ebd4(lVar4,uVar6);
    FUN_1018e8e7c(lVar10,lVar7,0x112d4b5b0,&UNK_10d912140);
    uVar6 = 1;
    lVar12 = lVar7;
    (*pcVar9)(lVar7,1,uVar2);
    if ((int)lVar12 == 1) {
      func_0x0001018e8ec4(lVar7,0x112d4b5b0,&UNK_10d912140);
      lVar12 = 0;
      uVar6 = 0;
    }
    else {
      func_0x000107c5ebd8();
      (**(code **)(lVar8 + 8))(lVar7,uVar2);
    }
    puVar1 = puStack_78;
    func_0x000107c5ebdc(lVar12,uVar6);
    lVar7 = lStack_68;
    func_0x000107c5ebe8(lStack_68);
    func_0x0001018e8ec4(lVar10,0x112d4b5b0,&UNK_10d912140);
    (**(code **)(lVar8 + 8))(lVar11,uVar2);
    func_0x0001001021cc(lVar7,puVar1);
    lVar8 = 0;
    func_0x000107c5ede0();
    lVar7 = *(long *)(lVar8 + -8);
    pcVar9 = *(code **)(lVar7 + 0x30);
    puVar5 = puVar1;
    (*pcVar9)(puVar1,1,lVar8);
    if ((int)puVar5 == 1) {
      (**(code **)(lVar7 + 0x10))(uStack_70);
      puVar5 = puVar1;
      (*pcVar9)(puVar1,1,lVar8);
      if ((int)puVar5 != 1) {
        func_0x0001018e8ec4(puVar1,0x112d36580,&UNK_10d9016d0);
      }
    }
    else {
      (**(code **)(lVar7 + 0x20))(uStack_70,puVar1,lVar8);
    }
    return;
  }
  lVar8 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x0001018e7a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1);
  return;
}



/* Entry: 1018e7bbc; end: 1018e7f87;  */

void FUN_1018e7bbc(undefined8 param_1,undefined8 param_2,double param_3,double param_4,ulong param_5
                  )

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x20;
  undefined8 uVar10;
  double dVar11;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  long lStack_78;
  
  FUN_1018e6930(&uStack_98);
  lVar1 = lStack_78;
  uVar10 = uStack_80;
  func_0x0001000a8868(&uStack_98,uStack_80);
  (**(code **)(lVar1 + 0x20))(uVar10,lVar1);
  func_0x000107c3ec60();
  func_0x000107c61170(uVar10);
  dVar11 = (double)(long)param_3;
  func_0x0001000834e4(&uStack_98);
  if (0x7fefffffffffffff < (ulong)ABS(dVar11)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1018e7f74);
    (*pcVar2)();
  }
  if (dVar11 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1018e7f78);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= dVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1018e7f7c);
    (*pcVar2)();
  }
  FUN_1018e6930(&uStack_98);
  lVar1 = lStack_78;
  uVar10 = uStack_80;
  func_0x0001000a8868(&uStack_98,uStack_80);
  (**(code **)(lVar1 + 0x20))(uVar10,lVar1);
  func_0x000107c3ec60();
  func_0x000107c61170(uVar10);
  dVar11 = (double)(long)param_4;
  func_0x0001000834e4(&uStack_98);
  if ((ulong)ABS(dVar11) < 0x7ff0000000000000) {
    if (dVar11 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018e7f84);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar11) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018e7f88);
      (*pcVar2)();
    }
    uVar9 = 0x800000010efbfb70;
    uVar10 = 0xd00000000000001a;
    if ((param_5 & 1) == 0) {
      uVar10 = 0;
      uVar9 = 0xe000000000000000;
    }
    uStack_98 = 0;
    uStack_90 = 0xe000000000000000;
    func_0x000107c602fc(0xa6);
    func_0x000107c5fb78(0xd000000000000048,0x800000010efbfac0);
    puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    puVar5 = PTR___sSiN_11034deb0;
    puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar6);
    func_0x000107c5fb78(0x3a7468676965682c,0xe800000000000000);
    puVar6 = puVar7;
    func_0x000107c6057c(puVar5,puVar7);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar6);
    func_0x000107c5fb78(0xd000000000000021,0x800000010efbfb10);
    puVar6 = puVar7;
    func_0x000107c6057c(puVar5,puVar7);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar6);
    func_0x000107c5fb78(0x2c,0xe100000000000000);
    func_0x000107c6057c(puVar5,puVar7);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar7);
    func_0x000107c5fb78(0xd000000000000024,0x800000010efbfb40);
    func_0x000107c5fb78(uVar10,uVar9);
    func_0x000107c6142c(uVar9);
    uVar8 = 0xe600000000000000;
    func_0x000107c5fb78(0x7d202020200a);
    uVar9 = uStack_90;
    uVar10 = uStack_98;
    func_0x000107c61174();
    uVar3 = unaff_x20;
    func_0x000107c417f0();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(unaff_x20);
    func_0x000107c61170(uVar3);
    FUN_1018e6930(&uStack_98);
    func_0x0001000a8868(&uStack_98,uStack_80);
    puVar5 = &UNK_11040ead8;
    func_0x000107c613fc(&UNK_11040ead8,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar4;
    *(undefined8 *)(puVar5 + 0x18) = uVar8;
    (**(code **)(lStack_78 + 0x18))(uVar10,uVar9,0x1018e8874,puVar5,uStack_80,lStack_78);
    func_0x000107c61574(puVar5);
    func_0x0001000834e4(&uStack_98);
    func_0x000107c6142c(uVar9);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1018e7f80);
  (*pcVar2)();
}



/* Entry: 1018e7f88; end: 1018e7f8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1018e7f88(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&uStack_58);
  puVar4 = &UNK_11040eb00;
  puVar2 = puVar4;
  func_0x000107c613fc(&UNK_11040eb00,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x1018e8878;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_100f11710;
  puStack_70 = &UNK_11040eb18;
  ppuVar3 = &puStack_88;
  puStack_60 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_60);
  func_0x000107c613fc(&UNK_11040eb00,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  uStack_68 = 0x1018e889c;
  puStack_88 = puVar1;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_100f10508;
  puStack_70 = &UNK_11040eb40;
  ppuVar5 = &puStack_88;
  puStack_60 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_60);
  FUN_1018e4b30(0);
  func_0x000107c614e8();
  uVar6 = uStack_58;
  func_0x000107c4c214(uStack_58);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(uStack_58);
  return uVar6;
}



/* Entry: 1018e7f8c; end: 1018e7fef;  */

undefined8 FUN_1018e7f8c(void)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  FUN_1018e6930(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  uVar1 = uStack_40;
  (**(code **)(lStack_38 + 0x20))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return uVar1;
}



/* Entry: 1018e7ff0; end: 1018e803b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e7ff0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = unaff_x20 + _DAT_112dd0e70;
  func_0x000107c61428(lVar1,auStack_38,0,0);
  func_0x000107c61618(lVar1);
  return;
}



/* Entry: 1018e803c; end: 1018e81a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e803c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + _DAT_112dd0e70;
  func_0x000107c61428(lVar1,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 8) = param_2;
  func_0x000107c61604(lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1018e81a4; end: 1018e81c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e81a4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + _DAT_112dd0e48));
  return;
}



/* Entry: 1018e81c8; end: 1018e823b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e81c8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_112dd0e68) = 1;
  FUN_1018e7bbc(1);
  lVar1 = unaff_x20 + _DAT_112dd0e30;
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,*(undefined8 *)(lVar1 + 0x18));
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 1018e823c; end: 1018e83ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e823c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  *(undefined1 *)(unaff_x20 + _DAT_112dd0e68) = 0;
  func_0x000107c61174();
  lVar2 = unaff_x20;
  func_0x000107c417f0();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5faec();
  func_0x000107c61170(unaff_x20);
  func_0x000107c61170(lVar2);
  FUN_1018e6930(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  puVar4 = &UNK_11040eab0;
  func_0x000107c613fc(&UNK_11040eab0,0x20,7);
  *(long *)(puVar4 + 0x10) = lVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  (**(code **)(lStack_58 + 0x18))
            (0xd000000000000042,0x800000010efbfa70,FUN_1018e8870,puVar4,uStack_60,lStack_58);
  func_0x000107c61574(puVar4);
  func_0x0001000834e4(auStack_78);
  lVar2 = unaff_x20 + _DAT_112dd0e30;
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  lVar3 = *(long *)(lVar2 + 0x20);
  func_0x0001000a8868(lVar2,uVar1);
  (**(code **)(lVar3 + 0x10))(uVar1,lVar3);
  return;
}



/* Entry: 1018e83f0; end: 1018e8453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e83f0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0(param_1);
  puStack_38 = puVar1;
  func_0x0001007d6d78(&puStack_38);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1018e8454; end: 1018e852b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e8454(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = unaff_x20 + _DAT_112dd0e70;
  func_0x000107c61428(lVar2,auStack_38,0,0);
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar2 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar2 + 0x18))();
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 1018e852c; end: 1018e862b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e852c(uint param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = unaff_x20 + _DAT_112dd0e70;
  func_0x000107c61428(lVar2,auStack_48,0,0);
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    lVar2 = lVar1;
    func_0x000107c614f0();
    (**(code **)(lVar3 + 0x28))(param_1 & 1,lVar2,lVar3);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 1018e862c; end: 1018e868f; -[_TtC38AdPlayableWebViewFactoryImplementation27AdPlayableWebViewInteractor webView:didFinishNavigation:] */

/* WARNING: Possible PIC construction at 0x0001018e8670: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018e8674) */

void FUN_1018e862c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1018e88ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1018e8690; end: 1018e8793; -[_TtC38AdPlayableWebViewFactoryImplementation27AdPlayableWebViewInteractor webView:decidePolicyForNavigationAction:decisionHandler:] */

void FUN_1018e8690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eb08();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar2 = param_4;
  func_0x000107c50300(param_4);
  func_0x000107c61180();
  func_0x000107c5eae8(puVar3);
  func_0x000107c61170(uVar2);
  FUN_1018e89b8(puVar3,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c60bd0(param_5);
  func_0x000107c61170(param_4);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return;
}



/* Entry: 1018e8794; end: 1018e886f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e8794(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined *apuStack_48 [3];
  
  *(undefined1 *)(unaff_x20 + _DAT_112dd0e60) = 0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  apuStack_48[0] = puVar1;
  func_0x0001007d6d78(apuStack_48);
  func_0x000107c61170(puVar1);
  lVar3 = unaff_x20 + _DAT_112dd0e70;
  func_0x000107c61428(lVar3,apuStack_48,0,0);
  lVar2 = lVar3;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar3 + 8);
    func_0x000107c614f0();
    func_0x000107c5ed2c(param_1);
    (**(code **)(lVar3 + 0x10))();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1018e8870; end: 1018e88ab;  */

void FUN_1018e8870(void)

{
  return;
}



/* Entry: 1018e88ac; end: 1018e89b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e88ac(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  *(undefined1 *)(unaff_x20 + _DAT_112dd0e58) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112dd0e60) = 0;
  lVar5 = unaff_x20 + _DAT_112dd0e70;
  func_0x000107c61428(lVar5,auStack_48,0,0);
  lVar2 = lVar5;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar5 = *(long *)(lVar5 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar5 + 8))();
    func_0x000107c615e8(lVar2);
  }
  lVar5 = _DAT_112dd0e68;
  if ((*(byte *)(unaff_x20 + _DAT_112dd0e68) & 1) == 0) {
    func_0x0001000d224c(&uStack_58);
    uVar3 = uStack_58;
    func_0x000107c614f0(uStack_58);
    uVar4 = 0;
    func_0x00010403c628(0xd00000000000002c,0x800000010efbfb90,uVar3,uStack_50);
    func_0x000107c615e8(uStack_58);
    if ((uVar4 & 1) == 0) {
      return;
    }
    uVar1 = *(undefined1 *)(unaff_x20 + lVar5);
  }
  else {
    uVar1 = 1;
  }
  FUN_1018e7bbc(uVar1);
  return;
}



/* Entry: 1018e89b8; end: 1018e8e7b;  */

void FUN_1018e89b8(undefined8 param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  undefined1 auStack_c0 [8];
  ulong uStack_b8;
  code *pcStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_98;
  undefined1 *puStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar3 = 0x112d7e680;
  uStack_98 = param_2;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112d36580;
  puStack_90 = auStack_c0 + -extraout_x8;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar9 = (long)(auStack_c0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar9 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar14 - extraout_x12_01;
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_a8 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar13 = lVar10 - extraout_x12_02;
  func_0x000107c5eaf0(lVar11);
  pcVar15 = *(code **)(lVar12 + 0x30);
  lVar10 = lVar11;
  (*pcVar15)(lVar11,1,lVar4);
  if ((int)lVar10 == 1) {
    func_0x0001018e8ec4(lVar11,0x112d36580,&UNK_10d9016d0);
    pcVar15 = *(code **)(param_3 + 0x10);
    lVar4 = 0;
    uVar13 = param_3;
    goto LAB_1018e8db0;
  }
  pcStack_b0 = *(code **)(lVar12 + 0x20);
  uVar5 = uVar13;
  (*pcStack_b0)(uVar13,lVar11,lVar4);
  func_0x000107c5edc8();
  if (lVar11 == 0) {
LAB_1018e8bc8:
    uStack_b8 = param_3;
    (**(code **)(lVar12 + 0x10))(lVar14,uVar13,lVar4);
    (**(code **)(lVar12 + 0x38))(lVar14,0,1,lVar4);
    FUN_1018e6930(auStack_88);
    func_0x0001000a8868(auStack_88,uStack_70);
    (**(code **)(lStack_68 + 0x28))(lVar9,uStack_70,lStack_68);
    puVar2 = puStack_90;
    iVar1 = *(int *)(lVar3 + 0x30);
    func_0x0001018e8e7c(lVar14,puStack_90,0x112d36580,&UNK_10d9016d0);
    func_0x0001018e8e7c(lVar9,puVar2 + iVar1,0x112d36580,&UNK_10d9016d0);
    puVar6 = puVar2;
    (*pcVar15)(puVar2,1,lVar4);
    lVar3 = lStack_a0;
    if ((int)puVar6 == 1) {
      func_0x0001018e8ec4(lVar9,0x112d36580,&UNK_10d9016d0);
      func_0x0001018e8ec4(lVar14,0x112d36580,&UNK_10d9016d0);
      puVar6 = puVar2 + iVar1;
      (*pcVar15)(puVar6,1,lVar4);
      if ((int)puVar6 == 1) {
        func_0x0001018e8ec4(puVar2,0x112d36580,&UNK_10d9016d0);
        func_0x0001000834e4(auStack_88);
        param_3 = uStack_b8;
        goto LAB_1018e8cec;
      }
LAB_1018e8d70:
      func_0x0001018e8ec4(puVar2,0x112d7e680,&UNK_10d95e350);
      func_0x0001000834e4(auStack_88);
    }
    else {
      func_0x0001018e8e7c(puVar2,lStack_a0,0x112d36580,&UNK_10d9016d0);
      puVar6 = puVar2 + iVar1;
      (*pcVar15)(puVar6,1,lVar4);
      lVar10 = lStack_a8;
      if ((int)puVar6 == 1) {
        func_0x0001018e8ec4(lVar9,0x112d36580,&UNK_10d9016d0);
        func_0x0001018e8ec4(lVar14,0x112d36580,&UNK_10d9016d0);
        (**(code **)(lVar12 + 8))(lVar3,lVar4);
        goto LAB_1018e8d70;
      }
      lVar11 = lStack_a8;
      (*pcStack_b0)(lStack_a8,puVar2 + iVar1,lVar4);
      func_0x000101553b98();
      lVar7 = lVar3;
      func_0x000107c5fab8(lVar3,lVar10,lVar4,lVar11);
      uStack_98 = CONCAT44(uStack_98._4_4_,(int)lVar7);
      pcVar15 = *(code **)(lVar12 + 8);
      (*pcVar15)(lVar10,lVar4);
      func_0x0001018e8ec4(lVar9,0x112d36580,&UNK_10d9016d0);
      func_0x0001018e8ec4(lVar14,0x112d36580,&UNK_10d9016d0);
      (*pcVar15)(lVar3,lVar4);
      func_0x0001018e8ec4(puVar2,0x112d36580,&UNK_10d9016d0);
      func_0x0001000834e4(auStack_88);
      param_3 = uStack_b8;
      if ((uStack_98 & 1) != 0) goto LAB_1018e8cec;
    }
    pcVar15 = *(code **)(uStack_b8 + 0x10);
    uVar8 = 0;
    param_3 = uStack_b8;
  }
  else {
    if (uVar5 == 0x656c626179616c70 && lVar11 == -0x1800000000000000) {
      func_0x000107c6142c(lVar11);
    }
    else {
      func_0x000107c605b8();
      func_0x000107c6142c(lVar11);
      if ((uVar5 & 1) == 0) goto LAB_1018e8bc8;
    }
LAB_1018e8cec:
    pcVar15 = *(code **)(param_3 + 0x10);
    uVar8 = 1;
  }
  (*pcVar15)(param_3,uVar8);
  pcVar15 = *(code **)(lVar12 + 8);
LAB_1018e8db0:
  (*pcVar15)(uVar13,lVar4);
  return;
}



/* Entry: 1018e8e7c; end: 1018e8f53;  */

undefined8 FUN_1018e8e7c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}


