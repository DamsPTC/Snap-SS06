/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00143ed0; end: 00143f6f;  */

void FUN_00143ed0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0698 != -1) {
    _swift_once(0xaf0698,FUN_001439e8);
  }
  uVar5 = uRam0000000000b64ba8;
  uVar4 = uRam0000000000b64ba0;
  uVar3 = uRam0000000000b64b98;
  uVar2 = uRam0000000000b64b90;
  uVar1 = uRam0000000000b64b88;
  *param_1 = uRam0000000000b64b80;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00143f70; end: 00143fab;  */

void FUN_00143f70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf06f0;
  uStack_18 = param_1;
  func_0x000115a8(0xaf06f0,&UNK_007dadd8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00143fac; end: 00144177;  */

/* WARNING: Removing unreachable block (ram,0x00144010) */

void FUN_00143fac(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  __ss6HasherV5_seedABSi_tcfC(&uStack_b0,0);
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_c0 = uStack_70;
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  FUN_00143be0(&uStack_100);
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_70 = uStack_c0;
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  uStack_a8 = uStack_f8;
  uStack_b0 = uStack_100;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00144178; end: 001441bb;  */

uint FUN_00144178(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_0014430c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 001441bc; end: 0014420b;  */

undefined8 FUN_001441bc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0xaf0660;
  func_0x000115a8(0xaf0660,&UNK_007daae0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 0014420c; end: 0014430b;  */

void FUN_0014420c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af0670 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_007dabc0;
  _swift_getWitnessTable(&DAT_007dabc0,&UNK_009af9e0);
  puRam0000000000af0670 = puVar1;
  return;
}



/* Entry: 0014430c; end: 001444c3;  */

ulong FUN_0014430c(ulong *param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong *unaff_x20;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  uVar8 = *param_1;
  if (((uVar8 != *param_2 || param_1[1] != param_2[1]) &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar8 & 1) == 0)) ||
     ((uVar8 = param_1[2], uVar8 != param_2[2] || param_1[3] != param_2[3] &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar8 & 1) == 0)))) {
    return 0;
  }
  uVar8 = param_1[4];
  pbVar9 = (byte *)param_1[5];
  uVar11 = param_2[4];
  uVar7 = param_2[5];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar9 >> 0x20);
  uVar12 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar7 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  iVar5 = (int)uVar8;
  if ((ulong)pbVar9 >> 0x3e == 3) {
    uVar14 = 0;
    if ((((uVar8 != 0) || (pbVar9 != (byte *)0xc000000000000000)) || (uVar7 >> 0x3e < 3)) ||
       ((uVar14 = 0, uVar11 != 0 || (uVar7 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar12 == 0) {
        uVar14 = (ulong)pbVar9 >> 0x30 & 0xff;
      }
      else {
        iVar13 = (int)(uVar8 >> 0x20);
        if (SBORROW4(iVar13,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar14 = (ulong)(iVar13 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar15 != 2) {
        uVar8 = (ulong)(uVar14 == 0);
        goto LAB_00038af8;
      }
      uVar16 = *(long *)(uVar11 + 0x18) - *(long *)(uVar11 + 0x10);
      if (SBORROW8(*(long *)(uVar11 + 0x18),*(long *)(uVar11 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar14 != uVar16) {
LAB_0003899c:
        uVar8 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar12 == 2) {
        uVar14 = *(long *)(uVar8 + 0x18) - *(long *)(uVar8 + 0x10);
        if (SBORROW8(*(long *)(uVar8 + 0x18),*(long *)(uVar8 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar14 = 0;
      if (1 < uVar15) goto LAB_00038898;
LAB_000388cc:
      if (uVar15 == 0) {
        uVar16 = uVar7 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar13 = (int)(uVar11 >> 0x20);
      if (SBORROW4(iVar13,(int)uVar11)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar14 != (long)(iVar13 - (int)uVar11)) goto LAB_0003899c;
    }
    if (0 < (long)uVar14) {
      if (uVar12 < 2) {
        if (uVar12 == 0) {
          abStack_70[0] = (byte)uVar8;
          abStack_70[1] = (byte)(uVar8 >> 8);
          abStack_70[2] = (byte)(uVar8 >> 0x10);
          abStack_70[3] = (byte)(uVar8 >> 0x18);
          abStack_70[4] = (byte)(uVar8 >> 0x20);
          abStack_70[5] = (byte)(uVar8 >> 0x28);
          abStack_70[6] = (byte)(uVar8 >> 0x30);
          abStack_70[7] = (byte)(uVar8 >> 0x38);
          abStack_70[8] = (byte)pbVar9;
          abStack_70[9] = (byte)((ulong)pbVar9 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar9 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar9 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar9 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar9 >> 0x28);
          pbVar9 = abStack_70 + ((ulong)pbVar9 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar8 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar14 = ((long)uVar8 >> 0x20) - lVar17;
        if ((long)uVar8 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar8 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar8 = 0;
        }
        else {
          uVar16 = uVar8;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar16)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar8 = (lVar17 - uVar16) + uVar8;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar8 != 0) {
            if ((long)uVar14 <= (long)uVar16) {
              uVar16 = uVar14;
            }
            pbVar10 = (byte *)(uVar16 + uVar8);
            goto LAB_00038aec;
          }
        }
        pbVar10 = (byte *)0x0;
      }
      else {
        if (uVar12 != 2) {
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
          pbVar9 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar8 + 0x10);
        lVar1 = *(long *)(uVar8 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar14 = uVar8;
        if (uVar8 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar8 = (lVar17 - uVar14) + uVar8;
        }
        uVar16 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar8 == 0) {
          pbVar10 = (byte *)0x0;
        }
        else {
          if ((long)uVar16 <= (long)uVar14) {
            uVar14 = uVar16;
          }
          pbVar10 = (byte *)(uVar14 + uVar8);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar9 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar8,pbVar10,uVar11,uVar7);
      uVar8 = (ulong)abStack_70[0];
      pbVar9 = pbVar10;
      goto LAB_00038af8;
    }
  }
  uVar8 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar8;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar9 - uVar8;
  if (SBORROW8((long)pbVar9,uVar8)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar14 = uVar16 & 0xffffffffffffff8;
  uVar8 = uVar14 + 0x20 + uVar8 * 8;
  uVar6 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar7 = uVar8;
  _swift_arrayDestroy(uVar8,lVar17,uVar6);
  lVar1 = uVar11 - lVar17;
  if (SBORROW8(uVar11,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar14 + 0x10);
      lVar17 = uVar7 - (long)pbVar9;
    }
    else {
      uVar7 = uVar14;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar7 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar7 - (long)pbVar9;
    }
    if (SBORROW8(uVar7,(long)pbVar9)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar8 = uVar8 + uVar11 * 8;
    uVar7 = uVar14 + 0x20 + (long)pbVar9 * 8;
    if (uVar8 != uVar7 || uVar7 + lVar17 * 8 <= uVar8) {
      _memmove(uVar8,uVar7,lVar17 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar14 + 0x10);
    }
    else {
      uVar7 = uVar14;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar7 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar7,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar14 + 0x10) = uVar7 + lVar1;
  }
  if (0 < (long)uVar11) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar7;
}



/* Entry: 001444c4; end: 0014476b;  */

uint FUN_001444c4(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar2 & 1) != 0)) {
    uVar2 = param_1[2];
    FUN_001481b8(uVar2,param_2[2]);
    if ((uVar2 & 1) != 0) {
      uVar2 = param_1[3];
      FUN_001455e0(uVar2,param_2[3]);
      if ((uVar2 & 1) != 0) {
        uVar2 = param_1[4];
        if (((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) != 0)) {
          uVar4 = param_1[0xe];
          uVar2 = param_1[0xd];
          uVar9 = param_1[0x10];
          uVar7 = param_1[0xf];
          uVar6 = param_2[0xe];
          uVar5 = param_2[0xd];
          uVar10 = param_2[0x10];
          uVar8 = param_2[0xf];
          uStack_a0 = uVar5;
          uStack_98 = uVar6;
          uStack_90 = uVar8;
          uStack_88 = uVar10;
          uStack_80 = uVar2;
          uStack_78 = uVar4;
          uStack_70 = uVar7;
          uStack_68 = uVar9;
          if (uVar4 == 0) {
            if (uVar6 != 0) goto LAB_00144608;
            FUN_001441bc(&uStack_80,auStack_c0);
            FUN_001441bc(&uStack_a0,auStack_c0);
LAB_00144664:
            FUN_00141808(uVar2,uVar4,uVar7,uVar9);
            uVar2 = param_1[6];
            FUN_001483f8(uVar2,param_2[6]);
            if ((uVar2 & 1) != 0) {
              uVar2 = param_1[7];
              uVar4 = param_2[7];
              if ((char)param_2[8] == '\x01') {
                if (uVar4 == 0) {
                  if (uVar2 == 0) goto LAB_00144738;
                }
                else if (uVar4 == 1) {
                  if (uVar2 == 1) {
LAB_00144738:
                    uVar2 = param_1[9];
                    if (((uVar2 == param_2[9]) && (param_1[10] == param_2[10])) ||
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (), (uVar2 & 1) != 0)) {
                      uVar2 = param_1[0xb];
                      FUN_00038814(uVar2,param_1[0xc],param_2[0xb],param_2[0xc]);
                      uVar1 = (uint)uVar2;
                      goto LAB_001446f8;
                    }
                  }
                }
                else if (uVar2 == 2) goto LAB_00144738;
              }
              else if (uVar2 == uVar4) goto LAB_00144738;
            }
          }
          else {
            if (uVar6 == 0) {
LAB_00144608:
              FUN_001441bc(&uStack_80,auStack_c0);
              FUN_001441bc(&uStack_a0,auStack_c0);
              FUN_00141808(uVar2,uVar4,uVar7,uVar9);
              uVar2 = uVar5;
              uVar4 = uVar6;
              uVar7 = uVar8;
              uVar9 = uVar10;
            }
            else if (((uVar2 == uVar5) && (uVar4 == uVar6)) ||
                    (uVar3 = uVar2,
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (uVar2,uVar4,uVar5,uVar6,0), (uVar3 & 1) != 0)) {
              FUN_001441bc(&uStack_80,auStack_c0);
              FUN_001441bc(&uStack_a0,auStack_c0);
              uVar3 = uVar7;
              FUN_00038814(uVar7,uVar9,uVar8,uVar10);
              FUN_00141808(uVar5,uVar6,uVar8,uVar10);
              if ((uVar3 & 1) != 0) goto LAB_00144664;
            }
            else {
              FUN_001441bc(&uStack_80,auStack_c0);
              FUN_001441bc(&uStack_a0,auStack_c0);
              FUN_00141808(uVar5,uVar6,uVar8,uVar10);
            }
            FUN_00141808(uVar2,uVar4,uVar7,uVar9);
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_001446f8:
  return uVar1 & 1;
}



/* Entry: 0014476c; end: 0014478f;  */

void FUN_0014476c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00144790();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 00144790; end: 001447cf;  */

void FUN_00144790(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af06a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007dab30;
  _swift_getWitnessTable(&UNK_007dab30,&UNK_009af940);
  puRam0000000000af06a0 = puVar1;
  return;
}



/* Entry: 001447d0; end: 001447e3;  */

void FUN_001447d0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001447e4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x144824)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 001447e4; end: 00144863;  */

void FUN_001447e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af06a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007dab58;
  _swift_getWitnessTable(&UNK_007dab58,&UNK_009af940);
  puRam0000000000af06a8 = puVar1;
  return;
}



/* Entry: 00144864; end: 00144867;  */

void FUN_00144864(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af06b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007dab98;
  _swift_getWitnessTable(&UNK_007dab98,&UNK_009af940);
  puRam0000000000af06b8 = puVar1;
  return;
}



/* Entry: 00144868; end: 001448a7;  */

void FUN_00144868(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af06b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007dab98;
  _swift_getWitnessTable(&UNK_007dab98,&UNK_009af940);
  puRam0000000000af06b8 = puVar1;
  return;
}



/* Entry: 001448a8; end: 001448cb;  */

void FUN_001448a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001448cc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001448cc; end: 0014490b;  */

void FUN_001448cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af06c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007dac08;
  _swift_getWitnessTable(&UNK_007dac08,&UNK_009af9e0);
  puRam0000000000af06c0 = puVar1;
  return;
}



/* Entry: 0014490c; end: 0014491f;  */

void FUN_0014490c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00144920();
  *(long *)(param_1 + 8) = lVar1;
  FUN_0014420c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 00144920; end: 0014495f;  */

void FUN_00144920(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af06c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007dac30;
  _swift_getWitnessTable(&UNK_007dac30,&UNK_009af9e0);
  puRam0000000000af06c8 = puVar1;
  return;
}



/* Entry: 00144960; end: 00144963;  */

void FUN_00144960(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af06d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007dac70;
  _swift_getWitnessTable(&UNK_007dac70,&UNK_009af9e0);
  puRam0000000000af06d0 = puVar1;
  return;
}



/* Entry: 00144964; end: 001449a3;  */

void FUN_00144964(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af06d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007dac70;
  _swift_getWitnessTable(&UNK_007dac70,&UNK_009af9e0);
  puRam0000000000af06d0 = puVar1;
  return;
}



/* Entry: 001449a4; end: 001449c7;  */

void FUN_001449a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001449c8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001449c8; end: 00144a07;  */

void FUN_001449c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af06d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007dace0;
  _swift_getWitnessTable(&UNK_007dace0,&UNK_009afa80);
  puRam0000000000af06d8 = puVar1;
  return;
}



/* Entry: 00144a08; end: 00144a1b;  */

void FUN_00144a08(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00144a4c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x14428c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 00144a1c; end: 00144a4b;  */

void FUN_00144a1c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 00144a4c; end: 00144a8b;  */

void FUN_00144a4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af06e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007dad08;
  _swift_getWitnessTable(&UNK_007dad08,&UNK_009afa80);
  puRam0000000000af06e0 = puVar1;
  return;
}



/* Entry: 00144a8c; end: 00144a8f;  */

void FUN_00144a8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af06e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007dad48;
  _swift_getWitnessTable(&UNK_007dad48,&UNK_009afa80);
  puRam0000000000af06e8 = puVar1;
  return;
}



/* Entry: 00144a90; end: 00144acf;  */

void FUN_00144a90(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af06e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007dad48;
  _swift_getWitnessTable(&UNK_007dad48,&UNK_009afa80);
  puRam0000000000af06e8 = puVar1;
  return;
}



/* Entry: 00144ad0; end: 00144b6b;  */

long FUN_00144ad0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 00144b6c; end: 00144c5b;  */

undefined8 * FUN_00144b6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar8 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar8;
  uVar8 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar8;
  param_1[3] = uVar2;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  uVar1 = param_2[6];
  uVar4 = param_2[7];
  param_1[6] = uVar1;
  param_1[7] = uVar4;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar5 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar5;
  uVar4 = param_2[0xb];
  uVar6 = param_2[0xc];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar5);
  func_0x00023304(uVar4,uVar6);
  param_1[0xb] = uVar4;
  param_1[0xc] = uVar6;
  lVar7 = param_2[0xe];
  if (lVar7 == 0) {
    uVar8 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar8;
    uVar8 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar8;
  }
  else {
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = lVar7;
    uVar8 = param_2[0xf];
    uVar1 = param_2[0x10];
    _swift_bridgeObjectRetain();
    func_0x00023304(uVar8,uVar1);
    param_1[0xf] = uVar8;
    param_1[0x10] = uVar1;
  }
  return param_1;
}



/* Entry: 00144c5c; end: 00144e03;  */

undefined8 * FUN_00144c5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  param_1[4] = param_2[4];
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[7] = uVar2;
  param_1[9] = param_2[9];
  uVar2 = param_1[10];
  param_1[10] = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[0xb];
  uVar5 = param_2[0xc];
  func_0x00023304(uVar2,uVar5);
  uVar4 = param_1[0xb];
  uVar1 = param_1[0xc];
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar5;
  FUN_00023358(uVar4,uVar1);
  lVar3 = param_1[0xe];
  if (lVar3 == 0) {
    if (param_2[0xe] == 0) {
      uVar4 = param_2[0xe];
      uVar2 = param_2[0xd];
      uVar5 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar5;
      param_1[0xe] = uVar4;
      param_1[0xd] = uVar2;
    }
    else {
      param_1[0xd] = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      uVar2 = param_2[0xf];
      uVar4 = param_2[0x10];
      _swift_bridgeObjectRetain();
      func_0x00023304(uVar2,uVar4);
      param_1[0xf] = uVar2;
      param_1[0x10] = uVar4;
    }
  }
  else if (param_2[0xe] == 0) {
    FUN_00144e04(param_1 + 0xd);
    uVar4 = param_2[0x10];
    uVar2 = param_2[0xf];
    uVar5 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar5;
    param_1[0x10] = uVar4;
    param_1[0xf] = uVar2;
  }
  else {
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar3);
    uVar2 = param_2[0xf];
    uVar5 = param_2[0x10];
    func_0x00023304(uVar2,uVar5);
    uVar4 = param_1[0xf];
    uVar1 = param_1[0x10];
    param_1[0xf] = uVar2;
    param_1[0x10] = uVar5;
    FUN_00023358(uVar4,uVar1);
  }
  return param_1;
}



/* Entry: 00144e04; end: 00144e37;  */

undefined8 FUN_00144e04(undefined8 param_1)

{
  (*(code *)(undefined *)0x1959fc)();
  return param_1;
}



/* Entry: 00144e38; end: 00144e6b;  */

void FUN_00144e38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar6 = param_2[0xf];
  uVar5 = param_2[0xe];
  param_1[0x10] = param_2[0x10];
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  return;
}



/* Entry: 00144e6c; end: 00144f57;  */

undefined8 * FUN_00144e6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRelease(uVar2);
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar2 = param_2[10];
  uVar1 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[0xb];
  uVar1 = param_1[0xc];
  uVar4 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar4;
  FUN_00023358(uVar2,uVar1);
  if (param_1[0xe] != 0) {
    lVar3 = param_2[0xe];
    if (lVar3 != 0) {
      param_1[0xd] = param_2[0xd];
      param_1[0xe] = lVar3;
      _swift_bridgeObjectRelease();
      uVar2 = param_1[0xf];
      uVar1 = param_1[0x10];
      uVar4 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar4;
      FUN_00023358(uVar2,uVar1);
      return param_1;
    }
    FUN_00144e04(param_1 + 0xd);
  }
  uVar2 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar2;
  uVar2 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar2;
  return param_1;
}



/* Entry: 00144f58; end: 0014500f;  */

int FUN_00144f58(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x22] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 00145010; end: 00145057;  */

void FUN_00145010(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x60));
  uVar1 = *(ulong *)(param_1 + 0x70);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    _swift_release(*(undefined8 *)(param_1 + 0x68));
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 00145058; end: 00145107;  */

undefined8 * FUN_00145058(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar1 = param_2[8];
  uVar4 = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[8] = uVar1;
  param_1[9] = uVar4;
  uVar5 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar5;
  uVar4 = param_2[0xd];
  uVar6 = param_2[0xe];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar5);
  func_0x00023304(uVar4,uVar6);
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar6;
  return param_1;
}



/* Entry: 00145108; end: 00145207;  */

undefined8 * FUN_00145108(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  uVar4 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar4 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[9] = uVar4;
  param_1[0xb] = param_2[0xb];
  uVar4 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_2[0xd];
  uVar2 = param_2[0xe];
  func_0x00023304(uVar4,uVar2);
  uVar1 = param_1[0xd];
  uVar3 = param_1[0xe];
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar2;
  FUN_00023358(uVar1,uVar3);
  return param_1;
}



/* Entry: 00145208; end: 00145233;  */

void FUN_00145208(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar6 = param_2[0xd];
  uVar5 = param_2[0xc];
  param_1[0xe] = param_2[0xe];
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  return;
}



/* Entry: 00145234; end: 001452d7;  */

undefined8 * FUN_00145234(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_2[6];
  uVar1 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar2 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRelease(uVar2);
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar2 = param_2[0xc];
  uVar1 = param_1[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[0xd];
  uVar1 = param_1[0xe];
  uVar3 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar3;
  FUN_00023358(uVar2,uVar1);
  return param_1;
}



/* Entry: 001452d8; end: 0014538b;  */

int FUN_001452d8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1e] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 0014538c; end: 001453bb;  */

void FUN_0014538c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    _swift_release(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 001453bc; end: 0014549b;  */

undefined8 * FUN_001453bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  func_0x00023304(uVar1,uVar3);
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  return param_1;
}



/* Entry: 0014549c; end: 001454ef;  */

undefined8 * FUN_0014549c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
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
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  FUN_00023358(uVar1,uVar2);
  return param_1;
}



/* Entry: 001454f0; end: 00145593;  */

int FUN_001454f0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 00145594; end: 001455d3;  */

void FUN_00145594(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af0708 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_007e02a0;
  _swift_getWitnessTable(&DAT_007e02a0,&UNK_009b3c08);
  puRam0000000000af0708 = puVar1;
  return;
}



/* Entry: 001455d4; end: 001455df;  */

long FUN_001455d4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 001455e0; end: 0014626f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_001455e0(long *param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
  bool bVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  byte *pbVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  ulong uVar23;
  long *plVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  int iVar29;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar30;
  long *plVar31;
  long *unaff_x24;
  int iVar32;
  long *plVar33;
  long *unaff_x27;
  long *unaff_x28;
  long *plVar34;
  undefined1 auStack_410 [128];
  long lStack_390;
  long lStack_388;
  long lStack_380;
  undefined8 uStack_378;
  ulong uStack_370;
  long lStack_368;
  ulong uStack_360;
  long lStack_358;
  undefined8 uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  long lStack_338;
  ulong uStack_330;
  long lStack_328;
  ulong uStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  ulong uStack_2f0;
  long lStack_2e8;
  ulong uStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  ulong uStack_2c0;
  long lStack_2b8;
  ulong uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long *plStack_290;
  long *plStack_288;
  long *plStack_280;
  long *plStack_278;
  long *plStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  ulong uStack_238;
  long *plStack_230;
  long *plStack_228;
  long *plStack_220;
  long *plStack_218;
  long lStack_210;
  uint uStack_208;
  uint uStack_204;
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  byte abStack_1b9 [9];
  byte abStack_1b0 [14];
  undefined2 uStack_1a2;
  long *plStack_1a0;
  byte bStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  undefined1 uStack_178;
  long lStack_170;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar30 = (long *)param_1[2];
  plVar16 = plStack_e0;
  if (plVar30 == (long *)param_2[2]) {
    if ((plVar30 != (long *)0x0) && (param_1 != param_2)) {
      plStack_e0 = (long *)0x0;
      unaff_x27 = param_2 + 10;
      unaff_x24 = param_1 + 5;
      do {
        uVar23 = unaff_x24[-1];
        plVar24 = (long *)*unaff_x24;
        plVar14 = (long *)unaff_x24[1];
        plStack_b0 = (long *)unaff_x24[2];
        plVar31 = (long *)unaff_x24[3];
        plStack_90 = (long *)unaff_x24[4];
        plStack_98 = (long *)unaff_x24[5];
        unaff_x19 = (long *)unaff_x27[-5];
        plStack_a8 = (long *)unaff_x27[-4];
        unaff_x22 = (long *)unaff_x27[-3];
        plStack_a0 = (long *)unaff_x27[-2];
        unaff_x28 = (long *)unaff_x27[-1];
        unaff_x20 = (long *)*unaff_x27;
        if (((uVar23 != unaff_x27[-6]) || (plVar24 != unaff_x19)) &&
           (param_2 = plVar24,
           __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (), unaff_x21 = plStack_b0, plVar16 = plStack_e0, (uVar23 & 1) == 0))
        goto LAB_001461f0;
        plVar13 = plStack_90;
        plVar34 = plStack_98;
        plVar16 = plStack_b0;
        plVar33 = plVar30;
        plVar15 = plVar31;
        plStack_c0 = plVar24;
        plStack_b8 = unaff_x19;
        if (plStack_98 != (long *)0x0) {
          if (unaff_x20 == (long *)0x0) {
            plVar17 = (long *)0x0;
            goto LAB_001461a8;
          }
          plStack_d8 = unaff_x24;
          plStack_d0 = unaff_x27;
          plStack_c8 = unaff_x28;
          if (plStack_98 == unaff_x20) {
            _swift_bridgeObjectRetain(plVar24);
            unaff_x21 = plStack_b0;
            func_0x00023304(plVar14,plStack_b0);
            plVar34 = plStack_90;
            plVar24 = plStack_98;
            func_0x00191e58(plVar31,plStack_90,plStack_98);
            _swift_bridgeObjectRetain(unaff_x19);
            func_0x00023304(plStack_a8,unaff_x22);
            plVar16 = plStack_a0;
            unaff_x28 = plStack_c8;
            func_0x00191e58(plStack_a0,plStack_c8,plVar24);
            func_0x00191e58(plVar31,plVar34,plVar24);
            unaff_x19 = plStack_b8;
            func_0x00191e58(plVar16,unaff_x28,plVar24);
LAB_001458c0:
            plVar13 = plStack_a0;
            unaff_x27 = plStack_d0;
            unaff_x24 = plStack_d8;
            plVar34 = plStack_e0;
            uVar9 = (uint)((ulong)plStack_90 >> 0x20);
            uVar20 = uVar9 >> 0x1e;
            uVar10 = (uint)((ulong)unaff_x28 >> 0x20);
            uVar25 = uVar10 >> 0x1e;
            iVar32 = (int)plVar31;
            plVar17 = unaff_x28;
            plVar24 = unaff_x24;
            if ((ulong)plStack_90 >> 0x3e == 3) {
              uVar23 = 0;
              if (((plVar31 != (long *)0x0) || (plStack_90 != (long *)0xc000000000000000)) ||
                 (((ulong)unaff_x28 >> 0x3e < 3 ||
                  ((uVar23 = 0, plStack_a0 != (long *)0x0 ||
                   (unaff_x28 != (long *)0xc000000000000000)))))) goto joined_r0x00145ad8;
              plVar13 = (long *)0x0;
              plVar17 = (long *)0xc000000000000000;
LAB_00145a3c:
              func_0x0012cec0(plVar13,plVar17,unaff_x20);
              goto LAB_00145c44;
            }
            if (uVar9 >> 0x1e < 2) {
              if (uVar20 == 0) {
                uVar23 = (ulong)plStack_90 >> 0x30 & 0xff;
              }
              else {
                iVar22 = (int)((ulong)plVar31 >> 0x20);
                if (SBORROW4(iVar22,iVar32)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x146254);
                  (*pcVar11)();
                }
                uVar23 = (ulong)(iVar22 - iVar32);
              }
              if (uVar10 >> 0x1e < 2) goto LAB_0014596c;
LAB_00145934:
              if (uVar25 != 2) {
                if (uVar23 != 0) goto LAB_001460e0;
                goto LAB_00145a3c;
              }
              uVar27 = plStack_a0[3] - plStack_a0[2];
              if (SBORROW8(plStack_a0[3],plStack_a0[2])) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x14623c);
                (*pcVar11)();
              }
            }
            else {
              if (uVar20 == 2) {
                uVar23 = plVar31[3] - plVar31[2];
                if (SBORROW8(plVar31[3],plVar31[2])) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x146250);
                  (*pcVar11)();
                }
              }
              else {
                uVar23 = 0;
              }
joined_r0x00145ad8:
              if (1 < uVar25) goto LAB_00145934;
LAB_0014596c:
              if (uVar25 == 0) {
                uVar27 = (ulong)unaff_x28 >> 0x30 & 0xff;
              }
              else {
                iVar22 = (int)((ulong)plStack_a0 >> 0x20);
                if (SBORROW4(iVar22,(int)plStack_a0)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x146238);
                  (*pcVar11)();
                }
                uVar27 = (ulong)(iVar22 - (int)plStack_a0);
              }
            }
            if (uVar23 != uVar27) goto LAB_001460e0;
            if ((long)uVar23 < 1) goto LAB_00145a3c;
            if (uVar20 < 2) {
              if (uVar20 == 0) {
                abStack_80[0] = (byte)plVar31;
                abStack_80[1] = (byte)((ulong)plVar31 >> 8);
                abStack_80[2] = (byte)((ulong)plVar31 >> 0x10);
                abStack_80[3] = (byte)((ulong)plVar31 >> 0x18);
                abStack_80[4] = (byte)((ulong)plVar31 >> 0x20);
                abStack_80[5] = (byte)((ulong)plVar31 >> 0x28);
                abStack_80[6] = (byte)((ulong)plVar31 >> 0x30);
                abStack_80[7] = (byte)((ulong)plVar31 >> 0x38);
                abStack_80[8] = (byte)plStack_90;
                abStack_80[9] = (byte)((ulong)plStack_90 >> 8);
                abStack_80[10] = (byte)((ulong)plStack_90 >> 0x10);
                abStack_80[0xb] = (byte)((ulong)plStack_90 >> 0x18);
                abStack_80[0xc] = (byte)((ulong)plStack_90 >> 0x20);
                abStack_80[0xd] = (byte)((ulong)plStack_90 >> 0x28);
                pbVar18 = abStack_80 + ((ulong)plStack_90 >> 0x30 & 0xff);
LAB_00145b64:
                FUN_000382a0(&bStack_81,abStack_80,pbVar18,plStack_a0,unaff_x28);
                unaff_x21 = plStack_b0;
                plStack_e0 = plVar34;
                func_0x0012cec0(plVar13,unaff_x28,unaff_x20);
                unaff_x19 = plStack_b8;
                bVar2 = bStack_81;
              }
              else {
                lVar26 = (long)iVar32;
                plVar33 = (long *)(((long)plVar31 >> 0x20) - lVar26);
                if ((long)plVar31 >> 0x20 < lVar26) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x146258);
                  plStack_f0 = plVar14;
                  plStack_e8 = plVar30;
                  plStack_d8 = unaff_x20;
                  (*pcVar11)();
                }
                plStack_f0 = plVar14;
                plStack_e8 = plVar30;
                plStack_d8 = unaff_x20;
                __s10Foundation13__DataStorageC6_bytesSvSgvg(plStack_90);
                if (plVar16 == (long *)0x0) {
                  __s10Foundation13__DataStorageC7_lengthSivg(plStack_90);
                  lVar26 = 0;
                  lVar19 = 0;
                }
                else {
                  plVar30 = plVar16;
                  __s10Foundation13__DataStorageC7_offsetSivg(plStack_90);
                  if (SBORROW8(lVar26,(long)plVar30)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x14626c);
                    (*pcVar11)();
                  }
                  lVar1 = (lVar26 - (long)plVar30) + (long)plVar16;
                  __s10Foundation13__DataStorageC7_lengthSivg(plStack_90);
                  if ((long)plVar33 <= (long)plVar30) {
                    plVar30 = plVar33;
                  }
                  lVar26 = 0;
                  if (lVar1 != 0) {
                    lVar26 = lVar1;
                  }
                  lVar19 = 0;
                  if (lVar1 != 0) {
                    lVar19 = (long)plVar30 + lVar1;
                  }
                }
                plVar30 = plStack_a0;
                unaff_x28 = plStack_c8;
                FUN_000382a0(abStack_80,lVar26,lVar19,plStack_a0);
                unaff_x20 = plStack_d8;
                plStack_e0 = plVar34;
                func_0x0012cec0(plVar30,unaff_x28,plStack_d8);
                plVar14 = plStack_f0;
                plVar33 = plStack_e8;
                unaff_x19 = plStack_b8;
                unaff_x21 = plStack_b0;
                bVar2 = abStack_80[0];
              }
            }
            else {
              if (uVar20 != 2) {
                abStack_80[8] = 0;
                abStack_80[9] = 0;
                abStack_80[10] = 0;
                abStack_80[0xb] = 0;
                abStack_80[0xc] = 0;
                abStack_80[0xd] = 0;
                abStack_80[0] = 0;
                abStack_80[1] = 0;
                abStack_80[2] = 0;
                abStack_80[3] = 0;
                abStack_80[4] = 0;
                abStack_80[5] = 0;
                abStack_80[6] = 0;
                abStack_80[7] = 0;
                pbVar18 = abStack_80;
                goto LAB_00145b64;
              }
              lVar26 = plVar31[2];
              lVar19 = plVar31[3];
              plStack_f0 = plVar14;
              plStack_e8 = plVar30;
              plStack_d8 = unaff_x20;
              __s10Foundation13__DataStorageC6_bytesSvSgvg(plStack_90);
              plVar30 = plVar16;
              if (plVar16 != (long *)0x0) {
                __s10Foundation13__DataStorageC7_offsetSivg(plStack_90);
                if (SBORROW8(lVar26,(long)plVar30)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x146268);
                  (*pcVar11)();
                }
                plVar16 = (long *)((lVar26 - (long)plVar30) + (long)plVar16);
              }
              plVar13 = (long *)(lVar19 - lVar26);
              if (SBORROW8(lVar19,lVar26)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x14625c);
                (*pcVar11)();
              }
              __s10Foundation13__DataStorageC7_lengthSivg(plStack_90);
              plVar17 = plStack_a0;
              unaff_x28 = plStack_c8;
              unaff_x20 = plStack_d8;
              plVar33 = plStack_e8;
              plVar14 = plStack_f0;
              if (plVar16 == (long *)0x0) {
                lVar26 = 0;
              }
              else {
                if ((long)plVar13 <= (long)plVar30) {
                  plVar30 = plVar13;
                }
                lVar26 = (long)plVar30 + (long)plVar16;
              }
              FUN_000382a0(abStack_80,plVar16,lVar26,plStack_a0,plStack_c8);
              plStack_e0 = plVar34;
              func_0x0012cec0(plVar17,unaff_x28,unaff_x20);
              unaff_x19 = plStack_b8;
              unaff_x21 = plStack_b0;
              bVar2 = abStack_80[0];
            }
            plStack_b8 = unaff_x19;
            if ((bVar2 & 1) != 0) goto LAB_00145c44;
          }
          else {
            _swift_bridgeObjectRetain(plVar24);
            unaff_x21 = plStack_b0;
            func_0x00023304(plVar14,plStack_b0);
            plVar34 = plStack_90;
            plVar24 = plStack_98;
            func_0x00191e58(plVar31,plStack_90,plStack_98);
            _swift_bridgeObjectRetain(unaff_x19);
            func_0x00023304(plStack_a8,unaff_x22);
            plVar16 = plStack_a0;
            unaff_x28 = plStack_c8;
            func_0x00191e58(plStack_a0,plStack_c8,unaff_x20);
            func_0x00191e58(plVar31,plVar34,plVar24);
            unaff_x19 = plStack_b8;
            func_0x00191e58(plVar16,unaff_x28,unaff_x20);
            plVar16 = unaff_x20;
            FUN_000c46a8();
            if (((ulong)plVar16 & 1) != 0) goto LAB_001458c0;
LAB_001460e0:
            unaff_x27 = plStack_d0;
            unaff_x24 = plStack_d8;
            func_0x0012cec0(plStack_a0,unaff_x28,unaff_x20);
          }
          param_2 = plStack_90;
          plVar17 = plStack_98;
          func_0x0012cec0(plVar31,plStack_90,plStack_98);
          _swift_bridgeObjectRelease(plStack_b8);
          FUN_00023358(plStack_a8,unaff_x22);
          func_0x0012cec0(plStack_a0,unaff_x28,unaff_x20);
          _swift_bridgeObjectRelease(plStack_c0);
          FUN_00023358(plVar14,unaff_x21);
          unaff_x19 = param_2;
          plVar34 = plVar17;
          plVar30 = unaff_x21;
