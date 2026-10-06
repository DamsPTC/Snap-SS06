/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104597764; end: 104597797;  */

void FUN_104597764(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  _swift_bridgeObjectRetain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_5);
  return;
}



/* Entry: 104597798; end: 10459779b;  */

bool FUN_104597798(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar2 & 1) != 0)) &&
     ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar2 & 1) != 0)))) {
    bVar1 = param_1[4] == param_2[4];
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10459779c; end: 10459782f;  */

void FUN_10459779c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[2],unaff_x20[3]);
  __ss6HasherV8_combineyySuF(unaff_x20[4]);
  return;
}



/* Entry: 104597830; end: 1045978ab;  */

void FUN_104597830(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  uVar5 = unaff_x20[4];
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar1,uVar3);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar2,uVar4);
  __ss6HasherV8_combineyySuF(uVar5);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045978ac; end: 1045978fb;  */

void FUN_1045978ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  return;
}



/* Entry: 1045978fc; end: 104597973;  */

void FUN_1045978fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  uVar5 = unaff_x20[4];
  __ss6HasherV5_seedABSi_tcfC(auStack_88);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar1,uVar3);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar2,uVar4);
  __ss6HasherV8_combineyySuF(uVar5);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104597974; end: 1045979bb;  */

uint FUN_104597974(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_104597c9c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1045979bc; end: 104597af3;  */

undefined1  [16] FUN_1045979bc(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  bVar5 = *(byte *)(param_1 + 0x10);
  pcVar2 = "JSON encoding error";
  if (bVar5 != 2) {
    pcVar2 = "ssage+TextFormatAdditions.swift";
  }
  pcVar1 = "Stream decoding error";
  if (bVar5 != 0) {
    pcVar1 = "JSON decoding error";
  }
  uVar3 = 0xd000000000000013;
  if (bVar5 < 2) {
    pcVar2 = pcVar1;
    uVar3 = 0xd000000000000015;
  }
  __sSS6appendyySSF(uVar3,(ulong)pcVar2 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar2 | 0x8000000000000000);
  __sSS6appendyySSF(0x2074612820,0xe500000000000000);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&uStack_68,&uStack_40,&UNK_11078a098,PTR___ss26DefaultStringInterpolationVN_11034ec00,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  __sSS6appendyySSF(0x203a29,0xe300000000000000);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _swift_bridgeObjectRetain(uVar4);
  __sSS6appendyySSF(uVar3,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  auVar6._8_8_ = uStack_38;
  auVar6._0_8_ = uStack_40;
  return auVar6;
}



/* Entry: 104597af4; end: 104597afb;  */

undefined1  [16] FUN_104597af4(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  long lVar7;
  long *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar7 = *unaff_x20;
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  bVar5 = *(byte *)(lVar7 + 0x10);
  pcVar2 = "JSON encoding error";
  if (bVar5 != 2) {
    pcVar2 = "ssage+TextFormatAdditions.swift";
  }
  pcVar1 = "Stream decoding error";
  if (bVar5 != 0) {
    pcVar1 = "JSON decoding error";
  }
  uVar3 = 0xd000000000000013;
  if (bVar5 < 2) {
    pcVar2 = pcVar1;
    uVar3 = 0xd000000000000015;
  }
  __sSS6appendyySSF(uVar3,(ulong)pcVar2 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar2 | 0x8000000000000000);
  __sSS6appendyySSF(0x2074612820,0xe500000000000000);
  uStack_60 = *(undefined8 *)(lVar7 + 0x30);
  uStack_68 = *(undefined8 *)(lVar7 + 0x28);
  uStack_50 = *(undefined8 *)(lVar7 + 0x40);
  uStack_58 = *(undefined8 *)(lVar7 + 0x38);
  uStack_48 = *(undefined8 *)(lVar7 + 0x48);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&uStack_68,&uStack_40,&UNK_11078a098,PTR___ss26DefaultStringInterpolationVN_11034ec00,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  __sSS6appendyySSF(0x203a29,0xe300000000000000);
  uVar3 = *(undefined8 *)(lVar7 + 0x18);
  uVar4 = *(undefined8 *)(lVar7 + 0x20);
  _swift_bridgeObjectRetain(uVar4);
  __sSS6appendyySSF(uVar3,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  auVar6._8_8_ = uStack_38;
  auVar6._0_8_ = uStack_40;
  return auVar6;
}



/* Entry: 104597afc; end: 104597beb;  */

undefined1  [16] FUN_104597afc(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  uStack_68 = CONCAT71(uStack_68._1_7_,*(undefined1 *)(param_1 + 0x10));
  puVar4 = &UNK_11078a018;
  puVar3 = &uStack_68;
  __sSS10reflectingSSx_tclufC();
  puStack_40 = puVar3;
  puStack_38 = puVar4;
  __sSS6appendyySSF(0x2074612820,0xe500000000000000);
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  puVar4 = &UNK_11078a098;
  __sSS10reflectingSSx_tclufC(&uStack_68,&UNK_11078a098);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x203a29,0xe300000000000000);
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  _swift_bridgeObjectRetain();
  puVar4 = PTR___sSSN_11034da80;
  __sSS10reflectingSSx_tclufC(&uStack_68,PTR___sSSN_11034da80);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  auVar2._8_8_ = puStack_38;
  auVar2._0_8_ = puStack_40;
  return auVar2;
}



/* Entry: 104597bec; end: 104597bfb;  */

undefined1  [16] FUN_104597bec(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  long *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  lVar4 = *unaff_x20;
  uStack_68 = CONCAT71(uStack_68._1_7_,*(undefined1 *)(lVar4 + 0x10));
  puVar5 = &UNK_11078a018;
  puVar3 = &uStack_68;
  __sSS10reflectingSSx_tclufC();
  puStack_40 = puVar3;
  puStack_38 = puVar5;
  __sSS6appendyySSF(0x2074612820,0xe500000000000000);
  uStack_68 = *(undefined8 *)(lVar4 + 0x28);
  uStack_60 = *(undefined8 *)(lVar4 + 0x30);
  uStack_58 = *(undefined8 *)(lVar4 + 0x38);
  uVar1 = *(undefined8 *)(lVar4 + 0x40);
  uStack_48 = *(undefined8 *)(lVar4 + 0x48);
  uStack_50 = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  puVar5 = &UNK_11078a098;
  __sSS10reflectingSSx_tclufC(&uStack_68,&UNK_11078a098);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x203a29,0xe300000000000000);
  uStack_68 = *(undefined8 *)(lVar4 + 0x18);
  uStack_60 = *(undefined8 *)(lVar4 + 0x20);
  _swift_bridgeObjectRetain();
  puVar5 = PTR___sSSN_11034da80;
  __sSS10reflectingSSx_tclufC(&uStack_68,PTR___sSSN_11034da80);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  auVar2._8_8_ = puStack_38;
  auVar2._0_8_ = puStack_40;
  return auVar2;
}



/* Entry: 104597bfc; end: 104597c9b;  */

long FUN_104597bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_104597744();
  _swift_allocObject();
  *(undefined1 *)(lVar1 + 0x10) = param_6;
  *(undefined8 *)(lVar1 + 0x18) = 0xd00000000000003c;
  *(undefined8 *)(lVar1 + 0x20) = 0x800000010f207ca0;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  *(undefined8 *)(lVar1 + 0x30) = param_2;
  *(undefined8 *)(lVar1 + 0x38) = param_3;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  *(undefined8 *)(lVar1 + 0x48) = param_5;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  return lVar1;
}



/* Entry: 104597c9c; end: 104597d17;  */

bool FUN_104597c9c(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar2 & 1) != 0)) &&
     ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar2 & 1) != 0)))) {
    bVar1 = param_1[4] == param_2[4];
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 104597d18; end: 104597d1b;  */

void FUN_104597d18(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087518 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd190d8;
  _swift_getWitnessTable(&UNK_10dd190d8,&UNK_11078a018);
  puRam0000000113087518 = puVar1;
  return;
}



/* Entry: 104597d1c; end: 104597d5b;  */

void FUN_104597d1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087518 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd190d8;
  _swift_getWitnessTable(&UNK_10dd190d8,&UNK_11078a018);
  puRam0000000113087518 = puVar1;
  return;
}



/* Entry: 104597d5c; end: 104597d5f;  */

void FUN_104597d5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087520 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd19140;
  _swift_getWitnessTable(&UNK_10dd19140,&UNK_11078a098);
  puRam0000000113087520 = puVar1;
  return;
}



/* Entry: 104597d60; end: 104597d9f;  */

void FUN_104597d60(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087520 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd19140;
  _swift_getWitnessTable(&UNK_10dd19140,&UNK_11078a098);
  puRam0000000113087520 = puVar1;
  return;
}



/* Entry: 104597da0; end: 104597dbf;  */

undefined1  [16] FUN_104597da0(void)

{
  return ZEXT816(0x110789f98);
}



/* Entry: 104597dc0; end: 104597e57;  */

long FUN_104597dc0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104597e58; end: 104597ecb;  */

undefined8 * FUN_104597e58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 104597ecc; end: 104597f17;  */

undefined8 * FUN_104597ecc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 104597f18; end: 10459815f;  */

int FUN_104597f18(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104598160; end: 10459819f;  */

void FUN_104598160(void)

{
  undefined *puVar1;
  
  if (puRam00000001130875d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd192c0;
  _swift_getWitnessTable(&UNK_10dd192c0,&UNK_11078a1b8);
  puRam00000001130875d8 = puVar1;
  return;
}



/* Entry: 1045981a0; end: 1045981cf;  */

bool FUN_1045981a0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1045981d0; end: 104598277;  */

void FUN_1045981d0(void)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar4 = *(long *)(unaff_x20 + 0x58);
  if (((0 < lVar4) &&
      (pcVar1 = *(char **)(unaff_x20 + 0x28), pcVar1 != *(char **)(unaff_x20 + 0x30))) &&
     ((*pcVar1 == ';' || (*pcVar1 == ',')))) {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_1045ab5a4();
  }
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x98);
  FUN_1045a89a8(&uStack_50,uVar3,*(undefined8 *)(unaff_x20 + 0xa0),*(undefined2 *)(unaff_x20 + 0x60)
               );
  if ((unaff_x21 == 0) && (((uint)uVar3 & 0xff) != 1)) {
    if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104598278);
      (*pcVar2)();
    }
    *(long *)(unaff_x20 + 0x58) = lVar4 + 1;
  }
  return;
}



/* Entry: 104598278; end: 10459839b;  */

void FUN_104598278(float *param_1,uint param_2)

{
  char *pcVar1;
  float *pfVar2;
  undefined1 uVar3;
  long unaff_x20;
  char *pcVar4;
  float fVar5;
  
  pfVar2 = param_1;
  FUN_1045ab5a4();
  pcVar4 = *(char **)(unaff_x20 + 0x28);
  pcVar1 = *(char **)(unaff_x20 + 0x30);
  if ((pcVar4 == pcVar1) || (*pcVar4 != ':')) {
    uVar3 = 0;
LAB_104598320:
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,pfVar2,0,0);
    *(undefined1 *)pfVar2 = uVar3;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar4 + 1;
    FUN_1045ab5a4();
    func_0x0001045ac0f8();
    if ((param_2 & 0xff) == 1) {
      pcVar4 = *(char **)(unaff_x20 + 0x28);
      if ((pcVar4 != pcVar1) && (*pcVar4 == '-')) {
        *(char **)(unaff_x20 + 0x28) = pcVar4 + 1;
      }
      pfVar2 = (float *)0x112d48d68;
      func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
      _swift_initStaticObject();
      FUN_1045ac294();
      if (((ulong)pfVar2 & 1) == 0) {
        *(char **)(unaff_x20 + 0x28) = pcVar4;
        FUN_1045ac324();
        if (((ulong)pfVar2 & 0xff00000000) == 0x100000000) {
          uVar3 = 1;
          goto LAB_104598320;
        }
        fVar5 = SUB84(pfVar2,0);
      }
      else {
        fVar5 = NAN;
      }
    }
    else {
      fVar5 = (float)(double)pfVar2;
    }
    *param_1 = fVar5;
  }
  return;
}



/* Entry: 10459839c; end: 1045984bb;  */

void FUN_10459839c(undefined4 *param_1,uint param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  long unaff_x20;
  char *pcVar4;
  
  puVar2 = param_1;
  FUN_1045ab5a4();
  pcVar4 = *(char **)(unaff_x20 + 0x28);
  pcVar1 = *(char **)(unaff_x20 + 0x30);
  if ((pcVar4 == pcVar1) || (*pcVar4 != ':')) {
    uVar3 = 0;
LAB_104598440:
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,puVar2,0,0);
    *(undefined1 *)puVar2 = uVar3;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar4 + 1;
    FUN_1045ab5a4();
    func_0x0001045ac0f8();
    if ((param_2 & 0xff) == 1) {
      pcVar4 = *(char **)(unaff_x20 + 0x28);
      if ((pcVar4 != pcVar1) && (*pcVar4 == '-')) {
        *(char **)(unaff_x20 + 0x28) = pcVar4 + 1;
      }
      puVar2 = (undefined4 *)0x112d48d68;
      func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
      _swift_initStaticObject();
      FUN_1045ac294();
      if (((ulong)puVar2 & 1) == 0) {
        *(char **)(unaff_x20 + 0x28) = pcVar4;
        FUN_1045ac324();
        if (((ulong)puVar2 & 0xff00000000) == 0x100000000) {
          uVar3 = 1;
          goto LAB_104598440;
        }
      }
      else {
        puVar2 = (undefined4 *)0x7fc00000;
      }
    }
    else {
      puVar2 = (undefined4 *)(ulong)(uint)(float)(double)puVar2;
    }
    *param_1 = (int)puVar2;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}



/* Entry: 1045984bc; end: 10459892f;  */

void FUN_1045984bc(double *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  bool bVar5;
  double *pdVar6;
  double *pdVar7;
  double dVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined1 uVar12;
  long unaff_x20;
  double dVar13;
  double dVar14;
  float fVar15;
  
  pdVar7 = param_1;
  FUN_1045ab5a4();
  pbVar10 = *(byte **)(unaff_x20 + 0x28);
  pbVar3 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar10 == pbVar3) || (*pbVar10 != 0x3a)) {
LAB_1045987b4:
    uVar12 = 0;
    goto LAB_1045987b8;
  }
  *(byte **)(unaff_x20 + 0x28) = pbVar10 + 1;
  FUN_1045ab5a4();
  uVar9 = (uint)param_2;
  pbVar10 = *(byte **)(unaff_x20 + 0x28);
  if ((pbVar10 != pbVar3) && (*pbVar10 == 0x5b)) {
    *(byte **)(unaff_x20 + 0x28) = pbVar10 + 1;
    FUN_1045ab5a4();
    bVar5 = true;
    do {
      pdVar6 = (double *)0x112d48d68;
      pbVar10 = *(byte **)(unaff_x20 + 0x28);
      if (pbVar10 == pbVar3) {
        if (!bVar5) goto LAB_104598638;
      }
      else {
        bVar4 = *pbVar10;
        if (bVar4 == 0x5d) {
          *(byte **)(unaff_x20 + 0x28) = pbVar10 + 1;
          FUN_1045ab5a4();
          return;
        }
        if (!bVar5) {
          if (bVar4 < 0x24) {
            do {
              if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) {
                if ((ulong)bVar4 != 0x23) break;
                pbVar11 = pbVar10 + 1;
                do {
                  pbVar10 = pbVar3;
                  if (pbVar11 == pbVar3) break;
                  pbVar10 = pbVar11 + 1;
                  bVar4 = *pbVar11;
                  pbVar11 = pbVar10;
                } while (bVar4 != 10 && bVar4 != 0xd);
              }
              else {
                pbVar10 = pbVar10 + 1;
              }
              *(byte **)(unaff_x20 + 0x28) = pbVar10;
              if ((pbVar10 == pbVar3) || (bVar4 = *pbVar10, 0x23 < bVar4)) break;
            } while( true );
          }
LAB_104598638:
          if ((pbVar10 != pbVar3) && (*pbVar10 == 0x2c)) {
            do {
              pbVar10 = pbVar10 + 1;
LAB_104598650:
              *(byte **)(unaff_x20 + 0x28) = pbVar10;
              if ((pbVar10 == pbVar3) || (bVar4 = *pbVar10, 0x23 < bVar4)) goto LAB_1045985d4;
            } while ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) != 0);
            if ((ulong)bVar4 != 0x23) goto LAB_1045985d4;
            pbVar11 = pbVar10 + 1;
            do {
              pbVar10 = pbVar3;
              if (pbVar11 == pbVar3) break;
              pbVar10 = pbVar11 + 1;
              bVar4 = *pbVar11;
              pbVar11 = pbVar10;
            } while (bVar4 != 10 && bVar4 != 0xd);
            goto LAB_104598650;
          }
          goto LAB_1045987b4;
        }
      }
LAB_1045985d4:
      func_0x0001045ac0f8();
      if (((uint)param_2 & 0xff) == 1) {
        pbVar10 = *(byte **)(unaff_x20 + 0x28);
        if ((pbVar10 != pbVar3) && (*pbVar10 == 0x2d)) {
          *(byte **)(unaff_x20 + 0x28) = pbVar10 + 1;
        }
        func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
        param_2 = 0x113087618;
        pdVar7 = pdVar6;
        _swift_initStaticObject();
        FUN_1045ac294();
        if (((ulong)pdVar7 & 1) == 0) {
          *(byte **)(unaff_x20 + 0x28) = pbVar10;
          if (pbVar10 == pbVar3) goto LAB_1045988c4;
          bVar4 = *pbVar10;
          if (bVar4 == 0x2d) {
            *(byte **)(unaff_x20 + 0x28) = pbVar10 + 1;
          }
          pdVar7 = pdVar6;
          _swift_initStaticObject(pdVar6,0x1130876d0);
          param_2 = 0;
          _swift_initStaticObject();
          FUN_1045ac294();
          if ((((ulong)pdVar7 & 1) == 0) && (FUN_1045ac294(), ((ulong)pdVar6 & 1) == 0))
          goto LAB_1045988e8;
          fVar15 = -INFINITY;
          if (bVar4 != 0x2d) {
            fVar15 = INFINITY;
          }
        }
        else {
          fVar15 = NAN;
        }
      }
      else {
        fVar15 = (float)(double)pdVar7;
      }
      dVar14 = *param_1;
      pdVar7 = (double *)dVar14;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)pdVar7 & 1) == 0) {
        param_2 = *(long *)((long)dVar14 + 0x10) + 1;
        pdVar7 = (double *)0x0;
        func_0x0001002ecb70(0,param_2,1,dVar14);
        dVar14 = (double)pdVar7;
      }
      uVar2 = *(ulong *)((long)dVar14 + 0x10);
      lVar1 = uVar2 + 1;
      if (*(ulong *)((long)dVar14 + 0x18) >> 1 <= uVar2) {
        pdVar7 = (double *)(ulong)(1 < *(ulong *)((long)dVar14 + 0x18));
        param_2 = lVar1;
        func_0x0001002ecb70(pdVar7,lVar1,1,dVar14);
        dVar14 = (double)pdVar7;
      }
      bVar5 = false;
      *(long *)((long)dVar14 + 0x10) = lVar1;
      *(float *)((long)dVar14 + uVar2 * 4 + 0x20) = fVar15;
      *param_1 = dVar14;
    } while( true );
  }
  func_0x0001045ac0f8();
  if ((uVar9 & 0xff) != 1) {
    fVar15 = (float)(double)pdVar7;
LAB_104598878:
    dVar13 = *param_1;
    dVar14 = dVar13;
    _swift_isUniquelyReferenced_nonNull_native();
    dVar8 = dVar13;
    if (((ulong)dVar14 & 1) == 0) {
      dVar8 = 0.0;
      func_0x0001002ecb70(0,*(long *)((long)dVar13 + 0x10) + 1,1,dVar13);
    }
    uVar2 = *(ulong *)((long)dVar8 + 0x10);
    dVar14 = dVar8;
    if (*(ulong *)((long)dVar8 + 0x18) >> 1 <= uVar2) {
      dVar14 = (double)(ulong)(1 < *(ulong *)((long)dVar8 + 0x18));
      func_0x0001002ecb70(dVar14,uVar2 + 1,1,dVar8);
    }
    *(ulong *)((long)dVar14 + 0x10) = uVar2 + 1;
    *(float *)((long)dVar14 + uVar2 * 4 + 0x20) = fVar15;
    *param_1 = dVar14;
    return;
  }
  pbVar10 = *(byte **)(unaff_x20 + 0x28);
  if ((pbVar10 != pbVar3) && (*pbVar10 == 0x2d)) {
    *(byte **)(unaff_x20 + 0x28) = pbVar10 + 1;
  }
  pdVar7 = (double *)0x112d48d68;
  func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
  _swift_initStaticObject();
  FUN_1045ac294();
  if (((ulong)pdVar7 & 1) != 0) {
    fVar15 = NAN;
    goto LAB_104598878;
  }
  *(byte **)(unaff_x20 + 0x28) = pbVar10;
  FUN_1045ac324();
  if (((ulong)pdVar7 & 0xff00000000) != 0x100000000) {
    fVar15 = SUB84(pdVar7,0);
    goto LAB_104598878;
  }
LAB_1045988c4:
  uVar12 = 1;
LAB_1045987b8:
  FUN_1045407b0();
  _swift_allocError(&UNK_11078a540,pdVar7,0,0);
  *(undefined1 *)pdVar7 = uVar12;
  _swift_willThrow();
  return;
LAB_1045988e8:
  *(byte **)(unaff_x20 + 0x28) = pbVar10;
  pdVar7 = pdVar6;
  goto LAB_1045988c4;
}



/* Entry: 104598930; end: 104598a53;  */

void FUN_104598930(double *param_1,uint param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  long unaff_x20;
  char *pcVar3;
  double *pdVar4;
  
  pdVar4 = param_1;
  FUN_1045ab5a4();
  pcVar3 = *(char **)(unaff_x20 + 0x28);
  pcVar1 = *(char **)(unaff_x20 + 0x30);
  if ((pcVar3 == pcVar1) || (*pcVar3 != ':')) {
    uVar2 = 0;
LAB_1045989d8:
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,pdVar4,0,0);
    *(undefined1 *)pdVar4 = uVar2;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
    FUN_1045ab5a4();
    func_0x0001045ac0f8();
    if ((param_2 & 0xff) == 1) {
      pcVar3 = *(char **)(unaff_x20 + 0x28);
      if ((pcVar3 != pcVar1) && (*pcVar3 == '-')) {
        *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
      }
      pdVar4 = (double *)0x112d48d68;
      func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
      _swift_initStaticObject();
      FUN_1045ac294();
      if (((ulong)pdVar4 & 1) == 0) {
        *(char **)(unaff_x20 + 0x28) = pcVar3;
        FUN_1045ac324();
        if (((ulong)pdVar4 & 0xff00000000) == 0x100000000) {
          uVar2 = 1;
          goto LAB_1045989d8;
        }
        pdVar4 = (double *)(double)SUB84(pdVar4,0);
      }
      else {
        pdVar4 = (double *)0x7ff8000000000000;
      }
    }
    *param_1 = (double)pdVar4;
  }
  return;
}



/* Entry: 104598a54; end: 104598b73;  */

void FUN_104598a54(double *param_1,uint param_2)

{
  char *pcVar1;
  double *pdVar2;
  undefined1 uVar3;
  long unaff_x20;
  char *pcVar4;
  
  pdVar2 = param_1;
  FUN_1045ab5a4();
  pcVar4 = *(char **)(unaff_x20 + 0x28);
  pcVar1 = *(char **)(unaff_x20 + 0x30);
  if ((pcVar4 == pcVar1) || (*pcVar4 != ':')) {
    uVar3 = 0;
LAB_104598af8:
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,pdVar2,0,0);
    *(undefined1 *)pdVar2 = uVar3;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar4 + 1;
    FUN_1045ab5a4();
    func_0x0001045ac0f8();
    if ((param_2 & 0xff) == 1) {
      pcVar4 = *(char **)(unaff_x20 + 0x28);
      if ((pcVar4 != pcVar1) && (*pcVar4 == '-')) {
        *(char **)(unaff_x20 + 0x28) = pcVar4 + 1;
      }
      pdVar2 = (double *)0x112d48d68;
      func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
      _swift_initStaticObject();
      FUN_1045ac294();
      if (((ulong)pdVar2 & 1) == 0) {
        *(char **)(unaff_x20 + 0x28) = pcVar4;
        FUN_1045ac324();
        if (((ulong)pdVar2 & 0xff00000000) == 0x100000000) {
          uVar3 = 1;
          goto LAB_104598af8;
        }
        pdVar2 = (double *)(double)SUB84(pdVar2,0);
      }
      else {
        pdVar2 = (double *)0x7ff8000000000000;
      }
    }
    *param_1 = (double)pdVar2;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}



/* Entry: 104598b74; end: 104598fe3;  */

void FUN_104598b74(ulong *param_1,long param_2)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 uVar11;
  long unaff_x20;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  
  puVar5 = param_1;
  FUN_1045ab5a4();
  pbVar9 = *(byte **)(unaff_x20 + 0x28);
  pbVar2 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar9 == pbVar2) || (*pbVar9 != 0x3a)) {
LAB_104598e68:
    uVar11 = 0;
    goto LAB_104598e6c;
  }
  *(byte **)(unaff_x20 + 0x28) = pbVar9 + 1;
  FUN_1045ab5a4();
  uVar8 = (uint)param_2;
  pbVar9 = *(byte **)(unaff_x20 + 0x28);
  if ((pbVar9 != pbVar2) && (*pbVar9 == 0x5b)) {
    *(byte **)(unaff_x20 + 0x28) = pbVar9 + 1;
    FUN_1045ab5a4();
    bVar4 = true;
    do {
      puVar13 = (undefined1 *)0x112d48d68;
      pbVar9 = *(byte **)(unaff_x20 + 0x28);
      if (pbVar9 == pbVar2) {
        if (!bVar4) goto LAB_104598cf0;
      }
      else {
        bVar3 = *pbVar9;
        if (bVar3 == 0x5d) {
          *(byte **)(unaff_x20 + 0x28) = pbVar9 + 1;
          FUN_1045ab5a4();
          return;
        }
        if (!bVar4) {
          if (bVar3 < 0x24) {
            do {
              if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
                if ((ulong)bVar3 != 0x23) break;
                pbVar10 = pbVar9 + 1;
                do {
                  pbVar9 = pbVar2;
                  if (pbVar10 == pbVar2) break;
                  pbVar9 = pbVar10 + 1;
                  bVar3 = *pbVar10;
                  pbVar10 = pbVar9;
                } while (bVar3 != 10 && bVar3 != 0xd);
              }
              else {
                pbVar9 = pbVar9 + 1;
              }
              *(byte **)(unaff_x20 + 0x28) = pbVar9;
              if ((pbVar9 == pbVar2) || (bVar3 = *pbVar9, 0x23 < bVar3)) break;
            } while( true );
          }
LAB_104598cf0:
          if ((pbVar9 != pbVar2) && (*pbVar9 == 0x2c)) {
            do {
              pbVar9 = pbVar9 + 1;
LAB_104598d08:
              *(byte **)(unaff_x20 + 0x28) = pbVar9;
              if ((pbVar9 == pbVar2) || (bVar3 = *pbVar9, 0x23 < bVar3)) goto LAB_104598c8c;
            } while ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0);
            if ((ulong)bVar3 != 0x23) goto LAB_104598c8c;
            pbVar10 = pbVar9 + 1;
            do {
              pbVar9 = pbVar2;
              if (pbVar10 == pbVar2) break;
              pbVar9 = pbVar10 + 1;
              bVar3 = *pbVar10;
              pbVar10 = pbVar9;
            } while (bVar3 != 10 && bVar3 != 0xd);
            goto LAB_104598d08;
          }
          goto LAB_104598e68;
        }
      }
