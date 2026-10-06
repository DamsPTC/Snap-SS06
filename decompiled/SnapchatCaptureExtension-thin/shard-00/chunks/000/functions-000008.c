/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100037bb8; end: 100037bff;  */

undefined ** FUN_100037bb8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR___ss20__StaticArrayStorageCN_100053d08;
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF
            (&PTR___ss20__StaticArrayStorageCN_100053d08,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if ((undefined **)0x3 < ppuVar1) {
    ppuVar1 = (undefined **)0x4;
  }
  return ppuVar1;
}



/* Entry: 100037c00; end: 100037dfb;  */

/* WARNING: Removing unreachable block (ram,0x000100037d98) */
/* WARNING: Removing unreachable block (ram,0x000100037d30) */
/* WARNING: Removing unreachable block (ram,0x000100037d34) */

void FUN_100037c00(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long extraout_x8;
  long unaff_x21;
  long lVar11;
  undefined1 auStack_80 [12];
  uint uStack_74;
  undefined1 *puStack_70;
  long lStack_68;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  byte abStack_52 [2];
  
  lVar3 = 0x100060b40;
  FUN_100011744(0x100060b40,&UNK_100042490);
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_1000363d0(param_2,uVar1);
  FUN_100037ae4();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_80 + -extraout_x8,&UNK_100053cf8,&UNK_100053cf8,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    abStack_52[1] = 0;
    pbVar5 = abStack_52 + 1;
    lVar4 = lVar3;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySiSgSim_xtKF();
    uStack_53 = 1;
    pbVar6 = pbVar5;
    func_0x00010003845c();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (abStack_52,&UNK_100053c68,&uStack_53,lVar3,&UNK_100053c68,pbVar6);
    uStack_54 = 2;
    puVar7 = &uStack_54;
    lVar9 = lVar3;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    uStack_74 = (uint)abStack_52[0];
    uStack_55 = 3;
    puVar8 = &uStack_55;
    lVar10 = lVar3;
    puStack_70 = puVar7;
    lStack_68 = lVar9;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    (**(code **)(lVar11 + 8))(auStack_80 + -extraout_x8,lVar3);
    FUN_1000364b4(param_2);
    *param_1 = pbVar5;
    *(char *)(param_1 + 1) = (char)lVar4;
    *(char *)((long)param_1 + 9) = (char)uStack_74;
    param_1[2] = puStack_70;
    param_1[3] = lStack_68;
    param_1[4] = puVar8;
    param_1[5] = lVar10;
  }
  else {
    FUN_1000364b4(param_2);
  }
  return;
}



/* Entry: 100037dfc; end: 100037dff;  */

void FUN_100037dfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_1000421b8;
  _swift_getWitnessTable(&UNK_1000421b8,&UNK_100053c68);
  puRam0000000100060b18 = puVar1;
  return;
}



/* Entry: 100037e00; end: 100037e3f;  */

void FUN_100037e00(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_1000421b8;
  _swift_getWitnessTable(&UNK_1000421b8,&UNK_100053c68);
  puRam0000000100060b18 = puVar1;
  return;
}



/* Entry: 100037e40; end: 100037edf;  */

long FUN_100037e40(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100037ee0; end: 100037f63;  */

undefined8 * FUN_100037ee0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 100037f64; end: 100037f77;  */

void FUN_100037f64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 100037f78; end: 100037fcb;  */

undefined8 * FUN_100037f78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 100037fcc; end: 100038353;  */

int FUN_100037fcc(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100038354; end: 100038393;  */

void FUN_100038354(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100042414;
  _swift_getWitnessTable(&UNK_100042414,&UNK_100053cf8);
  puRam0000000100060b20 = puVar1;
  return;
}



/* Entry: 100038394; end: 100038397;  */

void FUN_100038394(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060b28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100042374;
  _swift_getWitnessTable(&UNK_100042374,&UNK_100053cf8);
  puRam0000000100060b28 = puVar1;
  return;
}



/* Entry: 100038398; end: 1000383d7;  */

void FUN_100038398(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060b28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100042374;
  _swift_getWitnessTable(&UNK_100042374,&UNK_100053cf8);
  puRam0000000100060b28 = puVar1;
  return;
}



/* Entry: 1000383d8; end: 1000383db;  */

void FUN_1000383d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060b30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10004234c;
  _swift_getWitnessTable(&UNK_10004234c,&UNK_100053cf8);
  puRam0000000100060b30 = puVar1;
  return;
}



/* Entry: 1000383dc; end: 10003849b;  */

void FUN_1000383dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060b30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10004234c;
  _swift_getWitnessTable(&UNK_10004234c,&UNK_100053cf8);
  puRam0000000100060b30 = puVar1;
  return;
}



