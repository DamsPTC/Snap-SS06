/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0013d18c; end: 0013d1eb;  */

void FUN_0013d18c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined1 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined1 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x68))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 0013d1ec; end: 0013d1ff;  */

void FUN_0013d1ec(void)

{
  FUN_0013d200();
  return;
}



/* Entry: 0013d200; end: 0013d2cf;  */

void FUN_0013d200(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 != 0) {
    lVar11 = 0;
    uVar2 = (param_2 & 0x1fffffff) << 3 | 2;
    do {
      puVar1 = (undefined8 *)(param_1 + 0x20 + lVar11 * 0x10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      pbVar5 = *(byte **)(unaff_x20 + 8);
      pbVar6 = pbVar5;
      uVar7 = uVar2;
      uVar8 = uVar2;
      if (0x7f < (uint)((int)param_2 << 3)) {
        do {
          pbVar6 = pbVar5 + 1;
          *pbVar5 = (byte)uVar8 | 0x80;
          uVar7 = uVar8 >> 7;
          uVar9 = uVar8 >> 0xe;
          pbVar5 = pbVar6;
          uVar8 = uVar7;
        } while (uVar9 != 0);
      }
      lVar11 = lVar11 + 1;
      *pbVar6 = (byte)uVar7;
      *(byte **)(unaff_x20 + 8) = pbVar6 + 1;
      _swift_bridgeObjectRetain(uVar4);
      FUN_000d6cd0(uVar3,uVar4);
      _swift_bridgeObjectRelease(uVar4);
    } while (lVar11 != lVar10);
  }
  return;
}



/* Entry: 0013d2d0; end: 0013d367;  */

void FUN_0013d2d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x21;
  code *pcVar4;
  undefined8 *puVar5;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    pcVar4 = *(code **)(param_4 + 0x70);
    puVar5 = (undefined8 *)(param_1 + 0x28);
    do {
      lVar3 = lVar3 + -1;
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      _swift_bridgeObjectRetain(uVar2);
      (*pcVar4)(uVar1,uVar2,param_2,param_3,param_4);
      _swift_bridgeObjectRelease(uVar2);
      if (unaff_x21 != 0) {
        return;
      }
      puVar5 = puVar5 + 2;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 0013d368; end: 0013d37b;  */

void FUN_0013d368(void)

{
  FUN_0013d37c();
  return;
}



/* Entry: 0013d37c; end: 0013d6a3;  */

void FUN_0013d37c(byte *param_1,undefined1 *param_2,byte *param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long unaff_x20;
  long unaff_x21;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar16 = *(long *)(param_1 + 0x10);
  pbVar7 = param_1;
  if (lVar16 != 0) {
    lVar21 = 0;
    iVar8 = (int)param_2;
    uVar1 = ((ulong)param_2 & 0x1fffffff) << 3 | 2;
    pbVar17 = *(byte **)(unaff_x20 + 8);
    pbVar6 = param_1;
    puVar9 = param_2;
    do {
      pbVar7 = *(byte **)(param_1 + lVar21 * 0x10 + 0x20);
      param_2 = *(undefined1 **)(param_1 + lVar21 * 0x10 + 0x20 + 8);
      uVar15 = uVar1;
      uVar14 = uVar1;
      pbVar18 = pbVar17;
      if (0x7f < (uint)(iVar8 << 3)) {
        do {
          pbVar18 = pbVar17 + 1;
          *pbVar17 = (byte)uVar15 | 0x80;
          uVar14 = uVar15 >> 7;
          uVar11 = uVar15 >> 0xe;
          uVar15 = uVar14;
          pbVar17 = pbVar18;
        } while (uVar11 != 0);
      }
      pbVar12 = pbVar18 + 1;
      *pbVar18 = (byte)uVar14;
      uVar5 = (uint)((ulong)param_2 >> 0x20);
      uVar10 = uVar5 >> 0x1e;
      iVar19 = (int)pbVar7;
      iVar13 = (int)((ulong)pbVar7 >> 0x20);
      if (uVar5 >> 0x1e < 2) {
        if (uVar10 == 0) {
          uVar15 = (ulong)param_2 >> 0x30 & 0xff;
        }
        else {
          if (SBORROW4(iVar13,iVar19)) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x13d690);
            (*pcVar22)();
          }
          uVar15 = (ulong)(iVar13 - iVar19);
        }
joined_r0x0013d464:
        pbVar17 = pbVar12;
        uVar14 = uVar15;
        if (0x7f < uVar15) {
          do {
            pbVar12 = pbVar17 + 1;
            *pbVar17 = (byte)uVar14 | 0x80;
            uVar15 = uVar14 >> 7;
            uVar11 = uVar14 >> 0xe;
            pbVar17 = pbVar12;
            uVar14 = uVar15;
          } while (uVar11 != 0);
        }
        pbVar17 = pbVar12 + 1;
        *pbVar12 = (byte)uVar15;
        pbVar18 = pbVar7;
        if (uVar10 == 2) {
          lVar20 = *(long *)(pbVar7 + 0x10);
          lVar3 = *(long *)(pbVar7 + 0x18);
          func_0x00023304(pbVar7,param_2);
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          pbVar6 = pbVar18;
          if (pbVar18 != (byte *)0x0) {
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar20,(long)pbVar6)) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x13d69c);
              (*pcVar22)();
            }
            pbVar18 = pbVar18 + (lVar20 - (long)pbVar6);
          }
          pbVar12 = (byte *)(lVar3 - lVar20);
          if (SBORROW8(lVar3,lVar20)) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x13d698);
            (*pcVar22)();
          }
          __s10Foundation13__DataStorageC7_lengthSivg();
          if ((long)pbVar12 <= (long)pbVar6) {
            pbVar6 = pbVar12;
          }
          if (pbVar18 == (byte *)0x0) {
            FUN_00023358(pbVar7,param_2);
          }
          else {
            if (pbVar6 != (byte *)0x0) goto LAB_0013d518;
LAB_0013d594:
            FUN_00023358(pbVar7,param_2);
          }
        }
        else if (uVar10 == 1) {
          lVar20 = (long)iVar19;
          pbVar12 = (byte *)(((long)pbVar7 >> 0x20) - lVar20);
          if ((long)pbVar7 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x13d694);
            (*pcVar22)();
          }
          func_0x00023304(pbVar7,param_2);
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          pbVar6 = pbVar18;
          if (pbVar18 != (byte *)0x0) {
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar20,(long)pbVar6)) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x13d6a0);
              (*pcVar22)();
            }
            pbVar18 = pbVar18 + (lVar20 - (long)pbVar6);
          }
          __s10Foundation13__DataStorageC7_lengthSivg();
          if ((long)pbVar12 <= (long)pbVar6) {
            pbVar6 = pbVar12;
          }
          if ((pbVar18 == (byte *)0x0) || (pbVar6 == (byte *)0x0)) goto LAB_0013d594;
