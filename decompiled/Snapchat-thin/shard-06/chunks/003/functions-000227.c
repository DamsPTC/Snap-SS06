/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1047a510c; end: 1047a5113;  */

void FUN_1047a510c(void)

{
  undefined8 *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_88 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  __ss6HasherV8_combineyys6UInt64VF(*unaff_x20);
  __ss6HasherV8_combineyySuF(unaff_x20[1]);
  dVar2 = (double)unaff_x20[3];
  dVar3 = (double)unaff_x20[4];
  dVar4 = (double)unaff_x20[5];
  dVar1 = 0.0;
  if ((double)unaff_x20[2] != 0.0) {
    dVar1 = (double)unaff_x20[2];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar4 != 0.0) {
    dVar1 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047a5114; end: 1047a514b;  */

void FUN_1047a5114(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1047a4fc4(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047a514c; end: 1047a518b;  */

void FUN_1047a514c(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1047a53dc(&uStack_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[3] = uStack_38;
    param_1[2] = uStack_40;
    param_1[5] = uStack_28;
    param_1[4] = uStack_30;
  }
  return;
}



/* Entry: 1047a518c; end: 1047a51e3;  */

void FUN_1047a518c(void)

{
  FUN_1047a4e54();
  return;
}



/* Entry: 1047a51e4; end: 1047a5243;  */

undefined8 FUN_1047a51e4(long *param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  
  if (((*param_1 == *param_2) && ((int)param_1[1] == (int)param_2[1])) &&
     ((double)param_1[2] == (double)param_2[2])) {
    bVar1 = false;
    if (((double)param_1[3] == (double)param_2[3]) &&
       (bVar1 = false, !NAN((double)param_1[4]) && !NAN((double)param_2[4]))) {
      bVar1 = (double)param_1[4] == (double)param_2[4];
    }
    bVar2 = false;
    if ((bVar1) && (bVar2 = false, !NAN((double)param_1[5]) && !NAN((double)param_2[5]))) {
      bVar2 = (double)param_1[5] == (double)param_2[5];
    }
    if (bVar2) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1047a5244; end: 1047a52c3;  */

void FUN_1047a5244(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ec38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd344cc;
  _swift_getWitnessTable(&UNK_10dd344cc,&UNK_1107a0910);
  puRam000000011308ec38 = puVar1;
  return;
}



/* Entry: 1047a52c4; end: 1047a53db;  */

undefined4 FUN_1047a52c4(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_1 == 0x6d617473656d6974 && param_2 == -0x14ffffffff8cb290) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6d617473656d6974,0xeb00000000734d70,param_1,param_2,0), (uVar2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 0;
  }
  else {
    if ((param_1 != 0x65707974) || (param_2 != -0x1c00000000000000)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x65707974,0xe400000000000000,param_1,param_2,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if ((param_1 == 0x6e6f697469736f70) && (param_2 == -0x1800000000000000)) {
          _swift_bridgeObjectRelease(0xe800000000000000);
          return 2;
        }
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x6e6f697469736f70,0xe800000000000000,param_1,param_2,0);
        _swift_bridgeObjectRelease(param_2);
        if ((uVar2 & 1) != 0) {
          return 2;
        }
        return 3;
      }
    }
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1047a53dc; end: 1047a5597;  */

/* WARNING: Removing unreachable block (ram,0x0001047a54ec) */

void FUN_1047a53dc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_51;
  
  lVar3 = 0x11308ec68;
  func_0x0001000285a8(0x11308ec68,&UNK_10dd34520);
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_1047a5244();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&uStack_a0 - extraout_x8,&UNK_1107a0910,&UNK_1107a0910,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_80 = 0;
    puVar5 = &uStack_80;
    __ss22KeyedDecodingContainerV6decode_6forKeys6UInt64VAFm_xtKF(puVar5,lVar3);
    uStack_51 = 1;
    puVar6 = puVar5;
    func_0x0001047a58a0();
    puVar7 = &UNK_110798ed8;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_80,&UNK_110798ed8,&uStack_51,lVar3,&UNK_110798ed8,puVar6);
    uVar1 = CONCAT71(uStack_7f,uStack_80);
    uStack_51 = 2;
    func_0x000104712be8();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_80,&UNK_11079d440,&uStack_51,lVar3,&UNK_11079d440,puVar7);
    (**(code **)(lVar8 + 8))((long)&uStack_a0 - extraout_x8,lVar3);
    uStack_90 = CONCAT71(uStack_7f,uStack_80);
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = uStack_78;
    func_0x0001000834e4(param_2);
    *param_1 = puVar5;
    param_1[1] = uVar1;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    param_1[5] = uStack_98;
    param_1[4] = uStack_a0;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 1047a5598; end: 1047a559b;  */

void FUN_1047a5598(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ec48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd343c8;
  _swift_getWitnessTable(&UNK_10dd343c8,&UNK_1107a0870);
  puRam000000011308ec48 = puVar1;
  return;
}



/* Entry: 1047a559c; end: 1047a55db;  */

void FUN_1047a559c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ec48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd343c8;
  _swift_getWitnessTable(&UNK_10dd343c8,&UNK_1107a0870);
  puRam000000011308ec48 = puVar1;
  return;
}



/* Entry: 1047a55dc; end: 1047a5607;  */

long FUN_1047a55dc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1047a5608; end: 1047a57d7;  */

int FUN_1047a5608(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1047a57d8; end: 1047a5817;  */

void FUN_1047a57d8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ec50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd344a4;
  _swift_getWitnessTable(&UNK_10dd344a4,&UNK_1107a0910);
  puRam000000011308ec50 = puVar1;
  return;
}



/* Entry: 1047a5818; end: 1047a581b;  */

void FUN_1047a5818(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ec58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3443c;
  _swift_getWitnessTable(&UNK_10dd3443c,&UNK_1107a0910);
  puRam000000011308ec58 = puVar1;
  return;
}



/* Entry: 1047a581c; end: 1047a585b;  */

void FUN_1047a581c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ec58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3443c;
  _swift_getWitnessTable(&UNK_10dd3443c,&UNK_1107a0910);
  puRam000000011308ec58 = puVar1;
  return;
}



/* Entry: 1047a585c; end: 1047a585f;  */

void FUN_1047a585c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ec60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34414;
  _swift_getWitnessTable(&UNK_10dd34414,&UNK_1107a0910);
  puRam000000011308ec60 = puVar1;
  return;
}



/* Entry: 1047a5860; end: 1047a58df;  */

void FUN_1047a5860(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ec60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34414;
  _swift_getWitnessTable(&UNK_10dd34414,&UNK_1107a0910);
  puRam000000011308ec60 = puVar1;
  return;
}



/* Entry: 1047a58e0; end: 1047a58f3;  */

bool FUN_1047a58e0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1047a58f4; end: 1047a599f;  */

void FUN_1047a58f4(void)

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



/* Entry: 1047a59a0; end: 1047a5a3f;  */

undefined1  [16] FUN_1047a59a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar3 = *unaff_x20;
  uVar5 = 0x6d617473656d6974;
  uVar2 = 0xed0000656372756f;
  uVar4 = 0x537069746c6f6f74;
  if (bVar3 != 2) {
    uVar2 = 0xef6e6f697469736f;
    uVar4 = 0x507069746c6f6f74;
  }
  uVar1 = 0xeb00000000734d70;
  if (bVar3 != 0) {
    uVar5 = 0xd000000000000012;
    uVar1 = 0x800000010f20d100;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 1047a5a40; end: 1047a5a63;  */

void FUN_1047a5a40(undefined1 *param_1,undefined1 param_2)

{
  FUN_1047a6008();
  *param_1 = param_2;
  return;
}



/* Entry: 1047a5a64; end: 1047a5a7b;  */

undefined1  [16] FUN_1047a5a64(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1047a5a7c; end: 1047a5acb;  */

void FUN_1047a5a7c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1047a5f48();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1047a5acc; end: 1047a5acf;  */

undefined8 FUN_1047a5acc(long *param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  
  if ((((*param_1 == *param_2) && ((int)param_1[1] == (int)param_2[1])) &&
      ((int)param_1[2] == (int)param_2[2])) && ((double)param_1[3] == (double)param_2[3])) {
    bVar1 = false;
    if (((double)param_1[4] == (double)param_2[4]) &&
       (bVar1 = false, !NAN((double)param_1[5]) && !NAN((double)param_2[5]))) {
      bVar1 = (double)param_1[5] == (double)param_2[5];
    }
    bVar2 = false;
    if ((bVar1) && (bVar2 = false, !NAN((double)param_1[6]) && !NAN((double)param_2[6]))) {
      bVar2 = (double)param_1[6] == (double)param_2[6];
    }
    if (bVar2) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1047a5ad0; end: 1047a5c83;  */

void FUN_1047a5ad0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar6;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_51;
  
  lVar2 = 0x11308ec78;
  func_0x0001000285a8(0x11308ec78,&UNK_10dd34530);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar3);
  FUN_1047a5f48();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            ((long)&uStack_80 - extraout_x8,&UNK_1107a0ad8,&UNK_1107a0ad8,param_1,uVar3,uVar1);
  uVar3 = *unaff_x20;
  uStack_80 = uStack_80 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyySu_xtKF(uVar3,&uStack_80,lVar2);
  if (unaff_x21 == 0) {
    uStack_80 = unaff_x20[1];
    uStack_51 = 1;
    func_0x0001047a5f88();
    puVar4 = &uStack_80;
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (puVar4,&uStack_51,lVar2,&UNK_110798f80,uVar3);
    uStack_80 = unaff_x20[2];
    uStack_51 = 2;
    func_0x0001047a5fc8();
    puVar5 = &uStack_80;
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (puVar5,&uStack_51,lVar2,&UNK_110799028,puVar4);
    uStack_78 = unaff_x20[4];
    uStack_80 = unaff_x20[3];
    uStack_68 = unaff_x20[6];
    uStack_70 = unaff_x20[5];
    uStack_51 = 3;
    func_0x0001047126a8();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&uStack_80,&uStack_51,lVar2,&UNK_11079d440,puVar5);
  }
  (**(code **)(lVar6 + 8))((long)&uStack_80 - extraout_x8,lVar2);
  return;
}



/* Entry: 1047a5c84; end: 1047a5ddf;  */

void FUN_1047a5c84(void)

{
  undefined8 *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  __ss6HasherV8_combineyySuF(*unaff_x20);
  __ss6HasherV8_combineyySuF(unaff_x20[1]);
  __ss6HasherV8_combineyySuF(unaff_x20[2]);
  dVar2 = (double)unaff_x20[4];
  dVar3 = (double)unaff_x20[5];
  dVar4 = (double)unaff_x20[6];
  dVar1 = 0.0;
  if ((double)unaff_x20[3] != 0.0) {
    dVar1 = (double)unaff_x20[3];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar4 != 0.0) {
    dVar1 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  return;
}



/* Entry: 1047a5de0; end: 1047a5de7;  */

void FUN_1047a5de0(void)

{
  undefined8 *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_88 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  __ss6HasherV8_combineyySuF(*unaff_x20);
  __ss6HasherV8_combineyySuF(unaff_x20[1]);
  __ss6HasherV8_combineyySuF(unaff_x20[2]);
  dVar2 = (double)unaff_x20[4];
  dVar3 = (double)unaff_x20[5];
  dVar4 = (double)unaff_x20[6];
  dVar1 = 0.0;
  if ((double)unaff_x20[3] != 0.0) {
    dVar1 = (double)unaff_x20[3];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar4 != 0.0) {
    dVar1 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047a5de8; end: 1047a5e1f;  */

void FUN_1047a5de8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1047a5c84(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047a5e20; end: 1047a5e6b;  */

void FUN_1047a5e20(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1047a6184(&uStack_58);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_50;
    *param_1 = uStack_58;
    param_1[3] = uStack_40;
    param_1[2] = uStack_48;
    param_1[5] = uStack_30;
    param_1[4] = uStack_38;
    param_1[6] = uStack_28;
  }
  return;
}



/* Entry: 1047a5e6c; end: 1047a5ed7;  */

void FUN_1047a5e6c(void)

{
  FUN_1047a5ad0();
  return;
}



/* Entry: 1047a5ed8; end: 1047a5f47;  */

undefined8 FUN_1047a5ed8(long *param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  
  if ((((*param_1 == *param_2) && ((int)param_1[1] == (int)param_2[1])) &&
      ((int)param_1[2] == (int)param_2[2])) && ((double)param_1[3] == (double)param_2[3])) {
    bVar1 = false;
    if (((double)param_1[4] == (double)param_2[4]) &&
       (bVar1 = false, !NAN((double)param_1[5]) && !NAN((double)param_2[5]))) {
      bVar1 = (double)param_1[5] == (double)param_2[5];
    }
    bVar2 = false;
    if ((bVar1) && (bVar2 = false, !NAN((double)param_1[6]) && !NAN((double)param_2[6]))) {
      bVar2 = (double)param_1[6] == (double)param_2[6];
    }
    if (bVar2) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1047a5f48; end: 1047a6007;  */

void FUN_1047a5f48(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ec80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd346c8;
  _swift_getWitnessTable(&UNK_10dd346c8,&UNK_1107a0ad8);
  puRam000000011308ec80 = puVar1;
  return;
}



/* Entry: 1047a6008; end: 1047a6183;  */

undefined4 FUN_1047a6008(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_1 == 0x6d617473656d6974 && param_2 == -0x14ffffffff8cb290) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6d617473656d6974,0xeb00000000734d70,param_1,param_2,0), (uVar2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 0;
  }
  else {
    if ((param_1 != -0x2fffffffffffffee) || (param_2 != -0x7ffffffef0df2f00)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000012,0x800000010f20d100,param_1,param_2,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_1 != 0x537069746c6f6f74) || (param_2 != -0x12ffff9a9c8d8a91)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x537069746c6f6f74,0xed0000656372756f,param_1,param_2,0), (uVar2 & 1) == 0))
        {
          uVar2 = 0;
          if ((param_1 == 0x507069746c6f6f74) && (param_2 == -0x109190968b968c91)) {
            _swift_bridgeObjectRelease(0xef6e6f697469736f);
            return 3;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x507069746c6f6f74,0xef6e6f697469736f,param_1,param_2,0);
          _swift_bridgeObjectRelease(param_2);
          if ((uVar2 & 1) != 0) {
            return 3;
          }
          return 4;
        }
        _swift_bridgeObjectRelease(param_2);
        return 2;
      }
    }
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1047a6184; end: 1047a638f;  */

/* WARNING: Removing unreachable block (ram,0x0001047a62d4) */

void FUN_1047a6184(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long unaff_x21;
  long lVar9;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_51;
  
  lVar3 = 0x11308ecb8;
  func_0x0001000285a8(0x11308ecb8,&UNK_10dd34718);
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_1047a5f48();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&uStack_b0 - extraout_x8,&UNK_1107a0ad8,&UNK_1107a0ad8,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_80 = 0;
    puVar5 = &uStack_80;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2um_xtKF(puVar5,lVar3);
    uStack_51 = 1;
    puVar6 = puVar5;
    func_0x0001047a6698();
    puVar7 = &UNK_110798f80;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_80,&UNK_110798f80,&uStack_51,lVar3,&UNK_110798f80,puVar6);
    uVar1 = CONCAT71(uStack_7f,uStack_80);
    uStack_51 = 2;
    func_0x0001047a66d8();
    puVar8 = &UNK_110799028;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_80,&UNK_110799028,&uStack_51,lVar3,&UNK_110799028,puVar7);
    uStack_88 = CONCAT71(uStack_7f,uStack_80);
    uStack_51 = 3;
    func_0x000104712be8();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_80,&UNK_11079d440,&uStack_51,lVar3,&UNK_11079d440,puVar8);
    (**(code **)(lVar9 + 8))((long)&uStack_b0 - extraout_x8,lVar3);
    uStack_a0 = CONCAT71(uStack_7f,uStack_80);
    uStack_a8 = uStack_68;
    uStack_b0 = uStack_70;
    uStack_98 = uStack_78;
    func_0x0001000834e4(param_2);
    *param_1 = puVar5;
    param_1[1] = uVar1;
    param_1[2] = uStack_88;
    param_1[6] = uStack_a8;
    param_1[5] = uStack_b0;
    param_1[4] = uStack_98;
    param_1[3] = uStack_a0;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 1047a6390; end: 1047a6393;  */

