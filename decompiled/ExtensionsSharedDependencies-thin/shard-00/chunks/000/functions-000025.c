/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00083e70; end: 00083e87;  */

undefined1  [16] FUN_00083e70(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 00083e88; end: 00083f5b;  */

void FUN_00083e88(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_000847a0();
                    /* WARNING: Could not recover jumptable at 0x00779130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_0099b8c0)(param_1,uVar1);
  return;
}



/* Entry: 00083f5c; end: 00083f9f;  */

undefined1  [16] FUN_00083f5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x746e65746e6f63;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x69616e626d756874;
  }
  uVar2 = 0xe700000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe90000000000006c;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 00083fa0; end: 0008407f;  */

void FUN_00083fa0(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  uVar1 = 0;
  if ((param_2 == 0x69616e626d756874 && param_3 == -0x16ffffffffffff94) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x69616e626d756874,0xe90000000000006c,param_2,param_3,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_3);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x746e65746e6f63;
    if ((param_2 == 0x746e65746e6f63) && (param_3 == -0x1900000000000000)) {
      _swift_bridgeObjectRelease(0xe700000000000000);
      uVar2 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x746e65746e6f63,0xe700000000000000,param_2,param_3,0);
      _swift_bridgeObjectRelease(param_3);
      uVar2 = 1;
      if ((uVar1 & 1) == 0) {
        uVar2 = 2;
      }
    }
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 00084080; end: 0008408b;  */

undefined1  [16] FUN_00084080(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 0008408c; end: 000840db;  */

void FUN_0008408c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00084820();
                    /* WARNING: Could not recover jumptable at 0x00779130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_0099b8c0)(param_1,uVar1);
  return;
}



/* Entry: 000840dc; end: 000843d7;  */

void FUN_000840dc(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  code *pcVar11;
  ulong *unaff_x20;
  long unaff_x21;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auStack_b0 [8];
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  ulong uStack_70;
  ulong uStack_68;
  undefined1 uStack_51;
  
  lVar6 = 0xae94e0;
  func_0x000115a8(0xae94e0,&UNK_007d3150);
  lStack_98 = *(long *)(lVar6 + -8);
  lStack_90 = lVar6;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lStack_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_b0 + -extraout_x8;
  lVar6 = 0xae94e8;
  func_0x000115a8(0xae94e8,&UNK_007d3158);
  lStack_a0 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lStack_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)puVar12 - extraout_x8_00;
  lVar7 = 0xae94f0;
  func_0x000115a8(0xae94f0,&UNK_007d3160);
  lVar10 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  FUN_0001393c(param_1,uVar1);
  FUN_000847a0();
  puVar8 = &UNK_009a3928;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar13 - extraout_x8_01,&UNK_009a3928,&UNK_009a3928,param_1,uVar1,uVar3);
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uStack_a8 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  if ((char)unaff_x20[4] == '\x01') {
    uStack_70 = CONCAT71(uStack_70._1_7_,1);
    func_0x000847e0();
    puVar9 = &UNK_009a3a48;
    __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
              (puVar12,&UNK_009a3a48,&uStack_70,lVar7,&UNK_009a3a48,puVar8);
    uStack_51 = 0;
    uStack_70 = uVar2;
    uStack_68 = uVar4;
    func_0x000824a4();
    lVar6 = lStack_90;
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&uStack_70,&uStack_51,lStack_90,PTR___s10Foundation4DataVN_0099c3c0,puVar9);
    if (unaff_x21 == 0) {
      uStack_70 = uStack_a8;
      uStack_51 = 1;
      uStack_68 = uVar5;
      __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
                (&uStack_70,&uStack_51,lVar6,PTR___s10Foundation4DataVN_0099c3c0,puVar9);
      pcVar11 = *(code **)(lStack_98 + 8);
    }
    else {
      pcVar11 = *(code **)(lStack_98 + 8);
    }
    (*pcVar11)(puVar12,lVar6);
    pcVar11 = *(code **)(lVar10 + 8);
  }
  else {
    uStack_70 = (ulong)uStack_70._1_7_ << 8;
    func_0x00084820();
    __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
              (lVar13,&UNK_009a39b8,&uStack_70,lVar7,&UNK_009a39b8,puVar8);
    uStack_70 = uStack_70 & 0xffffffffffffff00;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF(uVar2,uVar4,&uStack_70,lVar6);
    if (unaff_x21 == 0) {
      uStack_70 = CONCAT71(uStack_70._1_7_,1);
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                (uStack_a8,uVar5,&uStack_70,lVar6);
      pcVar11 = *(code **)(lStack_a0 + 8);
    }
    else {
      pcVar11 = *(code **)(lStack_a0 + 8);
    }
    (*pcVar11)(lVar13,lVar6);
    pcVar11 = *(code **)(lVar10 + 8);
  }
  (*pcVar11)(lVar13 - extraout_x8_01,lVar7);
  return;
}



/* Entry: 000843d8; end: 000845b7;  */