LAB_104598c8c:
      func_0x0001045ac0f8();
      puVar14 = (undefined1 *)puVar5;
      if (((uint)param_2 & 0xff) == 1) {
        pbVar9 = *(byte **)(unaff_x20 + 0x28);
        if ((pbVar9 != pbVar2) && (*pbVar9 == 0x2d)) {
          *(byte **)(unaff_x20 + 0x28) = pbVar9 + 1;
        }
        func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
        param_2 = 0x1130875e8;
        puVar5 = (ulong *)puVar13;
        _swift_initStaticObject();
        FUN_1045ac294();
        if (((ulong)puVar5 & 1) == 0) {
          *(byte **)(unaff_x20 + 0x28) = pbVar9;
          if (pbVar9 == pbVar2) goto LAB_104598f74;
          bVar3 = *pbVar9;
          if (bVar3 == 0x2d) {
            *(byte **)(unaff_x20 + 0x28) = pbVar9 + 1;
          }
          puVar14 = puVar13;
          _swift_initStaticObject(puVar13,0x1130876d0);
          param_2 = 0;
          _swift_initStaticObject();
          FUN_1045ac294();
          if ((((ulong)puVar14 & 1) == 0) && (FUN_1045ac294(), ((ulong)puVar13 & 1) == 0))
          goto LAB_104598f9c;
          puVar14 = (undefined1 *)0xfff0000000000000;
          if (bVar3 != 0x2d) {
            puVar14 = (undefined1 *)0x7ff0000000000000;
          }
        }
        else {
          puVar14 = (undefined1 *)0x7ff8000000000000;
        }
      }
      puVar13 = (undefined1 *)*param_1;
      puVar5 = (ulong *)puVar13;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar5 & 1) == 0) {
        param_2 = *(long *)(puVar13 + 0x10) + 1;
        puVar5 = (ulong *)0x0;
        func_0x0001014dd0d8(0,param_2,1,puVar13);
        puVar13 = (undefined1 *)puVar5;
      }
      uVar6 = *(ulong *)(puVar13 + 0x10);
      lVar1 = uVar6 + 1;
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar6) {
        puVar5 = (ulong *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
        param_2 = lVar1;
        func_0x0001014dd0d8(puVar5,lVar1,1,puVar13);
        puVar13 = (undefined1 *)puVar5;
      }
      bVar4 = false;
      *(long *)(puVar13 + 0x10) = lVar1;
      *(undefined1 **)(puVar13 + uVar6 * 8 + 0x20) = puVar14;
      *param_1 = (ulong)puVar13;
    } while( true );
  }
  func_0x0001045ac0f8();
  if ((uVar8 & 0xff) != 1) {
LAB_104598f28:
    uVar12 = *param_1;
    uVar6 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar7 = uVar12;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      func_0x0001014dd0d8(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
    }
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar12 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x0001014dd0d8(uVar12,uVar6 + 1,1,uVar7);
    }
    *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
    *(ulong **)(uVar12 + uVar6 * 8 + 0x20) = puVar5;
    *param_1 = uVar12;
    return;
  }
  pbVar9 = *(byte **)(unaff_x20 + 0x28);
  if ((pbVar9 != pbVar2) && (*pbVar9 == 0x2d)) {
    *(byte **)(unaff_x20 + 0x28) = pbVar9 + 1;
  }
  puVar5 = (ulong *)0x112d48d68;
  func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
  _swift_initStaticObject();
  FUN_1045ac294();
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = (ulong *)0x7ff8000000000000;
    goto LAB_104598f28;
  }
  *(byte **)(unaff_x20 + 0x28) = pbVar9;
  FUN_1045ac324();
  if (((ulong)puVar5 & 0xff00000000) != 0x100000000) {
    puVar5 = (ulong *)(double)SUB84(puVar5,0);
    goto LAB_104598f28;
  }
LAB_104598f74:
  uVar11 = 1;
LAB_104598e6c:
  FUN_1045407b0();
  _swift_allocError(&UNK_11078a540,puVar5,0,0);
  *(undefined1 *)puVar5 = uVar11;
  _swift_willThrow();
  return;
LAB_104598f9c:
  *(byte **)(unaff_x20 + 0x28) = pbVar9;
  puVar5 = (ulong *)puVar13;
  goto LAB_104598f74;
}



/* Entry: 104598fe4; end: 10459908b;  */

void FUN_104598fe4(int *param_1)

{
  char *pcVar1;
  int *piVar2;
  undefined1 uVar3;
  long unaff_x20;
  long unaff_x21;
  
  piVar2 = param_1;
  FUN_1045ab5a4();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    uVar3 = 0;
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_1045ab5a4();
    FUN_1045a908c();
    if (unaff_x21 != 0) {
      return;
    }
    if (piVar2 == (int *)(long)(int)piVar2) {
      *param_1 = (int)piVar2;
      return;
    }
    uVar3 = 1;
  }
  FUN_1045407b0();
  _swift_allocError(&UNK_11078a540,piVar2,0,0);
  *(undefined1 *)piVar2 = uVar3;
  _swift_willThrow();
  return;
}



/* Entry: 10459908c; end: 104599137;  */

void FUN_10459908c(int *param_1)

{
  char *pcVar1;
  int *piVar2;
  undefined1 uVar3;
  long unaff_x20;
  long unaff_x21;
  
  piVar2 = param_1;
  FUN_1045ab5a4();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    uVar3 = 0;
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_1045ab5a4();
    FUN_1045a908c();
    if (unaff_x21 != 0) {
      return;
    }
    if (piVar2 == (int *)(long)(int)piVar2) {
      *param_1 = (int)piVar2;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
    uVar3 = 1;
  }
  FUN_1045407b0();
  _swift_allocError(&UNK_11078a540,piVar2,0,0);
  *(undefined1 *)piVar2 = uVar3;
  _swift_willThrow();
  return;
}



/* Entry: 104599138; end: 10459949b;  */

void FUN_104599138(ulong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 uVar9;
  long unaff_x20;
  ulong uVar10;
  long unaff_x21;
  ulong *puVar11;
  ulong *puVar12;
  
  puVar4 = param_1;
  FUN_1045ab5a4();
  pbVar7 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar7 == pbVar1) || (*pbVar7 != 0x3a)) {
LAB_1045993a0:
    uVar9 = 0;
  }
  else {
    *(byte **)(unaff_x20 + 0x28) = pbVar7 + 1;
    FUN_1045ab5a4();
    pbVar7 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar7 != pbVar1) && (*pbVar7 == 0x5b)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar7 + 1;
      FUN_1045ab5a4();
      bVar3 = true;
      do {
        pbVar7 = *(byte **)(unaff_x20 + 0x28);
        if (pbVar7 == pbVar1) {
          if (!bVar3) goto LAB_10459928c;
        }
        else {
          bVar2 = *pbVar7;
          if (bVar2 == 0x5d) {
            *(byte **)(unaff_x20 + 0x28) = pbVar7 + 1;
            FUN_1045ab5a4();
            return;
          }
          if (!bVar3) {
            if (bVar2 < 0x24) {
              do {
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) break;
                  pbVar8 = pbVar7 + 1;
                  while (pbVar7 = pbVar1, pbVar8 != pbVar1) {
                    pbVar7 = pbVar8 + 1;
                    bVar2 = *pbVar8;
                    if ((bVar2 == 10) || (pbVar8 = pbVar7, bVar2 == 0xd)) break;
                  }
                }
                else {
                  pbVar7 = pbVar7 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar7;
                if ((pbVar7 == pbVar1) || (bVar2 = *pbVar7, 0x23 < bVar2)) break;
              } while( true );
            }
LAB_10459928c:
            if ((pbVar7 != pbVar1) && (*pbVar7 == 0x2c)) {
              do {
                pbVar7 = pbVar7 + 1;
LAB_1045992a4:
                *(byte **)(unaff_x20 + 0x28) = pbVar7;
                if ((pbVar7 == pbVar1) || (bVar2 = *pbVar7, 0x23 < bVar2)) goto LAB_104599240;
              } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
              if ((ulong)bVar2 != 0x23) goto LAB_104599240;
              pbVar8 = pbVar7 + 1;
              while (pbVar7 = pbVar1, pbVar8 != pbVar1) {
                pbVar7 = pbVar8 + 1;
                bVar2 = *pbVar8;
                if ((bVar2 == 10) || (pbVar8 = pbVar7, bVar2 == 0xd)) break;
              }
              goto LAB_1045992a4;
            }
            goto LAB_1045993a0;
          }
        }
LAB_104599240:
        if (pbVar7 == pbVar1) goto LAB_104599408;
        pbVar8 = pbVar7 + 1;
        if (*pbVar7 == 0x2d) {
          *(byte **)(unaff_x20 + 0x28) = pbVar8;
          if ((pbVar8 == pbVar1) || (*pbVar8 - 0x3a < 0xfffffff6)) goto LAB_104599408;
          FUN_1045a9148();
          if (unaff_x21 != 0) {
            return;
          }
          if ((long)puVar4 < 0) goto LAB_104599408;
          puVar11 = (ulong *)-(long)puVar4;
        }
        else {
          FUN_1045a9148();
          if (unaff_x21 != 0) {
            return;
          }
          puVar11 = puVar4;
          if ((long)puVar4 < 0) goto LAB_104599408;
        }
        if (puVar11 != (ulong *)(long)(int)puVar11) goto LAB_104599408;
        puVar12 = (ulong *)*param_1;
        puVar4 = puVar12;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar4 & 1) == 0) {
          puVar4 = (ulong *)0x0;
          FUN_10454e6b8(0,puVar12[2] + 1,1,puVar12);
          puVar12 = puVar4;
        }
        uVar5 = puVar12[2];
        if (puVar12[3] >> 1 <= uVar5) {
          puVar4 = (ulong *)(ulong)(1 < puVar12[3]);
          FUN_10454e6b8(puVar4,uVar5 + 1,1,puVar12);
          puVar12 = puVar4;
        }
        bVar3 = false;
        puVar12[2] = uVar5 + 1;
        *(int *)((long)puVar12 + uVar5 * 4 + 0x20) = (int)puVar11;
        *param_1 = (ulong)puVar12;
      } while( true );
    }
    FUN_1045a908c();
    if (unaff_x21 != 0) {
      return;
    }
    if (puVar4 == (ulong *)(long)(int)puVar4) {
      uVar10 = *param_1;
      uVar5 = uVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar6 = uVar10;
      if ((uVar5 & 1) == 0) {
        uVar6 = 0;
        FUN_10454e6b8(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      }
      uVar5 = *(ulong *)(uVar6 + 0x10);
      uVar10 = uVar6;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_10454e6b8(uVar10,uVar5 + 1,1,uVar6);
      }
      *(ulong *)(uVar10 + 0x10) = uVar5 + 1;
      *(int *)(uVar10 + uVar5 * 4 + 0x20) = (int)puVar4;
      *param_1 = uVar10;
      return;
    }
LAB_104599408:
    uVar9 = 1;
  }
  FUN_1045407b0();
  _swift_allocError(&UNK_11078a540,puVar4,0,0);
  *(undefined1 *)puVar4 = uVar9;
  _swift_willThrow();
  return;
}



/* Entry: 10459949c; end: 10459980b;  */

void FUN_10459949c(ulong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 uVar10;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  
  puVar11 = param_1;
  FUN_1045ab5a4();
  pbVar8 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar8 != pbVar1) && (*pbVar8 == 0x3a)) {
    *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
    FUN_1045ab5a4();
    pbVar8 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar8 == pbVar1) || (*pbVar8 != 0x5b)) {
      FUN_1045a908c();
      if (unaff_x21 != 0) {
        return;
      }
      uVar12 = *param_1;
      uVar6 = uVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = uVar12;
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
        func_0x000101cef030(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      }
      uVar6 = *(ulong *)(uVar7 + 0x10);
      uVar12 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
        uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        func_0x000101cef030(uVar12,uVar6 + 1,1,uVar7);
      }
      *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
      *(ulong **)(uVar12 + uVar6 * 8 + 0x20) = puVar11;
      *param_1 = uVar12;
      return;
    }
    *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
    FUN_1045ab5a4();
    bVar3 = true;
    do {
      pbVar8 = *(byte **)(unaff_x20 + 0x28);
      if (pbVar8 == pbVar1) {
        if (!bVar3) goto LAB_1045995f0;
      }
      else {
        bVar2 = *pbVar8;
        if (bVar2 == 0x5d) {
          *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
          FUN_1045ab5a4();
          return;
        }
        if (!bVar3) {
          if (bVar2 < 0x24) {
            do {
              if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                if ((ulong)bVar2 != 0x23) break;
                pbVar9 = pbVar8 + 1;
                while (pbVar8 = pbVar1, pbVar9 != pbVar1) {
                  pbVar8 = pbVar9 + 1;
                  bVar2 = *pbVar9;
                  if ((bVar2 == 10) || (pbVar9 = pbVar8, bVar2 == 0xd)) break;
                }
              }
              else {
                pbVar8 = pbVar8 + 1;
              }
              *(byte **)(unaff_x20 + 0x28) = pbVar8;
              if ((pbVar8 == pbVar1) || (bVar2 = *pbVar8, 0x23 < bVar2)) break;
            } while( true );
          }
LAB_1045995f0:
          if ((pbVar8 != pbVar1) && (*pbVar8 == 0x2c)) {
            do {
              pbVar8 = pbVar8 + 1;
LAB_104599608:
              *(byte **)(unaff_x20 + 0x28) = pbVar8;
              if ((pbVar8 == pbVar1) || (bVar2 = *pbVar8, 0x23 < bVar2)) goto LAB_1045995a4;
            } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
            if ((ulong)bVar2 != 0x23) goto LAB_1045995a4;
            pbVar9 = pbVar8 + 1;
            while (pbVar8 = pbVar1, pbVar9 != pbVar1) {
              pbVar8 = pbVar9 + 1;
              bVar2 = *pbVar9;
              if ((bVar2 == 10) || (pbVar9 = pbVar8, bVar2 == 0xd)) break;
            }
            goto LAB_104599608;
          }
          break;
        }
      }
LAB_1045995a4:
      if (pbVar8 == pbVar1) goto LAB_1045997b4;
      pbVar9 = pbVar8 + 1;
      if (*pbVar8 == 0x2d) {
        *(byte **)(unaff_x20 + 0x28) = pbVar9;
        if ((pbVar9 == pbVar1) || (*pbVar9 - 0x3a < 0xfffffff6)) goto LAB_1045997b4;
        FUN_1045a9148();
        if (unaff_x21 != 0) {
          return;
        }
        if (-1 < (long)puVar11) {
          puVar11 = (ulong *)-(long)puVar11;
          goto LAB_104599680;
        }
        if (puVar11 != (ulong *)0x8000000000000000) goto LAB_1045997b4;
        puVar13 = (ulong *)*param_1;
        puVar11 = puVar13;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar4 = (ulong *)0x8000000000000000;
      }
      else {
        FUN_1045a9148();
        if (unaff_x21 != 0) {
          return;
        }
        if ((long)puVar11 < 0) goto LAB_1045997b4;
LAB_104599680:
        puVar13 = (ulong *)*param_1;
        puVar5 = puVar13;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar4 = puVar11;
        puVar11 = puVar5;
      }
      if (((ulong)puVar11 & 1) == 0) {
        puVar11 = (ulong *)0x0;
        func_0x000101cef030(0,puVar13[2] + 1,1,puVar13);
        puVar13 = puVar11;
      }
      uVar6 = puVar13[2];
      if (puVar13[3] >> 1 <= uVar6) {
        puVar11 = (ulong *)(ulong)(1 < puVar13[3]);
        func_0x000101cef030(puVar11,uVar6 + 1,1,puVar13);
        puVar13 = puVar11;
      }
      bVar3 = false;
      puVar13[2] = uVar6 + 1;
      puVar13[uVar6 + 4] = (ulong)puVar4;
      *param_1 = (ulong)puVar13;
    } while( true );
  }
  uVar10 = 0;
LAB_104599720:
  FUN_1045407b0();
  _swift_allocError(&UNK_11078a540,puVar11,0,0);
  *(undefined1 *)puVar11 = uVar10;
  _swift_willThrow();
  return;
LAB_1045997b4:
  uVar10 = 1;
  goto LAB_104599720;
}



/* Entry: 10459980c; end: 1045998b3;  */

void FUN_10459980c(undefined4 *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  long unaff_x20;
  long unaff_x21;
  
  puVar2 = param_1;
  FUN_1045ab5a4();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    uVar3 = 0;
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_1045ab5a4();
    FUN_1045a9148();
    if (unaff_x21 != 0) {
      return;
    }
    if ((ulong)puVar2 >> 0x20 == 0) {
      *param_1 = (int)puVar2;
      return;
    }
    uVar3 = 1;
  }
  FUN_1045407b0();
  _swift_allocError(&UNK_11078a540,puVar2,0,0);
  *(undefined1 *)puVar2 = uVar3;
  _swift_willThrow();
  return;
}



/* Entry: 1045998b4; end: 10459995f;  */

void FUN_1045998b4(undefined4 *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  long unaff_x20;
  long unaff_x21;
  
  puVar2 = param_1;
  FUN_1045ab5a4();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    uVar3 = 0;
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_1045ab5a4();
    FUN_1045a9148();
    if (unaff_x21 != 0) {
      return;
    }
    if ((ulong)puVar2 >> 0x20 == 0) {
      *param_1 = (int)puVar2;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
    uVar3 = 1;
  }
  FUN_1045407b0();
  _swift_allocError(&UNK_11078a540,puVar2,0,0);
  *(undefined1 *)puVar2 = uVar3;
  _swift_willThrow();
  return;
}



/* Entry: 104599960; end: 104599c73;  */

void FUN_104599960(ulong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 uVar10;
  long unaff_x20;
  ulong uVar11;
  long unaff_x21;
  undefined1 *puVar12;
  
  puVar4 = param_1;
  FUN_1045ab5a4();
  pbVar8 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar8 == pbVar1) || (*pbVar8 != 0x3a)) {
LAB_104599b78:
    uVar10 = 0;
  }
  else {
    *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
    FUN_1045ab5a4();
    pbVar8 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar8 != pbVar1) && (*pbVar8 == 0x5b)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
      FUN_1045ab5a4();
      bVar3 = true;
      do {
        pbVar8 = *(byte **)(unaff_x20 + 0x28);
        if (pbVar8 == pbVar1) {
          if (!bVar3) goto LAB_104599ac0;
        }
        else {
          bVar2 = *pbVar8;
          if (bVar2 == 0x5d) {
            *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
            FUN_1045ab5a4();
            return;
          }
          if (!bVar3) {
            if (bVar2 < 0x24) {
              do {
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) break;
                  pbVar9 = pbVar8 + 1;
                  while (pbVar8 = pbVar1, pbVar9 != pbVar1) {
                    pbVar8 = pbVar9 + 1;
                    bVar2 = *pbVar9;
                    if ((bVar2 == 10) || (pbVar9 = pbVar8, bVar2 == 0xd)) break;
                  }
                }
                else {
                  pbVar8 = pbVar8 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                if ((pbVar8 == pbVar1) || (bVar2 = *pbVar8, 0x23 < bVar2)) break;
              } while( true );
            }
LAB_104599ac0:
            if ((pbVar8 != pbVar1) && (*pbVar8 == 0x2c)) {
              do {
                pbVar8 = pbVar8 + 1;
LAB_104599ad8:
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                if ((pbVar8 == pbVar1) || (bVar2 = *pbVar8, 0x23 < bVar2)) goto LAB_104599a68;
              } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
              if ((ulong)bVar2 != 0x23) goto LAB_104599a68;
              pbVar9 = pbVar8 + 1;
              while (pbVar8 = pbVar1, pbVar9 != pbVar1) {
                pbVar8 = pbVar9 + 1;
                bVar2 = *pbVar9;
                if ((bVar2 == 10) || (pbVar9 = pbVar8, bVar2 == 0xd)) break;
              }
              goto LAB_104599ad8;
            }
            goto LAB_104599b78;
          }
        }
LAB_104599a68:
        FUN_1045a9148();
        if (unaff_x21 != 0) {
          return;
        }
        if ((ulong)puVar4 >> 0x20 != 0) goto LAB_104599be0;
        puVar12 = (undefined1 *)*param_1;
        puVar5 = puVar12;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar5 & 1) == 0) {
          puVar5 = (undefined1 *)0x0;
          func_0x00010454e6cc(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
          puVar12 = puVar5;
        }
        uVar6 = *(ulong *)(puVar12 + 0x10);
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar6) {
          puVar5 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
          func_0x00010454e6cc(puVar5,uVar6 + 1,1,puVar12);
          puVar12 = puVar5;
        }
        bVar3 = false;
        *(ulong *)(puVar12 + 0x10) = uVar6 + 1;
        *(int *)(puVar12 + uVar6 * 4 + 0x20) = (int)puVar4;
        *param_1 = (ulong)puVar12;
        puVar4 = (ulong *)puVar5;
      } while( true );
    }
    FUN_1045a9148();
    if (unaff_x21 != 0) {
      return;
    }
    if ((ulong)puVar4 >> 0x20 == 0) {
      uVar11 = *param_1;
      uVar6 = uVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = uVar11;
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
        func_0x00010454e6cc(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
      }
      uVar6 = *(ulong *)(uVar7 + 0x10);
      uVar11 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        func_0x00010454e6cc(uVar11,uVar6 + 1,1,uVar7);
      }
      *(ulong *)(uVar11 + 0x10) = uVar6 + 1;
      *(int *)(uVar11 + uVar6 * 4 + 0x20) = (int)puVar4;
      *param_1 = uVar11;
      return;
    }
LAB_104599be0:
    uVar10 = 1;
  }
  FUN_1045407b0();
  _swift_allocError(&UNK_11078a540,puVar4,0,0);
  *(undefined1 *)puVar4 = uVar10;
  _swift_willThrow();
  return;
}



/* Entry: 104599c74; end: 104599d0b;  */

void FUN_104599c74(undefined8 *param_1,code *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  long unaff_x20;
  long unaff_x21;
  
  puVar2 = param_1;
  FUN_1045ab5a4();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,puVar2,0,0);
    *(undefined1 *)puVar2 = 0;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_1045ab5a4();
    (*param_2)();
    if (unaff_x21 == 0) {
      *param_1 = puVar2;
    }
  }
  return;
}



/* Entry: 104599d0c; end: 104599da7;  */

void FUN_104599d0c(undefined8 *param_1,code *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  long unaff_x20;
  long unaff_x21;
  
  puVar2 = param_1;
  FUN_1045ab5a4();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,puVar2,0,0);
    *(undefined1 *)puVar2 = 0;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_1045ab5a4();
    (*param_2)();
    if (unaff_x21 == 0) {
      *param_1 = puVar2;
      *(undefined1 *)(param_1 + 1) = 0;
    }
  }
  return;
}



/* Entry: 104599da8; end: 10459a09b;  */

void FUN_104599da8(ulong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long unaff_x20;
  long unaff_x21;
  ulong uVar10;
  ulong *puVar11;
  
  puVar4 = param_1;
  FUN_1045ab5a4();
  pbVar8 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar8 == pbVar1) || (*pbVar8 != 0x3a)) {
LAB_104599fb8:
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,puVar4,0,0);
    *(undefined1 *)puVar4 = 0;
    _swift_willThrow();
  }
  else {
    *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
    FUN_1045ab5a4();
    pbVar8 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar8 != pbVar1) && (*pbVar8 == 0x5b)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
      FUN_1045ab5a4();
      bVar3 = true;
      do {
        pbVar8 = *(byte **)(unaff_x20 + 0x28);
        if (pbVar8 == pbVar1) {
          if (!bVar3) goto LAB_104599f00;
        }
        else {
          bVar2 = *pbVar8;
          if (bVar2 == 0x5d) {
            *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
            FUN_1045ab5a4();
            return;
          }
          if (!bVar3) {
            if (bVar2 < 0x24) {
              do {
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) break;
                  pbVar9 = pbVar8 + 1;
                  while (pbVar8 = pbVar1, pbVar9 != pbVar1) {
                    pbVar8 = pbVar9 + 1;
                    bVar2 = *pbVar9;
                    if ((bVar2 == 10) || (pbVar9 = pbVar8, bVar2 == 0xd)) break;
                  }
                }
                else {
                  pbVar8 = pbVar8 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                if ((pbVar8 == pbVar1) || (bVar2 = *pbVar8, 0x23 < bVar2)) break;
              } while( true );
            }
LAB_104599f00:
            if ((pbVar8 != pbVar1) && (*pbVar8 == 0x2c)) {
              do {
                pbVar8 = pbVar8 + 1;
LAB_104599f18:
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                if ((pbVar8 == pbVar1) || (bVar2 = *pbVar8, 0x23 < bVar2)) goto LAB_104599eb0;
              } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
              if ((ulong)bVar2 != 0x23) goto LAB_104599eb0;
              pbVar9 = pbVar8 + 1;
              while (pbVar8 = pbVar1, pbVar9 != pbVar1) {
                pbVar8 = pbVar9 + 1;
                bVar2 = *pbVar9;
                if ((bVar2 == 10) || (pbVar9 = pbVar8, bVar2 == 0xd)) break;
              }
              goto LAB_104599f18;
            }
            goto LAB_104599fb8;
          }
        }
LAB_104599eb0:
        FUN_1045a9148();
        if (unaff_x21 != 0) {
          return;
        }
        puVar11 = (ulong *)*param_1;
        puVar5 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar5 & 1) == 0) {
          puVar5 = (ulong *)0x0;
          func_0x0001010bb1d4(0,puVar11[2] + 1,1,puVar11);
          puVar11 = puVar5;
        }
        uVar6 = puVar11[2];
        if (puVar11[3] >> 1 <= uVar6) {
          puVar5 = (ulong *)(ulong)(1 < puVar11[3]);
          func_0x0001010bb1d4(puVar5,uVar6 + 1,1,puVar11);
          puVar11 = puVar5;
        }
        bVar3 = false;
        puVar11[2] = uVar6 + 1;
        puVar11[uVar6 + 4] = (ulong)puVar4;
        *param_1 = (ulong)puVar11;
        puVar4 = puVar5;
      } while( true );
    }
    FUN_1045a9148();
    if (unaff_x21 == 0) {
      uVar10 = *param_1;
      uVar6 = uVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = uVar10;
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
        func_0x0001010bb1d4(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      }
      uVar6 = *(ulong *)(uVar7 + 0x10);
      uVar10 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        func_0x0001010bb1d4(uVar10,uVar6 + 1,1,uVar7);
      }
      *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
      *(ulong **)(uVar10 + uVar6 * 8 + 0x20) = puVar4;
      *param_1 = uVar10;
    }
  }
  return;
}



/* Entry: 10459a09c; end: 10459a133;  */

void FUN_10459a09c(byte *param_1)

{
  char *pcVar1;
  byte bVar2;
  byte *pbVar3;
  long unaff_x20;
  long unaff_x21;
  
  pbVar3 = param_1;
  FUN_1045ab5a4();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,pbVar3,0,0);
    *pbVar3 = 0;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_1045ab5a4();
    bVar2 = (byte)pbVar3;
    FUN_1045a92f0();
    if (unaff_x21 == 0) {
      *param_1 = bVar2 & 1;
    }
  }
  return;
}



/* Entry: 10459a134; end: 10459a42f;  */

void FUN_10459a134(ulong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long unaff_x20;
  long unaff_x21;
  ulong uVar10;
  ulong *puVar11;
  
  puVar4 = param_1;
  FUN_1045ab5a4();
  pbVar8 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar8 == pbVar1) || (*pbVar8 != 0x3a)) {
LAB_10459a348:
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,puVar4,0,0);
    *(undefined1 *)puVar4 = 0;
    _swift_willThrow();
  }
  else {
    *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
    FUN_1045ab5a4();
    pbVar8 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar8 != pbVar1) && (*pbVar8 == 0x5b)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
      FUN_1045ab5a4();
      bVar3 = true;
      do {
        pbVar8 = *(byte **)(unaff_x20 + 0x28);
        if (pbVar8 == pbVar1) {
          if (!bVar3) goto LAB_10459a290;
        }
        else {
          bVar2 = *pbVar8;
          if (bVar2 == 0x5d) {
            *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
            FUN_1045ab5a4();
            return;
          }
          if (!bVar3) {
            if (bVar2 < 0x24) {
              do {
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) break;
                  pbVar9 = pbVar8 + 1;
                  while (pbVar8 = pbVar1, pbVar9 != pbVar1) {
                    pbVar8 = pbVar9 + 1;
                    bVar2 = *pbVar9;
                    if ((bVar2 == 10) || (pbVar9 = pbVar8, bVar2 == 0xd)) break;
                  }
                }
                else {
                  pbVar8 = pbVar8 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                if ((pbVar8 == pbVar1) || (bVar2 = *pbVar8, 0x23 < bVar2)) break;
              } while( true );
            }
LAB_10459a290:
            if ((pbVar8 != pbVar1) && (*pbVar8 == 0x2c)) {
              do {
                pbVar8 = pbVar8 + 1;
LAB_10459a2a8:
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                if ((pbVar8 == pbVar1) || (bVar2 = *pbVar8, 0x23 < bVar2)) goto LAB_10459a23c;
              } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
              if ((ulong)bVar2 != 0x23) goto LAB_10459a23c;
              pbVar9 = pbVar8 + 1;
              while (pbVar8 = pbVar1, pbVar9 != pbVar1) {
                pbVar8 = pbVar9 + 1;
                bVar2 = *pbVar9;
                if ((bVar2 == 10) || (pbVar9 = pbVar8, bVar2 == 0xd)) break;
              }
              goto LAB_10459a2a8;
            }
            goto LAB_10459a348;
          }
        }