void FUN_1047a6390(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ec98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd345c8;
  _swift_getWitnessTable(&UNK_10dd345c8,&UNK_1107a0a38);
  puRam000000011308ec98 = puVar1;
  return;
}



/* Entry: 1047a6394; end: 1047a63d3;  */

void FUN_1047a6394(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ec98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd345c8;
  _swift_getWitnessTable(&UNK_10dd345c8,&UNK_1107a0a38);
  puRam000000011308ec98 = puVar1;
  return;
}



/* Entry: 1047a63d4; end: 1047a63ff;  */

long FUN_1047a63d4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1047a6400; end: 1047a65cf;  */

int FUN_1047a6400(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1047a65d0; end: 1047a660f;  */

void FUN_1047a65d0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308eca0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd346a0;
  _swift_getWitnessTable(&UNK_10dd346a0,&UNK_1107a0ad8);
  puRam000000011308eca0 = puVar1;
  return;
}



/* Entry: 1047a6610; end: 1047a6613;  */

void FUN_1047a6610(void)

{
  undefined *puVar1;
  
  if (puRam000000011308eca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34638;
  _swift_getWitnessTable(&UNK_10dd34638,&UNK_1107a0ad8);
  puRam000000011308eca8 = puVar1;
  return;
}



/* Entry: 1047a6614; end: 1047a6653;  */

void FUN_1047a6614(void)

{
  undefined *puVar1;
  
  if (puRam000000011308eca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34638;
  _swift_getWitnessTable(&UNK_10dd34638,&UNK_1107a0ad8);
  puRam000000011308eca8 = puVar1;
  return;
}



/* Entry: 1047a6654; end: 1047a6657;  */

void FUN_1047a6654(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ecb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34610;
  _swift_getWitnessTable(&UNK_10dd34610,&UNK_1107a0ad8);
  puRam000000011308ecb0 = puVar1;
  return;
}



/* Entry: 1047a6658; end: 1047a6717;  */

void FUN_1047a6658(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ecb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34610;
  _swift_getWitnessTable(&UNK_10dd34610,&UNK_1107a0ad8);
  puRam000000011308ecb0 = puVar1;
  return;
}



/* Entry: 1047a6718; end: 1047a696f;  */

void FUN_1047a6718(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9,undefined8 param_10,undefined8 *param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 *param_14,undefined1 param_15,undefined4 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined2 param_24,
                  undefined4 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined1 param_34,undefined4 param_35,undefined8 *param_36,
                  undefined1 param_37,undefined4 param_38,undefined8 param_39,undefined8 param_40,
                  undefined1 param_41,undefined4 param_42,undefined8 *param_43,undefined1 param_44,
                  undefined4 param_45,undefined8 *param_46,undefined8 param_47)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined7 uStack_160;
  undefined1 uStack_159;
  undefined7 uStack_158;
  undefined1 uStack_151;
  undefined7 uStack_150;
  undefined1 uStack_149;
  undefined7 uStack_148;
  undefined1 uStack_141;
  undefined7 uStack_140;
  undefined1 uStack_139;
  undefined7 uStack_138;
  undefined1 uStack_131;
  undefined7 uStack_120;
  undefined1 uStack_119;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined7 uStack_110;
  undefined1 uStack_109;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined7 uStack_100;
  undefined1 uStack_f9;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  uStack_98 = (undefined4)param_14[1];
  uStack_94 = (undefined4)((ulong)param_14[1] >> 0x20);
  uStack_a0 = (undefined4)*param_14;
  uStack_9c = (undefined4)((ulong)*param_14 >> 0x20);
  uStack_88 = (undefined4)param_14[3];
  uStack_84 = (undefined4)((ulong)param_14[3] >> 0x20);
  uStack_90 = (undefined4)param_14[2];
  uStack_8c = (undefined4)((ulong)param_14[2] >> 0x20);
  uStack_78 = (undefined4)param_14[5];
  uStack_74 = (undefined4)((ulong)param_14[5] >> 0x20);
  uStack_80 = (undefined4)param_14[4];
  uStack_7c = (undefined4)((ulong)param_14[4] >> 0x20);
  uStack_68 = (undefined4)param_14[7];
  uStack_64 = (undefined4)((ulong)param_14[7] >> 0x20);
  uStack_70 = (undefined4)param_14[6];
  uStack_6c = (undefined4)((ulong)param_14[6] >> 0x20);
  uStack_d9 = (undefined1)param_36[1];
  uStack_d8 = (undefined7)((ulong)param_36[1] >> 8);
  uStack_e1 = (undefined1)*param_36;
  uStack_e0 = (undefined7)((ulong)*param_36 >> 8);
  uStack_c9 = (undefined1)param_36[3];
  uStack_c8 = (undefined7)((ulong)param_36[3] >> 8);
  uStack_d1 = (undefined1)param_36[2];
  uStack_d0 = (undefined7)((ulong)param_36[2] >> 8);
  uStack_b9 = (undefined1)param_36[5];
  uStack_b8 = (undefined4)((ulong)param_36[5] >> 8);
  uStack_c1 = (undefined1)param_36[4];
  uStack_c0 = (undefined7)((ulong)param_36[4] >> 8);
  uStack_ac = (undefined4)*(undefined8 *)((long)param_36 + 0x35);
  uStack_a8 = (undefined4)((ulong)*(undefined8 *)((long)param_36 + 0x35) >> 0x20);
  uStack_b4 = (undefined4)*(undefined8 *)((long)param_36 + 0x2d);
  uStack_b0 = (undefined4)((ulong)*(undefined8 *)((long)param_36 + 0x2d) >> 0x20);
  uVar6 = param_43[5];
  uStack_f1 = (undefined1)uVar6;
  uStack_f9 = (undefined1)param_43[4];
  uStack_f8 = (undefined7)((ulong)param_43[4] >> 8);
  uStack_101 = (undefined1)param_43[3];
  uStack_100 = (undefined7)((ulong)param_43[3] >> 8);
  uStack_109 = (undefined1)param_43[2];
  uStack_108 = (undefined7)((ulong)param_43[2] >> 8);
  uStack_111 = (undefined1)param_43[1];
  uStack_110 = (undefined7)((ulong)param_43[1] >> 8);
  uStack_119 = (undefined1)*param_43;
  uStack_118 = (undefined7)((ulong)*param_43 >> 8);
  uVar1 = param_46[6];
  uVar4 = param_46[5];
  uStack_131 = (undefined1)uVar4;
  uStack_139 = (undefined1)param_46[4];
  uStack_138 = (undefined7)((ulong)param_46[4] >> 8);
  uStack_141 = (undefined1)param_46[3];
  uStack_140 = (undefined7)((ulong)param_46[3] >> 8);
  uStack_149 = (undefined1)param_46[2];
  uStack_148 = (undefined7)((ulong)param_46[2] >> 8);
  uStack_151 = (undefined1)param_46[1];
  uStack_150 = (undefined7)((ulong)param_46[1] >> 8);
  uStack_159 = (undefined1)*param_46;
  uStack_158 = (undefined7)((ulong)*param_46 >> 8);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  *(undefined1 *)(param_1 + 6) = param_8;
  *(undefined1 *)((long)param_1 + 0x31) = param_9;
  param_1[7] = param_10;
  uVar2 = param_11[8];
  uVar5 = param_11[0xb];
  uVar3 = param_11[10];
  param_1[0x11] = param_11[9];
  param_1[0x10] = uVar2;
  param_1[0x13] = uVar5;
  param_1[0x12] = uVar3;
  uVar2 = param_11[0xc];
  param_1[0x15] = param_11[0xd];
  param_1[0x14] = uVar2;
  uVar2 = *(undefined8 *)((long)param_11 + 0x6a);
  *(undefined8 *)((long)param_1 + 0xb2) = *(undefined8 *)((long)param_11 + 0x72);
  *(undefined8 *)((long)param_1 + 0xaa) = uVar2;
  uVar2 = *param_11;
  uVar5 = param_11[3];
  uVar3 = param_11[2];
  param_1[9] = param_11[1];
  param_1[8] = uVar2;
  param_1[0xb] = uVar5;
  param_1[10] = uVar3;
  uVar2 = param_11[4];
  uVar5 = param_11[7];
  uVar3 = param_11[6];
  param_1[0xd] = param_11[5];
  param_1[0xc] = uVar2;
  param_1[0xf] = uVar5;
  param_1[0xe] = uVar3;
  *(undefined1 *)((long)param_1 + 0xba) = (undefined1)param_12;
  *(undefined1 *)((long)param_1 + 0xbb) = param_12._1_1_;
  *(ulong *)((long)param_1 + 0xc4) = CONCAT44(uStack_98,uStack_9c);
  *(ulong *)((long)param_1 + 0xbc) = CONCAT44(uStack_a0,uStack_a4);
  *(undefined4 *)((long)param_1 + 0xfc) = uStack_64;
  *(ulong *)((long)param_1 + 0xf4) = CONCAT44(uStack_68,uStack_6c);
  *(ulong *)((long)param_1 + 0xec) = CONCAT44(uStack_70,uStack_74);
  *(ulong *)((long)param_1 + 0xe4) = CONCAT44(uStack_78,uStack_7c);
  *(ulong *)((long)param_1 + 0xdc) = CONCAT44(uStack_80,uStack_84);
  *(ulong *)((long)param_1 + 0xd4) = CONCAT44(uStack_88,uStack_8c);
  *(ulong *)((long)param_1 + 0xcc) = CONCAT44(uStack_90,uStack_94);
  *(undefined1 *)(param_1 + 0x20) = param_15;
  param_1[0x22] = param_18;
  param_1[0x21] = param_17;
  param_1[0x24] = param_20;
  param_1[0x23] = param_19;
  param_1[0x26] = param_22;
  param_1[0x25] = param_21;
  param_1[0x27] = param_23;
  *(char *)(param_1 + 0x28) = (char)param_24;
  *(char *)((long)param_1 + 0x141) = (char)((ushort)param_24 >> 8);
  param_1[0x2a] = param_27;
  param_1[0x29] = param_26;
  param_1[0x2c] = param_29;
  param_1[0x2b] = param_28;
  param_1[0x2e] = param_31;
  param_1[0x2d] = param_30;
  param_1[0x2f] = param_32;
  param_1[0x30] = param_33;
  *(undefined1 *)(param_1 + 0x31) = param_34;
  *(undefined4 *)((long)param_1 + 0x1c9) = uStack_a8;
  *(ulong *)((long)param_1 + 0x1b1) = CONCAT17(uStack_b9,uStack_c0);
  *(ulong *)((long)param_1 + 0x1a9) = CONCAT17(uStack_c1,uStack_c8);
  *(ulong *)((long)param_1 + 0x1c1) = CONCAT44(uStack_ac,uStack_b0);
  *(ulong *)((long)param_1 + 0x1b9) = CONCAT44(uStack_b4,uStack_b8);
  *(ulong *)((long)param_1 + 0x191) = CONCAT17(uStack_d9,uStack_e0);
  *(ulong *)((long)param_1 + 0x189) = CONCAT17(uStack_e1,uStack_e8);
  *(ulong *)((long)param_1 + 0x1a1) = CONCAT17(uStack_c9,uStack_d0);
  *(ulong *)((long)param_1 + 0x199) = CONCAT17(uStack_d1,uStack_d8);
  *(undefined1 *)((long)param_1 + 0x1cd) = param_37;
  param_1[0x3a] = param_39;
  param_1[0x3b] = param_40;
  *(undefined1 *)(param_1 + 0x3c) = param_41;
  param_1[0x42] = uVar6;
  *(ulong *)((long)param_1 + 0x1f9) = CONCAT17(uStack_101,uStack_108);
  *(ulong *)((long)param_1 + 0x1f1) = CONCAT17(uStack_109,uStack_110);
  *(ulong *)((long)param_1 + 0x209) = CONCAT17(uStack_f1,uStack_f8);
  *(ulong *)((long)param_1 + 0x201) = CONCAT17(uStack_f9,uStack_100);
  *(ulong *)((long)param_1 + 0x1e9) = CONCAT17(uStack_111,uStack_118);
  *(ulong *)((long)param_1 + 0x1e1) = CONCAT17(uStack_119,uStack_120);
  *(undefined1 *)(param_1 + 0x43) = param_44;
  param_1[0x4a] = uVar1;
  param_1[0x49] = uVar4;
  *(ulong *)((long)param_1 + 0x231) = CONCAT17(uStack_141,uStack_148);
  *(ulong *)((long)param_1 + 0x229) = CONCAT17(uStack_149,uStack_150);
  *(ulong *)((long)param_1 + 0x241) = CONCAT17(uStack_131,uStack_138);
  *(ulong *)((long)param_1 + 0x239) = CONCAT17(uStack_139,uStack_140);
  *(ulong *)((long)param_1 + 0x221) = CONCAT17(uStack_151,uStack_158);
  *(ulong *)((long)param_1 + 0x219) = CONCAT17(uStack_159,uStack_160);
  param_1[0x4b] = param_47;
  return;
}



/* Entry: 1047a6970; end: 1047a6973;  */

undefined8 FUN_1047a6970(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  double dVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  double dVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  undefined2 uStack_688;
  undefined6 uStack_686;
  undefined2 uStack_680;
  undefined8 uStack_67e;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  undefined5 uStack_648;
  undefined3 uStack_643;
  undefined5 uStack_640;
  undefined8 uStack_63b;
  undefined1 auStack_630 [64];
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  undefined5 uStack_5c8;
  undefined3 uStack_5c3;
  undefined5 uStack_5c0;
  undefined3 uStack_5bb;
  undefined5 uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  undefined5 uStack_588;
  undefined3 uStack_583;
  undefined5 uStack_580;
  undefined3 uStack_57b;
  uint5 uStack_578;
  undefined3 uStack_573;
  ulong uStack_570;
  ulong uStack_568;
  ulong uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  undefined2 uStack_548;
  undefined3 uStack_546;
  undefined3 uStack_543;
  undefined2 uStack_540;
  undefined3 uStack_53e;
  undefined3 uStack_53b;
  undefined2 uStack_538;
  undefined3 uStack_536;
  undefined3 uStack_533;
  ulong uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  undefined2 uStack_4c8;
  undefined6 uStack_4c6;
  undefined2 uStack_4c0;
  undefined8 uStack_4be;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  undefined5 uStack_488;
  undefined3 uStack_483;
  undefined5 uStack_480;
  undefined3 uStack_47b;
  uint5 uStack_478;
  undefined3 uStack_473;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  undefined2 uStack_448;
  undefined3 uStack_446;
  undefined3 uStack_443;
  undefined2 uStack_440;
  undefined3 uStack_43e;
  undefined3 uStack_43b;
  undefined2 uStack_438;
  undefined3 uStack_436;
  undefined3 uStack_433;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  undefined2 uStack_3c8;
  undefined6 uStack_3c6;
  undefined2 uStack_3c0;
  undefined8 uStack_3be;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  undefined5 uStack_388;
  undefined3 uStack_383;
  undefined5 uStack_380;
  undefined8 uStack_37b;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  undefined5 uStack_348;
  undefined3 uStack_343;
  undefined5 uStack_340;
  undefined8 uStack_33b;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  undefined2 uStack_248;
  undefined6 uStack_246;
  undefined2 uStack_240;
  undefined8 uStack_23e;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  undefined2 uStack_1c8;
  undefined6 uStack_1c6;
  undefined2 uStack_1c0;
  undefined8 uStack_1be;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined2 uStack_108;
  undefined6 uStack_106;
  undefined2 uStack_100;
  undefined8 uStack_fe;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined8 uStack_7e;
  
  uVar11 = param_1[1];
  uVar16 = param_2[1];
  if (uVar11 == 1) {
    if (uVar16 != 1) {
      return 0;
    }
  }
  else {
    if (uVar16 == 1) {
      return 0;
    }
    uVar12 = *param_1;
    uVar14 = param_1[2];
    uVar17 = *param_2;
    uVar13 = param_2[2];
    if (uVar11 == 0) {
      if (uVar16 != 0) {
        FUN_104744228(uVar17,uVar16,uVar13);
        uVar17 = 0;
LAB_1047a7434:
        FUN_104744228(uVar12,uVar17,uVar14);
        _swift_bridgeObjectRelease(uVar16);
LAB_1047a7700:
        _swift_bridgeObjectRelease(uVar13);
        goto LAB_1047a7714;
      }
    }
    else {
      if (uVar16 == 0) {
        FUN_104744228(uVar17,0,uVar13);
        FUN_104744228(uVar12,uVar11,uVar14);
        goto LAB_1047a7700;
      }
      if (((uVar12 != uVar17) || (uVar11 != uVar16)) &&
         (uVar20 = uVar12,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (uVar12,uVar11,uVar17,uVar16,0), (uVar20 & 1) == 0)) {
        FUN_104744228(uVar17,uVar16,uVar13);
        uVar17 = uVar11;
        goto LAB_1047a7434;
      }
    }
    if (uVar14 == 0) {
      if (uVar13 != 0) {
        FUN_104744228(uVar17,uVar16,uVar13);
        FUN_104744228(uVar12,uVar11,0);
        _swift_bridgeObjectRelease(uVar16);
        _swift_bridgeObjectRelease(uVar13);
        uVar14 = 0;
LAB_1047a7714:
        func_0x000104748dc4(uVar12,uVar11,uVar14);
        return 0;
      }
    }
    else {
      if (uVar13 == 0) {
        return 0;
      }
      uVar20 = uVar14;
      FUN_10470d174(uVar14,uVar13);
      FUN_104744228(uVar17,uVar16,uVar13);
      FUN_104744228(uVar12,uVar11,uVar14);
      _swift_bridgeObjectRelease(uVar13);
      _swift_bridgeObjectRelease(uVar16);
      func_0x000104748dc4(uVar12,uVar11,uVar14);
      if ((uVar20 & 1) == 0) {
        return 0;
      }
    }
  }
  uVar13 = param_1[4];
  uVar14 = param_1[3];
  uVar11 = param_1[5];
  uVar17 = param_2[4];
  uVar12 = param_2[3];
  uVar16 = param_2[5];
  uStack_1b0 = uVar12;
  uStack_1a8 = uVar17;
  uStack_1a0 = uVar16;
  uStack_190 = uVar14;
  uStack_188 = uVar13;
  uStack_180 = uVar11;
  if (uVar11 >> 0x3c == 0xb) {
    if ((uVar16 & 0xf000000000000000) != 0xb000000000000000) {
LAB_1047a73bc:
      FUN_1047aa010(&uStack_190,&uStack_4b0,0x11308ece0,&UNK_10dd347b0);
      FUN_1047aa010(&uStack_1b0,&uStack_4b0,0x11308ece0,&UNK_10dd347b0);
      func_0x00010155392c(uVar14,uVar13,uVar11);
      func_0x00010155392c(uVar12,uVar17,uVar16);
      return 0;
    }
    FUN_1047aa010(&uStack_190,&uStack_4b0,0x11308ece0,&UNK_10dd347b0);
    FUN_1047aa010(&uStack_1b0,&uStack_4b0,0x11308ece0,&UNK_10dd347b0);
    func_0x00010155392c(uVar14,uVar13,uVar11);
  }
  else {
    if ((uVar16 & 0xf000000000000000) == 0xb000000000000000) goto LAB_1047a73bc;
    FUN_1047aa010(&uStack_190,&uStack_4b0,0x11308ece0,&UNK_10dd347b0);
    FUN_1047aa010(&uStack_1b0,&uStack_4b0,0x11308ece0,&UNK_10dd347b0);
    uVar20 = uVar14;
    FUN_10474e5e8(uVar14,uVar13,uVar11,uVar12,uVar17,uVar16);
    func_0x00010155392c(uVar12,uVar17,uVar16);
    func_0x00010155392c(uVar14,uVar13,uVar11);
    if ((uVar20 & 1) == 0) {
      return 0;
    }
  }
  if ((((byte)param_1[6] ^ (byte)param_2[6]) & 1) != 0) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0x31) ^ *(byte *)((long)param_2 + 0x31)) & 1) != 0) {
    return 0;
  }
  if ((int)param_1[7] != (int)param_2[7]) {
    return 0;
  }
  uStack_468 = param_1[0x11];
  uStack_470 = param_1[0x10];
  uStack_1d8 = param_1[0x13];
  uStack_1e0 = param_1[0x12];
  uStack_1e8 = param_1[0x11];
  uStack_1f0 = param_1[0x10];
  uStack_458 = param_1[0x13];
  uStack_460 = param_1[0x12];
  uStack_1d0 = param_1[0x14];
  uStack_1c8 = (undefined2)param_1[0x15];
  uStack_1be = *(undefined8 *)((long)param_1 + 0xb2);
  uStack_1c6 = (undefined6)*(undefined8 *)((long)param_1 + 0xaa);
  uStack_1c0 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0xaa) >> 0x30);
  uStack_228 = param_1[9];
  uStack_230 = param_1[8];
  uStack_218 = param_1[0xb];
  uStack_220 = param_1[10];
  uStack_208 = param_1[0xd];
  uStack_210 = param_1[0xc];
  uStack_1f8 = param_1[0xf];
  uStack_200 = param_1[0xe];
  uStack_4a8 = param_1[9];
  uStack_4b0 = param_1[8];
  uStack_498 = param_1[0xb];
  uStack_4a0 = param_1[10];
  uStack_490 = param_1[0xc];
  uStack_2a8 = param_2[9];
  uStack_2b0 = param_2[8];
  uStack_418 = param_2[0xb];
  uStack_420 = param_2[10];
  uStack_288 = param_2[0xd];
  uStack_290 = param_2[0xc];
  uStack_278 = param_2[0xf];
  uStack_280 = param_2[0xe];
  uStack_298 = param_2[0xb];
  uStack_2a0 = param_2[10];
  uStack_408 = param_2[0xd];
  uStack_410 = param_2[0xc];
  uStack_428 = param_2[9];
  uStack_430 = param_2[8];
  uStack_23e = *(undefined8 *)((long)param_2 + 0xb2);
  uStack_240 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0xaa) >> 0x30);
  uStack_3d8 = param_2[0x13];
  uStack_3e0 = param_2[0x12];
  uStack_250 = param_2[0x14];
  uStack_248 = (undefined2)param_2[0x15];
  uStack_246 = (undefined6)(param_2[0x15] >> 0x10);
  uStack_3f8 = param_2[0xf];
  uStack_400 = param_2[0xe];
  uStack_268 = param_2[0x11];
  uStack_270 = param_2[0x10];
  uStack_3e8 = param_2[0x11];
  uStack_3f0 = param_2[0x10];
  uStack_258 = param_2[0x13];
  uStack_260 = param_2[0x12];
  uStack_450 = param_1[0x14];
  uStack_448 = (undefined2)param_1[0x15];
  uVar22 = *(undefined8 *)((long)param_1 + 0xb2);
  uVar6 = *(undefined8 *)((long)param_1 + 0xaa);
  uStack_43e = (undefined3)uVar22;
  uStack_43b = (undefined3)((ulong)uVar22 >> 0x18);
  uStack_438 = (undefined2)((ulong)uVar22 >> 0x30);
  uStack_446 = (undefined3)uVar6;
  uStack_443 = (undefined3)((ulong)uVar6 >> 0x18);
  uStack_440 = (undefined2)((ulong)uVar6 >> 0x30);
  uStack_488 = (undefined5)param_1[0xd];
  uStack_483 = (undefined3)(param_1[0xd] >> 0x28);
  uStack_478 = (uint5)param_1[0xf];
  uStack_473 = (undefined3)(param_1[0xf] >> 0x28);
  uStack_480 = (undefined5)param_1[0xe];
  uStack_47b = (undefined3)(param_1[0xe] >> 0x28);
  uStack_3be = *(undefined8 *)((long)param_2 + 0xb2);
  uStack_3c0 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0xaa) >> 0x30);
  uStack_3d0 = param_2[0x14];
  uStack_3c8 = (undefined2)param_2[0x15];
  uStack_3c6 = (undefined6)(param_2[0x15] >> 0x10);
  iVar3 = (int)&uStack_4b0;
  FUN_1047a8760();
  if (iVar3 == 1) {
    iVar3 = (int)&uStack_430;
    FUN_1047a8760();
    if (iVar3 != 1) goto LAB_1047a77b8;
    uStack_568 = uStack_468;
    uStack_570 = uStack_470;
    uStack_558 = uStack_458;
    uStack_560 = uStack_460;
    uStack_548 = uStack_448;
    uStack_550 = uStack_450;
    uStack_53e = uStack_43e;
    uStack_53b = uStack_43b;
    uStack_538 = uStack_438;
    uStack_546 = uStack_446;
    uStack_543 = uStack_443;
    uStack_540 = uStack_440;
    uStack_5a8 = uStack_4a8;
    uStack_5b0 = uStack_4b0;
    uStack_598 = uStack_498;
    uStack_5a0 = uStack_4a0;
    uStack_588 = uStack_488;
    uStack_583 = uStack_483;
    uStack_590 = uStack_490;
    uStack_578 = uStack_478;
    uStack_573 = uStack_473;
    uStack_580 = uStack_480;
    uStack_57b = uStack_47b;
    FUN_1047aa010(&uStack_230,&uStack_f0,0x11308ecd0,&UNK_10dd34720);
    FUN_1047aa010(&uStack_2b0,&uStack_f0,0x11308ecd0,&UNK_10dd34720);
    func_0x0001047aa058(&uStack_5b0,0x11308ecd0,&UNK_10dd34720);
  }
  else {
    uStack_568 = uStack_468;
    uStack_570 = uStack_470;
    uStack_558 = uStack_458;
    uStack_560 = uStack_460;
    uStack_548 = uStack_448;
    uStack_550 = uStack_450;
    uStack_53e = uStack_43e;
    uStack_53b = uStack_43b;
    uStack_538 = uStack_438;
    uStack_546 = uStack_446;
    uStack_543 = uStack_443;
    uStack_540 = uStack_440;
    uStack_5a8 = uStack_4a8;
    uStack_5b0 = uStack_4b0;
    uStack_598 = uStack_498;
    uStack_5a0 = uStack_4a0;
    uStack_588 = uStack_488;
    uStack_583 = uStack_483;
    uStack_590 = uStack_490;
    uStack_578 = uStack_478;
    uStack_573 = uStack_473;
    uStack_580 = uStack_480;
    uStack_57b = uStack_47b;
    iVar3 = (int)&uStack_430;
    FUN_1047a8760();
    if (iVar3 == 1) {
LAB_1047a77b8:
      uStack_4e8 = uStack_3e8;
      uStack_4f0 = uStack_3f0;
      uStack_4d8 = uStack_3d8;
      uStack_4e0 = uStack_3e0;
      uStack_4c8 = uStack_3c8;
      uStack_4d0 = uStack_3d0;
      uStack_4be = uStack_3be;
      uStack_4c6 = uStack_3c6;
      uStack_4c0 = uStack_3c0;
      uStack_528 = uStack_428;
      uStack_530 = uStack_430;
      uStack_518 = uStack_418;
      uStack_520 = uStack_420;
      uStack_508 = uStack_408;
      uStack_510 = uStack_410;
      uStack_4f8 = uStack_3f8;
      uStack_500 = uStack_400;
      uStack_568 = uStack_468;
      uStack_570 = uStack_470;
      uStack_558 = uStack_458;
      uStack_560 = uStack_460;
      uStack_548 = uStack_448;
      uStack_546 = uStack_446;
      uStack_543 = uStack_443;
      uStack_550 = uStack_450;
      uStack_538 = uStack_438;
      uStack_536 = uStack_436;
      uStack_533 = uStack_433;
      uStack_540 = uStack_440;
      uStack_53e = uStack_43e;
      uStack_53b = uStack_43b;
      uStack_5a8 = uStack_4a8;
      uStack_5b0 = uStack_4b0;
      uStack_598 = uStack_498;
      uStack_5a0 = uStack_4a0;
      uStack_588 = uStack_488;
      uStack_583 = uStack_483;
      uStack_590 = uStack_490;
      uStack_578 = uStack_478;
      uStack_573 = uStack_473;
      uStack_580 = uStack_480;
      uStack_57b = uStack_47b;
      FUN_1047aa010(&uStack_230,&uStack_f0,0x11308ecd0,&UNK_10dd34720);
      FUN_1047aa010(&uStack_2b0,&uStack_f0,0x11308ecd0,&UNK_10dd34720);
      uVar6 = 0x11308ece8;
      puVar7 = &UNK_10dd347b8;
      goto LAB_1047a7848;
    }
    uStack_6a8 = uStack_3e8;
    uStack_6b0 = uStack_3f0;
    uStack_698 = uStack_3d8;
    uStack_6a0 = uStack_3e0;
    uStack_688 = uStack_3c8;
    uStack_690 = uStack_3d0;
    uStack_67e = uStack_3be;
    uStack_686 = uStack_3c6;
    uStack_680 = uStack_3c0;
    uStack_6e8 = uStack_428;
    uStack_6f0 = uStack_430;
    uStack_6d8 = uStack_418;
    uStack_6e0 = uStack_420;
    uStack_6c8 = uStack_408;
    uStack_6d0 = uStack_410;
    uStack_6b8 = uStack_3f8;
    uStack_6c0 = uStack_400;
    uStack_7e = uStack_3be;
    uStack_80 = uStack_3c0;
    uStack_98 = uStack_3d8;
    uStack_a0 = uStack_3e0;
    uStack_88 = uStack_3c8;
    uStack_86 = uStack_3c6;
    uStack_90 = uStack_3d0;
    uStack_b8 = uStack_3f8;
    uStack_c0 = uStack_400;
    uStack_a8 = uStack_3e8;
    uStack_b0 = uStack_3f0;
    uStack_d8 = uStack_418;
    uStack_e0 = uStack_420;
    uStack_c8 = uStack_408;
    uStack_d0 = uStack_410;
    uStack_e8 = uStack_428;
    uStack_f0 = uStack_430;
    uStack_128 = uStack_568;
    uStack_130 = uStack_570;
    uStack_118 = uStack_558;
    uStack_120 = uStack_560;
    uStack_108 = uStack_548;
    uStack_110 = uStack_550;
    uStack_fe = CONCAT26(uStack_538,CONCAT33(uStack_53b,uStack_53e));
    uStack_106 = CONCAT33(uStack_543,uStack_546);
    uStack_100 = uStack_540;
    uStack_168 = uStack_5a8;
    uStack_170 = uStack_5b0;
    uStack_158 = uStack_598;
    uStack_160 = uStack_5a0;
    uStack_148 = CONCAT35(uStack_583,uStack_588);
    uStack_138 = CONCAT35(uStack_573,uStack_578);
    uStack_140 = CONCAT35(uStack_57b,uStack_580);
    uStack_150 = uStack_590;
    FUN_1047aa010(&uStack_230,&uStack_770,0x11308ecd0,&UNK_10dd34720);
    FUN_1047aa010(&uStack_2b0,&uStack_770,0x11308ecd0,&UNK_10dd34720);
    puVar4 = &uStack_170;
    FUN_1047abbd0(puVar4,&uStack_f0);
    func_0x0001047aa058(&uStack_6f0,0x11308ecd0,&UNK_10dd34720);
    func_0x0001047aa058(&uStack_4b0,0x11308ecd0,&UNK_10dd34720);
    if (((ulong)puVar4 & 1) == 0) {
      return 0;
    }
  }
  if (((*(byte *)((long)param_1 + 0xba) ^ *(byte *)((long)param_2 + 0xba)) & 1) != 0) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0xbb) ^ *(byte *)((long)param_2 + 0xbb)) & 1) != 0) {
    return 0;
  }
  uStack_2e8 = param_1[0x19];
  uStack_2f0 = param_1[0x18];
  uStack_2d8 = param_1[0x1b];
  uStack_2e0 = param_1[0x1a];
  uStack_2c8 = param_1[0x1d];
  uStack_2d0 = param_1[0x1c];
  uStack_2b8 = param_1[0x1f];
  uStack_2c0 = param_1[0x1e];
  uStack_4a8 = param_1[0x19];
  uStack_4b0 = param_1[0x18];
  uStack_498 = param_1[0x1b];
  uStack_4a0 = param_1[0x1a];
  uStack_328 = param_2[0x19];
  uStack_330 = param_2[0x18];
  uStack_318 = param_2[0x1b];
  uStack_320 = param_2[0x1a];
  uStack_308 = param_2[0x1d];
  uStack_310 = param_2[0x1c];
  uStack_2f8 = param_2[0x1f];
  uStack_300 = param_2[0x1e];
  uStack_468 = param_2[0x19];
  uStack_470 = param_2[0x18];
  uStack_458 = param_2[0x1b];
  uStack_460 = param_2[0x1a];
  uStack_490 = param_1[0x1c];
  uStack_488 = (undefined5)param_1[0x1d];
  uStack_483 = (undefined3)(param_1[0x1d] >> 0x28);
  uStack_478 = (uint5)param_1[0x1f];
  uStack_473 = (undefined3)(param_1[0x1f] >> 0x28);
  uStack_480 = (undefined5)param_1[0x1e];
  uStack_47b = (undefined3)(param_1[0x1e] >> 0x28);
  uVar14 = param_2[0x1d];
  uStack_450 = param_2[0x1c];
  uVar16 = param_2[0x1f];
  uVar11 = param_2[0x1e];
  uStack_448 = (undefined2)uVar14;
  uStack_446 = (undefined3)(uVar14 >> 0x10);
  uStack_443 = (undefined3)(uVar14 >> 0x28);
  uStack_438 = (undefined2)uVar16;
  uStack_436 = (undefined3)(uVar16 >> 0x10);
  uStack_433 = (undefined3)(uVar16 >> 0x28);
  uStack_440 = (undefined2)uVar11;
  uStack_43e = (undefined3)(uVar11 >> 0x10);
  uStack_43b = (undefined3)(uVar11 >> 0x28);
  if (uStack_4b0 == 0) {
    if (uStack_470 != 0) {
LAB_1047a7a58:
      uStack_5b0 = uStack_4b0;
      uStack_5a8 = uStack_4a8;
      uStack_5a0 = uStack_4a0;
      uStack_598 = uStack_498;
      uStack_590 = uStack_490;
      uStack_588 = uStack_488;
      uStack_583 = uStack_483;
      uStack_580 = uStack_480;
      uStack_57b = uStack_47b;
      uStack_578 = uStack_478;
      uStack_573 = uStack_473;
      uStack_570 = uStack_470;
      uStack_568 = uStack_468;
      uStack_560 = uStack_460;
      uStack_558 = uStack_458;
      uStack_550 = uStack_450;
      uStack_548 = uStack_448;
      uStack_546 = uStack_446;
      uStack_543 = uStack_443;
      uStack_540 = uStack_440;
      uStack_53e = uStack_43e;
      uStack_53b = uStack_43b;
      uStack_538 = uStack_438;
      uStack_536 = uStack_436;
      uStack_533 = uStack_433;
      FUN_1047aa010(&uStack_2f0,&uStack_6f0,0x112db3e20,&UNK_10d95e378);
      FUN_1047aa010(&uStack_330,&uStack_6f0,0x112db3e20,&UNK_10d95e378);
      uVar6 = 0x11308ecf0;
      puVar7 = &UNK_10dd347c0;
      goto LAB_1047a7848;
    }
    uStack_5a8 = param_1[0x19];
    uStack_5b0 = param_1[0x18];
    uStack_598 = param_1[0x1b];
    uStack_5a0 = param_1[0x1a];
    uStack_590 = param_1[0x1c];
    uStack_588 = (undefined5)param_1[0x1d];
    uStack_583 = (undefined3)(param_1[0x1d] >> 0x28);
    uStack_578 = (uint5)param_1[0x1f];
    uStack_573 = (undefined3)(param_1[0x1f] >> 0x28);
    uStack_580 = (undefined5)param_1[0x1e];
    uStack_57b = (undefined3)(param_1[0x1e] >> 0x28);
    FUN_1047aa010(&uStack_2f0,&uStack_6f0,0x112db3e20,&UNK_10d95e378);
    FUN_1047aa010(&uStack_330,&uStack_6f0,0x112db3e20,&UNK_10d95e378);
    func_0x0001047aa058(&uStack_5b0,0x112db3e20,&UNK_10d95e378);
  }
  else {
    if (uStack_470 == 0) goto LAB_1047a7a58;
    uStack_6e8 = param_2[0x19];
    uStack_6f0 = param_2[0x18];
    uStack_6d8 = param_2[0x1b];
    uStack_6e0 = param_2[0x1a];
    uStack_6c8 = param_2[0x1d];
    uStack_6d0 = param_2[0x1c];
    uStack_6b8 = param_2[0x1f];
    uStack_6c0 = param_2[0x1e];
    uStack_588 = (undefined5)uStack_6c8;
    uStack_583 = (undefined3)(uStack_6c8 >> 0x28);
    uStack_578 = (uint5)uStack_6b8;
    uStack_573 = (undefined3)(uStack_6b8 >> 0x28);
    uStack_580 = (undefined5)uStack_6c0;
    uStack_57b = (undefined3)(uStack_6c0 >> 0x28);
    uStack_768 = param_1[0x19];
    uStack_770 = param_1[0x18];
    uStack_758 = param_1[0x1b];
    uStack_760 = param_1[0x1a];
    uStack_748 = param_1[0x1d];
    uStack_750 = param_1[0x1c];
    uStack_738 = param_1[0x1f];
    uStack_740 = param_1[0x1e];
    uStack_5b0 = uStack_6f0;
    uStack_5a8 = uStack_6e8;
    uStack_5a0 = uStack_6e0;
    uStack_598 = uStack_6d8;
    uStack_590 = uStack_6d0;
    FUN_1047aa010(&uStack_2f0,&uStack_670,0x112db3e20,&UNK_10d95e378);
    FUN_1047aa010(&uStack_330,&uStack_670,0x112db3e20,&UNK_10d95e378);
    puVar4 = &uStack_770;
    FUN_1047aa604(puVar4,&uStack_6f0);
    func_0x0001047aa058(&uStack_5b0,0x112db3e20,&UNK_10d95e378);
    func_0x0001047aa058(&uStack_4b0,0x112db3e20,&UNK_10d95e378);
    if (((ulong)puVar4 & 1) == 0) {
      return 0;
    }
  }
  if ((((byte)param_1[0x20] ^ (byte)param_2[0x20]) & 1) != 0) {
    return 0;
  }
  uVar11 = param_2[0x22];
  if (param_1[0x22] == 0) {
    if (uVar11 != 0) {
      return 0;
    }
  }
  else {
    if (uVar11 == 0) {
      return 0;
    }
    uVar16 = param_1[0x21];
    if (((uVar16 != param_2[0x21]) || (param_1[0x22] != uVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar16 & 1) == 0)) {
      return 0;
    }
  }
  uVar11 = param_2[0x24];
  if (param_1[0x24] == 0) {
    if (uVar11 != 0) {
      return 0;
    }
  }
  else {
    if (uVar11 == 0) {
      return 0;
    }
    uVar16 = param_1[0x23];
    if (((uVar16 != param_2[0x23]) || (param_1[0x24] != uVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar16 & 1) == 0)) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + 0x141) == '\x01') {
    if (*(char *)((long)param_2 + 0x141) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)((long)param_2 + 0x141) == '\x01') {
      return 0;
    }
    uVar11 = param_1[0x25];
    func_0x0001047ab758(uVar11,param_1[0x26],param_1[0x27],(char)param_1[0x28],param_2[0x25],
                        param_2[0x26],param_2[0x27],(char)param_2[0x28]);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
  }
  uVar11 = param_1[0x29];
  uVar13 = param_1[0x2a];
  uVar16 = param_1[0x2b];
  uVar17 = param_1[0x2c];
  uVar14 = param_2[0x29];
  uVar20 = param_2[0x2a];
  uVar12 = param_2[0x2b];
  uVar21 = param_2[0x2c];
  if (uVar13 == 0) {
    if (uVar20 != 0) {
LAB_1047a7cbc:
      func_0x000100e3ecdc(uVar14,uVar20,uVar12,uVar21);
      func_0x000100e3ecdc(uVar11,uVar13,uVar16,uVar17);
      func_0x0001030bb6f8(uVar11,uVar13,uVar16,uVar17);
LAB_1047a7d14:
      func_0x0001030bb6f8(uVar14,uVar20,uVar12,uVar21);
      return 0;
    }
  }
  else {
    if (uVar20 == 0) goto LAB_1047a7cbc;
    if (((uVar11 != uVar14) || (uVar13 != uVar20)) &&
       (uVar15 = uVar11,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (uVar11,uVar13,uVar14,uVar20,0), (uVar15 & 1) == 0)) {
      func_0x000100e3ecdc(uVar14,uVar20,uVar12,uVar21);
      func_0x000100e3ecdc(uVar11,uVar13,uVar16,uVar17);
      _swift_bridgeObjectRelease(uVar21);
      _swift_bridgeObjectRelease(uVar20);
      uVar14 = uVar11;
      uVar20 = uVar13;
      uVar12 = uVar16;
      uVar21 = uVar17;
      goto LAB_1047a7d14;
    }
    if ((uVar16 == uVar12) && (uVar17 == uVar21)) {
      func_0x000100e3ecdc(uVar14,uVar20,uVar16,uVar17);
      func_0x000100e3ecdc(uVar11,uVar13,uVar16,uVar17);
      _swift_bridgeObjectRelease(uVar21);
      _swift_bridgeObjectRelease(uVar20);
      func_0x0001030bb6f8(uVar11,uVar13,uVar16,uVar17);
    }
    else {
      uVar15 = uVar16;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar16,uVar17,uVar12,uVar21,0);
      func_0x000100e3ecdc(uVar14,uVar20,uVar12,uVar21);
      func_0x000100e3ecdc(uVar11,uVar13,uVar16,uVar17);
      _swift_bridgeObjectRelease(uVar21);
      _swift_bridgeObjectRelease(uVar20);
      func_0x0001030bb6f8(uVar11,uVar13,uVar16,uVar17);
      if ((uVar15 & 1) == 0) {
        return 0;
      }
    }
  }
  uVar11 = param_2[0x2e];
  if (param_1[0x2e] == 0) {
    if (uVar11 != 0) {
      return 0;
    }
  }
  else {
    if (uVar11 == 0) {
      return 0;
    }
    uVar16 = param_1[0x2d];
    if (((uVar16 != param_2[0x2d]) || (param_1[0x2e] != uVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar16 & 1) == 0)) {
      return 0;
    }
  }
  uVar11 = param_2[0x30];
  if (param_1[0x30] == 0) {
    if (uVar11 != 0) {
      return 0;
    }
  }
  else {
    if (uVar11 == 0) {
      return 0;
    }
    uVar16 = param_1[0x2f];
    if (((uVar16 != param_2[0x2f]) || (param_1[0x30] != uVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar16 & 1) == 0)) {
      return 0;
    }
  }
  if ((((byte)param_1[0x31] ^ (byte)param_2[0x31]) & 1) != 0) {
    return 0;
  }
  uStack_368 = param_1[0x33];
  uStack_370 = param_1[0x32];
  uStack_358 = param_1[0x35];
  uStack_360 = param_1[0x34];
  uStack_350 = param_1[0x36];
  uStack_4a8 = param_1[0x33];
  uStack_4b0 = param_1[0x32];
  uStack_498 = param_1[0x35];
  uStack_4a0 = param_1[0x34];
  uStack_348 = (undefined5)param_1[0x37];
  uStack_33b = *(undefined8 *)((long)param_1 + 0x1c5);
  uStack_343 = (undefined3)*(undefined8 *)((long)param_1 + 0x1bd);
  uStack_340 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x1bd) >> 0x18);
  uStack_3a8 = param_2[0x33];
  uStack_3b0 = param_2[0x32];
  uStack_398 = param_2[0x35];
  uStack_3a0 = param_2[0x34];
  uStack_390 = param_2[0x36];
  uStack_468 = param_2[0x33];
  uStack_470 = param_2[0x32];
  uStack_458 = param_2[0x35];
  uStack_460 = param_2[0x34];
  uStack_388 = (undefined5)param_2[0x37];
  uStack_37b = *(undefined8 *)((long)param_2 + 0x1c5);
  uStack_383 = (undefined3)*(undefined8 *)((long)param_2 + 0x1bd);
  uStack_380 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x1bd) >> 0x18);
  uStack_490 = param_1[0x36];
  uStack_488 = (undefined5)param_1[0x37];
  uStack_47b = (undefined3)*(undefined8 *)((long)param_1 + 0x1c5);
  uStack_478 = (uint5)((ulong)*(undefined8 *)((long)param_1 + 0x1c5) >> 0x18);
  uStack_483 = (undefined3)*(undefined8 *)((long)param_1 + 0x1bd);
  uStack_480 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x1bd) >> 0x18);
  uStack_450 = param_2[0x36];
  uStack_448 = (undefined2)param_2[0x37];
  uStack_446 = (undefined3)(param_2[0x37] >> 0x10);
  uVar11 = *(ulong *)((long)param_2 + 0x1c5);
  uVar6 = *(undefined8 *)((long)param_2 + 0x1bd);
  uStack_43b = (undefined3)uVar11;
  uStack_438 = (undefined2)(uVar11 >> 0x18);
  uStack_436 = (undefined3)(uVar11 >> 0x28);
  uStack_443 = (undefined3)uVar6;
  uStack_440 = (undefined2)((ulong)uVar6 >> 0x18);
  uStack_43e = (undefined3)((ulong)uVar6 >> 0x28);
  bVar1 = ((uStack_450 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0;
  bVar2 = (uVar11 >> 0x18 & 0xfefefefefe) != 0x6fefefefe;
  if ((((uStack_490 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     (((ulong)uStack_478 & 0xfefefefefefefefe) == 0x6fefefefe)) {
    if (bVar1 || bVar2) {
LAB_1047a7f98:
      uStack_588 = uStack_488;
      uStack_583 = uStack_483;
      uStack_578 = uStack_478;
      uStack_573 = uStack_473;
      uStack_580 = uStack_480;
      uStack_57b = uStack_47b;
      uStack_5b0 = uStack_4b0;
      uStack_5a8 = uStack_4a8;
      uStack_5a0 = uStack_4a0;
      uStack_598 = uStack_498;
      uStack_590 = uStack_490;
      uStack_570 = uStack_470;
      uStack_568 = uStack_468;
      uStack_560 = uStack_460;
      uStack_558 = uStack_458;
      uStack_550 = uStack_450;
      uStack_548 = uStack_448;
      uStack_546 = uStack_446;
      uStack_543 = uStack_443;
      uStack_540 = uStack_440;
      uStack_53e = uStack_43e;
      uStack_53b = uStack_43b;
      uStack_538 = uStack_438;
      uStack_536 = uStack_436;
      FUN_1047aa010(&uStack_370,&uStack_670,0x112db3e10,&UNK_10dbce5f0);
      FUN_1047aa010(&uStack_3b0,&uStack_670,0x112db3e10,&UNK_10dbce5f0);
      uVar6 = 0x112db3e18;
      puVar7 = &UNK_10d95e370;
LAB_1047a7848:
      func_0x0001047aa058(&uStack_5b0,uVar6,puVar7);
      return 0;
    }
    uStack_5a8 = param_1[0x33];
    uStack_5b0 = param_1[0x32];
    uStack_598 = param_1[0x35];
    uStack_5a0 = param_1[0x34];
    uStack_590 = param_1[0x36];
    uStack_588 = (undefined5)param_1[0x37];
    uStack_57b = (undefined3)*(undefined8 *)((long)param_1 + 0x1c5);
    uStack_578 = (uint5)((ulong)*(undefined8 *)((long)param_1 + 0x1c5) >> 0x18);
    uStack_583 = (undefined3)*(undefined8 *)((long)param_1 + 0x1bd);
    uStack_580 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x1bd) >> 0x18);
    FUN_1047aa010(&uStack_370,&uStack_670,0x112db3e10,&UNK_10dbce5f0);
    FUN_1047aa010(&uStack_3b0,&uStack_670,0x112db3e10,&UNK_10dbce5f0);
    func_0x0001047aa058(&uStack_5b0,0x112db3e10,&UNK_10dbce5f0);
  }
  else {
    if (!bVar1 && !bVar2) goto LAB_1047a7f98;
    uStack_5e8 = param_2[0x33];
    uStack_5f0 = param_2[0x32];
    uStack_5d8 = param_2[0x35];
    uStack_5e0 = param_2[0x34];
    uStack_5d0 = param_2[0x36];
    uStack_5c8 = (undefined5)param_2[0x37];
    uStack_5bb = (undefined3)*(undefined8 *)((long)param_2 + 0x1c5);
    uStack_5b8 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x1c5) >> 0x18);
    uStack_5c3 = (undefined3)*(undefined8 *)((long)param_2 + 0x1bd);
    uStack_5c0 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x1bd) >> 0x18);
    uStack_668 = param_1[0x33];
    uStack_670 = param_1[0x32];
    uStack_658 = param_1[0x35];
    uStack_660 = param_1[0x34];
    uStack_650 = param_1[0x36];
    uStack_648 = (undefined5)param_1[0x37];
    uStack_63b = *(undefined8 *)((long)param_1 + 0x1c5);
    uStack_643 = (undefined3)*(undefined8 *)((long)param_1 + 0x1bd);
    uStack_640 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x1bd) >> 0x18);
    uStack_5b0 = uStack_5f0;
    uStack_5a8 = uStack_5e8;
    uStack_5a0 = uStack_5e0;
    uStack_598 = uStack_5d8;
    uStack_590 = uStack_5d0;
    uStack_588 = uStack_5c8;
    uStack_583 = uStack_5c3;
    uStack_580 = uStack_5c0;
    uStack_57b = uStack_5bb;
    uStack_578 = uStack_5b8;
    FUN_1047aa010(&uStack_370,auStack_630,0x112db3e10,&UNK_10dbce5f0);
    FUN_1047aa010(&uStack_3b0,auStack_630,0x112db3e10,&UNK_10dbce5f0);
    puVar4 = &uStack_670;
    FUN_10473ba08(puVar4,&uStack_5b0);
    func_0x0001047aa058(&uStack_5f0,0x112db3e10,&UNK_10dbce5f0);
    func_0x0001047aa058(&uStack_4b0,0x112db3e10,&UNK_10dbce5f0);
    if (((ulong)puVar4 & 1) == 0) {
      return 0;
    }
  }
  if (((*(byte *)((long)param_1 + 0x1cd) ^ *(byte *)((long)param_2 + 0x1cd)) & 1) != 0) {
    return 0;
  }
  uVar11 = param_2[0x3b];
  if (param_1[0x3b] == 0) {
    if (uVar11 != 0) {
      return 0;
    }
  }
  else {
    if (uVar11 == 0) {
      return 0;
    }
    uVar16 = param_1[0x3a];
    if (((uVar16 != param_2[0x3a]) || (param_1[0x3b] != uVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar16 & 1) == 0)) {
      return 0;
    }
  }
  if ((((byte)param_1[0x3c] ^ (byte)param_2[0x3c]) & 1) != 0) {
    return 0;
  }
  uVar11 = param_1[0x3d];
  uVar13 = param_1[0x3e];
  uVar16 = param_1[0x3f];
  uVar17 = param_1[0x40];
  uVar10 = param_1[0x41];
  uVar8 = param_1[0x42];
  uVar14 = param_2[0x3d];
  uVar20 = param_2[0x3e];
  uVar12 = param_2[0x3f];
  uVar21 = param_2[0x40];
  uVar15 = param_2[0x41];
  uVar18 = param_2[0x42];
  if (uVar13 == 0) {
    if (uVar20 != 0) {
LAB_1047a8248:
      func_0x000101895c08(uVar14,uVar20,uVar12,uVar21,uVar15,uVar18);
      func_0x000101895c08(uVar11,uVar13,uVar16,uVar17,uVar10,uVar8);
      func_0x0001041a60a4(uVar11,uVar13,uVar16,uVar17,uVar10,uVar8);
LAB_1047a8354:
      func_0x0001041a60a4(uVar14,uVar20,uVar12,uVar21,uVar15,uVar18);
      return 0;
    }
  }
  else {
    if (uVar20 == 0) goto LAB_1047a8248;
    if ((((uVar11 != uVar14) || (uVar13 != uVar20)) &&
        (uVar5 = uVar11,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar11,uVar13,uVar14,uVar20,0), (uVar5 & 1) == 0)) ||
       (((uVar16 != uVar12 || (uVar17 != uVar21)) &&
        (uVar5 = uVar16,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar16,uVar17,uVar12,uVar21,0), (uVar5 & 1) == 0)))) {
      func_0x000101895c08(uVar14,uVar20,uVar12,uVar21,uVar15,uVar18);
      func_0x000101895c08(uVar11,uVar13,uVar16,uVar17,uVar10,uVar8);
      _swift_bridgeObjectRelease(uVar18);
      _swift_bridgeObjectRelease(uVar21);
      _swift_bridgeObjectRelease(uVar20);
      uVar14 = uVar11;
      uVar20 = uVar13;
      uVar12 = uVar16;
      uVar21 = uVar17;
      uVar15 = uVar10;
      uVar18 = uVar8;
      goto LAB_1047a8354;
    }
    if ((uVar10 == uVar15) && (uVar8 == uVar18)) {
      func_0x000101895c08(uVar14,uVar20,uVar12,uVar21,uVar10,uVar8);
      func_0x000101895c08(uVar11,uVar13,uVar16,uVar17,uVar10,uVar8);
      _swift_bridgeObjectRelease(uVar18);
      _swift_bridgeObjectRelease(uVar21);
      _swift_bridgeObjectRelease(uVar20);
      func_0x0001041a60a4(uVar11,uVar13,uVar16,uVar17,uVar10,uVar8);
    }
    else {
      uVar5 = uVar10;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar10,uVar8,uVar15,uVar18,0);
      func_0x000101895c08(uVar14,uVar20,uVar12,uVar21,uVar15,uVar18);
      func_0x000101895c08(uVar11,uVar13,uVar16,uVar17,uVar10,uVar8);
      _swift_bridgeObjectRelease(uVar18);
      _swift_bridgeObjectRelease(uVar21);
      _swift_bridgeObjectRelease(uVar20);
      func_0x0001041a60a4(uVar11,uVar13,uVar16,uVar17,uVar10,uVar8);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
    }
  }
  if ((((byte)param_1[0x43] ^ (byte)param_2[0x43]) & 1) != 0) {
    return 0;
  }
  uVar16 = param_1[0x45];
  uVar11 = param_1[0x44];
  uVar12 = param_1[0x47];
  uVar14 = param_1[0x46];
  uVar17 = param_1[0x49];
  uVar13 = param_1[0x48];
  uStack_488 = (undefined5)uVar17;
  uStack_483 = (undefined3)(uVar17 >> 0x28);
  dVar9 = (double)param_1[0x4a];
  uStack_480 = SUB85(dVar9,0);
  uStack_47b = (undefined3)((ulong)dVar9 >> 0x28);
  uVar15 = param_2[0x45];
  uVar20 = param_2[0x44];
  uVar10 = param_2[0x47];
  uVar8 = param_2[0x46];
  uVar18 = param_2[0x49];
  uVar21 = param_2[0x48];
  uStack_5c8 = (undefined5)uVar18;
  uStack_5c3 = (undefined3)(uVar18 >> 0x28);
  dVar19 = (double)param_2[0x4a];
  uStack_5c0 = SUB85(dVar19,0);
  uStack_5bb = (undefined3)((ulong)dVar19 >> 0x28);
  uStack_5f0 = uVar20;
  uStack_5e8 = uVar15;
  uStack_5e0 = uVar8;
  uStack_5d8 = uVar10;
  uStack_5d0 = uVar21;
  uStack_4b0 = uVar11;
  uStack_4a8 = uVar16;
  uStack_4a0 = uVar14;
  uStack_498 = uVar12;
  uStack_490 = uVar13;
  if (uVar16 == 0) {
    if (uVar15 == 0) {
      FUN_1047aa010(&uStack_4b0,auStack_630,0x11304dbb8,&UNK_10dd22560);
      FUN_1047aa010(&uStack_5f0,auStack_630,0x11304dbb8,&UNK_10dd22560);
LAB_1047a86dc:
      func_0x0001034a6828(uVar11,uVar16,uVar14,uVar12,uVar13,uVar17,dVar9);
      uVar16 = param_1[0x4b];
      uVar11 = param_2[0x4b];
      if (uVar16 == 0) {
        if (uVar11 != 0) {
          return 0;
        }
        return 1;
      }
      if (uVar11 == 0) {
        return 0;
      }
      _swift_bridgeObjectRetain(uVar11);
      uVar14 = uVar16;
      _swift_bridgeObjectRetain();
      func_0x00010470c220();
      _swift_bridgeObjectRelease(uVar16);
      _swift_bridgeObjectRelease(uVar11);
      if ((uVar14 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
  else if (uVar15 != 0) {
    if ((((uVar11 == uVar20) && (uVar16 == uVar15)) ||
        (uVar5 = uVar11,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar11,uVar16,uVar20,uVar15,0), (uVar5 & 1) != 0)) &&
       (((uVar14 == uVar8 && (uVar12 == uVar10)) ||
        (uVar5 = uVar14,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar14,uVar12,uVar8,uVar10,0), (uVar5 & 1) != 0)))) {
      if ((uVar13 == uVar21) && (uVar17 == uVar18)) {
        FUN_1047aa010(&uStack_4b0,auStack_630,0x11304dbb8,&UNK_10dd22560);
        FUN_1047aa010(&uStack_5f0,auStack_630,0x11304dbb8,&UNK_10dd22560);
        func_0x0001034a6828(uVar20,uVar15,uVar8,uVar10,uVar13,uVar17,dVar19);
      }
      else {
        uVar5 = uVar13;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar13,uVar17,uVar21,uVar18,0);
        FUN_1047aa010(&uStack_4b0,auStack_630,0x11304dbb8,&UNK_10dd22560);
        FUN_1047aa010(&uStack_5f0,auStack_630,0x11304dbb8,&UNK_10dd22560);
        func_0x0001034a6828(uVar20,uVar15,uVar8,uVar10,uVar21,uVar18,dVar19);
        if ((uVar5 & 1) == 0) goto LAB_1047a874c;
      }
      if (dVar9 == dVar19) goto LAB_1047a86dc;
    }
    else {
      FUN_1047aa010(&uStack_4b0,auStack_630,0x11304dbb8,&UNK_10dd22560);
      FUN_1047aa010(&uStack_5f0,auStack_630,0x11304dbb8,&UNK_10dd22560);
      func_0x0001034a6828(uVar20,uVar15,uVar8,uVar10,uVar21,uVar18,dVar19);
    }
    goto LAB_1047a874c;
  }
  FUN_1047aa010(&uStack_4b0,auStack_630,0x11304dbb8,&UNK_10dd22560);
  FUN_1047aa010(&uStack_5f0,auStack_630,0x11304dbb8,&UNK_10dd22560);
  func_0x0001034a6828(uVar11,uVar16,uVar14,uVar12,uVar13,uVar17,dVar9);
  uVar11 = uVar20;
  uVar16 = uVar15;
  uVar14 = uVar8;
  uVar12 = uVar10;
  uVar13 = uVar21;
  uVar17 = uVar18;
  dVar9 = dVar19;
LAB_1047a874c:
  func_0x0001034a6828(uVar11,uVar16,uVar14,uVar12,uVar13,uVar17,dVar9);
  return 0;
}