void FUN_000843d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  lVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar4 = unaff_x20[3];
  if (*(char *)(unaff_x20 + 4) == '\x01') {
    __ss6HasherV8_combineyySuF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00777a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___s10Foundation4DataV4hash4intoys6HasherVz_tF_0099c390)(param_1,uVar2,lVar4);
    return;
  }
  __ss6HasherV8_combineyySuF(0);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,lVar3);
  }
  if (lVar4 != 0) {
    __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x00778470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_0099af98)(param_1,uVar2,lVar4);
    return;
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 000845b8; end: 000845ff;  */

uint FUN_000845b8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = *(undefined1 *)(param_1 + 4);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = *(undefined1 *)(param_2 + 4);
  FUN_00084698(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 00084600; end: 00084607;  */

void FUN_00084600(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  uVar1 = *unaff_x20;
  lVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar4 = unaff_x20[3];
  if (*(char *)(unaff_x20 + 4) == '\x01') {
    __ss6HasherV8_combineyySuF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(auStack_88,uVar1,lVar3);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(auStack_88,uVar2,lVar4);
  }
  else {
    __ss6HasherV8_combineyySuF(0);
    if (lVar3 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar1,lVar3);
    }
    if (lVar4 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar2,lVar4);
    }
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00084608; end: 0008463f;  */

void FUN_00084608(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_000843d8(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00084640; end: 00084683;  */

void FUN_00084640(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  FUN_00084860(&uStack_48);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[3] = uStack_30;
    param_1[2] = uStack_38;
    *(undefined1 *)(param_1 + 4) = uStack_28;
  }
  return;
}



/* Entry: 00084684; end: 00084697;  */

void FUN_00084684(void)

{
  FUN_000840dc();
  return;
}



/* Entry: 00084698; end: 0008479f;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_00084698(ulong *param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong *unaff_x20;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  uVar8 = *param_1;
  uVar13 = param_1[1];
  uVar6 = param_1[2];
  pbVar15 = (byte *)param_1[3];
  if ((char)param_1[4] != '\x01') {
    if ((char)param_2[4] != '\x01') {
      uVar10 = param_2[1];
      uVar16 = param_2[2];
      pbVar9 = (byte *)param_2[3];
      if (uVar13 == 0) {
        if (uVar10 != 0) {
          return 0;
        }
      }
      else {
        if (uVar10 == 0) {
          return 0;
        }
        if (((uVar8 != *param_2) || (uVar13 != uVar10)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar8 & 1) == 0)) {
          return 0;
        }
      }
      if (pbVar15 == (byte *)0x0) {
        if (pbVar9 == (byte *)0x0) {
          return 1;
        }
      }
      else if ((pbVar9 != (byte *)0x0) &&
              (((uVar6 == uVar16 && (pbVar15 == pbVar9)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar6,pbVar15,uVar16,pbVar9,0), (uVar6 & 1) != 0)))) {
        return 1;
      }
    }
    return 0;
  }
  if ((char)param_2[4] != '\x01') {
    return 0;
  }
  uVar10 = param_2[2];
  uVar16 = param_2[3];
  FUN_00038814(uVar8,uVar13,*param_2,param_2[1]);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar15 >> 0x20);
  uVar11 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar16 >> 0x20);
  uVar14 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar15 >> 0x3e == 3) {
    uVar13 = 0;
    if (((uVar6 != 0) || (pbVar15 != (byte *)0xc000000000000000)) ||
       ((uVar16 >> 0x3e < 3 || ((uVar13 = 0, uVar10 != 0 || (uVar16 != 0xc000000000000000))))))
    goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar11 == 0) {
        uVar13 = (ulong)pbVar15 >> 0x30 & 0xff;
      }
      else {
        iVar12 = (int)(uVar6 >> 0x20);
        if (SBORROW4(iVar12,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar13 = (ulong)(iVar12 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar14 != 2) {
        uVar6 = (ulong)(uVar13 == 0);
        goto LAB_00038af8;
      }
      uVar8 = *(long *)(uVar10 + 0x18) - *(long *)(uVar10 + 0x10);
      if (SBORROW8(*(long *)(uVar10 + 0x18),*(long *)(uVar10 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar13 != uVar8) {
LAB_0003899c:
        uVar6 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar11 == 2) {
        uVar13 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
        if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar13 = 0;
      if (1 < uVar14) goto LAB_00038898;
LAB_000388cc:
      if (uVar14 == 0) {
        uVar8 = uVar16 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar12 = (int)(uVar10 >> 0x20);
      if (SBORROW4(iVar12,(int)uVar10)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar13 != (long)(iVar12 - (int)uVar10)) goto LAB_0003899c;
    }
    if (0 < (long)uVar13) {
      if (uVar11 < 2) {
        if (uVar11 == 0) {
          abStack_70[0] = (byte)uVar6;
          abStack_70[1] = (byte)(uVar6 >> 8);
          abStack_70[2] = (byte)(uVar6 >> 0x10);
          abStack_70[3] = (byte)(uVar6 >> 0x18);
          abStack_70[4] = (byte)(uVar6 >> 0x20);
          abStack_70[5] = (byte)(uVar6 >> 0x28);
          abStack_70[6] = (byte)(uVar6 >> 0x30);
          abStack_70[7] = (byte)(uVar6 >> 0x38);
          abStack_70[8] = (byte)pbVar15;
          abStack_70[9] = (byte)((ulong)pbVar15 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar15 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar15 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar15 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar15 >> 0x28);
          pbVar15 = abStack_70 + ((ulong)pbVar15 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar6 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar13 = ((long)uVar6 >> 0x20) - lVar17;
        if ((long)uVar6 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar6 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar6 = 0;
        }
        else {
          uVar8 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar8)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar8) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar13 <= (long)uVar8) {
              uVar8 = uVar13;
            }
            pbVar9 = (byte *)(uVar8 + uVar6);
            goto LAB_00038aec;
          }
        }
        pbVar9 = (byte *)0x0;
      }
      else {
        if (uVar11 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar15 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar6 + 0x10);
        lVar1 = *(long *)(uVar6 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar13 = uVar6;
        if (uVar6 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar13)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar13) + uVar6;
        }
        uVar8 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar6 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if ((long)uVar8 <= (long)uVar13) {
            uVar13 = uVar8;
          }
          pbVar9 = (byte *)(uVar13 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar15 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar9,uVar10,uVar16);
      uVar6 = (ulong)abStack_70[0];
      pbVar15 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar15 - uVar6;
  if (SBORROW8((long)pbVar15,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar8 = uVar16 & 0xffffffffffffff8;
  uVar6 = uVar8 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar13 = uVar6;
  _swift_arrayDestroy(uVar6,lVar17,uVar7);
  lVar1 = uVar10 - lVar17;
  if (SBORROW8(uVar10,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar8 + 0x10);
      lVar17 = uVar13 - (long)pbVar15;
    }
    else {
      uVar13 = uVar8;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar13 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar13 - (long)pbVar15;
    }
    if (SBORROW8(uVar13,(long)pbVar15)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + uVar10 * 8;
    uVar13 = uVar8 + 0x20 + (long)pbVar15 * 8;
    if (uVar6 != uVar13 || uVar13 + lVar17 * 8 <= uVar6) {
      _memmove(uVar6,uVar13,lVar17 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar13 = uVar8;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar13 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar13,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar13 + lVar1;
  }
  if (0 < (long)uVar10) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar13;
}



/* Entry: 000847a0; end: 0008485f;  */

void FUN_000847a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae94f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d3530;
  _swift_getWitnessTable(&UNK_007d3530,&UNK_009a3928);
  puRam0000000000ae94f8 = puVar1;
  return;
}



/* Entry: 00084860; end: 00084d47;  */

/* WARNING: Removing unreachable block (ram,0x00084c80) */
/* WARNING: Removing unreachable block (ram,0x00084bb8) */
/* WARNING: Removing unreachable block (ram,0x00084b54) */
/* WARNING: Removing unreachable block (ram,0x00084b5c) */
/* WARNING: Removing unreachable block (ram,0x00084c28) */
/* WARNING: Removing unreachable block (ram,0x00084bc0) */

void FUN_00084860(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long unaff_x21;
  long lVar13;
  long lVar14;
  long lVar15;
  char *pcStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long lStack_78;
  char cStack_70;
  undefined7 uStack_6f;
  long lStack_68;
  undefined1 uStack_51;
  
  lVar5 = 0xae9560;
  puStack_98 = param_1;
  func_0x000115a8(0xae9560,&UNK_007d3580);
  lStack_a8 = *(long *)(lVar5 + -8);
  lStack_b0 = lVar5;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0xae9568;
  lStack_a0 = (long)&pcStack_d0 - extraout_x8;
  func_0x000115a8(0xae9568,&UNK_007d3588);
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = ((long)&pcStack_d0 - extraout_x8) - extraout_x8_00;
  lVar6 = 0xae9570;
  func_0x000115a8(0xae9570,&UNK_007d3590);
  lVar15 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar14 - extraout_x8_01;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar8 = param_2;
  FUN_0001393c(param_2,uVar1);
  FUN_000847a0();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar13,&UNK_009a3928,&UNK_009a3928,lVar8,uVar1,uVar2);
  puVar11 = puStack_98;
  lVar8 = lStack_a0;
  if (unaff_x21 == 0) {
    lVar7 = lVar6;
    lStack_c0 = lVar5;
    lStack_b8 = lVar12;
    __ss22KeyedDecodingContainerV7allKeysSayxGvg();
    if ((*(long *)(lVar7 + 0x10) != 0) &&
       (cStack_70 = *(char *)(lVar7 + 0x20), *(long *)(lVar7 + 0x10) == 1 && cStack_70 != '\x02')) {
      bVar4 = cStack_70 != '\x01';
      if (bVar4) {
        lVar5 = lVar7;
        func_0x00084820();
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (lVar14,&UNK_009a39b8,&cStack_70,lVar6,&UNK_009a39b8,lVar5);
        lVar5 = lStack_c0;
        cStack_70 = '\0';
        pcVar9 = &cStack_70;
        lVar8 = lStack_c0;
        __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
        cStack_70 = '\x01';
        pcVar10 = &cStack_70;
        lVar12 = lVar5;
        pcStack_d0 = pcVar9;
        lStack_c8 = lVar8;
        __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
        (**(code **)(lStack_b8 + 8))(lVar14,lVar5);
        (**(code **)(lVar15 + 8))(lVar13,lVar6);
        _swift_unknownObjectRelease(lVar7);
      }
      else {
        lVar5 = lVar7;
        func_0x000847e0();
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (lVar8,&UNK_009a3a48,&cStack_70,lVar6,&UNK_009a3a48,lVar5);
        uStack_80 = 0;
        lVar12 = lVar13;
        FUN_000833ac();
        lVar5 = lStack_b0;
        __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
                  (&cStack_70,PTR___s10Foundation4DataVN_0099c3c0,&uStack_80,lStack_b0,
                   PTR___s10Foundation4DataVN_0099c3c0,lVar12);
        pcStack_d0 = (char *)CONCAT71(uStack_6f,cStack_70);
        lStack_c8 = lStack_68;
        uStack_51 = 1;
        __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
                  (&uStack_80,PTR___s10Foundation4DataVN_0099c3c0,&uStack_51,lVar5,
                   PTR___s10Foundation4DataVN_0099c3c0,lVar12);
        (**(code **)(lStack_a8 + 8))(lVar8,lVar5);
        (**(code **)(lVar15 + 8))(lVar13,lVar6);
        _swift_unknownObjectRelease(lVar7);
        pcVar10 = (char *)CONCAT71(uStack_7f,uStack_80);
        lVar12 = lStack_78;
      }
      FUN_00011670(param_2);
      *puVar11 = pcStack_d0;
      puVar11[1] = lStack_c8;
      puVar11[2] = pcVar10;
      puVar11[3] = lVar12;
      *(bool *)(puVar11 + 4) = !bVar4;
      return;
    }
    lVar8 = 0;
    __ss13DecodingErrorOMa();
    puVar11 = (undefined8 *)PTR___ss13DecodingErrorOs0B0sWP_0099b4a8;
    _swift_allocError();
    lVar5 = 0xae9408;
    func_0x000115a8(0xae9408,&UNK_007d2e88);
    iVar3 = *(int *)(lVar5 + 0x30);
    *puVar11 = &UNK_009a3898;
    __ss22KeyedDecodingContainerV10codingPathSays9CodingKey_pGvg(lVar6);
    __ss13DecodingErrorO7ContextV10codingPath16debugDescription010underlyingB0ADSays9CodingKey_pG_SSs0B0_pSgtcfC
              ((long)puVar11 + (long)iVar3);
    (**(code **)(*(long *)(lVar8 + -8) + 0x68))
              (puVar11,*(undefined4 *)
                        PTR___ss13DecodingErrorO12typeMismatchyABypXp_AB7ContextVtcABmFWC_0099b488,
               lVar8);
    _swift_willThrow();
    (**(code **)(lVar15 + 8))(lVar13,lVar6);
    _swift_unknownObjectRelease(lVar7);
  }
  FUN_00011670(param_2);
  return;
}