LAB_001461ec:
          unaff_x21 = unaff_x20;
          unaff_x20 = plVar34;
          func_0x0012cec0(plVar15,param_2,plVar17);
          plVar16 = plStack_e0;
          goto LAB_001461f0;
        }
        plVar17 = unaff_x20;
        if (unaff_x20 != (long *)0x0) {
LAB_001461a8:
          func_0x00191e58(plVar31,plStack_90,plStack_98);
          plVar15 = plStack_a0;
          func_0x00191e58(plStack_a0,unaff_x28,plVar17);
          func_0x0012cec0(plVar31,plVar13,plVar34);
          param_2 = unaff_x28;
          unaff_x19 = plVar13;
          unaff_x20 = plVar17;
          unaff_x22 = plVar15;
          goto LAB_001461ec;
        }
        _swift_bridgeObjectRetain(plVar24);
        func_0x00023304(plVar14,plVar16);
        plVar16 = plStack_90;
        func_0x00191e58(plVar31,plStack_90,0);
        _swift_bridgeObjectRetain(plStack_b8);
        func_0x00023304(plStack_a8,unaff_x22);
        plVar30 = plStack_a0;
        func_0x00191e58(plStack_a0,unaff_x28,0);
        unaff_x19 = plStack_b8;
        func_0x00191e58(plVar31,plVar16,0);
        unaff_x21 = plStack_b0;
        func_0x00191e58(plVar30,unaff_x28,0);
        plVar24 = unaff_x24;
LAB_00145c44:
        plVar16 = plVar31;
        func_0x0012cec0(plVar31,plStack_90,plStack_98);
        plVar13 = plStack_a8;
        plVar30 = plStack_b0;
        plVar34 = plStack_e0;
        uVar9 = (uint)((ulong)unaff_x21 >> 0x20);
        uVar20 = uVar9 >> 0x1e;
        uVar10 = (uint)((ulong)unaff_x22 >> 0x20);
        uVar25 = uVar10 >> 0x1e;
        iVar32 = (int)plVar14;
        unaff_x24 = plVar24;
        if ((ulong)unaff_x21 >> 0x3e == 3) {
          uVar23 = 0;
          if ((((plVar14 != (long *)0x0) || (unaff_x21 != (long *)0xc000000000000000)) ||
              ((ulong)unaff_x22 >> 0x3e < 3)) ||
             ((uVar23 = 0, plStack_a8 != (long *)0x0 || (unaff_x22 != (long *)0xc000000000000000))))
          {
joined_r0x00145edc:
            if (uVar25 < 2) goto LAB_00145d1c;
LAB_00145ce4:
            if (uVar25 == 2) {
              uVar27 = plStack_a8[3] - plStack_a8[2];
              if (SBORROW8(plStack_a8[3],plStack_a8[2])) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x146234);
                (*pcVar11)();
              }
              goto LAB_00145d3c;
            }
            if (uVar23 == 0) goto LAB_00145640;
            goto LAB_00146158;
          }
          _swift_bridgeObjectRelease(unaff_x19);
          FUN_00023358(0,0xc000000000000000);
          func_0x0012cec0(plStack_a0,unaff_x28,unaff_x20);
          _swift_bridgeObjectRelease(plStack_c0);
          plVar14 = (long *)0x0;
          plVar30 = (long *)0xc000000000000000;
LAB_00145674:
          FUN_00023358(plVar14,plVar30);
          param_2 = plStack_90;
          func_0x0012cec0(plVar31,plStack_90,plStack_98);
        }
        else {
          if (1 < uVar9 >> 0x1e) {
            if (uVar20 == 2) {
              uVar23 = plVar14[3] - plVar14[2];
              if (SBORROW8(plVar14[3],plVar14[2])) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x146244);
                (*pcVar11)();
              }
            }
            else {
              uVar23 = 0;
            }
            goto joined_r0x00145edc;
          }
          if (uVar20 == 0) {
            uVar23 = (ulong)unaff_x21 >> 0x30 & 0xff;
          }
          else {
            iVar22 = (int)((ulong)plVar14 >> 0x20);
            if (SBORROW4(iVar22,iVar32)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x146240);
              (*pcVar11)();
            }
            uVar23 = (ulong)(iVar22 - iVar32);
          }
          if (1 < uVar10 >> 0x1e) goto LAB_00145ce4;
LAB_00145d1c:
          if (uVar25 == 0) {
            uVar27 = (ulong)unaff_x22 >> 0x30 & 0xff;
          }
          else {
            iVar22 = (int)((ulong)plStack_a8 >> 0x20);
            if (SBORROW4(iVar22,(int)plStack_a8)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x146230);
              (*pcVar11)();
            }
            uVar27 = (ulong)(iVar22 - (int)plStack_a8);
          }
LAB_00145d3c:
          if (uVar23 != uVar27) {
LAB_00146158:
            _swift_bridgeObjectRelease(unaff_x19);
            FUN_00023358(plStack_a8,unaff_x22);
            func_0x0012cec0(plStack_a0,unaff_x28,unaff_x20);
            _swift_bridgeObjectRelease(plStack_c0);
            FUN_00023358(plVar14,unaff_x21);
            param_2 = plStack_90;
            plVar17 = plStack_98;
            plVar34 = unaff_x20;
            unaff_x20 = unaff_x21;
            plVar30 = plVar33;
            goto LAB_001461ec;
          }
          if ((long)uVar23 < 1) {
LAB_00145640:
            _swift_bridgeObjectRelease(unaff_x19);
            FUN_00023358(plStack_a8,unaff_x22);
            func_0x0012cec0(plStack_a0,unaff_x28,unaff_x20);
            _swift_bridgeObjectRelease(plStack_c0);
            plVar30 = unaff_x21;
            goto LAB_00145674;
          }
          unaff_x19 = unaff_x22;
          plVar15 = unaff_x22;
          if (uVar20 < 2) {
            if (uVar20 == 0) {
              abStack_80[0] = (byte)plVar14;
              abStack_80[1] = (byte)((ulong)plVar14 >> 8);
              abStack_80[2] = (byte)((ulong)plVar14 >> 0x10);
              abStack_80[3] = (byte)((ulong)plVar14 >> 0x18);
              abStack_80[4] = (byte)((ulong)plVar14 >> 0x20);
              abStack_80[5] = (byte)((ulong)plVar14 >> 0x28);
              abStack_80[6] = (byte)((ulong)plVar14 >> 0x30);
              abStack_80[7] = (byte)((ulong)plVar14 >> 0x38);
              abStack_80[8] = (byte)unaff_x21;
              abStack_80[9] = (byte)((ulong)unaff_x21 >> 8);
              abStack_80[10] = (byte)((ulong)unaff_x21 >> 0x10);
              abStack_80[0xb] = (byte)((ulong)unaff_x21 >> 0x18);
              abStack_80[0xc] = (byte)((ulong)unaff_x21 >> 0x20);
              abStack_80[0xd] = (byte)((ulong)unaff_x21 >> 0x28);
              plStack_d8 = plVar24;
              FUN_000382a0(&bStack_81,abStack_80,abStack_80 + ((ulong)unaff_x21 >> 0x30 & 0xff),
                           plStack_a8,unaff_x22);
              plStack_e0 = plVar34;
              _swift_bridgeObjectRelease(plStack_b8);
              FUN_00023358(plVar13,unaff_x22);
              func_0x0012cec0(plStack_a0,unaff_x28,unaff_x20);
              _swift_bridgeObjectRelease(plStack_c0);
              FUN_00023358(plVar14,unaff_x21);
              param_2 = plStack_90;
              func_0x0012cec0(plVar31,plStack_90,plStack_98);
              unaff_x19 = plVar13;
              unaff_x24 = unaff_x21;
              plVar24 = plStack_d8;
              plVar14 = plStack_e0;
              plVar16 = plStack_e0;
              unaff_x21 = plVar34;
              plVar30 = plVar33;
              bVar2 = bStack_81;
            }
            else {
              plVar34 = (long *)(long)iVar32;
              plVar30 = (long *)(((long)plVar14 >> 0x20) - (long)plVar34);
              plStack_f0 = plVar14;
              plStack_d0 = unaff_x27;
              plStack_c8 = plVar31;
              if ((long)plVar14 >> 0x20 < (long)plVar34) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x146248);
                plStack_e8 = plVar33;
                plStack_d8 = unaff_x20;
                (*pcVar11)();
              }
              plStack_e8 = plVar33;
              plStack_d8 = unaff_x20;
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              if (plVar16 == (long *)0x0) {
                __s10Foundation13__DataStorageC7_lengthSivg();
                lVar26 = 0;
                lVar19 = 0;
              }
              else {
                plVar14 = plVar16;
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8((long)plVar34,(long)plVar14)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x146264);
                  (*pcVar11)();
                }
                lVar1 = ((long)plVar34 - (long)plVar14) + (long)plVar16;
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)plVar30 <= (long)plVar14) {
                  plVar14 = plVar30;
                }
                lVar26 = 0;
                if (lVar1 != 0) {
                  lVar26 = lVar1;
                }
                lVar19 = 0;
                if (lVar1 != 0) {
                  lVar19 = (long)plVar14 + lVar1;
                }
              }
              plVar30 = plStack_a8;
              plVar31 = plStack_e0;
              FUN_000382a0(abStack_80,lVar26,lVar19,plStack_a8,unaff_x22);
              plStack_e0 = plVar31;
              _swift_bridgeObjectRelease(plStack_b8);
              FUN_00023358(plVar30,unaff_x22);
              func_0x0012cec0(plStack_a0,unaff_x28,plStack_d8);
              _swift_bridgeObjectRelease(plStack_c0);
              FUN_00023358(plStack_f0,unaff_x21);
              param_2 = plStack_90;
              func_0x0012cec0(plStack_c8,plStack_90,plStack_98);
              unaff_x28 = plVar34;
              unaff_x20 = unaff_x21;
              plVar33 = plStack_e8;
              plVar14 = plStack_e0;
              plVar16 = plStack_e0;
              unaff_x21 = plVar31;
              unaff_x27 = plStack_d0;
              bVar2 = abStack_80[0];
            }
          }
          else if (uVar20 == 2) {
            lVar26 = plVar14[2];
            lVar19 = plVar14[3];
            plStack_e8 = plVar33;
            plStack_d8 = unaff_x20;
            plStack_c8 = unaff_x28;
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            plVar33 = plVar16;
            if (plVar16 != (long *)0x0) {
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar26,(long)plVar33)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x146260);
                (*pcVar11)();
              }
              plVar16 = (long *)((lVar26 - (long)plVar33) + (long)plVar16);
            }
            plVar34 = (long *)(lVar19 - lVar26);
            if (SBORROW8(lVar19,lVar26)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x14624c);
              (*pcVar11)();
            }
            __s10Foundation13__DataStorageC7_lengthSivg(plStack_b0);
            plVar15 = plStack_a8;
            unaff_x21 = plStack_e0;
            if (plVar16 == (long *)0x0) {
              lVar26 = 0;
            }
            else {
              if ((long)plVar34 <= (long)plVar33) {
                plVar33 = plVar34;
              }
              lVar26 = (long)plVar33 + (long)plVar16;
            }
            FUN_000382a0(abStack_80,plVar16,lVar26,plStack_a8,unaff_x22);
            _swift_bridgeObjectRelease(plStack_b8);
            FUN_00023358(plVar15,unaff_x22);
            func_0x0012cec0(plStack_a0,plStack_c8,plStack_d8);
            _swift_bridgeObjectRelease(plStack_c0);
            FUN_00023358(plVar14,plStack_b0);
            param_2 = plStack_90;
            func_0x0012cec0(plVar31,plStack_90,plStack_98);
            unaff_x28 = plVar16;
            unaff_x20 = plVar14;
            plVar33 = plStack_e8;
            plVar14 = unaff_x21;
            plVar16 = plStack_e0;
            bVar2 = abStack_80[0];
          }
          else {
            abStack_80[8] = 0;
            abStack_80[9] = 0;
            abStack_80[10] = 0;
            abStack_80[0xb] = 0;
            abStack_80[0xc] = 0;
            abStack_80[0xd] = 0;
            abStack_80[0] = 0;
            abStack_80[1] = 0;
            abStack_80[2] = 0;
            abStack_80[3] = 0;
            abStack_80[4] = 0;
            abStack_80[5] = 0;
            abStack_80[6] = 0;
            abStack_80[7] = 0;
            FUN_000382a0(&bStack_81,abStack_80,abStack_80,plStack_a8,unaff_x22);
            plStack_e0 = plVar34;
            _swift_bridgeObjectRelease(plStack_b8);
            FUN_00023358(plVar13,unaff_x22);
            func_0x0012cec0(plStack_a0,unaff_x28,unaff_x20);
            _swift_bridgeObjectRelease(plStack_c0);
            FUN_00023358(plVar14,plStack_b0);
            param_2 = plStack_90;
            func_0x0012cec0(plVar31,plStack_90,plStack_98);
            unaff_x19 = plVar13;
            plVar14 = plStack_e0;
            plVar16 = plStack_e0;
            unaff_x21 = plVar34;
            plVar30 = plVar33;
            bVar2 = bStack_81;
          }
          plStack_e0 = plVar14;
          unaff_x22 = plVar15;
          if ((bVar2 & 1) == 0) goto LAB_001461f0;
        }
        unaff_x27 = unaff_x27 + 7;
        unaff_x24 = plVar24 + 7;
        plVar30 = (long *)((long)plVar33 + -1);
      } while (plVar30 != (long *)0x0);
    }
    plVar16 = (long *)((long)&MACH_HEADER.magic + 1);
  }
  else {
LAB_001461f0:
    plStack_e0 = plVar16;
    plVar16 = (long *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return plVar16;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_00146270;
  lStack_170 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar26 = plVar16[2];
  puStack_100 = &stack0xfffffffffffffff0;
  if (lVar26 == param_2[2]) {
    if ((lVar26 != 0) && (plVar16 != param_2)) {
      plStack_218 = (long *)0x0;
      unaff_x28 = plVar16 + 9;
      unaff_x19 = param_2 + 9;
      do {
        unaff_x27 = (long *)unaff_x28[-5];
        plVar30 = (long *)unaff_x28[-4];
        plVar24 = (long *)unaff_x28[-3];
        bVar2 = *(byte *)(unaff_x28 + -2);
        plVar31 = (long *)(ulong)bVar2;
        plVar16 = (long *)unaff_x28[-1];
        plVar14 = (long *)*unaff_x28;
        unaff_x21 = (long *)unaff_x19[-5];
        unaff_x22 = (long *)unaff_x19[-4];
        unaff_x20 = (long *)unaff_x19[-3];
        bVar3 = *(byte *)(unaff_x19 + -2);
        plVar33 = (long *)(ulong)bVar3;
        plStack_1d0 = (long *)unaff_x19[-1];
        unaff_x24 = (long *)*unaff_x19;
        bVar12 = (((ulong)unaff_x20 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
        uStack_208 = (uint)bVar3;
        uStack_204 = (uint)bVar2;
        uVar4 = (undefined1)((ulong)plVar30 >> 8);
        uVar5 = (undefined1)((ulong)plVar30 >> 0x10);
        uVar6 = (undefined1)((ulong)plVar30 >> 0x18);
        uVar7 = (undefined1)((ulong)plVar30 >> 0x20);
        uVar8 = (undefined1)((ulong)plVar30 >> 0x28);
        lStack_210 = lVar26;
        plStack_200 = plVar14;
        plStack_1f8 = plVar16;
        plStack_1f0 = unaff_x22;
        plStack_1e8 = unaff_x20;
        plStack_1e0 = unaff_x24;
        plStack_1d8 = unaff_x21;
        plStack_1c8 = plVar24;
        if (((((ulong)plVar24 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
           (uStack_204 == 0xff)) {
          if (!bVar12 || uStack_208 != 0xff) goto LAB_00147500;
          plVar31 = (long *)((long)&section_000000b8.reserved1 + 3);
          plStack_220 = unaff_x19;
          FUN_000f2290(unaff_x27,plVar30,plVar24,0xff);
          func_0x00023304(plVar16,plVar14);
          FUN_000f2290(plStack_1d8,unaff_x22,unaff_x20,0xff);
          plVar14 = plStack_1d8;
          func_0x00023304(plStack_1d0,unaff_x24);
          FUN_000f2290(unaff_x27,plVar30,plVar24,0xff);
          unaff_x19 = plStack_220;
          FUN_000f2290(plVar14,unaff_x22,unaff_x20,0xff);
LAB_00146420:
          plVar16 = unaff_x27;
          FUN_000f2330(unaff_x27,plVar30,plStack_1c8,plVar31);
          unaff_x20 = plVar31;
          unaff_x21 = plVar14;
          goto LAB_00146438;
        }
        if (bVar12 && uStack_208 == 0xff) {
          plVar33 = (long *)((long)&section_000000b8.reserved1 + 3);
LAB_00147500:
          abStack_1b0[0] = (byte)unaff_x27;
          abStack_1b0[1] = (byte)((ulong)unaff_x27 >> 8);
          abStack_1b0[2] = (byte)((ulong)unaff_x27 >> 0x10);
          abStack_1b0[3] = (byte)((ulong)unaff_x27 >> 0x18);
          abStack_1b0[4] = (byte)((ulong)unaff_x27 >> 0x20);
          abStack_1b0[5] = (byte)((ulong)unaff_x27 >> 0x28);
          abStack_1b0[6] = (byte)((ulong)unaff_x27 >> 0x30);
          abStack_1b0[7] = (byte)((ulong)unaff_x27 >> 0x38);
          uStack_1a2 = (undefined2)((ulong)plVar30 >> 0x30);
          uStack_178 = SUB81(plVar33,0);
          abStack_1b0[8] = (byte)plVar30;
          abStack_1b0[9] = uVar4;
          abStack_1b0[10] = uVar5;
          abStack_1b0[0xb] = uVar6;
          abStack_1b0[0xc] = uVar7;
          abStack_1b0[0xd] = uVar8;
          plStack_1a0 = plVar24;
          bStack_198 = bVar2;
          plStack_190 = unaff_x21;
          plStack_188 = unaff_x22;
          plStack_180 = unaff_x20;
          FUN_000f2290();
          FUN_000f2290(unaff_x21,unaff_x22,unaff_x20,plVar33);
          param_2 = (long *)0xaf25e8;
          func_0x00191ff4(abStack_1b0,0xaf25e8,&UNK_007e08d0);
          plVar30 = plVar31;
          unaff_x27 = plVar14;
          goto LAB_0014764c;
        }
        uVar10 = (uint)((ulong)plVar24 >> 0x3c) & 0xfffffc03 | (bVar2 & 0x3f) << 2;
        uVar20 = (uint)bVar3;
        uVar9 = (uint)((ulong)unaff_x20 >> 0x20);
        plVar15 = plVar30;
        if (2 < uVar10) {
          if (uVar10 == 3) {
            if ((uVar9 >> 0x1c & 0xfffffc03 | (uStack_208 & 0x3f) << 2) == 3) {
              plStack_220 = (long *)CONCAT44(plStack_220._4_4_,(uint)unaff_x21 ^ (uint)unaff_x27);
              FUN_000f2290(unaff_x27,plVar30,plVar24,plVar31);
              plVar34 = plStack_1f0;
              func_0x00023304(plVar16,plVar14);
              FUN_000f2290(plStack_1d8,plVar34,unaff_x20,plVar33);
              plVar14 = plStack_1d8;
              func_0x00023304(plStack_1d0,plStack_1e0);
              FUN_000f2290(unaff_x27,plVar30,plVar24,plVar31);
              FUN_000f2290(plVar14,plVar34,unaff_x20,plVar33);
              plVar33 = plVar34;
              if (((ulong)plStack_220 & 1) != 0) goto LAB_001475fc;
              goto LAB_00146420;
            }
            goto LAB_00147554;
          }
          iVar22 = (int)unaff_x22;
          iVar32 = (int)((ulong)unaff_x22 >> 0x20);
          if (uVar10 == 4) {
            if ((uVar9 >> 0x1c & 0xfffffc03 | (uVar20 & 0x3f) << 2) != 4) goto LAB_00147554;
            FUN_000f2290(unaff_x27,plVar30,plVar24,plVar31);
            func_0x00023304(plStack_1f8,plStack_200);
            FUN_000f2290(plStack_1d8,unaff_x22,unaff_x20,plVar33);
            plVar14 = plStack_1d8;
            func_0x00023304(plStack_1d0,unaff_x24);
            FUN_000f2290(unaff_x27,plVar30,plVar24,plVar31);
            FUN_000f2290(plVar14,unaff_x22,unaff_x20,plVar33);
            plStack_230 = unaff_x27;
            FUN_00199188(unaff_x27,plVar14);
            plVar24 = plStack_218;
            plVar16 = plStack_230;
            if (((ulong)unaff_x27 & 1) != 0) {
              uVar10 = (uint)((ulong)plStack_1c8 >> 0x20);
              uVar20 = uVar10 >> 0x1e;
              iVar29 = (int)plVar30;
              iVar21 = (int)((ulong)plVar30 >> 0x20);
              if ((ulong)plStack_1c8 >> 0x3e == 3) {
                uVar23 = 0;
                if ((((plVar30 != (long *)0x0) || (plStack_1c8 != (long *)0xc000000000000000)) ||
                    ((ulong)unaff_x20 >> 0x3e < 3)) ||
                   ((uVar23 = 0, unaff_x22 != (long *)0x0 ||
                    (unaff_x20 != (long *)0xc000000000000000)))) goto LAB_00146eec;
                unaff_x22 = (long *)0x0;
                unaff_x20 = (long *)0xc000000000000000;
LAB_0014701c:
                FUN_000f2330(plVar14,unaff_x22,unaff_x20,plVar33);
                unaff_x27 = plStack_230;
                goto LAB_00146420;
              }
              if (uVar10 >> 0x1e < 2) {
                if (uVar20 == 0) {
                  uVar23 = (ulong)plStack_1c8 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar21,iVar29)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x147808);
                    (*pcVar11)();
                  }
                  uVar23 = (ulong)(iVar21 - iVar29);
                }
              }
              else if (uVar20 == 2) {
                uVar23 = plVar30[3] - plVar30[2];
                if (SBORROW8(plVar30[3],plVar30[2])) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x147804);
                  (*pcVar11)();
                }
              }
              else {
                uVar23 = 0;
              }
LAB_00146eec:
              if (uVar9 >> 0x1e < 2) {
                if (uVar9 >> 0x1e == 0) {
                  uVar27 = (ulong)unaff_x20 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar32,iVar22)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1477f8);
                    (*pcVar11)();
                  }
                  uVar27 = (ulong)(iVar32 - iVar22);
                }
              }
              else {
                if (uVar9 >> 0x1e != 2) {
                  if (uVar23 != 0) goto LAB_001475dc;
                  goto LAB_0014701c;
                }
                uVar27 = unaff_x22[3] - unaff_x22[2];
                if (SBORROW8(unaff_x22[3],unaff_x22[2])) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x147800);
                  (*pcVar11)();
                }
              }
              if (uVar23 != uVar27) goto LAB_001475dc;
              if ((long)uVar23 < 1) goto LAB_0014701c;
              if (uVar20 < 2) {
                if (uVar20 != 0) {
                  lVar26 = (long)iVar29;
                  plVar14 = (long *)(((long)plVar30 >> 0x20) - lVar26);
                  if ((long)plVar30 >> 0x20 < lVar26) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x147814);
                    (*pcVar11)();
                  }
                  __s10Foundation13__DataStorageC6_bytesSvSgvg();
                  if (unaff_x27 == (long *)0x0) {
                    __s10Foundation13__DataStorageC7_lengthSivg();
                    lVar26 = 0;
LAB_001473dc:
                    lVar19 = 0;
                  }
                  else {
                    plVar31 = unaff_x27;
                    __s10Foundation13__DataStorageC7_offsetSivg();
                    if (SBORROW8(lVar26,(long)plVar31)) {
                    /* WARNING: Does not return */
                      pcVar11 = (code *)SoftwareBreakpoint(1,0x14782c);
                      (*pcVar11)();
                    }
                    lVar26 = (lVar26 - (long)plVar31) + (long)unaff_x27;
                    __s10Foundation13__DataStorageC7_lengthSivg();
                    if (lVar26 == 0) goto LAB_001473dc;
                    if ((long)plVar14 <= (long)plVar31) {
                      plVar31 = plVar14;
                    }
                    lVar19 = (long)plVar31 + lVar26;
                  }
                  plVar33 = plStack_1e8;
                  plVar14 = plStack_218;
                  FUN_000382a0(abStack_1b0,lVar26,lVar19,unaff_x22,plStack_1e8);
                  plVar31 = plVar33;
                  plStack_218 = plVar14;
                  goto LAB_0014749c;
                }
                abStack_1b0[6] = (byte)((ulong)plVar30 >> 0x30);
                abStack_1b0[7] = (byte)((ulong)plVar30 >> 0x38);
                abStack_1b0[8] = (byte)plStack_1c8;
                abStack_1b0[9] = (byte)((ulong)plStack_1c8 >> 8);
                abStack_1b0[10] = (byte)((ulong)plStack_1c8 >> 0x10);
                abStack_1b0[0xb] = (byte)((ulong)plStack_1c8 >> 0x18);
                abStack_1b0[0xc] = (byte)((ulong)plStack_1c8 >> 0x20);
                abStack_1b0[0xd] = (byte)((ulong)plStack_1c8 >> 0x28);
                abStack_1b0[0] = (byte)plVar30;
                abStack_1b0[1] = uVar4;
                abStack_1b0[2] = uVar5;
                abStack_1b0[3] = uVar6;
                abStack_1b0[4] = uVar7;
                abStack_1b0[5] = uVar8;
                FUN_000382a0(abStack_1b9,abStack_1b0,
                             abStack_1b0 + ((ulong)plStack_1c8 >> 0x30 & 0xff),unaff_x22,unaff_x20);
                plVar14 = plStack_1d8;
                plStack_218 = plVar24;
                FUN_000f2330(plStack_1d8,unaff_x22,unaff_x20,uStack_208);
                plVar31 = unaff_x20;
                unaff_x27 = plStack_230;
                bVar2 = abStack_1b9[0];
              }
              else {
                if (uVar20 != 2) {
                  abStack_1b0[8] = 0;
                  abStack_1b0[9] = 0;
                  abStack_1b0[10] = 0;
                  abStack_1b0[0xb] = 0;
                  abStack_1b0[0xc] = 0;
                  abStack_1b0[0xd] = 0;
                  abStack_1b0[0] = 0;
                  abStack_1b0[1] = 0;
                  abStack_1b0[2] = 0;
                  abStack_1b0[3] = 0;
                  abStack_1b0[4] = 0;
                  abStack_1b0[5] = 0;
                  abStack_1b0[6] = 0;
                  abStack_1b0[7] = 0;
                  FUN_000382a0(abStack_1b9,abStack_1b0,abStack_1b0,unaff_x22,unaff_x20);
                  plVar14 = plStack_1d8;
                  plStack_218 = plVar24;
                  FUN_000f2330(plStack_1d8,unaff_x22,unaff_x20,uStack_208);
                  plVar31 = unaff_x20;
                  unaff_x27 = plVar16;
                  bVar2 = abStack_1b9[0];
                  goto joined_r0x001472f0;
                }
                lVar26 = plVar30[2];
                plStack_220 = (long *)plVar30[3];
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                if (unaff_x27 == (long *)0x0) {
                  lVar19 = 0;
                }
                else {
                  plVar14 = unaff_x27;
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar26,(long)plVar14)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x147828);
                    (*pcVar11)();
                  }
                  lVar19 = (lVar26 - (long)plVar14) + (long)unaff_x27;
                  unaff_x27 = plVar14;
                }
                plVar14 = (long *)((long)plStack_220 - lVar26);
                if (SBORROW8((long)plStack_220,lVar26)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x14781c);
                  (*pcVar11)();
                }
                plVar31 = (long *)((ulong)plStack_1c8 & 0x3fffffffffffffff);
                __s10Foundation13__DataStorageC7_lengthSivg();
                plVar33 = plStack_1e8;
                plVar24 = plStack_218;
                if (lVar19 == 0) {
                  lVar26 = 0;
                }
                else {
                  if ((long)plVar14 <= (long)unaff_x27) {
                    unaff_x27 = plVar14;
                  }
                  lVar26 = (long)unaff_x27 + lVar19;
                }
                FUN_000382a0(abStack_1b0,lVar19,lVar26,unaff_x22,plStack_1e8);
                plStack_218 = plVar24;
LAB_0014749c:
                plVar14 = plStack_1d8;
                FUN_000f2330(plStack_1d8,unaff_x22,plVar33,uStack_208);
                unaff_x27 = plVar16;
                bVar2 = abStack_1b0[0];
              }