/* Entry: 1047a6974; end: 1047a701f;  */

void FUN_1047a6974(undefined8 param_1)

{
  ulong uVar1;
  char cVar2;
  char cVar3;
  uint5 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
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
  undefined2 uStack_148;
  undefined6 uStack_146;
  undefined2 uStack_140;
  undefined8 uStack_13e;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
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
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined8 uStack_7e;
  
  lVar9 = unaff_x20[1];
  if (lVar9 == 1) {
LAB_1047a6a0c:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar11 = *unaff_x20;
    lVar7 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar9 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar11,lVar9);
    }
    if (lVar7 == 0) goto LAB_1047a6a0c;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046dbda4(param_1,lVar7);
  }
  uVar8 = unaff_x20[5];
  uVar15 = uVar8 >> 0x3c;
  if (uVar15 == 0xb) {
LAB_1047a6a48:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar11 = unaff_x20[3];
    uVar13 = unaff_x20[4];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar11);
    if (0xe < uVar15) goto LAB_1047a6a48;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar13,uVar8);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 6) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x31) & 1);
  __ss6HasherV8_combineyySuF(unaff_x20[7]);
  uStack_168 = unaff_x20[0x11];
  uStack_170 = unaff_x20[0x10];
  uStack_158 = unaff_x20[0x13];
  uStack_160 = unaff_x20[0x12];
  uStack_150 = unaff_x20[0x14];
  uStack_148 = (undefined2)unaff_x20[0x15];
  uStack_13e = *(undefined8 *)((long)unaff_x20 + 0xb2);
  uStack_146 = (undefined6)*(undefined8 *)((long)unaff_x20 + 0xaa);
  uStack_140 = (undefined2)((ulong)*(undefined8 *)((long)unaff_x20 + 0xaa) >> 0x30);
  uStack_1a8 = unaff_x20[9];
  uStack_1b0 = unaff_x20[8];
  uStack_198 = unaff_x20[0xb];
  uStack_1a0 = unaff_x20[10];
  uStack_188 = unaff_x20[0xd];
  uStack_190 = unaff_x20[0xc];
  uStack_178 = unaff_x20[0xf];
  uStack_180 = unaff_x20[0xe];
  iVar5 = (int)&uStack_1b0;
  FUN_1047a8760();
  if (iVar5 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_a8 = uStack_168;
    uStack_b0 = uStack_170;
    uStack_98 = uStack_158;
    uStack_a0 = uStack_160;
    uStack_88 = uStack_148;
    uStack_90 = uStack_150;
    uStack_7e = uStack_13e;
    uStack_86 = uStack_146;
    uStack_80 = uStack_140;
    uStack_e8 = uStack_1a8;
    uStack_f0 = uStack_1b0;
    uStack_d8 = uStack_198;
    uStack_e0 = uStack_1a0;
    uStack_c8 = uStack_188;
    uStack_d0 = uStack_190;
    uStack_b8 = uStack_178;
    uStack_c0 = uStack_180;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047ab8a8(param_1);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0xba) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0xbb) & 1);
  lVar9 = unaff_x20[0x18];
  if (lVar9 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar11 = unaff_x20[0x1d];
    lVar7 = unaff_x20[0x1e];
    uVar6 = unaff_x20[0x1f];
    uVar13 = unaff_x20[0x1b];
    uVar12 = unaff_x20[0x1c];
    uVar10 = unaff_x20[0x19];
    uVar16 = unaff_x20[0x1a];
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047a70ec(param_1,lVar9);
    __ss6HasherV8_combineyySuF(uVar10);
    __ss6HasherV8_combineyySuF(uVar16);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar13,uVar12);
    if (lVar7 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar11,lVar7);
      func_0x0001046dbb64(param_1,uVar6);
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0x20) & 1);
  lVar9 = unaff_x20[0x22];
  if (lVar9 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar9 = unaff_x20[0x24];
    if (lVar9 != 0) goto LAB_1047a6c24;
LAB_1047a6c5c:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar11 = unaff_x20[0x21];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar11,lVar9);
    lVar9 = unaff_x20[0x24];
    if (lVar9 == 0) goto LAB_1047a6c5c;