/* Entry: 00084d48; end: 00084d4b;  */

void FUN_00084d48(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d3168;
  _swift_getWitnessTable(&UNK_007d3168,&UNK_009a3898);
  puRam0000000000ae9510 = puVar1;
  return;
}



/* Entry: 00084d4c; end: 00084d8b;  */

void FUN_00084d4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d3168;
  _swift_getWitnessTable(&UNK_007d3168,&UNK_009a3898);
  puRam0000000000ae9510 = puVar1;
  return;
}



/* Entry: 00084d8c; end: 00084db7;  */

long FUN_00084d8c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 00084db8; end: 00084dcb;  */

void FUN_00084db8(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  if (*(char *)(param_1 + 4) != '\x01') {
    _swift_bridgeObjectRelease(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar2);
    return;
  }
  FUN_00023358(*param_1);
  uVar3 = (uint)(uVar2 >> 0x3e);
  if (uVar3 != 1) {
    if (uVar3 != 2) {
      return;
    }
    _swift_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 00084dcc; end: 00084e9b;  */

undefined8 * FUN_00084dcc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  func_0x0007ff90(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Entry: 00084e9c; end: 00084ee3;  */

undefined8 * FUN_00084e9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  FUN_0003661c(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Entry: 00084ee4; end: 0008512f;  */

int FUN_00084ee4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 8) ^ 0xff;
  if (*(byte *)(param_1 + 8) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 00085130; end: 0008516f;  */

void FUN_00085130(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9518 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d32f8;
  _swift_getWitnessTable(&UNK_007d32f8,&UNK_009a3a48);
  puRam0000000000ae9518 = puVar1;
  return;
}



/* Entry: 00085170; end: 00085173;  */

void FUN_00085170(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9520 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d33b0;
  _swift_getWitnessTable(&UNK_007d33b0,&UNK_009a39b8);
  puRam0000000000ae9520 = puVar1;
  return;
}



/* Entry: 00085174; end: 000851b3;  */

void FUN_00085174(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9520 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d33b0;
  _swift_getWitnessTable(&UNK_007d33b0,&UNK_009a39b8);
  puRam0000000000ae9520 = puVar1;
  return;
}



/* Entry: 000851b4; end: 000851b7;  */

void FUN_000851b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9528 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d3468;
  _swift_getWitnessTable(&UNK_007d3468,&UNK_009a3928);
  puRam0000000000ae9528 = puVar1;
  return;
}



/* Entry: 000851b8; end: 000851f7;  */

void FUN_000851b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9528 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d3468;
  _swift_getWitnessTable(&UNK_007d3468,&UNK_009a3928);
  puRam0000000000ae9528 = puVar1;
  return;
}



/* Entry: 000851f8; end: 000851fb;  */

void FUN_000851f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9530 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d3348;
  _swift_getWitnessTable(&UNK_007d3348,&UNK_009a39b8);
  puRam0000000000ae9530 = puVar1;
  return;
}



/* Entry: 000851fc; end: 0008523b;  */

void FUN_000851fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9530 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d3348;
  _swift_getWitnessTable(&UNK_007d3348,&UNK_009a39b8);
  puRam0000000000ae9530 = puVar1;
  return;
}