joined_r0x001472f0:
              plVar33 = unaff_x22;
              if ((bVar2 & 1) == 0) goto LAB_001475fc;
              plVar31 = (long *)(ulong)uStack_204;
              goto LAB_00146420;
            }
            goto LAB_001475dc;
          }
          plVar34 = unaff_x27;
          if ((uVar9 >> 0x1c & 0xfffffc03 | (uStack_208 & 0x3f) << 2) == 5) {
            plStack_228 = plVar30;
            FUN_000f2290(unaff_x27,plVar30,plVar24,plVar31);
            func_0x00023304(plVar16,plStack_200);
            plVar14 = plStack_1d8;
            FUN_000f2290(plStack_1d8,unaff_x22,unaff_x20,plVar33);
            plVar30 = plStack_228;
            func_0x00023304(plStack_1d0,plStack_1e0);
            FUN_000f2290(unaff_x27,plVar30,plVar24,plVar31);
            FUN_000f2290(plVar14,unaff_x22,unaff_x20,plVar33);
            FUN_00146270(unaff_x27,plVar14);
            plVar16 = plStack_218;
            if (((ulong)plVar34 & 1) == 0) {
LAB_0014768c:
              plStack_230 = unaff_x27;
              FUN_000f2330(plVar14,unaff_x22,unaff_x20,plVar33);
              plVar15 = plVar31;
              plVar34 = unaff_x27;
            }
            else {
              uVar23 = (ulong)unaff_x20 & 0xcfffffffffffffff;
              uVar10 = (uint)((ulong)plStack_1c8 >> 0x20);
              uVar20 = uVar10 >> 0x1e;
              iVar29 = (int)plVar30;
              iVar21 = (int)((ulong)plVar30 >> 0x20);
              plVar15 = plVar14;
              if ((ulong)plStack_1c8 >> 0x3e == 3) {
                uVar27 = 0;
                if (((plVar30 == (long *)0x0) &&
                    (((ulong)plStack_1c8 & 0xcfffffffffffffff) == 0xc000000000000000)) &&
                   ((2 < (ulong)unaff_x20 >> 0x3e &&
                    ((uVar27 = 0, unaff_x22 == (long *)0x0 &&
                     (plVar24 = (long *)0x0, uVar23 == 0xc000000000000000)))))) goto LAB_00147194;
              }
              else if (uVar10 >> 0x1e < 2) {
                if (uVar20 == 0) {
                  uVar27 = (ulong)plStack_1c8 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar21,iVar29)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x14780c);
                    (*pcVar11)();
                  }
                  uVar27 = (ulong)(iVar21 - iVar29);
                }
              }
              else if (uVar20 == 2) {
                uVar27 = plVar30[3] - plVar30[2];
                if (SBORROW8(plVar30[3],plVar30[2])) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x147810);
                  (*pcVar11)();
                }
              }
              else {
                uVar27 = 0;
              }
              plVar24 = unaff_x22;
              if (uVar9 >> 0x1e < 2) {
                if (uVar9 >> 0x1e == 0) {
                  uVar28 = (ulong)unaff_x20 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar32,iVar22)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1477f4);
                    (*pcVar11)();
                  }
                  uVar28 = (ulong)(iVar32 - iVar22);
                }
              }
              else {
                if (uVar9 >> 0x1e != 2) {
                  if (uVar27 == 0) goto LAB_00147194;
                  goto LAB_0014768c;
                }
                uVar28 = unaff_x22[3] - unaff_x22[2];
                if (SBORROW8(unaff_x22[3],unaff_x22[2])) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1477fc);
                  (*pcVar11)();
                }
              }
              if (uVar27 != uVar28) goto LAB_0014768c;
              if ((long)uVar27 < 1) goto LAB_00147194;
              if (uVar20 < 2) {
                if (uVar20 == 0) {
                  abStack_1b0[0] = (byte)plVar30;
                  abStack_1b0[1] = (byte)((ulong)plVar30 >> 8);
                  abStack_1b0[2] = (byte)((ulong)plVar30 >> 0x10);
                  abStack_1b0[3] = (byte)((ulong)plVar30 >> 0x18);
                  abStack_1b0[4] = (byte)((ulong)plVar30 >> 0x20);
                  abStack_1b0[5] = (byte)((ulong)plVar30 >> 0x28);
                  abStack_1b0[6] = (byte)((ulong)plVar30 >> 0x30);
                  abStack_1b0[7] = (byte)((ulong)plVar30 >> 0x38);
                  abStack_1b0[8] = (byte)plStack_1c8;
                  abStack_1b0[9] = (byte)((ulong)plStack_1c8 >> 8);
                  abStack_1b0[10] = (byte)((ulong)plStack_1c8 >> 0x10);
                  abStack_1b0[0xb] = (byte)((ulong)plStack_1c8 >> 0x18);
                  abStack_1b0[0xc] = (byte)((ulong)plStack_1c8 >> 0x20);
                  abStack_1b0[0xd] = (byte)((ulong)plStack_1c8 >> 0x28);
                  plStack_230 = unaff_x27;
                  FUN_000382a0(abStack_1b9,abStack_1b0,
                               abStack_1b0 + ((ulong)plStack_1c8 >> 0x30 & 0xff),unaff_x22);
                  goto LAB_0014738c;
                }
                lVar26 = (long)iVar29;
                plVar31 = (long *)(((long)plVar30 >> 0x20) - lVar26);
                if ((long)plVar30 >> 0x20 < lVar26) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x147818);
                  plStack_230 = unaff_x27;
                  (*pcVar11)();
                }
                plStack_230 = unaff_x27;
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                if (plVar34 == (long *)0x0) {
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  lVar26 = 0;
LAB_0014741c:
                  lVar19 = 0;
                }
                else {
                  plVar16 = plVar34;
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar26,(long)plVar16)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x147830);
                    (*pcVar11)();
                  }
                  lVar26 = (lVar26 - (long)plVar16) + (long)plVar34;
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  unaff_x27 = plVar34;
                  if (lVar26 == 0) goto LAB_0014741c;
                  if ((long)plVar31 <= (long)plVar16) {
                    plVar16 = plVar31;
                  }
                  lVar19 = (long)plVar16 + lVar26;
                }
                plVar24 = plStack_1e8;
                plVar16 = plStack_218;
                FUN_000382a0(abStack_1b0,lVar26,lVar19,unaff_x22,uVar23);
                plVar14 = plStack_1d8;
                plStack_218 = plVar16;
                FUN_000f2330(plStack_1d8,unaff_x22,plVar24,uStack_208);
                plVar34 = unaff_x27;
                unaff_x27 = plStack_230;
                bVar2 = abStack_1b0[0];
              }
              else if (uVar20 == 2) {
                lVar26 = plVar30[2];
                plVar31 = (long *)plVar30[3];
                plStack_230 = unaff_x27;
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                plVar30 = plVar34;
                if (plVar34 != (long *)0x0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar26,(long)plVar30)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x147824);
                    (*pcVar11)();
                  }
                  plVar34 = (long *)((lVar26 - (long)plVar30) + (long)plVar34);
                }
                if (SBORROW8((long)plVar31,lVar26)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x147820);
                  (*pcVar11)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg(plStack_1c8);
                plVar16 = plStack_218;
                if ((long)plVar31 - lVar26 <= (long)plVar30) {
                  plVar30 = (long *)((long)plVar31 - lVar26);
                }
                lVar26 = 0;
                if (plVar34 != (long *)0x0) {
                  lVar26 = (long)plVar30 + (long)plVar34;
                }
                FUN_000382a0(abStack_1b0,plVar34,lVar26,unaff_x22,uVar23);
                plVar14 = plStack_1d8;
                plStack_218 = plVar16;
                FUN_000f2330(plStack_1d8,unaff_x22,plStack_1e8,uStack_208);
                plVar30 = plStack_228;
                unaff_x27 = plStack_230;
                bVar2 = abStack_1b0[0];
              }
              else {
                abStack_1b0[8] = 0;
                abStack_1b0[9] = 0;
                abStack_1b0[10] = 0;
                abStack_1b0[0xb] = 0;
                abStack_1b0[0xc] = 0;
                abStack_1b0[0xd] = 0;
                abStack_1b0[0] = 0;
                abStack_1b0[1] = 0;
                abStack_1b0[2] = 0;
                abStack_1b0[3] = 0;
                abStack_1b0[4] = 0;
                abStack_1b0[5] = 0;
                abStack_1b0[6] = 0;
                abStack_1b0[7] = 0;
                plStack_230 = unaff_x27;
                FUN_000382a0(abStack_1b9,abStack_1b0,abStack_1b0,unaff_x22);
                unaff_x20 = plStack_1e8;
LAB_0014738c:
                plVar14 = plStack_1d8;
                plStack_218 = plVar16;
                FUN_000f2330(plStack_1d8,unaff_x22,unaff_x20,uStack_208);
                plVar34 = unaff_x27;
                unaff_x27 = plStack_230;
                bVar2 = abStack_1b9[0];
              }
              plVar15 = plVar31;
              plStack_230 = unaff_x27;
              if ((bVar2 & 1) != 0) {
                plVar31 = (long *)(ulong)uStack_204;
                goto LAB_00146420;
              }
            }
            plVar24 = plStack_1c8;
            unaff_x27 = plStack_230;
            plVar31 = (long *)(ulong)uStack_204;
            FUN_000f2330(plStack_230,plVar30,plStack_1c8,plVar31);
            FUN_000f2330(plVar14,unaff_x22,plStack_1e8,uStack_208);
            FUN_00023358(plStack_1d0,plStack_1e0);
            unaff_x19 = unaff_x27;
            unaff_x20 = plVar31;
            unaff_x21 = plVar24;
            unaff_x22 = plVar14;
            unaff_x24 = plVar30;
          }
          else {
            FUN_000f2290(unaff_x27,plVar30,plVar24,plVar31);
            func_0x00023304(plVar16,plStack_200);
            unaff_x28 = plStack_1d8;
            FUN_000f2290(plStack_1d8,unaff_x22,unaff_x20,plVar33);
            unaff_x19 = plStack_1d0;
            plVar16 = plStack_1e0;
            func_0x00023304(plStack_1d0,plStack_1e0);
            FUN_000f2290(unaff_x27,plVar30,plVar24,plVar31);
            FUN_000f2290(unaff_x28,unaff_x22,unaff_x20,plVar33);
            FUN_000f2330(unaff_x28,unaff_x22,unaff_x20,plVar33);
            FUN_000f2330(unaff_x27,plVar30,plVar24,plVar31);
            FUN_000f2330(unaff_x28,unaff_x22,unaff_x20,plVar33);
            FUN_00023358(unaff_x19,plVar16);
            unaff_x21 = plVar31;
            unaff_x24 = plVar24;
          }
LAB_00147640:
          FUN_000f2330(unaff_x27,plVar30,plVar24,plVar31);
          plVar16 = plStack_1f8;
          param_2 = plStack_200;
LAB_00147648:
          FUN_00023358(plVar16);
          plVar30 = plVar15;
          unaff_x27 = plVar34;
          goto LAB_0014764c;
        }
        if (uVar10 != 0) {
          if (uVar10 == 1) {
            if ((uVar9 >> 0x1c & 0xfffffc03 | (uVar20 & 0x3f) << 2) != 1) goto LAB_00147554;
            FUN_000f2290(unaff_x27,plVar30,plVar24,plVar31);
            func_0x00023304(plVar16,plVar14);
            FUN_000f2290(plStack_1d8,plStack_1f0,unaff_x20,plVar33);
            plVar14 = plStack_1d8;
            func_0x00023304(plStack_1d0,plStack_1e0);
            FUN_000f2290(unaff_x27,plVar30,plVar24,plVar31);
            FUN_000f2290(plVar14,plStack_1f0,unaff_x20,plVar33);
            plVar33 = unaff_x27;
            if ((double)unaff_x27 == (double)unaff_x21) goto LAB_00146420;
          }
          else {
            if ((uVar9 >> 0x1c & 0xfffffc03 | (uVar20 & 0x3f) << 2) == 2) {
              if ((unaff_x27 != unaff_x21) || (plVar30 != unaff_x22)) {
                plVar14 = unaff_x27;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (unaff_x27,plVar30,unaff_x21,unaff_x22,0);
                plVar24 = plStack_1c8;
                plStack_220 = (long *)CONCAT44(plStack_220._4_4_,(int)plVar14);
                FUN_000f2290(unaff_x27,plVar30,plStack_1c8,plVar31);
                func_0x00023304(plVar16,plStack_200);
                plVar16 = plStack_1e8;
                FUN_000f2290(plStack_1d8,unaff_x22,plStack_1e8,plVar33);
                plVar14 = plStack_1d8;
                func_0x00023304(plStack_1d0,plStack_1e0);
                FUN_000f2290(unaff_x27,plVar30,plVar24,plVar31);
                FUN_000f2290(plVar14,unaff_x22,plVar16,plVar33);
                FUN_000f2330(plVar14,unaff_x22,plVar16,plVar33);
                plVar33 = unaff_x22;
                if (((ulong)plStack_220 & 1) != 0) goto LAB_00146420;
                goto LAB_001475fc;
              }
              FUN_000f2290(unaff_x27,plVar30,plVar24,plVar31);
              func_0x00023304(plVar16,plStack_200);
              FUN_000f2290(unaff_x27,plVar30,unaff_x20,plVar33);
              plVar15 = plStack_1d8;
              func_0x00023304(plStack_1d0,plStack_1e0);
              FUN_000f2290(unaff_x27,plVar30,plVar24,plVar31);
              FUN_000f2290(unaff_x27,plVar30,unaff_x20,plVar33);
              plVar14 = unaff_x27;
              plVar24 = plVar30;
LAB_00147194:
              FUN_000f2330(plVar14,plVar24,unaff_x20,plVar33);
              plVar14 = plVar15;
              goto LAB_00146420;
            }
LAB_00147554:
            FUN_000f2290(unaff_x27,plVar30,plVar24,plVar31);
            func_0x00023304(plVar16,plStack_200);
            FUN_000f2290(unaff_x21,unaff_x22,unaff_x20,plVar33);
            func_0x00023304(plStack_1d0,unaff_x24);
            plStack_230 = unaff_x27;
            FUN_000f2290(unaff_x27,plVar30,plVar24,plVar31);
            FUN_000f2290(unaff_x21,unaff_x22,unaff_x20,plVar33);
            unaff_x19 = plVar24;
            plVar14 = unaff_x21;
            unaff_x28 = plVar16;
LAB_001475dc:
            FUN_000f2330(plVar14,unaff_x22,unaff_x20,plVar33);
            plVar31 = unaff_x20;
            plVar33 = unaff_x22;
            unaff_x27 = plStack_230;
          }
LAB_001475fc:
          FUN_000f2330(unaff_x27,plVar30,plStack_1c8,uStack_204);
          unaff_x20 = plVar31;
          unaff_x21 = plVar14;
LAB_00147614:
          FUN_000f2330(unaff_x21,plStack_1f0,plStack_1e8,uStack_208);
          FUN_00023358(plStack_1d0,plStack_1e0);
          plVar31 = (long *)(ulong)uStack_204;
          plVar24 = plStack_1c8;
          unaff_x22 = plVar33;
          unaff_x24 = plVar30;
          plVar34 = unaff_x27;
          goto LAB_00147640;
        }
        if ((uVar9 >> 0x1c & 0xfffffc03) != 0 || (bVar3 & 0x3f) != 0) goto LAB_00147554;
        plStack_220 = (long *)0x0;
        if (((ulong)plVar30 & 0xff) != 1) {
          plStack_220 = unaff_x27;
        }
        uStack_238 = (ulong)unaff_x22 & 0xff;
        FUN_000f2290(unaff_x27,plVar30,plVar24,plVar31);
        plVar34 = plStack_1f0;
        func_0x00023304(plVar16,plVar14);
        unaff_x20 = plStack_1e8;
        FUN_000f2290(unaff_x21,plVar34,plStack_1e8,plVar33);
        func_0x00023304(plStack_1d0,plStack_1e0);
        FUN_000f2290(unaff_x27,plVar30,plVar24,plVar31);
        FUN_000f2290(unaff_x21,plVar34,unaff_x20,plVar33);
        plVar16 = unaff_x27;
        FUN_000f2330(unaff_x27,plVar30,plVar24,plVar31);
        if (uStack_238 != 1) {
          if (plStack_220 == unaff_x21) goto LAB_00146438;
          goto LAB_00147614;
        }
        if (plStack_220 != (long *)0x0) goto LAB_00147614;
LAB_00146438:
        plVar33 = plStack_1c8;
        plVar24 = plStack_1d0;
        unaff_x22 = plStack_1e0;
        plVar31 = plStack_1e8;
        unaff_x24 = plStack_1f8;
        param_2 = plStack_200;
        plVar14 = plStack_218;
        uVar9 = (uint)((ulong)plStack_200 >> 0x20);
        uVar20 = uVar9 >> 0x1e;
        uVar10 = (uint)((ulong)plStack_1e0 >> 0x20);
        uVar25 = uVar10 >> 0x1e;
        iVar32 = (int)plStack_1f8;
        if ((ulong)plStack_200 >> 0x3e != 3) {
          if (1 < uVar9 >> 0x1e) {
            if (uVar20 == 2) {
              uVar23 = plStack_1f8[3] - plStack_1f8[2];
              if (SBORROW8(plStack_1f8[3],plStack_1f8[2])) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1477e0);
                (*pcVar11)();
              }
            }
            else {
              uVar23 = 0;
            }
            goto joined_r0x00146898;
          }
          if (uVar20 == 0) {
            uVar23 = (ulong)plStack_200 >> 0x30 & 0xff;
          }
          else {
            iVar22 = (int)((ulong)plStack_1f8 >> 0x20);
            if (SBORROW4(iVar22,iVar32)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1477dc);
              (*pcVar11)();
            }
            uVar23 = (ulong)(iVar22 - iVar32);
          }
          if (1 < uVar10 >> 0x1e) goto LAB_001465ac;
LAB_001466f0:
          if (uVar25 == 0) {
            uVar27 = (ulong)plStack_1e0 >> 0x30 & 0xff;
          }
          else {
            iVar22 = (int)((ulong)plStack_1d0 >> 0x20);
            if (SBORROW4(iVar22,(int)plStack_1d0)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1477d8);
              (*pcVar11)();
            }
            uVar27 = (ulong)(iVar22 - (int)plStack_1d0);
          }
LAB_00146710:
          if (uVar23 != uVar27) {
LAB_001474c0:
            FUN_000f2330(unaff_x21,plStack_1f0,plStack_1e8,uStack_208);
            FUN_00023358(plStack_1d0,unaff_x22);
            FUN_000f2330(unaff_x27,plVar30,plStack_1c8,uStack_204);
            plVar16 = unaff_x24;
            plVar15 = plVar30;
            plVar34 = unaff_x27;
            goto LAB_00147648;
          }
          if ((long)uVar23 < 1) {
LAB_001462d4:
            FUN_000f2330(unaff_x21,plStack_1f0,plStack_1e8,uStack_208);
            FUN_00023358(plStack_1d0,unaff_x22);
            FUN_000f2330(unaff_x27,plVar30,plStack_1c8,uStack_204);
            plVar16 = unaff_x24;
            goto LAB_0014630c;
          }
          if (uVar20 < 2) {
            if (uVar20 == 0) {
              abStack_1b0[0] = (byte)plStack_1f8;
              abStack_1b0[1] = (byte)((ulong)plStack_1f8 >> 8);
              abStack_1b0[2] = (byte)((ulong)plStack_1f8 >> 0x10);
              abStack_1b0[3] = (byte)((ulong)plStack_1f8 >> 0x18);
              abStack_1b0[4] = (byte)((ulong)plStack_1f8 >> 0x20);
              abStack_1b0[5] = (byte)((ulong)plStack_1f8 >> 0x28);
              abStack_1b0[6] = (byte)((ulong)plStack_1f8 >> 0x30);
              abStack_1b0[7] = (byte)((ulong)plStack_1f8 >> 0x38);
              abStack_1b0[8] = (byte)plStack_200;
              abStack_1b0[9] = (byte)((ulong)plStack_200 >> 8);
              abStack_1b0[10] = (byte)((ulong)plStack_200 >> 0x10);
              abStack_1b0[0xb] = (byte)((ulong)plStack_200 >> 0x18);
              abStack_1b0[0xc] = (byte)((ulong)plStack_200 >> 0x20);
              abStack_1b0[0xd] = (byte)((ulong)plStack_200 >> 0x28);
              FUN_000382a0(abStack_1b9,abStack_1b0,abStack_1b0 + ((ulong)plStack_200 >> 0x30 & 0xff)
                           ,plStack_1d0,plStack_1e0);
              plStack_218 = plVar14;
              FUN_000f2330(unaff_x21,plStack_1f0,plVar31,uStack_208);
              FUN_00023358(plVar24,unaff_x22);
              FUN_000f2330(unaff_x27,plVar30,plStack_1c8,uStack_204);
              unaff_x24 = plStack_1f8;
              param_2 = plStack_200;
              plVar24 = unaff_x20;
              plVar16 = unaff_x21;
              goto LAB_00146970;
            }
            lVar26 = (long)iVar32;
            plVar14 = (long *)(((long)plStack_1f8 >> 0x20) - lVar26);
            plStack_230 = unaff_x27;
            if ((long)plStack_1f8 >> 0x20 < lVar26) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1477e4);
              (*pcVar11)();
            }
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            if (plVar16 == (long *)0x0) {
              plStack_228 = plVar30;
              __s10Foundation13__DataStorageC7_lengthSivg();
              lVar26 = 0;
              lVar19 = 0;
              plVar16 = unaff_x27;
            }
            else {
              plVar31 = plVar16;
              plStack_228 = plVar30;
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar26,(long)plVar31)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1477f0);
                (*pcVar11)();
              }
              lVar1 = (lVar26 - (long)plVar31) + (long)plVar16;
              __s10Foundation13__DataStorageC7_lengthSivg();
              if ((long)plVar14 <= (long)plVar31) {
                plVar31 = plVar14;
              }
              lVar26 = 0;
              if (lVar1 != 0) {
                lVar26 = lVar1;
              }
              lVar19 = 0;
              if (lVar1 != 0) {
                lVar19 = (long)plVar31 + lVar1;
              }
            }
            plVar14 = plStack_1d0;
            unaff_x22 = plStack_1e0;
            unaff_x21 = plStack_218;
            FUN_000382a0(abStack_1b0,lVar26,lVar19,plStack_1d0,plStack_1e0);
            plStack_218 = unaff_x21;
            FUN_000f2330(plStack_1d8,plStack_1f0,plStack_1e8,uStack_208);
            FUN_00023358(plVar14,unaff_x22);
            FUN_000f2330(plStack_230,plStack_228,plVar33,uStack_204);
            plVar24 = plStack_1f8;
            unaff_x20 = param_2;
            unaff_x27 = plVar30;
LAB_00146e80:
            FUN_00023358(plVar24);
            plVar30 = unaff_x27;
            unaff_x24 = plVar33;
            unaff_x27 = plVar16;
            bVar2 = abStack_1b0[0];
          }
          else {
            if (uVar20 == 2) {
              unaff_x20 = (long *)(ulong)uStack_204;
              lVar26 = plStack_1f8[2];
              lVar19 = plStack_1f8[3];
              plStack_228 = plVar30;
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              plVar14 = plVar16;
              plVar30 = plVar16;
              if (plVar16 != (long *)0x0) {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar26,(long)plVar14)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1477ec);
                  (*pcVar11)();
                }
                plVar30 = (long *)((lVar26 - (long)plVar14) + (long)plVar16);
              }
              plVar31 = (long *)(lVar19 - lVar26);
              if (SBORROW8(lVar19,lVar26)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1477e8);
                (*pcVar11)();
              }
              __s10Foundation13__DataStorageC7_lengthSivg();
              plVar33 = plStack_1c8;
              plVar16 = plStack_1d0;
              plVar15 = plStack_1e0;
              plVar24 = plStack_1f8;
              unaff_x21 = plStack_218;
              if (plVar30 == (long *)0x0) {
                lVar26 = 0;
              }
              else {
                if ((long)plVar31 <= (long)plVar14) {
                  plVar14 = plVar31;
                }
                lVar26 = (long)plVar14 + (long)plVar30;
              }
              FUN_000382a0(abStack_1b0,plVar30,lVar26,plStack_1d0,plStack_1e0);
              plStack_218 = unaff_x21;
              FUN_000f2330(plStack_1d8,plStack_1f0,plStack_1e8,uStack_208);
              FUN_00023358(plVar16,plVar15);
              FUN_000f2330(unaff_x27,plStack_228,plVar33,unaff_x20);
              unaff_x22 = plVar24;
              goto LAB_00146e80;
            }
            abStack_1b0[8] = 0;
            abStack_1b0[9] = 0;
            abStack_1b0[10] = 0;
            abStack_1b0[0xb] = 0;
            abStack_1b0[0xc] = 0;
            abStack_1b0[0xd] = 0;
            abStack_1b0[0] = 0;
            abStack_1b0[1] = 0;
            abStack_1b0[2] = 0;
            abStack_1b0[3] = 0;
            abStack_1b0[4] = 0;
            abStack_1b0[5] = 0;
            abStack_1b0[6] = 0;
            abStack_1b0[7] = 0;
            plStack_228 = plVar30;
            FUN_000382a0(abStack_1b9,abStack_1b0,abStack_1b0,plStack_1d0,plStack_1e0);
            plStack_218 = plVar14;
            FUN_000f2330(plStack_1d8,plStack_1f0,plStack_1e8,uStack_208);
            FUN_00023358(plVar24,unaff_x22);
            FUN_000f2330(unaff_x27,plStack_228,plStack_1c8,uStack_204);
            plVar16 = unaff_x24;
LAB_00146970:
            FUN_00023358(unaff_x24);
            unaff_x20 = plVar24;
            unaff_x21 = plVar14;
            unaff_x24 = plVar16;
            bVar2 = abStack_1b9[0];
          }
          if ((bVar2 & 1) != 0) goto LAB_00146310;
          goto LAB_0014764c;
        }
        uVar23 = 0;
        if ((((plStack_1f8 != (long *)0x0) || (plStack_200 != (long *)0xc000000000000000)) ||
            ((ulong)plStack_1e0 >> 0x3e < 3)) ||
           ((uVar23 = 0, plStack_1d0 != (long *)0x0 || (plStack_1e0 != (long *)0xc000000000000000)))
           ) {
joined_r0x00146898:
          if (uVar25 < 2) goto LAB_001466f0;
LAB_001465ac:
          if (uVar25 == 2) {
            uVar27 = plStack_1d0[3] - plStack_1d0[2];
            if (SBORROW8(plStack_1d0[3],plStack_1d0[2])) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1477d4);
              (*pcVar11)();
            }
            goto LAB_00146710;
          }
          if (uVar23 == 0) goto LAB_001462d4;
          goto LAB_001474c0;
        }
        FUN_000f2330(unaff_x21,plStack_1f0,plStack_1e8,uStack_208);
        FUN_00023358(0,0xc000000000000000);
        FUN_000f2330(unaff_x27,plVar30,plStack_1c8,uStack_204);
        param_2 = (long *)0xc000000000000000;
        plVar16 = (long *)0x0;
LAB_0014630c:
        FUN_00023358(plVar16);
