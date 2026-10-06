/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001ac99c; end: 001ac9db;  */

undefined8 FUN_001ac99c(void)

{
  if (lRam0000000000af2c78 != -1) {
    _swift_once(0xaf2c78,0x1ac8f0);
  }
  return 0xb65b60;
}



/* Entry: 001ac9dc; end: 001aca7b;  */

void FUN_001ac9dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2c78 != -1) {
    _swift_once(0xaf2c78,0x1ac8f0);
  }
  uVar5 = uRam0000000000b65b88;
  uVar4 = uRam0000000000b65b80;
  uVar3 = uRam0000000000b65b78;
  uVar2 = uRam0000000000b65b70;
  uVar1 = uRam0000000000b65b68;
  *param_1 = uRam0000000000b65b60;
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



/* Entry: 001aca7c; end: 001acaff;  */

void FUN_001aca7c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x168))();
    }
  }
  return;
}



/* Entry: 001acb00; end: 001acbeb;  */

void FUN_001acb00(undefined8 param_1,long param_2,ulong param_3,long param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = (uint)(param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((param_3 & 0xff000000000000) != 0) {
LAB_001acb68:
        __ss6HasherV8_combineyySuF(1);
        __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,param_2,param_3);
      }
    }
    else if ((long)(int)param_2 != param_2 >> 0x20) goto LAB_001acb68;
  }
  else if ((uVar2 == 2) && (*(long *)(param_2 + 0x10) != *(long *)(param_2 + 0x18)))
  goto LAB_001acb68;
  uVar1 = (uint)(param_5 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((param_5 & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_001acbc4;
    }
    lVar3 = (long)(int)param_4;
    lVar4 = param_4 >> 0x20;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    lVar3 = *(long *)(param_4 + 0x10);
    lVar4 = *(long *)(param_4 + 0x18);
  }
  if (lVar3 == lVar4) {
    return;
  }
LAB_001acbc4:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,param_4,param_5);
  return;
}



/* Entry: 001acbec; end: 001acc9b;  */

void FUN_001acbec(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  
  uVar1 = (uint)(param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_2;
      lVar4 = param_2 >> 0x20;
      goto LAB_001acc48;
    }
    if ((param_3 & 0xff000000000000) == 0) goto LAB_001acc70;
  }
  else {
    if (uVar2 != 2) goto LAB_001acc70;
    lVar3 = *(long *)(param_2 + 0x10);
    lVar4 = *(long *)(param_2 + 0x18);
LAB_001acc48:
    if (lVar3 == lVar4) goto LAB_001acc70;
  }
  (**(code **)(param_7 + 0x78))(param_2,param_3,1,param_6,param_7);
  if (unaff_x21 != 0) {
    return;
  }