LAB_10459a23c:
        FUN_1045a92f0();
        if (unaff_x21 != 0) {
          return;
        }
        puVar11 = (ulong *)*param_1;
        puVar5 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar5 & 1) == 0) {
          puVar5 = (ulong *)0x0;
          func_0x00010454e7d8(0,puVar11[2] + 1,1,puVar11);
          puVar11 = puVar5;
        }
        uVar6 = puVar11[2];
        if (puVar11[3] >> 1 <= uVar6) {
          puVar5 = (ulong *)(ulong)(1 < puVar11[3]);
          func_0x00010454e7d8(puVar5,uVar6 + 1,1,puVar11);
          puVar11 = puVar5;
        }
        bVar3 = false;
        puVar11[2] = uVar6 + 1;
        *(byte *)((long)puVar11 + uVar6 + 0x20) = (byte)puVar4 & 1;
        *param_1 = (ulong)puVar11;
        puVar4 = puVar5;
      } while( true );
    }
    FUN_1045a92f0();
    if (unaff_x21 == 0) {
      uVar10 = *param_1;
      uVar6 = uVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = uVar10;
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
        func_0x00010454e7d8(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      }
      uVar6 = *(ulong *)(uVar7 + 0x10);
      uVar10 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        func_0x00010454e7d8(uVar10,uVar6 + 1,1,uVar7);
      }
      *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
      *(byte *)(uVar10 + uVar6 + 0x20) = (byte)puVar4 & 1;
      *param_1 = uVar10;
    }
  }
  return;
}



/* Entry: 10459a430; end: 10459a4d3;  */

void FUN_10459a430(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  long unaff_x20;
  long unaff_x21;
  
  puVar2 = param_1;
  FUN_1045ab5a4();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,puVar2,0,0);
    *(undefined1 *)puVar2 = 0;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_1045ab5a4();
    FUN_1045a9544();
    if (unaff_x21 == 0) {
      _swift_bridgeObjectRelease(param_1[1]);
      *param_1 = puVar2;
      param_1[1] = param_2;
    }
  }
  return;
}



/* Entry: 10459a4d4; end: 10459a577;  */

void FUN_10459a4d4(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  long unaff_x20;
  long unaff_x21;
  
  puVar2 = param_1;
  FUN_1045ab5a4();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,puVar2,0,0);
    *(undefined1 *)puVar2 = 0;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_1045ab5a4();
    FUN_1045a9544();
    if (unaff_x21 == 0) {
      _swift_bridgeObjectRelease(param_1[1]);
      *param_1 = puVar2;
      param_1[1] = param_2;
    }
  }
  return;
}



/* Entry: 10459a578; end: 10459a88f;  */

void FUN_10459a578(ulong *param_1,ulong param_2)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long unaff_x20;
  long unaff_x21;
  ulong uVar11;
  ulong *puVar12;
  
  puVar5 = param_1;
  FUN_1045ab5a4();
  pbVar9 = *(byte **)(unaff_x20 + 0x28);
  pbVar2 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar9 == pbVar2) || (*pbVar9 != 0x3a)) {
LAB_10459a79c:
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,puVar5,0,0);
    *(undefined1 *)puVar5 = 0;
    _swift_willThrow();
  }
  else {
    *(byte **)(unaff_x20 + 0x28) = pbVar9 + 1;
    FUN_1045ab5a4();
    pbVar9 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar9 != pbVar2) && (*pbVar9 == 0x5b)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar9 + 1;
      FUN_1045ab5a4();
      bVar4 = true;
      do {
        pbVar9 = *(byte **)(unaff_x20 + 0x28);
        if (pbVar9 == pbVar2) {
          if (!bVar4) goto LAB_10459a6e4;
        }
        else {
          bVar3 = *pbVar9;
          if (bVar3 == 0x5d) {
            *(byte **)(unaff_x20 + 0x28) = pbVar9 + 1;
            FUN_1045ab5a4();
            return;
          }
          if (!bVar4) {
            if (bVar3 < 0x24) {
              do {
                if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar3 != 0x23) break;
                  pbVar10 = pbVar9 + 1;
                  while (pbVar9 = pbVar2, pbVar10 != pbVar2) {
                    pbVar9 = pbVar10 + 1;
                    bVar3 = *pbVar10;
                    if ((bVar3 == 10) || (pbVar10 = pbVar9, bVar3 == 0xd)) break;
                  }
                }
                else {
                  pbVar9 = pbVar9 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar9;
                if ((pbVar9 == pbVar2) || (bVar3 = *pbVar9, 0x23 < bVar3)) break;
              } while( true );
            }
LAB_10459a6e4:
            if ((pbVar9 != pbVar2) && (*pbVar9 == 0x2c)) {
              do {
                pbVar9 = pbVar9 + 1;
LAB_10459a6fc:
                *(byte **)(unaff_x20 + 0x28) = pbVar9;
                if ((pbVar9 == pbVar2) || (bVar3 = *pbVar9, 0x23 < bVar3)) goto LAB_10459a684;
              } while ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0);
              if ((ulong)bVar3 != 0x23) goto LAB_10459a684;
              pbVar10 = pbVar9 + 1;
              while (pbVar9 = pbVar2, pbVar10 != pbVar2) {
                pbVar9 = pbVar10 + 1;
                bVar3 = *pbVar10;
                if ((bVar3 == 10) || (pbVar10 = pbVar9, bVar3 == 0xd)) break;
              }
              goto LAB_10459a6fc;
            }
            goto LAB_10459a79c;
          }
        }
LAB_10459a684:
        FUN_1045a9544();
        if (unaff_x21 != 0) {
          return;
        }
        puVar12 = (ulong *)*param_1;
        puVar6 = puVar12;
        uVar7 = param_2;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar6 & 1) == 0) {
          uVar7 = puVar12[2] + 1;
          puVar6 = (ulong *)0x0;
          func_0x0001000d182c(0,uVar7,1,puVar12);
          puVar12 = puVar6;
        }
        uVar11 = puVar12[2];
        uVar8 = uVar11 + 1;
        if (puVar12[3] >> 1 <= uVar11) {
          puVar6 = (ulong *)(ulong)(1 < puVar12[3]);
          uVar7 = uVar8;
          func_0x0001000d182c(puVar6,uVar8,1,puVar12);
          puVar12 = puVar6;
        }
        bVar4 = false;
        puVar12[2] = uVar8;
        puVar12[uVar11 * 2 + 4] = (ulong)puVar5;
        puVar12[uVar11 * 2 + 5] = param_2;
        *param_1 = (ulong)puVar12;
        puVar5 = puVar6;
        param_2 = uVar7;
      } while( true );
    }
    FUN_1045a9544();
    if (unaff_x21 == 0) {
      uVar11 = *param_1;
      uVar7 = uVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar8 = uVar11;
      if ((uVar7 & 1) == 0) {
        uVar8 = 0;
        func_0x0001000d182c(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
      }
      uVar7 = *(ulong *)(uVar8 + 0x10);
      uVar11 = uVar8;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar7) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
        func_0x0001000d182c(uVar11,uVar7 + 1,1,uVar8);
      }
      *(ulong *)(uVar11 + 0x10) = uVar7 + 1;
      lVar1 = uVar11 + uVar7 * 0x10;
      *(ulong **)(lVar1 + 0x20) = puVar5;
      *(ulong *)(lVar1 + 0x28) = param_2;
      *param_1 = uVar11;
    }
  }
  return;
}



/* Entry: 10459a890; end: 10459a93f;  */

void FUN_10459a890(undefined8 *param_1,code *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  
  puVar2 = param_1;
  pcVar3 = param_2;
  FUN_1045ab5a4();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,puVar2,0,0);
    *(undefined1 *)puVar2 = 0;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_1045ab5a4();
    FUN_1045a9728();
    if (unaff_x21 == 0) {
      (*param_2)(*param_1,param_1[1]);
      *param_1 = puVar2;
      param_1[1] = pcVar3;
    }
  }
  return;
}



/* Entry: 10459a940; end: 10459ac73;  */

void FUN_10459a940(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long unaff_x20;
  long unaff_x21;
  ulong uVar10;
  
  puVar5 = param_1;
  FUN_1045ab5a4();
  pbVar8 = *(byte **)(unaff_x20 + 0x28);
  pbVar2 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar8 == pbVar2) || (*pbVar8 != 0x3a)) {
LAB_10459ab6c:
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,puVar5,0,0);
    *(undefined1 *)puVar5 = 0;
    _swift_willThrow();
  }
  else {
    *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
    FUN_1045ab5a4();
    pbVar8 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar8 != pbVar2) && (*pbVar8 == 0x5b)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
      FUN_1045ab5a4();
      bVar4 = true;
      do {
        pbVar8 = *(byte **)(unaff_x20 + 0x28);
        if (pbVar8 == pbVar2) {
          if (!bVar4) goto LAB_10459aab4;
        }
        else {
          bVar3 = *pbVar8;
          if (bVar3 == 0x5d) {
            *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
            FUN_1045ab5a4();
            return;
          }
          if (!bVar4) {
            if (bVar3 < 0x24) {
              do {
                if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar3 != 0x23) break;
                  pbVar9 = pbVar8 + 1;
                  while (pbVar8 = pbVar2, pbVar9 != pbVar2) {
                    pbVar8 = pbVar9 + 1;
                    bVar3 = *pbVar9;
                    if ((bVar3 == 10) || (pbVar9 = pbVar8, bVar3 == 0xd)) break;
                  }
                }
                else {
                  pbVar8 = pbVar8 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                if ((pbVar8 == pbVar2) || (bVar3 = *pbVar8, 0x23 < bVar3)) break;
              } while( true );
            }
LAB_10459aab4:
            if ((pbVar8 != pbVar2) && (*pbVar8 == 0x2c)) {
              do {
                pbVar8 = pbVar8 + 1;
LAB_10459aacc:
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                if ((pbVar8 == pbVar2) || (bVar3 = *pbVar8, 0x23 < bVar3)) goto LAB_10459aa4c;
              } while ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0);
              if ((ulong)bVar3 != 0x23) goto LAB_10459aa4c;
              pbVar9 = pbVar8 + 1;
              while (pbVar8 = pbVar2, pbVar9 != pbVar2) {
                pbVar8 = pbVar9 + 1;
                bVar3 = *pbVar9;
                if ((bVar3 == 10) || (pbVar9 = pbVar8, bVar3 == 0xd)) break;
              }
              goto LAB_10459aacc;
            }
            goto LAB_10459ab6c;
          }
        }
LAB_10459aa4c:
        FUN_1045a9728();
        if (unaff_x21 != 0) {
          return;
        }
        uVar10 = *param_1;
        func_0x00010006c00c();
        uVar7 = uVar10;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar6 = uVar10;
        if ((uVar7 & 1) == 0) {
          uVar6 = 0;
          func_0x000100f23260(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
        }
        uVar7 = *(ulong *)(uVar6 + 0x10);
        uVar10 = uVar6;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar7) {
          uVar10 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
          func_0x000100f23260(uVar10,uVar7 + 1,1,uVar6);
        }
        *(ulong *)(uVar10 + 0x10) = uVar7 + 1;
        lVar1 = uVar10 + uVar7 * 0x10;
        *(ulong **)(lVar1 + 0x20) = puVar5;
        *(undefined8 *)(lVar1 + 0x28) = param_2;
        func_0x00010006c090();
        bVar4 = false;
        *param_1 = uVar10;
      } while( true );
    }
    FUN_1045a9728();
    if (unaff_x21 == 0) {
      uVar10 = *param_1;
      func_0x00010006c00c();
      uVar7 = uVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar6 = uVar10;
      if ((uVar7 & 1) == 0) {
        uVar6 = 0;
        func_0x000100f23260(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      }
      uVar7 = *(ulong *)(uVar6 + 0x10);
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar7) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        func_0x000100f23260(uVar10,uVar7 + 1,1,uVar6);
        uVar6 = uVar10;
      }
      *(ulong *)(uVar6 + 0x10) = uVar7 + 1;
      lVar1 = uVar6 + uVar7 * 0x10;
      *(ulong **)(lVar1 + 0x20) = puVar5;
      *(undefined8 *)(lVar1 + 0x28) = param_2;
      func_0x00010006c090();
      *param_1 = uVar6;
    }
  }
  return;
}



/* Entry: 10459ac74; end: 10459aecf;  */

void FUN_10459ac74(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar4;
  code *pcVar5;
  long unaff_x21;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar2 = (undefined1 *)0x0;
  uStack_70 = param_1;
  lStack_68 = param_3;
  __sSqMa(0,param_2);
  lVar6 = *(long *)(puVar2 + -8);
  puVar3 = puVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar8 = puVar7 + -extraout_x12;
  lVar9 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar4 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar4 - extraout_x12_00;
  FUN_1045a99e0();
  lVar1 = lStack_68;
  if (unaff_x21 != 0) {
    return;
  }
  lStack_78 = lVar4;
  if ((param_4 & 0xff) == 1) {
    FUN_1045a908c();
    if (puVar3 != (undefined1 *)(long)(int)puVar3) {
      FUN_1045407b0();
      _swift_allocError(&UNK_11078a540,puVar3,0,0);
      *puVar3 = 0;
      goto LAB_10459aec0;
    }
    (**(code **)(lVar1 + 0x20))(puVar7);
    puVar3 = puVar7;
    (**(code **)(lVar9 + 0x30))(puVar7,1,param_2);
    lVar10 = lStack_78;
    puVar8 = puVar7;
    if ((int)puVar3 != 1) {
      pcVar5 = *(code **)(lVar9 + 0x20);
      (*pcVar5)(lStack_78,puVar7,param_2);
      goto LAB_10459ae8c;
    }
  }
  else {
    func_0x000104557b40(puVar8);
    puVar3 = puVar8;
    (**(code **)(lVar9 + 0x30))(puVar8,1,param_2);
    if ((int)puVar3 != 1) {
      pcVar5 = *(code **)(lVar9 + 0x20);
      (*pcVar5)(lVar10,puVar8,param_2);
LAB_10459ae8c:
      (*pcVar5)(uStack_70,lVar10,param_2);
      return;
    }
  }
  (**(code **)(lVar6 + 8))(puVar8,puVar2);
  FUN_1045407b0();
  _swift_allocError(&UNK_11078a540,puVar8,0,0);
  *puVar8 = 8;
LAB_10459aec0:
  _swift_willThrow();
  return;
}



/* Entry: 10459aed0; end: 10459afff;  */

void FUN_10459aed0(undefined1 *param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + -8);
  puVar2 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  FUN_1045ab5a4();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,puVar2,0,0);
    *puVar2 = 0;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_1045ab5a4();
    FUN_10459ac74(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,
                  param_3);
    if (unaff_x21 == 0) {
      lVar3 = 0;
      __sSqMa(0,param_2);
      (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
      (**(code **)(lVar4 + 0x20))
                (param_1,&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                 param_2);
      (**(code **)(lVar4 + 0x38))(param_1,0,1,param_2);
    }
  }
  return;
}



/* Entry: 10459b000; end: 10459b107;  */

void FUN_10459b000(undefined1 *param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + -8);
  puVar2 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  FUN_1045ab5a4();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,puVar2,0,0);
    *puVar2 = 0;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_1045ab5a4();
    FUN_10459ac74(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,
                  param_3);
    if (unaff_x21 == 0) {
      (**(code **)(lVar3 + 8))(param_1,param_2);
      (**(code **)(lVar3 + 0x20))
                (param_1,&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                 param_2);
    }
  }
  return;
}



/* Entry: 10459b108; end: 10459b45f;  */

void FUN_10459b108(undefined1 *param_1,long param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  byte *pbVar7;
  byte *pbVar8;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined1 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)(param_2 + -8);
  puStack_70 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_68 + 0x40));
  puVar10 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_78 = (long)puVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar9 = (undefined1 *)(((long)puVar10 - extraout_x12) - extraout_x12_00);
  FUN_1045ab5a4();
  pbVar7 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar7 == pbVar1) || (*pbVar7 != 0x3a)) {
LAB_10459b384:
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,param_1,0,0);
    *param_1 = 0;
    _swift_willThrow();
  }
  else {
    *(byte **)(unaff_x20 + 0x28) = pbVar7 + 1;
    FUN_1045ab5a4();
    pbVar7 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar7 != pbVar1) && (*pbVar7 == 0x5b)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar7 + 1;
      FUN_1045ab5a4();
      bVar3 = true;
      do {
        pbVar7 = *(byte **)(unaff_x20 + 0x28);
        if (pbVar7 == pbVar1) {
          if (!bVar3) goto LAB_10459b30c;
        }
        else {
          bVar2 = *pbVar7;
          if (bVar2 == 0x5d) {
            *(byte **)(unaff_x20 + 0x28) = pbVar7 + 1;
            FUN_1045ab5a4();
            return;
          }
          if (!bVar3) {
            if (bVar2 < 0x24) {
              do {
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) break;
                  pbVar8 = pbVar7 + 1;
                  while (pbVar7 = pbVar1, pbVar8 != pbVar1) {
                    pbVar7 = pbVar8 + 1;
                    bVar2 = *pbVar8;
                    if ((bVar2 == 10) || (pbVar8 = pbVar7, bVar2 == 0xd)) break;
                  }
                }
                else {
                  pbVar7 = pbVar7 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar7;
                if ((pbVar7 == pbVar1) || (bVar2 = *pbVar7, 0x23 < bVar2)) break;
              } while( true );
            }
LAB_10459b30c:
            if ((pbVar7 != pbVar1) && (*pbVar7 == 0x2c)) {
              do {
                pbVar7 = pbVar7 + 1;
LAB_10459b324:
                *(byte **)(unaff_x20 + 0x28) = pbVar7;
                if ((pbVar7 == pbVar1) || (bVar2 = *pbVar7, 0x23 < bVar2)) goto LAB_10459b298;
              } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
              if ((ulong)bVar2 != 0x23) goto LAB_10459b298;
              pbVar8 = pbVar7 + 1;
              while (pbVar7 = pbVar1, pbVar8 != pbVar1) {
                pbVar7 = pbVar8 + 1;
                bVar2 = *pbVar8;
                if ((bVar2 == 10) || (pbVar8 = pbVar7, bVar2 == 0xd)) break;
              }
              goto LAB_10459b324;
            }
            goto LAB_10459b384;
          }
        }
LAB_10459b298:
        FUN_10459ac74(puVar9,param_2,param_3);
        lVar5 = lStack_68;
        lVar4 = lStack_78;
        if (unaff_x21 != 0) {
          return;
        }
        (**(code **)(lStack_68 + 0x10))(lStack_78,puVar9,param_2);
        uVar6 = 0;
        __sSaMa(0,param_2);
        __sSa6appendyyxnF(lVar4,uVar6);
        param_1 = puVar9;
        (**(code **)(lVar5 + 8))(puVar9,param_2);
        bVar3 = false;
      } while( true );
    }
    FUN_10459ac74(puVar10,param_2,param_3);
    lVar5 = lStack_68;
    lVar4 = lStack_78;
    if (unaff_x21 == 0) {
      (**(code **)(lStack_68 + 0x10))(lStack_78,puVar10,param_2);
      uVar6 = 0;
      __sSaMa(0,param_2);
      __sSa6appendyyxnF(lVar4,uVar6);
      (**(code **)(lVar5 + 8))(puVar10,param_2);
    }
  }
  return;
}



/* Entry: 10459b460; end: 10459bc13;  */

/* WARNING: Removing unreachable block (ram,0x00010459bbdc) */

void FUN_10459b460(undefined8 param_1,undefined *param_2,long param_3)

{
  char *pcVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  long extraout_x8;
  undefined1 *puVar16;
  long extraout_x8_00;
  code *pcVar17;
  code *pcVar18;
  byte *pbVar19;
  long lVar20;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long unaff_x21;
  long lVar21;
  long lVar22;
  byte *pbVar23;
  long lVar24;
  code *pcVar25;
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  byte *pbStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined1 uStack_19f;
  undefined6 uStack_19e;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar15 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar16 = &stack0xfffffffffffffd90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __sSqMa();
  lVar24 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar24 + 0x40));
  lVar20 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar20 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = lVar21 - extraout_x12_00;
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 != *(char **)(unaff_x20 + 0x30)) && (*pcVar1 == ':')) {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_1045ab5a4();
  }
  pcVar17 = *(code **)(lVar24 + 0x10);
  (*pcVar17)(lVar22,param_1,lVar6);
  pcVar25 = *(code **)(lVar15 + 0x30);
  lVar7 = lVar22;
  (*pcVar25)(lVar22,1,param_2);
  pcVar18 = *(code **)(lVar24 + 8);
  (*pcVar18)(lVar22,lVar6);
  uVar5 = (undefined1)lVar22;
  if ((int)lVar7 == 1) {
    (**(code **)(param_3 + 0x10))(lVar21,param_2);
    (**(code **)(lVar15 + 0x38))(lVar21,0,1,param_2);
    uVar8 = param_1;
    (**(code **)(lVar24 + 0x28))(param_1,lVar21,lVar6);
    uVar5 = (undefined1)uVar8;
  }
  FUN_1045a8898();
  if (unaff_x21 != 0) {
    return;
  }
  uStack_1a8 = 0;
  FUN_1045407f0(unaff_x20,&uStack_200);
  uStack_19f = 0;
  puVar9 = param_2;
  uStack_1a0 = uVar5;
  _swift_conformsToProtocol(param_2,&DAT_10e8147e0);
  if (puVar9 == (undefined *)0x0) {
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,puVar9,0,0);
    *puVar9 = 6;
    _swift_willThrow();
    func_0x00010454082c(&uStack_200);
    return;
  }
  (**(code **)(puVar9 + 8))(&uStack_a0,param_2,puVar9);
  uStack_180 = uStack_88;
  uStack_188 = uStack_90;
  uStack_190 = uStack_98;
  uStack_198 = uStack_a0;
  uStack_170 = uStack_78;
  uStack_178 = uStack_80;
  uStack_108 = uStack_1b8;
  uStack_110 = uStack_1c0;
  uStack_f8 = uStack_1a8;
  uStack_100 = uStack_1b0;
  uStack_148 = uStack_1f8;
  uStack_150 = uStack_200;
  uStack_138 = uStack_1e8;
  uStack_140 = uStack_1f0;
  pbStack_128 = (byte *)CONCAT71(uStack_1d7,uStack_1d8);
  uStack_130 = uStack_1e0;
  uStack_118 = uStack_1c8;
  pbStack_120 = pbStack_1d0;
  uStack_c8 = uStack_80;
  uStack_d0 = uStack_88;
  uStack_c0 = uStack_78;
  uStack_f0 = CONCAT62(uStack_19e,CONCAT11(uStack_19f,uStack_1a0));
  uStack_e8 = uStack_a0;
  uStack_d8 = uStack_90;
  uStack_e0 = uStack_98;
  puStack_168 = param_2;
  puStack_b8 = param_2;
  lStack_b0 = param_3;
  if (param_2 == &UNK_11078ace8) {
    (*pcVar17)(lVar20,param_1,lVar6);
    lVar22 = lVar20;
    (*pcVar25)(lVar20,1,&UNK_11078ace8);
    if ((int)lVar22 == 1) {
      (*pcVar18)(lVar20,lVar6);
    }
    else {
      (**(code **)(lVar15 + 0x20))(puVar16,lVar20,&UNK_11078ace8);
      _swift_dynamicCast(&uStack_200,puVar16,&UNK_11078ace8,&UNK_11078ace8,7);
      pbVar4 = pbStack_120;
      uVar3 = uStack_1f8;
      uVar8 = uStack_200;
      if (uStack_1f0 != 0) {
        do {
          if ((pbStack_128 == pbStack_120) || (bVar2 = *pbStack_128, 0x23 < bVar2))
          goto LAB_10459b834;
          if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
            if ((ulong)bVar2 != 0x23) goto LAB_10459b834;
            pbVar10 = pbStack_128 + 1;
            do {
              pbStack_128 = pbStack_120;
              if (pbVar10 == pbStack_120) break;
              pbStack_128 = pbVar10 + 1;
              bVar2 = *pbVar10;
              pbVar10 = pbStack_128;
            } while (bVar2 != 10 && bVar2 != 0xd);
          }
          else {
            pbStack_128 = pbStack_128 + 1;
          }
        } while( true );
      }
    }
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x10459bc14);
    (*pcVar17)();
  }
  (*pcVar25)(param_1,1,param_2);
  if ((int)param_1 == 1) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x10459bc04);
    (*pcVar17)();
  }
  (**(code **)(param_3 + 0x40))(&uStack_150,&UNK_11078a2b0,&PTR_DAT_11078a2d8,param_2);
  goto LAB_10459bb54;
LAB_10459bb8c:
  uVar11 = uStack_1f0;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar11 & 1) == 0) {
    uVar13 = 0;
    FUN_1045400a4(0);
    _swift_allocObject();
    FUN_10453c584(uStack_1f0,uVar13);
    uVar12 = uStack_1f0;
  }
  FUN_10453d13c(pbVar10,lVar22,&uStack_150);
  _swift_bridgeObjectRelease(lVar22);
  goto LAB_10459ba18;
LAB_10459b834:
  uVar12 = uStack_1f0;
  if ((pbStack_128 != pbStack_120) && (*pbStack_128 == 0x5b)) {
    pbVar10 = pbStack_128 + 1;
    pbVar19 = pbVar10;
    if ((pbVar10 != pbStack_120) && ((*pbVar10 & 0xffffffdf) - 0x41 < 0x1a)) {
      for (pbVar23 = pbStack_128 + 2; pbVar19 = pbVar23, pbVar23 != pbStack_120;
          pbVar23 = pbVar23 + 1) {
        bVar2 = *pbVar23;
        if (((9 < bVar2 - 0x30 && 0x19 < (bVar2 & 0xffffffdf) - 0x41) &&
            (uVar14 = (uint)bVar2, 1 < uVar14 - 0x2e)) && (uVar14 != 0x5f)) {
          if (uVar14 != 0x5d) goto LAB_10459ba84;
          break;
        }
      }
      if ((pbVar23 != pbStack_120) && (*pbVar23 == 0x5d)) {
        lVar22 = (long)pbVar23 - (long)pbVar10;
        pbStack_128 = pbVar23;
        FUN_104596000();
        pbVar19 = pbStack_128;
        if (lVar22 != 0) {
          pbStack_128 = pbVar23 + 1;
          do {
            if ((pbStack_128 == pbVar4) || (bVar2 = *pbStack_128, 0x23 < bVar2)) goto LAB_10459bb8c;
            if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
              if ((ulong)bVar2 != 0x23) goto LAB_10459bb8c;
              pbVar19 = pbStack_128 + 1;
              do {
                pbStack_128 = pbVar4;
                if (pbVar19 == pbVar4) break;
                pbStack_128 = pbVar19 + 1;
                bVar2 = *pbVar19;
                pbVar19 = pbStack_128;
              } while (bVar2 != 10 && bVar2 != 0xd);
            }
            else {
              pbStack_128 = pbStack_128 + 1;
            }
          } while( true );
        }
      }
    }
LAB_10459ba84:
    pbStack_128 = pbVar19;
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,pbVar10,0,0);
    *pbVar10 = 0;
    _swift_willThrow();
    func_0x000104540860(&uStack_150);
    func_0x00010459fd54(uVar8,uVar3,uStack_1f0);
    return;
  }
  uVar11 = uStack_1f0;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar11 & 1) == 0) {
    uVar13 = 0;
    FUN_1045400a4(0);
    _swift_allocObject();
    FUN_10453c584(uStack_1f0,uVar13);
    uVar12 = uStack_1f0;
  }
  _swift_beginAccess(uVar12 + 0x10,auStack_218,1,0);
  uVar13 = *(undefined8 *)(uVar12 + 0x18);
  *(undefined8 *)(uVar12 + 0x10) = 0;
  *(undefined8 *)(uVar12 + 0x18) = 0xe000000000000000;
  _swift_bridgeObjectRelease(uVar13);
  uVar11 = uVar12;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar11 & 1) == 0) {
    uVar13 = 0;
    FUN_1045400a4(0);
    _swift_allocObject();
    FUN_10453c584(uVar12,uVar13);
  }
  uStack_1f8 = 0xc000000000000000;
  uStack_200 = 0;
  uStack_1d8 = 0;
  _swift_beginAccess(uVar12 + 0x20,auStack_230,0x21,0);
  FUN_104540644(&uStack_200,uVar12 + 0x20);
  _swift_endAccess(auStack_230);
  uVar11 = uVar12;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar11 & 1) == 0) {
    uVar13 = 0;
    FUN_1045400a4(0);
    _swift_allocObject();
    FUN_10453c584(uVar12,uVar13);
  }
  FUN_104560c28(uVar12,&uStack_150);
LAB_10459ba18:
  (*pcVar18)(param_1,lVar6);
  if (uVar12 == 0) {
    pcVar17 = *(code **)(lVar15 + 0x38);
  }
  else {
    uStack_200 = uVar8;
    uStack_1f8 = uVar3;
    func_0x00010006c00c(uVar8,uVar3);
    _swift_retain(uVar12);
    _swift_dynamicCast(param_1,&uStack_200,&UNK_11078ace8,&UNK_11078ace8,7);
    pcVar17 = *(code **)(lVar15 + 0x38);
  }
  (*pcVar17)(param_1,uVar12 == 0,1,&UNK_11078ace8);
  func_0x00010459fd54(uVar8,uVar3,uVar12);