/* Entry: 10003849c; end: 1000384b3;  */

undefined1 FUN_10003849c(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 1000384b4; end: 10003850b; -[SCLockedCameraCaptureStorageManagementConstants init] */

void FUN_1000384b4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd00000000000001f,0x800000010004c0f0,
             "LockedCameraSharedObjects/LockedCameraCaptureStorageManagementConstants.swift",0x4d,2,
             9,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10003850c);
  (*pcVar1)();
}



/* Entry: 10003850c; end: 1000385b3;  */

undefined1  [16] FUN_10003850c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010004ca90;
  auVar1._0_8_ = 0xd000000000000021;
  return auVar1;
}



/* Entry: 1000385b4; end: 100038603;  */

void FUN_1000385b4(void)

{
  func_0x0001000385e4();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10005b018);
  return;
}



/* Entry: 100038604; end: 100038617;  */

bool FUN_100038604(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100038618; end: 1000387e3;  */

void FUN_100038618(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  pcVar1 = "rageManagementConstants.swift";
  uVar4 = 0xd00000000000001a;
  if (cVar3 != '\x01') {
    pcVar1 = "overall_startup_latency_ms";
    uVar4 = 0xd000000000000019;
  }
  pcVar2 = "action";
  uVar5 = 0xd000000000000012;
  if (cVar3 != '\0') {
    pcVar2 = pcVar1;
    uVar5 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar5,(ulong)pcVar2 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar2 | 0x8000000000000000);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1000387e4; end: 100038897;  */

void FUN_1000387e4(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  pcVar1 = "rageManagementConstants.swift";
  uVar3 = 0xd00000000000001a;
  if (*unaff_x20 != '\x01') {
    pcVar1 = "overall_startup_latency_ms";
    uVar3 = 0xd000000000000019;
  }
  pcVar2 = "action";
  uVar4 = 0xd000000000000012;
  if (*unaff_x20 != '\0') {
    pcVar2 = pcVar1;
    uVar4 = uVar3;
  }
  *param_1 = uVar4;
  param_1[1] = (ulong)pcVar2 | 0x8000000000000000;
  return;
}



/* Entry: 100038898; end: 1000388bb;  */

void FUN_100038898(undefined1 *param_1,undefined1 param_2)

{
  FUN_100038b0c();
  *param_1 = param_2;
  return;
}



/* Entry: 1000388bc; end: 1000388d3;  */

undefined1  [16] FUN_1000388bc(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1000388d4; end: 100038923;  */

void FUN_1000388d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100038a78();
                    /* WARNING: Could not recover jumptable at 0x00010003b044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_100050c30)(param_1,uVar1);
  return;
}



/* Entry: 100038924; end: 100038a77;  */

void FUN_100038924(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [13];
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x100060b78;
  FUN_100011744(0x100060b78,&UNK_1000424d0);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_1000363d0(param_1,uVar1);
  FUN_100038a78();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar4,&UNK_100053f60,&UNK_100053f60,param_1,uVar1,uVar2);
  uStack_51 = 0;
  __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
            (*unaff_x20,unaff_x20[1],&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySiSg_xtKF
              (unaff_x20[2],*(undefined1 *)(unaff_x20 + 3),&uStack_52,lVar3);
    uStack_53 = 2;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySiSg_xtKF
              (unaff_x20[4],*(undefined1 *)(unaff_x20 + 5),&uStack_53,lVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  return;
}



/* Entry: 100038a78; end: 100038ab7;  */

void FUN_100038a78(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060b80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100042650;
  _swift_getWitnessTable(&UNK_100042650,&UNK_100053f60);
  puRam0000000100060b80 = puVar1;
  return;
}



/* Entry: 100038ab8; end: 100038af7;  */

void FUN_100038ab8(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_100038b54(&uStack_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[3] = CONCAT71(uStack_37,uStack_38);
    param_1[2] = uStack_40;
    *(undefined8 *)((long)param_1 + 0x21) = uStack_2f;
    *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_30,uStack_37);
  }
  return;
}



/* Entry: 100038af8; end: 100038b0b;  */

void FUN_100038af8(void)

{
  FUN_100038924();
  return;
}



/* Entry: 100038b0c; end: 100038b53;  */

undefined ** FUN_100038b0c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR___ss20__StaticArrayStorageCN_100053f70;
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF
            (&PTR___ss20__StaticArrayStorageCN_100053f70,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if ((undefined **)0x2 < ppuVar1) {
    ppuVar1 = (undefined **)0x3;
  }
  return ppuVar1;
}



/* Entry: 100038b54; end: 100038d1b;  */

/* WARNING: Removing unreachable block (ram,0x000100038cb8) */
/* WARNING: Removing unreachable block (ram,0x000100038c24) */

void FUN_100038b54(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  long unaff_x21;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x100060ba0;
  FUN_100011744(0x100060ba0,&UNK_1000426a0);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_1000363d0(param_2,uVar1);
  FUN_100038a78();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_70 + -extraout_x8,&UNK_100053f60,&UNK_100053f60,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar5 = &uStack_51;
    lVar4 = lVar3;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    uStack_52 = 1;
    puVar6 = &uStack_52;
    lVar8 = lVar3;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySiSgSim_xtKF();
    uStack_53 = 2;
    puVar7 = &uStack_53;
    lVar9 = lVar3;
    puStack_68 = puVar6;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySiSgSim_xtKF();
    (**(code **)(lVar10 + 8))(auStack_70 + -extraout_x8,lVar3);
    FUN_1000364b4(param_2);
    *param_1 = puVar5;
    param_1[1] = lVar4;
    param_1[2] = puStack_68;
    *(char *)(param_1 + 3) = (char)lVar8;
    param_1[4] = puVar7;
    *(char *)(param_1 + 5) = (char)lVar9;
  }
  else {
    FUN_1000364b4(param_2);
  }
  return;
}



/* Entry: 100038d1c; end: 100038d47;  */

long FUN_100038d1c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100038d48; end: 100038d4f;  */

void FUN_100038d48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003b464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100050c80)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 100038d50; end: 100038d9b;  */

undefined8 * FUN_100038d50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 100038d9c; end: 100038e07;  */

undefined8 * FUN_100038d9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 100038e08; end: 100038e1b;  */

void FUN_100038e08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)((long)param_1 + 0x19) = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Entry: 100038e1c; end: 100038e6f;  */