LAB_00146310:
        unaff_x28 = unaff_x28 + 6;
        unaff_x19 = unaff_x19 + 6;
        lVar26 = lStack_210 + -1;
      } while (lVar26 != 0);
    }
    plVar16 = (long *)((long)&MACH_HEADER.magic + 1);
  }
  else {
LAB_0014764c:
    plVar16 = (long *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_170) {
    return plVar16;
  }
  ___stack_chk_fail();
  lVar26 = plVar16[2];
  if (lVar26 != param_2[2]) {
    return (long *)0x0;
  }
  if ((lVar26 == 0) || (plVar16 == param_2)) {
    return (long *)((long)&MACH_HEADER.magic + 1);
  }
  pcStack_248 = FUN_00147834;
  plVar14 = plVar16 + 4;
  param_2 = param_2 + 4;
  plStack_290 = unaff_x28;
  plStack_288 = unaff_x27;
  plStack_280 = unaff_x24;
  plStack_278 = plVar30;
  plStack_270 = unaff_x22;
  plStack_268 = unaff_x21;
  plStack_260 = unaff_x20;
  plStack_258 = unaff_x19;
  ppuStack_250 = &puStack_100;
  while( true ) {
    lVar26 = lVar26 + -1;
    uStack_348 = plVar14[9];
    uStack_350 = plVar14[8];
    lStack_338 = plVar14[0xb];
    uStack_340 = plVar14[10];
    lStack_328 = plVar14[0xd];
    uStack_330 = plVar14[0xc];
    lStack_318 = plVar14[0xf];
    uStack_320 = plVar14[0xe];
    lStack_388 = plVar14[1];
    lStack_390 = *plVar14;
    uStack_378 = plVar14[3];
    lStack_380 = plVar14[2];
    lStack_368 = plVar14[5];
    uVar23 = plVar14[4];
    lStack_358 = plVar14[7];
    uStack_360 = plVar14[6];
    lStack_308 = param_2[1];
    lStack_310 = *param_2;
    uStack_2f8 = param_2[3];
    lStack_300 = param_2[2];
    lStack_2e8 = param_2[5];
    uStack_2f0 = param_2[4];
    lStack_2d8 = param_2[7];
    uStack_2e0 = param_2[6];
    lStack_2c8 = param_2[9];
    uStack_2d0 = param_2[8];
    lStack_2b8 = param_2[0xb];
    uStack_2c0 = param_2[10];
    lStack_2a8 = param_2[0xd];
    uStack_2b0 = param_2[0xc];
    lStack_298 = param_2[0xf];
    lStack_2a0 = param_2[0xe];
    uStack_370 = uVar23;
    if ((char)lStack_308 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x001478e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_007daec0)[lStack_310] * 4 + 0x1478e4))();
      return plVar16;
    }
    if (lStack_390 != lStack_310) {
      return (long *)0x0;
    }
    if ((char)uStack_2f8 == '\x01') {
      if (lStack_300 < 2) {
        if (lStack_300 == 0) {
          if (lStack_380 != 0) {
            return (long *)0x0;
          }
        }
        else if (lStack_380 != 1) {
          return (long *)0x0;
        }
      }
      else if (lStack_300 == 2) {
        if (lStack_380 != 2) {
          return (long *)0x0;
        }
      }
      else if (lStack_380 != 3) {
        return (long *)0x0;
      }
    }
    else if (lStack_380 != lStack_300) {
      return (long *)0x0;
    }
    uStack_378._4_4_ = (int)((ulong)uStack_378 >> 0x20);
    uStack_2f8._4_4_ = (int)((ulong)uStack_2f8 >> 0x20);
    if (uStack_378._4_4_ != uStack_2f8._4_4_) {
      return (long *)0x0;
    }
    if (((uVar23 != uStack_2f0) || (lStack_368 != lStack_2e8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar23 & 1) == 0)) {
      return (long *)0x0;
    }
    if (((uStack_360 != uStack_2e0) || (lStack_358 != lStack_2d8)) &&
       (uVar23 = uStack_360,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
       , (uVar23 & 1) == 0)) {
      return (long *)0x0;
    }
    lVar19 = lStack_2c8;
    uVar23 = uStack_348;
    if ((int)uStack_350 != (int)uStack_2d0) {
      return (long *)0x0;
    }
    if (uStack_350._4_1_ != uStack_2d0._4_1_) {
      return (long *)0x0;
    }
    func_0x00191e84(&lStack_390,auStack_410);
    func_0x00191e84(&lStack_310,auStack_410);
    FUN_001455e0(uVar23,lVar19);
    if (((uVar23 & 1) == 0) ||
       ((((uStack_340 != uStack_2c0 || (lStack_338 != lStack_2b8)) &&
         (uVar23 = uStack_340,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar23 & 1) == 0)) ||
        (((uStack_330 != uStack_2b0 || (lStack_328 != lStack_2a8)) &&
         (uVar23 = uStack_330,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar23 & 1) == 0)))))) {
      func_0x00191ec0(&lStack_310);
      func_0x00191ec0(&lStack_390);
      return (long *)0x0;
    }
    uVar23 = uStack_320;
    FUN_00038814(uStack_320,lStack_318,lStack_2a0,lStack_298);
    func_0x00191ec0(&lStack_310);
    plVar16 = &lStack_390;
    func_0x00191ec0(plVar16);
    if ((uVar23 & 1) == 0) {
      return (long *)0x0;
    }
    if (lVar26 == 0) break;
    plVar14 = plVar14 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return (long *)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 00146270; end: 00147833;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_00146270(long *param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
  bool bVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  long *plVar20;
  ulong uVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *plVar28;
  long *unaff_x24;
  uint uVar29;
  long *plVar30;
  long *unaff_x27;
  long *unaff_x28;
  undefined1 auStack_320 [128];
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined8 uStack_288;
  ulong uStack_280;
  long lStack_278;
  ulong uStack_270;
  long lStack_268;
  undefined8 uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  long lStack_248;
  ulong uStack_240;
  long lStack_238;
  ulong uStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  long lStack_1f8;
  ulong uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  ulong uStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  long lStack_120;
  uint uStack_118;
  uint uStack_114;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  byte abStack_c9 [9];
  byte abStack_c0 [14];
  undefined2 uStack_b2;
  long *plStack_b0;
  byte bStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined1 uStack_88;
  long lStack_80;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar24 = param_1[2];
  if (lVar24 == param_2[2]) {
    if ((lVar24 != 0) && (param_1 != param_2)) {
      plStack_128 = (long *)0x0;
      unaff_x28 = param_1 + 9;
      unaff_x19 = param_2 + 9;
      do {
        unaff_x27 = (long *)unaff_x28[-5];
        unaff_x23 = (long *)unaff_x28[-4];
        plVar20 = (long *)unaff_x28[-3];
        bVar2 = *(byte *)(unaff_x28 + -2);
        plVar28 = (long *)(ulong)bVar2;
        plVar16 = (long *)unaff_x28[-1];
        plVar15 = (long *)*unaff_x28;
        unaff_x21 = (long *)unaff_x19[-5];
        unaff_x22 = (long *)unaff_x19[-4];
        unaff_x20 = (long *)unaff_x19[-3];
        bVar3 = *(byte *)(unaff_x19 + -2);
        plVar30 = (long *)(ulong)bVar3;
        plStack_e0 = (long *)unaff_x19[-1];
        unaff_x24 = (long *)*unaff_x19;
        bVar12 = (((ulong)unaff_x20 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
        uStack_118 = (uint)bVar3;
        uStack_114 = (uint)bVar2;
        uVar4 = (undefined1)((ulong)unaff_x23 >> 8);
        uVar5 = (undefined1)((ulong)unaff_x23 >> 0x10);
        uVar6 = (undefined1)((ulong)unaff_x23 >> 0x18);
        uVar7 = (undefined1)((ulong)unaff_x23 >> 0x20);
        uVar8 = (undefined1)((ulong)unaff_x23 >> 0x28);
        lStack_120 = lVar24;
        plStack_110 = plVar15;
        plStack_108 = plVar16;
        plStack_100 = unaff_x22;
        plStack_f8 = unaff_x20;
        plStack_f0 = unaff_x24;
        plStack_e8 = unaff_x21;
        plStack_d8 = plVar20;
        if (((((ulong)plVar20 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
           (uStack_114 == 0xff)) {
          if (!bVar12 || uStack_118 != 0xff) goto LAB_00147500;
          plVar28 = (long *)((long)&section_000000b8.reserved1 + 3);
          plStack_130 = unaff_x19;
          FUN_000f2290(unaff_x27,unaff_x23,plVar20,0xff);
          func_0x00023304(plVar16,plVar15);
          FUN_000f2290(plStack_e8,unaff_x22,unaff_x20,0xff);
          plVar15 = plStack_e8;
          func_0x00023304(plStack_e0,unaff_x24);
          FUN_000f2290(unaff_x27,unaff_x23,plVar20,0xff);
          unaff_x19 = plStack_130;
          FUN_000f2290(plVar15,unaff_x22,unaff_x20,0xff);
LAB_00146420:
          plVar16 = unaff_x27;
          FUN_000f2330(unaff_x27,unaff_x23,plStack_d8,plVar28);
          unaff_x20 = plVar28;
          unaff_x21 = plVar15;
          goto LAB_00146438;
        }
        if (bVar12 && uStack_118 == 0xff) {
          plVar30 = (long *)((long)&section_000000b8.reserved1 + 3);
LAB_00147500:
          abStack_c0[0] = (byte)unaff_x27;
          abStack_c0[1] = (byte)((ulong)unaff_x27 >> 8);
          abStack_c0[2] = (byte)((ulong)unaff_x27 >> 0x10);
          abStack_c0[3] = (byte)((ulong)unaff_x27 >> 0x18);
          abStack_c0[4] = (byte)((ulong)unaff_x27 >> 0x20);
          abStack_c0[5] = (byte)((ulong)unaff_x27 >> 0x28);
          abStack_c0[6] = (byte)((ulong)unaff_x27 >> 0x30);
          abStack_c0[7] = (byte)((ulong)unaff_x27 >> 0x38);
          uStack_b2 = (undefined2)((ulong)unaff_x23 >> 0x30);
          uStack_88 = SUB81(plVar30,0);
          abStack_c0[8] = (byte)unaff_x23;
          abStack_c0[9] = uVar4;
          abStack_c0[10] = uVar5;
          abStack_c0[0xb] = uVar6;
          abStack_c0[0xc] = uVar7;
          abStack_c0[0xd] = uVar8;
          plStack_b0 = plVar20;
          bStack_a8 = bVar2;
          plStack_a0 = unaff_x21;
          plStack_98 = unaff_x22;
          plStack_90 = unaff_x20;
          FUN_000f2290();
          FUN_000f2290(unaff_x21,unaff_x22,unaff_x20,plVar30);
          param_2 = (long *)0xaf25e8;
          func_0x00191ff4(abStack_c0,0xaf25e8,&UNK_007e08d0);
          unaff_x23 = plVar28;
          unaff_x27 = plVar15;
          goto LAB_0014764c;
        }
        uVar10 = (uint)((ulong)plVar20 >> 0x3c) & 0xfffffc03 | (bVar2 & 0x3f) << 2;
        uVar29 = (uint)bVar3;
        uVar9 = (uint)((ulong)unaff_x20 >> 0x20);
        plVar14 = unaff_x23;
        if (2 < uVar10) {
          if (uVar10 == 3) {
            if ((uVar9 >> 0x1c & 0xfffffc03 | (uStack_118 & 0x3f) << 2) == 3) {
              plStack_130 = (long *)CONCAT44(plStack_130._4_4_,(uint)unaff_x21 ^ (uint)unaff_x27);
              FUN_000f2290(unaff_x27,unaff_x23,plVar20,plVar28);
              plVar13 = plStack_100;
              func_0x00023304(plVar16,plVar15);
              FUN_000f2290(plStack_e8,plVar13,unaff_x20,plVar30);
              plVar15 = plStack_e8;
              func_0x00023304(plStack_e0,plStack_f0);
              FUN_000f2290(unaff_x27,unaff_x23,plVar20,plVar28);
              FUN_000f2290(plVar15,plVar13,unaff_x20,plVar30);
              plVar30 = plVar13;
              if (((ulong)plStack_130 & 1) != 0) goto LAB_001475fc;
              goto LAB_00146420;
            }
            goto LAB_00147554;
          }
          iVar19 = (int)unaff_x22;
          iVar23 = (int)((ulong)unaff_x22 >> 0x20);
          if (uVar10 == 4) {
            if ((uVar9 >> 0x1c & 0xfffffc03 | (uVar29 & 0x3f) << 2) != 4) goto LAB_00147554;
            FUN_000f2290(unaff_x27,unaff_x23,plVar20,plVar28);
            func_0x00023304(plStack_108,plStack_110);
            FUN_000f2290(plStack_e8,unaff_x22,unaff_x20,plVar30);
            plVar15 = plStack_e8;
            func_0x00023304(plStack_e0,unaff_x24);
            FUN_000f2290(unaff_x27,unaff_x23,plVar20,plVar28);
            FUN_000f2290(plVar15,unaff_x22,unaff_x20,plVar30);
            plStack_140 = unaff_x27;
            FUN_00199188(unaff_x27,plVar15);
            plVar20 = plStack_128;
            plVar16 = plStack_140;
            if (((ulong)unaff_x27 & 1) != 0) {
              uVar10 = (uint)((ulong)plStack_d8 >> 0x20);
              uVar29 = uVar10 >> 0x1e;
              iVar27 = (int)unaff_x23;
              iVar18 = (int)((ulong)unaff_x23 >> 0x20);
              if ((ulong)plStack_d8 >> 0x3e == 3) {
                uVar21 = 0;
                if ((((unaff_x23 != (long *)0x0) || (plStack_d8 != (long *)0xc000000000000000)) ||
                    ((ulong)unaff_x20 >> 0x3e < 3)) ||
                   ((uVar21 = 0, unaff_x22 != (long *)0x0 ||
                    (unaff_x20 != (long *)0xc000000000000000)))) goto LAB_00146eec;
                unaff_x22 = (long *)0x0;
                unaff_x20 = (long *)0xc000000000000000;
LAB_0014701c:
                FUN_000f2330(plVar15,unaff_x22,unaff_x20,plVar30);
                unaff_x27 = plStack_140;
                goto LAB_00146420;
              }
              if (uVar10 >> 0x1e < 2) {
                if (uVar29 == 0) {
                  uVar21 = (ulong)plStack_d8 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar18,iVar27)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x147808);
                    (*pcVar11)();
                  }
                  uVar21 = (ulong)(iVar18 - iVar27);
                }
              }
              else if (uVar29 == 2) {
                uVar21 = unaff_x23[3] - unaff_x23[2];
                if (SBORROW8(unaff_x23[3],unaff_x23[2])) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x147804);
                  (*pcVar11)();
                }
              }
              else {
                uVar21 = 0;
              }
LAB_00146eec:
              if (uVar9 >> 0x1e < 2) {
                if (uVar9 >> 0x1e == 0) {
                  uVar25 = (ulong)unaff_x20 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar23,iVar19)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1477f8);
                    (*pcVar11)();
                  }
                  uVar25 = (ulong)(iVar23 - iVar19);
                }
              }
              else {
                if (uVar9 >> 0x1e != 2) {
                  if (uVar21 != 0) goto LAB_001475dc;
                  goto LAB_0014701c;
                }
                uVar25 = unaff_x22[3] - unaff_x22[2];
                if (SBORROW8(unaff_x22[3],unaff_x22[2])) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x147800);
                  (*pcVar11)();
                }
              }
              if (uVar21 != uVar25) goto LAB_001475dc;
              if ((long)uVar21 < 1) goto LAB_0014701c;
              if (uVar29 < 2) {
                if (uVar29 != 0) {
                  lVar24 = (long)iVar27;
                  plVar15 = (long *)(((long)unaff_x23 >> 0x20) - lVar24);
                  if ((long)unaff_x23 >> 0x20 < lVar24) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x147814);
                    (*pcVar11)();
                  }
                  __s10Foundation13__DataStorageC6_bytesSvSgvg();
                  if (unaff_x27 == (long *)0x0) {
                    __s10Foundation13__DataStorageC7_lengthSivg();
                    lVar24 = 0;
LAB_001473dc:
                    lVar17 = 0;
                  }
                  else {
                    plVar28 = unaff_x27;
                    __s10Foundation13__DataStorageC7_offsetSivg();
                    if (SBORROW8(lVar24,(long)plVar28)) {
                    /* WARNING: Does not return */
                      pcVar11 = (code *)SoftwareBreakpoint(1,0x14782c);
                      (*pcVar11)();
                    }
                    lVar24 = (lVar24 - (long)plVar28) + (long)unaff_x27;
                    __s10Foundation13__DataStorageC7_lengthSivg();
                    if (lVar24 == 0) goto LAB_001473dc;
                    if ((long)plVar15 <= (long)plVar28) {
                      plVar28 = plVar15;
                    }
                    lVar17 = (long)plVar28 + lVar24;
                  }
                  plVar30 = plStack_f8;
                  plVar15 = plStack_128;
                  FUN_000382a0(abStack_c0,lVar24,lVar17,unaff_x22,plStack_f8);
                  plVar28 = plVar30;
                  plStack_128 = plVar15;
                  goto LAB_0014749c;
                }
                abStack_c0[6] = (byte)((ulong)unaff_x23 >> 0x30);
                abStack_c0[7] = (byte)((ulong)unaff_x23 >> 0x38);
                abStack_c0[8] = (byte)plStack_d8;
                abStack_c0[9] = (byte)((ulong)plStack_d8 >> 8);
                abStack_c0[10] = (byte)((ulong)plStack_d8 >> 0x10);
                abStack_c0[0xb] = (byte)((ulong)plStack_d8 >> 0x18);
                abStack_c0[0xc] = (byte)((ulong)plStack_d8 >> 0x20);
                abStack_c0[0xd] = (byte)((ulong)plStack_d8 >> 0x28);
                abStack_c0[0] = (byte)unaff_x23;
                abStack_c0[1] = uVar4;
                abStack_c0[2] = uVar5;
                abStack_c0[3] = uVar6;
                abStack_c0[4] = uVar7;
                abStack_c0[5] = uVar8;
                FUN_000382a0(abStack_c9,abStack_c0,abStack_c0 + ((ulong)plStack_d8 >> 0x30 & 0xff),
                             unaff_x22,unaff_x20);
                plVar15 = plStack_e8;
                plStack_128 = plVar20;
                FUN_000f2330(plStack_e8,unaff_x22,unaff_x20,uStack_118);
                plVar28 = unaff_x20;
                unaff_x27 = plStack_140;
                bVar2 = abStack_c9[0];
              }
              else {
                if (uVar29 != 2) {
                  abStack_c0[8] = 0;
                  abStack_c0[9] = 0;
                  abStack_c0[10] = 0;
                  abStack_c0[0xb] = 0;
                  abStack_c0[0xc] = 0;
                  abStack_c0[0xd] = 0;
                  abStack_c0[0] = 0;
                  abStack_c0[1] = 0;
                  abStack_c0[2] = 0;
                  abStack_c0[3] = 0;
                  abStack_c0[4] = 0;
                  abStack_c0[5] = 0;
                  abStack_c0[6] = 0;
                  abStack_c0[7] = 0;
                  FUN_000382a0(abStack_c9,abStack_c0,abStack_c0,unaff_x22,unaff_x20);
                  plVar15 = plStack_e8;
                  plStack_128 = plVar20;
                  FUN_000f2330(plStack_e8,unaff_x22,unaff_x20,uStack_118);
                  plVar28 = unaff_x20;
                  unaff_x27 = plVar16;
                  bVar2 = abStack_c9[0];
                  goto joined_r0x001472f0;
                }
                lVar24 = unaff_x23[2];
                plStack_130 = (long *)unaff_x23[3];
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                if (unaff_x27 == (long *)0x0) {
                  lVar17 = 0;
                }
                else {
                  plVar15 = unaff_x27;
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar24,(long)plVar15)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x147828);
                    (*pcVar11)();
                  }
                  lVar17 = (lVar24 - (long)plVar15) + (long)unaff_x27;
                  unaff_x27 = plVar15;
                }
                plVar15 = (long *)((long)plStack_130 - lVar24);
                if (SBORROW8((long)plStack_130,lVar24)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x14781c);
                  (*pcVar11)();
                }
                plVar28 = (long *)((ulong)plStack_d8 & 0x3fffffffffffffff);
                __s10Foundation13__DataStorageC7_lengthSivg();
                plVar30 = plStack_f8;
                plVar20 = plStack_128;
                if (lVar17 == 0) {
                  lVar24 = 0;
                }
                else {
                  if ((long)plVar15 <= (long)unaff_x27) {
                    unaff_x27 = plVar15;
                  }
                  lVar24 = (long)unaff_x27 + lVar17;
                }
                FUN_000382a0(abStack_c0,lVar17,lVar24,unaff_x22,plStack_f8);
                plStack_128 = plVar20;
LAB_0014749c:
                plVar15 = plStack_e8;
                FUN_000f2330(plStack_e8,unaff_x22,plVar30,uStack_118);
                unaff_x27 = plVar16;
                bVar2 = abStack_c0[0];
              }
joined_r0x001472f0:
              plVar30 = unaff_x22;
              if ((bVar2 & 1) == 0) goto LAB_001475fc;
              plVar28 = (long *)(ulong)uStack_114;
              goto LAB_00146420;
            }
            goto LAB_001475dc;
          }
          plVar13 = unaff_x27;
          if ((uVar9 >> 0x1c & 0xfffffc03 | (uStack_118 & 0x3f) << 2) == 5) {
            plStack_138 = unaff_x23;
            FUN_000f2290(unaff_x27,unaff_x23,plVar20,plVar28);
            func_0x00023304(plVar16,plStack_110);
            plVar15 = plStack_e8;
            FUN_000f2290(plStack_e8,unaff_x22,unaff_x20,plVar30);
            unaff_x23 = plStack_138;
            func_0x00023304(plStack_e0,plStack_f0);
            FUN_000f2290(unaff_x27,unaff_x23,plVar20,plVar28);
            FUN_000f2290(plVar15,unaff_x22,unaff_x20,plVar30);
            FUN_00146270(unaff_x27,plVar15);
            plVar16 = plStack_128;
            if (((ulong)plVar13 & 1) == 0) {
LAB_0014768c:
              plStack_140 = unaff_x27;
              FUN_000f2330(plVar15,unaff_x22,unaff_x20,plVar30);
              plVar14 = plVar28;
              plVar13 = unaff_x27;
            }
            else {
              uVar21 = (ulong)unaff_x20 & 0xcfffffffffffffff;
              uVar10 = (uint)((ulong)plStack_d8 >> 0x20);
              uVar29 = uVar10 >> 0x1e;
              iVar27 = (int)unaff_x23;
              iVar18 = (int)((ulong)unaff_x23 >> 0x20);
              plVar14 = plVar15;
              if ((ulong)plStack_d8 >> 0x3e == 3) {
                uVar25 = 0;
                if (((unaff_x23 == (long *)0x0) &&
                    (((ulong)plStack_d8 & 0xcfffffffffffffff) == 0xc000000000000000)) &&
                   ((2 < (ulong)unaff_x20 >> 0x3e &&
                    ((uVar25 = 0, unaff_x22 == (long *)0x0 &&
                     (plVar20 = (long *)0x0, uVar21 == 0xc000000000000000)))))) goto LAB_00147194;
              }
              else if (uVar10 >> 0x1e < 2) {
                if (uVar29 == 0) {
                  uVar25 = (ulong)plStack_d8 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar18,iVar27)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x14780c);
                    (*pcVar11)();
                  }
                  uVar25 = (ulong)(iVar18 - iVar27);
                }
              }
              else if (uVar29 == 2) {
                uVar25 = unaff_x23[3] - unaff_x23[2];
                if (SBORROW8(unaff_x23[3],unaff_x23[2])) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x147810);
                  (*pcVar11)();
                }
              }
              else {
                uVar25 = 0;
              }
              plVar20 = unaff_x22;
              if (uVar9 >> 0x1e < 2) {
                if (uVar9 >> 0x1e == 0) {
                  uVar26 = (ulong)unaff_x20 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar23,iVar19)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1477f4);
                    (*pcVar11)();
                  }
                  uVar26 = (ulong)(iVar23 - iVar19);
                }
              }
              else {
                if (uVar9 >> 0x1e != 2) {
                  if (uVar25 == 0) goto LAB_00147194;
                  goto LAB_0014768c;
                }
                uVar26 = unaff_x22[3] - unaff_x22[2];
                if (SBORROW8(unaff_x22[3],unaff_x22[2])) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1477fc);
                  (*pcVar11)();
                }
              }
              if (uVar25 != uVar26) goto LAB_0014768c;
              if ((long)uVar25 < 1) goto LAB_00147194;
              if (uVar29 < 2) {
                if (uVar29 == 0) {
                  abStack_c0[0] = (byte)unaff_x23;
                  abStack_c0[1] = (byte)((ulong)unaff_x23 >> 8);
                  abStack_c0[2] = (byte)((ulong)unaff_x23 >> 0x10);
                  abStack_c0[3] = (byte)((ulong)unaff_x23 >> 0x18);
                  abStack_c0[4] = (byte)((ulong)unaff_x23 >> 0x20);
                  abStack_c0[5] = (byte)((ulong)unaff_x23 >> 0x28);
                  abStack_c0[6] = (byte)((ulong)unaff_x23 >> 0x30);
                  abStack_c0[7] = (byte)((ulong)unaff_x23 >> 0x38);
                  abStack_c0[8] = (byte)plStack_d8;
                  abStack_c0[9] = (byte)((ulong)plStack_d8 >> 8);
                  abStack_c0[10] = (byte)((ulong)plStack_d8 >> 0x10);
                  abStack_c0[0xb] = (byte)((ulong)plStack_d8 >> 0x18);
                  abStack_c0[0xc] = (byte)((ulong)plStack_d8 >> 0x20);
                  abStack_c0[0xd] = (byte)((ulong)plStack_d8 >> 0x28);
                  plStack_140 = unaff_x27;
                  FUN_000382a0(abStack_c9,abStack_c0,abStack_c0 + ((ulong)plStack_d8 >> 0x30 & 0xff)
                               ,unaff_x22);
                  goto LAB_0014738c;
                }
                lVar24 = (long)iVar27;
                plVar28 = (long *)(((long)unaff_x23 >> 0x20) - lVar24);
                if ((long)unaff_x23 >> 0x20 < lVar24) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x147818);
                  plStack_140 = unaff_x27;
                  (*pcVar11)();
                }
                plStack_140 = unaff_x27;
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                if (plVar13 == (long *)0x0) {
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  lVar24 = 0;
LAB_0014741c:
                  lVar17 = 0;
                }
                else {
                  plVar16 = plVar13;
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar24,(long)plVar16)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x147830);
                    (*pcVar11)();
                  }
                  lVar24 = (lVar24 - (long)plVar16) + (long)plVar13;
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  unaff_x27 = plVar13;
                  if (lVar24 == 0) goto LAB_0014741c;
                  if ((long)plVar28 <= (long)plVar16) {
                    plVar16 = plVar28;
                  }
                  lVar17 = (long)plVar16 + lVar24;
                }
                plVar20 = plStack_f8;
                plVar16 = plStack_128;
                FUN_000382a0(abStack_c0,lVar24,lVar17,unaff_x22,uVar21);
                plVar15 = plStack_e8;
                plStack_128 = plVar16;
                FUN_000f2330(plStack_e8,unaff_x22,plVar20,uStack_118);
                plVar13 = unaff_x27;
                unaff_x27 = plStack_140;
                bVar2 = abStack_c0[0];
              }
              else if (uVar29 == 2) {
                lVar24 = unaff_x23[2];
                plVar28 = (long *)unaff_x23[3];
                plStack_140 = unaff_x27;
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                plVar16 = plVar13;
                if (plVar13 != (long *)0x0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar24,(long)plVar16)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x147824);
                    (*pcVar11)();
                  }
                  plVar13 = (long *)((lVar24 - (long)plVar16) + (long)plVar13);
                }
                if (SBORROW8((long)plVar28,lVar24)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x147820);
                  (*pcVar11)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg(plStack_d8);
                plVar20 = plStack_128;
                if ((long)plVar28 - lVar24 <= (long)plVar16) {
                  plVar16 = (long *)((long)plVar28 - lVar24);
                }
                lVar24 = 0;
                if (plVar13 != (long *)0x0) {
                  lVar24 = (long)plVar16 + (long)plVar13;
                }
                FUN_000382a0(abStack_c0,plVar13,lVar24,unaff_x22,uVar21);
                plVar15 = plStack_e8;
                plStack_128 = plVar20;
                FUN_000f2330(plStack_e8,unaff_x22,plStack_f8,uStack_118);
                unaff_x23 = plStack_138;
                unaff_x27 = plStack_140;
                bVar2 = abStack_c0[0];
              }
              else {
                abStack_c0[8] = 0;
                abStack_c0[9] = 0;
                abStack_c0[10] = 0;
                abStack_c0[0xb] = 0;
                abStack_c0[0xc] = 0;
                abStack_c0[0xd] = 0;
                abStack_c0[0] = 0;
                abStack_c0[1] = 0;
                abStack_c0[2] = 0;
                abStack_c0[3] = 0;
                abStack_c0[4] = 0;
                abStack_c0[5] = 0;
                abStack_c0[6] = 0;
                abStack_c0[7] = 0;
                plStack_140 = unaff_x27;
                FUN_000382a0(abStack_c9,abStack_c0,abStack_c0,unaff_x22);
                unaff_x20 = plStack_f8;
LAB_0014738c:
                plVar15 = plStack_e8;
                plStack_128 = plVar16;
                FUN_000f2330(plStack_e8,unaff_x22,unaff_x20,uStack_118);
                plVar13 = unaff_x27;
                unaff_x27 = plStack_140;
                bVar2 = abStack_c9[0];
              }
              plVar14 = plVar28;
              plStack_140 = unaff_x27;
              if ((bVar2 & 1) != 0) {
                plVar28 = (long *)(ulong)uStack_114;
                goto LAB_00146420;
              }
            }
            plVar20 = plStack_d8;
            unaff_x27 = plStack_140;
            plVar28 = (long *)(ulong)uStack_114;
            FUN_000f2330(plStack_140,unaff_x23,plStack_d8,plVar28);
            FUN_000f2330(plVar15,unaff_x22,plStack_f8,uStack_118);
            FUN_00023358(plStack_e0,plStack_f0);
            unaff_x19 = unaff_x27;
            unaff_x20 = plVar28;
            unaff_x21 = plVar20;
            unaff_x22 = plVar15;
            unaff_x24 = unaff_x23;
          }
          else {
            FUN_000f2290(unaff_x27,unaff_x23,plVar20,plVar28);
            func_0x00023304(plVar16,plStack_110);
            unaff_x28 = plStack_e8;
            FUN_000f2290(plStack_e8,unaff_x22,unaff_x20,plVar30);
            unaff_x19 = plStack_e0;
            plVar16 = plStack_f0;
            func_0x00023304(plStack_e0,plStack_f0);
            FUN_000f2290(unaff_x27,unaff_x23,plVar20,plVar28);
            FUN_000f2290(unaff_x28,unaff_x22,unaff_x20,plVar30);
            FUN_000f2330(unaff_x28,unaff_x22,unaff_x20,plVar30);
            FUN_000f2330(unaff_x27,unaff_x23,plVar20,plVar28);
            FUN_000f2330(unaff_x28,unaff_x22,unaff_x20,plVar30);
            FUN_00023358(unaff_x19,plVar16);
            unaff_x21 = plVar28;
            unaff_x24 = plVar20;
          }
LAB_00147640:
          FUN_000f2330(unaff_x27,unaff_x23,plVar20,plVar28);
          plVar16 = plStack_108;
          param_2 = plStack_110;
LAB_00147648:
          FUN_00023358(plVar16);
          unaff_x23 = plVar14;
          unaff_x27 = plVar13;
          goto LAB_0014764c;
        }
        if (uVar10 != 0) {
          if (uVar10 == 1) {
            if ((uVar9 >> 0x1c & 0xfffffc03 | (uVar29 & 0x3f) << 2) != 1) goto LAB_00147554;
            FUN_000f2290(unaff_x27,unaff_x23,plVar20,plVar28);
            func_0x00023304(plVar16,plVar15);
            FUN_000f2290(plStack_e8,plStack_100,unaff_x20,plVar30);
            plVar15 = plStack_e8;
            func_0x00023304(plStack_e0,plStack_f0);
            FUN_000f2290(unaff_x27,unaff_x23,plVar20,plVar28);
            FUN_000f2290(plVar15,plStack_100,unaff_x20,plVar30);
            plVar30 = unaff_x27;
            if ((double)unaff_x27 == (double)unaff_x21) goto LAB_00146420;
          }
          else {
            if ((uVar9 >> 0x1c & 0xfffffc03 | (uVar29 & 0x3f) << 2) == 2) {
              if ((unaff_x27 != unaff_x21) || (unaff_x23 != unaff_x22)) {
                plVar15 = unaff_x27;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (unaff_x27,unaff_x23,unaff_x21,unaff_x22,0);
                plVar20 = plStack_d8;
                plStack_130 = (long *)CONCAT44(plStack_130._4_4_,(int)plVar15);
                FUN_000f2290(unaff_x27,unaff_x23,plStack_d8,plVar28);
                func_0x00023304(plVar16,plStack_110);
                plVar16 = plStack_f8;
                FUN_000f2290(plStack_e8,unaff_x22,plStack_f8,plVar30);
                plVar15 = plStack_e8;
                func_0x00023304(plStack_e0,plStack_f0);
                FUN_000f2290(unaff_x27,unaff_x23,plVar20,plVar28);
                FUN_000f2290(plVar15,unaff_x22,plVar16,plVar30);
                FUN_000f2330(plVar15,unaff_x22,plVar16,plVar30);
                plVar30 = unaff_x22;
                if (((ulong)plStack_130 & 1) != 0) goto LAB_00146420;
                goto LAB_001475fc;
              }
              FUN_000f2290(unaff_x27,unaff_x23,plVar20,plVar28);
              func_0x00023304(plVar16,plStack_110);
              FUN_000f2290(unaff_x27,unaff_x23,unaff_x20,plVar30);
              plVar14 = plStack_e8;
              func_0x00023304(plStack_e0,plStack_f0);
              FUN_000f2290(unaff_x27,unaff_x23,plVar20,plVar28);
              FUN_000f2290(unaff_x27,unaff_x23,unaff_x20,plVar30);
              plVar15 = unaff_x27;
              plVar20 = unaff_x23;
LAB_00147194:
              FUN_000f2330(plVar15,plVar20,unaff_x20,plVar30);
              plVar15 = plVar14;
              goto LAB_00146420;
            }
LAB_00147554:
            FUN_000f2290(unaff_x27,unaff_x23,plVar20,plVar28);
            func_0x00023304(plVar16,plStack_110);
            FUN_000f2290(unaff_x21,unaff_x22,unaff_x20,plVar30);
            func_0x00023304(plStack_e0,unaff_x24);
            plStack_140 = unaff_x27;
            FUN_000f2290(unaff_x27,unaff_x23,plVar20,plVar28);
            FUN_000f2290(unaff_x21,unaff_x22,unaff_x20,plVar30);
            unaff_x19 = plVar20;
            plVar15 = unaff_x21;
            unaff_x28 = plVar16;
LAB_001475dc:
            FUN_000f2330(plVar15,unaff_x22,unaff_x20,plVar30);
            plVar28 = unaff_x20;
            plVar30 = unaff_x22;
            unaff_x27 = plStack_140;
          }
LAB_001475fc:
          FUN_000f2330(unaff_x27,unaff_x23,plStack_d8,uStack_114);
          unaff_x20 = plVar28;
          unaff_x21 = plVar15;
LAB_00147614:
          FUN_000f2330(unaff_x21,plStack_100,plStack_f8,uStack_118);
          FUN_00023358(plStack_e0,plStack_f0);
          plVar28 = (long *)(ulong)uStack_114;
          plVar20 = plStack_d8;
          unaff_x22 = plVar30;
          unaff_x24 = unaff_x23;
          plVar13 = unaff_x27;
          goto LAB_00147640;
        }
        if ((uVar9 >> 0x1c & 0xfffffc03) != 0 || (bVar3 & 0x3f) != 0) goto LAB_00147554;
        plStack_130 = (long *)0x0;
        if (((ulong)unaff_x23 & 0xff) != 1) {
          plStack_130 = unaff_x27;
        }
        uStack_148 = (ulong)unaff_x22 & 0xff;
        FUN_000f2290(unaff_x27,unaff_x23,plVar20,plVar28);
        plVar13 = plStack_100;
        func_0x00023304(plVar16,plVar15);
        unaff_x20 = plStack_f8;
        FUN_000f2290(unaff_x21,plVar13,plStack_f8,plVar30);
        func_0x00023304(plStack_e0,plStack_f0);
        FUN_000f2290(unaff_x27,unaff_x23,plVar20,plVar28);
        FUN_000f2290(unaff_x21,plVar13,unaff_x20,plVar30);
        plVar16 = unaff_x27;
        FUN_000f2330(unaff_x27,unaff_x23,plVar20,plVar28);
        if (uStack_148 != 1) {
          if (plStack_130 == unaff_x21) goto LAB_00146438;
          goto LAB_00147614;
        }
        if (plStack_130 != (long *)0x0) goto LAB_00147614;