LAB_10459bb54:
  func_0x000104540894(&uStack_150,unaff_x20);
  func_0x000104540860(&uStack_150);
  return;
}



/* Entry: 10459bc14; end: 10459d0b3;  */

/* WARNING: Removing unreachable block (ram,0x00010459d058) */
/* WARNING: Removing unreachable block (ram,0x00010459c9a0) */
/* WARNING: Removing unreachable block (ram,0x00010459cf78) */

void FUN_10459bc14(undefined8 **param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  undefined8 **ppuVar15;
  uint uVar16;
  long extraout_x8;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 extraout_x13;
  undefined1 uVar20;
  long unaff_x20;
  long lVar21;
  long unaff_x21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined1 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 *puStack_3b0;
  undefined1 *puStack_3a8;
  ulong uStack_398;
  long lStack_390;
  undefined8 **ppuStack_388;
  long lStack_380;
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined8 *puStack_260;
  undefined1 *puStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined7 uStack_237;
  byte *pbStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined1 uStack_200;
  undefined1 uStack_1ff;
  undefined6 uStack_1fe;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined8 *puStack_1b0;
  undefined1 *puStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_118;
  long lStack_110;
  undefined8 uStack_100;
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
  
  lStack_390 = *(long *)(param_2 + -8);
  ppuStack_388 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_390 + 0x40));
  lVar21 = (long)&puStack_3d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_380 = (lVar21 - extraout_x12) - extraout_x12_00;
  pcVar17 = *(char **)(unaff_x20 + 0x28);
  pcVar2 = *(char **)(unaff_x20 + 0x30);
  if ((pcVar17 != pcVar2) && (*pcVar17 == ':')) {
    *(char **)(unaff_x20 + 0x28) = pcVar17 + 1;
    FUN_1045ab5a4();
    pcVar17 = *(char **)(unaff_x20 + 0x28);
  }
  if ((pcVar17 != pcVar2) && (*pcVar17 == '[')) {
    *(char **)(unaff_x20 + 0x28) = pcVar17 + 1;
    uStack_3c0 = extraout_x13;
    FUN_1045ab5a4();
    puStack_3a8 = (undefined1 *)0xc000000000000000;
    puStack_3b0 = (undefined8 *)0x0;
    bVar5 = true;
    lStack_3b8 = param_3;
LAB_10459bd3c:
    pbVar19 = *(byte **)(unaff_x20 + 0x28);
    pbVar14 = *(byte **)(unaff_x20 + 0x30);
    if (pbVar19 == pbVar14) {
      if (!bVar5) goto LAB_10459be60;
LAB_10459bdc8:
      lVar21 = *(long *)(unaff_x20 + 0x50) + -1;
      if (SBORROW8(*(long *)(unaff_x20 + 0x50),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10459d094);
        (*pcVar7)();
      }
      *(long *)(unaff_x20 + 0x50) = lVar21;
      if (lVar21 < 0) {
        FUN_1045407b0();
        _swift_allocError(&UNK_11078a540,param_1,0,0);
        *(undefined1 *)param_1 = 0xb;
        goto LAB_10459cdc8;
      }
      if (pbVar19 != pbVar14) {
        bVar3 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        do {
          *(byte **)(unaff_x20 + 0x28) = pbVar19;
          if ((pbVar19 == pbVar14) || (bVar4 = *pbVar19, 0x23 < bVar4)) goto LAB_10459be48;
          if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) {
            if ((ulong)bVar4 != 0x23) goto LAB_10459be48;
            pbVar18 = pbVar19 + 1;
            while (pbVar19 = pbVar14, pbVar18 != pbVar14) {
              pbVar19 = pbVar18 + 1;
              bVar4 = *pbVar18;
              if ((bVar4 == 10) || (pbVar18 = pbVar19, bVar4 == 0xd)) break;
            }
          }
          else {
            pbVar19 = pbVar19 + 1;
          }
        } while( true );
      }
    }
    else {
      bVar3 = *pbVar19;
      if (bVar3 == 0x5d) {
        *(byte **)(unaff_x20 + 0x28) = pbVar19 + 1;
        FUN_1045ab5a4();
        return;
      }
      if (bVar5) goto LAB_10459bdc8;
      if (bVar3 < 0x24) {
        do {
          if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
            if ((ulong)bVar3 != 0x23) break;
            pbVar18 = pbVar19 + 1;
            while (pbVar19 = pbVar14, pbVar18 != pbVar14) {
              pbVar19 = pbVar18 + 1;
              bVar3 = *pbVar18;
              if ((bVar3 == 10) || (pbVar18 = pbVar19, bVar3 == 0xd)) break;
            }
          }
          else {
            pbVar19 = pbVar19 + 1;
          }
          *(byte **)(unaff_x20 + 0x28) = pbVar19;
          if ((pbVar19 == pbVar14) || (bVar3 = *pbVar19, 0x23 < bVar3)) break;
        } while( true );
      }
LAB_10459be60:
      if ((pbVar19 != pbVar14) && (*pbVar19 == 0x2c)) {
        do {
          pbVar19 = pbVar19 + 1;
LAB_10459be78:
          *(byte **)(unaff_x20 + 0x28) = pbVar19;
          if ((pbVar19 == pbVar14) || (bVar3 = *pbVar19, 0x23 < bVar3)) goto LAB_10459bdc8;
        } while ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0);
        if ((ulong)bVar3 != 0x23) goto LAB_10459bdc8;
        pbVar18 = pbVar19 + 1;
        while (pbVar19 = pbVar14, pbVar18 != pbVar14) {
          pbVar19 = pbVar18 + 1;
          bVar3 = *pbVar18;
          if ((bVar3 == 10) || (pbVar18 = pbVar19, bVar3 == 0xd)) break;
        }
        goto LAB_10459be78;
      }
    }
    goto LAB_10459ca24;
  }
  FUN_1045a8898();
  if (unaff_x21 != 0) {
    return;
  }
  lStack_208 = 0;
  FUN_1045407f0();
  uStack_200 = SUB81(param_1,0);
  uStack_1ff = 0;
  puVar12 = param_2;
  _swift_conformsToProtocol(param_2,&DAT_10e8147e0);
  if (puVar12 == (undefined1 *)0x0) {
LAB_10459c9b8:
    puVar12 = (undefined1 *)0x0;
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,puVar12,0,0);
    *puVar12 = 6;
    _swift_willThrow();
    func_0x00010454082c(&puStack_260);
    return;
  }
  puVar13 = param_2;
  (**(code **)(puVar12 + 8))(&uStack_d0,param_2,puVar12);
  lVar6 = lStack_380;
  uStack_1e0 = uStack_b8;
  uStack_1e8 = uStack_c0;
  uStack_1f0 = uStack_c8;
  uStack_1f8 = uStack_d0;
  uStack_1d0 = uStack_a8;
  uStack_1d8 = uStack_b0;
  uStack_168 = uStack_218;
  uStack_170 = uStack_220;
  lStack_158 = lStack_208;
  uStack_160 = uStack_210;
  puStack_1a8 = puStack_258;
  puStack_1b0 = puStack_260;
  uStack_198 = uStack_248;
  uStack_1a0 = uStack_250;
  pbStack_188 = (byte *)CONCAT71(uStack_237,uStack_238);
  uStack_190 = uStack_240;
  uStack_178 = uStack_228;
  pbStack_180 = pbStack_230;
  uStack_128 = uStack_b0;
  uStack_130 = uStack_b8;
  uStack_120 = uStack_a8;
  uStack_150 = CONCAT62(uStack_1fe,CONCAT11(uStack_1ff,uStack_200));
  uStack_148 = uStack_d0;
  uStack_138 = uStack_c0;
  uStack_140 = uStack_c8;
  lStack_110 = param_3;
  if (param_2 == &UNK_11078ace8) {
    puStack_118 = param_2;
    puStack_1c8 = param_2;
    if (lRam0000000113084b48 != -1) {
      puVar13 = (undefined1 *)0x113084b48;
      _swift_once(0x113084b48,FUN_10453c544);
    }
    do {
      pbVar19 = pbStack_180;
      uVar10 = uRam0000000113813dd0;
      if ((pbStack_188 == pbStack_180) || (bVar3 = *pbStack_188, 0x23 < bVar3)) goto LAB_10459cae4;
      if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar3 != 0x23) goto LAB_10459cae4;
        pbVar19 = pbStack_188 + 1;
        do {
          pbStack_188 = pbStack_180;
          if (pbVar19 == pbStack_180) break;
          pbStack_188 = pbVar19 + 1;
          bVar3 = *pbVar19;
          pbVar19 = pbStack_188;
        } while (bVar3 != 10 && bVar3 != 0xd);
      }
      else {
        pbStack_188 = pbStack_188 + 1;
      }
    } while( true );
  }
  puStack_1c8 = param_2;
  puStack_118 = param_2;
  (**(code **)(param_3 + 0x10))(lVar21,param_2,param_3);
  (**(code **)(param_3 + 0x40))(&puStack_1b0,&UNK_11078a2b0,&PTR_DAT_11078a2d8,param_2,param_3);
  lVar1 = lStack_380;
  lVar6 = lStack_390;
  (**(code **)(lStack_390 + 0x10))(lStack_380,lVar21,param_2);
  uVar11 = 0;
  __sSaMa(0,param_2);
  __sSa6appendyyxnF(lVar1,uVar11);
  (**(code **)(lVar6 + 8))(lVar21,param_2);
  goto LAB_10459cd90;
LAB_10459be48:
  if (bVar3 == 0x3c) {
    uVar20 = 0x3e;
  }
  else {
    if (bVar3 != 0x7b) {
LAB_10459ca24:
      FUN_1045407b0();
      _swift_allocError(&UNK_11078a540,param_1,0,0);
      *(undefined1 *)param_1 = 0;
LAB_10459cdc8:
      _swift_willThrow();
      return;
    }
    uVar20 = 0x7d;
  }
  lStack_208 = 0;
  FUN_1045407f0();
  uStack_1ff = 0;
  puVar12 = param_2;
  uStack_200 = uVar20;
  _swift_conformsToProtocol(param_2,&DAT_10e8147e0);
  if (puVar12 == (undefined1 *)0x0) goto LAB_10459c9b8;
  puVar13 = param_2;
  (**(code **)(puVar12 + 8))(&uStack_100,param_2,puVar12);
  uVar11 = uStack_3c0;
  uStack_1e0 = uStack_e8;
  uStack_1e8 = uStack_f0;
  uStack_1f0 = uStack_f8;
  uStack_1f8 = uStack_100;
  uStack_1d0 = uStack_d8;
  uStack_1d8 = uStack_e0;
  uStack_168 = uStack_218;
  uStack_170 = uStack_220;
  lStack_158 = lStack_208;
  uStack_160 = uStack_210;
  puStack_1a8 = puStack_258;
  puStack_1b0 = puStack_260;
  uStack_198 = uStack_248;
  uStack_1a0 = uStack_250;
  pbStack_188 = (byte *)CONCAT71(uStack_237,uStack_238);
  uStack_190 = uStack_240;
  uStack_178 = uStack_228;
  pbStack_180 = pbStack_230;
  uStack_128 = uStack_e0;
  uStack_130 = uStack_e8;
  uStack_120 = uStack_d8;
  uStack_150 = CONCAT62(uStack_1fe,CONCAT11(uStack_1ff,uStack_200));
  uStack_148 = uStack_100;
  uStack_138 = uStack_f0;
  uStack_140 = uStack_f8;
  lStack_110 = param_3;
  if (param_2 != &UNK_11078ace8) {
    puStack_1c8 = param_2;
    puStack_118 = param_2;
    (**(code **)(param_3 + 0x10))(uStack_3c0,param_2,param_3);
    (**(code **)(param_3 + 0x40))(&puStack_1b0,&UNK_11078a2b0,&PTR_DAT_11078a2d8,param_2,param_3);
    lVar6 = lStack_380;
    lVar21 = lStack_390;
    if (unaff_x21 != 0) {
      (**(code **)(lStack_390 + 8))(uVar11,param_2);
LAB_10459ca14:
      func_0x000104540860(&puStack_1b0);
      return;
    }
    (**(code **)(lStack_390 + 0x10))(lStack_380,uVar11,param_2);
    uVar8 = 0;
    __sSaMa(0,param_2);
    __sSa6appendyyxnF(lVar6,uVar8);
    param_3 = lStack_3b8;
    (**(code **)(lVar21 + 8))(uVar11,param_2);
    goto LAB_10459c86c;
  }
  puStack_118 = param_2;
  puStack_1c8 = param_2;
  if (lRam0000000113084b48 != -1) {
    puVar13 = (undefined1 *)0x113084b48;
    _swift_once(0x113084b48,FUN_10453c544);
  }
  while( true ) {
    while( true ) {
      pbVar19 = pbStack_180;
      uVar10 = uRam0000000113813dd0;
      if ((pbStack_188 == pbStack_180) || (bVar3 = *pbStack_188, 0x23 < bVar3)) goto LAB_10459c0a8;
      if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) break;
      pbStack_188 = pbStack_188 + 1;
    }
    if ((ulong)bVar3 != 0x23) break;
    pbVar14 = pbStack_188 + 1;
    do {
      if (pbVar14 == pbStack_180) {
        pbStack_188 = pbStack_180;
        goto LAB_10459c0a8;
      }
      pbStack_188 = pbVar14 + 1;
      bVar3 = *pbVar14;
    } while ((bVar3 != 10) && (pbVar14 = pbStack_188, bVar3 != 0xd));
  }
LAB_10459c0a8:
  if ((pbStack_188 != pbStack_180) && (*pbStack_188 == 0x5b)) {
    pbVar14 = pbStack_188 + 1;
    pbVar18 = pbVar14;
    if ((pbVar14 != pbStack_180) && ((*pbVar14 & 0xffffffdf) - 0x41 < 0x1a)) {
      for (pbVar18 = pbStack_188 + 2; pbVar18 != pbStack_180; pbVar18 = pbVar18 + 1) {
        bVar3 = *pbVar18;
        if (((9 < bVar3 - 0x30 && 0x19 < (bVar3 & 0xffffffdf) - 0x41) &&
            (uVar16 = (uint)bVar3, 1 < uVar16 - 0x2e)) && (uVar16 != 0x5f)) {
          if (uVar16 != 0x5d) goto LAB_10459cdf0;
          break;
        }
      }
      if ((pbVar18 != pbStack_180) && (*pbVar18 == 0x5d)) {
        lVar21 = (long)pbVar18 - (long)pbVar14;
        uStack_398 = uRam0000000113813dd0;
        pbStack_188 = pbVar18;
        _swift_retain(uRam0000000113813dd0);
        FUN_104596000();
        uVar10 = uStack_398;
        if (lVar21 != 0) {
          pbStack_188 = pbVar18 + 1;
          do {
            if ((pbStack_188 == pbVar19) || (bVar3 = *pbStack_188, 0x23 < bVar3))
            goto LAB_10459c784;
            if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
              if ((ulong)bVar3 != 0x23) goto LAB_10459c784;
              pbVar18 = pbStack_188 + 1;
              while (pbStack_188 = pbVar19, pbVar18 != pbVar19) {
                pbStack_188 = pbVar18 + 1;
                bVar3 = *pbVar18;
                if ((bVar3 == 10) || (pbVar18 = pbStack_188, bVar3 == 0xd)) break;
              }
            }
            else {
              pbStack_188 = pbStack_188 + 1;
            }
          } while( true );
        }
        FUN_1045407b0();
        _swift_allocError(&UNK_11078a540,pbVar14,0,0);
        *pbVar14 = 0;
        _swift_willThrow();
        uVar10 = uStack_398;
        goto LAB_10459ca00;
      }
    }
LAB_10459cdf0:
    pbStack_188 = pbVar18;
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,puVar13,0,0);
    *puVar13 = 0;
    _swift_willThrow();
    _swift_retain(uVar10);
    goto LAB_10459ca00;
  }
  uVar23 = uRam0000000113813dd0;
  _swift_retain();
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar23 & 1) == 0) {
    uVar23 = 0;
    FUN_1045400a4();
    _swift_allocObject();
    puVar22 = (undefined8 *)(uVar23 + 0x10);
    *puVar22 = 0;
    *(undefined8 *)(uVar23 + 0x18) = 0xe000000000000000;
    puVar24 = (undefined8 *)(uVar23 + 0x20);
    *(undefined1 **)(uVar23 + 0x28) = puStack_3a8;
    *puVar24 = puStack_3b0;
    *(undefined1 *)(uVar23 + 0x48) = 0;
    _swift_beginAccess(uVar10 + 0x10,auStack_278,0,0);
    uVar11 = *(undefined8 *)(uVar10 + 0x10);
    uVar8 = *(undefined8 *)(uVar10 + 0x18);
    _swift_beginAccess(puVar22,auStack_290,1,0);
    *puVar22 = uVar11;
    *(undefined8 *)(uVar23 + 0x18) = uVar8;
    _swift_beginAccess(uVar10 + 0x20,auStack_2a8,0,0);
    FUN_1045404a0(uVar10 + 0x20,&puStack_260);
    _swift_beginAccess(puVar24,auStack_2c0,0x21,0);
    _swift_bridgeObjectRetain(uVar8);
    FUN_104540644(&puStack_260,puVar24);
    _swift_endAccess(auStack_2c0);
    _swift_release(uVar10);
    uVar10 = uVar23;
  }
  _swift_beginAccess(uVar10 + 0x10,auStack_2d8,1,0);
  uVar11 = *(undefined8 *)(uVar10 + 0x18);
  *(undefined8 *)(uVar10 + 0x10) = 0;
  *(undefined8 *)(uVar10 + 0x18) = 0xe000000000000000;
  _swift_bridgeObjectRelease(uVar11);
  uVar23 = uVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar9 = uVar10;
  if ((uVar23 & 1) == 0) {
    uVar9 = 0;
    FUN_1045400a4();
    _swift_allocObject();
    puVar22 = (undefined8 *)(uVar9 + 0x10);
    *puVar22 = 0;
    *(undefined8 *)(uVar9 + 0x18) = 0xe000000000000000;
    puVar24 = (undefined8 *)(uVar9 + 0x20);
    *(undefined1 **)(uVar9 + 0x28) = puStack_3a8;
    *puVar24 = puStack_3b0;
    *(undefined1 *)(uVar9 + 0x48) = 0;
    _swift_beginAccess(uVar10 + 0x10,auStack_2f0,0,0);
    uVar11 = *(undefined8 *)(uVar10 + 0x10);
    uVar8 = *(undefined8 *)(uVar10 + 0x18);
    _swift_beginAccess(puVar22,auStack_308,1,0);
    *puVar22 = uVar11;
    *(undefined8 *)(uVar9 + 0x18) = uVar8;
    _swift_beginAccess(uVar10 + 0x20,auStack_320,0,0);
    FUN_1045404a0(uVar10 + 0x20,&puStack_260);
    _swift_beginAccess(puVar24,auStack_2c0,0x21,0);
    _swift_bridgeObjectRetain(uVar8);
    FUN_104540644(&puStack_260,puVar24);
    _swift_endAccess(auStack_2c0);
    _swift_release(uVar10);
  }
  puStack_258 = puStack_3a8;
  puStack_260 = puStack_3b0;
  uStack_238 = 0;
  _swift_beginAccess(uVar9 + 0x20,auStack_2c0,0x21,0);
  FUN_104540644(&puStack_260,uVar9 + 0x20);
  _swift_endAccess(auStack_2c0);
  uVar10 = uVar9;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar10 & 1) == 0) {
    uVar10 = 0;
    FUN_1045400a4();
    _swift_allocObject();
    puVar22 = (undefined8 *)(uVar10 + 0x10);
    *puVar22 = 0;
    *(undefined8 *)(uVar10 + 0x18) = 0xe000000000000000;
    puVar24 = (undefined8 *)(uVar10 + 0x20);
    *(undefined1 **)(uVar10 + 0x28) = puStack_3a8;
    *puVar24 = puStack_3b0;
    *(undefined1 *)(uVar10 + 0x48) = 0;
    _swift_beginAccess(uVar9 + 0x10,auStack_338,0,0);
    uVar11 = *(undefined8 *)(uVar9 + 0x10);
    uVar8 = *(undefined8 *)(uVar9 + 0x18);
    _swift_beginAccess(puVar22,auStack_350,1,0);
    *puVar22 = uVar11;
    *(undefined8 *)(uVar10 + 0x18) = uVar8;
    _swift_beginAccess(uVar9 + 0x20,auStack_368,0,0);
    FUN_1045404a0(uVar9 + 0x20,&puStack_260);
    _swift_beginAccess(puVar24,auStack_2c0,0x21,0);
    _swift_bridgeObjectRetain(uVar8);
    FUN_104540644(&puStack_260,puVar24);
    _swift_endAccess(auStack_2c0);
    _swift_release(uVar9);
    uVar9 = uVar10;
  }
  uStack_398 = uVar9;
  lVar21 = lStack_110;
  puVar12 = puStack_118;
  uStack_98 = uStack_140;
  uStack_a0 = uStack_148;
  uStack_88 = uStack_130;
  uStack_90 = uStack_138;
  uStack_78 = uStack_120;
  uStack_80 = uStack_128;
  uVar23 = uStack_150 & 0xffff;
LAB_10459c508:
  lVar6 = lStack_158;
  if (((0 < lStack_158) && (pbStack_188 != pbStack_180)) &&
     ((*pbStack_188 == 0x3b || (*pbStack_188 == 0x2c)))) {
    pbStack_188 = pbStack_188 + 1;
    FUN_1045ab5a4();
  }
  puVar22 = &uStack_a0;
  puVar13 = puVar12;
  FUN_1045a89a8(puVar22,puVar12,lVar21,uVar23);
  uVar10 = uStack_398;
  if (unaff_x21 != 0) goto LAB_10459ca00;
  if (((uint)puVar13 & 0xff) != 1) {
    lVar1 = lVar6 + 1;
    if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10459cff8);
      (*pcVar7)();
    }
    lStack_158 = lVar1;
    if (puVar22 == (undefined8 *)0x2) {
      FUN_10453c000();
      while( true ) {
        while( true ) {
          if ((pbStack_188 == pbStack_180) || (bVar3 = *pbStack_188, 0x23 < bVar3))
          goto LAB_10459c6a4;
          if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) break;
          pbStack_188 = pbStack_188 + 1;
        }
        if ((ulong)bVar3 != 0x23) break;
        pbVar19 = pbStack_188 + 1;
        do {
          if (pbVar19 == pbStack_180) {
            pbStack_188 = pbStack_180;
            goto LAB_10459c6a4;
          }
          pbStack_188 = pbVar19 + 1;
          bVar3 = *pbVar19;
          pbVar19 = pbStack_188;
        } while (bVar3 != 10 && bVar3 != 0xd);
      }
LAB_10459c6a4:
      puStack_3c8 = puVar22;
      if ((pbStack_188 != pbStack_180) && (*pbStack_188 == 0x3a)) {
        do {
          pbStack_188 = pbStack_188 + 1;
LAB_10459c6bc:
          if ((pbStack_188 == pbStack_180) || (bVar3 = *pbStack_188, 0x23 < bVar3)) {
LAB_10459c718:
            puStack_3d0 = puVar13;
            FUN_1045a9728();
            func_0x00010006c090(puStack_3c8,puStack_3d0);
            uVar10 = uStack_398;
            uStack_238 = 0;
            puStack_260 = puVar22;
            puStack_258 = puVar13;
            _swift_beginAccess(uStack_398 + 0x20,auStack_2c0,0x21,0);
            FUN_104540644(&puStack_260,uVar10 + 0x20);
            _swift_endAccess(auStack_2c0);
            goto LAB_10459c508;
          }
        } while ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0);
        if ((ulong)bVar3 != 0x23) goto LAB_10459c718;
        pbVar19 = pbStack_188 + 1;
        do {
          pbStack_188 = pbStack_180;
          if (pbVar19 == pbStack_180) break;
          pbStack_188 = pbVar19 + 1;
          bVar3 = *pbVar19;
          pbVar19 = pbStack_188;
        } while (bVar3 != 10 && bVar3 != 0xd);
        goto LAB_10459c6bc;
      }
      FUN_1045407b0();
      _swift_allocError(&UNK_11078a540,puVar22,0,0);
      *(undefined1 *)puVar22 = 0;
      _swift_willThrow();
      uVar10 = uStack_398;
      puStack_260 = puStack_3c8;
      uStack_238 = 0;
      puStack_258 = puVar13;
      _swift_beginAccess(uStack_398 + 0x20,auStack_2c0,0x21,0);
      FUN_104540644(&puStack_260,uVar10 + 0x20);
      _swift_endAccess(auStack_2c0);
      goto LAB_10459ca00;
    }
    if (puVar22 == (undefined8 *)0x1) {
      puVar13 = (undefined1 *)(uStack_398 + 0x10);
      ppuVar15 = &puStack_260;
      _swift_beginAccess(puVar13,ppuVar15,0x21,0);
      FUN_1045ab5a4();
      if ((pbStack_188 == pbStack_180) || (*pbStack_188 != 0x3a)) {
        FUN_1045407b0();
        _swift_allocError(&UNK_11078a540,puVar13,0,0);
        *puVar13 = 0;
        _swift_willThrow();
        _swift_endAccess(&puStack_260);
        uVar10 = uStack_398;
        goto LAB_10459ca00;
      }
      pbStack_188 = pbStack_188 + 1;
      FUN_1045ab5a4();
      FUN_1045a9544();
      uVar11 = *(undefined8 *)(uStack_398 + 0x18);
      *(undefined1 **)(uStack_398 + 0x10) = puVar13;
      *(undefined8 ***)(uStack_398 + 0x18) = ppuVar15;
      _swift_endAccess(&puStack_260);
      _swift_bridgeObjectRelease(uVar11);
    }
    goto LAB_10459c508;
  }
LAB_10459c7f0:
  uVar10 = uStack_398;
  puStack_258 = puStack_3a8;
  puStack_260 = puStack_3b0;
  uStack_250 = uStack_398;
  func_0x00010006c00c(0,0xc000000000000000);
  _swift_retain(uVar10);
  lVar21 = lStack_380;
  _swift_dynamicCast(lStack_380,&puStack_260,&UNK_11078ace8,&UNK_11078ace8,7);
  uVar11 = 0;
  __sSaMa(0,&UNK_11078ace8);
  __sSa6appendyyxnF(lVar21,uVar11);
  func_0x00010006c090(0,0xc000000000000000);
  _swift_release(uVar10);
  param_3 = lStack_3b8;
LAB_10459c86c:
  func_0x000104540894(&puStack_1b0);
  param_1 = &puStack_1b0;
  func_0x000104540860();
  bVar5 = false;
  goto LAB_10459bd3c;
LAB_10459c784:
  uVar23 = uStack_398;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar23 & 1) == 0) {
    uVar11 = 0;
    FUN_1045400a4(0);
    _swift_allocObject();
    FUN_10453c584(uVar10,uVar11);
  }
  FUN_10453d13c(pbVar14,lVar21,&puStack_1b0);
  if (unaff_x21 != 0) {
    _swift_bridgeObjectRelease(lVar21);
LAB_10459ca00:
    func_0x00010006c090(0,0xc000000000000000);
    _swift_release(uVar10);
    goto LAB_10459ca14;
  }
  uStack_398 = uVar10;
  _swift_bridgeObjectRelease(lVar21);
  goto LAB_10459c7f0;