LAB_001acc70:
  FUN_0013ad2c(param_1,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 001acc9c; end: 001accff;  */

ulong FUN_001acc9c(ulong param_1,undefined8 param_2,long param_3,byte *param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,ulong param_8)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *unaff_x20;
  ulong uVar16;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  FUN_00038814(param_1,param_2,param_5,param_6);
  if ((param_1 & 1) == 0) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)param_4 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(param_8 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)param_3;
  if ((ulong)param_4 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((param_3 != 0) || (param_4 != (byte *)0xc000000000000000)) || (param_8 >> 0x3e < 3)) ||
       ((uVar12 = 0, param_7 != 0 || (param_8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar12 = (ulong)param_4 >> 0x30 & 0xff;
      }
      else {
        iVar11 = (int)((ulong)param_3 >> 0x20);
        if (SBORROW4(iVar11,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar12 = (ulong)(iVar11 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar13 != 2) {
        uVar12 = (ulong)(uVar12 == 0);
        goto LAB_00038af8;
      }
      uVar14 = *(long *)(param_7 + 0x18) - *(long *)(param_7 + 0x10);
      if (SBORROW8(*(long *)(param_7 + 0x18),*(long *)(param_7 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar12 != uVar14) {
LAB_0003899c:
        uVar12 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar10 == 2) {
        uVar12 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
        if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar12 = 0;
      if (1 < uVar13) goto LAB_00038898;
LAB_000388cc:
      if (uVar13 == 0) {
        uVar14 = param_8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)param_7 >> 0x20);
      if (SBORROW4(iVar11,(int)param_7)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)param_7)) goto LAB_0003899c;
    }
    if (0 < (long)uVar12) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          abStack_70[0] = (byte)param_3;
          abStack_70[1] = (byte)((ulong)param_3 >> 8);
          abStack_70[2] = (byte)((ulong)param_3 >> 0x10);
          abStack_70[3] = (byte)((ulong)param_3 >> 0x18);
          abStack_70[4] = (byte)((ulong)param_3 >> 0x20);
          abStack_70[5] = (byte)((ulong)param_3 >> 0x28);
          abStack_70[6] = (byte)((ulong)param_3 >> 0x30);
          abStack_70[7] = (byte)((ulong)param_3 >> 0x38);
          abStack_70[8] = (byte)param_4;
          abStack_70[9] = (byte)((ulong)param_4 >> 8);
          abStack_70[10] = (byte)((ulong)param_4 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)param_4 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)param_4 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)param_4 >> 0x28);
          param_4 = abStack_70 + ((ulong)param_4 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar12 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        lVar6 = (param_3 >> 0x20) - lVar17;
        if (param_3 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (param_3 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          param_3 = 0;
        }
        else {
          lVar7 = param_3;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          param_3 = (lVar17 - lVar7) + param_3;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (param_3 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar9 = (byte *)(lVar7 + param_3);
            goto LAB_00038aec;
          }
        }
        pbVar9 = (byte *)0x0;
      }
      else {
        if (uVar10 != 2) {
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
          param_4 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(param_3 + 0x10);
        lVar7 = *(long *)(param_3 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = param_3;
        if (param_3 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          param_3 = (lVar17 - lVar6) + param_3;
        }
        lVar1 = lVar7 - lVar17;
        if (SBORROW8(lVar7,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (param_3 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar9 = (byte *)(lVar6 + param_3);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)param_4 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,param_3,pbVar9,param_7,param_8);
      uVar12 = (ulong)abStack_70[0];
      param_4 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar12 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar12;
  }
  ___stack_chk_fail();
  lVar6 = (long)param_4 - uVar12;
  if (SBORROW8((long)param_4,uVar12)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar15 = uVar16 & 0xffffffffffffff8;
  uVar12 = uVar15 + 0x20 + uVar12 * 8;
  uVar8 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar14 = uVar12;
  _swift_arrayDestroy(uVar12,lVar6,uVar8);
  lVar17 = param_7 - lVar6;
  if (SBORROW8(param_7,lVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar17 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
      lVar6 = uVar14 - (long)param_4;
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar6 = uVar14 - (long)param_4;
    }
    if (SBORROW8(uVar14,(long)param_4)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar12 = uVar12 + param_7 * 8;
    uVar14 = uVar15 + 0x20 + (long)param_4 * 8;
    if (uVar12 != uVar14 || uVar14 + lVar6 * 8 <= uVar12) {
      _memmove(uVar12,uVar14,lVar6 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar14,lVar17)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar15 + 0x10) = uVar14 + lVar17;
  }
  if (0 < param_7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar14;
}



/* Entry: 001acd00; end: 001acdb7;  */

/* WARNING: Removing unreachable block (ram,0x001acd74) */

void FUN_001acd00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_90,0);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  FUN_001acb00(&uStack_e0,param_1,param_2,param_3,param_4);
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001acdb8; end: 001acde3;  */

void FUN_001acdb8(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 001acde4; end: 001ace13;  */

undefined1  [16] FUN_001acde4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                  *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 001ace14; end: 001ace47;  */

void FUN_001ace14(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 001ace48; end: 001ace5b;  */

undefined1  [16] FUN_001ace48(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1ace58;
  return auVar1;
}



/* Entry: 001ace5c; end: 001ace93;  */

void FUN_001ace5c(void)

{
  FUN_001aca7c();
  return;
}



/* Entry: 001ace94; end: 001acf33;  */

void FUN_001ace94(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2c78 != -1) {
    _swift_once(0xaf2c78,0x1ac8f0);
  }
  uVar5 = uRam0000000000b65b88;
  uVar4 = uRam0000000000b65b80;
  uVar3 = uRam0000000000b65b78;
  uVar2 = uRam0000000000b65b70;
  uVar1 = uRam0000000000b65b68;
  *param_1 = uRam0000000000b65b60;
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



/* Entry: 001acf34; end: 001acf47;  */

void FUN_001acf34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2d58;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2d58,&UNK_007e1ec0);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 001acf48; end: 001acf7b;  */

void FUN_001acf48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000115a8(param_3,param_4);
  __sSS10reflectingSSx_tclufC(&uStack_18,param_3);
  return;
}



/* Entry: 001acf7c; end: 001ad02b;  */

/* WARNING: Removing unreachable block (ram,0x001acfe8) */

void FUN_001acf7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(&uStack_90,0);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  FUN_001acb00(&uStack_e0,uVar1,uVar3,uVar2,uVar4);
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001ad02c; end: 001ad0a7;  */

/* WARNING: Removing unreachable block (ram,0x001ad074) */

void FUN_001ad02c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
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
  FUN_001acb00(&uStack_80,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
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



/* Entry: 001ad0a8; end: 001ad153;  */

/* WARNING: Removing unreachable block (ram,0x001ad110) */

void FUN_001ad0a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(&uStack_90);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  FUN_001acb00(&uStack_e0,uVar1,uVar3,uVar2,uVar4);
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001ad154; end: 001ad1b7;  */

ulong FUN_001ad154(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *unaff_x20;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  uVar13 = *param_1;
  uVar6 = param_1[2];
  pbVar8 = (byte *)param_1[3];
  lVar10 = param_2[2];
  uVar16 = param_2[3];
  FUN_00038814(uVar13,param_1[1],*param_2,param_2[1]);
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar8 >> 0x20);
  uVar11 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar16 >> 0x20);
  uVar14 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar8 >> 0x3e == 3) {
    uVar13 = 0;
    if ((((uVar6 != 0) || (pbVar8 != (byte *)0xc000000000000000)) || (uVar16 >> 0x3e < 3)) ||
       ((uVar13 = 0, lVar10 != 0 || (uVar16 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar11 == 0) {
        uVar13 = (ulong)pbVar8 >> 0x30 & 0xff;
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
      uVar15 = *(long *)(lVar10 + 0x18) - *(long *)(lVar10 + 0x10);
      if (SBORROW8(*(long *)(lVar10 + 0x18),*(long *)(lVar10 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar13 != uVar15) {
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
        uVar15 = uVar16 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar12 = (int)((ulong)lVar10 >> 0x20);
      if (SBORROW4(iVar12,(int)lVar10)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar13 != (long)(iVar12 - (int)lVar10)) goto LAB_0003899c;
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
          abStack_70[8] = (byte)pbVar8;
          abStack_70[9] = (byte)((ulong)pbVar8 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar8 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar8 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar8 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar8 >> 0x28);
          pbVar8 = abStack_70 + ((ulong)pbVar8 >> 0x30 & 0xff);
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
          uVar15 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar15)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar15) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar13 <= (long)uVar15) {
              uVar15 = uVar13;
            }
            pbVar9 = (byte *)(uVar15 + uVar6);
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
          pbVar8 = abStack_70;
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
        uVar15 = lVar1 - lVar17;
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
          if ((long)uVar15 <= (long)uVar13) {
            uVar13 = uVar15;
          }
          pbVar9 = (byte *)(uVar13 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar8 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar9,lVar10,uVar16);
      uVar6 = (ulong)abStack_70[0];
      pbVar8 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar8 - uVar6;
  if (SBORROW8((long)pbVar8,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar15 = *unaff_x20;
  uVar16 = uVar15 & 0xffffffffffffff8;
  uVar6 = uVar16 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar13 = uVar6;
  _swift_arrayDestroy(uVar6,lVar17,uVar7);
  lVar1 = lVar10 - lVar17;
  if (SBORROW8(lVar10,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar15 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar16 + 0x10);
      lVar17 = uVar13 - (long)pbVar8;
    }
    else {
      uVar13 = uVar16;
      if ((uVar15 & 0x8000000000000000) != 0) {
        uVar13 = uVar15;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar13 - (long)pbVar8;
    }
    if (SBORROW8(uVar13,(long)pbVar8)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + lVar10 * 8;
    uVar13 = uVar16 + 0x20 + (long)pbVar8 * 8;
    if (uVar6 != uVar13 || uVar13 + lVar17 * 8 <= uVar6) {
      _memmove(uVar6,uVar13,lVar17 << 3);
    }
    if (uVar15 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar16 + 0x10);
    }
    else {
      uVar13 = uVar16;
      if ((uVar15 & 0x8000000000000000) != 0) {
        uVar13 = uVar15;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar13,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar16 + 0x10) = uVar13 + lVar1;
  }
  if (0 < lVar10) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar13;
}



/* Entry: 001ad1b8; end: 001ad1db;  */

void FUN_001ad1b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001ad1dc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001ad1dc; end: 001ad21b;  */

void FUN_001ad1dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2c80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1648;
  _swift_getWitnessTable(&UNK_007e1648,&UNK_009b5298);
  puRam0000000000af2c80 = puVar1;
  return;
}



/* Entry: 001ad21c; end: 001ad22f;  */

void FUN_001ad21c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001ad230();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0xeb9a0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 001ad230; end: 001ad26f;  */

void FUN_001ad230(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1670;
  _swift_getWitnessTable(&UNK_007e1670,&UNK_009b5298);
  puRam0000000000af2c88 = puVar1;
  return;
}



/* Entry: 001ad270; end: 001ad273;  */

void FUN_001ad270(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2c90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e16b0;
  _swift_getWitnessTable(&UNK_007e16b0,&UNK_009b5298);
  puRam0000000000af2c90 = puVar1;
  return;
}



/* Entry: 001ad274; end: 001ad2b3;  */

void FUN_001ad274(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2c90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e16b0;
  _swift_getWitnessTable(&UNK_007e16b0,&UNK_009b5298);
  puRam0000000000af2c90 = puVar1;
  return;
}



/* Entry: 001ad2b4; end: 001ad2d7;  */

void FUN_001ad2b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001ad2d8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001ad2d8; end: 001ad317;  */

void FUN_001ad2d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2c98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1720;
  _swift_getWitnessTable(&UNK_007e1720,&UNK_009b5318);
  puRam0000000000af2c98 = puVar1;
  return;
}



/* Entry: 001ad318; end: 001ad32b;  */

void FUN_001ad318(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001ad32c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0xebaa0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 001ad32c; end: 001ad36b;  */

void FUN_001ad32c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2ca0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1748;
  _swift_getWitnessTable(&UNK_007e1748,&UNK_009b5318);
  puRam0000000000af2ca0 = puVar1;
  return;
}



/* Entry: 001ad36c; end: 001ad36f;  */

void FUN_001ad36c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2ca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1788;
  _swift_getWitnessTable(&UNK_007e1788,&UNK_009b5318);
  puRam0000000000af2ca8 = puVar1;
  return;
}



/* Entry: 001ad370; end: 001ad3af;  */

void FUN_001ad370(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2ca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1788;
  _swift_getWitnessTable(&UNK_007e1788,&UNK_009b5318);
  puRam0000000000af2ca8 = puVar1;
  return;
}



/* Entry: 001ad3b0; end: 001ad3d3;  */

void FUN_001ad3b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001ad3d4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001ad3d4; end: 001ad413;  */

void FUN_001ad3d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2cb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e17f8;
  _swift_getWitnessTable(&UNK_007e17f8,&UNK_009b5398);
  puRam0000000000af2cb0 = puVar1;
  return;
}



/* Entry: 001ad414; end: 001ad427;  */

void FUN_001ad414(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001ad428();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0xebb20)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 001ad428; end: 001ad467;  */

void FUN_001ad428(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2cb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1820;
  _swift_getWitnessTable(&UNK_007e1820,&UNK_009b5398);
  puRam0000000000af2cb8 = puVar1;
  return;
}



/* Entry: 001ad468; end: 001ad46b;  */

void FUN_001ad468(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2cc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1860;
  _swift_getWitnessTable(&UNK_007e1860,&UNK_009b5398);
  puRam0000000000af2cc0 = puVar1;
  return;
}



/* Entry: 001ad46c; end: 001ad4ab;  */

void FUN_001ad46c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2cc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1860;
  _swift_getWitnessTable(&UNK_007e1860,&UNK_009b5398);
  puRam0000000000af2cc0 = puVar1;
  return;
}



/* Entry: 001ad4ac; end: 001ad4cf;  */

void FUN_001ad4ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001ad4d0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001ad4d0; end: 001ad50f;  */

void FUN_001ad4d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2cc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e18d0;
  _swift_getWitnessTable(&UNK_007e18d0,&UNK_009b5418);
  puRam0000000000af2cc8 = puVar1;
  return;
}



/* Entry: 001ad510; end: 001ad523;  */

void FUN_001ad510(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001ad524();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0xebca0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 001ad524; end: 001ad563;  */

void FUN_001ad524(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2cd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e18f8;
  _swift_getWitnessTable(&UNK_007e18f8,&UNK_009b5418);
  puRam0000000000af2cd0 = puVar1;
  return;
}



/* Entry: 001ad564; end: 001ad567;  */

void FUN_001ad564(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2cd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1938;
  _swift_getWitnessTable(&UNK_007e1938,&UNK_009b5418);
  puRam0000000000af2cd8 = puVar1;
  return;
}



/* Entry: 001ad568; end: 001ad5a7;  */

void FUN_001ad568(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2cd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1938;
  _swift_getWitnessTable(&UNK_007e1938,&UNK_009b5418);
  puRam0000000000af2cd8 = puVar1;
  return;
}



/* Entry: 001ad5a8; end: 001ad5cb;  */

void FUN_001ad5a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001ad5cc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001ad5cc; end: 001ad60b;  */

void FUN_001ad5cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2ce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e19a8;
  _swift_getWitnessTable(&UNK_007e19a8,&UNK_009b5498);
  puRam0000000000af2ce0 = puVar1;
  return;
}



/* Entry: 001ad60c; end: 001ad61f;  */

void FUN_001ad60c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001ad620();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0xebae0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 001ad620; end: 001ad65f;  */

void FUN_001ad620(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2ce8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e19d0;
  _swift_getWitnessTable(&UNK_007e19d0,&UNK_009b5498);
  puRam0000000000af2ce8 = puVar1;
  return;
}



/* Entry: 001ad660; end: 001ad663;  */

void FUN_001ad660(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2cf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1a10;
  _swift_getWitnessTable(&UNK_007e1a10,&UNK_009b5498);
  puRam0000000000af2cf0 = puVar1;
  return;
}



/* Entry: 001ad664; end: 001ad6a3;  */

void FUN_001ad664(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2cf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1a10;
  _swift_getWitnessTable(&UNK_007e1a10,&UNK_009b5498);
  puRam0000000000af2cf0 = puVar1;
  return;
}



/* Entry: 001ad6a4; end: 001ad6c7;  */

void FUN_001ad6a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001ad6c8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001ad6c8; end: 001ad707;  */

void FUN_001ad6c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2cf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1a80;
  _swift_getWitnessTable(&UNK_007e1a80,&UNK_009b5518);
  puRam0000000000af2cf8 = puVar1;
  return;
}



/* Entry: 001ad708; end: 001ad71b;  */

void FUN_001ad708(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001ad71c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0xebc60)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 001ad71c; end: 001ad75b;  */

void FUN_001ad71c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2d00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1aa8;
  _swift_getWitnessTable(&UNK_007e1aa8,&UNK_009b5518);
  puRam0000000000af2d00 = puVar1;
  return;
}



/* Entry: 001ad75c; end: 001ad75f;  */

void FUN_001ad75c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2d08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1ae8;
  _swift_getWitnessTable(&UNK_007e1ae8,&UNK_009b5518);
  puRam0000000000af2d08 = puVar1;
  return;
}



/* Entry: 001ad760; end: 001ad79f;  */

void FUN_001ad760(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2d08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1ae8;
  _swift_getWitnessTable(&UNK_007e1ae8,&UNK_009b5518);
  puRam0000000000af2d08 = puVar1;
  return;
}



/* Entry: 001ad7a0; end: 001ad7c3;  */

void FUN_001ad7a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001ad7c4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001ad7c4; end: 001ad803;  */

void FUN_001ad7c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2d10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1b58;
  _swift_getWitnessTable(&UNK_007e1b58,&UNK_009b5598);
  puRam0000000000af2d10 = puVar1;
  return;
}



/* Entry: 001ad804; end: 001ad817;  */

void FUN_001ad804(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001ad818();
  *(long *)(param_1 + 8) = lVar1;
  FUN_000eb920();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 001ad818; end: 001ad857;  */

void FUN_001ad818(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2d18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1b80;
  _swift_getWitnessTable(&UNK_007e1b80,&UNK_009b5598);
  puRam0000000000af2d18 = puVar1;
  return;
}



/* Entry: 001ad858; end: 001ad85b;  */

void FUN_001ad858(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2d20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1bc0;
  _swift_getWitnessTable(&UNK_007e1bc0,&UNK_009b5598);
  puRam0000000000af2d20 = puVar1;
  return;
}



/* Entry: 001ad85c; end: 001ad89b;  */

void FUN_001ad85c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2d20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1bc0;
  _swift_getWitnessTable(&UNK_007e1bc0,&UNK_009b5598);
  puRam0000000000af2d20 = puVar1;
  return;
}



/* Entry: 001ad89c; end: 001ad8bf;  */

void FUN_001ad89c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001ad8c0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001ad8c0; end: 001ad8ff;  */

void FUN_001ad8c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2d28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1c30;
  _swift_getWitnessTable(&UNK_007e1c30,&UNK_009b5618);
  puRam0000000000af2d28 = puVar1;
  return;
}



/* Entry: 001ad900; end: 001ad913;  */

void FUN_001ad900(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001ad914();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0xebba0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 001ad914; end: 001ad953;  */

void FUN_001ad914(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2d30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1c58;
  _swift_getWitnessTable(&UNK_007e1c58,&UNK_009b5618);
  puRam0000000000af2d30 = puVar1;
  return;
}



/* Entry: 001ad954; end: 001ad957;  */

void FUN_001ad954(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2d38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1c98;
  _swift_getWitnessTable(&UNK_007e1c98,&UNK_009b5618);
  puRam0000000000af2d38 = puVar1;
  return;
}



/* Entry: 001ad958; end: 001ad997;  */

void FUN_001ad958(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2d38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1c98;
  _swift_getWitnessTable(&UNK_007e1c98,&UNK_009b5618);
  puRam0000000000af2d38 = puVar1;
  return;
}



/* Entry: 001ad998; end: 001ad9bb;  */

void FUN_001ad998(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001ad9bc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001ad9bc; end: 001ad9fb;  */

void FUN_001ad9bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2d40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1d08;
  _swift_getWitnessTable(&UNK_007e1d08,&UNK_009b5698);
  puRam0000000000af2d40 = puVar1;
  return;
}



/* Entry: 001ad9fc; end: 001ada0f;  */

void FUN_001ad9fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001ada40();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0xeb960)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 001ada10; end: 001ada3f;  */

void FUN_001ada10(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 001ada40; end: 001ada7f;  */

void FUN_001ada40(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2d48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1d30;
  _swift_getWitnessTable(&UNK_007e1d30,&UNK_009b5698);
  puRam0000000000af2d48 = puVar1;
  return;
}



/* Entry: 001ada80; end: 001ada83;  */

void FUN_001ada80(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2d50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1d70;
  _swift_getWitnessTable(&UNK_007e1d70,&UNK_009b5698);
  puRam0000000000af2d50 = puVar1;
  return;
}



/* Entry: 001ada84; end: 001adac3;  */

void FUN_001ada84(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2d50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1d70;
  _swift_getWitnessTable(&UNK_007e1d70,&UNK_009b5698);
  puRam0000000000af2d50 = puVar1;
  return;
}



/* Entry: 001adac4; end: 001adac7;  */

undefined8 * FUN_001adac4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x00023304(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 001adac8; end: 001adb13;  */

undefined8 * FUN_001adac8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  uVar3 = param_2[2];
  func_0x00023304(uVar1,uVar3);
  uVar2 = param_1[1];
  uVar4 = param_1[2];
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  FUN_00023358(uVar2,uVar4);
  return param_1;
}



/* Entry: 001adb14; end: 001adb53;  */

undefined8 * FUN_001adb14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  FUN_00023358(uVar1,uVar2);
  return param_1;
}



/* Entry: 001adb54; end: 001adb73;  */

undefined1  [16] FUN_001adb54(void)

{
  return ZEXT816(0x9b5298);
}



/* Entry: 001adb74; end: 001adbbf;  */

undefined4 * FUN_001adb74(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 2);
  uVar3 = *(undefined8 *)(param_2 + 4);
  func_0x00023304(uVar1,uVar3);
  uVar2 = *(undefined8 *)(param_1 + 2);
  uVar4 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 4) = uVar3;
  FUN_00023358(uVar2,uVar4);
  return param_1;
}