LAB_1047a6c24:
    uVar11 = unaff_x20[0x23];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar11,lVar9);
  }
  if (*(char *)((long)unaff_x20 + 0x141) != '\x01') {
    uVar15 = unaff_x20[0x25];
    uVar8 = unaff_x20[0x27];
    cVar2 = *(char *)(unaff_x20 + 0x28);
    cVar3 = *(char *)(unaff_x20 + 0x26);
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (cVar3 == '\x01') {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar1 = 0;
      if ((uVar15 & 0x7fffffffffffffff) != 0) {
        uVar1 = uVar15;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar1);
    }
    if (cVar2 != '\x01') {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar15 = 0;
      if ((uVar8 & 0x7fffffffffffffff) != 0) {
        uVar15 = uVar8;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar15);
      lVar9 = unaff_x20[0x2a];
      goto joined_r0x0001047a6d34;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  lVar9 = unaff_x20[0x2a];
joined_r0x0001047a6d34:
  if (lVar9 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar9 = unaff_x20[0x2e];
  }
  else {
    uVar11 = unaff_x20[0x2b];
    uVar13 = unaff_x20[0x2c];
    uVar10 = unaff_x20[0x29];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar9);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar11,uVar13);
    lVar9 = unaff_x20[0x2e];
  }
  if (lVar9 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar9 = unaff_x20[0x30];
  }
  else {
    uVar11 = unaff_x20[0x2d];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar11,lVar9);
    lVar9 = unaff_x20[0x30];
  }
  if (lVar9 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar11 = unaff_x20[0x2f];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar11,lVar9);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0x31) & 1);
  uVar4 = *(uint5 *)(unaff_x20 + 0x39);
  if ((((unaff_x20[0x36] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     (((ulong)uVar4 & 0xfefefefefefefefe) == 0x6fefefefe)) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_128 = unaff_x20[0x33];
    uStack_130 = unaff_x20[0x32];
    uStack_118 = unaff_x20[0x35];
    uStack_120 = unaff_x20[0x34];
    uStack_100 = unaff_x20[0x38];
    uStack_108 = unaff_x20[0x37];
    uStack_f8 = (undefined4)uVar4;
    uStack_f4 = (undefined1)(uVar4 >> 0x20);
    uStack_110 = unaff_x20[0x36];
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_10473b6ac(param_1);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x1cd) & 1);
  lVar9 = unaff_x20[0x3b];
  if (lVar9 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar11 = unaff_x20[0x3a];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar11,lVar9);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0x3c) & 1);
  lVar9 = unaff_x20[0x3e];
  if (lVar9 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar10 = unaff_x20[0x42];
    uVar12 = unaff_x20[0x41];
    uVar11 = unaff_x20[0x3f];
    uVar13 = unaff_x20[0x40];
    uVar16 = unaff_x20[0x3d];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar16,lVar9);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar11,uVar13);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar12,uVar10);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0x43) & 1);
  lVar9 = unaff_x20[0x45];
  if (lVar9 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar9 = unaff_x20[0x4b];
  }
  else {
    uVar15 = unaff_x20[0x4a];
    uVar11 = unaff_x20[0x49];
    uVar13 = unaff_x20[0x48];
    uVar10 = unaff_x20[0x47];
    uVar12 = unaff_x20[0x46];
    uVar16 = unaff_x20[0x44];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar16,lVar9);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar12,uVar10);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar13,uVar11);
    uVar8 = 0;
    if ((uVar15 & 0x7fffffffffffffff) != 0) {
      uVar8 = uVar15;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar8);
    lVar9 = unaff_x20[0x4b];
  }
  if (lVar9 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar7 = *(long *)(lVar9 + 0x10);
    __ss6HasherV8_combineyySuF(lVar7);
    if (lVar7 != 0) {
      puVar14 = (undefined8 *)(lVar9 + 0x30);
      do {
        uVar11 = puVar14[-1];
        uVar13 = *puVar14;
        __ss6HasherV8_combineyySuF(puVar14[-2]);
        _swift_bridgeObjectRetain(uVar13);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar11,uVar13);
        _swift_bridgeObjectRelease(uVar13);
        lVar7 = lVar7 + -1;
        puVar14 = puVar14 + 3;
      } while (lVar7 != 0);
    }
  }
  return;
}