undefined8 * FUN_100038e1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Entry: 100038e70; end: 1000390a3;  */

int FUN_100038e70(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1000390a4; end: 1000390e3;  */

void FUN_1000390a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060b88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100042628;
  _swift_getWitnessTable(&UNK_100042628,&UNK_100053f60);
  puRam0000000100060b88 = puVar1;
  return;
}



/* Entry: 1000390e4; end: 1000390e7;  */

void FUN_1000390e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060b90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100042588;
  _swift_getWitnessTable(&UNK_100042588,&UNK_100053f60);
  puRam0000000100060b90 = puVar1;
  return;
}



/* Entry: 1000390e8; end: 100039127;  */

void FUN_1000390e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060b90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100042588;
  _swift_getWitnessTable(&UNK_100042588,&UNK_100053f60);
  puRam0000000100060b90 = puVar1;
  return;
}



/* Entry: 100039128; end: 10003912b;  */

void FUN_100039128(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060b98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100042560;
  _swift_getWitnessTable(&UNK_100042560,&UNK_100053f60);
  puRam0000000100060b98 = puVar1;
  return;
}



/* Entry: 10003912c; end: 10003916b;  */

void FUN_10003912c(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060b98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100042560;
  _swift_getWitnessTable(&UNK_100042560,&UNK_100053f60);
  puRam0000000100060b98 = puVar1;
  return;
}