/* Entry: 001adbc0; end: 001adbff;  */

undefined4 * FUN_001adbc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 2);
  uVar2 = *(undefined8 *)(param_1 + 4);
  uVar3 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar3;
  FUN_00023358(uVar1,uVar2);
  return param_1;
}



/* Entry: 001adc00; end: 001adc2f;  */

int FUN_001adc00(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 001adc30; end: 001adcbf;  */

undefined8 * FUN_001adc30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x00023304(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 001adcc0; end: 001adcff;  */

undefined8 * FUN_001adcc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2[2];
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[2] = uVar3;
  FUN_00023358(uVar1,uVar2);
  return param_1;
}



/* Entry: 001add00; end: 001add27;  */

undefined1  [16] FUN_001add00(void)

{
  return ZEXT816(0x9b5418);
}



/* Entry: 001add28; end: 001addb7;  */

undefined4 * FUN_001add28(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 2);
  uVar2 = *(undefined8 *)(param_2 + 4);
  func_0x00023304(uVar1,uVar2);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 4) = uVar2;
  return param_1;
}



/* Entry: 001addb8; end: 001addf7;  */

undefined4 * FUN_001addb8(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 2);
  uVar2 = *(undefined8 *)(param_1 + 4);
  uVar3 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar3;
  FUN_00023358(uVar1,uVar2);
  return param_1;
}



