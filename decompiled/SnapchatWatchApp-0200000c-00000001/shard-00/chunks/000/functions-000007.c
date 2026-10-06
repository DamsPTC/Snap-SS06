/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00023da0; end: 0002407b;  */

void FUN_00023da0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 unaff_x20;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_b0 [56];
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  iVar7 = FUN_00010468(0x352b8,&UNK_00029400);
  iVar4 = *(int *)(iVar7 + -4);
  iVar3 = *(int *)(iVar4 + 0x20);
  iVar8 = __s10Foundation4DateVMa(0);
  iVar5 = *(int *)(iVar8 + -4);
  iVar16 = (int)(auStack_b0 + -(iVar3 + 0xfU & 0xfffffff0)) -
           (*(int *)(iVar5 + 0x20) + 0xfU & 0xfffffff0);
  iVar9 = FUN_00010468(0x352c0,&UNK_00029408);
  iVar6 = *(int *)(iVar9 + -4);
  iVar15 = iVar16 - (*(int *)(iVar6 + 0x20) + 0xfU & 0xfffffff0);
  iVar10 = FUN_0002407c(0);
  iVar14 = iVar15 - (*(int *)(*(int *)(iVar10 + -4) + 0x20) + 0xfU & 0xfffffff0);
  iVar11 = FUN_00010468(0x352c8,&UNK_00029410);
  iVar10 = *(int *)(iVar11 + -4);
  iVar17 = iVar14 - (*(int *)(iVar10 + 0x20) + 0xfU & 0xfffffff0);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  FUN_000212a0(param_1,uVar1);
  uVar13 = FUN_00024090();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (&UNK_00030df4,&UNK_00030df4,uVar13,uVar1,uVar2);
  FUN_00024f68(unaff_x20,iVar14,FUN_0002407c);
  iVar12 = FUN_00010468(0x35040,&UNK_00028868);
  iVar12 = (**(code **)(*(int *)(iVar12 + -4) + 0x18))(iVar14,1,iVar12);
  if (iVar12 == 1) {
    uVar13 = FUN_00024110();
    __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
              (&UNK_00030e04,&uStack_52,iVar11,&UNK_00030e04,uVar13);
    (**(code **)(iVar6 + 4))(iVar15,iVar9);
    (**(code **)(iVar10 + 4))(iVar17,iVar11);
  }
  else {
    (**(code **)(iVar5 + 0x10))(iVar16,iVar14,iVar8);
    uVar13 = FUN_000240d0();
    __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
              (&UNK_00030e50,&uStack_51,iVar11,&UNK_00030e50,uVar13);
    auVar18 = FUN_000245dc(0x352d8,PTR___s10Foundation4DateVMa_00030088,
                           PTR___s10Foundation4DateVSEAAMc_00030090);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (iVar16,auVar18._8_8_,iVar7,iVar8,auVar18._0_8_);
    (**(code **)(iVar4 + 4))(auStack_b0 + -(iVar3 + 0xfU & 0xfffffff0),iVar7);
    (**(code **)(iVar5 + 4))(iVar16,iVar8);
    (**(code **)(iVar10 + 4))(iVar17,iVar11);
  }
  return;
}



/* Entry: 0002407c; end: 0002408f;  */

void FUN_0002407c(undefined8 param_1)

{
  if (iRam00035354 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_0002a0a8);
  return;
}



/* Entry: 00024090; end: 000240cf;  */

void FUN_00024090(void)

{
  if (iRam000352cc != 0) {
    return;
  }
  iRam000352cc = _swift_getWitnessTable(&UNK_000298e8,&UNK_00030df4);
  return;
}



/* Entry: 000240d0; end: 0002410f;  */

void FUN_000240d0(void)

{
  if (iRam000352d4 != 0) {
    return;
  }
  iRam000352d4 = _swift_getWitnessTable(&UNK_00029898,&UNK_00030e50);
  return;
}



/* Entry: 00024110; end: 0002414f;  */

void FUN_00024110(void)

{
  if (iRam000352dc != 0) {
    return;
  }
  iRam000352dc = _swift_getWitnessTable(&UNK_00029848,&UNK_00030e04);
  return;
}



/* Entry: 00024150; end: 000245db;  */

/* WARNING: Removing unreachable block (ram,0x00024414) */
/* WARNING: Removing unreachable block (ram,0x00024474) */

void FUN_00024150(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  int iVar13;
  uint uVar14;
  undefined8 in_x8;
  int unaff_w21;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_c0 [80];
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  iVar6 = FUN_00010468(0x352e0,&UNK_00029420);
  iVar3 = *(int *)(iVar6 + -4);
  iVar11 = *(int *)(iVar3 + 0x20);
  iVar7 = FUN_00010468(0x352e8,&UNK_00029428);
  iVar4 = *(int *)(iVar7 + -4);
  iVar13 = (int)(auStack_c0 + -(iVar11 + 0xfU & 0xfffffff0)) -
           (*(int *)(iVar4 + 0x20) + 0xfU & 0xfffffff0);
  iVar8 = FUN_00010468(0x352f0,&UNK_00029430);
  iVar5 = *(int *)(iVar8 + -4);
  iVar16 = iVar13 - (*(int *)(iVar5 + 0x20) + 0xfU & 0xfffffff0);
  iVar9 = FUN_0002407c(0);
  uVar14 = *(int *)(*(int *)(iVar9 + -4) + 0x20) + 0xfU & 0xfffffff0;
  iVar15 = iVar16 - uVar14;
  iVar17 = iVar15 - uVar14;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  FUN_000212a0(param_1,uVar1);
  uVar12 = FUN_00024090();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (&UNK_00030df4,&UNK_00030df4,uVar12,uVar1,uVar2);
  if (unaff_w21 == 0) {
    iVar10 = __ss22KeyedDecodingContainerV7allKeysSayxGvg(iVar8);
    if ((*(int *)(iVar10 + 8) != 0) &&
       (*(int *)(iVar10 + 8) == 1 && *(char *)(iVar10 + 0x10) != '\x02')) {
      if (*(char *)(iVar10 + 0x10) == '\x01') {
        uVar12 = FUN_000240d0();
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (&UNK_00030e50,&uStack_51,iVar8,&UNK_00030e50,uVar12);
        uVar12 = __s10Foundation4DateVMa(0);
        auVar18 = FUN_000245dc(0x352fc,PTR___s10Foundation4DateVMa_00030088,
                               PTR___s10Foundation4DateVSeAAMc_00030094);
        __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
                  (uVar12,auVar18._8_8_,iVar6,uVar12,auVar18._0_8_);
        (**(code **)(iVar3 + 4))(auStack_c0 + -(iVar11 + 0xfU & 0xfffffff0),iVar6);
        (**(code **)(iVar5 + 4))(iVar16,iVar8);
        _swift_unknownObjectRelease(iVar10);
        iVar11 = FUN_00010468(0x35040,&UNK_00028868);
        (**(code **)(*(int *)(iVar11 + -4) + 0x1c))(iVar15,0,1,iVar11);
        FUN_0002461c(iVar15,iVar17);
      }
      else {
        uVar12 = FUN_00024110();
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (&UNK_00030e04,&uStack_52,iVar8,&UNK_00030e04,uVar12);
        (**(code **)(iVar4 + 4))(iVar13,iVar7);
        (**(code **)(iVar5 + 4))(iVar16,iVar8);
        _swift_unknownObjectRelease(iVar10);
        iVar11 = FUN_00010468(0x35040,&UNK_00028868);
        (**(code **)(*(int *)(iVar11 + -4) + 0x1c))(iVar17,1,1,iVar11);
      }
      FUN_0002461c(iVar17,in_x8);
      FUN_00021304(param_1);
      return;
    }
    iVar11 = __ss13DecodingErrorOMa(0);
    _swift_allocError(iVar11,PTR___ss13DecodingErrorOs0B0sWP_00030440,0,0);
    FUN_00010468(0x352b0,&UNK_000293f8);
    *(int *)extraout_x1 = iVar9;
    uVar12 = __ss22KeyedDecodingContainerV10codingPathSays9CodingKey_pGvg(iVar8);
    __ss13DecodingErrorO7ContextV10codingPath16debugDescription010underlyingB0ADSays9CodingKey_pG_SSs0B0_pSgtcfC
              (uVar12,0x2b,"eUrl",0xd0008000,0);
    (**(code **)(*(int *)(iVar11 + -4) + 0x38))
              (extraout_x1,
               *(undefined4 *)
                PTR___ss13DecodingErrorO12typeMismatchyABypXp_AB7ContextVtcABmFWC_00030430,iVar11);
    _swift_willThrow();
    (**(code **)(iVar5 + 4))(iVar16,iVar8);
    _swift_unknownObjectRelease(iVar10);
  }
  FUN_00021304(param_1);
  return;
}