/* Entry: 1047a7020; end: 1047a705b;  */

void FUN_1047a7020(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1047a6974(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047a705c; end: 1047a705f;  */

void FUN_1047a705c(undefined8 param_1)

{
  ulong uVar1;
  char cVar2;
  char cVar3;
  uint5 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
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
  undefined2 uStack_148;
  undefined6 uStack_146;
  undefined2 uStack_140;
  undefined8 uStack_13e;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
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
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined8 uStack_7e;
  
  lVar9 = unaff_x20[1];
  if (lVar9 == 1) {
LAB_1047a6a0c:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar11 = *unaff_x20;
    lVar7 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar9 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar11,lVar9);
    }
    if (lVar7 == 0) goto LAB_1047a6a0c;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046dbda4(param_1,lVar7);
  }
  uVar8 = unaff_x20[5];
  uVar15 = uVar8 >> 0x3c;
  if (uVar15 == 0xb) {
LAB_1047a6a48:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar11 = unaff_x20[3];
    uVar13 = unaff_x20[4];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar11);
    if (0xe < uVar15) goto LAB_1047a6a48;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar13,uVar8);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 6) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x31) & 1);
  __ss6HasherV8_combineyySuF(unaff_x20[7]);
  uStack_168 = unaff_x20[0x11];
  uStack_170 = unaff_x20[0x10];
  uStack_158 = unaff_x20[0x13];
  uStack_160 = unaff_x20[0x12];
  uStack_150 = unaff_x20[0x14];
  uStack_148 = (undefined2)unaff_x20[0x15];
  uStack_13e = *(undefined8 *)((long)unaff_x20 + 0xb2);
  uStack_146 = (undefined6)*(undefined8 *)((long)unaff_x20 + 0xaa);
  uStack_140 = (undefined2)((ulong)*(undefined8 *)((long)unaff_x20 + 0xaa) >> 0x30);
  uStack_1a8 = unaff_x20[9];
  uStack_1b0 = unaff_x20[8];
  uStack_198 = unaff_x20[0xb];
  uStack_1a0 = unaff_x20[10];
  uStack_188 = unaff_x20[0xd];
  uStack_190 = unaff_x20[0xc];
  uStack_178 = unaff_x20[0xf];
  uStack_180 = unaff_x20[0xe];
  iVar5 = (int)&uStack_1b0;
  FUN_1047a8760();
  if (iVar5 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_a8 = uStack_168;
    uStack_b0 = uStack_170;
    uStack_98 = uStack_158;
    uStack_a0 = uStack_160;
    uStack_88 = uStack_148;
    uStack_90 = uStack_150;
    uStack_7e = uStack_13e;
    uStack_86 = uStack_146;
    uStack_80 = uStack_140;
    uStack_e8 = uStack_1a8;
    uStack_f0 = uStack_1b0;
    uStack_d8 = uStack_198;
    uStack_e0 = uStack_1a0;
    uStack_c8 = uStack_188;
    uStack_d0 = uStack_190;
    uStack_b8 = uStack_178;
    uStack_c0 = uStack_180;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047ab8a8(param_1);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0xba) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0xbb) & 1);
  lVar9 = unaff_x20[0x18];
  if (lVar9 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar11 = unaff_x20[0x1d];
    lVar7 = unaff_x20[0x1e];
    uVar6 = unaff_x20[0x1f];
    uVar13 = unaff_x20[0x1b];
    uVar12 = unaff_x20[0x1c];
    uVar10 = unaff_x20[0x19];
    uVar16 = unaff_x20[0x1a];
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047a70ec(param_1,lVar9);
    __ss6HasherV8_combineyySuF(uVar10);
    __ss6HasherV8_combineyySuF(uVar16);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar13,uVar12);
    if (lVar7 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar11,lVar7);
      func_0x0001046dbb64(param_1,uVar6);
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0x20) & 1);
  lVar9 = unaff_x20[0x22];
  if (lVar9 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar9 = unaff_x20[0x24];
    if (lVar9 != 0) goto LAB_1047a6c24;
LAB_1047a6c5c:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar11 = unaff_x20[0x21];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar11,lVar9);
    lVar9 = unaff_x20[0x24];
    if (lVar9 == 0) goto LAB_1047a6c5c;
