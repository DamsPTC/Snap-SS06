/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 000202b4; end: 000202c3;  */

undefined1  [16] FUN_000202b4(void)

{
  return ZEXT816(0x30ab8);
}



/* Entry: 000202c4; end: 000202ef;  */

void FUN_000202c4(void)

{
  uRam00035568 = 0xb;
  pcRam0003556c = "ogging";
  uRam00035570 = 0xd0008000;
  return;
}



/* Entry: 000202f0; end: 0002032f;  */

undefined8 FUN_000202f0(void)

{
  if (iRam000351bc != -1) {
    _swift_once(0x351bc,FUN_000202c4);
  }
  return 0x35568;
}



/* Entry: 00020330; end: 0002033f;  */

undefined1  [16] FUN_00020330(void)

{
  return ZEXT816(0x30ac8);
}



/* Entry: 00020340; end: 00020377;  */

void FUN_00020340(undefined8 param_1)

{
  if (iRam00035208 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_00029fb8);
  return;
}



/* Entry: 00020378; end: 000203c7;  */

undefined8 FUN_00020378(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00010468(0x34dc0,&UNK_00028360);
  (**(code **)(*(int *)(iVar1 + -4) + 8))(param_2,param_1,iVar1);
  return param_2;
}



/* Entry: 000203c8; end: 00020417;  */

undefined8 FUN_000203c8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00010468(0x34dc0,&UNK_00028360);
  (**(code **)(*(int *)(iVar1 + -4) + 0x10))(param_2,param_1,iVar1);
  return param_2;
}



/* Entry: 00020418; end: 0002042b;  */

bool FUN_00020418(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 0002042c; end: 0002046f;  */

void FUN_0002042c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_w20;
  
  uVar1 = *unaff_w20;
  __ss6HasherV5_seedABSi_tcfC(0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00020470; end: 00020497;  */

void FUN_00020470(void)

{
  undefined1 *unaff_w20;
  
  __ss6HasherV8_combineyySuF(*unaff_w20);
  return;
}



/* Entry: 00020498; end: 000204d7;  */

void FUN_00020498(void)

{
  undefined1 uVar1;
  undefined1 *unaff_w20;
  
  uVar1 = *unaff_w20;
  __ss6HasherV5_seedABSi_tcfC();
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000204d8; end: 00020593;  */

undefined4 FUN_000204d8(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *unaff_w20;
  
  uVar2 = 0x72657375;
  bVar1 = *unaff_w20;
  if (1 < bVar1) {
    uVar3 = 0x10;
    if (bVar1 != 3) {
      uVar3 = 0xb;
    }
    if (bVar1 != 2) {
      uVar2 = uVar3;
    }
    return uVar2;
  }
  if (bVar1 != 0) {
    uVar2 = 0xb;
  }
  return uVar2;
}



/* Entry: 00020594; end: 000205b7;  */

void FUN_00020594(void)

{
  undefined1 uVar1;
  undefined1 *in_w8;
  
  uVar1 = FUN_00020c08();
  *in_w8 = uVar1;
  return;
}



/* Entry: 000205b8; end: 000205c3;  */

undefined1  [16] FUN_000205b8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 000205c4; end: 000205cf;  */

void FUN_000205c4(void)

{
  undefined1 *in_w8;
  
  *in_w8 = 5;
  return;
}



/* Entry: 000205d0; end: 000205db;  */

void FUN_000205d0(undefined8 param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR___ss9CodingKeyPsE16debugDescriptionSSvg_000304d8;
  uVar1 = FUN_000212c4();
                    /* WARNING: Could not recover jumptable at 0x0002061c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}



/* Entry: 000205dc; end: 000205e7;  */

void FUN_000205dc(undefined8 param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR___ss9CodingKeyPsE11descriptionSSvg_000304d4;
  uVar1 = FUN_000212c4();
                    /* WARNING: Could not recover jumptable at 0x0002061c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}



/* Entry: 000205e8; end: 0002061f;  */

void FUN_000205e8(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  
  uVar1 = FUN_000212c4();
                    /* WARNING: Could not recover jumptable at 0x0002061c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}



/* Entry: 00020620; end: 00020623;  */

undefined8 FUN_00020620(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  int iVar19;
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_90 [48];
  
  iVar11 = __s10Foundation3URLVMa(0);
  iVar15 = *(int *)(iVar11 + -4);
  puVar18 = auStack_90 + -(*(int *)(iVar15 + 0x20) + 0xfU & 0xfffffff0);
  iVar12 = FUN_00010468(0x34dc0,&UNK_00028360);
  iVar19 = (int)puVar18 - (*(int *)(*(int *)(iVar12 + -4) + 0x20) + 0xfU & 0xfffffff0);
  iVar12 = FUN_00010468(0x35248,&UNK_00028fa0);
  iVar20 = iVar19 - (*(int *)(*(int *)(iVar12 + -4) + 0x20) + 0xfU & 0xfffffff0);
  uVar3 = *param_1;
  uVar5 = param_1[1];
  uVar4 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_1[2];
  uVar8 = param_2[2];
  auVar21 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar3,uVar5,uVar7);
  auVar22 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar4,uVar6,uVar8);
  if ((auVar21 != auVar22) &&
     (uVar16 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (uVar3,uVar5,uVar7,uVar4,uVar6,uVar8,0), (uVar16 & 1) == 0)) {
    return 0;
  }
  uVar3 = param_1[3];
  uVar5 = param_1[4];
  uVar4 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_1[5];
  uVar8 = param_2[5];
  auVar21 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar3,uVar5,uVar7);
  auVar22 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar4,uVar6,uVar8);
  if ((auVar21 != auVar22) &&
     (uVar16 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (uVar3,uVar5,uVar7,uVar4,uVar6,uVar8,0), (uVar16 & 1) == 0)) {
    return 0;
  }
  uVar3 = param_1[6];
  uVar5 = param_1[7];
  uVar4 = param_2[6];
  uVar6 = param_2[7];
  uVar7 = param_1[8];
  uVar8 = param_2[8];
  auVar21 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar3,uVar5,uVar7);
  auVar22 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar4,uVar6,uVar8);
  if ((auVar21 != auVar22) &&
     (uVar16 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (uVar3,uVar5,uVar7,uVar4,uVar6,uVar8,0), (uVar16 & 1) == 0)) {
    return 0;
  }
  iVar13 = FUN_00020340(0);
  iVar14 = *(int *)(iVar13 + 0x14);
  iVar12 = *(int *)(iVar12 + 0x18);
  FUN_00020378((int)param_1 + iVar14,iVar20);
  FUN_00020378((int)param_2 + iVar14,iVar20 + iVar12);
  pcVar9 = *(code **)(iVar15 + 0x18);
  iVar14 = (*pcVar9)(iVar20,1,iVar11);
  if (iVar14 == 1) {
    iVar15 = (*pcVar9)(iVar20 + iVar12,1,iVar11);
    if (iVar15 == 1) {
      FUN_00021fbc(iVar20,0x34dc0,&UNK_00028360);
LAB_00021258:
      piVar1 = (int *)((int)param_1 + *(int *)(iVar13 + 0x18));
      piVar2 = (int *)((int)param_2 + *(int *)(iVar13 + 0x18));
      cVar10 = (char)piVar2[1];
      if ((char)piVar1[1] == '\x01') {
        if (cVar10 != '\x01') {
          return 0;
        }
        return 1;
      }
      if (cVar10 == '\x01') {
        return 0;
      }
      if (*piVar1 != *piVar2) {
        return 0;
      }
      return 1;
    }
  }
  else {
    FUN_00020378(iVar20,iVar19);
    iVar14 = (*pcVar9)(iVar20 + iVar12,1,iVar11);
    if (iVar14 != 1) {
      (**(code **)(iVar15 + 0x10))(puVar18,iVar20 + iVar12,iVar11);
      uVar17 = FUN_00021ffc(0x3524c,PTR___s10Foundation3URLVSQAAMc_00030064);
      uVar16 = __sSQ2eeoiySbx_xtFZTj(iVar19,puVar18,iVar11,uVar17);
      pcVar9 = *(code **)(iVar15 + 4);
      (*pcVar9)(puVar18,iVar11);
      (*pcVar9)(iVar19,iVar11);
      FUN_00021fbc(iVar20,0x34dc0,&UNK_00028360);
      if ((uVar16 & 1) == 0) {
        return 0;
      }
      goto LAB_00021258;
    }
    (**(code **)(iVar15 + 4))(iVar19,iVar11);
  }
  FUN_00021fbc(iVar20,0x35248,&UNK_00028fa0);
  return 0;
}