LAB_0013d518:
          param_3 = pbVar6;
          _memmove(pbVar17,pbVar18);
          FUN_00023358(pbVar7,param_2);
          pbVar17 = pbVar17 + (long)pbVar6;
        }
        else {
          uStack_76 = SUB81(pbVar7,0);
          uStack_75 = (undefined1)((ulong)pbVar7 >> 8);
          uStack_74 = (undefined1)((ulong)pbVar7 >> 0x10);
          uStack_73 = (undefined1)((ulong)pbVar7 >> 0x18);
          uStack_72 = (undefined1)((ulong)pbVar7 >> 0x20);
          uStack_71 = (undefined1)((ulong)pbVar7 >> 0x28);
          uStack_70 = (undefined1)((ulong)pbVar7 >> 0x30);
          uStack_6f = (undefined1)((ulong)pbVar7 >> 0x38);
          uStack_6e = SUB81(param_2,0);
          uStack_6d = (undefined1)((ulong)param_2 >> 8);
          uStack_6c = (undefined1)((ulong)param_2 >> 0x10);
          uStack_6b = (undefined1)((ulong)param_2 >> 0x18);
          uStack_6a = (undefined1)((ulong)param_2 >> 0x20);
          pbVar18 = (byte *)((ulong)param_2 >> 0x30 & 0xff);
          uStack_69 = (undefined1)((ulong)param_2 >> 0x28);
          pbVar7 = pbVar6;
          param_2 = puVar9;
          if (pbVar18 != (byte *)0x0) {
            param_2 = &uStack_76;
            pbVar7 = pbVar17;
            param_3 = pbVar18;
            _memmove(pbVar17,param_2);
            pbVar17 = pbVar17 + (long)pbVar18;
          }
        }
      }
      else {
        if (uVar10 == 2) {
          uVar15 = *(long *)(pbVar7 + 0x18) - *(long *)(pbVar7 + 0x10);
          if (SBORROW8(*(long *)(pbVar7 + 0x18),*(long *)(pbVar7 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x13d68c);
            (*pcVar22)();
          }
          goto joined_r0x0013d464;
        }
        pbVar18[1] = 0;
        pbVar17 = pbVar18 + 2;
        pbVar7 = pbVar6;
        param_2 = puVar9;
      }
      lVar21 = lVar21 + 1;
      pbVar6 = pbVar7;
      puVar9 = param_2;
    } while (lVar21 != lVar16);
    *(byte **)(unaff_x20 + 8) = pbVar17;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)(pbVar7 + 0x10);
  if (lVar16 != 0) {
    pcVar22 = *(code **)(param_4 + 0x78);
    pbVar7 = pbVar7 + 0x28;
    do {
      uVar2 = *(undefined8 *)(pbVar7 + -8);
      uVar4 = *(undefined8 *)pbVar7;
      func_0x00023304(uVar2,uVar4);
      (*pcVar22)(uVar2,uVar4,param_2,param_3,param_4);
      if (unaff_x21 != 0) {
        FUN_00023358(uVar2,uVar4);
        return;
      }
      pbVar7 = pbVar7 + 0x10;
      FUN_00023358(uVar2,uVar4);
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}



/* Entry: 0013d6a4; end: 0013d75b;  */

void FUN_0013d6a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    pcVar5 = *(code **)(param_4 + 0x78);
    puVar3 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar3[-1];
      uVar2 = *puVar3;
      func_0x00023304(uVar1,uVar2);
      (*pcVar5)(uVar1,uVar2,param_2,param_3,param_4);
      if (unaff_x21 != 0) {
        FUN_00023358(uVar1,uVar2);
        return;
      }
      puVar3 = puVar3 + 2;
      FUN_00023358(uVar1,uVar2);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 0013d75c; end: 0013d783;  */

void FUN_0013d75c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  FUN_0013d784(param_1,param_2,param_5,param_3,param_6,param_4);
  return;
}



/* Entry: 0013d784; end: 0013d8ab;  */

void FUN_0013d784(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long unaff_x21;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar5 = *(long *)(param_4 + -8);
  lVar4 = param_1;
  uStack_70 = param_2;
  uStack_68 = param_3;
  lStack_60 = param_5;
  uStack_58 = param_6;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar5 + 0x40));
  lVar6 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  __sSa8endIndexSivg();
  if (lVar4 != 0) {
    lVar4 = 0;
    do {
      __sSayxSicig(lVar6 - extraout_x12,lVar4,param_1,param_4);
      lVar1 = lVar4 + 1;
      if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x13d8ac);
        (*pcVar2)();
      }
      (**(code **)(lVar5 + 0x20))(lVar6,lVar6 - extraout_x12,param_4);
      (**(code **)(lStack_60 + 0x80))(lVar6,uStack_70,param_4,uStack_58,uStack_68);
      (**(code **)(lVar5 + 8))(lVar6,param_4);
      if (unaff_x21 != 0) {
        return;
      }
      lVar3 = param_1;
      __sSa8endIndexSivg(param_1,param_4);
      lVar4 = lVar4 + 1;
    } while (lVar1 != lVar3);
  }
  return;
}



/* Entry: 0013d8ac; end: 0013d8d3;  */

void FUN_0013d8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  FUN_0013d8d4(param_1,param_2,param_5,param_3,param_6,param_4);
  return;
}



/* Entry: 0013d8d4; end: 0013d9fb;  */

void FUN_0013d8d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long unaff_x21;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar5 = *(long *)(param_4 + -8);
  lVar4 = param_1;
  uStack_70 = param_2;
  uStack_68 = param_3;
  lStack_60 = param_5;
  uStack_58 = param_6;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar5 + 0x40));
  lVar6 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  __sSa8endIndexSivg();
  if (lVar4 != 0) {
    lVar4 = 0;
    do {
      __sSayxSicig(lVar6 - extraout_x12,lVar4,param_1,param_4);
      lVar1 = lVar4 + 1;
      if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x13d9fc);
        (*pcVar2)();
      }
      (**(code **)(lVar5 + 0x20))(lVar6,lVar6 - extraout_x12,param_4);
      (**(code **)(lStack_60 + 0x88))(lVar6,uStack_70,param_4,uStack_58,uStack_68);
      (**(code **)(lVar5 + 8))(lVar6,param_4);
      if (unaff_x21 != 0) {
        return;
      }
      lVar3 = param_1;
      __sSa8endIndexSivg(param_1,param_4);
      lVar4 = lVar4 + 1;
    } while (lVar1 != lVar3);
  }
  return;
}



/* Entry: 0013d9fc; end: 0013da23;  */

void FUN_0013d9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  FUN_0013da24(param_1,param_2,param_5,param_3,param_6,param_4);
  return;
}



/* Entry: 0013da24; end: 0013db4b;  */

void FUN_0013da24(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long unaff_x21;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar5 = *(long *)(param_4 + -8);
  lVar4 = param_1;
  uStack_70 = param_2;
  uStack_68 = param_3;
  lStack_60 = param_5;
  uStack_58 = param_6;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar5 + 0x40));
  lVar6 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  __sSa8endIndexSivg();
  if (lVar4 != 0) {
    lVar4 = 0;
    do {
      __sSayxSicig(lVar6 - extraout_x12,lVar4,param_1,param_4);
      lVar1 = lVar4 + 1;
      if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x13db4c);
        (*pcVar2)();
      }
      (**(code **)(lVar5 + 0x20))(lVar6,lVar6 - extraout_x12,param_4);
      (**(code **)(lStack_60 + 0x90))(lVar6,uStack_70,param_4,uStack_58,uStack_68);
      (**(code **)(lVar5 + 8))(lVar6,param_4);
      if (unaff_x21 != 0) {
        return;
      }
      lVar3 = param_1;
      __sSa8endIndexSivg(param_1,param_4);
      lVar4 = lVar4 + 1;
    } while (lVar1 != lVar3);
  }
  return;
}



/* Entry: 0013db4c; end: 0013db67;  */

void FUN_0013db4c(void)

{
  FUN_0013b7ec();
  return;
}



/* Entry: 0013db68; end: 0013dbab;  */

void FUN_0013db68(float param_1)

{
  double dVar1;
  
  __ss6HasherV8_combineyySuF();
  dVar1 = 0.0;
  if (param_1 != 0.0) {
    dVar1 = (double)param_1;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  return;
}



/* Entry: 0013dbac; end: 0013dbc7;  */

void FUN_0013dbac(float param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x10))((double)param_1);
  return;
}



/* Entry: 0013dbc8; end: 0013dbfb;  */

void FUN_0013dbc8(int param_1,undefined8 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  __ss6HasherV8_combineyys6UInt64VF((long)param_1);
  return;
}



/* Entry: 0013dbfc; end: 0013dc2f;  */

void FUN_0013dbfc(undefined4 param_1,undefined8 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  __ss6HasherV8_combineyys6UInt64VF(param_1);
  return;
}



/* Entry: 0013dc30; end: 0013dc47;  */

void FUN_0013dc30(void)

{
  long in_x3;
  
  (**(code **)(in_x3 + 0x18))();
  return;
}



/* Entry: 0013dc48; end: 0013dc7b;  */

void FUN_0013dc48(undefined8 param_1,undefined8 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  __ss6HasherV8_combineyys6UInt64VF(param_1);
  return;
}



/* Entry: 0013dc7c; end: 0013dcc3;  */

void FUN_0013dc7c(void)

{
  long in_x3;
  
  (**(code **)(in_x3 + 0x20))();
  return;
}



/* Entry: 0013dcc4; end: 0013de07;  */

void FUN_0013dcc4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  FUN_0012f564(param_2);
  FUN_000c7840(": ",2);
  if (param_1 < 0) {
    uVar3 = *unaff_x20;
    uVar1 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar2 = uVar3;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar3 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
    }
    *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x2d;
    *unaff_x20 = uVar3;
    param_1 = -param_1;
  }
  func_0x0012d6f0(param_1);
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 10;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 0013de08; end: 0013def3;  */