LAB_1047a6c24:
    uVar11 = unaff_x20[0x23];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar11,lVar9);
  }
  if (*(char *)((long)unaff_x20 + 0x141) != '\x01') {
    uVar15 = unaff_x20[0x25];
    uVar8 = unaff_x20[0x27];
    cVar2 = *(char *)(unaff_x20 + 0x28);
    cVar3 = *(char *)(unaff_x20 + 0x26);
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (cVar3 == '\x01') {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar1 = 0;
      if ((uVar15 & 0x7fffffffffffffff) != 0) {
        uVar1 = uVar15;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar1);
    }
    if (cVar2 != '\x01') {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar15 = 0;
      if ((uVar8 & 0x7fffffffffffffff) != 0) {
        uVar15 = uVar8;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar15);
      lVar9 = unaff_x20[0x2a];
      goto joined_r0x0001047a6d34;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  lVar9 = unaff_x20[0x2a];
joined_r0x0001047a6d34:
  if (lVar9 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar9 = unaff_x20[0x2e];
  }
  else {
    uVar11 = unaff_x20[0x2b];
    uVar13 = unaff_x20[0x2c];
    uVar10 = unaff_x20[0x29];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar9);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar11,uVar13);
    lVar9 = unaff_x20[0x2e];
  }
  if (lVar9 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar9 = unaff_x20[0x30];
  }
  else {
    uVar11 = unaff_x20[0x2d];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar11,lVar9);
    lVar9 = unaff_x20[0x30];
  }
  if (lVar9 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar11 = unaff_x20[0x2f];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar11,lVar9);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0x31) & 1);
  uVar4 = *(uint5 *)(unaff_x20 + 0x39);
  if ((((unaff_x20[0x36] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     (((ulong)uVar4 & 0xfefefefefefefefe) == 0x6fefefefe)) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_128 = unaff_x20[0x33];
    uStack_130 = unaff_x20[0x32];
    uStack_118 = unaff_x20[0x35];
    uStack_120 = unaff_x20[0x34];
    uStack_100 = unaff_x20[0x38];
    uStack_108 = unaff_x20[0x37];
    uStack_f8 = (undefined4)uVar4;
    uStack_f4 = (undefined1)(uVar4 >> 0x20);
    uStack_110 = unaff_x20[0x36];
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_10473b6ac(param_1);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x1cd) & 1);
  lVar9 = unaff_x20[0x3b];
  if (lVar9 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar11 = unaff_x20[0x3a];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar11,lVar9);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0x3c) & 1);
  lVar9 = unaff_x20[0x3e];
  if (lVar9 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar10 = unaff_x20[0x42];
    uVar12 = unaff_x20[0x41];
    uVar11 = unaff_x20[0x3f];
    uVar13 = unaff_x20[0x40];
    uVar16 = unaff_x20[0x3d];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar16,lVar9);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar11,uVar13);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar12,uVar10);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0x43) & 1);
  lVar9 = unaff_x20[0x45];
  if (lVar9 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar9 = unaff_x20[0x4b];
  }
  else {
    uVar15 = unaff_x20[0x4a];
    uVar11 = unaff_x20[0x49];
    uVar13 = unaff_x20[0x48];
    uVar10 = unaff_x20[0x47];
    uVar12 = unaff_x20[0x46];
    uVar16 = unaff_x20[0x44];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar16,lVar9);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar12,uVar10);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar13,uVar11);
    uVar8 = 0;
    if ((uVar15 & 0x7fffffffffffffff) != 0) {
      uVar8 = uVar15;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar8);
    lVar9 = unaff_x20[0x4b];
  }
  if (lVar9 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar7 = *(long *)(lVar9 + 0x10);
    __ss6HasherV8_combineyySuF(lVar7);
    if (lVar7 != 0) {
      puVar14 = (undefined8 *)(lVar9 + 0x30);
      do {
        uVar11 = puVar14[-1];
        uVar13 = *puVar14;
        __ss6HasherV8_combineyySuF(puVar14[-2]);
        _swift_bridgeObjectRetain(uVar13);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar11,uVar13);
        _swift_bridgeObjectRelease(uVar13);
        lVar7 = lVar7 + -1;
        puVar14 = puVar14 + 3;
      } while (lVar7 != 0);
    }
  }
  return;
}



/* Entry: 1047a7060; end: 1047a70eb;  */

void FUN_1047a7060(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1047a6974(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047a70ec; end: 1047a875f;  */

void FUN_1047a70ec(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar8 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_2 + 0x40);
  _swift_bridgeObjectRetain(param_2);
  uStack_b8 = 0;
  lVar9 = 0;
  while( true ) {
    for (; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
      uVar7 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = lVar9 << 10 | LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar7);
      uVar2 = *puVar1;
      lVar4 = puVar1[1];
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar7);
      uVar3 = *puVar1;
      uVar7 = puVar1[1];
      _swift_bridgeObjectRetain(lVar4);
      _swift_bridgeObjectRetain(uVar7);
      if (lVar4 == 0) goto LAB_1047a7224;
      uStack_88 = param_1[5];
      uStack_90 = param_1[4];
      uStack_78 = param_1[7];
      uStack_80 = param_1[6];
      uStack_70 = param_1[8];
      uStack_a8 = param_1[1];
      uStack_b0 = *param_1;
      uStack_98 = param_1[3];
      uStack_a0 = param_1[2];
      __sSS4hash4intoys6HasherVz_tF(&uStack_b0,uVar2,lVar4);
      _swift_bridgeObjectRelease(lVar4);
      __sSS4hash4intoys6HasherVz_tF(&uStack_b0,uVar3,uVar7);
      _swift_bridgeObjectRelease();
      __ss6HasherV9_finalizeSiyF();
      uStack_b8 = uVar7 ^ uStack_b8;
    }
    bVar6 = SCARRY8(lVar9,1);
    lVar9 = lVar9 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1047a725c);
      (*pcVar5)();
    }
    if ((long)(uVar8 + 0x3f >> 6) <= lVar9) break;
    uVar10 = ((ulong *)(param_2 + 0x40))[lVar9];
  }
LAB_1047a7224:
  _swift_release(param_2);
  __ss6HasherV8_combineyySuF(uStack_b8);
  return;
}



/* Entry: 1047a8760; end: 1047a8787;  */

int FUN_1047a8760(long param_1)

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



/* Entry: 1047a8788; end: 1047a87c7;  */

void FUN_1047a8788(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ecd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34768;
  _swift_getWitnessTable(&UNK_10dd34768,&UNK_1107a0c00);
  puRam000000011308ecd8 = puVar1;
  return;
}



/* Entry: 1047a87c8; end: 1047a8987;  */

long FUN_1047a87c8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1047a8988; end: 1047a993b;  */