/* Entry: 10003916c; end: 100039173;  */

undefined8 FUN_10003916c(void)

{
  return 1;
}



/* Entry: 100039174; end: 1000391c7;  */

void FUN_100039174(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,0xd000000000000012,0x800000010004d020);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1000391c8; end: 1000391e3;  */

void FUN_1000391c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ace4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_100050a10)
            (param_1,0xd000000000000012,0x800000010004d020);
  return;
}



/* Entry: 1000391e4; end: 100039233;  */

void FUN_1000391e4(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,0xd000000000000012,0x800000010004d020);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100039234; end: 100039283;  */

void FUN_100039234(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  uVar1 = param_2[1];
  ppuVar2 = &PTR___ss20__StaticArrayStorageCN_1000541f0;
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF
            (&PTR___ss20__StaticArrayStorageCN_1000541f0,*param_2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  *(bool *)param_1 = ppuVar2 != (undefined **)0x0;
  return;
}



/* Entry: 100039284; end: 1000392bf;  */

void FUN_100039284(undefined8 *param_1)

{
  *param_1 = 0xd000000000000012;
  param_1[1] = 0x800000010004d020;
  return;
}



/* Entry: 1000392c0; end: 100039313;  */

void FUN_1000392c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR___ss20__StaticArrayStorageCN_1000541b8;
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF
            (&PTR___ss20__StaticArrayStorageCN_1000541b8,param_2,param_3);
  _swift_bridgeObjectRelease(param_3);
  *(bool *)param_1 = ppuVar1 != (undefined **)0x0;
  return;
}



/* Entry: 100039314; end: 10003932b;  */

undefined1  [16] FUN_100039314(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10003932c; end: 10003937b;  */

void FUN_10003932c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10003937c();
                    /* WARNING: Could not recover jumptable at 0x00010003b044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_100050c30)(param_1,uVar1);
  return;
}



/* Entry: 10003937c; end: 1000393bb;  */

void FUN_10003937c(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060bb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100042830;
  _swift_getWitnessTable(&UNK_100042830,&UNK_1000541a8);
  puRam0000000100060bb0 = puVar1;
  return;
}



/* Entry: 1000393bc; end: 1000394e3;  */

/* WARNING: Removing unreachable block (ram,0x000100039480) */

void FUN_1000393bc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  
  lVar3 = 0x100060bb8;
  FUN_100011744(0x100060bb8,&UNK_1000426b8);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_1000363d0(param_2,uVar1);
  FUN_10003937c();
  puVar5 = &UNK_1000541a8;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1000541a8,&UNK_1000541a8,lVar4,uVar1,uVar2
            );
  if (unaff_x21 == 0) {
    lVar4 = lVar3;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
    FUN_1000364b4(param_2);
    *param_1 = puVar5;
    param_1[1] = lVar4;
  }
  else {
    FUN_1000364b4(param_2);
  }
  return;
}



/* Entry: 1000394e4; end: 1000395d3;  */

void FUN_1000394e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar6;
  
  lVar5 = 0x100060ba8;
  FUN_100011744(0x100060ba8,&UNK_1000426b0);
  lVar6 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  FUN_1000363d0(param_1,uVar2);
  FUN_10003937c();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1000541a8,&UNK_1000541a8,param_1,uVar2,
             uVar4);
  __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF(uVar1,uVar3);
  (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar5);
  return;
}



/* Entry: 1000395d4; end: 1000395ff;  */

undefined8 * FUN_1000395d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 100039600; end: 100039607;  */

void FUN_100039600(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003b464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100050c80)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 100039608; end: 100039677;  */