LAB_00146438:
        plVar30 = plStack_d8;
        plVar20 = plStack_e0;
        unaff_x22 = plStack_f0;
        plVar28 = plStack_f8;
        unaff_x24 = plStack_108;
        param_2 = plStack_110;
        plVar15 = plStack_128;
        uVar9 = (uint)((ulong)plStack_110 >> 0x20);
        uVar29 = uVar9 >> 0x1e;
        uVar10 = (uint)((ulong)plStack_f0 >> 0x20);
        uVar22 = uVar10 >> 0x1e;
        iVar23 = (int)plStack_108;
        if ((ulong)plStack_110 >> 0x3e != 3) {
          if (1 < uVar9 >> 0x1e) {
            if (uVar29 == 2) {
              uVar21 = plStack_108[3] - plStack_108[2];
              if (SBORROW8(plStack_108[3],plStack_108[2])) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1477e0);
                (*pcVar11)();
              }
            }
            else {
              uVar21 = 0;
            }
            goto joined_r0x00146898;
          }
          if (uVar29 == 0) {
            uVar21 = (ulong)plStack_110 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)plStack_108 >> 0x20);
            if (SBORROW4(iVar19,iVar23)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1477dc);
              (*pcVar11)();
            }
            uVar21 = (ulong)(iVar19 - iVar23);
          }
          if (1 < uVar10 >> 0x1e) goto LAB_001465ac;
LAB_001466f0:
          if (uVar22 == 0) {
            uVar25 = (ulong)plStack_f0 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)plStack_e0 >> 0x20);
            if (SBORROW4(iVar19,(int)plStack_e0)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1477d8);
              (*pcVar11)();
            }
            uVar25 = (ulong)(iVar19 - (int)plStack_e0);
          }
LAB_00146710:
          if (uVar21 != uVar25) {
LAB_001474c0:
            FUN_000f2330(unaff_x21,plStack_100,plStack_f8,uStack_118);
            FUN_00023358(plStack_e0,unaff_x22);
            FUN_000f2330(unaff_x27,unaff_x23,plStack_d8,uStack_114);
            plVar16 = unaff_x24;
            plVar14 = unaff_x23;
            plVar13 = unaff_x27;
            goto LAB_00147648;
          }
          if ((long)uVar21 < 1) {
LAB_001462d4:
            FUN_000f2330(unaff_x21,plStack_100,plStack_f8,uStack_118);
            FUN_00023358(plStack_e0,unaff_x22);
            FUN_000f2330(unaff_x27,unaff_x23,plStack_d8,uStack_114);
            plVar16 = unaff_x24;
            goto LAB_0014630c;
          }
          if (uVar29 < 2) {
            if (uVar29 == 0) {
              abStack_c0[0] = (byte)plStack_108;
              abStack_c0[1] = (byte)((ulong)plStack_108 >> 8);
              abStack_c0[2] = (byte)((ulong)plStack_108 >> 0x10);
              abStack_c0[3] = (byte)((ulong)plStack_108 >> 0x18);
              abStack_c0[4] = (byte)((ulong)plStack_108 >> 0x20);
              abStack_c0[5] = (byte)((ulong)plStack_108 >> 0x28);
              abStack_c0[6] = (byte)((ulong)plStack_108 >> 0x30);
              abStack_c0[7] = (byte)((ulong)plStack_108 >> 0x38);
              abStack_c0[8] = (byte)plStack_110;
              abStack_c0[9] = (byte)((ulong)plStack_110 >> 8);
              abStack_c0[10] = (byte)((ulong)plStack_110 >> 0x10);
              abStack_c0[0xb] = (byte)((ulong)plStack_110 >> 0x18);
              abStack_c0[0xc] = (byte)((ulong)plStack_110 >> 0x20);
              abStack_c0[0xd] = (byte)((ulong)plStack_110 >> 0x28);
              FUN_000382a0(abStack_c9,abStack_c0,abStack_c0 + ((ulong)plStack_110 >> 0x30 & 0xff),
                           plStack_e0,plStack_f0);
              plStack_128 = plVar15;
              FUN_000f2330(unaff_x21,plStack_100,plVar28,uStack_118);
              FUN_00023358(plVar20,unaff_x22);
              FUN_000f2330(unaff_x27,unaff_x23,plStack_d8,uStack_114);
              unaff_x24 = plStack_108;
              param_2 = plStack_110;
              plVar20 = unaff_x20;
              plVar16 = unaff_x21;
              goto LAB_00146970;
            }
            lVar24 = (long)iVar23;
            plVar15 = (long *)(((long)plStack_108 >> 0x20) - lVar24);
            plStack_140 = unaff_x27;
            if ((long)plStack_108 >> 0x20 < lVar24) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1477e4);
              (*pcVar11)();
            }
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            if (plVar16 == (long *)0x0) {
              plStack_138 = unaff_x23;
              __s10Foundation13__DataStorageC7_lengthSivg();
              lVar24 = 0;
              lVar17 = 0;
              plVar16 = unaff_x27;
            }
            else {
              plVar28 = plVar16;
              plStack_138 = unaff_x23;
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar24,(long)plVar28)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1477f0);
                (*pcVar11)();
              }
              lVar1 = (lVar24 - (long)plVar28) + (long)plVar16;
              __s10Foundation13__DataStorageC7_lengthSivg();
              if ((long)plVar15 <= (long)plVar28) {
                plVar28 = plVar15;
              }
              lVar24 = 0;
              if (lVar1 != 0) {
                lVar24 = lVar1;
              }
              lVar17 = 0;
              if (lVar1 != 0) {
                lVar17 = (long)plVar28 + lVar1;
              }
            }
            plVar15 = plStack_e0;
            unaff_x22 = plStack_f0;
            unaff_x21 = plStack_128;
            FUN_000382a0(abStack_c0,lVar24,lVar17,plStack_e0,plStack_f0);
            plStack_128 = unaff_x21;
            FUN_000f2330(plStack_e8,plStack_100,plStack_f8,uStack_118);
            FUN_00023358(plVar15,unaff_x22);
            FUN_000f2330(plStack_140,plStack_138,plVar30,uStack_114);
            plVar14 = plStack_108;
            unaff_x20 = param_2;
            unaff_x27 = unaff_x23;
LAB_00146e80:
            FUN_00023358(plVar14);
            unaff_x23 = unaff_x27;
            unaff_x24 = plVar30;
            unaff_x27 = plVar16;
            bVar2 = abStack_c0[0];
          }
          else {
            if (uVar29 == 2) {
              unaff_x20 = (long *)(ulong)uStack_114;
              lVar24 = plStack_108[2];
              lVar17 = plStack_108[3];
              plStack_138 = unaff_x23;
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              plVar28 = plVar16;
              plVar15 = plVar16;
              if (plVar16 != (long *)0x0) {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar24,(long)plVar28)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1477ec);
                  (*pcVar11)();
                }
                plVar15 = (long *)((lVar24 - (long)plVar28) + (long)plVar16);
              }
              plVar20 = (long *)(lVar17 - lVar24);
              if (SBORROW8(lVar17,lVar24)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1477e8);
                (*pcVar11)();
              }
              __s10Foundation13__DataStorageC7_lengthSivg();
              plVar30 = plStack_d8;
              plVar16 = plStack_e0;
              plVar13 = plStack_f0;
              plVar14 = plStack_108;
              unaff_x21 = plStack_128;
              if (plVar15 == (long *)0x0) {
                lVar24 = 0;
              }
              else {
                if ((long)plVar20 <= (long)plVar28) {
                  plVar28 = plVar20;
                }
                lVar24 = (long)plVar28 + (long)plVar15;
              }
              FUN_000382a0(abStack_c0,plVar15,lVar24,plStack_e0,plStack_f0);
              plStack_128 = unaff_x21;
              FUN_000f2330(plStack_e8,plStack_100,plStack_f8,uStack_118);
              FUN_00023358(plVar16,plVar13);
              FUN_000f2330(unaff_x27,plStack_138,plVar30,unaff_x20);
              unaff_x22 = plVar14;
              goto LAB_00146e80;
            }
            abStack_c0[8] = 0;
            abStack_c0[9] = 0;
            abStack_c0[10] = 0;
            abStack_c0[0xb] = 0;
            abStack_c0[0xc] = 0;
            abStack_c0[0xd] = 0;
            abStack_c0[0] = 0;
            abStack_c0[1] = 0;
            abStack_c0[2] = 0;
            abStack_c0[3] = 0;
            abStack_c0[4] = 0;
            abStack_c0[5] = 0;
            abStack_c0[6] = 0;
            abStack_c0[7] = 0;
            plStack_138 = unaff_x23;
            FUN_000382a0(abStack_c9,abStack_c0,abStack_c0,plStack_e0,plStack_f0);
            plStack_128 = plVar15;
            FUN_000f2330(plStack_e8,plStack_100,plStack_f8,uStack_118);
            FUN_00023358(plVar20,unaff_x22);
            FUN_000f2330(unaff_x27,plStack_138,plStack_d8,uStack_114);
            plVar16 = unaff_x24;
LAB_00146970:
            FUN_00023358(unaff_x24);
            unaff_x20 = plVar20;
            unaff_x21 = plVar15;
            unaff_x24 = plVar16;
            bVar2 = abStack_c9[0];
          }
          if ((bVar2 & 1) != 0) goto LAB_00146310;
          goto LAB_0014764c;
        }
        uVar21 = 0;
        if ((((plStack_108 != (long *)0x0) || (plStack_110 != (long *)0xc000000000000000)) ||
            ((ulong)plStack_f0 >> 0x3e < 3)) ||
           ((uVar21 = 0, plStack_e0 != (long *)0x0 || (plStack_f0 != (long *)0xc000000000000000))))
        {
joined_r0x00146898:
          if (uVar22 < 2) goto LAB_001466f0;
LAB_001465ac:
          if (uVar22 == 2) {
            uVar25 = plStack_e0[3] - plStack_e0[2];
            if (SBORROW8(plStack_e0[3],plStack_e0[2])) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1477d4);
              (*pcVar11)();
            }
            goto LAB_00146710;
          }
          if (uVar21 == 0) goto LAB_001462d4;
          goto LAB_001474c0;
        }
        FUN_000f2330(unaff_x21,plStack_100,plStack_f8,uStack_118);
        FUN_00023358(0,0xc000000000000000);
        FUN_000f2330(unaff_x27,unaff_x23,plStack_d8,uStack_114);
        param_2 = (long *)0xc000000000000000;
        plVar16 = (long *)0x0;
LAB_0014630c:
        FUN_00023358(plVar16);
LAB_00146310:
        unaff_x28 = unaff_x28 + 6;
        unaff_x19 = unaff_x19 + 6;
        lVar24 = lStack_120 + -1;
      } while (lVar24 != 0);
    }
    plVar16 = (long *)((long)&MACH_HEADER.magic + 1);
  }
  else {
LAB_0014764c:
    plVar16 = (long *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_80) {
    return plVar16;
  }
  ___stack_chk_fail();
  lVar24 = plVar16[2];
  if (lVar24 != param_2[2]) {
    return (long *)0x0;
  }
  if ((lVar24 == 0) || (plVar16 == param_2)) {
    return (long *)((long)&MACH_HEADER.magic + 1);
  }
  pcStack_158 = FUN_00147834;
  plVar15 = plVar16 + 4;
  param_2 = param_2 + 4;
  plStack_1a0 = unaff_x28;
  plStack_198 = unaff_x27;
  plStack_190 = unaff_x24;
  plStack_188 = unaff_x23;
  plStack_180 = unaff_x22;
  plStack_178 = unaff_x21;
  plStack_170 = unaff_x20;
  plStack_168 = unaff_x19;
  puStack_160 = &stack0xfffffffffffffff0;
  while( true ) {
    lVar24 = lVar24 + -1;
    uStack_258 = plVar15[9];
    uStack_260 = plVar15[8];
    lStack_248 = plVar15[0xb];
    uStack_250 = plVar15[10];
    lStack_238 = plVar15[0xd];
    uStack_240 = plVar15[0xc];
    lStack_228 = plVar15[0xf];
    uStack_230 = plVar15[0xe];
    lStack_298 = plVar15[1];
    lStack_2a0 = *plVar15;
    uStack_288 = plVar15[3];
    lStack_290 = plVar15[2];
    lStack_278 = plVar15[5];
    uVar21 = plVar15[4];
    lStack_268 = plVar15[7];
    uStack_270 = plVar15[6];
    lStack_218 = param_2[1];
    lStack_220 = *param_2;
    uStack_208 = param_2[3];
    lStack_210 = param_2[2];
    lStack_1f8 = param_2[5];
    uStack_200 = param_2[4];
    lStack_1e8 = param_2[7];
    uStack_1f0 = param_2[6];
    lStack_1d8 = param_2[9];
    uStack_1e0 = param_2[8];
    lStack_1c8 = param_2[0xb];
    uStack_1d0 = param_2[10];
    lStack_1b8 = param_2[0xd];
    uStack_1c0 = param_2[0xc];
    lStack_1a8 = param_2[0xf];
    lStack_1b0 = param_2[0xe];
    uStack_280 = uVar21;
    if ((char)lStack_218 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x001478e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_007daec0)[lStack_220] * 4 + 0x1478e4))();
      return plVar16;
    }
    if (lStack_2a0 != lStack_220) {
      return (long *)0x0;
    }
    if ((char)uStack_208 == '\x01') {
      if (lStack_210 < 2) {
        if (lStack_210 == 0) {
          if (lStack_290 != 0) {
            return (long *)0x0;
          }
        }
        else if (lStack_290 != 1) {
          return (long *)0x0;
        }
      }
      else if (lStack_210 == 2) {
        if (lStack_290 != 2) {
          return (long *)0x0;
        }
      }
      else if (lStack_290 != 3) {
        return (long *)0x0;
      }
    }
    else if (lStack_290 != lStack_210) {
      return (long *)0x0;
    }
    uStack_288._4_4_ = (int)((ulong)uStack_288 >> 0x20);
    uStack_208._4_4_ = (int)((ulong)uStack_208 >> 0x20);
    if (uStack_288._4_4_ != uStack_208._4_4_) {
      return (long *)0x0;
    }
    if (((uVar21 != uStack_200) || (lStack_278 != lStack_1f8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar21 & 1) == 0)) {
      return (long *)0x0;
    }
    if (((uStack_270 != uStack_1f0) || (lStack_268 != lStack_1e8)) &&
       (uVar21 = uStack_270,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
       , (uVar21 & 1) == 0)) {
      return (long *)0x0;
    }
    lVar17 = lStack_1d8;
    uVar21 = uStack_258;
    if ((int)uStack_260 != (int)uStack_1e0) {
      return (long *)0x0;
    }
    if (uStack_260._4_1_ != uStack_1e0._4_1_) {
      return (long *)0x0;
    }
    func_0x00191e84(&lStack_2a0,auStack_320);
    func_0x00191e84(&lStack_220,auStack_320);
    FUN_001455e0(uVar21,lVar17);
    if (((uVar21 & 1) == 0) ||
       ((((uStack_250 != uStack_1d0 || (lStack_248 != lStack_1c8)) &&
         (uVar21 = uStack_250,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar21 & 1) == 0)) ||
        (((uStack_240 != uStack_1c0 || (lStack_238 != lStack_1b8)) &&
         (uVar21 = uStack_240,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar21 & 1) == 0)))))) {
      func_0x00191ec0(&lStack_220);
      func_0x00191ec0(&lStack_2a0);
      return (long *)0x0;
    }
    uVar21 = uStack_230;
    FUN_00038814(uStack_230,lStack_228,lStack_1b0,lStack_1a8);
    func_0x00191ec0(&lStack_220);
    plVar16 = &lStack_2a0;
    func_0x00191ec0(plVar16);
    if ((uVar21 & 1) == 0) {
      return (long *)0x0;
    }
    if (lVar24 == 0) break;
    plVar15 = plVar15 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return (long *)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 00147834; end: 00147b97;  */

long * FUN_00147834(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 auStack_1d0 [128];
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  long lStack_128;
  ulong uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1[2];
  if (lVar2 != param_2[2]) {
    return (long *)0x0;
  }
  if ((lVar2 == 0) || (param_1 == param_2)) {
    return (long *)((long)&MACH_HEADER.magic + 1);
  }
  plVar3 = param_1 + 4;
  param_2 = param_2 + 4;
  while( true ) {
    lVar2 = lVar2 + -1;
    uStack_108 = plVar3[9];
    uStack_110 = plVar3[8];
    lStack_f8 = plVar3[0xb];
    uStack_100 = plVar3[10];
    lStack_e8 = plVar3[0xd];
    uStack_f0 = plVar3[0xc];
    lStack_d8 = plVar3[0xf];
    uStack_e0 = plVar3[0xe];
    lStack_148 = plVar3[1];
    lStack_150 = *plVar3;
    uStack_138 = plVar3[3];
    lStack_140 = plVar3[2];
    lStack_128 = plVar3[5];
    uVar4 = plVar3[4];
    lStack_118 = plVar3[7];
    uStack_120 = plVar3[6];
    lStack_c8 = param_2[1];
    lStack_d0 = *param_2;
    uStack_b8 = param_2[3];
    lStack_c0 = param_2[2];
    lStack_a8 = param_2[5];
    uStack_b0 = param_2[4];
    lStack_98 = param_2[7];
    uStack_a0 = param_2[6];
    lStack_88 = param_2[9];
    uStack_90 = param_2[8];
    lStack_78 = param_2[0xb];
    uStack_80 = param_2[10];
    lStack_68 = param_2[0xd];
    uStack_70 = param_2[0xc];
    lStack_58 = param_2[0xf];
    lStack_60 = param_2[0xe];
    uStack_130 = uVar4;
    if ((char)lStack_c8 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x001478e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_007daec0)[lStack_d0] * 4 + 0x1478e4))();
      return param_1;
    }
    if (lStack_150 != lStack_d0) {
      return (long *)0x0;
    }
    if ((char)uStack_b8 == '\x01') {
      if (lStack_c0 < 2) {
        if (lStack_c0 == 0) {
          if (lStack_140 != 0) {
            return (long *)0x0;
          }
        }
        else if (lStack_140 != 1) {
          return (long *)0x0;
        }
      }
      else if (lStack_c0 == 2) {
        if (lStack_140 != 2) {
          return (long *)0x0;
        }
      }
      else if (lStack_140 != 3) {
        return (long *)0x0;
      }
    }
    else if (lStack_140 != lStack_c0) {
      return (long *)0x0;
    }
    uStack_138._4_4_ = (int)((ulong)uStack_138 >> 0x20);
    uStack_b8._4_4_ = (int)((ulong)uStack_b8 >> 0x20);
    if (uStack_138._4_4_ != uStack_b8._4_4_) {
      return (long *)0x0;
    }
    if (((uVar4 != uStack_b0) || (lStack_128 != lStack_a8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar4 & 1) == 0)) {
      return (long *)0x0;
    }
    if (((uStack_120 != uStack_a0) || (lStack_118 != lStack_98)) &&
       (uVar4 = uStack_120,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
       , (uVar4 & 1) == 0)) {
      return (long *)0x0;
    }
    lVar1 = lStack_88;
    uVar4 = uStack_108;
    if ((int)uStack_110 != (int)uStack_90) {
      return (long *)0x0;
    }
    if (uStack_110._4_1_ != uStack_90._4_1_) {
      return (long *)0x0;
    }
    func_0x00191e84(&lStack_150,auStack_1d0);
    func_0x00191e84(&lStack_d0,auStack_1d0);
    FUN_001455e0(uVar4,lVar1);
    if (((uVar4 & 1) == 0) ||
       ((((uStack_100 != uStack_80 || (lStack_f8 != lStack_78)) &&
         (uVar4 = uStack_100,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar4 & 1) == 0)) ||
        (((uStack_f0 != uStack_70 || (lStack_e8 != lStack_68)) &&
         (uVar4 = uStack_f0,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar4 & 1) == 0)))))) {
      func_0x00191ec0(&lStack_d0);
      func_0x00191ec0(&lStack_150);
      return (long *)0x0;
    }
    uVar4 = uStack_e0;
    FUN_00038814(uStack_e0,lStack_d8,lStack_60,lStack_58);
    func_0x00191ec0(&lStack_d0);
    param_1 = &lStack_150;
    func_0x00191ec0(param_1);
    if ((uVar4 & 1) == 0) {
      return (long *)0x0;
    }
    if (lVar2 == 0) break;
    plVar3 = plVar3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return (long *)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 00147b98; end: 001481b7;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_00147b98(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  long *unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long lVar17;
  long *unaff_x22;
  ulong *puVar18;
  long *unaff_x23;
  long *plVar19;
  ulong *puVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *unaff_x27;
  long *plVar24;
  long unaff_x28;
  undefined1 auStack_288 [120];
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  long lStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long *plStack_c0;
  ulong uStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar21 = (long *)param_1[2];
  if (plVar21 == (long *)param_2[2]) {
    if ((plVar21 != (long *)0x0) && (param_1 != param_2)) {
      plStack_b0 = (long *)0x0;
      unaff_x22 = param_2 + 9;
      unaff_x23 = param_1 + 5;
      do {
        uVar13 = unaff_x23[-1];
        plVar6 = (long *)*unaff_x23;
        lStack_a0 = CONCAT44(lStack_a0._4_4_,*(uint *)(unaff_x23 + 1));
        plStack_98 = (long *)unaff_x23[2];
        plStack_90 = (long *)unaff_x23[3];
        unaff_x19 = (long *)unaff_x23[4];
        unaff_x20 = unaff_x22[-4];
        uVar2 = *(uint *)(unaff_x22 + -3);
        unaff_x21 = (long *)(ulong)uVar2;
        unaff_x28 = unaff_x22[-2];
        lVar11 = unaff_x22[-1];
        plVar23 = (long *)*unaff_x22;
        if ((uVar13 == unaff_x22[-5]) && (plVar6 == (long *)unaff_x20)) {
          if (*(uint *)(unaff_x23 + 1) != uVar2) goto LAB_00148158;
        }
        else {
          param_2 = plVar6;
          lStack_a8 = unaff_x28;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          plVar8 = (long *)0x0;
          plVar7 = plVar23;
          plVar24 = plVar21;
          plVar19 = unaff_x22;
          plVar22 = unaff_x19;
          if (((uVar13 & 1) == 0) ||
             (plVar7 = unaff_x19, plVar24 = unaff_x22, plVar19 = unaff_x23, plVar22 = plVar21,
             unaff_x27 = unaff_x23, unaff_x28 = lStack_a8, (uint)lStack_a0 != uVar2))
          goto LAB_0014815c;
        }
        lStack_a0 = (long)plVar6;
        _swift_bridgeObjectRetain(plVar6);
        unaff_x21 = plStack_98;
        _swift_bridgeObjectRetain(plStack_98);
        func_0x00023304(plStack_90,unaff_x19);
        _swift_bridgeObjectRetain(unaff_x20);
        _swift_bridgeObjectRetain(unaff_x28);
        func_0x00023304(lVar11,plVar23);
        plVar24 = unaff_x21;
        FUN_001455e0(unaff_x21,unaff_x28);
        plVar7 = plStack_90;
        plVar6 = plStack_b0;
        param_2 = unaff_x19;
        if (((ulong)plVar24 & 1) == 0) {
LAB_00148120:
          _swift_bridgeObjectRelease(unaff_x28);
          _swift_bridgeObjectRelease(unaff_x20);
          FUN_00023358(lVar11,plVar23);
          _swift_bridgeObjectRelease(plStack_98);
          _swift_bridgeObjectRelease(lStack_a0);
          FUN_00023358(plStack_90);
          goto LAB_00148158;
        }
        uVar2 = (uint)((ulong)unaff_x19 >> 0x20);
        uVar10 = uVar2 >> 0x1e;
        uVar3 = (uint)((ulong)plVar23 >> 0x20);
        uVar14 = uVar3 >> 0x1e;
        iVar16 = (int)plStack_90;
        if ((ulong)unaff_x19 >> 0x3e == 3) {
          uVar13 = 0;
          if ((((plStack_90 != (long *)0x0) || (unaff_x19 != (long *)0xc000000000000000)) ||
              ((ulong)plVar23 >> 0x3e < 3)) ||
             ((uVar13 = 0, lVar11 != 0 || (plVar23 != (long *)0xc000000000000000))))
          goto joined_r0x00147dcc;
          _swift_bridgeObjectRelease(unaff_x28);
          _swift_bridgeObjectRelease(unaff_x20);
          FUN_00023358(0,0xc000000000000000);
          _swift_bridgeObjectRelease(plStack_98);
          _swift_bridgeObjectRelease(lStack_a0);
          plVar6 = (long *)0x0;
          param_2 = (long *)0xc000000000000000;
LAB_00147c2c:
          FUN_00023358(plVar6);
        }
        else {
          if (1 < uVar2 >> 0x1e) {
            if (uVar10 == 2) {
              uVar13 = plStack_90[3] - plStack_90[2];
              if (SBORROW8(plStack_90[3],plStack_90[2])) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1481a4);
                (*pcVar5)();
              }
              goto joined_r0x00147dcc;
            }
            uVar13 = 0;
            if (uVar14 < 2) goto LAB_00147e08;
LAB_00147dd0:
            if (uVar14 == 2) {
              uVar15 = *(long *)(lVar11 + 0x18) - *(long *)(lVar11 + 0x10);
              if (SBORROW8(*(long *)(lVar11 + 0x18),*(long *)(lVar11 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x148198);
                (*pcVar5)();
              }
              goto LAB_00147e24;
            }
            if (uVar13 != 0) goto LAB_00148120;
LAB_00147bf8:
            _swift_bridgeObjectRelease(unaff_x28);
            _swift_bridgeObjectRelease(unaff_x20);
            FUN_00023358(lVar11,plVar23);
            _swift_bridgeObjectRelease(plStack_98);
            _swift_bridgeObjectRelease(lStack_a0);
            plVar6 = plStack_90;
            goto LAB_00147c2c;
          }
          if (uVar10 == 0) {
            uVar13 = (ulong)unaff_x19 >> 0x30 & 0xff;
          }
          else {
            iVar12 = (int)((ulong)plStack_90 >> 0x20);
            if (SBORROW4(iVar12,iVar16)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1481a0);
              (*pcVar5)();
            }
            uVar13 = (ulong)(iVar12 - iVar16);
          }
joined_r0x00147dcc:
          if (1 < uVar3 >> 0x1e) goto LAB_00147dd0;
LAB_00147e08:
          if (uVar14 == 0) {
            uVar15 = (ulong)plVar23 >> 0x30 & 0xff;
          }
          else {
            iVar12 = (int)((ulong)lVar11 >> 0x20);
            if (SBORROW4(iVar12,(int)lVar11)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x14819c);
              (*pcVar5)();
            }
            uVar15 = (ulong)(iVar12 - (int)lVar11);
          }
LAB_00147e24:
          if (uVar13 != uVar15) goto LAB_00148120;
          if ((long)uVar13 < 1) goto LAB_00147bf8;
          lStack_a8 = unaff_x28;
          if (uVar10 < 2) {
            if (uVar10 == 0) {
              abStack_80[0] = (byte)plStack_90;
              abStack_80[1] = (byte)((ulong)plStack_90 >> 8);
              abStack_80[2] = (byte)((ulong)plStack_90 >> 0x10);
              abStack_80[3] = (byte)((ulong)plStack_90 >> 0x18);
              abStack_80[4] = (byte)((ulong)plStack_90 >> 0x20);
              abStack_80[5] = (byte)((ulong)plStack_90 >> 0x28);
              abStack_80[6] = (byte)((ulong)plStack_90 >> 0x30);
              abStack_80[7] = (byte)((ulong)plStack_90 >> 0x38);
              abStack_80[8] = (byte)unaff_x19;
              abStack_80[9] = (byte)((ulong)unaff_x19 >> 8);
              abStack_80[10] = (byte)((ulong)unaff_x19 >> 0x10);
              abStack_80[0xb] = (byte)((ulong)unaff_x19 >> 0x18);
              abStack_80[0xc] = (byte)((ulong)unaff_x19 >> 0x20);
              abStack_80[0xd] = (byte)((ulong)unaff_x19 >> 0x28);
              FUN_000382a0(&bStack_81,abStack_80,abStack_80 + ((ulong)unaff_x19 >> 0x30 & 0xff),
                           lVar11,plVar23);
              plStack_b0 = plVar6;
              _swift_bridgeObjectRelease(lStack_a8);
              _swift_bridgeObjectRelease(unaff_x20);
              FUN_00023358(lVar11,plVar23);
              _swift_bridgeObjectRelease(plStack_98);
              _swift_bridgeObjectRelease(lStack_a0);
              unaff_x27 = plVar7;
              goto LAB_00148040;
            }
            lVar17 = (long)iVar16;
            plStack_c0 = (long *)(((long)plStack_90 >> 0x20) - lVar17);
            if ((long)plStack_90 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1481a8);
              uStack_b8 = unaff_x20;
              (*pcVar5)();
            }
            uStack_b8 = unaff_x20;
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            if (plVar24 == (long *)0x0) {
              __s10Foundation13__DataStorageC7_lengthSivg();
              lVar17 = 0;
              lVar9 = 0;
              plVar24 = unaff_x27;
            }
            else {
              plVar6 = plVar24;
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar17,(long)plVar6)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1481b4);
                (*pcVar5)();
              }
              lVar1 = (lVar17 - (long)plVar6) + (long)plVar24;
              __s10Foundation13__DataStorageC7_lengthSivg();
              if ((long)plStack_c0 <= (long)plVar6) {
                plVar6 = plStack_c0;
              }
              lVar17 = 0;
              if (lVar1 != 0) {
                lVar17 = lVar1;
              }
              lVar9 = 0;
              if (lVar1 != 0) {
                lVar9 = (long)plVar6 + lVar1;
              }
            }
            unaff_x21 = plStack_b0;
            FUN_000382a0(abStack_80,lVar17,lVar9,lVar11,plVar23);
            plStack_b0 = unaff_x21;
            _swift_bridgeObjectRelease(lStack_a8);
            uVar13 = uStack_b8;
            unaff_x20 = (ulong)unaff_x19 & 0x3fffffffffffffff;
            lVar17 = unaff_x28;
LAB_001480e0:
            _swift_bridgeObjectRelease(uVar13);
            FUN_00023358(lVar11,plVar23);
            _swift_bridgeObjectRelease(plStack_98);
            _swift_bridgeObjectRelease(lStack_a0);
            FUN_00023358(plStack_90);
            unaff_x27 = plVar24;
            unaff_x28 = lVar17;
            bVar4 = abStack_80[0];
          }
          else {
            if (uVar10 == 2) {
              lVar17 = plStack_90[2];
              lVar9 = plStack_90[3];
              uStack_b8 = unaff_x20;
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              plVar6 = plVar24;
              if (plVar24 == (long *)0x0) {
                lVar1 = 0;
              }
              else {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar17,(long)plVar6)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1481b0);
                  (*pcVar5)();
                }
                lVar1 = (lVar17 - (long)plVar6) + (long)plVar24;
              }
              if (SBORROW8(lVar9,lVar17)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1481ac);
                (*pcVar5)();
              }
              plVar24 = (long *)(lVar9 - lVar17);
              __s10Foundation13__DataStorageC7_lengthSivg();
              unaff_x21 = plStack_b0;
              uVar13 = uStack_b8;
              if (lVar1 == 0) {
                lVar9 = 0;
              }
              else {
                if ((long)plVar24 <= (long)plVar6) {
                  plVar6 = plVar24;
                }
                lVar9 = (long)plVar6 + lVar1;
              }
              FUN_000382a0(abStack_80,lVar1,lVar9,lVar11,plVar23);
              plStack_b0 = unaff_x21;
              _swift_bridgeObjectRelease(lStack_a8);
              unaff_x20 = uVar13;
              goto LAB_001480e0;
            }
            abStack_80[8] = 0;
            abStack_80[9] = 0;
            abStack_80[10] = 0;
            abStack_80[0xb] = 0;
            abStack_80[0xc] = 0;
            abStack_80[0xd] = 0;
            abStack_80[0] = 0;
            abStack_80[1] = 0;
            abStack_80[2] = 0;
            abStack_80[3] = 0;
            abStack_80[4] = 0;
            abStack_80[5] = 0;
            abStack_80[6] = 0;
            abStack_80[7] = 0;
            FUN_000382a0(&bStack_81,abStack_80,abStack_80,lVar11,plVar23);
            plStack_b0 = plVar6;
            _swift_bridgeObjectRelease(lStack_a8);
            _swift_bridgeObjectRelease(unaff_x20);
            FUN_00023358(lVar11,plVar23);
            _swift_bridgeObjectRelease(plStack_98);
            _swift_bridgeObjectRelease(lStack_a0);
            plVar7 = plStack_90;