/* Entry: 0008523c; end: 0008523f;  */

void FUN_0008523c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9538 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d3320;
  _swift_getWitnessTable(&UNK_007d3320,&UNK_009a39b8);
  puRam0000000000ae9538 = puVar1;
  return;
}



/* Entry: 00085240; end: 0008527f;  */

void FUN_00085240(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9538 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d3320;
  _swift_getWitnessTable(&UNK_007d3320,&UNK_009a39b8);
  puRam0000000000ae9538 = puVar1;
  return;
}



/* Entry: 00085280; end: 00085283;  */

void FUN_00085280(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9540 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d3290;
  _swift_getWitnessTable(&UNK_007d3290,&UNK_009a3a48);
  puRam0000000000ae9540 = puVar1;
  return;
}



/* Entry: 00085284; end: 000852c3;  */

void FUN_00085284(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9540 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d3290;
  _swift_getWitnessTable(&UNK_007d3290,&UNK_009a3a48);
  puRam0000000000ae9540 = puVar1;
  return;
}



/* Entry: 000852c4; end: 000852c7;  */

void FUN_000852c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9548 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d3268;
  _swift_getWitnessTable(&UNK_007d3268,&UNK_009a3a48);
  puRam0000000000ae9548 = puVar1;
  return;
}



/* Entry: 000852c8; end: 00085307;  */