/* Entry: 00020624; end: 00020813;  */

/* WARNING: Removing unreachable block (ram,0x0002075c) */

void FUN_00020624(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *unaff_w20;
  int unaff_w21;
  undefined1 auStack_60 [11];
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  iVar7 = FUN_00010468(0x351c0,&UNK_00028d88);
  iVar5 = *(int *)(iVar7 + -4);
  iVar4 = *(int *)(iVar5 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  FUN_000212a0(param_1,uVar2);
  uVar9 = FUN_000212c4();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (&UNK_00030b14,&UNK_00030b14,uVar9,uVar2,uVar3);
  uStack_51 = 0;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
            (*unaff_w20,unaff_w20[1],unaff_w20[2],&uStack_51,iVar7);
  if (unaff_w21 == 0) {
    uStack_52 = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (unaff_w20[3],unaff_w20[4],unaff_w20[5],&uStack_52,iVar7);
    uStack_53 = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (unaff_w20[6],unaff_w20[7],unaff_w20[8],&uStack_53,iVar7);
    iVar8 = FUN_00020340(0);
    iVar6 = *(int *)(iVar8 + 0x14);
    uStack_54 = 3;
    uVar9 = __s10Foundation3URLVMa(0);
    uVar10 = FUN_00021ffc(0x351c8,PTR___s10Foundation3URLVSEAAMc_00030060);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              ((int)unaff_w20 + iVar6,&uStack_54,iVar7,uVar9,uVar10);
    puVar1 = (undefined4 *)((int)unaff_w20 + *(int *)(iVar8 + 0x18));
    uStack_55 = 4;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySuSg_xtKF
              (*puVar1,*(undefined1 *)(puVar1 + 1),&uStack_55,iVar7);
    (**(code **)(iVar5 + 4))(auStack_60 + -(iVar4 + 0xfU & 0xfffffff0),iVar7);
  }
  else {
    (**(code **)(iVar5 + 4))(auStack_60 + -(iVar4 + 0xfU & 0xfffffff0),iVar7);
  }
  return;
}



/* Entry: 00020814; end: 00020bb3;  */

/* WARNING: Removing unreachable block (ram,0x00020b24) */
/* WARNING: Removing unreachable block (ram,0x00020af4) */
/* WARNING: Removing unreachable block (ram,0x00020a20) */
/* WARNING: Removing unreachable block (ram,0x000209b8) */
/* WARNING: Removing unreachable block (ram,0x00020aa8) */
/* WARNING: Removing unreachable block (ram,0x00020b0c) */
/* WARNING: Removing unreachable block (ram,0x00020b10) */
/* WARNING: Removing unreachable block (ram,0x00020b3c) */
/* WARNING: Removing unreachable block (ram,0x00020b4c) */
/* WARNING: Removing unreachable block (ram,0x00020b28) */
/* WARNING: Removing unreachable block (ram,0x00020b38) */
/* WARNING: Removing unreachable block (ram,0x00020b50) */
/* WARNING: Removing unreachable block (ram,0x0002093c) */

void FUN_00020814(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 extraout_w1;
  undefined4 extraout_w1_00;
  undefined4 extraout_w1_01;
  undefined4 extraout_w1_02;
  undefined4 uVar8;
  undefined8 in_x8;
  int iVar9;
  int unaff_w21;
  int iVar10;
  undefined4 *puVar11;
  undefined4 auStack_90 [2];
  undefined1 uStack_87;
  undefined2 uStack_86;
  undefined4 auStack_84 [2];
  undefined1 uStack_7b;
  undefined2 uStack_7a;
  undefined4 auStack_78 [2];
  undefined1 uStack_6f;
  undefined2 auStack_6e [3];
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  iVar2 = FUN_00010468(0x34dc0,&UNK_00028360);
  iVar9 = (int)auStack_90 - (*(int *)(*(int *)(iVar2 + -4) + 0x20) + 0xfU & 0xfffffff0);
  iVar3 = FUN_00010468(0x351d0,&UNK_00028d90);
  iVar2 = *(int *)(iVar3 + -4);
  iVar10 = iVar9 - (*(int *)(iVar2 + 0x20) + 0xfU & 0xfffffff0);
  iVar4 = FUN_00020340(0);
  puVar11 = (undefined4 *)(iVar10 - (*(int *)(*(int *)(iVar4 + -4) + 0x20) + 0xfU & 0xfffffff0));
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar8 = *(undefined4 *)(param_1 + 0x10);
  FUN_000212a0(param_1,uVar5);
  uVar6 = FUN_000212c4();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (&UNK_00030b14,&UNK_00030b14,uVar6,uVar5,uVar8);
  if (unaff_w21 == 0) {
    uVar5 = __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(&uStack_51,iVar3);
    *puVar11 = uVar5;
    puVar11[1] = extraout_w1_00;
    *(char *)(puVar11 + 2) = (char)uVar6;
    *(char *)((int)puVar11 + 9) = (char)((ulonglong)uVar6 >> 8);
    *(short *)((int)puVar11 + 10) = (short)((ulonglong)uVar6 >> 0x10);
    uVar5 = __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(&uStack_52,iVar3);
    uVar8 = (undefined4)((ulonglong)uVar6 >> 0x10);
    puVar11[3] = uVar5;
    puVar11[4] = extraout_w1_01;
    *(char *)(puVar11 + 5) = (char)uVar6;
    *(char *)((int)puVar11 + 0x15) = (char)((ulonglong)uVar6 >> 8);
    *(short *)((int)puVar11 + 0x16) = (short)((ulonglong)uVar6 >> 0x10);
    uVar5 = __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(&uStack_53,iVar3);
    puVar11[6] = uVar5;
    puVar11[7] = extraout_w1_02;
    *(char *)(puVar11 + 8) = (char)uVar8;
    *(char *)((int)puVar11 + 0x21) = (char)((uint)uVar8 >> 8);
    *(short *)((int)puVar11 + 0x22) = (short)((uint)uVar8 >> 0x10);
    uVar6 = __s10Foundation3URLVMa(0);
    uVar7 = FUN_00021ffc(0x351d4,PTR___s10Foundation3URLVSeAAMc_00030068);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (uVar6,&uStack_54,iVar3,uVar6,uVar7);
    FUN_000203c8(iVar9,(int)puVar11 + *(int *)(iVar4 + 0x14));
    uVar5 = __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySuSgSum_xtKF(&uStack_55,iVar3);
    (**(code **)(iVar2 + 4))(iVar10,iVar3);
    puVar1 = (undefined4 *)((int)puVar11 + *(int *)(iVar4 + 0x18));
    *puVar1 = uVar5;
    *(undefined1 *)(puVar1 + 1) = extraout_w1;
    FUN_00014234(puVar11,in_x8);
    FUN_00021304(param_1);
    FUN_00021324(puVar11);
  }
  else {
    FUN_00021304(param_1);
  }
  return;
}



/* Entry: 00020bb4; end: 00020bc7;  */

void FUN_00020bb4(void)

{
  FUN_00020814();
  return;
}



/* Entry: 00020bc8; end: 00020bdb;  */

void FUN_00020bc8(void)

{
  FUN_00020624();
  return;
}



/* Entry: 00020bdc; end: 00020c03;  */

void FUN_00020bdc(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined8 *in_w8;
  undefined8 *unaff_w20;
  
  uVar2 = *(undefined1 *)((int)unaff_w20 + 9);
  uVar4 = *(undefined2 *)((int)unaff_w20 + 10);
  uVar1 = *(undefined4 *)((int)unaff_w20 + 4);
  *in_w8 = *unaff_w20;
  bVar3 = *(byte *)(unaff_w20 + 1);
  *(byte *)(in_w8 + 1) = bVar3;
  *(undefined1 *)((int)in_w8 + 9) = uVar2;
  *(undefined2 *)((int)in_w8 + 10) = uVar4;
  if (bVar3 - 1 < 2) {
                    /* WARNING: Could not recover jumptable at 0x000276f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRetain_00030588)(uVar1);
    return;
  }
  return;
}



/* Entry: 00020c04; end: 00020c07;  */

undefined8 FUN_00020c04(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  int iVar19;
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_90 [48];
  
  iVar11 = __s10Foundation3URLVMa(0);
  iVar15 = *(int *)(iVar11 + -4);
  puVar18 = auStack_90 + -(*(int *)(iVar15 + 0x20) + 0xfU & 0xfffffff0);
  iVar12 = FUN_00010468(0x34dc0,&UNK_00028360);
  iVar19 = (int)puVar18 - (*(int *)(*(int *)(iVar12 + -4) + 0x20) + 0xfU & 0xfffffff0);
  iVar12 = FUN_00010468(0x35248,&UNK_00028fa0);
  iVar20 = iVar19 - (*(int *)(*(int *)(iVar12 + -4) + 0x20) + 0xfU & 0xfffffff0);
  uVar3 = *param_1;
  uVar5 = param_1[1];
  uVar4 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_1[2];
  uVar8 = param_2[2];
  auVar21 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar3,uVar5,uVar7);
  auVar22 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar4,uVar6,uVar8);
  if ((auVar21 != auVar22) &&
     (uVar16 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (uVar3,uVar5,uVar7,uVar4,uVar6,uVar8,0), (uVar16 & 1) == 0)) {
    return 0;
  }
  uVar3 = param_1[3];
  uVar5 = param_1[4];
  uVar4 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_1[5];
  uVar8 = param_2[5];
  auVar21 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar3,uVar5,uVar7);
  auVar22 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar4,uVar6,uVar8);
  if ((auVar21 != auVar22) &&
     (uVar16 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (uVar3,uVar5,uVar7,uVar4,uVar6,uVar8,0), (uVar16 & 1) == 0)) {
    return 0;
  }
  uVar3 = param_1[6];
  uVar5 = param_1[7];
  uVar4 = param_2[6];
  uVar6 = param_2[7];
  uVar7 = param_1[8];
  uVar8 = param_2[8];
  auVar21 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar3,uVar5,uVar7);
  auVar22 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar4,uVar6,uVar8);
  if ((auVar21 != auVar22) &&
     (uVar16 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (uVar3,uVar5,uVar7,uVar4,uVar6,uVar8,0), (uVar16 & 1) == 0)) {
    return 0;
  }
  iVar13 = FUN_00020340(0);
  iVar14 = *(int *)(iVar13 + 0x14);
  iVar12 = *(int *)(iVar12 + 0x18);
  FUN_00020378((int)param_1 + iVar14,iVar20);
  FUN_00020378((int)param_2 + iVar14,iVar20 + iVar12);
  pcVar9 = *(code **)(iVar15 + 0x18);
  iVar14 = (*pcVar9)(iVar20,1,iVar11);
  if (iVar14 == 1) {
    iVar15 = (*pcVar9)(iVar20 + iVar12,1,iVar11);
    if (iVar15 == 1) {
      FUN_00021fbc(iVar20,0x34dc0,&UNK_00028360);
LAB_00021258:
      piVar1 = (int *)((int)param_1 + *(int *)(iVar13 + 0x18));
      piVar2 = (int *)((int)param_2 + *(int *)(iVar13 + 0x18));
      cVar10 = (char)piVar2[1];
      if ((char)piVar1[1] == '\x01') {
        if (cVar10 != '\x01') {
          return 0;
        }
        return 1;
      }
      if (cVar10 == '\x01') {
        return 0;
      }
      if (*piVar1 != *piVar2) {
        return 0;
      }
      return 1;
    }
  }
  else {
    FUN_00020378(iVar20,iVar19);
    iVar14 = (*pcVar9)(iVar20 + iVar12,1,iVar11);
    if (iVar14 != 1) {
      (**(code **)(iVar15 + 0x10))(puVar18,iVar20 + iVar12,iVar11);
      uVar17 = FUN_00021ffc(0x3524c,PTR___s10Foundation3URLVSQAAMc_00030064);
      uVar16 = __sSQ2eeoiySbx_xtFZTj(iVar19,puVar18,iVar11,uVar17);
      pcVar9 = *(code **)(iVar15 + 4);
      (*pcVar9)(puVar18,iVar11);
      (*pcVar9)(iVar19,iVar11);
      FUN_00021fbc(iVar20,0x34dc0,&UNK_00028360);
      if ((uVar16 & 1) == 0) {
        return 0;
      }
      goto LAB_00021258;
    }
    (**(code **)(iVar15 + 4))(iVar19,iVar11);
  }
  FUN_00021fbc(iVar20,0x35248,&UNK_00028fa0);
  return 0;
}