undefined8 * FUN_1047a8988(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint5 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar5 = param_2[1];
  if (lVar5 == 1) {
    uVar7 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar7;
    param_1[2] = param_2[2];
  }
  else {
    *param_1 = *param_2;
    param_1[1] = lVar5;
    uVar7 = param_2[2];
    param_1[2] = uVar7;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar7);
  }
  uVar6 = param_2[5];
  if (uVar6 >> 0x3c == 0xb) {
    uVar7 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar7;
    param_1[5] = param_2[5];
  }
  else {
    param_1[3] = param_2[3];
    if (uVar6 >> 0x3c < 0xf) {
      uVar7 = param_2[4];
      func_0x00010006c00c(uVar7,uVar6);
      param_1[4] = uVar7;
      param_1[5] = uVar6;
    }
    else {
      uVar7 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar7;
    }
  }
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  param_1[7] = param_2[7];
  lVar5 = param_2[9];
  if (lVar5 == 1) {
    uVar7 = param_2[0x10];
    uVar9 = param_2[0x13];
    uVar8 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar7;
    param_1[0x13] = uVar9;
    param_1[0x12] = uVar8;
    uVar7 = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar7;
    uVar7 = *(undefined8 *)((long)param_2 + 0xaa);
    *(undefined8 *)((long)param_1 + 0xb2) = *(undefined8 *)((long)param_2 + 0xb2);
    *(undefined8 *)((long)param_1 + 0xaa) = uVar7;
    uVar7 = param_2[8];
    uVar9 = param_2[0xb];
    uVar8 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar7;
    param_1[0xb] = uVar9;
    param_1[10] = uVar8;
    uVar7 = param_2[0xc];
    uVar9 = param_2[0xf];
    uVar8 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar7;
    param_1[0xf] = uVar9;
    param_1[0xe] = uVar8;
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = lVar5;
    uVar1 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar1;
    uVar7 = param_2[0xc];
    uVar8 = param_2[0xd];
    param_1[0xc] = uVar7;
    param_1[0xd] = uVar8;
    uVar8 = param_2[0xe];
    uVar9 = param_2[0xf];
    param_1[0xe] = uVar8;
    param_1[0xf] = uVar9;
    uVar9 = param_2[0x10];
    uVar2 = param_2[0x11];
    param_1[0x10] = uVar9;
    param_1[0x11] = uVar2;
    lVar5 = param_2[0x13];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar2);
    if (lVar5 == 1) {
      uVar7 = param_2[0x12];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar7;
    }
    else {
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = lVar5;
      _swift_bridgeObjectRetain(lVar5);
    }
    uVar7 = param_2[0x15];
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = uVar7;
    param_1[0x16] = param_2[0x16];
    *(undefined2 *)(param_1 + 0x17) = *(undefined2 *)(param_2 + 0x17);
    _swift_bridgeObjectRetain();
  }
  lVar5 = param_2[0x18];
  *(undefined2 *)((long)param_1 + 0xba) = *(undefined2 *)((long)param_2 + 0xba);
  if (lVar5 == 0) {
    lVar5 = param_2[0x18];
    uVar8 = param_2[0x1b];
    uVar7 = param_2[0x1a];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = lVar5;
    param_1[0x1b] = uVar8;
    param_1[0x1a] = uVar7;
    uVar7 = param_2[0x1c];
    uVar9 = param_2[0x1f];
    uVar8 = param_2[0x1e];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar7;
    param_1[0x1f] = uVar9;
    param_1[0x1e] = uVar8;
  }
  else {
    param_1[0x18] = lVar5;
    uVar7 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar7;
    uVar7 = param_2[0x1c];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1c] = uVar7;
    lVar5 = param_2[0x1e];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar7);
    if (lVar5 == 0) {
      uVar7 = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar7;
      param_1[0x1f] = param_2[0x1f];
    }
    else {
      param_1[0x1d] = param_2[0x1d];
      param_1[0x1e] = lVar5;
      uVar7 = param_2[0x1f];
      param_1[0x1f] = uVar7;
      _swift_bridgeObjectRetain(lVar5);
      _swift_bridgeObjectRetain(uVar7);
    }
  }
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  uVar7 = param_2[0x22];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = uVar7;
  uVar7 = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = uVar7;
  uVar8 = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  param_1[0x25] = uVar8;
  uVar8 = *(undefined8 *)((long)param_2 + 0x132);
  *(undefined8 *)((long)param_1 + 0x13a) = *(undefined8 *)((long)param_2 + 0x13a);
  *(undefined8 *)((long)param_1 + 0x132) = uVar8;
  lVar5 = param_2[0x2a];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar7);
  if (lVar5 == 0) {
    uVar7 = param_2[0x29];
    uVar9 = param_2[0x2c];
    uVar8 = param_2[0x2b];
    param_1[0x2a] = param_2[0x2a];
    param_1[0x29] = uVar7;
    param_1[0x2c] = uVar9;
    param_1[0x2b] = uVar8;
  }
  else {
    param_1[0x29] = param_2[0x29];
    param_1[0x2a] = lVar5;
    uVar7 = param_2[0x2c];
    param_1[0x2b] = param_2[0x2b];
    param_1[0x2c] = uVar7;
    _swift_bridgeObjectRetain(lVar5);
    _swift_bridgeObjectRetain(uVar7);
  }
  uVar7 = param_2[0x2e];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = uVar7;
  uVar7 = param_2[0x2f];
  uVar8 = param_2[0x30];
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
  uVar6 = param_2[0x36];
  uVar4 = *(uint5 *)(param_2 + 0x39);
  param_1[0x2f] = uVar7;
  param_1[0x30] = uVar8;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar8);
  if ((((uVar6 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     (((ulong)uVar4 & 0xfefefefefefefefe) == 0x6fefefefe)) {
    uVar7 = param_2[0x32];
    uVar9 = param_2[0x35];
    uVar8 = param_2[0x34];
    param_1[0x33] = param_2[0x33];
    param_1[0x32] = uVar7;
    param_1[0x35] = uVar9;
    param_1[0x34] = uVar8;
    uVar7 = param_2[0x36];
    param_1[0x37] = param_2[0x37];
    param_1[0x36] = uVar7;
    uVar7 = *(undefined8 *)((long)param_2 + 0x1bd);
    *(undefined8 *)((long)param_1 + 0x1c5) = *(undefined8 *)((long)param_2 + 0x1c5);
    *(undefined8 *)((long)param_1 + 0x1bd) = uVar7;
  }
  else {
    uVar7 = param_2[0x32];
    uVar1 = param_2[0x33];
    uVar8 = param_2[0x34];
    uVar2 = param_2[0x35];
    uVar9 = param_2[0x37];
    uVar3 = param_2[0x38];
    func_0x00010179a2b8(uVar7,uVar1,uVar8,uVar2,uVar6,uVar9,uVar3,(ulong)uVar4);
    param_1[0x32] = uVar7;
    param_1[0x33] = uVar1;
    param_1[0x34] = uVar8;
    param_1[0x35] = uVar2;
    param_1[0x36] = uVar6;
    param_1[0x37] = uVar9;
    param_1[0x38] = uVar3;
    *(char *)((long)param_1 + 0x1cc) = (char)(uVar4 >> 0x20);
    *(int *)(param_1 + 0x39) = (int)uVar4;
  }
  *(undefined1 *)((long)param_1 + 0x1cd) = *(undefined1 *)((long)param_2 + 0x1cd);
  uVar7 = param_2[0x3b];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x3b] = uVar7;
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  lVar5 = param_2[0x3e];
  _swift_bridgeObjectRetain();
  if (lVar5 == 0) {
    uVar7 = param_2[0x3d];
    uVar9 = param_2[0x40];
    uVar8 = param_2[0x3f];
    param_1[0x3e] = param_2[0x3e];
    param_1[0x3d] = uVar7;
    param_1[0x40] = uVar9;
    param_1[0x3f] = uVar8;
    uVar7 = param_2[0x41];
    param_1[0x42] = param_2[0x42];
    param_1[0x41] = uVar7;
  }
  else {
    param_1[0x3d] = param_2[0x3d];
    param_1[0x3e] = lVar5;
    uVar7 = param_2[0x40];
    param_1[0x3f] = param_2[0x3f];
    param_1[0x40] = uVar7;
    param_1[0x41] = param_2[0x41];
    uVar8 = param_2[0x42];
    param_1[0x42] = uVar8;
    _swift_bridgeObjectRetain(lVar5);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar8);
  }
  *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)(param_2 + 0x43);
  lVar5 = param_2[0x45];
  if (lVar5 == 0) {
    uVar7 = param_2[0x44];
    uVar9 = param_2[0x47];
    uVar8 = param_2[0x46];
    param_1[0x45] = param_2[0x45];
    param_1[0x44] = uVar7;
    param_1[0x47] = uVar9;
    param_1[0x46] = uVar8;
    uVar7 = param_2[0x48];
    param_1[0x49] = param_2[0x49];
    param_1[0x48] = uVar7;
    param_1[0x4a] = param_2[0x4a];
  }
  else {
    param_1[0x44] = param_2[0x44];
    param_1[0x45] = lVar5;
    param_1[0x46] = param_2[0x46];
    uVar7 = param_2[0x47];
    param_1[0x47] = uVar7;
    param_1[0x48] = param_2[0x48];
    uVar8 = param_2[0x49];
    param_1[0x49] = uVar8;
    param_1[0x4a] = param_2[0x4a];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar8);
  }
  param_1[0x4b] = param_2[0x4b];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1047a993c; end: 1047a9943;  */

void FUN_1047a993c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x260);
  return;
}



/* Entry: 1047a9944; end: 1047a9eaf;  */