void FUN_000852c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9548 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d3268;
  _swift_getWitnessTable(&UNK_007d3268,&UNK_009a3a48);
  puRam0000000000ae9548 = puVar1;
  return;
}



/* Entry: 00085308; end: 0008530b;  */

void FUN_00085308(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d3400;
  _swift_getWitnessTable(&UNK_007d3400,&UNK_009a3928);
  puRam0000000000ae9550 = puVar1;
  return;
}



/* Entry: 0008530c; end: 0008534b;  */

void FUN_0008530c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d3400;
  _swift_getWitnessTable(&UNK_007d3400,&UNK_009a3928);
  puRam0000000000ae9550 = puVar1;
  return;
}



/* Entry: 0008534c; end: 0008534f;  */

void FUN_0008534c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9558 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d33d8;
  _swift_getWitnessTable(&UNK_007d33d8,&UNK_009a3928);
  puRam0000000000ae9558 = puVar1;
  return;
}



/* Entry: 00085350; end: 0008538f;  */

void FUN_00085350(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9558 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d33d8;
  _swift_getWitnessTable(&UNK_007d33d8,&UNK_009a3928);
  puRam0000000000ae9558 = puVar1;
  return;
}



/* Entry: 00085390; end: 0008540b;  */

undefined1 FUN_00085390(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 0008540c; end: 0008542b; -[SCAppStartExperimentReaderServices appStartExperimentReader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008540c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_00ae9578));
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0008542c; end: 00085477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008542c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_00ae9578) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00085478; end: 000854cf; -[SCAppStartExperimentReaderServices initWithAppStartExperimentReader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00085478(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_00ae9578) = param_3;
  puVar1 = PTR_s_init_00abbf70;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 000854d0; end: 0008552f; -[SCAppStartExperimentReaderServices init] */

void FUN_000854d0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCAppStartExperimentReaderServices.SCAppStartExperimentReaderServices",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x854fc);
  (*pcVar1)();
}



/* Entry: 00085530; end: 0008553f; -[SCAppStartExperimentReaderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00085530(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(*(undefined8 *)(param_1 + _DAT_00ae9578));
  return;
}



/* Entry: 00085540; end: 0008555f;  */

void FUN_00085540(void)

{
  _objc_opt_self(&PTR_PTR_00ac9de0);
  return;
}



/* Entry: 00085560; end: 0008556f; -[_TtC26SCConfigRepositoryServices26SCConfigRepositoryServices configRepository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00085560(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae95a8));
  return;
}



/* Entry: 00085570; end: 000855bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00085570(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_00ae95a8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 000855bc; end: 00085613; -[_TtC26SCConfigRepositoryServices26SCConfigRepositoryServices initWithConfigRepository:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000855bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_00ae95a8) = param_3;
  puVar1 = PTR_s_init_00abbf70;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 00085614; end: 00085673; -[_TtC26SCConfigRepositoryServices26SCConfigRepositoryServices init] */