LAB_00148040:
            FUN_00023358(plVar7);
            unaff_x21 = plVar6;
            bVar4 = bStack_81;
          }
          if ((bVar4 & 1) == 0) goto LAB_00148158;
        }
        unaff_x22 = unaff_x22 + 6;
        unaff_x23 = unaff_x23 + 6;
        plVar21 = (long *)((long)plVar21 + -1);
      } while (plVar21 != (long *)0x0);
    }
    plVar8 = (long *)((long)&MACH_HEADER.magic + 1);
    plVar7 = unaff_x19;
    plVar24 = unaff_x22;
    plVar19 = unaff_x23;
    plVar22 = plVar21;
    unaff_x23 = unaff_x27;
  }
  else {
LAB_00148158:
    plVar8 = (long *)0x0;
    plVar7 = unaff_x19;
    plVar24 = unaff_x22;
    plVar19 = unaff_x23;
    plVar22 = plVar21;
    unaff_x23 = unaff_x27;
  }
LAB_0014815c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return plVar8;
  }
  ___stack_chk_fail();
  lVar11 = plVar8[2];
  if (lVar11 != param_2[2]) {
    return (long *)0x0;
  }
  if ((lVar11 == 0) || (plVar8 == param_2)) {
    return (long *)((long)&MACH_HEADER.magic + 1);
  }
  pcStack_c8 = FUN_001481b8;
  puVar18 = (ulong *)(plVar8 + 4);
  puVar20 = (ulong *)(param_2 + 4);
  lStack_110 = unaff_x28;
  plStack_108 = unaff_x23;
  plStack_100 = plVar22;
  plStack_f8 = plVar19;
  plStack_f0 = plVar24;
  plStack_e8 = unaff_x21;
  uStack_e0 = unaff_x20;
  plStack_d8 = plVar7;
  puStack_d0 = &stack0xfffffffffffffff0;
  while( true ) {
    lVar11 = lVar11 + -1;
    uStack_1c8 = puVar18[9];
    uStack_1d0 = puVar18[8];
    uStack_1b8 = puVar18[0xb];
    uStack_1c0 = puVar18[10];
    uStack_1a8 = puVar18[0xd];
    uStack_1b0 = puVar18[0xc];
    uStack_1a0 = puVar18[0xe];
    uStack_208 = puVar18[1];
    uVar13 = *puVar18;
    uStack_1f8 = puVar18[3];
    uStack_200 = puVar18[2];
    uStack_1e8 = puVar18[5];
    uStack_1f0 = puVar18[4];
    uStack_1d8 = puVar18[7];
    uStack_1e0 = puVar18[6];
    uStack_188 = puVar20[1];
    uStack_190 = *puVar20;
    uStack_178 = puVar20[3];
    uStack_180 = puVar20[2];
    uStack_168 = puVar20[5];
    uStack_170 = puVar20[4];
    uStack_158 = puVar20[7];
    uStack_160 = puVar20[6];
    uStack_148 = puVar20[9];
    uStack_150 = puVar20[8];
    uStack_138 = puVar20[0xb];
    uStack_140 = puVar20[10];
    uStack_128 = puVar20[0xd];
    uStack_130 = puVar20[0xc];
    uStack_120 = puVar20[0xe];
    uStack_210 = uVar13;
    if (((uVar13 != uStack_190) || (uStack_208 != uStack_188)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar13 & 1) == 0)) {
      return (long *)0x0;
    }
    if (((uStack_200 != uStack_180) || (uStack_1f8 != uStack_178)) &&
       (uVar13 = uStack_200,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
       , (uVar13 & 1) == 0)) {
      return (long *)0x0;
    }
    if ((char)uStack_1f0 != (char)uStack_170) {
      return (long *)0x0;
    }
    if (((uStack_1e8 != uStack_168) || (uStack_1e0 != uStack_160)) &&
       (uVar13 = uStack_1e8,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
       , (uVar13 & 1) == 0)) {
      return (long *)0x0;
    }
    uVar15 = uStack_150;
    uVar13 = uStack_1d0;
    if ((char)uStack_1d8 != (char)uStack_158) {
      return (long *)0x0;
    }
    func_0x00192ad0(&uStack_210,auStack_288);
    func_0x00192ad0(&uStack_190,auStack_288);
    FUN_001455e0(uVar13,uVar15);
    if ((uVar13 & 1) == 0) break;
    if ((char)uStack_140 == '\x01') {
      if (uStack_148 == 0) {
        if (uStack_1c8 != 0) break;
      }
      else if (uStack_148 == 1) {
        if (uStack_1c8 != 1) break;
      }
      else if (uStack_1c8 != 2) break;
    }
    else if (uStack_1c8 != uStack_148) break;
    if (((uStack_1b8 != uStack_138) || (uStack_1b0 != uStack_130)) &&
       (uVar13 = uStack_1b8,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
       , (uVar13 & 1) == 0)) break;
    uVar13 = uStack_1a8;
    FUN_00038814(uStack_1a8,uStack_1a0,uStack_128,uStack_120);
    func_0x00192b0c(&uStack_190);
    func_0x00192b0c(&uStack_210);
    if ((uVar13 & 1) == 0) {
      return (long *)0x0;
    }
    if (lVar11 == 0) {
      return (long *)((long)&MACH_HEADER.magic + 1);
    }
    puVar18 = puVar18 + 0xf;
    puVar20 = puVar20 + 0xf;
  }
  func_0x00192b0c(&uStack_190);
  func_0x00192b0c(&uStack_210);
  return (long *)0x0;
}



/* Entry: 001481b8; end: 001483f7;  */

undefined8 FUN_001481b8(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined1 auStack_1c8 [120];
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar2 == 0) || (param_1 == param_2)) {
    return 1;
  }
  puVar3 = (ulong *)(param_1 + 0x20);
  puVar4 = (ulong *)(param_2 + 0x20);
  while( true ) {
    lVar2 = lVar2 + -1;
    uStack_108 = puVar3[9];
    uStack_110 = puVar3[8];
    uStack_f8 = puVar3[0xb];
    uStack_100 = puVar3[10];
    uStack_e8 = puVar3[0xd];
    uStack_f0 = puVar3[0xc];
    uStack_e0 = puVar3[0xe];
    uStack_148 = puVar3[1];
    uVar5 = *puVar3;
    uStack_138 = puVar3[3];
    uStack_140 = puVar3[2];
    uStack_128 = puVar3[5];
    uStack_130 = puVar3[4];
    uStack_118 = puVar3[7];
    uStack_120 = puVar3[6];
    uStack_c8 = puVar4[1];
    uStack_d0 = *puVar4;
    uStack_b8 = puVar4[3];
    uStack_c0 = puVar4[2];
    uStack_a8 = puVar4[5];
    uStack_b0 = puVar4[4];
    uStack_98 = puVar4[7];
    uStack_a0 = puVar4[6];
    uStack_88 = puVar4[9];
    uStack_90 = puVar4[8];
    uStack_78 = puVar4[0xb];
    uStack_80 = puVar4[10];
    uStack_68 = puVar4[0xd];
    uStack_70 = puVar4[0xc];
    uStack_60 = puVar4[0xe];
    uStack_150 = uVar5;
    if (((uVar5 != uStack_d0) || (uStack_148 != uStack_c8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar5 & 1) == 0)) {
      return 0;
    }
    if (((uStack_140 != uStack_c0) || (uStack_138 != uStack_b8)) &&
       (uVar5 = uStack_140,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
       , (uVar5 & 1) == 0)) {
      return 0;
    }
    if ((char)uStack_130 != (char)uStack_b0) {
      return 0;
    }
    if (((uStack_128 != uStack_a8) || (uStack_120 != uStack_a0)) &&
       (uVar5 = uStack_128,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
       , (uVar5 & 1) == 0)) {
      return 0;
    }
    uVar1 = uStack_90;
    uVar5 = uStack_110;
    if ((char)uStack_118 != (char)uStack_98) {
      return 0;
    }
    func_0x00192ad0(&uStack_150,auStack_1c8);
    func_0x00192ad0(&uStack_d0,auStack_1c8);
    FUN_001455e0(uVar5,uVar1);
    if ((uVar5 & 1) == 0) break;
    if ((char)uStack_80 == '\x01') {
      if (uStack_88 == 0) {
        if (uStack_108 != 0) break;
      }
      else if (uStack_88 == 1) {
        if (uStack_108 != 1) break;
      }
      else if (uStack_108 != 2) break;
    }
    else if (uStack_108 != uStack_88) break;
    if (((uStack_f8 != uStack_78) || (uStack_f0 != uStack_70)) &&
       (uVar5 = uStack_f8,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
       , (uVar5 & 1) == 0)) break;
    uVar5 = uStack_e8;
    FUN_00038814(uStack_e8,uStack_e0,uStack_68,uStack_60);
    func_0x00192b0c(&uStack_d0);
    func_0x00192b0c(&uStack_150);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (lVar2 == 0) {
      return 1;
    }
    puVar3 = puVar3 + 0xf;
    puVar4 = puVar4 + 0xf;
  }
  func_0x00192b0c(&uStack_d0);
  func_0x00192b0c(&uStack_150);
  return 0;
}



/* Entry: 001483f8; end: 001489cb;  */

ulong FUN_001483f8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  char *pcVar15;
  int iVar16;
  ulong uVar17;
  char *pcVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  ulong *puVar24;
  ulong *puVar25;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar23 = *(long *)(param_1 + 0x10);
  if (lVar23 == *(long *)(param_2 + 0x10)) {
    if ((lVar23 != 0) && (param_1 != param_2)) {
      puVar24 = (ulong *)(param_2 + 0x48);
      puVar25 = (ulong *)(param_1 + 0x28);
      do {
        uVar17 = puVar25[-1];
        uVar3 = *puVar25;
        uVar20 = puVar25[1];
        uVar4 = puVar25[2];
        uVar1 = puVar25[3];
        uVar13 = puVar25[4];
        uVar5 = puVar24[-4];
        uVar12 = puVar24[-3];
        uVar6 = puVar24[-2];
        uVar2 = puVar24[-1];
        uVar7 = *puVar24;
        if ((((uVar17 != puVar24[-5]) || (uVar3 != uVar5)) &&
            (param_2 = uVar3,
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar17 & 1) == 0)) ||
           (((uVar20 != uVar12 || (uVar4 != uVar6)) &&
            (param_2 = uVar4,
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar20,uVar4,uVar12,uVar6,0), (uVar20 & 1) == 0)))) goto LAB_00148964;
        uVar9 = (uint)(uVar13 >> 0x20);
        uVar14 = uVar9 >> 0x1e;
        uVar10 = (uint)(uVar7 >> 0x20);
        uVar19 = uVar10 >> 0x1e;
        iVar22 = (int)uVar1;
        if (uVar13 >> 0x3e == 3) {
          uVar17 = 0;
          if (((uVar1 != 0) || (uVar13 != 0xc000000000000000)) ||
             ((uVar7 >> 0x3e < 3 || ((uVar17 = 0, uVar2 != 0 || (uVar7 != 0xc000000000000000))))))
          goto joined_r0x0014878c;
        }
        else {
          if (uVar9 >> 0x1e < 2) {
            if (uVar14 == 0) {
              uVar17 = uVar13 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)(uVar1 >> 0x20);
              if (SBORROW4(iVar16,iVar22)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1489b8);
                (*pcVar11)();
              }
              uVar17 = (ulong)(iVar16 - iVar22);
            }
joined_r0x0014878c:
            if (uVar10 >> 0x1e < 2) goto LAB_001485bc;
LAB_00148588:
            if (uVar19 != 2) {
              if (uVar17 == 0) goto LAB_00148458;
              goto LAB_00148964;
            }
            uVar20 = *(long *)(uVar2 + 0x18) - *(long *)(uVar2 + 0x10);
            if (SBORROW8(*(long *)(uVar2 + 0x18),*(long *)(uVar2 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1489ac);
              (*pcVar11)();
            }
          }
          else {
            if (uVar14 == 2) {
              uVar17 = *(long *)(uVar1 + 0x18) - *(long *)(uVar1 + 0x10);
              if (SBORROW8(*(long *)(uVar1 + 0x18),*(long *)(uVar1 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1489b4);
                (*pcVar11)();
              }
              goto joined_r0x0014878c;
            }
            uVar17 = 0;
            if (1 < uVar19) goto LAB_00148588;
LAB_001485bc:
            if (uVar19 == 0) {
              uVar20 = uVar7 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)(uVar2 >> 0x20);
              if (SBORROW4(iVar16,(int)uVar2)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1489b0);
                (*pcVar11)();
              }
              uVar20 = (ulong)(iVar16 - (int)uVar2);
            }
          }
          if (uVar17 != uVar20) goto LAB_00148964;
          if (0 < (long)uVar17) {
            if (uVar14 < 2) {
              if (uVar14 != 0) {
                lVar21 = (long)iVar22;
                uVar17 = ((long)uVar1 >> 0x20) - lVar21;
                if ((long)uVar1 >> 0x20 < lVar21) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1489bc);
                  (*pcVar11)();
                }
                _swift_bridgeObjectRetain(uVar3);
                _swift_bridgeObjectRetain(uVar4);
                func_0x00023304(uVar1,uVar13);
                _swift_bridgeObjectRetain(uVar5);
                _swift_bridgeObjectRetain(uVar6);
                uVar20 = uVar2;
                func_0x00023304(uVar2,uVar7);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                if (uVar20 == 0) {
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  uVar17 = 0;
                  lVar21 = 0;
                }
                else {
                  uVar12 = uVar20;
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar21,uVar12)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1489c8);
                    (*pcVar11)();
                  }
                  uVar20 = (lVar21 - uVar12) + uVar20;
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  if ((long)uVar17 <= (long)uVar12) {
                    uVar12 = uVar17;
                  }
                  uVar17 = 0;
                  if (uVar20 != 0) {
                    uVar17 = uVar20;
                  }
                  lVar21 = 0;
                  if (uVar20 != 0) {
                    lVar21 = uVar12 + uVar20;
                  }
                }
LAB_0014890c:
                FUN_000382a0(abStack_80,uVar17,lVar21,uVar2,uVar7);
                _swift_bridgeObjectRelease(uVar6);
                _swift_bridgeObjectRelease(uVar5);
                FUN_00023358(uVar2,uVar7);
                _swift_bridgeObjectRelease(uVar4);
                _swift_bridgeObjectRelease(uVar3);
                FUN_00023358(uVar1);
                param_2 = uVar13;
                if ((abStack_80[0] & 1) != 0) goto LAB_00148458;
                goto LAB_00148964;
              }
              abStack_80[0] = (byte)uVar1;
              abStack_80[1] = (byte)(uVar1 >> 8);
              abStack_80[2] = (byte)(uVar1 >> 0x10);
              abStack_80[3] = (byte)(uVar1 >> 0x18);
              abStack_80[4] = (byte)(uVar1 >> 0x20);
              abStack_80[5] = (byte)(uVar1 >> 0x28);
              abStack_80[6] = (byte)(uVar1 >> 0x30);
              abStack_80[7] = (byte)(uVar1 >> 0x38);
              abStack_80[8] = (byte)uVar13;
              abStack_80[9] = (byte)(uVar13 >> 8);
              abStack_80[10] = (byte)(uVar13 >> 0x10);
              abStack_80[0xb] = (byte)(uVar13 >> 0x18);
              abStack_80[0xc] = (byte)(uVar13 >> 0x20);
              abStack_80[0xd] = (byte)(uVar13 >> 0x28);
              _swift_bridgeObjectRetain(uVar3);
              _swift_bridgeObjectRetain(uVar4);
              func_0x00023304(uVar1,uVar13);
              _swift_bridgeObjectRetain(uVar5);
              _swift_bridgeObjectRetain(uVar6);
              func_0x00023304(uVar2,uVar7);
              FUN_000382a0(&bStack_81,abStack_80,abStack_80 + (uVar13 >> 0x30 & 0xff),uVar2,uVar7);
              _swift_bridgeObjectRelease(uVar6);
            }
            else {
              if (uVar14 == 2) {
                lVar21 = *(long *)(uVar1 + 0x10);
                lVar8 = *(long *)(uVar1 + 0x18);
                _swift_bridgeObjectRetain(uVar3);
                _swift_bridgeObjectRetain(uVar4);
                func_0x00023304(uVar1,uVar13);
                _swift_bridgeObjectRetain(uVar5);
                _swift_bridgeObjectRetain(uVar6);
                uVar17 = uVar2;
                func_0x00023304(uVar2,uVar7);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                uVar20 = uVar17;
                if (uVar17 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar21,uVar20)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1489c4);
                    (*pcVar11)();
                  }
                  uVar17 = (lVar21 - uVar20) + uVar17;
                }
                uVar12 = lVar8 - lVar21;
                if (SBORROW8(lVar8,lVar21)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1489c0);
                  (*pcVar11)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if (uVar17 == 0) {
                  lVar21 = 0;
                }
                else {
                  if ((long)uVar12 <= (long)uVar20) {
                    uVar20 = uVar12;
                  }
                  lVar21 = uVar20 + uVar17;
                }
                goto LAB_0014890c;
              }
              abStack_80[8] = 0;
              abStack_80[9] = 0;
              abStack_80[10] = 0;
              abStack_80[0xb] = 0;
              abStack_80[0xc] = 0;
              abStack_80[0xd] = 0;
              abStack_80[0] = 0;
              abStack_80[1] = 0;
              abStack_80[2] = 0;
              abStack_80[3] = 0;
              abStack_80[4] = 0;
              abStack_80[5] = 0;
              abStack_80[6] = 0;
              abStack_80[7] = 0;
              _swift_bridgeObjectRetain(uVar3);
              _swift_bridgeObjectRetain(uVar4);
              func_0x00023304(uVar1,uVar13);
              _swift_bridgeObjectRetain(uVar5);
              _swift_bridgeObjectRetain(uVar6);
              func_0x00023304(uVar2,uVar7);
              FUN_000382a0(&bStack_81,abStack_80,abStack_80,uVar2,uVar7);
              _swift_bridgeObjectRelease(uVar6);
            }
            _swift_bridgeObjectRelease(uVar5);
            FUN_00023358(uVar2,uVar7);
            _swift_bridgeObjectRelease(uVar4);
            _swift_bridgeObjectRelease(uVar3);
            FUN_00023358(uVar1);
            param_2 = uVar13;
            if ((bStack_81 & 1) == 0) goto LAB_00148964;
          }
        }
LAB_00148458:
        puVar24 = puVar24 + 6;
        puVar25 = puVar25 + 6;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
    uVar17 = 1;
  }
  else {
LAB_00148964:
    uVar17 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return uVar17;
  }
  ___stack_chk_fail();
  lVar23 = *(long *)(uVar17 + 0x10);
  if (lVar23 == *(long *)(param_2 + 0x10)) {
    if ((lVar23 != 0) && (uVar17 != param_2)) {
      pcVar15 = (char *)(uVar17 + 0x20);
      pcVar18 = (char *)(param_2 + 0x20);
      do {
        lVar23 = lVar23 + -1;
        uVar17 = (ulong)(*pcVar15 == *pcVar18);
        if (*pcVar15 != *pcVar18) {
          return uVar17;
        }
        pcVar15 = pcVar15 + 1;
        pcVar18 = pcVar18 + 1;
      } while (lVar23 != 0);
      return uVar17;
    }
    return 1;
  }
  return 0;
}



/* Entry: 001489cc; end: 00148a27;  */

bool FUN_001489cc(long param_1,long param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != *(long *)(param_2 + 0x10)) {
    return false;
  }
  if ((lVar4 != 0) && (param_1 != param_2)) {
    pcVar2 = (char *)(param_1 + 0x20);
    pcVar3 = (char *)(param_2 + 0x20);
    do {
      lVar4 = lVar4 + -1;
      bVar1 = *pcVar2 == *pcVar3;
      if (*pcVar2 != *pcVar3) {
        return bVar1;
      }
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (lVar4 != 0);
    return bVar1;
  }
  return true;
}



/* Entry: 00148a28; end: 00148fd7;  */

byte * FUN_00148a28(byte *param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  byte *unaff_x19;
  byte *unaff_x20;
  ulong unaff_x21;
  long lVar17;
  byte *unaff_x22;
  int iVar18;
  long unaff_x23;
  byte *unaff_x24;
  byte *pbVar19;
  byte *pbVar20;
  long lVar21;
  undefined1 auStack_240 [112];
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
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined8 uStack_16f;
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
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  byte *pbStack_f0;
  long lStack_e8;
  byte *pbStack_e0;
  ulong uStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  byte *pbStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  ulong uStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar21 = *(long *)(param_1 + 0x10);
  uVar5 = uStack_90;
  if (lVar21 == *(long *)(param_2 + 0x10)) {
    if ((lVar21 != 0) && (param_1 != param_2)) {
      uStack_90 = 0;
      pbVar19 = param_2 + 0x40;
      unaff_x19 = param_1 + 0x40;
      do {
        unaff_x23 = *(long *)(unaff_x19 + -0x20);
        unaff_x22 = *(byte **)(unaff_x19 + -0x18);
        pbVar20 = *(byte **)(unaff_x19 + -8);
        bVar2 = *unaff_x19;
        unaff_x20 = (byte *)(ulong)bVar2;
        pbVar8 = *(byte **)(pbVar19 + -0x20);
        uVar1 = *(ulong *)(pbVar19 + -0x18);
        unaff_x24 = *(byte **)(pbVar19 + -8);
        bVar3 = *pbVar19;
        unaff_x21 = (ulong)bVar3;
        uVar5 = uStack_90;
        if (pbVar20 == (byte *)0x0) {
          if (unaff_x24 != (byte *)0x0) goto LAB_00148f70;
        }
        else if ((unaff_x24 == (byte *)0x0) ||
                ((uVar7 = *(ulong *)(unaff_x19 + -0x10),
                 uVar7 != *(ulong *)(pbVar19 + -0x10) || pbVar20 != unaff_x24 &&
                 (param_2 = pbVar20, pbStack_98 = unaff_x19,
                 __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                           (), unaff_x19 = pbStack_98, uVar5 = uStack_90, (uVar7 & 1) == 0))))
        goto LAB_00148f70;
        uVar5 = uStack_90;
        if (bVar2 == 2) {
          if (bVar3 != 2) goto LAB_00148f70;
        }
        else {
          pbVar10 = (byte *)0x0;
          if ((bVar3 == 2) || (((bVar2 ^ bVar3) & 1) != 0)) goto LAB_00148f7c;
        }
        uVar16 = (uint)((ulong)unaff_x22 >> 0x20);
        uVar12 = uVar16 >> 0x1e;
        uVar4 = (uint)(uVar1 >> 0x20);
        uVar14 = uVar4 >> 0x1e;
        iVar18 = (int)unaff_x23;
        if ((ulong)unaff_x22 >> 0x3e == 3) {
          uVar7 = 0;
          if ((((unaff_x23 != 0) || (unaff_x22 != (byte *)0xc000000000000000)) ||
              (uVar1 >> 0x3e < 3)) ||
             ((uVar7 = 0, pbVar8 != (byte *)0x0 || (uVar1 != 0xc000000000000000))))
          goto joined_r0x00148d88;
        }
        else {
          if (uVar16 >> 0x1e < 2) {
            if (uVar12 == 0) {
              uVar7 = (ulong)unaff_x22 >> 0x30 & 0xff;
            }
            else {
              iVar13 = (int)((ulong)unaff_x23 >> 0x20);
              if (SBORROW4(iVar13,iVar18)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x148fc4);
                (*pcVar6)();
              }
              uVar7 = (ulong)(iVar13 - iVar18);
            }
joined_r0x00148d88:
            if (uVar4 >> 0x1e < 2) goto LAB_00148bcc;
LAB_00148b98:
            if (uVar14 != 2) {
              if (uVar7 == 0) goto LAB_00148a88;
              goto LAB_00148f70;
            }
            uVar15 = *(long *)(pbVar8 + 0x18) - *(long *)(pbVar8 + 0x10);
            if (SBORROW8(*(long *)(pbVar8 + 0x18),*(long *)(pbVar8 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x148fb8);
              (*pcVar6)();
            }
          }
          else {
            if (uVar12 == 2) {
              uVar7 = *(long *)(unaff_x23 + 0x18) - *(long *)(unaff_x23 + 0x10);
              if (SBORROW8(*(long *)(unaff_x23 + 0x18),*(long *)(unaff_x23 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x148fc0);
                (*pcVar6)();
              }
              goto joined_r0x00148d88;
            }
            uVar7 = 0;
            if (1 < uVar14) goto LAB_00148b98;
LAB_00148bcc:
            if (uVar14 == 0) {
              uVar15 = uVar1 >> 0x30 & 0xff;
            }
            else {
              iVar13 = (int)((ulong)pbVar8 >> 0x20);
              if (SBORROW4(iVar13,(int)pbVar8)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x148fbc);
                (*pcVar6)();
              }
              uVar15 = (ulong)(iVar13 - (int)pbVar8);
            }
          }
          if (uVar7 != uVar15) goto LAB_00148f70;
          if (0 < (long)uVar7) {
            param_2 = unaff_x22;
            if (uVar12 < 2) {
              if (uVar12 != 0) {
                lVar17 = (long)iVar18;
                pbStack_a8 = (byte *)((unaff_x23 >> 0x20) - lVar17);
                if (unaff_x23 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x148fc8);
                  pbStack_a0 = pbVar8;
                  pbStack_98 = pbVar20;
                  (*pcVar6)();
                }
                pbStack_a0 = pbVar8;
                pbStack_98 = pbVar20;
                func_0x00023304(unaff_x23,unaff_x22);
                _swift_bridgeObjectRetain(pbStack_98);
                func_0x00023304(pbStack_a0,uVar1);
                pbVar8 = unaff_x24;
                _swift_bridgeObjectRetain();
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                if (pbVar8 == (byte *)0x0) {
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  pbVar20 = (byte *)0x0;
                  pbVar10 = (byte *)0x0;
                }
                else {
                  pbVar9 = pbVar8;
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar17,(long)pbVar9)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x148fd4);
                    (*pcVar6)();
                  }
                  pbVar8 = pbVar8 + (lVar17 - (long)pbVar9);
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  if ((long)pbStack_a8 <= (long)pbVar9) {
                    pbVar9 = pbStack_a8;
                  }
                  pbVar20 = (byte *)0x0;
                  if (pbVar8 != (byte *)0x0) {
                    pbVar20 = pbVar8;
                  }
                  pbVar10 = (byte *)0x0;
                  if (pbVar8 != (byte *)0x0) {
                    pbVar10 = pbVar9 + (long)pbVar8;
                  }
                }
                unaff_x21 = uStack_90;
                unaff_x20 = pbStack_a0;
                FUN_000382a0(abStack_80,pbVar20,pbVar10,pbStack_a0,uVar1);
                uStack_90 = unaff_x21;
                FUN_00023358(unaff_x20,uVar1);
                _swift_bridgeObjectRelease(unaff_x24);
                FUN_00023358(unaff_x23);
                _swift_bridgeObjectRelease(pbStack_98);
                uVar5 = uStack_90;
                if ((abStack_80[0] & 1) != 0) goto LAB_00148a88;
                goto LAB_00148f70;
              }
              abStack_80[0] = (byte)unaff_x23;
              abStack_80[1] = (byte)((ulong)unaff_x23 >> 8);
              abStack_80[2] = (byte)((ulong)unaff_x23 >> 0x10);
              abStack_80[3] = (byte)((ulong)unaff_x23 >> 0x18);
              abStack_80[4] = (byte)((ulong)unaff_x23 >> 0x20);
              abStack_80[5] = (byte)((ulong)unaff_x23 >> 0x28);
              abStack_80[6] = (byte)((ulong)unaff_x23 >> 0x30);
              abStack_80[7] = (byte)((ulong)unaff_x23 >> 0x38);
              abStack_80[8] = (byte)unaff_x22;
              abStack_80[9] = (byte)((ulong)unaff_x22 >> 8);
              abStack_80[10] = (byte)((ulong)unaff_x22 >> 0x10);
              abStack_80[0xb] = (byte)((ulong)unaff_x22 >> 0x18);
              abStack_80[0xc] = (byte)((ulong)unaff_x22 >> 0x20);
              abStack_80[0xd] = (byte)((ulong)unaff_x22 >> 0x28);
              func_0x00023304(unaff_x23,unaff_x22);
              _swift_bridgeObjectRetain(pbVar20);
              func_0x00023304(pbVar8,uVar1);
              _swift_bridgeObjectRetain(unaff_x24);
              unaff_x21 = uStack_90;
              FUN_000382a0(&bStack_81,abStack_80,abStack_80 + ((ulong)unaff_x22 >> 0x30 & 0xff),
                           pbVar8,uVar1);
              uStack_90 = unaff_x21;
              FUN_00023358(pbVar8,uVar1);
              _swift_bridgeObjectRelease(unaff_x24);
              FUN_00023358(unaff_x23);
              unaff_x20 = pbVar8;
LAB_00148ea8:
              _swift_bridgeObjectRelease(pbVar20);
              uVar1 = uStack_90;
              uVar5 = uStack_90;
              bVar2 = bStack_81;
            }
            else {
              if (uVar12 != 2) {
                abStack_80[8] = 0;
                abStack_80[9] = 0;
                abStack_80[10] = 0;
                abStack_80[0xb] = 0;
                abStack_80[0xc] = 0;
                abStack_80[0xd] = 0;
                abStack_80[0] = 0;
                abStack_80[1] = 0;
                abStack_80[2] = 0;
                abStack_80[3] = 0;
                abStack_80[4] = 0;
                abStack_80[5] = 0;
                abStack_80[6] = 0;
                abStack_80[7] = 0;
                pbStack_a0 = pbVar8;
                pbStack_98 = pbVar20;
                func_0x00023304(unaff_x23,unaff_x22);
                pbVar20 = pbStack_98;
                _swift_bridgeObjectRetain(pbStack_98);
                pbVar8 = pbStack_a0;
                func_0x00023304(pbStack_a0,uVar1);
                _swift_bridgeObjectRetain(unaff_x24);
                unaff_x21 = uStack_90;
                FUN_000382a0(&bStack_81,abStack_80,abStack_80,pbVar8,uVar1);
                uStack_90 = unaff_x21;
                FUN_00023358(pbVar8,uVar1);
                _swift_bridgeObjectRelease(unaff_x24);
                FUN_00023358(unaff_x23);
                unaff_x20 = pbVar20;
                goto LAB_00148ea8;
              }
              lVar17 = *(long *)(unaff_x23 + 0x10);
              pbStack_a8 = *(byte **)(unaff_x23 + 0x18);
              pbStack_a0 = pbVar8;
              pbStack_98 = pbVar20;
              func_0x00023304(unaff_x23,unaff_x22);
              _swift_bridgeObjectRetain(pbStack_98);
              func_0x00023304(pbStack_a0,uVar1);
              pbVar8 = unaff_x24;
              _swift_bridgeObjectRetain();
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              pbVar20 = pbVar8;
              if (pbVar8 != (byte *)0x0) {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar17,(long)pbVar20)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x148fd0);
                  (*pcVar6)();
                }
                pbVar8 = pbVar8 + (lVar17 - (long)pbVar20);
              }
              pbVar10 = pbStack_a8 + -lVar17;
              if (SBORROW8((long)pbStack_a8,lVar17)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x148fcc);
                (*pcVar6)();
              }
              __s10Foundation13__DataStorageC7_lengthSivg();
              unaff_x21 = uStack_90;
              unaff_x20 = pbStack_a0;
              if (pbVar8 == (byte *)0x0) {
                pbVar20 = (byte *)0x0;
              }
              else {
                if ((long)pbVar10 <= (long)pbVar20) {
                  pbVar20 = pbVar10;
                }
                pbVar20 = pbVar20 + (long)pbVar8;
              }
              FUN_000382a0(abStack_80,pbVar8,pbVar20,pbStack_a0,uVar1);
              FUN_00023358(unaff_x20,uVar1);
              _swift_bridgeObjectRelease(unaff_x24);
              FUN_00023358(unaff_x23);
              _swift_bridgeObjectRelease(pbStack_98);
              uVar1 = unaff_x21;
              uVar5 = uStack_90;
              bVar2 = abStack_80[0];
            }
            uStack_90 = uVar1;
            if ((bVar2 & 1) == 0) goto LAB_00148f70;
          }
        }