/* Entry: 00020c08; end: 00020edf;  */

undefined4 FUN_00020c08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar3 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0x72657375,&UNK_00006449,&UNK_0000e600);
  auVar4 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(param_1,param_2,param_3);
  if ((auVar3 == auVar4) ||
     (uVar1 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x72657375,&UNK_00006449,&UNK_0000e600,param_1,param_2,param_3,0),
     (uVar1 & 1) != 0)) {
    FUN_000103d0(param_2,param_3);
    uVar2 = 0;
  }
  else {
    auVar3 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0xb,"send",0xd0008000);
    auVar4 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(param_1,param_2,param_3);
    if ((auVar3 == auVar4) ||
       (uVar1 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0xb,"send",0xd0008000,param_1,param_2,param_3,0), (uVar1 & 1) != 0)) {
      FUN_000103d0(param_2,param_3);
      uVar2 = 1;
    }
    else {
      auVar3 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0x72657375,0x656d616e,&UNK_0000e800);
      auVar4 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(param_1,param_2,param_3);
      if ((auVar3 == auVar4) ||
         (uVar1 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0x72657375,0x656d616e,&UNK_0000e800,param_1,param_2,param_3,0),
         (uVar1 & 1) != 0)) {
        FUN_000103d0(param_2,param_3);
        uVar2 = 2;
      }
      else {
        auVar3 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0x10,"",0xd0008000);
        auVar4 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(param_1,param_2,param_3);
        if ((auVar3 == auVar4) ||
           (uVar1 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0x10,"",0xd0008000,param_1,param_2,param_3,0), (uVar1 & 1) != 0)) {
          FUN_000103d0(param_2,param_3);
          uVar2 = 3;
        }
        else {
          auVar3 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0xb,"",0xd0008000);
          auVar4 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(param_1,param_2,param_3);
          if (auVar3 == auVar4) {
            FUN_000103d0(param_2,param_3);
            uVar2 = 4;
          }
          else {
            uVar1 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0xb,"",0xd0008000,param_1,param_2,param_3,0);
            FUN_000103d0(param_2,param_3);
            uVar2 = 4;
            if ((uVar1 & 1) == 0) {
              uVar2 = 5;
            }
          }
        }
      }
    }
  }
  return uVar2;
}



/* Entry: 00020ee0; end: 0002129f;  */