undefined8 * FUN_100039608(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 100039678; end: 100039827;  */

int FUN_100039678(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100039828; end: 100039867;  */

void FUN_100039828(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060bc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100042808;
  _swift_getWitnessTable(&UNK_100042808,&UNK_1000541a8);
  puRam0000000100060bc0 = puVar1;
  return;
}



/* Entry: 100039868; end: 10003986b;  */

void FUN_100039868(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060bc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100042768;
  _swift_getWitnessTable(&UNK_100042768,&UNK_1000541a8);
  puRam0000000100060bc8 = puVar1;
  return;
}



/* Entry: 10003986c; end: 1000398ab;  */

void FUN_10003986c(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060bc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100042768;
  _swift_getWitnessTable(&UNK_100042768,&UNK_1000541a8);
  puRam0000000100060bc8 = puVar1;
  return;
}



/* Entry: 1000398ac; end: 1000398af;  */

void FUN_1000398ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060bd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100042740;
  _swift_getWitnessTable(&UNK_100042740,&UNK_1000541a8);
  puRam0000000100060bd0 = puVar1;
  return;
}



/* Entry: 1000398b0; end: 1000398ef;  */

void FUN_1000398b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060bd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100042740;
  _swift_getWitnessTable(&UNK_100042740,&UNK_1000541a8);
  puRam0000000100060bd0 = puVar1;
  return;
}



/* Entry: 1000398f0; end: 10003993f;  */

undefined8 * FUN_1000398f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 100039940; end: 10003998f; +[SCHapticsManager sharedManager] */

void FUN_100039940(void)

{
  undefined8 uVar1;
  
  if (lRam0000000100062dd8 != -1) {
    _dispatch_once(0x100062dd8,&PTR___NSConcreteGlobalBlock_100054318);
  }
  uVar1 = uRam0000000100062dd0;
  _objc_retain_x19();
                    /* WARNING: Could not recover jumptable at 0x00010003b29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100050890)(uVar1);
  return;
}



/* Entry: 100039990; end: 1000399b7;  */

void FUN_100039990(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_PTR_10005ee98;
  _objc_alloc_init();
  ppuRam0000000100062dd0 = ppuVar1;
                    /* WARNING: Could not recover jumptable at 0x00010003b2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_x1_1000508c8)();
  return;
}



/* Entry: 1000399b8; end: 1000399f7; -[SCHapticsManager init] */

void FUN_1000399b8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_100054660;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_10005b548);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = 1;
  }
  return;
}



/* Entry: 1000399f8; end: 100039a47; -[SCHapticsManager generatorImpactLight] */

void FUN_1000399f8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_100050450;
    _objc_alloc();
    func_0x00010003c400();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release_x8(uVar2);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  _objc_retain_x20();
                    /* WARNING: Could not recover jumptable at 0x00010003b29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100050890)(lVar3);
  return;
}



/* Entry: 100039a48; end: 100039a97; -[SCHapticsManager generatorImpactMedium] */

void FUN_100039a48(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_100050450;
    _objc_alloc();
    func_0x00010003c400();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
    _objc_release_x8(uVar2);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  _objc_retain_x20();
                    /* WARNING: Could not recover jumptable at 0x00010003b29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100050890)(lVar3);
  return;
}



/* Entry: 100039a98; end: 100039ae7; -[SCHapticsManager generatorImpactHeavy] */

void FUN_100039a98(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_100050450;
    _objc_alloc();
    func_0x00010003c400();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release_x8(uVar2);
    lVar3 = *(long *)(param_1 + 0x20);
  }
  _objc_retain_x20();
                    /* WARNING: Could not recover jumptable at 0x00010003b29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100050890)(lVar3);
  return;
}



/* Entry: 100039ae8; end: 100039b37; -[SCHapticsManager generatorImpactSoft] */

void FUN_100039ae8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_100050450;
    _objc_alloc();
    func_0x00010003c400();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar1;
    _objc_release_x8(uVar2);
    lVar3 = *(long *)(param_1 + 0x28);
  }
  _objc_retain_x20();
                    /* WARNING: Could not recover jumptable at 0x00010003b29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100050890)(lVar3);
  return;
}



/* Entry: 100039b38; end: 100039b7f; -[SCHapticsManager generatorSelection] */

void FUN_100039b38(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UISelectionFeedbackGenerator_100050490;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release_x8(uVar2);
    lVar3 = *(long *)(param_1 + 0x30);
  }
  _objc_retain_x20();
                    /* WARNING: Could not recover jumptable at 0x00010003b29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100050890)(lVar3);
  return;
}



/* Entry: 100039b80; end: 100039bc7; -[SCHapticsManager generatorNotification] */