void FUN_00085614(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCConfigRepositoryServices.SCConfigRepositoryServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x85640);
  (*pcVar1)();
}



/* Entry: 00085674; end: 00085683; -[_TtC26SCConfigRepositoryServices26SCConfigRepositoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00085674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00ae95a8));
  return;
}



/* Entry: 00085684; end: 000856a3;  */

void FUN_00085684(void)

{
  _objc_opt_self(&PTR_PTR_00ac9ea0);
  return;
}



/* Entry: 000856a4; end: 000856af; -[SCCircumstanceEngineConfig configId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000856a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_00ae95d8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_00ae95d8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 000856b0; end: 000856bb; -[SCCircumstanceEngineConfig ruleId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000856b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_00ae95e0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_00ae95e0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 000856bc; end: 00085713;  */

void FUN_000856bc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00085714; end: 00085787; -[SCCircumstanceEngineConfig configResult] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00085714(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_00ae95e8))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_00ae95e8);
    func_0x00023304(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    FUN_00023344(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00085788; end: 00085797; -[SCCircumstanceEngineConfig lastUpdateTimestampInSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00085788(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ae95f0);
}



/* Entry: 00085798; end: 000857a7; -[SCCircumstanceEngineConfig ttlInSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00085798(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ae95f8);
}



/* Entry: 000857a8; end: 000857b7; -[SCCircumstanceEngineConfig configNamespace] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000857a8(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_00ae9600);
}



/* Entry: 000857b8; end: 0008588b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000857b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined4 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae95d8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae95e0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae95e8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_00ae95f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_00ae95f8) = param_2;
  *(undefined4 *)(unaff_x20 + _DAT_00ae9600) = param_9;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0008588c; end: 000859c7; -[SCCircumstanceEngineConfig initWithConfigId:ruleId:configResult:lastUpdateTimestampInSeconds:ttlInSeconds:configNamespace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008588c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long param_6,long param_7,undefined4 param_8)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_80;
  long lStack_78;
  
  lVar4 = param_3;
  _swift_getObjectType();
  if (param_5 == 0) {
    lVar3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar3 = param_4;
  }
  if (param_6 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_4;
  }
  if (param_7 == 0) {
    param_4 = -0x1000000000000000;
  }
  else {
    lVar5 = param_7;
    _objc_retain(param_7);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar5);
  }
  plVar1 = (long *)(param_3 + _DAT_00ae95d8);
  *plVar1 = param_5;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_3 + _DAT_00ae95e0);
  *plVar1 = param_6;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_3 + _DAT_00ae95e8);
  *plVar1 = param_7;
  plVar1[1] = param_4;
  *(undefined8 *)(param_3 + _DAT_00ae95f0) = param_1;
  *(undefined8 *)(param_3 + _DAT_00ae95f8) = param_2;
  *(undefined4 *)(param_3 + _DAT_00ae9600) = param_8;
  lStack_80 = param_3;
  lStack_78 = lVar4;
  _objc_msgSendSuper2(&lStack_80,PTR_s_init_00abbf70);
  return;
}



/* Entry: 000859c8; end: 000859fb; -[SCCircumstanceEngineConfig hash] */

undefined8 FUN_000859c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_000859fc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 000859fc; end: 00085b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000859fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  double dVar3;
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  if (((undefined8 *)(unaff_x20 + _DAT_00ae95d8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae95d8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x007843a0();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_00ae95e0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae95e0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x007843a0();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_00ae95e8))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae95e8);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
    uVar2 = uVar1;
    func_0x007843a0();
    _objc_release(uVar1);
  }
  else {
    uVar2 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar2);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_00ae95f0) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_00ae95f0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_00ae95f8) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_00ae95f8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_00ae9600));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 00085b6c; end: 00085e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00085b6c(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  long lStack_a8;
  undefined1 auStack_a0 [24];
  long lStack_88;
  
  lVar11 = unaff_x20;
  _swift_getObjectType();
  func_0x00059828(param_1,auStack_a0);
  if (lStack_88 == 0) {
    FUN_00027748(auStack_a0);
    return 0;
  }
  plVar8 = &lStack_a8;
  _swift_dynamicCast(plVar8,auStack_a0,PTR___sypN_0099b8d8 + 8,lVar11,6);
  if (((ulong)plVar8 & 1) == 0) {
    return 0;
  }
  lVar11 = ((long *)(unaff_x20 + _DAT_00ae95d8))[1];
  lVar12 = ((long *)(lStack_a8 + _DAT_00ae95d8))[1];
  uVar13 = (uint)(lVar11 == 0 && lVar12 == 0);
  if (lVar11 != 0 && lVar12 != 0) {
    lVar9 = *(long *)(unaff_x20 + _DAT_00ae95d8);
    if (lVar9 == *(long *)(lStack_a8 + _DAT_00ae95d8) && lVar11 == lVar12) {
      uVar13 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar13 = (uint)lVar9;
    }
  }
  lVar11 = ((long *)(unaff_x20 + _DAT_00ae95e0))[1];
  lVar12 = ((long *)(lStack_a8 + _DAT_00ae95e0))[1];
  uVar14 = (uint)(lVar11 == 0 && lVar12 == 0);
  if (lVar11 != 0 && lVar12 != 0) {
    lVar9 = *(long *)(unaff_x20 + _DAT_00ae95e0);
    if (lVar9 == *(long *)(lStack_a8 + _DAT_00ae95e0) && lVar11 == lVar12) {
      uVar14 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar14 = (uint)lVar9;
    }
  }
  uVar2 = *(undefined8 *)(lStack_a8 + _DAT_00ae95e8);
  uVar4 = ((undefined8 *)(lStack_a8 + _DAT_00ae95e8))[1];
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_00ae95e8);
  uVar5 = ((undefined8 *)(unaff_x20 + _DAT_00ae95e8))[1];
  if (uVar5 >> 0x3c < 0xf) {
    if (uVar4 >> 0x3c < 0xf) {
      FUN_000308a8(uVar2,uVar4);
      FUN_000308a8(uVar2,uVar4);
      FUN_000308a8(uVar3,uVar5);
      uVar10 = uVar3;
      FUN_00038814(uVar3,uVar5,uVar2,uVar4);
      uVar15 = (uint)uVar10;
      FUN_00023344(uVar2,uVar4);
      FUN_00023344(uVar2,uVar4);
      FUN_00023344(uVar3,uVar5);
      goto LAB_00085da0;
    }
  }
  else if (0xe < uVar4 >> 0x3c) {
    FUN_000308a8(uVar2,uVar4);
    FUN_000308a8(uVar3,uVar5);
    FUN_00023344(uVar3,uVar5);
    uVar15 = 1;
    goto LAB_00085da0;
  }
  FUN_000308a8(uVar2,uVar4);
  FUN_000308a8(uVar3,uVar5);
  FUN_00023344(uVar3,uVar5);
  FUN_00023344(uVar2,uVar4);
  uVar15 = 0;
