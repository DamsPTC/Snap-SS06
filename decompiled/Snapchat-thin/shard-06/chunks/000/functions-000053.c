/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1044413a4; end: 1044413e3;  */

void FUN_1044413a4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130799c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcff4e8;
  _swift_getWitnessTable(&UNK_10dcff4e8,&UNK_11076f6b0);
  puRam00000001130799c0 = puVar1;
  return;
}



/* Entry: 1044413e4; end: 1044413e7;  */

void FUN_1044413e4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130799c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcff520;
  _swift_getWitnessTable(&UNK_10dcff520,&UNK_11076f6b0);
  puRam00000001130799c8 = puVar1;
  return;
}



/* Entry: 1044413e8; end: 104441427;  */

void FUN_1044413e8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130799c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcff520;
  _swift_getWitnessTable(&UNK_10dcff520,&UNK_11076f6b0);
  puRam00000001130799c8 = puVar1;
  return;
}



/* Entry: 104441428; end: 104441453;  */

void FUN_104441428(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 104441454; end: 104441493;  */

void FUN_104441454(void)

{
  undefined *puVar1;
  
  if (puRam00000001130799d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcff5e8;
  _swift_getWitnessTable(&UNK_10dcff5e8,&UNK_11076f6b0);
  puRam00000001130799d0 = puVar1;
  return;
}



/* Entry: 104441494; end: 104441497;  */

void FUN_104441494(void)

{
  undefined *puVar1;
  
  if (puRam00000001130799d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcff610;
  _swift_getWitnessTable(&UNK_10dcff610,&UNK_11076f6b0);
  puRam00000001130799d8 = puVar1;
  return;
}



/* Entry: 104441498; end: 1044414d7;  */

void FUN_104441498(void)

{
  undefined *puVar1;
  
  if (puRam00000001130799d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcff610;
  _swift_getWitnessTable(&UNK_10dcff610,&UNK_11076f6b0);
  puRam00000001130799d8 = puVar1;
  return;
}



/* Entry: 1044414d8; end: 104441657;  */

void FUN_1044414d8(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 104441658; end: 1044416ff;  */

void FUN_104441658(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_1044416ec;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_1044416ec:
  _swift_bridgeObjectRelease();
  *param_1 = uVar7;
  return;
}



/* Entry: 104441700; end: 104441717;  */

undefined1  [16] FUN_104441700(void)

{
  return ZEXT816(0x11076f6b0);
}



/* Entry: 104441718; end: 1044417a7;  */

long FUN_104441718(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1044417a8; end: 1044417bb;  */

bool FUN_1044417a8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1044417bc; end: 104441893;  */

void FUN_1044417bc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104441894; end: 1044418b3;  */

void FUN_104441894(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1044418b4; end: 1044418f3;  */

void FUN_1044418b4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130799e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcff680;
  _swift_getWitnessTable(&UNK_10dcff680,&UNK_11076f880);
  puRam00000001130799e0 = puVar1;
  return;
}



/* Entry: 1044418f4; end: 104441903;  */

undefined1  [16] FUN_1044418f4(void)

{
  return ZEXT816(0x11076f880);
}



/* Entry: 104441904; end: 1044419df;  */

long FUN_104441904(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1044419e0; end: 104441b1b;  */

bool FUN_1044419e0(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_2 + 1) == '\x01' && (int)*param_1 == (int)*param_2;
  if (*(char *)(param_1 + 1) != '\x01') {
    bVar1 = *(char *)(param_2 + 1) != '\x01' && (int)*param_1 == (int)*param_2;
  }
  return bVar1;
}



/* Entry: 104441b1c; end: 104441b47;  */

long FUN_104441b1c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104441b48; end: 104441c0b;  */

int FUN_104441b48(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x19] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104441c0c; end: 104441c4b;  */

void FUN_104441c0c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130799e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcff800;
  _swift_getWitnessTable(&UNK_10dcff800,&UNK_11076fab0);
  puRam00000001130799e8 = puVar1;
  return;
}



/* Entry: 104441c4c; end: 104441cf7;  */

void FUN_104441c4c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104441cf8; end: 104441d2f;  */

void FUN_104441cf8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 104441d30; end: 104441ee7;  */

void FUN_104441d30(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
  return;
}



/* Entry: 104441ee8; end: 104441f27;  */

void FUN_104441ee8(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "com.snapchat.opera.playlist.error";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC
            ("com.snapchat.opera.playlist.error",0x21,2);
  pcRam0000000113813620 = pcVar1;
  return;
}



/* Entry: 104441f28; end: 104441f67; +[SCOperaPlaylistConstants errorDomain] */

void FUN_104441f28(void)

{
  if (lRam00000001130799f0 != -1) {
    _swift_once(0x1130799f0,FUN_104441ee8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813620);
  return;
}



/* Entry: 104441f68; end: 104441fa3; -[SCOperaPlaylistConstants init] */

void FUN_104441f68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104441fa4; end: 104441fd7;  */

void FUN_104441fa4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104441fd8; end: 104441fdb; -[SCOperaPlaylistConstants .cxx_destruct] */

void FUN_104441fd8(void)

{
  return;
}



/* Entry: 104441fdc; end: 104441ffb;  */

void FUN_104441fdc(void)

{
  _objc_opt_self(&PTR_PTR_1129b3fa0);
  return;
}



/* Entry: 104441ffc; end: 10444200f;  */

bool FUN_104441ffc(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104442010; end: 1044420e7;  */

void FUN_104442010(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044420e8; end: 104442107;  */

void FUN_1044420e8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104442108; end: 104442147;  */

void FUN_104442108(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079a20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcff900;
  _swift_getWitnessTable(&UNK_10dcff900,&UNK_11076fba8);
  puRam0000000113079a20 = puVar1;
  return;
}



/* Entry: 104442148; end: 104442157;  */

undefined1  [16] FUN_104442148(void)

{
  return ZEXT816(0x11076fba8);
}



/* Entry: 104442158; end: 10444219f;  */

uint FUN_104442158(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined7 uStack_58;
  undefined4 uStack_51;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined7 uStack_28;
  undefined4 uStack_21;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined7)param_1[3];
  uStack_51 = *(undefined4 *)((long)param_1 + 0x1f);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined7)param_2[3];
  uStack_21 = *(undefined4 *)((long)param_2 + 0x1f);
  FUN_1044421a0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1044421a0; end: 1044422df;  */

byte FUN_1044421a0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = *param_1;
  if ((((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar1 & 1) != 0)) &&
      ((uVar1 = param_1[2], uVar1 == param_2[2] && param_1[3] == param_2[3] ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar1 & 1) != 0)))) &&
     (((((byte)param_1[4] ^ (byte)param_2[4]) & 1) == 0 &&
      (((*(byte *)((long)param_1 + 0x21) ^ *(byte *)((long)param_2 + 0x21)) & 1) == 0)))) {
    bVar2 = *(byte *)((long)param_1 + 0x22) ^ *(byte *)((long)param_2 + 0x22) ^ 1;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}



/* Entry: 1044422e0; end: 104442363;  */

undefined8 * FUN_1044422e0(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
  *(undefined1 *)((long)param_1 + 0x22) = *(undefined1 *)((long)param_2 + 0x22);
  return param_1;
}



/* Entry: 104442364; end: 1044423bf;  */

undefined8 * FUN_104442364(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
  *(undefined1 *)((long)param_1 + 0x22) = *(undefined1 *)((long)param_2 + 0x22);
  return param_1;
}



/* Entry: 1044423c0; end: 10444245f;  */

int FUN_1044423c0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x23) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104442460; end: 104442687;  */

long FUN_104442460(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104442688; end: 10444269f;  */

bool FUN_104442688(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1044426a0; end: 1044426df;  */

void FUN_1044426a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079a28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcffa30;
  _swift_getWitnessTable(&UNK_10dcffa30,&UNK_11076fd48);
  puRam0000000113079a28 = puVar1;
  return;
}



/* Entry: 1044426e0; end: 10444278b;  */

void FUN_1044426e0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10444278c; end: 1044427d7;  */

void FUN_10444278c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 1044427d8; end: 1044428af;  */

void FUN_1044427d8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044428b0; end: 1044428cf;  */

void FUN_1044428b0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1044428d0; end: 10444290f;  */

void FUN_1044428d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079a30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcffb00;
  _swift_getWitnessTable(&UNK_10dcffb00,&UNK_11076fdc0);
  puRam0000000113079a30 = puVar1;
  return;
}



/* Entry: 104442910; end: 104442933;  */

undefined1  [16] FUN_104442910(void)

{
  return ZEXT816(0x11076fdc0);
}



/* Entry: 104442934; end: 104442a0b;  */

void FUN_104442934(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104442a0c; end: 104442a2f;  */

void FUN_104442a0c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104442a30; end: 104442a6f;  */

void FUN_104442a30(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079a38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcffbc0;
  _swift_getWitnessTable(&UNK_10dcffbc0,&UNK_11076fe38);
  puRam0000000113079a38 = puVar1;
  return;
}



/* Entry: 104442a70; end: 104442a7f;  */

undefined1  [16] FUN_104442a70(void)

{
  return ZEXT816(0x11076fe38);
}



/* Entry: 104442a80; end: 104442ad7;  */

int FUN_104442a80(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 104442ad8; end: 104442ae7; -[SCOperaPlaybackProgressUpdateEvent stateType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104442ad8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079a40);
}



/* Entry: 104442ae8; end: 104442aff; -[SCOperaPlaybackProgressUpdateEvent currentProgressTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104442ae8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079a48);
}



/* Entry: 104442b00; end: 104442c2b; -[SCOperaPlaybackProgressUpdateEvent initWithStateType:currentProgressTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104442b00(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2;
  _swift_getObjectType();
  *(undefined8 *)(param_2 + _DAT_113079a40) = param_4;
  *(undefined8 *)(param_2 + _DAT_113079a48) = param_1;
  lStack_40 = param_2;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104442c2c; end: 104442c2f; -[SCOperaPlaybackProgressUpdateEvent copyWithZone:] */

void FUN_104442c2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104442c30; end: 104442c4b; -[SCOperaPlaybackProgressUpdateEvent description] */

void FUN_104442c30(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104442c4c; end: 104442ce7; -[SCOperaPlaybackProgressUpdateEvent init] */

void FUN_104442c4c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaPlaybackProgressUpdateEventWrapper.swift",0x42,2,0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104442c94);
  (*pcVar1)();
}



/* Entry: 104442ce8; end: 104442ceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104442ce8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113079a40) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113079a48) = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104442cec; end: 104442cfb; -[SCOperaResponsiveLayoutRules layoutType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104442cec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079a78);
}



/* Entry: 104442cfc; end: 104442d0b; -[SCOperaResponsiveLayoutRules statusBarOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104442cfc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079a80);
}



/* Entry: 104442d0c; end: 104442d1b; -[SCOperaResponsiveLayoutRules headerOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104442d0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079a88);
}



/* Entry: 104442d1c; end: 104442d2b; -[SCOperaResponsiveLayoutRules maxWidthPct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104442d1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079a90);
}



/* Entry: 104442d2c; end: 104442d3b; -[SCOperaResponsiveLayoutRules maxHeightPct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104442d2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079a98);
}



/* Entry: 104442d3c; end: 104442e73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104442d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113079a78) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113079a80) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113079a88) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113079a90) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113079a98) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104442e74; end: 104442f0f; -[SCOperaResponsiveLayoutRules initWithLayoutType:statusBarOffset:headerOffset:maxWidthPct:maxHeightPct:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104442e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_5;
  _swift_getObjectType();
  *(undefined8 *)(param_5 + _DAT_113079a78) = param_7;
  *(undefined8 *)(param_5 + _DAT_113079a80) = param_1;
  *(undefined8 *)(param_5 + _DAT_113079a88) = param_2;
  *(undefined8 *)(param_5 + _DAT_113079a90) = param_3;
  *(undefined8 *)(param_5 + _DAT_113079a98) = param_4;
  lStack_50 = param_5;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104442f10; end: 104442f97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104442f10(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113079a78) = *param_1;
  uVar1 = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_113079a80) = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_113079a88) = uVar1;
  uVar1 = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_113079a90) = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_113079a98) = uVar1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104442f98; end: 104442f9b; -[SCOperaResponsiveLayoutRules copyWithZone:] */

void FUN_104442f98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104442f9c; end: 104442fb7; -[SCOperaResponsiveLayoutRules description] */

void FUN_104442f9c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104442fb8; end: 104442fff; -[SCOperaResponsiveLayoutRules init] */

void FUN_104442fb8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaResponsiveLayoutRulesWrapper.swift",0x3c,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104443000);
  (*pcVar1)();
}



/* Entry: 104443000; end: 10444301b; +[SCOperaResponsiveLayoutRulesBuilder operaResponsiveLayoutRules] */

void FUN_104443000(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10444301c; end: 10444305b; +[SCOperaResponsiveLayoutRulesBuilder operaResponsiveLayoutRulesWithExistingOperaResponsiveLayoutRules:] */

void FUN_10444301c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1044433b0(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10444305c; end: 104443073; -[SCOperaResponsiveLayoutRulesBuilder withLayoutType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444305c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113079aa0);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104443074; end: 10444308b; -[SCOperaResponsiveLayoutRulesBuilder withStatusBarOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104443074(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113079aa8);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10444308c; end: 1044430a3; -[SCOperaResponsiveLayoutRulesBuilder withHeaderOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444308c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113079ab0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044430a4; end: 1044430bb; -[SCOperaResponsiveLayoutRulesBuilder withMaxWidthPct:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044430a4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113079ab8);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044430bc; end: 1044430d3; -[SCOperaResponsiveLayoutRulesBuilder withMaxHeightPct:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044430bc(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113079ac0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044430d4; end: 10444324b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044430d4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_60;
  long lStack_58;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079aa0);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar3 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079aa8);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar4 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar4 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079ab0);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar5 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar5 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079ab8);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar6 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar6 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079ac0);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar7 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar7 = *puVar1;
  }
  FUN_1044434c0();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_113079a78) = uVar3;
  *(undefined8 *)(lVar2 + _DAT_113079a80) = uVar4;
  *(undefined8 *)(lVar2 + _DAT_113079a88) = uVar5;
  *(undefined8 *)(lVar2 + _DAT_113079a90) = uVar6;
  *(undefined8 *)(lVar2 + _DAT_113079a98) = uVar7;
  lStack_60 = lVar2;
  lStack_58 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10444324c; end: 10444328f; -[SCOperaResponsiveLayoutRulesBuilder build] */

void FUN_10444324c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044430d4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104443290; end: 1044432d3; -[SCOperaResponsiveLayoutRulesBuilder safeBuildAndReturnError:] */

void FUN_104443290(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044430d4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044432d4; end: 104443377; -[SCOperaResponsiveLayoutRulesBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044432d4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar1 = (undefined8 *)(param_1 + _DAT_113079aa0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(param_1 + _DAT_113079aa8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(param_1 + _DAT_113079ab0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(param_1 + _DAT_113079ab8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(param_1 + _DAT_113079ac0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104443378; end: 10444337b;  */

void FUN_104443378(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10444337c; end: 1044433af;  */

void FUN_10444337c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044433b0; end: 1044434bf;  */

/* WARNING: Possible PIC construction at 0x0001044433e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001044433e8) */

void FUN_1044433b0(long param_1)

{
  if (param_1 == 0) {
    func_0x0001044434e0();
    _objc_allocWithZone();
  }
  else {
    func_0x0001044434e0();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1044434c0; end: 1044434ff;  */

void FUN_1044434c0(void)

{
  _objc_opt_self(&PTR_PTR_1129b4120);
  return;
}



/* Entry: 104443500; end: 104443503;  */

void FUN_104443500(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104443504; end: 10444350b; +[SCOperaPagePreparationStrategy prioritizeNone] */

undefined8 FUN_104443504(void)

{
  return 0;
}



/* Entry: 10444350c; end: 104443513; +[SCOperaPagePreparationStrategy prioritizeNextGroupOverNext] */

undefined8 FUN_10444350c(void)

{
  return 1;
}



/* Entry: 104443514; end: 10444351b; +[SCOperaPagePreparationStrategy prioritizeNextOverNextGroup] */

undefined8 FUN_104443514(void)

{
  return 2;
}



/* Entry: 10444351c; end: 104443523; +[SCOperaPagePreparationStrategy prioritizeForwardOverBackward] */

undefined8 FUN_10444351c(void)

{
  return 4;
}



/* Entry: 104443524; end: 1044435bf; -[SCOperaPagePreparationStrategy init] */

void FUN_104443524(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaPagePreparationStrategyWrapper.swift",0x3e,2,0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10444356c);
  (*pcVar1)();
}



/* Entry: 1044435c0; end: 1044435c7; +[SCOperaPageabilityOverwriteOption default] */

undefined8 FUN_1044435c0(void)

{
  return 0;
}



/* Entry: 1044435c8; end: 1044435cf; +[SCOperaPageabilityOverwriteOption allowPagingForwardOnLoadingPage] */

undefined8 FUN_1044435c8(void)

{
  return 1;
}



/* Entry: 1044435d0; end: 1044435d7; +[SCOperaPageabilityOverwriteOption allowPagingBackwardOnLoadingPage] */

undefined8 FUN_1044435d0(void)

{
  return 2;
}



/* Entry: 1044435d8; end: 1044435df; +[SCOperaPageabilityOverwriteOption allowPagingToAttachmentOnLoadingPage] */

undefined8 FUN_1044435d8(void)

{
  return 4;
}



/* Entry: 1044435e0; end: 10444367b; -[SCOperaPageabilityOverwriteOption init] */

void FUN_1044435e0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaPageabilityOverwriteOptionWrapper.swift",0x41,2,0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104443628);
  (*pcVar1)();
}



/* Entry: 10444367c; end: 104443683; +[SCOperaInternalDataSaverModeStrategy unset] */

undefined8 FUN_10444367c(void)

{
  return 0;
}



/* Entry: 104443684; end: 10444368b; +[SCOperaInternalDataSaverModeStrategy delayMediaPreparation] */

undefined8 FUN_104443684(void)

{
  return 1;
}