undefined8 FUN_00020ee0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  int iVar19;
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_90 [48];
  
  iVar11 = __s10Foundation3URLVMa(0);
  iVar15 = *(int *)(iVar11 + -4);
  puVar18 = auStack_90 + -(*(int *)(iVar15 + 0x20) + 0xfU & 0xfffffff0);
  iVar12 = FUN_00010468(0x34dc0,&UNK_00028360);
  iVar19 = (int)puVar18 - (*(int *)(*(int *)(iVar12 + -4) + 0x20) + 0xfU & 0xfffffff0);
  iVar12 = FUN_00010468(0x35248,&UNK_00028fa0);
  iVar20 = iVar19 - (*(int *)(*(int *)(iVar12 + -4) + 0x20) + 0xfU & 0xfffffff0);
  uVar3 = *param_1;
  uVar5 = param_1[1];
  uVar4 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_1[2];
  uVar8 = param_2[2];
  auVar21 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar3,uVar5,uVar7);
  auVar22 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar4,uVar6,uVar8);
  if ((auVar21 != auVar22) &&
     (uVar16 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (uVar3,uVar5,uVar7,uVar4,uVar6,uVar8,0), (uVar16 & 1) == 0)) {
    return 0;
  }
  uVar3 = param_1[3];
  uVar5 = param_1[4];
  uVar4 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_1[5];
  uVar8 = param_2[5];
  auVar21 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar3,uVar5,uVar7);
  auVar22 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar4,uVar6,uVar8);
  if ((auVar21 != auVar22) &&
     (uVar16 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (uVar3,uVar5,uVar7,uVar4,uVar6,uVar8,0), (uVar16 & 1) == 0)) {
    return 0;
  }
  uVar3 = param_1[6];
  uVar5 = param_1[7];
  uVar4 = param_2[6];
  uVar6 = param_2[7];
  uVar7 = param_1[8];
  uVar8 = param_2[8];
  auVar21 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar3,uVar5,uVar7);
  auVar22 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar4,uVar6,uVar8);
  if ((auVar21 != auVar22) &&
     (uVar16 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (uVar3,uVar5,uVar7,uVar4,uVar6,uVar8,0), (uVar16 & 1) == 0)) {
    return 0;
  }
  iVar13 = FUN_00020340(0);
  iVar14 = *(int *)(iVar13 + 0x14);
  iVar12 = *(int *)(iVar12 + 0x18);
  FUN_00020378((int)param_1 + iVar14,iVar20);
  FUN_00020378((int)param_2 + iVar14,iVar20 + iVar12);
  pcVar9 = *(code **)(iVar15 + 0x18);
  iVar14 = (*pcVar9)(iVar20,1,iVar11);
  if (iVar14 == 1) {
    iVar15 = (*pcVar9)(iVar20 + iVar12,1,iVar11);
    if (iVar15 == 1) {
      FUN_00021fbc(iVar20,0x34dc0,&UNK_00028360);
LAB_00021258:
      piVar1 = (int *)((int)param_1 + *(int *)(iVar13 + 0x18));
      piVar2 = (int *)((int)param_2 + *(int *)(iVar13 + 0x18));
      cVar10 = (char)piVar2[1];
      if ((char)piVar1[1] == '\x01') {
        if (cVar10 != '\x01') {
          return 0;
        }
        return 1;
      }
      if (cVar10 == '\x01') {
        return 0;
      }
      if (*piVar1 != *piVar2) {
        return 0;
      }
      return 1;
    }
  }
  else {
    FUN_00020378(iVar20,iVar19);
    iVar14 = (*pcVar9)(iVar20 + iVar12,1,iVar11);
    if (iVar14 != 1) {
      (**(code **)(iVar15 + 0x10))(puVar18,iVar20 + iVar12,iVar11);
      uVar17 = FUN_00021ffc(0x3524c,PTR___s10Foundation3URLVSQAAMc_00030064);
      uVar16 = __sSQ2eeoiySbx_xtFZTj(iVar19,puVar18,iVar11,uVar17);
      pcVar9 = *(code **)(iVar15 + 4);
      (*pcVar9)(puVar18,iVar11);
      (*pcVar9)(iVar19,iVar11);
      FUN_00021fbc(iVar20,0x34dc0,&UNK_00028360);
      if ((uVar16 & 1) == 0) {
        return 0;
      }
      goto LAB_00021258;
    }
    (**(code **)(iVar15 + 4))(iVar19,iVar11);
  }
  FUN_00021fbc(iVar20,0x35248,&UNK_00028fa0);
  return 0;
}



/* Entry: 000212a0; end: 000212c3;  */

int * FUN_000212a0(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_2 + -4) + 0x28);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar1 = uVar1 & 0xff;
    param_1 = (int *)(*param_1 + (uVar1 + 8 & (uVar1 ^ 0xffffffff)));
  }
  return param_1;
}



/* Entry: 000212c4; end: 00021303;  */

void FUN_000212c4(void)

{
  if (iRam000351c4 != 0) {
    return;
  }
  iRam000351c4 = _swift_getWitnessTable(&UNK_00028f4c,&UNK_00030b14);
  return;
}



/* Entry: 00021304; end: 00021323;  */

void FUN_00021304(undefined4 *param_1)

{
  if ((*(byte *)(*(int *)(param_1[3] + -4) + 0x2a) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00021318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1[3] + -4) + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00027678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_00030570)(*param_1);
  return;
}



/* Entry: 00021324; end: 0002135f;  */

undefined8 FUN_00021324(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00020340(0);
  (**(code **)(*(int *)(iVar1 + -4) + 4))(param_1,iVar1);
  return param_1;
}



/* Entry: 00021360; end: 0002136b;  */

undefined * FUN_00021360(void)

{
  return PTR___sSSSHsWP_000303d4;
}



/* Entry: 0002136c; end: 000214ff;  */