void FUN_0013de08(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  
  FUN_00100d5c(param_2);
  if (unaff_x21 == 0) {
    if ((unaff_x20[9] & 1) == 0) {
      func_0x000feff4(param_1);
    }
    else {
      if (param_1 < 0) {
        uVar3 = *unaff_x20;
        uVar1 = uVar3;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar2 = uVar3;
        if ((uVar1 & 1) == 0) {
          uVar2 = 0;
          FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
        }
        uVar1 = *(ulong *)(uVar2 + 0x10);
        uVar3 = uVar2;
        if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
          uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
          FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
        }
        *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
        *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x2d;
        *unaff_x20 = uVar3;
        param_1 = -param_1;
      }
      func_0x000fef20(param_1);
    }
  }
  return;
}



/* Entry: 0013def4; end: 0013df47;  */

void FUN_0013def4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  func_0x0013df1c(param_1,param_2,param_5,param_3,param_6,param_4);
  return;
}



/* Entry: 0013df48; end: 0013df7f;  */

void FUN_0013df48(undefined8 param_1,undefined8 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  func_0x0013fca4();
  return;
}



/* Entry: 0013df80; end: 0013e237;  */

void FUN_0013df80(long param_1,undefined8 param_2)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  
  FUN_00100d5c(param_2);
  if (unaff_x21 == 0) {
    uVar5 = *unaff_x20;
    uVar1 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar1 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_000540b4(uVar5,uVar1 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x5b;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      fVar8 = *(float *)(param_1 + 0x20);
      if ((((uint)fVar8 ^ 0xffffffff) & 0x7f800000) == 0) {
        if (((uint)fVar8 & 0x7fffff) == 0) {
          if (0.0 <= fVar8) {
            pcVar2 = "\"Infinity\"";
            uVar4 = 10;
          }
          else {
            pcVar2 = "\"-Infinity\"";
            uVar4 = 0xb;
          }
        }
        else {
          pcVar2 = "\"NaN\"";
          uVar4 = 5;
        }
        FUN_000c7840(pcVar2,uVar4);
      }
      else {
        __sSf16debugDescriptionSSvg();
        func_0x000c79f0();
      }
      if (lVar6 != 1) {
        lVar6 = lVar6 + -1;
        pfVar7 = (float *)(param_1 + 0x24);
        do {
          fVar8 = *pfVar7;
          uVar5 = *unaff_x20;
          uVar1 = uVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar3 = uVar5;
          if ((uVar1 & 1) == 0) {
            uVar3 = 0;
            FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
          }
          uVar1 = *(ulong *)(uVar3 + 0x10);
          uVar5 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            FUN_000540b4(uVar5,uVar1 + 1,1,uVar3);
          }
          *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
          *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x2c;
          *unaff_x20 = uVar5;
          if ((((uint)fVar8 ^ 0xffffffff) & 0x7f800000) == 0) {
            if (((uint)fVar8 & 0x7fffff) == 0) {
              if (0.0 <= fVar8) {
                FUN_000c7840("\"Infinity\"",10);
              }
              else {
                FUN_000c7840("\"-Infinity\"",0xb);
              }
            }
            else {
              FUN_000c7840("\"NaN\"",5);
            }
          }
          else {
            __sSf16debugDescriptionSSvg(fVar8);
            func_0x000c79f0();
          }
          lVar6 = lVar6 + -1;
          pfVar7 = pfVar7 + 1;
        } while (lVar6 != 0);
      }
      uVar5 = *unaff_x20;
    }
    uVar1 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar1 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_000540b4(uVar5,uVar1 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x5d;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 0013e238; end: 0013e24f;  */

void FUN_0013e238(void)

{
  long in_x3;
  
  (**(code **)(in_x3 + 0x98))();
  return;
}



/* Entry: 0013e250; end: 0013e287;  */

void FUN_0013e250(undefined8 param_1,undefined8 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  FUN_0013fc40();
  return;
}



/* Entry: 0013e288; end: 0013e53f;  */

void FUN_0013e288(long param_1,undefined8 param_2)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar5;
  long lVar6;
  double *pdVar7;
  double dVar8;
  
  FUN_00100d5c(param_2);
  if (unaff_x21 == 0) {
    uVar5 = *unaff_x20;
    uVar1 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar1 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_000540b4(uVar5,uVar1 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x5b;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      dVar8 = *(double *)(param_1 + 0x20);
      if ((((ulong)dVar8 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
        if (((ulong)dVar8 & 0xfffffffffffff) == 0) {
          if (0.0 <= dVar8) {
            pcVar2 = "\"Infinity\"";
            uVar4 = 10;
          }
          else {
            pcVar2 = "\"-Infinity\"";
            uVar4 = 0xb;
          }
        }
        else {
          pcVar2 = "\"NaN\"";
          uVar4 = 5;
        }
        FUN_000c7840(pcVar2,uVar4);
      }
      else {
        __sSd16debugDescriptionSSvg();
        func_0x000c79f0();
      }
      if (lVar6 != 1) {
        lVar6 = lVar6 + -1;
        pdVar7 = (double *)(param_1 + 0x28);
        do {
          dVar8 = *pdVar7;
          uVar5 = *unaff_x20;
          uVar1 = uVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar3 = uVar5;
          if ((uVar1 & 1) == 0) {
            uVar3 = 0;
            FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
          }
          uVar1 = *(ulong *)(uVar3 + 0x10);
          uVar5 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            FUN_000540b4(uVar5,uVar1 + 1,1,uVar3);
          }
          *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
          *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x2c;
          *unaff_x20 = uVar5;
          if ((((ulong)dVar8 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
            if (((ulong)dVar8 & 0xfffffffffffff) == 0) {
              if (0.0 <= dVar8) {
                FUN_000c7840("\"Infinity\"",10);
              }
              else {
                FUN_000c7840("\"-Infinity\"",0xb);
              }
            }
            else {
              FUN_000c7840("\"NaN\"",5);
            }
          }
          else {
            __sSd16debugDescriptionSSvg(dVar8);
            func_0x000c79f0();
          }
          lVar6 = lVar6 + -1;
          pdVar7 = pdVar7 + 1;
        } while (lVar6 != 0);
      }
      uVar5 = *unaff_x20;
    }
    uVar1 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar1 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_000540b4(uVar5,uVar1 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x5d;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 0013e540; end: 0013e56b;  */

void FUN_0013e540(void)

{
  long in_x3;
  
  (**(code **)(in_x3 + 0xa0))();
  return;
}



/* Entry: 0013e56c; end: 0013e85b;  */

void FUN_0013e56c(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar5;
  long lVar6;
  int *piVar7;
  
  FUN_00100d5c(param_2);
  if (unaff_x21 == 0) {
    uVar4 = *unaff_x20;
    uVar2 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar4 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_000540b4(uVar4,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x5b;
    *unaff_x20 = uVar4;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      lVar5 = (long)*(int *)(param_1 + 0x20);
      if (*(int *)(param_1 + 0x20) < 0) {
        uVar2 = uVar4;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar3 = uVar4;
        if ((uVar2 & 1) == 0) {
          uVar3 = 0;
          FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
        }
        uVar2 = *(ulong *)(uVar3 + 0x10);
        uVar4 = uVar3;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
          uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          FUN_000540b4(uVar4,uVar2 + 1,1,uVar3);
        }
        *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
        *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2d;
        *unaff_x20 = uVar4;
        lVar5 = -lVar5;
      }
      func_0x000fef20(lVar5);
      lVar6 = lVar6 + -1;
      if (lVar6 != 0) {
        piVar7 = (int *)(param_1 + 0x24);
        do {
          iVar1 = *piVar7;
          lVar5 = (long)iVar1;
          uVar4 = *unaff_x20;
          uVar2 = uVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar3 = uVar4;
          if ((uVar2 & 1) == 0) {
            uVar3 = 0;
            FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
          }
          uVar2 = *(ulong *)(uVar3 + 0x10);
          uVar4 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
            uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            FUN_000540b4(uVar4,uVar2 + 1,1,uVar3);
          }
          *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
          *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2c;
          *unaff_x20 = uVar4;
          if (iVar1 < 0) {
            uVar2 = uVar4;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar3 = uVar4;
            if ((uVar2 & 1) == 0) {
              uVar3 = 0;
              FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
            }
            uVar2 = *(ulong *)(uVar3 + 0x10);
            uVar4 = uVar3;
            if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
              uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
              FUN_000540b4(uVar4,uVar2 + 1,1,uVar3);
            }
            *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
            *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2d;
            *unaff_x20 = uVar4;
            lVar5 = -lVar5;
          }
          func_0x000fef20(lVar5);
          lVar6 = lVar6 + -1;
          piVar7 = piVar7 + 1;
        } while (lVar6 != 0);
      }
      uVar4 = *unaff_x20;
    }
    uVar2 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar4 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_000540b4(uVar4,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x5d;
    *unaff_x20 = uVar4;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 0013e85c; end: 0013e887;  */

void FUN_0013e85c(void)

{
  long in_x3;
  
  (**(code **)(in_x3 + 0xa8))();
  return;
}



/* Entry: 0013e888; end: 0013ed9b;  */

void FUN_0013e888(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  
  uVar8 = unaff_x20[9];
  FUN_00100d5c(param_2);
  if ((char)uVar8 == '\x01') {
    if (unaff_x21 != 0) {
      return;
    }
    uVar5 = *unaff_x20;
    uVar8 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar8 & 1) == 0) {
      uVar3 = 0;
      FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar8 = *(ulong *)(uVar3 + 0x10);
    uVar6 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_000540b4(uVar6,uVar8 + 1,1,uVar3);
    }
    *(ulong *)(uVar6 + 0x10) = uVar8 + 1;
    *(undefined1 *)(uVar6 + uVar8 + 0x20) = 0x5b;
    *unaff_x20 = uVar6;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 != 0) {
      lVar7 = *(long *)(param_1 + 0x20);
      if (lVar7 < 0) {
        uVar8 = uVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar3 = uVar6;
        if ((uVar8 & 1) == 0) {
          uVar3 = 0;
          FUN_000540b4(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
        }
        uVar8 = *(ulong *)(uVar3 + 0x10);
        uVar5 = uVar3;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
          uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          FUN_000540b4(uVar5,uVar8 + 1,1,uVar3);
        }
        *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
        *(undefined1 *)(uVar5 + uVar8 + 0x20) = 0x2d;
        *unaff_x20 = uVar5;
        lVar7 = -lVar7;
      }
      func_0x000fef20(lVar7);
      lVar9 = lVar9 + -1;
      if (lVar9 != 0) {
        plVar10 = (long *)(param_1 + 0x28);
        do {
          lVar7 = *plVar10;
          uVar5 = *unaff_x20;
          uVar8 = uVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar3 = uVar5;
          if ((uVar8 & 1) == 0) {
            uVar3 = 0;
            FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
          }
          uVar8 = *(ulong *)(uVar3 + 0x10);
          uVar5 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            FUN_000540b4(uVar5,uVar8 + 1,1,uVar3);
          }
          *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
          *(undefined1 *)(uVar5 + uVar8 + 0x20) = 0x2c;
          *unaff_x20 = uVar5;
          if (lVar7 < 0) {
            uVar8 = uVar5;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar3 = uVar5;
            if ((uVar8 & 1) == 0) {
              uVar3 = 0;
              FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
            }
            uVar8 = *(ulong *)(uVar3 + 0x10);
            uVar5 = uVar3;
            if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
              uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
              FUN_000540b4(uVar5,uVar8 + 1,1,uVar3);
            }
            *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
            *(undefined1 *)(uVar5 + uVar8 + 0x20) = 0x2d;
            *unaff_x20 = uVar5;
            lVar7 = -lVar7;
          }
          func_0x000fef20(lVar7);
          lVar9 = lVar9 + -1;
          plVar10 = plVar10 + 1;
        } while (lVar9 != 0);
      }
      uVar6 = *unaff_x20;
    }
    uVar8 = uVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar6;
    if ((uVar8 & 1) == 0) {
      uVar5 = 0;
      FUN_000540b4(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
    }
  }
  else {
    if (unaff_x21 != 0) {
      return;
    }
    uVar5 = *unaff_x20;
    uVar8 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar8 & 1) == 0) {
      uVar3 = 0;
      FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar8 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_000540b4(uVar5,uVar8 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
    *(undefined1 *)(uVar5 + uVar8 + 0x20) = 0x5b;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 != 0) {
      bVar4 = false;
      plVar10 = (long *)(param_1 + 0x20);
      do {
        lVar7 = *plVar10;
        uVar8 = *(ulong *)(uVar5 + 0x10);
        if (bVar4) {
          uVar3 = uVar8 + 1;
          uVar6 = uVar5;
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar8) {
            uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
            FUN_000540b4(uVar6,uVar3,1,uVar5);
          }
          *(ulong *)(uVar6 + 0x10) = uVar3;
          *(undefined1 *)(uVar6 + uVar8 + 0x20) = 0x2c;
          uVar5 = uVar6;
          uVar8 = uVar3;
        }
        lVar1 = uVar8 + 1;
        uVar3 = uVar5;
        if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar8) {
          uVar3 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
          FUN_000540b4(uVar3,lVar1,1,uVar5);
        }
        *(long *)(uVar3 + 0x10) = lVar1;
        *(undefined1 *)(uVar3 + uVar8 + 0x20) = 0x22;
        *unaff_x20 = uVar3;
        if (lVar7 < 0) {
          lVar2 = uVar8 + 2;
          uVar8 = uVar3;
          if ((long)(*(ulong *)(uVar3 + 0x18) >> 1) < lVar2) {
            uVar8 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            FUN_000540b4(uVar8,lVar2,1,uVar3);
          }
          *(long *)(uVar8 + 0x10) = lVar2;
          *(undefined1 *)(uVar8 + lVar1 + 0x20) = 0x2d;
          *unaff_x20 = uVar8;
          lVar7 = -lVar7;
        }
        func_0x000fef20(lVar7);
        uVar5 = *unaff_x20;
        uVar8 = uVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar3 = uVar5;
        if ((uVar8 & 1) == 0) {
          uVar3 = 0;
          FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
        }
        uVar8 = *(ulong *)(uVar3 + 0x10);
        uVar5 = uVar3;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
          uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          FUN_000540b4(uVar5,uVar8 + 1,1,uVar3);
        }
        *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
        *(undefined1 *)(uVar5 + uVar8 + 0x20) = 0x22;
        *unaff_x20 = uVar5;
        bVar4 = true;
        lVar9 = lVar9 + -1;
        plVar10 = plVar10 + 1;
      } while (lVar9 != 0);
    }
  }
  uVar8 = *(ulong *)(uVar5 + 0x10);
  uVar3 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar8) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_000540b4(uVar3,uVar8 + 1,1,uVar5);
  }
  *(ulong *)(uVar3 + 0x10) = uVar8 + 1;
  *(undefined1 *)(uVar3 + uVar8 + 0x20) = 0x5d;
  *unaff_x20 = uVar3;
  *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  return;
}