/* Entry: 000245dc; end: 0002461b;  */

void FUN_000245dc(int *param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_1 == 0) {
    uVar2 = (*param_2)(0xff);
    iVar1 = _swift_getWitnessTable(param_3,uVar2);
    *param_1 = iVar1;
  }
  return;
}



/* Entry: 0002461c; end: 0002465f;  */

undefined8 FUN_0002461c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0002407c(0);
  (**(code **)(*(int *)(iVar1 + -4) + 0x10))(param_2,param_1,iVar1);
  return param_2;
}



/* Entry: 00024660; end: 00024673;  */

void FUN_00024660(void)

{
  FUN_00024150();
  return;
}



/* Entry: 00024674; end: 00024687;  */

void FUN_00024674(void)

{
  FUN_00023da0();
  return;
}



/* Entry: 00024688; end: 0002469b;  */

void FUN_00024688(undefined8 param_1)

{
  if (iRam0003538c != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&UNK_0002a0d0);
  return;
}



/* Entry: 0002469c; end: 000246cb;  */

void FUN_0002469c(undefined8 param_1,int *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,param_3);
  return;
}



/* Entry: 000246cc; end: 000246df;  */

bool FUN_000246cc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 000246e0; end: 000246e3;  */

void FUN_000246e0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_w20;
  
  uVar1 = *unaff_w20;
  __ss6HasherV5_seedABSi_tcfC(0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000246e4; end: 00024727;  */

void FUN_000246e4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_w20;
  
  uVar1 = *unaff_w20;
  __ss6HasherV5_seedABSi_tcfC(0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00024728; end: 0002474f;  */

void FUN_00024728(void)

{
  undefined1 *unaff_w20;
  
  __ss6HasherV8_combineyySuF(*unaff_w20);
  return;
}



/* Entry: 00024750; end: 00024753;  */

void FUN_00024750(void)

{
  undefined1 uVar1;
  undefined1 *unaff_w20;
  
  uVar1 = *unaff_w20;
  __ss6HasherV5_seedABSi_tcfC();
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00024754; end: 00024793;  */

void FUN_00024754(void)

{
  undefined1 uVar1;
  undefined1 *unaff_w20;
  
  uVar1 = *unaff_w20;
  __ss6HasherV5_seedABSi_tcfC();
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00024794; end: 0002484f;  */

undefined4 FUN_00024794(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *unaff_w20;
  
  bVar1 = *unaff_w20;
  if (1 < bVar1) {
    uVar2 = 0xb;
    if (bVar1 != 3) {
      uVar2 = 0x6e657665;
    }
    uVar3 = 0x73736573;
    if (bVar1 != 2) {
      uVar3 = uVar2;
    }
    return uVar3;
  }
  uVar2 = 0x7274656d;
  if (bVar1 != 0) {
    uVar2 = 0x72657375;
  }
  return uVar2;
}



/* Entry: 00024850; end: 00024873;  */

void FUN_00024850(void)

{
  undefined1 uVar1;
  undefined1 *in_w8;
  
  uVar1 = FUN_000268e4();
  *in_w8 = uVar1;
  return;
}



/* Entry: 00024874; end: 0002487f;  */

undefined1  [16] FUN_00024874(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 00024880; end: 0002488b;  */

void FUN_00024880(void)

{
  undefined1 *in_w8;
  
  *in_w8 = 5;
  return;
}



/* Entry: 0002488c; end: 0002489f;  */

void FUN_0002488c(undefined8 param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR___ss9CodingKeyPsE16debugDescriptionSSvg_000304d8;
  uVar1 = FUN_00024b04();
                    /* WARNING: Could not recover jumptable at 0x000248e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}



/* Entry: 000248a0; end: 000248b3;  */

void FUN_000248a0(undefined8 param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR___ss9CodingKeyPsE11descriptionSSvg_000304d4;
  uVar1 = FUN_00024b04();
                    /* WARNING: Could not recover jumptable at 0x000248e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}



/* Entry: 000248b4; end: 000248eb;  */

void FUN_000248b4(undefined8 param_1,undefined8 param_2,code *param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  
  uVar1 = (*param_3)();
                    /* WARNING: Could not recover jumptable at 0x000248e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}



/* Entry: 000248ec; end: 00024b03;  */

void FUN_000248ec(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int unaff_w20;
  int unaff_w21;
  undefined1 auStack_60 [11];
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  iVar6 = FUN_00010468(0x35300,&UNK_00029440);
  iVar5 = *(int *)(iVar6 + -4);
  iVar4 = *(int *)(iVar5 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  FUN_000212a0(param_1,uVar2);
  uVar8 = FUN_00024b04();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (&UNK_00030da8,&UNK_00030da8,uVar8,uVar2,uVar3);
  uStack_51 = 0;
  FUN_0002407c(0);
  FUN_000245dc(0x35308,FUN_0002407c,&UNK_00029478);
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF();
  if (unaff_w21 == 0) {
    iVar7 = FUN_00024688(0);
    puVar1 = (undefined4 *)(unaff_w20 + *(int *)(iVar7 + 0xc));
    uStack_52 = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (*puVar1,puVar1[1],puVar1[2],&uStack_52,iVar6);
    puVar1 = (undefined4 *)(unaff_w20 + *(int *)(iVar7 + 0x10));
    uStack_53 = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (*puVar1,puVar1[1],puVar1[2],&uStack_53,iVar6);
    puVar1 = (undefined4 *)(unaff_w20 + *(int *)(iVar7 + 0x14));
    uStack_54 = 3;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (*puVar1,puVar1[1],puVar1[2],&uStack_54,iVar6);
    iVar7 = *(int *)(iVar7 + 0x18);
    uStack_55 = 4;
    uVar8 = __s10Foundation4DateVMa(0);
    uVar9 = FUN_000245dc(0x352d8,PTR___s10Foundation4DateVMa_00030088,
                         PTR___s10Foundation4DateVSEAAMc_00030090);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (unaff_w20 + iVar7,&uStack_55,iVar6,uVar8,uVar9);
  }
  (**(code **)(iVar5 + 4))(auStack_60 + -(iVar4 + 0xfU & 0xfffffff0),iVar6);
  return;
}



/* Entry: 00024b04; end: 00024b43;  */

void FUN_00024b04(void)

{
  if (iRam00035304 != 0) {
    return;
  }
  iRam00035304 = _swift_getWitnessTable(&UNK_000297f8,&UNK_00030da8);
  return;
}



/* Entry: 00024b44; end: 00024f67;  */

/* WARNING: Removing unreachable block (ram,0x00024df8) */
/* WARNING: Removing unreachable block (ram,0x00024d30) */
/* WARNING: Removing unreachable block (ram,0x00024d98) */
/* WARNING: Removing unreachable block (ram,0x00024e80) */
/* WARNING: Removing unreachable block (ram,0x00024e98) */
/* WARNING: Removing unreachable block (ram,0x00024e9c) */
/* WARNING: Removing unreachable block (ram,0x00024ed8) */
/* WARNING: Removing unreachable block (ram,0x00024eb8) */
/* WARNING: Removing unreachable block (ram,0x00024ebc) */
/* WARNING: Removing unreachable block (ram,0x00024ed4) */
/* WARNING: Removing unreachable block (ram,0x00024ef0) */
/* WARNING: Removing unreachable block (ram,0x00024ef4) */
/* WARNING: Removing unreachable block (ram,0x00024cc4) */

void FUN_00024b44(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 extraout_w1;
  undefined4 extraout_w1_00;
  undefined4 extraout_w1_01;
  undefined4 uVar11;
  int iVar12;
  undefined8 in_x8;
  int unaff_w21;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 auStack_a0 [2];
  undefined1 uStack_97;
  undefined2 auStack_96 [23];
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  iVar4 = __s10Foundation4DateVMa(0);
  iVar1 = *(int *)(iVar4 + -4);
  iVar14 = (int)auStack_a0 - (*(int *)(iVar1 + 0x20) + 0xfU & 0xfffffff0);
  iVar5 = FUN_0002407c(0);
  iVar12 = iVar14 - (*(int *)(*(int *)(iVar5 + -4) + 0x20) + 0xfU & 0xfffffff0);
  uVar8 = FUN_00010468(0x35310,&UNK_00029448);
  iVar2 = *(int *)((int)uVar8 + -4);
  iVar13 = iVar12 - (*(int *)(iVar2 + 0x20) + 0xfU & 0xfffffff0);
  iVar6 = FUN_00024688(0);
  iVar15 = iVar13 - (*(int *)(*(int *)(iVar6 + -4) + 0x20) + 0xfU & 0xfffffff0);
  uVar7 = *(undefined4 *)(param_1 + 0xc);
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  FUN_000212a0(param_1,uVar7);
  uVar9 = FUN_00024b04();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (&UNK_00030da8,&UNK_00030da8,uVar9,uVar7,uVar11);
  if (unaff_w21 == 0) {
    uVar10 = FUN_000245dc(0x35314,FUN_0002407c,&UNK_00029450);
    uVar9 = uVar8;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (iVar5,&uStack_51,uVar8,iVar5,uVar10);
    FUN_0002461c(iVar12,iVar15);
    uVar7 = __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(&uStack_52,uVar8);
    puVar3 = (undefined4 *)(iVar15 + *(int *)(iVar6 + 0xc));
    *puVar3 = uVar7;
    puVar3[1] = extraout_w1;
    *(char *)(puVar3 + 2) = (char)uVar9;
    *(char *)((int)puVar3 + 9) = (char)((ulonglong)uVar9 >> 8);
    *(short *)((int)puVar3 + 10) = (short)((ulonglong)uVar9 >> 0x10);
    uVar7 = __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(&uStack_53,uVar8);
    uVar11 = (undefined4)((ulonglong)uVar9 >> 0x10);
    puVar3 = (undefined4 *)(iVar15 + *(int *)(iVar6 + 0x10));
    *puVar3 = uVar7;
    puVar3[1] = extraout_w1_00;
    *(char *)(puVar3 + 2) = (char)uVar9;
    *(char *)((int)puVar3 + 9) = (char)((ulonglong)uVar9 >> 8);
    *(short *)((int)puVar3 + 10) = (short)((ulonglong)uVar9 >> 0x10);
    uVar7 = __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(&uStack_54,uVar8);
    puVar3 = (undefined4 *)(iVar15 + *(int *)(iVar6 + 0x14));
    *puVar3 = uVar7;
    puVar3[1] = extraout_w1_01;
    *(char *)(puVar3 + 2) = (char)uVar11;
    *(char *)((int)puVar3 + 9) = (char)((uint)uVar11 >> 8);
    *(short *)((int)puVar3 + 10) = (short)((uint)uVar11 >> 0x10);
    uVar9 = FUN_000245dc(0x352fc,PTR___s10Foundation4DateVMa_00030088,
                         PTR___s10Foundation4DateVSeAAMc_00030094);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (iVar4,&uStack_55,uVar8,iVar4,uVar9);
    (**(code **)(iVar2 + 4))(iVar13,uVar8);
    (**(code **)(iVar1 + 0x10))(iVar15 + *(int *)(iVar6 + 0x18),iVar14,iVar4);
    FUN_00024f68(iVar15,in_x8,FUN_00024688);
    FUN_00021304(param_1);
    FUN_00024fac(iVar15,FUN_00024688);
  }
  else {
    FUN_00021304(param_1);
  }
  return;
}



/* Entry: 00024f68; end: 00024fab;  */

undefined8 FUN_00024f68(undefined8 param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  
  iVar1 = (*param_3)(0);
  (**(code **)(*(int *)(iVar1 + -4) + 8))(param_2,param_1,iVar1);
  return param_2;
}



/* Entry: 00024fac; end: 00024fe7;  */

undefined8 FUN_00024fac(undefined8 param_1,code *param_2)

{
  int iVar1;
  
  iVar1 = (*param_2)(0);
  (**(code **)(*(int *)(iVar1 + -4) + 4))(param_1,iVar1);
  return param_1;
}



/* Entry: 00024fe8; end: 00024ffb;  */

void FUN_00024fe8(void)

{
  FUN_00024b44();
  return;
}



/* Entry: 00024ffc; end: 0002500f;  */

void FUN_00024ffc(void)

{
  FUN_000248ec();
  return;
}



/* Entry: 00025010; end: 000250f7;  */

int * FUN_00025010(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = *(int *)(param_3 + -4);
  uVar1 = *(uint *)(iVar5 + 0x28);
  if ((uVar1 >> 0x11 & 1) == 0) {
    iVar3 = FUN_00010468(0x35040,&UNK_00028868);
    iVar2 = *(int *)(iVar3 + -4);
    iVar4 = (**(code **)(iVar2 + 0x18))(param_2,1,iVar3);
    if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000273c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar6 = (int *)(*(code *)PTR__memcpy_00030148)(param_1,param_2,*(undefined4 *)(iVar5 + 0x20))
      ;
      return piVar6;
    }
    iVar5 = __s10Foundation4DateVMa();
    (**(code **)(*(int *)(iVar5 + -4) + 8))(param_1,param_2,iVar5);
    (**(code **)(iVar2 + 0x1c))(param_1,0,1,iVar3);
  }
  else {
    iVar5 = *param_2;
    *param_1 = iVar5;
    uVar1 = uVar1 & 0xff;
    param_1 = (int *)(iVar5 + (uVar1 + 8 & (uVar1 ^ 0xffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 000250f8; end: 00025163;  */

void FUN_000250f8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00010468(0x35040,&UNK_00028868);
  iVar1 = (**(code **)(*(int *)(iVar1 + -4) + 0x18))(param_1,1,iVar1);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x00025160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar1 + -4) + 4))(param_1,iVar1);
  return;
}



/* Entry: 00025164; end: 00025227;  */

undefined8 FUN_00025164(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_00010468(0x35040,&UNK_00028868);
  iVar1 = *(int *)(iVar2 + -4);
  iVar3 = (**(code **)(iVar1 + 0x18))(param_2,1,iVar2);
  if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000273c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)PTR__memcpy_00030148)
                      (param_1,param_2,*(undefined4 *)(*(int *)(param_3 + -4) + 0x20));
    return uVar4;
  }
  iVar3 = __s10Foundation4DateVMa();
  (**(code **)(*(int *)(iVar3 + -4) + 8))(param_1,param_2,iVar3);
  (**(code **)(iVar1 + 0x1c))(param_1,0,1,iVar2);
  return param_1;
}



/* Entry: 00025228; end: 0002533b;  */

undefined8 FUN_00025228(undefined8 param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar2 = FUN_00010468(0x35040,&UNK_00028868);
  iVar5 = *(int *)(iVar2 + -4);
  pcVar1 = *(code **)(iVar5 + 0x18);
  iVar3 = (*pcVar1)(param_1,1,iVar2);
  iVar4 = (*pcVar1)(param_2,1,iVar2);
  if (iVar3 == 0) {
    if (iVar4 != 0) {
      FUN_0002533c(param_1);
      goto LAB_000252dc;
    }
    iVar5 = __s10Foundation4DateVMa();
    (**(code **)(*(int *)(iVar5 + -4) + 0xc))(param_1,param_2,iVar5);
  }
  else {
    if (iVar4 != 0) {
LAB_000252dc:
                    /* WARNING: Could not recover jumptable at 0x000273c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)PTR__memcpy_00030148)
                        (param_1,param_2,*(undefined4 *)(*(int *)(param_3 + -4) + 0x20));
      return uVar6;
    }
    iVar3 = __s10Foundation4DateVMa();
    (**(code **)(*(int *)(iVar3 + -4) + 8))(param_1,param_2,iVar3);
    (**(code **)(iVar5 + 0x1c))(param_1,0,1,iVar2);
  }
  return param_1;
}



/* Entry: 0002533c; end: 00025383;  */

undefined8 FUN_0002533c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00010468(0x35040,&UNK_00028868);
  (**(code **)(*(int *)(iVar1 + -4) + 4))(param_1,iVar1);
  return param_1;
}



/* Entry: 00025384; end: 00025447;  */

undefined8 FUN_00025384(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_00010468(0x35040,&UNK_00028868);
  iVar1 = *(int *)(iVar2 + -4);
  iVar3 = (**(code **)(iVar1 + 0x18))(param_2,1,iVar2);
  if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000273c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)PTR__memcpy_00030148)
                      (param_1,param_2,*(undefined4 *)(*(int *)(param_3 + -4) + 0x20));
    return uVar4;
  }
  iVar3 = __s10Foundation4DateVMa();
  (**(code **)(*(int *)(iVar3 + -4) + 0x10))(param_1,param_2,iVar3);
  (**(code **)(iVar1 + 0x1c))(param_1,0,1,iVar2);
  return param_1;
}



/* Entry: 00025448; end: 0002555b;  */

undefined8 FUN_00025448(undefined8 param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar2 = FUN_00010468(0x35040,&UNK_00028868);
  iVar5 = *(int *)(iVar2 + -4);
  pcVar1 = *(code **)(iVar5 + 0x18);
  iVar3 = (*pcVar1)(param_1,1,iVar2);
  iVar4 = (*pcVar1)(param_2,1,iVar2);
  if (iVar3 == 0) {
    if (iVar4 != 0) {
      FUN_0002533c(param_1);
      goto LAB_000254fc;
    }
    iVar5 = __s10Foundation4DateVMa();
    (**(code **)(*(int *)(iVar5 + -4) + 0x14))(param_1,param_2,iVar5);
  }
  else {
    if (iVar4 != 0) {
LAB_000254fc:
                    /* WARNING: Could not recover jumptable at 0x000273c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)PTR__memcpy_00030148)
                        (param_1,param_2,*(undefined4 *)(*(int *)(param_3 + -4) + 0x20));
      return uVar6;
    }
    iVar3 = __s10Foundation4DateVMa();
    (**(code **)(*(int *)(iVar3 + -4) + 0x10))(param_1,param_2,iVar3);
    (**(code **)(iVar5 + 0x1c))(param_1,0,1,iVar2);
  }
  return param_1;
}



/* Entry: 0002555c; end: 00025567;  */

void FUN_0002555c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000275b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_00030530)();
  return;
}



/* Entry: 00025568; end: 000255bb;  */

int FUN_00025568(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00010468(0x35040,&UNK_00028868);
  iVar2 = (**(code **)(*(int *)(iVar1 + -4) + 0x18))(param_1,param_2,iVar1);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar2 + -1;
  }
  return iVar1;
}



/* Entry: 000255bc; end: 000255c7;  */

void FUN_000255bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000276a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_00030580)();
  return;
}



/* Entry: 000255c8; end: 00025623;  */

void FUN_000255c8(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2 + 1;
  }
  iVar2 = FUN_00010468(0x35040,&UNK_00028868);
                    /* WARNING: Could not recover jumptable at 0x00025620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar2 + -4) + 0x1c))(param_1,iVar1,param_3,iVar2);
  return;
}



/* Entry: 00025624; end: 00025667;  */

void FUN_00025624(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00010468(0x35040,&UNK_00028868);
                    /* WARNING: Could not recover jumptable at 0x00025664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar1 + -4) + 0x18))(param_1,1,iVar1);
  return;
}



/* Entry: 00025668; end: 0002566b;  */

void FUN_00025668(void)

{
  return;
}



/* Entry: 0002566c; end: 000256b7;  */

void FUN_0002566c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00010468(0x35040,&UNK_00028868);
                    /* WARNING: Could not recover jumptable at 0x000256b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar1 + -4) + 0x1c))(param_1,param_2,1,iVar1);
  return;
}



/* Entry: 000256b8; end: 0002570b;  */

/* WARNING: Removing unreachable block (ram,0x000256fc) */

undefined4 FUN_000256b8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = __s10Foundation4DateVMa(0x13f);
  _swift_initEnumMetadataSinglePayload(param_1,0x100,(ulonglong)*(uint *)(iVar1 + -4) + 0x20,1);
  return 0;
}



/* Entry: 0002570c; end: 000258d7;  */

int * FUN_0002570c(int *param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar4 = *(uint *)(*(int *)(param_3 + -4) + 0x28);
  if ((uVar4 >> 0x11 & 1) == 0) {
    iVar6 = FUN_00010468(0x35040,&UNK_00028868);
    iVar8 = *(int *)(iVar6 + -4);
    iVar7 = (**(code **)(iVar8 + 0x18))(param_2,1,iVar6);
    if (iVar7 == 0) {
      iVar7 = __s10Foundation4DateVMa();
      (**(code **)(*(int *)(iVar7 + -4) + 8))(param_1,param_2,iVar7);
      (**(code **)(iVar8 + 0x1c))(param_1,0,1,iVar6);
    }
    else {
      iVar8 = FUN_0002407c(0);
      _memcpy(param_1,param_2,*(undefined4 *)(*(int *)(iVar8 + -4) + 0x20));
    }
    puVar1 = (undefined4 *)((int)param_1 + *(int *)(param_3 + 0xc));
    puVar2 = (undefined4 *)((int)param_2 + *(int *)(param_3 + 0xc));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    uVar5 = *(undefined1 *)(puVar2 + 2);
    FUN_000103b4(uVar3,uVar5);
    puVar1[1] = uVar3;
    *(undefined1 *)(puVar1 + 2) = uVar5;
    *(undefined1 *)((int)puVar1 + 9) = *(undefined1 *)((int)puVar2 + 9);
    *(undefined2 *)((int)puVar1 + 10) = *(undefined2 *)((int)puVar2 + 10);
    puVar1 = (undefined4 *)((int)param_1 + *(int *)(param_3 + 0x10));
    puVar2 = (undefined4 *)((int)param_2 + *(int *)(param_3 + 0x10));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    uVar5 = *(undefined1 *)(puVar2 + 2);
    FUN_000103b4(uVar3,uVar5);
    puVar1[1] = uVar3;
    *(undefined1 *)(puVar1 + 2) = uVar5;
    *(undefined1 *)((int)puVar1 + 9) = *(undefined1 *)((int)puVar2 + 9);
    *(undefined2 *)((int)puVar1 + 10) = *(undefined2 *)((int)puVar2 + 10);
    puVar1 = (undefined4 *)((int)param_1 + *(int *)(param_3 + 0x14));
    puVar2 = (undefined4 *)((int)param_2 + *(int *)(param_3 + 0x14));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    uVar5 = *(undefined1 *)(puVar2 + 2);
    FUN_000103b4(uVar3,uVar5);
    puVar1[1] = uVar3;
    *(undefined1 *)(puVar1 + 2) = uVar5;
    *(undefined1 *)((int)puVar1 + 9) = *(undefined1 *)((int)puVar2 + 9);
    *(undefined2 *)((int)puVar1 + 10) = *(undefined2 *)((int)puVar2 + 10);
    iVar8 = *(int *)(param_3 + 0x18);
    iVar6 = __s10Foundation4DateVMa(0);
    (**(code **)(*(int *)(iVar6 + -4) + 8))((int)param_1 + iVar8,(int)param_2 + iVar8,iVar6);
  }
  else {
    iVar8 = *param_2;
    *param_1 = iVar8;
    uVar4 = uVar4 & 0xff;
    param_1 = (int *)(iVar8 + (uVar4 + 8 & (uVar4 ^ 0xffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 000258d8; end: 00025997;  */

void FUN_000258d8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00010468(0x35040,&UNK_00028868);
  iVar1 = (**(code **)(*(int *)(iVar1 + -4) + 0x18))(param_1,1,iVar1);
  if (iVar1 == 0) {
    iVar1 = __s10Foundation4DateVMa();
    (**(code **)(*(int *)(iVar1 + -4) + 4))(param_1,iVar1);
  }
  iVar1 = param_1 + *(int *)(param_2 + 0xc);
  FUN_000103d0(*(undefined4 *)(iVar1 + 4),*(undefined1 *)(iVar1 + 8));
  iVar1 = param_1 + *(int *)(param_2 + 0x10);
  FUN_000103d0(*(undefined4 *)(iVar1 + 4),*(undefined1 *)(iVar1 + 8));
  iVar1 = param_1 + *(int *)(param_2 + 0x14);
  FUN_000103d0(*(undefined4 *)(iVar1 + 4),*(undefined1 *)(iVar1 + 8));
  iVar1 = *(int *)(param_2 + 0x18);
  iVar2 = __s10Foundation4DateVMa(0);
                    /* WARNING: Could not recover jumptable at 0x00025994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar2 + -4) + 4))(param_1 + iVar1,iVar2);
  return;
}



/* Entry: 00025998; end: 00025b37;  */

int FUN_00025998(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = FUN_00010468(0x35040,&UNK_00028868);
  iVar7 = *(int *)(iVar5 + -4);
  iVar6 = (**(code **)(iVar7 + 0x18))(param_2,1,iVar5);
  if (iVar6 == 0) {
    iVar6 = __s10Foundation4DateVMa();
    (**(code **)(*(int *)(iVar6 + -4) + 8))(param_1,param_2,iVar6);
    (**(code **)(iVar7 + 0x1c))(param_1,0,1,iVar5);
  }
  else {
    iVar7 = FUN_0002407c(0);
    _memcpy(param_1,param_2,*(undefined4 *)(*(int *)(iVar7 + -4) + 0x20));
  }
  puVar1 = (undefined4 *)(param_1 + *(int *)(param_3 + 0xc));
  puVar2 = (undefined4 *)(param_2 + *(int *)(param_3 + 0xc));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  uVar4 = *(undefined1 *)(puVar2 + 2);
  FUN_000103b4(uVar3,uVar4);
  puVar1[1] = uVar3;
  *(undefined1 *)(puVar1 + 2) = uVar4;
  *(undefined1 *)((int)puVar1 + 9) = *(undefined1 *)((int)puVar2 + 9);
  *(undefined2 *)((int)puVar1 + 10) = *(undefined2 *)((int)puVar2 + 10);
  puVar1 = (undefined4 *)(param_1 + *(int *)(param_3 + 0x10));
  puVar2 = (undefined4 *)(param_2 + *(int *)(param_3 + 0x10));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  uVar4 = *(undefined1 *)(puVar2 + 2);
  FUN_000103b4(uVar3,uVar4);
  puVar1[1] = uVar3;
  *(undefined1 *)(puVar1 + 2) = uVar4;
  *(undefined1 *)((int)puVar1 + 9) = *(undefined1 *)((int)puVar2 + 9);
  *(undefined2 *)((int)puVar1 + 10) = *(undefined2 *)((int)puVar2 + 10);
  puVar1 = (undefined4 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined4 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  uVar4 = *(undefined1 *)(puVar2 + 2);
  FUN_000103b4(uVar3,uVar4);
  puVar1[1] = uVar3;
  *(undefined1 *)(puVar1 + 2) = uVar4;
  *(undefined1 *)((int)puVar1 + 9) = *(undefined1 *)((int)puVar2 + 9);
  *(undefined2 *)((int)puVar1 + 10) = *(undefined2 *)((int)puVar2 + 10);
  iVar7 = *(int *)(param_3 + 0x18);
  iVar5 = __s10Foundation4DateVMa(0);
  (**(code **)(*(int *)(iVar5 + -4) + 8))(param_1 + iVar7,param_2 + iVar7,iVar5);
  return param_1;
}



/* Entry: 00025b38; end: 00025d4b;  */

int FUN_00025b38(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar8 = FUN_00010468(0x35040,&UNK_00028868);
  iVar11 = *(int *)(iVar8 + -4);
  pcVar3 = *(code **)(iVar11 + 0x18);
  iVar9 = (*pcVar3)(param_1,1,iVar8);
  iVar10 = (*pcVar3)(param_2,1,iVar8);
  if (iVar9 == 0) {
    if (iVar10 == 0) {
      iVar11 = __s10Foundation4DateVMa();
      (**(code **)(*(int *)(iVar11 + -4) + 0xc))(param_1,param_2,iVar11);
      goto LAB_00025c08;
    }
    FUN_0002533c(param_1);
  }
  else if (iVar10 == 0) {
    iVar9 = __s10Foundation4DateVMa();
    (**(code **)(*(int *)(iVar9 + -4) + 8))(param_1,param_2,iVar9);
    (**(code **)(iVar11 + 0x1c))(param_1,0,1,iVar8);
    goto LAB_00025c08;
  }
  iVar11 = FUN_0002407c(0);
  _memcpy(param_1,param_2,*(undefined4 *)(*(int *)(iVar11 + -4) + 0x20));
LAB_00025c08:
  puVar1 = (undefined4 *)(param_1 + *(int *)(param_3 + 0xc));
  puVar2 = (undefined4 *)(param_2 + *(int *)(param_3 + 0xc));
  *puVar1 = *puVar2;
  uVar4 = puVar2[1];
  uVar6 = *(undefined1 *)(puVar2 + 2);
  FUN_000103b4(uVar4,uVar6);
  uVar5 = puVar1[1];
  puVar1[1] = uVar4;
  uVar7 = *(undefined1 *)(puVar1 + 2);
  *(undefined1 *)(puVar1 + 2) = uVar6;
  FUN_000103d0(uVar5,uVar7);
  *(undefined1 *)((int)puVar1 + 9) = *(undefined1 *)((int)puVar2 + 9);
  *(undefined2 *)((int)puVar1 + 10) = *(undefined2 *)((int)puVar2 + 10);
  puVar1 = (undefined4 *)(param_1 + *(int *)(param_3 + 0x10));
  puVar2 = (undefined4 *)(param_2 + *(int *)(param_3 + 0x10));
  *puVar1 = *puVar2;
  uVar4 = puVar2[1];
  uVar6 = *(undefined1 *)(puVar2 + 2);
  FUN_000103b4(uVar4,uVar6);
  uVar5 = puVar1[1];
  puVar1[1] = uVar4;
  uVar7 = *(undefined1 *)(puVar1 + 2);
  *(undefined1 *)(puVar1 + 2) = uVar6;
  FUN_000103d0(uVar5,uVar7);
  *(undefined1 *)((int)puVar1 + 9) = *(undefined1 *)((int)puVar2 + 9);
  *(undefined2 *)((int)puVar1 + 10) = *(undefined2 *)((int)puVar2 + 10);
  puVar1 = (undefined4 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined4 *)(param_2 + *(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  uVar4 = puVar2[1];
  uVar6 = *(undefined1 *)(puVar2 + 2);
  FUN_000103b4(uVar4,uVar6);
  uVar5 = puVar1[1];
  puVar1[1] = uVar4;
  uVar7 = *(undefined1 *)(puVar1 + 2);
  *(undefined1 *)(puVar1 + 2) = uVar6;
  FUN_000103d0(uVar5,uVar7);
  *(undefined1 *)((int)puVar1 + 9) = *(undefined1 *)((int)puVar2 + 9);
  *(undefined2 *)((int)puVar1 + 10) = *(undefined2 *)((int)puVar2 + 10);
  iVar11 = *(int *)(param_3 + 0x18);
  iVar8 = __s10Foundation4DateVMa(0);
  (**(code **)(*(int *)(iVar8 + -4) + 0xc))(param_1 + iVar11,param_2 + iVar11,iVar8);
  return param_1;
}



/* Entry: 00025d4c; end: 00025e7b;  */

int FUN_00025d4c(int param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = FUN_00010468(0x35040,&UNK_00028868);
  iVar5 = *(int *)(iVar3 + -4);
  iVar4 = (**(code **)(iVar5 + 0x18))(param_2,1,iVar3);
  if (iVar4 == 0) {
    iVar4 = __s10Foundation4DateVMa();
    (**(code **)(*(int *)(iVar4 + -4) + 0x10))(param_1,param_2,iVar4);
    (**(code **)(iVar5 + 0x1c))(param_1,0,1,iVar3);
  }
  else {
    iVar5 = FUN_0002407c(0);
    _memcpy(param_1,param_2,*(undefined4 *)(*(int *)(iVar5 + -4) + 0x20));
  }
  iVar5 = *(int *)(param_3 + 0x10);
  puVar2 = (undefined8 *)(param_1 + *(int *)(param_3 + 0xc));
  puVar1 = (undefined8 *)(param_2 + *(int *)(param_3 + 0xc));
  *puVar2 = *puVar1;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
  puVar2 = (undefined8 *)(param_1 + iVar5);
  puVar1 = (undefined8 *)(param_2 + iVar5);
  *puVar2 = *puVar1;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
  iVar5 = *(int *)(param_3 + 0x18);
  puVar2 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  *puVar2 = *puVar1;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
  iVar3 = __s10Foundation4DateVMa(0);
  (**(code **)(*(int *)(iVar3 + -4) + 0x10))(param_1 + iVar5,param_2 + iVar5,iVar3);
  return param_1;
}



/* Entry: 00025e7c; end: 00026053;  */

int FUN_00025e7c(int param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = FUN_00010468(0x35040,&UNK_00028868);
  iVar9 = *(int *)(iVar6 + -4);
  pcVar3 = *(code **)(iVar9 + 0x18);
  iVar7 = (*pcVar3)(param_1,1,iVar6);
  iVar8 = (*pcVar3)(param_2,1,iVar6);
  if (iVar7 == 0) {
    if (iVar8 == 0) {
      iVar9 = __s10Foundation4DateVMa();
      (**(code **)(*(int *)(iVar9 + -4) + 0x14))(param_1,param_2,iVar9);
      goto LAB_00025f4c;
    }
    FUN_0002533c(param_1);
  }
  else if (iVar8 == 0) {
    iVar7 = __s10Foundation4DateVMa();
    (**(code **)(*(int *)(iVar7 + -4) + 0x10))(param_1,param_2,iVar7);
    (**(code **)(iVar9 + 0x1c))(param_1,0,1,iVar6);
    goto LAB_00025f4c;
  }
  iVar9 = FUN_0002407c(0);
  _memcpy(param_1,param_2,*(undefined4 *)(*(int *)(iVar9 + -4) + 0x20));
LAB_00025f4c:
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0xc));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0xc));
  uVar4 = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  uVar5 = *(undefined1 *)(puVar1 + 1);
  *(undefined1 *)(puVar1 + 1) = uVar4;
  FUN_000103d0(*(undefined4 *)((int)puVar1 + 4),uVar5);
  *(undefined1 *)((int)puVar1 + 9) = *(undefined1 *)((int)puVar2 + 9);
  *(undefined2 *)((int)puVar1 + 10) = *(undefined2 *)((int)puVar2 + 10);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x10));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x10));
  uVar4 = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  uVar5 = *(undefined1 *)(puVar1 + 1);
  *(undefined1 *)(puVar1 + 1) = uVar4;
  FUN_000103d0(*(undefined4 *)((int)puVar1 + 4),uVar5);
  *(undefined1 *)((int)puVar1 + 9) = *(undefined1 *)((int)puVar2 + 9);
  *(undefined2 *)((int)puVar1 + 10) = *(undefined2 *)((int)puVar2 + 10);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar4 = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  uVar5 = *(undefined1 *)(puVar1 + 1);
  *(undefined1 *)(puVar1 + 1) = uVar4;
  FUN_000103d0(*(undefined4 *)((int)puVar1 + 4),uVar5);
  *(undefined1 *)((int)puVar1 + 9) = *(undefined1 *)((int)puVar2 + 9);
  *(undefined2 *)((int)puVar1 + 10) = *(undefined2 *)((int)puVar2 + 10);
  iVar9 = *(int *)(param_3 + 0x18);
  iVar6 = __s10Foundation4DateVMa(0);
  (**(code **)(*(int *)(iVar6 + -4) + 0x14))(param_1 + iVar9,param_2 + iVar9,iVar6);
  return param_1;
}



/* Entry: 00026054; end: 0002605f;  */

void FUN_00026054(void)

{
                    /* WARNING: Could not recover jumptable at 0x000275b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_00030530)();
  return;
}



/* Entry: 00026060; end: 00026103;  */

ulonglong FUN_00026060(int param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  
  iVar2 = FUN_0002407c(0);
  if ((int)param_2 == *(int *)(*(int *)(iVar2 + -4) + 0x2c)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(iVar2 + -4) + 0x18);
  }
  else {
    if ((int)param_2 == 0xfd) {
      uVar4 = (uint)*(byte *)(param_1 + *(int *)(param_3 + 0xc) + 8);
      uVar1 = 0;
      if (2 < uVar4) {
        uVar1 = (uVar4 ^ 0xff) + 1;
      }
      return (ulonglong)uVar1;
    }
    iVar2 = __s10Foundation4DateVMa(0);
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(iVar2 + -4) + 0x18);
    param_1 = param_1 + *(int *)(param_3 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00026100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,iVar2);
  return uVar3;
}



/* Entry: 00026104; end: 0002610f;  */

void FUN_00026104(void)

{
                    /* WARNING: Could not recover jumptable at 0x000276a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_00030580)();
  return;
}



/* Entry: 00026110; end: 000261b3;  */

void FUN_00026110(int param_1,undefined8 param_2,int param_3,int param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  iVar1 = FUN_0002407c(0);
  if (param_3 == *(int *)(*(int *)(iVar1 + -4) + 0x2c)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(iVar1 + -4) + 0x1c);
  }
  else {
    if (param_3 == 0xfd) {
      *(char *)(param_1 + *(int *)(param_4 + 0xc) + 8) = -(char)param_2;
      return;
    }
    iVar1 = __s10Foundation4DateVMa(0);
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(iVar1 + -4) + 0x1c);
    param_1 = param_1 + *(int *)(param_4 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x000261b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_2,iVar1);
  return;
}



/* Entry: 000261b4; end: 00026243;  */

/* WARNING: Removing unreachable block (ram,0x00026230) */

undefined4 FUN_000261b4(longlong param_1)

{
  int iVar1;
  int iStack_34;
  undefined *puStack_30;
  undefined *puStack_2c;
  undefined *puStack_28;
  int iStack_24;
  
  iVar1 = FUN_0002407c(0x13f);
  iStack_34 = *(int *)(iVar1 + -4) + 0x20;
  puStack_30 = &UNK_00029524;
  puStack_2c = &UNK_00029524;
  puStack_28 = &UNK_00029524;
  iVar1 = __s10Foundation4DateVMa(0x13f);
  iStack_24 = *(int *)(iVar1 + -4) + 0x20;
  _swift_initStructMetadata(param_1,0x100,5,&iStack_34,param_1 + 8);
  return 0;
}



/* Entry: 00026244; end: 000262d3;  */

int FUN_00026244(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_000262c0;
        goto LAB_000262a4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_000262a4:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_000262c0:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 000262d4; end: 00026383;  */

void FUN_000262d4(char *param_1,uint param_2,uint param_3)

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
        goto LAB_00026354;
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
LAB_00026354:
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



/* Entry: 00026384; end: 0002638b;  */

undefined1 FUN_00026384(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 0002638c; end: 0002638f;  */

void FUN_0002638c(void)

{
  return;
}



/* Entry: 00026390; end: 00026397;  */

void FUN_00026390(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 00026398; end: 000263a7;  */

undefined1  [16] FUN_00026398(void)

{
  return ZEXT816(0x30da8);
}



/* Entry: 000263a8; end: 00026437;  */

int FUN_000263a8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00026424;
        goto LAB_00026408;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_00026408:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_00026424:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 00026438; end: 000264e7;  */

void FUN_00026438(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 1) {
    uVar3 = 4;
  }
  if (param_3 + 1 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfe < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xff) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_000264b8;
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
LAB_000264b8:
      *param_1 = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xff >> 8) + 1;
    *param_1 = (char)(param_2 - 0xff);
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



/* Entry: 000264e8; end: 000264eb;  */

void FUN_000264e8(void)

{
  return;
}



/* Entry: 000264ec; end: 000264fb;  */

undefined1  [16] FUN_000264ec(void)

{
  return ZEXT816(0x30df4);
}



/* Entry: 000264fc; end: 0002650b;  */

undefined1  [16] FUN_000264fc(void)

{
  return ZEXT816(0x30e04);
}



/* Entry: 0002650c; end: 0002655b;  */

uint FUN_0002650c(uint *param_1,int param_2)

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



/* Entry: 0002655c; end: 000265d7;  */

void FUN_0002655c(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xffff < param_3 + 1U) {
    uVar2 = 4;
  }
  if (param_3 + 1U < 0x100) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  if (param_2 == 0) {
    if (1 < uVar1) {
      if (uVar1 == 2) {
        *(undefined2 *)param_1 = 0;
        return;
      }
      *param_1 = 0;
      return;
    }
    if (uVar1 != 0) {
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (uVar1 < 2) {
    if (uVar1 != 0) {
      *(char *)param_1 = (char)param_2;
      return;
    }
  }
  else {
    if (uVar1 == 2) {
      *(short *)param_1 = (short)param_2;
      return;
    }
    *param_1 = param_2;
  }
  return;
}



/* Entry: 000265d8; end: 000265df;  */

undefined8 FUN_000265d8(void)

{
  return 0;
}



/* Entry: 000265e0; end: 000265e3;  */

void FUN_000265e0(void)

{
  return;
}



/* Entry: 000265e4; end: 000265e7;  */

void FUN_000265e4(void)

{
  return;
}



/* Entry: 000265e8; end: 000265f7;  */

undefined1  [16] FUN_000265e8(void)

{
  return ZEXT816(0x30e50);
}



/* Entry: 000265f8; end: 000265fb;  */

void FUN_000265f8(void)

{
  if (iRam000353b8 != 0) {
    return;
  }
  iRam000353b8 = _swift_getWitnessTable(&UNK_00029610,&UNK_00030e50);
  return;
}



/* Entry: 000265fc; end: 0002663b;  */

void FUN_000265fc(void)

{
  if (iRam000353b8 != 0) {
    return;
  }
  iRam000353b8 = _swift_getWitnessTable(&UNK_00029610,&UNK_00030e50);
  return;
}



/* Entry: 0002663c; end: 0002663f;  */

void FUN_0002663c(void)

{
  if (iRam000353bc != 0) {
    return;
  }
  iRam000353bc = _swift_getWitnessTable(&UNK_00029718,&UNK_00030df4);
  return;
}



/* Entry: 00026640; end: 0002667f;  */

void FUN_00026640(void)

{
  if (iRam000353bc != 0) {
    return;
  }
  iRam000353bc = _swift_getWitnessTable(&UNK_00029718,&UNK_00030df4);
  return;
}



/* Entry: 00026680; end: 00026683;  */

void FUN_00026680(void)

{
  if (iRam000353c0 != 0) {
    return;
  }
  iRam000353c0 = _swift_getWitnessTable(&UNK_000297d0,&UNK_00030da8);
  return;
}



/* Entry: 00026684; end: 000266c3;  */

void FUN_00026684(void)

{
  if (iRam000353c0 != 0) {
    return;
  }
  iRam000353c0 = _swift_getWitnessTable(&UNK_000297d0,&UNK_00030da8);
  return;
}



/* Entry: 000266c4; end: 000266c7;  */

void FUN_000266c4(void)

{
  if (iRam000353c4 != 0) {
    return;
  }
  iRam000353c4 = _swift_getWitnessTable(&UNK_00029768,&UNK_00030da8);
  return;
}



/* Entry: 000266c8; end: 00026707;  */

void FUN_000266c8(void)

{
  if (iRam000353c4 != 0) {
    return;
  }
  iRam000353c4 = _swift_getWitnessTable(&UNK_00029768,&UNK_00030da8);
  return;
}



/* Entry: 00026708; end: 0002670b;  */

void FUN_00026708(void)

{
  if (iRam000353c8 != 0) {
    return;
  }
  iRam000353c8 = _swift_getWitnessTable(&UNK_00029740,&UNK_00030da8);
  return;
}



/* Entry: 0002670c; end: 0002674b;  */

void FUN_0002670c(void)

{
  if (iRam000353c8 != 0) {
    return;
  }
  iRam000353c8 = _swift_getWitnessTable(&UNK_00029740,&UNK_00030da8);
  return;
}



/* Entry: 0002674c; end: 0002674f;  */

void FUN_0002674c(void)

{
  if (iRam000353cc != 0) {
    return;
  }
  iRam000353cc = _swift_getWitnessTable(&UNK_00029660,&UNK_00030e04);
  return;
}



/* Entry: 00026750; end: 0002678f;  */

void FUN_00026750(void)

{
  if (iRam000353cc != 0) {
    return;
  }
  iRam000353cc = _swift_getWitnessTable(&UNK_00029660,&UNK_00030e04);
  return;
}



/* Entry: 00026790; end: 00026793;  */

void FUN_00026790(void)

{
  if (iRam000353d0 != 0) {
    return;
  }
  iRam000353d0 = _swift_getWitnessTable(&UNK_00029638,&UNK_00030e04);
  return;
}



/* Entry: 00026794; end: 000267d3;  */

void FUN_00026794(void)

{
  if (iRam000353d0 != 0) {
    return;
  }
  iRam000353d0 = _swift_getWitnessTable(&UNK_00029638,&UNK_00030e04);
  return;
}



/* Entry: 000267d4; end: 000267d7;  */

void FUN_000267d4(void)

{
  if (iRam000353d4 != 0) {
    return;
  }
  iRam000353d4 = _swift_getWitnessTable(&UNK_000295a8,&UNK_00030e50);
  return;
}



/* Entry: 000267d8; end: 00026817;  */

void FUN_000267d8(void)

{
  if (iRam000353d4 != 0) {
    return;
  }
  iRam000353d4 = _swift_getWitnessTable(&UNK_000295a8,&UNK_00030e50);
  return;
}



/* Entry: 00026818; end: 0002681b;  */

void FUN_00026818(void)

{
  if (iRam000353d8 != 0) {
    return;
  }
  iRam000353d8 = _swift_getWitnessTable(&UNK_00029580,&UNK_00030e50);
  return;
}



/* Entry: 0002681c; end: 0002685b;  */

void FUN_0002681c(void)

{
  if (iRam000353d8 != 0) {
    return;
  }
  iRam000353d8 = _swift_getWitnessTable(&UNK_00029580,&UNK_00030e50);
  return;
}



/* Entry: 0002685c; end: 0002685f;  */

void FUN_0002685c(void)

{
  if (iRam000353dc != 0) {
    return;
  }
  iRam000353dc = _swift_getWitnessTable(&UNK_000296b0,&UNK_00030df4);
  return;
}



/* Entry: 00026860; end: 0002689f;  */

void FUN_00026860(void)

{
  if (iRam000353dc != 0) {
    return;
  }
  iRam000353dc = _swift_getWitnessTable(&UNK_000296b0,&UNK_00030df4);
  return;
}



/* Entry: 000268a0; end: 000268a3;  */

void FUN_000268a0(void)

{
  if (iRam000353e0 != 0) {
    return;
  }
  iRam000353e0 = _swift_getWitnessTable(&UNK_00029688,&UNK_00030df4);
  return;
}



/* Entry: 000268a4; end: 000268e3;  */

void FUN_000268a4(void)

{
  if (iRam000353e0 != 0) {
    return;
  }
  iRam000353e0 = _swift_getWitnessTable(&UNK_00029688,&UNK_00030df4);
  return;
}



/* Entry: 000268e4; end: 00026bab;  */

undefined4 FUN_000268e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar3 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0x7274656d,&UNK_00006369,&UNK_0000e600);
  auVar4 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(param_1,param_2,param_3);
  if ((auVar3 == auVar4) ||
     (uVar1 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x7274656d,&UNK_00006369,&UNK_0000e600,param_1,param_2,param_3,0),
     (uVar1 & 1) != 0)) {
    FUN_000103d0(param_2,param_3);
    uVar2 = 0;
  }
  else {
    auVar3 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0x72657375,&UNK_00006449,&UNK_0000e600);
    auVar4 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(param_1,param_2,param_3);
    if ((auVar3 == auVar4) ||
       (uVar1 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x72657375,&UNK_00006449,&UNK_0000e600,param_1,param_2,param_3,0),
       (uVar1 & 1) != 0)) {
      FUN_000103d0(param_2,param_3);
      uVar2 = 1;
    }
    else {
      auVar3 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0x73736573,0x496e6f69,0x64e900);
      auVar4 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(param_1,param_2,param_3);
      if ((auVar3 == auVar4) ||
         (uVar1 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0x73736573,0x496e6f69,0x64e900,param_1,param_2,param_3,0),
         (uVar1 & 1) != 0)) {
        FUN_000103d0(param_2,param_3);
        uVar2 = 2;
      }
      else {
        auVar3 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0xb,"lose",0xd0008000);
        auVar4 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(param_1,param_2,param_3);
        if ((auVar3 == auVar4) ||
           (uVar1 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0xb,"lose",0xd0008000,param_1,param_2,param_3,0), (uVar1 & 1) != 0))
        {
          FUN_000103d0(param_2,param_3);
          uVar2 = 3;
        }
        else {
          auVar3 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0x6e657665,0x735474,&UNK_0000e700);
          auVar4 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(param_1,param_2,param_3);
          if (auVar3 == auVar4) {
            FUN_000103d0(param_2,param_3);
            uVar2 = 4;
          }
          else {
            uVar1 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0x6e657665,0x735474,&UNK_0000e700,param_1,param_2,param_3,0);
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



/* Entry: 00026bac; end: 00026baf;  */

undefined1 FUN_00026bac(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 00026bb0; end: 00026bb3;  */

undefined1 FUN_00026bb0(undefined1 *param_1)

{
  return *param_1;
}