void FUN_100039b80(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UINotificationFeedbackGenerator_100050470;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar1;
    _objc_release_x8(uVar2);
    lVar3 = *(long *)(param_1 + 0x38);
  }
  _objc_retain_x20();
                    /* WARNING: Could not recover jumptable at 0x00010003b29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100050890)(lVar3);
  return;
}



/* Entry: 100039bc8; end: 100039c1f; -[SCHapticsManager prepare] */

void FUN_100039bc8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010003c540();
  if ((int)uVar1 != 0) {
    func_0x00010003c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003c920();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000508c0)(param_1);
    return;
  }
  return;
}



/* Entry: 100039c20; end: 100039c77; -[SCHapticsManager performFeedback:] */

void FUN_100039c20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_100050768;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_100039c78;
  puStack_28 = &UNK_100054338;
  uStack_20 = param_1;
  uStack_18 = param_3;
  __runOnMainThreadAsynchronouslyIfNecessary("APPSTORE",&puStack_40);
  return;
}



/* Entry: 100039c78; end: 100039caf;  */

void FUN_100039c78(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010003c540();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010003b6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_1000508a0)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__performFeedback__10005b280,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 100039cb0; end: 100039cbf;  */

void FUN_100039cb0(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010003b380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_100050930)(*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 100039cc0; end: 100039d1b; -[SCHapticsManager performFeedback:withIntensity:] */

void FUN_100039cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_100050768;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_100039d1c;
  puStack_30 = &UNK_100054368;
  uStack_28 = param_2;
  uStack_20 = param_4;
  uStack_18 = param_1;
  __runOnMainThreadAsynchronouslyIfNecessary("APPSTORE",&puStack_48);
  return;
}



/* Entry: 100039d1c; end: 100039d57;  */