LAB_00148a88:
        pbVar19 = pbVar19 + 0x28;
        unaff_x19 = unaff_x19 + 0x28;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
    }
    pbVar10 = (byte *)((long)&MACH_HEADER.magic + 1);
  }
  else {
LAB_00148f70:
    uStack_90 = uVar5;
    pbVar10 = (byte *)0x0;
  }
LAB_00148f7c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return pbVar10;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_00148fd8;
  lVar21 = *(long *)(pbVar10 + 0x10);
  if (lVar21 == *(long *)(param_2 + 0x10)) {
    if ((lVar21 == 0) || (pbVar10 == param_2)) {
      uVar16 = 1;
    }
    else {
      pbVar10 = pbVar10 + 0x20;
      param_2 = param_2 + 0x20;
      pbStack_f0 = unaff_x24;
      lStack_e8 = unaff_x23;
      pbStack_e0 = unaff_x22;
      uStack_d8 = unaff_x21;
      pbStack_d0 = unaff_x20;
      pbStack_c8 = unaff_x19;
      puStack_c0 = &stack0xfffffffffffffff0;
      do {
        lVar21 = lVar21 + -1;
        uStack_188 = *(undefined8 *)(pbVar10 + 0x48);
        uStack_190 = *(undefined8 *)(pbVar10 + 0x40);
        uStack_180 = *(undefined8 *)(pbVar10 + 0x50);
        uStack_178 = (undefined1)*(undefined8 *)(pbVar10 + 0x58);
        uStack_16f = *(undefined8 *)(pbVar10 + 0x61);
        uStack_177 = (undefined7)*(undefined8 *)(pbVar10 + 0x59);
        uStack_170 = (undefined1)((ulong)*(undefined8 *)(pbVar10 + 0x59) >> 0x38);
        uStack_1c8 = *(undefined8 *)(pbVar10 + 8);
        uStack_1d0 = *(undefined8 *)pbVar10;
        uStack_1b8 = *(undefined8 *)(pbVar10 + 0x18);
        uStack_1c0 = *(undefined8 *)(pbVar10 + 0x10);
        uStack_1a8 = *(undefined8 *)(pbVar10 + 0x28);
        uStack_1b0 = *(undefined8 *)(pbVar10 + 0x20);
        uStack_198 = *(undefined8 *)(pbVar10 + 0x38);
        uStack_1a0 = *(undefined8 *)(pbVar10 + 0x30);
        uStack_158 = *(undefined8 *)(param_2 + 8);
        uStack_160 = *(undefined8 *)param_2;
        uStack_148 = *(undefined8 *)(param_2 + 0x18);
        uStack_150 = *(undefined8 *)(param_2 + 0x10);
        uStack_138 = *(undefined8 *)(param_2 + 0x28);
        uStack_140 = *(undefined8 *)(param_2 + 0x20);
        uStack_128 = *(undefined8 *)(param_2 + 0x38);
        uStack_130 = *(undefined8 *)(param_2 + 0x30);
        uStack_ff = *(undefined8 *)(param_2 + 0x61);
        uStack_100 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x59) >> 0x38);
        uStack_118 = *(undefined8 *)(param_2 + 0x48);
        uStack_120 = *(undefined8 *)(param_2 + 0x40);
        uStack_110 = *(undefined8 *)(param_2 + 0x50);
        uStack_108 = (undefined1)*(undefined8 *)(param_2 + 0x58);
        uStack_107 = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x58) >> 8);
        FUN_00192830(&uStack_1d0,auStack_240);
        FUN_00192830(&uStack_160,auStack_240);
        puVar11 = &uStack_1d0;
        FUN_00183aec(puVar11,&uStack_160);
        uVar16 = (uint)puVar11;
        func_0x00192864(&uStack_160);
        func_0x00192864(&uStack_1d0);
        if (((ulong)puVar11 & 1) == 0) break;
        param_2 = param_2 + 0x70;
        pbVar10 = pbVar10 + 0x70;
      } while (lVar21 != 0);
    }
  }
  else {
    uVar16 = 0;
  }
  return (byte *)(ulong)(uVar16 & 1);
}



/* Entry: 00148fd8; end: 001491f7;  */

uint FUN_00148fd8(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_190 [112];
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
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
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
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_d8 = puVar4[9];
        uStack_e0 = puVar4[8];
        uStack_d0 = puVar4[10];
        uStack_c8 = (undefined1)puVar4[0xb];
        uStack_bf = *(undefined8 *)((long)puVar4 + 0x61);
        uStack_c7 = (undefined7)*(undefined8 *)((long)puVar4 + 0x59);
        uStack_c0 = (undefined1)((ulong)*(undefined8 *)((long)puVar4 + 0x59) >> 0x38);
        uStack_118 = puVar4[1];
        uStack_120 = *puVar4;
        uStack_108 = puVar4[3];
        uStack_110 = puVar4[2];
        uStack_f8 = puVar4[5];
        uStack_100 = puVar4[4];
        uStack_e8 = puVar4[7];
        uStack_f0 = puVar4[6];
        uStack_a8 = puVar5[1];
        uStack_b0 = *puVar5;
        uStack_98 = puVar5[3];
        uStack_a0 = puVar5[2];
        uStack_88 = puVar5[5];
        uStack_90 = puVar5[4];
        uStack_78 = puVar5[7];
        uStack_80 = puVar5[6];
        uStack_4f = *(undefined8 *)((long)puVar5 + 0x61);
        uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)puVar5 + 0x59) >> 0x38);
        uStack_68 = puVar5[9];
        uStack_70 = puVar5[8];
        uStack_60 = puVar5[10];
        uStack_58 = (undefined1)puVar5[0xb];
        uStack_57 = (undefined7)((ulong)puVar5[0xb] >> 8);
        FUN_00192830(&uStack_120,auStack_190);
        FUN_00192830(&uStack_b0,auStack_190);
        puVar1 = &uStack_120;
        FUN_00183aec(puVar1,&uStack_b0);
        uVar3 = (uint)puVar1;
        func_0x00192864(&uStack_b0);
        func_0x00192864(&uStack_120);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar5 = puVar5 + 0xe;
        puVar4 = puVar4 + 0xe;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 001491f8; end: 001496df;  */

ulong FUN_001491f8(ulong param_1,ulong param_2,code *param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  code *pcVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  ulong unaff_x20;
  code *unaff_x21;
  undefined8 *puVar20;
  ulong unaff_x22;
  undefined8 *puVar21;
  ulong unaff_x23;
  int iVar22;
  ulong unaff_x24;
  ulong uVar23;
  ulong *puVar24;
  ulong *puVar25;
  undefined1 auStack_368 [200];
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
  undefined1 uStack_1e0;
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
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  code *pcStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  ulong uStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar19 = *(long *)(param_1 + 0x10);
  if (lVar19 == *(long *)(param_2 + 0x10)) {
    pcVar6 = unaff_x21;
    if ((lVar19 != 0) && (param_1 != param_2)) {
      pcStack_98 = (code *)0x0;
      puVar25 = (ulong *)(param_2 + 0x30);
      puVar24 = (ulong *)(param_1 + 0x30);
      unaff_x21 = param_3;
      pcStack_a0 = param_3;
      do {
        unaff_x24 = puVar24[-2];
        unaff_x23 = puVar24[-1];
        unaff_x22 = *puVar24;
        unaff_x20 = puVar25[-2];
        uVar2 = puVar25[-1];
        uVar23 = *puVar25;
        func_0x00023304(unaff_x24,unaff_x23);
        _swift_retain(unaff_x22);
        uStack_90 = unaff_x20;
        func_0x00023304(unaff_x20,uVar2);
        uVar8 = uVar23;
        _swift_retain();
        param_2 = unaff_x23;
        if (unaff_x22 != uVar23) {
          _swift_retain(unaff_x22);
          _swift_retain(uVar23);
          unaff_x20 = unaff_x22;
          (*unaff_x21)(unaff_x22,uVar23);
          _swift_release(uVar23);
          uVar8 = unaff_x22;
          _swift_release();
          if ((unaff_x20 & 1) != 0) goto LAB_0014933c;
LAB_00149658:
          FUN_00023358(uStack_90,uVar2);
          _swift_release(uVar23);
          FUN_00023358(unaff_x24);
          _swift_release(unaff_x22);
          goto LAB_00149680;
        }
LAB_0014933c:
        uVar7 = uStack_90;
        pcVar5 = pcStack_98;
        uVar18 = (uint)(unaff_x23 >> 0x20);
        uVar12 = uVar18 >> 0x1e;
        uVar3 = (uint)(uVar2 >> 0x20);
        uVar16 = uVar3 >> 0x1e;
        iVar22 = (int)unaff_x24;
        if (unaff_x23 >> 0x3e == 3) {
          uVar15 = 0;
          if ((((unaff_x24 != 0) || (unaff_x23 != 0xc000000000000000)) || (uVar2 >> 0x3e < 3)) ||
             ((uVar15 = 0, uStack_90 != 0 || (uVar2 != 0xc000000000000000))))
          goto joined_r0x001493b4;
          FUN_00023358(0,0xc000000000000000);
          _swift_release(uVar23);
          uVar8 = 0;
          param_2 = 0xc000000000000000;
LAB_001494d0:
          FUN_00023358(uVar8);
          _swift_release(unaff_x22);
          pcVar6 = unaff_x21;
          pcVar5 = pcStack_98;
        }
        else {
          if (1 < uVar18 >> 0x1e) {
            if (uVar12 == 2) {
              uVar15 = *(long *)(unaff_x24 + 0x18) - *(long *)(unaff_x24 + 0x10);
              if (SBORROW8(*(long *)(unaff_x24 + 0x18),*(long *)(unaff_x24 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x1496cc);
                (*pcVar6)();
              }
              goto joined_r0x001493b4;
            }
            uVar15 = 0;
            if (uVar16 < 2) goto LAB_001493f0;
LAB_001493b8:
            if (uVar16 == 2) {
              uVar17 = *(long *)(uStack_90 + 0x18) - *(long *)(uStack_90 + 0x10);
              if (SBORROW8(*(long *)(uStack_90 + 0x18),*(long *)(uStack_90 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x1496c0);
                (*pcVar6)();
              }
              goto LAB_00149418;
            }
            if (uVar15 != 0) goto LAB_00149658;
LAB_001494b4:
            FUN_00023358(uStack_90,uVar2);
            _swift_release(uVar23);
            uVar8 = unaff_x24;
            goto LAB_001494d0;
          }
          if (uVar12 == 0) {
            uVar15 = unaff_x23 >> 0x30 & 0xff;
          }
          else {
            iVar14 = (int)(unaff_x24 >> 0x20);
            if (SBORROW4(iVar14,iVar22)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1496c8);
              (*pcVar6)();
            }
            uVar15 = (ulong)(iVar14 - iVar22);
          }
joined_r0x001493b4:
          if (1 < uVar3 >> 0x1e) goto LAB_001493b8;
LAB_001493f0:
          if (uVar16 == 0) {
            uVar17 = uVar2 >> 0x30 & 0xff;
          }
          else {
            iVar14 = (int)(uStack_90 >> 0x20);
            if (SBORROW4(iVar14,(int)uStack_90)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1496c4);
              (*pcVar6)();
            }
            uVar17 = (ulong)(iVar14 - (int)uStack_90);
          }
LAB_00149418:
          if (uVar15 != uVar17) goto LAB_00149658;
          if ((long)uVar15 < 1) goto LAB_001494b4;
          if (uVar12 < 2) {
            if (uVar12 == 0) {
              abStack_80[0] = (byte)unaff_x24;
              abStack_80[1] = (byte)(unaff_x24 >> 8);
              abStack_80[2] = (byte)(unaff_x24 >> 0x10);
              abStack_80[3] = (byte)(unaff_x24 >> 0x18);
              abStack_80[4] = (byte)(unaff_x24 >> 0x20);
              abStack_80[5] = (byte)(unaff_x24 >> 0x28);
              abStack_80[6] = (byte)(unaff_x24 >> 0x30);
              abStack_80[7] = (byte)(unaff_x24 >> 0x38);
              abStack_80[8] = (byte)unaff_x23;
              abStack_80[9] = (byte)(unaff_x23 >> 8);
              abStack_80[10] = (byte)(unaff_x23 >> 0x10);
              abStack_80[0xb] = (byte)(unaff_x23 >> 0x18);
              abStack_80[0xc] = (byte)(unaff_x23 >> 0x20);
              abStack_80[0xd] = (byte)(unaff_x23 >> 0x28);
              pbVar10 = abStack_80 + (unaff_x23 >> 0x30 & 0xff);
              goto LAB_0014926c;
            }
            lVar13 = (long)iVar22;
            uStack_a8 = ((long)unaff_x24 >> 0x20) - lVar13;
            if ((long)unaff_x24 >> 0x20 < lVar13) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1496d0);
              (*pcVar6)();
            }
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            if (uVar8 == 0) {
              __s10Foundation13__DataStorageC7_lengthSivg();
              lVar13 = 0;
              lVar11 = 0;
            }
            else {
              uStack_b0 = uVar8;
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar13,uVar8)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x1496dc);
                (*pcVar6)();
              }
              lVar1 = (lVar13 - uVar8) + uStack_b0;
              __s10Foundation13__DataStorageC7_lengthSivg();
              if ((long)uStack_a8 <= (long)uVar8) {
                uVar8 = uStack_a8;
              }
              lVar13 = 0;
              if (lVar1 != 0) {
                lVar13 = lVar1;
              }
              lVar11 = 0;
              if (lVar1 != 0) {
                lVar11 = uVar8 + lVar1;
              }
            }
LAB_0014960c:
            unaff_x20 = uStack_90;
            unaff_x21 = pcStack_98;
            FUN_000382a0(abStack_80,lVar13,lVar11,uStack_90,uVar2);
            FUN_00023358(unaff_x20,uVar2);
            _swift_release(uVar23);
            FUN_00023358(unaff_x24);
            _swift_release(unaff_x22);
            pcVar6 = pcStack_a0;
            bVar4 = abStack_80[0];
          }
          else {
            if (uVar12 == 2) {
              uStack_a8 = *(ulong *)(unaff_x24 + 0x10);
              uStack_b0 = *(ulong *)(unaff_x24 + 0x18);
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              uStack_b8 = unaff_x24;
              if (uVar8 == 0) {
                lVar13 = 0;
              }
              else {
                uVar7 = uVar8;
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(uStack_a8,uVar7)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x1496d8);
                  (*pcVar6)();
                }
                lVar13 = (uStack_a8 - uVar7) + uVar8;
                uVar8 = uVar7;
              }
              uVar7 = uStack_b0 - uStack_a8;
              if (SBORROW8(uStack_b0,uStack_a8)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x1496d4);
                (*pcVar6)();
              }
              __s10Foundation13__DataStorageC7_lengthSivg();
              unaff_x24 = uStack_b8;
              if (lVar13 == 0) {
                lVar11 = 0;
              }
              else {
                if ((long)uVar7 <= (long)uVar8) {
                  uVar8 = uVar7;
                }
                lVar11 = uVar8 + lVar13;
              }
              goto LAB_0014960c;
            }
            abStack_80[8] = 0;
            abStack_80[9] = 0;
            abStack_80[10] = 0;
            abStack_80[0xb] = 0;
            abStack_80[0xc] = 0;
            abStack_80[0xd] = 0;
            abStack_80[0] = 0;
            abStack_80[1] = 0;
            abStack_80[2] = 0;
            abStack_80[3] = 0;
            abStack_80[4] = 0;
            abStack_80[5] = 0;
            abStack_80[6] = 0;
            abStack_80[7] = 0;
            pbVar10 = abStack_80;
LAB_0014926c:
            FUN_000382a0(&bStack_81,abStack_80,pbVar10,uStack_90,uVar2);
            FUN_00023358(uVar7,uVar2);
            _swift_release(uVar23);
            FUN_00023358(unaff_x24);
            _swift_release(unaff_x22);
            pcVar6 = pcStack_a0;
            unaff_x21 = pcVar5;
            unaff_x20 = uVar7;
            bVar4 = bStack_81;
          }
          pcStack_a0 = pcVar6;
          pcVar5 = unaff_x21;
          if ((bVar4 & 1) == 0) goto LAB_00149680;
        }
        pcStack_98 = pcVar5;
        puVar25 = puVar25 + 3;
        puVar24 = puVar24 + 3;
        lVar19 = lVar19 + -1;
        unaff_x21 = pcVar6;
      } while (lVar19 != 0);
    }
    uVar8 = 1;
    unaff_x21 = pcVar6;
  }
  else {
LAB_00149680:
    uVar8 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return uVar8;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_001496e0;
  lVar13 = *(long *)(uVar8 + 0x10);
  if (lVar13 == *(long *)(param_2 + 0x10)) {
    if ((lVar13 == 0) || (uVar8 == param_2)) {
      uVar18 = 1;
    }
    else {
      puVar20 = (undefined8 *)(uVar8 + 0x20);
      puVar21 = (undefined8 *)(param_2 + 0x20);
      uStack_100 = unaff_x24;
      uStack_f8 = unaff_x23;
      uStack_f0 = unaff_x22;
      pcStack_e8 = unaff_x21;
      uStack_e0 = unaff_x20;
      lStack_d8 = lVar19;
      puStack_d0 = &stack0xfffffffffffffff0;
      do {
        lVar13 = lVar13 + -1;
        uStack_1f8 = puVar20[0x15];
        uStack_200 = puVar20[0x14];
        uStack_1e8 = puVar20[0x17];
        uStack_1f0 = puVar20[0x16];
        uStack_1e0 = *(undefined1 *)(puVar20 + 0x18);
        uStack_238 = puVar20[0xd];
        uStack_240 = puVar20[0xc];
        uStack_228 = puVar20[0xf];
        uStack_230 = puVar20[0xe];
        uStack_218 = puVar20[0x11];
        uStack_220 = puVar20[0x10];
        uStack_208 = puVar20[0x13];
        uStack_210 = puVar20[0x12];
        uStack_278 = puVar20[5];
        uStack_280 = puVar20[4];
        uStack_268 = puVar20[7];
        uStack_270 = puVar20[6];
        uStack_258 = puVar20[9];
        uStack_260 = puVar20[8];
        uStack_248 = puVar20[0xb];
        uStack_250 = puVar20[10];
        uStack_298 = puVar20[1];
        uStack_2a0 = *puVar20;
        uStack_288 = puVar20[3];
        uStack_290 = puVar20[2];
        uStack_128 = puVar21[0x15];
        uStack_130 = puVar21[0x14];
        uStack_118 = puVar21[0x17];
        uStack_120 = puVar21[0x16];
        uStack_110 = *(undefined1 *)(puVar21 + 0x18);
        uStack_168 = puVar21[0xd];
        uStack_170 = puVar21[0xc];
        uStack_158 = puVar21[0xf];
        uStack_160 = puVar21[0xe];
        uStack_148 = puVar21[0x11];
        uStack_150 = puVar21[0x10];
        uStack_138 = puVar21[0x13];
        uStack_140 = puVar21[0x12];
        uStack_1a8 = puVar21[5];
        uStack_1b0 = puVar21[4];
        uStack_198 = puVar21[7];
        uStack_1a0 = puVar21[6];
        uStack_188 = puVar21[9];
        uStack_190 = puVar21[8];
        uStack_178 = puVar21[0xb];
        uStack_180 = puVar21[10];
        uStack_1c8 = puVar21[1];
        uStack_1d0 = *puVar21;
        uStack_1b8 = puVar21[3];
        uStack_1c0 = puVar21[2];
        FUN_00191df8(&uStack_2a0,auStack_368);
        FUN_00191df8(&uStack_1d0,auStack_368);
        puVar9 = &uStack_2a0;
        func_0x00183ea4(puVar9,&uStack_1d0);
        uVar18 = (uint)puVar9;
        func_0x00191e2c(&uStack_1d0);
        func_0x00191e2c(&uStack_2a0);
        if (((ulong)puVar9 & 1) == 0) break;
        puVar21 = puVar21 + 0x19;
        puVar20 = puVar20 + 0x19;
      } while (lVar13 != 0);
    }
  }
  else {
    uVar18 = 0;
  }
  return (ulong)(uVar18 & 1);
}



/* Entry: 001496e0; end: 0014991f;  */

uint FUN_001496e0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [200];
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_138 = puVar4[0x15];
        uStack_140 = puVar4[0x14];
        uStack_128 = puVar4[0x17];
        uStack_130 = puVar4[0x16];
        uStack_120 = *(undefined1 *)(puVar4 + 0x18);
        uStack_178 = puVar4[0xd];
        uStack_180 = puVar4[0xc];
        uStack_168 = puVar4[0xf];
        uStack_170 = puVar4[0xe];
        uStack_158 = puVar4[0x11];
        uStack_160 = puVar4[0x10];
        uStack_148 = puVar4[0x13];
        uStack_150 = puVar4[0x12];
        uStack_1b8 = puVar4[5];
        uStack_1c0 = puVar4[4];
        uStack_1a8 = puVar4[7];
        uStack_1b0 = puVar4[6];
        uStack_198 = puVar4[9];
        uStack_1a0 = puVar4[8];
        uStack_188 = puVar4[0xb];
        uStack_190 = puVar4[10];
        uStack_1d8 = puVar4[1];
        uStack_1e0 = *puVar4;
        uStack_1c8 = puVar4[3];
        uStack_1d0 = puVar4[2];
        uStack_68 = puVar5[0x15];
        uStack_70 = puVar5[0x14];
        uStack_58 = puVar5[0x17];
        uStack_60 = puVar5[0x16];
        uStack_50 = *(undefined1 *)(puVar5 + 0x18);
        uStack_a8 = puVar5[0xd];
        uStack_b0 = puVar5[0xc];
        uStack_98 = puVar5[0xf];
        uStack_a0 = puVar5[0xe];
        uStack_88 = puVar5[0x11];
        uStack_90 = puVar5[0x10];
        uStack_78 = puVar5[0x13];
        uStack_80 = puVar5[0x12];
        uStack_e8 = puVar5[5];
        uStack_f0 = puVar5[4];
        uStack_d8 = puVar5[7];
        uStack_e0 = puVar5[6];
        uStack_c8 = puVar5[9];
        uStack_d0 = puVar5[8];
        uStack_b8 = puVar5[0xb];
        uStack_c0 = puVar5[10];
        uStack_108 = puVar5[1];
        uStack_110 = *puVar5;
        uStack_f8 = puVar5[3];
        uStack_100 = puVar5[2];
        FUN_00191df8(&uStack_1e0,auStack_2a8);
        FUN_00191df8(&uStack_110,auStack_2a8);
        puVar1 = &uStack_1e0;
        func_0x00183ea4(puVar1,&uStack_110);
        uVar3 = (uint)puVar1;
        func_0x00191e2c(&uStack_110);
        func_0x00191e2c(&uStack_1e0);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar5 = puVar5 + 0x19;
        puVar4 = puVar4 + 0x19;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 00149920; end: 00149b3b;  */

undefined8 FUN_00149920(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_110 [64];
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined2 uStack_a8;
  undefined6 uStack_a6;
  undefined2 uStack_a0;
  undefined6 uStack_9e;
  byte bStack_98;
  byte bStack_97;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined2 uStack_68;
  undefined6 uStack_66;
  undefined2 uStack_60;
  undefined6 uStack_5e;
  byte bStack_58;
  byte bStack_57;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar2 == 0) || (param_1 == param_2)) {
    return 1;
  }
  puVar3 = (ulong *)(param_1 + 0x20);
  puVar4 = (undefined8 *)(param_2 + 0x20);
  while( true ) {
    lVar2 = lVar2 + -1;
    uStack_c8 = puVar3[1];
    uStack_d0 = *puVar3;
    uVar6 = puVar3[3];
    uVar5 = puVar3[2];
    uStack_b0 = puVar3[4];
    uStack_a8 = (undefined2)puVar3[5];
    uVar7 = *(undefined8 *)((long)puVar3 + 0x32);
    uStack_9e = (undefined6)uVar7;
    bStack_98 = (byte)((ulong)uVar7 >> 0x30);
    bStack_97 = (byte)((ulong)uVar7 >> 0x38);
    uStack_a6 = (undefined6)*(undefined8 *)((long)puVar3 + 0x2a);
    uStack_a0 = (undefined2)((ulong)*(undefined8 *)((long)puVar3 + 0x2a) >> 0x30);
    uStack_88 = puVar4[1];
    uStack_90 = *puVar4;
    uStack_78 = puVar4[3];
    uVar7 = puVar4[2];
    uStack_70 = puVar4[4];
    uStack_68 = (undefined2)puVar4[5];
    uVar8 = *(undefined8 *)((long)puVar4 + 0x32);
    uStack_5e = (undefined6)uVar8;
    bStack_58 = (byte)((ulong)uVar8 >> 0x30);
    bStack_57 = (byte)((ulong)uVar8 >> 0x38);
    uStack_66 = (undefined6)*(undefined8 *)((long)puVar4 + 0x2a);
    uStack_60 = (undefined2)((ulong)*(undefined8 *)((long)puVar4 + 0x2a) >> 0x30);
    uStack_c0._4_1_ = (char)(uVar5 >> 0x20);
    uStack_80._4_1_ = (char)((ulong)uVar7 >> 0x20);
    if (uStack_c0._4_1_ == '\x01') {
      if (uStack_80._4_1_ != '\x01') {
        return 0;
      }
    }
    else {
      if (uStack_80._4_1_ == '\x01') {
        return 0;
      }
      uStack_80._0_4_ = (int)uVar7;
      uStack_c0._0_4_ = (int)uVar5;
      if ((int)uStack_c0 != (int)uStack_80) {
        return 0;
      }
    }
    uStack_c0 = uVar5;
    uStack_b8 = uVar6;
    uStack_80 = uVar7;
    if (uStack_b0 == 0) {
      if (uStack_70 != 0) {
        return 0;
      }
    }
    else {
      if (uStack_70 == 0) {
        return 0;
      }
      if (((uVar6 != uStack_78) || (uStack_b0 != uStack_70)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar6 & 1) == 0)) {
        return 0;
      }
    }
    lVar1 = CONCAT62(uStack_5e,uStack_60);
    if (CONCAT62(uStack_9e,uStack_a0) == 0) {
      if (lVar1 != 0) {
        return 0;
      }
    }
    else {
      if (lVar1 == 0) {
        return 0;
      }
      uVar6 = CONCAT62(uStack_a6,uStack_a8);
      if (((uVar6 != CONCAT62(uStack_66,uStack_68)) || (CONCAT62(uStack_9e,uStack_a0) != lVar1)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar6 & 1) == 0)) {
        return 0;
      }
    }
    uVar8 = uStack_88;
    uVar7 = uStack_90;
    uVar5 = uStack_c8;
    uVar6 = uStack_d0;
    if (bStack_98 == 2) {
      if (bStack_58 != 2) {
        return 0;
      }
    }
    else {
      if (bStack_58 == 2) {
        return 0;
      }
      if (((bStack_98 ^ bStack_58) & 1) != 0) {
        return 0;
      }
    }
    if (bStack_97 == 2) {
      if (bStack_57 != 2) {
        return 0;
      }
    }
    else {
      if (bStack_57 == 2) {
        return 0;
      }
      if (((bStack_97 ^ bStack_57) & 1) != 0) {
        return 0;
      }
    }
    FUN_00192a70(&uStack_d0,auStack_110);
    FUN_00192a70(&uStack_90,auStack_110);
    FUN_00038814(uVar6,uVar5,uVar7,uVar8);
    func_0x00192aa4(&uStack_90);
    func_0x00192aa4(&uStack_d0);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if (lVar2 == 0) break;
    puVar3 = puVar3 + 8;
    puVar4 = puVar4 + 8;
  }
  return 1;
}



/* Entry: 00149b3c; end: 0014ca0b;  */

undefined8 FUN_00149b3c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_148 [72];
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  ulong uStack_88;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == *(long *)(param_2 + 0x10)) {
    if ((lVar9 != 0) && (param_1 != param_2)) {
      lVar10 = 0;
      do {
        plVar7 = (long *)(param_1 + 0x20 + lVar10 * 0x48);
        uVar11 = plVar7[5];
        lStack_e0 = plVar7[4];
        uStack_c8 = plVar7[7];
        lStack_d0 = plVar7[6];
        lStack_c0 = plVar7[8];
        lStack_f8 = plVar7[1];
        lStack_100 = *plVar7;
        uStack_e8 = plVar7[3];
        lStack_f0 = plVar7[2];
        plVar7 = (long *)(param_2 + 0x20 + lVar10 * 0x48);
        lStack_70 = plVar7[8];
        uStack_88 = plVar7[5];
        lStack_90 = plVar7[4];
        uStack_78 = plVar7[7];
        lStack_80 = plVar7[6];
        lStack_a8 = plVar7[1];
        lStack_b0 = *plVar7;
        lStack_98 = plVar7[3];
        lStack_a0 = plVar7[2];
        lVar4 = *(long *)(lStack_100 + 0x10);
        if (lVar4 != *(long *)(lStack_b0 + 0x10)) goto LAB_00149d8c;
        if ((lVar4 != 0) && (lStack_100 != lStack_b0)) {
          piVar5 = (int *)(lStack_100 + 0x20);
          piVar6 = (int *)(lStack_b0 + 0x20);
          do {
            if (*piVar5 != *piVar6) goto LAB_00149d8c;
            lVar4 = lVar4 + -1;
            piVar5 = piVar5 + 1;
            piVar6 = piVar6 + 1;
          } while (lVar4 != 0);
        }
        lVar4 = *(long *)(lStack_f8 + 0x10);
        if (lVar4 != *(long *)(lStack_a8 + 0x10)) goto LAB_00149d8c;
        if (lVar4 != 0 && lStack_f8 != lStack_a8) {
          piVar5 = (int *)(lStack_f8 + 0x20);
          piVar6 = (int *)(lStack_a8 + 0x20);
          do {
            if (*piVar5 != *piVar6) goto LAB_00149d8c;
            lVar4 = lVar4 + -1;
            piVar5 = piVar5 + 1;
            piVar6 = piVar6 + 1;
          } while (lVar4 != 0);
        }
        uStack_d8 = uVar11;
        if (lStack_d0 == 0) {
          if (lStack_80 != 0) goto LAB_00149d8c;
        }
        else if ((lStack_80 == 0) ||
                (((uVar11 != uStack_88 || (lStack_d0 != lStack_80)) &&
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar11 & 1) == 0)))) goto LAB_00149d8c;
        if (lStack_c0 == 0) {
          if (lStack_70 != 0) goto LAB_00149d8c;
        }
        else if ((lStack_70 == 0) ||
                (((uStack_c8 != uStack_78 || (lStack_c0 != lStack_70)) &&
                 (uVar11 = uStack_c8,
                 __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                           (), (uVar11 & 1) == 0)))) goto LAB_00149d8c;
        lVar4 = *(long *)(lStack_f0 + 0x10);
        if (lVar4 != *(long *)(lStack_a0 + 0x10)) goto LAB_00149d8c;
        if ((lVar4 != 0) && (lStack_f0 != lStack_a0)) {
          plVar7 = (long *)(lStack_a0 + 0x28);
          plVar8 = (long *)(lStack_f0 + 0x28);
          do {
            uVar11 = plVar8[-1];
            if ((uVar11 != plVar7[-1] || *plVar8 != *plVar7) &&
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar11 & 1) == 0)) goto LAB_00149d8c;
            plVar7 = plVar7 + 2;
            plVar8 = plVar8 + 2;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        lVar2 = lStack_90;
        lVar1 = lStack_98;
        lVar4 = lStack_e0;
        uVar11 = uStack_e8;
        func_0x00191f94(&lStack_100,auStack_148);
        func_0x00191f94(&lStack_b0,auStack_148);
        FUN_00038814(uVar11,lVar4,lVar1,lVar2);
        func_0x00191fc8(&lStack_b0);
        func_0x00191fc8(&lStack_100);
        if ((uVar11 & 1) == 0) goto LAB_00149d8c;
        lVar10 = lVar10 + 1;
      } while (lVar10 != lVar9);
    }
    uVar3 = 1;
  }
  else {
LAB_00149d8c:
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 0014ca0c; end: 0014cc4b;  */

void FUN_0014ca0c(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_66 [4];
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  uVar6 = uVar2 >> 0x1e;
  lVar7 = (long)param_2 >> 0x20;
  if (uVar2 >> 0x1e < 2) {
    if (uVar6 == 0) {
      if (((ulong)param_3 & 0xff000000000000) != 0) {
LAB_0014ca7c:
        if (param_1[0x50] == '\x01') {
          if (uVar6 == 2) {
            lVar7 = *(long *)(param_2 + 0x10);
            lVar8 = *(long *)(param_2 + 0x18);
            puVar5 = param_1;
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            puVar4 = puVar5;
            if (puVar5 != (undefined1 *)0x0) {
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar7,(long)puVar4)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x14cc44);
                (*pcVar3)();
              }
              puVar5 = puVar5 + (lVar7 - (long)puVar4);
            }
            puVar1 = (undefined1 *)(lVar8 - lVar7);
            if (SBORROW8(lVar8,lVar7)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x14cc40);
              (*pcVar3)();
            }
            __s10Foundation13__DataStorageC7_lengthSivg();
            if ((long)puVar1 <= (long)puVar4) {
              puVar4 = puVar1;
            }
            param_2 = (undefined1 *)0x0;
            if (puVar5 != (undefined1 *)0x0) {
              param_2 = puVar4 + (long)puVar5;
            }
          }
          else if (uVar6 == 1) {
            lVar8 = (long)(int)param_2;
            if (lVar7 < lVar8) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x14cc3c);
              (*pcVar3)();
            }
            puVar5 = param_1;
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            if (puVar5 == (undefined1 *)0x0) {
              __s10Foundation13__DataStorageC7_lengthSivg();
              puVar5 = (undefined1 *)0x0;
            }
            else {
              param_2 = puVar5;
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar8,(long)param_2)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x14cc48);
                (*pcVar3)();
              }
              puVar5 = puVar5 + (lVar8 - (long)param_2);
              __s10Foundation13__DataStorageC7_lengthSivg();
              if (puVar5 != (undefined1 *)0x0) {
                if (lVar7 - lVar8 <= (long)param_2) {
                  param_2 = (undefined1 *)(lVar7 - lVar8);
                }
                param_2 = param_2 + (long)puVar5;
                goto LAB_0014cc00;
              }
            }
            param_2 = (undefined1 *)0x0;
          }
          else {
            auStack_66[0] = SUB81(param_2,0);
            auStack_66[1] = (undefined1)((ulong)param_2 >> 8);
            auStack_66[2] = (undefined1)((ulong)param_2 >> 0x10);
            auStack_66[3] = (undefined1)((ulong)param_2 >> 0x18);
            uStack_62 = (undefined1)((ulong)param_2 >> 0x20);
            uStack_61 = (undefined1)((ulong)param_2 >> 0x28);
            uStack_60 = (undefined1)((ulong)param_2 >> 0x30);
            uStack_5f = (undefined1)((ulong)param_2 >> 0x38);
            uStack_5e = SUB81(param_3,0);
            uStack_5d = (undefined1)((ulong)param_3 >> 8);
            uStack_5c = (undefined1)((ulong)param_3 >> 0x10);
            uStack_5b = (undefined1)((ulong)param_3 >> 0x18);
            uStack_5a = (undefined1)((ulong)param_3 >> 0x20);
            uStack_59 = (undefined1)((ulong)param_3 >> 0x28);
            puVar5 = auStack_66;
            param_2 = auStack_66 + ((ulong)param_3 >> 0x30 & 0xff);
          }