int * FUN_0002136c(int *param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = *(uint *)(*(int *)(param_3 + -4) + 0x28);
  if ((uVar3 >> 0x11 & 1) == 0) {
    iVar7 = param_2[1];
    *param_1 = *param_2;
    iVar4 = param_2[2];
    FUN_000103b4(iVar7,(char)iVar4);
    param_1[1] = iVar7;
    *(char *)(param_1 + 2) = (char)iVar4;
    *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
    *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
    iVar7 = param_2[4];
    param_1[3] = param_2[3];
    iVar4 = param_2[5];
    FUN_000103b4(iVar7,(char)iVar4);
    param_1[4] = iVar7;
    *(char *)(param_1 + 5) = (char)iVar4;
    *(undefined1 *)((int)param_1 + 0x15) = *(undefined1 *)((int)param_2 + 0x15);
    *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)((int)param_2 + 0x16);
    iVar7 = param_2[7];
    param_1[6] = param_2[6];
    iVar4 = param_2[8];
    FUN_000103b4(iVar7,(char)iVar4);
    param_1[7] = iVar7;
    *(char *)(param_1 + 8) = (char)iVar4;
    *(undefined1 *)((int)param_1 + 0x21) = *(undefined1 *)((int)param_2 + 0x21);
    *(undefined2 *)((int)param_1 + 0x22) = *(undefined2 *)((int)param_2 + 0x22);
    iVar4 = *(int *)(param_3 + 0x14);
    iVar5 = __s10Foundation3URLVMa(0);
    iVar7 = *(int *)(iVar5 + -4);
    iVar6 = (**(code **)(iVar7 + 0x18))((int)param_2 + iVar4,1,iVar5);
    if (iVar6 == 0) {
      (**(code **)(iVar7 + 8))((int)param_1 + iVar4,(int)param_2 + iVar4,iVar5);
      (**(code **)(iVar7 + 0x1c))((int)param_1 + iVar4,0,1,iVar5);
    }
    else {
      iVar7 = FUN_00010468(0x34dc0,&UNK_00028360);
      _memcpy((int)param_1 + iVar4,(int)param_2 + iVar4,*(undefined4 *)(*(int *)(iVar7 + -4) + 0x20)
             );
    }
    puVar1 = (undefined4 *)((int)param_1 + *(int *)(param_3 + 0x18));
    puVar2 = (undefined4 *)((int)param_2 + *(int *)(param_3 + 0x18));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  }
  else {
    iVar7 = *param_2;
    *param_1 = iVar7;
    uVar3 = uVar3 & 0xff;
    param_1 = (int *)(iVar7 + (uVar3 + 8 & (uVar3 ^ 0xffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 00021500; end: 00021593;  */

void FUN_00021500(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_000103d0(*(undefined4 *)(param_1 + 4),*(undefined1 *)(param_1 + 8));
  FUN_000103d0(*(undefined4 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x14));
  FUN_000103d0(*(undefined4 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x20));
  iVar2 = *(int *)(param_2 + 0x14);
  iVar3 = __s10Foundation3URLVMa(0);
  iVar1 = *(int *)(iVar3 + -4);
  iVar4 = (**(code **)(iVar1 + 0x18))(param_1 + iVar2,1,iVar3);
  if (iVar4 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00021590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 4))(param_1 + iVar2,iVar3);
  return;
}



/* Entry: 00021594; end: 000216fb;  */

undefined4 * FUN_00021594(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_000103b4(uVar2,uVar3);
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  uVar3 = *(undefined1 *)(param_2 + 5);
  FUN_000103b4(uVar2,uVar3);
  param_1[4] = uVar2;
  *(undefined1 *)(param_1 + 5) = uVar3;
  *(undefined1 *)((int)param_1 + 0x15) = *(undefined1 *)((int)param_2 + 0x15);
  *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)((int)param_2 + 0x16);
  uVar2 = param_2[7];
  param_1[6] = param_2[6];
  uVar3 = *(undefined1 *)(param_2 + 8);
  FUN_000103b4(uVar2,uVar3);
  param_1[7] = uVar2;
  *(undefined1 *)(param_1 + 8) = uVar3;
  *(undefined1 *)((int)param_1 + 0x21) = *(undefined1 *)((int)param_2 + 0x21);
  *(undefined2 *)((int)param_1 + 0x22) = *(undefined2 *)((int)param_2 + 0x22);
  iVar4 = *(int *)(param_3 + 0x14);
  iVar5 = __s10Foundation3URLVMa(0);
  iVar7 = *(int *)(iVar5 + -4);
  iVar6 = (**(code **)(iVar7 + 0x18))((int)param_2 + iVar4,1,iVar5);
  if (iVar6 == 0) {
    (**(code **)(iVar7 + 8))((int)param_1 + iVar4,(int)param_2 + iVar4,iVar5);
    (**(code **)(iVar7 + 0x1c))((int)param_1 + iVar4,0,1,iVar5);
  }
  else {
    iVar7 = FUN_00010468(0x34dc0,&UNK_00028360);
    _memcpy((int)param_1 + iVar4,(int)param_2 + iVar4,*(undefined4 *)(*(int *)(iVar7 + -4) + 0x20));
  }
  puVar1 = (undefined4 *)((int)param_1 + *(int *)(param_3 + 0x18));
  param_2 = (undefined4 *)((int)param_2 + *(int *)(param_3 + 0x18));
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 000216fc; end: 000218df;  */

undefined4 * FUN_000216fc(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  *param_1 = *param_2;
  uVar2 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_000103b4(uVar2,uVar5);
  uVar3 = param_1[1];
  param_1[1] = uVar2;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_000103d0(uVar3,uVar6);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  param_1[3] = param_2[3];
  uVar2 = param_2[4];
  uVar5 = *(undefined1 *)(param_2 + 5);
  FUN_000103b4(uVar2,uVar5);
  uVar3 = param_1[4];
  param_1[4] = uVar2;
  uVar6 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar5;
  FUN_000103d0(uVar3,uVar6);
  *(undefined1 *)((int)param_1 + 0x15) = *(undefined1 *)((int)param_2 + 0x15);
  *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)((int)param_2 + 0x16);
  param_1[6] = param_2[6];
  uVar2 = param_2[7];
  uVar5 = *(undefined1 *)(param_2 + 8);
  FUN_000103b4(uVar2,uVar5);
  uVar3 = param_1[7];
  param_1[7] = uVar2;
  uVar6 = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = uVar5;
  FUN_000103d0(uVar3,uVar6);
  *(undefined1 *)((int)param_1 + 0x21) = *(undefined1 *)((int)param_2 + 0x21);
  *(undefined2 *)((int)param_1 + 0x22) = *(undefined2 *)((int)param_2 + 0x22);
  iVar7 = *(int *)(param_3 + 0x14);
  iVar8 = __s10Foundation3URLVMa(0);
  iVar11 = *(int *)(iVar8 + -4);
  pcVar4 = *(code **)(iVar11 + 0x18);
  iVar9 = (*pcVar4)((int)param_1 + iVar7,1,iVar8);
  iVar10 = (*pcVar4)((int)param_2 + iVar7,1,iVar8);
  if (iVar9 == 0) {
    if (iVar10 == 0) {
      (**(code **)(iVar11 + 0xc))((int)param_1 + iVar7,(int)param_2 + iVar7,iVar8);
      goto LAB_00021890;
    }
    (**(code **)(iVar11 + 4))((int)param_1 + iVar7,iVar8);
  }
  else if (iVar10 == 0) {
    (**(code **)(iVar11 + 8))((int)param_1 + iVar7,(int)param_2 + iVar7,iVar8);
    (**(code **)(iVar11 + 0x1c))((int)param_1 + iVar7,0,1,iVar8);
    goto LAB_00021890;
  }
  iVar11 = FUN_00010468(0x34dc0,&UNK_00028360);
  _memcpy((int)param_1 + iVar7,(int)param_2 + iVar7,*(undefined4 *)(*(int *)(iVar11 + -4) + 0x20));
LAB_00021890:
  puVar1 = (undefined4 *)((int)param_1 + *(int *)(param_3 + 0x18));
  param_2 = (undefined4 *)((int)param_2 + *(int *)(param_3 + 0x18));
  uVar2 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  *puVar1 = uVar2;
  return param_1;
}



/* Entry: 000218e0; end: 000219e7;  */

undefined8 * FUN_000218e0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((int)param_1 + 0xc) = *(undefined8 *)((int)param_2 + 0xc);
  *(undefined4 *)((int)param_1 + 0x14) = *(undefined4 *)((int)param_2 + 0x14);
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  iVar3 = *(int *)(param_3 + 0x14);
  iVar4 = __s10Foundation3URLVMa(0);
  iVar6 = *(int *)(iVar4 + -4);
  iVar5 = (**(code **)(iVar6 + 0x18))((int)param_2 + iVar3,1,iVar4);
  if (iVar5 == 0) {
    (**(code **)(iVar6 + 0x10))((int)param_1 + iVar3,(int)param_2 + iVar3,iVar4);
    (**(code **)(iVar6 + 0x1c))((int)param_1 + iVar3,0,1,iVar4);
  }
  else {
    iVar6 = FUN_00010468(0x34dc0,&UNK_00028360);
    _memcpy((int)param_1 + iVar3,(int)param_2 + iVar3,*(undefined4 *)(*(int *)(iVar6 + -4) + 0x20));
  }
  puVar1 = (undefined4 *)((int)param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined4 *)((int)param_2 + *(int *)(param_3 + 0x18));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  return param_1;
}



/* Entry: 000219e8; end: 00021b8f;  */

undefined8 * FUN_000219e8(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  uVar4 = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  uVar5 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar4;
  FUN_000103d0(*(undefined4 *)((int)param_1 + 4),uVar5);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  uVar4 = *(undefined1 *)((int)param_2 + 0x14);
  *(undefined8 *)((int)param_1 + 0xc) = *(undefined8 *)((int)param_2 + 0xc);
  uVar5 = *(undefined1 *)((int)param_1 + 0x14);
  *(undefined1 *)((int)param_1 + 0x14) = uVar4;
  FUN_000103d0(*(undefined4 *)(param_1 + 2),uVar5);
  *(undefined1 *)((int)param_1 + 0x15) = *(undefined1 *)((int)param_2 + 0x15);
  *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)((int)param_2 + 0x16);
  uVar4 = *(undefined1 *)(param_2 + 4);
  param_1[3] = param_2[3];
  uVar5 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar4;
  FUN_000103d0(*(undefined4 *)((int)param_1 + 0x1c),uVar5);
  *(undefined1 *)((int)param_1 + 0x21) = *(undefined1 *)((int)param_2 + 0x21);
  *(undefined2 *)((int)param_1 + 0x22) = *(undefined2 *)((int)param_2 + 0x22);
  iVar6 = *(int *)(param_3 + 0x14);
  iVar7 = __s10Foundation3URLVMa(0);
  iVar10 = *(int *)(iVar7 + -4);
  pcVar3 = *(code **)(iVar10 + 0x18);
  iVar8 = (*pcVar3)((int)param_1 + iVar6,1,iVar7);
  iVar9 = (*pcVar3)((int)param_2 + iVar6,1,iVar7);
  if (iVar8 == 0) {
    if (iVar9 == 0) {
      (**(code **)(iVar10 + 0x14))((int)param_1 + iVar6,(int)param_2 + iVar6,iVar7);
      goto LAB_00021b40;
    }
    (**(code **)(iVar10 + 4))((int)param_1 + iVar6,iVar7);
  }
  else if (iVar9 == 0) {
    (**(code **)(iVar10 + 0x10))((int)param_1 + iVar6,(int)param_2 + iVar6,iVar7);
    (**(code **)(iVar10 + 0x1c))((int)param_1 + iVar6,0,1,iVar7);
    goto LAB_00021b40;
  }
  iVar10 = FUN_00010468(0x34dc0,&UNK_00028360);
  _memcpy((int)param_1 + iVar6,(int)param_2 + iVar6,*(undefined4 *)(*(int *)(iVar10 + -4) + 0x20));
LAB_00021b40:
  puVar1 = (undefined4 *)((int)param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined4 *)((int)param_2 + *(int *)(param_3 + 0x18));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  return param_1;
}