/* Entry: 0013ed9c; end: 0013edb3;  */

void FUN_0013ed9c(void)

{
  long in_x3;
  
  (**(code **)(in_x3 + 0xb0))();
  return;
}



/* Entry: 0013edb4; end: 0013ef9f;  */

void FUN_0013edb4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined4 *puVar6;
  
  FUN_00100d5c(param_2);
  if (unaff_x21 == 0) {
    uVar4 = *unaff_x20;
    uVar2 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar4 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_000540b4(uVar4,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x5b;
    *unaff_x20 = uVar4;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 != 0) {
      func_0x000fef20(*(undefined4 *)(param_1 + 0x20));
      lVar5 = lVar5 + -1;
      if (lVar5 != 0) {
        puVar6 = (undefined4 *)(param_1 + 0x24);
        do {
          uVar1 = *puVar6;
          uVar4 = *unaff_x20;
          uVar2 = uVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar3 = uVar4;
          if ((uVar2 & 1) == 0) {
            uVar3 = 0;
            FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
          }
          uVar2 = *(ulong *)(uVar3 + 0x10);
          uVar4 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
            uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            FUN_000540b4(uVar4,uVar2 + 1,1,uVar3);
          }
          *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
          *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2c;
          *unaff_x20 = uVar4;
          func_0x000fef20(uVar1);
          lVar5 = lVar5 + -1;
          puVar6 = puVar6 + 1;
        } while (lVar5 != 0);
      }
      uVar4 = *unaff_x20;
    }
    uVar2 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_000540b4(uVar4,uVar2 + 1,1,uVar3);
      uVar3 = uVar4;
    }
    *(ulong *)(uVar3 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar3 + uVar2 + 0x20) = 0x5d;
    *unaff_x20 = uVar3;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 0013efa0; end: 0013efb7;  */

void FUN_0013efa0(void)

{
  long in_x3;
  
  (**(code **)(in_x3 + 0xb8))();
  return;
}



/* Entry: 0013efb8; end: 0013f42f;  */