LAB_10459cae4:
  if ((pbStack_188 != pbStack_180) && (*pbStack_188 == 0x5b)) {
    pbVar14 = pbStack_188 + 1;
    pbVar18 = pbVar14;
    if ((pbVar14 == pbStack_180) || (0x19 < (*pbVar14 & 0xffffffdf) - 0x41)) {
LAB_10459ce28:
      pbStack_188 = pbVar18;
      FUN_1045407b0();
      _swift_allocError(&UNK_11078a540,puVar13,0,0);
      *puVar13 = 0;
      _swift_willThrow();
      _swift_retain(uVar10);
    }
    else {
      for (pbVar18 = pbStack_188 + 2; pbVar18 != pbStack_180; pbVar18 = pbVar18 + 1) {
        bVar3 = *pbVar18;
        if (((9 < bVar3 - 0x30 && 0x19 < (bVar3 & 0xffffffdf) - 0x41) &&
            (uVar16 = (uint)bVar3, 1 < uVar16 - 0x2e)) && (uVar16 != 0x5f)) {
          if (uVar16 != 0x5d) goto LAB_10459ce28;
          break;
        }
      }
      if ((pbVar18 == pbStack_180) || (*pbVar18 != 0x5d)) goto LAB_10459ce28;
      lVar21 = (long)pbVar18 - (long)pbVar14;
      pbStack_188 = pbVar18;
      _swift_retain(uRam0000000113813dd0);
      FUN_104596000();
      if (lVar21 != 0) {
        pbStack_188 = pbVar18 + 1;
        do {
          if ((pbStack_188 == pbVar19) || (bVar3 = *pbStack_188, 0x23 < bVar3)) goto LAB_10459cff8;
          if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
            if ((ulong)bVar3 != 0x23) goto LAB_10459cff8;
            pbVar18 = pbStack_188 + 1;
            do {
              pbStack_188 = pbVar19;
              if (pbVar18 == pbVar19) break;
              pbStack_188 = pbVar18 + 1;
              bVar3 = *pbVar18;
              pbVar18 = pbStack_188;
            } while (bVar3 != 10 && bVar3 != 0xd);
          }
          else {
            pbStack_188 = pbStack_188 + 1;
          }
        } while( true );
      }
      FUN_1045407b0();
      _swift_allocError(&UNK_11078a540,pbVar14,0,0);
      *pbVar14 = 0;
      _swift_willThrow();
    }
    func_0x00010006c090(0,0xc000000000000000);
    _swift_release(uVar10);
    goto LAB_10459ce70;
  }
  uVar23 = uRam0000000113813dd0;
  _swift_retain();
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar23 & 1) == 0) {
    FUN_1045400a4(0);
    _swift_allocObject();
    FUN_10453c584();
  }
  _swift_beginAccess(uVar10 + 0x10,auStack_278,1,0);
  uVar11 = *(undefined8 *)(uVar10 + 0x18);
  *(undefined8 *)(uVar10 + 0x10) = 0;
  *(undefined8 *)(uVar10 + 0x18) = 0xe000000000000000;
  _swift_bridgeObjectRelease(uVar11);
  uVar23 = uVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar23 & 1) == 0) {
    FUN_1045400a4(0);
    _swift_allocObject();
    FUN_10453c584();
  }
  puStack_258 = (undefined1 *)0xc000000000000000;
  puStack_260 = (undefined8 *)0x0;
  uStack_238 = 0;
  _swift_beginAccess(uVar10 + 0x20,auStack_290,0x21,0);
  FUN_104540644(&puStack_260,uVar10 + 0x20);
  _swift_endAccess(auStack_290);
  uVar23 = uVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar23 & 1) == 0) {
    FUN_1045400a4(0);
    _swift_allocObject();
    FUN_10453c584();
  }
  FUN_104560c28(uVar10,&puStack_1b0);
  goto LAB_10459ccd0;
LAB_10459cff8:
  uVar23 = uVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar23 & 1) == 0) {
    FUN_1045400a4(0);
    _swift_allocObject();
    FUN_10453c584();
  }
  FUN_10453d13c(pbVar14,lVar21,&puStack_1b0);
  _swift_bridgeObjectRelease(lVar21);
LAB_10459ccd0:
  puStack_258 = (undefined1 *)0xc000000000000000;
  puStack_260 = (undefined8 *)0x0;
  uStack_250 = uVar10;
  func_0x00010006c00c(0,0xc000000000000000);
  _swift_retain(uVar10);
  _swift_dynamicCast(lVar6,&puStack_260,&UNK_11078ace8,&UNK_11078ace8,7);
  uVar11 = 0;
  __sSaMa(0,&UNK_11078ace8);
  __sSa6appendyyxnF(lVar6,uVar11);
  func_0x00010006c090(0,0xc000000000000000);
  _swift_release(uVar10);
LAB_10459cd90:
  func_0x000104540894(&puStack_1b0);
LAB_10459ce70:
  func_0x000104540860(&puStack_1b0);
  return;
}



/* Entry: 10459d0b4; end: 10459d0db;  */

void FUN_10459d0b4(void)

{
  FUN_10459b460();
  return;
}



/* Entry: 10459d0dc; end: 10459db67;  */

void FUN_10459d0dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar15;
  code *pcVar16;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar17;
  byte *pbVar18;
  long lVar19;
  undefined1 *puVar20;
  long lVar21;
  undefined8 uStack_130;
  undefined4 auStack_128 [2];
  code *pcStack_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  uint uStack_84;
  
  lStack_d0 = *(long *)(param_5 + 8);
  lVar4 = 0;
  uStack_c8 = param_3;
  uStack_b0 = param_1;
  _swift_getAssociatedTypeWitness();
  lStack_90 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_90 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar10 = *(long *)(param_4 + 8);
  lVar5 = 0;
  lStack_e8 = (long)&pcStack_120 - extraout_x8;
  _swift_getAssociatedTypeWitness(0,lVar10,param_2,&UNK_10e814078,&UNK_10e814088);
  lVar15 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar14 = ((long)&pcStack_120 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_e0 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12;
  lVar6 = 0;
  lStack_c0 = lVar14;
  __sSqMa(0,lVar4);
  lVar21 = *(long *)(lVar6 + -8);
  lStack_a0 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar14 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_f0 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar17 = (undefined1 *)(lVar14 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (long)puVar17 - extraout_x12_01;
  lVar6 = 0;
  __sSqMa(0,lVar5);
  lStack_a8 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  puVar20 = (undefined1 *)(lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar20 - extraout_x12_02;
  lStack_d8 = lVar15;
  (**(code **)(lVar15 + 0x38))(lVar7,1,1,lVar5);
  pcVar16 = *(code **)(lStack_90 + 0x38);
  puVar11 = (undefined1 *)0x1;
  lStack_b8 = lVar4;
  lStack_98 = lVar14;
  (*pcVar16)(lVar14,1,1,lVar4);
  uVar3 = (uint)lVar14;
  FUN_1045a8898();
  lVar14 = lStack_b8;
  lVar4 = lStack_c0;
  lVar15 = lStack_a8;
  lVar19 = lStack_a0;
  if (unaff_x21 != 0) {
LAB_10459d82c:
    (**(code **)(lVar21 + 8))(lStack_98,lVar19);
    pcVar16 = *(code **)(lVar15 + 8);
LAB_10459d844:
    (*pcVar16)(lVar7,lVar6);
    return;
  }
  bVar1 = unaff_x20[0x49];
  pbVar12 = *(byte **)(unaff_x20 + 0x28);
  pbVar18 = *(byte **)(unaff_x20 + 0x30);
  pcStack_120 = pcVar16;
  puStack_118 = puVar20;
  puStack_110 = puVar17;
  lStack_108 = lVar5;
  lStack_100 = lVar21;
  lStack_f8 = lVar6;
  uStack_84 = uVar3;
LAB_10459d340:
  if ((pbVar12 == pbVar18) || ((uint)*pbVar12 != (uStack_84 & 0xff))) {
    puVar17 = (undefined1 *)(ulong)(uint)bVar1;
    FUN_1045a9bf8();
    if (puVar11 != (undefined1 *)0x0) {
      if ((puVar17 == (undefined1 *)0x79656b) && (puVar11 == (undefined1 *)0xe300000000000000)) {
LAB_10459d3f8:
        _swift_bridgeObjectRelease(puVar11);
        pcVar16 = *(code **)(lVar10 + 0x20);
        lVar21 = lVar7;
      }
      else {
        uVar8 = 0x79656b;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x79656b,0xe300000000000000,puVar17,puVar11,0);
        if (((uVar8 & 1) != 0) ||
           ((puVar17 == (undefined1 *)0x31 && (puVar11 == (undefined1 *)0xe100000000000000))))
        goto LAB_10459d3f8;
        uVar8 = 0x31;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x31,0xe100000000000000,puVar17,puVar11,0);
        if ((uVar8 & 1) != 0) goto LAB_10459d3f8;
        if ((puVar17 != (undefined1 *)0x65756c6176) || (puVar11 != (undefined1 *)0xe500000000000000)
           ) {
          uVar8 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x65756c6176,0xe500000000000000,puVar17,puVar11,0);
          if (((uVar8 & 1) == 0) &&
             (puVar17 != (undefined1 *)0x32 || puVar11 != (undefined1 *)0xe100000000000000)) {
            uVar8 = 0;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x32,0xe100000000000000,puVar17,puVar11,0);
            if ((uVar8 & 1) == 0) {
              if (bVar1 != 0) {
                uVar8 = 0x5b;
                puVar20 = (undefined1 *)0xe100000000000000;
                __sSS9hasPrefixySbSSF(0x5b,0xe100000000000000,puVar17,puVar11);
                if ((uVar8 & 1) != 0) {
                  _swift_bridgeObjectRelease();
                  pbVar12 = *(byte **)(unaff_x20 + 0x28);
                  do {
                    if ((pbVar12 == pbVar18) || (bVar2 = *pbVar12, 0x23 < bVar2))
                    goto LAB_10459d5a0;
                    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                      if ((ulong)bVar2 != 0x23) goto LAB_10459d5a0;
                      pbVar13 = pbVar12 + 1;
                      do {
                        if (pbVar13 == pbVar18) {
                          *(byte **)(unaff_x20 + 0x28) = pbVar18;
                          pbVar12 = pbVar18;
                          goto LAB_10459d5a0;
                        }
                        pbVar12 = pbVar13 + 1;
                        bVar2 = *pbVar13;
                        pbVar13 = pbVar12;
                      } while (bVar2 != 10 && bVar2 != 0xd);
                    }
                    else {
                      pbVar12 = pbVar12 + 1;
                    }
                    *(byte **)(unaff_x20 + 0x28) = pbVar12;
                  } while( true );
                }
              }
              if (unaff_x20[0x48] == '\x01') {
                uVar8 = 0x5b;
                puVar20 = (undefined1 *)0xe100000000000000;
                __sSS9hasPrefixySbSSF(0x5b,0xe100000000000000,puVar17,puVar11);
                _swift_bridgeObjectRelease();
                lVar15 = lStack_a8;
                if ((uVar8 & 1) == 0) {
                  pbVar13 = *(byte **)(unaff_x20 + 0x28);
                  do {
                    if ((pbVar13 == pbVar18) || (bVar2 = *pbVar13, 0x23 < bVar2))
                    goto LAB_10459d65c;
                    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                      if ((ulong)bVar2 != 0x23) goto LAB_10459d65c;
                      pbVar12 = pbVar13 + 1;
                      do {
                        if (pbVar12 == pbVar18) {
                          *(byte **)(unaff_x20 + 0x28) = pbVar18;
                          pbVar13 = pbVar18;
                          goto LAB_10459d65c;
                        }
                        pbVar13 = pbVar12 + 1;
                        bVar2 = *pbVar12;
                        pbVar12 = pbVar13;
                      } while (bVar2 != 10 && bVar2 != 0xd);
                    }
                    else {
                      pbVar13 = pbVar13 + 1;
                    }
                    *(byte **)(unaff_x20 + 0x28) = pbVar13;
                  } while( true );
                }
              }
              else {
                _swift_bridgeObjectRelease();
              }
              FUN_1045407b0();
              _swift_allocError(&UNK_11078a540,puVar11,0,0);
              *puVar11 = 7;
              goto LAB_10459d818;
            }
          }
        }
        _swift_bridgeObjectRelease(puVar11);
        pcVar16 = *(code **)(lStack_d0 + 0x20);
        lVar21 = lStack_98;
      }
      puVar20 = unaff_x20;
      (*pcVar16)(lVar21);
      goto LAB_10459d42c;
    }
LAB_10459d7f4:
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,puVar17,0,0);
    *puVar17 = 0;
LAB_10459d818:
    _swift_willThrow();
    lVar15 = lStack_a8;
    lVar19 = lStack_a0;
    lVar6 = lStack_f8;
    lVar21 = lStack_100;
  }
  else {
    *(byte **)(unaff_x20 + 0x28) = pbVar12 + 1;
    FUN_1045ab5a4();
    lVar15 = lStack_a8;
    lVar19 = lStack_d8;
    lVar6 = lStack_f8;
    puVar11 = puStack_118;
    lVar21 = *(long *)(unaff_x20 + 0x50) + 1;
    if (SCARRY8(*(long *)(unaff_x20 + 0x50),1)) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10459db14);
      (*pcVar16)();
    }
    *(long *)(unaff_x20 + 0x50) = lVar21;
    if (*(long *)(unaff_x20 + 0x40) < lVar21) {
      *(undefined4 *)(lVar7 + -8) = 0;
      *(undefined8 *)(lVar7 + -0x10) = 0x119;
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                ("Fatal error",0xb,2,0xd00000000000003f,0x800000010f208260,
                 "SwiftProtobuf/TextFormatScanner.swift",0x25,2);
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10459db68);
      (*pcVar16)();
    }
    (**(code **)(lStack_a8 + 0x10))(puStack_118,lVar7,lStack_f8);
    lVar5 = lStack_108;
    puVar20 = puVar11;
    (**(code **)(lVar19 + 0x30))(puVar11,1);
    puVar17 = puStack_110;
    if ((int)puVar20 == 1) {
      (**(code **)(lVar15 + 8))(puVar11,lVar6);
      puVar17 = puVar11;
      lVar19 = lStack_a0;
      lVar21 = lStack_100;
    }
    else {
      (**(code **)(lStack_d8 + 0x20))(lVar4,puVar11,lVar5);
      lVar21 = lStack_100;
      (**(code **)(lStack_100 + 0x10))(puVar17,lStack_98,lStack_a0);
      lVar19 = lStack_90;
      puVar11 = puVar17;
      (**(code **)(lStack_90 + 0x30))(puVar17,1,lVar14);
      lVar6 = lStack_e8;
      if ((int)puVar11 != 1) {
        (**(code **)(lVar19 + 0x20))(lStack_e8,puVar17,lVar14);
        (**(code **)(lStack_d8 + 0x10))(lStack_e0,lVar4,lVar5);
        lVar21 = lStack_f0;
        (**(code **)(lVar19 + 0x10))(lStack_f0,lVar6,lVar14);
        (*pcStack_120)(lVar21,0,1,lVar14);
        _swift_getAssociatedConformanceWitness(lVar10,param_2,lVar5,&UNK_10e814078,&UNK_10e814080);
        uVar9 = 0;
        __sSDMa(0,lVar5,lVar14,lVar10);
        __sSDyq_Sgxcis(lVar21,lStack_e0,uVar9);
        (**(code **)(lVar19 + 8))(lVar6,lVar14);
        (**(code **)(lStack_d8 + 8))(lVar4,lVar5);
        (**(code **)(lStack_100 + 8))(lStack_98,lStack_a0);
        pcVar16 = *(code **)(lVar15 + 8);
        lVar6 = lStack_f8;
        goto LAB_10459d844;
      }
      (**(code **)(lStack_d8 + 8))(lVar4,lVar5);
      lVar19 = lStack_a0;
      (**(code **)(lVar21 + 8))(puVar17,lStack_a0);
      lVar6 = lStack_f8;
    }
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,puVar17,0,0);
    *puVar17 = 0;
    _swift_willThrow();
  }
  goto LAB_10459d82c;
LAB_10459d5a0:
  if ((pbVar12 != pbVar18) && (*pbVar12 == 0x3a)) {
    do {
      pbVar12 = pbVar12 + 1;
LAB_10459d5b8:
      *(byte **)(unaff_x20 + 0x28) = pbVar12;
      if ((pbVar12 == pbVar18) || (bVar2 = *pbVar12, 0x23 < bVar2)) {
LAB_10459d7b4:
        puVar17 = puVar11;
        if (pbVar12 == pbVar18) goto LAB_10459d7f4;
        goto LAB_10459d7bc;
      }
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar2 != 0x23) goto LAB_10459d7b4;
    pbVar13 = pbVar12 + 1;
    do {
      pbVar12 = pbVar18;
      if (pbVar13 == pbVar18) break;
      pbVar12 = pbVar13 + 1;
      bVar2 = *pbVar13;
      pbVar13 = pbVar12;
    } while (bVar2 != 10 && bVar2 != 0xd);
    goto LAB_10459d5b8;
  }
  goto LAB_10459d7d0;
LAB_10459d65c:
  if ((pbVar13 != pbVar18) && (pbVar12 = pbVar13 + 1, *pbVar13 == 0x3a)) {
    *(byte **)(unaff_x20 + 0x28) = pbVar12;
    do {
      if ((pbVar12 == pbVar18) || (bVar2 = *pbVar12, 0x23 < bVar2)) goto LAB_10459d7a8;
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar2 != 0x23) goto LAB_10459d7a8;
        pbVar13 = pbVar12 + 1;
        do {
          pbVar12 = pbVar18;
          if (pbVar13 == pbVar18) break;
          pbVar12 = pbVar13 + 1;
          bVar2 = *pbVar13;
          pbVar13 = pbVar12;
        } while (bVar2 != 10 && bVar2 != 0xd);
      }
      else {
        pbVar12 = pbVar12 + 1;
      }
      *(byte **)(unaff_x20 + 0x28) = pbVar12;
    } while( true );
  }
  goto LAB_10459d7d0;
LAB_10459d7a8:
  if (pbVar12 == pbVar18) {
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,puVar11,0,0);
    *puVar11 = 0;
    _swift_willThrow();
    lVar19 = lStack_a0;
    lVar6 = lStack_f8;
    lVar21 = lStack_100;
    goto LAB_10459d82c;
  }
LAB_10459d7bc:
  if ((*pbVar12 != 0x3c) && (*pbVar12 != 0x7b)) {
    FUN_1045ac4e8(1);
    goto LAB_10459d42c;
  }
LAB_10459d7d0:
  FUN_1045ac7cc();
LAB_10459d42c:
  pbVar12 = *(byte **)(unaff_x20 + 0x28);
  pbVar18 = *(byte **)(unaff_x20 + 0x30);
  puVar11 = puVar20;
  if ((pbVar12 != pbVar18) && ((*pbVar12 == 0x3b || (*pbVar12 == 0x2c)))) {
    do {
      pbVar12 = pbVar12 + 1;
LAB_10459d474:
      *(byte **)(unaff_x20 + 0x28) = pbVar12;
      if ((pbVar12 == pbVar18) || (bVar2 = *pbVar12, 0x23 < bVar2)) goto LAB_10459d340;
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar2 != 0x23) goto LAB_10459d340;
    pbVar13 = pbVar12 + 1;
    while (pbVar12 = pbVar18, pbVar13 != pbVar18) {
      pbVar12 = pbVar13 + 1;
      bVar2 = *pbVar13;
      if ((bVar2 == 10) || (pbVar13 = pbVar12, bVar2 == 0xd)) break;
    }
    goto LAB_10459d474;
  }
  goto LAB_10459d340;
}



/* Entry: 10459db68; end: 10459e59b;  */

void FUN_10459db68(undefined8 param_1,undefined8 param_2,undefined1 *param_3,long param_4,
                  undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar15;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar16;
  byte *pbVar17;
  long lVar18;
  undefined1 *puVar19;
  long lVar20;
  code *pcVar21;
  long lVar22;
  undefined8 uStack_130;
  undefined4 auStack_128 [2];
  undefined1 auStack_120 [8];
  code *pcStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  uint uStack_84;
  
  lVar20 = *(long *)(param_3 + -8);
  uStack_d0 = param_5;
  uStack_b0 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  lVar10 = *(long *)(param_4 + 8);
  lVar5 = 0;
  puStack_e0 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedTypeWitness();
  lVar18 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar14 = (long)(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_d8 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12;
  lVar6 = 0;
  lStack_b8 = lVar14;
  __sSqMa(0,param_3);
  lVar15 = *(long *)(lVar6 + -8);
  lStack_98 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar14 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_e8 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar16 = (undefined1 *)(lVar14 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (long)puVar16 - extraout_x12_01;
  lVar6 = 0;
  __sSqMa(0,lVar5);
  lStack_a0 = *(long *)(lVar6 + -8);
  lStack_a8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar19 = (undefined1 *)(lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar19 - extraout_x12_02;
  (**(code **)(lVar18 + 0x38))(lVar7,1,1,lVar5);
  pcVar21 = *(code **)(lVar20 + 0x38);
  puVar11 = (undefined1 *)0x1;
  lStack_c8 = lVar20;
  puStack_c0 = param_3;
  lStack_90 = lVar14;
  (*pcVar21)(lVar14,1,1,param_3);
  uVar4 = (uint)lVar14;
  FUN_1045a8898();
  lVar14 = lStack_b8;
  puVar3 = puStack_c0;
  lVar6 = lStack_c8;
  lVar20 = lStack_a8;
  lVar22 = lStack_a0;
  if (unaff_x21 == 0) {
    bVar1 = unaff_x20[0x49];
    pbVar12 = *(byte **)(unaff_x20 + 0x28);
    pbVar17 = *(byte **)(unaff_x20 + 0x30);
    pcStack_118 = pcVar21;
    puStack_110 = puVar16;
    puStack_108 = puVar19;
    lStack_100 = lVar18;
    lStack_f8 = lVar5;
    lStack_f0 = lVar15;
    uStack_84 = uVar4;
LAB_10459dda4:
    if ((pbVar12 != pbVar17) && ((uint)*pbVar12 == (uStack_84 & 0xff))) {
      *(byte **)(unaff_x20 + 0x28) = pbVar12 + 1;
      FUN_1045ab5a4();
      lVar22 = lStack_a0;
      lVar20 = lStack_a8;
      lVar18 = lStack_f8;
      lVar5 = lStack_100;
      puVar11 = puStack_108;
      lVar15 = *(long *)(unaff_x20 + 0x50) + 1;
      if (SCARRY8(*(long *)(unaff_x20 + 0x50),1)) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x10459e548);
        (*pcVar21)();
      }
      *(long *)(unaff_x20 + 0x50) = lVar15;
      if (*(long *)(unaff_x20 + 0x40) < lVar15) {
        *(undefined4 *)(lVar7 + -8) = 0;
        *(undefined8 *)(lVar7 + -0x10) = 0x119;
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd00000000000003f,0x800000010f208260,
                   "SwiftProtobuf/TextFormatScanner.swift",0x25,2);
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x10459e59c);
        (*pcVar21)();
      }
      (**(code **)(lStack_a0 + 0x10))(puStack_108,lVar7,lStack_a8);
      puVar16 = puVar11;
      (**(code **)(lVar5 + 0x30))(puVar11,1,lVar18);
      if ((int)puVar16 == 1) {
        (**(code **)(lVar22 + 8))(puVar11,lVar20);
        lVar15 = lStack_f0;
      }
      else {
        (**(code **)(lVar5 + 0x20))(lVar14,puVar11,lVar18);
        lVar15 = lStack_f0;
        puVar11 = puStack_110;
        (**(code **)(lStack_f0 + 0x10))(puStack_110,lStack_90,lStack_98);
        puVar19 = puVar11;
        (**(code **)(lVar6 + 0x30))(puVar11,1,puVar3);
        puVar16 = puStack_e0;
        if ((int)puVar19 != 1) {
          (**(code **)(lVar6 + 0x20))(puStack_e0,puVar11,puVar3);
          (**(code **)(lVar5 + 0x10))(lStack_d8,lVar14,lVar18);
          lVar15 = lStack_e8;
          (**(code **)(lVar6 + 0x10))(lStack_e8,puVar16,puVar3);
          (*pcStack_118)(lVar15,0,1,puVar3);
          _swift_getAssociatedConformanceWitness
                    (lVar10,param_2,lVar18,&UNK_10e814078,&UNK_10e814080);
          uVar9 = 0;
          __sSDMa(0,lVar18,puVar3,lVar10);
          __sSDyq_Sgxcis(lVar15,lStack_d8,uVar9);
          (**(code **)(lVar6 + 8))(puVar16,puVar3);
          (**(code **)(lVar5 + 8))(lStack_b8,lVar18);
          (**(code **)(lStack_f0 + 8))(lStack_90,lStack_98);
          pcVar21 = *(code **)(lStack_a0 + 8);
          goto LAB_10459e2a0;
        }
        (**(code **)(lVar5 + 8))(lVar14,lVar18);
        (**(code **)(lVar15 + 8))(puVar11,lStack_98);
        lVar22 = lStack_a0;
      }
      FUN_1045407b0();
      _swift_allocError(&UNK_11078a540,puVar11,0,0);
      *puVar11 = 0;
      _swift_willThrow();
      goto LAB_10459e294;
    }
    puVar16 = (undefined1 *)(ulong)(uint)bVar1;
    FUN_1045a9bf8();
    if (puVar11 == (undefined1 *)0x0) goto LAB_10459e25c;
    if ((puVar16 == (undefined1 *)0x79656b) && (puVar11 == (undefined1 *)0xe300000000000000)) {
LAB_10459de58:
      _swift_bridgeObjectRelease(puVar11);
      puVar19 = unaff_x20;
      (**(code **)(lVar10 + 0x20))(lVar7);
      goto LAB_10459de8c;
    }
    uVar8 = 0x79656b;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x79656b,0xe300000000000000,puVar16,puVar11,0);
    if (((uVar8 & 1) != 0) ||
       ((puVar16 == (undefined1 *)0x31 && (puVar11 == (undefined1 *)0xe100000000000000))))
    goto LAB_10459de58;
    uVar8 = 0x31;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x31,0xe100000000000000,puVar16,puVar11,0);
    if ((uVar8 & 1) != 0) goto LAB_10459de58;
    if ((puVar16 != (undefined1 *)0x65756c6176) || (puVar11 != (undefined1 *)0xe500000000000000)) {
      uVar8 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x65756c6176,0xe500000000000000,puVar16,puVar11,0);
      if (((uVar8 & 1) == 0) &&
         (puVar16 != (undefined1 *)0x32 || puVar11 != (undefined1 *)0xe100000000000000)) {
        uVar8 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x32,0xe100000000000000,puVar16,puVar11,0);
        if ((uVar8 & 1) == 0) {
          if (bVar1 != 0) {
            uVar8 = 0x5b;
            puVar19 = (undefined1 *)0xe100000000000000;
            __sSS9hasPrefixySbSSF(0x5b,0xe100000000000000,puVar16,puVar11);
            if ((uVar8 & 1) != 0) {
              _swift_bridgeObjectRelease();
              pbVar12 = *(byte **)(unaff_x20 + 0x28);
              do {
                if ((pbVar12 == pbVar17) || (bVar2 = *pbVar12, 0x23 < bVar2)) goto LAB_10459e008;
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) goto LAB_10459e008;
                  pbVar13 = pbVar12 + 1;
                  do {
                    if (pbVar13 == pbVar17) {
                      *(byte **)(unaff_x20 + 0x28) = pbVar17;
                      pbVar12 = pbVar17;
                      goto LAB_10459e008;
                    }
                    pbVar12 = pbVar13 + 1;
                    bVar2 = *pbVar13;
                    pbVar13 = pbVar12;
                  } while (bVar2 != 10 && bVar2 != 0xd);
                }
                else {
                  pbVar12 = pbVar12 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar12;
              } while( true );
            }
          }
          if (unaff_x20[0x48] == '\x01') {
            uVar8 = 0x5b;
            puVar19 = (undefined1 *)0xe100000000000000;
            __sSS9hasPrefixySbSSF(0x5b,0xe100000000000000,puVar16,puVar11);
            _swift_bridgeObjectRelease();
            lVar22 = lStack_a0;
            if ((uVar8 & 1) == 0) {
              pbVar13 = *(byte **)(unaff_x20 + 0x28);
              do {
                if ((pbVar13 == pbVar17) || (bVar2 = *pbVar13, 0x23 < bVar2)) goto LAB_10459e0c4;
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) goto LAB_10459e0c4;
                  pbVar12 = pbVar13 + 1;
                  do {
                    if (pbVar12 == pbVar17) {
                      *(byte **)(unaff_x20 + 0x28) = pbVar17;
                      pbVar13 = pbVar17;
                      goto LAB_10459e0c4;
                    }
                    pbVar13 = pbVar12 + 1;
                    bVar2 = *pbVar12;
                    pbVar12 = pbVar13;
                  } while (bVar2 != 10 && bVar2 != 0xd);
                }
                else {
                  pbVar13 = pbVar13 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar13;
              } while( true );
            }
          }
          else {
            _swift_bridgeObjectRelease();
          }
          FUN_1045407b0();
          _swift_allocError(&UNK_11078a540,puVar11,0,0);
          *puVar11 = 7;
          goto LAB_10459e280;
        }
      }
    }
    _swift_bridgeObjectRelease(puVar11);
    puVar19 = puVar3;
    FUN_10459aed0(lStack_90,puVar3,uStack_d0);
    goto LAB_10459de8c;
  }
  goto LAB_10459e294;
LAB_10459e008:
  if ((pbVar12 != pbVar17) && (*pbVar12 == 0x3a)) {
    do {
      pbVar12 = pbVar12 + 1;
LAB_10459e020:
      *(byte **)(unaff_x20 + 0x28) = pbVar12;
      if ((pbVar12 == pbVar17) || (bVar2 = *pbVar12, 0x23 < bVar2)) {
LAB_10459e21c:
        puVar16 = puVar11;
        if (pbVar12 == pbVar17) goto LAB_10459e25c;
        goto LAB_10459e224;
      }
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar2 != 0x23) goto LAB_10459e21c;
    pbVar13 = pbVar12 + 1;
    do {
      pbVar12 = pbVar17;
      if (pbVar13 == pbVar17) break;
      pbVar12 = pbVar13 + 1;
      bVar2 = *pbVar13;
      pbVar13 = pbVar12;
    } while (bVar2 != 10 && bVar2 != 0xd);
    goto LAB_10459e020;
  }
  goto LAB_10459e238;