LAB_00085da0:
  dVar16 = *(double *)(unaff_x20 + _DAT_00ae95f0);
  dVar17 = *(double *)(lStack_a8 + _DAT_00ae95f0);
  dVar18 = *(double *)(unaff_x20 + _DAT_00ae95f8);
  dVar19 = *(double *)(lStack_a8 + _DAT_00ae95f8);
  iVar6 = *(int *)(unaff_x20 + _DAT_00ae9600);
  iVar7 = *(int *)(lStack_a8 + _DAT_00ae9600);
  _objc_release(lStack_a8);
  uVar1 = 0;
  if (dVar18 == dVar19) {
    uVar1 = uVar13 & uVar14 & uVar15 & (uint)(dVar16 == dVar17);
  }
  if (iVar6 == iVar7) {
    return uVar1;
  }
  return 0;
}



/* Entry: 00085e24; end: 00085ea3; -[SCCircumstanceEngineConfig isEqual:] */

uint FUN_00085e24(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_00085b6c(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 00085ea4; end: 00085ea7; -[SCCircumstanceEngineConfig copyWithZone:] */

void FUN_00085ea4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00085ea8; end: 00085f23; -[SCCircumstanceEngineConfig init] */

void FUN_00085ea8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCConfigRepositoryServices/SCCircumstanceEngineConfig.swift",0x3b,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x85ef0);
  (*pcVar1)();
}



/* Entry: 00085f24; end: 00085f77; -[SCCircumstanceEngineConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00085f24(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00ae95d8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00ae95e0 + 8));
  uVar1 = ((undefined8 *)(param_1 + _DAT_00ae95e8))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    _swift_release(*(undefined8 *)(param_1 + _DAT_00ae95e8));
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 00085f78; end: 00085f97;  */

void FUN_00085f78(void)

{
  _objc_opt_self(&PTR_PTR_00ac9f60);
  return;
}



/* Entry: 00085f98; end: 00085fa3; -[SCCircumstanceEngineEtag etagId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00085f98(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_00ae9630))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_00ae9630);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00085fa4; end: 00085faf; -[SCCircumstanceEngineEtag etag] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00085fa4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_00ae9638))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_00ae9638);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00085fb0; end: 00086007;  */

void FUN_00085fb0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00086008; end: 00086017; -[SCCircumstanceEngineEtag lastUpdateTimestampInSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00086008(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ae9640);
}



/* Entry: 00086018; end: 000860ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00086018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae9630);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae9638);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_00ae9640) = param_1;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_00abbf70);
  return;
}



/* Entry: 000860ac; end: 0008616f; -[SCCircumstanceEngineEtag initWithEtagId:etag:lastUpdateTimestampInSeconds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000860ac(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_2;
  _swift_getObjectType();
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_3;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_2 + _DAT_00ae9630);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_2 + _DAT_00ae9638);
  *plVar1 = param_5;
  plVar1[1] = param_3;
  *(undefined8 *)(param_2 + _DAT_00ae9640) = param_1;
  lStack_60 = param_2;
  lStack_58 = lVar3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00086170; end: 000861a3; -[SCCircumstanceEngineEtag hash] */

undefined8 FUN_00086170(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_000861a4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 000861a4; end: 0008628b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000861a4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_00ae9630))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae9630);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x007843a0();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_00ae9638))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae9638);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x007843a0();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_00ae9640) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_00ae9640);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 0008628c; end: 000863f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0008628c(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  func_0x00059828(param_1,auStack_60);
  if (lStack_48 == 0) {
    FUN_00027748(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_0099b8d8 + 8,lVar4,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar3 = ((ulong *)(unaff_x20 + _DAT_00ae9630))[1];
      uVar5 = ((ulong *)(lStack_68 + _DAT_00ae9630))[1];
      uVar7 = (ulong)(uVar3 == 0 && uVar5 == 0);
      if (uVar3 != 0 && uVar5 != 0) {
        uVar7 = *(ulong *)(unaff_x20 + _DAT_00ae9630);
        if (uVar7 == *(ulong *)(lStack_68 + _DAT_00ae9630) && uVar3 == uVar5) {
          uVar7 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
        }
      }
      lVar4 = ((long *)(unaff_x20 + _DAT_00ae9638))[1];
      lVar6 = ((long *)(lStack_68 + _DAT_00ae9638))[1];
      uVar8 = (uint)(lVar4 == 0 && lVar6 == 0);
      if (lVar4 != 0 && lVar6 != 0) {
        lVar2 = *(long *)(unaff_x20 + _DAT_00ae9638);
        if (lVar2 == *(long *)(lStack_68 + _DAT_00ae9638) && lVar4 == lVar6) {
          uVar8 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar8 = (uint)lVar2;
        }
      }
      dVar9 = *(double *)(unaff_x20 + _DAT_00ae9640);
      dVar10 = *(double *)(lStack_68 + _DAT_00ae9640);
      _objc_release(lStack_68);
      if ((uVar7 & 1) != 0) {
        return uVar8 & dVar9 == dVar10;
      }
    }
  }
  return 0;
}