void FUN_0013efb8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  uVar1 = unaff_x20[9];
  FUN_00100d5c(param_2);
  if ((char)uVar1 == '\x01') {
    if (unaff_x21 != 0) {
      return;
    }
    uVar3 = *unaff_x20;
    uVar1 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar2 = uVar3;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar4 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      FUN_000540b4(uVar4,uVar1 + 1,1,uVar2);
    }
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar4 + uVar1 + 0x20) = 0x5b;
    *unaff_x20 = uVar4;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      func_0x000fef20(*(undefined8 *)(param_1 + 0x20));
      lVar6 = lVar6 + -1;
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)(param_1 + 0x28);
        do {
          uVar5 = *puVar7;
          uVar3 = *unaff_x20;
          uVar1 = uVar3;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar2 = uVar3;
          if ((uVar1 & 1) == 0) {
            uVar2 = 0;
            FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
          }
          uVar1 = *(ulong *)(uVar2 + 0x10);
          uVar3 = uVar2;
          if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
            uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
            FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
          }
          *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
          *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x2c;
          *unaff_x20 = uVar3;
          func_0x000fef20(uVar5);
          lVar6 = lVar6 + -1;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0);
      }
      uVar4 = *unaff_x20;
    }
    uVar1 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
  }
  else {
    if (unaff_x21 != 0) {
      return;
    }
    uVar3 = *unaff_x20;
    uVar1 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar2 = uVar3;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar3 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
    }
    *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x5b;
    *unaff_x20 = uVar3;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar1 = *(ulong *)(uVar3 + 0x10);
      uVar2 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
        uVar2 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_000540b4(uVar2,uVar1 + 1,1,uVar3);
      }
      *(ulong *)(uVar2 + 0x10) = uVar1 + 1;
      *(undefined1 *)(uVar2 + uVar1 + 0x20) = 0x22;
      *unaff_x20 = uVar2;
      func_0x000fef20(uVar5);
      uVar3 = *unaff_x20;
      uVar1 = uVar3;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar2 = uVar3;
      if ((uVar1 & 1) == 0) {
        uVar2 = 0;
        FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
      }
      uVar1 = *(ulong *)(uVar2 + 0x10);
      uVar3 = uVar2;
      if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
        uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
        FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
      }
      *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
      *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x22;
      *unaff_x20 = uVar3;
      lVar6 = lVar6 + -1;
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)(param_1 + 0x28);
        do {
          uVar5 = *puVar7;
          uVar2 = *(ulong *)(uVar3 + 0x10);
          uVar1 = uVar2 + 1;
          uVar4 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
            uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            FUN_000540b4(uVar4,uVar1,1,uVar3);
          }
          *(ulong *)(uVar4 + 0x10) = uVar1;
          *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2c;
          uVar3 = uVar4;
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
            uVar3 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            FUN_000540b4(uVar3,uVar2 + 2,1,uVar4);
          }
          *(ulong *)(uVar3 + 0x10) = uVar2 + 2;
          *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x22;
          *unaff_x20 = uVar3;
          func_0x000fef20(uVar5);
          uVar3 = *unaff_x20;
          uVar1 = uVar3;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar2 = uVar3;
          if ((uVar1 & 1) == 0) {
            uVar2 = 0;
            FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
          }
          uVar1 = *(ulong *)(uVar2 + 0x10);
          uVar3 = uVar2;
          if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
            uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
            FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
          }
          *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
          *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x22;
          *unaff_x20 = uVar3;
          lVar6 = lVar6 + -1;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0);
      }
    }
  }
  uVar1 = *(ulong *)(uVar3 + 0x10);
  uVar2 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_000540b4(uVar2,uVar1 + 1,1,uVar3);
  }
  *(ulong *)(uVar2 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar2 + uVar1 + 0x20) = 0x5d;
  *unaff_x20 = uVar2;
  *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  return;
}



/* Entry: 0013f430; end: 0013f4a7;  */

void FUN_0013f430(void)

{
  long in_x3;
  
  (**(code **)(in_x3 + 0xc0))();
  return;
}



/* Entry: 0013f4a8; end: 0013f4ff;  */