LAB_10459e0c4:
  if ((pbVar13 != pbVar17) && (pbVar12 = pbVar13 + 1, *pbVar13 == 0x3a)) {
    *(byte **)(unaff_x20 + 0x28) = pbVar12;
    do {
      if ((pbVar12 == pbVar17) || (bVar2 = *pbVar12, 0x23 < bVar2)) goto LAB_10459e210;
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar2 != 0x23) goto LAB_10459e210;
        pbVar13 = pbVar12 + 1;
        do {
          pbVar12 = pbVar17;
          if (pbVar13 == pbVar17) break;
          pbVar12 = pbVar13 + 1;
          bVar2 = *pbVar13;
          pbVar13 = pbVar12;
        } while (bVar2 != 10 && bVar2 != 0xd);
      }
      else {
        pbVar12 = pbVar12 + 1;
      }
      *(byte **)(unaff_x20 + 0x28) = pbVar12;
    } while( true );
  }
  goto LAB_10459e238;
LAB_10459e210:
  if (pbVar12 == pbVar17) {
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,puVar11,0,0);
    *puVar11 = 0;
    _swift_willThrow();
    lVar15 = lStack_f0;
    lVar20 = lStack_a8;
    goto LAB_10459e294;
  }
LAB_10459e224:
  if ((*pbVar12 != 0x3c) && (*pbVar12 != 0x7b)) {
    FUN_1045ac4e8(1);
    goto LAB_10459de8c;
  }
LAB_10459e238:
  FUN_1045ac7cc();
LAB_10459de8c:
  pbVar12 = *(byte **)(unaff_x20 + 0x28);
  pbVar17 = *(byte **)(unaff_x20 + 0x30);
  puVar11 = puVar19;
  if ((pbVar12 != pbVar17) && ((*pbVar12 == 0x3b || (*pbVar12 == 0x2c)))) {
    do {
      pbVar12 = pbVar12 + 1;
LAB_10459ded0:
      *(byte **)(unaff_x20 + 0x28) = pbVar12;
      if ((pbVar12 == pbVar17) || (bVar2 = *pbVar12, 0x23 < bVar2)) goto LAB_10459dda4;
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar2 != 0x23) goto LAB_10459dda4;
    pbVar13 = pbVar12 + 1;
    while (pbVar12 = pbVar17, pbVar13 != pbVar17) {
      pbVar12 = pbVar13 + 1;
      bVar2 = *pbVar13;
      if ((bVar2 == 10) || (pbVar13 = pbVar12, bVar2 == 0xd)) break;
    }
    goto LAB_10459ded0;
  }
  goto LAB_10459dda4;
LAB_10459e25c:
  FUN_1045407b0();
  _swift_allocError(&UNK_11078a540,puVar16,0,0);
  *puVar16 = 0;
LAB_10459e280:
  _swift_willThrow();
  lVar15 = lStack_f0;
  lVar20 = lStack_a8;
  lVar22 = lStack_a0;
LAB_10459e294:
  (**(code **)(lVar15 + 8))(lStack_90,lStack_98);
  pcVar21 = *(code **)(lVar22 + 8);
LAB_10459e2a0:
  (*pcVar21)(lVar7,lVar20);
  return;
}



/* Entry: 10459e59c; end: 10459e70f;  */

void FUN_10459e59c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  long unaff_x20;
  long unaff_x21;
  
  pcVar3 = *(char **)(unaff_x20 + 0x28);
  pcVar1 = *(char **)(unaff_x20 + 0x30);
  if ((pcVar3 != pcVar1) && (*pcVar3 == ':')) {
    *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
    FUN_1045ab5a4();
    pcVar3 = *(char **)(unaff_x20 + 0x28);
  }
  if ((pcVar3 == pcVar1) || (*pcVar3 != '[')) {
    (*param_6)(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
    FUN_1045ab5a4();
    pcVar3 = *(char **)(unaff_x20 + 0x28);
    if ((pcVar3 == *(char **)(unaff_x20 + 0x30)) || (*pcVar3 != ']')) {
      while (puVar2 = param_1, (*param_6)(param_1,param_2,param_3,param_4,param_5), unaff_x21 == 0)
      {
        pcVar3 = *(char **)(unaff_x20 + 0x28);
        pcVar1 = *(char **)(unaff_x20 + 0x30);
        if ((pcVar3 != pcVar1) && (*pcVar3 == ']')) goto LAB_10459e634;
        FUN_1045ab5a4();
        pcVar3 = *(char **)(unaff_x20 + 0x28);
        if ((pcVar3 == pcVar1) || (*pcVar3 != ',')) {
          FUN_1045407b0();
          _swift_allocError(&UNK_11078a540,puVar2,0,0);
          *puVar2 = 0;
          _swift_willThrow();
          return;
        }
        *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
        FUN_1045ab5a4();
      }
    }
    else {
LAB_10459e634:
      *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
      FUN_1045ab5a4();
    }
  }
  return;
}



/* Entry: 10459e710; end: 10459f143;  */

void FUN_10459e710(undefined8 param_1,undefined8 param_2,undefined1 *param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar15;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar16;
  byte *pbVar17;
  long lVar18;
  undefined1 *puVar19;
  long lVar20;
  code *pcVar21;
  long lVar22;
  undefined8 uStack_130;
  undefined4 auStack_128 [2];
  undefined1 auStack_120 [8];
  code *pcStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  uint uStack_84;
  
  lVar20 = *(long *)(param_3 + -8);
  uStack_d0 = param_6;
  uStack_b0 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  lVar10 = *(long *)(param_4 + 8);
  lVar5 = 0;
  puStack_e0 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedTypeWitness();
  lVar18 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar14 = (long)(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_d8 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12;
  lVar6 = 0;
  lStack_b8 = lVar14;
  __sSqMa(0,param_3);
  lVar15 = *(long *)(lVar6 + -8);
  lStack_98 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar14 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_e8 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar16 = (undefined1 *)(lVar14 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (long)puVar16 - extraout_x12_01;
  lVar6 = 0;
  __sSqMa(0,lVar5);
  lStack_a0 = *(long *)(lVar6 + -8);
  lStack_a8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar19 = (undefined1 *)(lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar19 - extraout_x12_02;
  (**(code **)(lVar18 + 0x38))(lVar7,1,1,lVar5);
  pcVar21 = *(code **)(lVar20 + 0x38);
  puVar11 = (undefined1 *)0x1;
  lStack_c8 = lVar20;
  puStack_c0 = param_3;
  lStack_90 = lVar14;
  (*pcVar21)(lVar14,1,1,param_3);
  uVar4 = (uint)lVar14;
  FUN_1045a8898();
  lVar14 = lStack_b8;
  puVar3 = puStack_c0;
  lVar6 = lStack_c8;
  lVar20 = lStack_a8;
  lVar22 = lStack_a0;
  if (unaff_x21 == 0) {
    bVar1 = unaff_x20[0x49];
    pbVar12 = *(byte **)(unaff_x20 + 0x28);
    pbVar17 = *(byte **)(unaff_x20 + 0x30);
    pcStack_118 = pcVar21;
    puStack_110 = puVar16;
    puStack_108 = puVar19;
    lStack_100 = lVar18;
    lStack_f8 = lVar5;
    lStack_f0 = lVar15;
    uStack_84 = uVar4;
LAB_10459e94c:
    if ((pbVar12 != pbVar17) && ((uint)*pbVar12 == (uStack_84 & 0xff))) {
      *(byte **)(unaff_x20 + 0x28) = pbVar12 + 1;
      FUN_1045ab5a4();
      lVar22 = lStack_a0;
      lVar20 = lStack_a8;
      lVar18 = lStack_f8;
      lVar5 = lStack_100;
      puVar11 = puStack_108;
      lVar15 = *(long *)(unaff_x20 + 0x50) + 1;
      if (SCARRY8(*(long *)(unaff_x20 + 0x50),1)) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x10459f0f0);
        (*pcVar21)();
      }
      *(long *)(unaff_x20 + 0x50) = lVar15;
      if (*(long *)(unaff_x20 + 0x40) < lVar15) {
        *(undefined4 *)(lVar7 + -8) = 0;
        *(undefined8 *)(lVar7 + -0x10) = 0x119;
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd00000000000003f,0x800000010f208260,
                   "SwiftProtobuf/TextFormatScanner.swift",0x25,2);
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x10459f144);
        (*pcVar21)();
      }
      (**(code **)(lStack_a0 + 0x10))(puStack_108,lVar7,lStack_a8);
      puVar16 = puVar11;
      (**(code **)(lVar5 + 0x30))(puVar11,1,lVar18);
      if ((int)puVar16 == 1) {
        (**(code **)(lVar22 + 8))(puVar11,lVar20);
        lVar15 = lStack_f0;
      }
      else {
        (**(code **)(lVar5 + 0x20))(lVar14,puVar11,lVar18);
        lVar15 = lStack_f0;
        puVar11 = puStack_110;
        (**(code **)(lStack_f0 + 0x10))(puStack_110,lStack_90,lStack_98);
        puVar19 = puVar11;
        (**(code **)(lVar6 + 0x30))(puVar11,1,puVar3);
        puVar16 = puStack_e0;
        if ((int)puVar19 != 1) {
          (**(code **)(lVar6 + 0x20))(puStack_e0,puVar11,puVar3);
          (**(code **)(lVar5 + 0x10))(lStack_d8,lVar14,lVar18);
          lVar15 = lStack_e8;
          (**(code **)(lVar6 + 0x10))(lStack_e8,puVar16,puVar3);
          (*pcStack_118)(lVar15,0,1,puVar3);
          _swift_getAssociatedConformanceWitness
                    (lVar10,param_2,lVar18,&UNK_10e814078,&UNK_10e814080);
          uVar9 = 0;
          __sSDMa(0,lVar18,puVar3,lVar10);
          __sSDyq_Sgxcis(lVar15,lStack_d8,uVar9);
          (**(code **)(lVar6 + 8))(puVar16,puVar3);
          (**(code **)(lVar5 + 8))(lStack_b8,lVar18);
          (**(code **)(lStack_f0 + 8))(lStack_90,lStack_98);
          pcVar21 = *(code **)(lStack_a0 + 8);
          goto LAB_10459ee48;
        }
        (**(code **)(lVar5 + 8))(lVar14,lVar18);
        (**(code **)(lVar15 + 8))(puVar11,lStack_98);
        lVar22 = lStack_a0;
      }
      FUN_1045407b0();
      _swift_allocError(&UNK_11078a540,puVar11,0,0);
      *puVar11 = 0;
      _swift_willThrow();
      goto LAB_10459ee3c;
    }
    puVar16 = (undefined1 *)(ulong)(uint)bVar1;
    FUN_1045a9bf8();
    if (puVar11 == (undefined1 *)0x0) goto LAB_10459ee04;
    if ((puVar16 == (undefined1 *)0x79656b) && (puVar11 == (undefined1 *)0xe300000000000000)) {
LAB_10459ea00:
      _swift_bridgeObjectRelease(puVar11);
      puVar19 = unaff_x20;
      (**(code **)(lVar10 + 0x20))(lVar7);
      goto LAB_10459ea34;
    }
    uVar8 = 0x79656b;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x79656b,0xe300000000000000,puVar16,puVar11,0);
    if (((uVar8 & 1) != 0) ||
       ((puVar16 == (undefined1 *)0x31 && (puVar11 == (undefined1 *)0xe100000000000000))))
    goto LAB_10459ea00;
    uVar8 = 0x31;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x31,0xe100000000000000,puVar16,puVar11,0);
    if ((uVar8 & 1) != 0) goto LAB_10459ea00;
    if ((puVar16 != (undefined1 *)0x65756c6176) || (puVar11 != (undefined1 *)0xe500000000000000)) {
      uVar8 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x65756c6176,0xe500000000000000,puVar16,puVar11,0);
      if (((uVar8 & 1) == 0) &&
         (puVar16 != (undefined1 *)0x32 || puVar11 != (undefined1 *)0xe100000000000000)) {
        uVar8 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x32,0xe100000000000000,puVar16,puVar11,0);
        if ((uVar8 & 1) == 0) {
          if (bVar1 != 0) {
            uVar8 = 0x5b;
            puVar19 = (undefined1 *)0xe100000000000000;
            __sSS9hasPrefixySbSSF(0x5b,0xe100000000000000,puVar16,puVar11);
            if ((uVar8 & 1) != 0) {
              _swift_bridgeObjectRelease();
              pbVar12 = *(byte **)(unaff_x20 + 0x28);
              do {
                if ((pbVar12 == pbVar17) || (bVar2 = *pbVar12, 0x23 < bVar2)) goto LAB_10459ebb0;
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) goto LAB_10459ebb0;
                  pbVar13 = pbVar12 + 1;
                  do {
                    if (pbVar13 == pbVar17) {
                      *(byte **)(unaff_x20 + 0x28) = pbVar17;
                      pbVar12 = pbVar17;
                      goto LAB_10459ebb0;
                    }
                    pbVar12 = pbVar13 + 1;
                    bVar2 = *pbVar13;
                    pbVar13 = pbVar12;
                  } while (bVar2 != 10 && bVar2 != 0xd);
                }
                else {
                  pbVar12 = pbVar12 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar12;
              } while( true );
            }
          }
          if (unaff_x20[0x48] == '\x01') {
            uVar8 = 0x5b;
            puVar19 = (undefined1 *)0xe100000000000000;
            __sSS9hasPrefixySbSSF(0x5b,0xe100000000000000,puVar16,puVar11);
            _swift_bridgeObjectRelease();
            lVar22 = lStack_a0;
            if ((uVar8 & 1) == 0) {
              pbVar13 = *(byte **)(unaff_x20 + 0x28);
              do {
                if ((pbVar13 == pbVar17) || (bVar2 = *pbVar13, 0x23 < bVar2)) goto LAB_10459ec6c;
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) goto LAB_10459ec6c;
                  pbVar12 = pbVar13 + 1;
                  do {
                    if (pbVar12 == pbVar17) {
                      *(byte **)(unaff_x20 + 0x28) = pbVar17;
                      pbVar13 = pbVar17;
                      goto LAB_10459ec6c;
                    }
                    pbVar13 = pbVar12 + 1;
                    bVar2 = *pbVar12;
                    pbVar12 = pbVar13;
                  } while (bVar2 != 10 && bVar2 != 0xd);
                }
                else {
                  pbVar13 = pbVar13 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar13;
              } while( true );
            }
          }
          else {
            _swift_bridgeObjectRelease();
          }
          FUN_1045407b0();
          _swift_allocError(&UNK_11078a540,puVar11,0,0);
          *puVar11 = 7;
          goto LAB_10459ee28;
        }
      }
    }
    _swift_bridgeObjectRelease(puVar11);
    puVar19 = puVar3;
    FUN_10459b460(lStack_90,puVar3,uStack_d0);
    goto LAB_10459ea34;
  }
  goto LAB_10459ee3c;
LAB_10459ebb0:
  if ((pbVar12 != pbVar17) && (*pbVar12 == 0x3a)) {
    do {
      pbVar12 = pbVar12 + 1;
LAB_10459ebc8:
      *(byte **)(unaff_x20 + 0x28) = pbVar12;
      if ((pbVar12 == pbVar17) || (bVar2 = *pbVar12, 0x23 < bVar2)) {
LAB_10459edc4:
        puVar16 = puVar11;
        if (pbVar12 == pbVar17) goto LAB_10459ee04;
        goto LAB_10459edcc;
      }
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar2 != 0x23) goto LAB_10459edc4;
    pbVar13 = pbVar12 + 1;
    do {
      pbVar12 = pbVar17;
      if (pbVar13 == pbVar17) break;
      pbVar12 = pbVar13 + 1;
      bVar2 = *pbVar13;
      pbVar13 = pbVar12;
    } while (bVar2 != 10 && bVar2 != 0xd);
    goto LAB_10459ebc8;
  }
  goto LAB_10459ede0;
LAB_10459ec6c:
  if ((pbVar13 != pbVar17) && (pbVar12 = pbVar13 + 1, *pbVar13 == 0x3a)) {
    *(byte **)(unaff_x20 + 0x28) = pbVar12;
    do {
      if ((pbVar12 == pbVar17) || (bVar2 = *pbVar12, 0x23 < bVar2)) goto LAB_10459edb8;
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar2 != 0x23) goto LAB_10459edb8;
        pbVar13 = pbVar12 + 1;
        do {
          pbVar12 = pbVar17;
          if (pbVar13 == pbVar17) break;
          pbVar12 = pbVar13 + 1;
          bVar2 = *pbVar13;
          pbVar13 = pbVar12;
        } while (bVar2 != 10 && bVar2 != 0xd);
      }
      else {
        pbVar12 = pbVar12 + 1;
      }
      *(byte **)(unaff_x20 + 0x28) = pbVar12;
    } while( true );
  }
  goto LAB_10459ede0;
LAB_10459edb8:
  if (pbVar12 == pbVar17) {
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,puVar11,0,0);
    *puVar11 = 0;
    _swift_willThrow();
    lVar15 = lStack_f0;
    lVar20 = lStack_a8;
    goto LAB_10459ee3c;
  }
LAB_10459edcc:
  if ((*pbVar12 != 0x3c) && (*pbVar12 != 0x7b)) {
    FUN_1045ac4e8(1);
    goto LAB_10459ea34;
  }
LAB_10459ede0:
  FUN_1045ac7cc();
LAB_10459ea34:
  pbVar12 = *(byte **)(unaff_x20 + 0x28);
  pbVar17 = *(byte **)(unaff_x20 + 0x30);
  puVar11 = puVar19;
  if ((pbVar12 != pbVar17) && ((*pbVar12 == 0x3b || (*pbVar12 == 0x2c)))) {
    do {
      pbVar12 = pbVar12 + 1;
LAB_10459ea78:
      *(byte **)(unaff_x20 + 0x28) = pbVar12;
      if ((pbVar12 == pbVar17) || (bVar2 = *pbVar12, 0x23 < bVar2)) goto LAB_10459e94c;
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar2 != 0x23) goto LAB_10459e94c;
    pbVar13 = pbVar12 + 1;
    while (pbVar12 = pbVar17, pbVar13 != pbVar17) {
      pbVar12 = pbVar13 + 1;
      bVar2 = *pbVar13;
      if ((bVar2 == 10) || (pbVar13 = pbVar12, bVar2 == 0xd)) break;
    }
    goto LAB_10459ea78;
  }
  goto LAB_10459e94c;
LAB_10459ee04:
  FUN_1045407b0();
  _swift_allocError(&UNK_11078a540,puVar16,0,0);
  *puVar16 = 0;
LAB_10459ee28:
  _swift_willThrow();
  lVar15 = lStack_f0;
  lVar20 = lStack_a8;
  lVar22 = lStack_a0;
LAB_10459ee3c:
  (**(code **)(lVar15 + 8))(lStack_90,lStack_98);
  pcVar21 = *(code **)(lVar22 + 8);
LAB_10459ee48:
  (*pcVar21)(lVar7,lVar20);
  return;
}



/* Entry: 10459f144; end: 10459f2bf;  */

void FUN_10459f144(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  long unaff_x20;
  long unaff_x21;
  
  pcVar3 = *(char **)(unaff_x20 + 0x28);
  pcVar1 = *(char **)(unaff_x20 + 0x30);
  if ((pcVar3 != pcVar1) && (*pcVar3 == ':')) {
    *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
    FUN_1045ab5a4();
    pcVar3 = *(char **)(unaff_x20 + 0x28);
  }
  if ((pcVar3 == pcVar1) || (*pcVar3 != '[')) {
    FUN_10459e710(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
    FUN_1045ab5a4();
    pcVar3 = *(char **)(unaff_x20 + 0x28);
    if ((pcVar3 == *(char **)(unaff_x20 + 0x30)) || (*pcVar3 != ']')) {
      while (puVar2 = param_1, FUN_10459e710(param_1,param_2,param_3,param_4,param_5,param_6),
            unaff_x21 == 0) {
        pcVar3 = *(char **)(unaff_x20 + 0x28);
        pcVar1 = *(char **)(unaff_x20 + 0x30);
        if ((pcVar3 != pcVar1) && (*pcVar3 == ']')) goto LAB_10459f1dc;
        FUN_1045ab5a4();
        pcVar3 = *(char **)(unaff_x20 + 0x28);
        if ((pcVar3 == pcVar1) || (*pcVar3 != ',')) {
          FUN_1045407b0();
          _swift_allocError(&UNK_11078a540,puVar2,0,0);
          *puVar2 = 0;
          _swift_willThrow();
          return;
        }
        *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
        FUN_1045ab5a4();
      }
    }
    else {
LAB_10459f1dc:
      *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
      FUN_1045ab5a4();
    }
  }
  return;
}



/* Entry: 10459f2c0; end: 10459f40b;  */

void FUN_10459f2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 auStack_c8 [24];
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  
  FUN_10459fccc();
  if (lStack_b0 == 0) {
    func_0x00010459fd14(auStack_c8,0x112d49548,&UNK_10d90fde0);
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x0001000a8868(auStack_c8,lStack_b0);
    (**(code **)(lStack_a8 + 8))(&uStack_a0,param_2,param_3,param_4,lStack_b0,lStack_a8);
    func_0x0001000834e4(auStack_c8);
    if (lStack_88 != 0) {
      FUN_1045574a0(&uStack_a0,auStack_78);
      pcVar1 = (code *)&uStack_a0;
      FUN_10454d0d0(pcVar1,param_4);
      FUN_10459f40c(param_4);
      (*pcVar1)(&uStack_a0,0);
      func_0x0001000834e4(auStack_78);
      return;
    }
  }
  func_0x00010459fd14(&uStack_a0,0x113084df8,&UNK_10dd16980);
  return;
}



/* Entry: 10459f40c; end: 10459f5b3;  */

void FUN_10459f40c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long unaff_x21;
  long lVar4;
  long lVar5;
  undefined1 auStack_78 [24];
  long lStack_60;
  
  FUN_10459fccc(param_1,auStack_78,0x112db4800,&UNK_10d95efc0);
  lVar4 = lStack_60;
  func_0x00010459fd14(auStack_78,0x112db4800,&UNK_10d95efc0);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    lVar4 = *(long *)(param_3 + 0x20);
    func_0x0001000a8868(param_3,uVar1);
    (**(code **)(lVar4 + 0x20))(auStack_78,param_2,&UNK_11078a2b0,&PTR_DAT_11078a2d8,uVar1,lVar4);
    if (unaff_x21 != 0) {
      return;
    }
    func_0x00010454d444(auStack_78,param_1);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10459f5b4);
      (*pcVar2)();
    }
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x0001000c6518(param_1,lVar4);
    (**(code **)(lVar5 + 0x28))(param_2,&UNK_11078a2b0,&PTR_DAT_11078a2d8,lVar4,lVar5);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_10459fccc(param_1,auStack_78,0x112db4800,&UNK_10d95efc0);
  puVar3 = auStack_78;
  func_0x00010459fd14(puVar3,0x112db4800,&UNK_10d95efc0);
  if (lStack_60 == 0) {
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,puVar3,0,0);
    *puVar3 = 10;
    _swift_willThrow();
  }
  return;
}



/* Entry: 10459f5b4; end: 10459f5ff;  */

void FUN_10459f5b4(undefined1 *param_1)

{
  FUN_1045407b0();
  _swift_allocError(&UNK_11078a540,param_1,0,0);
  *param_1 = 9;
  _swift_willThrow();
  return;
}



/* Entry: 10459f600; end: 10459f813;  */

void FUN_10459f600(void)

{
  FUN_1045981d0();
  return;
}



/* Entry: 10459f814; end: 10459f89f;  */

long FUN_10459f814(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10459f8a0; end: 10459f9a7;  */

undefined8 * FUN_10459f8a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = param_2[3];
  if (lVar2 == 0) {
    uVar3 = *param_2;
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[3] = uVar8;
    param_1[2] = uVar7;
    param_1[4] = param_2[4];
  }
  else {
    uVar3 = param_2[4];
    param_1[3] = lVar2;
    param_1[4] = uVar3;
    (*(code *)**(undefined8 **)(lVar2 + -8))(param_1,param_2);
  }
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  uVar3 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  uVar3 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  uVar3 = param_2[0xd];
  uVar8 = param_2[0xe];
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar8;
  uVar7 = param_2[0xf];
  uVar1 = param_2[0x10];
  param_1[0xf] = uVar7;
  param_1[0x10] = uVar1;
  uVar5 = param_2[0x11];
  param_1[0x11] = uVar5;
  uVar4 = param_2[0x14];
  uVar6 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar6;
  param_1[0x14] = uVar4;
  _swift_retain();
  _swift_retain(uVar3);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  return param_1;
}



/* Entry: 10459f9a8; end: 10459fb1f;  */

undefined8 * FUN_10459f9a8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_2[3];
  if (param_1[3] == 0) {
    if (lVar1 != 0) {
      param_1[3] = lVar1;
      param_1[4] = param_2[4];
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
      goto LAB_10459fa1c;
    }
  }
  else {
    if (lVar1 != 0) {
      func_0x000100083374(param_1,param_2);
      goto LAB_10459fa1c;
    }
    func_0x0001000834e4(param_1);
  }
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
LAB_10459fa1c:
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  uVar2 = param_1[7];
  param_1[7] = param_2[7];
  _swift_retain();
  _swift_release(uVar2);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  uVar2 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_retain();
  _swift_release(uVar2);
  uVar2 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[0x11];
  param_1[0x11] = param_2[0x11];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[0x12];
  param_1[0x12] = param_2[0x12];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar2;
  return param_1;
}



/* Entry: 10459fb20; end: 10459fc0b;  */

undefined8 * FUN_10459fb20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1[3] != 0) {
    func_0x0001000834e4(param_1);
  }
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_release(uVar1);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  uVar1 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar1;
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_release(uVar1);
  uVar1 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0x11];
  param_1[0x11] = param_2[0x11];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0x12];
  param_1[0x12] = param_2[0x12];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar1;
  return param_1;
}



/* Entry: 10459fc0c; end: 10459fccb;  */

int FUN_10459fc0c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x2a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0xe);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10459fccc; end: 10459fd7f;  */

undefined8 FUN_10459fccc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10459fd80; end: 10459ffff;  */

void FUN_10459fd80(void)

{
  func_0x000100dbb49c();
  return;
}



/* Entry: 1045a0000; end: 1045a000f;  */

bool FUN_1045a0000(char param_1,char param_2)

{
  return param_1 == param_2;
}



/* Entry: 1045a0010; end: 1045a0077;  */