void FUN_100039d1c(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010003c540();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010003b6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_1000508a0)
              (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
               PTR_s__performFeedback_withIntensity__10005b288,*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 100039d58; end: 100039f5f; -[SCHapticsManager _performFeedback:] */

void FUN_100039d58(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 4) {
    if (param_3 < 2) {
      if (param_3 == 0) {
        func_0x00010003c0c0(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (param_3 != 1) {
          return;
        }
        func_0x00010003c0c0(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      if (param_3 != 2) {
        if (param_3 != 3) {
          return;
        }
        func_0x00010003c060(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010003c1a0();
        _objc_release_x20();
        func_0x00010003c060();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_100039f34;
      }
      func_0x00010003c0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010003c760();
    _objc_release_x20();
    func_0x00010003c0c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 < 6) {
    if (param_3 == 4) {
      func_0x00010003c080(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010003c1a0();
      _objc_release_x20();
      func_0x00010003c080();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_3 != 5) {
        return;
      }
      func_0x00010003c040(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010003c1a0();
      _objc_release_x20();
      func_0x00010003c040();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_3 == 6) {
    func_0x00010003c0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003c1a0();
    _objc_release_x20();
    func_0x00010003c0a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != 7) {
      if (param_3 != 8) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010003b050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__AudioServicesPlaySystemSound_100050560)(0xfff);
      return;
    }
    func_0x00010003c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003cba0();
    _objc_release_x20();
    func_0x00010003c0e0();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_100039f34:
  func_0x00010003c920();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(param_1);
  return;
}



/* Entry: 100039f60; end: 10003a0b7; -[SCHapticsManager _performFeedback:withIntensity:] */

void FUN_100039f60(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  double dVar1;
  
  dVar1 = 1.0;
  if (param_1 <= 1.0) {
    dVar1 = param_1;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  if (param_4 < 5) {
    if (param_4 == 3) {
      func_0x00010003c060(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010003c1c0(dVar1);
      _objc_release_x20();
      func_0x00010003c060();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_4 != 4) {
LAB_10003b6c0:
                    /* WARNING: Could not recover jumptable at 0x00010003b6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_1000508a0)(param_2,PTR_s__performFeedback__10005b280);
        return;
      }
      func_0x00010003c080(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010003c1c0(dVar1);
      _objc_release_x20();
      func_0x00010003c080();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_4 == 5) {
    func_0x00010003c040(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003c1c0(dVar1);
    _objc_release_x20();
    func_0x00010003c040();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_4 != 6) goto LAB_10003b6c0;
    func_0x00010003c0a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003c1c0(dVar1);
    _objc_release_x20();
    func_0x00010003c0a0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010003c920();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(param_2);
  return;
}



/* Entry: 10003a0b8; end: 10003a1c7; -[SCHapticsManager hapticUserInteractionStarted] */

ulong FUN_10003a0b8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  char acStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_100050780;
  builtin_strncpy(acStack_50,"userInteractionStarted",0x17);
  func_0x00010003d6e0(PTR__OBJC_CLASS___NSString_100050318,param_2,acStack_50);
  _objc_retainAutoreleasedReturnValue();
  _NSSelectorFromString();
  _objc_release_x21();
  uVar1 = param_1;
  func_0x00010003c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_respondsToSelector();
  uVar2 = uVar1;
  _objc_release_x21();
  if ((uVar1 & 1) == 0) {
    if (*(long *)PTR____stack_chk_guard_100050780 == lStack_38) {
      return uVar2;
    }
  }
  else {
    func_0x00010003c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010003c880();
    if (*(long *)PTR____stack_chk_guard_100050780 == lStack_38) goto _objc_release;
  }
  param_1 = uVar2;
  ___stack_chk_fail();
  lVar3 = *(long *)PTR____stack_chk_guard_100050780;
  func_0x00010003d6e0(PTR__OBJC_CLASS___NSString_100050318);
  _objc_retainAutoreleasedReturnValue();
  _NSSelectorFromString();
  _objc_release_x21();
  uVar1 = param_1;
  func_0x00010003c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_respondsToSelector();
  uVar2 = uVar1;
  _objc_release_x21();
  if ((uVar1 & 1) == 0) {
    if (*(long *)PTR____stack_chk_guard_100050780 == lVar3) {
      return uVar2;
    }
  }
  else {
    func_0x00010003c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010003c880();
    if (*(long *)PTR____stack_chk_guard_100050780 == lVar3) {
_objc_release:
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_1000508c0)(param_1);
      return param_1;
    }
  }
  ___stack_chk_fail();
  return (ulong)*(byte *)(uVar2 + 8);
}



/* Entry: 10003a1c8; end: 10003a2d7; -[SCHapticsManager hapticUserInteractionEnded] */

ulong FUN_10003a1c8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  char acStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_100050780;
  builtin_strncpy(acStack_50,"userInteractionEnded",0x15);
  func_0x00010003d6e0(PTR__OBJC_CLASS___NSString_100050318,param_2,acStack_50);
  _objc_retainAutoreleasedReturnValue();
  _NSSelectorFromString();
  _objc_release_x21();
  uVar1 = param_1;
  func_0x00010003c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_respondsToSelector();
  uVar2 = uVar1;
  _objc_release_x21();
  if ((uVar1 & 1) == 0) {
    if (*(long *)PTR____stack_chk_guard_100050780 == lStack_38) {
      return uVar2;
    }
  }
  else {
    func_0x00010003c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010003c880();
    if (*(long *)PTR____stack_chk_guard_100050780 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_1000508c0)(param_1);
      return param_1;
    }
  }
  ___stack_chk_fail();
  return (ulong)*(byte *)(uVar2 + 8);
}



/* Entry: 10003a2d8; end: 10003a2df; -[SCHapticsManager isFeedbackEnabled] */

undefined1 FUN_10003a2d8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10003a2e0; end: 10003a2e7; -[SCHapticsManager setFeedbackEnabled:] */

void FUN_10003a2e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10003a2e8; end: 10003a313; -[SCHapticsManager setGeneratorImpactLight:] */

void FUN_10003a2e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain_x19();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(uVar1);
  return;
}



/* Entry: 10003a314; end: 10003a33f; -[SCHapticsManager setGeneratorImpactMedium:] */

void FUN_10003a314(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain_x19();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(uVar1);
  return;
}



/* Entry: 10003a340; end: 10003a36b; -[SCHapticsManager setGeneratorImpactHeavy:] */

void FUN_10003a340(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain_x19();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(uVar1);
  return;
}



/* Entry: 10003a36c; end: 10003a397; -[SCHapticsManager setGeneratorImpactSoft:] */

void FUN_10003a36c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain_x19();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(uVar1);
  return;
}



/* Entry: 10003a398; end: 10003a3c3; -[SCHapticsManager setGeneratorSelection:] */

void FUN_10003a398(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain_x19();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(uVar1);
  return;
}



/* Entry: 10003a3c4; end: 10003a3ef; -[SCHapticsManager setGeneratorNotification:] */

void FUN_10003a3c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain_x19();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(uVar1);
  return;
}



/* Entry: 10003a3f0; end: 10003a47f; -[SCHapticsManager .cxx_destruct] */

void FUN_10003a3f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010003b428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000509a0)(param_1 + 0x10,0);
  return;
}



/* Entry: 10003a480; end: 10003a4e3; -[SCMainQueuePerformerImpl init] */

undefined1 * FUN_10003a480(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_30;
  puStack_28 = PTR_PTR_100054668;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10005b548);
  puVar1 = PTR___dispatch_main_q_100050788;
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain_x20();
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined **)((long)puVar2 + 8) = puVar1;
    _objc_release_x8(uVar3);
    *(undefined8 *)((long)puVar2 + 0x10) = 0;
  }
  return (undefined1 *)puVar2;
}