void FUN_0013f4a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 *puVar2;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar1 = *(long *)(param_1 + 0x10);
  __ss6HasherV8_combineyySuF(lVar1);
  if (lVar1 != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x20);
    do {
      __ss6HasherV8_combineyys6UInt32VF(*puVar2);
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 0013f500; end: 0013f557;  */

void FUN_0013f500(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar1 = *(long *)(param_1 + 0x10);
  __ss6HasherV8_combineyySuF(lVar1);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x20);
    do {
      __ss6HasherV8_combineyys6UInt64VF(*puVar2);
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 0013f558; end: 0013f5af;  */

void FUN_0013f558(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar1 = *(long *)(param_1 + 0x10);
  __ss6HasherV8_combineyySuF(lVar1);
  if (lVar1 != 0) {
    puVar2 = (undefined1 *)(param_1 + 0x20);
    do {
      __ss6HasherV8_combineyys5UInt8VF(*puVar2);
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 0013f5b0; end: 0013f7e7;  */

void FUN_0013f5b0(long param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar8;
  
  FUN_00100d5c(param_2);
  if (unaff_x21 == 0) {
    uVar7 = *unaff_x20;
    uVar2 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar7;
    if ((uVar2 & 1) == 0) {
      uVar5 = 0;
      FUN_000540b4(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    }
    uVar2 = *(ulong *)(uVar5 + 0x10);
    uVar7 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_000540b4(uVar7,uVar2 + 1,1,uVar5);
    }
    *(ulong *)(uVar7 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar7 + uVar2 + 0x20) = 0x5b;
    *unaff_x20 = uVar7;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 != 0) {
      if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
        pcVar3 = "false";
        uVar6 = 5;
      }
      else {
        pcVar3 = "true";
        uVar6 = 4;
      }
      FUN_000c7840(pcVar3,uVar6);
      lVar8 = lVar8 + -1;
      if (lVar8 != 0) {
        pcVar3 = (char *)(param_1 + 0x21);
        do {
          cVar1 = *pcVar3;
          uVar7 = *unaff_x20;
          uVar2 = uVar7;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar5 = uVar7;
          if ((uVar2 & 1) == 0) {
            uVar5 = 0;
            FUN_000540b4(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
          }
          uVar2 = *(ulong *)(uVar5 + 0x10);
          uVar7 = uVar5;
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
            uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
            FUN_000540b4(uVar7,uVar2 + 1,1,uVar5);
          }
          *(ulong *)(uVar7 + 0x10) = uVar2 + 1;
          *(undefined1 *)(uVar7 + uVar2 + 0x20) = 0x2c;
          *unaff_x20 = uVar7;
          if (cVar1 == '\0') {
            uVar6 = 5;
            pcVar4 = "false";
          }
          else {
            uVar6 = 4;
            pcVar4 = "true";
          }
          FUN_000c7840(pcVar4,uVar6);
          pcVar3 = pcVar3 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      uVar7 = *unaff_x20;
    }
    uVar2 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar7;
    if ((uVar2 & 1) == 0) {
      uVar5 = 0;
      FUN_000540b4(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    }
    uVar2 = *(ulong *)(uVar5 + 0x10);
    uVar7 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_000540b4(uVar7,uVar2 + 1,1,uVar5);
    }
    *(ulong *)(uVar7 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar7 + uVar2 + 0x20) = 0x5d;
    *unaff_x20 = uVar7;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 0013f7e8; end: 0013f887;  */

void FUN_0013f7e8(void)

{
  long in_x3;
  
  (**(code **)(in_x3 + 0xf8))();
  return;
}



/* Entry: 0013f888; end: 0013f8bf;  */

void FUN_0013f888(undefined8 param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_00100d5c(param_2);
  if (unaff_x21 == 0) {
    func_0x000ff2d0(param_1);
  }
  return;
}



/* Entry: 0013f8c0; end: 0013f8d3;  */

void FUN_0013f8c0(void)

{
  FUN_0013de08();
  return;
}



/* Entry: 0013f8d4; end: 0013f91f;  */

void FUN_0013f8d4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_00100d5c(param_2);
  if (unaff_x21 == 0) {
    if ((*(byte *)(unaff_x20 + 0x48) & 1) == 0) {
      func_0x000ff37c(param_1);
    }
    else {
      func_0x000fef20(param_1);
    }
  }
  return;
}



/* Entry: 0013f920; end: 0013fa53;  */

void FUN_0013f920(void)

{
  FUN_0013df80();
  return;
}



/* Entry: 0013fa54; end: 0013fb13;  */

void FUN_0013fa54(undefined4 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  FUN_0012f564(param_2);
  FUN_000c7840(": ",2);
  func_0x0012d6f0(param_1);
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 10;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 0013fb14; end: 0013fbd3;  */

void FUN_0013fb14(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  FUN_0012f564(param_2);
  FUN_000c7840(": ",2);
  func_0x0012d6f0(param_1);
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 10;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 0013fbd4; end: 0013fc3f;  */

void FUN_0013fbd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  func_0x0013df1c(param_1,param_2,param_5,param_3,param_6,param_4);
  return;
}



/* Entry: 0013fc40; end: 0013fd07;  */

void FUN_0013fc40(undefined8 param_1,long param_2)

{
  long lVar1;
  double *pdVar2;
  double dVar3;
  
  lVar1 = *(long *)(param_2 + 0x10);
  __ss6HasherV8_combineyySuF(lVar1);
  if (lVar1 != 0) {
    pdVar2 = (double *)(param_2 + 0x20);
    do {
      dVar3 = 0.0;
      if (*pdVar2 != 0.0) {
        dVar3 = *pdVar2;
      }
      __ss6HasherV8_combineyys6UInt64VF(dVar3);
      lVar1 = lVar1 + -1;
      pdVar2 = pdVar2 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 0013fd08; end: 0014012b;  */

void FUN_0013fd08(void)

{
  FUN_0013c9fc();
  return;
}



/* Entry: 0014012c; end: 00140147;  */

byte FUN_0014012c(byte param_1)

{
  if (5 < param_1) {
    param_1 = 6;
  }
  return param_1;
}



/* Entry: 00140148; end: 0014021b;  */

void FUN_00140148(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyys5UInt8VF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0014021c; end: 0014023f;  */

void FUN_0014021c(undefined1 *param_1)

{
  undefined1 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 00140240; end: 0014027f;  */

void FUN_00140240(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af0630 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007da904;
  _swift_getWitnessTable(&UNK_007da904,&UNK_009af510);
  puRam0000000000af0630 = puVar1;
  return;
}



/* Entry: 00140280; end: 001403e3;  */

int FUN_00140280(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001402fc;
        goto LAB_001402e0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001402e0:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_001402fc:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001403e4; end: 0014043f;  */

undefined8 FUN_001403e4(void)

{
  if (lRam0000000000aed8b0 != -1) {
    _swift_once(0xaed8b0,FUN_000c2f84);
  }
  _swift_retain(uRam0000000000b64ad0);
  return 0;
}



/* Entry: 00140440; end: 001404cf;  */

void FUN_00140440(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_000c6ae4(0);
    _swift_allocObject();
    FUN_000c2fc4(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0x10) = param_1;
  *(undefined8 *)(lVar3 + 0x18) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 001404d0; end: 00140573;  */

void FUN_001404d0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_48;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_000c6ae4(0);
    _swift_allocObject();
    FUN_000c2fc4();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_48 = 0;
  uStack_70 = param_1;
  uStack_68 = param_2;
  _swift_beginAccess(lVar2 + 0x20,auStack_88,0x21,0);
  FUN_000c70d0(&uStack_70,lVar2 + 0x20);
  _swift_endAccess(auStack_88);
  return;
}



/* Entry: 00140574; end: 00140603;  */

void FUN_00140574(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    FUN_000c6ae4(0);
    _swift_allocObject();
    FUN_000c2fc4(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  FUN_00140ba0();
  return;
}



/* Entry: 00140604; end: 0014064f;  */

undefined1  [16] FUN_00140604(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x10);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_3 + 0x18));
  return auVar1;
}



/* Entry: 00140650; end: 001406d3;  */

undefined1  [16] FUN_00140650(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar2 = 0x60;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x60,&UNK_00003c31);
  }
  *param_1 = lVar2;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar3 + 0x10,lVar2,0,0);
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(lVar3 + 0x10);
  *(undefined8 *)(lVar2 + 0x50) = uVar1;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = (undefined8 *)(lVar2 + 0x48);
  auVar4._0_8_ = FUN_001406d4;
  return auVar4;
}



/* Entry: 001406d4; end: 001407e3;  */

void FUN_001406d4(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar4 = *param_1;
  uVar6 = *(undefined8 *)(lVar4 + 0x48);
  uVar1 = *(undefined8 *)(lVar4 + 0x50);
  lVar5 = *(long *)(lVar4 + 0x58);
  if ((param_2 & 1) == 0) {
    uVar2 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_000c6ae4(0);
      _swift_allocObject();
      FUN_000c2fc4(lVar5,uVar3);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x10,lVar4 + 0x30,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x18);
    *(undefined8 *)(lVar5 + 0x10) = uVar6;
    *(undefined8 *)(lVar5 + 0x18) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar2 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_000c6ae4(0);
      _swift_allocObject();
      FUN_000c2fc4(lVar5,uVar3);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x10,lVar4 + 0x18,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x18);
    *(undefined8 *)(lVar5 + 0x10) = uVar6;
    *(undefined8 *)(lVar5 + 0x18) = uVar1;
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
  }
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 001407e4; end: 00140803;  */

void FUN_001407e4(void)

{
  FUN_000c2a40();
  return;
}



/* Entry: 00140804; end: 0014086b;  */

undefined1  [16] FUN_00140804(long *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = 0x60;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    param_2 = "";
    _swift_coroFrameAlloc();
  }
  *param_1 = lVar1;
  *(undefined8 *)(lVar1 + 0x58) = unaff_x20;
  lVar2 = lVar1;
  FUN_000c2a40();
  *(long *)(lVar1 + 0x48) = lVar2;
  *(char **)(lVar1 + 0x50) = param_2;
  auVar3._8_8_ = (long *)(lVar1 + 0x48);
  auVar3._0_8_ = FUN_0014086c;
  return auVar3;
}



/* Entry: 0014086c; end: 001409a3;  */

void FUN_0014086c(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar4 = (undefined8 *)*param_1;
  uVar6 = puVar4[9];
  uVar1 = puVar4[10];
  lVar5 = puVar4[0xb];
  if ((param_2 & 1) == 0) {
    uVar2 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((uVar2 & 1) == 0) {
      lVar7 = puVar4[0xb];
      uVar3 = 0;
      FUN_000c6ae4(0);
      _swift_allocObject();
      FUN_000c2fc4(lVar5,uVar3);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    *puVar4 = uVar6;
    puVar4[1] = uVar1;
    *(undefined1 *)(puVar4 + 5) = 0;
    _swift_beginAccess(lVar5 + 0x20,puVar4 + 6,0x21,0);
    FUN_000c70d0(puVar4,lVar5 + 0x20);
    _swift_endAccess(puVar4 + 6);
  }
  else {
    func_0x00023304(uVar6,uVar1);
    uVar2 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((uVar2 & 1) == 0) {
      lVar7 = puVar4[0xb];
      uVar3 = 0;
      FUN_000c6ae4(0);
      _swift_allocObject();
      FUN_000c2fc4(lVar5,uVar3);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    *puVar4 = uVar6;
    puVar4[1] = uVar1;
    *(undefined1 *)(puVar4 + 5) = 0;
    _swift_beginAccess(lVar5 + 0x20,puVar4 + 6,0x21,0);
    FUN_000c70d0(puVar4,lVar5 + 0x20);
    _swift_endAccess(puVar4 + 6);
    FUN_00023358(puVar4[9],puVar4[10]);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(puVar4);
  return;
}



/* Entry: 001409a4; end: 001409cf;  */

undefined1  [16] FUN_001409a4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x00023304();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 001409d0; end: 00140a03;  */

void FUN_001409d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 00140a04; end: 00140a3f;  */

undefined8 FUN_00140a04(void)

{
  return 0x140a14;
}



/* Entry: 00140a40; end: 00140aff;  */

void FUN_00140a40(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007daac0,0x12,&uStack_48,&lStack_40);
  puRam0000000000b64af8 = puStack_38;
  lRam0000000000b64af0 = lStack_40;
  puRam0000000000b64b08 = puStack_28;
  puRam0000000000b64b00 = puStack_30;
  puRam0000000000b64b18 = puStack_18;
  puRam0000000000b64b10 = puStack_20;
  return;
}



/* Entry: 00140b00; end: 00140b9f;  */

void FUN_00140b00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0638 != -1) {
    _swift_once(0xaf0638,FUN_00140a40);
  }
  uVar5 = uRam0000000000b64b18;
  uVar4 = uRam0000000000b64b10;
  uVar3 = uRam0000000000b64b08;
  uVar2 = uRam0000000000b64b00;
  uVar1 = uRam0000000000b64af8;
  *param_1 = uRam0000000000b64af0;
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



/* Entry: 00140ba0; end: 00140c77;  */

void FUN_00140ba0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  pcVar3 = *(code **)(param_4 + 0x10);
  while ((lVar1 = param_3, lVar2 = param_4, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      _swift_beginAccess(param_1 + 0x10,auStack_58,0x21,0);
      (**(code **)(param_4 + 0x150))(param_1 + 0x10,param_3,param_4);
      _swift_endAccess(auStack_58);
    }
    else if (lVar1 == 2) {
      FUN_00140c78(param_2,param_1,param_3,param_4);
    }
  }
  return;
}



/* Entry: 00140c78; end: 00140d1f;  */

void FUN_00140c78(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_78;
  undefined1 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar1 = param_2;
  FUN_000c2a40();
  uStack_50 = param_1;
  lStack_48 = lVar1;
  (**(code **)(param_4 + 0x168))(&uStack_50,param_3,param_4);
  uStack_80 = uStack_50;
  lStack_78 = lStack_48;
  uStack_58 = 0;
  _swift_beginAccess(param_2 + 0x20,auStack_98,0x21,0);
  FUN_000c70d0(&uStack_80,param_2 + 0x20);
  _swift_endAccess(auStack_98);
  return;
}



/* Entry: 00140d20; end: 00140d8b;  */

void FUN_00140d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  FUN_00140d8c(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    FUN_0013ad2c(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 00140d8c; end: 00140f03;  */

void FUN_00140d8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long unaff_x21;
  code *pcVar11;
  undefined1 auStack_68 [24];
  
  FUN_000c3848();
  if (unaff_x21 != 0) {
    return;
  }
  puVar5 = (undefined1 *)(param_1 + 0x10);
  puVar7 = auStack_68;
  _swift_beginAccess(puVar5,puVar7,0,0);
  uVar1 = *(ulong *)(param_1 + 0x10);
  puVar6 = *(undefined1 **)(param_1 + 0x18);
  uVar3 = uVar1 & 0xffffffffffff;
  if (((ulong)puVar6 & 0x2000000000000000) != 0) {
    uVar3 = (ulong)puVar6 >> 0x38 & 0xf;
  }
  if (uVar3 != 0) {
    pcVar11 = *(code **)(param_4 + 0x70);
    _swift_bridgeObjectRetain(puVar6);
    puVar7 = puVar6;
    (*pcVar11)(uVar1,puVar6,1,param_3,param_4);
    _swift_bridgeObjectRelease();
    puVar5 = puVar6;
  }
  FUN_000c2a40();
  uVar4 = (uint)((ulong)puVar7 >> 0x20);
  uVar8 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar8 == 0) {
      puVar6 = puVar7;
      FUN_00023358();
      uVar3 = (ulong)puVar7 & 0xff000000000000;
      puVar7 = puVar6;
      if (uVar3 == 0) {
        return;
      }
    }
    else {
      puVar6 = puVar5;
      FUN_00023358();
      iVar9 = (int)puVar5;
      lVar10 = (long)puVar5 >> 0x20;
      puVar5 = puVar6;
      if (iVar9 == lVar10) {
        return;
      }
    }
  }
  else {
    if (uVar8 != 2) {
      FUN_00023358();
      return;
    }
    lVar10 = *(long *)(puVar5 + 0x10);
    lVar2 = *(long *)(puVar5 + 0x18);
    FUN_00023358();
    if (lVar10 == lVar2) {
      return;
    }
  }
  FUN_000c2a40();
  (**(code **)(param_4 + 0x78))();
  FUN_00023358(puVar5,puVar7);
  return;
}



/* Entry: 00140f04; end: 00140f7f;  */

ulong FUN_00140f04(long param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,ulong param_6
                  )

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
  
  if ((param_3 != param_6) && (FUN_000c46a8(), (param_6 & 1) == 0)) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(param_5 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)param_1;
  if ((ulong)param_2 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((param_1 != 0) || (param_2 != (byte *)0xc000000000000000)) || (param_5 >> 0x3e < 3)) ||
       ((uVar12 = 0, param_4 != 0 || (param_5 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar12 = (ulong)param_2 >> 0x30 & 0xff;
      }
      else {
        iVar11 = (int)((ulong)param_1 >> 0x20);
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
      uVar14 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
      if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
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
        uVar12 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
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
        uVar14 = param_5 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar11,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)param_4)) goto LAB_0003899c;
    }
    if (0 < (long)uVar12) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          abStack_70[0] = (byte)param_1;
          abStack_70[1] = (byte)((ulong)param_1 >> 8);
          abStack_70[2] = (byte)((ulong)param_1 >> 0x10);
          abStack_70[3] = (byte)((ulong)param_1 >> 0x18);
          abStack_70[4] = (byte)((ulong)param_1 >> 0x20);
          abStack_70[5] = (byte)((ulong)param_1 >> 0x28);
          abStack_70[6] = (byte)((ulong)param_1 >> 0x30);
          abStack_70[7] = (byte)((ulong)param_1 >> 0x38);
          abStack_70[8] = (byte)param_2;
          abStack_70[9] = (byte)((ulong)param_2 >> 8);
          abStack_70[10] = (byte)((ulong)param_2 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)param_2 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)param_2 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)param_2 >> 0x28);
          param_2 = abStack_70 + ((ulong)param_2 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar12 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        lVar6 = (param_1 >> 0x20) - lVar17;
        if (param_1 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (param_1 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          param_1 = 0;
        }
        else {
          lVar7 = param_1;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          param_1 = (lVar17 - lVar7) + param_1;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (param_1 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar9 = (byte *)(lVar7 + param_1);
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
          param_2 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(param_1 + 0x10);
        lVar7 = *(long *)(param_1 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = param_1;
        if (param_1 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          param_1 = (lVar17 - lVar6) + param_1;
        }
        lVar1 = lVar7 - lVar17;
        if (SBORROW8(lVar7,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (param_1 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar9 = (byte *)(lVar6 + param_1);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)param_2 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,param_1,pbVar9,param_4,param_5);
      uVar12 = (ulong)abStack_70[0];
      param_2 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar12 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar12;
  }
  ___stack_chk_fail();
  lVar6 = (long)param_2 - uVar12;
  if (SBORROW8((long)param_2,uVar12)) {
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
  lVar17 = param_4 - lVar6;
  if (SBORROW8(param_4,lVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar17 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
      lVar6 = uVar14 - (long)param_2;
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar6 = uVar14 - (long)param_2;
    }
    if (SBORROW8(uVar14,(long)param_2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar12 = uVar12 + param_4 * 8;
    uVar14 = uVar15 + 0x20 + (long)param_2 * 8;
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
  if (0 < param_4) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar14;
}



/* Entry: 00140f80; end: 00141063;  */

void FUN_00140f80(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  _swift_beginAccess(param_3 + 0x10,auStack_80,0,0);
  uVar2 = *(ulong *)(param_3 + 0x10);
  uVar3 = *(ulong *)(param_3 + 0x18);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    _swift_bridgeObjectRetain(uVar3);
    __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar2,uVar3);
    _swift_bridgeObjectRelease(uVar3);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00141064; end: 0014107f;  */

undefined1  [16] FUN_00141064(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x80000000008b8cf0;
  auVar1._0_8_ = 0xd000000000000013;
  return auVar1;
}



/* Entry: 00141080; end: 001410af;  */

undefined1  [16] FUN_00141080(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00023304(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 001410b0; end: 001410e3;  */

void FUN_001410b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 001410e4; end: 001410f7;  */

undefined8 FUN_001410e4(void)

{
  return 0x1410f4;
}



/* Entry: 001410f8; end: 0014112f;  */

void FUN_001410f8(void)

{
  FUN_00140574();
  return;
}



/* Entry: 00141130; end: 001411cf;  */

void FUN_00141130(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0638 != -1) {
    _swift_once(0xaf0638,FUN_00140a40);
  }
  uVar5 = uRam0000000000b64b18;
  uVar4 = uRam0000000000b64b10;
  uVar3 = uRam0000000000b64b08;
  uVar2 = uRam0000000000b64b00;
  uVar1 = uRam0000000000b64af8;
  *param_1 = uRam0000000000b64af0;
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



/* Entry: 001411d0; end: 0014120b;  */

void FUN_001411d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf0658;
  uStack_18 = param_1;
  func_0x000115a8(0xaf0658,&UNK_007daab8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 0014120c; end: 0014121f;  */

void FUN_0014120c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [72];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  _swift_beginAccess(lVar4 + 0x10,auStack_80,0,0);
  uVar2 = *(ulong *)(lVar4 + 0x10);
  uVar3 = *(ulong *)(lVar4 + 0x18);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    _swift_bridgeObjectRetain(uVar3);
    __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar2,uVar3);
    _swift_bridgeObjectRelease(uVar3);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00141220; end: 00141273;  */

void FUN_00141220(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  FUN_000ea098(auStack_78,uVar1,uVar2,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00141274; end: 001412e3;  */

ulong FUN_00141274(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  ulong *unaff_x20;
  ulong uVar19;
  long lVar20;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar9 = *param_1;
  pbVar12 = (byte *)param_1[1];
  lVar14 = *param_2;
  uVar8 = param_2[1];
  uVar11 = param_2[2];
  if ((param_1[2] != uVar11) && (FUN_000c46a8(), (uVar11 & 1) == 0)) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar12 >> 0x20);
  uVar15 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar8 >> 0x20);
  uVar17 = uVar3 >> 0x1e;
  iVar5 = (int)lVar9;
  if ((ulong)pbVar12 >> 0x3e == 3) {
    uVar11 = 0;
    if ((((lVar9 != 0) || (pbVar12 != (byte *)0xc000000000000000)) || (uVar8 >> 0x3e < 3)) ||
       ((uVar11 = 0, lVar14 != 0 || (uVar8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar11 = (ulong)pbVar12 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)lVar9 >> 0x20);
        if (SBORROW4(iVar16,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar11 = (ulong)(iVar16 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar17 != 2) {
        uVar8 = (ulong)(uVar11 == 0);
        goto LAB_00038af8;
      }
      uVar18 = *(long *)(lVar14 + 0x18) - *(long *)(lVar14 + 0x10);
      if (SBORROW8(*(long *)(lVar14 + 0x18),*(long *)(lVar14 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar11 != uVar18) {
LAB_0003899c:
        uVar8 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar15 == 2) {
        uVar11 = *(long *)(lVar9 + 0x18) - *(long *)(lVar9 + 0x10);
        if (SBORROW8(*(long *)(lVar9 + 0x18),*(long *)(lVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar11 = 0;
      if (1 < uVar17) goto LAB_00038898;
LAB_000388cc:
      if (uVar17 == 0) {
        uVar18 = uVar8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar16 = (int)((ulong)lVar14 >> 0x20);
      if (SBORROW4(iVar16,(int)lVar14)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar11 != (long)(iVar16 - (int)lVar14)) goto LAB_0003899c;
    }
    if (0 < (long)uVar11) {
      if (uVar15 < 2) {
        if (uVar15 == 0) {
          abStack_70[0] = (byte)lVar9;
          abStack_70[1] = (byte)((ulong)lVar9 >> 8);
          abStack_70[2] = (byte)((ulong)lVar9 >> 0x10);
          abStack_70[3] = (byte)((ulong)lVar9 >> 0x18);
          abStack_70[4] = (byte)((ulong)lVar9 >> 0x20);
          abStack_70[5] = (byte)((ulong)lVar9 >> 0x28);
          abStack_70[6] = (byte)((ulong)lVar9 >> 0x30);
          abStack_70[7] = (byte)((ulong)lVar9 >> 0x38);
          abStack_70[8] = (byte)pbVar12;
          abStack_70[9] = (byte)((ulong)pbVar12 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar12 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar12 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar12 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar12 >> 0x28);
          pbVar12 = abStack_70 + ((ulong)pbVar12 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar8 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar20 = (long)iVar5;
        lVar6 = (lVar9 >> 0x20) - lVar20;
        if (lVar9 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar9 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar9 = 0;
        }
        else {
          lVar7 = lVar9;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          lVar9 = (lVar20 - lVar7) + lVar9;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar9 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar13 = (byte *)(lVar7 + lVar9);
            goto LAB_00038aec;
          }
        }
        pbVar13 = (byte *)0x0;
      }
      else {
        if (uVar15 != 2) {
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
          pbVar12 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar20 = *(long *)(lVar9 + 0x10);
        lVar7 = *(long *)(lVar9 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = lVar9;
        if (lVar9 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          lVar9 = (lVar20 - lVar6) + lVar9;
        }
        lVar1 = lVar7 - lVar20;
        if (SBORROW8(lVar7,lVar20)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar9 == 0) {
          pbVar13 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar13 = (byte *)(lVar6 + lVar9);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar12 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,lVar9,pbVar13,lVar14,uVar8);
      uVar8 = (ulong)abStack_70[0];
      pbVar12 = pbVar13;
      goto LAB_00038af8;
    }
  }
  uVar8 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar8;
  }
  ___stack_chk_fail();
  lVar9 = (long)pbVar12 - uVar8;
  if (SBORROW8((long)pbVar12,uVar8)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar19 = *unaff_x20;
  uVar18 = uVar19 & 0xffffffffffffff8;
  uVar8 = uVar18 + 0x20 + uVar8 * 8;
  uVar10 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar11 = uVar8;
  _swift_arrayDestroy(uVar8,lVar9,uVar10);
  lVar6 = lVar14 - lVar9;
  if (SBORROW8(lVar14,lVar9)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar6 != 0) {
    if (uVar19 >> 0x3e == 0) {
      uVar11 = *(ulong *)(uVar18 + 0x10);
      lVar9 = uVar11 - (long)pbVar12;
    }
    else {
      uVar11 = uVar18;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar11 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar9 = uVar11 - (long)pbVar12;
    }
    if (SBORROW8(uVar11,(long)pbVar12)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar8 = uVar8 + lVar14 * 8;
    uVar11 = uVar18 + 0x20 + (long)pbVar12 * 8;
    if (uVar8 != uVar11 || uVar11 + lVar9 * 8 <= uVar8) {
      _memmove(uVar8,uVar11,lVar9 << 3);
    }
    if (uVar19 >> 0x3e == 0) {
      uVar11 = *(ulong *)(uVar18 + 0x10);
    }
    else {
      uVar11 = uVar18;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar11 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar11,lVar6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar18 + 0x10) = uVar11 + lVar6;
  }
  if (0 < lVar14) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar11;
}



/* Entry: 001412e4; end: 00141307;  */

void FUN_001412e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00141308();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 00141308; end: 00141347;  */

void FUN_00141308(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af0640 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007daa08;
  _swift_getWitnessTable(&UNK_007daa08,&UNK_009af680);
  puRam0000000000af0640 = puVar1;
  return;
}



/* Entry: 00141348; end: 00141373;  */

void FUN_00141348(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00141374();
  *(long *)(param_1 + 8) = lVar1;
  FUN_000c735c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 00141374; end: 001413b3;  */

void FUN_00141374(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af0648 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007daa30;
  _swift_getWitnessTable(&UNK_007daa30,&UNK_009af680);
  puRam0000000000af0648 = puVar1;
  return;
}



/* Entry: 001413b4; end: 001413b7;  */

void FUN_001413b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af0650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007daa70;
  _swift_getWitnessTable(&UNK_007daa70,&UNK_009af680);
  puRam0000000000af0650 = puVar1;
  return;
}



/* Entry: 001413b8; end: 001413f7;  */

void FUN_001413b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af0650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007daa70;
  _swift_getWitnessTable(&UNK_007daa70,&UNK_009af680);
  puRam0000000000af0650 = puVar1;
  return;
}



/* Entry: 001413f8; end: 001413fb;  */

undefined8 * FUN_001413f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00023304(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  _swift_retain();
  return param_1;
}



/* Entry: 001413fc; end: 00141427;  */

void FUN_001413fc(undefined8 *param_1)

{
  FUN_00023358(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_1[2]);
  return;
}



/* Entry: 00141428; end: 001414d3;  */

undefined8 * FUN_00141428(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00023304(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  _swift_retain();
  return param_1;
}



/* Entry: 001414d4; end: 0014151b;  */

undefined8 * FUN_001414d4(undefined8 *param_1,undefined8 *param_2)

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
  param_1[2] = param_2[2];
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 0014151c; end: 001415bb;  */

int FUN_0014151c(int *param_1,int param_2)

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



/* Entry: 001415bc; end: 001415e7;  */

undefined1  [16] FUN_001415bc(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}