void FUN_1045a0010(undefined8 param_1,undefined1 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 1045a0078; end: 1045a008b;  */

bool FUN_1045a0078(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1045a008c; end: 1045a0137;  */

void FUN_1045a008c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045a0138; end: 1045a013b;  */

void FUN_1045a0138(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087640 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd19320;
  _swift_getWitnessTable(&UNK_10dd19320,&UNK_11078a540);
  puRam0000000113087640 = puVar1;
  return;
}



/* Entry: 1045a013c; end: 1045a017b;  */

void FUN_1045a013c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087640 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd19320;
  _swift_getWitnessTable(&UNK_10dd19320,&UNK_11078a540);
  puRam0000000113087640 = puVar1;
  return;
}



/* Entry: 1045a017c; end: 1045a02ef;  */

void FUN_1045a017c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1045a02f0; end: 1045a040b;  */

undefined1  [16] FUN_1045a02f0(void)

{
  return ZEXT816(100);
}



/* Entry: 1045a040c; end: 1045a044b;  */

void FUN_1045a040c(void)

{
  long lVar1;
  
  lVar1 = 2;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (2,PTR___ss5UInt8VN_11034eef8);
  *(undefined8 *)(lVar1 + 0x10) = 2;
  *(undefined2 *)(lVar1 + 0x20) = 0x2020;
  lRam0000000113087648 = lVar1;
  return;
}



/* Entry: 1045a044c; end: 1045a07b3;  */

void FUN_1045a044c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  _swift_bridgeObjectRetain(unaff_x20[1]);
  func_0x000103ee3b44();
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x5b;
  *unaff_x20 = uVar3;
  _swift_bridgeObjectRetain(param_2);
  func_0x000104540f24(param_1,param_2);
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x5d;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 1045a07b4; end: 1045a08a3;  */

/* WARNING: Possible PIC construction at 0x0001045a05c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001045a05c4) */

void FUN_1045a07b4(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *unaff_x19;
  ulong *unaff_x20;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 unaff_x23;
  ulong uVar15;
  undefined8 unaff_x24;
  ulong uVar16;
  ulong uVar17;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar7 = param_2;
  puVar8 = param_3;
  puVar11 = param_3;
  FUN_1045576c0();
  if (((uint)puVar11 & 0xff) != 1) {
    uVar5 = (long)puVar8 - (long)puVar7;
    uVar6 = 0;
    if (puVar7 != (undefined1 *)0x0) {
      uVar6 = uVar5;
    }
    uVar10 = *unaff_x20;
    lVar13 = *(long *)(uVar10 + 0x10);
    if (SCARRY8(lVar13,uVar6)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104540cd4);
      (*pcVar3)();
    }
    uVar16 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((int)uVar16 != 0) {
      uVar15 = *(ulong *)(uVar10 + 0x18);
      uVar9 = uVar15 >> 1;
      if ((long)(lVar13 + uVar6) <= (long)uVar9) goto LAB_104540c40;
    }
    func_0x0001014d97ac();
    uVar15 = *(ulong *)(uVar16 + 0x18);
    uVar9 = uVar15 >> 1;
    uVar10 = uVar16;
LAB_104540c40:
    uVar16 = *(ulong *)(uVar10 + 0x10);
    uVar17 = uVar9 - uVar16;
    uVar14 = 0;
    if ((((puVar7 != (undefined1 *)0x0) && (puVar8 != (undefined1 *)0x0)) && (puVar7 < puVar8)) &&
       (uVar9 != uVar16)) {
      if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104540d74);
        (*pcVar3)();
      }
      uVar14 = uVar5;
      if (uVar17 <= uVar5) {
        uVar14 = uVar17;
      }
      _memmove(uVar10 + uVar16 + 0x20,puVar7,uVar14);
      puVar7 = puVar7 + uVar14;
    }
    if ((long)uVar14 < (long)uVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104540cd8);
      (*pcVar3)();
    }
    if (uVar14 != 0) {
      bVar4 = SCARRY8(uVar16,uVar14);
      uVar16 = uVar16 + uVar14;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104540cdc);
        (*pcVar3)();
      }
      *(ulong *)(uVar10 + 0x10) = uVar16;
    }
    if ((uVar14 != uVar17 || puVar7 == (undefined1 *)0x0) || puVar7 == puVar8) {
LAB_104540cb0:
      *unaff_x20 = uVar10;
      return;
    }
    puVar11 = puVar7 + 1;
    uVar12 = *puVar7;
    uVar6 = uVar10;
    do {
      while( true ) {
        uVar5 = uVar15 >> 1;
        if ((long)(uVar16 + 1) <= (long)uVar5) break;
        uVar10 = (ulong)(1 < uVar15);
        func_0x0001014d97ac(uVar10,uVar16 + 1,1,uVar6);
        uVar15 = *(ulong *)(uVar10 + 0x18);
        uVar5 = uVar15 >> 1;
        if ((long)uVar5 <= (long)uVar16) goto LAB_104540ce4;
LAB_104540d00:
        lVar13 = uVar16 + 0x20;
        puVar7 = puVar11;
        do {
          *(undefined1 *)(uVar10 + lVar13) = uVar12;
          if (puVar7 == puVar8) {
            *(long *)(uVar10 + 0x10) = lVar13 + -0x1f;
            goto LAB_104540cb0;
          }
          puVar11 = puVar7 + 1;
          uVar12 = *puVar7;
          lVar13 = lVar13 + 1;
          puVar7 = puVar11;
        } while (lVar13 - uVar5 != 0x20);
        uVar15 = *(ulong *)(uVar10 + 0x18);
        *(ulong *)(uVar10 + 0x10) = uVar5;
        uVar6 = uVar10;
        uVar16 = uVar5;
      }
      uVar10 = uVar6;
      if ((long)uVar16 < (long)uVar5) goto LAB_104540d00;
LAB_104540ce4:
      *(ulong *)(uVar10 + 0x10) = uVar16;
      uVar6 = uVar10;
    } while( true );
  }
  (**(code **)(param_3 + 0x28))(param_2,param_3);
  if ((long)param_2 < 0) {
    uVar10 = *unaff_x20;
    uVar6 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar10;
    if ((uVar6 & 1) == 0) {
      uVar5 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
    }
    uVar6 = *(ulong *)(uVar5 + 0x10);
    uVar10 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar6) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      func_0x0001014d97ac(uVar10,uVar6 + 1,1,uVar5);
    }
    *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
    *(undefined1 *)(uVar10 + uVar6 + 0x20) = 0x2d;
    *unaff_x20 = uVar10;
    param_2 = (undefined1 *)-(long)param_2;
  }
  while( true ) {
    puVar7 = param_2;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (puVar7 < (undefined1 *)0x3e8) break;
    unaff_x30 = 0x1045a05c4;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    param_2 = (undefined1 *)((ulong)puVar7 / 1000);
    unaff_x19 = puVar7;
  }
  if (puVar7 < (undefined1 *)0x64) {
    uVar6 = *unaff_x20;
    if (puVar7 < (undefined1 *)0xa) goto LAB_1045a0688;
  }
  else {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (ulong)puVar7 / 100;
    uVar10 = *unaff_x20;
    uVar6 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar10;
    if ((uVar6 & 1) == 0) {
      uVar5 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
    }
    uVar10 = *(ulong *)(uVar5 + 0x10);
    uVar6 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar10) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      func_0x0001014d97ac(uVar6,uVar10 + 1,1,uVar5);
    }
    *(ulong *)(uVar6 + 0x10) = uVar10 + 1;
    *(byte *)(uVar6 + uVar10 + 0x20) =
         (char)((ulong)puVar7 / 100) + SUB161(auVar1 * ZEXT816(0x199999999999999a),8) * -10 | 0x30;
    *unaff_x20 = uVar6;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (ulong)puVar7 / 10;
  uVar5 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar10 = uVar6;
  if ((uVar5 & 1) == 0) {
    uVar10 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
  }
  uVar5 = *(ulong *)(uVar10 + 0x10);
  uVar6 = uVar10;
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar5) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
    func_0x0001014d97ac(uVar6,uVar5 + 1,1,uVar10);
  }
  *(ulong *)(uVar6 + 0x10) = uVar5 + 1;
  *(byte *)(uVar6 + uVar5 + 0x20) =
       (char)((ulong)puVar7 / 10) + SUB161(auVar2 * ZEXT816(0x199999999999999a),8) * -10 | 0x30;
  *unaff_x20 = uVar6;
LAB_1045a0688:
  uVar5 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar10 = uVar6;
  if ((uVar5 & 1) == 0) {
    uVar10 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
  }
  uVar6 = *(ulong *)(uVar10 + 0x10);
  uVar5 = uVar10;
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar6) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
    func_0x0001014d97ac(uVar5,uVar6 + 1,1,uVar10);
  }
  *(ulong *)(uVar5 + 0x10) = uVar6 + 1;
  *(byte *)(uVar5 + uVar6 + 0x20) = (char)puVar7 + (char)((ulong)puVar7 / 10) * -10 | 0x30;
  *unaff_x20 = uVar5;
  return;
}



/* Entry: 1045a08a4; end: 1045a0973;  */

void FUN_1045a08a4(float param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  char cVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  if ((((uint)param_1 ^ 0xffffffff) & 0x7f800000) != 0) {
    __sSf16debugDescriptionSSvg();
    if ((param_3 >> 0x3c & 1) == 0) {
      uVar8 = param_2 & 0xffffffffffff;
      if ((param_3 & 0x2000000000000000) != 0) {
        uVar8 = param_3 >> 0x38 & 0xf;
      }
    }
    else {
      uVar8 = param_2;
      __sSS8UTF8ViewV13_foreignCountSiyF(param_2,param_3);
    }
    uVar14 = *unaff_x20;
    lVar3 = *(long *)(uVar14 + 0x10);
    if (SCARRY8(lVar3,uVar8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10454102c);
      (*pcVar1)();
    }
    uVar4 = uVar14;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)uVar4 == 0) ||
       (uVar13 = *(ulong *)(uVar14 + 0x18) >> 1, (long)uVar13 < (long)(lVar3 + uVar8))) {
      func_0x0001014d97ac();
      uVar13 = *(ulong *)(uVar4 + 0x18) >> 1;
      uVar14 = uVar4;
    }
    lVar11 = uVar13 - *(long *)(uVar14 + 0x10);
    lVar3 = uVar14 + *(long *)(uVar14 + 0x10) + 0x20;
    __ss11_StringGutsV8copyUTF84intoSiSgSrys5UInt8VG_tF(lVar3,lVar11,param_2,param_3);
    if (((uint)lVar11 & 0xff) != 1) {
      _swift_bridgeObjectRelease(param_3);
      if (lVar3 < (long)uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104541030);
        (*pcVar1)();
      }
      if (0 < lVar3) {
        if (SCARRY8(*(long *)(uVar14 + 0x10),lVar3)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104541034);
          (*pcVar1)();
        }
        *(long *)(uVar14 + 0x10) = *(long *)(uVar14 + 0x10) + lVar3;
      }
      *unaff_x20 = uVar14;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104541038);
    (*pcVar1)();
  }
  if (((uint)param_1 & 0x7fffff) == 0) {
    if (0.0 <= param_1) {
      pcVar6 = "inf";
      goto LAB_1045a0900;
    }
    pcVar6 = "-inf";
    lVar3 = 4;
  }
  else {
    pcVar6 = "nan";
LAB_1045a0900:
    lVar3 = 3;
  }
  uVar8 = *unaff_x20;
  lVar11 = *(long *)(uVar8 + 0x10);
  if (SCARRY8(lVar11,lVar3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104540e78);
    (*pcVar1)();
  }
  uVar14 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((int)uVar14 != 0) {
    uVar13 = *(ulong *)(uVar8 + 0x18);
    uVar4 = uVar13 >> 1;
    if (lVar11 + lVar3 <= (long)uVar4) goto LAB_104540de0;
  }
  func_0x0001014d97ac();
  uVar13 = *(ulong *)(uVar14 + 0x18);
  uVar4 = uVar13 >> 1;
  uVar8 = uVar14;
LAB_104540de0:
  uVar14 = *(ulong *)(uVar8 + 0x10);
  lVar11 = uVar4 - uVar14;
  if ((lVar3 == 0) || (lVar11 == 0)) {
    pcVar5 = (char *)0x0;
    if (pcVar6 != (char *)0x0) {
      pcVar5 = pcVar6;
    }
    pcVar10 = (char *)0x0;
    if (pcVar6 != (char *)0x0) {
      pcVar10 = pcVar6 + lVar3;
    }
    lVar12 = 0;
  }
  else {
    lVar12 = lVar3;
    if (lVar11 <= lVar3) {
      lVar12 = lVar11;
    }
    _memcpy(uVar8 + uVar14 + 0x20,pcVar6,lVar12);
    pcVar5 = pcVar6 + lVar12;
    pcVar10 = pcVar6 + lVar3;
  }
  if (lVar12 < lVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104540e7c);
    (*pcVar1)();
  }
  if (0 < lVar12) {
    bVar2 = SCARRY8(uVar14,lVar12);
    uVar14 = uVar14 + lVar12;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104540e80);
      (*pcVar1)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar14;
  }
  if ((lVar12 != lVar11 || pcVar5 == (char *)0x0) || pcVar10 == pcVar5) {
LAB_104540e58:
    *unaff_x20 = uVar8;
    return;
  }
  pcVar6 = pcVar5 + 1;
  cVar9 = *pcVar5;
  uVar4 = uVar8;
  do {
    while( true ) {
      uVar7 = uVar13 >> 1;
      if ((long)(uVar14 + 1) <= (long)uVar7) break;
      uVar8 = (ulong)(1 < uVar13);
      func_0x0001014d97ac(uVar8,uVar14 + 1,1,uVar4);
      uVar13 = *(ulong *)(uVar8 + 0x18);
      uVar7 = uVar13 >> 1;
      if ((long)uVar7 <= (long)uVar14) goto LAB_104540e88;
LAB_104540ea4:
      lVar3 = uVar14 + 0x20;
      pcVar5 = pcVar6;
      do {
        *(char *)(uVar8 + lVar3) = cVar9;
        if (pcVar5 == pcVar10) {
          *(long *)(uVar8 + 0x10) = lVar3 + -0x1f;
          goto LAB_104540e58;
        }
        cVar9 = *pcVar5;
        pcVar6 = pcVar6 + 1;
        lVar3 = lVar3 + 1;
        pcVar5 = pcVar5 + 1;
      } while (lVar3 - uVar7 != 0x20);
      uVar13 = *(ulong *)(uVar8 + 0x18);
      *(ulong *)(uVar8 + 0x10) = uVar7;
      uVar4 = uVar8;
      uVar14 = uVar7;
    }
    uVar8 = uVar4;
    if ((long)uVar14 < (long)uVar7) goto LAB_104540ea4;
LAB_104540e88:
    *(ulong *)(uVar8 + 0x10) = uVar14;
    uVar4 = uVar8;
  } while( true );
}



/* Entry: 1045a0974; end: 1045a0a63;  */

void FUN_1045a0974(ulong param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *unaff_x20;
  undefined1 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  if (param_2 != 0) {
    if (SBORROW8(param_2,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1045a0a24);
      (*pcVar3)();
    }
    FUN_1045a0974(param_1 >> 4,param_2 + -1);
    uVar1 = (uint)param_1 & 0xf;
    bVar2 = (byte)param_1 & 0xf | 0x30;
    if (9 < uVar1) {
      bVar2 = (char)uVar1 + 0x37;
    }
    uVar10 = *unaff_x20;
    uVar9 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar10;
    if ((uVar9 & 1) == 0) {
      uVar5 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
    }
    uVar9 = *(ulong *)(uVar5 + 0x10);
    uVar10 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar9) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      func_0x0001014d97ac(uVar10,uVar9 + 1,1,uVar5);
    }
    *(ulong *)(uVar10 + 0x10) = uVar9 + 1;
    *(byte *)(uVar10 + uVar9 + 0x20) = bVar2;
    *unaff_x20 = uVar10;
    return;
  }
  uVar9 = *unaff_x20;
  lVar12 = *(long *)(uVar9 + 0x10);
  if (SCARRY8(lVar12,2)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104540e78);
    (*pcVar3)();
  }
  uVar5 = uVar9;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((int)uVar5 != 0) {
    uVar14 = *(ulong *)(uVar9 + 0x18);
    uVar10 = uVar14 >> 1;
    if (lVar12 + 2 <= (long)uVar10) goto LAB_104540de0;
  }
  func_0x0001014d97ac();
  uVar14 = *(ulong *)(uVar5 + 0x18);
  uVar10 = uVar14 >> 1;
  uVar9 = uVar5;
LAB_104540de0:
  uVar5 = *(ulong *)(uVar9 + 0x10);
  lVar12 = uVar10 - uVar5;
  if (lVar12 == 0) {
    puVar6 = &DAT_10f519110;
    lVar13 = 0;
  }
  else {
    lVar13 = 2;
    if (lVar12 < 3) {
      lVar13 = lVar12;
    }
    _memcpy(uVar9 + uVar5 + 0x20,&DAT_10f519110,lVar13);
    puVar6 = &DAT_10f519110 + lVar13;
  }
  if (lVar13 < 2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104540e7c);
    (*pcVar3)();
  }
  if (0 < lVar13) {
    bVar4 = SCARRY8(uVar5,lVar13);
    uVar5 = uVar5 + lVar13;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104540e80);
      (*pcVar3)();
    }
    *(ulong *)(uVar9 + 0x10) = uVar5;
  }
  if ((lVar13 != lVar12 || puVar6 == (undefined *)0x0) || puVar6 == &UNK_10f519112) {
LAB_104540e58:
    *unaff_x20 = uVar9;
    return;
  }
  puVar7 = puVar6 + 1;
  uVar11 = *puVar6;
  uVar10 = uVar9;
  do {
    while( true ) {
      uVar8 = uVar14 >> 1;
      if ((long)uVar8 < (long)(uVar5 + 1)) break;
      uVar9 = uVar10;
      if ((long)uVar8 <= (long)uVar5) goto LAB_104540e88;
LAB_104540ea4:
      lVar12 = uVar5 + 0x20;
      puVar6 = puVar7;
      do {
        *(undefined1 *)(uVar9 + lVar12) = uVar11;
        if (puVar6 == &UNK_10f519112) {
          *(long *)(uVar9 + 0x10) = lVar12 + -0x1f;
          goto LAB_104540e58;
        }
        uVar11 = *puVar6;
        puVar7 = puVar7 + 1;
        lVar12 = lVar12 + 1;
        puVar6 = puVar6 + 1;
      } while (lVar12 - uVar8 != 0x20);
      uVar14 = *(ulong *)(uVar9 + 0x18);
      *(ulong *)(uVar9 + 0x10) = uVar8;
      uVar10 = uVar9;
      uVar5 = uVar8;
    }
    uVar9 = (ulong)(1 < uVar14);
    func_0x0001014d97ac(uVar9,uVar5 + 1,1,uVar10);
    uVar14 = *(ulong *)(uVar9 + 0x18);
    uVar8 = uVar14 >> 1;
    if ((long)uVar5 < (long)uVar8) goto LAB_104540ea4;
LAB_104540e88:
    *(ulong *)(uVar9 + 0x10) = uVar5;
    uVar10 = uVar9;
  } while( true );
}



/* Entry: 1045a0a64; end: 1045a126f;  */

void FUN_1045a0a64(undefined8 ******param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  byte bVar6;
  byte *pbVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong *unaff_x20;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  undefined8 ******ppppppuVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *****pppppuStack_70;
  ulong uStack_68;
  
  uVar11 = *unaff_x20;
  uVar2 = uVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar5 = uVar11;
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
  }
  uVar2 = *(ulong *)(uVar5 + 0x10);
  uVar11 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
    uVar11 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    func_0x0001014d97ac(uVar11,uVar2 + 1,1,uVar5);
  }
  *(ulong *)(uVar11 + 0x10) = uVar2 + 1;
  *(undefined1 *)(uVar11 + uVar2 + 0x20) = 0x22;
  *unaff_x20 = uVar11;
  uVar2 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    _swift_bridgeObjectRetain(param_2);
    lVar12 = 0;
    do {
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          ppppppuVar14 = (undefined8 ******)((param_2 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            ppppppuVar14 = param_1;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
          }
        }
        else {
          pppppuStack_70 = param_1;
          uStack_68 = param_2 & 0xffffffffffffff;
          ppppppuVar14 = &pppppuStack_70;
        }
        pbVar7 = (byte *)((long)ppppppuVar14 + lVar12);
        uVar13 = (uint)*pbVar7;
        if ((char)*pbVar7 < '\0') {
          uVar9 = (uint)LZCOUNT(uVar13 << 0x18 ^ 0xffffffff);
          if (uVar9 < 3) {
            if (uVar9 != 1) {
              uVar13 = pbVar7[1] & 0x3f | (uVar13 & 0x1f) << 6;
              ppppppuVar14 = (undefined8 ******)0x2;
              goto joined_r0x0001045a0c24;
            }
            goto LAB_1045a0b88;
          }
          if (uVar9 == 3) {
            uVar13 = (uVar13 & 0xf) << 0xc | (pbVar7[1] & 0x3f) << 6 | pbVar7[2] & 0x3f;
            ppppppuVar14 = (undefined8 ******)0x3;
joined_r0x0001045a0c24:
            if (uVar13 < 0xc) goto LAB_1045a0b50;
            goto LAB_1045a0b94;
          }
          uVar13 = (uVar13 & 0xf) << 0x12 | (pbVar7[1] & 0x3f) << 0xc | (pbVar7[2] & 0x3f) << 6 |
                   pbVar7[3] & 0x3f;
          ppppppuVar14 = (undefined8 ******)0x4;
        }
        else {
LAB_1045a0b88:
          ppppppuVar14 = (undefined8 ******)0x1;
        }
        if (0xb < uVar13) goto LAB_1045a0b94;
LAB_1045a0b50:
        if (9 < (int)uVar13) {
          if (uVar13 == 10) {
            puVar4 = &DAT_10f47f589;
            goto LAB_1045a0b04;
          }
          if (uVar13 == 0xb) {
            puVar4 = &UNK_10f60259e;
            goto LAB_1045a0b04;
          }
          goto LAB_1045a0c50;
        }
        if (uVar13 == 8) {
          puVar4 = &UNK_10f580d67;
        }
        else {
          if (uVar13 != 9) goto LAB_1045a0c50;
          puVar4 = &DAT_10f47f586;
        }
LAB_1045a0b04:
        FUN_104540d74(puVar4,2);
      }
      else {
        lVar3 = lVar12 << 0x10;
        ppppppuVar14 = param_1;
        __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                  (lVar3,param_1,param_2);
        uVar13 = (uint)lVar3;
        if ((int)uVar13 < 0xc) goto LAB_1045a0b50;
LAB_1045a0b94:
        if ((int)uVar13 < 0x22) {
          if (uVar13 == 0xc) {
            puVar4 = &UNK_10f580d6a;
          }
          else {
            if (uVar13 != 0xd) goto LAB_1045a0c50;
            puVar4 = &DAT_10f47f594;
          }
          goto LAB_1045a0b04;
        }
        if (uVar13 == 0x22) {
          puVar4 = &DAT_10f47f5ef;
          goto LAB_1045a0b04;
        }
        if (uVar13 == 0x5c) {
          puVar4 = &DAT_10f47f5f4;
          goto LAB_1045a0b04;
        }
LAB_1045a0c50:
        bVar6 = (byte)uVar13;
        if ((uVar13 < 0x20) || (uVar13 == 0x7f)) {
          uVar15 = *unaff_x20;
          uVar5 = uVar15;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar11 = uVar15;
          if ((uVar5 & 1) == 0) {
            uVar11 = 0;
            func_0x0001014d97ac(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
          }
          uVar5 = *(ulong *)(uVar11 + 0x10);
          uVar15 = *(ulong *)(uVar11 + 0x18);
          uVar10 = uVar15 >> 1;
          lVar3 = uVar5 + 1;
          uVar8 = uVar11;
          if (uVar10 <= uVar5) {
            uVar8 = (ulong)(1 < uVar15);
            func_0x0001014d97ac(uVar8,lVar3,1,uVar11);
            uVar15 = *(ulong *)(uVar8 + 0x18);
            uVar10 = uVar15 >> 1;
          }
          *(long *)(uVar8 + 0x10) = lVar3;
          *(undefined1 *)(uVar8 + uVar5 + 0x20) = 0x5c;
          lVar16 = uVar5 + 2;
          uVar11 = uVar8;
          if ((long)uVar10 < lVar16) {
            uVar11 = (ulong)(1 < uVar15);
            func_0x0001014d97ac(uVar11,lVar16,1,uVar8);
            uVar15 = *(ulong *)(uVar11 + 0x18);
            uVar10 = uVar15 >> 1;
          }
          *(long *)(uVar11 + 0x10) = lVar16;
          *(byte *)(uVar11 + lVar3 + 0x20) = (byte)(uVar13 >> 6) | 0x30;
          lVar3 = uVar5 + 3;
          uVar8 = uVar11;
          if ((long)uVar10 < lVar3) {
            uVar8 = (ulong)(1 < uVar15);
            func_0x0001014d97ac(uVar8,lVar3,1,uVar11);
            uVar15 = *(ulong *)(uVar8 + 0x18);
            uVar10 = uVar15 >> 1;
          }
          *(long *)(uVar8 + 0x10) = lVar3;
          *(byte *)(uVar8 + lVar16 + 0x20) = (byte)(uVar13 >> 3) & 7 | 0x30;
          lVar16 = uVar5 + 4;
          uVar5 = uVar8;
          if ((long)uVar10 < lVar16) {
            uVar5 = (ulong)(1 < uVar15);
            func_0x0001014d97ac(uVar5,lVar16,1,uVar8);
          }
          bVar6 = bVar6 & 7 | 0x30;
LAB_1045a0dd0:
          *(long *)(uVar5 + 0x10) = lVar16;
          lVar3 = uVar5 + lVar3;
LAB_1045a0dd8:
          *(byte *)(lVar3 + 0x20) = bVar6;
          *unaff_x20 = uVar5;
        }
        else {
          if (0x7f < uVar13) {
            if (uVar13 < 0x800) {
              uVar15 = *unaff_x20;
              uVar5 = uVar15;
              _swift_isUniquelyReferenced_nonNull_native();
              uVar11 = uVar15;
              if ((uVar5 & 1) == 0) {
                uVar11 = 0;
                func_0x0001014d97ac(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
              }
              uVar15 = *(ulong *)(uVar11 + 0x10);
              uVar8 = *(ulong *)(uVar11 + 0x18);
              uVar10 = uVar8 >> 1;
              lVar3 = uVar15 + 1;
              uVar5 = uVar11;
              if (uVar10 <= uVar15) {
                uVar5 = (ulong)(1 < uVar8);
                func_0x0001014d97ac(uVar5,lVar3,1,uVar11);
                uVar8 = *(ulong *)(uVar5 + 0x18);
                uVar10 = uVar8 >> 1;
              }
              *(long *)(uVar5 + 0x10) = lVar3;
              *(byte *)(uVar5 + uVar15 + 0x20) = (byte)(uVar13 >> 6) | 0xc0;
              lVar16 = uVar15 + 2;
              if ((long)uVar10 < lVar16) {
LAB_1045a0ef8:
                uVar11 = (ulong)(1 < uVar8);
                func_0x0001014d97ac(uVar11,lVar16,1,uVar5);
                uVar5 = uVar11;
              }
LAB_1045a0dc8:
              bVar6 = bVar6 & 0x3f | 0x80;
              goto LAB_1045a0dd0;
            }
            if (uVar13 >> 0x10 != 0) {
              uVar9 = (uVar13 >> 0x12 & 0xff) + 0xf0;
              if (uVar9 >> 8 != 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1045a11f0);
                (*pcVar1)();
              }
              uVar15 = *unaff_x20;
              uVar5 = uVar15;
              _swift_isUniquelyReferenced_nonNull_native();
              uVar11 = uVar15;
              if ((uVar5 & 1) == 0) {
                uVar11 = 0;
                func_0x0001014d97ac(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
              }
              uVar15 = *(ulong *)(uVar11 + 0x10);
              uVar8 = *(ulong *)(uVar11 + 0x18);
              uVar10 = uVar8 >> 1;
              lVar3 = uVar15 + 1;
              uVar5 = uVar11;
              if (uVar10 <= uVar15) {
                uVar5 = (ulong)(1 < uVar8);
                func_0x0001014d97ac(uVar5,lVar3,1,uVar11);
                uVar8 = *(ulong *)(uVar5 + 0x18);
                uVar10 = uVar8 >> 1;
              }
              *(long *)(uVar5 + 0x10) = lVar3;
              *(char *)(uVar5 + uVar15 + 0x20) = (char)uVar9;
              lVar16 = uVar15 + 2;
              uVar11 = uVar5;
              if ((long)uVar10 < lVar16) {
                uVar11 = (ulong)(1 < uVar8);
                func_0x0001014d97ac(uVar11,lVar16,1,uVar5);
                uVar8 = *(ulong *)(uVar11 + 0x18);
                uVar10 = uVar8 >> 1;
              }
              *(long *)(uVar11 + 0x10) = lVar16;
              *(byte *)(uVar11 + lVar3 + 0x20) = (byte)(uVar13 >> 0xc) & 0x3f | 0x80;
              lVar3 = uVar15 + 3;
              uVar5 = uVar11;
              if ((long)uVar10 < lVar3) {
                uVar5 = (ulong)(1 < uVar8);
                func_0x0001014d97ac(uVar5,lVar3,1,uVar11);
                uVar8 = *(ulong *)(uVar5 + 0x18);
                uVar10 = uVar8 >> 1;
              }
              *(long *)(uVar5 + 0x10) = lVar3;
              *(byte *)(uVar5 + lVar16 + 0x20) = (byte)(uVar13 >> 6) & 0x3f | 0x80;
              lVar16 = uVar15 + 4;
              if ((long)uVar10 < lVar16) goto LAB_1045a0ef8;
              goto LAB_1045a0dc8;
            }
            uVar15 = *unaff_x20;
            uVar5 = uVar15;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar11 = uVar15;
            if ((uVar5 & 1) == 0) {
              uVar11 = 0;
              func_0x0001014d97ac(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
            }
            uVar5 = *(ulong *)(uVar11 + 0x10);
            uVar15 = *(ulong *)(uVar11 + 0x18);
            uVar10 = uVar15 >> 1;
            lVar16 = uVar5 + 1;
            uVar8 = uVar11;
            if (uVar10 <= uVar5) {
              uVar8 = (ulong)(1 < uVar15);
              func_0x0001014d97ac(uVar8,lVar16,1,uVar11);
              uVar15 = *(ulong *)(uVar8 + 0x18);
              uVar10 = uVar15 >> 1;
            }
            *(long *)(uVar8 + 0x10) = lVar16;
            *(byte *)(uVar8 + uVar5 + 0x20) = (byte)(uVar13 >> 0xc) | 0xe0;
            lVar3 = uVar5 + 2;
            uVar11 = uVar8;
            if ((long)uVar10 < lVar3) {
              uVar11 = (ulong)(1 < uVar15);
              func_0x0001014d97ac(uVar11,lVar3,1,uVar8);
              uVar15 = *(ulong *)(uVar11 + 0x18);
              uVar10 = uVar15 >> 1;
            }
            *(long *)(uVar11 + 0x10) = lVar3;
            *(byte *)(uVar11 + lVar16 + 0x20) = (byte)(uVar13 >> 6) & 0x3f | 0x80;
            lVar16 = uVar5 + 3;
            uVar5 = uVar11;
            if ((long)uVar10 < lVar16) {
              uVar5 = (ulong)(1 < uVar15);
              func_0x0001014d97ac(uVar5,lVar16,1,uVar11);
            }
            bVar6 = bVar6 & 0x3f | 0x80;
            *(long *)(uVar5 + 0x10) = lVar16;
            lVar3 = uVar5 + lVar3;
            goto LAB_1045a0dd8;
          }
          uVar15 = *unaff_x20;
          uVar5 = uVar15;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar11 = uVar15;
          if ((uVar5 & 1) == 0) {
            uVar11 = 0;
            func_0x0001014d97ac(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
          }
          uVar5 = *(ulong *)(uVar11 + 0x10);
          uVar15 = uVar11;
          if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar5) {
            uVar15 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
            func_0x0001014d97ac(uVar15,uVar5 + 1,1,uVar11);
          }
          *(ulong *)(uVar15 + 0x10) = uVar5 + 1;
          *(byte *)(uVar15 + uVar5 + 0x20) = bVar6;
          *unaff_x20 = uVar15;
        }
      }
      lVar12 = (long)ppppppuVar14 + lVar12;
    } while (lVar12 < (long)uVar2);
    _swift_bridgeObjectRelease(param_2);
    uVar11 = *unaff_x20;
  }
  uVar2 = uVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar5 = uVar11;
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
  }
  uVar2 = *(ulong *)(uVar5 + 0x10);
  uVar11 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
    uVar11 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    func_0x0001014d97ac(uVar11,uVar2 + 1,1,uVar5);
  }
  *(ulong *)(uVar11 + 0x10) = uVar2 + 1;
  *(undefined1 *)(uVar11 + uVar2 + 0x20) = 0x22;
  *unaff_x20 = uVar11;
  return;
}