LAB_0014cc00:
          FUN_0012f7bc(puVar5);
          param_3 = param_1;
        }
      }
    }
    else if ((int)param_2 != lVar7) goto LAB_0014ca7c;
  }
  else if ((uVar6 == 2) && (*(long *)(param_2 + 0x10) != *(long *)(param_2 + 0x18)))
  goto LAB_0014ca7c;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  uVar6 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar6 == 0) {
      if (((ulong)param_3 & 0xff000000000000) != 0) {
LAB_0014cc7c:
        __s10Foundation4DataV4hash4intoys6HasherVz_tF();
        return;
      }
    }
    else if ((long)(int)param_2 != (long)param_2 >> 0x20) goto LAB_0014cc7c;
  }
  else if ((uVar6 == 2) && (*(long *)(param_2 + 0x10) != *(long *)(param_2 + 0x18)))
  goto LAB_0014cc7c;
  return;
}



/* Entry: 0014cc4c; end: 0014ccb3;  */

void FUN_0014cc4c(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((param_3 & 0xff000000000000) != 0) {
LAB_0014cc7c:
        __s10Foundation4DataV4hash4intoys6HasherVz_tF();
        return;
      }
    }
    else if ((int)param_2 != (int)((ulong)param_2 >> 0x20)) goto LAB_0014cc7c;
  }
  else if ((uVar2 == 2) && (*(long *)(param_2 + 0x10) != *(long *)(param_2 + 0x18)))
  goto LAB_0014cc7c;
  return;
}



/* Entry: 0014ccb4; end: 0014d1f7;  */

/* WARNING: Removing unreachable block (ram,0x0014cda4) */
/* WARNING: Removing unreachable block (ram,0x0014ce1c) */

void FUN_0014ccb4(undefined8 *param_1,long param_2,long param_3,ulong param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auStack_2e8 [200];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
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
  undefined1 uStack_70;
  
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_140 = param_1[8];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  lVar5 = *(long *)(param_2 + 0x10);
  if (lVar5 != 0) {
    __ss6HasherV8_combineyySuF(1);
    uStack_1a8 = uStack_158;
    uStack_1b0 = uStack_160;
    uStack_198 = uStack_148;
    uStack_1a0 = uStack_150;
    uStack_190 = uStack_140;
    uStack_1c8 = uStack_178;
    uStack_1d0 = uStack_180;
    uStack_1b8 = uStack_168;
    uStack_1c0 = uStack_170;
    puVar4 = (undefined8 *)(param_2 + 0x20);
    while( true ) {
      lVar5 = lVar5 + -1;
      uStack_88 = puVar4[0x15];
      uStack_90 = puVar4[0x14];
      uStack_78 = puVar4[0x17];
      uStack_80 = puVar4[0x16];
      uStack_70 = *(undefined1 *)(puVar4 + 0x18);
      uStack_c8 = puVar4[0xd];
      uStack_d0 = puVar4[0xc];
      uStack_b8 = puVar4[0xf];
      uStack_c0 = puVar4[0xe];
      uStack_a8 = puVar4[0x11];
      uStack_b0 = puVar4[0x10];
      uStack_98 = puVar4[0x13];
      uStack_a0 = puVar4[0x12];
      uStack_108 = puVar4[5];
      uStack_110 = puVar4[4];
      uStack_f8 = puVar4[7];
      uStack_100 = puVar4[6];
      uStack_e8 = puVar4[9];
      uStack_f0 = puVar4[8];
      uStack_d8 = puVar4[0xb];
      uStack_e0 = puVar4[10];
      uStack_128 = puVar4[1];
      uStack_130 = *puVar4;
      uStack_118 = puVar4[3];
      uStack_120 = puVar4[2];
      uStack_1f8 = uStack_1a8;
      uStack_200 = uStack_1b0;
      uStack_1e8 = uStack_198;
      uStack_1f0 = uStack_1a0;
      uStack_1e0 = uStack_190;
      uStack_218 = uStack_1c8;
      uStack_220 = uStack_1d0;
      uStack_208 = uStack_1b8;
      uStack_210 = uStack_1c0;
      FUN_00191df8(&uStack_130,auStack_2e8);
      FUN_00163d2c(&uStack_220);
      func_0x00191e2c(&uStack_130);
      if (lVar5 == 0) break;
      uStack_1a8 = uStack_1f8;
      uStack_1b0 = uStack_200;
      uStack_198 = uStack_1e8;
      uStack_1a0 = uStack_1f0;
      uStack_190 = uStack_1e0;
      uStack_1c8 = uStack_218;
      uStack_1d0 = uStack_220;
      uStack_1b8 = uStack_208;
      uStack_1c0 = uStack_210;
      puVar4 = puVar4 + 0x19;
    }
    uStack_158 = uStack_1f8;
    uStack_160 = uStack_200;
    uStack_148 = uStack_1e8;
    uStack_150 = uStack_1f0;
    uStack_140 = uStack_1e0;
    uStack_178 = uStack_218;
    uStack_180 = uStack_220;
    uStack_168 = uStack_208;
    uStack_170 = uStack_210;
  }
  FUN_0013bd14(&uStack_180,536000000,0x1ff2b601,param_5);
  uVar1 = (uint)(param_4 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar5 = (long)(int)param_3;
      lVar3 = param_3 >> 0x20;
      goto LAB_0014ce90;
    }
    if ((param_4 & 0xff000000000000) == 0) goto LAB_0014ce24;
  }
  else {
    if (uVar2 != 2) goto LAB_0014ce24;
    lVar5 = *(long *)(param_3 + 0x10);
    lVar3 = *(long *)(param_3 + 0x18);
LAB_0014ce90:
    if (lVar5 == lVar3) goto LAB_0014ce24;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_180,param_3,param_4);
LAB_0014ce24:
  param_1[5] = uStack_158;
  param_1[4] = uStack_160;
  param_1[7] = uStack_148;
  param_1[6] = uStack_150;
  param_1[8] = uStack_140;
  param_1[1] = uStack_178;
  *param_1 = uStack_180;
  param_1[3] = uStack_168;
  param_1[2] = uStack_170;
  return;
}



/* Entry: 0014d1f8; end: 0014d3f7;  */

void FUN_0014d1f8(undefined8 *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  lVar4 = unaff_x20[3];
  if (lVar4 != 0) {
    lVar5 = unaff_x20[2];
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(&uStack_90,lVar5,lVar4);
  }
  bVar1 = *(byte *)(unaff_x20 + 4);
  if (bVar1 != 2) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyys5UInt8VF(bVar1 & 1);
  }
  lVar4 = *unaff_x20;
  uVar2 = (uint)((ulong)unaff_x20[1] >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 != 0) {
      lVar5 = (long)(int)lVar4;
      lVar4 = lVar4 >> 0x20;
      goto LAB_0014d2b4;
    }
    if ((unaff_x20[1] & 0xff000000000000U) == 0) goto LAB_0014d2c4;
  }
  else {
    if (uVar3 != 2) goto LAB_0014d2c4;
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar4 = *(long *)(lVar4 + 0x18);
LAB_0014d2b4:
    if (lVar5 == lVar4) goto LAB_0014d2c4;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90);
LAB_0014d2c4:
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 0014d3f8; end: 0014d5b7;  */

/* WARNING: Removing unreachable block (ram,0x0014d4c4) */
/* WARNING: Removing unreachable block (ram,0x0014d530) */

void FUN_0014d3f8(undefined8 *param_1)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_60 = param_1[8];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  bVar2 = *(byte *)(unaff_x20 + 8);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(0x21);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  lVar6 = unaff_x20[6];
  if (lVar6 != 0) {
    lVar5 = unaff_x20[4];
    lVar1 = unaff_x20[5];
    lVar7 = unaff_x20[7];
    __ss6HasherV8_combineyySuF(0x22);
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_b8 = uStack_68;
    uStack_c0 = uStack_70;
    uStack_b0 = uStack_60;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    func_0x00023304(lVar5,lVar1);
    _swift_bridgeObjectRetain(lVar6);
    FUN_0017c428(&uStack_f0,lVar5,lVar1,lVar6,lVar7);
    FUN_00116294(lVar5,lVar1,lVar6,lVar7);
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_68 = uStack_b8;
    uStack_70 = uStack_c0;
    uStack_60 = uStack_b0;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
  }
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    FUN_0019d040(*unaff_x20,999);
  }
  FUN_0013bd14(&uStack_a0,1000,0x20000000,unaff_x20[3]);
  lVar6 = unaff_x20[1];
  uVar3 = (uint)((ulong)unaff_x20[2] >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)lVar6;
      lVar6 = lVar6 >> 0x20;
      goto LAB_0014d5a4;
    }
    if ((unaff_x20[2] & 0xff000000000000U) == 0) goto LAB_0014d538;
  }
  else {
    if (uVar4 != 2) goto LAB_0014d538;
    lVar5 = *(long *)(lVar6 + 0x10);
    lVar6 = *(long *)(lVar6 + 0x18);
LAB_0014d5a4:
    if (lVar5 == lVar6) goto LAB_0014d538;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_a0);
LAB_0014d538:
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  param_1[7] = uStack_68;
  param_1[6] = uStack_70;
  param_1[8] = uStack_60;
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  return;
}



/* Entry: 0014d5b8; end: 0014d5bb;  */

void FUN_0014d5b8(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_60 = param_1[8];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  if (((uint)((ulong)param_4 >> 0x20) & 0xff) != 1) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)param_4);
  }
  if ((param_5 & 0xff00000000) != 0x100000000) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)param_5);
  }
  uVar1 = (uint)(param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_2;
      lVar4 = param_2 >> 0x20;
      goto LAB_0014d688;
    }
    if ((param_3 & 0xff000000000000) == 0) goto LAB_0014d6a0;
  }
  else {
    if (uVar2 != 2) goto LAB_0014d6a0;
    lVar3 = *(long *)(param_2 + 0x10);
    lVar4 = *(long *)(param_2 + 0x18);
LAB_0014d688:
    if (lVar3 == lVar4) goto LAB_0014d6a0;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_a0,param_2,param_3);
LAB_0014d6a0:
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  param_1[7] = uStack_68;
  param_1[6] = uStack_70;
  param_1[8] = uStack_60;
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  return;
}



/* Entry: 0014d5bc; end: 0014d6d3;  */

void FUN_0014d5bc(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_60 = param_1[8];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  if (((uint)((ulong)param_4 >> 0x20) & 0xff) != 1) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)param_4);
  }
  if ((param_5 & 0xff00000000) != 0x100000000) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)param_5);
  }
  uVar1 = (uint)(param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_2;
      lVar4 = param_2 >> 0x20;
      goto LAB_0014d688;
    }
    if ((param_3 & 0xff000000000000) == 0) goto LAB_0014d6a0;
  }
  else {
    if (uVar2 != 2) goto LAB_0014d6a0;
    lVar3 = *(long *)(param_2 + 0x10);
    lVar4 = *(long *)(param_2 + 0x18);
LAB_0014d688:
    if (lVar3 == lVar4) goto LAB_0014d6a0;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_a0,param_2,param_3);
LAB_0014d6a0:
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  param_1[7] = uStack_68;
  param_1[6] = uStack_70;
  param_1[8] = uStack_60;
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  return;
}



/* Entry: 0014d6d4; end: 0014d81f;  */

void FUN_0014d6d4(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_190 [64];
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_90 = param_1[8];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  lVar3 = unaff_x20[3];
  if (lVar3 != 0) {
    lVar4 = unaff_x20[2];
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(&uStack_d0,lVar4,lVar3);
  }
  lStack_108 = unaff_x20[5];
  lStack_110 = unaff_x20[4];
  lStack_f8 = unaff_x20[7];
  lStack_100 = unaff_x20[6];
  lStack_e8 = unaff_x20[9];
  lStack_f0 = unaff_x20[8];
  lStack_d8 = unaff_x20[0xb];
  lStack_e0 = unaff_x20[10];
  if (lStack_110 != 0) {
    lStack_78 = unaff_x20[5];
    lStack_80 = unaff_x20[4];
    lStack_68 = unaff_x20[7];
    lStack_70 = unaff_x20[6];
    lStack_58 = unaff_x20[9];
    lStack_60 = unaff_x20[8];
    lStack_48 = unaff_x20[0xb];
    lStack_50 = unaff_x20[10];
    __ss6HasherV8_combineyySuF(2);
    lStack_148 = unaff_x20[5];
    lStack_150 = unaff_x20[4];
    lStack_138 = unaff_x20[7];
    lStack_140 = unaff_x20[6];
    lStack_128 = unaff_x20[9];
    lStack_130 = unaff_x20[8];
    lStack_118 = unaff_x20[0xb];
    lStack_120 = unaff_x20[10];
    func_0x00186afc(&lStack_150,auStack_190);
    FUN_0014d820(&uStack_d0);
    func_0x00191ff4(&lStack_110,0xaefe58,&UNK_007d9c30);
  }
  lVar3 = *unaff_x20;
  uVar1 = (uint)((ulong)unaff_x20[1] >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar4 = (long)(int)lVar3;
      lVar3 = lVar3 >> 0x20;
      goto LAB_0014d7e0;
    }
    if ((unaff_x20[1] & 0xff000000000000U) == 0) goto LAB_0014d7f0;
  }
  else {
    if (uVar2 != 2) goto LAB_0014d7f0;
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar3 = *(long *)(lVar3 + 0x18);
LAB_0014d7e0:
    if (lVar4 == lVar3) goto LAB_0014d7f0;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_d0);
LAB_0014d7f0:
  param_1[5] = uStack_a8;
  param_1[4] = uStack_b0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  param_1[8] = uStack_90;
  param_1[1] = uStack_c8;
  *param_1 = uStack_d0;
  param_1[3] = uStack_b8;
  param_1[2] = uStack_c0;
  return;
}



/* Entry: 0014d820; end: 0014d9bb;  */

/* WARNING: Removing unreachable block (ram,0x0014d8c8) */
/* WARNING: Removing unreachable block (ram,0x0014d934) */

void FUN_0014d820(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_60 = param_1[8];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  lVar5 = unaff_x20[6];
  if (lVar5 != 0) {
    lVar4 = unaff_x20[4];
    lVar1 = unaff_x20[5];
    lVar6 = unaff_x20[7];
    __ss6HasherV8_combineyySuF(1);
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_b8 = uStack_68;
    uStack_c0 = uStack_70;
    uStack_b0 = uStack_60;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    func_0x00023304(lVar4,lVar1);
    _swift_bridgeObjectRetain(lVar5);
    FUN_0017c428(&uStack_f0,lVar4,lVar1,lVar5,lVar6);
    FUN_00116294(lVar4,lVar1,lVar5,lVar6);
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_68 = uStack_b8;
    uStack_70 = uStack_c0;
    uStack_60 = uStack_b0;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
  }
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    FUN_0019d040(*unaff_x20,999);
  }
  FUN_0013bd14(&uStack_a0,1000,0x20000000,unaff_x20[3]);
  lVar5 = unaff_x20[1];
  uVar2 = (uint)((ulong)unaff_x20[2] >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 != 0) {
      lVar4 = (long)(int)lVar5;
      lVar5 = lVar5 >> 0x20;
      goto LAB_0014d9a8;
    }
    if ((unaff_x20[2] & 0xff000000000000U) == 0) goto LAB_0014d93c;
  }
  else {
    if (uVar3 != 2) goto LAB_0014d93c;
    lVar4 = *(long *)(lVar5 + 0x10);
    lVar5 = *(long *)(lVar5 + 0x18);
LAB_0014d9a8:
    if (lVar4 == lVar5) goto LAB_0014d93c;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_a0);
LAB_0014d93c:
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  param_1[7] = uStack_68;
  param_1[6] = uStack_70;
  param_1[8] = uStack_60;
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  return;
}



/* Entry: 0014d9bc; end: 0014da97;  */

void FUN_0014d9bc(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  if (*(long *)(param_2 + 0x10) != 0) {
    __ss6HasherV8_combineyySuF(1);
    FUN_001a75d4(&uStack_90,param_2);
  }
  uVar1 = (uint)(param_4 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_3;
      lVar4 = param_3 >> 0x20;
      goto LAB_0014da50;
    }
    if ((param_4 & 0xff000000000000) == 0) goto LAB_0014da68;
  }
  else {
    if (uVar2 != 2) goto LAB_0014da68;
    lVar3 = *(long *)(param_3 + 0x10);
    lVar4 = *(long *)(param_3 + 0x18);
LAB_0014da50:
    if (lVar3 == lVar4) goto LAB_0014da68;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90,param_3,param_4);
LAB_0014da68:
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 0014da98; end: 0014da9b;  */

void FUN_0014da98(undefined8 *param_1,long param_2,int param_3,long param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  if (param_2 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys6UInt64VF(param_2);
  }
  if (param_3 != 0) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyys6UInt64VF((long)param_3);
  }
  uVar1 = (uint)(param_5 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_4;
      lVar4 = param_4 >> 0x20;
      goto LAB_0014db50;
    }
    if ((param_5 & 0xff000000000000) == 0) goto LAB_0014db68;
  }
  else {
    if (uVar2 != 2) goto LAB_0014db68;
    lVar3 = *(long *)(param_4 + 0x10);
    lVar4 = *(long *)(param_4 + 0x18);
LAB_0014db50:
    if (lVar3 == lVar4) goto LAB_0014db68;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90,param_4,param_5);
LAB_0014db68:
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 0014da9c; end: 0014db97;  */

void FUN_0014da9c(undefined8 *param_1,long param_2,int param_3,long param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  if (param_2 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys6UInt64VF(param_2);
  }
  if (param_3 != 0) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyys6UInt64VF((long)param_3);
  }
  uVar1 = (uint)(param_5 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_4;
      lVar4 = param_4 >> 0x20;
      goto LAB_0014db50;
    }
    if ((param_5 & 0xff000000000000) == 0) goto LAB_0014db68;
  }
  else {
    if (uVar2 != 2) goto LAB_0014db68;
    lVar3 = *(long *)(param_4 + 0x10);
    lVar4 = *(long *)(param_4 + 0x18);
LAB_0014db50:
    if (lVar3 == lVar4) goto LAB_0014db68;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90,param_4,param_5);
LAB_0014db68:
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 0014db98; end: 0014dd67;  */

void FUN_0014db98(double param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  double dVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = param_2[5];
  uStack_70 = param_2[4];
  uStack_58 = param_2[7];
  uStack_60 = param_2[6];
  uStack_50 = param_2[8];
  uStack_88 = param_2[1];
  uStack_90 = *param_2;
  uStack_78 = param_2[3];
  uStack_80 = param_2[2];
  if (param_1 != 0.0) {
    __ss6HasherV8_combineyySuF(1);
    dVar4 = 0.0;
    if (param_1 != 0.0) {
      dVar4 = param_1;
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar4);
  }
  uVar1 = (uint)(param_4 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_3;
      param_3 = param_3 >> 0x20;
      goto LAB_0014dc40;
    }
    if ((param_4 & 0xff000000000000) == 0) goto LAB_0014dc50;
  }
  else {
    if (uVar2 != 2) goto LAB_0014dc50;
    lVar3 = *(long *)(param_3 + 0x10);
    param_3 = *(long *)(param_3 + 0x18);
LAB_0014dc40:
    if (lVar3 == param_3) goto LAB_0014dc50;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90);
LAB_0014dc50:
  param_2[5] = uStack_68;
  param_2[4] = uStack_70;
  param_2[7] = uStack_58;
  param_2[6] = uStack_60;
  param_2[8] = uStack_50;
  param_2[1] = uStack_88;
  *param_2 = uStack_90;
  param_2[3] = uStack_78;
  param_2[2] = uStack_80;
  return;
}



/* Entry: 0014dd68; end: 0014dd6b;  */

void FUN_0014dd68(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  if (param_2 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys6UInt64VF(param_2);
  }
  uVar1 = (uint)(param_4 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_3;
      lVar4 = param_3 >> 0x20;
      goto LAB_0014ddfc;
    }
    if ((param_4 & 0xff000000000000) == 0) goto LAB_0014de14;
  }
  else {
    if (uVar2 != 2) goto LAB_0014de14;
    lVar3 = *(long *)(param_3 + 0x10);
    lVar4 = *(long *)(param_3 + 0x18);
LAB_0014ddfc:
    if (lVar3 == lVar4) goto LAB_0014de14;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90,param_3,param_4);
LAB_0014de14:
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 0014dd6c; end: 0014dff3;  */

void FUN_0014dd6c(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  if (param_2 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys6UInt64VF(param_2);
  }
  uVar1 = (uint)(param_4 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_3;
      lVar4 = param_3 >> 0x20;
      goto LAB_0014ddfc;
    }
    if ((param_4 & 0xff000000000000) == 0) goto LAB_0014de14;
  }
  else {
    if (uVar2 != 2) goto LAB_0014de14;
    lVar3 = *(long *)(param_3 + 0x10);
    lVar4 = *(long *)(param_3 + 0x18);
LAB_0014ddfc:
    if (lVar3 == lVar4) goto LAB_0014de14;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90,param_3,param_4);
LAB_0014de14:
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 0014dff4; end: 0014e0bf;  */

void FUN_0014dff4(undefined8 *param_1,ulong param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  if ((param_2 & 1) != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys5UInt8VF(1);
  }
  uVar1 = (uint)(param_4 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_3;
      lVar4 = param_3 >> 0x20;
      goto LAB_0014e07c;
    }
    if ((param_4 & 0xff000000000000) == 0) goto LAB_0014e094;
  }
  else {
    if (uVar2 != 2) goto LAB_0014e094;
    lVar3 = *(long *)(param_3 + 0x10);
    lVar4 = *(long *)(param_3 + 0x18);
LAB_0014e07c:
    if (lVar3 == lVar4) goto LAB_0014e094;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_80,param_3,param_4);
LAB_0014e094:
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 0014e0c0; end: 0014e0c3;  */

void FUN_0014e0c0(undefined8 *param_1,ulong param_2,ulong param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(&uStack_90,param_2,param_3);
  }
  uVar2 = (uint)(param_5 >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 != 0) {
      lVar4 = (long)(int)param_4;
      lVar5 = param_4 >> 0x20;
      goto LAB_0014e16c;
    }
    if ((param_5 & 0xff000000000000) == 0) goto LAB_0014e184;
  }
  else {
    if (uVar3 != 2) goto LAB_0014e184;
    lVar4 = *(long *)(param_4 + 0x10);
    lVar5 = *(long *)(param_4 + 0x18);
LAB_0014e16c:
    if (lVar4 == lVar5) goto LAB_0014e184;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90,param_4,param_5);
LAB_0014e184:
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 0014e0c4; end: 0014e1b3;  */

void FUN_0014e0c4(undefined8 *param_1,ulong param_2,ulong param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(&uStack_90,param_2,param_3);
  }
  uVar2 = (uint)(param_5 >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 != 0) {
      lVar4 = (long)(int)param_4;
      lVar5 = param_4 >> 0x20;
      goto LAB_0014e16c;
    }
    if ((param_5 & 0xff000000000000) == 0) goto LAB_0014e184;
  }
  else {
    if (uVar3 != 2) goto LAB_0014e184;
    lVar4 = *(long *)(param_4 + 0x10);
    lVar5 = *(long *)(param_4 + 0x18);
LAB_0014e16c:
    if (lVar4 == lVar5) goto LAB_0014e184;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90,param_4,param_5);
LAB_0014e184:
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 0014e1b4; end: 0014e1b7;  */

void FUN_0014e1b4(undefined8 *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_30 = param_1[8];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uVar1 = (uint)(param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_2;
      lVar4 = (long)(int)((ulong)param_2 >> 0x20);
      goto LAB_0014e218;
    }
    if ((param_3 & 0xff000000000000) == 0) goto LAB_0014e228;
  }
  else {
    if (uVar2 != 2) goto LAB_0014e228;
    lVar3 = *(long *)(param_2 + 0x10);
    lVar4 = *(long *)(param_2 + 0x18);
LAB_0014e218:
    if (lVar3 == lVar4) goto LAB_0014e228;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_70);
LAB_0014e228:
  param_1[5] = uStack_48;
  param_1[4] = uStack_50;
  param_1[7] = uStack_38;
  param_1[6] = uStack_40;
  param_1[8] = uStack_30;
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  return;
}



/* Entry: 0014e1b8; end: 0014e24f;  */

void FUN_0014e1b8(undefined8 *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_30 = param_1[8];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uVar1 = (uint)(param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_2;
      lVar4 = (long)(int)((ulong)param_2 >> 0x20);
      goto LAB_0014e218;
    }
    if ((param_3 & 0xff000000000000) == 0) goto LAB_0014e228;
  }
  else {
    if (uVar2 != 2) goto LAB_0014e228;
    lVar3 = *(long *)(param_2 + 0x10);
    lVar4 = *(long *)(param_2 + 0x18);
LAB_0014e218:
    if (lVar3 == lVar4) goto LAB_0014e228;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_70);
LAB_0014e228:
  param_1[5] = uStack_48;
  param_1[4] = uStack_50;
  param_1[7] = uStack_38;
  param_1[6] = uStack_40;
  param_1[8] = uStack_30;
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  return;
}



/* Entry: 0014e250; end: 0014e25b;  */

undefined8 FUN_0014e250(void)

{
  return 0;
}



/* Entry: 0014e25c; end: 0014e287;  */

void FUN_0014e25c(void)

{
  func_0x000115a8(0xaf0748,&UNK_007daf48);
                    /* WARNING: Could not recover jumptable at 0x0077b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_0099bad0)();
  return;
}



/* Entry: 0014e288; end: 0014e29b;  */

undefined8 FUN_0014e288(ulong param_1)

{
  return *(undefined8 *)(&UNK_007dfe58 + (param_1 & 0xff) * 8);
}



/* Entry: 0014e29c; end: 0014e38b;  */

void FUN_0014e29c(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_007dfe58 + (ulong)bVar1 * 8));
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0014e38c; end: 0014e3a3;  */

void FUN_0014e38c(undefined8 *param_1)

{
  byte *unaff_x20;
  
  *param_1 = *(undefined8 *)(&UNK_007dfe58 + (ulong)*unaff_x20 * 8);
  return;
}



/* Entry: 0014e3a4; end: 0014e3c7;  */

void FUN_0014e3a4(undefined1 *param_1,undefined1 param_2)

{
  func_0x0018638c();
  *param_1 = param_2;
  return;
}



/* Entry: 0014e3c8; end: 0014e3db;  */

undefined8 FUN_0014e3c8(void)

{
  byte *unaff_x20;
  
  return *(undefined8 *)(&UNK_007dfe58 + (ulong)*unaff_x20 * 8);
}



/* Entry: 0014e3dc; end: 0014e41b;  */

void FUN_0014e3dc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xaf0748;
  func_0x000115a8(0xaf0748,&UNK_007daf48);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 0014e41c; end: 0014e423;  */

undefined8 FUN_0014e41c(void)

{
  return 0;
}



/* Entry: 0014e424; end: 0014e44f;  */

void FUN_0014e424(void)

{
  func_0x000115a8(0xaf0780,&UNK_007daf50);
                    /* WARNING: Could not recover jumptable at 0x0077b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_0099bad0)();
  return;
}



/* Entry: 0014e450; end: 0014e467;  */

bool FUN_0014e450(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 0014e468; end: 0014e48f;  */

void FUN_0014e468(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  __ss6HasherV8_combineyySuF(param_1,*unaff_x20);
  return;
}



/* Entry: 0014e490; end: 0014e4af;  */

void FUN_0014e490(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0014e4b0; end: 0014e4ef;  */

void FUN_0014e4b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xaf0780;
  func_0x000115a8(0xaf0780,&UNK_007daf50);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 0014e4f0; end: 0014e55b;  */

undefined8 FUN_0014e4f0(void)

{
  return 0x14e500;
}



/* Entry: 0014e55c; end: 0014e59b;  */

undefined1  [16] FUN_0014e55c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x58);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 0014e59c; end: 0014e5cf;  */

void FUN_0014e59c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  return;
}



/* Entry: 0014e5d0; end: 0014e627;  */

undefined1  [16] FUN_0014e5d0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x58);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_0014e628;
  return auVar4;
}



/* Entry: 0014e628; end: 0014e687;  */

void FUN_0014e628(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  lVar2 = param_1[2];
  uVar4 = param_1[3];
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRelease(uVar4);
    *(undefined8 *)(lVar2 + 0x50) = uVar1;
    *(undefined8 *)(lVar2 + 0x58) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x50) = uVar1;
  *(undefined8 *)(lVar2 + 0x58) = uVar3;
  return;
}



/* Entry: 0014e688; end: 0014e697;  */

bool FUN_0014e688(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x58) != 0;
}



/* Entry: 0014e698; end: 0014e6b3;  */

void FUN_0014e698(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  return;
}


