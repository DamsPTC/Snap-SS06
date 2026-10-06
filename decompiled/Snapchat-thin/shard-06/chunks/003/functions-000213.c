/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1046c95d4; end: 1046c95f3; -[SCAdCustomColor intValue] */

void FUN_1046c95d4(void)

{
  FUN_1046c95f4();
  return;
}



/* Entry: 1046c95f4; end: 1046c977f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1046c95f4(void)

{
  code *pcVar1;
  long unaff_x20;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = *(double *)(unaff_x20 + _DAT_11308ef48) * 255.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c9750);
    (*pcVar1)();
  }
  if (dVar2 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c9754);
    (*pcVar1)();
  }
  if (4294967296.0 <= dVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c9758);
    (*pcVar1)();
  }
  dVar3 = *(double *)(unaff_x20 + _DAT_11308ef50) * 255.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c975c);
    (*pcVar1)();
  }
  if (dVar3 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c9760);
    (*pcVar1)();
  }
  if (4294967296.0 <= dVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c9764);
    (*pcVar1)();
  }
  dVar4 = *(double *)(unaff_x20 + _DAT_11308ef58) * 255.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c9768);
    (*pcVar1)();
  }
  if (-1.0 < dVar4) {
    if (4294967296.0 <= dVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c9770);
      (*pcVar1)();
    }
    dVar5 = *(double *)(unaff_x20 + _DAT_11308ef60) * 255.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c9774);
      (*pcVar1)();
    }
    if (dVar5 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c9778);
      (*pcVar1)();
    }
    if (dVar5 < 4294967296.0) {
      return (int)dVar3 << 8 | (int)dVar2 << 0x10 | (int)dVar4 | (int)dVar5 << 0x18;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c977c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c976c);
  (*pcVar1)();
}



/* Entry: 1046c9780; end: 1046c97bf;  */

void FUN_1046c9780(void)

{
  undefined *puVar1;
  
  if (puRam000000011308da00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2f068;
  _swift_getWitnessTable(&UNK_10dd2f068,&UNK_11079b5e8);
  puRam000000011308da00 = puVar1;
  return;
}



/* Entry: 1046c97c0; end: 1046c97eb;  */

long FUN_1046c97c0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1046c97ec; end: 1046c9847;  */

int FUN_1046c97ec(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1046c9848; end: 1046c99db;  */

void FUN_1046c9848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1046c99dc; end: 1046c99df;  */

undefined1 FUN_1046c99dc(long *param_1,long *param_2)

{
  ulong uVar1;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  if (((((((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
         ((double)param_1[2] == (double)param_2[2])) &&
        ((param_1[3] == param_2[3] && (param_1[4] == param_2[4])))) &&
       (((double)param_1[5] == (double)param_2[5] &&
        ((param_1[6] == param_2[6] && (param_1[7] == param_2[7])))))) &&
      ((double)param_1[8] == (double)param_2[8])) &&
     (((((double)param_1[9] == (double)param_2[9] && (param_1[10] == param_2[10])) &&
       (((*(byte *)(param_1 + 0xb) ^ *(byte *)(param_2 + 0xb)) & 1) == 0)) &&
      ((((*(byte *)((long)param_1 + 0x59) ^ *(byte *)((long)param_2 + 0x59)) & 1) == 0 &&
       (((*(byte *)((long)param_1 + 0x5a) ^ *(byte *)((long)param_2 + 0x5a)) & 1) == 0)))))) {
    if ((char)param_1[0xd] == '\x01') {
      if ((char)param_2[0xd] != '\x01') {
        return 0;
      }
    }
    else {
      if ((char)param_2[0xd] == '\x01') {
        return 0;
      }
      if (param_1[0xc] != param_2[0xc]) {
        return 0;
      }
    }
    if (((param_1[0xe] == param_2[0xe]) && (param_1[0xf] == param_2[0xf])) &&
       (((double)param_1[0x10] == (double)param_2[0x10] &&
        (((*(byte *)(param_1 + 0x11) ^ *(byte *)(param_2 + 0x11)) & 1) == 0)))) {
      if ((char)param_1[0x17] == '\x01') {
        if ((char)param_2[0x17] == '\x01') {
          return 1;
        }
      }
      else if ((char)param_2[0x17] != '\x01') {
        uVar1 = 0;
        lStack_60 = param_1[0x12];
        lStack_58 = param_1[0x13];
        lStack_48 = param_1[0x15];
        lStack_50 = param_1[0x14];
        lStack_40 = param_1[0x16];
        lStack_38 = param_2[0x12];
        lStack_30 = param_2[0x13];
        lStack_20 = param_2[0x15];
        lStack_28 = param_2[0x14];
        lStack_18 = param_2[0x16];
        FUN_1046c8fdc(&lStack_60,&lStack_38);
        if ((uVar1 & 1) != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Entry: 1046c99e0; end: 1046c9b7f;  */

void FUN_1046c99e0(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  double dVar7;
  
  __ss6HasherV8_combineyySuF(*unaff_x20);
  __ss6HasherV8_combineyySuF(unaff_x20[1]);
  dVar7 = 0.0;
  if ((double)unaff_x20[2] != 0.0) {
    dVar7 = (double)unaff_x20[2];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  __ss6HasherV8_combineyySuF(unaff_x20[3]);
  __ss6HasherV8_combineyySuF(unaff_x20[4]);
  dVar7 = 0.0;
  if ((double)unaff_x20[5] != 0.0) {
    dVar7 = (double)unaff_x20[5];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  __ss6HasherV8_combineyySuF(unaff_x20[6]);
  __ss6HasherV8_combineyySuF(unaff_x20[7]);
  dVar7 = 0.0;
  if ((double)unaff_x20[8] != 0.0) {
    dVar7 = (double)unaff_x20[8];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if ((double)unaff_x20[9] != 0.0) {
    dVar7 = (double)unaff_x20[9];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  __ss6HasherV8_combineyySuF(unaff_x20[10]);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0xb) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x59) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x5a) & 1);
  if (*(char *)(unaff_x20 + 0xd) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar6 = unaff_x20[0xc];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar6);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[0xe]);
  __ss6HasherV8_combineyySuF(unaff_x20[0xf]);
  dVar7 = 0.0;
  if ((double)unaff_x20[0x10] != 0.0) {
    dVar7 = (double)unaff_x20[0x10];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0x11) & 1);
  if (*(char *)(unaff_x20 + 0x17) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar6 = unaff_x20[0x15];
    uVar3 = unaff_x20[0x16];
    uVar2 = unaff_x20[0x13];
    uVar4 = unaff_x20[0x14];
    uVar5 = unaff_x20[0x12];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    __ss6HasherV8_combineyySuF(uVar4);
    __ss6HasherV8_combineyySuF(uVar6);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  return;
}



/* Entry: 1046c9b80; end: 1046c9bbb;  */

void FUN_1046c9b80(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1046c99e0(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046c9bbc; end: 1046c9bbf;  */

void FUN_1046c9bbc(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  double dVar7;
  
  __ss6HasherV8_combineyySuF(*unaff_x20);
  __ss6HasherV8_combineyySuF(unaff_x20[1]);
  dVar7 = 0.0;
  if ((double)unaff_x20[2] != 0.0) {
    dVar7 = (double)unaff_x20[2];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  __ss6HasherV8_combineyySuF(unaff_x20[3]);
  __ss6HasherV8_combineyySuF(unaff_x20[4]);
  dVar7 = 0.0;
  if ((double)unaff_x20[5] != 0.0) {
    dVar7 = (double)unaff_x20[5];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  __ss6HasherV8_combineyySuF(unaff_x20[6]);
  __ss6HasherV8_combineyySuF(unaff_x20[7]);
  dVar7 = 0.0;
  if ((double)unaff_x20[8] != 0.0) {
    dVar7 = (double)unaff_x20[8];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if ((double)unaff_x20[9] != 0.0) {
    dVar7 = (double)unaff_x20[9];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  __ss6HasherV8_combineyySuF(unaff_x20[10]);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0xb) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x59) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x5a) & 1);
  if (*(char *)(unaff_x20 + 0xd) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar6 = unaff_x20[0xc];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar6);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[0xe]);
  __ss6HasherV8_combineyySuF(unaff_x20[0xf]);
  dVar7 = 0.0;
  if ((double)unaff_x20[0x10] != 0.0) {
    dVar7 = (double)unaff_x20[0x10];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0x11) & 1);
  if (*(char *)(unaff_x20 + 0x17) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar6 = unaff_x20[0x15];
    uVar3 = unaff_x20[0x16];
    uVar2 = unaff_x20[0x13];
    uVar4 = unaff_x20[0x14];
    uVar5 = unaff_x20[0x12];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    __ss6HasherV8_combineyySuF(uVar4);
    __ss6HasherV8_combineyySuF(uVar6);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  return;
}



/* Entry: 1046c9bc0; end: 1046c9bf7;  */

void FUN_1046c9bc0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1046c99e0(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046c9bf8; end: 1046c9c9b;  */

uint FUN_1046c9bf8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uVar1 = 0;
  uStack_118 = param_1[0x11];
  uStack_120 = param_1[0x10];
  uStack_108 = param_1[0x13];
  uStack_110 = param_1[0x12];
  uStack_100 = param_1[0x14];
  uStack_f8 = (undefined1)param_1[0x15];
  uStack_ef = *(undefined8 *)((long)param_1 + 0xb1);
  uStack_f7 = (undefined7)*(undefined8 *)((long)param_1 + 0xa9);
  uStack_f0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa9) >> 0x38);
  uStack_158 = param_1[9];
  uStack_160 = param_1[8];
  uStack_148 = param_1[0xb];
  uStack_150 = param_1[10];
  uStack_138 = param_1[0xd];
  uStack_140 = param_1[0xc];
  uStack_128 = param_1[0xf];
  uStack_130 = param_1[0xe];
  uStack_198 = param_1[1];
  uStack_1a0 = *param_1;
  uStack_188 = param_1[3];
  uStack_190 = param_1[2];
  uStack_178 = param_1[5];
  uStack_180 = param_1[4];
  uStack_168 = param_1[7];
  uStack_170 = param_1[6];
  uStack_58 = param_2[0x11];
  uStack_60 = param_2[0x10];
  uStack_48 = param_2[0x13];
  uStack_50 = param_2[0x12];
  uStack_40 = param_2[0x14];
  uStack_38 = (undefined1)param_2[0x15];
  uStack_2f = *(undefined8 *)((long)param_2 + 0xb1);
  uStack_37 = (undefined7)*(undefined8 *)((long)param_2 + 0xa9);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0xa9) >> 0x38);
  uStack_98 = param_2[9];
  uStack_a0 = param_2[8];
  uStack_88 = param_2[0xb];
  uStack_90 = param_2[10];
  uStack_78 = param_2[0xd];
  uStack_80 = param_2[0xc];
  uStack_68 = param_2[0xf];
  uStack_70 = param_2[0xe];
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  FUN_1046ca004(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 1046c9c9c; end: 1046c9e27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046c9c9c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_30;
  long lStack_28;
  
  plVar3 = &lStack_30;
  lVar1 = 0;
  FUN_1047b5e44();
  lVar2 = lVar1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_11308efc8) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308efd0) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308efd8) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308efe0) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308efe8) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308eff0) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308eff8) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308f000) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308f008) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308f010) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308f018) = 0;
  *(undefined1 *)(lVar2 + _DAT_11308f020) = 0;
  *(undefined1 *)(lVar2 + _DAT_11308f028) = 0;
  *(undefined1 *)(lVar2 + _DAT_11308f030) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308f038) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308f040) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308f048) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308f050) = 0;
  *(undefined1 *)(lVar2 + _DAT_11308f058) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308f060) = 0;
  lStack_30 = lVar2;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  puRam00000001138151c0 = (undefined1 *)plVar3;
  return;
}



/* Entry: 1046c9e28; end: 1046c9e67; +[SCAdInsertionConfig identity] */

void FUN_1046c9e28(void)

{
  if (lRam000000011308da08 != -1) {
    _swift_once(0x11308da08,FUN_1046c9c9c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138151c0);
  return;
}



/* Entry: 1046c9e68; end: 1046c9f4b; -[SCAdInsertionConfig withMinSnapsBetweenAds:] */

void FUN_1046c9e68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  FUN_1047b5628(&uStack_1d0);
  uStack_108 = uStack_1c8;
  uStack_110 = uStack_1d0;
  uStack_f8 = uStack_1b8;
  uStack_100 = uStack_1c0;
  uStack_80 = uStack_140;
  uStack_88 = uStack_148;
  uStack_70 = uStack_130;
  uStack_78 = uStack_138;
  uStack_60 = uStack_120;
  uStack_68 = uStack_128;
  uStack_58 = uStack_118;
  uStack_c0 = uStack_180;
  uStack_c8 = uStack_188;
  uStack_b0 = uStack_170;
  uStack_b8 = uStack_178;
  uStack_a0 = uStack_160;
  uStack_a8 = uStack_168;
  uStack_90 = uStack_150;
  uStack_98 = uStack_158;
  uStack_e0 = uStack_1a0;
  uStack_e8 = uStack_1a8;
  uStack_d0 = uStack_190;
  uStack_d8 = uStack_198;
  uStack_f0 = param_3;
  _objc_allocWithZone(uVar1);
  puVar2 = &uStack_110;
  FUN_1047b45c0(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1046c9f4c; end: 1046ca003; -[SCAdInsertionConfig withMinTimeBetweenAdsSeconds:] */

void FUN_1046c9f4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_10f;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_4f;
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  FUN_1047b5628(&uStack_1c0);
  uStack_f8 = uStack_1b8;
  uStack_100 = uStack_1c0;
  uStack_e8 = uStack_1a8;
  uStack_f0 = uStack_1b0;
  uStack_e0 = uStack_1a0;
  uStack_68 = uStack_128;
  uStack_70 = uStack_130;
  uStack_60 = uStack_120;
  uStack_4f = uStack_10f;
  uStack_a8 = uStack_168;
  uStack_b0 = uStack_170;
  uStack_98 = uStack_158;
  uStack_a0 = uStack_160;
  uStack_88 = uStack_148;
  uStack_90 = uStack_150;
  uStack_78 = uStack_138;
  uStack_80 = uStack_140;
  uStack_c8 = uStack_188;
  uStack_d0 = uStack_190;
  uStack_b8 = uStack_178;
  uStack_c0 = uStack_180;
  uStack_d8 = param_1;
  _objc_allocWithZone(uVar1);
  puVar2 = &uStack_100;
  FUN_1047b45c0(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1046ca004; end: 1046ca1f3;  */

undefined1 FUN_1046ca004(long *param_1,long *param_2)

{
  ulong uVar1;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  if (((((((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
         ((double)param_1[2] == (double)param_2[2])) &&
        ((param_1[3] == param_2[3] && (param_1[4] == param_2[4])))) &&
       (((double)param_1[5] == (double)param_2[5] &&
        ((param_1[6] == param_2[6] && (param_1[7] == param_2[7])))))) &&
      ((double)param_1[8] == (double)param_2[8])) &&
     (((((double)param_1[9] == (double)param_2[9] && (param_1[10] == param_2[10])) &&
       (((*(byte *)(param_1 + 0xb) ^ *(byte *)(param_2 + 0xb)) & 1) == 0)) &&
      ((((*(byte *)((long)param_1 + 0x59) ^ *(byte *)((long)param_2 + 0x59)) & 1) == 0 &&
       (((*(byte *)((long)param_1 + 0x5a) ^ *(byte *)((long)param_2 + 0x5a)) & 1) == 0)))))) {
    if ((char)param_1[0xd] == '\x01') {
      if ((char)param_2[0xd] != '\x01') {
        return 0;
      }
    }
    else {
      if ((char)param_2[0xd] == '\x01') {
        return 0;
      }
      if (param_1[0xc] != param_2[0xc]) {
        return 0;
      }
    }
    if (((param_1[0xe] == param_2[0xe]) && (param_1[0xf] == param_2[0xf])) &&
       (((double)param_1[0x10] == (double)param_2[0x10] &&
        (((*(byte *)(param_1 + 0x11) ^ *(byte *)(param_2 + 0x11)) & 1) == 0)))) {
      if ((char)param_1[0x17] == '\x01') {
        if ((char)param_2[0x17] == '\x01') {
          return 1;
        }
      }
      else if ((char)param_2[0x17] != '\x01') {
        uVar1 = 0;
        lStack_60 = param_1[0x12];
        lStack_58 = param_1[0x13];
        lStack_48 = param_1[0x15];
        lStack_50 = param_1[0x14];
        lStack_40 = param_1[0x16];
        lStack_38 = param_2[0x12];
        lStack_30 = param_2[0x13];
        lStack_20 = param_2[0x15];
        lStack_28 = param_2[0x14];
        lStack_18 = param_2[0x16];
        FUN_1046c8fdc(&lStack_60,&lStack_38);
        if ((uVar1 & 1) != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Entry: 1046ca1f4; end: 1046ca1f7;  */

void FUN_1046ca1f4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308da10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2f0f0;
  _swift_getWitnessTable(&UNK_10dd2f0f0,&UNK_11079b728);
  puRam000000011308da10 = puVar1;
  return;
}



/* Entry: 1046ca1f8; end: 1046ca237;  */

void FUN_1046ca1f8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308da10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2f0f0;
  _swift_getWitnessTable(&UNK_10dd2f0f0,&UNK_11079b728);
  puRam000000011308da10 = puVar1;
  return;
}



/* Entry: 1046ca238; end: 1046ca263;  */

long FUN_1046ca238(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1046ca264; end: 1046ca33b;  */

int FUN_1046ca264(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0xb9) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 0x16)) {
    uVar1 = *(byte *)(param_1 + 0x16) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1046ca33c; end: 1046ca473; -[SCAdPod getBrandSafetyInventoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1046ca33c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + _DAT_11308f098);
  if (uVar5 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar4 = uVar5;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar4 == 0) {
    uVar2 = 0;
  }
  else if ((uVar5 & 0xc000000000000001) == 0) {
    if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046ca410);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(*(long *)(uVar5 + 0x20) + _DAT_1138152c0);
  }
  else {
    _objc_retain(param_1);
    lVar3 = 0;
    func_0x000102d09448(0,uVar5);
    _objc_release(param_1);
    uVar2 = *(undefined8 *)(lVar3 + _DAT_1138152c0);
    _swift_unknownObjectRelease(lVar3);
  }
  return uVar2;
}



/* Entry: 1046ca474; end: 1046ca4d7;  */

undefined8 * FUN_1046ca474(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 1046ca4d8; end: 1046ca51b;  */

undefined8 * FUN_1046ca4d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 1046ca51c; end: 1046ca5bb;  */

int FUN_1046ca51c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1046ca5bc; end: 1046ca767;  */

void FUN_1046ca5bc(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[2]);
  return;
}



/* Entry: 1046ca768; end: 1046ca7df;  */

undefined8 FUN_1046ca768(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x28))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1046ca7e0; end: 1046cae57;  */

void FUN_1046ca7e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined1 param_29,undefined4 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined1 param_35,undefined4 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 *param_46,undefined1 param_47,undefined4 param_48,
                  undefined8 *param_49,undefined8 param_50,undefined1 param_51,undefined4 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 *param_62,undefined8 *param_63,undefined1 param_64,
                  undefined4 param_65,undefined8 param_66,undefined8 param_67,undefined1 param_68)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 auStack_2b8 [352];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined8 uStack_a7;
  
  lVar9 = 0;
  func_0x000100b91d00();
  iVar6 = *(int *)(lVar9 + 0x4c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x5c));
  func_0x0001015410ac(&uStack_358);
  puVar1[0xd] = uStack_2f0;
  puVar1[0xc] = uStack_2f8;
  puVar1[0xf] = uStack_2e0;
  puVar1[0xe] = uStack_2e8;
  puVar1[0x11] = uStack_2d0;
  puVar1[0x10] = uStack_2d8;
  puVar1[0x13] = uStack_2c0;
  puVar1[0x12] = uStack_2c8;
  puVar1[5] = uStack_330;
  puVar1[4] = uStack_338;
  puVar1[7] = uStack_320;
  puVar1[6] = uStack_328;
  puVar1[9] = uStack_310;
  puVar1[8] = uStack_318;
  puVar1[0xb] = uStack_300;
  puVar1[10] = uStack_308;
  puVar1[1] = uStack_350;
  *puVar1 = uStack_358;
  puVar1[3] = uStack_340;
  puVar1[2] = uStack_348;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 100));
  puVar2[1] = 1;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[2] = 0;
  iVar7 = *(int *)(lVar9 + 0x68);
  func_0x000102d123c4(auStack_2b8);
  _memcpy((long)param_1 + (long)iVar7,auStack_2b8,0x160);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x7c));
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x80));
  puVar4[1] = 0xf000000000000000;
  *puVar4 = 0;
  iVar8 = *(int *)(lVar9 + 0x84);
  lVar10 = 0;
  func_0x000100b91fbc();
  (**(code **)(*(long *)(lVar10 + -8) + 0x38))((long)param_1 + (long)iVar8,1,1,lVar10);
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x94));
  func_0x0001015415ac(&uStack_158);
  puVar5[0x11] = uStack_d0;
  puVar5[0x10] = uStack_d8;
  puVar5[0x13] = uStack_c0;
  puVar5[0x12] = uStack_c8;
  puVar5[0x15] = CONCAT71(uStack_af,uStack_b0);
  puVar5[0x14] = uStack_b8;
  *(undefined8 *)((long)puVar5 + 0xb1) = uStack_a7;
  *(ulong *)((long)puVar5 + 0xa9) = CONCAT17(uStack_a8,uStack_af);
  puVar5[9] = uStack_110;
  puVar5[8] = uStack_118;
  puVar5[0xb] = uStack_100;
  puVar5[10] = uStack_108;
  puVar5[0xd] = uStack_f0;
  puVar5[0xc] = uStack_f8;
  puVar5[0xf] = uStack_e0;
  puVar5[0xe] = uStack_e8;
  puVar5[1] = uStack_150;
  *puVar5 = uStack_158;
  puVar5[3] = uStack_140;
  puVar5[2] = uStack_148;
  puVar5[5] = uStack_130;
  puVar5[4] = uStack_138;
  puVar5[7] = uStack_120;
  puVar5[6] = uStack_128;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_7;
  param_1[5] = param_8;
  param_1[6] = param_9;
  param_1[7] = param_10;
  param_1[8] = param_11;
  param_1[9] = param_12;
  param_1[10] = param_13;
  param_1[0xb] = param_14;
  param_1[0xd] = param_16;
  param_1[0xc] = param_15;
  param_1[0xf] = param_18;
  param_1[0xe] = param_17;
  param_1[0x10] = param_19;
  func_0x0001018cb0e8(param_20,(long)param_1 + (long)*(int *)(lVar9 + 0x3c));
  func_0x0001018cb0e8(param_21,(long)param_1 + (long)*(int *)(lVar9 + 0x40));
  func_0x0001018cb0e8(param_22,(long)param_1 + (long)*(int *)(lVar9 + 0x44));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x48)) = param_23;
  *(undefined8 *)((long)param_1 + (long)iVar6) = param_24;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x50)) = param_25;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x54)) = param_26;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x58)) = param_27;
  FUN_1046ca768(param_28,puVar1,0x11308da18,&UNK_10dd2f158);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x60)) = param_29;
  FUN_1046ca768(param_31,puVar2,0x112db3a20,&UNK_10dce2ac0);
  FUN_1046ca768(param_32,(long)param_1 + (long)iVar7,0x112db3a28,&UNK_10d95ddb0);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x6c));
  *puVar1 = param_33;
  puVar1[1] = param_34;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x70)) = param_35;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x74));
  *puVar1 = param_37;
  puVar1[1] = param_38;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x78));
  *puVar1 = param_39;
  puVar1[1] = param_40;
  *puVar3 = param_41;
  puVar3[1] = param_42;
  func_0x0001000b44c0(*puVar4,puVar4[1]);
  *puVar4 = param_43;
  puVar4[1] = param_44;
  FUN_1046ca768(param_45,(long)param_1 + (long)iVar8,0x112db39a8,&UNK_10d95dd90);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x88));
  uVar11 = *param_46;
  uVar13 = param_46[3];
  uVar12 = param_46[2];
  puVar1[1] = param_46[1];
  *puVar1 = uVar11;
  puVar1[3] = uVar13;
  puVar1[2] = uVar12;
  uVar13 = param_46[8];
  uVar12 = param_46[0xb];
  uVar11 = param_46[10];
  puVar1[9] = param_46[9];
  puVar1[8] = uVar13;
  puVar1[0xb] = uVar12;
  puVar1[10] = uVar11;
  uVar11 = param_46[4];
  uVar13 = param_46[7];
  uVar12 = param_46[6];
  puVar1[5] = param_46[5];
  puVar1[4] = uVar11;
  puVar1[7] = uVar13;
  puVar1[6] = uVar12;
  *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(param_46 + 0x14);
  uVar13 = param_46[0x10];
  uVar12 = param_46[0x13];
  uVar11 = param_46[0x12];
  puVar1[0x11] = param_46[0x11];
  puVar1[0x10] = uVar13;
  puVar1[0x13] = uVar12;
  puVar1[0x12] = uVar11;
  uVar11 = param_46[0xc];
  uVar13 = param_46[0xf];
  uVar12 = param_46[0xe];
  puVar1[0xd] = param_46[0xd];
  puVar1[0xc] = uVar11;
  puVar1[0xf] = uVar13;
  puVar1[0xe] = uVar12;
  *(undefined4 *)((long)param_1 + (long)*(int *)(lVar9 + 0x8c)) = param_6;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x90)) = param_47;
  uVar13 = param_49[4];
  uVar12 = param_49[7];
  uVar11 = param_49[6];
  puVar5[5] = param_49[5];
  puVar5[4] = uVar13;
  puVar5[7] = uVar12;
  puVar5[6] = uVar11;
  uVar13 = *param_49;
  uVar12 = param_49[3];
  uVar11 = param_49[2];
  puVar5[1] = param_49[1];
  *puVar5 = uVar13;
  puVar5[3] = uVar12;
  puVar5[2] = uVar11;
  uVar13 = param_49[0xc];
  uVar12 = param_49[0xf];
  uVar11 = param_49[0xe];
  puVar5[0xd] = param_49[0xd];
  puVar5[0xc] = uVar13;
  puVar5[0xf] = uVar12;
  puVar5[0xe] = uVar11;
  uVar13 = param_49[8];
  uVar12 = param_49[0xb];
  uVar11 = param_49[10];
  puVar5[9] = param_49[9];
  puVar5[8] = uVar13;
  puVar5[0xb] = uVar12;
  puVar5[10] = uVar11;
  uVar11 = *(undefined8 *)((long)param_49 + 0xa9);
  *(undefined8 *)((long)puVar5 + 0xb1) = *(undefined8 *)((long)param_49 + 0xb1);
  *(undefined8 *)((long)puVar5 + 0xa9) = uVar11;
  uVar11 = param_49[0x12];
  uVar13 = param_49[0x15];
  uVar12 = param_49[0x14];
  puVar5[0x13] = param_49[0x13];
  puVar5[0x12] = uVar11;
  puVar5[0x15] = uVar13;
  puVar5[0x14] = uVar12;
  uVar11 = param_49[0x10];
  puVar5[0x11] = param_49[0x11];
  puVar5[0x10] = uVar11;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x98)) = param_50;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x9c)) = param_51;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0xa0)) = param_53;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0xa4)) = param_54;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0xa8)) = param_55;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0xac));
  puVar1[1] = param_57;
  *puVar1 = param_56;
  puVar1[2] = param_58;
  puVar1[3] = param_59;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0xb0)) = param_60;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0xb4)) = param_61;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0xb8));
  uVar11 = *param_62;
  uVar13 = param_62[3];
  uVar12 = param_62[2];
  puVar1[1] = param_62[1];
  *puVar1 = uVar11;
  puVar1[3] = uVar13;
  puVar1[2] = uVar12;
  uVar13 = param_62[8];
  uVar12 = param_62[0xb];
  uVar11 = param_62[10];
  puVar1[9] = param_62[9];
  puVar1[8] = uVar13;
  puVar1[0xb] = uVar12;
  puVar1[10] = uVar11;
  uVar11 = param_62[4];
  uVar13 = param_62[7];
  uVar12 = param_62[6];
  puVar1[5] = param_62[5];
  puVar1[4] = uVar11;
  puVar1[7] = uVar13;
  puVar1[6] = uVar12;
  *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(param_62 + 0x14);
  uVar13 = param_62[0x10];
  uVar12 = param_62[0x13];
  uVar11 = param_62[0x12];
  puVar1[0x11] = param_62[0x11];
  puVar1[0x10] = uVar13;
  puVar1[0x13] = uVar12;
  puVar1[0x12] = uVar11;
  uVar11 = param_62[0xc];
  uVar13 = param_62[0xf];
  uVar12 = param_62[0xe];
  puVar1[0xd] = param_62[0xd];
  puVar1[0xc] = uVar11;
  puVar1[0xf] = uVar13;
  puVar1[0xe] = uVar12;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0xbc));
  uVar11 = param_63[0x10];
  uVar13 = param_63[0x13];
  uVar12 = param_63[0x12];
  puVar1[0x11] = param_63[0x11];
  puVar1[0x10] = uVar11;
  puVar1[0x13] = uVar13;
  puVar1[0x12] = uVar12;
  *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(param_63 + 0x14);
  uVar11 = param_63[8];
  uVar13 = param_63[0xb];
  uVar12 = param_63[10];
  puVar1[9] = param_63[9];
  puVar1[8] = uVar11;
  puVar1[0xb] = uVar13;
  puVar1[10] = uVar12;
  uVar13 = param_63[0xc];
  uVar12 = param_63[0xf];
  uVar11 = param_63[0xe];
  puVar1[0xd] = param_63[0xd];
  puVar1[0xc] = uVar13;
  puVar1[0xf] = uVar12;
  puVar1[0xe] = uVar11;
  uVar11 = *param_63;
  uVar13 = param_63[3];
  uVar12 = param_63[2];
  puVar1[1] = param_63[1];
  *puVar1 = uVar11;
  puVar1[3] = uVar13;
  puVar1[2] = uVar12;
  uVar13 = param_63[4];
  uVar12 = param_63[7];
  uVar11 = param_63[6];
  puVar1[5] = param_63[5];
  puVar1[4] = uVar13;
  puVar1[7] = uVar12;
  puVar1[6] = uVar11;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0xc0)) = param_64;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0xc4)) = param_66;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 200)) = param_67;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0xcc)) = param_68;
  return;
}



/* Entry: 1046cae58; end: 1046cae5b;  */

byte FUN_1046cae58(double *param_1,double *param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  double *pdVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  code *pcVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  double dVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  double dVar20;
  ulong uVar21;
  byte bVar22;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar23;
  long extraout_x8_01;
  undefined8 *puVar24;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *pcVar25;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  code *pcVar26;
  undefined8 *puVar27;
  long lVar28;
  long lVar29;
  undefined8 *puVar30;
  long lVar31;
  undefined1 auStack_1b10 [4];
  uint uStack_1b0c;
  code *pcStack_1b08;
  long lStack_1b00;
  code *pcStack_1af8;
  double *pdStack_1af0;
  double *pdStack_1ae8;
  long lStack_1ae0;
  long lStack_1ad8;
  ulong uStack_1ad0;
  long lStack_1ac8;
  undefined1 *puStack_1ac0;
  undefined8 *puStack_1ab8;
  ulong uStack_1ab0;
  long lStack_1aa8;
  undefined8 uStack_1aa0;
  undefined8 uStack_1a98;
  undefined8 uStack_1a90;
  undefined8 uStack_1a88;
  undefined8 uStack_1a80;
  undefined8 uStack_1a78;
  undefined8 uStack_1a70;
  undefined8 uStack_1a68;
  undefined8 uStack_1a60;
  undefined8 uStack_1a58;
  undefined8 uStack_1a50;
  undefined8 uStack_1a48;
  undefined8 uStack_1a40;
  undefined8 uStack_1a38;
  undefined8 uStack_1a30;
  undefined8 uStack_1a28;
  undefined8 uStack_1a20;
  undefined8 uStack_1a18;
  undefined8 uStack_1a10;
  undefined8 uStack_1a08;
  undefined8 uStack_1a00;
  undefined1 uStack_19f8;
  undefined7 uStack_19f7;
  undefined1 uStack_19f0;
  undefined8 uStack_19ef;
  undefined8 uStack_1940;
  undefined8 uStack_1938;
  undefined8 uStack_1930;
  undefined8 uStack_1928;
  undefined8 uStack_1920;
  undefined8 uStack_1918;
  undefined8 uStack_1910;
  undefined8 uStack_1908;
  undefined8 uStack_1900;
  undefined8 uStack_18f8;
  undefined8 uStack_18f0;
  undefined8 uStack_18e8;
  undefined8 uStack_18e0;
  undefined8 uStack_18d8;
  undefined8 uStack_18d0;
  undefined8 uStack_18c8;
  undefined8 uStack_18c0;
  undefined8 uStack_18b8;
  undefined8 uStack_18b0;
  undefined8 uStack_18a8;
  undefined8 uStack_18a0;
  undefined1 uStack_1898;
  undefined7 uStack_1897;
  undefined1 uStack_1890;
  undefined8 uStack_188f;
  undefined8 uStack_17e0;
  undefined8 uStack_17d8;
  undefined8 uStack_17d0;
  undefined8 uStack_17c8;
  undefined8 uStack_17c0;
  undefined8 uStack_17b8;
  undefined8 uStack_17b0;
  undefined8 uStack_17a8;
  undefined8 uStack_17a0;
  undefined8 uStack_1798;
  undefined8 uStack_1790;
  undefined8 uStack_1788;
  undefined8 uStack_1780;
  undefined8 uStack_1778;
  undefined8 uStack_1770;
  undefined8 uStack_1768;
  undefined8 uStack_1760;
  undefined8 uStack_1758;
  undefined8 uStack_1750;
  undefined8 uStack_1748;
  undefined8 uStack_1740;
  undefined1 uStack_1738;
  undefined7 uStack_1737;
  undefined1 uStack_1730;
  undefined8 uStack_172f;
  undefined1 auStack_1678 [168];
  undefined8 uStack_15d0;
  undefined8 uStack_15c8;
  undefined8 uStack_15c0;
  undefined8 uStack_15b8;
  undefined8 uStack_15b0;
  undefined8 uStack_15a8;
  undefined8 uStack_15a0;
  undefined8 uStack_1598;
  undefined8 uStack_1590;
  undefined8 uStack_1588;
  undefined8 uStack_1580;
  undefined8 uStack_1578;
  undefined8 uStack_1570;
  undefined8 uStack_1568;
  undefined8 uStack_1560;
  undefined8 uStack_1558;
  undefined8 uStack_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined1 uStack_1530;
  undefined8 uStack_1520;
  undefined8 uStack_1518;
  undefined8 uStack_1510;
  undefined8 uStack_1508;
  undefined8 uStack_1500;
  undefined8 uStack_14f8;
  undefined8 uStack_14f0;
  undefined8 uStack_14e8;
  undefined8 uStack_14e0;
  undefined8 uStack_14d8;
  undefined8 uStack_14d0;
  undefined8 uStack_14c8;
  undefined8 uStack_14c0;
  undefined8 uStack_14b8;
  undefined8 uStack_14b0;
  undefined8 uStack_14a8;
  undefined8 uStack_14a0;
  undefined8 uStack_1498;
  undefined8 uStack_1490;
  undefined8 uStack_1488;
  undefined1 uStack_1480;
  undefined8 uStack_1470;
  undefined8 uStack_1468;
  undefined8 uStack_1460;
  undefined8 uStack_1458;
  undefined8 uStack_1450;
  undefined8 uStack_1448;
  undefined8 uStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  undefined8 uStack_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  undefined8 uStack_13e8;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined1 uStack_13d0;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  undefined8 uStack_1370;
  undefined8 uStack_1368;
  undefined8 uStack_1360;
  undefined8 uStack_1358;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined8 uStack_1330;
  undefined8 uStack_1328;
  undefined1 uStack_1320;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  undefined8 uStack_12d0;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  undefined8 uStack_12b0;
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  undefined1 uStack_1270;
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined1 uStack_11c0;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 uStack_1170;
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  undefined8 uStack_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined8 uStack_1118;
  undefined1 uStack_1110;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined1 uStack_1060;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 uStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined1 uStack_ce8;
  undefined7 uStack_ce7;
  undefined1 uStack_ce0;
  undefined7 uStack_cdf;
  undefined1 uStack_cd8;
  undefined7 uStack_cd7;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined1 uStack_c28;
  undefined7 uStack_c27;
  undefined1 uStack_c20;
  undefined8 uStack_c1f;
  undefined1 auStack_ad0 [352];
  undefined1 auStack_970 [352];
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined1 uStack_630;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined1 uStack_580;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined1 uStack_4d0;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 uStack_420;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 uStack_370;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_200;
  long lStack_1f8;
  code *pcStack_1f0;
  byte bStack_1e8;
  byte bStack_1e7;
  byte bStack_1e6;
  code *pcStack_1e0;
  double *pdStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  byte bStack_1c0;
  byte bStack_1bf;
  byte bStack_1be;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = 0;
  func_0x000100b91fbc();
  lStack_1ad8 = *(long *)(lVar12 + -8);
  lStack_1ac8 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1ad8 + 0x40));
  lVar12 = 0x112db39a8;
  puStack_1ac0 = auStack_1b10 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar23 = (long)(auStack_1b10 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar12 = 0x112db3b70;
  uStack_1ad0 = uVar23;
  func_0x0001000285a8(0x112db3b70,&UNK_10d95def0);
  lStack_1ae0 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar24 = (undefined8 *)(uVar23 - extraout_x8_01);
  lVar12 = 0;
  puStack_1ab8 = puVar24;
  __s10Foundation4UUIDVMa();
  uStack_1ab0 = *(ulong *)(lVar12 + -8);
  lStack_1aa8 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uStack_1ab0 + 0x40));
  lVar28 = (long)puVar24 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  uVar23 = lVar28 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar29 = uVar23 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar31 = lVar29 - extraout_x12_00;
  lVar12 = 0x112d68090;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  puVar27 = (undefined8 *)(lVar31 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar30 = (undefined8 *)((long)puVar27 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar24 = (undefined8 *)((long)puVar30 - extraout_x12_02);
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     ((param_1[3] == param_2[3] && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))))) {
    dVar20 = param_1[5];
    if (((dVar20 == param_2[5]) && (param_1[6] == param_2[6])) ||
       (pdStack_1ae8 = param_1,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
       , param_1 = pdStack_1ae8, ((ulong)dVar20 & 1) != 0)) {
      dVar20 = param_2[8];
      if (param_1[8] == 0.0) {
        if (dVar20 == 0.0) goto LAB_1046d074c;
      }
      else if ((dVar20 != 0.0) &&
              (((dVar13 = param_1[7], dVar13 == param_2[7] && (param_1[8] == dVar20)) ||
               (pdStack_1ae8 = param_1,
               __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (), param_1 = pdStack_1ae8, ((ulong)dVar13 & 1) != 0)))) {
LAB_1046d074c:
        dVar20 = param_2[10];
        if (param_1[10] == 0.0) {
          if (dVar20 == 0.0) goto LAB_1046d0798;
        }
        else if ((dVar20 != 0.0) &&
                (((dVar13 = param_1[9], dVar13 == param_2[9] && (param_1[10] == dVar20)) ||
                 (pdStack_1ae8 = param_1,
                 __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                           (), param_1 = pdStack_1ae8, ((ulong)dVar13 & 1) != 0)))) {
LAB_1046d0798:
          dVar20 = param_2[0xc];
          if (param_1[0xc] == 0.0) {
            if (dVar20 == 0.0) goto LAB_1046d07e4;
          }
          else if ((dVar20 != 0.0) &&
                  (((dVar13 = param_1[0xb], dVar13 == param_2[0xb] && (param_1[0xc] == dVar20)) ||
                   (pdStack_1ae8 = param_1,
                   __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                             (), param_1 = pdStack_1ae8, ((ulong)dVar13 & 1) != 0)))) {
LAB_1046d07e4:
            dVar20 = param_2[0xe];
            if (param_1[0xe] == 0.0) {
              if (dVar20 == 0.0) goto LAB_1046d0830;
            }
            else if ((dVar20 != 0.0) &&
                    (((dVar13 = param_1[0xd], dVar13 == param_2[0xd] && (param_1[0xe] == dVar20)) ||
                     (pdStack_1ae8 = param_1,
                     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                               (), param_1 = pdStack_1ae8, ((ulong)dVar13 & 1) != 0)))) {
LAB_1046d0830:
              dVar20 = param_2[0x10];
              pdStack_1af0 = param_2;
              if (param_1[0x10] == 0.0) {
                if (dVar20 == 0.0) goto LAB_1046d0874;
              }
              else if ((dVar20 != 0.0) &&
                      (((dVar13 = param_1[0xf], dVar13 == param_2[0xf] && (param_1[0x10] == dVar20))
                       || (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                     (), ((ulong)dVar13 & 1) != 0)))) {
LAB_1046d0874:
                lVar14 = 0;
                func_0x000100b91d00();
                pcStack_1af8 = (code *)(long)*(int *)(lVar14 + 0x3c);
                pdStack_1ae8 = (double *)(long)*(int *)(lVar12 + 0x30);
                lStack_1b00 = lVar14;
                func_0x0001046d8c0c((long)param_1 + (long)pcStack_1af8,puVar24,0x112d3bc20,
                                    &UNK_10d904ef0);
                func_0x0001046d8c0c((long)pdStack_1af0 + (long)pcStack_1af8,
                                    (long)puVar24 + (long)pdStack_1ae8,0x112d3bc20,&UNK_10d904ef0);
                pcStack_1af8 = *(code **)(uStack_1ab0 + 0x30);
                puVar15 = puVar24;
                (*pcStack_1af8)(puVar24,1,lStack_1aa8);
                if ((int)puVar15 == 1) {
                  lVar31 = (long)puVar24 + (long)pdStack_1ae8;
                  (*pcStack_1af8)(lVar31,1,lStack_1aa8);
                  if ((int)lVar31 == 1) {
                    func_0x0001046d8cd4(puVar24,0x112d3bc20,&UNK_10d904ef0);
LAB_1046d0a28:
                    iVar10 = *(int *)(lStack_1b00 + 0x40);
                    iVar11 = *(int *)(lVar12 + 0x30);
                    func_0x0001046d8c0c((long)param_1 + (long)iVar10,puVar30,0x112d3bc20,
                                        &UNK_10d904ef0);
                    pcStack_1b08 = (code *)(long)iVar11;
                    func_0x0001046d8c0c((long)pdStack_1af0 + (long)iVar10,
                                        (code *)((long)puVar30 + (long)iVar11),0x112d3bc20,
                                        &UNK_10d904ef0);
                    lVar31 = lStack_1aa8;
                    pcVar26 = pcStack_1af8;
                    puVar24 = puVar30;
                    (*pcStack_1af8)(puVar30,1,lStack_1aa8);
                    if ((int)puVar24 == 1) {
                      pcVar25 = (code *)((long)puVar30 + (long)pcStack_1b08);
                      (*pcVar26)(pcVar25,1,lVar31);
                      if ((int)pcVar25 != 1) {
LAB_1046d0b1c:
                        uVar18 = 0x112d68090;
                        puVar19 = &UNK_10da24400;
                        puVar24 = puVar30;
                        goto LAB_1046d0cc0;
                      }
                      func_0x0001046d8cd4(puVar30,0x112d3bc20,&UNK_10d904ef0);
                    }
                    else {
                      pdStack_1ae8 = param_1;
                      func_0x0001046d8c0c(puVar30,lVar29,0x112d3bc20,&UNK_10d904ef0);
                      pcVar8 = pcStack_1b08;
                      pcVar25 = (code *)((long)puVar30 + (long)pcStack_1b08);
                      (*pcVar26)(pcVar25,1,lVar31);
                      uVar21 = uStack_1ab0;
                      if ((int)pcVar25 == 1) {
                        (**(code **)(uStack_1ab0 + 8))(lVar29,lVar31);
                        goto LAB_1046d0b1c;
                      }
                      (**(code **)(uStack_1ab0 + 0x20))
                                (lVar28,(code *)((long)puVar30 + (long)pcVar8),lVar31);
                      uVar18 = 0x112d68098;
                      func_0x0001046d8d44(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                                          PTR___s10Foundation4UUIDVSQAAMc_110350c50);
                      lVar14 = lVar29;
                      __sSQ2eeoiySbx_xtFZTj(lVar29,lVar28,lVar31,uVar18);
                      pcStack_1b08 = (code *)CONCAT44(pcStack_1b08._4_4_,(int)lVar14);
                      pcVar26 = *(code **)(uVar21 + 8);
                      (*pcVar26)(lVar28,lStack_1aa8);
                      (*pcVar26)(lVar29,lStack_1aa8);
                      lVar31 = lStack_1aa8;
                      func_0x0001046d8cd4(puVar30,0x112d3bc20,&UNK_10d904ef0);
                      param_1 = pdStack_1ae8;
                      if (((ulong)pcStack_1b08 & 1) == 0) goto LAB_1046d0cc4;
                    }
                    iVar10 = *(int *)(lStack_1b00 + 0x44);
                    lVar12 = (long)*(int *)(lVar12 + 0x30);
                    func_0x0001046d8c0c((long)param_1 + (long)iVar10,puVar27,0x112d3bc20,
                                        &UNK_10d904ef0);
                    func_0x0001046d8c0c((long)pdStack_1af0 + (long)iVar10,(long)puVar27 + lVar12,
                                        0x112d3bc20,&UNK_10d904ef0);
                    pcVar26 = pcStack_1af8;
                    puVar24 = puVar27;
                    (*pcStack_1af8)(puVar27,1,lVar31);
                    if ((int)puVar24 == 1) {
                      lVar12 = (long)puVar27 + lVar12;
                      (*pcVar26)(lVar12,1,lVar31);
                      if ((int)lVar12 != 1) {
LAB_1046d0cac:
                        uVar18 = 0x112d68090;
                        puVar19 = &UNK_10da24400;
                        puVar24 = puVar27;
                        goto LAB_1046d0cc0;
                      }
                      func_0x0001046d8cd4(puVar27,0x112d3bc20,&UNK_10d904ef0);
                    }
                    else {
                      func_0x0001046d8c0c(puVar27,uVar23,0x112d3bc20,&UNK_10d904ef0);
                      lVar29 = (long)puVar27 + lVar12;
                      (*pcVar26)(lVar29,1,lVar31);
                      uVar21 = uStack_1ab0;
                      if ((int)lVar29 == 1) {
                        (**(code **)(uStack_1ab0 + 8))(uVar23,lVar31);
                        goto LAB_1046d0cac;
                      }
                      (**(code **)(uStack_1ab0 + 0x20))(lVar28,(long)puVar27 + lVar12,lVar31);
                      uVar18 = 0x112d68098;
                      func_0x0001046d8d44(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                                          PTR___s10Foundation4UUIDVSQAAMc_110350c50);
                      uVar17 = uVar23;
                      __sSQ2eeoiySbx_xtFZTj(uVar23,lVar28,lVar31,uVar18);
                      pcVar26 = *(code **)(uVar21 + 8);
                      (*pcVar26)(lVar28,lVar31);
                      (*pcVar26)(uVar23,lVar31);
                      func_0x0001046d8cd4(puVar27,0x112d3bc20,&UNK_10d904ef0);
                      if ((uVar17 & 1) == 0) goto LAB_1046d0cc4;
                    }
                    if (*(int *)((long)param_1 + (long)*(int *)(lStack_1b00 + 0x48)) ==
                        *(int *)((long)pdStack_1af0 + (long)*(int *)(lStack_1b00 + 0x48))) {
                      uVar23 = *(ulong *)((long)param_1 + (long)*(int *)(lStack_1b00 + 0x4c));
                      lVar12 = *(long *)((long)pdStack_1af0 + (long)*(int *)(lStack_1b00 + 0x4c));
                      if (uVar23 == 0) {
                        if (lVar12 == 0) {
LAB_1046d0de4:
                          uVar23 = *(ulong *)((long)param_1 + (long)*(int *)(lStack_1b00 + 0x50));
                          lVar12 = *(long *)((long)pdStack_1af0 + (long)*(int *)(lStack_1b00 + 0x50)
                                            );
                          if (uVar23 == 0) {
                            if (lVar12 == 0) goto LAB_1046d0e10;
                          }
                          else if ((lVar12 != 0) && (func_0x00010142cfc4(), (uVar23 & 1) != 0)) {
LAB_1046d0e10:
                            uVar23 = *(ulong *)((long)param_1 + (long)*(int *)(lStack_1b00 + 0x54));
                            lVar12 = *(long *)((long)pdStack_1af0 +
                                              (long)*(int *)(lStack_1b00 + 0x54));
                            if (uVar23 == 0) {
                              if (lVar12 == 0) goto LAB_1046d0e3c;
                            }
                            else if ((lVar12 != 0) && (func_0x00010142cfc4(), (uVar23 & 1) != 0)) {
LAB_1046d0e3c:
                              uVar23 = *(ulong *)((long)param_1 + (long)*(int *)(lStack_1b00 + 0x58)
                                                 );
                              lVar12 = *(long *)((long)pdStack_1af0 +
                                                (long)*(int *)(lStack_1b00 + 0x58));
                              if (uVar23 == 0) {
                                if (lVar12 == 0) goto LAB_1046d0e68;
                              }
                              else if ((lVar12 != 0) && (func_0x00010142cfc4(), (uVar23 & 1) != 0))
                              {
LAB_1046d0e68:
                                puVar24 = (undefined8 *)
                                          ((long)param_1 + (long)*(int *)(lStack_1b00 + 0x5c));
                                puVar27 = (undefined8 *)
                                          ((long)pdStack_1af0 + (long)*(int *)(lStack_1b00 + 0x5c));
                                uStack_d28 = puVar24[0xd];
                                uStack_d30 = puVar24[0xc];
                                uStack_798 = puVar24[0xf];
                                uStack_7a0 = puVar24[0xe];
                                uStack_d38 = puVar24[0xb];
                                uStack_d40 = puVar24[10];
                                uStack_7a8 = puVar24[0xd];
                                uStack_7b0 = puVar24[0xc];
                                uStack_d18 = puVar24[0xf];
                                uStack_d20 = puVar24[0xe];
                                uStack_788 = puVar24[0x11];
                                uStack_790 = puVar24[0x10];
                                uStack_d08 = puVar24[0x11];
                                uStack_d10 = puVar24[0x10];
                                uStack_778 = puVar24[0x13];
                                uStack_780 = puVar24[0x12];
                                uStack_d68 = puVar24[5];
                                uStack_d70 = puVar24[4];
                                uStack_7d8 = puVar24[7];
                                uStack_7e0 = puVar24[6];
                                uStack_d78 = puVar24[3];
                                uStack_d80 = puVar24[2];
                                uStack_7e8 = puVar24[5];
                                uStack_7f0 = puVar24[4];
                                uStack_d58 = puVar24[7];
                                uStack_d60 = puVar24[6];
                                uStack_7c8 = puVar24[9];
                                uStack_7d0 = puVar24[8];
                                uStack_d48 = puVar24[9];
                                uStack_d50 = puVar24[8];
                                uStack_7b8 = puVar24[0xb];
                                uStack_7c0 = puVar24[10];
                                uStack_808 = puVar24[1];
                                uStack_810 = *puVar24;
                                uStack_7f8 = puVar24[3];
                                uStack_800 = puVar24[2];
                                uStack_d88 = puVar24[1];
                                uStack_d90 = *puVar24;
                                uStack_cf8 = puVar24[0x13];
                                uStack_d00 = puVar24[0x12];
                                uStack_c88 = puVar27[0xd];
                                uStack_c90 = puVar27[0xc];
                                uStack_6f8 = puVar27[0xf];
                                uStack_700 = puVar27[0xe];
                                uStack_c98 = puVar27[0xb];
                                uStack_ca0 = puVar27[10];
                                uStack_708 = puVar27[0xd];
                                uStack_710 = puVar27[0xc];
                                uStack_c78 = puVar27[0xf];
                                uStack_c80 = puVar27[0xe];
                                uStack_6e8 = puVar27[0x11];
                                uStack_6f0 = puVar27[0x10];
                                uStack_c68 = puVar27[0x11];
                                uStack_c70 = puVar27[0x10];
                                uStack_6d8 = puVar27[0x13];
                                uStack_6e0 = puVar27[0x12];
                                uStack_cc8 = puVar27[5];
                                uStack_cd0 = puVar27[4];
                                uStack_738 = puVar27[7];
                                uStack_740 = puVar27[6];
                                uStack_748 = puVar27[5];
                                uStack_750 = puVar27[4];
                                uStack_cb8 = puVar27[7];
                                uStack_cc0 = puVar27[6];
                                uStack_728 = puVar27[9];
                                uStack_730 = puVar27[8];
                                uStack_ca8 = puVar27[9];
                                uStack_cb0 = puVar27[8];
                                uStack_718 = puVar27[0xb];
                                uStack_720 = puVar27[10];
                                uStack_768 = puVar27[1];
                                uStack_770 = *puVar27;
                                uStack_758 = puVar27[3];
                                uStack_760 = puVar27[2];
                                uStack_cf0 = *puVar27;
                                uStack_c58 = puVar27[0x13];
                                uStack_c60 = puVar27[0x12];
                                uStack_ce8 = (undefined1)puVar27[1];
                                uStack_ce7 = (undefined7)((ulong)puVar27[1] >> 8);
                                uStack_cd8 = (undefined1)puVar27[3];
                                uStack_cd7 = (undefined7)((ulong)puVar27[3] >> 8);
                                uStack_ce0 = (undefined1)puVar27[2];
                                uStack_cdf = (undefined7)((ulong)puVar27[2] >> 8);
                                iVar10 = (int)&uStack_d90;
                                FUN_1046d2a38();
                                if (iVar10 == 1) {
                                  iVar10 = (int)&uStack_cf0;
                                  FUN_1046d2a38();
                                  if (iVar10 != 1) {
LAB_1046d10a4:
                                    _memcpy(&uStack_1050,&uStack_d90,0x140);
                                    func_0x0001046d8c0c(&uStack_810,&uStack_360,0x11308da18,
                                                        &UNK_10dd2f158);
                                    func_0x0001046d8c0c(&uStack_770,&uStack_360,0x11308da18,
                                                        &UNK_10dd2f158);
                                    uVar18 = 0x11308db78;
                                    puVar19 = &UNK_10dd2f2f8;
LAB_1046d110c:
                                    puVar24 = &uStack_1050;
                                    goto LAB_1046d0cc0;
                                  }
                                  uStack_fe8 = uStack_d28;
                                  uStack_ff0 = uStack_d30;
                                  uStack_fd8 = uStack_d18;
                                  uStack_fe0 = uStack_d20;
                                  uStack_fc8 = uStack_d08;
                                  uStack_fd0 = uStack_d10;
                                  uStack_fb8 = uStack_cf8;
                                  uStack_fc0 = uStack_d00;
                                  uStack_1028 = uStack_d68;
                                  uStack_1030 = uStack_d70;
                                  uStack_1018 = uStack_d58;
                                  uStack_1020 = uStack_d60;
                                  uStack_1008 = uStack_d48;
                                  uStack_1010 = uStack_d50;
                                  uStack_ff8 = uStack_d38;
                                  uStack_1000 = uStack_d40;
                                  uStack_1048 = uStack_d88;
                                  uStack_1050 = uStack_d90;
                                  uStack_1038 = uStack_d78;
                                  uStack_1040 = uStack_d80;
                                  func_0x0001046d8c0c(&uStack_810,&uStack_360,0x11308da18,
                                                      &UNK_10dd2f158);
                                  func_0x0001046d8c0c(&uStack_770,&uStack_360,0x11308da18,
                                                      &UNK_10dd2f158);
                                  func_0x0001046d8cd4(&uStack_1050,0x11308da18,&UNK_10dd2f158);
LAB_1046d1250:
                                  if (*(char *)((long)param_1 + (long)*(int *)(lStack_1b00 + 0x60))
                                      == *(char *)((long)pdStack_1af0 +
                                                  (long)*(int *)(lStack_1b00 + 0x60))) {
                                    puVar24 = (undefined8 *)
                                              ((long)param_1 + (long)*(int *)(lStack_1b00 + 100));
                                    plVar1 = (long *)((long)pdStack_1af0 +
                                                     (long)*(int *)(lStack_1b00 + 100));
                                    uVar18 = *puVar24;
                                    lVar28 = puVar24[1];
                                    pcVar26 = (code *)puVar24[2];
                                    uVar5 = puVar24[3];
                                    pcVar25 = (code *)puVar24[4];
                                    pdVar4 = (double *)*plVar1;
                                    uVar23 = plVar1[1];
                                    lVar12 = plVar1[2];
                                    lVar29 = plVar1[3];
                                    lVar31 = plVar1[4];
                                    lStack_1aa8 = lVar31;
                                    if (lVar28 == 1) {
                                      if (uVar23 == 1) {
                                        func_0x000103de4004(uVar18,1,pcVar26,uVar5,pcVar25);
                                        func_0x000103de4004(pdVar4,1,lVar12,lVar29,lStack_1aa8);
                                        func_0x000103de4018(uVar18,1,pcVar26,uVar5,pcVar25);
LAB_1046d1478:
                                        lVar12 = (long)*(int *)(lStack_1b00 + 0x68);
                                        _memcpy(auStack_ad0,(long)param_1 + lVar12,0x160);
                                        _memcpy(&uStack_d90,(long)param_1 + lVar12,0x160);
                                        pdVar4 = pdStack_1af0;
                                        _memcpy(auStack_970,(long)pdStack_1af0 + lVar12,0x160);
                                        _memcpy(&uStack_c30,(long)pdVar4 + lVar12,0x160);
                                        iVar10 = (int)&uStack_d90;
                                        func_0x000101542f6c();
                                        if (iVar10 == 1) {
                                          iVar10 = (int)&uStack_c30;
                                          func_0x000101542f6c();
                                          if (iVar10 != 1) {
LAB_1046d1584:
                                            _memcpy(&uStack_1050,&uStack_d90,0x2c0);
                                            func_0x0001046d8c0c(auStack_ad0,&uStack_360,0x112db3a28,
                                                                &UNK_10d95ddb0);
                                            func_0x0001046d8c0c(auStack_970,&uStack_360,0x112db3a28,
                                                                &UNK_10d95ddb0);
                                            uVar18 = 0x113010758;
                                            puVar19 = &UNK_10dc96580;
                                            goto LAB_1046d110c;
                                          }
                                          _memcpy(&uStack_1050,&uStack_d90,0x160);
                                          func_0x0001046d8c0c(auStack_ad0,&uStack_360,0x112db3a28,
                                                              &UNK_10d95ddb0);
                                          func_0x0001046d8c0c(auStack_970,&uStack_360,0x112db3a28,
                                                              &UNK_10d95ddb0);
                                          func_0x0001046d8cd4(&uStack_1050,0x112db3a28,
                                                              &UNK_10d95ddb0);
                                        }
                                        else {
                                          _memcpy(&uStack_17e0,&uStack_d90,0x160);
                                          iVar10 = (int)&uStack_c30;
                                          func_0x000101542f6c();
                                          if (iVar10 == 1) goto LAB_1046d1584;
                                          _memcpy(&uStack_1940,&uStack_c30,0x160);
                                          _memcpy(&uStack_1050,&uStack_c30,0x160);
                                          _memcpy(&uStack_360,&uStack_17e0,0x160);
                                          func_0x0001046d8c0c(auStack_ad0,&uStack_1aa0,0x112db3a28,
                                                              &UNK_10d95ddb0);
                                          func_0x0001046d8c0c(auStack_970,&uStack_1aa0,0x112db3a28,
                                                              &UNK_10d95ddb0);
                                          puVar24 = &uStack_360;
                                          FUN_10475c13c(puVar24,&uStack_1050);
                                          func_0x0001046d8cd4(&uStack_1940,0x112db3a28,
                                                              &UNK_10d95ddb0);
                                          func_0x0001046d8cd4(&uStack_d90,0x112db3a28,&UNK_10d95ddb0
                                                             );
                                          if (((ulong)puVar24 & 1) == 0) goto LAB_1046d0cc4;
                                        }
                                        puVar2 = (ulong *)((long)param_1 +
                                                          (long)*(int *)(lStack_1b00 + 0x6c));
                                        puVar24 = (undefined8 *)
                                                  ((long)pdVar4 + (long)*(int *)(lStack_1b00 + 0x6c)
                                                  );
                                        uVar23 = *puVar2;
                                        uVar21 = puVar2[1];
                                        uVar18 = *puVar24;
                                        uVar17 = puVar24[1];
                                        if (uVar21 >> 0x3c < 0xf) {
                                          if (0xe < uVar17 >> 0x3c) goto LAB_1046d1700;
                                          func_0x000100de78a0(uVar23,uVar21);
                                          func_0x000100de78a0(uVar18,uVar17);
                                          uVar16 = uVar23;
                                          func_0x000100e25fcc(uVar23,uVar21,uVar18,uVar17);
                                          func_0x0001000b44c0(uVar18,uVar17);
                                          func_0x0001000b44c0(uVar23,uVar21);
                                          if ((uVar16 & 1) != 0) goto LAB_1046d1780;
                                        }
                                        else if (uVar17 >> 0x3c < 0xf) {
LAB_1046d1700:
                                          func_0x000100de78a0(uVar23,uVar21);
                                          func_0x000100de78a0(uVar18,uVar17);
                                          func_0x0001000b44c0(uVar23,uVar21);
                                          func_0x0001000b44c0(uVar18,uVar17);
                                        }
                                        else {
                                          func_0x000100de78a0(uVar23,uVar21);
                                          func_0x000100de78a0(uVar18,uVar17);
                                          func_0x0001000b44c0(uVar23,uVar21);
LAB_1046d1780:
                                          if (*(char *)((long)param_1 +
                                                       (long)*(int *)(lStack_1b00 + 0x70)) ==
                                              *(char *)((long)pdVar4 +
                                                       (long)*(int *)(lStack_1b00 + 0x70))) {
                                            puVar2 = (ulong *)((long)param_1 +
                                                              (long)*(int *)(lStack_1b00 + 0x74));
                                            uVar23 = puVar2[1];
                                            puVar3 = (ulong *)((long)pdVar4 +
                                                              (long)*(int *)(lStack_1b00 + 0x74));
                                            uVar21 = puVar3[1];
                                            if (uVar23 == 0) {
                                              if (uVar21 == 0) goto LAB_1046d17e4;
                                            }
                                            else if ((uVar21 != 0) &&
                                                    (((uVar17 = *puVar2, uVar17 == *puVar3 &&
                                                      (uVar23 == uVar21)) ||
                                                     (
                                                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                                            (), (uVar17 & 1) != 0)))) {
LAB_1046d17e4:
                                              puVar2 = (ulong *)((long)param_1 +
                                                                (long)*(int *)(lStack_1b00 + 0x78));
                                              uVar23 = puVar2[1];
                                              puVar3 = (ulong *)((long)pdVar4 +
                                                                (long)*(int *)(lStack_1b00 + 0x78));
                                              uVar21 = puVar3[1];
                                              if (uVar23 == 0) {
                                                if (uVar21 == 0) goto LAB_1046d1830;
                                              }
                                              else if ((uVar21 != 0) &&
                                                      (((uVar17 = *puVar2, uVar17 == *puVar3 &&
                                                        (uVar23 == uVar21)) ||
                                                       (
                                                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                                            (), (uVar17 & 1) != 0)))) {
LAB_1046d1830:
                                                puVar2 = (ulong *)((long)param_1 +
                                                                  (long)*(int *)(lStack_1b00 + 0x7c)
                                                                  );
                                                uVar23 = puVar2[1];
                                                puVar3 = (ulong *)((long)pdVar4 +
                                                                  (long)*(int *)(lStack_1b00 + 0x7c)
                                                                  );
                                                uVar21 = puVar3[1];
                                                if (uVar23 == 0) {
                                                  if (uVar21 == 0) goto LAB_1046d187c;
                                                }
                                                else if ((uVar21 != 0) &&
                                                        (((uVar17 = *puVar2, uVar17 == *puVar3 &&
                                                          (uVar23 == uVar21)) ||
                                                         (
                                                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                                            (), (uVar17 & 1) != 0)))) {
LAB_1046d187c:
                                                  puVar2 = (ulong *)((long)param_1 +
                                                                    (long)*(int *)(lStack_1b00 +
                                                                                  0x80));
                                                  puVar24 = (undefined8 *)
                                                            ((long)pdVar4 +
                                                            (long)*(int *)(lStack_1b00 + 0x80));
                                                  uVar23 = *puVar2;
                                                  uVar21 = puVar2[1];
                                                  uVar18 = *puVar24;
                                                  uVar17 = puVar24[1];
                                                  if (uVar21 >> 0x3c < 0xf) {
                                                    if (0xe < uVar17 >> 0x3c) goto LAB_1046d1700;
                                                    func_0x000100de78a0(uVar23,uVar21);
                                                    func_0x000100de78a0(uVar18,uVar17);
                                                    uVar16 = uVar23;
                                                    func_0x000100e25fcc(uVar23,uVar21,uVar18,uVar17)
                                                    ;
                                                    func_0x0001000b44c0(uVar18,uVar17);
                                                    func_0x0001000b44c0(uVar23,uVar21);
                                                    if ((uVar16 & 1) != 0) goto LAB_1046d1928;
                                                  }
                                                  else {
                                                    if (uVar17 >> 0x3c < 0xf) goto LAB_1046d1700;
                                                    func_0x000100de78a0(uVar23,uVar21);
                                                    func_0x000100de78a0(uVar18,uVar17);
                                                    func_0x0001000b44c0(uVar23,uVar21);
LAB_1046d1928:
                                                    puVar24 = puStack_1ab8;
                                                    iVar10 = *(int *)(lStack_1b00 + 0x84);
                                                    lVar12 = (long)*(int *)(lStack_1ae0 + 0x30);
                                                    func_0x0001046d8c0c((long)param_1 + (long)iVar10
                                                                        ,puStack_1ab8,0x112db39a8,
                                                                        &UNK_10d95dd90);
                                                    func_0x0001046d8c0c((long)pdVar4 + (long)iVar10,
                                                                        (long)puVar24 + lVar12,
                                                                        0x112db39a8,&UNK_10d95dd90);
                                                    pcVar26 = *(code **)(lStack_1ad8 + 0x30);
                                                    (*pcVar26)(puVar24,1,lStack_1ac8);
                                                    puVar27 = puStack_1ab8;
                                                    if ((int)puVar24 == 1) {
                                                      lVar12 = (long)puStack_1ab8 + lVar12;
                                                      (*pcVar26)(lVar12,1,lStack_1ac8);
                                                      if ((int)lVar12 != 1) {
LAB_1046d1a14:
                                                        uVar18 = 0x112db3b70;
                                                        puVar19 = &UNK_10d95def0;
                                                        puVar24 = puStack_1ab8;
                                                        goto LAB_1046d0cc0;
                                                      }
                                                      func_0x0001046d8cd4(puStack_1ab8,0x112db39a8,
                                                                          &UNK_10d95dd90);
                                                    }
                                                    else {
                                                      func_0x0001046d8c0c(puStack_1ab8,uStack_1ad0,
                                                                          0x112db39a8,&UNK_10d95dd90
                                                                         );
                                                      lVar28 = (long)puVar27 + lVar12;
                                                      (*pcVar26)(lVar28,1,lStack_1ac8);
                                                      puVar24 = puStack_1ab8;
                                                      puVar9 = puStack_1ac0;
                                                      if ((int)lVar28 == 1) {
                                                        func_0x0001046d8c98(uStack_1ad0,
                                                                            &SUB_100b91fbc);
                                                        goto LAB_1046d1a14;
                                                      }
                                                      func_0x0001046d8c54((long)puStack_1ab8 +
                                                                          lVar12,puStack_1ac0,
                                                                          &SUB_100b91fbc);
                                                      uVar23 = uStack_1ad0;
                                                      uVar21 = uStack_1ad0;
                                                      FUN_104841c50(uStack_1ad0,puVar9);
                                                      func_0x0001046d8c98(puVar9,&SUB_100b91fbc);
                                                      func_0x0001046d8c98(uVar23,&SUB_100b91fbc);
                                                      func_0x0001046d8cd4(puVar24,0x112db39a8,
                                                                          &UNK_10d95dd90);
                                                      if ((uVar21 & 1) == 0) goto LAB_1046d0cc4;
                                                    }
                                                    puVar24 = (undefined8 *)
                                                              ((long)param_1 +
                                                              (long)*(int *)(lStack_1b00 + 0x88));
                                                    puVar27 = (undefined8 *)
                                                              ((long)pdVar4 +
                                                              (long)*(int *)(lStack_1b00 + 0x88));
                                                    iVar10 = (int)&uStack_ce8;
                                                    uStack_d18 = puVar24[0xf];
                                                    uStack_d20 = puVar24[0xe];
                                                    uStack_1128 = puVar24[0x11];
                                                    uStack_1130 = puVar24[0x10];
                                                    uStack_d08 = puVar24[0x11];
                                                    uStack_d10 = puVar24[0x10];
                                                    uStack_1118 = puVar24[0x13];
                                                    uStack_1120 = puVar24[0x12];
                                                    uStack_d58 = puVar24[7];
                                                    uStack_d60 = puVar24[6];
                                                    uStack_1168 = puVar24[9];
                                                    uStack_1170 = puVar24[8];
                                                    uStack_d48 = puVar24[9];
                                                    uStack_d50 = puVar24[8];
                                                    uStack_1158 = puVar24[0xb];
                                                    uStack_1160 = puVar24[10];
                                                    uStack_d38 = puVar24[0xb];
                                                    uStack_d40 = puVar24[10];
                                                    uStack_1148 = puVar24[0xd];
                                                    uStack_1150 = puVar24[0xc];
                                                    uStack_d28 = puVar24[0xd];
                                                    uStack_d30 = puVar24[0xc];
                                                    uStack_1138 = puVar24[0xf];
                                                    uStack_1140 = puVar24[0xe];
                                                    uStack_11a8 = puVar24[1];
                                                    uStack_11b0 = *puVar24;
                                                    uStack_1198 = puVar24[3];
                                                    uStack_11a0 = puVar24[2];
                                                    uStack_1188 = puVar24[5];
                                                    uStack_1190 = puVar24[4];
                                                    uStack_1178 = puVar24[7];
                                                    uStack_1180 = puVar24[6];
                                                    uStack_d88 = puVar24[1];
                                                    uStack_d90 = *puVar24;
                                                    uStack_d78 = puVar24[3];
                                                    uStack_d80 = puVar24[2];
                                                    uStack_d68 = puVar24[5];
                                                    uStack_d70 = puVar24[4];
                                                    uStack_cf8 = puVar24[0x13];
                                                    uStack_d00 = puVar24[0x12];
                                                    uStack_c70 = puVar27[0xf];
                                                    uStack_c78 = puVar27[0xe];
                                                    uStack_1078 = puVar27[0x11];
                                                    uStack_1080 = puVar27[0x10];
                                                    uStack_c60 = puVar27[0x11];
                                                    uStack_c68 = puVar27[0x10];
                                                    uStack_1068 = puVar27[0x13];
                                                    uStack_1070 = puVar27[0x12];
                                                    uStack_cb0 = puVar27[7];
                                                    uStack_cb8 = puVar27[6];
                                                    uStack_10b8 = puVar27[9];
                                                    uStack_10c0 = puVar27[8];
                                                    uStack_ca0 = puVar27[9];
                                                    uStack_ca8 = puVar27[8];
                                                    uStack_10a8 = puVar27[0xb];
                                                    uStack_10b0 = puVar27[10];
                                                    uStack_c80 = puVar27[0xd];
                                                    uStack_c88 = puVar27[0xc];
                                                    uStack_1088 = puVar27[0xf];
                                                    uStack_1090 = puVar27[0xe];
                                                    uStack_c90 = puVar27[0xb];
                                                    uStack_c98 = puVar27[10];
                                                    uStack_1098 = puVar27[0xd];
                                                    uStack_10a0 = puVar27[0xc];
                                                    uStack_10f8 = puVar27[1];
                                                    uStack_1100 = *puVar27;
                                                    uStack_10e8 = puVar27[3];
                                                    uStack_10f0 = puVar27[2];
                                                    uStack_10d8 = puVar27[5];
                                                    uStack_10e0 = puVar27[4];
                                                    uStack_10c8 = puVar27[7];
                                                    uStack_10d0 = puVar27[6];
                                                    uStack_cd0 = puVar27[3];
                                                    uStack_cc0 = puVar27[5];
                                                    uStack_cc8 = puVar27[4];
                                                    uStack_c50 = puVar27[0x13];
                                                    uStack_c58 = puVar27[0x12];
                                                    uStack_ce0 = (undefined1)puVar27[1];
                                                    uStack_cdf = (undefined7)
                                                                 ((ulong)puVar27[1] >> 8);
                                                    uStack_ce8 = (undefined1)*puVar27;
                                                    uStack_ce7 = (undefined7)((ulong)*puVar27 >> 8);
                                                    uStack_cd8 = (undefined1)puVar27[2];
                                                    uStack_cd7 = (undefined7)
                                                                 ((ulong)puVar27[2] >> 8);
                                                    uStack_1110 = *(undefined1 *)(puVar24 + 0x14);
                                                    uStack_cf0 = CONCAT71(uStack_cf0._1_7_,
                                                                          *(undefined1 *)
                                                                           (puVar24 + 0x14));
                                                    uStack_1060 = *(undefined1 *)(puVar27 + 0x14);
                                                    uStack_c48 = CONCAT71(uStack_c48._1_7_,
                                                                          *(undefined1 *)
                                                                           (puVar27 + 0x14));
                                                    iVar11 = (int)&uStack_d90;
                                                    func_0x000100dbd9b0();
                                                    if (iVar11 == 1) {
                                                      func_0x000100dbd9b0();
                                                      if (iVar10 == 1) {
                                                        uStack_1758 = uStack_d08;
                                                        uStack_1760 = uStack_d10;
                                                        uStack_1748 = uStack_cf8;
                                                        uStack_1750 = uStack_d00;
                                                        uStack_1740 = CONCAT71(uStack_1740._1_7_,
                                                                               (undefined1)
                                                                               uStack_cf0);
                                                        uStack_1798 = uStack_d48;
                                                        uStack_17a0 = uStack_d50;
                                                        uStack_1788 = uStack_d38;
                                                        uStack_1790 = uStack_d40;
                                                        uStack_1778 = uStack_d28;
                                                        uStack_1780 = uStack_d30;
                                                        uStack_1768 = uStack_d18;
                                                        uStack_1770 = uStack_d20;
                                                        uStack_17d8 = uStack_d88;
                                                        uStack_17e0 = uStack_d90;
                                                        uStack_17c8 = uStack_d78;
                                                        uStack_17d0 = uStack_d80;
                                                        uStack_17b8 = uStack_d68;
                                                        uStack_17c0 = uStack_d70;
                                                        uStack_17a8 = uStack_d58;
                                                        uStack_17b0 = uStack_d60;
                                                        func_0x0001046d8c0c(&uStack_11b0,
                                                                            &uStack_1940,0x112e54be0
                                                                            ,&UNK_10da56ca0);
                                                        func_0x0001046d8c0c(&uStack_1100,
                                                                            &uStack_1940,0x112e54be0
                                                                            ,&UNK_10da56ca0);
                                                        func_0x0001046d8cd4(&uStack_17e0,0x112e54be0
                                                                            ,&UNK_10da56ca0);
                                                        goto LAB_1046d1e60;
                                                      }
LAB_1046d1cc8:
                                                      _memcpy(&uStack_17e0,&uStack_d90,0x149);
                                                      func_0x0001046d8c0c(&uStack_11b0,&uStack_1940,
                                                                          0x112e54be0,&UNK_10da56ca0
                                                                         );
                                                      puVar24 = &uStack_1100;
                                                      puVar27 = &uStack_1940;
LAB_1046d1d04:
                                                      func_0x0001046d8c0c(puVar24,puVar27,
                                                                          0x112e54be0,&UNK_10da56ca0
                                                                         );
                                                      uVar18 = 0x11308db80;
                                                      puVar19 = &UNK_10dd2f300;
                                                      puVar24 = &uStack_17e0;
                                                      goto LAB_1046d0cc0;
                                                    }
                                                    uStack_1758 = uStack_d08;
                                                    uStack_1760 = uStack_d10;
                                                    uStack_1748 = uStack_cf8;
                                                    uStack_1750 = uStack_d00;
                                                    uStack_1740 = CONCAT71(uStack_1740._1_7_,
                                                                           (undefined1)uStack_cf0);
                                                    uStack_1798 = uStack_d48;
                                                    uStack_17a0 = uStack_d50;
                                                    uStack_1788 = uStack_d38;
                                                    uStack_1790 = uStack_d40;
                                                    uStack_1778 = uStack_d28;
                                                    uStack_1780 = uStack_d30;
                                                    uStack_1768 = uStack_d18;
                                                    uStack_1770 = uStack_d20;
                                                    uStack_17d8 = uStack_d88;
                                                    uStack_17e0 = uStack_d90;
                                                    uStack_17c8 = uStack_d78;
                                                    uStack_17d0 = uStack_d80;
                                                    uStack_17b8 = uStack_d68;
                                                    uStack_17c0 = uStack_d70;
                                                    uStack_17a8 = uStack_d58;
                                                    uStack_17b0 = uStack_d60;
                                                    func_0x000100dbd9b0();
                                                    if (iVar10 == 1) goto LAB_1046d1cc8;
                                                    uStack_18b8 = uStack_c60;
                                                    uStack_18c0 = uStack_c68;
                                                    uStack_18a8 = uStack_c50;
                                                    uStack_18b0 = uStack_c58;
                                                    uStack_18f8 = uStack_ca0;
                                                    uStack_1900 = uStack_ca8;
                                                    uStack_18e8 = uStack_c90;
                                                    uStack_18f0 = uStack_c98;
                                                    uStack_18d8 = uStack_c80;
                                                    uStack_18e0 = uStack_c88;
                                                    uStack_18c8 = uStack_c70;
                                                    uStack_18d0 = uStack_c78;
                                                    uStack_1938 = CONCAT71(uStack_cdf,uStack_ce0);
                                                    uStack_1940 = CONCAT71(uStack_ce7,uStack_ce8);
                                                    uStack_1930 = CONCAT71(uStack_cd7,uStack_cd8);
                                                    uStack_1928 = uStack_cd0;
                                                    uStack_408 = CONCAT71(uStack_cdf,uStack_ce0);
                                                    uStack_410 = CONCAT71(uStack_ce7,uStack_ce8);
                                                    uStack_400 = CONCAT71(uStack_cd7,uStack_cd8);
                                                    uStack_1918 = uStack_cc0;
                                                    uStack_1920 = uStack_cc8;
                                                    uStack_1908 = uStack_cb0;
                                                    uStack_1910 = uStack_cb8;
                                                    uStack_388 = uStack_c60;
                                                    uStack_390 = uStack_c68;
                                                    uStack_378 = uStack_c50;
                                                    uStack_380 = uStack_c58;
                                                    uStack_3c8 = uStack_ca0;
                                                    uStack_3d0 = uStack_ca8;
                                                    uStack_3b8 = uStack_c90;
                                                    uStack_3c0 = uStack_c98;
                                                    uStack_398 = uStack_c70;
                                                    uStack_3a0 = uStack_c78;
                                                    uStack_3a8 = uStack_c80;
                                                    uStack_3b0 = uStack_c88;
                                                    uStack_3f8 = uStack_cd0;
                                                    uStack_18a0 = CONCAT71(uStack_18a0._1_7_,
                                                                           (undefined1)uStack_c48);
                                                    uStack_370 = (undefined1)uStack_c48;
                                                    uStack_3d8 = uStack_cb0;
                                                    uStack_3e0 = uStack_cb8;
                                                    uStack_3e8 = uStack_cc0;
                                                    uStack_3f0 = uStack_cc8;
                                                    uStack_438 = uStack_1758;
                                                    uStack_440 = uStack_1760;
                                                    uStack_428 = uStack_1748;
                                                    uStack_430 = uStack_1750;
                                                    uStack_420 = (undefined1)uStack_1740;
                                                    uStack_478 = uStack_1798;
                                                    uStack_480 = uStack_17a0;
                                                    uStack_468 = uStack_1788;
                                                    uStack_470 = uStack_1790;
                                                    uStack_448 = uStack_1768;
                                                    uStack_450 = uStack_1770;
                                                    uStack_458 = uStack_1778;
                                                    uStack_460 = uStack_1780;
                                                    uStack_4b8 = uStack_17d8;
                                                    uStack_4c0 = uStack_17e0;
                                                    uStack_4a8 = uStack_17c8;
                                                    uStack_4b0 = uStack_17d0;
                                                    uStack_488 = uStack_17a8;
                                                    uStack_490 = uStack_17b0;
                                                    uStack_498 = uStack_17b8;
                                                    uStack_4a0 = uStack_17c0;
                                                    func_0x0001046d8c0c(&uStack_11b0,&uStack_1aa0,
                                                                        0x112e54be0,&UNK_10da56ca0);
                                                    func_0x0001046d8c0c(&uStack_1100,&uStack_1aa0,
                                                                        0x112e54be0,&UNK_10da56ca0);
                                                    puVar24 = &uStack_4c0;
                                                    FUN_1046c2028(puVar24,&uStack_410);
                                                    func_0x0001046d8cd4(&uStack_1940,0x112e54be0,
                                                                        &UNK_10da56ca0);
                                                    func_0x0001046d8cd4(&uStack_d90,0x112e54be0,
                                                                        &UNK_10da56ca0);
                                                    if (((ulong)puVar24 & 1) == 0)
                                                    goto LAB_1046d0cc4;
LAB_1046d1e60:
                                                    if ((*(float *)((long)param_1 +
                                                                   (long)*(int *)(lStack_1b00 + 0x8c
                                                                                 )) ==
                                                         *(float *)((long)pdVar4 +
                                                                   (long)*(int *)(lStack_1b00 + 0x8c
                                                                                 ))) &&
                                                       (*(char *)((long)param_1 +
                                                                 (long)*(int *)(lStack_1b00 + 0x90))
                                                        == *(char *)((long)pdVar4 +
                                                                    (long)*(int *)(lStack_1b00 +
                                                                                  0x90)))) {
                                                      puVar24 = (undefined8 *)
                                                                ((long)param_1 +
                                                                (long)*(int *)(lStack_1b00 + 0x94));
                                                      puVar27 = (undefined8 *)
                                                                ((long)pdVar4 +
                                                                (long)*(int *)(lStack_1b00 + 0x94));
                                                      iVar10 = (int)&uStack_cd0;
                                                      uStack_d08 = puVar24[0x11];
                                                      uStack_d10 = puVar24[0x10];
                                                      uStack_cf8 = puVar24[0x13];
                                                      uStack_d00 = puVar24[0x12];
                                                      uStack_cf0 = puVar24[0x14];
                                                      uStack_cc8 = puVar27[1];
                                                      uStack_cd0 = *puVar27;
                                                      uStack_cb8 = puVar27[3];
                                                      uStack_cc0 = puVar27[2];
                                                      uStack_ce8 = (undefined1)puVar24[0x15];
                                                      uStack_cdf = (undefined7)
                                                                   *(undefined8 *)
                                                                    ((long)puVar24 + 0xb1);
                                                      uStack_cd8 = (undefined1)
                                                                   ((ulong)*(undefined8 *)
                                                                            ((long)puVar24 + 0xb1)
                                                                   >> 0x38);
                                                      uStack_ce7 = (undefined7)
                                                                   *(undefined8 *)
                                                                    ((long)puVar24 + 0xa9);
                                                      uStack_ce0 = (undefined1)
                                                                   ((ulong)*(undefined8 *)
                                                                            ((long)puVar24 + 0xa9)
                                                                   >> 0x38);
                                                      uStack_d48 = puVar24[9];
                                                      uStack_d50 = puVar24[8];
                                                      uStack_d38 = puVar24[0xb];
                                                      uStack_d40 = puVar24[10];
                                                      uStack_d28 = puVar24[0xd];
                                                      uStack_d30 = puVar24[0xc];
                                                      uStack_d18 = puVar24[0xf];
                                                      uStack_d20 = puVar24[0xe];
                                                      uStack_d88 = puVar24[1];
                                                      uStack_d90 = *puVar24;
                                                      uStack_d78 = puVar24[3];
                                                      uStack_d80 = puVar24[2];
                                                      uStack_d68 = puVar24[5];
                                                      uStack_d70 = puVar24[4];
                                                      uStack_d58 = puVar24[7];
                                                      uStack_d60 = puVar24[6];
                                                      uStack_c1f = *(undefined8 *)
                                                                    ((long)puVar27 + 0xb1);
                                                      uStack_c20 = (undefined1)
                                                                   ((ulong)*(undefined8 *)
                                                                            ((long)puVar27 + 0xa9)
                                                                   >> 0x38);
                                                      uStack_c48 = puVar27[0x11];
                                                      uStack_c50 = puVar27[0x10];
                                                      uStack_c38 = puVar27[0x13];
                                                      uStack_c40 = puVar27[0x12];
                                                      uStack_c30 = puVar27[0x14];
                                                      uStack_c28 = (undefined1)puVar27[0x15];
                                                      uStack_c27 = (undefined7)
                                                                   ((ulong)puVar27[0x15] >> 8);
                                                      uStack_c88 = puVar27[9];
                                                      uStack_c90 = puVar27[8];
                                                      uStack_c78 = puVar27[0xb];
                                                      uStack_c80 = puVar27[10];
                                                      uStack_c68 = puVar27[0xd];
                                                      uStack_c70 = puVar27[0xc];
                                                      uStack_c58 = puVar27[0xf];
                                                      uStack_c60 = puVar27[0xe];
                                                      uStack_ca8 = puVar27[5];
                                                      uStack_cb0 = puVar27[4];
                                                      uStack_c98 = puVar27[7];
                                                      uStack_ca0 = puVar27[6];
                                                      iVar11 = (int)&uStack_d90;
                                                      func_0x000101541310();
                                                      if (iVar11 == 1) {
                                                        func_0x000101541310();
                                                        if (iVar10 == 1) {
LAB_1046d204c:
                                                          if ((((*(int *)((long)param_1 +
                                                                         (long)*(int *)(lStack_1b00
                                                                                       + 0x98)) ==
                                                                 *(int *)((long)pdVar4 +
                                                                         (long)*(int *)(lStack_1b00
                                                                                       + 0x98))) &&
                                                               (*(char *)((long)param_1 +
                                                                         (long)*(int *)(lStack_1b00
                                                                                       + 0x9c)) ==
                                                                *(char *)((long)pdVar4 +
                                                                         (long)*(int *)(lStack_1b00
                                                                                       + 0x9c)))) &&
                                                              (*(long *)((long)param_1 +
                                                                        (long)*(int *)(lStack_1b00 +
                                                                                      0xa0)) ==
                                                               *(long *)((long)pdVar4 +
                                                                        (long)*(int *)(lStack_1b00 +
                                                                                      0xa0)))) &&
                                                             ((*(int *)((long)param_1 +
                                                                       (long)*(int *)(lStack_1b00 +
                                                                                     0xa4)) ==
                                                               *(int *)((long)pdVar4 +
                                                                       (long)*(int *)(lStack_1b00 +
                                                                                     0xa4)) &&
                                                              (*(int *)((long)param_1 +
                                                                       (long)*(int *)(lStack_1b00 +
                                                                                     0xa8)) ==
                                                               *(int *)((long)pdVar4 +
                                                                       (long)*(int *)(lStack_1b00 +
                                                                                     0xa8)))))) {
                                                            plVar1 = (long *)((long)param_1 +
                                                                             (long)*(int *)(
                                                  lStack_1b00 + 0xac));
                                                  puVar27 = (undefined8 *)*plVar1;
                                                  lVar28 = plVar1[1];
                                                  lVar12 = plVar1[2];
                                                  lVar29 = plVar1[3];
                                                  puVar24 = (undefined8 *)
                                                            ((long)pdVar4 +
                                                            (long)*(int *)(lStack_1b00 + 0xac));
                                                  uVar18 = *puVar24;
                                                  lVar31 = puVar24[1];
                                                  uVar5 = puVar24[2];
                                                  uVar6 = puVar24[3];
                                                  lStack_1aa8 = lVar29;
                                                  if (lVar28 == 0) {
                                                    if (lVar31 != 0) goto LAB_1046d2184;
LAB_1046d21e4:
                                                    if ((*(int *)((long)param_1 +
                                                                 (long)*(int *)(lStack_1b00 + 0xb0))
                                                         == *(int *)((long)pdVar4 +
                                                                    (long)*(int *)(lStack_1b00 +
                                                                                  0xb0))) &&
                                                       (*(int *)((long)param_1 +
                                                                (long)*(int *)(lStack_1b00 + 0xb4))
                                                        == *(int *)((long)pdVar4 +
                                                                   (long)*(int *)(lStack_1b00 + 0xb4
                                                                                 )))) {
                                                      puVar24 = (undefined8 *)
                                                                ((long)param_1 +
                                                                (long)*(int *)(lStack_1b00 + 0xb8));
                                                      puVar27 = (undefined8 *)
                                                                ((long)pdVar4 +
                                                                (long)*(int *)(lStack_1b00 + 0xb8));
                                                      iVar10 = (int)&uStack_ce8;
                                                      uStack_d18 = puVar24[0xf];
                                                      uStack_d20 = puVar24[0xe];
                                                      uStack_1288 = puVar24[0x11];
                                                      uStack_1290 = puVar24[0x10];
                                                      uStack_d08 = puVar24[0x11];
                                                      uStack_d10 = puVar24[0x10];
                                                      uStack_1278 = puVar24[0x13];
                                                      uStack_1280 = puVar24[0x12];
                                                      uStack_d58 = puVar24[7];
                                                      uStack_d60 = puVar24[6];
                                                      uStack_12c8 = puVar24[9];
                                                      uStack_12d0 = puVar24[8];
                                                      uStack_d48 = puVar24[9];
                                                      uStack_d50 = puVar24[8];
                                                      uStack_12b8 = puVar24[0xb];
                                                      uStack_12c0 = puVar24[10];
                                                      uStack_d38 = puVar24[0xb];
                                                      uStack_d40 = puVar24[10];
                                                      uStack_12a8 = puVar24[0xd];
                                                      uStack_12b0 = puVar24[0xc];
                                                      uStack_d28 = puVar24[0xd];
                                                      uStack_d30 = puVar24[0xc];
                                                      uStack_1298 = puVar24[0xf];
                                                      uStack_12a0 = puVar24[0xe];
                                                      uStack_1308 = puVar24[1];
                                                      uStack_1310 = *puVar24;
                                                      uStack_12f8 = puVar24[3];
                                                      uStack_1300 = puVar24[2];
                                                      uStack_12e8 = puVar24[5];
                                                      uStack_12f0 = puVar24[4];
                                                      uStack_12d8 = puVar24[7];
                                                      uStack_12e0 = puVar24[6];
                                                      uStack_d88 = puVar24[1];
                                                      uStack_d90 = *puVar24;
                                                      uStack_d78 = puVar24[3];
                                                      uStack_d80 = puVar24[2];
                                                      uStack_d68 = puVar24[5];
                                                      uStack_d70 = puVar24[4];
                                                      uStack_cf8 = puVar24[0x13];
                                                      uStack_d00 = puVar24[0x12];
                                                      uStack_c70 = puVar27[0xf];
                                                      uStack_c78 = puVar27[0xe];
                                                      uStack_11d8 = puVar27[0x11];
                                                      uStack_11e0 = puVar27[0x10];
                                                      uStack_c60 = puVar27[0x11];
                                                      uStack_c68 = puVar27[0x10];
                                                      uStack_11c8 = puVar27[0x13];
                                                      uStack_11d0 = puVar27[0x12];
                                                      uStack_cb0 = puVar27[7];
                                                      uStack_cb8 = puVar27[6];
                                                      uStack_1218 = puVar27[9];
                                                      uStack_1220 = puVar27[8];
                                                      uStack_ca0 = puVar27[9];
                                                      uStack_ca8 = puVar27[8];
                                                      uStack_1208 = puVar27[0xb];
                                                      uStack_1210 = puVar27[10];
                                                      uStack_c80 = puVar27[0xd];
                                                      uStack_c88 = puVar27[0xc];
                                                      uStack_11e8 = puVar27[0xf];
                                                      uStack_11f0 = puVar27[0xe];
                                                      uStack_c90 = puVar27[0xb];
                                                      uStack_c98 = puVar27[10];
                                                      uStack_11f8 = puVar27[0xd];
                                                      uStack_1200 = puVar27[0xc];
                                                      uStack_1258 = puVar27[1];
                                                      uStack_1260 = *puVar27;
                                                      uStack_1248 = puVar27[3];
                                                      uStack_1250 = puVar27[2];
                                                      uStack_1238 = puVar27[5];
                                                      uStack_1240 = puVar27[4];
                                                      uStack_1228 = puVar27[7];
                                                      uStack_1230 = puVar27[6];
                                                      uStack_cd0 = puVar27[3];
                                                      uStack_cc0 = puVar27[5];
                                                      uStack_cc8 = puVar27[4];
                                                      uStack_c50 = puVar27[0x13];
                                                      uStack_c58 = puVar27[0x12];
                                                      uStack_ce0 = (undefined1)puVar27[1];
                                                      uStack_cdf = (undefined7)
                                                                   ((ulong)puVar27[1] >> 8);
                                                      uStack_ce8 = (undefined1)*puVar27;
                                                      uStack_ce7 = (undefined7)
                                                                   ((ulong)*puVar27 >> 8);
                                                      uStack_cd8 = (undefined1)puVar27[2];
                                                      uStack_cd7 = (undefined7)
                                                                   ((ulong)puVar27[2] >> 8);
                                                      uStack_1270 = *(undefined1 *)(puVar24 + 0x14);
                                                      uStack_cf0 = CONCAT71(uStack_cf0._1_7_,
                                                                            *(undefined1 *)
                                                                             (puVar24 + 0x14));
                                                      uStack_11c0 = *(undefined1 *)(puVar27 + 0x14);
                                                      uStack_c48 = CONCAT71(uStack_c48._1_7_,
                                                                            *(undefined1 *)
                                                                             (puVar27 + 0x14));
                                                      iVar11 = (int)&uStack_d90;
                                                      func_0x000100dbd9b0();
                                                      if (iVar11 == 1) {
                                                        func_0x000100dbd9b0();
                                                        if (iVar10 != 1) {
LAB_1046d244c:
                                                          _memcpy(&uStack_17e0,&uStack_d90,0x149);
                                                          func_0x0001046d8c0c(&uStack_1310,
                                                                              &uStack_570,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                          puVar24 = &uStack_1260;
                                                          puVar27 = &uStack_570;
                                                          goto LAB_1046d1d04;
                                                        }
                                                        uStack_1758 = uStack_d08;
                                                        uStack_1760 = uStack_d10;
                                                        uStack_1748 = uStack_cf8;
                                                        uStack_1750 = uStack_d00;
                                                        uStack_1740 = CONCAT71(uStack_1740._1_7_,
                                                                               (undefined1)
                                                                               uStack_cf0);
                                                        uStack_1798 = uStack_d48;
                                                        uStack_17a0 = uStack_d50;
                                                        uStack_1788 = uStack_d38;
                                                        uStack_1790 = uStack_d40;
                                                        uStack_1778 = uStack_d28;
                                                        uStack_1780 = uStack_d30;
                                                        uStack_1768 = uStack_d18;
                                                        uStack_1770 = uStack_d20;
                                                        uStack_17d8 = uStack_d88;
                                                        uStack_17e0 = uStack_d90;
                                                        uStack_17c8 = uStack_d78;
                                                        uStack_17d0 = uStack_d80;
                                                        uStack_17b8 = uStack_d68;
                                                        uStack_17c0 = uStack_d70;
                                                        uStack_17a8 = uStack_d58;
                                                        uStack_17b0 = uStack_d60;
                                                        func_0x0001046d8c0c(&uStack_1310,&uStack_570
                                                                            ,0x112e54be0,
                                                                            &UNK_10da56ca0);
                                                        func_0x0001046d8c0c(&uStack_1260,&uStack_570
                                                                            ,0x112e54be0,
                                                                            &UNK_10da56ca0);
                                                        func_0x0001046d8cd4(&uStack_17e0,0x112e54be0
                                                                            ,&UNK_10da56ca0);
LAB_1046d25e0:
                                                        puVar24 = (undefined8 *)
                                                                  ((long)param_1 +
                                                                  (long)*(int *)(lStack_1b00 + 0xbc)
                                                                  );
                                                        puVar27 = (undefined8 *)
                                                                  ((long)pdVar4 +
                                                                  (long)*(int *)(lStack_1b00 + 0xbc)
                                                                  );
                                                        iVar10 = (int)&uStack_ce8;
                                                        uStack_d18 = puVar24[0xf];
                                                        uStack_d20 = puVar24[0xe];
                                                        uStack_13e8 = puVar24[0x11];
                                                        uStack_13f0 = puVar24[0x10];
                                                        uStack_d08 = puVar24[0x11];
                                                        uStack_d10 = puVar24[0x10];
                                                        uStack_13d8 = puVar24[0x13];
                                                        uStack_13e0 = puVar24[0x12];
                                                        uStack_d58 = puVar24[7];
                                                        uStack_d60 = puVar24[6];
                                                        uStack_1428 = puVar24[9];
                                                        uStack_1430 = puVar24[8];
                                                        uStack_d48 = puVar24[9];
                                                        uStack_d50 = puVar24[8];
                                                        uStack_1418 = puVar24[0xb];
                                                        uStack_1420 = puVar24[10];
                                                        uStack_d38 = puVar24[0xb];
                                                        uStack_d40 = puVar24[10];
                                                        uStack_1408 = puVar24[0xd];
                                                        uStack_1410 = puVar24[0xc];
                                                        uStack_d28 = puVar24[0xd];
                                                        uStack_d30 = puVar24[0xc];
                                                        uStack_13f8 = puVar24[0xf];
                                                        uStack_1400 = puVar24[0xe];
                                                        uStack_1468 = puVar24[1];
                                                        uStack_1470 = *puVar24;
                                                        uStack_1458 = puVar24[3];
                                                        uStack_1460 = puVar24[2];
                                                        uStack_1448 = puVar24[5];
                                                        uStack_1450 = puVar24[4];
                                                        uStack_1438 = puVar24[7];
                                                        uStack_1440 = puVar24[6];
                                                        uStack_d88 = puVar24[1];
                                                        uStack_d90 = *puVar24;
                                                        uStack_d78 = puVar24[3];
                                                        uStack_d80 = puVar24[2];
                                                        uStack_d68 = puVar24[5];
                                                        uStack_d70 = puVar24[4];
                                                        uStack_cf8 = puVar24[0x13];
                                                        uStack_d00 = puVar24[0x12];
                                                        uStack_c70 = puVar27[0xf];
                                                        uStack_c78 = puVar27[0xe];
                                                        uStack_1338 = puVar27[0x11];
                                                        uStack_1340 = puVar27[0x10];
                                                        uStack_c60 = puVar27[0x11];
                                                        uStack_c68 = puVar27[0x10];
                                                        uStack_1328 = puVar27[0x13];
                                                        uStack_1330 = puVar27[0x12];
                                                        uStack_cb0 = puVar27[7];
                                                        uStack_cb8 = puVar27[6];
                                                        uStack_1378 = puVar27[9];
                                                        uStack_1380 = puVar27[8];
                                                        uStack_ca0 = puVar27[9];
                                                        uStack_ca8 = puVar27[8];
                                                        uStack_1368 = puVar27[0xb];
                                                        uStack_1370 = puVar27[10];
                                                        uStack_c80 = puVar27[0xd];
                                                        uStack_c88 = puVar27[0xc];
                                                        uStack_1348 = puVar27[0xf];
                                                        uStack_1350 = puVar27[0xe];
                                                        uStack_c90 = puVar27[0xb];
                                                        uStack_c98 = puVar27[10];
                                                        uStack_1358 = puVar27[0xd];
                                                        uStack_1360 = puVar27[0xc];
                                                        uStack_13b8 = puVar27[1];
                                                        uStack_13c0 = *puVar27;
                                                        uStack_13a8 = puVar27[3];
                                                        uStack_13b0 = puVar27[2];
                                                        uStack_1398 = puVar27[5];
                                                        uStack_13a0 = puVar27[4];
                                                        uStack_1388 = puVar27[7];
                                                        uStack_1390 = puVar27[6];
                                                        uStack_cd0 = puVar27[3];
                                                        uStack_cc0 = puVar27[5];
                                                        uStack_cc8 = puVar27[4];
                                                        uStack_c50 = puVar27[0x13];
                                                        uStack_c58 = puVar27[0x12];
                                                        uStack_ce0 = (undefined1)puVar27[1];
                                                        uStack_cdf = (undefined7)
                                                                     ((ulong)puVar27[1] >> 8);
                                                        uStack_ce8 = (undefined1)*puVar27;
                                                        uStack_ce7 = (undefined7)
                                                                     ((ulong)*puVar27 >> 8);
                                                        uStack_cd8 = (undefined1)puVar27[2];
                                                        uStack_cd7 = (undefined7)
                                                                     ((ulong)puVar27[2] >> 8);
                                                        uStack_13d0 = *(undefined1 *)
                                                                       (puVar24 + 0x14);
                                                        uStack_cf0 = CONCAT71(uStack_cf0._1_7_,
                                                                              *(undefined1 *)
                                                                               (puVar24 + 0x14));
                                                        uStack_1320 = *(undefined1 *)
                                                                       (puVar27 + 0x14);
                                                        uStack_c48 = CONCAT71(uStack_c48._1_7_,
                                                                              *(undefined1 *)
                                                                               (puVar27 + 0x14));
                                                        iVar11 = (int)&uStack_d90;
                                                        func_0x000100dbd9b0();
                                                        if (iVar11 == 1) {
                                                          func_0x000100dbd9b0();
                                                          if (iVar10 != 1) {
LAB_1046d2830:
                                                            _memcpy(&uStack_17e0,&uStack_d90,0x149);
                                                            func_0x0001046d8c0c(&uStack_1470,
                                                                                &uStack_6d0,
                                                                                0x112e54be0,
                                                                                &UNK_10da56ca0);
                                                            puVar24 = &uStack_13c0;
                                                            puVar27 = &uStack_6d0;
                                                            goto LAB_1046d1d04;
                                                          }
                                                          uStack_1758 = uStack_d08;
                                                          uStack_1760 = uStack_d10;
                                                          uStack_1748 = uStack_cf8;
                                                          uStack_1750 = uStack_d00;
                                                          uStack_1740 = CONCAT71(uStack_1740._1_7_,
                                                                                 (undefined1)
                                                                                 uStack_cf0);
                                                          uStack_1798 = uStack_d48;
                                                          uStack_17a0 = uStack_d50;
                                                          uStack_1788 = uStack_d38;
                                                          uStack_1790 = uStack_d40;
                                                          uStack_1778 = uStack_d28;
                                                          uStack_1780 = uStack_d30;
                                                          uStack_1768 = uStack_d18;
                                                          uStack_1770 = uStack_d20;
                                                          uStack_17d8 = uStack_d88;
                                                          uStack_17e0 = uStack_d90;
                                                          uStack_17c8 = uStack_d78;
                                                          uStack_17d0 = uStack_d80;
                                                          uStack_17b8 = uStack_d68;
                                                          uStack_17c0 = uStack_d70;
                                                          uStack_17a8 = uStack_d58;
                                                          uStack_17b0 = uStack_d60;
                                                          func_0x0001046d8c0c(&uStack_1470,
                                                                              &uStack_6d0,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                          func_0x0001046d8c0c(&uStack_13c0,
                                                                              &uStack_6d0,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                          func_0x0001046d8cd4(&uStack_17e0,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                        }
                                                        else {
                                                          uStack_1498 = uStack_d08;
                                                          uStack_14a0 = uStack_d10;
                                                          uStack_1488 = uStack_cf8;
                                                          uStack_1490 = uStack_d00;
                                                          uStack_1480 = (undefined1)uStack_cf0;
                                                          uStack_14d8 = uStack_d48;
                                                          uStack_14e0 = uStack_d50;
                                                          uStack_14c8 = uStack_d38;
                                                          uStack_14d0 = uStack_d40;
                                                          uStack_14a8 = uStack_d18;
                                                          uStack_14b0 = uStack_d20;
                                                          uStack_14b8 = uStack_d28;
                                                          uStack_14c0 = uStack_d30;
                                                          uStack_1518 = uStack_d88;
                                                          uStack_1520 = uStack_d90;
                                                          uStack_1508 = uStack_d78;
                                                          uStack_1510 = uStack_d80;
                                                          uStack_14e8 = uStack_d58;
                                                          uStack_14f0 = uStack_d60;
                                                          uStack_14f8 = uStack_d68;
                                                          uStack_1500 = uStack_d70;
                                                          func_0x000100dbd9b0();
                                                          if (iVar10 == 1) goto LAB_1046d2830;
                                                          uStack_1548 = uStack_c60;
                                                          uStack_1550 = uStack_c68;
                                                          uStack_1538 = uStack_c50;
                                                          uStack_1540 = uStack_c58;
                                                          uStack_1588 = uStack_ca0;
                                                          uStack_1590 = uStack_ca8;
                                                          uStack_1578 = uStack_c90;
                                                          uStack_1580 = uStack_c98;
                                                          uStack_1558 = uStack_c70;
                                                          uStack_1560 = uStack_c78;
                                                          uStack_1568 = uStack_c80;
                                                          uStack_1570 = uStack_c88;
                                                          uStack_15c8 = CONCAT71(uStack_cdf,
                                                                                 uStack_ce0);
                                                          uStack_15d0 = CONCAT71(uStack_ce7,
                                                                                 uStack_ce8);
                                                          uStack_15c0 = CONCAT71(uStack_cd7,
                                                                                 uStack_cd8);
                                                          uStack_15b8 = uStack_cd0;
                                                          uStack_17d8 = CONCAT71(uStack_cdf,
                                                                                 uStack_ce0);
                                                          uStack_17e0 = CONCAT71(uStack_ce7,
                                                                                 uStack_ce8);
                                                          uStack_17d0 = CONCAT71(uStack_cd7,
                                                                                 uStack_cd8);
                                                          uStack_1598 = uStack_cb0;
                                                          uStack_15a0 = uStack_cb8;
                                                          uStack_15a8 = uStack_cc0;
                                                          uStack_15b0 = uStack_cc8;
                                                          uStack_1758 = uStack_c60;
                                                          uStack_1760 = uStack_c68;
                                                          uStack_1748 = uStack_c50;
                                                          uStack_1750 = uStack_c58;
                                                          uStack_1798 = uStack_ca0;
                                                          uStack_17a0 = uStack_ca8;
                                                          uStack_1788 = uStack_c90;
                                                          uStack_1790 = uStack_c98;
                                                          uStack_1778 = uStack_c80;
                                                          uStack_1780 = uStack_c88;
                                                          uStack_1768 = uStack_c70;
                                                          uStack_1770 = uStack_c78;
                                                          uStack_17c8 = uStack_cd0;
                                                          uStack_1530 = (undefined1)uStack_c48;
                                                          uStack_1740 = CONCAT71(uStack_1740._1_7_,
                                                                                 (undefined1)
                                                                                 uStack_c48);
                                                          uStack_17b8 = uStack_cc0;
                                                          uStack_17c0 = uStack_cc8;
                                                          uStack_17a8 = uStack_cb0;
                                                          uStack_17b0 = uStack_cb8;
                                                          uStack_648 = uStack_1498;
                                                          uStack_650 = uStack_14a0;
                                                          uStack_638 = uStack_1488;
                                                          uStack_640 = uStack_1490;
                                                          uStack_630 = uStack_1480;
                                                          uStack_688 = uStack_14d8;
                                                          uStack_690 = uStack_14e0;
                                                          uStack_678 = uStack_14c8;
                                                          uStack_680 = uStack_14d0;
                                                          uStack_658 = uStack_14a8;
                                                          uStack_660 = uStack_14b0;
                                                          uStack_668 = uStack_14b8;
                                                          uStack_670 = uStack_14c0;
                                                          uStack_6c8 = uStack_1518;
                                                          uStack_6d0 = uStack_1520;
                                                          uStack_6b8 = uStack_1508;
                                                          uStack_6c0 = uStack_1510;
                                                          uStack_698 = uStack_14e8;
                                                          uStack_6a0 = uStack_14f0;
                                                          uStack_6a8 = uStack_14f8;
                                                          uStack_6b0 = uStack_1500;
                                                          func_0x0001046d8c0c(&uStack_1470,
                                                                              auStack_1678,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                          func_0x0001046d8c0c(&uStack_13c0,
                                                                              auStack_1678,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                          puVar24 = &uStack_6d0;
                                                          FUN_1046c2028(puVar24,&uStack_17e0);
                                                          func_0x0001046d8cd4(&uStack_15d0,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                          func_0x0001046d8cd4(&uStack_d90,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                          if (((ulong)puVar24 & 1) == 0)
                                                          goto LAB_1046d0cc4;
                                                        }
                                                        bVar22 = *(byte *)((long)param_1 +
                                                                          (long)*(int *)(lStack_1b00
                                                                                        + 0xc0));
                                                        bVar7 = *(byte *)((long)pdVar4 +
                                                                         (long)*(int *)(lStack_1b00
                                                                                       + 0xc0));
                                                        if (bVar22 == 2) {
                                                          if (bVar7 == 2) {
LAB_1046d29ec:
                                                            if ((*(long *)((long)param_1 +
                                                                          (long)*(int *)(lStack_1b00
                                                                                        + 0xc4)) ==
                                                                 *(long *)((long)pdVar4 +
                                                                          (long)*(int *)(lStack_1b00
                                                                                        + 0xc4))) &&
                                                               (*(int *)((long)param_1 +
                                                                        (long)*(int *)(lStack_1b00 +
                                                                                      200)) ==
                                                                *(int *)((long)pdVar4 +
                                                                        (long)*(int *)(lStack_1b00 +
                                                                                      200)))) {
                                                              bVar22 = *(byte *)((long)param_1 +
                                                                                (long)*(int *)(
                                                  lStack_1b00 + 0xcc)) ^
                                                  *(byte *)((long)pdVar4 +
                                                           (long)*(int *)(lStack_1b00 + 0xcc)) ^ 1;
                                                  goto LAB_1046d0cc8;
                                                  }
                                                  }
                                                  }
                                                  else if ((bVar7 != 2) &&
                                                          (((bVar7 ^ bVar22) & 1) == 0))
                                                  goto LAB_1046d29ec;
                                                  }
                                                  else {
                                                    uStack_1758 = uStack_d08;
                                                    uStack_1760 = uStack_d10;
                                                    uStack_1748 = uStack_cf8;
                                                    uStack_1750 = uStack_d00;
                                                    uStack_1740 = CONCAT71(uStack_1740._1_7_,
                                                                           (undefined1)uStack_cf0);
                                                    uStack_1798 = uStack_d48;
                                                    uStack_17a0 = uStack_d50;
                                                    uStack_1788 = uStack_d38;
                                                    uStack_1790 = uStack_d40;
                                                    uStack_1778 = uStack_d28;
                                                    uStack_1780 = uStack_d30;
                                                    uStack_1768 = uStack_d18;
                                                    uStack_1770 = uStack_d20;
                                                    uStack_17d8 = uStack_d88;
                                                    uStack_17e0 = uStack_d90;
                                                    uStack_17c8 = uStack_d78;
                                                    uStack_17d0 = uStack_d80;
                                                    uStack_17b8 = uStack_d68;
                                                    uStack_17c0 = uStack_d70;
                                                    uStack_17a8 = uStack_d58;
                                                    uStack_17b0 = uStack_d60;
                                                    func_0x000100dbd9b0();
                                                    if (iVar10 == 1) goto LAB_1046d244c;
                                                    uStack_648 = uStack_c60;
                                                    uStack_650 = uStack_c68;
                                                    uStack_638 = uStack_c50;
                                                    uStack_640 = uStack_c58;
                                                    uStack_688 = uStack_ca0;
                                                    uStack_690 = uStack_ca8;
                                                    uStack_678 = uStack_c90;
                                                    uStack_680 = uStack_c98;
                                                    uStack_658 = uStack_c70;
                                                    uStack_660 = uStack_c78;
                                                    uStack_668 = uStack_c80;
                                                    uStack_670 = uStack_c88;
                                                    uStack_6c8 = CONCAT71(uStack_cdf,uStack_ce0);
                                                    uStack_6d0 = CONCAT71(uStack_ce7,uStack_ce8);
                                                    uStack_6c0 = CONCAT71(uStack_cd7,uStack_cd8);
                                                    uStack_6b8 = uStack_cd0;
                                                    uStack_568 = CONCAT71(uStack_cdf,uStack_ce0);
                                                    uStack_570 = CONCAT71(uStack_ce7,uStack_ce8);
                                                    uStack_560 = CONCAT71(uStack_cd7,uStack_cd8);
                                                    uStack_698 = uStack_cb0;
                                                    uStack_6a0 = uStack_cb8;
                                                    uStack_6a8 = uStack_cc0;
                                                    uStack_6b0 = uStack_cc8;
                                                    uStack_4e8 = uStack_c60;
                                                    uStack_4f0 = uStack_c68;
                                                    uStack_4d8 = uStack_c50;
                                                    uStack_4e0 = uStack_c58;
                                                    uStack_528 = uStack_ca0;
                                                    uStack_530 = uStack_ca8;
                                                    uStack_518 = uStack_c90;
                                                    uStack_520 = uStack_c98;
                                                    uStack_4f8 = uStack_c70;
                                                    uStack_500 = uStack_c78;
                                                    uStack_508 = uStack_c80;
                                                    uStack_510 = uStack_c88;
                                                    uStack_558 = uStack_cd0;
                                                    uStack_630 = (undefined1)uStack_c48;
                                                    uStack_4d0 = (undefined1)uStack_c48;
                                                    uStack_538 = uStack_cb0;
                                                    uStack_540 = uStack_cb8;
                                                    uStack_548 = uStack_cc0;
                                                    uStack_550 = uStack_cc8;
                                                    uStack_598 = uStack_1758;
                                                    uStack_5a0 = uStack_1760;
                                                    uStack_588 = uStack_1748;
                                                    uStack_590 = uStack_1750;
                                                    uStack_580 = (undefined1)uStack_1740;
                                                    uStack_5d8 = uStack_1798;
                                                    uStack_5e0 = uStack_17a0;
                                                    uStack_5c8 = uStack_1788;
                                                    uStack_5d0 = uStack_1790;
                                                    uStack_5a8 = uStack_1768;
                                                    uStack_5b0 = uStack_1770;
                                                    uStack_5b8 = uStack_1778;
                                                    uStack_5c0 = uStack_1780;
                                                    uStack_618 = uStack_17d8;
                                                    uStack_620 = uStack_17e0;
                                                    uStack_608 = uStack_17c8;
                                                    uStack_610 = uStack_17d0;
                                                    uStack_5e8 = uStack_17a8;
                                                    uStack_5f0 = uStack_17b0;
                                                    uStack_5f8 = uStack_17b8;
                                                    uStack_600 = uStack_17c0;
                                                    func_0x0001046d8c0c(&uStack_1310,&uStack_13c0,
                                                                        0x112e54be0,&UNK_10da56ca0);
                                                    func_0x0001046d8c0c(&uStack_1260,&uStack_13c0,
                                                                        0x112e54be0,&UNK_10da56ca0);
                                                    puVar24 = &uStack_620;
                                                    FUN_1046c2028(puVar24,&uStack_570);
                                                    func_0x0001046d8cd4(&uStack_6d0,0x112e54be0,
                                                                        &UNK_10da56ca0);
                                                    func_0x0001046d8cd4(&uStack_d90,0x112e54be0,
                                                                        &UNK_10da56ca0);
                                                    if (((ulong)puVar24 & 1) != 0)
                                                    goto LAB_1046d25e0;
                                                  }
                                                  }
                                                  }
                                                  else if (lVar31 == 0) {
LAB_1046d2184:
                                                    func_0x0001046ca7b0(uVar18,lVar31,uVar5,uVar6);
                                                    lVar29 = lStack_1aa8;
                                                    func_0x0001046ca7b0(puVar27,lVar28,lVar12,
                                                                        lStack_1aa8);
                                                    func_0x0001046d8d14(puVar27,lVar28,lVar12,lVar29
                                                                       );
                                                    func_0x0001046d8d14(uVar18,lVar31,uVar5,uVar6);
                                                  }
                                                  else {
                                                    puStack_1ab8 = puVar27;
                                                    FUN_10474eb58(puVar27,lVar28,lVar12,lVar29,
                                                                  uVar18,lVar31,uVar5,uVar6);
                                                    uStack_1ab0 = CONCAT44(uStack_1ab0._4_4_,
                                                                           (int)puVar27);
                                                    func_0x0001046ca7b0(uVar18,lVar31,uVar5,uVar6);
                                                    puVar24 = puStack_1ab8;
                                                    func_0x0001046ca7b0(puStack_1ab8,lVar28,lVar12,
                                                                        lVar29);
                                                    _swift_bridgeObjectRelease(lVar31);
                                                    _swift_bridgeObjectRelease(uVar6);
                                                    func_0x0001046d8d14(puVar24,lVar28,lVar12,lVar29
                                                                       );
                                                    if ((uStack_1ab0 & 1) != 0) goto LAB_1046d21e4;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uStack_1758 = uStack_d08;
                                                    uStack_1760 = uStack_d10;
                                                    uStack_1748 = uStack_cf8;
                                                    uStack_1750 = uStack_d00;
                                                    uStack_1738 = uStack_ce8;
                                                    uStack_1740 = uStack_cf0;
                                                    uStack_172f = CONCAT17(uStack_cd8,uStack_cdf);
                                                    uStack_1737 = uStack_ce7;
                                                    uStack_1730 = uStack_ce0;
                                                    uStack_1798 = uStack_d48;
                                                    uStack_17a0 = uStack_d50;
                                                    uStack_1788 = uStack_d38;
                                                    uStack_1790 = uStack_d40;
                                                    uStack_1778 = uStack_d28;
                                                    uStack_1780 = uStack_d30;
                                                    uStack_1768 = uStack_d18;
                                                    uStack_1770 = uStack_d20;
                                                    uStack_17d8 = uStack_d88;
                                                    uStack_17e0 = uStack_d90;
                                                    uStack_17c8 = uStack_d78;
                                                    uStack_17d0 = uStack_d80;
                                                    uStack_17b8 = uStack_d68;
                                                    uStack_17c0 = uStack_d70;
                                                    uStack_17a8 = uStack_d58;
                                                    uStack_17b0 = uStack_d60;
                                                    func_0x000101541310();
                                                    if (iVar10 != 1) {
                                                      uStack_18b8 = uStack_c48;
                                                      uStack_18c0 = uStack_c50;
                                                      uStack_18a8 = uStack_c38;
                                                      uStack_18b0 = uStack_c40;
                                                      uStack_1898 = uStack_c28;
                                                      uStack_18a0 = uStack_c30;
                                                      uStack_188f = uStack_c1f;
                                                      uStack_1897 = uStack_c27;
                                                      uStack_1890 = uStack_c20;
                                                      uStack_18f8 = uStack_c88;
                                                      uStack_1900 = uStack_c90;
                                                      uStack_18e8 = uStack_c78;
                                                      uStack_18f0 = uStack_c80;
                                                      uStack_18d8 = uStack_c68;
                                                      uStack_18e0 = uStack_c70;
                                                      uStack_18c8 = uStack_c58;
                                                      uStack_18d0 = uStack_c60;
                                                      uStack_1938 = uStack_cc8;
                                                      uStack_1940 = uStack_cd0;
                                                      uStack_1928 = uStack_cb8;
                                                      uStack_1930 = uStack_cc0;
                                                      uStack_1918 = uStack_ca8;
                                                      uStack_1920 = uStack_cb0;
                                                      uStack_1908 = uStack_c98;
                                                      uStack_1910 = uStack_ca0;
                                                      uStack_1a18 = uStack_1758;
                                                      uStack_1a20 = uStack_1760;
                                                      uStack_1a08 = uStack_1748;
                                                      uStack_1a10 = uStack_1750;
                                                      uStack_19f8 = uStack_1738;
                                                      uStack_1a00 = uStack_1740;
                                                      uStack_19ef = uStack_172f;
                                                      uStack_19f7 = uStack_1737;
                                                      uStack_19f0 = uStack_1730;
                                                      uStack_1a58 = uStack_1798;
                                                      uStack_1a60 = uStack_17a0;
                                                      uStack_1a48 = uStack_1788;
                                                      uStack_1a50 = uStack_1790;
                                                      uStack_1a38 = uStack_1778;
                                                      uStack_1a40 = uStack_1780;
                                                      uStack_1a28 = uStack_1768;
                                                      uStack_1a30 = uStack_1770;
                                                      uStack_1a98 = uStack_17d8;
                                                      uStack_1aa0 = uStack_17e0;
                                                      uStack_1a88 = uStack_17c8;
                                                      uStack_1a90 = uStack_17d0;
                                                      uStack_1a78 = uStack_17b8;
                                                      uStack_1a80 = uStack_17c0;
                                                      uStack_1a68 = uStack_17a8;
                                                      uStack_1a70 = uStack_17b0;
                                                      puVar24 = &uStack_1aa0;
                                                      FUN_1046ca004(puVar24,&uStack_1940);
                                                      if (((ulong)puVar24 & 1) != 0)
                                                      goto LAB_1046d204c;
                                                    }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      else {
LAB_1046d1308:
                                        func_0x000103de4004(uVar18,lVar28,pcVar26,uVar5,pcVar25);
                                        lVar31 = lStack_1aa8;
                                        uStack_1ab0 = uVar23;
                                        func_0x000103de4004(pdVar4,uVar23,lVar12,lVar29,lStack_1aa8)
                                        ;
                                        func_0x000103de4018(uVar18,lVar28,pcVar26,uVar5,pcVar25);
                                        func_0x000103de4018(pdVar4,uStack_1ab0,lVar12,lVar29,lVar31)
                                        ;
                                      }
                                    }
                                    else {
                                      if (uVar23 == 1) goto LAB_1046d1308;
                                      bStack_1c0 = (byte)lVar29 & 1;
                                      bStack_1bf = (byte)((ulong)lVar29 >> 8) & 1;
                                      bStack_1be = (byte)((ulong)lVar29 >> 0x10) & 1;
                                      bStack_1e8 = (byte)uVar5 & 1;
                                      bStack_1e7 = (byte)((ulong)uVar5 >> 8) & 1;
                                      bStack_1e6 = (byte)((ulong)uVar5 >> 0x10) & 1;
                                      pcStack_1b08 = pcVar26;
                                      pcStack_1af8 = pcVar25;
                                      pdStack_1ae8 = pdVar4;
                                      uStack_1ab0 = uVar23;
                                      uStack_200 = uVar18;
                                      lStack_1f8 = lVar28;
                                      pcStack_1f0 = pcVar26;
                                      pcStack_1e0 = pcVar25;
                                      pdStack_1d8 = pdVar4;
                                      uStack_1d0 = uVar23;
                                      lStack_1c8 = lVar12;
                                      lStack_1b8 = lVar31;
                                      func_0x000103de4004(uVar18,lVar28,pcVar26,uVar5,pcVar25);
                                      uVar23 = uStack_1ab0;
                                      pdVar4 = pdStack_1ae8;
                                      func_0x000103de4004(pdStack_1ae8,uStack_1ab0,lVar12,lVar29,
                                                          lVar31);
                                      puVar24 = &uStack_200;
                                      FUN_104759ad8(puVar24,&pdStack_1d8);
                                      uStack_1b0c = (uint)puVar24;
                                      func_0x000103de4018(pdVar4,uVar23,lVar12,lVar29,lVar31);
                                      func_0x000103de4018(uVar18,lVar28,pcStack_1b08,uVar5,
                                                          pcStack_1af8);
                                      if ((uStack_1b0c & 1) != 0) goto LAB_1046d1478;
                                    }
                                  }
                                }
                                else {
                                  uStack_fe8 = uStack_d28;
                                  uStack_ff0 = uStack_d30;
                                  uStack_fd8 = uStack_d18;
                                  uStack_fe0 = uStack_d20;
                                  uStack_fc8 = uStack_d08;
                                  uStack_fd0 = uStack_d10;
                                  uStack_fb8 = uStack_cf8;
                                  uStack_fc0 = uStack_d00;
                                  uStack_1028 = uStack_d68;
                                  uStack_1030 = uStack_d70;
                                  uStack_1018 = uStack_d58;
                                  uStack_1020 = uStack_d60;
                                  uStack_1008 = uStack_d48;
                                  uStack_1010 = uStack_d50;
                                  uStack_ff8 = uStack_d38;
                                  uStack_1000 = uStack_d40;
                                  uStack_1048 = uStack_d88;
                                  uStack_1050 = uStack_d90;
                                  uStack_1038 = uStack_d78;
                                  uStack_1040 = uStack_d80;
                                  iVar10 = (int)&uStack_cf0;
                                  FUN_1046d2a38();
                                  if (iVar10 == 1) goto LAB_1046d10a4;
                                  uStack_2f8 = uStack_c88;
                                  uStack_300 = uStack_c90;
                                  uStack_2e8 = uStack_c78;
                                  uStack_2f0 = uStack_c80;
                                  uStack_2d8 = uStack_c68;
                                  uStack_2e0 = uStack_c70;
                                  uStack_2c8 = uStack_c58;
                                  uStack_2d0 = uStack_c60;
                                  uStack_f8 = CONCAT71(uStack_cd7,uStack_cd8);
                                  uStack_100 = CONCAT71(uStack_cdf,uStack_ce0);
                                  uStack_338 = uStack_cc8;
                                  uStack_340 = uStack_cd0;
                                  uStack_328 = uStack_cb8;
                                  uStack_330 = uStack_cc0;
                                  uStack_318 = uStack_ca8;
                                  uStack_320 = uStack_cb0;
                                  uStack_308 = uStack_c98;
                                  uStack_310 = uStack_ca0;
                                  uStack_358 = CONCAT71(uStack_ce7,uStack_ce8);
                                  uStack_348 = CONCAT71(uStack_cd7,uStack_cd8);
                                  uStack_350 = CONCAT71(uStack_cdf,uStack_ce0);
                                  uStack_108 = CONCAT71(uStack_ce7,uStack_ce8);
                                  uStack_360 = uStack_cf0;
                                  uStack_a8 = uStack_c88;
                                  uStack_b0 = uStack_c90;
                                  uStack_98 = uStack_c78;
                                  uStack_a0 = uStack_c80;
                                  uStack_88 = uStack_c68;
                                  uStack_90 = uStack_c70;
                                  uStack_78 = uStack_c58;
                                  uStack_80 = uStack_c60;
                                  uStack_e8 = uStack_cc8;
                                  uStack_f0 = uStack_cd0;
                                  uStack_d8 = uStack_cb8;
                                  uStack_e0 = uStack_cc0;
                                  uStack_c8 = uStack_ca8;
                                  uStack_d0 = uStack_cb0;
                                  uStack_b8 = uStack_c98;
                                  uStack_c0 = uStack_ca0;
                                  uStack_110 = uStack_cf0;
                                  uStack_148 = uStack_fe8;
                                  uStack_150 = uStack_ff0;
                                  uStack_138 = uStack_fd8;
                                  uStack_140 = uStack_fe0;
                                  uStack_128 = uStack_fc8;
                                  uStack_130 = uStack_fd0;
                                  uStack_118 = uStack_fb8;
                                  uStack_120 = uStack_fc0;
                                  uStack_188 = uStack_1028;
                                  uStack_190 = uStack_1030;
                                  uStack_178 = uStack_1018;
                                  uStack_180 = uStack_1020;
                                  uStack_168 = uStack_1008;
                                  uStack_170 = uStack_1010;
                                  uStack_158 = uStack_ff8;
                                  uStack_160 = uStack_1000;
                                  uStack_1a8 = uStack_1048;
                                  uStack_1b0 = uStack_1050;
                                  uStack_198 = uStack_1038;
                                  uStack_1a0 = uStack_1040;
                                  func_0x0001046d8c0c(&uStack_810,auStack_970,0x11308da18,
                                                      &UNK_10dd2f158);
                                  func_0x0001046d8c0c(&uStack_770,auStack_970,0x11308da18,
                                                      &UNK_10dd2f158);
                                  puVar24 = &uStack_1b0;
                                  FUN_1047a2edc(puVar24,&uStack_110);
                                  func_0x0001046d8cd4(&uStack_360,0x11308da18,&UNK_10dd2f158);
                                  func_0x0001046d8cd4(&uStack_d90,0x11308da18,&UNK_10dd2f158);
                                  if (((ulong)puVar24 & 1) != 0) goto LAB_1046d1250;
                                }
                              }
                            }
                          }
                        }
                      }
                      else if (lVar12 != 0) {
                        _swift_bridgeObjectRetain(lVar12);
                        uVar21 = uVar23;
                        _swift_bridgeObjectRetain();
                        func_0x00010470a93c();
                        _swift_bridgeObjectRelease(uVar23);
                        _swift_bridgeObjectRelease(lVar12);
                        if ((uVar21 & 1) != 0) goto LAB_1046d0de4;
                      }
                    }
                  }
                  else {
LAB_1046d0974:
                    uVar18 = 0x112d68090;
                    puVar19 = &UNK_10da24400;
LAB_1046d0cc0:
                    func_0x0001046d8cd4(puVar24,uVar18,puVar19);
                  }
                }
                else {
                  func_0x0001046d8c0c(puVar24,lVar31,0x112d3bc20,&UNK_10d904ef0);
                  lVar14 = (long)puVar24 + (long)pdStack_1ae8;
                  (*pcStack_1af8)(lVar14,1,lStack_1aa8);
                  if ((int)lVar14 == 1) {
                    (**(code **)(uStack_1ab0 + 8))(lVar31,lStack_1aa8);
                    goto LAB_1046d0974;
                  }
                  (**(code **)(uStack_1ab0 + 0x20))
                            (lVar28,(long)puVar24 + (long)pdStack_1ae8,lStack_1aa8);
                  uVar18 = 0x112d68098;
                  func_0x0001046d8d44(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                                      PTR___s10Foundation4UUIDVSQAAMc_110350c50);
                  lVar14 = lVar31;
                  pdStack_1ae8 = param_1;
                  __sSQ2eeoiySbx_xtFZTj(lVar31,lVar28,lStack_1aa8,uVar18);
                  param_1 = pdStack_1ae8;
                  uStack_1b0c = (uint)lVar14;
                  pcStack_1b08 = *(code **)(uStack_1ab0 + 8);
                  (*pcStack_1b08)(lVar28,lStack_1aa8);
                  (*pcStack_1b08)(lVar31,lStack_1aa8);
                  func_0x0001046d8cd4(puVar24,0x112d3bc20,&UNK_10d904ef0);
                  if ((uStack_1b0c & 1) != 0) goto LAB_1046d0a28;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1046d0cc4:
  bVar22 = 0;
LAB_1046d0cc8:
  return bVar22 & 1;
}



/* Entry: 1046cae5c; end: 1046cbcb7;  */

void FUN_1046cae5c(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  double *unaff_x20;
  double dVar11;
  ulong uVar12;
  double dVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_a80 [8];
  undefined1 *puStack_a78;
  long lStack_a70;
  long lStack_a68;
  long lStack_a60;
  long lStack_a58;
  long lStack_a50;
  long lStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined1 uStack_9a0;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined1 uStack_838;
  undefined7 uStack_837;
  undefined1 uStack_830;
  undefined8 uStack_82f;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined1 uStack_780;
  undefined1 auStack_770 [352];
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined1 uStack_4d0;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 uStack_420;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 uStack_368;
  undefined7 uStack_367;
  undefined1 uStack_360;
  undefined8 uStack_35f;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 uStack_2b0;
  undefined1 auStack_2a8 [352];
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  byte bStack_130;
  byte bStack_12f;
  byte bStack_12e;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar6 = 0;
  func_0x000100b91fbc();
  lStack_a50 = *(long *)(lVar6 + -8);
  lStack_a48 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a50 + 0x40));
  lVar6 = 0x112db39a8;
  puStack_a78 = auStack_a80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)(auStack_a80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar7 = 0;
  lStack_a58 = lVar10;
  __s10Foundation4UUIDVMa();
  lStack_a60 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a60 + 0x40));
  lVar10 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar6 = lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_a68 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12;
  lStack_a70 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12_00;
  dVar11 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar11 = *unaff_x20;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar11);
  dVar11 = 0.0;
  if (unaff_x20[1] != 0.0) {
    dVar11 = unaff_x20[1];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar11);
  dVar11 = 0.0;
  if (unaff_x20[2] != 0.0) {
    dVar11 = unaff_x20[2];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar11);
  dVar11 = 0.0;
  if (unaff_x20[3] != 0.0) {
    dVar11 = unaff_x20[3];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar11);
  __ss6HasherV8_combineyySuF(unaff_x20[4]);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[5],unaff_x20[6]);
  dVar11 = unaff_x20[8];
  if (dVar11 == 0.0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    dVar11 = unaff_x20[10];
    if (dVar11 == 0.0) goto LAB_1046cb110;
LAB_1046cb060:
    dVar13 = unaff_x20[9];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,dVar13,dVar11);
    dVar11 = unaff_x20[0xc];
    if (dVar11 != 0.0) goto LAB_1046cb088;
LAB_1046cb124:
    __ss6HasherV8_combineyys5UInt8VF(0);
    dVar11 = unaff_x20[0xe];
    if (dVar11 == 0.0) goto LAB_1046cb138;
LAB_1046cb0b0:
    dVar13 = unaff_x20[0xd];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,dVar13,dVar11);
    dVar11 = unaff_x20[0x10];
    if (dVar11 != 0.0) goto LAB_1046cb0d8;
LAB_1046cb14c:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    dVar13 = unaff_x20[7];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,dVar13,dVar11);
    dVar11 = unaff_x20[10];
    if (dVar11 != 0.0) goto LAB_1046cb060;
LAB_1046cb110:
    __ss6HasherV8_combineyys5UInt8VF(0);
    dVar11 = unaff_x20[0xc];
    if (dVar11 == 0.0) goto LAB_1046cb124;
LAB_1046cb088:
    dVar13 = unaff_x20[0xb];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,dVar13,dVar11);
    dVar11 = unaff_x20[0xe];
    if (dVar11 != 0.0) goto LAB_1046cb0b0;
LAB_1046cb138:
    __ss6HasherV8_combineyys5UInt8VF(0);
    dVar11 = unaff_x20[0x10];
    if (dVar11 == 0.0) goto LAB_1046cb14c;
LAB_1046cb0d8:
    dVar13 = unaff_x20[0xf];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,dVar13,dVar11);
  }
  lVar8 = 0;
  func_0x000100b91d00();
  func_0x0001046d8c0c((long)unaff_x20 + (long)*(int *)(lVar8 + 0x3c),lVar6,0x112d3bc20,
                      &UNK_10d904ef0);
  lVar3 = lStack_a60;
  pcVar14 = *(code **)(lStack_a60 + 0x30);
  lVar9 = lVar6;
  (*pcVar14)(lVar6,1,lVar7);
  if ((int)lVar9 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar3 + 0x20))(lVar10,lVar6,lVar7);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar15 = 0x112d6c668;
    func_0x0001046d8d44(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar7,uVar15);
    (**(code **)(lVar3 + 8))(lVar10,lVar7);
  }
  lVar6 = lStack_a70;
  func_0x0001046d8c0c((long)unaff_x20 + (long)*(int *)(lVar8 + 0x40),lStack_a70,0x112d3bc20,
                      &UNK_10d904ef0);
  lVar9 = lVar6;
  (*pcVar14)(lVar6,1,lVar7);
  if ((int)lVar9 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar3 + 0x20))(lVar10,lVar6,lVar7);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar15 = 0x112d6c668;
    func_0x0001046d8d44(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar7,uVar15);
    (**(code **)(lVar3 + 8))(lVar10,lVar7);
  }
  lVar6 = lStack_a68;
  func_0x0001046d8c0c((long)unaff_x20 + (long)*(int *)(lVar8 + 0x44),lStack_a68,0x112d3bc20,
                      &UNK_10d904ef0);
  lVar9 = lVar6;
  (*pcVar14)(lVar6,1,lVar7);
  if ((int)lVar9 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar3 + 0x20))(lVar10,lVar6,lVar7);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar15 = 0x112d6c668;
    func_0x0001046d8d44(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar7,uVar15);
    (**(code **)(lVar3 + 8))(lVar10,lVar7);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x48)));
  FUN_1046cfa8c(param_1,*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x4c)));
  lVar6 = *(long *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x50));
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar6 + 0x10));
    lVar7 = *(long *)(lVar6 + 0x10);
    if (lVar7 != 0) {
      puVar16 = (undefined8 *)(lVar6 + 0x28);
      do {
        uVar15 = puVar16[-1];
        uVar17 = *puVar16;
        _swift_bridgeObjectRetain(uVar17);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar15,uVar17);
        _swift_bridgeObjectRelease(uVar17);
        puVar16 = puVar16 + 2;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  lVar6 = *(long *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x54));
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar6 + 0x10));
    lVar7 = *(long *)(lVar6 + 0x10);
    if (lVar7 != 0) {
      puVar16 = (undefined8 *)(lVar6 + 0x28);
      do {
        uVar15 = puVar16[-1];
        uVar17 = *puVar16;
        _swift_bridgeObjectRetain(uVar17);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar15,uVar17);
        _swift_bridgeObjectRelease(uVar17);
        puVar16 = puVar16 + 2;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  lVar6 = *(long *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x58));
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar6 + 0x10));
    lVar7 = *(long *)(lVar6 + 0x10);
    if (lVar7 != 0) {
      puVar16 = (undefined8 *)(lVar6 + 0x28);
      do {
        uVar15 = puVar16[-1];
        uVar17 = *puVar16;
        _swift_bridgeObjectRetain(uVar17);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar15,uVar17);
        _swift_bridgeObjectRelease(uVar17);
        puVar16 = puVar16 + 2;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x5c));
  uStack_5a8 = puVar16[0xd];
  uStack_5b0 = puVar16[0xc];
  uStack_598 = puVar16[0xf];
  uStack_5a0 = puVar16[0xe];
  uStack_588 = puVar16[0x11];
  uStack_590 = puVar16[0x10];
  uStack_578 = puVar16[0x13];
  uStack_580 = puVar16[0x12];
  uStack_5e8 = puVar16[5];
  uStack_5f0 = puVar16[4];
  uStack_5d8 = puVar16[7];
  uStack_5e0 = puVar16[6];
  uStack_5c8 = puVar16[9];
  uStack_5d0 = puVar16[8];
  uStack_5b8 = puVar16[0xb];
  uStack_5c0 = puVar16[10];
  uStack_608 = puVar16[1];
  uStack_610 = *puVar16;
  uStack_5f8 = puVar16[3];
  uStack_600 = puVar16[2];
  iVar5 = (int)&uStack_610;
  FUN_1046d2a38();
  if (iVar5 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_b8 = uStack_5a8;
    uStack_c0 = uStack_5b0;
    uStack_a8 = uStack_598;
    uStack_b0 = uStack_5a0;
    uStack_98 = uStack_588;
    uStack_a0 = uStack_590;
    uStack_88 = uStack_578;
    uStack_90 = uStack_580;
    uStack_f8 = uStack_5e8;
    uStack_100 = uStack_5f0;
    uStack_e8 = uStack_5d8;
    uStack_f0 = uStack_5e0;
    uStack_d8 = uStack_5c8;
    uStack_e0 = uStack_5d0;
    uStack_c8 = uStack_5b8;
    uStack_d0 = uStack_5c0;
    uStack_118 = uStack_608;
    uStack_120 = uStack_610;
    uStack_108 = uStack_5f8;
    uStack_110 = uStack_600;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047a2bfc(param_1);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x60)));
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 100));
  if (puVar16[1] == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_128 = puVar16[4];
    uVar1 = *(undefined4 *)(puVar16 + 3);
    uStack_138 = puVar16[2];
    uStack_148 = *puVar16;
    bStack_130 = (byte)uVar1 & 1;
    bStack_12f = (byte)((uint)uVar1 >> 8) & 1;
    bStack_12e = (byte)((uint)uVar1 >> 0x10) & 1;
    lStack_140 = puVar16[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_104759448(param_1);
  }
  _memcpy(auStack_770,(long)unaff_x20 + (long)*(int *)(lVar8 + 0x68),0x160);
  iVar5 = (int)auStack_770;
  func_0x000101542f6c();
  if (iVar5 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    _memcpy(auStack_2a8,auStack_770,0x160);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_10475a088(param_1);
  }
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x6c));
  uVar12 = puVar16[1];
  if (uVar12 >> 0x3c < 0xf) {
    uVar15 = *puVar16;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar15,uVar12);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x70)));
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x74));
  lVar6 = puVar16[1];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar15 = *puVar16;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar15,lVar6);
  }
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x78));
  lVar6 = puVar16[1];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar15 = *puVar16;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar15,lVar6);
  }
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x7c));
  lVar6 = puVar16[1];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar15 = *puVar16;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar15,lVar6);
  }
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x80));
  uVar12 = puVar16[1];
  if (uVar12 >> 0x3c < 0xf) {
    uVar15 = *puVar16;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar15,uVar12);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  lVar6 = lStack_a58;
  func_0x0001046d8c0c((long)unaff_x20 + (long)*(int *)(lVar8 + 0x84),lStack_a58,0x112db39a8,
                      &UNK_10d95dd90);
  lVar7 = lVar6;
  (**(code **)(lStack_a50 + 0x30))(lVar6,1,lStack_a48);
  puVar2 = puStack_a78;
  if ((int)lVar7 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001046d8c54(lVar6,puStack_a78,&SUB_100b91fbc);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_104841c54(param_1);
    func_0x0001046d8c98(puVar2,&SUB_100b91fbc);
  }
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x88));
  uStack_798 = puVar16[0x11];
  uStack_7a0 = puVar16[0x10];
  uStack_788 = puVar16[0x13];
  uStack_790 = puVar16[0x12];
  uStack_780 = *(undefined1 *)(puVar16 + 0x14);
  uStack_7d8 = puVar16[9];
  uStack_7e0 = puVar16[8];
  uStack_7c8 = puVar16[0xb];
  uStack_7d0 = puVar16[10];
  uStack_7b8 = puVar16[0xd];
  uStack_7c0 = puVar16[0xc];
  uStack_7a8 = puVar16[0xf];
  uStack_7b0 = puVar16[0xe];
  uStack_818 = puVar16[1];
  uStack_820 = *puVar16;
  uStack_808 = puVar16[3];
  uStack_810 = puVar16[2];
  uStack_7f8 = puVar16[5];
  uStack_800 = puVar16[4];
  uStack_7e8 = puVar16[7];
  uStack_7f0 = puVar16[6];
  iVar5 = (int)&uStack_820;
  func_0x000100dbd9b0();
  if (iVar5 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_2c8 = uStack_798;
    uStack_2d0 = uStack_7a0;
    uStack_2b8 = uStack_788;
    uStack_2c0 = uStack_790;
    uStack_2b0 = uStack_780;
    uStack_308 = uStack_7d8;
    uStack_310 = uStack_7e0;
    uStack_2f8 = uStack_7c8;
    uStack_300 = uStack_7d0;
    uStack_2d8 = uStack_7a8;
    uStack_2e0 = uStack_7b0;
    uStack_2e8 = uStack_7b8;
    uStack_2f0 = uStack_7c0;
    uStack_348 = uStack_818;
    uStack_350 = uStack_820;
    uStack_338 = uStack_808;
    uStack_340 = uStack_810;
    uStack_318 = uStack_7e8;
    uStack_320 = uStack_7f0;
    uStack_328 = uStack_7f8;
    uStack_330 = uStack_800;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046c1d1c(param_1);
  }
  fVar18 = *(float *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x8c));
  fVar19 = 0.0;
  if (fVar18 != 0.0) {
    fVar19 = fVar18;
  }
  __ss6HasherV8_combineyys6UInt32VF(fVar19);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x90)));
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x94));
  uStack_858 = puVar16[0x11];
  uStack_860 = puVar16[0x10];
  uStack_848 = puVar16[0x13];
  uStack_850 = puVar16[0x12];
  uStack_840 = puVar16[0x14];
  uStack_838 = (undefined1)puVar16[0x15];
  uStack_82f = *(undefined8 *)((long)puVar16 + 0xb1);
  uStack_837 = (undefined7)*(undefined8 *)((long)puVar16 + 0xa9);
  uStack_830 = (undefined1)((ulong)*(undefined8 *)((long)puVar16 + 0xa9) >> 0x38);
  uStack_898 = puVar16[9];
  uStack_8a0 = puVar16[8];
  uStack_888 = puVar16[0xb];
  uStack_890 = puVar16[10];
  uStack_878 = puVar16[0xd];
  uStack_880 = puVar16[0xc];
  uStack_868 = puVar16[0xf];
  uStack_870 = puVar16[0xe];
  uStack_8d8 = puVar16[1];
  uStack_8e0 = *puVar16;
  uStack_8c8 = puVar16[3];
  uStack_8d0 = puVar16[2];
  uStack_8b8 = puVar16[5];
  uStack_8c0 = puVar16[4];
  uStack_8a8 = puVar16[7];
  uStack_8b0 = puVar16[6];
  iVar5 = (int)&uStack_8e0;
  func_0x000101541310();
  if (iVar5 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_388 = uStack_858;
    uStack_390 = uStack_860;
    uStack_378 = uStack_848;
    uStack_380 = uStack_850;
    uStack_368 = uStack_838;
    uStack_370 = uStack_840;
    uStack_35f = uStack_82f;
    uStack_367 = uStack_837;
    uStack_360 = uStack_830;
    uStack_3c8 = uStack_898;
    uStack_3d0 = uStack_8a0;
    uStack_3b8 = uStack_888;
    uStack_3c0 = uStack_890;
    uStack_3a8 = uStack_878;
    uStack_3b0 = uStack_880;
    uStack_398 = uStack_868;
    uStack_3a0 = uStack_870;
    uStack_408 = uStack_8d8;
    uStack_410 = uStack_8e0;
    uStack_3f8 = uStack_8c8;
    uStack_400 = uStack_8d0;
    uStack_3e8 = uStack_8b8;
    uStack_3f0 = uStack_8c0;
    uStack_3d8 = uStack_8a8;
    uStack_3e0 = uStack_8b0;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046c99e0(param_1);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x98)));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x9c)));
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0xa0)));
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0xa4)));
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0xa8)));
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0xac));
  lVar6 = puVar16[1];
  if (lVar6 != 0) {
    uVar15 = puVar16[2];
    lVar7 = puVar16[3];
    uVar17 = *puVar16;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar17,lVar6);
    if (lVar7 != 0) {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar15,lVar7);
      goto LAB_1046cbabc;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
LAB_1046cbabc:
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0xb0)));
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0xb4)));
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0xb8));
  uStack_908 = puVar16[0x11];
  uStack_910 = puVar16[0x10];
  uStack_8f8 = puVar16[0x13];
  uStack_900 = puVar16[0x12];
  uStack_8f0 = *(undefined1 *)(puVar16 + 0x14);
  uStack_948 = puVar16[9];
  uStack_950 = puVar16[8];
  uStack_938 = puVar16[0xb];
  uStack_940 = puVar16[10];
  uStack_928 = puVar16[0xd];
  uStack_930 = puVar16[0xc];
  uStack_918 = puVar16[0xf];
  uStack_920 = puVar16[0xe];
  uStack_988 = puVar16[1];
  uStack_990 = *puVar16;
  uStack_978 = puVar16[3];
  uStack_980 = puVar16[2];
  uStack_968 = puVar16[5];
  uStack_970 = puVar16[4];
  uStack_958 = puVar16[7];
  uStack_960 = puVar16[6];
  iVar5 = (int)&uStack_990;
  func_0x000100dbd9b0();
  if (iVar5 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_438 = uStack_908;
    uStack_440 = uStack_910;
    uStack_428 = uStack_8f8;
    uStack_430 = uStack_900;
    uStack_420 = uStack_8f0;
    uStack_478 = uStack_948;
    uStack_480 = uStack_950;
    uStack_468 = uStack_938;
    uStack_470 = uStack_940;
    uStack_448 = uStack_918;
    uStack_450 = uStack_920;
    uStack_458 = uStack_928;
    uStack_460 = uStack_930;
    uStack_4b8 = uStack_988;
    uStack_4c0 = uStack_990;
    uStack_4a8 = uStack_978;
    uStack_4b0 = uStack_980;
    uStack_488 = uStack_958;
    uStack_490 = uStack_960;
    uStack_498 = uStack_968;
    uStack_4a0 = uStack_970;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046c1d1c(param_1);
  }
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0xbc));
  uStack_9b8 = puVar16[0x11];
  uStack_9c0 = puVar16[0x10];
  uStack_9a8 = puVar16[0x13];
  uStack_9b0 = puVar16[0x12];
  uStack_9a0 = *(undefined1 *)(puVar16 + 0x14);
  uStack_9f8 = puVar16[9];
  uStack_a00 = puVar16[8];
  uStack_9e8 = puVar16[0xb];
  uStack_9f0 = puVar16[10];
  uStack_9d8 = puVar16[0xd];
  uStack_9e0 = puVar16[0xc];
  uStack_9c8 = puVar16[0xf];
  uStack_9d0 = puVar16[0xe];
  uStack_a38 = puVar16[1];
  uStack_a40 = *puVar16;
  uStack_a28 = puVar16[3];
  uStack_a30 = puVar16[2];
  uStack_a18 = puVar16[5];
  uStack_a20 = puVar16[4];
  uStack_a08 = puVar16[7];
  uStack_a10 = puVar16[6];
  iVar5 = (int)&uStack_a40;
  func_0x000100dbd9b0();
  if (iVar5 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_4e8 = uStack_9b8;
    uStack_4f0 = uStack_9c0;
    uStack_4d8 = uStack_9a8;
    uStack_4e0 = uStack_9b0;
    uStack_4d0 = uStack_9a0;
    uStack_528 = uStack_9f8;
    uStack_530 = uStack_a00;
    uStack_518 = uStack_9e8;
    uStack_520 = uStack_9f0;
    uStack_4f8 = uStack_9c8;
    uStack_500 = uStack_9d0;
    uStack_508 = uStack_9d8;
    uStack_510 = uStack_9e0;
    uStack_568 = uStack_a38;
    uStack_570 = uStack_a40;
    uStack_558 = uStack_a28;
    uStack_560 = uStack_a30;
    uStack_538 = uStack_a08;
    uStack_540 = uStack_a10;
    uStack_548 = uStack_a18;
    uStack_550 = uStack_a20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046c1d1c(param_1);
  }
  bVar4 = *(byte *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0xc0));
  if (bVar4 == 2) {
    bVar4 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar4 = bVar4 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar4);
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0xc4)));
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 200)));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0xcc)));
  return;
}



/* Entry: 1046cbcb8; end: 1046cbcf3;  */

void FUN_1046cbcb8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1046cae5c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046cbcf4; end: 1046cbcf7;  */

void FUN_1046cbcf4(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  double *unaff_x20;
  double dVar11;
  ulong uVar12;
  double dVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_a80 [8];
  undefined1 *puStack_a78;
  long lStack_a70;
  long lStack_a68;
  long lStack_a60;
  long lStack_a58;
  long lStack_a50;
  long lStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined1 uStack_9a0;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined1 uStack_838;
  undefined7 uStack_837;
  undefined1 uStack_830;
  undefined8 uStack_82f;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined1 uStack_780;
  undefined1 auStack_770 [352];
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined1 uStack_4d0;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 uStack_420;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 uStack_368;
  undefined7 uStack_367;
  undefined1 uStack_360;
  undefined8 uStack_35f;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 uStack_2b0;
  undefined1 auStack_2a8 [352];
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  byte bStack_130;
  byte bStack_12f;
  byte bStack_12e;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar6 = 0;
  func_0x000100b91fbc();
  lStack_a50 = *(long *)(lVar6 + -8);
  lStack_a48 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a50 + 0x40));
  lVar6 = 0x112db39a8;
  puStack_a78 = auStack_a80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)(auStack_a80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar7 = 0;
  lStack_a58 = lVar10;
  __s10Foundation4UUIDVMa();
  lStack_a60 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a60 + 0x40));
  lVar10 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar6 = lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_a68 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12;
  lStack_a70 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12_00;
  dVar11 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar11 = *unaff_x20;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar11);
  dVar11 = 0.0;
  if (unaff_x20[1] != 0.0) {
    dVar11 = unaff_x20[1];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar11);
  dVar11 = 0.0;
  if (unaff_x20[2] != 0.0) {
    dVar11 = unaff_x20[2];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar11);
  dVar11 = 0.0;
  if (unaff_x20[3] != 0.0) {
    dVar11 = unaff_x20[3];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar11);
  __ss6HasherV8_combineyySuF(unaff_x20[4]);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[5],unaff_x20[6]);
  dVar11 = unaff_x20[8];
  if (dVar11 == 0.0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    dVar11 = unaff_x20[10];
    if (dVar11 == 0.0) goto LAB_1046cb110;
LAB_1046cb060:
    dVar13 = unaff_x20[9];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,dVar13,dVar11);
    dVar11 = unaff_x20[0xc];
    if (dVar11 != 0.0) goto LAB_1046cb088;
LAB_1046cb124:
    __ss6HasherV8_combineyys5UInt8VF(0);
    dVar11 = unaff_x20[0xe];
    if (dVar11 == 0.0) goto LAB_1046cb138;
LAB_1046cb0b0:
    dVar13 = unaff_x20[0xd];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,dVar13,dVar11);
    dVar11 = unaff_x20[0x10];
    if (dVar11 != 0.0) goto LAB_1046cb0d8;
LAB_1046cb14c:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    dVar13 = unaff_x20[7];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,dVar13,dVar11);
    dVar11 = unaff_x20[10];
    if (dVar11 != 0.0) goto LAB_1046cb060;
LAB_1046cb110:
    __ss6HasherV8_combineyys5UInt8VF(0);
    dVar11 = unaff_x20[0xc];
    if (dVar11 == 0.0) goto LAB_1046cb124;
LAB_1046cb088:
    dVar13 = unaff_x20[0xb];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,dVar13,dVar11);
    dVar11 = unaff_x20[0xe];
    if (dVar11 != 0.0) goto LAB_1046cb0b0;
LAB_1046cb138:
    __ss6HasherV8_combineyys5UInt8VF(0);
    dVar11 = unaff_x20[0x10];
    if (dVar11 == 0.0) goto LAB_1046cb14c;
LAB_1046cb0d8:
    dVar13 = unaff_x20[0xf];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,dVar13,dVar11);
  }
  lVar8 = 0;
  func_0x000100b91d00();
  func_0x0001046d8c0c((long)unaff_x20 + (long)*(int *)(lVar8 + 0x3c),lVar6,0x112d3bc20,
                      &UNK_10d904ef0);
  lVar3 = lStack_a60;
  pcVar14 = *(code **)(lStack_a60 + 0x30);
  lVar9 = lVar6;
  (*pcVar14)(lVar6,1,lVar7);
  if ((int)lVar9 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar3 + 0x20))(lVar10,lVar6,lVar7);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar15 = 0x112d6c668;
    func_0x0001046d8d44(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar7,uVar15);
    (**(code **)(lVar3 + 8))(lVar10,lVar7);
  }
  lVar6 = lStack_a70;
  func_0x0001046d8c0c((long)unaff_x20 + (long)*(int *)(lVar8 + 0x40),lStack_a70,0x112d3bc20,
                      &UNK_10d904ef0);
  lVar9 = lVar6;
  (*pcVar14)(lVar6,1,lVar7);
  if ((int)lVar9 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar3 + 0x20))(lVar10,lVar6,lVar7);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar15 = 0x112d6c668;
    func_0x0001046d8d44(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar7,uVar15);
    (**(code **)(lVar3 + 8))(lVar10,lVar7);
  }
  lVar6 = lStack_a68;
  func_0x0001046d8c0c((long)unaff_x20 + (long)*(int *)(lVar8 + 0x44),lStack_a68,0x112d3bc20,
                      &UNK_10d904ef0);
  lVar9 = lVar6;
  (*pcVar14)(lVar6,1,lVar7);
  if ((int)lVar9 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar3 + 0x20))(lVar10,lVar6,lVar7);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar15 = 0x112d6c668;
    func_0x0001046d8d44(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar7,uVar15);
    (**(code **)(lVar3 + 8))(lVar10,lVar7);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x48)));
  FUN_1046cfa8c(param_1,*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x4c)));
  lVar6 = *(long *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x50));
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar6 + 0x10));
    lVar7 = *(long *)(lVar6 + 0x10);
    if (lVar7 != 0) {
      puVar16 = (undefined8 *)(lVar6 + 0x28);
      do {
        uVar15 = puVar16[-1];
        uVar17 = *puVar16;
        _swift_bridgeObjectRetain(uVar17);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar15,uVar17);
        _swift_bridgeObjectRelease(uVar17);
        puVar16 = puVar16 + 2;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  lVar6 = *(long *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x54));
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar6 + 0x10));
    lVar7 = *(long *)(lVar6 + 0x10);
    if (lVar7 != 0) {
      puVar16 = (undefined8 *)(lVar6 + 0x28);
      do {
        uVar15 = puVar16[-1];
        uVar17 = *puVar16;
        _swift_bridgeObjectRetain(uVar17);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar15,uVar17);
        _swift_bridgeObjectRelease(uVar17);
        puVar16 = puVar16 + 2;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  lVar6 = *(long *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x58));
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar6 + 0x10));
    lVar7 = *(long *)(lVar6 + 0x10);
    if (lVar7 != 0) {
      puVar16 = (undefined8 *)(lVar6 + 0x28);
      do {
        uVar15 = puVar16[-1];
        uVar17 = *puVar16;
        _swift_bridgeObjectRetain(uVar17);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar15,uVar17);
        _swift_bridgeObjectRelease(uVar17);
        puVar16 = puVar16 + 2;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x5c));
  uStack_5a8 = puVar16[0xd];
  uStack_5b0 = puVar16[0xc];
  uStack_598 = puVar16[0xf];
  uStack_5a0 = puVar16[0xe];
  uStack_588 = puVar16[0x11];
  uStack_590 = puVar16[0x10];
  uStack_578 = puVar16[0x13];
  uStack_580 = puVar16[0x12];
  uStack_5e8 = puVar16[5];
  uStack_5f0 = puVar16[4];
  uStack_5d8 = puVar16[7];
  uStack_5e0 = puVar16[6];
  uStack_5c8 = puVar16[9];
  uStack_5d0 = puVar16[8];
  uStack_5b8 = puVar16[0xb];
  uStack_5c0 = puVar16[10];
  uStack_608 = puVar16[1];
  uStack_610 = *puVar16;
  uStack_5f8 = puVar16[3];
  uStack_600 = puVar16[2];
  iVar5 = (int)&uStack_610;
  FUN_1046d2a38();
  if (iVar5 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_b8 = uStack_5a8;
    uStack_c0 = uStack_5b0;
    uStack_a8 = uStack_598;
    uStack_b0 = uStack_5a0;
    uStack_98 = uStack_588;
    uStack_a0 = uStack_590;
    uStack_88 = uStack_578;
    uStack_90 = uStack_580;
    uStack_f8 = uStack_5e8;
    uStack_100 = uStack_5f0;
    uStack_e8 = uStack_5d8;
    uStack_f0 = uStack_5e0;
    uStack_d8 = uStack_5c8;
    uStack_e0 = uStack_5d0;
    uStack_c8 = uStack_5b8;
    uStack_d0 = uStack_5c0;
    uStack_118 = uStack_608;
    uStack_120 = uStack_610;
    uStack_108 = uStack_5f8;
    uStack_110 = uStack_600;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047a2bfc(param_1);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x60)));
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 100));
  if (puVar16[1] == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_128 = puVar16[4];
    uVar1 = *(undefined4 *)(puVar16 + 3);
    uStack_138 = puVar16[2];
    uStack_148 = *puVar16;
    bStack_130 = (byte)uVar1 & 1;
    bStack_12f = (byte)((uint)uVar1 >> 8) & 1;
    bStack_12e = (byte)((uint)uVar1 >> 0x10) & 1;
    lStack_140 = puVar16[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_104759448(param_1);
  }
  _memcpy(auStack_770,(long)unaff_x20 + (long)*(int *)(lVar8 + 0x68),0x160);
  iVar5 = (int)auStack_770;
  func_0x000101542f6c();
  if (iVar5 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    _memcpy(auStack_2a8,auStack_770,0x160);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_10475a088(param_1);
  }
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x6c));
  uVar12 = puVar16[1];
  if (uVar12 >> 0x3c < 0xf) {
    uVar15 = *puVar16;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar15,uVar12);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x70)));
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x74));
  lVar6 = puVar16[1];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar15 = *puVar16;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar15,lVar6);
  }
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x78));
  lVar6 = puVar16[1];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar15 = *puVar16;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar15,lVar6);
  }
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x7c));
  lVar6 = puVar16[1];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar15 = *puVar16;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar15,lVar6);
  }
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x80));
  uVar12 = puVar16[1];
  if (uVar12 >> 0x3c < 0xf) {
    uVar15 = *puVar16;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar15,uVar12);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  lVar6 = lStack_a58;
  func_0x0001046d8c0c((long)unaff_x20 + (long)*(int *)(lVar8 + 0x84),lStack_a58,0x112db39a8,
                      &UNK_10d95dd90);
  lVar7 = lVar6;
  (**(code **)(lStack_a50 + 0x30))(lVar6,1,lStack_a48);
  puVar2 = puStack_a78;
  if ((int)lVar7 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001046d8c54(lVar6,puStack_a78,&SUB_100b91fbc);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_104841c54(param_1);
    func_0x0001046d8c98(puVar2,&SUB_100b91fbc);
  }
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x88));
  uStack_798 = puVar16[0x11];
  uStack_7a0 = puVar16[0x10];
  uStack_788 = puVar16[0x13];
  uStack_790 = puVar16[0x12];
  uStack_780 = *(undefined1 *)(puVar16 + 0x14);
  uStack_7d8 = puVar16[9];
  uStack_7e0 = puVar16[8];
  uStack_7c8 = puVar16[0xb];
  uStack_7d0 = puVar16[10];
  uStack_7b8 = puVar16[0xd];
  uStack_7c0 = puVar16[0xc];
  uStack_7a8 = puVar16[0xf];
  uStack_7b0 = puVar16[0xe];
  uStack_818 = puVar16[1];
  uStack_820 = *puVar16;
  uStack_808 = puVar16[3];
  uStack_810 = puVar16[2];
  uStack_7f8 = puVar16[5];
  uStack_800 = puVar16[4];
  uStack_7e8 = puVar16[7];
  uStack_7f0 = puVar16[6];
  iVar5 = (int)&uStack_820;
  func_0x000100dbd9b0();
  if (iVar5 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_2c8 = uStack_798;
    uStack_2d0 = uStack_7a0;
    uStack_2b8 = uStack_788;
    uStack_2c0 = uStack_790;
    uStack_2b0 = uStack_780;
    uStack_308 = uStack_7d8;
    uStack_310 = uStack_7e0;
    uStack_2f8 = uStack_7c8;
    uStack_300 = uStack_7d0;
    uStack_2d8 = uStack_7a8;
    uStack_2e0 = uStack_7b0;
    uStack_2e8 = uStack_7b8;
    uStack_2f0 = uStack_7c0;
    uStack_348 = uStack_818;
    uStack_350 = uStack_820;
    uStack_338 = uStack_808;
    uStack_340 = uStack_810;
    uStack_318 = uStack_7e8;
    uStack_320 = uStack_7f0;
    uStack_328 = uStack_7f8;
    uStack_330 = uStack_800;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046c1d1c(param_1);
  }
  fVar18 = *(float *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x8c));
  fVar19 = 0.0;
  if (fVar18 != 0.0) {
    fVar19 = fVar18;
  }
  __ss6HasherV8_combineyys6UInt32VF(fVar19);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x90)));
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x94));
  uStack_858 = puVar16[0x11];
  uStack_860 = puVar16[0x10];
  uStack_848 = puVar16[0x13];
  uStack_850 = puVar16[0x12];
  uStack_840 = puVar16[0x14];
  uStack_838 = (undefined1)puVar16[0x15];
  uStack_82f = *(undefined8 *)((long)puVar16 + 0xb1);
  uStack_837 = (undefined7)*(undefined8 *)((long)puVar16 + 0xa9);
  uStack_830 = (undefined1)((ulong)*(undefined8 *)((long)puVar16 + 0xa9) >> 0x38);
  uStack_898 = puVar16[9];
  uStack_8a0 = puVar16[8];
  uStack_888 = puVar16[0xb];
  uStack_890 = puVar16[10];
  uStack_878 = puVar16[0xd];
  uStack_880 = puVar16[0xc];
  uStack_868 = puVar16[0xf];
  uStack_870 = puVar16[0xe];
  uStack_8d8 = puVar16[1];
  uStack_8e0 = *puVar16;
  uStack_8c8 = puVar16[3];
  uStack_8d0 = puVar16[2];
  uStack_8b8 = puVar16[5];
  uStack_8c0 = puVar16[4];
  uStack_8a8 = puVar16[7];
  uStack_8b0 = puVar16[6];
  iVar5 = (int)&uStack_8e0;
  func_0x000101541310();
  if (iVar5 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_388 = uStack_858;
    uStack_390 = uStack_860;
    uStack_378 = uStack_848;
    uStack_380 = uStack_850;
    uStack_368 = uStack_838;
    uStack_370 = uStack_840;
    uStack_35f = uStack_82f;
    uStack_367 = uStack_837;
    uStack_360 = uStack_830;
    uStack_3c8 = uStack_898;
    uStack_3d0 = uStack_8a0;
    uStack_3b8 = uStack_888;
    uStack_3c0 = uStack_890;
    uStack_3a8 = uStack_878;
    uStack_3b0 = uStack_880;
    uStack_398 = uStack_868;
    uStack_3a0 = uStack_870;
    uStack_408 = uStack_8d8;
    uStack_410 = uStack_8e0;
    uStack_3f8 = uStack_8c8;
    uStack_400 = uStack_8d0;
    uStack_3e8 = uStack_8b8;
    uStack_3f0 = uStack_8c0;
    uStack_3d8 = uStack_8a8;
    uStack_3e0 = uStack_8b0;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046c99e0(param_1);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x98)));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x9c)));
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0xa0)));
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0xa4)));
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0xa8)));
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0xac));
  lVar6 = puVar16[1];
  if (lVar6 != 0) {
    uVar15 = puVar16[2];
    lVar7 = puVar16[3];
    uVar17 = *puVar16;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar17,lVar6);
    if (lVar7 != 0) {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar15,lVar7);
      goto LAB_1046cbabc;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
LAB_1046cbabc:
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0xb0)));
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0xb4)));
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0xb8));
  uStack_908 = puVar16[0x11];
  uStack_910 = puVar16[0x10];
  uStack_8f8 = puVar16[0x13];
  uStack_900 = puVar16[0x12];
  uStack_8f0 = *(undefined1 *)(puVar16 + 0x14);
  uStack_948 = puVar16[9];
  uStack_950 = puVar16[8];
  uStack_938 = puVar16[0xb];
  uStack_940 = puVar16[10];
  uStack_928 = puVar16[0xd];
  uStack_930 = puVar16[0xc];
  uStack_918 = puVar16[0xf];
  uStack_920 = puVar16[0xe];
  uStack_988 = puVar16[1];
  uStack_990 = *puVar16;
  uStack_978 = puVar16[3];
  uStack_980 = puVar16[2];
  uStack_968 = puVar16[5];
  uStack_970 = puVar16[4];
  uStack_958 = puVar16[7];
  uStack_960 = puVar16[6];
  iVar5 = (int)&uStack_990;
  func_0x000100dbd9b0();
  if (iVar5 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_438 = uStack_908;
    uStack_440 = uStack_910;
    uStack_428 = uStack_8f8;
    uStack_430 = uStack_900;
    uStack_420 = uStack_8f0;
    uStack_478 = uStack_948;
    uStack_480 = uStack_950;
    uStack_468 = uStack_938;
    uStack_470 = uStack_940;
    uStack_448 = uStack_918;
    uStack_450 = uStack_920;
    uStack_458 = uStack_928;
    uStack_460 = uStack_930;
    uStack_4b8 = uStack_988;
    uStack_4c0 = uStack_990;
    uStack_4a8 = uStack_978;
    uStack_4b0 = uStack_980;
    uStack_488 = uStack_958;
    uStack_490 = uStack_960;
    uStack_498 = uStack_968;
    uStack_4a0 = uStack_970;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046c1d1c(param_1);
  }
  puVar16 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0xbc));
  uStack_9b8 = puVar16[0x11];
  uStack_9c0 = puVar16[0x10];
  uStack_9a8 = puVar16[0x13];
  uStack_9b0 = puVar16[0x12];
  uStack_9a0 = *(undefined1 *)(puVar16 + 0x14);
  uStack_9f8 = puVar16[9];
  uStack_a00 = puVar16[8];
  uStack_9e8 = puVar16[0xb];
  uStack_9f0 = puVar16[10];
  uStack_9d8 = puVar16[0xd];
  uStack_9e0 = puVar16[0xc];
  uStack_9c8 = puVar16[0xf];
  uStack_9d0 = puVar16[0xe];
  uStack_a38 = puVar16[1];
  uStack_a40 = *puVar16;
  uStack_a28 = puVar16[3];
  uStack_a30 = puVar16[2];
  uStack_a18 = puVar16[5];
  uStack_a20 = puVar16[4];
  uStack_a08 = puVar16[7];
  uStack_a10 = puVar16[6];
  iVar5 = (int)&uStack_a40;
  func_0x000100dbd9b0();
  if (iVar5 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_4e8 = uStack_9b8;
    uStack_4f0 = uStack_9c0;
    uStack_4d8 = uStack_9a8;
    uStack_4e0 = uStack_9b0;
    uStack_4d0 = uStack_9a0;
    uStack_528 = uStack_9f8;
    uStack_530 = uStack_a00;
    uStack_518 = uStack_9e8;
    uStack_520 = uStack_9f0;
    uStack_4f8 = uStack_9c8;
    uStack_500 = uStack_9d0;
    uStack_508 = uStack_9d8;
    uStack_510 = uStack_9e0;
    uStack_568 = uStack_a38;
    uStack_570 = uStack_a40;
    uStack_558 = uStack_a28;
    uStack_560 = uStack_a30;
    uStack_538 = uStack_a08;
    uStack_540 = uStack_a10;
    uStack_548 = uStack_a18;
    uStack_550 = uStack_a20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046c1d1c(param_1);
  }
  bVar4 = *(byte *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0xc0));
  if (bVar4 == 2) {
    bVar4 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar4 = bVar4 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar4);
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0xc4)));
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 200)));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0xcc)));
  return;
}



/* Entry: 1046cbcf8; end: 1046cbd2f;  */

void FUN_1046cbcf8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1046cae5c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046cbd30; end: 1046cbd33;  */

byte FUN_1046cbd30(double *param_1,double *param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  double *pdVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  code *pcVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  double dVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  double dVar20;
  ulong uVar21;
  byte bVar22;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar23;
  long extraout_x8_01;
  undefined8 *puVar24;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *pcVar25;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  code *pcVar26;
  undefined8 *puVar27;
  long lVar28;
  long lVar29;
  undefined8 *puVar30;
  long lVar31;
  undefined1 auStack_1b10 [4];
  uint uStack_1b0c;
  code *pcStack_1b08;
  long lStack_1b00;
  code *pcStack_1af8;
  double *pdStack_1af0;
  double *pdStack_1ae8;
  long lStack_1ae0;
  long lStack_1ad8;
  ulong uStack_1ad0;
  long lStack_1ac8;
  undefined1 *puStack_1ac0;
  undefined8 *puStack_1ab8;
  ulong uStack_1ab0;
  long lStack_1aa8;
  undefined8 uStack_1aa0;
  undefined8 uStack_1a98;
  undefined8 uStack_1a90;
  undefined8 uStack_1a88;
  undefined8 uStack_1a80;
  undefined8 uStack_1a78;
  undefined8 uStack_1a70;
  undefined8 uStack_1a68;
  undefined8 uStack_1a60;
  undefined8 uStack_1a58;
  undefined8 uStack_1a50;
  undefined8 uStack_1a48;
  undefined8 uStack_1a40;
  undefined8 uStack_1a38;
  undefined8 uStack_1a30;
  undefined8 uStack_1a28;
  undefined8 uStack_1a20;
  undefined8 uStack_1a18;
  undefined8 uStack_1a10;
  undefined8 uStack_1a08;
  undefined8 uStack_1a00;
  undefined1 uStack_19f8;
  undefined7 uStack_19f7;
  undefined1 uStack_19f0;
  undefined8 uStack_19ef;
  undefined8 uStack_1940;
  undefined8 uStack_1938;
  undefined8 uStack_1930;
  undefined8 uStack_1928;
  undefined8 uStack_1920;
  undefined8 uStack_1918;
  undefined8 uStack_1910;
  undefined8 uStack_1908;
  undefined8 uStack_1900;
  undefined8 uStack_18f8;
  undefined8 uStack_18f0;
  undefined8 uStack_18e8;
  undefined8 uStack_18e0;
  undefined8 uStack_18d8;
  undefined8 uStack_18d0;
  undefined8 uStack_18c8;
  undefined8 uStack_18c0;
  undefined8 uStack_18b8;
  undefined8 uStack_18b0;
  undefined8 uStack_18a8;
  undefined8 uStack_18a0;
  undefined1 uStack_1898;
  undefined7 uStack_1897;
  undefined1 uStack_1890;
  undefined8 uStack_188f;
  undefined8 uStack_17e0;
  undefined8 uStack_17d8;
  undefined8 uStack_17d0;
  undefined8 uStack_17c8;
  undefined8 uStack_17c0;
  undefined8 uStack_17b8;
  undefined8 uStack_17b0;
  undefined8 uStack_17a8;
  undefined8 uStack_17a0;
  undefined8 uStack_1798;
  undefined8 uStack_1790;
  undefined8 uStack_1788;
  undefined8 uStack_1780;
  undefined8 uStack_1778;
  undefined8 uStack_1770;
  undefined8 uStack_1768;
  undefined8 uStack_1760;
  undefined8 uStack_1758;
  undefined8 uStack_1750;
  undefined8 uStack_1748;
  undefined8 uStack_1740;
  undefined1 uStack_1738;
  undefined7 uStack_1737;
  undefined1 uStack_1730;
  undefined8 uStack_172f;
  undefined1 auStack_1678 [168];
  undefined8 uStack_15d0;
  undefined8 uStack_15c8;
  undefined8 uStack_15c0;
  undefined8 uStack_15b8;
  undefined8 uStack_15b0;
  undefined8 uStack_15a8;
  undefined8 uStack_15a0;
  undefined8 uStack_1598;
  undefined8 uStack_1590;
  undefined8 uStack_1588;
  undefined8 uStack_1580;
  undefined8 uStack_1578;
  undefined8 uStack_1570;
  undefined8 uStack_1568;
  undefined8 uStack_1560;
  undefined8 uStack_1558;
  undefined8 uStack_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined1 uStack_1530;
  undefined8 uStack_1520;
  undefined8 uStack_1518;
  undefined8 uStack_1510;
  undefined8 uStack_1508;
  undefined8 uStack_1500;
  undefined8 uStack_14f8;
  undefined8 uStack_14f0;
  undefined8 uStack_14e8;
  undefined8 uStack_14e0;
  undefined8 uStack_14d8;
  undefined8 uStack_14d0;
  undefined8 uStack_14c8;
  undefined8 uStack_14c0;
  undefined8 uStack_14b8;
  undefined8 uStack_14b0;
  undefined8 uStack_14a8;
  undefined8 uStack_14a0;
  undefined8 uStack_1498;
  undefined8 uStack_1490;
  undefined8 uStack_1488;
  undefined1 uStack_1480;
  undefined8 uStack_1470;
  undefined8 uStack_1468;
  undefined8 uStack_1460;
  undefined8 uStack_1458;
  undefined8 uStack_1450;
  undefined8 uStack_1448;
  undefined8 uStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  undefined8 uStack_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  undefined8 uStack_13e8;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined1 uStack_13d0;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  undefined8 uStack_1370;
  undefined8 uStack_1368;
  undefined8 uStack_1360;
  undefined8 uStack_1358;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined8 uStack_1330;
  undefined8 uStack_1328;
  undefined1 uStack_1320;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  undefined8 uStack_12d0;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  undefined8 uStack_12b0;
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  undefined1 uStack_1270;
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined1 uStack_11c0;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 uStack_1170;
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  undefined8 uStack_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined8 uStack_1118;
  undefined1 uStack_1110;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined1 uStack_1060;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 uStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined1 uStack_ce8;
  undefined7 uStack_ce7;
  undefined1 uStack_ce0;
  undefined7 uStack_cdf;
  undefined1 uStack_cd8;
  undefined7 uStack_cd7;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined1 uStack_c28;
  undefined7 uStack_c27;
  undefined1 uStack_c20;
  undefined8 uStack_c1f;
  undefined1 auStack_ad0 [352];
  undefined1 auStack_970 [352];
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined1 uStack_630;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined1 uStack_580;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined1 uStack_4d0;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 uStack_420;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 uStack_370;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_200;
  long lStack_1f8;
  code *pcStack_1f0;
  byte bStack_1e8;
  byte bStack_1e7;
  byte bStack_1e6;
  code *pcStack_1e0;
  double *pdStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  byte bStack_1c0;
  byte bStack_1bf;
  byte bStack_1be;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = 0;
  func_0x000100b91fbc();
  lStack_1ad8 = *(long *)(lVar12 + -8);
  lStack_1ac8 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1ad8 + 0x40));
  lVar12 = 0x112db39a8;
  puStack_1ac0 = auStack_1b10 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar23 = (long)(auStack_1b10 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar12 = 0x112db3b70;
  uStack_1ad0 = uVar23;
  func_0x0001000285a8(0x112db3b70,&UNK_10d95def0);
  lStack_1ae0 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar24 = (undefined8 *)(uVar23 - extraout_x8_01);
  lVar12 = 0;
  puStack_1ab8 = puVar24;
  __s10Foundation4UUIDVMa();
  uStack_1ab0 = *(ulong *)(lVar12 + -8);
  lStack_1aa8 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uStack_1ab0 + 0x40));
  lVar28 = (long)puVar24 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  uVar23 = lVar28 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar29 = uVar23 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar31 = lVar29 - extraout_x12_00;
  lVar12 = 0x112d68090;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  puVar27 = (undefined8 *)(lVar31 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar30 = (undefined8 *)((long)puVar27 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar24 = (undefined8 *)((long)puVar30 - extraout_x12_02);
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     ((param_1[3] == param_2[3] && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))))) {
    dVar20 = param_1[5];
    if (((dVar20 == param_2[5]) && (param_1[6] == param_2[6])) ||
       (pdStack_1ae8 = param_1,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
       , param_1 = pdStack_1ae8, ((ulong)dVar20 & 1) != 0)) {
      dVar20 = param_2[8];
      if (param_1[8] == 0.0) {
        if (dVar20 == 0.0) goto LAB_1046d074c;
      }
      else if ((dVar20 != 0.0) &&
              (((dVar13 = param_1[7], dVar13 == param_2[7] && (param_1[8] == dVar20)) ||
               (pdStack_1ae8 = param_1,
               __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (), param_1 = pdStack_1ae8, ((ulong)dVar13 & 1) != 0)))) {
LAB_1046d074c:
        dVar20 = param_2[10];
        if (param_1[10] == 0.0) {
          if (dVar20 == 0.0) goto LAB_1046d0798;
        }
        else if ((dVar20 != 0.0) &&
                (((dVar13 = param_1[9], dVar13 == param_2[9] && (param_1[10] == dVar20)) ||
                 (pdStack_1ae8 = param_1,
                 __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                           (), param_1 = pdStack_1ae8, ((ulong)dVar13 & 1) != 0)))) {
LAB_1046d0798:
          dVar20 = param_2[0xc];
          if (param_1[0xc] == 0.0) {
            if (dVar20 == 0.0) goto LAB_1046d07e4;
          }
          else if ((dVar20 != 0.0) &&
                  (((dVar13 = param_1[0xb], dVar13 == param_2[0xb] && (param_1[0xc] == dVar20)) ||
                   (pdStack_1ae8 = param_1,
                   __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                             (), param_1 = pdStack_1ae8, ((ulong)dVar13 & 1) != 0)))) {
LAB_1046d07e4:
            dVar20 = param_2[0xe];
            if (param_1[0xe] == 0.0) {
              if (dVar20 == 0.0) goto LAB_1046d0830;
            }
            else if ((dVar20 != 0.0) &&
                    (((dVar13 = param_1[0xd], dVar13 == param_2[0xd] && (param_1[0xe] == dVar20)) ||
                     (pdStack_1ae8 = param_1,
                     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                               (), param_1 = pdStack_1ae8, ((ulong)dVar13 & 1) != 0)))) {
LAB_1046d0830:
              dVar20 = param_2[0x10];
              pdStack_1af0 = param_2;
              if (param_1[0x10] == 0.0) {
                if (dVar20 == 0.0) goto LAB_1046d0874;
              }
              else if ((dVar20 != 0.0) &&
                      (((dVar13 = param_1[0xf], dVar13 == param_2[0xf] && (param_1[0x10] == dVar20))
                       || (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                     (), ((ulong)dVar13 & 1) != 0)))) {
LAB_1046d0874:
                lVar14 = 0;
                func_0x000100b91d00();
                pcStack_1af8 = (code *)(long)*(int *)(lVar14 + 0x3c);
                pdStack_1ae8 = (double *)(long)*(int *)(lVar12 + 0x30);
                lStack_1b00 = lVar14;
                func_0x0001046d8c0c((long)param_1 + (long)pcStack_1af8,puVar24,0x112d3bc20,
                                    &UNK_10d904ef0);
                func_0x0001046d8c0c((long)pdStack_1af0 + (long)pcStack_1af8,
                                    (long)puVar24 + (long)pdStack_1ae8,0x112d3bc20,&UNK_10d904ef0);
                pcStack_1af8 = *(code **)(uStack_1ab0 + 0x30);
                puVar15 = puVar24;
                (*pcStack_1af8)(puVar24,1,lStack_1aa8);
                if ((int)puVar15 == 1) {
                  lVar31 = (long)puVar24 + (long)pdStack_1ae8;
                  (*pcStack_1af8)(lVar31,1,lStack_1aa8);
                  if ((int)lVar31 == 1) {
                    func_0x0001046d8cd4(puVar24,0x112d3bc20,&UNK_10d904ef0);
LAB_1046d0a28:
                    iVar10 = *(int *)(lStack_1b00 + 0x40);
                    iVar11 = *(int *)(lVar12 + 0x30);
                    func_0x0001046d8c0c((long)param_1 + (long)iVar10,puVar30,0x112d3bc20,
                                        &UNK_10d904ef0);
                    pcStack_1b08 = (code *)(long)iVar11;
                    func_0x0001046d8c0c((long)pdStack_1af0 + (long)iVar10,
                                        (code *)((long)puVar30 + (long)iVar11),0x112d3bc20,
                                        &UNK_10d904ef0);
                    lVar31 = lStack_1aa8;
                    pcVar26 = pcStack_1af8;
                    puVar24 = puVar30;
                    (*pcStack_1af8)(puVar30,1,lStack_1aa8);
                    if ((int)puVar24 == 1) {
                      pcVar25 = (code *)((long)puVar30 + (long)pcStack_1b08);
                      (*pcVar26)(pcVar25,1,lVar31);
                      if ((int)pcVar25 != 1) {
LAB_1046d0b1c:
                        uVar18 = 0x112d68090;
                        puVar19 = &UNK_10da24400;
                        puVar24 = puVar30;
                        goto LAB_1046d0cc0;
                      }
                      func_0x0001046d8cd4(puVar30,0x112d3bc20,&UNK_10d904ef0);
                    }
                    else {
                      pdStack_1ae8 = param_1;
                      func_0x0001046d8c0c(puVar30,lVar29,0x112d3bc20,&UNK_10d904ef0);
                      pcVar8 = pcStack_1b08;
                      pcVar25 = (code *)((long)puVar30 + (long)pcStack_1b08);
                      (*pcVar26)(pcVar25,1,lVar31);
                      uVar21 = uStack_1ab0;
                      if ((int)pcVar25 == 1) {
                        (**(code **)(uStack_1ab0 + 8))(lVar29,lVar31);
                        goto LAB_1046d0b1c;
                      }
                      (**(code **)(uStack_1ab0 + 0x20))
                                (lVar28,(code *)((long)puVar30 + (long)pcVar8),lVar31);
                      uVar18 = 0x112d68098;
                      func_0x0001046d8d44(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                                          PTR___s10Foundation4UUIDVSQAAMc_110350c50);
                      lVar14 = lVar29;
                      __sSQ2eeoiySbx_xtFZTj(lVar29,lVar28,lVar31,uVar18);
                      pcStack_1b08 = (code *)CONCAT44(pcStack_1b08._4_4_,(int)lVar14);
                      pcVar26 = *(code **)(uVar21 + 8);
                      (*pcVar26)(lVar28,lStack_1aa8);
                      (*pcVar26)(lVar29,lStack_1aa8);
                      lVar31 = lStack_1aa8;
                      func_0x0001046d8cd4(puVar30,0x112d3bc20,&UNK_10d904ef0);
                      param_1 = pdStack_1ae8;
                      if (((ulong)pcStack_1b08 & 1) == 0) goto LAB_1046d0cc4;
                    }
                    iVar10 = *(int *)(lStack_1b00 + 0x44);
                    lVar12 = (long)*(int *)(lVar12 + 0x30);
                    func_0x0001046d8c0c((long)param_1 + (long)iVar10,puVar27,0x112d3bc20,
                                        &UNK_10d904ef0);
                    func_0x0001046d8c0c((long)pdStack_1af0 + (long)iVar10,(long)puVar27 + lVar12,
                                        0x112d3bc20,&UNK_10d904ef0);
                    pcVar26 = pcStack_1af8;
                    puVar24 = puVar27;
                    (*pcStack_1af8)(puVar27,1,lVar31);
                    if ((int)puVar24 == 1) {
                      lVar12 = (long)puVar27 + lVar12;
                      (*pcVar26)(lVar12,1,lVar31);
                      if ((int)lVar12 != 1) {
LAB_1046d0cac:
                        uVar18 = 0x112d68090;
                        puVar19 = &UNK_10da24400;
                        puVar24 = puVar27;
                        goto LAB_1046d0cc0;
                      }
                      func_0x0001046d8cd4(puVar27,0x112d3bc20,&UNK_10d904ef0);
                    }
                    else {
                      func_0x0001046d8c0c(puVar27,uVar23,0x112d3bc20,&UNK_10d904ef0);
                      lVar29 = (long)puVar27 + lVar12;
                      (*pcVar26)(lVar29,1,lVar31);
                      uVar21 = uStack_1ab0;
                      if ((int)lVar29 == 1) {
                        (**(code **)(uStack_1ab0 + 8))(uVar23,lVar31);
                        goto LAB_1046d0cac;
                      }
                      (**(code **)(uStack_1ab0 + 0x20))(lVar28,(long)puVar27 + lVar12,lVar31);
                      uVar18 = 0x112d68098;
                      func_0x0001046d8d44(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                                          PTR___s10Foundation4UUIDVSQAAMc_110350c50);
                      uVar17 = uVar23;
                      __sSQ2eeoiySbx_xtFZTj(uVar23,lVar28,lVar31,uVar18);
                      pcVar26 = *(code **)(uVar21 + 8);
                      (*pcVar26)(lVar28,lVar31);
                      (*pcVar26)(uVar23,lVar31);
                      func_0x0001046d8cd4(puVar27,0x112d3bc20,&UNK_10d904ef0);
                      if ((uVar17 & 1) == 0) goto LAB_1046d0cc4;
                    }
                    if (*(int *)((long)param_1 + (long)*(int *)(lStack_1b00 + 0x48)) ==
                        *(int *)((long)pdStack_1af0 + (long)*(int *)(lStack_1b00 + 0x48))) {
                      uVar23 = *(ulong *)((long)param_1 + (long)*(int *)(lStack_1b00 + 0x4c));
                      lVar12 = *(long *)((long)pdStack_1af0 + (long)*(int *)(lStack_1b00 + 0x4c));
                      if (uVar23 == 0) {
                        if (lVar12 == 0) {
LAB_1046d0de4:
                          uVar23 = *(ulong *)((long)param_1 + (long)*(int *)(lStack_1b00 + 0x50));
                          lVar12 = *(long *)((long)pdStack_1af0 + (long)*(int *)(lStack_1b00 + 0x50)
                                            );
                          if (uVar23 == 0) {
                            if (lVar12 == 0) goto LAB_1046d0e10;
                          }
                          else if ((lVar12 != 0) && (func_0x00010142cfc4(), (uVar23 & 1) != 0)) {
LAB_1046d0e10:
                            uVar23 = *(ulong *)((long)param_1 + (long)*(int *)(lStack_1b00 + 0x54));
                            lVar12 = *(long *)((long)pdStack_1af0 +
                                              (long)*(int *)(lStack_1b00 + 0x54));
                            if (uVar23 == 0) {
                              if (lVar12 == 0) goto LAB_1046d0e3c;
                            }
                            else if ((lVar12 != 0) && (func_0x00010142cfc4(), (uVar23 & 1) != 0)) {
LAB_1046d0e3c:
                              uVar23 = *(ulong *)((long)param_1 + (long)*(int *)(lStack_1b00 + 0x58)
                                                 );
                              lVar12 = *(long *)((long)pdStack_1af0 +
                                                (long)*(int *)(lStack_1b00 + 0x58));
                              if (uVar23 == 0) {
                                if (lVar12 == 0) goto LAB_1046d0e68;
                              }
                              else if ((lVar12 != 0) && (func_0x00010142cfc4(), (uVar23 & 1) != 0))
                              {
LAB_1046d0e68:
                                puVar24 = (undefined8 *)
                                          ((long)param_1 + (long)*(int *)(lStack_1b00 + 0x5c));
                                puVar27 = (undefined8 *)
                                          ((long)pdStack_1af0 + (long)*(int *)(lStack_1b00 + 0x5c));
                                uStack_d28 = puVar24[0xd];
                                uStack_d30 = puVar24[0xc];
                                uStack_798 = puVar24[0xf];
                                uStack_7a0 = puVar24[0xe];
                                uStack_d38 = puVar24[0xb];
                                uStack_d40 = puVar24[10];
                                uStack_7a8 = puVar24[0xd];
                                uStack_7b0 = puVar24[0xc];
                                uStack_d18 = puVar24[0xf];
                                uStack_d20 = puVar24[0xe];
                                uStack_788 = puVar24[0x11];
                                uStack_790 = puVar24[0x10];
                                uStack_d08 = puVar24[0x11];
                                uStack_d10 = puVar24[0x10];
                                uStack_778 = puVar24[0x13];
                                uStack_780 = puVar24[0x12];
                                uStack_d68 = puVar24[5];
                                uStack_d70 = puVar24[4];
                                uStack_7d8 = puVar24[7];
                                uStack_7e0 = puVar24[6];
                                uStack_d78 = puVar24[3];
                                uStack_d80 = puVar24[2];
                                uStack_7e8 = puVar24[5];
                                uStack_7f0 = puVar24[4];
                                uStack_d58 = puVar24[7];
                                uStack_d60 = puVar24[6];
                                uStack_7c8 = puVar24[9];
                                uStack_7d0 = puVar24[8];
                                uStack_d48 = puVar24[9];
                                uStack_d50 = puVar24[8];
                                uStack_7b8 = puVar24[0xb];
                                uStack_7c0 = puVar24[10];
                                uStack_808 = puVar24[1];
                                uStack_810 = *puVar24;
                                uStack_7f8 = puVar24[3];
                                uStack_800 = puVar24[2];
                                uStack_d88 = puVar24[1];
                                uStack_d90 = *puVar24;
                                uStack_cf8 = puVar24[0x13];
                                uStack_d00 = puVar24[0x12];
                                uStack_c88 = puVar27[0xd];
                                uStack_c90 = puVar27[0xc];
                                uStack_6f8 = puVar27[0xf];
                                uStack_700 = puVar27[0xe];
                                uStack_c98 = puVar27[0xb];
                                uStack_ca0 = puVar27[10];
                                uStack_708 = puVar27[0xd];
                                uStack_710 = puVar27[0xc];
                                uStack_c78 = puVar27[0xf];
                                uStack_c80 = puVar27[0xe];
                                uStack_6e8 = puVar27[0x11];
                                uStack_6f0 = puVar27[0x10];
                                uStack_c68 = puVar27[0x11];
                                uStack_c70 = puVar27[0x10];
                                uStack_6d8 = puVar27[0x13];
                                uStack_6e0 = puVar27[0x12];
                                uStack_cc8 = puVar27[5];
                                uStack_cd0 = puVar27[4];
                                uStack_738 = puVar27[7];
                                uStack_740 = puVar27[6];
                                uStack_748 = puVar27[5];
                                uStack_750 = puVar27[4];
                                uStack_cb8 = puVar27[7];
                                uStack_cc0 = puVar27[6];
                                uStack_728 = puVar27[9];
                                uStack_730 = puVar27[8];
                                uStack_ca8 = puVar27[9];
                                uStack_cb0 = puVar27[8];
                                uStack_718 = puVar27[0xb];
                                uStack_720 = puVar27[10];
                                uStack_768 = puVar27[1];
                                uStack_770 = *puVar27;
                                uStack_758 = puVar27[3];
                                uStack_760 = puVar27[2];
                                uStack_cf0 = *puVar27;
                                uStack_c58 = puVar27[0x13];
                                uStack_c60 = puVar27[0x12];
                                uStack_ce8 = (undefined1)puVar27[1];
                                uStack_ce7 = (undefined7)((ulong)puVar27[1] >> 8);
                                uStack_cd8 = (undefined1)puVar27[3];
                                uStack_cd7 = (undefined7)((ulong)puVar27[3] >> 8);
                                uStack_ce0 = (undefined1)puVar27[2];
                                uStack_cdf = (undefined7)((ulong)puVar27[2] >> 8);
                                iVar10 = (int)&uStack_d90;
                                FUN_1046d2a38();
                                if (iVar10 == 1) {
                                  iVar10 = (int)&uStack_cf0;
                                  FUN_1046d2a38();
                                  if (iVar10 != 1) {
LAB_1046d10a4:
                                    _memcpy(&uStack_1050,&uStack_d90,0x140);
                                    func_0x0001046d8c0c(&uStack_810,&uStack_360,0x11308da18,
                                                        &UNK_10dd2f158);
                                    func_0x0001046d8c0c(&uStack_770,&uStack_360,0x11308da18,
                                                        &UNK_10dd2f158);
                                    uVar18 = 0x11308db78;
                                    puVar19 = &UNK_10dd2f2f8;
LAB_1046d110c:
                                    puVar24 = &uStack_1050;
                                    goto LAB_1046d0cc0;
                                  }
                                  uStack_fe8 = uStack_d28;
                                  uStack_ff0 = uStack_d30;
                                  uStack_fd8 = uStack_d18;
                                  uStack_fe0 = uStack_d20;
                                  uStack_fc8 = uStack_d08;
                                  uStack_fd0 = uStack_d10;
                                  uStack_fb8 = uStack_cf8;
                                  uStack_fc0 = uStack_d00;
                                  uStack_1028 = uStack_d68;
                                  uStack_1030 = uStack_d70;
                                  uStack_1018 = uStack_d58;
                                  uStack_1020 = uStack_d60;
                                  uStack_1008 = uStack_d48;
                                  uStack_1010 = uStack_d50;
                                  uStack_ff8 = uStack_d38;
                                  uStack_1000 = uStack_d40;
                                  uStack_1048 = uStack_d88;
                                  uStack_1050 = uStack_d90;
                                  uStack_1038 = uStack_d78;
                                  uStack_1040 = uStack_d80;
                                  func_0x0001046d8c0c(&uStack_810,&uStack_360,0x11308da18,
                                                      &UNK_10dd2f158);
                                  func_0x0001046d8c0c(&uStack_770,&uStack_360,0x11308da18,
                                                      &UNK_10dd2f158);
                                  func_0x0001046d8cd4(&uStack_1050,0x11308da18,&UNK_10dd2f158);
LAB_1046d1250:
                                  if (*(char *)((long)param_1 + (long)*(int *)(lStack_1b00 + 0x60))
                                      == *(char *)((long)pdStack_1af0 +
                                                  (long)*(int *)(lStack_1b00 + 0x60))) {
                                    puVar24 = (undefined8 *)
                                              ((long)param_1 + (long)*(int *)(lStack_1b00 + 100));
                                    plVar1 = (long *)((long)pdStack_1af0 +
                                                     (long)*(int *)(lStack_1b00 + 100));
                                    uVar18 = *puVar24;
                                    lVar28 = puVar24[1];
                                    pcVar26 = (code *)puVar24[2];
                                    uVar5 = puVar24[3];
                                    pcVar25 = (code *)puVar24[4];
                                    pdVar4 = (double *)*plVar1;
                                    uVar23 = plVar1[1];
                                    lVar12 = plVar1[2];
                                    lVar29 = plVar1[3];
                                    lVar31 = plVar1[4];
                                    lStack_1aa8 = lVar31;
                                    if (lVar28 == 1) {
                                      if (uVar23 == 1) {
                                        func_0x000103de4004(uVar18,1,pcVar26,uVar5,pcVar25);
                                        func_0x000103de4004(pdVar4,1,lVar12,lVar29,lStack_1aa8);
                                        func_0x000103de4018(uVar18,1,pcVar26,uVar5,pcVar25);
LAB_1046d1478:
                                        lVar12 = (long)*(int *)(lStack_1b00 + 0x68);
                                        _memcpy(auStack_ad0,(long)param_1 + lVar12,0x160);
                                        _memcpy(&uStack_d90,(long)param_1 + lVar12,0x160);
                                        pdVar4 = pdStack_1af0;
                                        _memcpy(auStack_970,(long)pdStack_1af0 + lVar12,0x160);
                                        _memcpy(&uStack_c30,(long)pdVar4 + lVar12,0x160);
                                        iVar10 = (int)&uStack_d90;
                                        func_0x000101542f6c();
                                        if (iVar10 == 1) {
                                          iVar10 = (int)&uStack_c30;
                                          func_0x000101542f6c();
                                          if (iVar10 != 1) {
LAB_1046d1584:
                                            _memcpy(&uStack_1050,&uStack_d90,0x2c0);
                                            func_0x0001046d8c0c(auStack_ad0,&uStack_360,0x112db3a28,
                                                                &UNK_10d95ddb0);
                                            func_0x0001046d8c0c(auStack_970,&uStack_360,0x112db3a28,
                                                                &UNK_10d95ddb0);
                                            uVar18 = 0x113010758;
                                            puVar19 = &UNK_10dc96580;
                                            goto LAB_1046d110c;
                                          }
                                          _memcpy(&uStack_1050,&uStack_d90,0x160);
                                          func_0x0001046d8c0c(auStack_ad0,&uStack_360,0x112db3a28,
                                                              &UNK_10d95ddb0);
                                          func_0x0001046d8c0c(auStack_970,&uStack_360,0x112db3a28,
                                                              &UNK_10d95ddb0);
                                          func_0x0001046d8cd4(&uStack_1050,0x112db3a28,
                                                              &UNK_10d95ddb0);
                                        }
                                        else {
                                          _memcpy(&uStack_17e0,&uStack_d90,0x160);
                                          iVar10 = (int)&uStack_c30;
                                          func_0x000101542f6c();
                                          if (iVar10 == 1) goto LAB_1046d1584;
                                          _memcpy(&uStack_1940,&uStack_c30,0x160);
                                          _memcpy(&uStack_1050,&uStack_c30,0x160);
                                          _memcpy(&uStack_360,&uStack_17e0,0x160);
                                          func_0x0001046d8c0c(auStack_ad0,&uStack_1aa0,0x112db3a28,
                                                              &UNK_10d95ddb0);
                                          func_0x0001046d8c0c(auStack_970,&uStack_1aa0,0x112db3a28,
                                                              &UNK_10d95ddb0);
                                          puVar24 = &uStack_360;
                                          FUN_10475c13c(puVar24,&uStack_1050);
                                          func_0x0001046d8cd4(&uStack_1940,0x112db3a28,
                                                              &UNK_10d95ddb0);
                                          func_0x0001046d8cd4(&uStack_d90,0x112db3a28,&UNK_10d95ddb0
                                                             );
                                          if (((ulong)puVar24 & 1) == 0) goto LAB_1046d0cc4;
                                        }
                                        puVar2 = (ulong *)((long)param_1 +
                                                          (long)*(int *)(lStack_1b00 + 0x6c));
                                        puVar24 = (undefined8 *)
                                                  ((long)pdVar4 + (long)*(int *)(lStack_1b00 + 0x6c)
                                                  );
                                        uVar23 = *puVar2;
                                        uVar21 = puVar2[1];
                                        uVar18 = *puVar24;
                                        uVar17 = puVar24[1];
                                        if (uVar21 >> 0x3c < 0xf) {
                                          if (0xe < uVar17 >> 0x3c) goto LAB_1046d1700;
                                          func_0x000100de78a0(uVar23,uVar21);
                                          func_0x000100de78a0(uVar18,uVar17);
                                          uVar16 = uVar23;
                                          func_0x000100e25fcc(uVar23,uVar21,uVar18,uVar17);
                                          func_0x0001000b44c0(uVar18,uVar17);
                                          func_0x0001000b44c0(uVar23,uVar21);
                                          if ((uVar16 & 1) != 0) goto LAB_1046d1780;
                                        }
                                        else if (uVar17 >> 0x3c < 0xf) {
LAB_1046d1700:
                                          func_0x000100de78a0(uVar23,uVar21);
                                          func_0x000100de78a0(uVar18,uVar17);
                                          func_0x0001000b44c0(uVar23,uVar21);
                                          func_0x0001000b44c0(uVar18,uVar17);
                                        }
                                        else {
                                          func_0x000100de78a0(uVar23,uVar21);
                                          func_0x000100de78a0(uVar18,uVar17);
                                          func_0x0001000b44c0(uVar23,uVar21);
LAB_1046d1780:
                                          if (*(char *)((long)param_1 +
                                                       (long)*(int *)(lStack_1b00 + 0x70)) ==
                                              *(char *)((long)pdVar4 +
                                                       (long)*(int *)(lStack_1b00 + 0x70))) {
                                            puVar2 = (ulong *)((long)param_1 +
                                                              (long)*(int *)(lStack_1b00 + 0x74));
                                            uVar23 = puVar2[1];
                                            puVar3 = (ulong *)((long)pdVar4 +
                                                              (long)*(int *)(lStack_1b00 + 0x74));
                                            uVar21 = puVar3[1];
                                            if (uVar23 == 0) {
                                              if (uVar21 == 0) goto LAB_1046d17e4;
                                            }
                                            else if ((uVar21 != 0) &&
                                                    (((uVar17 = *puVar2, uVar17 == *puVar3 &&
                                                      (uVar23 == uVar21)) ||
                                                     (
                                                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                                            (), (uVar17 & 1) != 0)))) {
LAB_1046d17e4:
                                              puVar2 = (ulong *)((long)param_1 +
                                                                (long)*(int *)(lStack_1b00 + 0x78));
                                              uVar23 = puVar2[1];
                                              puVar3 = (ulong *)((long)pdVar4 +
                                                                (long)*(int *)(lStack_1b00 + 0x78));
                                              uVar21 = puVar3[1];
                                              if (uVar23 == 0) {
                                                if (uVar21 == 0) goto LAB_1046d1830;
                                              }
                                              else if ((uVar21 != 0) &&
                                                      (((uVar17 = *puVar2, uVar17 == *puVar3 &&
                                                        (uVar23 == uVar21)) ||
                                                       (
                                                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                                            (), (uVar17 & 1) != 0)))) {
LAB_1046d1830:
                                                puVar2 = (ulong *)((long)param_1 +
                                                                  (long)*(int *)(lStack_1b00 + 0x7c)
                                                                  );
                                                uVar23 = puVar2[1];
                                                puVar3 = (ulong *)((long)pdVar4 +
                                                                  (long)*(int *)(lStack_1b00 + 0x7c)
                                                                  );
                                                uVar21 = puVar3[1];
                                                if (uVar23 == 0) {
                                                  if (uVar21 == 0) goto LAB_1046d187c;
                                                }
                                                else if ((uVar21 != 0) &&
                                                        (((uVar17 = *puVar2, uVar17 == *puVar3 &&
                                                          (uVar23 == uVar21)) ||
                                                         (
                                                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                                            (), (uVar17 & 1) != 0)))) {
LAB_1046d187c:
                                                  puVar2 = (ulong *)((long)param_1 +
                                                                    (long)*(int *)(lStack_1b00 +
                                                                                  0x80));
                                                  puVar24 = (undefined8 *)
                                                            ((long)pdVar4 +
                                                            (long)*(int *)(lStack_1b00 + 0x80));
                                                  uVar23 = *puVar2;
                                                  uVar21 = puVar2[1];
                                                  uVar18 = *puVar24;
                                                  uVar17 = puVar24[1];
                                                  if (uVar21 >> 0x3c < 0xf) {
                                                    if (0xe < uVar17 >> 0x3c) goto LAB_1046d1700;
                                                    func_0x000100de78a0(uVar23,uVar21);
                                                    func_0x000100de78a0(uVar18,uVar17);
                                                    uVar16 = uVar23;
                                                    func_0x000100e25fcc(uVar23,uVar21,uVar18,uVar17)
                                                    ;
                                                    func_0x0001000b44c0(uVar18,uVar17);
                                                    func_0x0001000b44c0(uVar23,uVar21);
                                                    if ((uVar16 & 1) != 0) goto LAB_1046d1928;
                                                  }
                                                  else {
                                                    if (uVar17 >> 0x3c < 0xf) goto LAB_1046d1700;
                                                    func_0x000100de78a0(uVar23,uVar21);
                                                    func_0x000100de78a0(uVar18,uVar17);
                                                    func_0x0001000b44c0(uVar23,uVar21);
LAB_1046d1928:
                                                    puVar24 = puStack_1ab8;
                                                    iVar10 = *(int *)(lStack_1b00 + 0x84);
                                                    lVar12 = (long)*(int *)(lStack_1ae0 + 0x30);
                                                    func_0x0001046d8c0c((long)param_1 + (long)iVar10
                                                                        ,puStack_1ab8,0x112db39a8,
                                                                        &UNK_10d95dd90);
                                                    func_0x0001046d8c0c((long)pdVar4 + (long)iVar10,
                                                                        (long)puVar24 + lVar12,
                                                                        0x112db39a8,&UNK_10d95dd90);
                                                    pcVar26 = *(code **)(lStack_1ad8 + 0x30);
                                                    (*pcVar26)(puVar24,1,lStack_1ac8);
                                                    puVar27 = puStack_1ab8;
                                                    if ((int)puVar24 == 1) {
                                                      lVar12 = (long)puStack_1ab8 + lVar12;
                                                      (*pcVar26)(lVar12,1,lStack_1ac8);
                                                      if ((int)lVar12 != 1) {
LAB_1046d1a14:
                                                        uVar18 = 0x112db3b70;
                                                        puVar19 = &UNK_10d95def0;
                                                        puVar24 = puStack_1ab8;
                                                        goto LAB_1046d0cc0;
                                                      }
                                                      func_0x0001046d8cd4(puStack_1ab8,0x112db39a8,
                                                                          &UNK_10d95dd90);
                                                    }
                                                    else {
                                                      func_0x0001046d8c0c(puStack_1ab8,uStack_1ad0,
                                                                          0x112db39a8,&UNK_10d95dd90
                                                                         );
                                                      lVar28 = (long)puVar27 + lVar12;
                                                      (*pcVar26)(lVar28,1,lStack_1ac8);
                                                      puVar24 = puStack_1ab8;
                                                      puVar9 = puStack_1ac0;
                                                      if ((int)lVar28 == 1) {
                                                        func_0x0001046d8c98(uStack_1ad0,
                                                                            &SUB_100b91fbc);
                                                        goto LAB_1046d1a14;
                                                      }
                                                      func_0x0001046d8c54((long)puStack_1ab8 +
                                                                          lVar12,puStack_1ac0,
                                                                          &SUB_100b91fbc);
                                                      uVar23 = uStack_1ad0;
                                                      uVar21 = uStack_1ad0;
                                                      FUN_104841c50(uStack_1ad0,puVar9);
                                                      func_0x0001046d8c98(puVar9,&SUB_100b91fbc);
                                                      func_0x0001046d8c98(uVar23,&SUB_100b91fbc);
                                                      func_0x0001046d8cd4(puVar24,0x112db39a8,
                                                                          &UNK_10d95dd90);
                                                      if ((uVar21 & 1) == 0) goto LAB_1046d0cc4;
                                                    }
                                                    puVar24 = (undefined8 *)
                                                              ((long)param_1 +
                                                              (long)*(int *)(lStack_1b00 + 0x88));
                                                    puVar27 = (undefined8 *)
                                                              ((long)pdVar4 +
                                                              (long)*(int *)(lStack_1b00 + 0x88));
                                                    iVar10 = (int)&uStack_ce8;
                                                    uStack_d18 = puVar24[0xf];
                                                    uStack_d20 = puVar24[0xe];
                                                    uStack_1128 = puVar24[0x11];
                                                    uStack_1130 = puVar24[0x10];
                                                    uStack_d08 = puVar24[0x11];
                                                    uStack_d10 = puVar24[0x10];
                                                    uStack_1118 = puVar24[0x13];
                                                    uStack_1120 = puVar24[0x12];
                                                    uStack_d58 = puVar24[7];
                                                    uStack_d60 = puVar24[6];
                                                    uStack_1168 = puVar24[9];
                                                    uStack_1170 = puVar24[8];
                                                    uStack_d48 = puVar24[9];
                                                    uStack_d50 = puVar24[8];
                                                    uStack_1158 = puVar24[0xb];
                                                    uStack_1160 = puVar24[10];
                                                    uStack_d38 = puVar24[0xb];
                                                    uStack_d40 = puVar24[10];
                                                    uStack_1148 = puVar24[0xd];
                                                    uStack_1150 = puVar24[0xc];
                                                    uStack_d28 = puVar24[0xd];
                                                    uStack_d30 = puVar24[0xc];
                                                    uStack_1138 = puVar24[0xf];
                                                    uStack_1140 = puVar24[0xe];
                                                    uStack_11a8 = puVar24[1];
                                                    uStack_11b0 = *puVar24;
                                                    uStack_1198 = puVar24[3];
                                                    uStack_11a0 = puVar24[2];
                                                    uStack_1188 = puVar24[5];
                                                    uStack_1190 = puVar24[4];
                                                    uStack_1178 = puVar24[7];
                                                    uStack_1180 = puVar24[6];
                                                    uStack_d88 = puVar24[1];
                                                    uStack_d90 = *puVar24;
                                                    uStack_d78 = puVar24[3];
                                                    uStack_d80 = puVar24[2];
                                                    uStack_d68 = puVar24[5];
                                                    uStack_d70 = puVar24[4];
                                                    uStack_cf8 = puVar24[0x13];
                                                    uStack_d00 = puVar24[0x12];
                                                    uStack_c70 = puVar27[0xf];
                                                    uStack_c78 = puVar27[0xe];
                                                    uStack_1078 = puVar27[0x11];
                                                    uStack_1080 = puVar27[0x10];
                                                    uStack_c60 = puVar27[0x11];
                                                    uStack_c68 = puVar27[0x10];
                                                    uStack_1068 = puVar27[0x13];
                                                    uStack_1070 = puVar27[0x12];
                                                    uStack_cb0 = puVar27[7];
                                                    uStack_cb8 = puVar27[6];
                                                    uStack_10b8 = puVar27[9];
                                                    uStack_10c0 = puVar27[8];
                                                    uStack_ca0 = puVar27[9];
                                                    uStack_ca8 = puVar27[8];
                                                    uStack_10a8 = puVar27[0xb];
                                                    uStack_10b0 = puVar27[10];
                                                    uStack_c80 = puVar27[0xd];
                                                    uStack_c88 = puVar27[0xc];
                                                    uStack_1088 = puVar27[0xf];
                                                    uStack_1090 = puVar27[0xe];
                                                    uStack_c90 = puVar27[0xb];
                                                    uStack_c98 = puVar27[10];
                                                    uStack_1098 = puVar27[0xd];
                                                    uStack_10a0 = puVar27[0xc];
                                                    uStack_10f8 = puVar27[1];
                                                    uStack_1100 = *puVar27;
                                                    uStack_10e8 = puVar27[3];
                                                    uStack_10f0 = puVar27[2];
                                                    uStack_10d8 = puVar27[5];
                                                    uStack_10e0 = puVar27[4];
                                                    uStack_10c8 = puVar27[7];
                                                    uStack_10d0 = puVar27[6];
                                                    uStack_cd0 = puVar27[3];
                                                    uStack_cc0 = puVar27[5];
                                                    uStack_cc8 = puVar27[4];
                                                    uStack_c50 = puVar27[0x13];
                                                    uStack_c58 = puVar27[0x12];
                                                    uStack_ce0 = (undefined1)puVar27[1];
                                                    uStack_cdf = (undefined7)
                                                                 ((ulong)puVar27[1] >> 8);
                                                    uStack_ce8 = (undefined1)*puVar27;
                                                    uStack_ce7 = (undefined7)((ulong)*puVar27 >> 8);
                                                    uStack_cd8 = (undefined1)puVar27[2];
                                                    uStack_cd7 = (undefined7)
                                                                 ((ulong)puVar27[2] >> 8);
                                                    uStack_1110 = *(undefined1 *)(puVar24 + 0x14);
                                                    uStack_cf0 = CONCAT71(uStack_cf0._1_7_,
                                                                          *(undefined1 *)
                                                                           (puVar24 + 0x14));
                                                    uStack_1060 = *(undefined1 *)(puVar27 + 0x14);
                                                    uStack_c48 = CONCAT71(uStack_c48._1_7_,
                                                                          *(undefined1 *)
                                                                           (puVar27 + 0x14));
                                                    iVar11 = (int)&uStack_d90;
                                                    func_0x000100dbd9b0();
                                                    if (iVar11 == 1) {
                                                      func_0x000100dbd9b0();
                                                      if (iVar10 == 1) {
                                                        uStack_1758 = uStack_d08;
                                                        uStack_1760 = uStack_d10;
                                                        uStack_1748 = uStack_cf8;
                                                        uStack_1750 = uStack_d00;
                                                        uStack_1740 = CONCAT71(uStack_1740._1_7_,
                                                                               (undefined1)
                                                                               uStack_cf0);
                                                        uStack_1798 = uStack_d48;
                                                        uStack_17a0 = uStack_d50;
                                                        uStack_1788 = uStack_d38;
                                                        uStack_1790 = uStack_d40;
                                                        uStack_1778 = uStack_d28;
                                                        uStack_1780 = uStack_d30;
                                                        uStack_1768 = uStack_d18;
                                                        uStack_1770 = uStack_d20;
                                                        uStack_17d8 = uStack_d88;
                                                        uStack_17e0 = uStack_d90;
                                                        uStack_17c8 = uStack_d78;
                                                        uStack_17d0 = uStack_d80;
                                                        uStack_17b8 = uStack_d68;
                                                        uStack_17c0 = uStack_d70;
                                                        uStack_17a8 = uStack_d58;
                                                        uStack_17b0 = uStack_d60;
                                                        func_0x0001046d8c0c(&uStack_11b0,
                                                                            &uStack_1940,0x112e54be0
                                                                            ,&UNK_10da56ca0);
                                                        func_0x0001046d8c0c(&uStack_1100,
                                                                            &uStack_1940,0x112e54be0
                                                                            ,&UNK_10da56ca0);
                                                        func_0x0001046d8cd4(&uStack_17e0,0x112e54be0
                                                                            ,&UNK_10da56ca0);
                                                        goto LAB_1046d1e60;
                                                      }
LAB_1046d1cc8:
                                                      _memcpy(&uStack_17e0,&uStack_d90,0x149);
                                                      func_0x0001046d8c0c(&uStack_11b0,&uStack_1940,
                                                                          0x112e54be0,&UNK_10da56ca0
                                                                         );
                                                      puVar24 = &uStack_1100;
                                                      puVar27 = &uStack_1940;
LAB_1046d1d04:
                                                      func_0x0001046d8c0c(puVar24,puVar27,
                                                                          0x112e54be0,&UNK_10da56ca0
                                                                         );
                                                      uVar18 = 0x11308db80;
                                                      puVar19 = &UNK_10dd2f300;
                                                      puVar24 = &uStack_17e0;
                                                      goto LAB_1046d0cc0;
                                                    }
                                                    uStack_1758 = uStack_d08;
                                                    uStack_1760 = uStack_d10;
                                                    uStack_1748 = uStack_cf8;
                                                    uStack_1750 = uStack_d00;
                                                    uStack_1740 = CONCAT71(uStack_1740._1_7_,
                                                                           (undefined1)uStack_cf0);
                                                    uStack_1798 = uStack_d48;
                                                    uStack_17a0 = uStack_d50;
                                                    uStack_1788 = uStack_d38;
                                                    uStack_1790 = uStack_d40;
                                                    uStack_1778 = uStack_d28;
                                                    uStack_1780 = uStack_d30;
                                                    uStack_1768 = uStack_d18;
                                                    uStack_1770 = uStack_d20;
                                                    uStack_17d8 = uStack_d88;
                                                    uStack_17e0 = uStack_d90;
                                                    uStack_17c8 = uStack_d78;
                                                    uStack_17d0 = uStack_d80;
                                                    uStack_17b8 = uStack_d68;
                                                    uStack_17c0 = uStack_d70;
                                                    uStack_17a8 = uStack_d58;
                                                    uStack_17b0 = uStack_d60;
                                                    func_0x000100dbd9b0();
                                                    if (iVar10 == 1) goto LAB_1046d1cc8;
                                                    uStack_18b8 = uStack_c60;
                                                    uStack_18c0 = uStack_c68;
                                                    uStack_18a8 = uStack_c50;
                                                    uStack_18b0 = uStack_c58;
                                                    uStack_18f8 = uStack_ca0;
                                                    uStack_1900 = uStack_ca8;
                                                    uStack_18e8 = uStack_c90;
                                                    uStack_18f0 = uStack_c98;
                                                    uStack_18d8 = uStack_c80;
                                                    uStack_18e0 = uStack_c88;
                                                    uStack_18c8 = uStack_c70;
                                                    uStack_18d0 = uStack_c78;
                                                    uStack_1938 = CONCAT71(uStack_cdf,uStack_ce0);
                                                    uStack_1940 = CONCAT71(uStack_ce7,uStack_ce8);
                                                    uStack_1930 = CONCAT71(uStack_cd7,uStack_cd8);
                                                    uStack_1928 = uStack_cd0;
                                                    uStack_408 = CONCAT71(uStack_cdf,uStack_ce0);
                                                    uStack_410 = CONCAT71(uStack_ce7,uStack_ce8);
                                                    uStack_400 = CONCAT71(uStack_cd7,uStack_cd8);
                                                    uStack_1918 = uStack_cc0;
                                                    uStack_1920 = uStack_cc8;
                                                    uStack_1908 = uStack_cb0;
                                                    uStack_1910 = uStack_cb8;
                                                    uStack_388 = uStack_c60;
                                                    uStack_390 = uStack_c68;
                                                    uStack_378 = uStack_c50;
                                                    uStack_380 = uStack_c58;
                                                    uStack_3c8 = uStack_ca0;
                                                    uStack_3d0 = uStack_ca8;
                                                    uStack_3b8 = uStack_c90;
                                                    uStack_3c0 = uStack_c98;
                                                    uStack_398 = uStack_c70;
                                                    uStack_3a0 = uStack_c78;
                                                    uStack_3a8 = uStack_c80;
                                                    uStack_3b0 = uStack_c88;
                                                    uStack_3f8 = uStack_cd0;
                                                    uStack_18a0 = CONCAT71(uStack_18a0._1_7_,
                                                                           (undefined1)uStack_c48);
                                                    uStack_370 = (undefined1)uStack_c48;
                                                    uStack_3d8 = uStack_cb0;
                                                    uStack_3e0 = uStack_cb8;
                                                    uStack_3e8 = uStack_cc0;
                                                    uStack_3f0 = uStack_cc8;
                                                    uStack_438 = uStack_1758;
                                                    uStack_440 = uStack_1760;
                                                    uStack_428 = uStack_1748;
                                                    uStack_430 = uStack_1750;
                                                    uStack_420 = (undefined1)uStack_1740;
                                                    uStack_478 = uStack_1798;
                                                    uStack_480 = uStack_17a0;
                                                    uStack_468 = uStack_1788;
                                                    uStack_470 = uStack_1790;
                                                    uStack_448 = uStack_1768;
                                                    uStack_450 = uStack_1770;
                                                    uStack_458 = uStack_1778;
                                                    uStack_460 = uStack_1780;
                                                    uStack_4b8 = uStack_17d8;
                                                    uStack_4c0 = uStack_17e0;
                                                    uStack_4a8 = uStack_17c8;
                                                    uStack_4b0 = uStack_17d0;
                                                    uStack_488 = uStack_17a8;
                                                    uStack_490 = uStack_17b0;
                                                    uStack_498 = uStack_17b8;
                                                    uStack_4a0 = uStack_17c0;
                                                    func_0x0001046d8c0c(&uStack_11b0,&uStack_1aa0,
                                                                        0x112e54be0,&UNK_10da56ca0);
                                                    func_0x0001046d8c0c(&uStack_1100,&uStack_1aa0,
                                                                        0x112e54be0,&UNK_10da56ca0);
                                                    puVar24 = &uStack_4c0;
                                                    FUN_1046c2028(puVar24,&uStack_410);
                                                    func_0x0001046d8cd4(&uStack_1940,0x112e54be0,
                                                                        &UNK_10da56ca0);
                                                    func_0x0001046d8cd4(&uStack_d90,0x112e54be0,
                                                                        &UNK_10da56ca0);
                                                    if (((ulong)puVar24 & 1) == 0)
                                                    goto LAB_1046d0cc4;
LAB_1046d1e60:
                                                    if ((*(float *)((long)param_1 +
                                                                   (long)*(int *)(lStack_1b00 + 0x8c
                                                                                 )) ==
                                                         *(float *)((long)pdVar4 +
                                                                   (long)*(int *)(lStack_1b00 + 0x8c
                                                                                 ))) &&
                                                       (*(char *)((long)param_1 +
                                                                 (long)*(int *)(lStack_1b00 + 0x90))
                                                        == *(char *)((long)pdVar4 +
                                                                    (long)*(int *)(lStack_1b00 +
                                                                                  0x90)))) {
                                                      puVar24 = (undefined8 *)
                                                                ((long)param_1 +
                                                                (long)*(int *)(lStack_1b00 + 0x94));
                                                      puVar27 = (undefined8 *)
                                                                ((long)pdVar4 +
                                                                (long)*(int *)(lStack_1b00 + 0x94));
                                                      iVar10 = (int)&uStack_cd0;
                                                      uStack_d08 = puVar24[0x11];
                                                      uStack_d10 = puVar24[0x10];
                                                      uStack_cf8 = puVar24[0x13];
                                                      uStack_d00 = puVar24[0x12];
                                                      uStack_cf0 = puVar24[0x14];
                                                      uStack_cc8 = puVar27[1];
                                                      uStack_cd0 = *puVar27;
                                                      uStack_cb8 = puVar27[3];
                                                      uStack_cc0 = puVar27[2];
                                                      uStack_ce8 = (undefined1)puVar24[0x15];
                                                      uStack_cdf = (undefined7)
                                                                   *(undefined8 *)
                                                                    ((long)puVar24 + 0xb1);
                                                      uStack_cd8 = (undefined1)
                                                                   ((ulong)*(undefined8 *)
                                                                            ((long)puVar24 + 0xb1)
                                                                   >> 0x38);
                                                      uStack_ce7 = (undefined7)
                                                                   *(undefined8 *)
                                                                    ((long)puVar24 + 0xa9);
                                                      uStack_ce0 = (undefined1)
                                                                   ((ulong)*(undefined8 *)
                                                                            ((long)puVar24 + 0xa9)
                                                                   >> 0x38);
                                                      uStack_d48 = puVar24[9];
                                                      uStack_d50 = puVar24[8];
                                                      uStack_d38 = puVar24[0xb];
                                                      uStack_d40 = puVar24[10];
                                                      uStack_d28 = puVar24[0xd];
                                                      uStack_d30 = puVar24[0xc];
                                                      uStack_d18 = puVar24[0xf];
                                                      uStack_d20 = puVar24[0xe];
                                                      uStack_d88 = puVar24[1];
                                                      uStack_d90 = *puVar24;
                                                      uStack_d78 = puVar24[3];
                                                      uStack_d80 = puVar24[2];
                                                      uStack_d68 = puVar24[5];
                                                      uStack_d70 = puVar24[4];
                                                      uStack_d58 = puVar24[7];
                                                      uStack_d60 = puVar24[6];
                                                      uStack_c1f = *(undefined8 *)
                                                                    ((long)puVar27 + 0xb1);
                                                      uStack_c20 = (undefined1)
                                                                   ((ulong)*(undefined8 *)
                                                                            ((long)puVar27 + 0xa9)
                                                                   >> 0x38);
                                                      uStack_c48 = puVar27[0x11];
                                                      uStack_c50 = puVar27[0x10];
                                                      uStack_c38 = puVar27[0x13];
                                                      uStack_c40 = puVar27[0x12];
                                                      uStack_c30 = puVar27[0x14];
                                                      uStack_c28 = (undefined1)puVar27[0x15];
                                                      uStack_c27 = (undefined7)
                                                                   ((ulong)puVar27[0x15] >> 8);
                                                      uStack_c88 = puVar27[9];
                                                      uStack_c90 = puVar27[8];
                                                      uStack_c78 = puVar27[0xb];
                                                      uStack_c80 = puVar27[10];
                                                      uStack_c68 = puVar27[0xd];
                                                      uStack_c70 = puVar27[0xc];
                                                      uStack_c58 = puVar27[0xf];
                                                      uStack_c60 = puVar27[0xe];
                                                      uStack_ca8 = puVar27[5];
                                                      uStack_cb0 = puVar27[4];
                                                      uStack_c98 = puVar27[7];
                                                      uStack_ca0 = puVar27[6];
                                                      iVar11 = (int)&uStack_d90;
                                                      func_0x000101541310();
                                                      if (iVar11 == 1) {
                                                        func_0x000101541310();
                                                        if (iVar10 == 1) {
LAB_1046d204c:
                                                          if ((((*(int *)((long)param_1 +
                                                                         (long)*(int *)(lStack_1b00
                                                                                       + 0x98)) ==
                                                                 *(int *)((long)pdVar4 +
                                                                         (long)*(int *)(lStack_1b00
                                                                                       + 0x98))) &&
                                                               (*(char *)((long)param_1 +
                                                                         (long)*(int *)(lStack_1b00
                                                                                       + 0x9c)) ==
                                                                *(char *)((long)pdVar4 +
                                                                         (long)*(int *)(lStack_1b00
                                                                                       + 0x9c)))) &&
                                                              (*(long *)((long)param_1 +
                                                                        (long)*(int *)(lStack_1b00 +
                                                                                      0xa0)) ==
                                                               *(long *)((long)pdVar4 +
                                                                        (long)*(int *)(lStack_1b00 +
                                                                                      0xa0)))) &&
                                                             ((*(int *)((long)param_1 +
                                                                       (long)*(int *)(lStack_1b00 +
                                                                                     0xa4)) ==
                                                               *(int *)((long)pdVar4 +
                                                                       (long)*(int *)(lStack_1b00 +
                                                                                     0xa4)) &&
                                                              (*(int *)((long)param_1 +
                                                                       (long)*(int *)(lStack_1b00 +
                                                                                     0xa8)) ==
                                                               *(int *)((long)pdVar4 +
                                                                       (long)*(int *)(lStack_1b00 +
                                                                                     0xa8)))))) {
                                                            plVar1 = (long *)((long)param_1 +
                                                                             (long)*(int *)(
                                                  lStack_1b00 + 0xac));
                                                  puVar27 = (undefined8 *)*plVar1;
                                                  lVar28 = plVar1[1];
                                                  lVar12 = plVar1[2];
                                                  lVar29 = plVar1[3];
                                                  puVar24 = (undefined8 *)
                                                            ((long)pdVar4 +
                                                            (long)*(int *)(lStack_1b00 + 0xac));
                                                  uVar18 = *puVar24;
                                                  lVar31 = puVar24[1];
                                                  uVar5 = puVar24[2];
                                                  uVar6 = puVar24[3];
                                                  lStack_1aa8 = lVar29;
                                                  if (lVar28 == 0) {
                                                    if (lVar31 != 0) goto LAB_1046d2184;
LAB_1046d21e4:
                                                    if ((*(int *)((long)param_1 +
                                                                 (long)*(int *)(lStack_1b00 + 0xb0))
                                                         == *(int *)((long)pdVar4 +
                                                                    (long)*(int *)(lStack_1b00 +
                                                                                  0xb0))) &&
                                                       (*(int *)((long)param_1 +
                                                                (long)*(int *)(lStack_1b00 + 0xb4))
                                                        == *(int *)((long)pdVar4 +
                                                                   (long)*(int *)(lStack_1b00 + 0xb4
                                                                                 )))) {
                                                      puVar24 = (undefined8 *)
                                                                ((long)param_1 +
                                                                (long)*(int *)(lStack_1b00 + 0xb8));
                                                      puVar27 = (undefined8 *)
                                                                ((long)pdVar4 +
                                                                (long)*(int *)(lStack_1b00 + 0xb8));
                                                      iVar10 = (int)&uStack_ce8;
                                                      uStack_d18 = puVar24[0xf];
                                                      uStack_d20 = puVar24[0xe];
                                                      uStack_1288 = puVar24[0x11];
                                                      uStack_1290 = puVar24[0x10];
                                                      uStack_d08 = puVar24[0x11];
                                                      uStack_d10 = puVar24[0x10];
                                                      uStack_1278 = puVar24[0x13];
                                                      uStack_1280 = puVar24[0x12];
                                                      uStack_d58 = puVar24[7];
                                                      uStack_d60 = puVar24[6];
                                                      uStack_12c8 = puVar24[9];
                                                      uStack_12d0 = puVar24[8];
                                                      uStack_d48 = puVar24[9];
                                                      uStack_d50 = puVar24[8];
                                                      uStack_12b8 = puVar24[0xb];
                                                      uStack_12c0 = puVar24[10];
                                                      uStack_d38 = puVar24[0xb];
                                                      uStack_d40 = puVar24[10];
                                                      uStack_12a8 = puVar24[0xd];
                                                      uStack_12b0 = puVar24[0xc];
                                                      uStack_d28 = puVar24[0xd];
                                                      uStack_d30 = puVar24[0xc];
                                                      uStack_1298 = puVar24[0xf];
                                                      uStack_12a0 = puVar24[0xe];
                                                      uStack_1308 = puVar24[1];
                                                      uStack_1310 = *puVar24;
                                                      uStack_12f8 = puVar24[3];
                                                      uStack_1300 = puVar24[2];
                                                      uStack_12e8 = puVar24[5];
                                                      uStack_12f0 = puVar24[4];
                                                      uStack_12d8 = puVar24[7];
                                                      uStack_12e0 = puVar24[6];
                                                      uStack_d88 = puVar24[1];
                                                      uStack_d90 = *puVar24;
                                                      uStack_d78 = puVar24[3];
                                                      uStack_d80 = puVar24[2];
                                                      uStack_d68 = puVar24[5];
                                                      uStack_d70 = puVar24[4];
                                                      uStack_cf8 = puVar24[0x13];
                                                      uStack_d00 = puVar24[0x12];
                                                      uStack_c70 = puVar27[0xf];
                                                      uStack_c78 = puVar27[0xe];
                                                      uStack_11d8 = puVar27[0x11];
                                                      uStack_11e0 = puVar27[0x10];
                                                      uStack_c60 = puVar27[0x11];
                                                      uStack_c68 = puVar27[0x10];
                                                      uStack_11c8 = puVar27[0x13];
                                                      uStack_11d0 = puVar27[0x12];
                                                      uStack_cb0 = puVar27[7];
                                                      uStack_cb8 = puVar27[6];
                                                      uStack_1218 = puVar27[9];
                                                      uStack_1220 = puVar27[8];
                                                      uStack_ca0 = puVar27[9];
                                                      uStack_ca8 = puVar27[8];
                                                      uStack_1208 = puVar27[0xb];
                                                      uStack_1210 = puVar27[10];
                                                      uStack_c80 = puVar27[0xd];
                                                      uStack_c88 = puVar27[0xc];
                                                      uStack_11e8 = puVar27[0xf];
                                                      uStack_11f0 = puVar27[0xe];
                                                      uStack_c90 = puVar27[0xb];
                                                      uStack_c98 = puVar27[10];
                                                      uStack_11f8 = puVar27[0xd];
                                                      uStack_1200 = puVar27[0xc];
                                                      uStack_1258 = puVar27[1];
                                                      uStack_1260 = *puVar27;
                                                      uStack_1248 = puVar27[3];
                                                      uStack_1250 = puVar27[2];
                                                      uStack_1238 = puVar27[5];
                                                      uStack_1240 = puVar27[4];
                                                      uStack_1228 = puVar27[7];
                                                      uStack_1230 = puVar27[6];
                                                      uStack_cd0 = puVar27[3];
                                                      uStack_cc0 = puVar27[5];
                                                      uStack_cc8 = puVar27[4];
                                                      uStack_c50 = puVar27[0x13];
                                                      uStack_c58 = puVar27[0x12];
                                                      uStack_ce0 = (undefined1)puVar27[1];
                                                      uStack_cdf = (undefined7)
                                                                   ((ulong)puVar27[1] >> 8);
                                                      uStack_ce8 = (undefined1)*puVar27;
                                                      uStack_ce7 = (undefined7)
                                                                   ((ulong)*puVar27 >> 8);
                                                      uStack_cd8 = (undefined1)puVar27[2];
                                                      uStack_cd7 = (undefined7)
                                                                   ((ulong)puVar27[2] >> 8);
                                                      uStack_1270 = *(undefined1 *)(puVar24 + 0x14);
                                                      uStack_cf0 = CONCAT71(uStack_cf0._1_7_,
                                                                            *(undefined1 *)
                                                                             (puVar24 + 0x14));
                                                      uStack_11c0 = *(undefined1 *)(puVar27 + 0x14);
                                                      uStack_c48 = CONCAT71(uStack_c48._1_7_,
                                                                            *(undefined1 *)
                                                                             (puVar27 + 0x14));
                                                      iVar11 = (int)&uStack_d90;
                                                      func_0x000100dbd9b0();
                                                      if (iVar11 == 1) {
                                                        func_0x000100dbd9b0();
                                                        if (iVar10 != 1) {
LAB_1046d244c:
                                                          _memcpy(&uStack_17e0,&uStack_d90,0x149);
                                                          func_0x0001046d8c0c(&uStack_1310,
                                                                              &uStack_570,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                          puVar24 = &uStack_1260;
                                                          puVar27 = &uStack_570;
                                                          goto LAB_1046d1d04;
                                                        }
                                                        uStack_1758 = uStack_d08;
                                                        uStack_1760 = uStack_d10;
                                                        uStack_1748 = uStack_cf8;
                                                        uStack_1750 = uStack_d00;
                                                        uStack_1740 = CONCAT71(uStack_1740._1_7_,
                                                                               (undefined1)
                                                                               uStack_cf0);
                                                        uStack_1798 = uStack_d48;
                                                        uStack_17a0 = uStack_d50;
                                                        uStack_1788 = uStack_d38;
                                                        uStack_1790 = uStack_d40;
                                                        uStack_1778 = uStack_d28;
                                                        uStack_1780 = uStack_d30;
                                                        uStack_1768 = uStack_d18;
                                                        uStack_1770 = uStack_d20;
                                                        uStack_17d8 = uStack_d88;
                                                        uStack_17e0 = uStack_d90;
                                                        uStack_17c8 = uStack_d78;
                                                        uStack_17d0 = uStack_d80;
                                                        uStack_17b8 = uStack_d68;
                                                        uStack_17c0 = uStack_d70;
                                                        uStack_17a8 = uStack_d58;
                                                        uStack_17b0 = uStack_d60;
                                                        func_0x0001046d8c0c(&uStack_1310,&uStack_570
                                                                            ,0x112e54be0,
                                                                            &UNK_10da56ca0);
                                                        func_0x0001046d8c0c(&uStack_1260,&uStack_570
                                                                            ,0x112e54be0,
                                                                            &UNK_10da56ca0);
                                                        func_0x0001046d8cd4(&uStack_17e0,0x112e54be0
                                                                            ,&UNK_10da56ca0);
LAB_1046d25e0:
                                                        puVar24 = (undefined8 *)
                                                                  ((long)param_1 +
                                                                  (long)*(int *)(lStack_1b00 + 0xbc)
                                                                  );
                                                        puVar27 = (undefined8 *)
                                                                  ((long)pdVar4 +
                                                                  (long)*(int *)(lStack_1b00 + 0xbc)
                                                                  );
                                                        iVar10 = (int)&uStack_ce8;
                                                        uStack_d18 = puVar24[0xf];
                                                        uStack_d20 = puVar24[0xe];
                                                        uStack_13e8 = puVar24[0x11];
                                                        uStack_13f0 = puVar24[0x10];
                                                        uStack_d08 = puVar24[0x11];
                                                        uStack_d10 = puVar24[0x10];
                                                        uStack_13d8 = puVar24[0x13];
                                                        uStack_13e0 = puVar24[0x12];
                                                        uStack_d58 = puVar24[7];
                                                        uStack_d60 = puVar24[6];
                                                        uStack_1428 = puVar24[9];
                                                        uStack_1430 = puVar24[8];
                                                        uStack_d48 = puVar24[9];
                                                        uStack_d50 = puVar24[8];
                                                        uStack_1418 = puVar24[0xb];
                                                        uStack_1420 = puVar24[10];
                                                        uStack_d38 = puVar24[0xb];
                                                        uStack_d40 = puVar24[10];
                                                        uStack_1408 = puVar24[0xd];
                                                        uStack_1410 = puVar24[0xc];
                                                        uStack_d28 = puVar24[0xd];
                                                        uStack_d30 = puVar24[0xc];
                                                        uStack_13f8 = puVar24[0xf];
                                                        uStack_1400 = puVar24[0xe];
                                                        uStack_1468 = puVar24[1];
                                                        uStack_1470 = *puVar24;
                                                        uStack_1458 = puVar24[3];
                                                        uStack_1460 = puVar24[2];
                                                        uStack_1448 = puVar24[5];
                                                        uStack_1450 = puVar24[4];
                                                        uStack_1438 = puVar24[7];
                                                        uStack_1440 = puVar24[6];
                                                        uStack_d88 = puVar24[1];
                                                        uStack_d90 = *puVar24;
                                                        uStack_d78 = puVar24[3];
                                                        uStack_d80 = puVar24[2];
                                                        uStack_d68 = puVar24[5];
                                                        uStack_d70 = puVar24[4];
                                                        uStack_cf8 = puVar24[0x13];
                                                        uStack_d00 = puVar24[0x12];
                                                        uStack_c70 = puVar27[0xf];
                                                        uStack_c78 = puVar27[0xe];
                                                        uStack_1338 = puVar27[0x11];
                                                        uStack_1340 = puVar27[0x10];
                                                        uStack_c60 = puVar27[0x11];
                                                        uStack_c68 = puVar27[0x10];
                                                        uStack_1328 = puVar27[0x13];
                                                        uStack_1330 = puVar27[0x12];
                                                        uStack_cb0 = puVar27[7];
                                                        uStack_cb8 = puVar27[6];
                                                        uStack_1378 = puVar27[9];
                                                        uStack_1380 = puVar27[8];
                                                        uStack_ca0 = puVar27[9];
                                                        uStack_ca8 = puVar27[8];
                                                        uStack_1368 = puVar27[0xb];
                                                        uStack_1370 = puVar27[10];
                                                        uStack_c80 = puVar27[0xd];
                                                        uStack_c88 = puVar27[0xc];
                                                        uStack_1348 = puVar27[0xf];
                                                        uStack_1350 = puVar27[0xe];
                                                        uStack_c90 = puVar27[0xb];
                                                        uStack_c98 = puVar27[10];
                                                        uStack_1358 = puVar27[0xd];
                                                        uStack_1360 = puVar27[0xc];
                                                        uStack_13b8 = puVar27[1];
                                                        uStack_13c0 = *puVar27;
                                                        uStack_13a8 = puVar27[3];
                                                        uStack_13b0 = puVar27[2];
                                                        uStack_1398 = puVar27[5];
                                                        uStack_13a0 = puVar27[4];
                                                        uStack_1388 = puVar27[7];
                                                        uStack_1390 = puVar27[6];
                                                        uStack_cd0 = puVar27[3];
                                                        uStack_cc0 = puVar27[5];
                                                        uStack_cc8 = puVar27[4];
                                                        uStack_c50 = puVar27[0x13];
                                                        uStack_c58 = puVar27[0x12];
                                                        uStack_ce0 = (undefined1)puVar27[1];
                                                        uStack_cdf = (undefined7)
                                                                     ((ulong)puVar27[1] >> 8);
                                                        uStack_ce8 = (undefined1)*puVar27;
                                                        uStack_ce7 = (undefined7)
                                                                     ((ulong)*puVar27 >> 8);
                                                        uStack_cd8 = (undefined1)puVar27[2];
                                                        uStack_cd7 = (undefined7)
                                                                     ((ulong)puVar27[2] >> 8);
                                                        uStack_13d0 = *(undefined1 *)
                                                                       (puVar24 + 0x14);
                                                        uStack_cf0 = CONCAT71(uStack_cf0._1_7_,
                                                                              *(undefined1 *)
                                                                               (puVar24 + 0x14));
                                                        uStack_1320 = *(undefined1 *)
                                                                       (puVar27 + 0x14);
                                                        uStack_c48 = CONCAT71(uStack_c48._1_7_,
                                                                              *(undefined1 *)
                                                                               (puVar27 + 0x14));
                                                        iVar11 = (int)&uStack_d90;
                                                        func_0x000100dbd9b0();
                                                        if (iVar11 == 1) {
                                                          func_0x000100dbd9b0();
                                                          if (iVar10 != 1) {
LAB_1046d2830:
                                                            _memcpy(&uStack_17e0,&uStack_d90,0x149);
                                                            func_0x0001046d8c0c(&uStack_1470,
                                                                                &uStack_6d0,
                                                                                0x112e54be0,
                                                                                &UNK_10da56ca0);
                                                            puVar24 = &uStack_13c0;
                                                            puVar27 = &uStack_6d0;
                                                            goto LAB_1046d1d04;
                                                          }
                                                          uStack_1758 = uStack_d08;
                                                          uStack_1760 = uStack_d10;
                                                          uStack_1748 = uStack_cf8;
                                                          uStack_1750 = uStack_d00;
                                                          uStack_1740 = CONCAT71(uStack_1740._1_7_,
                                                                                 (undefined1)
                                                                                 uStack_cf0);
                                                          uStack_1798 = uStack_d48;
                                                          uStack_17a0 = uStack_d50;
                                                          uStack_1788 = uStack_d38;
                                                          uStack_1790 = uStack_d40;
                                                          uStack_1778 = uStack_d28;
                                                          uStack_1780 = uStack_d30;
                                                          uStack_1768 = uStack_d18;
                                                          uStack_1770 = uStack_d20;
                                                          uStack_17d8 = uStack_d88;
                                                          uStack_17e0 = uStack_d90;
                                                          uStack_17c8 = uStack_d78;
                                                          uStack_17d0 = uStack_d80;
                                                          uStack_17b8 = uStack_d68;
                                                          uStack_17c0 = uStack_d70;
                                                          uStack_17a8 = uStack_d58;
                                                          uStack_17b0 = uStack_d60;
                                                          func_0x0001046d8c0c(&uStack_1470,
                                                                              &uStack_6d0,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                          func_0x0001046d8c0c(&uStack_13c0,
                                                                              &uStack_6d0,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                          func_0x0001046d8cd4(&uStack_17e0,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                        }
                                                        else {
                                                          uStack_1498 = uStack_d08;
                                                          uStack_14a0 = uStack_d10;
                                                          uStack_1488 = uStack_cf8;
                                                          uStack_1490 = uStack_d00;
                                                          uStack_1480 = (undefined1)uStack_cf0;
                                                          uStack_14d8 = uStack_d48;
                                                          uStack_14e0 = uStack_d50;
                                                          uStack_14c8 = uStack_d38;
                                                          uStack_14d0 = uStack_d40;
                                                          uStack_14a8 = uStack_d18;
                                                          uStack_14b0 = uStack_d20;
                                                          uStack_14b8 = uStack_d28;
                                                          uStack_14c0 = uStack_d30;
                                                          uStack_1518 = uStack_d88;
                                                          uStack_1520 = uStack_d90;
                                                          uStack_1508 = uStack_d78;
                                                          uStack_1510 = uStack_d80;
                                                          uStack_14e8 = uStack_d58;
                                                          uStack_14f0 = uStack_d60;
                                                          uStack_14f8 = uStack_d68;
                                                          uStack_1500 = uStack_d70;
                                                          func_0x000100dbd9b0();
                                                          if (iVar10 == 1) goto LAB_1046d2830;
                                                          uStack_1548 = uStack_c60;
                                                          uStack_1550 = uStack_c68;
                                                          uStack_1538 = uStack_c50;
                                                          uStack_1540 = uStack_c58;
                                                          uStack_1588 = uStack_ca0;
                                                          uStack_1590 = uStack_ca8;
                                                          uStack_1578 = uStack_c90;
                                                          uStack_1580 = uStack_c98;
                                                          uStack_1558 = uStack_c70;
                                                          uStack_1560 = uStack_c78;
                                                          uStack_1568 = uStack_c80;
                                                          uStack_1570 = uStack_c88;
                                                          uStack_15c8 = CONCAT71(uStack_cdf,
                                                                                 uStack_ce0);
                                                          uStack_15d0 = CONCAT71(uStack_ce7,
                                                                                 uStack_ce8);
                                                          uStack_15c0 = CONCAT71(uStack_cd7,
                                                                                 uStack_cd8);
                                                          uStack_15b8 = uStack_cd0;
                                                          uStack_17d8 = CONCAT71(uStack_cdf,
                                                                                 uStack_ce0);
                                                          uStack_17e0 = CONCAT71(uStack_ce7,
                                                                                 uStack_ce8);
                                                          uStack_17d0 = CONCAT71(uStack_cd7,
                                                                                 uStack_cd8);
                                                          uStack_1598 = uStack_cb0;
                                                          uStack_15a0 = uStack_cb8;
                                                          uStack_15a8 = uStack_cc0;
                                                          uStack_15b0 = uStack_cc8;
                                                          uStack_1758 = uStack_c60;
                                                          uStack_1760 = uStack_c68;
                                                          uStack_1748 = uStack_c50;
                                                          uStack_1750 = uStack_c58;
                                                          uStack_1798 = uStack_ca0;
                                                          uStack_17a0 = uStack_ca8;
                                                          uStack_1788 = uStack_c90;
                                                          uStack_1790 = uStack_c98;
                                                          uStack_1778 = uStack_c80;
                                                          uStack_1780 = uStack_c88;
                                                          uStack_1768 = uStack_c70;
                                                          uStack_1770 = uStack_c78;
                                                          uStack_17c8 = uStack_cd0;
                                                          uStack_1530 = (undefined1)uStack_c48;
                                                          uStack_1740 = CONCAT71(uStack_1740._1_7_,
                                                                                 (undefined1)
                                                                                 uStack_c48);
                                                          uStack_17b8 = uStack_cc0;
                                                          uStack_17c0 = uStack_cc8;
                                                          uStack_17a8 = uStack_cb0;
                                                          uStack_17b0 = uStack_cb8;
                                                          uStack_648 = uStack_1498;
                                                          uStack_650 = uStack_14a0;
                                                          uStack_638 = uStack_1488;
                                                          uStack_640 = uStack_1490;
                                                          uStack_630 = uStack_1480;
                                                          uStack_688 = uStack_14d8;
                                                          uStack_690 = uStack_14e0;
                                                          uStack_678 = uStack_14c8;
                                                          uStack_680 = uStack_14d0;
                                                          uStack_658 = uStack_14a8;
                                                          uStack_660 = uStack_14b0;
                                                          uStack_668 = uStack_14b8;
                                                          uStack_670 = uStack_14c0;
                                                          uStack_6c8 = uStack_1518;
                                                          uStack_6d0 = uStack_1520;
                                                          uStack_6b8 = uStack_1508;
                                                          uStack_6c0 = uStack_1510;
                                                          uStack_698 = uStack_14e8;
                                                          uStack_6a0 = uStack_14f0;
                                                          uStack_6a8 = uStack_14f8;
                                                          uStack_6b0 = uStack_1500;
                                                          func_0x0001046d8c0c(&uStack_1470,
                                                                              auStack_1678,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                          func_0x0001046d8c0c(&uStack_13c0,
                                                                              auStack_1678,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                          puVar24 = &uStack_6d0;
                                                          FUN_1046c2028(puVar24,&uStack_17e0);
                                                          func_0x0001046d8cd4(&uStack_15d0,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                          func_0x0001046d8cd4(&uStack_d90,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                          if (((ulong)puVar24 & 1) == 0)
                                                          goto LAB_1046d0cc4;
                                                        }
                                                        bVar22 = *(byte *)((long)param_1 +
                                                                          (long)*(int *)(lStack_1b00
                                                                                        + 0xc0));
                                                        bVar7 = *(byte *)((long)pdVar4 +
                                                                         (long)*(int *)(lStack_1b00
                                                                                       + 0xc0));
                                                        if (bVar22 == 2) {
                                                          if (bVar7 == 2) {
LAB_1046d29ec:
                                                            if ((*(long *)((long)param_1 +
                                                                          (long)*(int *)(lStack_1b00
                                                                                        + 0xc4)) ==
                                                                 *(long *)((long)pdVar4 +
                                                                          (long)*(int *)(lStack_1b00
                                                                                        + 0xc4))) &&
                                                               (*(int *)((long)param_1 +
                                                                        (long)*(int *)(lStack_1b00 +
                                                                                      200)) ==
                                                                *(int *)((long)pdVar4 +
                                                                        (long)*(int *)(lStack_1b00 +
                                                                                      200)))) {
                                                              bVar22 = *(byte *)((long)param_1 +
                                                                                (long)*(int *)(
                                                  lStack_1b00 + 0xcc)) ^
                                                  *(byte *)((long)pdVar4 +
                                                           (long)*(int *)(lStack_1b00 + 0xcc)) ^ 1;
                                                  goto LAB_1046d0cc8;
                                                  }
                                                  }
                                                  }
                                                  else if ((bVar7 != 2) &&
                                                          (((bVar7 ^ bVar22) & 1) == 0))
                                                  goto LAB_1046d29ec;
                                                  }
                                                  else {
                                                    uStack_1758 = uStack_d08;
                                                    uStack_1760 = uStack_d10;
                                                    uStack_1748 = uStack_cf8;
                                                    uStack_1750 = uStack_d00;
                                                    uStack_1740 = CONCAT71(uStack_1740._1_7_,
                                                                           (undefined1)uStack_cf0);
                                                    uStack_1798 = uStack_d48;
                                                    uStack_17a0 = uStack_d50;
                                                    uStack_1788 = uStack_d38;
                                                    uStack_1790 = uStack_d40;
                                                    uStack_1778 = uStack_d28;
                                                    uStack_1780 = uStack_d30;
                                                    uStack_1768 = uStack_d18;
                                                    uStack_1770 = uStack_d20;
                                                    uStack_17d8 = uStack_d88;
                                                    uStack_17e0 = uStack_d90;
                                                    uStack_17c8 = uStack_d78;
                                                    uStack_17d0 = uStack_d80;
                                                    uStack_17b8 = uStack_d68;
                                                    uStack_17c0 = uStack_d70;
                                                    uStack_17a8 = uStack_d58;
                                                    uStack_17b0 = uStack_d60;
                                                    func_0x000100dbd9b0();
                                                    if (iVar10 == 1) goto LAB_1046d244c;
                                                    uStack_648 = uStack_c60;
                                                    uStack_650 = uStack_c68;
                                                    uStack_638 = uStack_c50;
                                                    uStack_640 = uStack_c58;
                                                    uStack_688 = uStack_ca0;
                                                    uStack_690 = uStack_ca8;
                                                    uStack_678 = uStack_c90;
                                                    uStack_680 = uStack_c98;
                                                    uStack_658 = uStack_c70;
                                                    uStack_660 = uStack_c78;
                                                    uStack_668 = uStack_c80;
                                                    uStack_670 = uStack_c88;
                                                    uStack_6c8 = CONCAT71(uStack_cdf,uStack_ce0);
                                                    uStack_6d0 = CONCAT71(uStack_ce7,uStack_ce8);
                                                    uStack_6c0 = CONCAT71(uStack_cd7,uStack_cd8);
                                                    uStack_6b8 = uStack_cd0;
                                                    uStack_568 = CONCAT71(uStack_cdf,uStack_ce0);
                                                    uStack_570 = CONCAT71(uStack_ce7,uStack_ce8);
                                                    uStack_560 = CONCAT71(uStack_cd7,uStack_cd8);
                                                    uStack_698 = uStack_cb0;
                                                    uStack_6a0 = uStack_cb8;
                                                    uStack_6a8 = uStack_cc0;
                                                    uStack_6b0 = uStack_cc8;
                                                    uStack_4e8 = uStack_c60;
                                                    uStack_4f0 = uStack_c68;
                                                    uStack_4d8 = uStack_c50;
                                                    uStack_4e0 = uStack_c58;
                                                    uStack_528 = uStack_ca0;
                                                    uStack_530 = uStack_ca8;
                                                    uStack_518 = uStack_c90;
                                                    uStack_520 = uStack_c98;
                                                    uStack_4f8 = uStack_c70;
                                                    uStack_500 = uStack_c78;
                                                    uStack_508 = uStack_c80;
                                                    uStack_510 = uStack_c88;
                                                    uStack_558 = uStack_cd0;
                                                    uStack_630 = (undefined1)uStack_c48;
                                                    uStack_4d0 = (undefined1)uStack_c48;
                                                    uStack_538 = uStack_cb0;
                                                    uStack_540 = uStack_cb8;
                                                    uStack_548 = uStack_cc0;
                                                    uStack_550 = uStack_cc8;
                                                    uStack_598 = uStack_1758;
                                                    uStack_5a0 = uStack_1760;
                                                    uStack_588 = uStack_1748;
                                                    uStack_590 = uStack_1750;
                                                    uStack_580 = (undefined1)uStack_1740;
                                                    uStack_5d8 = uStack_1798;
                                                    uStack_5e0 = uStack_17a0;
                                                    uStack_5c8 = uStack_1788;
                                                    uStack_5d0 = uStack_1790;
                                                    uStack_5a8 = uStack_1768;
                                                    uStack_5b0 = uStack_1770;
                                                    uStack_5b8 = uStack_1778;
                                                    uStack_5c0 = uStack_1780;
                                                    uStack_618 = uStack_17d8;
                                                    uStack_620 = uStack_17e0;
                                                    uStack_608 = uStack_17c8;
                                                    uStack_610 = uStack_17d0;
                                                    uStack_5e8 = uStack_17a8;
                                                    uStack_5f0 = uStack_17b0;
                                                    uStack_5f8 = uStack_17b8;
                                                    uStack_600 = uStack_17c0;
                                                    func_0x0001046d8c0c(&uStack_1310,&uStack_13c0,
                                                                        0x112e54be0,&UNK_10da56ca0);
                                                    func_0x0001046d8c0c(&uStack_1260,&uStack_13c0,
                                                                        0x112e54be0,&UNK_10da56ca0);
                                                    puVar24 = &uStack_620;
                                                    FUN_1046c2028(puVar24,&uStack_570);
                                                    func_0x0001046d8cd4(&uStack_6d0,0x112e54be0,
                                                                        &UNK_10da56ca0);
                                                    func_0x0001046d8cd4(&uStack_d90,0x112e54be0,
                                                                        &UNK_10da56ca0);
                                                    if (((ulong)puVar24 & 1) != 0)
                                                    goto LAB_1046d25e0;
                                                  }
                                                  }
                                                  }
                                                  else if (lVar31 == 0) {
LAB_1046d2184:
                                                    func_0x0001046ca7b0(uVar18,lVar31,uVar5,uVar6);
                                                    lVar29 = lStack_1aa8;
                                                    func_0x0001046ca7b0(puVar27,lVar28,lVar12,
                                                                        lStack_1aa8);
                                                    func_0x0001046d8d14(puVar27,lVar28,lVar12,lVar29
                                                                       );
                                                    func_0x0001046d8d14(uVar18,lVar31,uVar5,uVar6);
                                                  }
                                                  else {
                                                    puStack_1ab8 = puVar27;
                                                    FUN_10474eb58(puVar27,lVar28,lVar12,lVar29,
                                                                  uVar18,lVar31,uVar5,uVar6);
                                                    uStack_1ab0 = CONCAT44(uStack_1ab0._4_4_,
                                                                           (int)puVar27);
                                                    func_0x0001046ca7b0(uVar18,lVar31,uVar5,uVar6);
                                                    puVar24 = puStack_1ab8;
                                                    func_0x0001046ca7b0(puStack_1ab8,lVar28,lVar12,
                                                                        lVar29);
                                                    _swift_bridgeObjectRelease(lVar31);
                                                    _swift_bridgeObjectRelease(uVar6);
                                                    func_0x0001046d8d14(puVar24,lVar28,lVar12,lVar29
                                                                       );
                                                    if ((uStack_1ab0 & 1) != 0) goto LAB_1046d21e4;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uStack_1758 = uStack_d08;
                                                    uStack_1760 = uStack_d10;
                                                    uStack_1748 = uStack_cf8;
                                                    uStack_1750 = uStack_d00;
                                                    uStack_1738 = uStack_ce8;
                                                    uStack_1740 = uStack_cf0;
                                                    uStack_172f = CONCAT17(uStack_cd8,uStack_cdf);
                                                    uStack_1737 = uStack_ce7;
                                                    uStack_1730 = uStack_ce0;
                                                    uStack_1798 = uStack_d48;
                                                    uStack_17a0 = uStack_d50;
                                                    uStack_1788 = uStack_d38;
                                                    uStack_1790 = uStack_d40;
                                                    uStack_1778 = uStack_d28;
                                                    uStack_1780 = uStack_d30;
                                                    uStack_1768 = uStack_d18;
                                                    uStack_1770 = uStack_d20;
                                                    uStack_17d8 = uStack_d88;
                                                    uStack_17e0 = uStack_d90;
                                                    uStack_17c8 = uStack_d78;
                                                    uStack_17d0 = uStack_d80;
                                                    uStack_17b8 = uStack_d68;
                                                    uStack_17c0 = uStack_d70;
                                                    uStack_17a8 = uStack_d58;
                                                    uStack_17b0 = uStack_d60;
                                                    func_0x000101541310();
                                                    if (iVar10 != 1) {
                                                      uStack_18b8 = uStack_c48;
                                                      uStack_18c0 = uStack_c50;
                                                      uStack_18a8 = uStack_c38;
                                                      uStack_18b0 = uStack_c40;
                                                      uStack_1898 = uStack_c28;
                                                      uStack_18a0 = uStack_c30;
                                                      uStack_188f = uStack_c1f;
                                                      uStack_1897 = uStack_c27;
                                                      uStack_1890 = uStack_c20;
                                                      uStack_18f8 = uStack_c88;
                                                      uStack_1900 = uStack_c90;
                                                      uStack_18e8 = uStack_c78;
                                                      uStack_18f0 = uStack_c80;
                                                      uStack_18d8 = uStack_c68;
                                                      uStack_18e0 = uStack_c70;
                                                      uStack_18c8 = uStack_c58;
                                                      uStack_18d0 = uStack_c60;
                                                      uStack_1938 = uStack_cc8;
                                                      uStack_1940 = uStack_cd0;
                                                      uStack_1928 = uStack_cb8;
                                                      uStack_1930 = uStack_cc0;
                                                      uStack_1918 = uStack_ca8;
                                                      uStack_1920 = uStack_cb0;
                                                      uStack_1908 = uStack_c98;
                                                      uStack_1910 = uStack_ca0;
                                                      uStack_1a18 = uStack_1758;
                                                      uStack_1a20 = uStack_1760;
                                                      uStack_1a08 = uStack_1748;
                                                      uStack_1a10 = uStack_1750;
                                                      uStack_19f8 = uStack_1738;
                                                      uStack_1a00 = uStack_1740;
                                                      uStack_19ef = uStack_172f;
                                                      uStack_19f7 = uStack_1737;
                                                      uStack_19f0 = uStack_1730;
                                                      uStack_1a58 = uStack_1798;
                                                      uStack_1a60 = uStack_17a0;
                                                      uStack_1a48 = uStack_1788;
                                                      uStack_1a50 = uStack_1790;
                                                      uStack_1a38 = uStack_1778;
                                                      uStack_1a40 = uStack_1780;
                                                      uStack_1a28 = uStack_1768;
                                                      uStack_1a30 = uStack_1770;
                                                      uStack_1a98 = uStack_17d8;
                                                      uStack_1aa0 = uStack_17e0;
                                                      uStack_1a88 = uStack_17c8;
                                                      uStack_1a90 = uStack_17d0;
                                                      uStack_1a78 = uStack_17b8;
                                                      uStack_1a80 = uStack_17c0;
                                                      uStack_1a68 = uStack_17a8;
                                                      uStack_1a70 = uStack_17b0;
                                                      puVar24 = &uStack_1aa0;
                                                      FUN_1046ca004(puVar24,&uStack_1940);
                                                      if (((ulong)puVar24 & 1) != 0)
                                                      goto LAB_1046d204c;
                                                    }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      else {
LAB_1046d1308:
                                        func_0x000103de4004(uVar18,lVar28,pcVar26,uVar5,pcVar25);
                                        lVar31 = lStack_1aa8;
                                        uStack_1ab0 = uVar23;
                                        func_0x000103de4004(pdVar4,uVar23,lVar12,lVar29,lStack_1aa8)
                                        ;
                                        func_0x000103de4018(uVar18,lVar28,pcVar26,uVar5,pcVar25);
                                        func_0x000103de4018(pdVar4,uStack_1ab0,lVar12,lVar29,lVar31)
                                        ;
                                      }
                                    }
                                    else {
                                      if (uVar23 == 1) goto LAB_1046d1308;
                                      bStack_1c0 = (byte)lVar29 & 1;
                                      bStack_1bf = (byte)((ulong)lVar29 >> 8) & 1;
                                      bStack_1be = (byte)((ulong)lVar29 >> 0x10) & 1;
                                      bStack_1e8 = (byte)uVar5 & 1;
                                      bStack_1e7 = (byte)((ulong)uVar5 >> 8) & 1;
                                      bStack_1e6 = (byte)((ulong)uVar5 >> 0x10) & 1;
                                      pcStack_1b08 = pcVar26;
                                      pcStack_1af8 = pcVar25;
                                      pdStack_1ae8 = pdVar4;
                                      uStack_1ab0 = uVar23;
                                      uStack_200 = uVar18;
                                      lStack_1f8 = lVar28;
                                      pcStack_1f0 = pcVar26;
                                      pcStack_1e0 = pcVar25;
                                      pdStack_1d8 = pdVar4;
                                      uStack_1d0 = uVar23;
                                      lStack_1c8 = lVar12;
                                      lStack_1b8 = lVar31;
                                      func_0x000103de4004(uVar18,lVar28,pcVar26,uVar5,pcVar25);
                                      uVar23 = uStack_1ab0;
                                      pdVar4 = pdStack_1ae8;
                                      func_0x000103de4004(pdStack_1ae8,uStack_1ab0,lVar12,lVar29,
                                                          lVar31);
                                      puVar24 = &uStack_200;
                                      FUN_104759ad8(puVar24,&pdStack_1d8);
                                      uStack_1b0c = (uint)puVar24;
                                      func_0x000103de4018(pdVar4,uVar23,lVar12,lVar29,lVar31);
                                      func_0x000103de4018(uVar18,lVar28,pcStack_1b08,uVar5,
                                                          pcStack_1af8);
                                      if ((uStack_1b0c & 1) != 0) goto LAB_1046d1478;
                                    }
                                  }
                                }
                                else {
                                  uStack_fe8 = uStack_d28;
                                  uStack_ff0 = uStack_d30;
                                  uStack_fd8 = uStack_d18;
                                  uStack_fe0 = uStack_d20;
                                  uStack_fc8 = uStack_d08;
                                  uStack_fd0 = uStack_d10;
                                  uStack_fb8 = uStack_cf8;
                                  uStack_fc0 = uStack_d00;
                                  uStack_1028 = uStack_d68;
                                  uStack_1030 = uStack_d70;
                                  uStack_1018 = uStack_d58;
                                  uStack_1020 = uStack_d60;
                                  uStack_1008 = uStack_d48;
                                  uStack_1010 = uStack_d50;
                                  uStack_ff8 = uStack_d38;
                                  uStack_1000 = uStack_d40;
                                  uStack_1048 = uStack_d88;
                                  uStack_1050 = uStack_d90;
                                  uStack_1038 = uStack_d78;
                                  uStack_1040 = uStack_d80;
                                  iVar10 = (int)&uStack_cf0;
                                  FUN_1046d2a38();
                                  if (iVar10 == 1) goto LAB_1046d10a4;
                                  uStack_2f8 = uStack_c88;
                                  uStack_300 = uStack_c90;
                                  uStack_2e8 = uStack_c78;
                                  uStack_2f0 = uStack_c80;
                                  uStack_2d8 = uStack_c68;
                                  uStack_2e0 = uStack_c70;
                                  uStack_2c8 = uStack_c58;
                                  uStack_2d0 = uStack_c60;
                                  uStack_f8 = CONCAT71(uStack_cd7,uStack_cd8);
                                  uStack_100 = CONCAT71(uStack_cdf,uStack_ce0);
                                  uStack_338 = uStack_cc8;
                                  uStack_340 = uStack_cd0;
                                  uStack_328 = uStack_cb8;
                                  uStack_330 = uStack_cc0;
                                  uStack_318 = uStack_ca8;
                                  uStack_320 = uStack_cb0;
                                  uStack_308 = uStack_c98;
                                  uStack_310 = uStack_ca0;
                                  uStack_358 = CONCAT71(uStack_ce7,uStack_ce8);
                                  uStack_348 = CONCAT71(uStack_cd7,uStack_cd8);
                                  uStack_350 = CONCAT71(uStack_cdf,uStack_ce0);
                                  uStack_108 = CONCAT71(uStack_ce7,uStack_ce8);
                                  uStack_360 = uStack_cf0;
                                  uStack_a8 = uStack_c88;
                                  uStack_b0 = uStack_c90;
                                  uStack_98 = uStack_c78;
                                  uStack_a0 = uStack_c80;
                                  uStack_88 = uStack_c68;
                                  uStack_90 = uStack_c70;
                                  uStack_78 = uStack_c58;
                                  uStack_80 = uStack_c60;
                                  uStack_e8 = uStack_cc8;
                                  uStack_f0 = uStack_cd0;
                                  uStack_d8 = uStack_cb8;
                                  uStack_e0 = uStack_cc0;
                                  uStack_c8 = uStack_ca8;
                                  uStack_d0 = uStack_cb0;
                                  uStack_b8 = uStack_c98;
                                  uStack_c0 = uStack_ca0;
                                  uStack_110 = uStack_cf0;
                                  uStack_148 = uStack_fe8;
                                  uStack_150 = uStack_ff0;
                                  uStack_138 = uStack_fd8;
                                  uStack_140 = uStack_fe0;
                                  uStack_128 = uStack_fc8;
                                  uStack_130 = uStack_fd0;
                                  uStack_118 = uStack_fb8;
                                  uStack_120 = uStack_fc0;
                                  uStack_188 = uStack_1028;
                                  uStack_190 = uStack_1030;
                                  uStack_178 = uStack_1018;
                                  uStack_180 = uStack_1020;
                                  uStack_168 = uStack_1008;
                                  uStack_170 = uStack_1010;
                                  uStack_158 = uStack_ff8;
                                  uStack_160 = uStack_1000;
                                  uStack_1a8 = uStack_1048;
                                  uStack_1b0 = uStack_1050;
                                  uStack_198 = uStack_1038;
                                  uStack_1a0 = uStack_1040;
                                  func_0x0001046d8c0c(&uStack_810,auStack_970,0x11308da18,
                                                      &UNK_10dd2f158);
                                  func_0x0001046d8c0c(&uStack_770,auStack_970,0x11308da18,
                                                      &UNK_10dd2f158);
                                  puVar24 = &uStack_1b0;
                                  FUN_1047a2edc(puVar24,&uStack_110);
                                  func_0x0001046d8cd4(&uStack_360,0x11308da18,&UNK_10dd2f158);
                                  func_0x0001046d8cd4(&uStack_d90,0x11308da18,&UNK_10dd2f158);
                                  if (((ulong)puVar24 & 1) != 0) goto LAB_1046d1250;
                                }
                              }
                            }
                          }
                        }
                      }
                      else if (lVar12 != 0) {
                        _swift_bridgeObjectRetain(lVar12);
                        uVar21 = uVar23;
                        _swift_bridgeObjectRetain();
                        func_0x00010470a93c();
                        _swift_bridgeObjectRelease(uVar23);
                        _swift_bridgeObjectRelease(lVar12);
                        if ((uVar21 & 1) != 0) goto LAB_1046d0de4;
                      }
                    }
                  }
                  else {
LAB_1046d0974:
                    uVar18 = 0x112d68090;
                    puVar19 = &UNK_10da24400;
LAB_1046d0cc0:
                    func_0x0001046d8cd4(puVar24,uVar18,puVar19);
                  }
                }
                else {
                  func_0x0001046d8c0c(puVar24,lVar31,0x112d3bc20,&UNK_10d904ef0);
                  lVar14 = (long)puVar24 + (long)pdStack_1ae8;
                  (*pcStack_1af8)(lVar14,1,lStack_1aa8);
                  if ((int)lVar14 == 1) {
                    (**(code **)(uStack_1ab0 + 8))(lVar31,lStack_1aa8);
                    goto LAB_1046d0974;
                  }
                  (**(code **)(uStack_1ab0 + 0x20))
                            (lVar28,(long)puVar24 + (long)pdStack_1ae8,lStack_1aa8);
                  uVar18 = 0x112d68098;
                  func_0x0001046d8d44(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                                      PTR___s10Foundation4UUIDVSQAAMc_110350c50);
                  lVar14 = lVar31;
                  pdStack_1ae8 = param_1;
                  __sSQ2eeoiySbx_xtFZTj(lVar31,lVar28,lStack_1aa8,uVar18);
                  param_1 = pdStack_1ae8;
                  uStack_1b0c = (uint)lVar14;
                  pcStack_1b08 = *(code **)(uStack_1ab0 + 8);
                  (*pcStack_1b08)(lVar28,lStack_1aa8);
                  (*pcStack_1b08)(lVar31,lStack_1aa8);
                  func_0x0001046d8cd4(puVar24,0x112d3bc20,&UNK_10d904ef0);
                  if ((uStack_1b0c & 1) != 0) goto LAB_1046d0a28;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1046d0cc4:
  bVar22 = 0;
LAB_1046d0cc8:
  return bVar22 & 1;
}



/* Entry: 1046cbd34; end: 1046cc273;  */

void FUN_1046cbd34(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  undefined1 auVar7 [8];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar15;
  code *pcVar16;
  long lVar17;
  long alStack_420 [5];
  undefined8 *puStack_3f8;
  long alStack_3f0 [15];
  undefined1 auStack_378 [8];
  undefined1 auStack_377 [8];
  undefined1 auStack_36f [15];
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 auStack_330 [352];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined8 uStack_77;
  
  lVar12 = 0x112db39a8;
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)alStack_420 - extraout_x8;
  lVar11 = 0;
  alStack_3f0[1] = lVar17;
  func_0x000100b91d00();
  lVar12 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  puVar15 = (undefined8 *)(lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  iVar5 = *(int *)(lVar12 + 0x3c);
  lVar12 = 0;
  __s10Foundation4UUIDVMa();
  pcVar16 = *(code **)(*(long *)(lVar12 + -8) + 0x38);
  (*pcVar16)((long)puVar15 + (long)iVar5,1,1,lVar12);
  (*pcVar16)((long)puVar15 + (long)*(int *)(lVar11 + 0x40),1,1,lVar12);
  (*pcVar16)((long)puVar15 + (long)*(int *)(lVar11 + 0x44),1,1,lVar12);
  func_0x0001015410ac(alStack_3f0 + 4);
  func_0x000102d123c4(auStack_330);
  lVar13 = 0;
  func_0x000100b91fbc();
  pcVar16 = *(code **)(*(long *)(lVar13 + -8) + 0x38);
  (*pcVar16)(lVar17,1,1,lVar13);
  func_0x0001015410d0(&uStack_1d0);
  func_0x0001015415ac(&uStack_128);
  uVar9 = uStack_358;
  uVar8 = uStack_360;
  uVar14 = stack0xfffffffffffffc90;
  alStack_420[1] = (long)*(int *)(lVar11 + 0x4c);
  puVar1 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 0x5c));
  puVar1[0xd] = auStack_36f._7_8_;
  puVar1[0xc] = uVar14;
  puVar1[0xf] = uVar9;
  puVar1[0xe] = uVar8;
  uVar9 = uStack_338;
  uVar8 = uStack_340;
  uVar14 = uStack_350;
  lVar12 = alStack_3f0[8];
  puVar1[0x11] = uStack_348;
  puVar1[0x10] = uVar14;
  lVar6 = alStack_3f0[0xb];
  lVar17 = alStack_3f0[10];
  puVar1[0x13] = uVar9;
  puVar1[0x12] = uVar8;
  puVar1[5] = alStack_3f0[9];
  puVar1[4] = lVar12;
  puVar1[7] = lVar6;
  puVar1[6] = lVar17;
  auVar7 = auStack_378;
  lVar17 = alStack_3f0[0xe];
  lVar12 = alStack_3f0[0xc];
  puVar1[9] = alStack_3f0[0xd];
  puVar1[8] = lVar12;
  puVar1[0xb] = auVar7;
  puVar1[10] = lVar17;
  lVar6 = alStack_3f0[7];
  lVar17 = alStack_3f0[6];
  lVar12 = alStack_3f0[4];
  puVar1[1] = alStack_3f0[5];
  *puVar1 = lVar12;
  puVar1[3] = lVar6;
  puVar1[2] = lVar17;
  puVar2 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 100));
  alStack_420[3] = 1;
  alStack_420[2] = 0;
  puVar2[1] = 1;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[2] = 0;
  lVar17 = (long)*(int *)(lVar11 + 0x68);
  _memcpy((long)puVar15 + lVar17,auStack_330,0x160);
  puStack_3f8 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 0x7c));
  puVar3 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 0x80));
  alStack_3f0[3] = 0xf000000000000000;
  alStack_3f0[2] = 0;
  puVar3[1] = 0xf000000000000000;
  *puVar3 = 0;
  alStack_3f0[0] = (long)*(int *)(lVar11 + 0x84);
  (*pcVar16)((long)puVar15 + alStack_3f0[0],1,1,lVar13);
  uVar9 = uStack_90;
  uVar8 = uStack_98;
  uVar14 = uStack_a8;
  puVar4 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 0x94));
  puVar4[0x11] = uStack_a0;
  puVar4[0x10] = uVar14;
  puVar4[0x13] = uVar9;
  puVar4[0x12] = uVar8;
  uVar14 = uStack_88;
  puVar4[0x15] = CONCAT71(uStack_7f,uStack_80);
  puVar4[0x14] = uVar14;
  uVar14 = CONCAT17(uStack_78,uStack_7f);
  *(undefined8 *)((long)puVar4 + 0xb1) = uStack_77;
  *(undefined8 *)((long)puVar4 + 0xa9) = uVar14;
  uVar9 = uStack_d0;
  uVar8 = uStack_d8;
  uVar14 = uStack_e8;
  puVar4[9] = uStack_e0;
  puVar4[8] = uVar14;
  puVar4[0xb] = uVar9;
  puVar4[10] = uVar8;
  uVar9 = uStack_b0;
  uVar8 = uStack_b8;
  uVar14 = uStack_c8;
  puVar4[0xd] = uStack_c0;
  puVar4[0xc] = uVar14;
  puVar4[0xf] = uVar9;
  puVar4[0xe] = uVar8;
  uVar9 = uStack_110;
  uVar8 = uStack_118;
  uVar14 = uStack_128;
  puVar4[1] = uStack_120;
  *puVar4 = uVar14;
  puVar4[3] = uVar9;
  puVar4[2] = uVar8;
  uVar9 = uStack_f0;
  uVar8 = uStack_f8;
  uVar14 = uStack_108;
  puVar4[5] = uStack_100;
  puVar4[4] = uVar14;
  puVar4[7] = uVar9;
  puVar4[6] = uVar8;
  puVar15[1] = 0;
  *puVar15 = 0;
  puVar15[3] = 0;
  puVar15[2] = 0;
  puVar15[5] = 0;
  puVar15[4] = 10;
  puVar15[6] = 0xe000000000000000;
  puVar15[0x10] = 0;
  puVar15[0xf] = 0;
  puVar15[0xe] = 0;
  puVar15[0xd] = 0;
  puVar15[0xc] = 0;
  puVar15[0xb] = 0;
  puVar15[10] = 0;
  puVar15[9] = 0;
  puVar15[8] = 0;
  puVar15[7] = 0;
  *(undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 0x48)) = 0x17;
  *(undefined8 *)((long)puVar15 + alStack_420[1]) = 0;
  *(undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 0x50)) = 0;
  *(undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 0x54)) = 0;
  *(undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 0x58)) = 0;
  func_0x0001046d8cd4(puVar1,0x11308da18,&UNK_10dd2f158);
  puVar1[0xd] = auStack_36f._7_8_;
  puVar1[0xc] = stack0xfffffffffffffc90;
  puVar1[0xf] = uStack_358;
  puVar1[0xe] = uStack_360;
  puVar1[0x11] = uStack_348;
  puVar1[0x10] = uStack_350;
  puVar1[0x13] = uStack_338;
  puVar1[0x12] = uStack_340;
  puVar1[5] = alStack_3f0[9];
  puVar1[4] = alStack_3f0[8];
  puVar1[7] = alStack_3f0[0xb];
  puVar1[6] = alStack_3f0[10];
  puVar1[9] = alStack_3f0[0xd];
  puVar1[8] = alStack_3f0[0xc];
  puVar1[0xb] = auStack_378;
  puVar1[10] = alStack_3f0[0xe];
  puVar1[1] = alStack_3f0[5];
  *puVar1 = alStack_3f0[4];
  puVar1[3] = alStack_3f0[7];
  puVar1[2] = alStack_3f0[6];
  *(undefined1 *)((long)puVar15 + (long)*(int *)(lVar11 + 0x60)) = 0;
  func_0x000103de4018(*puVar2,puVar2[1],puVar2[2],puVar2[3],puVar2[4]);
  lVar12 = alStack_420[2];
  puVar2[1] = alStack_420[3];
  *puVar2 = lVar12;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[2] = 0;
  func_0x0001046d8cd4((long)puVar15 + lVar17,0x112db3a28,&UNK_10d95ddb0);
  _memcpy((long)puVar15 + lVar17,auStack_330,0x160);
  lVar12 = alStack_3f0[2];
  puVar1 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 0x6c));
  puVar1[1] = alStack_3f0[3];
  *puVar1 = lVar12;
  *(undefined1 *)((long)puVar15 + (long)*(int *)(lVar11 + 0x70)) = 0;
  puVar1 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 0x74));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 0x78));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = puStack_3f8;
  *puStack_3f8 = 0;
  puVar1[1] = 0;
  func_0x0001000b44c0(*puVar3,puVar3[1]);
  lVar12 = alStack_3f0[2];
  puVar3[1] = alStack_3f0[3];
  *puVar3 = lVar12;
  FUN_1046ca768(alStack_3f0[1],(long)puVar15 + alStack_3f0[0],0x112db39a8,&UNK_10d95dd90);
  uVar8 = uStack_1b8;
  uVar14 = uStack_1c0;
  puVar1 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 0x88));
  puVar1[1] = uStack_1c8;
  *puVar1 = uStack_1d0;
  puVar1[3] = uVar8;
  puVar1[2] = uVar14;
  uVar10 = uStack_178;
  uVar9 = uStack_180;
  uVar8 = uStack_198;
  uVar14 = uStack_1a0;
  puVar1[9] = uStack_188;
  puVar1[8] = uStack_190;
  puVar1[0xb] = uVar10;
  puVar1[10] = uVar9;
  puVar1[5] = uStack_1a8;
  puVar1[4] = uStack_1b0;
  puVar1[7] = uVar8;
  puVar1[6] = uVar14;
  *(undefined1 *)(puVar1 + 0x14) = uStack_130;
  uVar10 = uStack_138;
  uVar9 = uStack_140;
  uVar8 = uStack_158;
  uVar14 = uStack_160;
  puVar1[0x11] = uStack_148;
  puVar1[0x10] = uStack_150;
  puVar1[0x13] = uVar10;
  puVar1[0x12] = uVar9;
  puVar1[0xd] = uStack_168;
  puVar1[0xc] = uStack_170;
  puVar1[0xf] = uVar8;
  puVar1[0xe] = uVar14;
  *(undefined4 *)((long)puVar15 + (long)*(int *)(lVar11 + 0x8c)) = 0;
  *(undefined1 *)((long)puVar15 + (long)*(int *)(lVar11 + 0x90)) = 0;
  puVar4[1] = uStack_120;
  *puVar4 = uStack_128;
  puVar4[3] = uStack_110;
  puVar4[2] = uStack_118;
  puVar4[5] = uStack_100;
  puVar4[4] = uStack_108;
  puVar4[7] = uStack_f0;
  puVar4[6] = uStack_f8;
  puVar4[0xd] = uStack_c0;
  puVar4[0xc] = uStack_c8;
  puVar4[0xf] = uStack_b0;
  puVar4[0xe] = uStack_b8;
  puVar4[9] = uStack_e0;
  puVar4[8] = uStack_e8;
  puVar4[0xb] = uStack_d0;
  puVar4[10] = uStack_d8;
  uVar14 = CONCAT17(uStack_78,uStack_7f);
  *(undefined8 *)((long)puVar4 + 0xb1) = uStack_77;
  *(undefined8 *)((long)puVar4 + 0xa9) = uVar14;
  puVar4[0x13] = uStack_90;
  puVar4[0x12] = uStack_98;
  puVar4[0x15] = CONCAT71(uStack_7f,uStack_80);
  puVar4[0x14] = uStack_88;
  puVar4[0x11] = uStack_a0;
  puVar4[0x10] = uStack_a8;
  *(undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 0x98)) = 0;
  *(undefined1 *)((long)puVar15 + (long)*(int *)(lVar11 + 0x9c)) = 0;
  *(undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 0xa0)) = 0;
  *(undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 0xa4)) = 0;
  *(undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 0xa8)) = 0;
  puVar1 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 0xac));
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 0xb0)) = 0;
  *(undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 0xb4)) = 0;
  puVar1 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 0xb8));
  puVar1[1] = uStack_1c8;
  *puVar1 = uStack_1d0;
  puVar1[3] = uStack_1b8;
  puVar1[2] = uStack_1c0;
  puVar1[9] = uStack_188;
  puVar1[8] = uStack_190;
  puVar1[0xb] = uStack_178;
  puVar1[10] = uStack_180;
  puVar1[5] = uStack_1a8;
  puVar1[4] = uStack_1b0;
  puVar1[7] = uStack_198;
  puVar1[6] = uStack_1a0;
  puVar1[0x11] = uStack_148;
  puVar1[0x10] = uStack_150;
  puVar1[0x13] = uStack_138;
  puVar1[0x12] = uStack_140;
  puVar1[0xd] = uStack_168;
  puVar1[0xc] = uStack_170;
  puVar1[0xf] = uStack_158;
  puVar1[0xe] = uStack_160;
  *(undefined1 *)(puVar1 + 0x14) = uStack_130;
  puVar1 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 0xbc));
  puVar1[0x11] = uStack_148;
  puVar1[0x10] = uStack_150;
  puVar1[0x13] = uStack_138;
  puVar1[0x12] = uStack_140;
  puVar1[9] = uStack_188;
  puVar1[8] = uStack_190;
  puVar1[0xb] = uStack_178;
  puVar1[10] = uStack_180;
  puVar1[0xd] = uStack_168;
  puVar1[0xc] = uStack_170;
  puVar1[0xf] = uStack_158;
  puVar1[0xe] = uStack_160;
  puVar1[1] = uStack_1c8;
  *puVar1 = uStack_1d0;
  puVar1[3] = uStack_1b8;
  puVar1[2] = uStack_1c0;
  *(undefined1 *)(puVar1 + 0x14) = uStack_130;
  puVar1[5] = uStack_1a8;
  puVar1[4] = uStack_1b0;
  puVar1[7] = uStack_198;
  puVar1[6] = uStack_1a0;
  *(undefined1 *)((long)puVar15 + (long)*(int *)(lVar11 + 0xc0)) = 2;
  *(undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 0xc4)) = 0;
  *(undefined8 *)((long)puVar15 + (long)*(int *)(lVar11 + 200)) = 0;
  *(undefined1 *)((long)puVar15 + (long)*(int *)(lVar11 + 0xcc)) = 0;
  uVar14 = 0;
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(puVar15,uVar14);
  puRam00000001138151c8 = puVar15;
  return;
}



/* Entry: 1046cc274; end: 1046cc2b3; +[SCAdResponse identity] */

void FUN_1046cc274(void)

{
  if (lRam000000011308da20 != -1) {
    _swift_once(0x11308da20,FUN_1046cbd34);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138151c8);
  return;
}



/* Entry: 1046cc2b4; end: 1046cc447;  */

long FUN_1046cc2b4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  undefined8 auStack_110 [21];
  undefined1 uStack_68;
  undefined8 uStack_67;
  undefined8 uStack_5f;
  
  lVar2 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar3 = (long)auStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar3 - extraout_x12;
  _objc_retain();
  FUN_1047b6fb0(lVar4);
  puVar1 = (undefined8 *)(lVar4 + *(int *)(lVar2 + 0x94));
  if (param_1 == 0) {
    func_0x0001015415ac(auStack_110);
    puVar1[0x11] = auStack_110[0x11];
    puVar1[0x10] = auStack_110[0x10];
    puVar1[0x13] = auStack_110[0x13];
    puVar1[0x12] = auStack_110[0x12];
    puVar1[0x15] = CONCAT71((undefined7)uStack_67,uStack_68);
    puVar1[0x14] = auStack_110[0x14];
    *(undefined8 *)((long)puVar1 + 0xb1) = uStack_5f;
    *(ulong *)((long)puVar1 + 0xa9) = CONCAT17(uStack_67._7_1_,(undefined7)uStack_67);
    puVar1[9] = auStack_110[9];
    puVar1[8] = auStack_110[8];
    puVar1[0xb] = auStack_110[0xb];
    puVar1[10] = auStack_110[10];
    puVar1[0xd] = auStack_110[0xd];
    puVar1[0xc] = auStack_110[0xc];
    puVar1[0xf] = auStack_110[0xf];
    puVar1[0xe] = auStack_110[0xe];
    puVar1[1] = auStack_110[1];
    *puVar1 = auStack_110[0];
    puVar1[3] = auStack_110[3];
    puVar1[2] = auStack_110[2];
    puVar1[5] = auStack_110[5];
    puVar1[4] = auStack_110[4];
    puVar1[7] = auStack_110[7];
    puVar1[6] = auStack_110[6];
  }
  else {
    _objc_retain(param_1);
    FUN_1047b5628(auStack_110);
    _objc_release(param_1);
    puVar1[0x11] = auStack_110[0x11];
    puVar1[0x10] = auStack_110[0x10];
    puVar1[0x13] = auStack_110[0x13];
    puVar1[0x12] = auStack_110[0x12];
    puVar1[0x15] = CONCAT71((undefined7)uStack_67,uStack_68);
    puVar1[0x14] = auStack_110[0x14];
    *(undefined8 *)((long)puVar1 + 0xb1) = uStack_5f;
    *(ulong *)((long)puVar1 + 0xa9) = CONCAT17(uStack_67._7_1_,(undefined7)uStack_67);
    puVar1[9] = auStack_110[9];
    puVar1[8] = auStack_110[8];
    puVar1[0xb] = auStack_110[0xb];
    puVar1[10] = auStack_110[10];
    puVar1[0xd] = auStack_110[0xd];
    puVar1[0xc] = auStack_110[0xc];
    puVar1[0xf] = auStack_110[0xf];
    puVar1[0xe] = auStack_110[0xe];
    puVar1[1] = auStack_110[1];
    *puVar1 = auStack_110[0];
    puVar1[3] = auStack_110[3];
    puVar1[2] = auStack_110[2];
    puVar1[5] = auStack_110[5];
    puVar1[4] = auStack_110[4];
    puVar1[7] = auStack_110[7];
    puVar1[6] = auStack_110[6];
    func_0x000103de92cc(puVar1);
  }
  FUN_1046d8bc8(lVar4,lVar3,&SUB_100b91d00);
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(lVar3);
  func_0x0001046d8c98(lVar4,&SUB_100b91d00);
  return lVar3;
}



/* Entry: 1046cc448; end: 1046cc4a7; -[SCAdResponse withAdInsertionConfig:] */

void FUN_1046cc448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1046cc2b4(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1046cc4a8; end: 1046cc59b; -[SCAdResponse withCacheType:] */

void FUN_1046cc4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar2 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1047b6fb0(lVar3);
  *(undefined8 *)(lVar3 + *(int *)(lVar1 + 0x98)) = param_3;
  FUN_1046d8bc8(lVar3,puVar2,&SUB_100b91d00);
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(puVar2);
  _objc_release(param_1);
  func_0x0001046d8c98(lVar3,&SUB_100b91d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1046cc59c; end: 1046cc703;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_1046cc59c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong auStack_80 [4];
  byte bStack_60;
  char cStack_5f;
  char cStack_5e;
  undefined8 uStack_58;
  
  lVar2 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar3 = (long)auStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar3 - extraout_x12;
  _objc_retain();
  FUN_1047b6fb0(lVar4);
  if (param_1 == 0) {
    uVar5 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 1;
    uVar6 = 0;
  }
  else {
    func_0x00010481c2dc(auStack_80 + 1,param_1);
    uVar6 = 0x100;
    if (cStack_5f == '\0') {
      uVar6 = 0;
    }
    uVar9 = 0x10000;
    if (cStack_5e == '\0') {
      uVar9 = 0;
    }
    uVar9 = uVar6 | bStack_60 | uVar9;
    uVar5 = auStack_80[1];
    uVar6 = auStack_80[3];
    uVar7 = auStack_80[2];
    uVar8 = uStack_58;
  }
  puVar1 = (undefined8 *)(lVar4 + *(int *)(lVar2 + 100));
  func_0x000103de4018(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4]);
  *puVar1 = uVar5;
  puVar1[1] = uVar7;
  puVar1[2] = uVar6;
  puVar1[3] = uVar9;
  puVar1[4] = uVar8;
  FUN_1046d8bc8(lVar4,lVar3,&SUB_100b91d00);
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(lVar3);
  func_0x0001046d8c98(lVar4,&SUB_100b91d00);
  return lVar3;
}



/* Entry: 1046cc704; end: 1046cc763; -[SCAdResponse withServeLoggingContext:] */

void FUN_1046cc704(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1046cc59c(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1046cc764; end: 1046cc8b7;  */

undefined1 * FUN_1046cc764(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  undefined1 auStack_310 [352];
  undefined1 auStack_1b0 [352];
  
  lVar2 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = auStack_310 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  _objc_retain();
  FUN_1047b6fb0(lVar5);
  if (param_1 == 0) {
    func_0x000102d123c4(auStack_1b0);
  }
  else {
    _objc_retain(param_1);
    FUN_104820bb8(auStack_310);
    func_0x000102d123f8(auStack_310);
    _memcpy(auStack_1b0,auStack_310,0x160);
  }
  iVar1 = *(int *)(lVar2 + 0x68);
  func_0x0001046d8cd4(lVar5 + iVar1,0x112db3a28,&UNK_10d95ddb0);
  _memcpy(lVar5 + iVar1,auStack_1b0,0x160);
  func_0x0001046d8bc8(lVar5,puVar4,&SUB_100b91d00);
  uVar3 = 0;
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(puVar4,uVar3);
  func_0x0001046d8c98(lVar5,&SUB_100b91d00);
  return puVar4;
}



/* Entry: 1046cc8b8; end: 1046cc917; -[SCAdResponse withTargetingParameters:] */

void FUN_1046cc8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1046cc764(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1046cc918; end: 1046cca1b; -[SCAdResponse withIdentifier:] */

void FUN_1046cc918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = (long)puVar2 - extraout_x12;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_retain(param_1);
  _objc_retain();
  FUN_1047b6fb0(lVar1);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x30));
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  *(undefined8 *)(lVar1 + 0x30) = param_2;
  FUN_1046d8bc8(lVar1,puVar2,&SUB_100b91d00);
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(puVar2);
  _objc_release(param_1);
  func_0x0001046d8c98(lVar1,&SUB_100b91d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1046cca1c; end: 1046ccb2f; -[SCAdResponse withAdId:] */

void FUN_1046cca1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = (long)puVar3 - extraout_x12;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1047b6fb0(lVar1);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x40));
  *(long *)(lVar1 + 0x38) = param_3;
  *(undefined8 *)(lVar1 + 0x40) = param_2;
  FUN_1046d8bc8(lVar1,puVar3,&SUB_100b91d00);
  uVar2 = 0;
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(puVar3,uVar2);
  _objc_release(param_1);
  func_0x0001046d8c98(lVar1,&SUB_100b91d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1046ccb30; end: 1046ccc43; -[SCAdResponse withPixelId:] */

void FUN_1046ccb30(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = (long)puVar3 - extraout_x12;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1047b6fb0(lVar1);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x80));
  *(long *)(lVar1 + 0x78) = param_3;
  *(undefined8 *)(lVar1 + 0x80) = param_2;
  FUN_1046d8bc8(lVar1,puVar3,&SUB_100b91d00);
  uVar2 = 0;
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(puVar3,uVar2);
  _objc_release(param_1);
  func_0x0001046d8c98(lVar1,&SUB_100b91d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1046ccc44; end: 1046cce87;  */

long FUN_1046ccc44(ulong param_1)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar4 = 0;
  FUN_1046d90b0();
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar8 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar6 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar6 - extraout_x12;
  _objc_retain();
  FUN_1047b6fb0(lVar10);
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    if (param_1 >> 0x3e == 0) {
      uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar9 = param_1;
      if (-1 < (long)param_1) {
        uVar9 = param_1 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar9 != 0) {
      puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001046c70b0(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1046cce88);
        (*pcVar3)();
      }
      uVar11 = 0;
      puVar5 = puStack_68;
      lStack_80 = lVar4;
      lStack_78 = lVar10;
      lStack_70 = lVar6;
      do {
        if ((param_1 & 0xc000000000000001) == 0) {
          _objc_retain(*(undefined8 *)(param_1 + uVar11 * 8 + 0x20));
        }
        else {
          func_0x000100e471e4(uVar11,param_1);
        }
        FUN_1047c15e8(lVar8);
        uVar1 = *(ulong *)(puVar5 + 0x10);
        puStack_68 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
          func_0x0001046c70b0(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
        }
        puVar5 = puStack_68;
        uVar11 = uVar11 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
        func_0x0001046d8c54(lVar8,puStack_68 +
                                  *(long *)(lVar7 + 0x48) * uVar1 +
                                  ((ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                                  ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff)),
                            FUN_1046d90b0);
        lVar4 = lStack_80;
        lVar6 = lStack_70;
        lVar10 = lStack_78;
      } while (uVar9 != uVar11);
    }
  }
  iVar2 = *(int *)(lVar4 + 0x4c);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar10 + iVar2));
  *(undefined **)(lVar10 + iVar2) = puVar5;
  func_0x0001046d8bc8(lVar10,lVar6,&SUB_100b91d00);
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(lVar6);
  func_0x0001046d8c98(lVar10,&SUB_100b91d00);
  return lVar6;
}



/* Entry: 1046cce88; end: 1046ccef7; -[SCAdResponse withAdSnapArray:] */

void FUN_1046cce88(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    uVar1 = 0;
    FUN_1047c6864(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  _objc_retain(param_1);
  lVar2 = param_3;
  FUN_1046ccc44(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1046ccef8; end: 1046cd07b;  */

long FUN_1046ccef8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x12;
  long lVar7;
  undefined8 auStack_190 [23];
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar4 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar6 = (long)auStack_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar6 - extraout_x12;
  _objc_retain();
  FUN_1047b6fb0(lVar7);
  if (param_1 == 0) {
    func_0x0001015410ac(auStack_190 + 0x14);
  }
  else {
    FUN_10482a074(auStack_190,param_1);
    func_0x000101541574(auStack_190);
    uStack_88 = auStack_190[0xd];
    uStack_90 = auStack_190[0xc];
    uStack_78 = auStack_190[0xf];
    uStack_80 = auStack_190[0xe];
    uStack_68 = auStack_190[0x11];
    uStack_70 = auStack_190[0x10];
    uStack_58 = auStack_190[0x13];
    uStack_60 = auStack_190[0x12];
    uStack_c8 = auStack_190[5];
    uStack_d0 = auStack_190[4];
    uStack_b8 = auStack_190[7];
    uStack_c0 = auStack_190[6];
    uStack_a8 = auStack_190[9];
    uStack_b0 = auStack_190[8];
    uStack_98 = auStack_190[0xb];
    uStack_a0 = auStack_190[10];
    auStack_190[0x15] = auStack_190[1];
    auStack_190[0x14] = auStack_190[0];
    uStack_d8 = auStack_190[3];
    auStack_190[0x16] = auStack_190[2];
  }
  puVar1 = (undefined8 *)(lVar7 + *(int *)(lVar4 + 0x5c));
  func_0x0001046d8cd4(puVar1,0x11308da18,&UNK_10dd2f158);
  uVar3 = uStack_78;
  uVar2 = uStack_80;
  uVar5 = uStack_90;
  puVar1[0xd] = uStack_88;
  puVar1[0xc] = uVar5;
  puVar1[0xf] = uVar3;
  puVar1[0xe] = uVar2;
  uVar3 = uStack_58;
  uVar2 = uStack_60;
  uVar5 = uStack_70;
  puVar1[0x11] = uStack_68;
  puVar1[0x10] = uVar5;
  puVar1[0x13] = uVar3;
  puVar1[0x12] = uVar2;
  uVar3 = uStack_b8;
  uVar2 = uStack_c0;
  uVar5 = uStack_d0;
  puVar1[5] = uStack_c8;
  puVar1[4] = uVar5;
  puVar1[7] = uVar3;
  puVar1[6] = uVar2;
  uVar3 = uStack_98;
  uVar2 = uStack_a0;
  uVar5 = uStack_b0;
  puVar1[9] = uStack_a8;
  puVar1[8] = uVar5;
  puVar1[0xb] = uVar3;
  puVar1[10] = uVar2;
  uVar3 = uStack_d8;
  uVar2 = auStack_190[0x16];
  uVar5 = auStack_190[0x14];
  puVar1[1] = auStack_190[0x15];
  *puVar1 = uVar5;
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
  func_0x0001046d8bc8(lVar7,lVar6,&SUB_100b91d00);
  uVar5 = 0;
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(lVar6,uVar5);
  func_0x0001046d8c98(lVar7,&SUB_100b91d00);
  return lVar6;
}



/* Entry: 1046cd07c; end: 1046cd0db; -[SCAdResponse withStoryAd:] */

void FUN_1046cd07c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1046ccef8(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1046cd0dc; end: 1046cd1c7; -[SCAdResponse withAdProductType:] */

void FUN_1046cd0dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = (long)puVar2 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1047b6fb0(lVar1);
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  FUN_1046d8bc8(lVar1,puVar2,&SUB_100b91d00);
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(puVar2);
  _objc_release(param_1);
  func_0x0001046d8c98(lVar1,&SUB_100b91d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1046cd1c8; end: 1046cd2db; -[SCAdResponse withServeItemId:] */

void FUN_1046cd1c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = (long)puVar3 - extraout_x12;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1047b6fb0(lVar1);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x50));
  *(long *)(lVar1 + 0x48) = param_3;
  *(undefined8 *)(lVar1 + 0x50) = param_2;
  FUN_1046d8bc8(lVar1,puVar3,&SUB_100b91d00);
  uVar2 = 0;
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(puVar3,uVar2);
  _objc_release(param_1);
  func_0x0001046d8c98(lVar1,&SUB_100b91d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1046cd2dc; end: 1046cd3cf; -[SCAdResponse withAdType:] */

void FUN_1046cd2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar2 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1047b6fb0(lVar3);
  *(undefined8 *)(lVar3 + *(int *)(lVar1 + 0x48)) = param_3;
  FUN_1046d8bc8(lVar3,puVar2,&SUB_100b91d00);
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(puVar2);
  _objc_release(param_1);
  func_0x0001046d8c98(lVar3,&SUB_100b91d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1046cd3d0; end: 1046cd4c3; -[SCAdResponse withIsValid:] */

void FUN_1046cd3d0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar2 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1047b6fb0(lVar3);
  *(undefined1 *)(lVar3 + *(int *)(lVar1 + 0x60)) = param_3;
  FUN_1046d8bc8(lVar3,puVar2,&SUB_100b91d00);
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(puVar2);
  _objc_release(param_1);
  func_0x0001046d8c98(lVar3,&SUB_100b91d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1046cd4c4; end: 1046cd5b7; -[SCAdResponse withPreferredDownloadMethod:] */

void FUN_1046cd4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar2 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1047b6fb0(lVar3);
  *(undefined8 *)(lVar3 + *(int *)(lVar1 + 0xa4)) = param_3;
  FUN_1046d8bc8(lVar3,puVar2,&SUB_100b91d00);
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(puVar2);
  _objc_release(param_1);
  func_0x0001046d8c98(lVar3,&SUB_100b91d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1046cd5b8; end: 1046cd6ab; -[SCAdResponse withResolvedTimeStampMillis:] */

void FUN_1046cd5b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar3;
  
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar3 = (undefined8 *)(puVar2 + -extraout_x12);
  _objc_retain(param_2);
  _objc_retain();
  FUN_1047b6fb0(puVar3);
  *puVar3 = param_1;
  FUN_1046d8bc8(puVar3,puVar2,&SUB_100b91d00);
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(puVar2);
  _objc_release(param_2);
  func_0x0001046d8c98(puVar3,&SUB_100b91d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1046cd6ac; end: 1046cd79f; -[SCAdResponse withExpireTimeStampMillis:] */

void FUN_1046cd6ac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = (long)puVar2 - extraout_x12;
  _objc_retain(param_2);
  _objc_retain();
  FUN_1047b6fb0(lVar1);
  *(undefined8 *)(lVar1 + 8) = param_1;
  FUN_1046d8bc8(lVar1,puVar2,&SUB_100b91d00);
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(puVar2);
  _objc_release(param_2);
  func_0x0001046d8c98(lVar1,&SUB_100b91d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1046cd7a0; end: 1046cd893; -[SCAdResponse withBackupCacheExpireTimeStampMillis:] */

void FUN_1046cd7a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = (long)puVar2 - extraout_x12;
  _objc_retain(param_2);
  _objc_retain();
  FUN_1047b6fb0(lVar1);
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  FUN_1046d8bc8(lVar1,puVar2,&SUB_100b91d00);
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(puVar2);
  _objc_release(param_2);
  func_0x0001046d8c98(lVar1,&SUB_100b91d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1046cd894; end: 1046cd987; -[SCAdResponse withServeTimeStampMillis:] */

void FUN_1046cd894(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = (long)puVar2 - extraout_x12;
  _objc_retain(param_2);
  _objc_retain();
  FUN_1047b6fb0(lVar1);
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  FUN_1046d8bc8(lVar1,puVar2,&SUB_100b91d00);
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(puVar2);
  _objc_release(param_2);
  func_0x0001046d8c98(lVar1,&SUB_100b91d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1046cd988; end: 1046cdaa7; -[SCAdResponse withProtoTrackURL:] */

void FUN_1046cd988(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  
  lVar2 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1047b6fb0(lVar5);
  plVar1 = (long *)(lVar5 + *(int *)(lVar2 + 0x7c));
  _swift_bridgeObjectRelease(plVar1[1]);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  FUN_1046d8bc8(lVar5,puVar4,&SUB_100b91d00);
  uVar3 = 0;
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(puVar4,uVar3);
  _objc_release(param_1);
  func_0x0001046d8c98(lVar5,&SUB_100b91d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1046cdaa8; end: 1046cdc0b; -[SCAdResponse withViewReceipt:] */

void FUN_1046cdaa8(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x12;
  long lVar6;
  
  lVar2 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar5 - extraout_x12;
  if (param_3 == 0) {
    _objc_retain(param_1);
    param_2 = -0x1000000000000000;
  }
  else {
    _objc_retain(param_1);
    lVar3 = param_3;
    _objc_retain(param_3);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar3);
  }
  _objc_retain(param_1);
  FUN_1047b6fb0(lVar6);
  plVar1 = (long *)(lVar6 + *(int *)(lVar2 + 0x80));
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  func_0x000100de78a0(param_3,param_2);
  func_0x0001000b44c0(lVar2,lVar3);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  FUN_1046d8bc8(lVar6,puVar5,&SUB_100b91d00);
  uVar4 = 0;
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(puVar5,uVar4);
  _objc_release(param_1);
  func_0x0001000b44c0(param_3,param_2);
  func_0x0001046d8c98(lVar6,&SUB_100b91d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1046cdc0c; end: 1046cde7b; -[SCAdResponse withBrandSafetyInventoryType:] */

void FUN_1046cdc0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar2 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1047b6fb0(lVar3);
  *(undefined8 *)(lVar3 + *(int *)(lVar1 + 0xa8)) = param_3;
  FUN_1046d8bc8(lVar3,puVar2,&SUB_100b91d00);
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(puVar2);
  _objc_release(param_1);
  func_0x0001046d8c98(lVar3,&SUB_100b91d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1046cde7c; end: 1046cdedb; -[SCAdResponse withSkAdNetworkAttribution:] */

void FUN_1046cde7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x0001046cdd00(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1046cdedc; end: 1046cdfcf; -[SCAdResponse withOptimizationGoal:] */

void FUN_1046cdedc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar2 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1047b6fb0(lVar3);
  *(undefined8 *)(lVar3 + *(int *)(lVar1 + 0xb0)) = param_3;
  FUN_1046d8bc8(lVar3,puVar2,&SUB_100b91d00);
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(puVar2);
  _objc_release(param_1);
  func_0x0001046d8c98(lVar3,&SUB_100b91d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1046cdfd0; end: 1046ce0c3; -[SCAdResponse withThirdPartyLoginSource:] */

void FUN_1046cdfd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar2 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1047b6fb0(lVar3);
  *(undefined8 *)(lVar3 + *(int *)(lVar1 + 0xb4)) = param_3;
  FUN_1046d8bc8(lVar3,puVar2,&SUB_100b91d00);
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(puVar2);
  _objc_release(param_1);
  func_0x0001046d8c98(lVar3,&SUB_100b91d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1046ce0c4; end: 1046ce1b7; -[SCAdResponse withAdDemandSource:] */

void FUN_1046ce0c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar2 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1047b6fb0(lVar3);
  *(undefined8 *)(lVar3 + *(int *)(lVar1 + 200)) = param_3;
  FUN_1046d8bc8(lVar3,puVar2,&SUB_100b91d00);
  FUN_1047c0984(0);
  _objc_allocWithZone();
  FUN_1047b952c(puVar2);
  _objc_release(param_1);
  func_0x0001046d8c98(lVar3,&SUB_100b91d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1046ce1b8; end: 1046cfa8b;  */

void FUN_1046ce1b8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long extraout_x8_01;
  undefined8 *puVar5;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  undefined8 unaff_x20;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  double dVar15;
  long lStack_ee0;
  ulong auStack_ed8 [8];
  undefined8 *apuStack_e98 [2];
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined1 auStack_b20 [608];
  undefined1 auStack_8c0 [608];
  undefined1 auStack_660 [608];
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [616];
  
  lVar2 = 0;
  FUN_104750be8();
  auStack_ed8[4] = *(long *)(lVar2 + -8);
  auStack_ed8[5] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(auStack_ed8[4] + 0x40));
  puVar5 = (undefined8 *)((long)&lStack_ee0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0x112db3cc0;
  apuStack_e98[0] = puVar5;
  func_0x0001000285a8(0x112db3cc0,&UNK_10d95e220);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)puVar5 - extraout_x8_00;
  lVar2 = 0;
  auStack_ed8[3] = lVar4;
  FUN_10475cf44();
  auStack_ed8[2] = *(long *)(lVar2 + -8);
  auStack_ed8[7] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(auStack_ed8[2] + 0x40));
  puVar5 = (undefined8 *)(lVar4 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0x112db3cc8;
  apuStack_e98[1] = puVar5;
  func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)puVar5 - extraout_x8_02;
  lVar2 = 0;
  auStack_ed8[1] = lVar4;
  func_0x00010471853c();
  auStack_ed8[0] = *(long *)(lVar2 + -8);
  auStack_ed8[6] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(auStack_ed8[0] + 0x40));
  puVar5 = (undefined8 *)(lVar4 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0x112db3cd0;
  func_0x0001000285a8(0x112db3cd0,&UNK_10d95e230);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)puVar5 - extraout_x8_04;
  lVar4 = 0;
  FUN_104760f24();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  plVar10 = (long *)(lVar13 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0x112dcbf08;
  func_0x0001000285a8(0x112dcbf08,&UNK_10d98e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)plVar10 - extraout_x8_06;
  func_0x0001046d8c0c(unaff_x20,lVar8,0x112dcbf08,&UNK_10d98e580);
  lVar2 = lVar8;
  (**(code **)(lVar11 + 0x30))(lVar8,1,lVar4);
  if ((int)lVar2 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001046d8c54(lVar8,plVar10,FUN_104760f24);
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar2 = *plVar10;
    if (lVar2 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      func_0x000104707914(param_1,lVar2);
    }
    puVar12 = apuStack_e98[0];
    uVar7 = auStack_ed8[5];
    func_0x0001046cec20((long)*(int *)(lVar4 + 0x14),param_1);
    func_0x0001046cf4d4((long)*(int *)(lVar4 + 0x18),param_1);
    _memcpy(auStack_b20,(long)plVar10 + (long)*(int *)(lVar4 + 0x1c),0x260);
    iVar1 = (int)auStack_b20;
    func_0x0001015538ec();
    if (iVar1 == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      _memcpy(auStack_2c8,auStack_b20,0x260);
      __ss6HasherV8_combineyys5UInt8VF(1);
      FUN_1047a6974(param_1);
    }
    func_0x0001046d8c0c((long)plVar10 + (long)*(int *)(lVar4 + 0x20),lVar13,0x112db3cd0,
                        &UNK_10d95e230);
    lVar2 = lVar13;
    (**(code **)(auStack_ed8[0] + 0x30))(lVar13,1,auStack_ed8[6]);
    if ((int)lVar2 == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      func_0x0001046d8c54(lVar13,puVar5,0x10471853c);
      __ss6HasherV8_combineyys5UInt8VF(1);
      lVar2 = puVar5[1];
      if (lVar2 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        uVar9 = *puVar5;
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar9,lVar2);
      }
      uVar6 = auStack_ed8[6];
      func_0x0001046cf16c((long)*(int *)(auStack_ed8[6] + 0x14),param_1);
      func_0x0001046db048(param_1,*(undefined8 *)((long)puVar5 + (long)*(int *)(uVar6 + 0x18)));
      puVar12 = (undefined8 *)((long)puVar5 + (long)*(int *)(uVar6 + 0x1c));
      if (*(char *)(puVar12 + 1) == '\x01') {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        uVar9 = *puVar12;
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(uVar9);
      }
      func_0x0001046d8c98(puVar5,0x10471853c);
      puVar12 = apuStack_e98[0];
    }
    puVar5 = (undefined8 *)((long)plVar10 + (long)*(int *)(lVar4 + 0x24));
    lVar2 = puVar5[1];
    if (lVar2 == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar14 = *puVar5;
      uVar9 = puVar5[2];
      lVar8 = puVar5[3];
      __ss6HasherV8_combineyys5UInt8VF(1);
      if (lVar2 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar14,lVar2);
      }
      if (lVar8 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar9,lVar8);
      }
    }
    puVar5 = (undefined8 *)((long)plVar10 + (long)*(int *)(lVar4 + 0x28));
    if (puVar5[1] == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uStack_308 = *puVar5;
      uStack_2f0 = puVar5[3];
      uStack_2f8 = puVar5[2];
      uStack_2e0 = puVar5[5];
      uStack_2e8 = puVar5[4];
      uStack_2d0 = puVar5[7];
      uStack_2d8 = puVar5[6];
      lStack_300 = puVar5[1];
      __ss6HasherV8_combineyys5UInt8VF(1);
      FUN_10474f330(param_1);
    }
    puVar5 = (undefined8 *)((long)plVar10 + (long)*(int *)(lVar4 + 0x2c));
    lVar2 = puVar5[1];
    if (lVar2 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar9 = *puVar5;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar9,lVar2);
    }
    puVar5 = (undefined8 *)((long)plVar10 + (long)*(int *)(lVar4 + 0x30));
    uStack_b58 = puVar5[0x19];
    uStack_b60 = puVar5[0x18];
    uStack_b48 = puVar5[0x1b];
    uStack_b50 = puVar5[0x1a];
    uStack_b38 = puVar5[0x1d];
    uStack_b40 = puVar5[0x1c];
    uStack_b30 = puVar5[0x1e];
    uStack_b98 = puVar5[0x11];
    uStack_ba0 = puVar5[0x10];
    uStack_b88 = puVar5[0x13];
    uStack_b90 = puVar5[0x12];
    uStack_b78 = puVar5[0x15];
    uStack_b80 = puVar5[0x14];
    uStack_b68 = puVar5[0x17];
    uStack_b70 = puVar5[0x16];
    uStack_bd8 = puVar5[9];
    uStack_be0 = puVar5[8];
    uStack_bc8 = puVar5[0xb];
    uStack_bd0 = puVar5[10];
    uStack_bb8 = puVar5[0xd];
    uStack_bc0 = puVar5[0xc];
    uStack_ba8 = puVar5[0xf];
    uStack_bb0 = puVar5[0xe];
    uStack_c18 = puVar5[1];
    uStack_c20 = *puVar5;
    uStack_c08 = puVar5[3];
    uStack_c10 = puVar5[2];
    uStack_bf8 = puVar5[5];
    uStack_c00 = puVar5[4];
    uStack_be8 = puVar5[7];
    uStack_bf0 = puVar5[6];
    iVar1 = (int)&uStack_c20;
    func_0x000100dbd9b0();
    if (iVar1 == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uStack_338 = uStack_b58;
      uStack_340 = uStack_b60;
      uStack_328 = uStack_b48;
      uStack_330 = uStack_b50;
      uStack_318 = uStack_b38;
      uStack_320 = uStack_b40;
      uStack_310 = uStack_b30;
      uStack_378 = uStack_b98;
      uStack_380 = uStack_ba0;
      uStack_368 = uStack_b88;
      uStack_370 = uStack_b90;
      uStack_358 = uStack_b78;
      uStack_360 = uStack_b80;
      uStack_348 = uStack_b68;
      uStack_350 = uStack_b70;
      uStack_3b8 = uStack_bd8;
      uStack_3c0 = uStack_be0;
      uStack_3a8 = uStack_bc8;
      uStack_3b0 = uStack_bd0;
      uStack_398 = uStack_bb8;
      uStack_3a0 = uStack_bc0;
      uStack_388 = uStack_ba8;
      uStack_390 = uStack_bb0;
      uStack_3f8 = uStack_c18;
      uStack_400 = uStack_c20;
      uStack_3e8 = uStack_c08;
      uStack_3f0 = uStack_c10;
      uStack_3d8 = uStack_bf8;
      uStack_3e0 = uStack_c00;
      uStack_3c8 = uStack_be8;
      uStack_3d0 = uStack_bf0;
      __ss6HasherV8_combineyys5UInt8VF(1);
      FUN_10473ef0c(param_1);
    }
    puVar5 = (undefined8 *)((long)plVar10 + (long)*(int *)(lVar4 + 0x34));
    uVar6 = puVar5[1];
    if (uVar6 >> 0x3c < 0xf) {
      uVar9 = *puVar5;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar9,uVar6);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    puVar5 = apuStack_e98[1];
    uVar6 = auStack_ed8[1];
    func_0x0001046d8c0c((long)plVar10 + (long)*(int *)(lVar4 + 0x38),auStack_ed8[1],0x112db3cc8,
                        &UNK_10d98e570);
    uVar3 = uVar6;
    (**(code **)(auStack_ed8[2] + 0x30))(uVar6,1,auStack_ed8[7]);
    if ((int)uVar3 == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      func_0x0001046d8c54(uVar6,puVar5,FUN_10475cf44);
      __ss6HasherV8_combineyys5UInt8VF(1);
      lVar2 = puVar5[1];
      if (lVar2 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        uVar9 = *apuStack_e98[1];
        __ss6HasherV8_combineyys5UInt8VF(1);
        puVar5 = apuStack_e98[1];
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar9,lVar2);
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,puVar5[2],puVar5[3]);
      uVar6 = auStack_ed8[7];
      func_0x0001046cec20((long)*(int *)(auStack_ed8[7] + 0x18),param_1);
      _memcpy(auStack_8c0,(long)puVar5 + (long)*(int *)(uVar6 + 0x1c),0x260);
      iVar1 = (int)auStack_8c0;
      func_0x0001015538ec();
      if (iVar1 == 1) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        _memcpy(auStack_660,auStack_8c0,0x260);
        __ss6HasherV8_combineyys5UInt8VF(1);
        FUN_1047a6974(param_1);
      }
      func_0x0001046d8c98(puVar5,FUN_10475cf44);
    }
    lVar2 = *(long *)((long)plVar10 + (long)*(int *)(lVar4 + 0x3c));
    if (lVar2 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      func_0x0001046dacdc(param_1,lVar2);
    }
    uVar6 = auStack_ed8[3];
    func_0x0001046d8c0c((long)plVar10 + (long)*(int *)(lVar4 + 0x40),auStack_ed8[3],0x112db3cc0,
                        &UNK_10d95e220);
    uVar3 = uVar6;
    (**(code **)(auStack_ed8[4] + 0x30))(uVar6,1,uVar7);
    if ((int)uVar3 == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      func_0x0001046d8c54(uVar6,puVar12,FUN_104750be8);
      __ss6HasherV8_combineyys5UInt8VF(1);
      lVar2 = puVar12[1];
      if (lVar2 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        uVar9 = *puVar12;
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar9,lVar2);
      }
      dVar15 = 0.0;
      if ((double)puVar12[2] != 0.0) {
        dVar15 = (double)puVar12[2];
      }
      __ss6HasherV8_combineyys6UInt64VF(dVar15);
      iVar1 = *(int *)(uVar7 + 0x18);
      func_0x0001046cec20(param_1);
      lVar2 = 0;
      FUN_104754770();
      _memcpy(&stack0xfffffffffffff180,(long)puVar12 + (long)*(int *)(lVar2 + 0x14) + (long)iVar1,
              0x260);
      iVar1 = (int)&stack0xfffffffffffff180;
      func_0x0001015538ec();
      if (iVar1 == 1) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        _memcpy(auStack_8c0,&stack0xfffffffffffff180,0x260);
        __ss6HasherV8_combineyys5UInt8VF(1);
        FUN_1047a6974(param_1);
      }
      puVar5 = (undefined8 *)((long)puVar12 + (long)*(int *)(uVar7 + 0x1c));
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,*puVar5,puVar5[1]);
      func_0x0001046d8c98(puVar12,FUN_104750be8);
    }
    __ss6HasherV8_combineyySuF(*(undefined8 *)((long)plVar10 + (long)*(int *)(lVar4 + 0x44)));
    __ss6HasherV8_combineyySuF(*(undefined8 *)((long)plVar10 + (long)*(int *)(lVar4 + 0x48)));
    puVar5 = (undefined8 *)((long)plVar10 + (long)*(int *)(lVar4 + 0x4c));
    uVar7 = puVar5[1];
    if (uVar7 >> 0x3c < 0xf) {
      uVar9 = *puVar5;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar9,uVar7);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    func_0x0001046d8c98(plVar10,FUN_104760f24);
  }
  return;
}



/* Entry: 1046cfa8c; end: 1046d0447;  */

void FUN_1046cfa8c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  double dVar17;
  double dStack_4e0;
  long alStack_4d8 [3];
  undefined8 *puStack_4c0;
  long lStack_4b8;
  undefined8 *apuStack_4b0 [3];
  long lStack_498;
  ulong *apuStack_490 [7];
  long lStack_458;
  undefined8 *puStack_450;
  long alStack_448 [4];
  long lStack_428;
  ulong uStack_420;
  long lStack_418;
  long lStack_410;
  undefined8 uStack_408;
  long lStack_400;
  long lStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined1 uStack_360;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 uStack_2c0;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined8 uStack_1bf;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  lVar8 = 0;
  FUN_10477ea9c();
  lStack_418 = *(long *)(lVar8 + -8);
  lStack_410 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_418 + 0x40));
  dVar17 = (double)((long)&dStack_4e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar8 = 0x112db3a00;
  dStack_4e0 = dVar17;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)dVar17 - extraout_x8_00;
  lVar8 = 0;
  FUN_1046d90b0();
  lVar11 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar15 = (undefined8 *)(lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  if (param_2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_420 = lVar9;
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar9 = *(long *)(param_2 + 0x10);
    __ss6HasherV8_combineyySuF(lVar9);
    if (lVar9 != 0) {
      lStack_428 = (long)*(int *)(lVar8 + 0x28);
      alStack_448[3] = (long)*(int *)(lVar8 + 0x2c);
      alStack_448[2] = (long)*(int *)(lVar8 + 0x30);
      alStack_448[1] = (long)*(int *)(lVar8 + 0x34);
      alStack_448[0] = (long)*(int *)(lVar8 + 0x3c);
      puStack_450 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar8 + 0x38));
      lStack_458 = (long)*(int *)(lVar8 + 0x40);
      apuStack_490[6] = (ulong *)((long)puVar15 + (long)*(int *)(lVar8 + 0x44));
      apuStack_490[5] = (ulong *)((long)puVar15 + (long)*(int *)(lVar8 + 0x48));
      apuStack_490[4] = (ulong *)((long)puVar15 + (long)*(int *)(lVar8 + 0x4c));
      apuStack_490[3] = (ulong *)((long)puVar15 + (long)*(int *)(lVar8 + 0x50));
      apuStack_490[2] = (ulong *)((long)puVar15 + (long)*(int *)(lVar8 + 0x54));
      apuStack_490[1] = (ulong *)((long)puVar15 + (long)*(int *)(lVar8 + 0x58));
      apuStack_490[0] = (ulong *)((long)puVar15 + (long)*(int *)(lVar8 + 0x5c));
      lStack_498 = (long)*(int *)(lVar8 + 100);
      apuStack_4b0[2] = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar8 + 0x60));
      apuStack_4b0[1] = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar8 + 0x68));
      apuStack_4b0[0] = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar8 + 0x6c));
      lStack_4b8 = (long)*(int *)(lVar8 + 0x74);
      puVar1 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar8 + 0x70));
      puStack_4c0 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar8 + 0x80));
      lStack_400 = param_2 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                             ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
      alStack_4d8[2] = (long)*(int *)(lVar8 + 0x78);
      alStack_4d8[1] = (long)*(int *)(lVar8 + 0x7c);
      alStack_4d8[0] = *(long *)(lVar11 + 0x48);
      lStack_3f8 = lVar9;
      do {
        FUN_1046d8bc8(lStack_400,puVar15,FUN_1046d90b0);
        lVar8 = puVar15[1];
        if (lVar8 == 0) {
          __ss6HasherV8_combineyys5UInt8VF(0);
        }
        else {
          uVar12 = *puVar15;
          __ss6HasherV8_combineyys5UInt8VF(1);
          __sSS4hash4intoys6HasherVz_tF(param_1,uVar12,lVar8);
        }
        __ss6HasherV8_combineyySuF(puVar15[2]);
        __ss6HasherV8_combineyySuF(puVar15[3]);
        __sSS4hash4intoys6HasherVz_tF(param_1,puVar15[4],puVar15[5]);
        lVar8 = puVar15[7];
        if (lVar8 == 0) {
          __ss6HasherV8_combineyys5UInt8VF(0);
          lVar8 = puVar15[9];
          if (lVar8 != 0) goto LAB_1046cfd44;
LAB_1046cfd7c:
          __ss6HasherV8_combineyys5UInt8VF(0);
        }
        else {
          uVar12 = puVar15[6];
          __ss6HasherV8_combineyys5UInt8VF(1);
          __sSS4hash4intoys6HasherVz_tF(param_1,uVar12,lVar8);
          lVar8 = puVar15[9];
          if (lVar8 == 0) goto LAB_1046cfd7c;
LAB_1046cfd44:
          uVar12 = puVar15[8];
          __ss6HasherV8_combineyys5UInt8VF(1);
          __sSS4hash4intoys6HasherVz_tF(param_1,uVar12,lVar8);
        }
        uVar16 = uStack_420;
        func_0x0001046d8c0c((long)puVar15 + lStack_428,uStack_420,0x112db3a00,&UNK_10d95dff0);
        uVar10 = uVar16;
        (**(code **)(lStack_418 + 0x30))(uVar16,1,lStack_410);
        dVar17 = dStack_4e0;
        if ((int)uVar10 == 1) {
          __ss6HasherV8_combineyys5UInt8VF(0);
        }
        else {
          func_0x0001046d8c54(uVar16,dStack_4e0,FUN_10477ea9c);
          __ss6HasherV8_combineyys5UInt8VF(1);
          FUN_10477eb20(param_1);
          func_0x0001046d8c98(dVar17,FUN_10477ea9c);
        }
        __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)puVar15 + alStack_448[3]));
        __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)puVar15 + alStack_448[2]));
        lVar8 = *(long *)((long)puVar15 + alStack_448[1]);
        if (lVar8 == 0) {
          __ss6HasherV8_combineyys5UInt8VF(0);
        }
        else {
          __ss6HasherV8_combineyys5UInt8VF(1);
          FUN_1046db8dc(param_1,lVar8);
        }
        lVar8 = puStack_450[1];
        if (lVar8 == 0) {
          __ss6HasherV8_combineyys5UInt8VF(0);
        }
        else {
          uVar12 = *puStack_450;
          __ss6HasherV8_combineyys5UInt8VF(1);
          __sSS4hash4intoys6HasherVz_tF(param_1,uVar12,lVar8);
        }
        dVar17 = 0.0;
        if (*(double *)((long)puVar15 + alStack_448[0]) != 0.0) {
          dVar17 = *(double *)((long)puVar15 + alStack_448[0]);
        }
        __ss6HasherV8_combineyys6UInt64VF(dVar17);
        __ss6HasherV8_combineyySuF(*(undefined8 *)((long)puVar15 + lStack_458));
        lVar8 = *(long *)((long)apuStack_490[6] + 0x10);
        if (lVar8 == 1) {
LAB_1046cff4c:
          __ss6HasherV8_combineyys5UInt8VF(0);
        }
        else {
          uVar13 = *(undefined8 *)((long)apuStack_490[6] + 8);
          uVar12 = *(undefined8 *)((long)apuStack_490[6] + 0x18);
          lVar9 = *(long *)((long)apuStack_490[6] + 0x20);
          uVar16 = *apuStack_490[6];
          __ss6HasherV8_combineyys5UInt8VF(1);
          __ss6HasherV8_combineyys6UInt32VF((int)uVar16);
          if (lVar8 == 0) {
            __ss6HasherV8_combineyys5UInt8VF(0);
          }
          else {
            __ss6HasherV8_combineyys5UInt8VF(1);
            __sSS4hash4intoys6HasherVz_tF(param_1,uVar13,lVar8);
          }
          if (lVar9 == 0) goto LAB_1046cff4c;
          __ss6HasherV8_combineyys5UInt8VF(1);
          __sSS4hash4intoys6HasherVz_tF(param_1,uVar12,lVar9);
        }
        lVar8 = apuStack_490[5][1];
        if (lVar8 == 0) {
          __ss6HasherV8_combineyys5UInt8VF(0);
        }
        else {
          uVar12 = *apuStack_490[5];
          __ss6HasherV8_combineyys5UInt8VF(1);
          __sSS4hash4intoys6HasherVz_tF(param_1,uVar12,lVar8);
        }
        uStack_2e8 = apuStack_490[4][0xd];
        uStack_2f0 = apuStack_490[4][0xc];
        uStack_2d8 = apuStack_490[4][0xf];
        uStack_2e0 = apuStack_490[4][0xe];
        uStack_2c8 = apuStack_490[4][0x11];
        uStack_2d0 = apuStack_490[4][0x10];
        uStack_2c0 = *(undefined1 *)(apuStack_490[4] + 0x12);
        uStack_328 = apuStack_490[4][5];
        uStack_330 = apuStack_490[4][4];
        uStack_318 = apuStack_490[4][7];
        uStack_320 = apuStack_490[4][6];
        uStack_308 = apuStack_490[4][9];
        uStack_310 = apuStack_490[4][8];
        uStack_2f8 = apuStack_490[4][0xb];
        uStack_300 = apuStack_490[4][10];
        uStack_348 = apuStack_490[4][1];
        uStack_350 = *apuStack_490[4];
        uStack_338 = apuStack_490[4][3];
        uStack_340 = apuStack_490[4][2];
        iVar7 = (int)&uStack_350;
        func_0x000103b72c50();
        if (iVar7 == 1) {
          __ss6HasherV8_combineyys5UInt8VF(0);
        }
        else {
          uStack_a8 = uStack_2e8;
          uStack_b0 = uStack_2f0;
          uStack_98 = uStack_2d8;
          uStack_a0 = uStack_2e0;
          uStack_88 = uStack_2c8;
          uStack_90 = uStack_2d0;
          uStack_80 = uStack_2c0;
          uStack_e8 = uStack_328;
          uStack_f0 = uStack_330;
          uStack_d8 = uStack_318;
          uStack_e0 = uStack_320;
          uStack_c8 = uStack_308;
          uStack_d0 = uStack_310;
          uStack_b8 = uStack_2f8;
          uStack_c0 = uStack_300;
          uStack_108 = uStack_348;
          uStack_110 = uStack_350;
          uStack_f8 = uStack_338;
          uStack_100 = uStack_340;
          __ss6HasherV8_combineyys5UInt8VF(1);
          FUN_1047a3f14(param_1);
        }
        uStack_388 = apuStack_490[3][0xd];
        uStack_390 = apuStack_490[3][0xc];
        uStack_378 = apuStack_490[3][0xf];
        uStack_380 = apuStack_490[3][0xe];
        uStack_368 = apuStack_490[3][0x11];
        uStack_370 = apuStack_490[3][0x10];
        uStack_360 = *(undefined1 *)(apuStack_490[3] + 0x12);
        uStack_3c8 = apuStack_490[3][5];
        uStack_3d0 = apuStack_490[3][4];
        uStack_3b8 = apuStack_490[3][7];
        uStack_3c0 = apuStack_490[3][6];
        uStack_3a8 = apuStack_490[3][9];
        uStack_3b0 = apuStack_490[3][8];
        uStack_398 = apuStack_490[3][0xb];
        uStack_3a0 = apuStack_490[3][10];
        uStack_3e8 = apuStack_490[3][1];
        uStack_3f0 = *apuStack_490[3];
        uStack_3d8 = apuStack_490[3][3];
        uStack_3e0 = apuStack_490[3][2];
        iVar7 = (int)&uStack_3f0;
        func_0x000103b72c50();
        if (iVar7 == 1) {
          __ss6HasherV8_combineyys5UInt8VF(0);
        }
        else {
          uStack_148 = uStack_388;
          uStack_150 = uStack_390;
          uStack_138 = uStack_378;
          uStack_140 = uStack_380;
          uStack_128 = uStack_368;
          uStack_130 = uStack_370;
          uStack_120 = uStack_360;
          uStack_188 = uStack_3c8;
          uStack_190 = uStack_3d0;
          uStack_178 = uStack_3b8;
          uStack_180 = uStack_3c0;
          uStack_168 = uStack_3a8;
          uStack_170 = uStack_3b0;
          uStack_158 = uStack_398;
          uStack_160 = uStack_3a0;
          uStack_1a8 = uStack_3e8;
          uStack_1b0 = uStack_3f0;
          uStack_198 = uStack_3d8;
          uStack_1a0 = uStack_3e0;
          __ss6HasherV8_combineyys5UInt8VF(1);
          FUN_1047a3f14(param_1);
        }
        uVar16 = apuStack_490[2][1];
        if (uVar16 == 2) {
LAB_1046d0184:
          __ss6HasherV8_combineyys5UInt8VF(0);
        }
        else {
          uVar14 = *apuStack_490[2];
          uVar10 = apuStack_490[2][2];
          uVar3 = apuStack_490[2][3];
          __ss6HasherV8_combineyys5UInt8VF(1);
          if (uVar16 == 1) {
LAB_1046d0138:
            __ss6HasherV8_combineyys5UInt8VF(0);
          }
          else {
            __ss6HasherV8_combineyys5UInt8VF(1);
            uVar2 = 0;
            if ((uVar14 & 0x7fffffffffffffff) != 0) {
              uVar2 = uVar14;
            }
            __ss6HasherV8_combineyys6UInt64VF(uVar2);
            if (uVar16 == 0) goto LAB_1046d0138;
            __ss6HasherV8_combineyys5UInt8VF(1);
            FUN_1046db864(param_1,uVar16);
          }
          if (uVar3 == 1) goto LAB_1046d0184;
          __ss6HasherV8_combineyys5UInt8VF(1);
          uVar16 = 0;
          if ((uVar10 & 0x7fffffffffffffff) != 0) {
            uVar16 = uVar10;
          }
          __ss6HasherV8_combineyys6UInt64VF(uVar16);
          if (uVar3 == 0) goto LAB_1046d0184;
          __ss6HasherV8_combineyys5UInt8VF(1);
          FUN_1046db864(param_1,uVar3);
        }
        if ((char)apuStack_490[1][1] == '\x01') {
          __ss6HasherV8_combineyys5UInt8VF(0);
        }
        else {
          uVar10 = *apuStack_490[1];
          __ss6HasherV8_combineyys5UInt8VF(1);
          uVar16 = 0;
          if ((uVar10 & 0x7fffffffffffffff) != 0) {
            uVar16 = uVar10;
          }
          __ss6HasherV8_combineyys6UInt64VF(uVar16);
        }
        lVar8 = apuStack_490[0][1];
        if (lVar8 == 0) {
          __ss6HasherV8_combineyys5UInt8VF(0);
        }
        else {
          uVar12 = *apuStack_490[0];
          __ss6HasherV8_combineyys5UInt8VF(1);
          __sSS4hash4intoys6HasherVz_tF(param_1,uVar12,lVar8);
        }
        lVar8 = apuStack_4b0[2][1];
        if (lVar8 == 0) {
          __ss6HasherV8_combineyys5UInt8VF(0);
        }
        else {
          uVar12 = *apuStack_4b0[2];
          __ss6HasherV8_combineyys5UInt8VF(1);
          __sSS4hash4intoys6HasherVz_tF(param_1,uVar12,lVar8);
        }
        __ss6HasherV8_combineyySuF(*(undefined8 *)((long)puVar15 + lStack_498));
        if (*(char *)((long)apuStack_4b0[1] + 0x49) == '\x01') {
          __ss6HasherV8_combineyys5UInt8VF(0);
        }
        else {
          uStack_1d8 = apuStack_4b0[1][5];
          uStack_1e0 = apuStack_4b0[1][4];
          uStack_1d0 = apuStack_4b0[1][6];
          uStack_1c8 = (undefined1)apuStack_4b0[1][7];
          uStack_1bf = *(undefined8 *)((long)apuStack_4b0[1] + 0x41);
          uStack_1c7 = (undefined7)*(undefined8 *)((long)apuStack_4b0[1] + 0x39);
          uStack_1c0 = (undefined1)((ulong)*(undefined8 *)((long)apuStack_4b0[1] + 0x39) >> 0x38);
          uStack_1f8 = apuStack_4b0[1][1];
          uStack_200 = *apuStack_4b0[1];
          uStack_1e8 = apuStack_4b0[1][3];
          uStack_1f0 = apuStack_4b0[1][2];
          __ss6HasherV8_combineyys5UInt8VF(1);
          FUN_10470a59c(param_1);
        }
        uVar16 = apuStack_4b0[0][1];
        if (uVar16 >> 0x3c < 0xf) {
          uVar12 = *apuStack_4b0[0];
          __ss6HasherV8_combineyys5UInt8VF(1);
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar12,uVar16);
        }
        else {
          __ss6HasherV8_combineyys5UInt8VF(0);
        }
        uStack_228 = puVar1[0x11];
        uStack_230 = puVar1[0x10];
        uStack_218 = puVar1[0x13];
        uStack_220 = puVar1[0x12];
        uStack_208 = puVar1[0x15];
        uStack_210 = puVar1[0x14];
        uStack_268 = puVar1[9];
        uStack_270 = puVar1[8];
        uStack_258 = puVar1[0xb];
        uStack_260 = puVar1[10];
        uStack_248 = puVar1[0xd];
        uStack_250 = puVar1[0xc];
        uStack_238 = puVar1[0xf];
        uStack_240 = puVar1[0xe];
        uStack_2a8 = puVar1[1];
        uStack_2b0 = *puVar1;
        uStack_298 = puVar1[3];
        uStack_2a0 = puVar1[2];
        uStack_288 = puVar1[5];
        uStack_290 = puVar1[4];
        uStack_278 = puVar1[7];
        uStack_280 = puVar1[6];
        uVar12 = puVar1[0x16];
        cVar4 = *(char *)(puVar1 + 0x17);
        uVar16 = puVar1[0x18];
        cVar5 = *(char *)(puVar1 + 0x19);
        uStack_408 = puVar1[0x1a];
        cVar6 = *(char *)(puVar1 + 0x1b);
        FUN_1047082c0(param_1);
        if (cVar4 == '\x01') {
          __ss6HasherV8_combineyys5UInt8VF(0);
          if (cVar5 == '\x01') goto LAB_1046d03b4;
LAB_1046d0360:
          __ss6HasherV8_combineyys5UInt8VF(1);
          uVar10 = 0;
          if ((uVar16 & 0x7fffffffffffffff) != 0) {
            uVar10 = uVar16;
          }
          __ss6HasherV8_combineyys6UInt64VF(uVar10);
          if (cVar6 == '\x01') goto LAB_1046d03c8;
LAB_1046d0380:
          __ss6HasherV8_combineyys5UInt8VF(1);
          __ss6HasherV8_combineyySuF(uStack_408);
        }
        else {
          __ss6HasherV8_combineyys5UInt8VF(1);
          __ss6HasherV8_combineyySuF(uVar12);
          if (cVar5 != '\x01') goto LAB_1046d0360;
LAB_1046d03b4:
          __ss6HasherV8_combineyys5UInt8VF(0);
          if (cVar6 != '\x01') goto LAB_1046d0380;
LAB_1046d03c8:
          __ss6HasherV8_combineyys5UInt8VF(0);
        }
        __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)puVar15 + lStack_4b8));
        __ss6HasherV8_combineyySuF(*(undefined8 *)((long)puVar15 + alStack_4d8[2]));
        __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)puVar15 + alStack_4d8[1]));
        lVar8 = puStack_4c0[1];
        if (lVar8 == 0) {
          __ss6HasherV8_combineyys5UInt8VF(0);
        }
        else {
          uVar12 = *puStack_4c0;
          __ss6HasherV8_combineyys5UInt8VF(1);
          __sSS4hash4intoys6HasherVz_tF(param_1,uVar12,lVar8);
        }
        func_0x0001046d8c98(puVar15,FUN_1046d90b0);
        lStack_400 = lStack_400 + alStack_4d8[0];
        lStack_3f8 = lStack_3f8 + -1;
      } while (lStack_3f8 != 0);
    }
  }
  return;
}



/* Entry: 1046d0448; end: 1046d2a37;  */

byte FUN_1046d0448(double *param_1,double *param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  double *pdVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  code *pcVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  double dVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  double dVar20;
  ulong uVar21;
  byte bVar22;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar23;
  long extraout_x8_01;
  undefined8 *puVar24;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *pcVar25;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  code *pcVar26;
  undefined8 *puVar27;
  long lVar28;
  long lVar29;
  undefined8 *puVar30;
  long lVar31;
  undefined1 auStack_1b10 [4];
  uint uStack_1b0c;
  code *pcStack_1b08;
  long lStack_1b00;
  code *pcStack_1af8;
  double *pdStack_1af0;
  double *pdStack_1ae8;
  long lStack_1ae0;
  long lStack_1ad8;
  ulong uStack_1ad0;
  long lStack_1ac8;
  undefined1 *puStack_1ac0;
  undefined8 *puStack_1ab8;
  ulong uStack_1ab0;
  long lStack_1aa8;
  undefined8 uStack_1aa0;
  undefined8 uStack_1a98;
  undefined8 uStack_1a90;
  undefined8 uStack_1a88;
  undefined8 uStack_1a80;
  undefined8 uStack_1a78;
  undefined8 uStack_1a70;
  undefined8 uStack_1a68;
  undefined8 uStack_1a60;
  undefined8 uStack_1a58;
  undefined8 uStack_1a50;
  undefined8 uStack_1a48;
  undefined8 uStack_1a40;
  undefined8 uStack_1a38;
  undefined8 uStack_1a30;
  undefined8 uStack_1a28;
  undefined8 uStack_1a20;
  undefined8 uStack_1a18;
  undefined8 uStack_1a10;
  undefined8 uStack_1a08;
  undefined8 uStack_1a00;
  undefined1 uStack_19f8;
  undefined7 uStack_19f7;
  undefined1 uStack_19f0;
  undefined8 uStack_19ef;
  undefined8 uStack_1940;
  undefined8 uStack_1938;
  undefined8 uStack_1930;
  undefined8 uStack_1928;
  undefined8 uStack_1920;
  undefined8 uStack_1918;
  undefined8 uStack_1910;
  undefined8 uStack_1908;
  undefined8 uStack_1900;
  undefined8 uStack_18f8;
  undefined8 uStack_18f0;
  undefined8 uStack_18e8;
  undefined8 uStack_18e0;
  undefined8 uStack_18d8;
  undefined8 uStack_18d0;
  undefined8 uStack_18c8;
  undefined8 uStack_18c0;
  undefined8 uStack_18b8;
  undefined8 uStack_18b0;
  undefined8 uStack_18a8;
  undefined8 uStack_18a0;
  undefined1 uStack_1898;
  undefined7 uStack_1897;
  undefined1 uStack_1890;
  undefined8 uStack_188f;
  undefined8 uStack_17e0;
  undefined8 uStack_17d8;
  undefined8 uStack_17d0;
  undefined8 uStack_17c8;
  undefined8 uStack_17c0;
  undefined8 uStack_17b8;
  undefined8 uStack_17b0;
  undefined8 uStack_17a8;
  undefined8 uStack_17a0;
  undefined8 uStack_1798;
  undefined8 uStack_1790;
  undefined8 uStack_1788;
  undefined8 uStack_1780;
  undefined8 uStack_1778;
  undefined8 uStack_1770;
  undefined8 uStack_1768;
  undefined8 uStack_1760;
  undefined8 uStack_1758;
  undefined8 uStack_1750;
  undefined8 uStack_1748;
  undefined8 uStack_1740;
  undefined1 uStack_1738;
  undefined7 uStack_1737;
  undefined1 uStack_1730;
  undefined8 uStack_172f;
  undefined1 auStack_1678 [168];
  undefined8 uStack_15d0;
  undefined8 uStack_15c8;
  undefined8 uStack_15c0;
  undefined8 uStack_15b8;
  undefined8 uStack_15b0;
  undefined8 uStack_15a8;
  undefined8 uStack_15a0;
  undefined8 uStack_1598;
  undefined8 uStack_1590;
  undefined8 uStack_1588;
  undefined8 uStack_1580;
  undefined8 uStack_1578;
  undefined8 uStack_1570;
  undefined8 uStack_1568;
  undefined8 uStack_1560;
  undefined8 uStack_1558;
  undefined8 uStack_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined1 uStack_1530;
  undefined8 uStack_1520;
  undefined8 uStack_1518;
  undefined8 uStack_1510;
  undefined8 uStack_1508;
  undefined8 uStack_1500;
  undefined8 uStack_14f8;
  undefined8 uStack_14f0;
  undefined8 uStack_14e8;
  undefined8 uStack_14e0;
  undefined8 uStack_14d8;
  undefined8 uStack_14d0;
  undefined8 uStack_14c8;
  undefined8 uStack_14c0;
  undefined8 uStack_14b8;
  undefined8 uStack_14b0;
  undefined8 uStack_14a8;
  undefined8 uStack_14a0;
  undefined8 uStack_1498;
  undefined8 uStack_1490;
  undefined8 uStack_1488;
  undefined1 uStack_1480;
  undefined8 uStack_1470;
  undefined8 uStack_1468;
  undefined8 uStack_1460;
  undefined8 uStack_1458;
  undefined8 uStack_1450;
  undefined8 uStack_1448;
  undefined8 uStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  undefined8 uStack_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  undefined8 uStack_13e8;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined1 uStack_13d0;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  undefined8 uStack_1370;
  undefined8 uStack_1368;
  undefined8 uStack_1360;
  undefined8 uStack_1358;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined8 uStack_1330;
  undefined8 uStack_1328;
  undefined1 uStack_1320;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  undefined8 uStack_12d0;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  undefined8 uStack_12b0;
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  undefined1 uStack_1270;
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined1 uStack_11c0;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 uStack_1170;
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  undefined8 uStack_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined8 uStack_1118;
  undefined1 uStack_1110;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined1 uStack_1060;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 uStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined1 uStack_ce8;
  undefined7 uStack_ce7;
  undefined1 uStack_ce0;
  undefined7 uStack_cdf;
  undefined1 uStack_cd8;
  undefined7 uStack_cd7;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined1 uStack_c28;
  undefined7 uStack_c27;
  undefined1 uStack_c20;
  undefined8 uStack_c1f;
  undefined1 auStack_ad0 [352];
  undefined1 auStack_970 [352];
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined1 uStack_630;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined1 uStack_580;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined1 uStack_4d0;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 uStack_420;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 uStack_370;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_200;
  long lStack_1f8;
  code *pcStack_1f0;
  byte bStack_1e8;
  byte bStack_1e7;
  byte bStack_1e6;
  code *pcStack_1e0;
  double *pdStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  byte bStack_1c0;
  byte bStack_1bf;
  byte bStack_1be;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = 0;
  func_0x000100b91fbc();
  lStack_1ad8 = *(long *)(lVar12 + -8);
  lStack_1ac8 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1ad8 + 0x40));
  lVar12 = 0x112db39a8;
  puStack_1ac0 = auStack_1b10 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar23 = (long)(auStack_1b10 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar12 = 0x112db3b70;
  uStack_1ad0 = uVar23;
  func_0x0001000285a8(0x112db3b70,&UNK_10d95def0);
  lStack_1ae0 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar24 = (undefined8 *)(uVar23 - extraout_x8_01);
  lVar12 = 0;
  puStack_1ab8 = puVar24;
  __s10Foundation4UUIDVMa();
  uStack_1ab0 = *(ulong *)(lVar12 + -8);
  lStack_1aa8 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uStack_1ab0 + 0x40));
  lVar28 = (long)puVar24 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  uVar23 = lVar28 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar29 = uVar23 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar31 = lVar29 - extraout_x12_00;
  lVar12 = 0x112d68090;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  puVar27 = (undefined8 *)(lVar31 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar30 = (undefined8 *)((long)puVar27 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar24 = (undefined8 *)((long)puVar30 - extraout_x12_02);
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     ((param_1[3] == param_2[3] && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))))) {
    dVar20 = param_1[5];
    if (((dVar20 == param_2[5]) && (param_1[6] == param_2[6])) ||
       (pdStack_1ae8 = param_1,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
       , param_1 = pdStack_1ae8, ((ulong)dVar20 & 1) != 0)) {
      dVar20 = param_2[8];
      if (param_1[8] == 0.0) {
        if (dVar20 == 0.0) goto LAB_1046d074c;
      }
      else if ((dVar20 != 0.0) &&
              (((dVar13 = param_1[7], dVar13 == param_2[7] && (param_1[8] == dVar20)) ||
               (pdStack_1ae8 = param_1,
               __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (), param_1 = pdStack_1ae8, ((ulong)dVar13 & 1) != 0)))) {
LAB_1046d074c:
        dVar20 = param_2[10];
        if (param_1[10] == 0.0) {
          if (dVar20 == 0.0) goto LAB_1046d0798;
        }
        else if ((dVar20 != 0.0) &&
                (((dVar13 = param_1[9], dVar13 == param_2[9] && (param_1[10] == dVar20)) ||
                 (pdStack_1ae8 = param_1,
                 __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                           (), param_1 = pdStack_1ae8, ((ulong)dVar13 & 1) != 0)))) {
LAB_1046d0798:
          dVar20 = param_2[0xc];
          if (param_1[0xc] == 0.0) {
            if (dVar20 == 0.0) goto LAB_1046d07e4;
          }
          else if ((dVar20 != 0.0) &&
                  (((dVar13 = param_1[0xb], dVar13 == param_2[0xb] && (param_1[0xc] == dVar20)) ||
                   (pdStack_1ae8 = param_1,
                   __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                             (), param_1 = pdStack_1ae8, ((ulong)dVar13 & 1) != 0)))) {
LAB_1046d07e4:
            dVar20 = param_2[0xe];
            if (param_1[0xe] == 0.0) {
              if (dVar20 == 0.0) goto LAB_1046d0830;
            }
            else if ((dVar20 != 0.0) &&
                    (((dVar13 = param_1[0xd], dVar13 == param_2[0xd] && (param_1[0xe] == dVar20)) ||
                     (pdStack_1ae8 = param_1,
                     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                               (), param_1 = pdStack_1ae8, ((ulong)dVar13 & 1) != 0)))) {
LAB_1046d0830:
              dVar20 = param_2[0x10];
              pdStack_1af0 = param_2;
              if (param_1[0x10] == 0.0) {
                if (dVar20 == 0.0) goto LAB_1046d0874;
              }
              else if ((dVar20 != 0.0) &&
                      (((dVar13 = param_1[0xf], dVar13 == param_2[0xf] && (param_1[0x10] == dVar20))
                       || (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                     (), ((ulong)dVar13 & 1) != 0)))) {
LAB_1046d0874:
                lVar14 = 0;
                func_0x000100b91d00();
                pcStack_1af8 = (code *)(long)*(int *)(lVar14 + 0x3c);
                pdStack_1ae8 = (double *)(long)*(int *)(lVar12 + 0x30);
                lStack_1b00 = lVar14;
                func_0x0001046d8c0c((long)param_1 + (long)pcStack_1af8,puVar24,0x112d3bc20,
                                    &UNK_10d904ef0);
                func_0x0001046d8c0c((long)pdStack_1af0 + (long)pcStack_1af8,
                                    (long)puVar24 + (long)pdStack_1ae8,0x112d3bc20,&UNK_10d904ef0);
                pcStack_1af8 = *(code **)(uStack_1ab0 + 0x30);
                puVar15 = puVar24;
                (*pcStack_1af8)(puVar24,1,lStack_1aa8);
                if ((int)puVar15 == 1) {
                  lVar31 = (long)puVar24 + (long)pdStack_1ae8;
                  (*pcStack_1af8)(lVar31,1,lStack_1aa8);
                  if ((int)lVar31 == 1) {
                    func_0x0001046d8cd4(puVar24,0x112d3bc20,&UNK_10d904ef0);
LAB_1046d0a28:
                    iVar10 = *(int *)(lStack_1b00 + 0x40);
                    iVar11 = *(int *)(lVar12 + 0x30);
                    func_0x0001046d8c0c((long)param_1 + (long)iVar10,puVar30,0x112d3bc20,
                                        &UNK_10d904ef0);
                    pcStack_1b08 = (code *)(long)iVar11;
                    func_0x0001046d8c0c((long)pdStack_1af0 + (long)iVar10,
                                        (code *)((long)puVar30 + (long)iVar11),0x112d3bc20,
                                        &UNK_10d904ef0);
                    lVar31 = lStack_1aa8;
                    pcVar26 = pcStack_1af8;
                    puVar24 = puVar30;
                    (*pcStack_1af8)(puVar30,1,lStack_1aa8);
                    if ((int)puVar24 == 1) {
                      pcVar25 = (code *)((long)puVar30 + (long)pcStack_1b08);
                      (*pcVar26)(pcVar25,1,lVar31);
                      if ((int)pcVar25 != 1) {
LAB_1046d0b1c:
                        uVar18 = 0x112d68090;
                        puVar19 = &UNK_10da24400;
                        puVar24 = puVar30;
                        goto LAB_1046d0cc0;
                      }
                      func_0x0001046d8cd4(puVar30,0x112d3bc20,&UNK_10d904ef0);
                    }
                    else {
                      pdStack_1ae8 = param_1;
                      func_0x0001046d8c0c(puVar30,lVar29,0x112d3bc20,&UNK_10d904ef0);
                      pcVar8 = pcStack_1b08;
                      pcVar25 = (code *)((long)puVar30 + (long)pcStack_1b08);
                      (*pcVar26)(pcVar25,1,lVar31);
                      uVar21 = uStack_1ab0;
                      if ((int)pcVar25 == 1) {
                        (**(code **)(uStack_1ab0 + 8))(lVar29,lVar31);
                        goto LAB_1046d0b1c;
                      }
                      (**(code **)(uStack_1ab0 + 0x20))
                                (lVar28,(code *)((long)puVar30 + (long)pcVar8),lVar31);
                      uVar18 = 0x112d68098;
                      func_0x0001046d8d44(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                                          PTR___s10Foundation4UUIDVSQAAMc_110350c50);
                      lVar14 = lVar29;
                      __sSQ2eeoiySbx_xtFZTj(lVar29,lVar28,lVar31,uVar18);
                      pcStack_1b08 = (code *)CONCAT44(pcStack_1b08._4_4_,(int)lVar14);
                      pcVar26 = *(code **)(uVar21 + 8);
                      (*pcVar26)(lVar28,lStack_1aa8);
                      (*pcVar26)(lVar29,lStack_1aa8);
                      lVar31 = lStack_1aa8;
                      func_0x0001046d8cd4(puVar30,0x112d3bc20,&UNK_10d904ef0);
                      param_1 = pdStack_1ae8;
                      if (((ulong)pcStack_1b08 & 1) == 0) goto LAB_1046d0cc4;
                    }
                    iVar10 = *(int *)(lStack_1b00 + 0x44);
                    lVar12 = (long)*(int *)(lVar12 + 0x30);
                    func_0x0001046d8c0c((long)param_1 + (long)iVar10,puVar27,0x112d3bc20,
                                        &UNK_10d904ef0);
                    func_0x0001046d8c0c((long)pdStack_1af0 + (long)iVar10,(long)puVar27 + lVar12,
                                        0x112d3bc20,&UNK_10d904ef0);
                    pcVar26 = pcStack_1af8;
                    puVar24 = puVar27;
                    (*pcStack_1af8)(puVar27,1,lVar31);
                    if ((int)puVar24 == 1) {
                      lVar12 = (long)puVar27 + lVar12;
                      (*pcVar26)(lVar12,1,lVar31);
                      if ((int)lVar12 != 1) {
LAB_1046d0cac:
                        uVar18 = 0x112d68090;
                        puVar19 = &UNK_10da24400;
                        puVar24 = puVar27;
                        goto LAB_1046d0cc0;
                      }
                      func_0x0001046d8cd4(puVar27,0x112d3bc20,&UNK_10d904ef0);
                    }
                    else {
                      func_0x0001046d8c0c(puVar27,uVar23,0x112d3bc20,&UNK_10d904ef0);
                      lVar29 = (long)puVar27 + lVar12;
                      (*pcVar26)(lVar29,1,lVar31);
                      uVar21 = uStack_1ab0;
                      if ((int)lVar29 == 1) {
                        (**(code **)(uStack_1ab0 + 8))(uVar23,lVar31);
                        goto LAB_1046d0cac;
                      }
                      (**(code **)(uStack_1ab0 + 0x20))(lVar28,(long)puVar27 + lVar12,lVar31);
                      uVar18 = 0x112d68098;
                      func_0x0001046d8d44(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                                          PTR___s10Foundation4UUIDVSQAAMc_110350c50);
                      uVar17 = uVar23;
                      __sSQ2eeoiySbx_xtFZTj(uVar23,lVar28,lVar31,uVar18);
                      pcVar26 = *(code **)(uVar21 + 8);
                      (*pcVar26)(lVar28,lVar31);
                      (*pcVar26)(uVar23,lVar31);
                      func_0x0001046d8cd4(puVar27,0x112d3bc20,&UNK_10d904ef0);
                      if ((uVar17 & 1) == 0) goto LAB_1046d0cc4;
                    }
                    if (*(int *)((long)param_1 + (long)*(int *)(lStack_1b00 + 0x48)) ==
                        *(int *)((long)pdStack_1af0 + (long)*(int *)(lStack_1b00 + 0x48))) {
                      uVar23 = *(ulong *)((long)param_1 + (long)*(int *)(lStack_1b00 + 0x4c));
                      lVar12 = *(long *)((long)pdStack_1af0 + (long)*(int *)(lStack_1b00 + 0x4c));
                      if (uVar23 == 0) {
                        if (lVar12 == 0) {
LAB_1046d0de4:
                          uVar23 = *(ulong *)((long)param_1 + (long)*(int *)(lStack_1b00 + 0x50));
                          lVar12 = *(long *)((long)pdStack_1af0 + (long)*(int *)(lStack_1b00 + 0x50)
                                            );
                          if (uVar23 == 0) {
                            if (lVar12 == 0) goto LAB_1046d0e10;
                          }
                          else if ((lVar12 != 0) && (func_0x00010142cfc4(), (uVar23 & 1) != 0)) {
LAB_1046d0e10:
                            uVar23 = *(ulong *)((long)param_1 + (long)*(int *)(lStack_1b00 + 0x54));
                            lVar12 = *(long *)((long)pdStack_1af0 +
                                              (long)*(int *)(lStack_1b00 + 0x54));
                            if (uVar23 == 0) {
                              if (lVar12 == 0) goto LAB_1046d0e3c;
                            }
                            else if ((lVar12 != 0) && (func_0x00010142cfc4(), (uVar23 & 1) != 0)) {
LAB_1046d0e3c:
                              uVar23 = *(ulong *)((long)param_1 + (long)*(int *)(lStack_1b00 + 0x58)
                                                 );
                              lVar12 = *(long *)((long)pdStack_1af0 +
                                                (long)*(int *)(lStack_1b00 + 0x58));
                              if (uVar23 == 0) {
                                if (lVar12 == 0) goto LAB_1046d0e68;
                              }
                              else if ((lVar12 != 0) && (func_0x00010142cfc4(), (uVar23 & 1) != 0))
                              {
LAB_1046d0e68:
                                puVar24 = (undefined8 *)
                                          ((long)param_1 + (long)*(int *)(lStack_1b00 + 0x5c));
                                puVar27 = (undefined8 *)
                                          ((long)pdStack_1af0 + (long)*(int *)(lStack_1b00 + 0x5c));
                                uStack_d28 = puVar24[0xd];
                                uStack_d30 = puVar24[0xc];
                                uStack_798 = puVar24[0xf];
                                uStack_7a0 = puVar24[0xe];
                                uStack_d38 = puVar24[0xb];
                                uStack_d40 = puVar24[10];
                                uStack_7a8 = puVar24[0xd];
                                uStack_7b0 = puVar24[0xc];
                                uStack_d18 = puVar24[0xf];
                                uStack_d20 = puVar24[0xe];
                                uStack_788 = puVar24[0x11];
                                uStack_790 = puVar24[0x10];
                                uStack_d08 = puVar24[0x11];
                                uStack_d10 = puVar24[0x10];
                                uStack_778 = puVar24[0x13];
                                uStack_780 = puVar24[0x12];
                                uStack_d68 = puVar24[5];
                                uStack_d70 = puVar24[4];
                                uStack_7d8 = puVar24[7];
                                uStack_7e0 = puVar24[6];
                                uStack_d78 = puVar24[3];
                                uStack_d80 = puVar24[2];
                                uStack_7e8 = puVar24[5];
                                uStack_7f0 = puVar24[4];
                                uStack_d58 = puVar24[7];
                                uStack_d60 = puVar24[6];
                                uStack_7c8 = puVar24[9];
                                uStack_7d0 = puVar24[8];
                                uStack_d48 = puVar24[9];
                                uStack_d50 = puVar24[8];
                                uStack_7b8 = puVar24[0xb];
                                uStack_7c0 = puVar24[10];
                                uStack_808 = puVar24[1];
                                uStack_810 = *puVar24;
                                uStack_7f8 = puVar24[3];
                                uStack_800 = puVar24[2];
                                uStack_d88 = puVar24[1];
                                uStack_d90 = *puVar24;
                                uStack_cf8 = puVar24[0x13];
                                uStack_d00 = puVar24[0x12];
                                uStack_c88 = puVar27[0xd];
                                uStack_c90 = puVar27[0xc];
                                uStack_6f8 = puVar27[0xf];
                                uStack_700 = puVar27[0xe];
                                uStack_c98 = puVar27[0xb];
                                uStack_ca0 = puVar27[10];
                                uStack_708 = puVar27[0xd];
                                uStack_710 = puVar27[0xc];
                                uStack_c78 = puVar27[0xf];
                                uStack_c80 = puVar27[0xe];
                                uStack_6e8 = puVar27[0x11];
                                uStack_6f0 = puVar27[0x10];
                                uStack_c68 = puVar27[0x11];
                                uStack_c70 = puVar27[0x10];
                                uStack_6d8 = puVar27[0x13];
                                uStack_6e0 = puVar27[0x12];
                                uStack_cc8 = puVar27[5];
                                uStack_cd0 = puVar27[4];
                                uStack_738 = puVar27[7];
                                uStack_740 = puVar27[6];
                                uStack_748 = puVar27[5];
                                uStack_750 = puVar27[4];
                                uStack_cb8 = puVar27[7];
                                uStack_cc0 = puVar27[6];
                                uStack_728 = puVar27[9];
                                uStack_730 = puVar27[8];
                                uStack_ca8 = puVar27[9];
                                uStack_cb0 = puVar27[8];
                                uStack_718 = puVar27[0xb];
                                uStack_720 = puVar27[10];
                                uStack_768 = puVar27[1];
                                uStack_770 = *puVar27;
                                uStack_758 = puVar27[3];
                                uStack_760 = puVar27[2];
                                uStack_cf0 = *puVar27;
                                uStack_c58 = puVar27[0x13];
                                uStack_c60 = puVar27[0x12];
                                uStack_ce8 = (undefined1)puVar27[1];
                                uStack_ce7 = (undefined7)((ulong)puVar27[1] >> 8);
                                uStack_cd8 = (undefined1)puVar27[3];
                                uStack_cd7 = (undefined7)((ulong)puVar27[3] >> 8);
                                uStack_ce0 = (undefined1)puVar27[2];
                                uStack_cdf = (undefined7)((ulong)puVar27[2] >> 8);
                                iVar10 = (int)&uStack_d90;
                                FUN_1046d2a38();
                                if (iVar10 == 1) {
                                  iVar10 = (int)&uStack_cf0;
                                  FUN_1046d2a38();
                                  if (iVar10 != 1) {
LAB_1046d10a4:
                                    _memcpy(&uStack_1050,&uStack_d90,0x140);
                                    func_0x0001046d8c0c(&uStack_810,&uStack_360,0x11308da18,
                                                        &UNK_10dd2f158);
                                    func_0x0001046d8c0c(&uStack_770,&uStack_360,0x11308da18,
                                                        &UNK_10dd2f158);
                                    uVar18 = 0x11308db78;
                                    puVar19 = &UNK_10dd2f2f8;
LAB_1046d110c:
                                    puVar24 = &uStack_1050;
                                    goto LAB_1046d0cc0;
                                  }
                                  uStack_fe8 = uStack_d28;
                                  uStack_ff0 = uStack_d30;
                                  uStack_fd8 = uStack_d18;
                                  uStack_fe0 = uStack_d20;
                                  uStack_fc8 = uStack_d08;
                                  uStack_fd0 = uStack_d10;
                                  uStack_fb8 = uStack_cf8;
                                  uStack_fc0 = uStack_d00;
                                  uStack_1028 = uStack_d68;
                                  uStack_1030 = uStack_d70;
                                  uStack_1018 = uStack_d58;
                                  uStack_1020 = uStack_d60;
                                  uStack_1008 = uStack_d48;
                                  uStack_1010 = uStack_d50;
                                  uStack_ff8 = uStack_d38;
                                  uStack_1000 = uStack_d40;
                                  uStack_1048 = uStack_d88;
                                  uStack_1050 = uStack_d90;
                                  uStack_1038 = uStack_d78;
                                  uStack_1040 = uStack_d80;
                                  func_0x0001046d8c0c(&uStack_810,&uStack_360,0x11308da18,
                                                      &UNK_10dd2f158);
                                  func_0x0001046d8c0c(&uStack_770,&uStack_360,0x11308da18,
                                                      &UNK_10dd2f158);
                                  func_0x0001046d8cd4(&uStack_1050,0x11308da18,&UNK_10dd2f158);
LAB_1046d1250:
                                  if (*(char *)((long)param_1 + (long)*(int *)(lStack_1b00 + 0x60))
                                      == *(char *)((long)pdStack_1af0 +
                                                  (long)*(int *)(lStack_1b00 + 0x60))) {
                                    puVar24 = (undefined8 *)
                                              ((long)param_1 + (long)*(int *)(lStack_1b00 + 100));
                                    plVar1 = (long *)((long)pdStack_1af0 +
                                                     (long)*(int *)(lStack_1b00 + 100));
                                    uVar18 = *puVar24;
                                    lVar28 = puVar24[1];
                                    pcVar26 = (code *)puVar24[2];
                                    uVar5 = puVar24[3];
                                    pcVar25 = (code *)puVar24[4];
                                    pdVar4 = (double *)*plVar1;
                                    uVar23 = plVar1[1];
                                    lVar12 = plVar1[2];
                                    lVar29 = plVar1[3];
                                    lVar31 = plVar1[4];
                                    lStack_1aa8 = lVar31;
                                    if (lVar28 == 1) {
                                      if (uVar23 == 1) {
                                        func_0x000103de4004(uVar18,1,pcVar26,uVar5,pcVar25);
                                        func_0x000103de4004(pdVar4,1,lVar12,lVar29,lStack_1aa8);
                                        func_0x000103de4018(uVar18,1,pcVar26,uVar5,pcVar25);
LAB_1046d1478:
                                        lVar12 = (long)*(int *)(lStack_1b00 + 0x68);
                                        _memcpy(auStack_ad0,(long)param_1 + lVar12,0x160);
                                        _memcpy(&uStack_d90,(long)param_1 + lVar12,0x160);
                                        pdVar4 = pdStack_1af0;
                                        _memcpy(auStack_970,(long)pdStack_1af0 + lVar12,0x160);
                                        _memcpy(&uStack_c30,(long)pdVar4 + lVar12,0x160);
                                        iVar10 = (int)&uStack_d90;
                                        func_0x000101542f6c();
                                        if (iVar10 == 1) {
                                          iVar10 = (int)&uStack_c30;
                                          func_0x000101542f6c();
                                          if (iVar10 != 1) {
LAB_1046d1584:
                                            _memcpy(&uStack_1050,&uStack_d90,0x2c0);
                                            func_0x0001046d8c0c(auStack_ad0,&uStack_360,0x112db3a28,
                                                                &UNK_10d95ddb0);
                                            func_0x0001046d8c0c(auStack_970,&uStack_360,0x112db3a28,
                                                                &UNK_10d95ddb0);
                                            uVar18 = 0x113010758;
                                            puVar19 = &UNK_10dc96580;
                                            goto LAB_1046d110c;
                                          }
                                          _memcpy(&uStack_1050,&uStack_d90,0x160);
                                          func_0x0001046d8c0c(auStack_ad0,&uStack_360,0x112db3a28,
                                                              &UNK_10d95ddb0);
                                          func_0x0001046d8c0c(auStack_970,&uStack_360,0x112db3a28,
                                                              &UNK_10d95ddb0);
                                          func_0x0001046d8cd4(&uStack_1050,0x112db3a28,
                                                              &UNK_10d95ddb0);
                                        }
                                        else {
                                          _memcpy(&uStack_17e0,&uStack_d90,0x160);
                                          iVar10 = (int)&uStack_c30;
                                          func_0x000101542f6c();
                                          if (iVar10 == 1) goto LAB_1046d1584;
                                          _memcpy(&uStack_1940,&uStack_c30,0x160);
                                          _memcpy(&uStack_1050,&uStack_c30,0x160);
                                          _memcpy(&uStack_360,&uStack_17e0,0x160);
                                          func_0x0001046d8c0c(auStack_ad0,&uStack_1aa0,0x112db3a28,
                                                              &UNK_10d95ddb0);
                                          func_0x0001046d8c0c(auStack_970,&uStack_1aa0,0x112db3a28,
                                                              &UNK_10d95ddb0);
                                          puVar24 = &uStack_360;
                                          FUN_10475c13c(puVar24,&uStack_1050);
                                          func_0x0001046d8cd4(&uStack_1940,0x112db3a28,
                                                              &UNK_10d95ddb0);
                                          func_0x0001046d8cd4(&uStack_d90,0x112db3a28,&UNK_10d95ddb0
                                                             );
                                          if (((ulong)puVar24 & 1) == 0) goto LAB_1046d0cc4;
                                        }
                                        puVar2 = (ulong *)((long)param_1 +
                                                          (long)*(int *)(lStack_1b00 + 0x6c));
                                        puVar24 = (undefined8 *)
                                                  ((long)pdVar4 + (long)*(int *)(lStack_1b00 + 0x6c)
                                                  );
                                        uVar23 = *puVar2;
                                        uVar21 = puVar2[1];
                                        uVar18 = *puVar24;
                                        uVar17 = puVar24[1];
                                        if (uVar21 >> 0x3c < 0xf) {
                                          if (0xe < uVar17 >> 0x3c) goto LAB_1046d1700;
                                          func_0x000100de78a0(uVar23,uVar21);
                                          func_0x000100de78a0(uVar18,uVar17);
                                          uVar16 = uVar23;
                                          func_0x000100e25fcc(uVar23,uVar21,uVar18,uVar17);
                                          func_0x0001000b44c0(uVar18,uVar17);
                                          func_0x0001000b44c0(uVar23,uVar21);
                                          if ((uVar16 & 1) != 0) goto LAB_1046d1780;
                                        }
                                        else if (uVar17 >> 0x3c < 0xf) {
LAB_1046d1700:
                                          func_0x000100de78a0(uVar23,uVar21);
                                          func_0x000100de78a0(uVar18,uVar17);
                                          func_0x0001000b44c0(uVar23,uVar21);
                                          func_0x0001000b44c0(uVar18,uVar17);
                                        }
                                        else {
                                          func_0x000100de78a0(uVar23,uVar21);
                                          func_0x000100de78a0(uVar18,uVar17);
                                          func_0x0001000b44c0(uVar23,uVar21);
LAB_1046d1780:
                                          if (*(char *)((long)param_1 +
                                                       (long)*(int *)(lStack_1b00 + 0x70)) ==
                                              *(char *)((long)pdVar4 +
                                                       (long)*(int *)(lStack_1b00 + 0x70))) {
                                            puVar2 = (ulong *)((long)param_1 +
                                                              (long)*(int *)(lStack_1b00 + 0x74));
                                            uVar23 = puVar2[1];
                                            puVar3 = (ulong *)((long)pdVar4 +
                                                              (long)*(int *)(lStack_1b00 + 0x74));
                                            uVar21 = puVar3[1];
                                            if (uVar23 == 0) {
                                              if (uVar21 == 0) goto LAB_1046d17e4;
                                            }
                                            else if ((uVar21 != 0) &&
                                                    (((uVar17 = *puVar2, uVar17 == *puVar3 &&
                                                      (uVar23 == uVar21)) ||
                                                     (
                                                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                                            (), (uVar17 & 1) != 0)))) {
LAB_1046d17e4:
                                              puVar2 = (ulong *)((long)param_1 +
                                                                (long)*(int *)(lStack_1b00 + 0x78));
                                              uVar23 = puVar2[1];
                                              puVar3 = (ulong *)((long)pdVar4 +
                                                                (long)*(int *)(lStack_1b00 + 0x78));
                                              uVar21 = puVar3[1];
                                              if (uVar23 == 0) {
                                                if (uVar21 == 0) goto LAB_1046d1830;
                                              }
                                              else if ((uVar21 != 0) &&
                                                      (((uVar17 = *puVar2, uVar17 == *puVar3 &&
                                                        (uVar23 == uVar21)) ||
                                                       (
                                                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                                            (), (uVar17 & 1) != 0)))) {
LAB_1046d1830:
                                                puVar2 = (ulong *)((long)param_1 +
                                                                  (long)*(int *)(lStack_1b00 + 0x7c)
                                                                  );
                                                uVar23 = puVar2[1];
                                                puVar3 = (ulong *)((long)pdVar4 +
                                                                  (long)*(int *)(lStack_1b00 + 0x7c)
                                                                  );
                                                uVar21 = puVar3[1];
                                                if (uVar23 == 0) {
                                                  if (uVar21 == 0) goto LAB_1046d187c;
                                                }
                                                else if ((uVar21 != 0) &&
                                                        (((uVar17 = *puVar2, uVar17 == *puVar3 &&
                                                          (uVar23 == uVar21)) ||
                                                         (
                                                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                                            (), (uVar17 & 1) != 0)))) {
LAB_1046d187c:
                                                  puVar2 = (ulong *)((long)param_1 +
                                                                    (long)*(int *)(lStack_1b00 +
                                                                                  0x80));
                                                  puVar24 = (undefined8 *)
                                                            ((long)pdVar4 +
                                                            (long)*(int *)(lStack_1b00 + 0x80));
                                                  uVar23 = *puVar2;
                                                  uVar21 = puVar2[1];
                                                  uVar18 = *puVar24;
                                                  uVar17 = puVar24[1];
                                                  if (uVar21 >> 0x3c < 0xf) {
                                                    if (0xe < uVar17 >> 0x3c) goto LAB_1046d1700;
                                                    func_0x000100de78a0(uVar23,uVar21);
                                                    func_0x000100de78a0(uVar18,uVar17);
                                                    uVar16 = uVar23;
                                                    func_0x000100e25fcc(uVar23,uVar21,uVar18,uVar17)
                                                    ;
                                                    func_0x0001000b44c0(uVar18,uVar17);
                                                    func_0x0001000b44c0(uVar23,uVar21);
                                                    if ((uVar16 & 1) != 0) goto LAB_1046d1928;
                                                  }
                                                  else {
                                                    if (uVar17 >> 0x3c < 0xf) goto LAB_1046d1700;
                                                    func_0x000100de78a0(uVar23,uVar21);
                                                    func_0x000100de78a0(uVar18,uVar17);
                                                    func_0x0001000b44c0(uVar23,uVar21);
LAB_1046d1928:
                                                    puVar24 = puStack_1ab8;
                                                    iVar10 = *(int *)(lStack_1b00 + 0x84);
                                                    lVar12 = (long)*(int *)(lStack_1ae0 + 0x30);
                                                    func_0x0001046d8c0c((long)param_1 + (long)iVar10
                                                                        ,puStack_1ab8,0x112db39a8,
                                                                        &UNK_10d95dd90);
                                                    func_0x0001046d8c0c((long)pdVar4 + (long)iVar10,
                                                                        (long)puVar24 + lVar12,
                                                                        0x112db39a8,&UNK_10d95dd90);
                                                    pcVar26 = *(code **)(lStack_1ad8 + 0x30);
                                                    (*pcVar26)(puVar24,1,lStack_1ac8);
                                                    puVar27 = puStack_1ab8;
                                                    if ((int)puVar24 == 1) {
                                                      lVar12 = (long)puStack_1ab8 + lVar12;
                                                      (*pcVar26)(lVar12,1,lStack_1ac8);
                                                      if ((int)lVar12 != 1) {
LAB_1046d1a14:
                                                        uVar18 = 0x112db3b70;
                                                        puVar19 = &UNK_10d95def0;
                                                        puVar24 = puStack_1ab8;
                                                        goto LAB_1046d0cc0;
                                                      }
                                                      func_0x0001046d8cd4(puStack_1ab8,0x112db39a8,
                                                                          &UNK_10d95dd90);
                                                    }
                                                    else {
                                                      func_0x0001046d8c0c(puStack_1ab8,uStack_1ad0,
                                                                          0x112db39a8,&UNK_10d95dd90
                                                                         );
                                                      lVar28 = (long)puVar27 + lVar12;
                                                      (*pcVar26)(lVar28,1,lStack_1ac8);
                                                      puVar24 = puStack_1ab8;
                                                      puVar9 = puStack_1ac0;
                                                      if ((int)lVar28 == 1) {
                                                        func_0x0001046d8c98(uStack_1ad0,
                                                                            &SUB_100b91fbc);
                                                        goto LAB_1046d1a14;
                                                      }
                                                      func_0x0001046d8c54((long)puStack_1ab8 +
                                                                          lVar12,puStack_1ac0,
                                                                          &SUB_100b91fbc);
                                                      uVar23 = uStack_1ad0;
                                                      uVar21 = uStack_1ad0;
                                                      FUN_104841c50(uStack_1ad0,puVar9);
                                                      func_0x0001046d8c98(puVar9,&SUB_100b91fbc);
                                                      func_0x0001046d8c98(uVar23,&SUB_100b91fbc);
                                                      func_0x0001046d8cd4(puVar24,0x112db39a8,
                                                                          &UNK_10d95dd90);
                                                      if ((uVar21 & 1) == 0) goto LAB_1046d0cc4;
                                                    }
                                                    puVar24 = (undefined8 *)
                                                              ((long)param_1 +
                                                              (long)*(int *)(lStack_1b00 + 0x88));
                                                    puVar27 = (undefined8 *)
                                                              ((long)pdVar4 +
                                                              (long)*(int *)(lStack_1b00 + 0x88));
                                                    iVar10 = (int)&uStack_ce8;
                                                    uStack_d18 = puVar24[0xf];
                                                    uStack_d20 = puVar24[0xe];
                                                    uStack_1128 = puVar24[0x11];
                                                    uStack_1130 = puVar24[0x10];
                                                    uStack_d08 = puVar24[0x11];
                                                    uStack_d10 = puVar24[0x10];
                                                    uStack_1118 = puVar24[0x13];
                                                    uStack_1120 = puVar24[0x12];
                                                    uStack_d58 = puVar24[7];
                                                    uStack_d60 = puVar24[6];
                                                    uStack_1168 = puVar24[9];
                                                    uStack_1170 = puVar24[8];
                                                    uStack_d48 = puVar24[9];
                                                    uStack_d50 = puVar24[8];
                                                    uStack_1158 = puVar24[0xb];
                                                    uStack_1160 = puVar24[10];
                                                    uStack_d38 = puVar24[0xb];
                                                    uStack_d40 = puVar24[10];
                                                    uStack_1148 = puVar24[0xd];
                                                    uStack_1150 = puVar24[0xc];
                                                    uStack_d28 = puVar24[0xd];
                                                    uStack_d30 = puVar24[0xc];
                                                    uStack_1138 = puVar24[0xf];
                                                    uStack_1140 = puVar24[0xe];
                                                    uStack_11a8 = puVar24[1];
                                                    uStack_11b0 = *puVar24;
                                                    uStack_1198 = puVar24[3];
                                                    uStack_11a0 = puVar24[2];
                                                    uStack_1188 = puVar24[5];
                                                    uStack_1190 = puVar24[4];
                                                    uStack_1178 = puVar24[7];
                                                    uStack_1180 = puVar24[6];
                                                    uStack_d88 = puVar24[1];
                                                    uStack_d90 = *puVar24;
                                                    uStack_d78 = puVar24[3];
                                                    uStack_d80 = puVar24[2];
                                                    uStack_d68 = puVar24[5];
                                                    uStack_d70 = puVar24[4];
                                                    uStack_cf8 = puVar24[0x13];
                                                    uStack_d00 = puVar24[0x12];
                                                    uStack_c70 = puVar27[0xf];
                                                    uStack_c78 = puVar27[0xe];
                                                    uStack_1078 = puVar27[0x11];
                                                    uStack_1080 = puVar27[0x10];
                                                    uStack_c60 = puVar27[0x11];
                                                    uStack_c68 = puVar27[0x10];
                                                    uStack_1068 = puVar27[0x13];
                                                    uStack_1070 = puVar27[0x12];
                                                    uStack_cb0 = puVar27[7];
                                                    uStack_cb8 = puVar27[6];
                                                    uStack_10b8 = puVar27[9];
                                                    uStack_10c0 = puVar27[8];
                                                    uStack_ca0 = puVar27[9];
                                                    uStack_ca8 = puVar27[8];
                                                    uStack_10a8 = puVar27[0xb];
                                                    uStack_10b0 = puVar27[10];
                                                    uStack_c80 = puVar27[0xd];
                                                    uStack_c88 = puVar27[0xc];
                                                    uStack_1088 = puVar27[0xf];
                                                    uStack_1090 = puVar27[0xe];
                                                    uStack_c90 = puVar27[0xb];
                                                    uStack_c98 = puVar27[10];
                                                    uStack_1098 = puVar27[0xd];
                                                    uStack_10a0 = puVar27[0xc];
                                                    uStack_10f8 = puVar27[1];
                                                    uStack_1100 = *puVar27;
                                                    uStack_10e8 = puVar27[3];
                                                    uStack_10f0 = puVar27[2];
                                                    uStack_10d8 = puVar27[5];
                                                    uStack_10e0 = puVar27[4];
                                                    uStack_10c8 = puVar27[7];
                                                    uStack_10d0 = puVar27[6];
                                                    uStack_cd0 = puVar27[3];
                                                    uStack_cc0 = puVar27[5];
                                                    uStack_cc8 = puVar27[4];
                                                    uStack_c50 = puVar27[0x13];
                                                    uStack_c58 = puVar27[0x12];
                                                    uStack_ce0 = (undefined1)puVar27[1];
                                                    uStack_cdf = (undefined7)
                                                                 ((ulong)puVar27[1] >> 8);
                                                    uStack_ce8 = (undefined1)*puVar27;
                                                    uStack_ce7 = (undefined7)((ulong)*puVar27 >> 8);
                                                    uStack_cd8 = (undefined1)puVar27[2];
                                                    uStack_cd7 = (undefined7)
                                                                 ((ulong)puVar27[2] >> 8);
                                                    uStack_1110 = *(undefined1 *)(puVar24 + 0x14);
                                                    uStack_cf0 = CONCAT71(uStack_cf0._1_7_,
                                                                          *(undefined1 *)
                                                                           (puVar24 + 0x14));
                                                    uStack_1060 = *(undefined1 *)(puVar27 + 0x14);
                                                    uStack_c48 = CONCAT71(uStack_c48._1_7_,
                                                                          *(undefined1 *)
                                                                           (puVar27 + 0x14));
                                                    iVar11 = (int)&uStack_d90;
                                                    func_0x000100dbd9b0();
                                                    if (iVar11 == 1) {
                                                      func_0x000100dbd9b0();
                                                      if (iVar10 == 1) {
                                                        uStack_1758 = uStack_d08;
                                                        uStack_1760 = uStack_d10;
                                                        uStack_1748 = uStack_cf8;
                                                        uStack_1750 = uStack_d00;
                                                        uStack_1740 = CONCAT71(uStack_1740._1_7_,
                                                                               (undefined1)
                                                                               uStack_cf0);
                                                        uStack_1798 = uStack_d48;
                                                        uStack_17a0 = uStack_d50;
                                                        uStack_1788 = uStack_d38;
                                                        uStack_1790 = uStack_d40;
                                                        uStack_1778 = uStack_d28;
                                                        uStack_1780 = uStack_d30;
                                                        uStack_1768 = uStack_d18;
                                                        uStack_1770 = uStack_d20;
                                                        uStack_17d8 = uStack_d88;
                                                        uStack_17e0 = uStack_d90;
                                                        uStack_17c8 = uStack_d78;
                                                        uStack_17d0 = uStack_d80;
                                                        uStack_17b8 = uStack_d68;
                                                        uStack_17c0 = uStack_d70;
                                                        uStack_17a8 = uStack_d58;
                                                        uStack_17b0 = uStack_d60;
                                                        func_0x0001046d8c0c(&uStack_11b0,
                                                                            &uStack_1940,0x112e54be0
                                                                            ,&UNK_10da56ca0);
                                                        func_0x0001046d8c0c(&uStack_1100,
                                                                            &uStack_1940,0x112e54be0
                                                                            ,&UNK_10da56ca0);
                                                        func_0x0001046d8cd4(&uStack_17e0,0x112e54be0
                                                                            ,&UNK_10da56ca0);
                                                        goto LAB_1046d1e60;
                                                      }
LAB_1046d1cc8:
                                                      _memcpy(&uStack_17e0,&uStack_d90,0x149);
                                                      func_0x0001046d8c0c(&uStack_11b0,&uStack_1940,
                                                                          0x112e54be0,&UNK_10da56ca0
                                                                         );
                                                      puVar24 = &uStack_1100;
                                                      puVar27 = &uStack_1940;
LAB_1046d1d04:
                                                      func_0x0001046d8c0c(puVar24,puVar27,
                                                                          0x112e54be0,&UNK_10da56ca0
                                                                         );
                                                      uVar18 = 0x11308db80;
                                                      puVar19 = &UNK_10dd2f300;
                                                      puVar24 = &uStack_17e0;
                                                      goto LAB_1046d0cc0;
                                                    }
                                                    uStack_1758 = uStack_d08;
                                                    uStack_1760 = uStack_d10;
                                                    uStack_1748 = uStack_cf8;
                                                    uStack_1750 = uStack_d00;
                                                    uStack_1740 = CONCAT71(uStack_1740._1_7_,
                                                                           (undefined1)uStack_cf0);
                                                    uStack_1798 = uStack_d48;
                                                    uStack_17a0 = uStack_d50;
                                                    uStack_1788 = uStack_d38;
                                                    uStack_1790 = uStack_d40;
                                                    uStack_1778 = uStack_d28;
                                                    uStack_1780 = uStack_d30;
                                                    uStack_1768 = uStack_d18;
                                                    uStack_1770 = uStack_d20;
                                                    uStack_17d8 = uStack_d88;
                                                    uStack_17e0 = uStack_d90;
                                                    uStack_17c8 = uStack_d78;
                                                    uStack_17d0 = uStack_d80;
                                                    uStack_17b8 = uStack_d68;
                                                    uStack_17c0 = uStack_d70;
                                                    uStack_17a8 = uStack_d58;
                                                    uStack_17b0 = uStack_d60;
                                                    func_0x000100dbd9b0();
                                                    if (iVar10 == 1) goto LAB_1046d1cc8;
                                                    uStack_18b8 = uStack_c60;
                                                    uStack_18c0 = uStack_c68;
                                                    uStack_18a8 = uStack_c50;
                                                    uStack_18b0 = uStack_c58;
                                                    uStack_18f8 = uStack_ca0;
                                                    uStack_1900 = uStack_ca8;
                                                    uStack_18e8 = uStack_c90;
                                                    uStack_18f0 = uStack_c98;
                                                    uStack_18d8 = uStack_c80;
                                                    uStack_18e0 = uStack_c88;
                                                    uStack_18c8 = uStack_c70;
                                                    uStack_18d0 = uStack_c78;
                                                    uStack_1938 = CONCAT71(uStack_cdf,uStack_ce0);
                                                    uStack_1940 = CONCAT71(uStack_ce7,uStack_ce8);
                                                    uStack_1930 = CONCAT71(uStack_cd7,uStack_cd8);
                                                    uStack_1928 = uStack_cd0;
                                                    uStack_408 = CONCAT71(uStack_cdf,uStack_ce0);
                                                    uStack_410 = CONCAT71(uStack_ce7,uStack_ce8);
                                                    uStack_400 = CONCAT71(uStack_cd7,uStack_cd8);
                                                    uStack_1918 = uStack_cc0;
                                                    uStack_1920 = uStack_cc8;
                                                    uStack_1908 = uStack_cb0;
                                                    uStack_1910 = uStack_cb8;
                                                    uStack_388 = uStack_c60;
                                                    uStack_390 = uStack_c68;
                                                    uStack_378 = uStack_c50;
                                                    uStack_380 = uStack_c58;
                                                    uStack_3c8 = uStack_ca0;
                                                    uStack_3d0 = uStack_ca8;
                                                    uStack_3b8 = uStack_c90;
                                                    uStack_3c0 = uStack_c98;
                                                    uStack_398 = uStack_c70;
                                                    uStack_3a0 = uStack_c78;
                                                    uStack_3a8 = uStack_c80;
                                                    uStack_3b0 = uStack_c88;
                                                    uStack_3f8 = uStack_cd0;
                                                    uStack_18a0 = CONCAT71(uStack_18a0._1_7_,
                                                                           (undefined1)uStack_c48);
                                                    uStack_370 = (undefined1)uStack_c48;
                                                    uStack_3d8 = uStack_cb0;
                                                    uStack_3e0 = uStack_cb8;
                                                    uStack_3e8 = uStack_cc0;
                                                    uStack_3f0 = uStack_cc8;
                                                    uStack_438 = uStack_1758;
                                                    uStack_440 = uStack_1760;
                                                    uStack_428 = uStack_1748;
                                                    uStack_430 = uStack_1750;
                                                    uStack_420 = (undefined1)uStack_1740;
                                                    uStack_478 = uStack_1798;
                                                    uStack_480 = uStack_17a0;
                                                    uStack_468 = uStack_1788;
                                                    uStack_470 = uStack_1790;
                                                    uStack_448 = uStack_1768;
                                                    uStack_450 = uStack_1770;
                                                    uStack_458 = uStack_1778;
                                                    uStack_460 = uStack_1780;
                                                    uStack_4b8 = uStack_17d8;
                                                    uStack_4c0 = uStack_17e0;
                                                    uStack_4a8 = uStack_17c8;
                                                    uStack_4b0 = uStack_17d0;
                                                    uStack_488 = uStack_17a8;
                                                    uStack_490 = uStack_17b0;
                                                    uStack_498 = uStack_17b8;
                                                    uStack_4a0 = uStack_17c0;
                                                    func_0x0001046d8c0c(&uStack_11b0,&uStack_1aa0,
                                                                        0x112e54be0,&UNK_10da56ca0);
                                                    func_0x0001046d8c0c(&uStack_1100,&uStack_1aa0,
                                                                        0x112e54be0,&UNK_10da56ca0);
                                                    puVar24 = &uStack_4c0;
                                                    FUN_1046c2028(puVar24,&uStack_410);
                                                    func_0x0001046d8cd4(&uStack_1940,0x112e54be0,
                                                                        &UNK_10da56ca0);
                                                    func_0x0001046d8cd4(&uStack_d90,0x112e54be0,
                                                                        &UNK_10da56ca0);
                                                    if (((ulong)puVar24 & 1) == 0)
                                                    goto LAB_1046d0cc4;
LAB_1046d1e60:
                                                    if ((*(float *)((long)param_1 +
                                                                   (long)*(int *)(lStack_1b00 + 0x8c
                                                                                 )) ==
                                                         *(float *)((long)pdVar4 +
                                                                   (long)*(int *)(lStack_1b00 + 0x8c
                                                                                 ))) &&
                                                       (*(char *)((long)param_1 +
                                                                 (long)*(int *)(lStack_1b00 + 0x90))
                                                        == *(char *)((long)pdVar4 +
                                                                    (long)*(int *)(lStack_1b00 +
                                                                                  0x90)))) {
                                                      puVar24 = (undefined8 *)
                                                                ((long)param_1 +
                                                                (long)*(int *)(lStack_1b00 + 0x94));
                                                      puVar27 = (undefined8 *)
                                                                ((long)pdVar4 +
                                                                (long)*(int *)(lStack_1b00 + 0x94));
                                                      iVar10 = (int)&uStack_cd0;
                                                      uStack_d08 = puVar24[0x11];
                                                      uStack_d10 = puVar24[0x10];
                                                      uStack_cf8 = puVar24[0x13];
                                                      uStack_d00 = puVar24[0x12];
                                                      uStack_cf0 = puVar24[0x14];
                                                      uStack_cc8 = puVar27[1];
                                                      uStack_cd0 = *puVar27;
                                                      uStack_cb8 = puVar27[3];
                                                      uStack_cc0 = puVar27[2];
                                                      uStack_ce8 = (undefined1)puVar24[0x15];
                                                      uStack_cdf = (undefined7)
                                                                   *(undefined8 *)
                                                                    ((long)puVar24 + 0xb1);
                                                      uStack_cd8 = (undefined1)
                                                                   ((ulong)*(undefined8 *)
                                                                            ((long)puVar24 + 0xb1)
                                                                   >> 0x38);
                                                      uStack_ce7 = (undefined7)
                                                                   *(undefined8 *)
                                                                    ((long)puVar24 + 0xa9);
                                                      uStack_ce0 = (undefined1)
                                                                   ((ulong)*(undefined8 *)
                                                                            ((long)puVar24 + 0xa9)
                                                                   >> 0x38);
                                                      uStack_d48 = puVar24[9];
                                                      uStack_d50 = puVar24[8];
                                                      uStack_d38 = puVar24[0xb];
                                                      uStack_d40 = puVar24[10];
                                                      uStack_d28 = puVar24[0xd];
                                                      uStack_d30 = puVar24[0xc];
                                                      uStack_d18 = puVar24[0xf];
                                                      uStack_d20 = puVar24[0xe];
                                                      uStack_d88 = puVar24[1];
                                                      uStack_d90 = *puVar24;
                                                      uStack_d78 = puVar24[3];
                                                      uStack_d80 = puVar24[2];
                                                      uStack_d68 = puVar24[5];
                                                      uStack_d70 = puVar24[4];
                                                      uStack_d58 = puVar24[7];
                                                      uStack_d60 = puVar24[6];
                                                      uStack_c1f = *(undefined8 *)
                                                                    ((long)puVar27 + 0xb1);
                                                      uStack_c20 = (undefined1)
                                                                   ((ulong)*(undefined8 *)
                                                                            ((long)puVar27 + 0xa9)
                                                                   >> 0x38);
                                                      uStack_c48 = puVar27[0x11];
                                                      uStack_c50 = puVar27[0x10];
                                                      uStack_c38 = puVar27[0x13];
                                                      uStack_c40 = puVar27[0x12];
                                                      uStack_c30 = puVar27[0x14];
                                                      uStack_c28 = (undefined1)puVar27[0x15];
                                                      uStack_c27 = (undefined7)
                                                                   ((ulong)puVar27[0x15] >> 8);
                                                      uStack_c88 = puVar27[9];
                                                      uStack_c90 = puVar27[8];
                                                      uStack_c78 = puVar27[0xb];
                                                      uStack_c80 = puVar27[10];
                                                      uStack_c68 = puVar27[0xd];
                                                      uStack_c70 = puVar27[0xc];
                                                      uStack_c58 = puVar27[0xf];
                                                      uStack_c60 = puVar27[0xe];
                                                      uStack_ca8 = puVar27[5];
                                                      uStack_cb0 = puVar27[4];
                                                      uStack_c98 = puVar27[7];
                                                      uStack_ca0 = puVar27[6];
                                                      iVar11 = (int)&uStack_d90;
                                                      func_0x000101541310();
                                                      if (iVar11 == 1) {
                                                        func_0x000101541310();
                                                        if (iVar10 == 1) {
LAB_1046d204c:
                                                          if ((((*(int *)((long)param_1 +
                                                                         (long)*(int *)(lStack_1b00
                                                                                       + 0x98)) ==
                                                                 *(int *)((long)pdVar4 +
                                                                         (long)*(int *)(lStack_1b00
                                                                                       + 0x98))) &&
                                                               (*(char *)((long)param_1 +
                                                                         (long)*(int *)(lStack_1b00
                                                                                       + 0x9c)) ==
                                                                *(char *)((long)pdVar4 +
                                                                         (long)*(int *)(lStack_1b00
                                                                                       + 0x9c)))) &&
                                                              (*(long *)((long)param_1 +
                                                                        (long)*(int *)(lStack_1b00 +
                                                                                      0xa0)) ==
                                                               *(long *)((long)pdVar4 +
                                                                        (long)*(int *)(lStack_1b00 +
                                                                                      0xa0)))) &&
                                                             ((*(int *)((long)param_1 +
                                                                       (long)*(int *)(lStack_1b00 +
                                                                                     0xa4)) ==
                                                               *(int *)((long)pdVar4 +
                                                                       (long)*(int *)(lStack_1b00 +
                                                                                     0xa4)) &&
                                                              (*(int *)((long)param_1 +
                                                                       (long)*(int *)(lStack_1b00 +
                                                                                     0xa8)) ==
                                                               *(int *)((long)pdVar4 +
                                                                       (long)*(int *)(lStack_1b00 +
                                                                                     0xa8)))))) {
                                                            plVar1 = (long *)((long)param_1 +
                                                                             (long)*(int *)(
                                                  lStack_1b00 + 0xac));
                                                  puVar27 = (undefined8 *)*plVar1;
                                                  lVar28 = plVar1[1];
                                                  lVar12 = plVar1[2];
                                                  lVar29 = plVar1[3];
                                                  puVar24 = (undefined8 *)
                                                            ((long)pdVar4 +
                                                            (long)*(int *)(lStack_1b00 + 0xac));
                                                  uVar18 = *puVar24;
                                                  lVar31 = puVar24[1];
                                                  uVar5 = puVar24[2];
                                                  uVar6 = puVar24[3];
                                                  lStack_1aa8 = lVar29;
                                                  if (lVar28 == 0) {
                                                    if (lVar31 != 0) goto LAB_1046d2184;
LAB_1046d21e4:
                                                    if ((*(int *)((long)param_1 +
                                                                 (long)*(int *)(lStack_1b00 + 0xb0))
                                                         == *(int *)((long)pdVar4 +
                                                                    (long)*(int *)(lStack_1b00 +
                                                                                  0xb0))) &&
                                                       (*(int *)((long)param_1 +
                                                                (long)*(int *)(lStack_1b00 + 0xb4))
                                                        == *(int *)((long)pdVar4 +
                                                                   (long)*(int *)(lStack_1b00 + 0xb4
                                                                                 )))) {
                                                      puVar24 = (undefined8 *)
                                                                ((long)param_1 +
                                                                (long)*(int *)(lStack_1b00 + 0xb8));
                                                      puVar27 = (undefined8 *)
                                                                ((long)pdVar4 +
                                                                (long)*(int *)(lStack_1b00 + 0xb8));
                                                      iVar10 = (int)&uStack_ce8;
                                                      uStack_d18 = puVar24[0xf];
                                                      uStack_d20 = puVar24[0xe];
                                                      uStack_1288 = puVar24[0x11];
                                                      uStack_1290 = puVar24[0x10];
                                                      uStack_d08 = puVar24[0x11];
                                                      uStack_d10 = puVar24[0x10];
                                                      uStack_1278 = puVar24[0x13];
                                                      uStack_1280 = puVar24[0x12];
                                                      uStack_d58 = puVar24[7];
                                                      uStack_d60 = puVar24[6];
                                                      uStack_12c8 = puVar24[9];
                                                      uStack_12d0 = puVar24[8];
                                                      uStack_d48 = puVar24[9];
                                                      uStack_d50 = puVar24[8];
                                                      uStack_12b8 = puVar24[0xb];
                                                      uStack_12c0 = puVar24[10];
                                                      uStack_d38 = puVar24[0xb];
                                                      uStack_d40 = puVar24[10];
                                                      uStack_12a8 = puVar24[0xd];
                                                      uStack_12b0 = puVar24[0xc];
                                                      uStack_d28 = puVar24[0xd];
                                                      uStack_d30 = puVar24[0xc];
                                                      uStack_1298 = puVar24[0xf];
                                                      uStack_12a0 = puVar24[0xe];
                                                      uStack_1308 = puVar24[1];
                                                      uStack_1310 = *puVar24;
                                                      uStack_12f8 = puVar24[3];
                                                      uStack_1300 = puVar24[2];
                                                      uStack_12e8 = puVar24[5];
                                                      uStack_12f0 = puVar24[4];
                                                      uStack_12d8 = puVar24[7];
                                                      uStack_12e0 = puVar24[6];
                                                      uStack_d88 = puVar24[1];
                                                      uStack_d90 = *puVar24;
                                                      uStack_d78 = puVar24[3];
                                                      uStack_d80 = puVar24[2];
                                                      uStack_d68 = puVar24[5];
                                                      uStack_d70 = puVar24[4];
                                                      uStack_cf8 = puVar24[0x13];
                                                      uStack_d00 = puVar24[0x12];
                                                      uStack_c70 = puVar27[0xf];
                                                      uStack_c78 = puVar27[0xe];
                                                      uStack_11d8 = puVar27[0x11];
                                                      uStack_11e0 = puVar27[0x10];
                                                      uStack_c60 = puVar27[0x11];
                                                      uStack_c68 = puVar27[0x10];
                                                      uStack_11c8 = puVar27[0x13];
                                                      uStack_11d0 = puVar27[0x12];
                                                      uStack_cb0 = puVar27[7];
                                                      uStack_cb8 = puVar27[6];
                                                      uStack_1218 = puVar27[9];
                                                      uStack_1220 = puVar27[8];
                                                      uStack_ca0 = puVar27[9];
                                                      uStack_ca8 = puVar27[8];
                                                      uStack_1208 = puVar27[0xb];
                                                      uStack_1210 = puVar27[10];
                                                      uStack_c80 = puVar27[0xd];
                                                      uStack_c88 = puVar27[0xc];
                                                      uStack_11e8 = puVar27[0xf];
                                                      uStack_11f0 = puVar27[0xe];
                                                      uStack_c90 = puVar27[0xb];
                                                      uStack_c98 = puVar27[10];
                                                      uStack_11f8 = puVar27[0xd];
                                                      uStack_1200 = puVar27[0xc];
                                                      uStack_1258 = puVar27[1];
                                                      uStack_1260 = *puVar27;
                                                      uStack_1248 = puVar27[3];
                                                      uStack_1250 = puVar27[2];
                                                      uStack_1238 = puVar27[5];
                                                      uStack_1240 = puVar27[4];
                                                      uStack_1228 = puVar27[7];
                                                      uStack_1230 = puVar27[6];
                                                      uStack_cd0 = puVar27[3];
                                                      uStack_cc0 = puVar27[5];
                                                      uStack_cc8 = puVar27[4];
                                                      uStack_c50 = puVar27[0x13];
                                                      uStack_c58 = puVar27[0x12];
                                                      uStack_ce0 = (undefined1)puVar27[1];
                                                      uStack_cdf = (undefined7)
                                                                   ((ulong)puVar27[1] >> 8);
                                                      uStack_ce8 = (undefined1)*puVar27;
                                                      uStack_ce7 = (undefined7)
                                                                   ((ulong)*puVar27 >> 8);
                                                      uStack_cd8 = (undefined1)puVar27[2];
                                                      uStack_cd7 = (undefined7)
                                                                   ((ulong)puVar27[2] >> 8);
                                                      uStack_1270 = *(undefined1 *)(puVar24 + 0x14);
                                                      uStack_cf0 = CONCAT71(uStack_cf0._1_7_,
                                                                            *(undefined1 *)
                                                                             (puVar24 + 0x14));
                                                      uStack_11c0 = *(undefined1 *)(puVar27 + 0x14);
                                                      uStack_c48 = CONCAT71(uStack_c48._1_7_,
                                                                            *(undefined1 *)
                                                                             (puVar27 + 0x14));
                                                      iVar11 = (int)&uStack_d90;
                                                      func_0x000100dbd9b0();
                                                      if (iVar11 == 1) {
                                                        func_0x000100dbd9b0();
                                                        if (iVar10 != 1) {
LAB_1046d244c:
                                                          _memcpy(&uStack_17e0,&uStack_d90,0x149);
                                                          func_0x0001046d8c0c(&uStack_1310,
                                                                              &uStack_570,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                          puVar24 = &uStack_1260;
                                                          puVar27 = &uStack_570;
                                                          goto LAB_1046d1d04;
                                                        }
                                                        uStack_1758 = uStack_d08;
                                                        uStack_1760 = uStack_d10;
                                                        uStack_1748 = uStack_cf8;
                                                        uStack_1750 = uStack_d00;
                                                        uStack_1740 = CONCAT71(uStack_1740._1_7_,
                                                                               (undefined1)
                                                                               uStack_cf0);
                                                        uStack_1798 = uStack_d48;
                                                        uStack_17a0 = uStack_d50;
                                                        uStack_1788 = uStack_d38;
                                                        uStack_1790 = uStack_d40;
                                                        uStack_1778 = uStack_d28;
                                                        uStack_1780 = uStack_d30;
                                                        uStack_1768 = uStack_d18;
                                                        uStack_1770 = uStack_d20;
                                                        uStack_17d8 = uStack_d88;
                                                        uStack_17e0 = uStack_d90;
                                                        uStack_17c8 = uStack_d78;
                                                        uStack_17d0 = uStack_d80;
                                                        uStack_17b8 = uStack_d68;
                                                        uStack_17c0 = uStack_d70;
                                                        uStack_17a8 = uStack_d58;
                                                        uStack_17b0 = uStack_d60;
                                                        func_0x0001046d8c0c(&uStack_1310,&uStack_570
                                                                            ,0x112e54be0,
                                                                            &UNK_10da56ca0);
                                                        func_0x0001046d8c0c(&uStack_1260,&uStack_570
                                                                            ,0x112e54be0,
                                                                            &UNK_10da56ca0);
                                                        func_0x0001046d8cd4(&uStack_17e0,0x112e54be0
                                                                            ,&UNK_10da56ca0);
LAB_1046d25e0:
                                                        puVar24 = (undefined8 *)
                                                                  ((long)param_1 +
                                                                  (long)*(int *)(lStack_1b00 + 0xbc)
                                                                  );
                                                        puVar27 = (undefined8 *)
                                                                  ((long)pdVar4 +
                                                                  (long)*(int *)(lStack_1b00 + 0xbc)
                                                                  );
                                                        iVar10 = (int)&uStack_ce8;
                                                        uStack_d18 = puVar24[0xf];
                                                        uStack_d20 = puVar24[0xe];
                                                        uStack_13e8 = puVar24[0x11];
                                                        uStack_13f0 = puVar24[0x10];
                                                        uStack_d08 = puVar24[0x11];
                                                        uStack_d10 = puVar24[0x10];
                                                        uStack_13d8 = puVar24[0x13];
                                                        uStack_13e0 = puVar24[0x12];
                                                        uStack_d58 = puVar24[7];
                                                        uStack_d60 = puVar24[6];
                                                        uStack_1428 = puVar24[9];
                                                        uStack_1430 = puVar24[8];
                                                        uStack_d48 = puVar24[9];
                                                        uStack_d50 = puVar24[8];
                                                        uStack_1418 = puVar24[0xb];
                                                        uStack_1420 = puVar24[10];
                                                        uStack_d38 = puVar24[0xb];
                                                        uStack_d40 = puVar24[10];
                                                        uStack_1408 = puVar24[0xd];
                                                        uStack_1410 = puVar24[0xc];
                                                        uStack_d28 = puVar24[0xd];
                                                        uStack_d30 = puVar24[0xc];
                                                        uStack_13f8 = puVar24[0xf];
                                                        uStack_1400 = puVar24[0xe];
                                                        uStack_1468 = puVar24[1];
                                                        uStack_1470 = *puVar24;
                                                        uStack_1458 = puVar24[3];
                                                        uStack_1460 = puVar24[2];
                                                        uStack_1448 = puVar24[5];
                                                        uStack_1450 = puVar24[4];
                                                        uStack_1438 = puVar24[7];
                                                        uStack_1440 = puVar24[6];
                                                        uStack_d88 = puVar24[1];
                                                        uStack_d90 = *puVar24;
                                                        uStack_d78 = puVar24[3];
                                                        uStack_d80 = puVar24[2];
                                                        uStack_d68 = puVar24[5];
                                                        uStack_d70 = puVar24[4];
                                                        uStack_cf8 = puVar24[0x13];
                                                        uStack_d00 = puVar24[0x12];
                                                        uStack_c70 = puVar27[0xf];
                                                        uStack_c78 = puVar27[0xe];
                                                        uStack_1338 = puVar27[0x11];
                                                        uStack_1340 = puVar27[0x10];
                                                        uStack_c60 = puVar27[0x11];
                                                        uStack_c68 = puVar27[0x10];
                                                        uStack_1328 = puVar27[0x13];
                                                        uStack_1330 = puVar27[0x12];
                                                        uStack_cb0 = puVar27[7];
                                                        uStack_cb8 = puVar27[6];
                                                        uStack_1378 = puVar27[9];
                                                        uStack_1380 = puVar27[8];
                                                        uStack_ca0 = puVar27[9];
                                                        uStack_ca8 = puVar27[8];
                                                        uStack_1368 = puVar27[0xb];
                                                        uStack_1370 = puVar27[10];
                                                        uStack_c80 = puVar27[0xd];
                                                        uStack_c88 = puVar27[0xc];
                                                        uStack_1348 = puVar27[0xf];
                                                        uStack_1350 = puVar27[0xe];
                                                        uStack_c90 = puVar27[0xb];
                                                        uStack_c98 = puVar27[10];
                                                        uStack_1358 = puVar27[0xd];
                                                        uStack_1360 = puVar27[0xc];
                                                        uStack_13b8 = puVar27[1];
                                                        uStack_13c0 = *puVar27;
                                                        uStack_13a8 = puVar27[3];
                                                        uStack_13b0 = puVar27[2];
                                                        uStack_1398 = puVar27[5];
                                                        uStack_13a0 = puVar27[4];
                                                        uStack_1388 = puVar27[7];
                                                        uStack_1390 = puVar27[6];
                                                        uStack_cd0 = puVar27[3];
                                                        uStack_cc0 = puVar27[5];
                                                        uStack_cc8 = puVar27[4];
                                                        uStack_c50 = puVar27[0x13];
                                                        uStack_c58 = puVar27[0x12];
                                                        uStack_ce0 = (undefined1)puVar27[1];
                                                        uStack_cdf = (undefined7)
                                                                     ((ulong)puVar27[1] >> 8);
                                                        uStack_ce8 = (undefined1)*puVar27;
                                                        uStack_ce7 = (undefined7)
                                                                     ((ulong)*puVar27 >> 8);
                                                        uStack_cd8 = (undefined1)puVar27[2];
                                                        uStack_cd7 = (undefined7)
                                                                     ((ulong)puVar27[2] >> 8);
                                                        uStack_13d0 = *(undefined1 *)
                                                                       (puVar24 + 0x14);
                                                        uStack_cf0 = CONCAT71(uStack_cf0._1_7_,
                                                                              *(undefined1 *)
                                                                               (puVar24 + 0x14));
                                                        uStack_1320 = *(undefined1 *)
                                                                       (puVar27 + 0x14);
                                                        uStack_c48 = CONCAT71(uStack_c48._1_7_,
                                                                              *(undefined1 *)
                                                                               (puVar27 + 0x14));
                                                        iVar11 = (int)&uStack_d90;
                                                        func_0x000100dbd9b0();
                                                        if (iVar11 == 1) {
                                                          func_0x000100dbd9b0();
                                                          if (iVar10 != 1) {
LAB_1046d2830:
                                                            _memcpy(&uStack_17e0,&uStack_d90,0x149);
                                                            func_0x0001046d8c0c(&uStack_1470,
                                                                                &uStack_6d0,
                                                                                0x112e54be0,
                                                                                &UNK_10da56ca0);
                                                            puVar24 = &uStack_13c0;
                                                            puVar27 = &uStack_6d0;
                                                            goto LAB_1046d1d04;
                                                          }
                                                          uStack_1758 = uStack_d08;
                                                          uStack_1760 = uStack_d10;
                                                          uStack_1748 = uStack_cf8;
                                                          uStack_1750 = uStack_d00;
                                                          uStack_1740 = CONCAT71(uStack_1740._1_7_,
                                                                                 (undefined1)
                                                                                 uStack_cf0);
                                                          uStack_1798 = uStack_d48;
                                                          uStack_17a0 = uStack_d50;
                                                          uStack_1788 = uStack_d38;
                                                          uStack_1790 = uStack_d40;
                                                          uStack_1778 = uStack_d28;
                                                          uStack_1780 = uStack_d30;
                                                          uStack_1768 = uStack_d18;
                                                          uStack_1770 = uStack_d20;
                                                          uStack_17d8 = uStack_d88;
                                                          uStack_17e0 = uStack_d90;
                                                          uStack_17c8 = uStack_d78;
                                                          uStack_17d0 = uStack_d80;
                                                          uStack_17b8 = uStack_d68;
                                                          uStack_17c0 = uStack_d70;
                                                          uStack_17a8 = uStack_d58;
                                                          uStack_17b0 = uStack_d60;
                                                          func_0x0001046d8c0c(&uStack_1470,
                                                                              &uStack_6d0,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                          func_0x0001046d8c0c(&uStack_13c0,
                                                                              &uStack_6d0,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                          func_0x0001046d8cd4(&uStack_17e0,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                        }
                                                        else {
                                                          uStack_1498 = uStack_d08;
                                                          uStack_14a0 = uStack_d10;
                                                          uStack_1488 = uStack_cf8;
                                                          uStack_1490 = uStack_d00;
                                                          uStack_1480 = (undefined1)uStack_cf0;
                                                          uStack_14d8 = uStack_d48;
                                                          uStack_14e0 = uStack_d50;
                                                          uStack_14c8 = uStack_d38;
                                                          uStack_14d0 = uStack_d40;
                                                          uStack_14a8 = uStack_d18;
                                                          uStack_14b0 = uStack_d20;
                                                          uStack_14b8 = uStack_d28;
                                                          uStack_14c0 = uStack_d30;
                                                          uStack_1518 = uStack_d88;
                                                          uStack_1520 = uStack_d90;
                                                          uStack_1508 = uStack_d78;
                                                          uStack_1510 = uStack_d80;
                                                          uStack_14e8 = uStack_d58;
                                                          uStack_14f0 = uStack_d60;
                                                          uStack_14f8 = uStack_d68;
                                                          uStack_1500 = uStack_d70;
                                                          func_0x000100dbd9b0();
                                                          if (iVar10 == 1) goto LAB_1046d2830;
                                                          uStack_1548 = uStack_c60;
                                                          uStack_1550 = uStack_c68;
                                                          uStack_1538 = uStack_c50;
                                                          uStack_1540 = uStack_c58;
                                                          uStack_1588 = uStack_ca0;
                                                          uStack_1590 = uStack_ca8;
                                                          uStack_1578 = uStack_c90;
                                                          uStack_1580 = uStack_c98;
                                                          uStack_1558 = uStack_c70;
                                                          uStack_1560 = uStack_c78;
                                                          uStack_1568 = uStack_c80;
                                                          uStack_1570 = uStack_c88;
                                                          uStack_15c8 = CONCAT71(uStack_cdf,
                                                                                 uStack_ce0);
                                                          uStack_15d0 = CONCAT71(uStack_ce7,
                                                                                 uStack_ce8);
                                                          uStack_15c0 = CONCAT71(uStack_cd7,
                                                                                 uStack_cd8);
                                                          uStack_15b8 = uStack_cd0;
                                                          uStack_17d8 = CONCAT71(uStack_cdf,
                                                                                 uStack_ce0);
                                                          uStack_17e0 = CONCAT71(uStack_ce7,
                                                                                 uStack_ce8);
                                                          uStack_17d0 = CONCAT71(uStack_cd7,
                                                                                 uStack_cd8);
                                                          uStack_1598 = uStack_cb0;
                                                          uStack_15a0 = uStack_cb8;
                                                          uStack_15a8 = uStack_cc0;
                                                          uStack_15b0 = uStack_cc8;
                                                          uStack_1758 = uStack_c60;
                                                          uStack_1760 = uStack_c68;
                                                          uStack_1748 = uStack_c50;
                                                          uStack_1750 = uStack_c58;
                                                          uStack_1798 = uStack_ca0;
                                                          uStack_17a0 = uStack_ca8;
                                                          uStack_1788 = uStack_c90;
                                                          uStack_1790 = uStack_c98;
                                                          uStack_1778 = uStack_c80;
                                                          uStack_1780 = uStack_c88;
                                                          uStack_1768 = uStack_c70;
                                                          uStack_1770 = uStack_c78;
                                                          uStack_17c8 = uStack_cd0;
                                                          uStack_1530 = (undefined1)uStack_c48;
                                                          uStack_1740 = CONCAT71(uStack_1740._1_7_,
                                                                                 (undefined1)
                                                                                 uStack_c48);
                                                          uStack_17b8 = uStack_cc0;
                                                          uStack_17c0 = uStack_cc8;
                                                          uStack_17a8 = uStack_cb0;
                                                          uStack_17b0 = uStack_cb8;
                                                          uStack_648 = uStack_1498;
                                                          uStack_650 = uStack_14a0;
                                                          uStack_638 = uStack_1488;
                                                          uStack_640 = uStack_1490;
                                                          uStack_630 = uStack_1480;
                                                          uStack_688 = uStack_14d8;
                                                          uStack_690 = uStack_14e0;
                                                          uStack_678 = uStack_14c8;
                                                          uStack_680 = uStack_14d0;
                                                          uStack_658 = uStack_14a8;
                                                          uStack_660 = uStack_14b0;
                                                          uStack_668 = uStack_14b8;
                                                          uStack_670 = uStack_14c0;
                                                          uStack_6c8 = uStack_1518;
                                                          uStack_6d0 = uStack_1520;
                                                          uStack_6b8 = uStack_1508;
                                                          uStack_6c0 = uStack_1510;
                                                          uStack_698 = uStack_14e8;
                                                          uStack_6a0 = uStack_14f0;
                                                          uStack_6a8 = uStack_14f8;
                                                          uStack_6b0 = uStack_1500;
                                                          func_0x0001046d8c0c(&uStack_1470,
                                                                              auStack_1678,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                          func_0x0001046d8c0c(&uStack_13c0,
                                                                              auStack_1678,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                          puVar24 = &uStack_6d0;
                                                          FUN_1046c2028(puVar24,&uStack_17e0);
                                                          func_0x0001046d8cd4(&uStack_15d0,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                          func_0x0001046d8cd4(&uStack_d90,
                                                                              0x112e54be0,
                                                                              &UNK_10da56ca0);
                                                          if (((ulong)puVar24 & 1) == 0)
                                                          goto LAB_1046d0cc4;
                                                        }
                                                        bVar22 = *(byte *)((long)param_1 +
                                                                          (long)*(int *)(lStack_1b00
                                                                                        + 0xc0));
                                                        bVar7 = *(byte *)((long)pdVar4 +
                                                                         (long)*(int *)(lStack_1b00
                                                                                       + 0xc0));
                                                        if (bVar22 == 2) {
                                                          if (bVar7 == 2) {
LAB_1046d29ec:
                                                            if ((*(long *)((long)param_1 +
                                                                          (long)*(int *)(lStack_1b00
                                                                                        + 0xc4)) ==
                                                                 *(long *)((long)pdVar4 +
                                                                          (long)*(int *)(lStack_1b00
                                                                                        + 0xc4))) &&
                                                               (*(int *)((long)param_1 +
                                                                        (long)*(int *)(lStack_1b00 +
                                                                                      200)) ==
                                                                *(int *)((long)pdVar4 +
                                                                        (long)*(int *)(lStack_1b00 +
                                                                                      200)))) {
                                                              bVar22 = *(byte *)((long)param_1 +
                                                                                (long)*(int *)(
                                                  lStack_1b00 + 0xcc)) ^
                                                  *(byte *)((long)pdVar4 +
                                                           (long)*(int *)(lStack_1b00 + 0xcc)) ^ 1;
                                                  goto LAB_1046d0cc8;
                                                  }
                                                  }
                                                  }
                                                  else if ((bVar7 != 2) &&
                                                          (((bVar7 ^ bVar22) & 1) == 0))
                                                  goto LAB_1046d29ec;
                                                  }
                                                  else {
                                                    uStack_1758 = uStack_d08;
                                                    uStack_1760 = uStack_d10;
                                                    uStack_1748 = uStack_cf8;
                                                    uStack_1750 = uStack_d00;
                                                    uStack_1740 = CONCAT71(uStack_1740._1_7_,
                                                                           (undefined1)uStack_cf0);
                                                    uStack_1798 = uStack_d48;
                                                    uStack_17a0 = uStack_d50;
                                                    uStack_1788 = uStack_d38;
                                                    uStack_1790 = uStack_d40;
                                                    uStack_1778 = uStack_d28;
                                                    uStack_1780 = uStack_d30;
                                                    uStack_1768 = uStack_d18;
                                                    uStack_1770 = uStack_d20;
                                                    uStack_17d8 = uStack_d88;
                                                    uStack_17e0 = uStack_d90;
                                                    uStack_17c8 = uStack_d78;
                                                    uStack_17d0 = uStack_d80;
                                                    uStack_17b8 = uStack_d68;
                                                    uStack_17c0 = uStack_d70;
                                                    uStack_17a8 = uStack_d58;
                                                    uStack_17b0 = uStack_d60;
                                                    func_0x000100dbd9b0();
                                                    if (iVar10 == 1) goto LAB_1046d244c;
                                                    uStack_648 = uStack_c60;
                                                    uStack_650 = uStack_c68;
                                                    uStack_638 = uStack_c50;
                                                    uStack_640 = uStack_c58;
                                                    uStack_688 = uStack_ca0;
                                                    uStack_690 = uStack_ca8;
                                                    uStack_678 = uStack_c90;
                                                    uStack_680 = uStack_c98;
                                                    uStack_658 = uStack_c70;
                                                    uStack_660 = uStack_c78;
                                                    uStack_668 = uStack_c80;
                                                    uStack_670 = uStack_c88;
                                                    uStack_6c8 = CONCAT71(uStack_cdf,uStack_ce0);
                                                    uStack_6d0 = CONCAT71(uStack_ce7,uStack_ce8);
                                                    uStack_6c0 = CONCAT71(uStack_cd7,uStack_cd8);
                                                    uStack_6b8 = uStack_cd0;
                                                    uStack_568 = CONCAT71(uStack_cdf,uStack_ce0);
                                                    uStack_570 = CONCAT71(uStack_ce7,uStack_ce8);
                                                    uStack_560 = CONCAT71(uStack_cd7,uStack_cd8);
                                                    uStack_698 = uStack_cb0;
                                                    uStack_6a0 = uStack_cb8;
                                                    uStack_6a8 = uStack_cc0;
                                                    uStack_6b0 = uStack_cc8;
                                                    uStack_4e8 = uStack_c60;
                                                    uStack_4f0 = uStack_c68;
                                                    uStack_4d8 = uStack_c50;
                                                    uStack_4e0 = uStack_c58;
                                                    uStack_528 = uStack_ca0;
                                                    uStack_530 = uStack_ca8;
                                                    uStack_518 = uStack_c90;
                                                    uStack_520 = uStack_c98;
                                                    uStack_4f8 = uStack_c70;
                                                    uStack_500 = uStack_c78;
                                                    uStack_508 = uStack_c80;
                                                    uStack_510 = uStack_c88;
                                                    uStack_558 = uStack_cd0;
                                                    uStack_630 = (undefined1)uStack_c48;
                                                    uStack_4d0 = (undefined1)uStack_c48;
                                                    uStack_538 = uStack_cb0;
                                                    uStack_540 = uStack_cb8;
                                                    uStack_548 = uStack_cc0;
                                                    uStack_550 = uStack_cc8;
                                                    uStack_598 = uStack_1758;
                                                    uStack_5a0 = uStack_1760;
                                                    uStack_588 = uStack_1748;
                                                    uStack_590 = uStack_1750;
                                                    uStack_580 = (undefined1)uStack_1740;
                                                    uStack_5d8 = uStack_1798;
                                                    uStack_5e0 = uStack_17a0;
                                                    uStack_5c8 = uStack_1788;
                                                    uStack_5d0 = uStack_1790;
                                                    uStack_5a8 = uStack_1768;
                                                    uStack_5b0 = uStack_1770;
                                                    uStack_5b8 = uStack_1778;
                                                    uStack_5c0 = uStack_1780;
                                                    uStack_618 = uStack_17d8;
                                                    uStack_620 = uStack_17e0;
                                                    uStack_608 = uStack_17c8;
                                                    uStack_610 = uStack_17d0;
                                                    uStack_5e8 = uStack_17a8;
                                                    uStack_5f0 = uStack_17b0;
                                                    uStack_5f8 = uStack_17b8;
                                                    uStack_600 = uStack_17c0;
                                                    func_0x0001046d8c0c(&uStack_1310,&uStack_13c0,
                                                                        0x112e54be0,&UNK_10da56ca0);
                                                    func_0x0001046d8c0c(&uStack_1260,&uStack_13c0,
                                                                        0x112e54be0,&UNK_10da56ca0);
                                                    puVar24 = &uStack_620;
                                                    FUN_1046c2028(puVar24,&uStack_570);
                                                    func_0x0001046d8cd4(&uStack_6d0,0x112e54be0,
                                                                        &UNK_10da56ca0);
                                                    func_0x0001046d8cd4(&uStack_d90,0x112e54be0,
                                                                        &UNK_10da56ca0);
                                                    if (((ulong)puVar24 & 1) != 0)
                                                    goto LAB_1046d25e0;
                                                  }
                                                  }
                                                  }
                                                  else if (lVar31 == 0) {
LAB_1046d2184:
                                                    func_0x0001046ca7b0(uVar18,lVar31,uVar5,uVar6);
                                                    lVar29 = lStack_1aa8;
                                                    func_0x0001046ca7b0(puVar27,lVar28,lVar12,
                                                                        lStack_1aa8);
                                                    func_0x0001046d8d14(puVar27,lVar28,lVar12,lVar29
                                                                       );
                                                    func_0x0001046d8d14(uVar18,lVar31,uVar5,uVar6);
                                                  }
                                                  else {
                                                    puStack_1ab8 = puVar27;
                                                    FUN_10474eb58(puVar27,lVar28,lVar12,lVar29,
                                                                  uVar18,lVar31,uVar5,uVar6);
                                                    uStack_1ab0 = CONCAT44(uStack_1ab0._4_4_,
                                                                           (int)puVar27);
                                                    func_0x0001046ca7b0(uVar18,lVar31,uVar5,uVar6);
                                                    puVar24 = puStack_1ab8;
                                                    func_0x0001046ca7b0(puStack_1ab8,lVar28,lVar12,
                                                                        lVar29);
                                                    _swift_bridgeObjectRelease(lVar31);
                                                    _swift_bridgeObjectRelease(uVar6);
                                                    func_0x0001046d8d14(puVar24,lVar28,lVar12,lVar29
                                                                       );
                                                    if ((uStack_1ab0 & 1) != 0) goto LAB_1046d21e4;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uStack_1758 = uStack_d08;
                                                    uStack_1760 = uStack_d10;
                                                    uStack_1748 = uStack_cf8;
                                                    uStack_1750 = uStack_d00;
                                                    uStack_1738 = uStack_ce8;
                                                    uStack_1740 = uStack_cf0;
                                                    uStack_172f = CONCAT17(uStack_cd8,uStack_cdf);
                                                    uStack_1737 = uStack_ce7;
                                                    uStack_1730 = uStack_ce0;
                                                    uStack_1798 = uStack_d48;
                                                    uStack_17a0 = uStack_d50;
                                                    uStack_1788 = uStack_d38;
                                                    uStack_1790 = uStack_d40;
                                                    uStack_1778 = uStack_d28;
                                                    uStack_1780 = uStack_d30;
                                                    uStack_1768 = uStack_d18;
                                                    uStack_1770 = uStack_d20;
                                                    uStack_17d8 = uStack_d88;
                                                    uStack_17e0 = uStack_d90;
                                                    uStack_17c8 = uStack_d78;
                                                    uStack_17d0 = uStack_d80;
                                                    uStack_17b8 = uStack_d68;
                                                    uStack_17c0 = uStack_d70;
                                                    uStack_17a8 = uStack_d58;
                                                    uStack_17b0 = uStack_d60;
                                                    func_0x000101541310();
                                                    if (iVar10 != 1) {
                                                      uStack_18b8 = uStack_c48;
                                                      uStack_18c0 = uStack_c50;
                                                      uStack_18a8 = uStack_c38;
                                                      uStack_18b0 = uStack_c40;
                                                      uStack_1898 = uStack_c28;
                                                      uStack_18a0 = uStack_c30;
                                                      uStack_188f = uStack_c1f;
                                                      uStack_1897 = uStack_c27;
                                                      uStack_1890 = uStack_c20;
                                                      uStack_18f8 = uStack_c88;
                                                      uStack_1900 = uStack_c90;
                                                      uStack_18e8 = uStack_c78;
                                                      uStack_18f0 = uStack_c80;
                                                      uStack_18d8 = uStack_c68;
                                                      uStack_18e0 = uStack_c70;
                                                      uStack_18c8 = uStack_c58;
                                                      uStack_18d0 = uStack_c60;
                                                      uStack_1938 = uStack_cc8;
                                                      uStack_1940 = uStack_cd0;
                                                      uStack_1928 = uStack_cb8;
                                                      uStack_1930 = uStack_cc0;
                                                      uStack_1918 = uStack_ca8;
                                                      uStack_1920 = uStack_cb0;
                                                      uStack_1908 = uStack_c98;
                                                      uStack_1910 = uStack_ca0;
                                                      uStack_1a18 = uStack_1758;
                                                      uStack_1a20 = uStack_1760;
                                                      uStack_1a08 = uStack_1748;
                                                      uStack_1a10 = uStack_1750;
                                                      uStack_19f8 = uStack_1738;
                                                      uStack_1a00 = uStack_1740;
                                                      uStack_19ef = uStack_172f;
                                                      uStack_19f7 = uStack_1737;
                                                      uStack_19f0 = uStack_1730;
                                                      uStack_1a58 = uStack_1798;
                                                      uStack_1a60 = uStack_17a0;
                                                      uStack_1a48 = uStack_1788;
                                                      uStack_1a50 = uStack_1790;
                                                      uStack_1a38 = uStack_1778;
                                                      uStack_1a40 = uStack_1780;
                                                      uStack_1a28 = uStack_1768;
                                                      uStack_1a30 = uStack_1770;
                                                      uStack_1a98 = uStack_17d8;
                                                      uStack_1aa0 = uStack_17e0;
                                                      uStack_1a88 = uStack_17c8;
                                                      uStack_1a90 = uStack_17d0;
                                                      uStack_1a78 = uStack_17b8;
                                                      uStack_1a80 = uStack_17c0;
                                                      uStack_1a68 = uStack_17a8;
                                                      uStack_1a70 = uStack_17b0;
                                                      puVar24 = &uStack_1aa0;
                                                      FUN_1046ca004(puVar24,&uStack_1940);
                                                      if (((ulong)puVar24 & 1) != 0)
                                                      goto LAB_1046d204c;
                                                    }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      else {
LAB_1046d1308:
                                        func_0x000103de4004(uVar18,lVar28,pcVar26,uVar5,pcVar25);
                                        lVar31 = lStack_1aa8;
                                        uStack_1ab0 = uVar23;
                                        func_0x000103de4004(pdVar4,uVar23,lVar12,lVar29,lStack_1aa8)
                                        ;
                                        func_0x000103de4018(uVar18,lVar28,pcVar26,uVar5,pcVar25);
                                        func_0x000103de4018(pdVar4,uStack_1ab0,lVar12,lVar29,lVar31)
                                        ;
                                      }
                                    }
                                    else {
                                      if (uVar23 == 1) goto LAB_1046d1308;
                                      bStack_1c0 = (byte)lVar29 & 1;
                                      bStack_1bf = (byte)((ulong)lVar29 >> 8) & 1;
                                      bStack_1be = (byte)((ulong)lVar29 >> 0x10) & 1;
                                      bStack_1e8 = (byte)uVar5 & 1;
                                      bStack_1e7 = (byte)((ulong)uVar5 >> 8) & 1;
                                      bStack_1e6 = (byte)((ulong)uVar5 >> 0x10) & 1;
                                      pcStack_1b08 = pcVar26;
                                      pcStack_1af8 = pcVar25;
                                      pdStack_1ae8 = pdVar4;
                                      uStack_1ab0 = uVar23;
                                      uStack_200 = uVar18;
                                      lStack_1f8 = lVar28;
                                      pcStack_1f0 = pcVar26;
                                      pcStack_1e0 = pcVar25;
                                      pdStack_1d8 = pdVar4;
                                      uStack_1d0 = uVar23;
                                      lStack_1c8 = lVar12;
                                      lStack_1b8 = lVar31;
                                      func_0x000103de4004(uVar18,lVar28,pcVar26,uVar5,pcVar25);
                                      uVar23 = uStack_1ab0;
                                      pdVar4 = pdStack_1ae8;
                                      func_0x000103de4004(pdStack_1ae8,uStack_1ab0,lVar12,lVar29,
                                                          lVar31);
                                      puVar24 = &uStack_200;
                                      FUN_104759ad8(puVar24,&pdStack_1d8);
                                      uStack_1b0c = (uint)puVar24;
                                      func_0x000103de4018(pdVar4,uVar23,lVar12,lVar29,lVar31);
                                      func_0x000103de4018(uVar18,lVar28,pcStack_1b08,uVar5,
                                                          pcStack_1af8);
                                      if ((uStack_1b0c & 1) != 0) goto LAB_1046d1478;
                                    }
                                  }
                                }
                                else {
                                  uStack_fe8 = uStack_d28;
                                  uStack_ff0 = uStack_d30;
                                  uStack_fd8 = uStack_d18;
                                  uStack_fe0 = uStack_d20;
                                  uStack_fc8 = uStack_d08;
                                  uStack_fd0 = uStack_d10;
                                  uStack_fb8 = uStack_cf8;
                                  uStack_fc0 = uStack_d00;
                                  uStack_1028 = uStack_d68;
                                  uStack_1030 = uStack_d70;
                                  uStack_1018 = uStack_d58;
                                  uStack_1020 = uStack_d60;
                                  uStack_1008 = uStack_d48;
                                  uStack_1010 = uStack_d50;
                                  uStack_ff8 = uStack_d38;
                                  uStack_1000 = uStack_d40;
                                  uStack_1048 = uStack_d88;
                                  uStack_1050 = uStack_d90;
                                  uStack_1038 = uStack_d78;
                                  uStack_1040 = uStack_d80;
                                  iVar10 = (int)&uStack_cf0;
                                  FUN_1046d2a38();
                                  if (iVar10 == 1) goto LAB_1046d10a4;
                                  uStack_2f8 = uStack_c88;
                                  uStack_300 = uStack_c90;
                                  uStack_2e8 = uStack_c78;
                                  uStack_2f0 = uStack_c80;
                                  uStack_2d8 = uStack_c68;
                                  uStack_2e0 = uStack_c70;
                                  uStack_2c8 = uStack_c58;
                                  uStack_2d0 = uStack_c60;
                                  uStack_f8 = CONCAT71(uStack_cd7,uStack_cd8);
                                  uStack_100 = CONCAT71(uStack_cdf,uStack_ce0);
                                  uStack_338 = uStack_cc8;
                                  uStack_340 = uStack_cd0;
                                  uStack_328 = uStack_cb8;
                                  uStack_330 = uStack_cc0;
                                  uStack_318 = uStack_ca8;
                                  uStack_320 = uStack_cb0;
                                  uStack_308 = uStack_c98;
                                  uStack_310 = uStack_ca0;
                                  uStack_358 = CONCAT71(uStack_ce7,uStack_ce8);
                                  uStack_348 = CONCAT71(uStack_cd7,uStack_cd8);
                                  uStack_350 = CONCAT71(uStack_cdf,uStack_ce0);
                                  uStack_108 = CONCAT71(uStack_ce7,uStack_ce8);
                                  uStack_360 = uStack_cf0;
                                  uStack_a8 = uStack_c88;
                                  uStack_b0 = uStack_c90;
                                  uStack_98 = uStack_c78;
                                  uStack_a0 = uStack_c80;
                                  uStack_88 = uStack_c68;
                                  uStack_90 = uStack_c70;
                                  uStack_78 = uStack_c58;
                                  uStack_80 = uStack_c60;
                                  uStack_e8 = uStack_cc8;
                                  uStack_f0 = uStack_cd0;
                                  uStack_d8 = uStack_cb8;
                                  uStack_e0 = uStack_cc0;
                                  uStack_c8 = uStack_ca8;
                                  uStack_d0 = uStack_cb0;
                                  uStack_b8 = uStack_c98;
                                  uStack_c0 = uStack_ca0;
                                  uStack_110 = uStack_cf0;
                                  uStack_148 = uStack_fe8;
                                  uStack_150 = uStack_ff0;
                                  uStack_138 = uStack_fd8;
                                  uStack_140 = uStack_fe0;
                                  uStack_128 = uStack_fc8;
                                  uStack_130 = uStack_fd0;
                                  uStack_118 = uStack_fb8;
                                  uStack_120 = uStack_fc0;
                                  uStack_188 = uStack_1028;
                                  uStack_190 = uStack_1030;
                                  uStack_178 = uStack_1018;
                                  uStack_180 = uStack_1020;
                                  uStack_168 = uStack_1008;
                                  uStack_170 = uStack_1010;
                                  uStack_158 = uStack_ff8;
                                  uStack_160 = uStack_1000;
                                  uStack_1a8 = uStack_1048;
                                  uStack_1b0 = uStack_1050;
                                  uStack_198 = uStack_1038;
                                  uStack_1a0 = uStack_1040;
                                  func_0x0001046d8c0c(&uStack_810,auStack_970,0x11308da18,
                                                      &UNK_10dd2f158);
                                  func_0x0001046d8c0c(&uStack_770,auStack_970,0x11308da18,
                                                      &UNK_10dd2f158);
                                  puVar24 = &uStack_1b0;
                                  FUN_1047a2edc(puVar24,&uStack_110);
                                  func_0x0001046d8cd4(&uStack_360,0x11308da18,&UNK_10dd2f158);
                                  func_0x0001046d8cd4(&uStack_d90,0x11308da18,&UNK_10dd2f158);
                                  if (((ulong)puVar24 & 1) != 0) goto LAB_1046d1250;
                                }
                              }
                            }
                          }
                        }
                      }
                      else if (lVar12 != 0) {
                        _swift_bridgeObjectRetain(lVar12);
                        uVar21 = uVar23;
                        _swift_bridgeObjectRetain();
                        func_0x00010470a93c();
                        _swift_bridgeObjectRelease(uVar23);
                        _swift_bridgeObjectRelease(lVar12);
                        if ((uVar21 & 1) != 0) goto LAB_1046d0de4;
                      }
                    }
                  }
                  else {
LAB_1046d0974:
                    uVar18 = 0x112d68090;
                    puVar19 = &UNK_10da24400;
LAB_1046d0cc0:
                    func_0x0001046d8cd4(puVar24,uVar18,puVar19);
                  }
                }
                else {
                  func_0x0001046d8c0c(puVar24,lVar31,0x112d3bc20,&UNK_10d904ef0);
                  lVar14 = (long)puVar24 + (long)pdStack_1ae8;
                  (*pcStack_1af8)(lVar14,1,lStack_1aa8);
                  if ((int)lVar14 == 1) {
                    (**(code **)(uStack_1ab0 + 8))(lVar31,lStack_1aa8);
                    goto LAB_1046d0974;
                  }
                  (**(code **)(uStack_1ab0 + 0x20))
                            (lVar28,(long)puVar24 + (long)pdStack_1ae8,lStack_1aa8);
                  uVar18 = 0x112d68098;
                  func_0x0001046d8d44(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                                      PTR___s10Foundation4UUIDVSQAAMc_110350c50);
                  lVar14 = lVar31;
                  pdStack_1ae8 = param_1;
                  __sSQ2eeoiySbx_xtFZTj(lVar31,lVar28,lStack_1aa8,uVar18);
                  param_1 = pdStack_1ae8;
                  uStack_1b0c = (uint)lVar14;
                  pcStack_1b08 = *(code **)(uStack_1ab0 + 8);
                  (*pcStack_1b08)(lVar28,lStack_1aa8);
                  (*pcStack_1b08)(lVar31,lStack_1aa8);
                  func_0x0001046d8cd4(puVar24,0x112d3bc20,&UNK_10d904ef0);
                  if ((uStack_1b0c & 1) != 0) goto LAB_1046d0a28;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1046d0cc4:
  bVar22 = 0;
LAB_1046d0cc8:
  return bVar22 & 1;
}



/* Entry: 1046d2a38; end: 1046d2a5b;  */

int FUN_1046d2a38(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1046d2a5c; end: 1046d2a87;  */

void FUN_1046d2a5c(void)

{
  func_0x0001046d8d44(0x11308da28,&SUB_100b91d00,&UNK_10dd2f1a0);
  return;
}



/* Entry: 1046d2a88; end: 1046d389f;  */

long * FUN_1046d2a88(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  ulong uVar22;
  code *pcVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long lVar34;
  
  uVar11 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar11 >> 0x11 & 1) == 0) {
    lVar20 = *param_2;
    lVar34 = param_2[3];
    lVar18 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = lVar20;
    param_1[3] = lVar34;
    param_1[2] = lVar18;
    lVar20 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = lVar20;
    lVar20 = param_2[6];
    lVar18 = param_2[7];
    param_1[6] = lVar20;
    param_1[7] = lVar18;
    lVar18 = param_2[8];
    lVar34 = param_2[9];
    param_1[8] = lVar18;
    param_1[9] = lVar34;
    lVar34 = param_2[10];
    lVar19 = param_2[0xb];
    param_1[10] = lVar34;
    param_1[0xb] = lVar19;
    lVar19 = param_2[0xc];
    lVar13 = param_2[0xd];
    param_1[0xc] = lVar19;
    param_1[0xd] = lVar13;
    lVar28 = param_2[0xe];
    lVar13 = param_2[0xf];
    param_1[0xe] = lVar28;
    param_1[0xf] = lVar13;
    lVar29 = param_2[0x10];
    param_1[0x10] = lVar29;
    lVar16 = (long)*(int *)(param_3 + 0x3c);
    lVar13 = 0;
    __s10Foundation4UUIDVMa();
    lVar14 = *(long *)(lVar13 + -8);
    pcVar23 = *(code **)(lVar14 + 0x30);
    _swift_bridgeObjectRetain(lVar20);
    _swift_bridgeObjectRetain(lVar18);
    _swift_bridgeObjectRetain(lVar34);
    _swift_bridgeObjectRetain(lVar19);
    _swift_bridgeObjectRetain(lVar28);
    _swift_bridgeObjectRetain(lVar29);
    lVar20 = (long)param_2 + lVar16;
    (*pcVar23)(lVar20,1,lVar13);
    if ((int)lVar20 == 0) {
      (**(code **)(lVar14 + 0x10))((long)param_1 + lVar16,(long)param_2 + lVar16,lVar13);
      (**(code **)(lVar14 + 0x38))((long)param_1 + lVar16,0,1,lVar13);
    }
    else {
      lVar20 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)param_1 + lVar16,(long)param_2 + lVar16,
              *(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
    }
    lVar18 = (long)*(int *)(param_3 + 0x40);
    lVar20 = (long)param_2 + lVar18;
    (*pcVar23)(lVar20,1,lVar13);
    if ((int)lVar20 == 0) {
      (**(code **)(lVar14 + 0x10))((long)param_1 + lVar18,(long)param_2 + lVar18,lVar13);
      (**(code **)(lVar14 + 0x38))((long)param_1 + lVar18,0,1,lVar13);
    }
    else {
      lVar20 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)param_1 + lVar18,(long)param_2 + lVar18,
              *(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
    }
    lVar18 = (long)*(int *)(param_3 + 0x44);
    lVar20 = (long)param_2 + lVar18;
    (*pcVar23)(lVar20,1,lVar13);
    if ((int)lVar20 == 0) {
      (**(code **)(lVar14 + 0x10))((long)param_1 + lVar18,(long)param_2 + lVar18,lVar13);
      (**(code **)(lVar14 + 0x38))((long)param_1 + lVar18,0,1,lVar13);
    }
    else {
      lVar20 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)param_1 + lVar18,(long)param_2 + lVar18,
              *(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
    }
    iVar10 = *(int *)(param_3 + 0x4c);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x48)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
    *(undefined8 *)((long)param_1 + (long)iVar10) = *(undefined8 *)((long)param_2 + (long)iVar10);
    iVar10 = *(int *)(param_3 + 0x54);
    uVar24 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x50));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x50)) = uVar24;
    uVar25 = *(undefined8 *)((long)param_2 + (long)iVar10);
    *(undefined8 *)((long)param_1 + (long)iVar10) = uVar25;
    iVar10 = *(int *)(param_3 + 0x5c);
    uVar26 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x58));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x58)) = uVar26;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar10);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar10);
    lVar20 = puVar2[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar24);
    _swift_bridgeObjectRetain(uVar25);
    _swift_bridgeObjectRetain(uVar26);
    if (lVar20 == 1) {
      uVar24 = puVar2[0xc];
      uVar26 = puVar2[0xf];
      uVar25 = puVar2[0xe];
      puVar1[0xd] = puVar2[0xd];
      puVar1[0xc] = uVar24;
      puVar1[0xf] = uVar26;
      puVar1[0xe] = uVar25;
      uVar24 = puVar2[0x10];
      uVar26 = puVar2[0x13];
      uVar25 = puVar2[0x12];
      puVar1[0x11] = puVar2[0x11];
      puVar1[0x10] = uVar24;
      puVar1[0x13] = uVar26;
      puVar1[0x12] = uVar25;
      uVar24 = puVar2[4];
      uVar26 = puVar2[7];
      uVar25 = puVar2[6];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar24;
      puVar1[7] = uVar26;
      puVar1[6] = uVar25;
      uVar24 = puVar2[8];
      uVar26 = puVar2[0xb];
      uVar25 = puVar2[10];
      puVar1[9] = puVar2[9];
      puVar1[8] = uVar24;
      puVar1[0xb] = uVar26;
      puVar1[10] = uVar25;
      uVar24 = *puVar2;
      uVar26 = puVar2[3];
      uVar25 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar24;
      puVar1[3] = uVar26;
      puVar1[2] = uVar25;
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar20;
      uVar24 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar24;
      uVar25 = puVar2[5];
      puVar1[4] = puVar2[4];
      puVar1[5] = uVar25;
      uVar26 = puVar2[7];
      puVar1[6] = puVar2[6];
      puVar1[7] = uVar26;
      uVar31 = puVar2[9];
      puVar1[8] = puVar2[8];
      puVar1[9] = uVar31;
      *(undefined1 *)(puVar1 + 10) = *(undefined1 *)(puVar2 + 10);
      uVar30 = puVar2[0xb];
      puVar1[0xc] = puVar2[0xc];
      puVar1[0xb] = uVar30;
      lVar18 = puVar2[0x12];
      _swift_bridgeObjectRetain(lVar20);
      _swift_bridgeObjectRetain(uVar24);
      _swift_bridgeObjectRetain(uVar25);
      _swift_bridgeObjectRetain(uVar26);
      _swift_bridgeObjectRetain(uVar31);
      if (lVar18 == 0) {
        uVar24 = puVar2[0xd];
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xd] = uVar24;
        uVar24 = puVar2[0xf];
        puVar1[0x10] = puVar2[0x10];
        puVar1[0xf] = uVar24;
        uVar24 = puVar2[0x11];
        puVar1[0x12] = puVar2[0x12];
        puVar1[0x11] = uVar24;
        puVar1[0x13] = puVar2[0x13];
      }
      else {
        uVar24 = puVar2[0xe];
        puVar1[0xd] = puVar2[0xd];
        puVar1[0xe] = uVar24;
        uVar24 = puVar2[0x10];
        puVar1[0xf] = puVar2[0xf];
        puVar1[0x10] = uVar24;
        puVar1[0x11] = puVar2[0x11];
        puVar1[0x12] = lVar18;
        puVar1[0x13] = puVar2[0x13];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar24);
        _swift_bridgeObjectRetain(lVar18);
      }
    }
    iVar10 = *(int *)(param_3 + 100);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x60)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x60));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar10);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar10);
    lVar20 = puVar2[1];
    if (lVar20 == 1) {
      uVar24 = *puVar2;
      uVar26 = puVar2[3];
      uVar25 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar24;
      puVar1[3] = uVar26;
      puVar1[2] = uVar25;
      puVar1[4] = puVar2[4];
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar20;
      puVar1[2] = puVar2[2];
      *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(puVar2 + 3);
      *(undefined2 *)((long)puVar1 + 0x19) = *(undefined2 *)((long)puVar2 + 0x19);
      puVar1[4] = puVar2[4];
      _swift_bridgeObjectRetain();
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x68));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x68));
    if (puVar2[0x27] == 0) {
      _memcpy(puVar1,puVar2,0x160);
    }
    else {
      uVar24 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar24;
      uVar24 = puVar2[2];
      uVar25 = puVar2[3];
      puVar1[2] = uVar24;
      puVar1[3] = uVar25;
      uVar17 = puVar2[4];
      puVar1[4] = uVar17;
      uVar25 = puVar2[5];
      puVar1[6] = puVar2[6];
      puVar1[5] = uVar25;
      uVar25 = puVar2[7];
      uVar26 = puVar2[8];
      puVar1[7] = uVar25;
      puVar1[8] = uVar26;
      *(undefined2 *)(puVar1 + 9) = *(undefined2 *)(puVar2 + 9);
      *(undefined1 *)((long)puVar1 + 0x4a) = *(undefined1 *)((long)puVar2 + 0x4a);
      uVar26 = puVar2[0xb];
      puVar1[10] = puVar2[10];
      puVar1[0xb] = uVar26;
      uVar15 = puVar2[0xc];
      puVar1[0xc] = uVar15;
      *(undefined1 *)(puVar1 + 0xd) = *(undefined1 *)(puVar2 + 0xd);
      uVar31 = puVar2[0xe];
      puVar1[0xf] = puVar2[0xf];
      puVar1[0xe] = uVar31;
      *(undefined1 *)(puVar1 + 0x10) = *(undefined1 *)(puVar2 + 0x10);
      uVar31 = puVar2[0x12];
      puVar1[0x11] = puVar2[0x11];
      puVar1[0x12] = uVar31;
      uVar30 = puVar2[0x14];
      puVar1[0x13] = puVar2[0x13];
      puVar1[0x14] = uVar30;
      uVar4 = puVar2[0x16];
      puVar1[0x15] = puVar2[0x15];
      puVar1[0x16] = uVar4;
      uVar5 = puVar2[0x18];
      puVar1[0x17] = puVar2[0x17];
      puVar1[0x18] = uVar5;
      uVar6 = puVar2[0x1a];
      puVar1[0x19] = puVar2[0x19];
      puVar1[0x1a] = uVar6;
      uVar32 = puVar2[0x1b];
      puVar1[0x1c] = puVar2[0x1c];
      puVar1[0x1b] = uVar32;
      uVar27 = puVar2[0x1d];
      puVar1[0x1d] = uVar27;
      *(undefined1 *)(puVar1 + 0x1e) = *(undefined1 *)(puVar2 + 0x1e);
      *(undefined1 *)((long)puVar1 + 0xf1) = *(undefined1 *)((long)puVar2 + 0xf1);
      *(undefined1 *)((long)puVar1 + 0xf2) = *(undefined1 *)((long)puVar2 + 0xf2);
      uVar32 = puVar2[0x20];
      puVar1[0x1f] = puVar2[0x1f];
      puVar1[0x20] = uVar32;
      uVar7 = puVar2[0x22];
      puVar1[0x21] = puVar2[0x21];
      puVar1[0x22] = uVar7;
      uVar8 = puVar2[0x24];
      puVar1[0x23] = puVar2[0x23];
      puVar1[0x24] = uVar8;
      uVar9 = puVar2[0x26];
      puVar1[0x25] = puVar2[0x25];
      puVar1[0x26] = uVar9;
      uVar21 = puVar2[0x27];
      puVar1[0x27] = uVar21;
      uVar33 = puVar2[0x28];
      puVar1[0x29] = puVar2[0x29];
      puVar1[0x28] = uVar33;
      uVar33 = puVar2[0x2b];
      puVar1[0x2a] = puVar2[0x2a];
      puVar1[0x2b] = uVar33;
      _swift_bridgeObjectRetain(uVar24);
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain(uVar25);
      _swift_bridgeObjectRetain(uVar26);
      _swift_bridgeObjectRetain(uVar15);
      _swift_bridgeObjectRetain(uVar31);
      _swift_bridgeObjectRetain(uVar30);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar27);
      _swift_bridgeObjectRetain(uVar32);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar8);
      _swift_bridgeObjectRetain(uVar9);
      _swift_bridgeObjectRetain(uVar21);
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x6c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x6c));
    uVar22 = puVar2[1];
    if (uVar22 >> 0x3c < 0xf) {
      uVar24 = *puVar2;
      func_0x00010006c00c(uVar24,uVar22);
      *puVar1 = uVar24;
      puVar1[1] = uVar22;
    }
    else {
      uVar24 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar24;
    }
    iVar10 = *(int *)(param_3 + 0x74);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x70)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x70));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar10);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar10);
    uVar24 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar24;
    iVar10 = *(int *)(param_3 + 0x7c);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x78));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x78));
    uVar24 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar24;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar10);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar10);
    uVar25 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar25;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x80));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x80));
    uVar22 = puVar2[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar24);
    _swift_bridgeObjectRetain(uVar25);
    if (uVar22 >> 0x3c < 0xf) {
      uVar24 = *puVar2;
      func_0x00010006c00c(uVar24,uVar22);
      *puVar1 = uVar24;
      puVar1[1] = uVar22;
    }
    else {
      uVar24 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar24;
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x84));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x84));
    lVar20 = 0;
    func_0x000100b91fbc();
    lVar18 = *(long *)(lVar20 + -8);
    puVar12 = puVar2;
    (**(code **)(lVar18 + 0x30))(puVar2,1,lVar20);
    if ((int)puVar12 == 0) {
      uVar24 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar24;
      uVar24 = puVar2[2];
      uVar26 = puVar2[5];
      uVar25 = puVar2[4];
      puVar1[3] = puVar2[3];
      puVar1[2] = uVar24;
      puVar1[5] = uVar26;
      puVar1[4] = uVar25;
      uVar24 = puVar2[6];
      uVar25 = puVar2[7];
      puVar1[6] = uVar24;
      puVar1[7] = uVar25;
      uVar25 = puVar2[8];
      puVar1[8] = uVar25;
      lVar19 = (long)*(int *)(lVar20 + 0x28);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar24);
      _swift_bridgeObjectRetain(uVar25);
      lVar34 = (long)puVar2 + lVar19;
      (*pcVar23)(lVar34,1,lVar13);
      if ((int)lVar34 == 0) {
        (**(code **)(lVar14 + 0x10))((long)puVar1 + lVar19,(long)puVar2 + lVar19,lVar13);
        (**(code **)(lVar14 + 0x38))((long)puVar1 + lVar19,0,1,lVar13);
      }
      else {
        lVar34 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar1 + lVar19,(long)puVar2 + lVar19,
                *(undefined8 *)(*(long *)(lVar34 + -8) + 0x40));
      }
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar20 + 0x2c));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar20 + 0x2c));
      uVar24 = puVar3[1];
      *puVar12 = *puVar3;
      puVar12[1] = uVar24;
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar20 + 0x30));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar20 + 0x30));
      uVar24 = puVar3[1];
      *puVar12 = *puVar3;
      puVar12[1] = uVar24;
      lVar19 = (long)*(int *)(lVar20 + 0x34);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar24);
      lVar34 = (long)puVar2 + lVar19;
      (*pcVar23)(lVar34,1,lVar13);
      if ((int)lVar34 == 0) {
        (**(code **)(lVar14 + 0x10))((long)puVar1 + lVar19,(long)puVar2 + lVar19,lVar13);
        (**(code **)(lVar14 + 0x38))((long)puVar1 + lVar19,0,1,lVar13);
      }
      else {
        lVar34 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar1 + lVar19,(long)puVar2 + lVar19,
                *(undefined8 *)(*(long *)(lVar34 + -8) + 0x40));
      }
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar20 + 0x38));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar20 + 0x38));
      uVar24 = puVar3[1];
      *puVar12 = *puVar3;
      puVar12[1] = uVar24;
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar20 + 0x3c));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar20 + 0x3c));
      uVar24 = puVar2[1];
      *puVar12 = *puVar2;
      puVar12[1] = uVar24;
      pcVar23 = *(code **)(lVar18 + 0x38);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar24);
      (*pcVar23)(puVar1,0,1,lVar20);
    }
    else {
      lVar20 = 0x112db39a8;
      func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x88));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x88));
    lVar20 = puVar2[1];
    if (lVar20 == 0) {
      uVar24 = puVar2[0x10];
      uVar26 = puVar2[0x13];
      uVar25 = puVar2[0x12];
      puVar1[0x11] = puVar2[0x11];
      puVar1[0x10] = uVar24;
      puVar1[0x13] = uVar26;
      puVar1[0x12] = uVar25;
      *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
      uVar24 = puVar2[8];
      uVar26 = puVar2[0xb];
      uVar25 = puVar2[10];
      puVar1[9] = puVar2[9];
      puVar1[8] = uVar24;
      puVar1[0xb] = uVar26;
      puVar1[10] = uVar25;
      uVar26 = puVar2[0xc];
      uVar25 = puVar2[0xf];
      uVar24 = puVar2[0xe];
      puVar1[0xd] = puVar2[0xd];
      puVar1[0xc] = uVar26;
      puVar1[0xf] = uVar25;
      puVar1[0xe] = uVar24;
      uVar24 = *puVar2;
      uVar26 = puVar2[3];
      uVar25 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar24;
      puVar1[3] = uVar26;
      puVar1[2] = uVar25;
      uVar26 = puVar2[4];
      uVar25 = puVar2[7];
      uVar24 = puVar2[6];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar26;
      puVar1[7] = uVar25;
      puVar1[6] = uVar24;
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar20;
      lVar20 = puVar2[8];
      _swift_bridgeObjectRetain();
      if (lVar20 == 1) {
        uVar24 = puVar2[2];
        uVar26 = puVar2[5];
        uVar25 = puVar2[4];
        puVar1[3] = puVar2[3];
        puVar1[2] = uVar24;
        puVar1[5] = uVar26;
        puVar1[4] = uVar25;
        uVar24 = puVar2[6];
        puVar1[7] = puVar2[7];
        puVar1[6] = uVar24;
        puVar1[8] = puVar2[8];
      }
      else {
        lVar18 = puVar2[4];
        if (lVar18 == 1) {
          uVar24 = puVar2[2];
          uVar26 = puVar2[5];
          uVar25 = puVar2[4];
          puVar1[3] = puVar2[3];
          puVar1[2] = uVar24;
          puVar1[5] = uVar26;
          puVar1[4] = uVar25;
          puVar1[6] = puVar2[6];
        }
        else {
          uVar24 = puVar2[2];
          puVar1[3] = puVar2[3];
          puVar1[2] = uVar24;
          uVar24 = puVar2[5];
          uVar25 = puVar2[6];
          puVar1[4] = lVar18;
          puVar1[5] = uVar24;
          puVar1[6] = uVar25;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar25);
        }
        puVar1[7] = puVar2[7];
        puVar1[8] = lVar20;
        _swift_bridgeObjectRetain(lVar20);
      }
      lVar20 = puVar2[0xf];
      if (lVar20 == 1) {
        uVar24 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar24;
        uVar24 = puVar2[0xb];
        puVar1[0xc] = puVar2[0xc];
        puVar1[0xb] = uVar24;
        uVar24 = puVar2[0xd];
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xd] = uVar24;
        puVar1[0xf] = puVar2[0xf];
      }
      else {
        lVar18 = puVar2[0xb];
        if (lVar18 == 1) {
          uVar24 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar24;
          uVar24 = puVar2[0xb];
          puVar1[0xc] = puVar2[0xc];
          puVar1[0xb] = uVar24;
          puVar1[0xd] = puVar2[0xd];
        }
        else {
          uVar24 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar24;
          uVar24 = puVar2[0xc];
          uVar25 = puVar2[0xd];
          puVar1[0xb] = lVar18;
          puVar1[0xc] = uVar24;
          puVar1[0xd] = uVar25;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar25);
        }
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xf] = lVar20;
        _swift_bridgeObjectRetain(lVar20);
      }
      *(undefined2 *)(puVar1 + 0x10) = *(undefined2 *)(puVar2 + 0x10);
      uVar24 = puVar2[0x11];
      puVar1[0x12] = puVar2[0x12];
      puVar1[0x11] = uVar24;
      puVar1[0x13] = puVar2[0x13];
      *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
      _swift_bridgeObjectRetain();
    }
    iVar10 = *(int *)(param_3 + 0x90);
    *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x8c)) =
         *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x8c));
    *(undefined1 *)((long)param_1 + (long)iVar10) = *(undefined1 *)((long)param_2 + (long)iVar10);
    iVar10 = *(int *)(param_3 + 0x98);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x94));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x94));
    uVar24 = *puVar2;
    uVar26 = puVar2[3];
    uVar25 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar24;
    puVar1[3] = uVar26;
    puVar1[2] = uVar25;
    uVar24 = puVar2[4];
    uVar26 = puVar2[7];
    uVar25 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar24;
    puVar1[7] = uVar26;
    puVar1[6] = uVar25;
    uVar26 = puVar2[0xc];
    uVar25 = puVar2[0xf];
    uVar24 = puVar2[0xe];
    puVar1[0xd] = puVar2[0xd];
    puVar1[0xc] = uVar26;
    puVar1[0xf] = uVar25;
    puVar1[0xe] = uVar24;
    uVar26 = puVar2[8];
    uVar25 = puVar2[0xb];
    uVar24 = puVar2[10];
    puVar1[9] = puVar2[9];
    puVar1[8] = uVar26;
    puVar1[0xb] = uVar25;
    puVar1[10] = uVar24;
    uVar24 = *(undefined8 *)((long)puVar2 + 0xa9);
    *(undefined8 *)((long)puVar1 + 0xb1) = *(undefined8 *)((long)puVar2 + 0xb1);
    *(undefined8 *)((long)puVar1 + 0xa9) = uVar24;
    uVar24 = puVar2[0x12];
    uVar26 = puVar2[0x15];
    uVar25 = puVar2[0x14];
    puVar1[0x13] = puVar2[0x13];
    puVar1[0x12] = uVar24;
    puVar1[0x15] = uVar26;
    puVar1[0x14] = uVar25;
    uVar24 = puVar2[0x10];
    puVar1[0x11] = puVar2[0x11];
    puVar1[0x10] = uVar24;
    *(undefined8 *)((long)param_1 + (long)iVar10) = *(undefined8 *)((long)param_2 + (long)iVar10);
    iVar10 = *(int *)(param_3 + 0xa0);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x9c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x9c));
    *(undefined8 *)((long)param_1 + (long)iVar10) = *(undefined8 *)((long)param_2 + (long)iVar10);
    iVar10 = *(int *)(param_3 + 0xa8);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xa4)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xa4));
    *(undefined8 *)((long)param_1 + (long)iVar10) = *(undefined8 *)((long)param_2 + (long)iVar10);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xac));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xac));
    lVar20 = puVar2[1];
    if (lVar20 == 0) {
      uVar24 = *puVar2;
      uVar26 = puVar2[3];
      uVar25 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar24;
      puVar1[3] = uVar26;
      puVar1[2] = uVar25;
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar20;
      uVar24 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar24;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar24);
    }
    iVar10 = *(int *)(param_3 + 0xb4);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xb0)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xb0));
    *(undefined8 *)((long)param_1 + (long)iVar10) = *(undefined8 *)((long)param_2 + (long)iVar10);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xb8));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xb8));
    lVar20 = puVar2[1];
    if (lVar20 == 0) {
      uVar24 = puVar2[0x10];
      uVar26 = puVar2[0x13];
      uVar25 = puVar2[0x12];
      puVar1[0x11] = puVar2[0x11];
      puVar1[0x10] = uVar24;
      puVar1[0x13] = uVar26;
      puVar1[0x12] = uVar25;
      *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
      uVar24 = puVar2[8];
      uVar26 = puVar2[0xb];
      uVar25 = puVar2[10];
      puVar1[9] = puVar2[9];
      puVar1[8] = uVar24;
      puVar1[0xb] = uVar26;
      puVar1[10] = uVar25;
      uVar26 = puVar2[0xc];
      uVar25 = puVar2[0xf];
      uVar24 = puVar2[0xe];
      puVar1[0xd] = puVar2[0xd];
      puVar1[0xc] = uVar26;
      puVar1[0xf] = uVar25;
      puVar1[0xe] = uVar24;
      uVar24 = *puVar2;
      uVar26 = puVar2[3];
      uVar25 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar24;
      puVar1[3] = uVar26;
      puVar1[2] = uVar25;
      uVar26 = puVar2[4];
      uVar25 = puVar2[7];
      uVar24 = puVar2[6];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar26;
      puVar1[7] = uVar25;
      puVar1[6] = uVar24;
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar20;
      lVar20 = puVar2[8];
      _swift_bridgeObjectRetain();
      if (lVar20 == 1) {
        uVar24 = puVar2[2];
        uVar26 = puVar2[5];
        uVar25 = puVar2[4];
        puVar1[3] = puVar2[3];
        puVar1[2] = uVar24;
        puVar1[5] = uVar26;
        puVar1[4] = uVar25;
        uVar24 = puVar2[6];
        puVar1[7] = puVar2[7];
        puVar1[6] = uVar24;
        puVar1[8] = puVar2[8];
      }
      else {
        lVar18 = puVar2[4];
        if (lVar18 == 1) {
          uVar24 = puVar2[2];
          uVar26 = puVar2[5];
          uVar25 = puVar2[4];
          puVar1[3] = puVar2[3];
          puVar1[2] = uVar24;
          puVar1[5] = uVar26;
          puVar1[4] = uVar25;
          puVar1[6] = puVar2[6];
        }
        else {
          uVar24 = puVar2[2];
          puVar1[3] = puVar2[3];
          puVar1[2] = uVar24;
          uVar24 = puVar2[5];
          uVar25 = puVar2[6];
          puVar1[4] = lVar18;
          puVar1[5] = uVar24;
          puVar1[6] = uVar25;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar25);
        }
        puVar1[7] = puVar2[7];
        puVar1[8] = lVar20;
        _swift_bridgeObjectRetain(lVar20);
      }
      lVar20 = puVar2[0xf];
      if (lVar20 == 1) {
        uVar24 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar24;
        uVar24 = puVar2[0xb];
        puVar1[0xc] = puVar2[0xc];
        puVar1[0xb] = uVar24;
        uVar24 = puVar2[0xd];
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xd] = uVar24;
        puVar1[0xf] = puVar2[0xf];
      }
      else {
        lVar18 = puVar2[0xb];
        if (lVar18 == 1) {
          uVar24 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar24;
          uVar24 = puVar2[0xb];
          puVar1[0xc] = puVar2[0xc];
          puVar1[0xb] = uVar24;
          puVar1[0xd] = puVar2[0xd];
        }
        else {
          uVar24 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar24;
          uVar24 = puVar2[0xc];
          uVar25 = puVar2[0xd];
          puVar1[0xb] = lVar18;
          puVar1[0xc] = uVar24;
          puVar1[0xd] = uVar25;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar25);
        }
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xf] = lVar20;
        _swift_bridgeObjectRetain(lVar20);
      }
      *(undefined2 *)(puVar1 + 0x10) = *(undefined2 *)(puVar2 + 0x10);
      uVar24 = puVar2[0x11];
      puVar1[0x12] = puVar2[0x12];
      puVar1[0x11] = uVar24;
      puVar1[0x13] = puVar2[0x13];
      *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
      _swift_bridgeObjectRetain();
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xbc));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xbc));
    lVar20 = puVar2[1];
    if (lVar20 == 0) {
      uVar24 = puVar2[0x10];
      uVar26 = puVar2[0x13];
      uVar25 = puVar2[0x12];
      puVar1[0x11] = puVar2[0x11];
      puVar1[0x10] = uVar24;
      puVar1[0x13] = uVar26;
      puVar1[0x12] = uVar25;
      *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
      uVar24 = puVar2[8];
      uVar26 = puVar2[0xb];
      uVar25 = puVar2[10];
      puVar1[9] = puVar2[9];
      puVar1[8] = uVar24;
      puVar1[0xb] = uVar26;
      puVar1[10] = uVar25;
      uVar26 = puVar2[0xc];
      uVar25 = puVar2[0xf];
      uVar24 = puVar2[0xe];
      puVar1[0xd] = puVar2[0xd];
      puVar1[0xc] = uVar26;
      puVar1[0xf] = uVar25;
      puVar1[0xe] = uVar24;
      uVar24 = *puVar2;
      uVar26 = puVar2[3];
      uVar25 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar24;
      puVar1[3] = uVar26;
      puVar1[2] = uVar25;
      uVar26 = puVar2[4];
      uVar25 = puVar2[7];
      uVar24 = puVar2[6];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar26;
      puVar1[7] = uVar25;
      puVar1[6] = uVar24;
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar20;
      lVar20 = puVar2[8];
      _swift_bridgeObjectRetain();
      if (lVar20 == 1) {
        uVar24 = puVar2[2];
        uVar26 = puVar2[5];
        uVar25 = puVar2[4];
        puVar1[3] = puVar2[3];
        puVar1[2] = uVar24;
        puVar1[5] = uVar26;
        puVar1[4] = uVar25;
        uVar24 = puVar2[6];
        puVar1[7] = puVar2[7];
        puVar1[6] = uVar24;
        puVar1[8] = puVar2[8];
      }
      else {
        lVar18 = puVar2[4];
        if (lVar18 == 1) {
          uVar24 = puVar2[2];
          uVar26 = puVar2[5];
          uVar25 = puVar2[4];
          puVar1[3] = puVar2[3];
          puVar1[2] = uVar24;
          puVar1[5] = uVar26;
          puVar1[4] = uVar25;
          puVar1[6] = puVar2[6];
        }
        else {
          uVar24 = puVar2[2];
          puVar1[3] = puVar2[3];
          puVar1[2] = uVar24;
          uVar24 = puVar2[5];
          uVar25 = puVar2[6];
          puVar1[4] = lVar18;
          puVar1[5] = uVar24;
          puVar1[6] = uVar25;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar25);
        }
        puVar1[7] = puVar2[7];
        puVar1[8] = lVar20;
        _swift_bridgeObjectRetain(lVar20);
      }
      lVar20 = puVar2[0xf];
      if (lVar20 == 1) {
        uVar24 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar24;
        uVar24 = puVar2[0xb];
        puVar1[0xc] = puVar2[0xc];
        puVar1[0xb] = uVar24;
        uVar24 = puVar2[0xd];
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xd] = uVar24;
        puVar1[0xf] = puVar2[0xf];
      }
      else {
        lVar18 = puVar2[0xb];
        if (lVar18 == 1) {
          uVar24 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar24;
          uVar24 = puVar2[0xb];
          puVar1[0xc] = puVar2[0xc];
          puVar1[0xb] = uVar24;
          puVar1[0xd] = puVar2[0xd];
        }
        else {
          uVar24 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar24;
          uVar24 = puVar2[0xc];
          uVar25 = puVar2[0xd];
          puVar1[0xb] = lVar18;
          puVar1[0xc] = uVar24;
          puVar1[0xd] = uVar25;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar25);
        }
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xf] = lVar20;
        _swift_bridgeObjectRetain(lVar20);
      }
      *(undefined2 *)(puVar1 + 0x10) = *(undefined2 *)(puVar2 + 0x10);
      uVar24 = puVar2[0x11];
      puVar1[0x12] = puVar2[0x12];
      puVar1[0x11] = uVar24;
      puVar1[0x13] = puVar2[0x13];
      *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
      _swift_bridgeObjectRetain();
    }
    iVar10 = *(int *)(param_3 + 0xc4);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xc0)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xc0));
    *(undefined8 *)((long)param_1 + (long)iVar10) = *(undefined8 *)((long)param_2 + (long)iVar10);
    iVar10 = *(int *)(param_3 + 0xcc);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 200)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 200));
    *(undefined1 *)((long)param_1 + (long)iVar10) = *(undefined1 *)((long)param_2 + (long)iVar10);
  }
  else {
    lVar20 = *param_2;
    *param_1 = lVar20;
    uVar22 = (ulong)uVar11 & 0xff;
    param_1 = (long *)(lVar20 + (uVar22 + 0x10 & (uVar22 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1046d38a0; end: 1046d3daf;  */

void FUN_1046d38a0(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x60));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x80));
  iVar2 = *(int *)(param_2 + 0x3c);
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar7 = *(long *)(lVar3 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar6 = param_1 + iVar2;
  (*pcVar8)(lVar6,1,lVar3);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar7 + 8))(param_1 + iVar2,lVar3);
  }
  iVar2 = *(int *)(param_2 + 0x40);
  lVar6 = param_1 + iVar2;
  (*pcVar8)(lVar6,1,lVar3);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar7 + 8))(param_1 + iVar2,lVar3);
  }
  iVar2 = *(int *)(param_2 + 0x44);
  lVar6 = param_1 + iVar2;
  (*pcVar8)(lVar6,1,lVar3);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar7 + 8))(param_1 + iVar2,lVar3);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x4c)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x50)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x54)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x58)));
  lVar6 = param_1 + *(int *)(param_2 + 0x5c);
  if (*(long *)(lVar6 + 8) != 1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x28));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x38));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x48));
    if (*(long *)(lVar6 + 0x90) != 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x70));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x80));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x90));
    }
  }
  if (*(long *)(param_1 + *(int *)(param_2 + 100) + 8) != 1) {
    _swift_bridgeObjectRelease();
  }
  lVar6 = param_1 + *(int *)(param_2 + 0x68);
  if (*(long *)(lVar6 + 0x138) != 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x10));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x20));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x38));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x58));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x60));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x90));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0xa0));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0xb0));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0xc0));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0xd0));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0xe8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x100));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x110));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x120));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x130));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x138));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x6c));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    func_0x00010006c090(*puVar1);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x74) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x78) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x7c) + 8));
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x80));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    func_0x00010006c090(*puVar1);
  }
  lVar6 = param_1 + *(int *)(param_2 + 0x84);
  lVar4 = 0;
  func_0x000100b91fbc();
  lVar5 = lVar6;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar6,1,lVar4);
  if ((int)lVar5 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x30));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x40));
    iVar2 = *(int *)(lVar4 + 0x28);
    lVar5 = lVar6 + iVar2;
    (*pcVar8)(lVar5,1,lVar3);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar7 + 8))(lVar6 + iVar2,lVar3);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + *(int *)(lVar4 + 0x2c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + *(int *)(lVar4 + 0x30) + 8));
    iVar2 = *(int *)(lVar4 + 0x34);
    lVar5 = lVar6 + iVar2;
    (*pcVar8)(lVar5,1,lVar3);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar7 + 8))(lVar6 + iVar2,lVar3);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + *(int *)(lVar4 + 0x38) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + *(int *)(lVar4 + 0x3c) + 8));
  }
  lVar6 = param_1 + *(int *)(param_2 + 0x88);
  if (*(long *)(lVar6 + 8) != 0) {
    _swift_bridgeObjectRelease();
    lVar3 = *(long *)(lVar6 + 0x40);
    if (lVar3 != 1) {
      if (*(long *)(lVar6 + 0x20) != 1) {
        _swift_bridgeObjectRelease(*(long *)(lVar6 + 0x20));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x30));
        lVar3 = *(long *)(lVar6 + 0x40);
      }
      _swift_bridgeObjectRelease(lVar3);
    }
    lVar3 = *(long *)(lVar6 + 0x78);
    if (lVar3 != 1) {
      if (*(long *)(lVar6 + 0x58) != 1) {
        _swift_bridgeObjectRelease(*(long *)(lVar6 + 0x58));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x68));
        lVar3 = *(long *)(lVar6 + 0x78);
      }
      _swift_bridgeObjectRelease(lVar3);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x98));
  }
  lVar6 = param_1 + *(int *)(param_2 + 0xac);
  if (*(long *)(lVar6 + 8) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x18));
  }
  lVar6 = param_1 + *(int *)(param_2 + 0xb8);
  if (*(long *)(lVar6 + 8) != 0) {
    _swift_bridgeObjectRelease();
    lVar3 = *(long *)(lVar6 + 0x40);
    if (lVar3 != 1) {
      if (*(long *)(lVar6 + 0x20) != 1) {
        _swift_bridgeObjectRelease(*(long *)(lVar6 + 0x20));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x30));
        lVar3 = *(long *)(lVar6 + 0x40);
      }
      _swift_bridgeObjectRelease(lVar3);
    }
    lVar3 = *(long *)(lVar6 + 0x78);
    if (lVar3 != 1) {
      if (*(long *)(lVar6 + 0x58) != 1) {
        _swift_bridgeObjectRelease(*(long *)(lVar6 + 0x58));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x68));
        lVar3 = *(long *)(lVar6 + 0x78);
      }
      _swift_bridgeObjectRelease(lVar3);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x98));
  }
  param_1 = param_1 + *(int *)(param_2 + 0xbc);
  if (*(long *)(param_1 + 8) != 0) {
    _swift_bridgeObjectRelease();
    lVar6 = *(long *)(param_1 + 0x40);
    if (lVar6 != 1) {
      if (*(long *)(param_1 + 0x20) != 1) {
        _swift_bridgeObjectRelease(*(long *)(param_1 + 0x20));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
        lVar6 = *(long *)(param_1 + 0x40);
      }
      _swift_bridgeObjectRelease(lVar6);
    }
    lVar6 = *(long *)(param_1 + 0x78);
    if (lVar6 != 1) {
      if (*(long *)(param_1 + 0x58) != 1) {
        _swift_bridgeObjectRelease(*(long *)(param_1 + 0x58));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x68));
        lVar6 = *(long *)(param_1 + 0x78);
      }
      _swift_bridgeObjectRelease(lVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x98));
    return;
  }
  return;
}



/* Entry: 1046d3db0; end: 1046d8baf;  */

undefined8 * FUN_1046d3db0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  code *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  uVar22 = *param_2;
  uVar24 = param_2[3];
  uVar23 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar22;
  param_1[3] = uVar24;
  param_1[2] = uVar23;
  uVar22 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar22;
  uVar22 = param_2[6];
  uVar23 = param_2[7];
  param_1[6] = uVar22;
  param_1[7] = uVar23;
  uVar23 = param_2[8];
  uVar24 = param_2[9];
  param_1[8] = uVar23;
  param_1[9] = uVar24;
  uVar24 = param_2[10];
  uVar28 = param_2[0xb];
  param_1[10] = uVar24;
  param_1[0xb] = uVar28;
  uVar28 = param_2[0xc];
  uVar27 = param_2[0xd];
  param_1[0xc] = uVar28;
  param_1[0xd] = uVar27;
  uVar27 = param_2[0xe];
  uVar26 = param_2[0xf];
  param_1[0xe] = uVar27;
  param_1[0xf] = uVar26;
  uVar26 = param_2[0x10];
  param_1[0x10] = uVar26;
  lVar16 = (long)*(int *)(param_3 + 0x3c);
  lVar10 = 0;
  __s10Foundation4UUIDVMa();
  lVar13 = *(long *)(lVar10 + -8);
  pcVar21 = *(code **)(lVar13 + 0x30);
  _swift_bridgeObjectRetain(uVar22);
  _swift_bridgeObjectRetain(uVar23);
  _swift_bridgeObjectRetain(uVar24);
  _swift_bridgeObjectRetain(uVar28);
  _swift_bridgeObjectRetain(uVar27);
  _swift_bridgeObjectRetain(uVar26);
  lVar18 = (long)param_2 + lVar16;
  (*pcVar21)(lVar18,1,lVar10);
  if ((int)lVar18 == 0) {
    (**(code **)(lVar13 + 0x10))((long)param_1 + lVar16,(long)param_2 + lVar16,lVar10);
    (**(code **)(lVar13 + 0x38))((long)param_1 + lVar16,0,1,lVar10);
  }
  else {
    lVar18 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar16,(long)param_2 + lVar16,
            *(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
  }
  lVar16 = (long)*(int *)(param_3 + 0x40);
  lVar18 = (long)param_2 + lVar16;
  (*pcVar21)(lVar18,1,lVar10);
  if ((int)lVar18 == 0) {
    (**(code **)(lVar13 + 0x10))((long)param_1 + lVar16,(long)param_2 + lVar16,lVar10);
    (**(code **)(lVar13 + 0x38))((long)param_1 + lVar16,0,1,lVar10);
  }
  else {
    lVar18 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar16,(long)param_2 + lVar16,
            *(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
  }
  lVar16 = (long)*(int *)(param_3 + 0x44);
  lVar18 = (long)param_2 + lVar16;
  (*pcVar21)(lVar18,1,lVar10);
  if ((int)lVar18 == 0) {
    (**(code **)(lVar13 + 0x10))((long)param_1 + lVar16,(long)param_2 + lVar16,lVar10);
    (**(code **)(lVar13 + 0x38))((long)param_1 + lVar16,0,1,lVar10);
  }
  else {
    lVar18 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar16,(long)param_2 + lVar16,
            *(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
  }
  iVar9 = *(int *)(param_3 + 0x4c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x48)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
  *(undefined8 *)((long)param_1 + (long)iVar9) = *(undefined8 *)((long)param_2 + (long)iVar9);
  iVar9 = *(int *)(param_3 + 0x54);
  uVar22 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x50));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x50)) = uVar22;
  uVar23 = *(undefined8 *)((long)param_2 + (long)iVar9);
  *(undefined8 *)((long)param_1 + (long)iVar9) = uVar23;
  iVar9 = *(int *)(param_3 + 0x5c);
  uVar24 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x58));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x58)) = uVar24;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
  lVar18 = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar22);
  _swift_bridgeObjectRetain(uVar23);
  _swift_bridgeObjectRetain(uVar24);
  if (lVar18 == 1) {
    uVar22 = puVar2[0xc];
    uVar24 = puVar2[0xf];
    uVar23 = puVar2[0xe];
    puVar1[0xd] = puVar2[0xd];
    puVar1[0xc] = uVar22;
    puVar1[0xf] = uVar24;
    puVar1[0xe] = uVar23;
    uVar22 = puVar2[0x10];
    uVar24 = puVar2[0x13];
    uVar23 = puVar2[0x12];
    puVar1[0x11] = puVar2[0x11];
    puVar1[0x10] = uVar22;
    puVar1[0x13] = uVar24;
    puVar1[0x12] = uVar23;
    uVar22 = puVar2[4];
    uVar24 = puVar2[7];
    uVar23 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar22;
    puVar1[7] = uVar24;
    puVar1[6] = uVar23;
    uVar22 = puVar2[8];
    uVar24 = puVar2[0xb];
    uVar23 = puVar2[10];
    puVar1[9] = puVar2[9];
    puVar1[8] = uVar22;
    puVar1[0xb] = uVar24;
    puVar1[10] = uVar23;
    uVar22 = *puVar2;
    uVar24 = puVar2[3];
    uVar23 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar22;
    puVar1[3] = uVar24;
    puVar1[2] = uVar23;
  }
  else {
    *puVar1 = *puVar2;
    puVar1[1] = lVar18;
    uVar22 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar22;
    uVar23 = puVar2[5];
    puVar1[4] = puVar2[4];
    puVar1[5] = uVar23;
    uVar24 = puVar2[7];
    puVar1[6] = puVar2[6];
    puVar1[7] = uVar24;
    uVar28 = puVar2[9];
    puVar1[8] = puVar2[8];
    puVar1[9] = uVar28;
    *(undefined1 *)(puVar1 + 10) = *(undefined1 *)(puVar2 + 10);
    uVar27 = puVar2[0xb];
    puVar1[0xc] = puVar2[0xc];
    puVar1[0xb] = uVar27;
    lVar16 = puVar2[0x12];
    _swift_bridgeObjectRetain(lVar18);
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar24);
    _swift_bridgeObjectRetain(uVar28);
    if (lVar16 == 0) {
      uVar22 = puVar2[0xd];
      puVar1[0xe] = puVar2[0xe];
      puVar1[0xd] = uVar22;
      uVar22 = puVar2[0xf];
      puVar1[0x10] = puVar2[0x10];
      puVar1[0xf] = uVar22;
      uVar22 = puVar2[0x11];
      puVar1[0x12] = puVar2[0x12];
      puVar1[0x11] = uVar22;
      puVar1[0x13] = puVar2[0x13];
    }
    else {
      uVar22 = puVar2[0xe];
      puVar1[0xd] = puVar2[0xd];
      puVar1[0xe] = uVar22;
      uVar22 = puVar2[0x10];
      puVar1[0xf] = puVar2[0xf];
      puVar1[0x10] = uVar22;
      puVar1[0x11] = puVar2[0x11];
      puVar1[0x12] = lVar16;
      puVar1[0x13] = puVar2[0x13];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(lVar16);
    }
  }
  iVar9 = *(int *)(param_3 + 100);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x60)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x60));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
  lVar18 = puVar2[1];
  if (lVar18 == 1) {
    uVar22 = *puVar2;
    uVar24 = puVar2[3];
    uVar23 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar22;
    puVar1[3] = uVar24;
    puVar1[2] = uVar23;
    puVar1[4] = puVar2[4];
  }
  else {
    *puVar1 = *puVar2;
    puVar1[1] = lVar18;
    puVar1[2] = puVar2[2];
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(puVar2 + 3);
    *(undefined2 *)((long)puVar1 + 0x19) = *(undefined2 *)((long)puVar2 + 0x19);
    puVar1[4] = puVar2[4];
    _swift_bridgeObjectRetain();
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x68));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x68));
  if (puVar2[0x27] == 0) {
    _memcpy(puVar1,puVar2,0x160);
  }
  else {
    uVar22 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar22;
    uVar22 = puVar2[2];
    uVar23 = puVar2[3];
    puVar1[2] = uVar22;
    puVar1[3] = uVar23;
    uVar15 = puVar2[4];
    puVar1[4] = uVar15;
    uVar23 = puVar2[5];
    puVar1[6] = puVar2[6];
    puVar1[5] = uVar23;
    uVar23 = puVar2[7];
    uVar24 = puVar2[8];
    puVar1[7] = uVar23;
    puVar1[8] = uVar24;
    *(undefined2 *)(puVar1 + 9) = *(undefined2 *)(puVar2 + 9);
    *(undefined1 *)((long)puVar1 + 0x4a) = *(undefined1 *)((long)puVar2 + 0x4a);
    uVar24 = puVar2[0xb];
    puVar1[10] = puVar2[10];
    puVar1[0xb] = uVar24;
    uVar14 = puVar2[0xc];
    puVar1[0xc] = uVar14;
    *(undefined1 *)(puVar1 + 0xd) = *(undefined1 *)(puVar2 + 0xd);
    uVar28 = puVar2[0xe];
    puVar1[0xf] = puVar2[0xf];
    puVar1[0xe] = uVar28;
    *(undefined1 *)(puVar1 + 0x10) = *(undefined1 *)(puVar2 + 0x10);
    uVar28 = puVar2[0x12];
    puVar1[0x11] = puVar2[0x11];
    puVar1[0x12] = uVar28;
    uVar27 = puVar2[0x14];
    puVar1[0x13] = puVar2[0x13];
    puVar1[0x14] = uVar27;
    uVar26 = puVar2[0x16];
    puVar1[0x15] = puVar2[0x15];
    puVar1[0x16] = uVar26;
    uVar4 = puVar2[0x18];
    puVar1[0x17] = puVar2[0x17];
    puVar1[0x18] = uVar4;
    uVar5 = puVar2[0x1a];
    puVar1[0x19] = puVar2[0x19];
    puVar1[0x1a] = uVar5;
    uVar29 = puVar2[0x1b];
    puVar1[0x1c] = puVar2[0x1c];
    puVar1[0x1b] = uVar29;
    uVar25 = puVar2[0x1d];
    puVar1[0x1d] = uVar25;
    *(undefined1 *)(puVar1 + 0x1e) = *(undefined1 *)(puVar2 + 0x1e);
    *(undefined1 *)((long)puVar1 + 0xf1) = *(undefined1 *)((long)puVar2 + 0xf1);
    *(undefined1 *)((long)puVar1 + 0xf2) = *(undefined1 *)((long)puVar2 + 0xf2);
    uVar29 = puVar2[0x20];
    puVar1[0x1f] = puVar2[0x1f];
    puVar1[0x20] = uVar29;
    uVar6 = puVar2[0x22];
    puVar1[0x21] = puVar2[0x21];
    puVar1[0x22] = uVar6;
    uVar7 = puVar2[0x24];
    puVar1[0x23] = puVar2[0x23];
    puVar1[0x24] = uVar7;
    uVar8 = puVar2[0x26];
    puVar1[0x25] = puVar2[0x25];
    puVar1[0x26] = uVar8;
    uVar19 = puVar2[0x27];
    puVar1[0x27] = uVar19;
    uVar30 = puVar2[0x28];
    puVar1[0x29] = puVar2[0x29];
    puVar1[0x28] = uVar30;
    uVar30 = puVar2[0x2b];
    puVar1[0x2a] = puVar2[0x2a];
    puVar1[0x2b] = uVar30;
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar15);
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar24);
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRetain(uVar28);
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar26);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar25);
    _swift_bridgeObjectRetain(uVar29);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar19);
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x6c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x6c));
  uVar20 = puVar2[1];
  if (uVar20 >> 0x3c < 0xf) {
    uVar22 = *puVar2;
    func_0x00010006c00c(uVar22,uVar20);
    *puVar1 = uVar22;
    puVar1[1] = uVar20;
  }
  else {
    uVar22 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar22;
  }
  iVar9 = *(int *)(param_3 + 0x74);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x70)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x70));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
  uVar22 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar22;
  iVar9 = *(int *)(param_3 + 0x7c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x78));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x78));
  uVar22 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar22;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
  uVar23 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar23;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x80));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x80));
  uVar20 = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar22);
  _swift_bridgeObjectRetain(uVar23);
  if (uVar20 >> 0x3c < 0xf) {
    uVar22 = *puVar2;
    func_0x00010006c00c(uVar22,uVar20);
    *puVar1 = uVar22;
    puVar1[1] = uVar20;
  }
  else {
    uVar22 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar22;
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x84));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x84));
  lVar18 = 0;
  func_0x000100b91fbc();
  lVar16 = *(long *)(lVar18 + -8);
  puVar11 = puVar2;
  (**(code **)(lVar16 + 0x30))(puVar2,1,lVar18);
  if ((int)puVar11 == 0) {
    uVar22 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar22;
    uVar22 = puVar2[2];
    uVar24 = puVar2[5];
    uVar23 = puVar2[4];
    puVar1[3] = puVar2[3];
    puVar1[2] = uVar22;
    puVar1[5] = uVar24;
    puVar1[4] = uVar23;
    uVar22 = puVar2[6];
    uVar23 = puVar2[7];
    puVar1[6] = uVar22;
    puVar1[7] = uVar23;
    uVar23 = puVar2[8];
    puVar1[8] = uVar23;
    lVar17 = (long)*(int *)(lVar18 + 0x28);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar23);
    lVar12 = (long)puVar2 + lVar17;
    (*pcVar21)(lVar12,1,lVar10);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar13 + 0x10))((long)puVar1 + lVar17,(long)puVar2 + lVar17,lVar10);
      (**(code **)(lVar13 + 0x38))((long)puVar1 + lVar17,0,1,lVar10);
    }
    else {
      lVar12 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar17,(long)puVar2 + lVar17,
              *(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    puVar11 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x2c));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x2c));
    uVar22 = puVar3[1];
    *puVar11 = *puVar3;
    puVar11[1] = uVar22;
    puVar11 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x30));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x30));
    uVar22 = puVar3[1];
    *puVar11 = *puVar3;
    puVar11[1] = uVar22;
    lVar17 = (long)*(int *)(lVar18 + 0x34);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar22);
    lVar12 = (long)puVar2 + lVar17;
    (*pcVar21)(lVar12,1,lVar10);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar13 + 0x10))((long)puVar1 + lVar17,(long)puVar2 + lVar17,lVar10);
      (**(code **)(lVar13 + 0x38))((long)puVar1 + lVar17,0,1,lVar10);
    }
    else {
      lVar10 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar17,(long)puVar2 + lVar17,
              *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    puVar11 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x38));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x38));
    uVar22 = puVar3[1];
    *puVar11 = *puVar3;
    puVar11[1] = uVar22;
    puVar11 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x3c));
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x3c));
    uVar22 = puVar2[1];
    *puVar11 = *puVar2;
    puVar11[1] = uVar22;
    pcVar21 = *(code **)(lVar16 + 0x38);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar22);
    (*pcVar21)(puVar1,0,1,lVar18);
  }
  else {
    lVar18 = 0x112db39a8;
    func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x88));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x88));
  lVar18 = puVar2[1];
  if (lVar18 == 0) {
    uVar22 = puVar2[0x10];
    uVar24 = puVar2[0x13];
    uVar23 = puVar2[0x12];
    puVar1[0x11] = puVar2[0x11];
    puVar1[0x10] = uVar22;
    puVar1[0x13] = uVar24;
    puVar1[0x12] = uVar23;
    *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
    uVar22 = puVar2[8];
    uVar24 = puVar2[0xb];
    uVar23 = puVar2[10];
    puVar1[9] = puVar2[9];
    puVar1[8] = uVar22;
    puVar1[0xb] = uVar24;
    puVar1[10] = uVar23;
    uVar24 = puVar2[0xc];
    uVar23 = puVar2[0xf];
    uVar22 = puVar2[0xe];
    puVar1[0xd] = puVar2[0xd];
    puVar1[0xc] = uVar24;
    puVar1[0xf] = uVar23;
    puVar1[0xe] = uVar22;
    uVar22 = *puVar2;
    uVar24 = puVar2[3];
    uVar23 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar22;
    puVar1[3] = uVar24;
    puVar1[2] = uVar23;
    uVar24 = puVar2[4];
    uVar23 = puVar2[7];
    uVar22 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar24;
    puVar1[7] = uVar23;
    puVar1[6] = uVar22;
  }
  else {
    *puVar1 = *puVar2;
    puVar1[1] = lVar18;
    lVar18 = puVar2[8];
    _swift_bridgeObjectRetain();
    if (lVar18 == 1) {
      uVar22 = puVar2[2];
      uVar24 = puVar2[5];
      uVar23 = puVar2[4];
      puVar1[3] = puVar2[3];
      puVar1[2] = uVar22;
      puVar1[5] = uVar24;
      puVar1[4] = uVar23;
      uVar22 = puVar2[6];
      puVar1[7] = puVar2[7];
      puVar1[6] = uVar22;
      puVar1[8] = puVar2[8];
    }
    else {
      lVar10 = puVar2[4];
      if (lVar10 == 1) {
        uVar22 = puVar2[2];
        uVar24 = puVar2[5];
        uVar23 = puVar2[4];
        puVar1[3] = puVar2[3];
        puVar1[2] = uVar22;
        puVar1[5] = uVar24;
        puVar1[4] = uVar23;
        puVar1[6] = puVar2[6];
      }
      else {
        uVar22 = puVar2[2];
        puVar1[3] = puVar2[3];
        puVar1[2] = uVar22;
        uVar22 = puVar2[5];
        uVar23 = puVar2[6];
        puVar1[4] = lVar10;
        puVar1[5] = uVar22;
        puVar1[6] = uVar23;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar23);
      }
      puVar1[7] = puVar2[7];
      puVar1[8] = lVar18;
      _swift_bridgeObjectRetain(lVar18);
    }
    lVar18 = puVar2[0xf];
    if (lVar18 == 1) {
      uVar22 = puVar2[9];
      puVar1[10] = puVar2[10];
      puVar1[9] = uVar22;
      uVar22 = puVar2[0xb];
      puVar1[0xc] = puVar2[0xc];
      puVar1[0xb] = uVar22;
      uVar22 = puVar2[0xd];
      puVar1[0xe] = puVar2[0xe];
      puVar1[0xd] = uVar22;
      puVar1[0xf] = puVar2[0xf];
    }
    else {
      lVar10 = puVar2[0xb];
      if (lVar10 == 1) {
        uVar22 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar22;
        uVar22 = puVar2[0xb];
        puVar1[0xc] = puVar2[0xc];
        puVar1[0xb] = uVar22;
        puVar1[0xd] = puVar2[0xd];
      }
      else {
        uVar22 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar22;
        uVar22 = puVar2[0xc];
        uVar23 = puVar2[0xd];
        puVar1[0xb] = lVar10;
        puVar1[0xc] = uVar22;
        puVar1[0xd] = uVar23;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar23);
      }
      puVar1[0xe] = puVar2[0xe];
      puVar1[0xf] = lVar18;
      _swift_bridgeObjectRetain(lVar18);
    }
    *(undefined2 *)(puVar1 + 0x10) = *(undefined2 *)(puVar2 + 0x10);
    uVar22 = puVar2[0x11];
    puVar1[0x12] = puVar2[0x12];
    puVar1[0x11] = uVar22;
    puVar1[0x13] = puVar2[0x13];
    *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
    _swift_bridgeObjectRetain();
  }
  iVar9 = *(int *)(param_3 + 0x90);
  *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x8c)) =
       *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x8c));
  *(undefined1 *)((long)param_1 + (long)iVar9) = *(undefined1 *)((long)param_2 + (long)iVar9);
  iVar9 = *(int *)(param_3 + 0x98);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x94));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x94));
  uVar22 = *puVar2;
  uVar24 = puVar2[3];
  uVar23 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar22;
  puVar1[3] = uVar24;
  puVar1[2] = uVar23;
  uVar22 = puVar2[4];
  uVar24 = puVar2[7];
  uVar23 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar22;
  puVar1[7] = uVar24;
  puVar1[6] = uVar23;
  uVar24 = puVar2[0xc];
  uVar23 = puVar2[0xf];
  uVar22 = puVar2[0xe];
  puVar1[0xd] = puVar2[0xd];
  puVar1[0xc] = uVar24;
  puVar1[0xf] = uVar23;
  puVar1[0xe] = uVar22;
  uVar24 = puVar2[8];
  uVar23 = puVar2[0xb];
  uVar22 = puVar2[10];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar24;
  puVar1[0xb] = uVar23;
  puVar1[10] = uVar22;
  uVar22 = *(undefined8 *)((long)puVar2 + 0xa9);
  *(undefined8 *)((long)puVar1 + 0xb1) = *(undefined8 *)((long)puVar2 + 0xb1);
  *(undefined8 *)((long)puVar1 + 0xa9) = uVar22;
  uVar22 = puVar2[0x12];
  uVar24 = puVar2[0x15];
  uVar23 = puVar2[0x14];
  puVar1[0x13] = puVar2[0x13];
  puVar1[0x12] = uVar22;
  puVar1[0x15] = uVar24;
  puVar1[0x14] = uVar23;
  uVar22 = puVar2[0x10];
  puVar1[0x11] = puVar2[0x11];
  puVar1[0x10] = uVar22;
  *(undefined8 *)((long)param_1 + (long)iVar9) = *(undefined8 *)((long)param_2 + (long)iVar9);
  iVar9 = *(int *)(param_3 + 0xa0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x9c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x9c));
  *(undefined8 *)((long)param_1 + (long)iVar9) = *(undefined8 *)((long)param_2 + (long)iVar9);
  iVar9 = *(int *)(param_3 + 0xa8);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xa4)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xa4));
  *(undefined8 *)((long)param_1 + (long)iVar9) = *(undefined8 *)((long)param_2 + (long)iVar9);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xac));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xac));
  lVar18 = puVar2[1];
  if (lVar18 == 0) {
    uVar22 = *puVar2;
    uVar24 = puVar2[3];
    uVar23 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar22;
    puVar1[3] = uVar24;
    puVar1[2] = uVar23;
  }
  else {
    *puVar1 = *puVar2;
    puVar1[1] = lVar18;
    uVar22 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar22;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar22);
  }
  iVar9 = *(int *)(param_3 + 0xb4);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xb0)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xb0));
  *(undefined8 *)((long)param_1 + (long)iVar9) = *(undefined8 *)((long)param_2 + (long)iVar9);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xb8));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xb8));
  lVar18 = puVar2[1];
  if (lVar18 == 0) {
    uVar22 = puVar2[0x10];
    uVar24 = puVar2[0x13];
    uVar23 = puVar2[0x12];
    puVar1[0x11] = puVar2[0x11];
    puVar1[0x10] = uVar22;
    puVar1[0x13] = uVar24;
    puVar1[0x12] = uVar23;
    *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
    uVar22 = puVar2[8];
    uVar24 = puVar2[0xb];
    uVar23 = puVar2[10];
    puVar1[9] = puVar2[9];
    puVar1[8] = uVar22;
    puVar1[0xb] = uVar24;
    puVar1[10] = uVar23;
    uVar24 = puVar2[0xc];
    uVar23 = puVar2[0xf];
    uVar22 = puVar2[0xe];
    puVar1[0xd] = puVar2[0xd];
    puVar1[0xc] = uVar24;
    puVar1[0xf] = uVar23;
    puVar1[0xe] = uVar22;
    uVar22 = *puVar2;
    uVar24 = puVar2[3];
    uVar23 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar22;
    puVar1[3] = uVar24;
    puVar1[2] = uVar23;
    uVar24 = puVar2[4];
    uVar23 = puVar2[7];
    uVar22 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar24;
    puVar1[7] = uVar23;
    puVar1[6] = uVar22;
  }
  else {
    *puVar1 = *puVar2;
    puVar1[1] = lVar18;
    lVar18 = puVar2[8];
    _swift_bridgeObjectRetain();
    if (lVar18 == 1) {
      uVar22 = puVar2[2];
      uVar24 = puVar2[5];
      uVar23 = puVar2[4];
      puVar1[3] = puVar2[3];
      puVar1[2] = uVar22;
      puVar1[5] = uVar24;
      puVar1[4] = uVar23;
      uVar22 = puVar2[6];
      puVar1[7] = puVar2[7];
      puVar1[6] = uVar22;
      puVar1[8] = puVar2[8];
    }
    else {
      lVar10 = puVar2[4];
      if (lVar10 == 1) {
        uVar22 = puVar2[2];
        uVar24 = puVar2[5];
        uVar23 = puVar2[4];
        puVar1[3] = puVar2[3];
        puVar1[2] = uVar22;
        puVar1[5] = uVar24;
        puVar1[4] = uVar23;
        puVar1[6] = puVar2[6];
      }
      else {
        uVar22 = puVar2[2];
        puVar1[3] = puVar2[3];
        puVar1[2] = uVar22;
        uVar22 = puVar2[5];
        uVar23 = puVar2[6];
        puVar1[4] = lVar10;
        puVar1[5] = uVar22;
        puVar1[6] = uVar23;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar23);
      }
      puVar1[7] = puVar2[7];
      puVar1[8] = lVar18;
      _swift_bridgeObjectRetain(lVar18);
    }
    lVar18 = puVar2[0xf];
    if (lVar18 == 1) {
      uVar22 = puVar2[9];
      puVar1[10] = puVar2[10];
      puVar1[9] = uVar22;
      uVar22 = puVar2[0xb];
      puVar1[0xc] = puVar2[0xc];
      puVar1[0xb] = uVar22;
      uVar22 = puVar2[0xd];
      puVar1[0xe] = puVar2[0xe];
      puVar1[0xd] = uVar22;
      puVar1[0xf] = puVar2[0xf];
    }
    else {
      lVar10 = puVar2[0xb];
      if (lVar10 == 1) {
        uVar22 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar22;
        uVar22 = puVar2[0xb];
        puVar1[0xc] = puVar2[0xc];
        puVar1[0xb] = uVar22;
        puVar1[0xd] = puVar2[0xd];
      }
      else {
        uVar22 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar22;
        uVar22 = puVar2[0xc];
        uVar23 = puVar2[0xd];
        puVar1[0xb] = lVar10;
        puVar1[0xc] = uVar22;
        puVar1[0xd] = uVar23;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar23);
      }
      puVar1[0xe] = puVar2[0xe];
      puVar1[0xf] = lVar18;
      _swift_bridgeObjectRetain(lVar18);
    }
    *(undefined2 *)(puVar1 + 0x10) = *(undefined2 *)(puVar2 + 0x10);
    uVar22 = puVar2[0x11];
    puVar1[0x12] = puVar2[0x12];
    puVar1[0x11] = uVar22;
    puVar1[0x13] = puVar2[0x13];
    *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
    _swift_bridgeObjectRetain();
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xbc));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xbc));
  lVar18 = puVar2[1];
  if (lVar18 == 0) {
    uVar22 = puVar2[0x10];
    uVar24 = puVar2[0x13];
    uVar23 = puVar2[0x12];
    puVar1[0x11] = puVar2[0x11];
    puVar1[0x10] = uVar22;
    puVar1[0x13] = uVar24;
    puVar1[0x12] = uVar23;
    *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
    uVar22 = puVar2[8];
    uVar24 = puVar2[0xb];
    uVar23 = puVar2[10];
    puVar1[9] = puVar2[9];
    puVar1[8] = uVar22;
    puVar1[0xb] = uVar24;
    puVar1[10] = uVar23;
    uVar24 = puVar2[0xc];
    uVar23 = puVar2[0xf];
    uVar22 = puVar2[0xe];
    puVar1[0xd] = puVar2[0xd];
    puVar1[0xc] = uVar24;
    puVar1[0xf] = uVar23;
    puVar1[0xe] = uVar22;
    uVar22 = *puVar2;
    uVar24 = puVar2[3];
    uVar23 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar22;
    puVar1[3] = uVar24;
    puVar1[2] = uVar23;
    uVar24 = puVar2[4];
    uVar23 = puVar2[7];
    uVar22 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar24;
    puVar1[7] = uVar23;
    puVar1[6] = uVar22;
  }
  else {
    *puVar1 = *puVar2;
    puVar1[1] = lVar18;
    lVar18 = puVar2[8];
    _swift_bridgeObjectRetain();
    if (lVar18 == 1) {
      uVar22 = puVar2[2];
      uVar24 = puVar2[5];
      uVar23 = puVar2[4];
      puVar1[3] = puVar2[3];
      puVar1[2] = uVar22;
      puVar1[5] = uVar24;
      puVar1[4] = uVar23;
      uVar22 = puVar2[6];
      puVar1[7] = puVar2[7];
      puVar1[6] = uVar22;
      puVar1[8] = puVar2[8];
    }
    else {
      lVar10 = puVar2[4];
      if (lVar10 == 1) {
        uVar22 = puVar2[2];
        uVar24 = puVar2[5];
        uVar23 = puVar2[4];
        puVar1[3] = puVar2[3];
        puVar1[2] = uVar22;
        puVar1[5] = uVar24;
        puVar1[4] = uVar23;
        puVar1[6] = puVar2[6];
      }
      else {
        uVar22 = puVar2[2];
        puVar1[3] = puVar2[3];
        puVar1[2] = uVar22;
        uVar22 = puVar2[5];
        uVar23 = puVar2[6];
        puVar1[4] = lVar10;
        puVar1[5] = uVar22;
        puVar1[6] = uVar23;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar23);
      }
      puVar1[7] = puVar2[7];
      puVar1[8] = lVar18;
      _swift_bridgeObjectRetain(lVar18);
    }
    lVar18 = puVar2[0xf];
    if (lVar18 == 1) {
      uVar22 = puVar2[9];
      puVar1[10] = puVar2[10];
      puVar1[9] = uVar22;
      uVar22 = puVar2[0xb];
      puVar1[0xc] = puVar2[0xc];
      puVar1[0xb] = uVar22;
      uVar22 = puVar2[0xd];
      puVar1[0xe] = puVar2[0xe];
      puVar1[0xd] = uVar22;
      puVar1[0xf] = puVar2[0xf];
    }
    else {
      lVar10 = puVar2[0xb];
      if (lVar10 == 1) {
        uVar22 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar22;
        uVar22 = puVar2[0xb];
        puVar1[0xc] = puVar2[0xc];
        puVar1[0xb] = uVar22;
        puVar1[0xd] = puVar2[0xd];
      }
      else {
        uVar22 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar22;
        uVar22 = puVar2[0xc];
        uVar23 = puVar2[0xd];
        puVar1[0xb] = lVar10;
        puVar1[0xc] = uVar22;
        puVar1[0xd] = uVar23;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar23);
      }
      puVar1[0xe] = puVar2[0xe];
      puVar1[0xf] = lVar18;
      _swift_bridgeObjectRetain(lVar18);
    }
    *(undefined2 *)(puVar1 + 0x10) = *(undefined2 *)(puVar2 + 0x10);
    uVar22 = puVar2[0x11];
    puVar1[0x12] = puVar2[0x12];
    puVar1[0x11] = uVar22;
    puVar1[0x13] = puVar2[0x13];
    *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
    _swift_bridgeObjectRetain();
  }
  iVar9 = *(int *)(param_3 + 0xc4);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xc0)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xc0));
  *(undefined8 *)((long)param_1 + (long)iVar9) = *(undefined8 *)((long)param_2 + (long)iVar9);
  iVar9 = *(int *)(param_3 + 0xcc);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 200)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 200));
  *(undefined1 *)((long)param_1 + (long)iVar9) = *(undefined1 *)((long)param_2 + (long)iVar9);
  return param_1;
}



/* Entry: 1046d8bb0; end: 1046d8bc7;  */

void FUN_1046d8bb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1046d8bc8; end: 1046d8d83;  */

undefined8 FUN_1046d8bc8(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1046d8d84; end: 1046d8eb7;  */

void FUN_1046d8d84(undefined8 param_1,ulong param_2,char param_3,undefined8 param_4,char param_5)

{
  ulong uVar1;
  
  if (param_3 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((param_2 & 0x7fffffffffffffff) != 0) {
      uVar1 = param_2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  if (param_5 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_4);
  }
  return;
}



/* Entry: 1046d8eb8; end: 1046d8edf;  */

void FUN_1046d8eb8(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar3 = *unaff_x20;
  uVar4 = unaff_x20[2];
  uVar1 = unaff_x20[3];
  uVar2 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  if ((char)uVar2 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)uVar1 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046d8ee0; end: 1046d8f3f;  */

void FUN_1046d8ee0(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_78 [72];
  
  uVar3 = *unaff_x20;
  uVar4 = unaff_x20[2];
  uVar1 = *(undefined1 *)(unaff_x20 + 3);
  uVar2 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  FUN_1046d8d84(auStack_78,uVar3,uVar2,uVar4,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046d8f40; end: 1046d8fe3;  */

undefined8 FUN_1046d8f40(double *param_1,double *param_2)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    if (*(char *)(param_2 + 1) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 1) == '\x01') {
      return 0;
    }
    if (*param_1 != *param_2) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    if (*(char *)(param_2 + 3) == '\x01') {
      return 1;
    }
  }
  else if ((*(char *)(param_2 + 3) != '\x01') && (param_1[2] == param_2[2])) {
    return 1;
  }
  return 0;
}



/* Entry: 1046d8fe4; end: 1046d9023;  */

void FUN_1046d8fe4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308db88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2f350;
  _swift_getWitnessTable(&UNK_10dd2f350,&UNK_11079b960);
  puRam000000011308db88 = puVar1;
  return;
}



/* Entry: 1046d9024; end: 1046d904f;  */

long FUN_1046d9024(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1046d9050; end: 1046d90af;  */

int FUN_1046d9050(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1046d90b0; end: 1046d90e7;  */

void FUN_1046d90b0(undefined8 param_1)

{
  if (lRam000000011308dbf8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e819ab8);
  return;
}



/* Entry: 1046d90e8; end: 1046d916f;  */

undefined8 FUN_1046d90e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112db3a00;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1046d9170; end: 1046d9183;  */

void FUN_1046d9170(undefined8 param_1,long param_2)

{
  if (param_2 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 1046d9184; end: 1046d9553;  */

void FUN_1046d9184(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 *param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 *param_23,undefined8 *param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined1 param_30,undefined4 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 *param_37,undefined8 param_38,undefined8 param_39,undefined8 *param_40,
                  undefined1 param_41,undefined4 param_42,undefined8 param_43,undefined1 param_44,
                  undefined4 param_45,undefined8 param_46,undefined8 param_47)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
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
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  lVar5 = 0;
  FUN_1046d90b0();
  iVar3 = *(int *)(lVar5 + 0x28);
  lVar6 = 0;
  FUN_10477ea9c();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))((long)param_1 + (long)iVar3,1,1,lVar6);
  iVar4 = *(int *)(lVar5 + 0x34);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x50));
  func_0x000101541034(&uStack_110);
  puVar1[0xd] = uStack_a8;
  puVar1[0xc] = uStack_b0;
  puVar1[0xf] = uStack_98;
  puVar1[0xe] = uStack_a0;
  puVar1[0x11] = uStack_88;
  puVar1[0x10] = uStack_90;
  *(undefined1 *)(puVar1 + 0x12) = uStack_80;
  puVar1[5] = uStack_e8;
  puVar1[4] = uStack_f0;
  puVar1[7] = uStack_d8;
  puVar1[6] = uStack_e0;
  puVar1[9] = uStack_c8;
  puVar1[8] = uStack_d0;
  puVar1[0xb] = uStack_b8;
  puVar1[10] = uStack_c0;
  puVar1[1] = uStack_108;
  *puVar1 = uStack_110;
  puVar1[3] = uStack_f8;
  puVar1[2] = uStack_100;
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  param_1[3] = param_6;
  param_1[4] = param_7;
  param_1[5] = param_8;
  param_1[6] = param_9;
  param_1[7] = param_10;
  param_1[8] = param_11;
  param_1[9] = param_12;
  FUN_1046d90e8(param_13,(long)param_1 + (long)iVar3);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x2c)) = (undefined1)param_14;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x30)) = param_14._1_1_;
  *(undefined8 *)((long)param_1 + (long)iVar4) = param_16;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x38));
  *puVar2 = param_17;
  puVar2[1] = param_18;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x3c)) = param_2;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x40)) = param_19;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x44));
  uVar8 = param_20[1];
  uVar7 = *param_20;
  uVar10 = param_20[3];
  uVar9 = param_20[2];
  puVar2[4] = param_20[4];
  puVar2[1] = uVar8;
  *puVar2 = uVar7;
  puVar2[3] = uVar10;
  puVar2[2] = uVar9;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x48));
  *puVar2 = param_21;
  puVar2[1] = param_22;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x4c));
  *(undefined1 *)(puVar2 + 0x12) = *(undefined1 *)(param_23 + 0x12);
  uVar7 = *param_23;
  uVar9 = param_23[3];
  uVar8 = param_23[2];
  uVar13 = param_23[9];
  uVar12 = param_23[8];
  uVar11 = param_23[0xb];
  uVar10 = param_23[10];
  uVar17 = param_23[5];
  uVar16 = param_23[4];
  uVar15 = param_23[7];
  uVar14 = param_23[6];
  uVar21 = param_23[0xf];
  uVar20 = param_23[0xe];
  uVar19 = param_23[0x11];
  uVar18 = param_23[0x10];
  uVar23 = param_23[0xd];
  uVar22 = param_23[0xc];
  puVar2[1] = param_23[1];
  *puVar2 = uVar7;
  puVar2[3] = uVar9;
  puVar2[2] = uVar8;
  puVar2[9] = uVar13;
  puVar2[8] = uVar12;
  puVar2[0xb] = uVar11;
  puVar2[10] = uVar10;
  puVar2[5] = uVar17;
  puVar2[4] = uVar16;
  puVar2[7] = uVar15;
  puVar2[6] = uVar14;
  puVar2[0xf] = uVar21;
  puVar2[0xe] = uVar20;
  puVar2[0x11] = uVar19;
  puVar2[0x10] = uVar18;
  puVar2[0xd] = uVar23;
  puVar2[0xc] = uVar22;
  *(undefined1 *)(puVar1 + 0x12) = *(undefined1 *)(param_24 + 0x12);
  uVar7 = *param_24;
  uVar9 = param_24[3];
  uVar8 = param_24[2];
  uVar13 = param_24[9];
  uVar12 = param_24[8];
  uVar11 = param_24[0xb];
  uVar10 = param_24[10];
  uVar17 = param_24[5];
  uVar16 = param_24[4];
  uVar15 = param_24[7];
  uVar14 = param_24[6];
  uVar21 = param_24[0xf];
  uVar20 = param_24[0xe];
  uVar19 = param_24[0x11];
  uVar18 = param_24[0x10];
  uVar23 = param_24[0xd];
  uVar22 = param_24[0xc];
  puVar1[1] = param_24[1];
  *puVar1 = uVar7;
  puVar1[3] = uVar9;
  puVar1[2] = uVar8;
  puVar1[9] = uVar13;
  puVar1[8] = uVar12;
  puVar1[0xb] = uVar11;
  puVar1[10] = uVar10;
  puVar1[5] = uVar17;
  puVar1[4] = uVar16;
  puVar1[7] = uVar15;
  puVar1[6] = uVar14;
  puVar1[0xf] = uVar21;
  puVar1[0xe] = uVar20;
  puVar1[0x11] = uVar19;
  puVar1[0x10] = uVar18;
  puVar1[0xd] = uVar23;
  puVar1[0xc] = uVar22;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x54));
  puVar1[2] = param_27;
  puVar1[3] = param_28;
  puVar1[1] = param_26;
  *puVar1 = param_25;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x58));
  *puVar1 = param_29;
  *(undefined1 *)(puVar1 + 1) = param_30;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x5c));
  *puVar1 = param_32;
  puVar1[1] = param_33;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x60));
  *puVar1 = param_34;
  puVar1[1] = param_35;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 100)) = param_36;
  uVar7 = param_37[4];
  uVar9 = param_37[7];
  uVar8 = param_37[6];
  uVar11 = *(undefined8 *)((long)param_37 + 0x42);
  uVar10 = *(undefined8 *)((long)param_37 + 0x3a);
  uVar15 = param_37[1];
  uVar14 = *param_37;
  uVar13 = param_37[3];
  uVar12 = param_37[2];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x68));
  puVar1[5] = param_37[5];
  puVar1[4] = uVar7;
  puVar1[7] = uVar9;
  puVar1[6] = uVar8;
  *(undefined8 *)((long)puVar1 + 0x42) = uVar11;
  *(undefined8 *)((long)puVar1 + 0x3a) = uVar10;
  puVar1[1] = uVar15;
  *puVar1 = uVar14;
  puVar1[3] = uVar13;
  puVar1[2] = uVar12;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x6c));
  *puVar1 = param_38;
  puVar1[1] = param_39;
  uVar7 = param_40[0x14];
  uVar9 = param_40[0x17];
  uVar8 = param_40[0x16];
  uVar11 = param_40[0x19];
  uVar10 = param_40[0x18];
  uVar13 = *(undefined8 *)((long)param_40 + 0xd1);
  uVar12 = *(undefined8 *)((long)param_40 + 0xc9);
  uVar15 = param_40[0xd];
  uVar14 = param_40[0xc];
  uVar17 = param_40[0xf];
  uVar16 = param_40[0xe];
  uVar19 = param_40[0x11];
  uVar18 = param_40[0x10];
  uVar21 = param_40[0x13];
  uVar20 = param_40[0x12];
  uVar23 = param_40[5];
  uVar22 = param_40[4];
  uVar25 = param_40[7];
  uVar24 = param_40[6];
  uVar27 = param_40[9];
  uVar26 = param_40[8];
  uVar29 = param_40[0xb];
  uVar28 = param_40[10];
  uVar31 = param_40[1];
  uVar30 = *param_40;
  uVar33 = param_40[3];
  uVar32 = param_40[2];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x70));
  puVar1[0x15] = param_40[0x15];
  puVar1[0x14] = uVar7;
  puVar1[0x17] = uVar9;
  puVar1[0x16] = uVar8;
  puVar1[0x19] = uVar11;
  puVar1[0x18] = uVar10;
  *(undefined8 *)((long)puVar1 + 0xd1) = uVar13;
  *(undefined8 *)((long)puVar1 + 0xc9) = uVar12;
  puVar1[0xd] = uVar15;
  puVar1[0xc] = uVar14;
  puVar1[0xf] = uVar17;
  puVar1[0xe] = uVar16;
  puVar1[0x11] = uVar19;
  puVar1[0x10] = uVar18;
  puVar1[0x13] = uVar21;
  puVar1[0x12] = uVar20;
  puVar1[5] = uVar23;
  puVar1[4] = uVar22;
  puVar1[7] = uVar25;
  puVar1[6] = uVar24;
  puVar1[9] = uVar27;
  puVar1[8] = uVar26;
  puVar1[0xb] = uVar29;
  puVar1[10] = uVar28;
  puVar1[1] = uVar31;
  *puVar1 = uVar30;
  puVar1[3] = uVar33;
  puVar1[2] = uVar32;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x74)) = param_41;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x78)) = param_43;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x7c)) = param_44;
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x80));
  *param_1 = param_46;
  param_1[1] = param_47;
  return;
}



/* Entry: 1046d9554; end: 1046d9557;  */

undefined8 FUN_1046d9554(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  code *pcVar24;
  long lVar25;
  undefined8 uVar26;
  ulong uVar27;
  long lVar28;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  uint uStack_644;
  undefined8 uStack_640;
  ulong uStack_638;
  undefined8 uStack_630;
  long lStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined1 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined1 uStack_4d8;
  undefined7 uStack_4d7;
  undefined1 uStack_4d0;
  undefined8 uStack_4cf;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 uStack_4a8;
  undefined7 uStack_4a7;
  undefined1 uStack_4a0;
  undefined8 uStack_49f;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 uStack_3a8;
  undefined7 uStack_3a7;
  undefined1 uStack_3a0;
  undefined8 uStack_39f;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 uStack_358;
  undefined7 uStack_357;
  undefined1 uStack_350;
  undefined8 uStack_34f;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined4 auStack_c0 [2];
  undefined8 uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined4 auStack_98 [2];
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar14 = 0;
  FUN_10477ea9c();
  lVar23 = *(long *)(lVar14 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar23 + 0x40));
  lVar20 = (long)&uStack_660 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar28 = 0x112db3a00;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar28 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar27 = lVar20 - extraout_x8_00;
  lVar28 = 0x11308dcb0;
  func_0x0001000285a8(0x11308dcb0,&UNK_10dd2f520);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar28 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar25 = uVar27 - extraout_x8_01;
  uVar19 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar19 != 0) {
      return 0;
    }
  }
  else {
    if (uVar19 == 0) {
      return 0;
    }
    uVar21 = *param_1;
    if (((uVar21 != *param_2) || (param_1[1] != uVar19)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar21 & 1) == 0)) {
      return 0;
    }
  }
  if ((int)param_1[2] != (int)param_2[2]) {
    return 0;
  }
  if ((int)param_1[3] != (int)param_2[3]) {
    return 0;
  }
  uVar19 = param_1[4];
  if (((uVar19 != param_2[4]) || (param_1[5] != param_2[5])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar19 & 1) == 0)) {
    return 0;
  }
  uVar19 = param_2[7];
  if (param_1[7] == 0) {
    if (uVar19 != 0) {
      return 0;
    }
  }
  else {
    if (uVar19 == 0) {
      return 0;
    }
    uVar21 = param_1[6];
    if (((uVar21 != param_2[6]) || (param_1[7] != uVar19)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar21 & 1) == 0)) {
      return 0;
    }
  }
  uVar19 = param_2[9];
  if (param_1[9] == 0) {
    if (uVar19 != 0) {
      return 0;
    }
  }
  else {
    if (uVar19 == 0) {
      return 0;
    }
    uVar21 = param_1[8];
    if (((uVar21 != param_2[8]) || (param_1[9] != uVar19)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar21 & 1) == 0)) {
      return 0;
    }
  }
  lVar15 = 0;
  FUN_1046d90b0();
  iVar13 = *(int *)(lVar15 + 0x28);
  lVar28 = (long)*(int *)(lVar28 + 0x30);
  lStack_628 = lVar15;
  func_0x000104707758((long)param_1 + (long)iVar13,lVar25,0x112db3a00,&UNK_10d95dff0);
  func_0x000104707758((long)param_2 + (long)iVar13,lVar25 + lVar28,0x112db3a00,&UNK_10d95dff0);
  pcVar24 = *(code **)(lVar23 + 0x30);
  lVar23 = lVar25;
  (*pcVar24)(lVar25,1,lVar14);
  if ((int)lVar23 == 1) {
    lVar28 = lVar25 + lVar28;
    (*pcVar24)(lVar28,1,lVar14);
    if ((int)lVar28 != 1) {
LAB_1046dc8b0:
      func_0x00010470781c(lVar25,0x11308dcb0,&UNK_10dd2f520);
      return 0;
    }
    func_0x00010470781c(lVar25,0x112db3a00,&UNK_10d95dff0);
  }
  else {
    func_0x000104707758(lVar25,uVar27,0x112db3a00,&UNK_10d95dff0);
    lVar23 = lVar25 + lVar28;
    (*pcVar24)(lVar23,1,lVar14);
    if ((int)lVar23 == 1) {
      func_0x0001047077e0(uVar27,FUN_10477ea9c);
      goto LAB_1046dc8b0;
    }
    func_0x0001047076d0(lVar25 + lVar28,lVar20,FUN_10477ea9c);
    uVar19 = uVar27;
    FUN_10477ede0(uVar27,lVar20);
    func_0x0001047077e0(lVar20,FUN_10477ea9c);
    func_0x0001047077e0(uVar27,FUN_10477ea9c);
    func_0x00010470781c(lVar25,0x112db3a00,&UNK_10d95dff0);
    if ((uVar19 & 1) == 0) {
      return 0;
    }
  }
  lVar28 = lStack_628;
  if (*(char *)((long)param_1 + (long)*(int *)(lStack_628 + 0x2c)) !=
      *(char *)((long)param_2 + (long)*(int *)(lStack_628 + 0x2c))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(lStack_628 + 0x30)) !=
      *(char *)((long)param_2 + (long)*(int *)(lStack_628 + 0x30))) {
    return 0;
  }
  uVar19 = *(ulong *)((long)param_1 + (long)*(int *)(lStack_628 + 0x34));
  lVar14 = *(long *)((long)param_2 + (long)*(int *)(lStack_628 + 0x34));
  if (uVar19 == 0) {
    if (lVar14 != 0) {
      return 0;
    }
  }
  else {
    if (lVar14 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar14);
    uVar27 = uVar19;
    _swift_bridgeObjectRetain();
    FUN_10470aeb8();
    _swift_bridgeObjectRelease(uVar19);
    _swift_bridgeObjectRelease(lVar14);
    if ((uVar27 & 1) == 0) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar28 + 0x38));
  uVar19 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar28 + 0x38));
  uVar27 = puVar2[1];
  if (uVar19 == 0) {
    if (uVar27 != 0) {
      return 0;
    }
  }
  else {
    if (uVar27 == 0) {
      return 0;
    }
    uVar21 = *puVar1;
    if (((uVar21 != *puVar2) || (uVar19 != uVar27)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar21 & 1) == 0)) {
      return 0;
    }
  }
  if (*(double *)((long)param_1 + (long)*(int *)(lVar28 + 0x3c)) !=
      *(double *)((long)param_2 + (long)*(int *)(lVar28 + 0x3c))) {
    return 0;
  }
  if (*(int *)((long)param_1 + (long)*(int *)(lVar28 + 0x40)) !=
      *(int *)((long)param_2 + (long)*(int *)(lVar28 + 0x40))) {
    return 0;
  }
  puVar17 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar28 + 0x44));
  uVar6 = *puVar17;
  uVar8 = puVar17[1];
  lVar14 = puVar17[2];
  uVar19 = puVar17[3];
  uVar22 = puVar17[4];
  puVar17 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar28 + 0x44));
  uVar7 = *puVar17;
  uVar9 = puVar17[1];
  lVar28 = puVar17[2];
  uVar10 = puVar17[3];
  uVar26 = puVar17[4];
  uStack_638 = uVar19;
  uStack_630 = uVar22;
  if (lVar14 == 1) {
    if (lVar28 != 1) {
LAB_1046dca78:
      uStack_640 = uVar9;
      func_0x00010470785c(uVar7,uVar9,lVar28,uVar10,uVar26);
      uVar9 = uStack_630;
      uVar19 = uStack_638;
      func_0x00010470785c(uVar6,uVar8,lVar14,uStack_638,uStack_630);
      func_0x000104707890(uVar6,uVar8,lVar14,uVar19,uVar9);
      func_0x000104707890(uVar7,uStack_640,lVar28,uVar10,uVar26);
      return 0;
    }
  }
  else {
    if (lVar28 == 1) goto LAB_1046dca78;
    auStack_98[0] = (undefined4)uVar7;
    auStack_c0[0] = (undefined4)uVar6;
    puVar16 = auStack_c0;
    uStack_660 = uVar26;
    uStack_658 = uVar7;
    uStack_650 = uVar10;
    uStack_b8 = uVar8;
    lStack_b0 = lVar14;
    uStack_a8 = uVar19;
    uStack_a0 = uVar22;
    uStack_90 = uVar9;
    lStack_88 = lVar28;
    uStack_80 = uVar10;
    uStack_78 = uVar26;
    FUN_1047508c0(puVar16,auStack_98);
    uVar7 = uStack_660;
    uStack_644 = (uint)puVar16;
    func_0x00010470785c(uStack_658,uVar9,lVar28,uStack_650,uStack_660);
    func_0x00010470785c(uVar6,uVar8,lVar14,uVar19,uVar22);
    _swift_bridgeObjectRelease(lVar28);
    _swift_bridgeObjectRelease(uVar7);
    func_0x000104707890(uVar6,uVar8,lVar14,uVar19,uVar22);
    if ((uStack_644 & 1) == 0) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_628 + 0x48));
  uVar19 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_628 + 0x48));
  uVar27 = puVar2[1];
  if (uVar19 == 0) {
    if (uVar27 != 0) {
      return 0;
    }
  }
  else {
    if (uVar27 == 0) {
      return 0;
    }
    uVar21 = *puVar1;
    if (((uVar21 != *puVar2) || (uVar19 != uVar27)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar21 & 1) == 0)) {
      return 0;
    }
  }
  puVar17 = (undefined8 *)((long)param_1 + (long)*(int *)(lStack_628 + 0x4c));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lStack_628 + 0x4c));
  iVar13 = (int)&uStack_588;
  uStack_5b8 = puVar17[0xd];
  uStack_5c0 = puVar17[0xc];
  uStack_5a8 = puVar17[0xf];
  uStack_5b0 = puVar17[0xe];
  uStack_598 = puVar17[0x11];
  uStack_5a0 = puVar17[0x10];
  uStack_5f8 = puVar17[5];
  uStack_600 = puVar17[4];
  uStack_5e8 = puVar17[7];
  uStack_5f0 = puVar17[6];
  uStack_5d8 = puVar17[9];
  uStack_5e0 = puVar17[8];
  uStack_5c8 = puVar17[0xb];
  uStack_5d0 = puVar17[10];
  uStack_618 = puVar17[1];
  uStack_620 = *puVar17;
  uStack_608 = puVar17[3];
  uStack_610 = puVar17[2];
  uStack_510 = puVar3[0xf];
  uStack_518 = puVar3[0xe];
  uStack_500 = puVar3[0x11];
  uStack_508 = puVar3[0x10];
  uStack_520 = puVar3[0xd];
  uStack_528 = puVar3[0xc];
  uStack_560 = puVar3[5];
  uStack_568 = puVar3[4];
  uStack_550 = puVar3[7];
  uStack_558 = puVar3[6];
  uStack_540 = puVar3[9];
  uStack_548 = puVar3[8];
  uStack_530 = puVar3[0xb];
  uStack_538 = puVar3[10];
  uStack_580 = puVar3[1];
  uStack_588 = *puVar3;
  uStack_570 = puVar3[3];
  uStack_578 = puVar3[2];
  uStack_590 = CONCAT71(uStack_590._1_7_,*(undefined1 *)(puVar17 + 0x12));
  uStack_4f8 = *(undefined1 *)(puVar3 + 0x12);
  iVar12 = (int)&uStack_620;
  func_0x000103b72c50();
  if (iVar12 == 1) {
    func_0x000103b72c50();
    if (iVar13 != 1) {
      return 0;
    }
  }
  else {
    uStack_428 = uStack_5b8;
    uStack_430 = uStack_5c0;
    uStack_418 = uStack_5a8;
    uStack_420 = uStack_5b0;
    uStack_408 = uStack_598;
    uStack_410 = uStack_5a0;
    uStack_400 = CONCAT71(uStack_400._1_7_,(undefined1)uStack_590);
    uStack_468 = uStack_5f8;
    uStack_470 = uStack_600;
    uStack_458 = uStack_5e8;
    uStack_460 = uStack_5f0;
    uStack_448 = uStack_5d8;
    uStack_450 = uStack_5e0;
    uStack_438 = uStack_5c8;
    uStack_440 = uStack_5d0;
    uStack_488 = uStack_618;
    uStack_490 = uStack_620;
    uStack_478 = uStack_608;
    uStack_480 = uStack_610;
    func_0x000103b72c50();
    if (iVar13 == 1) {
      return 0;
    }
    uStack_f8 = uStack_520;
    uStack_100 = uStack_528;
    uStack_e8 = uStack_510;
    uStack_f0 = uStack_518;
    uStack_d8 = uStack_500;
    uStack_e0 = uStack_508;
    uStack_d0 = uStack_4f8;
    uStack_138 = uStack_560;
    uStack_140 = uStack_568;
    uStack_128 = uStack_550;
    uStack_130 = uStack_558;
    uStack_118 = uStack_540;
    uStack_120 = uStack_548;
    uStack_108 = uStack_530;
    uStack_110 = uStack_538;
    uStack_158 = uStack_580;
    uStack_160 = uStack_588;
    uStack_148 = uStack_570;
    uStack_150 = uStack_578;
    uStack_198 = uStack_428;
    uStack_1a0 = uStack_430;
    uStack_188 = uStack_418;
    uStack_190 = uStack_420;
    uStack_178 = uStack_408;
    uStack_180 = uStack_410;
    uStack_170 = (undefined1)uStack_400;
    uStack_1d8 = uStack_468;
    uStack_1e0 = uStack_470;
    uStack_1c8 = uStack_458;
    uStack_1d0 = uStack_460;
    uStack_1b8 = uStack_448;
    uStack_1c0 = uStack_450;
    uStack_1a8 = uStack_438;
    uStack_1b0 = uStack_440;
    uStack_1f8 = uStack_488;
    uStack_200 = uStack_490;
    uStack_1e8 = uStack_478;
    uStack_1f0 = uStack_480;
    puVar17 = &uStack_200;
    FUN_1047a4194(puVar17,&uStack_160);
    if (((ulong)puVar17 & 1) == 0) {
      return 0;
    }
  }
  puVar17 = (undefined8 *)((long)param_1 + (long)*(int *)(lStack_628 + 0x50));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lStack_628 + 0x50));
  iVar13 = (int)&uStack_588;
  uStack_5b8 = puVar17[0xd];
  uStack_5c0 = puVar17[0xc];
  uStack_5a8 = puVar17[0xf];
  uStack_5b0 = puVar17[0xe];
  uStack_598 = puVar17[0x11];
  uStack_5a0 = puVar17[0x10];
  uStack_5f8 = puVar17[5];
  uStack_600 = puVar17[4];
  uStack_5e8 = puVar17[7];
  uStack_5f0 = puVar17[6];
  uStack_5d8 = puVar17[9];
  uStack_5e0 = puVar17[8];
  uStack_5c8 = puVar17[0xb];
  uStack_5d0 = puVar17[10];
  uStack_618 = puVar17[1];
  uStack_620 = *puVar17;
  uStack_608 = puVar17[3];
  uStack_610 = puVar17[2];
  uStack_510 = puVar3[0xf];
  uStack_518 = puVar3[0xe];
  uStack_500 = puVar3[0x11];
  uStack_508 = puVar3[0x10];
  uStack_520 = puVar3[0xd];
  uStack_528 = puVar3[0xc];
  uStack_560 = puVar3[5];
  uStack_568 = puVar3[4];
  uStack_550 = puVar3[7];
  uStack_558 = puVar3[6];
  uStack_540 = puVar3[9];
  uStack_548 = puVar3[8];
  uStack_530 = puVar3[0xb];
  uStack_538 = puVar3[10];
  uStack_580 = puVar3[1];
  uStack_588 = *puVar3;
  uStack_570 = puVar3[3];
  uStack_578 = puVar3[2];
  uStack_590 = CONCAT71(uStack_590._1_7_,*(undefined1 *)(puVar17 + 0x12));
  uStack_4f8 = *(undefined1 *)(puVar3 + 0x12);
  iVar12 = (int)&uStack_620;
  func_0x000103b72c50();
  if (iVar12 == 1) {
    func_0x000103b72c50();
    if (iVar13 != 1) {
      return 0;
    }
  }
  else {
    uStack_428 = uStack_5b8;
    uStack_430 = uStack_5c0;
    uStack_418 = uStack_5a8;
    uStack_420 = uStack_5b0;
    uStack_408 = uStack_598;
    uStack_410 = uStack_5a0;
    uStack_400 = CONCAT71(uStack_400._1_7_,(undefined1)uStack_590);
    uStack_468 = uStack_5f8;
    uStack_470 = uStack_600;
    uStack_458 = uStack_5e8;
    uStack_460 = uStack_5f0;
    uStack_448 = uStack_5d8;
    uStack_450 = uStack_5e0;
    uStack_438 = uStack_5c8;
    uStack_440 = uStack_5d0;
    uStack_488 = uStack_618;
    uStack_490 = uStack_620;
    uStack_478 = uStack_608;
    uStack_480 = uStack_610;
    func_0x000103b72c50();
    if (iVar13 == 1) {
      return 0;
    }
    uStack_238 = uStack_520;
    uStack_240 = uStack_528;
    uStack_228 = uStack_510;
    uStack_230 = uStack_518;
    uStack_218 = uStack_500;
    uStack_220 = uStack_508;
    uStack_210 = uStack_4f8;
    uStack_278 = uStack_560;
    uStack_280 = uStack_568;
    uStack_268 = uStack_550;
    uStack_270 = uStack_558;
    uStack_258 = uStack_540;
    uStack_260 = uStack_548;
    uStack_248 = uStack_530;
    uStack_250 = uStack_538;
    uStack_298 = uStack_580;
    uStack_2a0 = uStack_588;
    uStack_288 = uStack_570;
    uStack_290 = uStack_578;
    uStack_2d8 = uStack_428;
    uStack_2e0 = uStack_430;
    uStack_2c8 = uStack_418;
    uStack_2d0 = uStack_420;
    uStack_2b8 = uStack_408;
    uStack_2c0 = uStack_410;
    uStack_2b0 = (undefined1)uStack_400;
    uStack_318 = uStack_468;
    uStack_320 = uStack_470;
    uStack_308 = uStack_458;
    uStack_310 = uStack_460;
    uStack_2f8 = uStack_448;
    uStack_300 = uStack_450;
    uStack_2e8 = uStack_438;
    uStack_2f0 = uStack_440;
    uStack_338 = uStack_488;
    uStack_340 = uStack_490;
    uStack_328 = uStack_478;
    uStack_330 = uStack_480;
    puVar17 = &uStack_340;
    FUN_1047a4194(puVar17,&uStack_2a0);
    if (((ulong)puVar17 & 1) == 0) {
      return 0;
    }
  }
  puVar17 = (undefined8 *)((long)param_1 + (long)*(int *)(lStack_628 + 0x54));
  uVar6 = *puVar17;
  uVar19 = puVar17[1];
  uStack_630 = puVar17[2];
  lVar28 = puVar17[3];
  puVar17 = (undefined8 *)((long)param_2 + (long)*(int *)(lStack_628 + 0x54));
  uVar7 = *puVar17;
  lVar14 = puVar17[1];
  uVar8 = puVar17[2];
  lVar23 = puVar17[3];
  if (uVar19 != 2) {
    if (lVar14 == 2) goto LAB_1046dcf14;
    uVar27 = uVar19;
    lVar25 = lVar28;
    if (uVar19 == 1) {
      if (lVar14 == 1) {
LAB_1046dd04c:
        if (lVar28 == 1) {
          if (lVar23 != 1) {
            func_0x0001046d9138(uVar7,lVar14,uVar8,lVar23);
            lVar25 = 1;
            goto LAB_1046dd120;
          }
          func_0x0001046d9138(uVar7,lVar14,uVar8,1);
          func_0x0001046d9138(uVar6,uVar19,uStack_630,1);
          FUN_1047078fc(uVar7,lVar14);
        }
        else {
          if (lVar23 == 1) {
            lVar20 = 1;
            goto LAB_1046dd10c;
          }
          func_0x00010474dca4(uStack_630,uVar8,lVar28,lVar23);
          uStack_638 = CONCAT44(uStack_638._4_4_,(int)lVar25);
          func_0x0001046d9138(uVar7,lVar14,uVar8,lVar23);
          func_0x0001046d9138(uVar6,uVar19,uStack_630,lVar28);
          FUN_1047078fc(uVar7,lVar14);
          if ((uStack_638 & 1) == 0) goto LAB_1046dd130;
        }
        FUN_1047078fc(uVar8,lVar23);
        func_0x0001047078c4(uVar6,uVar19,uStack_630,lVar28);
        goto LAB_1046dcee0;
      }
      func_0x0001046d9138(uVar7,lVar14,uVar8,lVar23);
      uVar27 = 1;
    }
    else {
      if (lVar14 == 1) {
        func_0x0001046d9138(uVar7,1,uVar8,lVar23);
        func_0x0001046d9138(uVar6,uVar19,uStack_630,lVar28);
        goto LAB_1046dd130;
      }
      uVar21 = uVar19;
      func_0x00010474dca4(uVar6,uVar7,uVar19,lVar14);
      lVar20 = lVar23;
      if ((uVar21 & 1) != 0) goto LAB_1046dd04c;
LAB_1046dd10c:
      func_0x0001046d9138(uVar7,lVar14,uVar8,lVar20);
    }
LAB_1046dd120:
    func_0x0001046d9138(uVar6,uVar27,uStack_630,lVar25);
    FUN_1047078fc(uVar7,lVar14);
LAB_1046dd130:
    FUN_1047078fc(uVar8,lVar23);
    func_0x0001047078c4(uVar6,uVar19,uStack_630,lVar28);
    return 0;
  }
  if (lVar14 != 2) {
LAB_1046dcf14:
    func_0x0001046d9138(uVar7,lVar14,uVar8,lVar23);
    uVar9 = uStack_630;
    func_0x0001046d9138(uVar6,uVar19,uStack_630,lVar28);
    func_0x0001047078c4(uVar6,uVar19,uVar9,lVar28);
    func_0x0001047078c4(uVar7,lVar14,uVar8,lVar23);
    return 0;
  }
LAB_1046dcee0:
  pdVar4 = (double *)((long)param_1 + (long)*(int *)(lStack_628 + 0x58));
  pdVar5 = (double *)((long)param_2 + (long)*(int *)(lStack_628 + 0x58));
  cVar11 = *(char *)(pdVar5 + 1);
  if (*(char *)(pdVar4 + 1) == '\x01') {
    if (cVar11 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar11 == '\x01') {
      return 0;
    }
    if (*pdVar4 != *pdVar5) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_628 + 0x5c));
  uVar19 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_628 + 0x5c));
  uVar27 = puVar2[1];
  if (uVar19 == 0) {
    if (uVar27 != 0) {
      return 0;
    }
  }
  else {
    if (uVar27 == 0) {
      return 0;
    }
    uVar21 = *puVar1;
    if (((uVar21 != *puVar2) || (uVar19 != uVar27)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar21 & 1) == 0)) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_628 + 0x60));
  uVar19 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_628 + 0x60));
  uVar27 = puVar2[1];
  if (uVar19 == 0) {
    if (uVar27 != 0) {
      return 0;
    }
  }
  else {
    if (uVar27 == 0) {
      return 0;
    }
    uVar21 = *puVar1;
    if (((uVar21 != *puVar2) || (uVar19 != uVar27)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar21 & 1) == 0)) {
      return 0;
    }
  }
  if (*(int *)((long)param_1 + (long)*(int *)(lStack_628 + 100)) !=
      *(int *)((long)param_2 + (long)*(int *)(lStack_628 + 100))) {
    return 0;
  }
  puVar17 = (undefined8 *)((long)param_1 + (long)*(int *)(lStack_628 + 0x68));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lStack_628 + 0x68));
  if (*(char *)((long)puVar17 + 0x49) == '\x01') {
    if (*(char *)((long)puVar3 + 0x49) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)((long)puVar3 + 0x49) == '\x01') {
      return 0;
    }
    uStack_368 = puVar3[5];
    uStack_370 = puVar3[4];
    uStack_360 = puVar3[6];
    uStack_358 = (undefined1)puVar3[7];
    uStack_34f = *(undefined8 *)((long)puVar3 + 0x41);
    uStack_357 = (undefined7)*(undefined8 *)((long)puVar3 + 0x39);
    uStack_350 = (undefined1)((ulong)*(undefined8 *)((long)puVar3 + 0x39) >> 0x38);
    uStack_388 = puVar3[1];
    uStack_390 = *puVar3;
    uStack_378 = puVar3[3];
    uStack_380 = puVar3[2];
    uStack_3b8 = puVar17[5];
    uStack_3c0 = puVar17[4];
    uStack_3b0 = puVar17[6];
    uStack_3a8 = (undefined1)puVar17[7];
    uStack_39f = *(undefined8 *)((long)puVar17 + 0x41);
    uStack_3a7 = (undefined7)*(undefined8 *)((long)puVar17 + 0x39);
    uStack_3a0 = (undefined1)((ulong)*(undefined8 *)((long)puVar17 + 0x39) >> 0x38);
    uStack_3d8 = puVar17[1];
    uStack_3e0 = *puVar17;
    uStack_3c8 = puVar17[3];
    uStack_3d0 = puVar17[2];
    puVar17 = &uStack_3e0;
    FUN_10470a754(puVar17,&uStack_390);
    if (((ulong)puVar17 & 1) == 0) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_628 + 0x6c));
  puVar17 = (undefined8 *)((long)param_2 + (long)*(int *)(lStack_628 + 0x6c));
  uVar19 = *puVar1;
  uVar27 = puVar1[1];
  uVar6 = *puVar17;
  uVar21 = puVar17[1];
  if (uVar27 >> 0x3c < 0xf) {
    if (0xe < uVar21 >> 0x3c) goto LAB_1046dd2e0;
    func_0x000100de78a0(uVar19,uVar27);
    func_0x000100de78a0(uVar6,uVar21);
    uVar18 = uVar19;
    func_0x000100e25fcc(uVar19,uVar27,uVar6,uVar21);
    func_0x0001000b44c0(uVar6,uVar21);
    func_0x0001000b44c0(uVar19,uVar27);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (uVar21 >> 0x3c < 0xf) {
LAB_1046dd2e0:
      func_0x000100de78a0(uVar19,uVar27);
      func_0x000100de78a0(uVar6,uVar21);
      func_0x0001000b44c0(uVar19,uVar27);
      func_0x0001000b44c0(uVar6,uVar21);
      return 0;
    }
    func_0x000100de78a0(uVar19,uVar27);
    func_0x000100de78a0(uVar6,uVar21);
    func_0x0001000b44c0(uVar19,uVar27);
  }
  puVar17 = (undefined8 *)((long)param_1 + (long)*(int *)(lStack_628 + 0x70));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lStack_628 + 0x70));
  uStack_408 = puVar17[0x11];
  uStack_410 = puVar17[0x10];
  uStack_3f8 = puVar17[0x13];
  uStack_400 = puVar17[0x12];
  uStack_3e8 = puVar17[0x15];
  uStack_3f0 = puVar17[0x14];
  uStack_4e8 = puVar17[0x17];
  uStack_4f0 = puVar17[0x16];
  uStack_448 = puVar17[9];
  uStack_450 = puVar17[8];
  uStack_438 = puVar17[0xb];
  uStack_440 = puVar17[10];
  uStack_428 = puVar17[0xd];
  uStack_430 = puVar17[0xc];
  uStack_418 = puVar17[0xf];
  uStack_420 = puVar17[0xe];
  uStack_488 = puVar17[1];
  uStack_490 = *puVar17;
  uStack_478 = puVar17[3];
  uStack_480 = puVar17[2];
  uStack_468 = puVar17[5];
  uStack_470 = puVar17[4];
  uStack_458 = puVar17[7];
  uStack_460 = puVar17[6];
  uStack_4e0 = puVar17[0x18];
  uStack_4d8 = (undefined1)puVar17[0x19];
  uStack_4cf = *(undefined8 *)((long)puVar17 + 0xd1);
  uStack_4d7 = (undefined7)*(undefined8 *)((long)puVar17 + 0xc9);
  uStack_4d0 = (undefined1)((ulong)*(undefined8 *)((long)puVar17 + 0xc9) >> 0x38);
  uStack_598 = puVar3[0x11];
  uStack_5a0 = puVar3[0x10];
  uStack_588 = puVar3[0x13];
  uStack_590 = puVar3[0x12];
  uStack_578 = puVar3[0x15];
  uStack_580 = puVar3[0x14];
  uStack_4b8 = puVar3[0x17];
  uStack_4c0 = puVar3[0x16];
  uStack_5d8 = puVar3[9];
  uStack_5e0 = puVar3[8];
  uStack_5c8 = puVar3[0xb];
  uStack_5d0 = puVar3[10];
  uStack_5b8 = puVar3[0xd];
  uStack_5c0 = puVar3[0xc];
  uStack_5a8 = puVar3[0xf];
  uStack_5b0 = puVar3[0xe];
  uStack_618 = puVar3[1];
  uStack_620 = *puVar3;
  uStack_608 = puVar3[3];
  uStack_610 = puVar3[2];
  uStack_5f8 = puVar3[5];
  uStack_600 = puVar3[4];
  uStack_5e8 = puVar3[7];
  uStack_5f0 = puVar3[6];
  uStack_4b0 = puVar3[0x18];
  uStack_4a8 = (undefined1)puVar3[0x19];
  uStack_49f = *(undefined8 *)((long)puVar3 + 0xd1);
  uStack_4a7 = (undefined7)*(undefined8 *)((long)puVar3 + 0xc9);
  uStack_4a0 = (undefined1)((ulong)*(undefined8 *)((long)puVar3 + 0xc9) >> 0x38);
  puVar17 = &uStack_490;
  FUN_1047084a8(puVar17,&uStack_620);
  if (((ulong)puVar17 & 1) == 0) {
    return 0;
  }
  puVar17 = &uStack_4f0;
  FUN_104708144(puVar17,&uStack_4c0);
  if (((ulong)puVar17 & 1) == 0) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(lStack_628 + 0x74)) !=
      *(char *)((long)param_2 + (long)*(int *)(lStack_628 + 0x74))) {
    return 0;
  }
  if (*(int *)((long)param_1 + (long)*(int *)(lStack_628 + 0x78)) !=
      *(int *)((long)param_2 + (long)*(int *)(lStack_628 + 0x78))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(lStack_628 + 0x7c)) !=
      *(char *)((long)param_2 + (long)*(int *)(lStack_628 + 0x7c))) {
    return 0;
  }
  param_1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_628 + 0x80));
  uVar19 = param_1[1];
  param_2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_628 + 0x80));
  uVar27 = param_2[1];
  if (uVar19 == 0) {
    if (uVar27 != 0) {
      return 0;
    }
    return 1;
  }
  if (uVar27 == 0) {
    return 0;
  }
  uVar21 = *param_1;
  if (((uVar21 != *param_2) || (uVar19 != uVar27)) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar21 & 1) == 0)) {
    return 0;
  }
  return 1;
}



/* Entry: 1046d9558; end: 1046d9dd7;  */

void FUN_1046d9558(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_3f0 [8];
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 uStack_350;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined8 uStack_1af;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
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
  undefined1 uStack_70;
  
  lVar11 = 0;
  FUN_10477ea9c();
  lVar21 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  puVar14 = auStack_3f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar13 = 0x112db3a00;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)puVar14 - extraout_x8_00;
  lVar13 = unaff_x20[1];
  if (lVar13 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar18 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar18,lVar13);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[2]);
  __ss6HasherV8_combineyySuF(unaff_x20[3]);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[4],unaff_x20[5]);
  lVar13 = unaff_x20[7];
  if (lVar13 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar13 = unaff_x20[9];
    if (lVar13 == 0) goto LAB_1046d96b8;
LAB_1046d9680:
    uVar18 = unaff_x20[8];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar18,lVar13);
  }
  else {
    uVar18 = unaff_x20[6];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar18,lVar13);
    lVar13 = unaff_x20[9];
    if (lVar13 != 0) goto LAB_1046d9680;
LAB_1046d96b8:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  lVar12 = 0;
  FUN_1046d90b0();
  func_0x000104707758((long)unaff_x20 + (long)*(int *)(lVar12 + 0x28),lVar17,0x112db3a00,
                      &UNK_10d95dff0);
  lVar13 = lVar17;
  (**(code **)(lVar21 + 0x30))(lVar17,1,lVar11);
  if ((int)lVar13 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001047076d0(lVar17,puVar14,FUN_10477ea9c);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_10477eb20(param_1);
    func_0x0001047077e0(puVar14,FUN_10477ea9c);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x2c)))
  ;
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x30)))
  ;
  lVar13 = *(long *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x34));
  if (lVar13 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046db8dc(param_1,lVar13);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x38));
  lVar13 = puVar1[1];
  if (lVar13 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar18 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar18,lVar13);
  }
  dVar22 = *(double *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x3c));
  dVar23 = 0.0;
  if (dVar22 != 0.0) {
    dVar23 = dVar22;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar23);
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x40)));
  puVar2 = (undefined4 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x44));
  lVar13 = *(long *)(puVar2 + 4);
  if (lVar13 == 1) {
LAB_1046d989c:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar19 = *(undefined8 *)(puVar2 + 2);
    uVar18 = *(undefined8 *)(puVar2 + 6);
    lVar11 = *(long *)(puVar2 + 8);
    uVar6 = *puVar2;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyys6UInt32VF(uVar6);
    if (lVar13 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar19,lVar13);
    }
    if (lVar11 == 0) goto LAB_1046d989c;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar18,lVar11);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x48));
  lVar13 = puVar1[1];
  if (lVar13 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar18 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar18,lVar13);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x4c));
  uStack_2d8 = puVar1[0xd];
  uStack_2e0 = puVar1[0xc];
  uStack_2c8 = puVar1[0xf];
  uStack_2d0 = puVar1[0xe];
  uStack_2b8 = puVar1[0x11];
  uStack_2c0 = puVar1[0x10];
  uStack_2b0 = *(undefined1 *)(puVar1 + 0x12);
  uStack_318 = puVar1[5];
  uStack_320 = puVar1[4];
  uStack_308 = puVar1[7];
  uStack_310 = puVar1[6];
  uStack_2f8 = puVar1[9];
  uStack_300 = puVar1[8];
  uStack_2e8 = puVar1[0xb];
  uStack_2f0 = puVar1[10];
  uStack_338 = puVar1[1];
  uStack_340 = *puVar1;
  uStack_328 = puVar1[3];
  uStack_330 = puVar1[2];
  iVar10 = (int)&uStack_340;
  func_0x000103b72c50();
  if (iVar10 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_98 = uStack_2d8;
    uStack_a0 = uStack_2e0;
    uStack_88 = uStack_2c8;
    uStack_90 = uStack_2d0;
    uStack_78 = uStack_2b8;
    uStack_80 = uStack_2c0;
    uStack_70 = uStack_2b0;
    uStack_d8 = uStack_318;
    uStack_e0 = uStack_320;
    uStack_c8 = uStack_308;
    uStack_d0 = uStack_310;
    uStack_b8 = uStack_2f8;
    uStack_c0 = uStack_300;
    uStack_a8 = uStack_2e8;
    uStack_b0 = uStack_2f0;
    uStack_f8 = uStack_338;
    uStack_100 = uStack_340;
    uStack_e8 = uStack_328;
    uStack_f0 = uStack_330;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047a3f14(param_1);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x50));
  uStack_378 = puVar1[0xd];
  uStack_380 = puVar1[0xc];
  uStack_368 = puVar1[0xf];
  uStack_370 = puVar1[0xe];
  uStack_358 = puVar1[0x11];
  uStack_360 = puVar1[0x10];
  uStack_350 = *(undefined1 *)(puVar1 + 0x12);
  uStack_3b8 = puVar1[5];
  uStack_3c0 = puVar1[4];
  uStack_3a8 = puVar1[7];
  uStack_3b0 = puVar1[6];
  uStack_398 = puVar1[9];
  uStack_3a0 = puVar1[8];
  uStack_388 = puVar1[0xb];
  uStack_390 = puVar1[10];
  uStack_3d8 = puVar1[1];
  uStack_3e0 = *puVar1;
  uStack_3c8 = puVar1[3];
  uStack_3d0 = puVar1[2];
  iVar10 = (int)&uStack_3e0;
  func_0x000103b72c50();
  if (iVar10 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_138 = uStack_378;
    uStack_140 = uStack_380;
    uStack_128 = uStack_368;
    uStack_130 = uStack_370;
    uStack_118 = uStack_358;
    uStack_120 = uStack_360;
    uStack_110 = uStack_350;
    uStack_178 = uStack_3b8;
    uStack_180 = uStack_3c0;
    uStack_168 = uStack_3a8;
    uStack_170 = uStack_3b0;
    uStack_158 = uStack_398;
    uStack_160 = uStack_3a0;
    uStack_148 = uStack_388;
    uStack_150 = uStack_390;
    uStack_198 = uStack_3d8;
    uStack_1a0 = uStack_3e0;
    uStack_188 = uStack_3c8;
    uStack_190 = uStack_3d0;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047a3f14(param_1);
  }
  puVar3 = (ulong *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x54));
  uVar16 = puVar3[1];
  if (uVar16 != 2) {
    uVar20 = *puVar3;
    uVar15 = puVar3[2];
    uVar5 = puVar3[3];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (uVar16 == 1) {
LAB_1046d9a98:
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar4 = 0;
      if ((uVar20 & 0x7fffffffffffffff) != 0) {
        uVar4 = uVar20;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar4);
      if (uVar16 == 0) goto LAB_1046d9a98;
      __ss6HasherV8_combineyys5UInt8VF(1);
      FUN_1046db864(param_1,uVar16);
    }
    if (uVar5 != 1) {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar16 = 0;
      if ((uVar15 & 0x7fffffffffffffff) != 0) {
        uVar16 = uVar15;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar16);
      if (uVar5 != 0) {
        __ss6HasherV8_combineyys5UInt8VF(1);
        FUN_1046db864(param_1,uVar5);
        goto LAB_1046d9af0;
      }
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
LAB_1046d9af0:
  puVar3 = (ulong *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x58));
  if ((char)puVar3[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar15 = *puVar3;
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar16 = 0;
    if ((uVar15 & 0x7fffffffffffffff) != 0) {
      uVar16 = uVar15;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar16);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x5c));
  lVar13 = puVar1[1];
  if (lVar13 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar18 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar18,lVar13);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x60));
  lVar13 = puVar1[1];
  if (lVar13 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar18 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar18,lVar13);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 100)));
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x68));
  if (*(char *)((long)puVar1 + 0x49) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_1c8 = puVar1[5];
    uStack_1d0 = puVar1[4];
    uStack_1c0 = puVar1[6];
    uStack_1b8 = (undefined1)puVar1[7];
    uStack_1af = *(undefined8 *)((long)puVar1 + 0x41);
    uStack_1b7 = (undefined7)*(undefined8 *)((long)puVar1 + 0x39);
    uStack_1b0 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x39) >> 0x38);
    uStack_1e8 = puVar1[1];
    uStack_1f0 = *puVar1;
    uStack_1d8 = puVar1[3];
    uStack_1e0 = puVar1[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_10470a59c(param_1);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x6c));
  uVar16 = puVar1[1];
  if (uVar16 >> 0x3c < 0xf) {
    uVar18 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar18,uVar16);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x70));
  uStack_218 = puVar1[0x11];
  uStack_220 = puVar1[0x10];
  uStack_208 = puVar1[0x13];
  uStack_210 = puVar1[0x12];
  uStack_1f8 = puVar1[0x15];
  uStack_200 = puVar1[0x14];
  uStack_258 = puVar1[9];
  uStack_260 = puVar1[8];
  uStack_248 = puVar1[0xb];
  uStack_250 = puVar1[10];
  uStack_238 = puVar1[0xd];
  uStack_240 = puVar1[0xc];
  uStack_228 = puVar1[0xf];
  uStack_230 = puVar1[0xe];
  uStack_298 = puVar1[1];
  uStack_2a0 = *puVar1;
  uStack_288 = puVar1[3];
  uStack_290 = puVar1[2];
  uStack_278 = puVar1[5];
  uStack_280 = puVar1[4];
  uStack_268 = puVar1[7];
  uStack_270 = puVar1[6];
  uVar18 = puVar1[0x16];
  cVar7 = *(char *)(puVar1 + 0x17);
  uVar16 = puVar1[0x18];
  cVar8 = *(char *)(puVar1 + 0x19);
  uStack_3e8 = puVar1[0x1a];
  cVar9 = *(char *)(puVar1 + 0x1b);
  FUN_1047082c0(param_1);
  if (cVar7 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar18);
  }
  if (cVar8 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar15 = 0;
    if ((uVar16 & 0x7fffffffffffffff) != 0) {
      uVar15 = uVar16;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar15);
  }
  if (cVar9 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uStack_3e8);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x74)))
  ;
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x78)));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x7c)))
  ;
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x80));
  lVar13 = puVar1[1];
  if (lVar13 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar18 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar18,lVar13);
  }
  return;
}



/* Entry: 1046d9dd8; end: 1046d9e13;  */

void FUN_1046d9dd8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1046d9558(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046d9e14; end: 1046d9e17;  */

void FUN_1046d9e14(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_3f0 [8];
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 uStack_350;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined8 uStack_1af;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
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
  undefined1 uStack_70;
  
  lVar11 = 0;
  FUN_10477ea9c();
  lVar21 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  puVar14 = auStack_3f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar13 = 0x112db3a00;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)puVar14 - extraout_x8_00;
  lVar13 = unaff_x20[1];
  if (lVar13 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar18 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar18,lVar13);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[2]);
  __ss6HasherV8_combineyySuF(unaff_x20[3]);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[4],unaff_x20[5]);
  lVar13 = unaff_x20[7];
  if (lVar13 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar13 = unaff_x20[9];
    if (lVar13 == 0) goto LAB_1046d96b8;
LAB_1046d9680:
    uVar18 = unaff_x20[8];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar18,lVar13);
  }
  else {
    uVar18 = unaff_x20[6];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar18,lVar13);
    lVar13 = unaff_x20[9];
    if (lVar13 != 0) goto LAB_1046d9680;
LAB_1046d96b8:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  lVar12 = 0;
  FUN_1046d90b0();
  func_0x000104707758((long)unaff_x20 + (long)*(int *)(lVar12 + 0x28),lVar17,0x112db3a00,
                      &UNK_10d95dff0);
  lVar13 = lVar17;
  (**(code **)(lVar21 + 0x30))(lVar17,1,lVar11);
  if ((int)lVar13 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001047076d0(lVar17,puVar14,FUN_10477ea9c);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_10477eb20(param_1);
    func_0x0001047077e0(puVar14,FUN_10477ea9c);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x2c)))
  ;
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x30)))
  ;
  lVar13 = *(long *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x34));
  if (lVar13 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046db8dc(param_1,lVar13);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x38));
  lVar13 = puVar1[1];
  if (lVar13 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar18 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar18,lVar13);
  }
  dVar22 = *(double *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x3c));
  dVar23 = 0.0;
  if (dVar22 != 0.0) {
    dVar23 = dVar22;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar23);
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x40)));
  puVar2 = (undefined4 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x44));
  lVar13 = *(long *)(puVar2 + 4);
  if (lVar13 == 1) {
LAB_1046d989c:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar19 = *(undefined8 *)(puVar2 + 2);
    uVar18 = *(undefined8 *)(puVar2 + 6);
    lVar11 = *(long *)(puVar2 + 8);
    uVar6 = *puVar2;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyys6UInt32VF(uVar6);
    if (lVar13 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar19,lVar13);
    }
    if (lVar11 == 0) goto LAB_1046d989c;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar18,lVar11);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x48));
  lVar13 = puVar1[1];
  if (lVar13 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar18 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar18,lVar13);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x4c));
  uStack_2d8 = puVar1[0xd];
  uStack_2e0 = puVar1[0xc];
  uStack_2c8 = puVar1[0xf];
  uStack_2d0 = puVar1[0xe];
  uStack_2b8 = puVar1[0x11];
  uStack_2c0 = puVar1[0x10];
  uStack_2b0 = *(undefined1 *)(puVar1 + 0x12);
  uStack_318 = puVar1[5];
  uStack_320 = puVar1[4];
  uStack_308 = puVar1[7];
  uStack_310 = puVar1[6];
  uStack_2f8 = puVar1[9];
  uStack_300 = puVar1[8];
  uStack_2e8 = puVar1[0xb];
  uStack_2f0 = puVar1[10];
  uStack_338 = puVar1[1];
  uStack_340 = *puVar1;
  uStack_328 = puVar1[3];
  uStack_330 = puVar1[2];
  iVar10 = (int)&uStack_340;
  func_0x000103b72c50();
  if (iVar10 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_98 = uStack_2d8;
    uStack_a0 = uStack_2e0;
    uStack_88 = uStack_2c8;
    uStack_90 = uStack_2d0;
    uStack_78 = uStack_2b8;
    uStack_80 = uStack_2c0;
    uStack_70 = uStack_2b0;
    uStack_d8 = uStack_318;
    uStack_e0 = uStack_320;
    uStack_c8 = uStack_308;
    uStack_d0 = uStack_310;
    uStack_b8 = uStack_2f8;
    uStack_c0 = uStack_300;
    uStack_a8 = uStack_2e8;
    uStack_b0 = uStack_2f0;
    uStack_f8 = uStack_338;
    uStack_100 = uStack_340;
    uStack_e8 = uStack_328;
    uStack_f0 = uStack_330;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047a3f14(param_1);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x50));
  uStack_378 = puVar1[0xd];
  uStack_380 = puVar1[0xc];
  uStack_368 = puVar1[0xf];
  uStack_370 = puVar1[0xe];
  uStack_358 = puVar1[0x11];
  uStack_360 = puVar1[0x10];
  uStack_350 = *(undefined1 *)(puVar1 + 0x12);
  uStack_3b8 = puVar1[5];
  uStack_3c0 = puVar1[4];
  uStack_3a8 = puVar1[7];
  uStack_3b0 = puVar1[6];
  uStack_398 = puVar1[9];
  uStack_3a0 = puVar1[8];
  uStack_388 = puVar1[0xb];
  uStack_390 = puVar1[10];
  uStack_3d8 = puVar1[1];
  uStack_3e0 = *puVar1;
  uStack_3c8 = puVar1[3];
  uStack_3d0 = puVar1[2];
  iVar10 = (int)&uStack_3e0;
  func_0x000103b72c50();
  if (iVar10 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_138 = uStack_378;
    uStack_140 = uStack_380;
    uStack_128 = uStack_368;
    uStack_130 = uStack_370;
    uStack_118 = uStack_358;
    uStack_120 = uStack_360;
    uStack_110 = uStack_350;
    uStack_178 = uStack_3b8;
    uStack_180 = uStack_3c0;
    uStack_168 = uStack_3a8;
    uStack_170 = uStack_3b0;
    uStack_158 = uStack_398;
    uStack_160 = uStack_3a0;
    uStack_148 = uStack_388;
    uStack_150 = uStack_390;
    uStack_198 = uStack_3d8;
    uStack_1a0 = uStack_3e0;
    uStack_188 = uStack_3c8;
    uStack_190 = uStack_3d0;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047a3f14(param_1);
  }
  puVar3 = (ulong *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x54));
  uVar16 = puVar3[1];
  if (uVar16 != 2) {
    uVar20 = *puVar3;
    uVar15 = puVar3[2];
    uVar5 = puVar3[3];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (uVar16 == 1) {
LAB_1046d9a98:
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar4 = 0;
      if ((uVar20 & 0x7fffffffffffffff) != 0) {
        uVar4 = uVar20;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar4);
      if (uVar16 == 0) goto LAB_1046d9a98;
      __ss6HasherV8_combineyys5UInt8VF(1);
      FUN_1046db864(param_1,uVar16);
    }
    if (uVar5 != 1) {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar16 = 0;
      if ((uVar15 & 0x7fffffffffffffff) != 0) {
        uVar16 = uVar15;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar16);
      if (uVar5 != 0) {
        __ss6HasherV8_combineyys5UInt8VF(1);
        FUN_1046db864(param_1,uVar5);
        goto LAB_1046d9af0;
      }
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
LAB_1046d9af0:
  puVar3 = (ulong *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x58));
  if ((char)puVar3[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar15 = *puVar3;
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar16 = 0;
    if ((uVar15 & 0x7fffffffffffffff) != 0) {
      uVar16 = uVar15;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar16);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x5c));
  lVar13 = puVar1[1];
  if (lVar13 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar18 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar18,lVar13);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x60));
  lVar13 = puVar1[1];
  if (lVar13 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar18 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar18,lVar13);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 100)));
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x68));
  if (*(char *)((long)puVar1 + 0x49) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_1c8 = puVar1[5];
    uStack_1d0 = puVar1[4];
    uStack_1c0 = puVar1[6];
    uStack_1b8 = (undefined1)puVar1[7];
    uStack_1af = *(undefined8 *)((long)puVar1 + 0x41);
    uStack_1b7 = (undefined7)*(undefined8 *)((long)puVar1 + 0x39);
    uStack_1b0 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x39) >> 0x38);
    uStack_1e8 = puVar1[1];
    uStack_1f0 = *puVar1;
    uStack_1d8 = puVar1[3];
    uStack_1e0 = puVar1[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_10470a59c(param_1);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x6c));
  uVar16 = puVar1[1];
  if (uVar16 >> 0x3c < 0xf) {
    uVar18 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar18,uVar16);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x70));
  uStack_218 = puVar1[0x11];
  uStack_220 = puVar1[0x10];
  uStack_208 = puVar1[0x13];
  uStack_210 = puVar1[0x12];
  uStack_1f8 = puVar1[0x15];
  uStack_200 = puVar1[0x14];
  uStack_258 = puVar1[9];
  uStack_260 = puVar1[8];
  uStack_248 = puVar1[0xb];
  uStack_250 = puVar1[10];
  uStack_238 = puVar1[0xd];
  uStack_240 = puVar1[0xc];
  uStack_228 = puVar1[0xf];
  uStack_230 = puVar1[0xe];
  uStack_298 = puVar1[1];
  uStack_2a0 = *puVar1;
  uStack_288 = puVar1[3];
  uStack_290 = puVar1[2];
  uStack_278 = puVar1[5];
  uStack_280 = puVar1[4];
  uStack_268 = puVar1[7];
  uStack_270 = puVar1[6];
  uVar18 = puVar1[0x16];
  cVar7 = *(char *)(puVar1 + 0x17);
  uVar16 = puVar1[0x18];
  cVar8 = *(char *)(puVar1 + 0x19);
  uStack_3e8 = puVar1[0x1a];
  cVar9 = *(char *)(puVar1 + 0x1b);
  FUN_1047082c0(param_1);
  if (cVar7 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar18);
  }
  if (cVar8 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar15 = 0;
    if ((uVar16 & 0x7fffffffffffffff) != 0) {
      uVar15 = uVar16;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar15);
  }
  if (cVar9 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uStack_3e8);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x74)))
  ;
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x78)));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x7c)))
  ;
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x80));
  lVar13 = puVar1[1];
  if (lVar13 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar18 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar18,lVar13);
  }
  return;
}



/* Entry: 1046d9e18; end: 1046d9e4f;  */

void FUN_1046d9e18(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1046d9558(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046d9e50; end: 1046d9e53;  */

undefined8 FUN_1046d9e50(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  code *pcVar24;
  long lVar25;
  undefined8 uVar26;
  ulong uVar27;
  long lVar28;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  uint uStack_644;
  undefined8 uStack_640;
  ulong uStack_638;
  undefined8 uStack_630;
  long lStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined1 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined1 uStack_4d8;
  undefined7 uStack_4d7;
  undefined1 uStack_4d0;
  undefined8 uStack_4cf;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 uStack_4a8;
  undefined7 uStack_4a7;
  undefined1 uStack_4a0;
  undefined8 uStack_49f;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 uStack_3a8;
  undefined7 uStack_3a7;
  undefined1 uStack_3a0;
  undefined8 uStack_39f;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 uStack_358;
  undefined7 uStack_357;
  undefined1 uStack_350;
  undefined8 uStack_34f;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined4 auStack_c0 [2];
  undefined8 uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined4 auStack_98 [2];
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar14 = 0;
  FUN_10477ea9c();
  lVar23 = *(long *)(lVar14 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar23 + 0x40));
  lVar20 = (long)&uStack_660 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar28 = 0x112db3a00;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar28 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar27 = lVar20 - extraout_x8_00;
  lVar28 = 0x11308dcb0;
  func_0x0001000285a8(0x11308dcb0,&UNK_10dd2f520);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar28 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar25 = uVar27 - extraout_x8_01;
  uVar19 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar19 != 0) {
      return 0;
    }
  }
  else {
    if (uVar19 == 0) {
      return 0;
    }
    uVar21 = *param_1;
    if (((uVar21 != *param_2) || (param_1[1] != uVar19)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar21 & 1) == 0)) {
      return 0;
    }
  }
  if ((int)param_1[2] != (int)param_2[2]) {
    return 0;
  }
  if ((int)param_1[3] != (int)param_2[3]) {
    return 0;
  }
  uVar19 = param_1[4];
  if (((uVar19 != param_2[4]) || (param_1[5] != param_2[5])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar19 & 1) == 0)) {
    return 0;
  }
  uVar19 = param_2[7];
  if (param_1[7] == 0) {
    if (uVar19 != 0) {
      return 0;
    }
  }
  else {
    if (uVar19 == 0) {
      return 0;
    }
    uVar21 = param_1[6];
    if (((uVar21 != param_2[6]) || (param_1[7] != uVar19)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar21 & 1) == 0)) {
      return 0;
    }
  }
  uVar19 = param_2[9];
  if (param_1[9] == 0) {
    if (uVar19 != 0) {
      return 0;
    }
  }
  else {
    if (uVar19 == 0) {
      return 0;
    }
    uVar21 = param_1[8];
    if (((uVar21 != param_2[8]) || (param_1[9] != uVar19)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar21 & 1) == 0)) {
      return 0;
    }
  }
  lVar15 = 0;
  FUN_1046d90b0();
  iVar13 = *(int *)(lVar15 + 0x28);
  lVar28 = (long)*(int *)(lVar28 + 0x30);
  lStack_628 = lVar15;
  func_0x000104707758((long)param_1 + (long)iVar13,lVar25,0x112db3a00,&UNK_10d95dff0);
  func_0x000104707758((long)param_2 + (long)iVar13,lVar25 + lVar28,0x112db3a00,&UNK_10d95dff0);
  pcVar24 = *(code **)(lVar23 + 0x30);
  lVar23 = lVar25;
  (*pcVar24)(lVar25,1,lVar14);
  if ((int)lVar23 == 1) {
    lVar28 = lVar25 + lVar28;
    (*pcVar24)(lVar28,1,lVar14);
    if ((int)lVar28 != 1) {
LAB_1046dc8b0:
      func_0x00010470781c(lVar25,0x11308dcb0,&UNK_10dd2f520);
      return 0;
    }
    func_0x00010470781c(lVar25,0x112db3a00,&UNK_10d95dff0);
  }
  else {
    func_0x000104707758(lVar25,uVar27,0x112db3a00,&UNK_10d95dff0);
    lVar23 = lVar25 + lVar28;
    (*pcVar24)(lVar23,1,lVar14);
    if ((int)lVar23 == 1) {
      func_0x0001047077e0(uVar27,FUN_10477ea9c);
      goto LAB_1046dc8b0;
    }
    func_0x0001047076d0(lVar25 + lVar28,lVar20,FUN_10477ea9c);
    uVar19 = uVar27;
    FUN_10477ede0(uVar27,lVar20);
    func_0x0001047077e0(lVar20,FUN_10477ea9c);
    func_0x0001047077e0(uVar27,FUN_10477ea9c);
    func_0x00010470781c(lVar25,0x112db3a00,&UNK_10d95dff0);
    if ((uVar19 & 1) == 0) {
      return 0;
    }
  }
  lVar28 = lStack_628;
  if (*(char *)((long)param_1 + (long)*(int *)(lStack_628 + 0x2c)) !=
      *(char *)((long)param_2 + (long)*(int *)(lStack_628 + 0x2c))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(lStack_628 + 0x30)) !=
      *(char *)((long)param_2 + (long)*(int *)(lStack_628 + 0x30))) {
    return 0;
  }
  uVar19 = *(ulong *)((long)param_1 + (long)*(int *)(lStack_628 + 0x34));
  lVar14 = *(long *)((long)param_2 + (long)*(int *)(lStack_628 + 0x34));
  if (uVar19 == 0) {
    if (lVar14 != 0) {
      return 0;
    }
  }
  else {
    if (lVar14 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar14);
    uVar27 = uVar19;
    _swift_bridgeObjectRetain();
    FUN_10470aeb8();
    _swift_bridgeObjectRelease(uVar19);
    _swift_bridgeObjectRelease(lVar14);
    if ((uVar27 & 1) == 0) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar28 + 0x38));
  uVar19 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar28 + 0x38));
  uVar27 = puVar2[1];
  if (uVar19 == 0) {
    if (uVar27 != 0) {
      return 0;
    }
  }
  else {
    if (uVar27 == 0) {
      return 0;
    }
    uVar21 = *puVar1;
    if (((uVar21 != *puVar2) || (uVar19 != uVar27)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar21 & 1) == 0)) {
      return 0;
    }
  }
  if (*(double *)((long)param_1 + (long)*(int *)(lVar28 + 0x3c)) !=
      *(double *)((long)param_2 + (long)*(int *)(lVar28 + 0x3c))) {
    return 0;
  }
  if (*(int *)((long)param_1 + (long)*(int *)(lVar28 + 0x40)) !=
      *(int *)((long)param_2 + (long)*(int *)(lVar28 + 0x40))) {
    return 0;
  }
  puVar17 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar28 + 0x44));
  uVar6 = *puVar17;
  uVar8 = puVar17[1];
  lVar14 = puVar17[2];
  uVar19 = puVar17[3];
  uVar22 = puVar17[4];
  puVar17 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar28 + 0x44));
  uVar7 = *puVar17;
  uVar9 = puVar17[1];
  lVar28 = puVar17[2];
  uVar10 = puVar17[3];
  uVar26 = puVar17[4];
  uStack_638 = uVar19;
  uStack_630 = uVar22;
  if (lVar14 == 1) {
    if (lVar28 != 1) {
LAB_1046dca78:
      uStack_640 = uVar9;
      func_0x00010470785c(uVar7,uVar9,lVar28,uVar10,uVar26);
      uVar9 = uStack_630;
      uVar19 = uStack_638;
      func_0x00010470785c(uVar6,uVar8,lVar14,uStack_638,uStack_630);
      func_0x000104707890(uVar6,uVar8,lVar14,uVar19,uVar9);
      func_0x000104707890(uVar7,uStack_640,lVar28,uVar10,uVar26);
      return 0;
    }
  }
  else {
    if (lVar28 == 1) goto LAB_1046dca78;
    auStack_98[0] = (undefined4)uVar7;
    auStack_c0[0] = (undefined4)uVar6;
    puVar16 = auStack_c0;
    uStack_660 = uVar26;
    uStack_658 = uVar7;
    uStack_650 = uVar10;
    uStack_b8 = uVar8;
    lStack_b0 = lVar14;
    uStack_a8 = uVar19;
    uStack_a0 = uVar22;
    uStack_90 = uVar9;
    lStack_88 = lVar28;
    uStack_80 = uVar10;
    uStack_78 = uVar26;
    FUN_1047508c0(puVar16,auStack_98);
    uVar7 = uStack_660;
    uStack_644 = (uint)puVar16;
    func_0x00010470785c(uStack_658,uVar9,lVar28,uStack_650,uStack_660);
    func_0x00010470785c(uVar6,uVar8,lVar14,uVar19,uVar22);
    _swift_bridgeObjectRelease(lVar28);
    _swift_bridgeObjectRelease(uVar7);
    func_0x000104707890(uVar6,uVar8,lVar14,uVar19,uVar22);
    if ((uStack_644 & 1) == 0) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_628 + 0x48));
  uVar19 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_628 + 0x48));
  uVar27 = puVar2[1];
  if (uVar19 == 0) {
    if (uVar27 != 0) {
      return 0;
    }
  }
  else {
    if (uVar27 == 0) {
      return 0;
    }
    uVar21 = *puVar1;
    if (((uVar21 != *puVar2) || (uVar19 != uVar27)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar21 & 1) == 0)) {
      return 0;
    }
  }
  puVar17 = (undefined8 *)((long)param_1 + (long)*(int *)(lStack_628 + 0x4c));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lStack_628 + 0x4c));
  iVar13 = (int)&uStack_588;
  uStack_5b8 = puVar17[0xd];
  uStack_5c0 = puVar17[0xc];
  uStack_5a8 = puVar17[0xf];
  uStack_5b0 = puVar17[0xe];
  uStack_598 = puVar17[0x11];
  uStack_5a0 = puVar17[0x10];
  uStack_5f8 = puVar17[5];
  uStack_600 = puVar17[4];
  uStack_5e8 = puVar17[7];
  uStack_5f0 = puVar17[6];
  uStack_5d8 = puVar17[9];
  uStack_5e0 = puVar17[8];
  uStack_5c8 = puVar17[0xb];
  uStack_5d0 = puVar17[10];
  uStack_618 = puVar17[1];
  uStack_620 = *puVar17;
  uStack_608 = puVar17[3];
  uStack_610 = puVar17[2];
  uStack_510 = puVar3[0xf];
  uStack_518 = puVar3[0xe];
  uStack_500 = puVar3[0x11];
  uStack_508 = puVar3[0x10];
  uStack_520 = puVar3[0xd];
  uStack_528 = puVar3[0xc];
  uStack_560 = puVar3[5];
  uStack_568 = puVar3[4];
  uStack_550 = puVar3[7];
  uStack_558 = puVar3[6];
  uStack_540 = puVar3[9];
  uStack_548 = puVar3[8];
  uStack_530 = puVar3[0xb];
  uStack_538 = puVar3[10];
  uStack_580 = puVar3[1];
  uStack_588 = *puVar3;
  uStack_570 = puVar3[3];
  uStack_578 = puVar3[2];
  uStack_590 = CONCAT71(uStack_590._1_7_,*(undefined1 *)(puVar17 + 0x12));
  uStack_4f8 = *(undefined1 *)(puVar3 + 0x12);
  iVar12 = (int)&uStack_620;
  func_0x000103b72c50();
  if (iVar12 == 1) {
    func_0x000103b72c50();
    if (iVar13 != 1) {
      return 0;
    }
  }
  else {
    uStack_428 = uStack_5b8;
    uStack_430 = uStack_5c0;
    uStack_418 = uStack_5a8;
    uStack_420 = uStack_5b0;
    uStack_408 = uStack_598;
    uStack_410 = uStack_5a0;
    uStack_400 = CONCAT71(uStack_400._1_7_,(undefined1)uStack_590);
    uStack_468 = uStack_5f8;
    uStack_470 = uStack_600;
    uStack_458 = uStack_5e8;
    uStack_460 = uStack_5f0;
    uStack_448 = uStack_5d8;
    uStack_450 = uStack_5e0;
    uStack_438 = uStack_5c8;
    uStack_440 = uStack_5d0;
    uStack_488 = uStack_618;
    uStack_490 = uStack_620;
    uStack_478 = uStack_608;
    uStack_480 = uStack_610;
    func_0x000103b72c50();
    if (iVar13 == 1) {
      return 0;
    }
    uStack_f8 = uStack_520;
    uStack_100 = uStack_528;
    uStack_e8 = uStack_510;
    uStack_f0 = uStack_518;
    uStack_d8 = uStack_500;
    uStack_e0 = uStack_508;
    uStack_d0 = uStack_4f8;
    uStack_138 = uStack_560;
    uStack_140 = uStack_568;
    uStack_128 = uStack_550;
    uStack_130 = uStack_558;
    uStack_118 = uStack_540;
    uStack_120 = uStack_548;
    uStack_108 = uStack_530;
    uStack_110 = uStack_538;
    uStack_158 = uStack_580;
    uStack_160 = uStack_588;
    uStack_148 = uStack_570;
    uStack_150 = uStack_578;
    uStack_198 = uStack_428;
    uStack_1a0 = uStack_430;
    uStack_188 = uStack_418;
    uStack_190 = uStack_420;
    uStack_178 = uStack_408;
    uStack_180 = uStack_410;
    uStack_170 = (undefined1)uStack_400;
    uStack_1d8 = uStack_468;
    uStack_1e0 = uStack_470;
    uStack_1c8 = uStack_458;
    uStack_1d0 = uStack_460;
    uStack_1b8 = uStack_448;
    uStack_1c0 = uStack_450;
    uStack_1a8 = uStack_438;
    uStack_1b0 = uStack_440;
    uStack_1f8 = uStack_488;
    uStack_200 = uStack_490;
    uStack_1e8 = uStack_478;
    uStack_1f0 = uStack_480;
    puVar17 = &uStack_200;
    FUN_1047a4194(puVar17,&uStack_160);
    if (((ulong)puVar17 & 1) == 0) {
      return 0;
    }
  }
  puVar17 = (undefined8 *)((long)param_1 + (long)*(int *)(lStack_628 + 0x50));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lStack_628 + 0x50));
  iVar13 = (int)&uStack_588;
  uStack_5b8 = puVar17[0xd];
  uStack_5c0 = puVar17[0xc];
  uStack_5a8 = puVar17[0xf];
  uStack_5b0 = puVar17[0xe];
  uStack_598 = puVar17[0x11];
  uStack_5a0 = puVar17[0x10];
  uStack_5f8 = puVar17[5];
  uStack_600 = puVar17[4];
  uStack_5e8 = puVar17[7];
  uStack_5f0 = puVar17[6];
  uStack_5d8 = puVar17[9];
  uStack_5e0 = puVar17[8];
  uStack_5c8 = puVar17[0xb];
  uStack_5d0 = puVar17[10];
  uStack_618 = puVar17[1];
  uStack_620 = *puVar17;
  uStack_608 = puVar17[3];
  uStack_610 = puVar17[2];
  uStack_510 = puVar3[0xf];
  uStack_518 = puVar3[0xe];
  uStack_500 = puVar3[0x11];
  uStack_508 = puVar3[0x10];
  uStack_520 = puVar3[0xd];
  uStack_528 = puVar3[0xc];
  uStack_560 = puVar3[5];
  uStack_568 = puVar3[4];
  uStack_550 = puVar3[7];
  uStack_558 = puVar3[6];
  uStack_540 = puVar3[9];
  uStack_548 = puVar3[8];
  uStack_530 = puVar3[0xb];
  uStack_538 = puVar3[10];
  uStack_580 = puVar3[1];
  uStack_588 = *puVar3;
  uStack_570 = puVar3[3];
  uStack_578 = puVar3[2];
  uStack_590 = CONCAT71(uStack_590._1_7_,*(undefined1 *)(puVar17 + 0x12));
  uStack_4f8 = *(undefined1 *)(puVar3 + 0x12);
  iVar12 = (int)&uStack_620;
  func_0x000103b72c50();
  if (iVar12 == 1) {
    func_0x000103b72c50();
    if (iVar13 != 1) {
      return 0;
    }
  }
  else {
    uStack_428 = uStack_5b8;
    uStack_430 = uStack_5c0;
    uStack_418 = uStack_5a8;
    uStack_420 = uStack_5b0;
    uStack_408 = uStack_598;
    uStack_410 = uStack_5a0;
    uStack_400 = CONCAT71(uStack_400._1_7_,(undefined1)uStack_590);
    uStack_468 = uStack_5f8;
    uStack_470 = uStack_600;
    uStack_458 = uStack_5e8;
    uStack_460 = uStack_5f0;
    uStack_448 = uStack_5d8;
    uStack_450 = uStack_5e0;
    uStack_438 = uStack_5c8;
    uStack_440 = uStack_5d0;
    uStack_488 = uStack_618;
    uStack_490 = uStack_620;
    uStack_478 = uStack_608;
    uStack_480 = uStack_610;
    func_0x000103b72c50();
    if (iVar13 == 1) {
      return 0;
    }
    uStack_238 = uStack_520;
    uStack_240 = uStack_528;
    uStack_228 = uStack_510;
    uStack_230 = uStack_518;
    uStack_218 = uStack_500;
    uStack_220 = uStack_508;
    uStack_210 = uStack_4f8;
    uStack_278 = uStack_560;
    uStack_280 = uStack_568;
    uStack_268 = uStack_550;
    uStack_270 = uStack_558;
    uStack_258 = uStack_540;
    uStack_260 = uStack_548;
    uStack_248 = uStack_530;
    uStack_250 = uStack_538;
    uStack_298 = uStack_580;
    uStack_2a0 = uStack_588;
    uStack_288 = uStack_570;
    uStack_290 = uStack_578;
    uStack_2d8 = uStack_428;
    uStack_2e0 = uStack_430;
    uStack_2c8 = uStack_418;
    uStack_2d0 = uStack_420;
    uStack_2b8 = uStack_408;
    uStack_2c0 = uStack_410;
    uStack_2b0 = (undefined1)uStack_400;
    uStack_318 = uStack_468;
    uStack_320 = uStack_470;
    uStack_308 = uStack_458;
    uStack_310 = uStack_460;
    uStack_2f8 = uStack_448;
    uStack_300 = uStack_450;
    uStack_2e8 = uStack_438;
    uStack_2f0 = uStack_440;
    uStack_338 = uStack_488;
    uStack_340 = uStack_490;
    uStack_328 = uStack_478;
    uStack_330 = uStack_480;
    puVar17 = &uStack_340;
    FUN_1047a4194(puVar17,&uStack_2a0);
    if (((ulong)puVar17 & 1) == 0) {
      return 0;
    }
  }
  puVar17 = (undefined8 *)((long)param_1 + (long)*(int *)(lStack_628 + 0x54));
  uVar6 = *puVar17;
  uVar19 = puVar17[1];
  uStack_630 = puVar17[2];
  lVar28 = puVar17[3];
  puVar17 = (undefined8 *)((long)param_2 + (long)*(int *)(lStack_628 + 0x54));
  uVar7 = *puVar17;
  lVar14 = puVar17[1];
  uVar8 = puVar17[2];
  lVar23 = puVar17[3];
  if (uVar19 != 2) {
    if (lVar14 == 2) goto LAB_1046dcf14;
    uVar27 = uVar19;
    lVar25 = lVar28;
    if (uVar19 == 1) {
      if (lVar14 == 1) {
LAB_1046dd04c:
        if (lVar28 == 1) {
          if (lVar23 != 1) {
            func_0x0001046d9138(uVar7,lVar14,uVar8,lVar23);
            lVar25 = 1;
            goto LAB_1046dd120;
          }
          func_0x0001046d9138(uVar7,lVar14,uVar8,1);
          func_0x0001046d9138(uVar6,uVar19,uStack_630,1);
          FUN_1047078fc(uVar7,lVar14);
        }
        else {
          if (lVar23 == 1) {
            lVar20 = 1;
            goto LAB_1046dd10c;
          }
          func_0x00010474dca4(uStack_630,uVar8,lVar28,lVar23);
          uStack_638 = CONCAT44(uStack_638._4_4_,(int)lVar25);
          func_0x0001046d9138(uVar7,lVar14,uVar8,lVar23);
          func_0x0001046d9138(uVar6,uVar19,uStack_630,lVar28);
          FUN_1047078fc(uVar7,lVar14);
          if ((uStack_638 & 1) == 0) goto LAB_1046dd130;
        }
        FUN_1047078fc(uVar8,lVar23);
        func_0x0001047078c4(uVar6,uVar19,uStack_630,lVar28);
        goto LAB_1046dcee0;
      }
      func_0x0001046d9138(uVar7,lVar14,uVar8,lVar23);
      uVar27 = 1;
    }
    else {
      if (lVar14 == 1) {
        func_0x0001046d9138(uVar7,1,uVar8,lVar23);
        func_0x0001046d9138(uVar6,uVar19,uStack_630,lVar28);
        goto LAB_1046dd130;
      }
      uVar21 = uVar19;
      func_0x00010474dca4(uVar6,uVar7,uVar19,lVar14);
      lVar20 = lVar23;
      if ((uVar21 & 1) != 0) goto LAB_1046dd04c;
LAB_1046dd10c:
      func_0x0001046d9138(uVar7,lVar14,uVar8,lVar20);
    }
LAB_1046dd120:
    func_0x0001046d9138(uVar6,uVar27,uStack_630,lVar25);
    FUN_1047078fc(uVar7,lVar14);
LAB_1046dd130:
    FUN_1047078fc(uVar8,lVar23);
    func_0x0001047078c4(uVar6,uVar19,uStack_630,lVar28);
    return 0;
  }
  if (lVar14 != 2) {
LAB_1046dcf14:
    func_0x0001046d9138(uVar7,lVar14,uVar8,lVar23);
    uVar9 = uStack_630;
    func_0x0001046d9138(uVar6,uVar19,uStack_630,lVar28);
    func_0x0001047078c4(uVar6,uVar19,uVar9,lVar28);
    func_0x0001047078c4(uVar7,lVar14,uVar8,lVar23);
    return 0;
  }
LAB_1046dcee0:
  pdVar4 = (double *)((long)param_1 + (long)*(int *)(lStack_628 + 0x58));
  pdVar5 = (double *)((long)param_2 + (long)*(int *)(lStack_628 + 0x58));
  cVar11 = *(char *)(pdVar5 + 1);
  if (*(char *)(pdVar4 + 1) == '\x01') {
    if (cVar11 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar11 == '\x01') {
      return 0;
    }
    if (*pdVar4 != *pdVar5) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_628 + 0x5c));
  uVar19 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_628 + 0x5c));
  uVar27 = puVar2[1];
  if (uVar19 == 0) {
    if (uVar27 != 0) {
      return 0;
    }
  }
  else {
    if (uVar27 == 0) {
      return 0;
    }
    uVar21 = *puVar1;
    if (((uVar21 != *puVar2) || (uVar19 != uVar27)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar21 & 1) == 0)) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_628 + 0x60));
  uVar19 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_628 + 0x60));
  uVar27 = puVar2[1];
  if (uVar19 == 0) {
    if (uVar27 != 0) {
      return 0;
    }
  }
  else {
    if (uVar27 == 0) {
      return 0;
    }
    uVar21 = *puVar1;
    if (((uVar21 != *puVar2) || (uVar19 != uVar27)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar21 & 1) == 0)) {
      return 0;
    }
  }
  if (*(int *)((long)param_1 + (long)*(int *)(lStack_628 + 100)) !=
      *(int *)((long)param_2 + (long)*(int *)(lStack_628 + 100))) {
    return 0;
  }
  puVar17 = (undefined8 *)((long)param_1 + (long)*(int *)(lStack_628 + 0x68));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lStack_628 + 0x68));
  if (*(char *)((long)puVar17 + 0x49) == '\x01') {
    if (*(char *)((long)puVar3 + 0x49) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)((long)puVar3 + 0x49) == '\x01') {
      return 0;
    }
    uStack_368 = puVar3[5];
    uStack_370 = puVar3[4];
    uStack_360 = puVar3[6];
    uStack_358 = (undefined1)puVar3[7];
    uStack_34f = *(undefined8 *)((long)puVar3 + 0x41);
    uStack_357 = (undefined7)*(undefined8 *)((long)puVar3 + 0x39);
    uStack_350 = (undefined1)((ulong)*(undefined8 *)((long)puVar3 + 0x39) >> 0x38);
    uStack_388 = puVar3[1];
    uStack_390 = *puVar3;
    uStack_378 = puVar3[3];
    uStack_380 = puVar3[2];
    uStack_3b8 = puVar17[5];
    uStack_3c0 = puVar17[4];
    uStack_3b0 = puVar17[6];
    uStack_3a8 = (undefined1)puVar17[7];
    uStack_39f = *(undefined8 *)((long)puVar17 + 0x41);
    uStack_3a7 = (undefined7)*(undefined8 *)((long)puVar17 + 0x39);
    uStack_3a0 = (undefined1)((ulong)*(undefined8 *)((long)puVar17 + 0x39) >> 0x38);
    uStack_3d8 = puVar17[1];
    uStack_3e0 = *puVar17;
    uStack_3c8 = puVar17[3];
    uStack_3d0 = puVar17[2];
    puVar17 = &uStack_3e0;
    FUN_10470a754(puVar17,&uStack_390);
    if (((ulong)puVar17 & 1) == 0) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_628 + 0x6c));
  puVar17 = (undefined8 *)((long)param_2 + (long)*(int *)(lStack_628 + 0x6c));
  uVar19 = *puVar1;
  uVar27 = puVar1[1];
  uVar6 = *puVar17;
  uVar21 = puVar17[1];
  if (uVar27 >> 0x3c < 0xf) {
    if (0xe < uVar21 >> 0x3c) goto LAB_1046dd2e0;
    func_0x000100de78a0(uVar19,uVar27);
    func_0x000100de78a0(uVar6,uVar21);
    uVar18 = uVar19;
    func_0x000100e25fcc(uVar19,uVar27,uVar6,uVar21);
    func_0x0001000b44c0(uVar6,uVar21);
    func_0x0001000b44c0(uVar19,uVar27);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (uVar21 >> 0x3c < 0xf) {
LAB_1046dd2e0:
      func_0x000100de78a0(uVar19,uVar27);
      func_0x000100de78a0(uVar6,uVar21);
      func_0x0001000b44c0(uVar19,uVar27);
      func_0x0001000b44c0(uVar6,uVar21);
      return 0;
    }
    func_0x000100de78a0(uVar19,uVar27);
    func_0x000100de78a0(uVar6,uVar21);
    func_0x0001000b44c0(uVar19,uVar27);
  }
  puVar17 = (undefined8 *)((long)param_1 + (long)*(int *)(lStack_628 + 0x70));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lStack_628 + 0x70));
  uStack_408 = puVar17[0x11];
  uStack_410 = puVar17[0x10];
  uStack_3f8 = puVar17[0x13];
  uStack_400 = puVar17[0x12];
  uStack_3e8 = puVar17[0x15];
  uStack_3f0 = puVar17[0x14];
  uStack_4e8 = puVar17[0x17];
  uStack_4f0 = puVar17[0x16];
  uStack_448 = puVar17[9];
  uStack_450 = puVar17[8];
  uStack_438 = puVar17[0xb];
  uStack_440 = puVar17[10];
  uStack_428 = puVar17[0xd];
  uStack_430 = puVar17[0xc];
  uStack_418 = puVar17[0xf];
  uStack_420 = puVar17[0xe];
  uStack_488 = puVar17[1];
  uStack_490 = *puVar17;
  uStack_478 = puVar17[3];
  uStack_480 = puVar17[2];
  uStack_468 = puVar17[5];
  uStack_470 = puVar17[4];
  uStack_458 = puVar17[7];
  uStack_460 = puVar17[6];
  uStack_4e0 = puVar17[0x18];
  uStack_4d8 = (undefined1)puVar17[0x19];
  uStack_4cf = *(undefined8 *)((long)puVar17 + 0xd1);
  uStack_4d7 = (undefined7)*(undefined8 *)((long)puVar17 + 0xc9);
  uStack_4d0 = (undefined1)((ulong)*(undefined8 *)((long)puVar17 + 0xc9) >> 0x38);
  uStack_598 = puVar3[0x11];
  uStack_5a0 = puVar3[0x10];
  uStack_588 = puVar3[0x13];
  uStack_590 = puVar3[0x12];
  uStack_578 = puVar3[0x15];
  uStack_580 = puVar3[0x14];
  uStack_4b8 = puVar3[0x17];
  uStack_4c0 = puVar3[0x16];
  uStack_5d8 = puVar3[9];
  uStack_5e0 = puVar3[8];
  uStack_5c8 = puVar3[0xb];
  uStack_5d0 = puVar3[10];
  uStack_5b8 = puVar3[0xd];
  uStack_5c0 = puVar3[0xc];
  uStack_5a8 = puVar3[0xf];
  uStack_5b0 = puVar3[0xe];
  uStack_618 = puVar3[1];
  uStack_620 = *puVar3;
  uStack_608 = puVar3[3];
  uStack_610 = puVar3[2];
  uStack_5f8 = puVar3[5];
  uStack_600 = puVar3[4];
  uStack_5e8 = puVar3[7];
  uStack_5f0 = puVar3[6];
  uStack_4b0 = puVar3[0x18];
  uStack_4a8 = (undefined1)puVar3[0x19];
  uStack_49f = *(undefined8 *)((long)puVar3 + 0xd1);
  uStack_4a7 = (undefined7)*(undefined8 *)((long)puVar3 + 0xc9);
  uStack_4a0 = (undefined1)((ulong)*(undefined8 *)((long)puVar3 + 0xc9) >> 0x38);
  puVar17 = &uStack_490;
  FUN_1047084a8(puVar17,&uStack_620);
  if (((ulong)puVar17 & 1) == 0) {
    return 0;
  }
  puVar17 = &uStack_4f0;
  FUN_104708144(puVar17,&uStack_4c0);
  if (((ulong)puVar17 & 1) == 0) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(lStack_628 + 0x74)) !=
      *(char *)((long)param_2 + (long)*(int *)(lStack_628 + 0x74))) {
    return 0;
  }
  if (*(int *)((long)param_1 + (long)*(int *)(lStack_628 + 0x78)) !=
      *(int *)((long)param_2 + (long)*(int *)(lStack_628 + 0x78))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(lStack_628 + 0x7c)) !=
      *(char *)((long)param_2 + (long)*(int *)(lStack_628 + 0x7c))) {
    return 0;
  }
  param_1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_628 + 0x80));
  uVar19 = param_1[1];
  param_2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_628 + 0x80));
  uVar27 = param_2[1];
  if (uVar19 == 0) {
    if (uVar27 != 0) {
      return 0;
    }
    return 1;
  }
  if (uVar27 == 0) {
    return 0;
  }
  uVar21 = *param_1;
  if (((uVar21 != *param_2) || (uVar19 != uVar27)) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar21 & 1) == 0)) {
    return 0;
  }
  return 1;
}



/* Entry: 1046d9e54; end: 1046da18f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1046d9e54(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [8];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar16;
  long lVar17;
  code *pcVar18;
  undefined8 auStack_f0 [7];
  undefined8 uStack_b8;
  undefined1 auStack_b7 [7];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 auStack_a0 [9];
  undefined1 auStack_58 [8];
  
  lVar14 = 0x112db3a00;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)auStack_f0 - extraout_x8;
  lVar14 = 0;
  FUN_1046d90b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  puVar16 = (undefined8 *)(lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar15 = 0;
  FUN_10477ea9c();
  pcVar18 = *(code **)(*(long *)(lVar15 + -8) + 0x38);
  (*pcVar18)(lVar17,1,1,lVar15);
  func_0x000101541034(auStack_f0 + 1);
  iVar3 = *(int *)(lVar14 + 0x28);
  (*pcVar18)((long)puVar16 + (long)iVar3,1,1,lVar15);
  uVar12 = auStack_a0[2];
  uVar11 = auStack_a0[1];
  uVar10 = uStack_a8;
  uVar8 = uStack_b8;
  uVar7 = auStack_f0[5];
  uVar6 = auStack_f0[3];
  uVar5 = auStack_f0[1];
  iVar4 = *(int *)(lVar14 + 0x34);
  puVar1 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x50));
  puVar1[9] = auStack_a0[0];
  puVar1[8] = uVar10;
  auVar9 = auStack_b0;
  puVar1[0xb] = uVar12;
  puVar1[10] = uVar11;
  puVar1[5] = auStack_f0[6];
  puVar1[4] = uVar7;
  uVar7 = auStack_f0[4];
  puVar1[7] = auVar9;
  puVar1[6] = uVar8;
  uVar12 = auStack_a0[7];
  uVar11 = auStack_a0[5];
  uVar10 = auStack_a0[4];
  uVar8 = auStack_a0[3];
  *(undefined1 *)(puVar1 + 0x12) = auStack_58[0];
  uVar13 = auStack_a0[8];
  puVar1[0xf] = auStack_a0[6];
  puVar1[0xe] = uVar11;
  puVar1[0x11] = uVar13;
  puVar1[0x10] = uVar12;
  puVar1[0xd] = uVar10;
  puVar1[0xc] = uVar8;
  puVar1[1] = auStack_f0[2];
  *puVar1 = uVar5;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar16[3] = 10;
  puVar16[2] = 0x17;
  puVar16[4] = 0;
  puVar16[5] = 0xe000000000000000;
  puVar16[7] = 0;
  puVar16[6] = 0;
  puVar16[9] = 0;
  puVar16[8] = 0;
  FUN_1046d90e8(lVar17,(long)puVar16 + (long)iVar3);
  *(undefined1 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x2c)) = 0;
  *(undefined1 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x30)) = 0;
  *(undefined8 *)((long)puVar16 + (long)iVar4) = 0;
  puVar2 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x38));
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x3c)) = 0;
  *(undefined8 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x40)) = 3;
  puVar2 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x44));
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[2] = 1;
  puVar2 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x48));
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x4c));
  puVar2[1] = auStack_f0[2];
  *puVar2 = auStack_f0[1];
  puVar2[3] = auStack_f0[4];
  puVar2[2] = auStack_f0[3];
  puVar2[9] = auStack_a0[0];
  puVar2[8] = uStack_a8;
  puVar2[0xb] = auStack_a0[2];
  puVar2[10] = auStack_a0[1];
  puVar2[5] = auStack_f0[6];
  puVar2[4] = auStack_f0[5];
  puVar2[7] = auStack_b0;
  puVar2[6] = uStack_b8;
  puVar2[0x11] = auStack_a0[8];
  puVar2[0x10] = auStack_a0[7];
  puVar2[0xd] = auStack_a0[4];
  puVar2[0xc] = auStack_a0[3];
  puVar2[0xf] = auStack_a0[6];
  puVar2[0xe] = auStack_a0[5];
  *(undefined1 *)(puVar2 + 0x12) = auStack_58[0];
  puVar1[1] = auStack_f0[2];
  *puVar1 = auStack_f0[1];
  puVar1[3] = auStack_f0[4];
  puVar1[2] = auStack_f0[3];
  puVar1[9] = auStack_a0[0];
  puVar1[8] = uStack_a8;
  puVar1[0xb] = auStack_a0[2];
  puVar1[10] = auStack_a0[1];
  puVar1[5] = auStack_f0[6];
  puVar1[4] = auStack_f0[5];
  puVar1[7] = auStack_b0;
  puVar1[6] = uStack_b8;
  puVar1[0xf] = auStack_a0[6];
  puVar1[0xe] = auStack_a0[5];
  puVar1[0x11] = auStack_a0[8];
  puVar1[0x10] = auStack_a0[7];
  *(undefined1 *)(puVar1 + 0x12) = auStack_58[0];
  puVar1[0xd] = auStack_a0[4];
  puVar1[0xc] = auStack_a0[3];
  puVar1 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x54));
  puVar1[1] = 2;
  *puVar1 = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x58));
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x5c));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x60));
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)((long)puVar16 + (long)*(int *)(lVar14 + 100)) = 0;
  puVar1 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x68));
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((long)puVar1 + 0x41) = 0;
  *(undefined8 *)((long)puVar1 + 0x39) = 0;
  *(undefined1 *)((long)puVar1 + 0x49) = 1;
  puVar1 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x6c));
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  puVar1 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x70));
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x16] = 0;
  *(undefined1 *)(puVar1 + 0x17) = 1;
  puVar1[0x18] = 0;
  *(undefined1 *)(puVar1 + 0x19) = 1;
  puVar1[0x1a] = 0;
  *(undefined1 *)(puVar1 + 0x1b) = 1;
  *(undefined1 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x74)) = 0;
  *(undefined8 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x78)) = 0;
  *(undefined1 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x7c)) = 0;
  puVar1 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x80));
  FUN_1047c6864(0);
  *puVar1 = 0;
  puVar1[1] = 0;
  _objc_allocWithZone();
  func_0x0001047c2b40();
  puRam00000001138151d0 = puVar16;
  return;
}



/* Entry: 1046da190; end: 1046da1cf; +[SCAdSnap identity] */

void FUN_1046da190(void)

{
  if (lRam000000011308db90 != -1) {
    _swift_once(0x11308db90,FUN_1046d9e54);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138151d0);
  return;
}



/* Entry: 1046da1d0; end: 1046da2d3; -[SCAdSnap withIdentifier:] */

void FUN_1046da1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  FUN_1046d90b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = (long)puVar2 - extraout_x12;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_retain(param_1);
  _objc_retain();
  FUN_1047c15e8(lVar1);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x28));
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  func_0x000104707714(lVar1,puVar2,FUN_1046d90b0);
  FUN_1047c6864(0);
  _objc_allocWithZone();
  func_0x0001047c2b40(puVar2);
  _objc_release(param_1);
  func_0x0001047077e0(lVar1,FUN_1046d90b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1046da2d4; end: 1046da3bf; -[SCAdSnap withAdProductType:] */

void FUN_1046da2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  FUN_1046d90b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = (long)puVar2 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1047c15e8(lVar1);
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  func_0x000104707714(lVar1,puVar2,FUN_1046d90b0);
  FUN_1047c6864(0);
  _objc_allocWithZone();
  func_0x0001047c2b40(puVar2);
  _objc_release(param_1);
  func_0x0001047077e0(lVar1,FUN_1046d90b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1046da3c0; end: 1046da617; -[SCAdSnap withAdType:] */

void FUN_1046da3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  FUN_1046d90b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = (long)puVar2 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1047c15e8(lVar1);
  *(undefined8 *)(lVar1 + 0x10) = param_3;
  func_0x000104707714(lVar1,puVar2,FUN_1046d90b0);
  FUN_1047c6864(0);
  _objc_allocWithZone();
  func_0x0001047c2b40(puVar2);
  _objc_release(param_1);
  func_0x0001047077e0(lVar1,FUN_1046d90b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1046da618; end: 1046da677; -[SCAdSnap withSnapMedia:] */

void FUN_1046da618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x0001046da4ac(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1046da678; end: 1046da9b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1046da678(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined *puStack_78;
  
  lVar7 = 0;
  FUN_1046d90b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar9 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar9 - extraout_x12;
  _objc_retain();
  FUN_1047c15e8(lVar13);
  if (param_1 == (long *)0x0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    if ((ulong)param_1 >> 0x3e == 0) {
      plVar12 = (long *)((long *)((ulong)param_1 & 0xffffffffffffff8))[2];
    }
    else {
      plVar12 = param_1;
      if (-1 < (long)param_1) {
        plVar12 = (long *)((ulong)param_1 & 0xffffffffffffff8);
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (plVar12 != (long *)0x0) {
      puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001046c70e4(0,(ulong)plVar12 & ((long)plVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
      plStack_80 = plVar12;
      if ((long)plVar12 < 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1046da9b8);
        (*pcVar6)();
      }
      lStack_a0 = lVar7;
      lStack_98 = lVar13;
      lStack_90 = lVar9;
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        plStack_80 = param_1 + 4;
        puVar15 = puStack_78;
        do {
          lVar7 = *plStack_80;
          uVar1 = *(undefined8 *)(lVar7 + _DAT_11308f2f0);
          uVar3 = ((undefined8 *)(lVar7 + _DAT_11308f2f0))[1];
          uVar14 = *(undefined8 *)(lVar7 + _DAT_11308f2f8);
          uVar10 = *(undefined8 *)(lVar7 + _DAT_11308f300);
          uVar16 = *(undefined8 *)(lVar7 + _DAT_11308f308);
          uVar11 = *(undefined8 *)(lVar7 + _DAT_11308f310);
          uVar2 = *(ulong *)(puVar15 + 0x10);
          uVar4 = *(ulong *)(puVar15 + 0x18);
          plStack_80 = plStack_80 + 1;
          puStack_78 = puVar15;
          _swift_bridgeObjectRetain(uVar3);
          if (uVar4 >> 1 <= uVar2) {
            func_0x0001046c70e4(1 < uVar4,uVar2 + 1,1);
            puVar15 = puStack_78;
          }
          *(ulong *)(puVar15 + 0x10) = uVar2 + 1;
          *(undefined8 *)(puVar15 + uVar2 * 0x30 + 0x20) = uVar1;
          *(undefined8 *)(puVar15 + uVar2 * 0x30 + 0x28) = uVar3;
          *(undefined8 *)(puVar15 + uVar2 * 0x30 + 0x30) = uVar14;
          *(undefined8 *)(puVar15 + uVar2 * 0x30 + 0x38) = uVar10;
          *(undefined8 *)(puVar15 + uVar2 * 0x30 + 0x40) = uVar16;
          *(undefined8 *)(puVar15 + uVar2 * 0x30 + 0x48) = uVar11;
          plVar12 = (long *)((long)plVar12 + -1);
          lVar7 = lStack_a0;
          lVar9 = lStack_90;
          lVar13 = lStack_98;
        } while (plVar12 != (long *)0x0);
      }
      else {
        plVar12 = (long *)0x0;
        plStack_88 = param_1;
        do {
          puVar15 = puStack_78;
          plVar8 = plVar12;
          func_0x000101542dd0(plVar12,plStack_88);
          uVar1 = *(undefined8 *)((long)plVar8 + _DAT_11308f2f0);
          uVar3 = ((undefined8 *)((long)plVar8 + _DAT_11308f2f0))[1];
          uVar10 = *(undefined8 *)((long)plVar8 + _DAT_11308f2f8);
          uVar11 = *(undefined8 *)((long)plVar8 + _DAT_11308f300);
          uVar16 = *(undefined8 *)((long)plVar8 + _DAT_11308f308);
          uVar14 = *(undefined8 *)((long)plVar8 + _DAT_11308f310);
          _swift_bridgeObjectRetain(uVar3);
          _swift_unknownObjectRelease(plVar8);
          puStack_78 = puVar15;
          uVar2 = *(ulong *)(puVar15 + 0x10);
          if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar2) {
            func_0x0001046c70e4(1 < *(ulong *)(puVar15 + 0x18),uVar2 + 1,1);
          }
          plVar12 = (long *)((long)plVar12 + 1);
          *(ulong *)(puStack_78 + 0x10) = uVar2 + 1;
          *(undefined8 *)(puStack_78 + uVar2 * 0x30 + 0x20) = uVar1;
          *(undefined8 *)(puStack_78 + uVar2 * 0x30 + 0x28) = uVar3;
          *(undefined8 *)(puStack_78 + uVar2 * 0x30 + 0x30) = uVar10;
          *(undefined8 *)(puStack_78 + uVar2 * 0x30 + 0x38) = uVar11;
          *(undefined8 *)(puStack_78 + uVar2 * 0x30 + 0x40) = uVar16;
          *(undefined8 *)(puStack_78 + uVar2 * 0x30 + 0x48) = uVar14;
          lVar7 = lStack_a0;
          lVar9 = lStack_90;
          lVar13 = lStack_98;
          puVar15 = puStack_78;
        } while (plStack_80 != plVar12);
      }
    }
  }
  iVar5 = *(int *)(lVar7 + 0x34);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + iVar5));
  *(undefined **)(lVar13 + iVar5) = puVar15;
  func_0x000104707714(lVar13,lVar9,FUN_1046d90b0);
  FUN_1047c6864(0);
  _objc_allocWithZone();
  func_0x0001047c2b40(lVar9);
  func_0x0001047077e0(lVar13,FUN_1046d90b0);
  return lVar9;
}