/* Entry: 1045a1270; end: 1045a153f;  */

void FUN_1045a1270(long param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  uint uVar12;
  ulong *unaff_x20;
  byte *pbVar13;
  undefined1 *puVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  puVar5 = auStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = (undefined1 *)*unaff_x20;
  puVar6 = puVar14;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    puVar6 = (undefined1 *)0x0;
    func_0x0001014d97ac(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
    puVar14 = puVar6;
  }
  uVar9 = *(ulong *)(puVar14 + 0x10);
  if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar9) {
    puVar6 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
    func_0x0001014d97ac(puVar6,uVar9 + 1,1,puVar14);
    puVar14 = puVar6;
  }
  *(ulong *)(puVar14 + 0x10) = uVar9 + 1;
  puVar14[uVar9 + 0x20] = 0x22;
  *unaff_x20 = (ulong)puVar14;
  uVar17 = (uint)(param_2 >> 0x20);
  uVar12 = uVar17 >> 0x1e;
  if (uVar17 >> 0x1e < 2) {
    if (uVar12 == 0) {
      auStack_60[0] = (undefined1)param_1;
      auStack_60[1] = (undefined1)((ulong)param_1 >> 8);
      auStack_60[2] = (undefined1)((ulong)param_1 >> 0x10);
      auStack_60[3] = (undefined1)((ulong)param_1 >> 0x18);
      auStack_60[4] = (undefined1)((ulong)param_1 >> 0x20);
      auStack_60[5] = (undefined1)((ulong)param_1 >> 0x28);
      auStack_60[6] = (undefined1)((ulong)param_1 >> 0x30);
      auStack_60[7] = (undefined1)((ulong)param_1 >> 0x38);
      auStack_60[8] = (undefined1)param_2;
      auStack_60[9] = (undefined1)(param_2 >> 8);
      auStack_60[10] = (undefined1)(param_2 >> 0x10);
      auStack_60[0xb] = (undefined1)(param_2 >> 0x18);
      auStack_60[0xc] = (undefined1)(param_2 >> 0x20);
      auStack_60[0xd] = (undefined1)(param_2 >> 0x28);
      puVar5 = auStack_60;
      puVar14 = auStack_60 + (param_2 >> 0x30 & 0xff);
    }
    else {
      lVar15 = (long)(int)param_1;
      puVar5 = (undefined1 *)((param_1 >> 0x20) - lVar15);
      if (param_1 >> 0x20 < lVar15) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045a1530);
        (*pcVar3)();
      }
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (puVar6 == (undefined1 *)0x0) {
        __s10Foundation13__DataStorageC7_lengthSivg();
        puVar5 = (undefined1 *)0x0;
        puVar14 = (undefined1 *)0x0;
      }
      else {
        puVar4 = puVar6;
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar15,(long)puVar4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1045a153c);
          (*pcVar3)();
        }
        puVar6 = puVar6 + (lVar15 - (long)puVar4);
        __s10Foundation13__DataStorageC7_lengthSivg();
        if ((long)puVar5 <= (long)puVar4) {
          puVar4 = puVar5;
        }
        puVar5 = (undefined1 *)0x0;
        if (puVar6 != (undefined1 *)0x0) {
          puVar5 = puVar6;
        }
        puVar14 = (undefined1 *)0x0;
        if (puVar6 != (undefined1 *)0x0) {
          puVar14 = puVar4 + (long)puVar6;
        }
      }
    }
  }
  else if (uVar12 == 2) {
    lVar15 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    puVar4 = puVar6;
    puVar5 = puVar6;
    if (puVar6 != (undefined1 *)0x0) {
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar15,(long)puVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045a1538);
        (*pcVar3)();
      }
      puVar5 = puVar6 + (lVar15 - (long)puVar4);
    }
    puVar6 = (undefined1 *)(lVar1 - lVar15);
    if (SBORROW8(lVar1,lVar15)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1045a1534);
      (*pcVar3)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if ((long)puVar6 <= (long)puVar4) {
      puVar4 = puVar6;
    }
    puVar14 = (undefined1 *)0x0;
    if (puVar5 != (undefined1 *)0x0) {
      puVar14 = puVar4 + (long)puVar5;
    }
  }
  else {
    auStack_60[8] = 0;
    auStack_60[9] = 0;
    auStack_60[10] = 0;
    auStack_60[0xb] = 0;
    auStack_60[0xc] = 0;
    auStack_60[0xd] = 0;
    auStack_60[0] = 0;
    auStack_60[1] = 0;
    auStack_60[2] = 0;
    auStack_60[3] = 0;
    auStack_60[4] = 0;
    auStack_60[5] = 0;
    auStack_60[6] = 0;
    auStack_60[7] = 0;
    puVar14 = auStack_60;
  }
  puVar11 = unaff_x20;
  FUN_1045a1540(puVar5);
  pbVar13 = (byte *)*unaff_x20;
  pbVar7 = pbVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)pbVar7 & 1) == 0) {
    puVar14 = (undefined1 *)(*(long *)(pbVar13 + 0x10) + 1);
    pbVar7 = (byte *)0x0;
    puVar11 = (ulong *)0x1;
    func_0x0001014d97ac();
    pbVar13 = pbVar7;
  }
  uVar9 = *(ulong *)(pbVar13 + 0x10);
  if (*(ulong *)(pbVar13 + 0x18) >> 1 <= uVar9) {
    pbVar7 = (byte *)(ulong)(1 < *(ulong *)(pbVar13 + 0x18));
    puVar11 = (ulong *)0x1;
    puVar14 = (undefined1 *)(uVar9 + 1);
    func_0x0001014d97ac();
    pbVar13 = pbVar7;
  }
  *(undefined1 **)(pbVar13 + 0x10) = (undefined1 *)(uVar9 + 1);
  pbVar13[uVar9 + 0x20] = 0x22;
  *unaff_x20 = (ulong)pbVar13;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (pbVar7 != (byte *)0x0) {
    lVar15 = (long)puVar14 - (long)pbVar7;
    for (; lVar15 != 0; lVar15 = lVar15 + -1) {
      bVar2 = *pbVar7;
      uVar17 = (uint)bVar2;
      if (bVar2 < 0xc) {
        if (uVar17 != 9 && 8 < bVar2) {
          if (uVar17 == 10) {
            puVar8 = &DAT_10f47f589;
          }
          else {
            if (uVar17 != 0xb) goto LAB_1045a1664;
            puVar8 = &UNK_10f60259e;
          }
          goto LAB_1045a15a8;
        }
        if (uVar17 == 8) {
          puVar8 = &UNK_10f580d67;
          goto LAB_1045a15a8;
        }
        if (uVar17 == 9) {
          puVar8 = &DAT_10f47f586;
          goto LAB_1045a15a8;
        }
LAB_1045a1664:
        uVar16 = *puVar11;
        uVar9 = uVar16;
        _swift_isUniquelyReferenced_nonNull_native();
        *puVar11 = uVar16;
        if (uVar17 - 0x20 < 0x5f) {
          uVar10 = uVar16;
          if ((uVar9 & 1) == 0) {
            uVar10 = 0;
            func_0x0001014d97ac(0,*(long *)(uVar16 + 0x10) + 1,1,uVar16);
            *puVar11 = uVar10;
          }
          uVar9 = *(ulong *)(uVar10 + 0x10);
          uVar16 = uVar10;
          if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar9) {
            uVar16 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
            func_0x0001014d97ac(uVar16,uVar9 + 1,1,uVar10);
            *puVar11 = uVar16;
          }
          *(ulong *)(uVar16 + 0x10) = uVar9 + 1;
          *(byte *)(uVar16 + uVar9 + 0x20) = bVar2;
        }
        else {
          uVar10 = uVar16;
          if ((uVar9 & 1) == 0) {
            uVar10 = 0;
            func_0x0001014d97ac(0,*(long *)(uVar16 + 0x10) + 1,1,uVar16);
            *puVar11 = uVar10;
          }
          uVar9 = *(ulong *)(uVar10 + 0x10);
          uVar16 = uVar10;
          if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar9) {
            uVar16 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
            func_0x0001014d97ac(uVar16,uVar9 + 1,1,uVar10);
            *puVar11 = uVar16;
          }
          *(ulong *)(uVar16 + 0x10) = uVar9 + 1;
          *(undefined1 *)(uVar16 + uVar9 + 0x20) = 0x5c;
          uVar16 = *puVar11;
          uVar9 = *(ulong *)(uVar16 + 0x10);
          if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar9) {
            uVar16 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
            func_0x0001014d97ac(uVar16,uVar9 + 1,1);
            *puVar11 = uVar16;
          }
          *(ulong *)(uVar16 + 0x10) = uVar9 + 1;
          *(byte *)(uVar16 + uVar9 + 0x20) = bVar2 >> 6 | 0x30;
          uVar16 = *puVar11;
          uVar9 = *(ulong *)(uVar16 + 0x10);
          if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar9) {
            uVar16 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
            func_0x0001014d97ac(uVar16,uVar9 + 1,1);
            *puVar11 = uVar16;
          }
          *(ulong *)(uVar16 + 0x10) = uVar9 + 1;
          *(byte *)(uVar16 + uVar9 + 0x20) = bVar2 >> 3 & 7 | 0x30;
          uVar16 = *puVar11;
          uVar9 = *(ulong *)(uVar16 + 0x10);
          if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar9) {
            uVar16 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
            func_0x0001014d97ac(uVar16,uVar9 + 1,1);
            *puVar11 = uVar16;
          }
          *(ulong *)(uVar16 + 0x10) = uVar9 + 1;
          *(byte *)(uVar16 + uVar9 + 0x20) = bVar2 & 7 | 0x30;
        }
      }
      else {
        if (uVar17 == 0x21 || bVar2 < 0x21) {
          if (uVar17 == 0xc) {
            puVar8 = &UNK_10f580d6a;
          }
          else {
            if (uVar17 != 0xd) goto LAB_1045a1664;
            puVar8 = &DAT_10f47f594;
          }
        }
        else if (uVar17 == 0x22) {
          puVar8 = &DAT_10f47f5ef;
        }
        else {
          if (uVar17 != 0x5c) goto LAB_1045a1664;
          puVar8 = &DAT_10f47f5f4;
        }
LAB_1045a15a8:
        FUN_104540d74(puVar8,2);
      }
      pbVar7 = pbVar7 + 1;
    }
  }
  return;
}



/* Entry: 1045a1540; end: 1045a1833;  */

void FUN_1045a1540(byte *param_1,long param_2,ulong *param_3)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  if (param_1 != (byte *)0x0) {
    param_2 = param_2 - (long)param_1;
    for (; param_2 != 0; param_2 = param_2 + -1) {
      bVar1 = *param_1;
      uVar6 = (uint)bVar1;
      if (bVar1 < 0xc) {
        if (uVar6 != 9 && 8 < bVar1) {
          if (uVar6 == 10) {
            puVar2 = &DAT_10f47f589;
          }
          else {
            if (uVar6 != 0xb) goto LAB_1045a1664;
            puVar2 = &UNK_10f60259e;
          }
          goto LAB_1045a15a8;
        }
        if (uVar6 == 8) {
          puVar2 = &UNK_10f580d67;
          goto LAB_1045a15a8;
        }
        if (uVar6 == 9) {
          puVar2 = &DAT_10f47f586;
          goto LAB_1045a15a8;
        }
LAB_1045a1664:
        uVar5 = *param_3;
        uVar3 = uVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        *param_3 = uVar5;
        if (uVar6 - 0x20 < 0x5f) {
          uVar4 = uVar5;
          if ((uVar3 & 1) == 0) {
            uVar4 = 0;
            func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
            *param_3 = uVar4;
          }
          uVar3 = *(ulong *)(uVar4 + 0x10);
          uVar5 = uVar4;
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            func_0x0001014d97ac(uVar5,uVar3 + 1,1,uVar4);
            *param_3 = uVar5;
          }
          *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
          *(byte *)(uVar5 + uVar3 + 0x20) = bVar1;
        }
        else {
          uVar4 = uVar5;
          if ((uVar3 & 1) == 0) {
            uVar4 = 0;
            func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
            *param_3 = uVar4;
          }
          uVar3 = *(ulong *)(uVar4 + 0x10);
          uVar5 = uVar4;
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            func_0x0001014d97ac(uVar5,uVar3 + 1,1,uVar4);
            *param_3 = uVar5;
          }
          *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
          *(undefined1 *)(uVar5 + uVar3 + 0x20) = 0x5c;
          uVar5 = *param_3;
          uVar3 = *(ulong *)(uVar5 + 0x10);
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
            func_0x0001014d97ac(uVar5,uVar3 + 1,1);
            *param_3 = uVar5;
          }
          *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
          *(byte *)(uVar5 + uVar3 + 0x20) = bVar1 >> 6 | 0x30;
          uVar5 = *param_3;
          uVar3 = *(ulong *)(uVar5 + 0x10);
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
            func_0x0001014d97ac(uVar5,uVar3 + 1,1);
            *param_3 = uVar5;
          }
          *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
          *(byte *)(uVar5 + uVar3 + 0x20) = bVar1 >> 3 & 7 | 0x30;
          uVar5 = *param_3;
          uVar3 = *(ulong *)(uVar5 + 0x10);
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
            func_0x0001014d97ac(uVar5,uVar3 + 1,1);
            *param_3 = uVar5;
          }
          *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
          *(byte *)(uVar5 + uVar3 + 0x20) = bVar1 & 7 | 0x30;
        }
      }
      else {
        if (uVar6 == 0x21 || bVar1 < 0x21) {
          if (uVar6 == 0xc) {
            puVar2 = &UNK_10f580d6a;
          }
          else {
            if (uVar6 != 0xd) goto LAB_1045a1664;
            puVar2 = &DAT_10f47f594;
          }
        }
        else if (uVar6 == 0x22) {
          puVar2 = &DAT_10f47f5ef;
        }
        else {
          if (uVar6 != 0x5c) goto LAB_1045a1664;
          puVar2 = &DAT_10f47f5f4;
        }
LAB_1045a15a8:
        FUN_104540d74(puVar2,2);
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}



/* Entry: 1045a1834; end: 1045a188f;  */

void FUN_1045a1834(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
  return;
}



/* Entry: 1045a1890; end: 1045a18eb;  */

undefined8 * FUN_1045a1890(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 1045a18ec; end: 1045a1927;  */

undefined8 * FUN_1045a18ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 1045a1928; end: 1045a19c3;  */

int FUN_1045a1928(ulong *param_1,int param_2)

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



/* Entry: 1045a19c4; end: 1045a1b4f;  */

undefined8 FUN_1045a19c4(void)

{
  return 1;
}



/* Entry: 1045a1b50; end: 1045a1be7;  */

long FUN_1045a1b50(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1045a1be8; end: 1045a1e8f;  */

undefined8 * FUN_1045a1be8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  lVar3 = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar5);
  if (lVar3 == 0) {
    lVar3 = param_2[2];
    uVar6 = param_2[5];
    uVar5 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = lVar3;
    param_1[5] = uVar6;
    param_1[4] = uVar5;
    uVar5 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar5;
  }
  else {
    uVar5 = param_2[3];
    uVar1 = param_2[4];
    param_1[2] = lVar3;
    param_1[3] = uVar5;
    uVar6 = param_2[5];
    uVar2 = param_2[6];
    param_1[4] = uVar1;
    param_1[5] = uVar6;
    uVar4 = param_2[7];
    param_1[6] = uVar2;
    param_1[7] = uVar4;
    _swift_retain(lVar3);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(uVar4);
  }
  uVar5 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar5;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar5);
  return param_1;
}



/* Entry: 1045a1e90; end: 1045a1f8b;  */

undefined8 * FUN_1045a1e90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRelease(uVar1);
  plVar2 = param_1 + 2;
  if (*plVar2 != 0) {
    if (param_2[2] != 0) {
      param_1[2] = param_2[2];
      _swift_release();
      uVar1 = param_1[3];
      param_1[3] = param_2[3];
      _swift_bridgeObjectRelease(uVar1);
      uVar1 = param_1[4];
      param_1[4] = param_2[4];
      _swift_bridgeObjectRelease(uVar1);
      uVar1 = param_1[5];
      param_1[5] = param_2[5];
      _swift_bridgeObjectRelease(uVar1);
      uVar1 = param_1[6];
      param_1[6] = param_2[6];
      _swift_bridgeObjectRelease(uVar1);
      uVar1 = param_1[7];
      param_1[7] = param_2[7];
      _swift_bridgeObjectRelease(uVar1);
      goto LAB_1045a1f50;
    }
    FUN_104571fc8(plVar2);
  }
  lVar3 = param_2[2];
  uVar4 = param_2[5];
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  *plVar2 = lVar3;
  param_1[5] = uVar4;
  param_1[4] = uVar1;
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
LAB_1045a1f50:
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  return param_1;
}



/* Entry: 1045a1f8c; end: 1045a203b;  */

int FUN_1045a1f8c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x51) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1045a203c; end: 1045a23cf;  */

void FUN_1045a203c(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  uVar7 = 0;
  func_0x0001000285a8(0x113087668);
  lVar3 = 2;
  __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
  uVar4 = 1;
  func_0x00010035a314();
  if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1045a2158);
    (*pcVar2)();
  }
  lVar1 = lVar3 + 0x40;
  uVar5 = uVar4 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar5) = *(ulong *)(lVar1 + uVar5) | 1L << (uVar4 & 0x3f);
  *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar4 * 8) = 1;
  puVar6 = (undefined8 *)(*(long *)(lVar3 + 0x38) + uVar4 * 0x18);
  *puVar6 = "key";
  puVar6[1] = 3;
  *(undefined1 *)(puVar6 + 2) = 2;
  if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1045a215c);
    (*pcVar2)();
  }
  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
  uVar4 = 2;
  func_0x00010035a314();
  if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1045a2160);
    (*pcVar2)();
  }
  uVar7 = uVar4 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) | 1L << (uVar4 & 0x3f);
  *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar4 * 8) = 2;
  puVar6 = (undefined8 *)(*(long *)(lVar3 + 0x38) + uVar4 * 0x18);
  *puVar6 = "value";
  puVar6[1] = 5;
  *(undefined1 *)(puVar6 + 2) = 2;
  if (!SCARRY8(*(long *)(lVar3 + 0x10),1)) {
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
    lRam0000000113087660 = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1045a2164);
  (*pcVar2)();
}



/* Entry: 1045a23d0; end: 1045a2627;  */

void FUN_1045a23d0(long param_1,ulong param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long extraout_x8;
  ulong uVar8;
  ulong *unaff_x20;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb0;
  
  if (((unaff_x20[2] == 0) || (uVar9 = unaff_x20[3], *(long *)(uVar9 + 0x10) == 0)) ||
     (lVar6 = param_1, func_0x00010035a314(), (param_2 & 1) == 0)) {
    uVar9 = unaff_x20[8];
    if ((*(long *)(uVar9 + 0x10) == 0) ||
       (lVar6 = param_1, func_0x00010035a314(), (param_2 & 1) == 0)) {
      uVar9 = unaff_x20[9];
      if (uVar9 != 0) {
        if ((*(long *)(uVar9 + 0x10) == 0) ||
           (lVar6 = param_1, func_0x00010035a314(param_1), (param_2 & 1) == 0)) {
          uStack_68 = 0;
          uStack_70 = 0;
        }
        else {
          func_0x0001045a85ec(*(long *)(uVar9 + 0x38) + lVar6 * 0x28,&uStack_70);
          if (in_stack_ffffffffffffffa8 != 0) {
            func_0x0001000a8868(&uStack_70,in_stack_ffffffffffffffa8);
            lVar6 = *(long *)(in_stack_ffffffffffffffa8 + -8);
            (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
            (**(code **)(lVar6 + 0x10))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
            func_0x0001045a8630(&uStack_70,0x112db4800,&UNK_10d95efc0);
            (**(code **)(in_stack_ffffffffffffffb0 + 0x18))
                      (auStack_98,in_stack_ffffffffffffffa8,in_stack_ffffffffffffffb0);
            (**(code **)(lVar6 + 8))
                      (auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                       in_stack_ffffffffffffffa8);
            func_0x0001000a8868(auStack_98,uStack_80);
            uVar3 = uStack_80;
            lVar6 = lStack_78;
            (**(code **)(lStack_78 + 0x10))(uStack_80,lStack_78);
            func_0x0001000834e4(auStack_98);
            FUN_1045a044c(uVar3,lVar6);
            _swift_bridgeObjectRelease(lVar6);
            return;
          }
        }
        func_0x0001045a8630(&uStack_70,0x112db4800,&UNK_10d95efc0);
      }
      _swift_bridgeObjectRetain(unaff_x20[1]);
      func_0x000103ee3b44();
      if (-1 < param_1) {
        func_0x0001045a0584(param_1);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1045a2620);
      (*pcVar1)();
    }
    puVar7 = (undefined8 *)(*(long *)(uVar9 + 0x38) + lVar6 * 0x18);
    if ((*(byte *)(puVar7 + 2) & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1045a2624);
      (*pcVar1)();
    }
    puVar11 = (undefined1 *)*puVar7;
    if (puVar11 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1045a2628);
      (*pcVar1)();
    }
    lVar6 = puVar7[1];
    _swift_bridgeObjectRetain(unaff_x20[1]);
    func_0x000103ee3b44();
    puVar4 = puVar11 + lVar6;
  }
  else {
    lVar6 = *(long *)(uVar9 + 0x38) + lVar6 * 0x28;
    puVar11 = *(undefined1 **)(lVar6 + 0x18);
    puVar4 = *(undefined1 **)(lVar6 + 0x20);
    _swift_bridgeObjectRetain(unaff_x20[1]);
    func_0x000103ee3b44();
  }
  uVar17 = (long)puVar4 - (long)puVar11;
  uVar9 = 0;
  if (puVar11 != (undefined1 *)0x0) {
    uVar9 = uVar17;
  }
  uVar8 = *unaff_x20;
  lVar6 = *(long *)(uVar8 + 0x10);
  if (SCARRY8(lVar6,uVar9)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104540cd4);
    (*pcVar1)();
  }
  uVar15 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((int)uVar15 != 0) {
    uVar14 = *(ulong *)(uVar8 + 0x18);
    uVar5 = uVar14 >> 1;
    if ((long)(lVar6 + uVar9) <= (long)uVar5) goto LAB_104540c40;
  }
  func_0x0001014d97ac();
  uVar14 = *(ulong *)(uVar15 + 0x18);
  uVar5 = uVar14 >> 1;
  uVar8 = uVar15;
LAB_104540c40:
  uVar15 = *(ulong *)(uVar8 + 0x10);
  uVar16 = uVar5 - uVar15;
  uVar13 = 0;
  if ((((puVar11 != (undefined1 *)0x0) && (puVar4 != (undefined1 *)0x0)) && (puVar11 < puVar4)) &&
     (uVar5 != uVar15)) {
    if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104540d74);
      (*pcVar1)();
    }
    uVar13 = uVar17;
    if (uVar16 <= uVar17) {
      uVar13 = uVar16;
    }
    _memmove(uVar8 + uVar15 + 0x20,puVar11,uVar13);
    puVar11 = puVar11 + uVar13;
  }
  if ((long)uVar13 < (long)uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104540cd8);
    (*pcVar1)();
  }
  if (uVar13 != 0) {
    bVar2 = SCARRY8(uVar15,uVar13);
    uVar15 = uVar15 + uVar13;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104540cdc);
      (*pcVar1)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar15;
  }
  if ((uVar13 != uVar16 || puVar11 == (undefined1 *)0x0) || puVar11 == puVar4) {
LAB_104540cb0:
    *unaff_x20 = uVar8;
    return;
  }
  puVar10 = puVar11 + 1;
  uVar12 = *puVar11;
  uVar9 = uVar8;
  do {
    while( true ) {
      uVar17 = uVar14 >> 1;
      if ((long)uVar17 < (long)(uVar15 + 1)) break;
      uVar8 = uVar9;
      if ((long)uVar17 <= (long)uVar15) goto LAB_104540ce4;
LAB_104540d00:
      lVar6 = uVar15 + 0x20;
      puVar11 = puVar10;
      do {
        *(undefined1 *)(uVar8 + lVar6) = uVar12;
        if (puVar11 == puVar4) {
          *(long *)(uVar8 + 0x10) = lVar6 + -0x1f;
          goto LAB_104540cb0;
        }
        puVar10 = puVar11 + 1;
        uVar12 = *puVar11;
        lVar6 = lVar6 + 1;
        puVar11 = puVar10;
      } while (lVar6 - uVar17 != 0x20);
      uVar14 = *(ulong *)(uVar8 + 0x18);
      *(ulong *)(uVar8 + 0x10) = uVar17;
      uVar9 = uVar8;
      uVar15 = uVar17;
    }
    uVar8 = (ulong)(1 < uVar14);
    func_0x0001014d97ac(uVar8,uVar15 + 1,1,uVar9);
    uVar14 = *(ulong *)(uVar8 + 0x18);
    uVar17 = uVar14 >> 1;
    if ((long)uVar15 < (long)uVar17) goto LAB_104540d00;
LAB_104540ce4:
    *(ulong *)(uVar8 + 0x10) = uVar15;
    uVar9 = uVar8;
  } while( true );
}



/* Entry: 1045a2628; end: 1045a26ef;  */

void FUN_1045a2628(long param_1,long param_2)

{
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((param_1 != 0) && (lStack_c8 = param_2 - param_1, lStack_c8 != 0)) {
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_b0 = 1;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    uStack_70 = 1;
    uStack_48 = 0xf000000000000000;
    uStack_50 = 0;
    uStack_38 = 0xf000000000000000;
    uStack_40 = 0;
    uStack_b8 = 0;
    lStack_d0 = param_1;
    lStack_c0 = param_1;
    func_0x0001045a85a4(&uStack_100,&uStack_a0,0x112d49548,&UNK_10d90fde0);
    uStack_68 = 100;
    uStack_60 = 1;
    uStack_58 = 100;
    FUN_1045a26f0(&lStack_d0,10);
    func_0x00010006c134(&lStack_d0);
  }
  return;
}



/* Entry: 1045a36ec; end: 1045a382f;  */

void FUN_1045a36ec(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  FUN_1045a23d0(param_2);
  FUN_104540d74(": ",2);
  if (param_1 < 0) {
    uVar3 = *unaff_x20;
    uVar1 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar2 = uVar3;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar3 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
    }
    *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x2d;
    *unaff_x20 = uVar3;
    param_1 = -param_1;
  }
  func_0x0001045a0584(param_1);
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 10;
  *unaff_x20 = uVar3;
  return;
}