/* Entry: 00021b90; end: 00021b9b;  */

void FUN_00021b90(void)

{
                    /* WARNING: Could not recover jumptable at 0x000275b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_00030530)();
  return;
}



/* Entry: 00021b9c; end: 00021c1f;  */

ulonglong FUN_00021b9c(int param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  if ((int)param_2 == 0xfd) {
    uVar1 = 0;
    if (2 < *(byte *)(param_1 + 8)) {
      uVar1 = (*(byte *)(param_1 + 8) ^ 0xff) + 1;
    }
    return (ulonglong)uVar1;
  }
  iVar2 = FUN_00010468(0x34dc0,&UNK_00028360);
                    /* WARNING: Could not recover jumptable at 0x00021c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(int *)(iVar2 + -4) + 0x18))
                    (param_1 + *(int *)(param_3 + 0x14),param_2,iVar2);
  return uVar3;
}



/* Entry: 00021c20; end: 00021c2b;  */

void FUN_00021c20(void)

{
                    /* WARNING: Could not recover jumptable at 0x000276a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_00030580)();
  return;
}



/* Entry: 00021c2c; end: 00021ca7;  */

void FUN_00021c2c(int param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_3 == 0xfd) {
    *(char *)(param_1 + 8) = -(char)param_2;
    return;
  }
  iVar1 = FUN_00010468(0x34dc0,&UNK_00028360);
                    /* WARNING: Could not recover jumptable at 0x00021ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar1 + -4) + 0x1c))
            (param_1 + *(int *)(param_4 + 0x14),param_2,param_2,iVar1);
  return;
}



/* Entry: 00021ca8; end: 00021d27;  */

/* WARNING: Removing unreachable block (ram,0x00021d14) */

undefined4 FUN_00021ca8(longlong param_1)

{
  int iVar1;
  undefined *puStack_34;
  undefined *puStack_30;
  undefined *puStack_2c;
  int iStack_28;
  undefined *puStack_24;
  
  puStack_34 = &UNK_00028e68;
  puStack_30 = &UNK_00028e68;
  puStack_2c = &UNK_00028e68;
  iVar1 = FUN_00021d28(0x13f);
  iStack_28 = *(int *)(iVar1 + -4) + 0x20;
  puStack_24 = &UNK_00028e78;
  _swift_initStructMetadata(param_1,0x100,5,&puStack_34,param_1 + 8);
  return 0;
}



/* Entry: 00021d28; end: 00021d7b;  */

void FUN_00021d28(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int extraout_w1;
  
  if (iRam00035210 == 0) {
    uVar2 = __s10Foundation3URLVMa(0xff);
    iVar1 = __sSqMa(param_1,uVar2);
    if (extraout_w1 == 0) {
      iRam00035210 = iVar1;
    }
  }
  return;
}



/* Entry: 00021d7c; end: 00021d87;  */

void FUN_00021d7c(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 00021d88; end: 00021d8b;  */

void FUN_00021d88(void)

{
  return;
}



/* Entry: 00021d8c; end: 00021e1b;  */

int FUN_00021d8c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00021e08;
        goto LAB_00021dec;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_00021dec:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_00021e08:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 00021e1c; end: 00021ecb;  */

void FUN_00021e1c(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 4) {
    uVar3 = 4;
  }
  if (param_3 + 4 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfb < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xfc) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_00021e9c;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_00021e9c:
      *param_1 = (char)param_2 + '\x04';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xfc >> 8) + 1;
    *param_1 = (char)(param_2 - 0xfc);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[1] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Entry: 00021ecc; end: 00021ed3;  */

undefined1 FUN_00021ecc(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 00021ed4; end: 00021ed7;  */

void FUN_00021ed4(void)

{
  return;
}



/* Entry: 00021ed8; end: 00021edf;  */

void FUN_00021ed8(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 00021ee0; end: 00021eef;  */

undefined1  [16] FUN_00021ee0(void)

{
  return ZEXT816(0x30b14);
}



/* Entry: 00021ef0; end: 00021ef3;  */

void FUN_00021ef0(void)

{
  if (iRam00035238 != 0) {
    return;
  }
  iRam00035238 = _swift_getWitnessTable(&UNK_00028f24,&UNK_00030b14);
  return;
}



/* Entry: 00021ef4; end: 00021f33;  */

void FUN_00021ef4(void)

{
  if (iRam00035238 != 0) {
    return;
  }
  iRam00035238 = _swift_getWitnessTable(&UNK_00028f24,&UNK_00030b14);
  return;
}



/* Entry: 00021f34; end: 00021f37;  */

void FUN_00021f34(void)

{
  if (iRam0003523c != 0) {
    return;
  }
  iRam0003523c = _swift_getWitnessTable(&UNK_00028ebc,&UNK_00030b14);
  return;
}



/* Entry: 00021f38; end: 00021f77;  */

void FUN_00021f38(void)

{
  if (iRam0003523c != 0) {
    return;
  }
  iRam0003523c = _swift_getWitnessTable(&UNK_00028ebc,&UNK_00030b14);
  return;
}



/* Entry: 00021f78; end: 00021f7b;  */

void FUN_00021f78(void)

{
  if (iRam00035240 != 0) {
    return;
  }
  iRam00035240 = _swift_getWitnessTable(&UNK_00028e94,&UNK_00030b14);
  return;
}



/* Entry: 00021f7c; end: 00021fbb;  */

void FUN_00021f7c(void)

{
  if (iRam00035240 != 0) {
    return;
  }
  iRam00035240 = _swift_getWitnessTable(&UNK_00028e94,&UNK_00030b14);
  return;
}



/* Entry: 00021fbc; end: 00021ffb;  */

undefined8 FUN_00021fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00010468(param_2,param_3);
  (**(code **)(*(int *)(iVar1 + -4) + 4))(param_1,iVar1);
  return param_1;
}



/* Entry: 00021ffc; end: 0002203b;  */

void FUN_00021ffc(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_1 == 0) {
    uVar2 = __s10Foundation3URLVMa(0xff);
    iVar1 = _swift_getWitnessTable(param_2,uVar2);
    *param_1 = iVar1;
  }
  return;
}



/* Entry: 0002203c; end: 00022043;  */

undefined8 FUN_0002203c(void)

{
  return 1;
}



/* Entry: 00022044; end: 00022047;  */

void FUN_00022044(void)

{
  __ss6HasherV5_seedABSi_tcfC(0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00022048; end: 0002206b;  */

void FUN_00022048(void)

{
  __ss6HasherV8_combineyySuF(0);
  return;
}



/* Entry: 0002206c; end: 0002206f;  */

void FUN_0002206c(void)

{
  __ss6HasherV5_seedABSi_tcfC();
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00022070; end: 00022083;  */

undefined4 FUN_00022070(void)

{
  return 0x74786574;
}



/* Entry: 00022084; end: 00022087;  */

void FUN_00022084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte *in_w8;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0x74786574,0,&UNK_0000e400);
  auVar3 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(param_1,param_2,param_3);
  if (auVar2 == auVar3) {
    FUN_000103d0(param_2,param_3);
    bVar1 = 0;
  }
  else {
    bVar1 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x74786574,0,&UNK_0000e400,param_1,param_2,param_3,0);
    FUN_000103d0(param_2,param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *in_w8 = bVar1;
  return;
}



/* Entry: 00022088; end: 00022093;  */

undefined1  [16] FUN_00022088(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 00022094; end: 0002209f;  */

void FUN_00022094(void)

{
  undefined1 *in_w8;
  
  *in_w8 = 1;
  return;
}



/* Entry: 000220a0; end: 000220b3;  */

void FUN_000220a0(undefined8 param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR___ss9CodingKeyPsE16debugDescriptionSSvg_000304d8;
  uVar1 = FUN_000223e4();
                    /* WARNING: Could not recover jumptable at 0x0002228c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}



/* Entry: 000220b4; end: 000220c7;  */

void FUN_000220b4(undefined8 param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR___ss9CodingKeyPsE11descriptionSSvg_000304d4;
  uVar1 = FUN_000223e4();
                    /* WARNING: Could not recover jumptable at 0x0002228c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}



/* Entry: 000220c8; end: 000220cf;  */

undefined8 FUN_000220c8(void)

{
  return 1;
}



/* Entry: 000220d0; end: 0002210f;  */

void FUN_000220d0(void)

{
  __ss6HasherV5_seedABSi_tcfC(0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00022110; end: 0002214b;  */

void FUN_00022110(void)

{
  __ss6HasherV5_seedABSi_tcfC();
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0002214c; end: 0002215f;  */

undefined4 FUN_0002214c(void)

{
  return 0x74786574;
}



/* Entry: 00022160; end: 00022223;  */

void FUN_00022160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte *in_w8;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0x74786574,0,&UNK_0000e400);
  auVar3 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(param_1,param_2,param_3);
  if (auVar2 == auVar3) {
    FUN_000103d0(param_2,param_3);
    bVar1 = 0;
  }
  else {
    bVar1 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x74786574,0,&UNK_0000e400,param_1,param_2,param_3,0);
    FUN_000103d0(param_2,param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *in_w8 = bVar1;
  return;
}



/* Entry: 00022224; end: 0002222f;  */

undefined1  [16] FUN_00022224(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 00022230; end: 00022243;  */

void FUN_00022230(undefined8 param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR___ss9CodingKeyPsE16debugDescriptionSSvg_000304d8;
  uVar1 = FUN_00022424();
                    /* WARNING: Could not recover jumptable at 0x0002228c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}



/* Entry: 00022244; end: 00022257;  */

void FUN_00022244(undefined8 param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR___ss9CodingKeyPsE11descriptionSSvg_000304d4;
  uVar1 = FUN_00022424();
                    /* WARNING: Could not recover jumptable at 0x0002228c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}



/* Entry: 00022258; end: 0002228f;  */

void FUN_00022258(undefined8 param_1,undefined8 param_2,code *param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  
  uVar1 = (*param_3)();
                    /* WARNING: Could not recover jumptable at 0x0002228c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}



/* Entry: 00022290; end: 000223e3;  */

void FUN_00022290(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  uStack_6c = param_2;
  uStack_68 = param_3;
  uStack_64 = param_4;
  iVar7 = FUN_00010468(0x35250,&UNK_00028fb0);
  iVar5 = *(int *)(iVar7 + -4);
  iVar3 = *(int *)(iVar5 + 0x20);
  iVar8 = FUN_00010468(0x35258,&UNK_00028fb8);
  iVar6 = *(int *)(iVar8 + -4);
  iVar4 = *(int *)(iVar6 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  FUN_000212a0(param_1,uVar1);
  uVar9 = FUN_000223e4();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (&UNK_00030ca8,&UNK_00030ca8,uVar9,uVar1,uVar2);
  auVar10 = FUN_00022424();
  __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
            (&UNK_00030cf4,auVar10._8_8_,iVar8,&UNK_00030cf4,auVar10._0_8_);
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uStack_6c,uStack_68,uStack_64);
  (**(code **)(iVar5 + 4))(auStack_70 + -(iVar3 + 0xfU & 0xfffffff0),iVar7);
  (**(code **)(iVar6 + 4))
            ((int)(auStack_70 + -(iVar3 + 0xfU & 0xfffffff0)) - (iVar4 + 0xfU & 0xfffffff0),iVar8);
  return;
}



/* Entry: 000223e4; end: 00022423;  */

void FUN_000223e4(void)

{
  if (iRam0003525c != 0) {
    return;
  }
  iRam0003525c = _swift_getWitnessTable(&UNK_0002938c,&UNK_00030ca8);
  return;
}



/* Entry: 00022424; end: 00022463;  */

void FUN_00022424(void)

{
  if (iRam00035260 != 0) {
    return;
  }
  iRam00035260 = _swift_getWitnessTable(&UNK_0002933c,&UNK_00030cf4);
  return;
}



/* Entry: 00022464; end: 0002249f;  */

void FUN_00022464(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 extraout_w1;
  undefined4 *in_w8;
  int unaff_w21;
  
  uVar1 = FUN_0002292c();
  if (unaff_w21 == 0) {
    *in_w8 = uVar1;
    in_w8[1] = extraout_w1;
    *(char *)(in_w8 + 2) = (char)param_3;
    *(char *)((int)in_w8 + 9) = (char)((uint)param_3 >> 8);
    *(short *)((int)in_w8 + 10) = (short)((uint)param_3 >> 0x10);
  }
  return;
}



/* Entry: 000224a0; end: 000224bb;  */

void FUN_000224a0(undefined8 param_1)

{
  undefined4 *unaff_w20;
  
  FUN_00022290(param_1,*unaff_w20,unaff_w20[1],unaff_w20[2]);
  return;
}



/* Entry: 000224bc; end: 000224cf;  */

bool FUN_000224bc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 000224d0; end: 00022513;  */

void FUN_000224d0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_w20;
  
  uVar1 = *unaff_w20;
  __ss6HasherV5_seedABSi_tcfC(0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00022514; end: 0002253b;  */

void FUN_00022514(void)

{
  undefined1 *unaff_w20;
  
  __ss6HasherV8_combineyySuF(*unaff_w20);
  return;
}



/* Entry: 0002253c; end: 0002257b;  */

void FUN_0002253c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_w20;
  
  uVar1 = *unaff_w20;
  __ss6HasherV5_seedABSi_tcfC();
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0002257c; end: 000225b7;  */

undefined4 FUN_0002257c(void)

{
  undefined4 uVar1;
  char *unaff_w20;
  
  uVar1 = 0x72657375;
  if (*unaff_w20 != '\x01') {
    uVar1 = 0x746e6f63;
  }
  return uVar1;
}



/* Entry: 000225b8; end: 000226ff;  */

void FUN_000225b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined1 *in_w8;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar3 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0x746e6f63,0x746e65,&UNK_0000e700);
  auVar4 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(param_1,param_2,param_3);
  if ((auVar3 == auVar4) ||
     (uVar1 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x746e6f63,0x746e65,&UNK_0000e700,param_1,param_2,param_3,0),
     (uVar1 & 1) != 0)) {
    FUN_000103d0(param_2,param_3);
    uVar2 = 0;
  }
  else {
    auVar3 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0x72657375,&UNK_00006449,&UNK_0000e600);
    auVar4 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(param_1,param_2,param_3);
    if (auVar3 == auVar4) {
      FUN_000103d0(param_2,param_3);
      uVar2 = 1;
    }
    else {
      uVar1 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x72657375,&UNK_00006449,&UNK_0000e600,param_1,param_2,param_3,0);
      FUN_000103d0(param_2,param_3);
      uVar2 = 1;
      if ((uVar1 & 1) == 0) {
        uVar2 = 2;
      }
    }
  }
  *in_w8 = uVar2;
  return;
}



/* Entry: 00022700; end: 0002270b;  */

undefined1  [16] FUN_00022700(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 0002270c; end: 00022717;  */

void FUN_0002270c(void)

{
  undefined1 *in_w8;
  
  *in_w8 = 2;
  return;
}



/* Entry: 00022718; end: 00022723;  */

void FUN_00022718(undefined8 param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR___ss9CodingKeyPsE16debugDescriptionSSvg_000304d8;
  uVar1 = FUN_00022c14();
                    /* WARNING: Could not recover jumptable at 0x00022764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}



/* Entry: 00022724; end: 0002272f;  */

void FUN_00022724(undefined8 param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR___ss9CodingKeyPsE11descriptionSSvg_000304d4;
  uVar1 = FUN_00022c14();
                    /* WARNING: Could not recover jumptable at 0x00022764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}



/* Entry: 00022730; end: 00022767;  */

void FUN_00022730(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00022c14();
                    /* WARNING: Could not recover jumptable at 0x00022764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}



/* Entry: 00022768; end: 000228b3;  */

void FUN_00022768(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int unaff_w20;
  int unaff_w21;
  undefined1 auStack_70 [7];
  undefined1 uStack_69;
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [12];
  
  iVar5 = FUN_00010468(0x35268,&UNK_00028fc0);
  iVar4 = *(int *)(iVar5 + -4);
  iVar3 = *(int *)(iVar4 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  FUN_000212a0(param_1,uVar1);
  uVar6 = FUN_00022c14();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (&UNK_00030c5c,&UNK_00030c5c,uVar6,uVar1,uVar2);
  FUN_00022c54();
  FUN_00022c54(auStack_5c,auStack_68);
  uStack_69 = 0;
  uVar6 = FUN_00022c6c();
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (auStack_68,&uStack_69,iVar5,&UNK_00030bc8,uVar6);
  if (unaff_w21 == 0) {
    auStack_68[0] = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (*(undefined4 *)(unaff_w20 + 0xc),*(undefined4 *)(unaff_w20 + 0x10),
               *(undefined4 *)(unaff_w20 + 0x14),auStack_68,iVar5);
    (**(code **)(iVar4 + 4))(auStack_70 + -(iVar3 + 0xfU & 0xfffffff0),iVar5);
  }
  else {
    (**(code **)(iVar4 + 4))(auStack_70 + -(iVar3 + 0xfU & 0xfffffff0),iVar5);
  }
  return;
}



/* Entry: 000228b4; end: 000228f3;  */

void FUN_000228b4(void)

{
  undefined8 *in_w8;
  int unaff_w21;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_00022cac();
  if (unaff_w21 == 0) {
    in_w8[1] = uStack_30;
    *in_w8 = uStack_38;
    in_w8[2] = uStack_28;
  }
  return;
}



/* Entry: 000228f4; end: 0002292b;  */

void FUN_000228f4(void)

{
  FUN_00022768();
  return;
}



/* Entry: 0002292c; end: 00022c13;  */

/* WARNING: Removing unreachable block (ram,0x00022aac) */

int FUN_0002292c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  int iVar13;
  int unaff_w21;
  undefined1 auVar14 [16];
  undefined1 auStack_90 [48];
  
  iVar7 = FUN_00010468(0x352a0,&UNK_000293e8);
  iVar4 = *(int *)(iVar7 + -4);
  iVar11 = *(int *)(iVar4 + 0x20);
  iVar8 = FUN_00010468(0x352a8,&UNK_000293f0);
  iVar5 = *(int *)(iVar8 + -4);
  iVar13 = (int)(auStack_90 + -(iVar11 + 0xfU & 0xfffffff0)) -
           (*(int *)(iVar5 + 0x20) + 0xfU & 0xfffffff0);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar9 = FUN_000212a0(param_1,uVar1);
  uVar12 = FUN_000223e4();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (&UNK_00030ca8,&UNK_00030ca8,uVar12,uVar1,uVar2);
  if (unaff_w21 == 0) {
    iVar9 = __ss22KeyedDecodingContainerV7allKeysSayxGvg(iVar8);
    uVar3 = *(uint *)(iVar9 + 8);
    cVar6 = FUN_000238d0();
    if ((cVar6 != '\x01') && ((uVar3 & 0x7fffffff) == 0)) {
      auVar14 = FUN_00022424();
      uVar12 = __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                         (&UNK_00030cf4,auVar14._8_8_,iVar8,&UNK_00030cf4,auVar14._0_8_);
      iVar10 = __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(uVar12,iVar7);
      (**(code **)(iVar4 + 4))(auStack_90 + -(iVar11 + 0xfU & 0xfffffff0),iVar7);
      (**(code **)(iVar5 + 4))(iVar13,iVar8);
      _swift_unknownObjectRelease(iVar9);
      FUN_00021304(param_1);
      return iVar10;
    }
    iVar11 = __ss13DecodingErrorOMa(0);
    _swift_allocError(iVar11,PTR___ss13DecodingErrorOs0B0sWP_00030440,0,0);
    FUN_00010468(0x352b0,&UNK_000293f8);
    *(undefined4 *)extraout_x1 = &UNK_00030bc8;
    uVar12 = __ss22KeyedDecodingContainerV10codingPathSays9CodingKey_pGvg(iVar8);
    __ss13DecodingErrorO7ContextV10codingPath16debugDescription010underlyingB0ADSays9CodingKey_pG_SSs0B0_pSgtcfC
              (uVar12,0x2b,"eUrl",0xd0008000,0);
    (**(code **)(*(int *)(iVar11 + -4) + 0x38))
              (extraout_x1,
               *(undefined4 *)
                PTR___ss13DecodingErrorO12typeMismatchyABypXp_AB7ContextVtcABmFWC_00030430,iVar11);
    _swift_willThrow();
    (**(code **)(iVar5 + 4))(iVar13,iVar8);
    _swift_unknownObjectRelease(iVar9);
    iVar9 = iVar13;
  }
  FUN_00021304(param_1);
  return iVar9;
}



/* Entry: 00022c14; end: 00022c53;  */

void FUN_00022c14(void)

{
  if (iRam0003526c != 0) {
    return;
  }
  iRam0003526c = _swift_getWitnessTable(&UNK_000292ec,&UNK_00030c5c);
  return;
}