undefined8 * FUN_1047a9944(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint5 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_1[1] == 1) {
LAB_1047a9984:
    uVar6 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar6;
    param_1[2] = param_2[2];
  }
  else {
    lVar7 = param_2[1];
    if (lVar7 == 1) {
      func_0x0001017b6468(param_1);
      goto LAB_1047a9984;
    }
    *param_1 = *param_2;
    param_1[1] = lVar7;
    _swift_bridgeObjectRelease();
    uVar6 = param_1[2];
    param_1[2] = param_2[2];
    _swift_bridgeObjectRelease(uVar6);
  }
  if ((ulong)param_1[5] >> 0x3c == 0xb) {
LAB_1047a99dc:
    uVar6 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar6;
    param_1[5] = param_2[5];
  }
  else {
    uVar8 = param_2[5];
    uVar9 = uVar8 >> 0x3c;
    if (uVar9 == 0xb) {
      func_0x0001017b65d4(param_1 + 3);
      goto LAB_1047a99dc;
    }
    param_1[3] = param_2[3];
    if ((ulong)param_1[5] >> 0x3c < 0xf) {
      if (0xe < uVar9) {
        func_0x0001006e5814(param_1 + 4);
        goto LAB_1047a9a70;
      }
      uVar6 = param_1[4];
      param_1[4] = param_2[4];
      param_1[5] = uVar8;
      func_0x00010006c090(uVar6);
    }
    else {
LAB_1047a9a70:
      uVar6 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar6;
    }
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x31) = *(undefined1 *)((long)param_2 + 0x31);
  param_1[7] = param_2[7];
  if (param_1[9] == 1) {
LAB_1047a9a24:
    uVar6 = param_2[0x10];
    uVar13 = param_2[0x13];
    uVar5 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar6;
    param_1[0x13] = uVar13;
    param_1[0x12] = uVar5;
    uVar6 = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar6;
    uVar6 = *(undefined8 *)((long)param_2 + 0xaa);
    *(undefined8 *)((long)param_1 + 0xb2) = *(undefined8 *)((long)param_2 + 0xb2);
    *(undefined8 *)((long)param_1 + 0xaa) = uVar6;
    uVar6 = param_2[8];
    uVar13 = param_2[0xb];
    uVar5 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar6;
    param_1[0xb] = uVar13;
    param_1[10] = uVar5;
    uVar6 = param_2[0xc];
    uVar13 = param_2[0xf];
    uVar5 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar6;
    param_1[0xf] = uVar13;
    param_1[0xe] = uVar5;
  }
  else {
    lVar7 = param_2[9];
    if (lVar7 == 1) {
      func_0x0001017b663c(param_1 + 8);
      goto LAB_1047a9a24;
    }
    param_1[8] = param_2[8];
    param_1[9] = lVar7;
    _swift_bridgeObjectRelease();
    uVar6 = param_2[0xb];
    uVar5 = param_1[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar6;
    _swift_bridgeObjectRelease(uVar5);
    uVar6 = param_1[0xc];
    param_1[0xc] = param_2[0xc];
    _swift_bridgeObjectRelease(uVar6);
    uVar6 = param_2[0xe];
    uVar5 = param_1[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = uVar6;
    _swift_bridgeObjectRelease(uVar5);
    uVar6 = param_2[0x10];
    uVar5 = param_1[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = uVar6;
    _swift_bridgeObjectRelease(uVar5);
    uVar6 = param_1[0x11];
    param_1[0x11] = param_2[0x11];
    _swift_bridgeObjectRelease(uVar6);
    if (param_1[0x13] == 1) {
LAB_1047a9af8:
      uVar6 = param_2[0x12];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar6;
    }
    else {
      lVar7 = param_2[0x13];
      if (lVar7 == 1) {
        func_0x0001017b6608(param_1 + 0x12);
        goto LAB_1047a9af8;
      }
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = lVar7;
      _swift_bridgeObjectRelease();
    }
    uVar6 = param_2[0x15];
    uVar5 = param_1[0x15];
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = uVar6;
    _swift_bridgeObjectRelease(uVar5);
    param_1[0x16] = param_2[0x16];
    *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
    *(undefined1 *)((long)param_1 + 0xb9) = *(undefined1 *)((long)param_2 + 0xb9);
  }
  plVar10 = param_1 + 0x18;
  *(undefined1 *)((long)param_1 + 0xba) = *(undefined1 *)((long)param_2 + 0xba);
  *(undefined1 *)((long)param_1 + 0xbb) = *(undefined1 *)((long)param_2 + 0xbb);
  if (*plVar10 == 0) {
LAB_1047a9bcc:
    lVar7 = param_2[0x18];
    uVar5 = param_2[0x1b];
    uVar6 = param_2[0x1a];
    param_1[0x19] = param_2[0x19];
    *plVar10 = lVar7;
    param_1[0x1b] = uVar5;
    param_1[0x1a] = uVar6;
    uVar6 = param_2[0x1c];
    uVar13 = param_2[0x1f];
    uVar5 = param_2[0x1e];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar6;
    param_1[0x1f] = uVar13;
    param_1[0x1e] = uVar5;
  }
  else {
    if (param_2[0x18] == 0) {
      func_0x0001017b66a4(plVar10);
      goto LAB_1047a9bcc;
    }
    param_1[0x18] = param_2[0x18];
    _swift_bridgeObjectRelease();
    uVar6 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar6;
    uVar6 = param_2[0x1c];
    uVar5 = param_1[0x1c];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1c] = uVar6;
    _swift_bridgeObjectRelease(uVar5);
    if (param_1[0x1e] == 0) {
LAB_1047a9be8:
      uVar6 = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar6;
      param_1[0x1f] = param_2[0x1f];
    }
    else {
      lVar7 = param_2[0x1e];
      if (lVar7 == 0) {
        func_0x0001017b6670(param_1 + 0x1d);
        goto LAB_1047a9be8;
      }
      param_1[0x1d] = param_2[0x1d];
      param_1[0x1e] = lVar7;
      _swift_bridgeObjectRelease();
      uVar6 = param_1[0x1f];
      param_1[0x1f] = param_2[0x1f];
      _swift_bridgeObjectRelease(uVar6);
    }
  }
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  uVar6 = param_2[0x22];
  uVar5 = param_1[0x22];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = uVar6;
  _swift_bridgeObjectRelease(uVar5);
  uVar6 = param_2[0x24];
  uVar5 = param_1[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = uVar6;
  _swift_bridgeObjectRelease(uVar5);
  uVar6 = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  param_1[0x25] = uVar6;
  uVar6 = *(undefined8 *)((long)param_2 + 0x132);
  *(undefined8 *)((long)param_1 + 0x13a) = *(undefined8 *)((long)param_2 + 0x13a);
  *(undefined8 *)((long)param_1 + 0x132) = uVar6;
  if (param_1[0x2a] == 0) {
LAB_1047a9c7c:
    uVar6 = param_2[0x29];
    uVar13 = param_2[0x2c];
    uVar5 = param_2[0x2b];
    param_1[0x2a] = param_2[0x2a];
    param_1[0x29] = uVar6;
    param_1[0x2c] = uVar13;
    param_1[0x2b] = uVar5;
  }
  else {
    lVar7 = param_2[0x2a];
    if (lVar7 == 0) {
      func_0x0001017b66d8(param_1 + 0x29);
      goto LAB_1047a9c7c;
    }
    param_1[0x29] = param_2[0x29];
    param_1[0x2a] = lVar7;
    _swift_bridgeObjectRelease();
    uVar6 = param_2[0x2c];
    uVar5 = param_1[0x2c];
    param_1[0x2b] = param_2[0x2b];
    param_1[0x2c] = uVar6;
    _swift_bridgeObjectRelease(uVar5);
  }
  uVar6 = param_2[0x2e];
  uVar5 = param_1[0x2e];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = uVar6;
  _swift_bridgeObjectRelease(uVar5);
  uVar6 = param_2[0x30];
  uVar5 = param_1[0x30];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = uVar6;
  _swift_bridgeObjectRelease(uVar5);
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
  uVar8 = param_1[0x36];
  if ((((uVar8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     (((ulong)*(uint5 *)(param_1 + 0x39) & 0xfefefefefefefefe) == 0x6fefefefe)) {
LAB_1047a9d24:
    uVar6 = param_2[0x32];
    uVar13 = param_2[0x35];
    uVar5 = param_2[0x34];
    param_1[0x33] = param_2[0x33];
    param_1[0x32] = uVar6;
    param_1[0x35] = uVar13;
    param_1[0x34] = uVar5;
    uVar6 = param_2[0x36];
    param_1[0x37] = param_2[0x37];
    param_1[0x36] = uVar6;
    uVar6 = *(undefined8 *)((long)param_2 + 0x1bd);
    *(undefined8 *)((long)param_1 + 0x1c5) = *(undefined8 *)((long)param_2 + 0x1c5);
    *(undefined8 *)((long)param_1 + 0x1bd) = uVar6;
  }
  else {
    uVar9 = param_2[0x36];
    uVar4 = *(uint5 *)(param_2 + 0x39);
    if ((((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
       (((ulong)uVar4 & 0xfefefefefe) == 0x6fefefefe)) {
      func_0x0001017b670c(param_1 + 0x32);
      goto LAB_1047a9d24;
    }
    uVar6 = param_1[0x32];
    uVar1 = param_1[0x33];
    uVar5 = param_1[0x34];
    uVar2 = param_1[0x35];
    uVar13 = param_1[0x37];
    uVar3 = param_1[0x38];
    uVar11 = param_2[0x32];
    uVar14 = param_2[0x35];
    uVar12 = param_2[0x34];
    param_1[0x33] = param_2[0x33];
    param_1[0x32] = uVar11;
    param_1[0x35] = uVar14;
    param_1[0x34] = uVar12;
    param_1[0x36] = uVar9;
    uVar11 = param_2[0x37];
    param_1[0x38] = param_2[0x38];
    param_1[0x37] = uVar11;
    *(int *)(param_1 + 0x39) = (int)uVar4;
    *(char *)((long)param_1 + 0x1cc) = (char)(uVar4 >> 0x20);
    func_0x00010179b820(uVar6,uVar1,uVar5,uVar2,uVar8,uVar13,uVar3);
  }
  *(undefined1 *)((long)param_1 + 0x1cd) = *(undefined1 *)((long)param_2 + 0x1cd);
  uVar6 = param_2[0x3b];
  uVar5 = param_1[0x3b];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x3b] = uVar6;
  _swift_bridgeObjectRelease(uVar5);
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  if (param_1[0x3e] == 0) {
LAB_1047a9de8:
    uVar6 = param_2[0x3d];
    uVar13 = param_2[0x40];
    uVar5 = param_2[0x3f];
    param_1[0x3e] = param_2[0x3e];
    param_1[0x3d] = uVar6;
    param_1[0x40] = uVar13;
    param_1[0x3f] = uVar5;
    uVar6 = param_2[0x41];
    param_1[0x42] = param_2[0x42];
    param_1[0x41] = uVar6;
  }
  else {
    lVar7 = param_2[0x3e];
    if (lVar7 == 0) {
      func_0x0001017b6740(param_1 + 0x3d);
      goto LAB_1047a9de8;
    }
    param_1[0x3d] = param_2[0x3d];
    param_1[0x3e] = lVar7;
    _swift_bridgeObjectRelease();
    uVar6 = param_2[0x40];
    uVar5 = param_1[0x40];
    param_1[0x3f] = param_2[0x3f];
    param_1[0x40] = uVar6;
    _swift_bridgeObjectRelease(uVar5);
    param_1[0x41] = param_2[0x41];
    uVar6 = param_1[0x42];
    param_1[0x42] = param_2[0x42];
    _swift_bridgeObjectRelease(uVar6);
  }
  *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)(param_2 + 0x43);
  if (param_1[0x45] != 0) {
    lVar7 = param_2[0x45];
    if (lVar7 != 0) {
      param_1[0x44] = param_2[0x44];
      param_1[0x45] = lVar7;
      _swift_bridgeObjectRelease();
      param_1[0x46] = param_2[0x46];
      uVar6 = param_1[0x47];
      param_1[0x47] = param_2[0x47];
      _swift_bridgeObjectRelease(uVar6);
      param_1[0x48] = param_2[0x48];
      uVar6 = param_1[0x49];
      param_1[0x49] = param_2[0x49];
      _swift_bridgeObjectRelease(uVar6);
      param_1[0x4a] = param_2[0x4a];
      goto LAB_1047a9e84;
    }
    func_0x0001017b6774(param_1 + 0x44);
  }
  uVar6 = param_2[0x44];
  uVar13 = param_2[0x47];
  uVar5 = param_2[0x46];
  param_1[0x45] = param_2[0x45];
  param_1[0x44] = uVar6;
  param_1[0x47] = uVar13;
  param_1[0x46] = uVar5;
  uVar6 = param_2[0x48];
  param_1[0x49] = param_2[0x49];
  param_1[0x48] = uVar6;
  param_1[0x4a] = param_2[0x4a];
LAB_1047a9e84:
  uVar6 = param_1[0x4b];
  param_1[0x4b] = param_2[0x4b];
  _swift_bridgeObjectRelease(uVar6);
  return param_1;
}



/* Entry: 1047a9eb0; end: 1047aa00f;  */

int FUN_1047a9eb0(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x98] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x30);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1047aa010; end: 1047aa097;  */

undefined8 FUN_1047aa010(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1047aa098; end: 1047aa193;  */

void FUN_1047aa098(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar2,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047aa194; end: 1047aa1f3;  */

long FUN_1047aa194(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  if ((int)*param_1 != (int)*param_2) {
    return 0;
  }
  if ((lVar1 == param_2[1]) && (param_1[2] == param_2[2])) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(lVar1,param_1[2],param_2[1],param_2[2],0);
  return lVar1;
}



/* Entry: 1047aa1f4; end: 1047aa233;  */

void FUN_1047aa1f4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ecf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34810;
  _swift_getWitnessTable(&UNK_10dd34810,&UNK_1107a0d18);
  puRam000000011308ecf8 = puVar1;
  return;
}



/* Entry: 1047aa234; end: 1047aa23b;  */

void FUN_1047aa234(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1047aa23c; end: 1047aa2bb;  */

undefined8 * FUN_1047aa23c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 1047aa2bc; end: 1047aa35b;  */

int FUN_1047aa2bc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1047aa35c; end: 1047aa5bb;  */

void FUN_1047aa35c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  
  uVar1 = *unaff_x20;
  uVar5 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar6 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  uVar7 = unaff_x20[5];
  lVar4 = unaff_x20[6];
  uVar8 = unaff_x20[7];
  __ss6HasherV5_seedABSi_tcfC(auStack_a8,0);
  FUN_1047a70ec(auStack_a8,uVar1);
  __ss6HasherV8_combineyySuF(uVar5);
  __ss6HasherV8_combineyySuF(uVar2);
  __sSS4hash4intoys6HasherVz_tF(auStack_a8,uVar6,uVar3);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_a8,uVar7,lVar4);
    func_0x0001046dbb64(auStack_a8,uVar8);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047aa5bc; end: 1047aa603;  */

uint FUN_1047aa5bc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_1047aa604(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1047aa604; end: 1047aa77b;  */

undefined8 FUN_1047aa604(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar1 = *param_1;
  func_0x000101058cd4(uVar1,*param_2);
  if ((((uVar1 & 1) != 0) && (param_1[1] == param_2[1])) &&
     ((int)param_1[2] == *(int *)(param_2 + 2))) {
    uVar1 = param_1[3];
    if (((uVar1 == param_2[3]) && (param_1[4] == param_2[4])) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar1 & 1) != 0)) {
      uVar1 = param_1[6];
      uVar3 = param_2[6];
      if (uVar1 == 0) {
        if (uVar3 == 0) {
          return 1;
        }
      }
      else if (uVar3 != 0) {
        uVar5 = param_1[5];
        uVar4 = param_1[7];
        uVar7 = param_2[5];
        uVar6 = param_2[7];
        if (((uVar5 == uVar7) && (uVar1 == uVar3)) ||
           (uVar2 = uVar5,
           __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (uVar5,uVar1,uVar7,uVar3,0), (uVar2 & 1) != 0)) {
          FUN_1046305e0(uVar7,uVar3,uVar6);
          FUN_1046305e0(uVar5,uVar1,uVar4);
          uVar7 = uVar4;
          FUN_10470b26c(uVar4,uVar6);
          _swift_bridgeObjectRelease(uVar6);
          _swift_bridgeObjectRelease(uVar3);
          func_0x000104630610(uVar5,uVar1,uVar4);
          if ((uVar7 & 1) != 0) {
            return 1;
          }
        }
        else {
          FUN_1046305e0(uVar7,uVar3,uVar6);
          FUN_1046305e0(uVar5,uVar1,uVar4);
          _swift_bridgeObjectRelease(uVar6);
          _swift_bridgeObjectRelease(uVar3);
          func_0x000104630610(uVar5,uVar1,uVar4);
        }
      }
    }
  }
  return 0;
}



/* Entry: 1047aa77c; end: 1047aa77f;  */

void FUN_1047aa77c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd348a0;
  _swift_getWitnessTable(&UNK_10dd348a0,&UNK_1107a0dd0);
  puRam000000011308ed00 = puVar1;
  return;
}



/* Entry: 1047aa780; end: 1047aa7bf;  */

void FUN_1047aa780(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd348a0;
  _swift_getWitnessTable(&UNK_10dd348a0,&UNK_1107a0dd0);
  puRam000000011308ed00 = puVar1;
  return;
}



/* Entry: 1047aa7c0; end: 1047aa833;  */

long FUN_1047aa7c0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1047aa834; end: 1047aa9d3;  */

undefined8 * FUN_1047aa834(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  lVar2 = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  if (lVar2 == 0) {
    uVar1 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar1;
    param_1[7] = param_2[7];
  }
  else {
    param_1[5] = param_2[5];
    param_1[6] = lVar2;
    uVar1 = param_2[7];
    param_1[7] = uVar1;
    _swift_bridgeObjectRetain(lVar2);
    _swift_bridgeObjectRetain(uVar1);
  }
  return param_1;
}



/* Entry: 1047aa9d4; end: 1047aaa67;  */

undefined8 * FUN_1047aa9d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  if (param_1[6] != 0) {
    lVar3 = param_2[6];
    if (lVar3 != 0) {
      param_1[5] = param_2[5];
      param_1[6] = lVar3;
      _swift_bridgeObjectRelease();
      uVar1 = param_1[7];
      param_1[7] = param_2[7];
      _swift_bridgeObjectRelease(uVar1);
      return param_1;
    }
    func_0x0001017b6670(param_1 + 5);
  }
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  param_1[7] = param_2[7];
  return param_1;
}



/* Entry: 1047aaa68; end: 1047aab0f;  */

int FUN_1047aaa68(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1047aab10; end: 1047aac97;  */

void FUN_1047aab10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar3);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar2,uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047aac98; end: 1047aac9b;  */

void FUN_1047aac98(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34930;
  _swift_getWitnessTable(&UNK_10dd34930,&UNK_1107a0e98);
  puRam000000011308ed08 = puVar1;
  return;
}



/* Entry: 1047aac9c; end: 1047aacdb;  */

void FUN_1047aac9c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34930;
  _swift_getWitnessTable(&UNK_10dd34930,&UNK_1107a0e98);
  puRam000000011308ed08 = puVar1;
  return;
}



/* Entry: 1047aacdc; end: 1047aad6b;  */

long FUN_1047aacdc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1047aad6c; end: 1047aadd7;  */

undefined8 * FUN_1047aad6c(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 1047aadd8; end: 1047aae1b;  */

undefined8 * FUN_1047aadd8(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 1047aae1c; end: 1047aaeb3;  */

int FUN_1047aae1c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1047aaeb4; end: 1047aafb3;  */

void FUN_1047aaeb4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar3);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar2,uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047aafb4; end: 1047aafb7;  */

void FUN_1047aafb4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd349d0;
  _swift_getWitnessTable(&UNK_10dd349d0,&UNK_1107a0f50);
  puRam000000011308ed10 = puVar1;
  return;
}



/* Entry: 1047aafb8; end: 1047aaff7;  */

void FUN_1047aafb8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd349d0;
  _swift_getWitnessTable(&UNK_10dd349d0,&UNK_1107a0f50);
  puRam000000011308ed10 = puVar1;
  return;
}



/* Entry: 1047aaff8; end: 1047ab087;  */

ulong FUN_1047aaff8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *param_1;
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  if ((uVar3 != *param_2 || param_1[1] != param_2[1]) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar3 & 1) == 0)) {
    return 0;
  }
  if (uVar4 == uVar1 && uVar5 == uVar2) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(uVar4,uVar5,uVar1,uVar2,0);
  return uVar4;
}



/* Entry: 1047ab088; end: 1047ab117;  */

long FUN_1047ab088(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1047ab118; end: 1047ab183;  */

undefined8 * FUN_1047ab118(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 1047ab184; end: 1047ab1c7;  */

undefined8 * FUN_1047ab184(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 1047ab1c8; end: 1047ab25f;  */

int FUN_1047ab1c8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1047ab260; end: 1047ab397;  */

void FUN_1047ab260(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,lVar2);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047ab398; end: 1047ab39b;  */

void FUN_1047ab398(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34a60;
  _swift_getWitnessTable(&UNK_10dd34a60,&UNK_1107a1008);
  puRam000000011308ed18 = puVar1;
  return;
}



/* Entry: 1047ab39c; end: 1047ab42f;  */

void FUN_1047ab39c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34a60;
  _swift_getWitnessTable(&UNK_10dd34a60,&UNK_1107a1008);
  puRam000000011308ed18 = puVar1;
  return;
}



/* Entry: 1047ab430; end: 1047ab437;  */

void FUN_1047ab430(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1047ab438; end: 1047ab4a7;  */

undefined8 * FUN_1047ab438(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 1047ab4a8; end: 1047ab56b;  */

int FUN_1047ab4a8(int *param_1,uint param_2)

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



/* Entry: 1047ab56c; end: 1047ab6a7;  */

void FUN_1047ab56c(undefined8 param_1,ulong param_2,char param_3,ulong param_4,char param_5)

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
    uVar1 = 0;
    if ((param_4 & 0x7fffffffffffffff) != 0) {
      uVar1 = param_4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  return;
}



/* Entry: 1047ab6a8; end: 1047ab6cf;  */

void FUN_1047ab6a8(void)

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
    uVar1 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047ab6d0; end: 1047ab72f;  */

void FUN_1047ab6d0(void)

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
  FUN_1047ab56c(auStack_78,uVar3,uVar2,uVar4,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047ab730; end: 1047ab7db;  */

undefined8 FUN_1047ab730(double *param_1,double *param_2)

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



/* Entry: 1047ab7dc; end: 1047ab81b;  */

void FUN_1047ab7dc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34af0;
  _swift_getWitnessTable(&UNK_10dd34af0,&UNK_1107a10c0);
  puRam000000011308ed20 = puVar1;
  return;
}



/* Entry: 1047ab81c; end: 1047ab847;  */

long FUN_1047ab81c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}