/* Entry: 000863f4; end: 00086473; -[SCCircumstanceEngineEtag isEqual:] */

uint FUN_000863f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_0008628c(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 00086474; end: 00086477; -[SCCircumstanceEngineEtag copyWithZone:] */

void FUN_00086474(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00086478; end: 000864f3; -[SCCircumstanceEngineEtag init] */

void FUN_00086478(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCConfigRepositoryServices/SCCircumstanceEngineEtag.swift",0x39,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x864c0);
  (*pcVar1)();
}



/* Entry: 000864f4; end: 00086533; -[SCCircumstanceEngineEtag .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000864f4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00ae9630 + 8));
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00ae9638 + 8));
  return;
}



/* Entry: 00086534; end: 00086553;  */

void FUN_00086534(void)

{
  _objc_opt_self(&PTR_PTR_00aca048);
  return;
}



/* Entry: 00086554; end: 00086567;  */

bool FUN_00086554(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 00086568; end: 0008663f;  */

void FUN_00086568(void)

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



/* Entry: 00086640; end: 0008665f;  */

void FUN_00086640(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 00086660; end: 0008669f;  */

void FUN_00086660(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9670 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d3630;
  _swift_getWitnessTable(&UNK_007d3630,&UNK_009a3d18);
  puRam0000000000ae9670 = puVar1;
  return;
}



/* Entry: 000866a0; end: 000866c3;  */

undefined1  [16] FUN_000866a0(void)

{
  return ZEXT816(0x9a3d18);
}



/* Entry: 000866c4; end: 0008679b;  */

void FUN_000866c4(void)

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



/* Entry: 0008679c; end: 000867bb;  */

void FUN_0008679c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 000867bc; end: 000867fb;  */

void FUN_000867bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9678 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d3710;
  _swift_getWitnessTable(&UNK_007d3710,&UNK_009a3d90);
  puRam0000000000ae9678 = puVar1;
  return;
}



/* Entry: 000867fc; end: 00086823;  */

undefined1  [16] FUN_000867fc(void)

{
  return ZEXT816(0x9a3d90);
}



/* Entry: 00086824; end: 00086863;  */

void FUN_00086824(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9680 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d37d0;
  _swift_getWitnessTable(&UNK_007d37d0,&UNK_009a3e08);
  puRam0000000000ae9680 = puVar1;
  return;
}



/* Entry: 00086864; end: 0008690f;  */

void FUN_00086864(void)

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



/* Entry: 00086910; end: 0008695f;  */

void FUN_00086910(ulong *param_1,ulong *param_2)

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



/* Entry: 00086960; end: 00086987;  */

void FUN_00086960(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  __ss6HasherV8_combineyySuF(param_1,*unaff_x20);
  return;
}



/* Entry: 00086988; end: 0008698b;  */

void FUN_00086988(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0008698c; end: 000869b7;  */

void FUN_0008698c(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_00086a74();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 000869b8; end: 000869c3;  */

void FUN_000869b8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}