/* Entry: 001addf8; end: 001adeaf;  */

int FUN_001addf8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 001adeb0; end: 001adf3f;  */

undefined1 * FUN_001adeb0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00023304(uVar1,uVar2);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return param_1;
}



/* Entry: 001adf40; end: 001adf7f;  */

undefined1 * FUN_001adf40(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  FUN_00023358(uVar1,uVar2);
  return param_1;
}



/* Entry: 001adf80; end: 001ae027;  */

int FUN_001adf80(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x18] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 001ae028; end: 001ae04f;  */

void FUN_001ae028(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    _swift_release(*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 001ae050; end: 001ae0ff;  */

undefined8 * FUN_001ae050(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  _swift_bridgeObjectRetain();
  func_0x00023304(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 001ae100; end: 001ae143;  */

undefined8 * FUN_001ae100(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  FUN_00023358(uVar1,uVar2);
  return param_1;
}



/* Entry: 001ae144; end: 001ae1db;  */

int FUN_001ae144(int *param_1,int param_2)

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



/* Entry: 001ae1dc; end: 001ae233;  */

long FUN_001ae1dc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 001ae234; end: 001ae2eb;  */

undefined8 * FUN_001ae234(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00023304(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x00023304(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 001ae2ec; end: 001ae333;  */

undefined8 * FUN_001ae2ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_00023358(uVar1,uVar2);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  FUN_00023358(uVar1,uVar2);
  return param_1;
}



/* Entry: 001ae334; end: 001ae533;  */

int FUN_001ae334(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 001ae534; end: 001ae69f;  */

void FUN_001ae534(void)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation6LocaleVMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sSS10FoundationE17LocalizationValueVMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  __s10Foundation23LocalizedStringResourceVMa(0);
  FUN_00028504();
  FUN_00028010(uVar2,0xb65b90);
  __sSS10FoundationE17LocalizationValueV13stringLiteralACSS_tcfC
            (lVar4,0xd000000000000015,0x80000000008b9660);
  __s10Foundation6LocaleV7currentACvgZ(puVar3);
  lVar1 = 0;
  __s10Foundation23LocalizedStringResourceV17BundleDescriptionOMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = lVar4 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x68))
            (lVar1,*(undefined4 *)
                    PTR___s10Foundation23LocalizedStringResourceV17BundleDescriptionO4mainyA2EmFWC_00998e98
            );
  __s10Foundation23LocalizedStringResourceV_5table6locale6bundle7commentACSSAAE17LocalizationValueV_SSSgAA6LocaleVAC17BundleDescriptionOs06StaticC0VSgtcfC
            (uVar2,lVar4,0x74726f6853707041,0xec00000073747563,puVar3,lVar1,0,0,0x100);
  return;
}



/* Entry: 001ae6a0; end: 001ae733;  */

void FUN_001ae6a0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000af2db0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  __s10AppIntents11IntentModesVMa(0xff);
  puVar2 = PTR___s10AppIntents11IntentModesVs10SetAlgebraAAMc_0099ab78;
  _swift_getWitnessTable(PTR___s10AppIntents11IntentModesVs10SetAlgebraAAMc_0099ab78,uVar1);
  puRam0000000000af2db0 = puVar2;
  return;
}