/* Entry: 10003a4e4; end: 10003a553; -[SCMainQueuePerformerImpl initWithCaller:] */

undefined1 * FUN_10003a4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  puStack_38 = PTR_PTR_100054668;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_10005b548);
  puVar1 = PTR___dispatch_main_q_100050788;
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain_x21();
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined **)((long)puVar2 + 8) = puVar1;
    _objc_release_x8(uVar3);
    *(undefined8 *)((long)puVar2 + 0x10) = param_3;
  }
  return (undefined1 *)puVar2;
}



/* Entry: 10003a554; end: 10003a59b; -[SCMainQueuePerformerImpl perform:] */

void FUN_10003a554(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _SCMainThreadTracingBlock(param_3,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async(uVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(param_3);
  return;
}



/* Entry: 10003a59c; end: 10003a60f; -[SCMainQueuePerformerImpl performWithQoS:block:] */

void FUN_10003a59c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _SCMainThreadTracingBlock(param_4,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x20;
  _dispatch_block_create_with_qos_class(0x20,param_3,0,param_4);
  _objc_release_x21();
  _dispatch_async(*(undefined8 *)(param_1 + 8),uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(uVar1);
  return;
}



/* Entry: 10003a610; end: 10003a6b3; -[SCMainQueuePerformerImpl performWithEnforcedInheritedQoS:] */

void FUN_10003a610(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _SCMainThreadTracingBlock(param_3,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_100050768;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10003a6b4;
  puStack_40 = &UNK_100054398;
  uStack_38 = param_3;
  _objc_retain_x20();
  uVar1 = 0x20;
  _dispatch_block_create(0x20,&puStack_58);
  _dispatch_async(*(undefined8 *)(param_1 + 8),uVar1);
  _objc_release_x21();
  _objc_release_x8(uStack_38);
  _objc_release_x20();
  return;
}



/* Entry: 10003a6b4; end: 10003a6cf;  */

void FUN_10003a6b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003a6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10003a6d0; end: 10003a733; -[SCMainQueuePerformerImpl performWithEnforcedBlockQoS:] */

void FUN_10003a6d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _SCBlockCreateByCopyingAttributes(param_3,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = param_3;
  _SCMainThreadTracingBlock();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async(uVar1,uVar2);
  _objc_release_x19();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(param_3);
  return;
}



/* Entry: 10003a734; end: 10003a7af; -[SCMainQueuePerformerImpl performImmediatelyIfCurrentPerformer:] */

void FUN_10003a734(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain_x2();
  lVar1 = param_1;
  func_0x00010003c500();
  if ((int)lVar1 == 0) {
    func_0x00010003c820(param_1);
  }
  else {
    lVar1 = param_3;
    _SCMainThreadTracingBlock(param_3,*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    (**(code **)(lVar1 + 0x10))(lVar1);
    param_3 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(param_3);
  return;
}


