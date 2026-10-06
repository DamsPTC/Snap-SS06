/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 000d885c; end: 000d8907;  */

void FUN_000d885c(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar2 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar2 = 5;
  }
  lVar4 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar4 = lVar2;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar4 = 2;
  }
  lVar2 = 1;
  if (0x7f < param_2 << 3) {
    lVar2 = lVar4;
  }
  if (*(ulong *)(param_1 + 0x10) >> 0x3d != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xd88fc);
    (*pcVar3)();
  }
  lVar5 = *(ulong *)(param_1 + 0x10) * 4;
  lVar4 = lVar5;
  func_0x0013afac();
  if (SCARRY8(lVar2,lVar4)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xd8900);
    (*pcVar3)();
  }
  lVar1 = lVar2 + lVar4 + lVar5;
  if (!SCARRY8(lVar2 + lVar4,lVar5)) {
    if (!SCARRY8(*unaff_x20,lVar1)) {
      *unaff_x20 = *unaff_x20 + lVar1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xd8908);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0xd8904);
  (*pcVar3)();
}



/* Entry: 000d8908; end: 000d89b3;  */

void FUN_000d8908(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar2 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar2 = 5;
  }
  lVar4 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar4 = lVar2;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar4 = 2;
  }
  lVar2 = 1;
  if (0x7f < param_2 << 3) {
    lVar2 = lVar4;
  }
  if (*(ulong *)(param_1 + 0x10) >> 0x3c != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xd89a8);
    (*pcVar3)();
  }
  lVar5 = *(ulong *)(param_1 + 0x10) * 8;
  lVar4 = lVar5;
  func_0x0013afac();
  if (SCARRY8(lVar2,lVar4)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xd89ac);
    (*pcVar3)();
  }
  lVar1 = lVar2 + lVar4 + lVar5;
  if (!SCARRY8(lVar2 + lVar4,lVar5)) {
    if (!SCARRY8(*unaff_x20,lVar1)) {
      *unaff_x20 = *unaff_x20 + lVar1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xd89b4);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0xd89b0);
  (*pcVar3)();
}



/* Entry: 000d89b4; end: 000d8a4f;  */

void FUN_000d89b4(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar2 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar2 = 5;
  }
  lVar4 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar4 = lVar2;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar4 = 2;
  }
  lVar2 = 1;
  if (0x7f < param_2 << 3) {
    lVar2 = lVar4;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  lVar4 = lVar5;
  func_0x0013afac();
  if (SCARRY8(lVar2,lVar4)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xd8a48);
    (*pcVar3)();
  }
  lVar1 = lVar2 + lVar4 + lVar5;
  if (SCARRY8(lVar2 + lVar4,lVar5)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xd8a4c);
    (*pcVar3)();
  }
  if (!SCARRY8(*unaff_x20,lVar1)) {
    *unaff_x20 = *unaff_x20 + lVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0xd8a50);
  (*pcVar3)();
}



/* Entry: 000d8a50; end: 000d8aef;  */

void FUN_000d8a50(undefined8 param_1,uint param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *unaff_x20;
  
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar2 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar2 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar2 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar2;
  }
  lVar2 = *unaff_x20 + lVar1;
  if (!SCARRY8(*unaff_x20,lVar1)) {
    (**(code **)(param_4 + 0x28))(param_3,param_4);
    func_0x0013b028();
    if (!SCARRY8(lVar2,param_3)) {
      *unaff_x20 = lVar2 + param_3;
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xd8af0);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0xd8aec);
  (*pcVar3)();
}



/* Entry: 000d8af0; end: 000d8c07;  */

void FUN_000d8af0(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long *unaff_x20;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar3 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar3 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar3 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar3;
  }
  lVar3 = param_1;
  __sSa5countSivg(param_1,param_3);
  lVar6 = lVar3 * lVar1;
  if (SUB168(SEXT816(lVar3) * SEXT816(lVar1),8) != lVar6 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xd8c00);
    (*pcVar2)();
  }
  lVar1 = *unaff_x20 + lVar6;
  if (SCARRY8(*unaff_x20,lVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xd8c04);
    (*pcVar2)();
  }
  uStack_58 = 0;
  uVar4 = 0;
  uStack_70 = param_3;
  uStack_68 = param_4;
  lStack_50 = param_1;
  __sSaMa(0,param_3);
  puVar5 = PTR___sSayxGSTsMc_0099b1f0;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_0099b1f0,uVar4);
  __sSTsE6reduceyqd__qd___qd__qd___7ElementQztKXEtKlF
            (&lStack_48,&uStack_58,0xdb1a4,auStack_80,uVar4,PTR___sSiN_0099b2c0,puVar5);
  if (!SCARRY8(lVar1,lStack_48)) {
    *unaff_x20 = lVar1 + lStack_48;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0xd8c08);
  (*pcVar2)();
}



/* Entry: 000d8c08; end: 000d8d13;  */

void FUN_000d8c08(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long *unaff_x20;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lVar5 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar5 = 5;
  }
  lVar1 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar1 = lVar5;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar1 = 2;
  }
  lVar5 = 1;
  if (0x7f < param_2 << 3) {
    lVar5 = lVar1;
  }
  lVar1 = *unaff_x20 + lVar5;
  if (SCARRY8(*unaff_x20,lVar5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xd8d0c);
    (*pcVar2)();
  }
  uStack_50 = 0;
  uVar3 = 0;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_48 = param_1;
  __sSaMa(0,param_3);
  puVar4 = PTR___sSayxGSTsMc_0099b1f0;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_0099b1f0,uVar3);
  __sSTsE6reduceyqd__qd___qd__qd___7ElementQztKXEtKlF
            (&lStack_38,&uStack_50,FUN_000daf54,auStack_70,uVar3,PTR___sSiN_0099b2c0,puVar4);
  lVar5 = lStack_38;
  func_0x0013afac();
  if (SCARRY8(lVar5,lStack_38)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xd8d10);
    (*pcVar2)();
  }
  if (!SCARRY8(lVar1,lVar5 + lStack_38)) {
    *unaff_x20 = lVar1 + lVar5 + lStack_38;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0xd8d14);
  (*pcVar2)();
}



/* Entry: 000d8d14; end: 000d8dcb;  */

void FUN_000d8d14(undefined8 param_1,uint param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *unaff_x20;
  long unaff_x21;
  
  lVar2 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar2 = 5;
  }
  lVar4 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar4 = lVar2;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar4 = 2;
  }
  lVar2 = 1;
  if (0x7f < param_2 << 3) {
    lVar2 = lVar4;
  }
  FUN_0010baa4(param_3,param_4);
  if (unaff_x21 == 0) {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xd8dc0);
      (*pcVar3)();
    }
    lVar4 = param_3;
    func_0x0013b07c();
    if (SCARRY8(lVar2,lVar4)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xd8dc4);
      (*pcVar3)();
    }
    lVar1 = lVar2 + lVar4 + param_3;
    if (SCARRY8(lVar2 + lVar4,param_3)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xd8dc8);
      (*pcVar3)();
    }
    if (SCARRY8(*unaff_x20,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xd8dcc);
      (*pcVar3)();
    }
    *unaff_x20 = *unaff_x20 + lVar1;
  }
  return;
}



/* Entry: 000d8dcc; end: 000d8eeb;  */

void FUN_000d8dcc(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x21;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar3 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar3 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar3 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar3;
  }
  lVar3 = param_1;
  __sSa5countSivg(param_1,param_3);
  lVar6 = lVar3 * lVar1;
  if (SUB168(SEXT816(lVar3) * SEXT816(lVar1),8) == lVar6 >> 0x3f) {
    lVar1 = *unaff_x20 + lVar6;
    if (SCARRY8(*unaff_x20,lVar6)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xd8ee8);
      (*pcVar2)();
    }
    *unaff_x20 = lVar1;
    uStack_58 = 0;
    uVar4 = 0;
    uStack_70 = param_3;
    uStack_68 = param_4;
    lStack_50 = param_1;
    __sSaMa(0,param_3);
    puVar5 = PTR___sSayxGSTsMc_0099b1f0;
    _swift_getWitnessTable(PTR___sSayxGSTsMc_0099b1f0,uVar4);
    __sSTsE6reduceyqd__qd___qd__qd___7ElementQztKXEtKlF
              (&lStack_48,&uStack_58,0xdaf68,auStack_80,uVar4,PTR___sSiN_0099b2c0,puVar5);
    if (unaff_x21 == 0) {
      if (SCARRY8(lVar1,lStack_48)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xd8eec);
        (*pcVar2)();
      }
      *unaff_x20 = lVar1 + lStack_48;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0xd8ee4);
  (*pcVar2)();
}



/* Entry: 000d8eec; end: 000d8f5b;  */

void FUN_000d8eec(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x21;
  long lVar4;
  
  lVar4 = *param_2;
  FUN_0010baa4(param_4,param_5);
  if (unaff_x21 == 0) {
    if (param_4 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xd8f54);
      (*pcVar2)();
    }
    lVar3 = param_4;
    func_0x0013b07c();
    lVar1 = lVar4 + lVar3;
    if (SCARRY8(lVar4,lVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xd8f58);
      (*pcVar2)();
    }
    if (SCARRY8(lVar1,param_4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xd8f5c);
      (*pcVar2)();
    }
    *param_1 = lVar1 + param_4;
  }
  return;
}



/* Entry: 000d8f5c; end: 000d8ff3;  */

void FUN_000d8f5c(undefined8 param_1,uint param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *unaff_x20;
  
  lVar1 = 8;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 10;
  }
  lVar2 = 6;
  if (0x1fffff < param_2 << 3) {
    lVar2 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar2 = 4;
  }
  lVar1 = 2;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar2;
  }
  if (!SCARRY8(*unaff_x20,lVar1)) {
    *unaff_x20 = *unaff_x20 + lVar1;
    (**(code **)(param_4 + 0x48))(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0xd8ff4);
  (*pcVar3)();
}



/* Entry: 000d8ff4; end: 000d91b7;  */

void FUN_000d8ff4(long param_1,uint param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x12;
  long *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  
  lVar6 = *(long *)(param_3 + -8);
  lVar2 = param_1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar6 + 0x40));
  puVar4 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar5 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar5 = 5;
  }
  lVar3 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar3 = lVar5;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar3 = 2;
  }
  lVar5 = 1;
  if (0x7f < param_2 << 3) {
    lVar5 = lVar3;
  }
  __sSa5countSivg();
  if (lVar2 + 0x4000000000000000 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xd91b0);
    (*pcVar1)();
  }
  lVar3 = lVar2 * 2 * lVar5;
  if (SUB168(SEXT816(lVar2 * 2) * SEXT816(lVar5),8) != lVar3 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xd91b4);
    (*pcVar1)();
  }
  if (!SCARRY8(*unaff_x20,lVar3)) {
    *unaff_x20 = *unaff_x20 + lVar3;
    lVar5 = param_1;
    __sSa8endIndexSivg(param_1,param_3);
    if (lVar5 != 0) {
      lVar5 = 0;
      do {
        __sSayxSicig((long)puVar4 - extraout_x12,lVar5,param_1,param_3);
        lVar2 = lVar5 + 1;
        if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0xd91ac);
          (*pcVar1)();
        }
        (**(code **)(lVar6 + 0x20))(puVar4,(long)puVar4 - extraout_x12,param_3);
        (**(code **)(param_4 + 0x48))(unaff_x20,&UNK_009ab410,&PTR_DAT_009ab428,param_3);
        (**(code **)(lVar6 + 8))(puVar4,param_3);
        if (unaff_x21 != 0) {
          return;
        }
        lVar3 = param_1;
        __sSa8endIndexSivg(param_1,param_3);
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xd91b8);
  (*pcVar1)();
}



/* Entry: 000d91b8; end: 000d9a2b;  */

void FUN_000d91b8(undefined1 *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long param_6)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long extraout_x8;
  long lVar17;
  long lVar18;
  long extraout_x8_00;
  long lVar19;
  long extraout_x8_01;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long extraout_x12;
  long *unaff_x20;
  ulong uVar24;
  long lVar25;
  long unaff_x21;
  ulong uVar26;
  long lVar27;
  undefined1 *puVar28;
  long lStack_1b0;
  long lStack_1a8;
  undefined1 *puStack_1a0;
  ulong uStack_198;
  long lStack_190;
  ulong uStack_110;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [48];
  ulong uStack_58;
  
  lVar13 = *(long *)(param_6 + 8);
  lVar5 = 0;
  puStack_1a0 = param_1;
  _swift_getAssociatedTypeWitness(0,lVar13,param_4,&UNK_008441f0,&UNK_00844200);
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)&lStack_1b0 - extraout_x8;
  lVar14 = *(long *)(param_5 + 8);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness(0,lVar14,param_3,&UNK_008441f0,&UNK_00844200);
  lVar18 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar28 = (undefined1 *)(lVar17 - extraout_x8_00);
  lVar7 = 0xff;
  _swift_getTupleTypeMetadata2();
  lVar8 = 0;
  __sSqMa(0,lVar7);
  lVar19 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar19 + 0x40));
  lVar22 = (long)puVar28 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar10 = puStack_1a0;
  lVar20 = lVar22 - extraout_x12;
  uVar3 = param_2 << 3;
  if (uVar3 < 0x80) {
    lStack_1b0 = 1;
  }
  else if (uVar3 < 0x4000) {
    lStack_1b0 = 2;
  }
  else if (uVar3 < 0x200000) {
    lStack_1b0 = 3;
  }
  else {
    lStack_1b0 = 4;
    if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
      lStack_1b0 = 5;
    }
  }
  uVar24 = (ulong)puStack_1a0 & 0xc000000000000001;
  lVar9 = lVar14;
  _swift_getAssociatedConformanceWitness(lVar14,param_3,lVar6,&UNK_008441f0,&UNK_008441f8);
  lVar12 = lVar6;
  if (uVar24 == 0) {
    _swift_retain(puVar10);
    __ss17_NativeDictionaryVyAByxq_Gs05__RawB7StorageCncfC();
    __ss17_NativeDictionaryV12makeIteratorAB0D0Vyxq__GyF(auStack_e0);
    lVar27 = -0xa8;
    puVar11 = auStack_e0;
    __sSD8IteratorV7_nativeAByxq__Gs17_NativeDictionaryVAAVyxq__Gn_tcfC
              (auStack_b8,puVar11,lVar6,lVar5,lVar9);
  }
  else {
    FUN_00105a7c(puVar10,lVar6,lVar5,lVar9);
    puVar11 = puVar10;
    __ss17__CocoaDictionaryV12makeIteratorAB0D0CyF();
    _swift_unknownObjectRetain(puVar10);
    lVar27 = -0x80;
    __sSD8IteratorV6_cocoaAByxq__Gs17__CocoaDictionaryVAACn_tcfC
              (auStack_90,puVar11,lVar6,lVar5,lVar9);
  }
  lStack_1a8 = *(long *)(&stack0x00000000 + lVar27);
  lVar9 = *(long *)(&stack0xfffffffffffffff0 + lVar27);
  lVar1 = *(long *)(&stack0xfffffffffffffff8 + lVar27);
  uStack_198 = lStack_1a8 + 0x40U >> 6;
  lVar23 = *(long *)(&stack0x00000008 + lVar27);
  uVar24 = *(ulong *)(&stack0x00000010 + lVar27);
  lStack_190 = lVar7;
  do {
    lVar27 = lVar23;
    if (lVar9 < 0) {
      __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
      uStack_110 = uVar24;
      if (puVar11 == (undefined1 *)0x0) {
LAB_000d96ec:
        uVar15 = 1;
      }
      else {
        __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF(lVar22);
        _swift_unknownObjectRelease(puVar11);
        __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF
                  (lVar22 + *(int *)(lVar7 + 0x30),lVar12,lVar5,lVar5);
        _swift_unknownObjectRelease(lVar12);
        uVar15 = 0;
      }
    }
    else {
      uVar21 = uVar24;
      if (uVar24 == 0) {
        uVar26 = uStack_198;
        if ((long)uStack_198 <= lVar23 + 1) {
          uVar26 = lVar23 + 1;
        }
        lVar12 = lVar23;
        do {
          lVar27 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0xd9a1c);
            (*pcVar4)();
          }
          if ((long)uStack_198 <= lVar27) {
            uStack_110 = 0;
            lVar27 = uVar26 - 1;
            goto LAB_000d96ec;
          }
          uVar21 = *(ulong *)(lVar1 + lVar27 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar21 == 0);
      }
      uVar26 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
      uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
      uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
      uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
      uVar26 = LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) | lVar27 << 6;
      lVar12 = lVar14;
      _swift_getAssociatedConformanceWitness(lVar14,param_3,lVar6,&UNK_008441f0,&UNK_008441f8);
      lVar7 = lVar9;
      __ss17_NativeDictionaryV5_keysSpyxGvg(lVar9,lVar6,lVar5,lVar12);
      (**(code **)(lVar18 + 0x10))(lVar22,lVar7 + *(long *)(lVar18 + 0x48) * uVar26,lVar6);
      FUN_000f880c(lVar9,lVar6,lVar5,lVar12);
      lVar7 = lStack_190;
      iVar2 = *(int *)(lStack_190 + 0x30);
      lVar25 = lVar9;
      __ss17_NativeDictionaryV7_valuesSpyq_Gvg(lVar9,lVar6,lVar5,lVar12);
      (**(code **)(lVar16 + 0x10))(lVar22 + iVar2,lVar25 + *(long *)(lVar16 + 0x48) * uVar26,lVar5);
      FUN_000f880c(lVar9,lVar6,lVar5,lVar12);
      uVar15 = 0;
      uStack_110 = uVar21 - 1 & uVar21;
    }
    lVar25 = *(long *)(lVar7 + -8);
    (**(code **)(lVar25 + 0x38))(lVar22,uVar15,1,lVar7);
    (**(code **)(lVar19 + 0x20))(lVar20,lVar22,lVar8);
    lVar12 = lVar20;
    (**(code **)(lVar25 + 0x30))(lVar20,1,lVar7);
    if ((int)lVar12 == 1) {
      func_0x000daf4c(lVar9,lVar1,lStack_1a8,lVar23,uVar24);
      _swift_getAssociatedConformanceWitness(lVar14,param_3,lVar6,&UNK_008441f0,&UNK_008441f8);
      puVar10 = puStack_1a0;
      __sSD5countSivg(puStack_1a0,lVar6,lVar5,lVar14);
      lVar7 = (long)puVar10 * lStack_1b0;
      if (SUB168(SEXT816((long)puVar10) * SEXT816(lStack_1b0),8) != lVar7 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0xd9a28);
        (*pcVar4)();
      }
      if (!SCARRY8(*unaff_x20,lVar7)) {
        *unaff_x20 = *unaff_x20 + lVar7;
        return;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xd9a2c);
      (*pcVar4)();
    }
    iVar2 = *(int *)(lVar7 + 0x30);
    (**(code **)(lVar18 + 0x20))(puVar28,lVar20,lVar6);
    (**(code **)(lVar16 + 0x20))(lVar17,lVar20 + iVar2,lVar5);
    uStack_58 = 0;
    (**(code **)(lVar14 + 0x30))(puVar28,1,&uStack_58,&UNK_009ab410,&PTR_DAT_009ab428,param_3);
    if (unaff_x21 != 0) {
      func_0x000daf4c(lVar9,lVar1,lStack_1a8,lVar23,uVar24);
      (**(code **)(lVar16 + 8))(lVar17,lVar5);
      (**(code **)(lVar18 + 8))(puVar28,lVar6);
      return;
    }
    (**(code **)(lVar13 + 0x30))(lVar17,2,&uStack_58,&UNK_009ab410,&PTR_DAT_009ab428,param_4);
    (**(code **)(lVar16 + 8))(lVar17,lVar5);
    puVar11 = puVar28;
    lVar12 = lVar6;
    (**(code **)(lVar18 + 8))();
    if (uStack_58 < 0x80) {
      lVar23 = 1;
    }
    else if ((long)uStack_58 < 0) {
      lVar23 = 10;
    }
    else if (uStack_58 >> 0x23 == 0) {
      if (uStack_58 < 0x200000) {
        lVar23 = 2;
        if (uStack_58 < 0x4000) goto LAB_000d98d4;
      }
      else {
        lVar23 = 4;
        uVar24 = uStack_58 >> 0x1c;
joined_r0x000d98cc:
        if (uVar24 == 0) goto LAB_000d98d4;
      }
LAB_000d98d0:
      lVar23 = lVar23 + 1;
    }
    else {
      if (uStack_58 >> 0x31 != 0) {
        lVar23 = 8;
        uVar24 = uStack_58 >> 0x38;
        goto joined_r0x000d98cc;
      }
      lVar23 = 6;
      if (uStack_58 >> 0x2a != 0) goto LAB_000d98d0;
    }
LAB_000d98d4:
    if (SCARRY8(lVar23,uStack_58)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xd9a20);
      (*pcVar4)();
    }
    if (SCARRY8(*unaff_x20,lVar23 + uStack_58)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xd9a24);
      (*pcVar4)();
    }
    *unaff_x20 = *unaff_x20 + lVar23 + uStack_58;
    lVar23 = lVar27;
    uVar24 = uStack_110;
  } while( true );
}



/* Entry: 000d9a2c; end: 000da1af;  */

void FUN_000d9a2c(undefined1 *param_1,uint param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long extraout_x8;
  long lVar11;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long extraout_x12;
  ulong uVar18;
  long *unaff_x20;
  long lVar19;
  long unaff_x21;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined1 *puVar24;
  long lStack_180;
  undefined1 *puStack_178;
  long lStack_170;
  ulong uStack_c8;
  undefined1 auStack_b8 [40];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_58;
  
  lVar21 = *(long *)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar21 + 0x40));
  lVar20 = (long)&lStack_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(param_5 + 8);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar24 = (undefined1 *)(lVar20 - extraout_x8_00);
  lVar5 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,lVar4,param_4,"key value ",0);
  lVar6 = 0;
  __sSqMa();
  lVar12 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar12 + 0x40));
  lVar15 = (long)puVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar13 = lVar15 - extraout_x12;
  uVar2 = param_2 << 3;
  if (uVar2 < 0x80) {
    lStack_180 = 1;
  }
  else if (uVar2 < 0x4000) {
    lStack_180 = 2;
  }
  else if (uVar2 < 0x200000) {
    lStack_180 = 3;
  }
  else {
    lStack_180 = 4;
    if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
      lStack_180 = 5;
    }
  }
  lVar16 = lVar9;
  _swift_getAssociatedConformanceWitness(lVar9,param_3,lVar4,&UNK_008441f0,&UNK_008441f8);
  lVar8 = lVar4;
  puStack_178 = param_1;
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    _swift_retain(param_1);
    __ss17_NativeDictionaryVyAByxq_Gs05__RawB7StorageCncfC();
    __ss17_NativeDictionaryV12makeIteratorAB0D0Vyxq__GyF(auStack_b8);
    puVar7 = auStack_b8;
    __sSD8IteratorV7_nativeAByxq__Gs17_NativeDictionaryVAAVyxq__Gn_tcfC
              (&lStack_90,puVar7,lVar4,param_4,lVar16);
  }
  else {
    FUN_00105a7c(param_1,lVar4,param_4,lVar16);
    puVar7 = param_1;
    __ss17__CocoaDictionaryV12makeIteratorAB0D0CyF();
    _swift_unknownObjectRetain(param_1);
    __sSD8IteratorV6_cocoaAByxq__Gs17__CocoaDictionaryVAACn_tcfC
              (&lStack_90,puVar7,lVar4,param_4,lVar16);
  }
  lStack_170 = lStack_80;
  uVar18 = lStack_80 + 0x40U >> 6;
  uVar17 = uStack_70;
  lVar16 = lStack_78;
  do {
    lVar23 = lVar16;
    if (lStack_90 < 0) {
      __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
      uStack_c8 = uVar17;
      if (puVar7 == (undefined1 *)0x0) {
LAB_000d9ea8:
        uVar10 = 1;
      }
      else {
        __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF(lVar15);
        _swift_unknownObjectRelease(puVar7);
        __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF
                  (lVar15 + *(int *)(lVar5 + 0x30),lVar8,param_4,param_4);
        _swift_unknownObjectRelease(lVar8);
        uVar10 = 0;
      }
    }
    else {
      uVar14 = uVar17;
      if (uVar17 == 0) {
        uVar22 = uVar18;
        if ((long)uVar18 <= lVar16 + 1) {
          uVar22 = lVar16 + 1;
        }
        lVar8 = lVar16;
        do {
          lVar23 = lVar8 + 1;
          if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0xda1a0);
            (*pcVar3)();
          }
          if ((long)uVar18 <= lVar23) {
            uStack_c8 = 0;
            lVar23 = uVar22 - 1;
            goto LAB_000d9ea8;
          }
          uVar14 = *(ulong *)(lStack_88 + lVar23 * 8);
          lVar8 = lVar8 + 1;
        } while (uVar14 == 0);
      }
      uVar22 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
      uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar22 = LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) | lVar23 << 6;
      lVar8 = lVar9;
      _swift_getAssociatedConformanceWitness(lVar9,param_3,lVar4,&UNK_008441f0,&UNK_008441f8);
      lVar19 = lStack_90;
      __ss17_NativeDictionaryV5_keysSpyxGvg(lStack_90,lVar4,param_4,lVar8);
      (**(code **)(lVar11 + 0x10))(lVar15,lVar19 + *(long *)(lVar11 + 0x48) * uVar22,lVar4);
      FUN_000f880c(lStack_90,lVar4,param_4,lVar8);
      iVar1 = *(int *)(lVar5 + 0x30);
      lVar19 = lStack_90;
      __ss17_NativeDictionaryV7_valuesSpyq_Gvg(lStack_90,lVar4,param_4,lVar8);
      (**(code **)(lVar21 + 0x10))
                (lVar15 + iVar1,lVar19 + *(long *)(lVar21 + 0x48) * uVar22,param_4);
      FUN_000f880c(lStack_90,lVar4,param_4,lVar8);
      uVar10 = 0;
      uStack_c8 = uVar14 - 1 & uVar14;
    }
    lVar19 = *(long *)(lVar5 + -8);
    (**(code **)(lVar19 + 0x38))(lVar15,uVar10,1,lVar5);
    (**(code **)(lVar12 + 0x20))(lVar13,lVar15,lVar6);
    lVar8 = lVar13;
    (**(code **)(lVar19 + 0x30))(lVar13,1,lVar5);
    if ((int)lVar8 == 1) {
      func_0x000daf4c(lStack_90,lStack_88,lStack_170,lVar16,uVar17);
      _swift_getAssociatedConformanceWitness(lVar9,param_3,lVar4,&UNK_008441f0,&UNK_008441f8);
      puVar24 = puStack_178;
      __sSD5countSivg(puStack_178,lVar4,param_4,lVar9);
      lVar4 = (long)puVar24 * lStack_180;
      if (SUB168(SEXT816((long)puVar24) * SEXT816(lStack_180),8) != lVar4 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xda1ac);
        (*pcVar3)();
      }
      if (!SCARRY8(*unaff_x20,lVar4)) {
        *unaff_x20 = *unaff_x20 + lVar4;
        return;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xda1b0);
      (*pcVar3)();
    }
    iVar1 = *(int *)(lVar5 + 0x30);
    (**(code **)(lVar11 + 0x20))(puVar24,lVar13,lVar4);
    (**(code **)(lVar21 + 0x20))(lVar20,lVar13 + iVar1,param_4);
    uStack_58 = 0;
    (**(code **)(lVar9 + 0x30))(puVar24,1,&uStack_58,&UNK_009ab410,&PTR_DAT_009ab428,param_3);
    if (unaff_x21 != 0) {
      func_0x000daf4c(lStack_90,lStack_88,lStack_170,lVar16,uVar17);
      (**(code **)(lVar21 + 8))(lVar20,param_4);
      (**(code **)(lVar11 + 8))(puVar24,lVar4);
      return;
    }
    FUN_000d8a50(lVar20,2,param_4,param_6);
    (**(code **)(lVar21 + 8))(lVar20,param_4);
    puVar7 = puVar24;
    lVar8 = lVar4;
    (**(code **)(lVar11 + 8))();
    if (uStack_58 < 0x80) {
      lVar16 = 1;
    }
    else if ((long)uStack_58 < 0) {
      lVar16 = 10;
    }
    else if (uStack_58 >> 0x23 == 0) {
      if (uStack_58 < 0x200000) {
        lVar16 = 2;
        if (uStack_58 < 0x4000) goto LAB_000da068;
      }
      else {
        lVar16 = 4;
        uVar17 = uStack_58 >> 0x1c;
joined_r0x000da060:
        if (uVar17 == 0) goto LAB_000da068;
      }
LAB_000da064:
      lVar16 = lVar16 + 1;
    }
    else {
      if (uStack_58 >> 0x31 != 0) {
        lVar16 = 8;
        uVar17 = uStack_58 >> 0x38;
        goto joined_r0x000da060;
      }
      lVar16 = 6;
      if (uStack_58 >> 0x2a != 0) goto LAB_000da064;
    }
LAB_000da068:
    if (SCARRY8(lVar16,uStack_58)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xda1a4);
      (*pcVar3)();
    }
    if (SCARRY8(*unaff_x20,lVar16 + uStack_58)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xda1a8);
      (*pcVar3)();
    }
    *unaff_x20 = *unaff_x20 + lVar16 + uStack_58;
    uVar17 = uStack_c8;
    lVar16 = lVar23;
  } while( true );
}



/* Entry: 000da1b0; end: 000da993;  */

void FUN_000da1b0(undefined1 *param_1,uint param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long extraout_x8;
  long lVar14;
  long extraout_x8_00;
  undefined1 *puVar15;
  long lVar16;
  long extraout_x8_01;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long extraout_x12;
  long *unaff_x20;
  long lVar21;
  long unaff_x21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined1 auStack_1a0 [8];
  long lStack_198;
  undefined1 *puStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_118;
  ulong uStack_110;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [48];
  ulong uStack_58;
  
  lVar13 = *(long *)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar13 + 0x40));
  puVar10 = auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(param_5 + 8);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = puVar10 + -extraout_x8_00;
  lVar5 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,lVar4,param_4,"key value ",0);
  lVar6 = 0;
  __sSqMa(0,lVar5);
  lVar16 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar16 + 0x40));
  lVar23 = (long)puVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar18 = lVar23 - extraout_x12;
  uVar2 = param_2 << 3;
  if (uVar2 < 0x80) {
    lStack_198 = 1;
  }
  else if (uVar2 < 0x4000) {
    lStack_198 = 2;
  }
  else if (uVar2 < 0x200000) {
    lStack_198 = 3;
  }
  else {
    lStack_198 = 4;
    if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
      lStack_198 = 5;
    }
  }
  lVar7 = lVar11;
  _swift_getAssociatedConformanceWitness(lVar11,param_3,lVar4,&UNK_008441f0,&UNK_008441f8);
  lVar9 = lVar4;
  puStack_190 = param_1;
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    _swift_retain(param_1);
    __ss17_NativeDictionaryVyAByxq_Gs05__RawB7StorageCncfC();
    __ss17_NativeDictionaryV12makeIteratorAB0D0Vyxq__GyF(auStack_e0);
    lVar21 = -0xa8;
    puVar8 = auStack_e0;
    __sSD8IteratorV7_nativeAByxq__Gs17_NativeDictionaryVAAVyxq__Gn_tcfC
              (auStack_b8,puVar8,lVar4,param_4,lVar7);
  }
  else {
    FUN_00105a7c(param_1,lVar4,param_4,lVar7);
    puVar8 = param_1;
    __ss17__CocoaDictionaryV12makeIteratorAB0D0CyF();
    _swift_unknownObjectRetain(param_1);
    lVar21 = -0x80;
    __sSD8IteratorV6_cocoaAByxq__Gs17__CocoaDictionaryVAACn_tcfC
              (auStack_90,puVar8,lVar4,param_4,lVar7);
  }
  lStack_188 = *(long *)(&stack0x00000000 + lVar21);
  lVar7 = *(long *)(&stack0xfffffffffffffff0 + lVar21);
  lStack_180 = *(long *)(&stack0xfffffffffffffff8 + lVar21);
  uVar24 = lStack_188 + 0x40U >> 6;
  lVar20 = *(long *)(&stack0x00000008 + lVar21);
  uVar19 = *(ulong *)(&stack0x00000010 + lVar21);
  do {
    lStack_118 = lVar20;
    if (lVar7 < 0) {
      __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
      uStack_110 = uVar19;
      if (puVar8 == (undefined1 *)0x0) {
LAB_000da67c:
        uVar12 = 1;
      }
      else {
        __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF(lVar23);
        _swift_unknownObjectRelease(puVar8);
        __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF
                  (lVar23 + *(int *)(lVar5 + 0x30),lVar9,param_4,param_4);
        _swift_unknownObjectRelease(lVar9);
        uVar12 = 0;
      }
    }
    else {
      uVar17 = uVar19;
      if (uVar19 == 0) {
        uVar22 = uVar24;
        if ((long)uVar24 <= lVar20 + 1) {
          uVar22 = lVar20 + 1;
        }
        lVar9 = lVar20;
        do {
          lStack_118 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0xda984);
            (*pcVar3)();
          }
          if ((long)uVar24 <= lStack_118) {
            uStack_110 = 0;
            lStack_118 = uVar22 - 1;
            goto LAB_000da67c;
          }
          uVar17 = *(ulong *)(lStack_180 + lStack_118 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar17 == 0);
      }
      uVar22 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
      uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar22 = LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) | lStack_118 << 6;
      lVar9 = lVar11;
      _swift_getAssociatedConformanceWitness(lVar11,param_3,lVar4,&UNK_008441f0,&UNK_008441f8);
      lVar21 = lVar7;
      __ss17_NativeDictionaryV5_keysSpyxGvg(lVar7,lVar4,param_4,lVar9);
      (**(code **)(lVar14 + 0x10))(lVar23,lVar21 + *(long *)(lVar14 + 0x48) * uVar22,lVar4);
      FUN_000f880c(lVar7,lVar4,param_4,lVar9);
      iVar1 = *(int *)(lVar5 + 0x30);
      lVar21 = lVar7;
      __ss17_NativeDictionaryV7_valuesSpyq_Gvg(lVar7,lVar4,param_4,lVar9);
      (**(code **)(lVar13 + 0x10))
                (lVar23 + iVar1,lVar21 + *(long *)(lVar13 + 0x48) * uVar22,param_4);
      FUN_000f880c(lVar7,lVar4,param_4,lVar9);
      uVar12 = 0;
      uStack_110 = uVar17 - 1 & uVar17;
    }
    lVar21 = *(long *)(lVar5 + -8);
    (**(code **)(lVar21 + 0x38))(lVar23,uVar12,1,lVar5);
    (**(code **)(lVar16 + 0x20))(lVar18,lVar23,lVar6);
    lVar9 = lVar18;
    (**(code **)(lVar21 + 0x30))(lVar18,1,lVar5);
    if ((int)lVar9 == 1) {
      func_0x000daf4c(lVar7,lStack_180,lStack_188,lVar20,uVar19);
      _swift_getAssociatedConformanceWitness(lVar11,param_3,lVar4,&UNK_008441f0,&UNK_008441f8);
      puVar10 = puStack_190;
      __sSD5countSivg(puStack_190,lVar4,param_4,lVar11);
      lVar4 = (long)puVar10 * lStack_198;
      if (SUB168(SEXT816((long)puVar10) * SEXT816(lStack_198),8) != lVar4 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xda990);
        (*pcVar3)();
      }
      if (!SCARRY8(*unaff_x20,lVar4)) {
        *unaff_x20 = *unaff_x20 + lVar4;
        return;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xda994);
      (*pcVar3)();
    }
    iVar1 = *(int *)(lVar5 + 0x30);
    (**(code **)(lVar14 + 0x20))(puVar15,lVar18,lVar4);
    (**(code **)(lVar13 + 0x20))(puVar10,lVar18 + iVar1,param_4);
    uStack_58 = 0;
    (**(code **)(lVar11 + 0x30))(puVar15,1,&uStack_58,&UNK_009ab410,&PTR_DAT_009ab428,param_3);
    if (unaff_x21 != 0) {
      func_0x000daf4c(lVar7,lStack_180,lStack_188,lVar20,uVar19);
      (**(code **)(lVar13 + 8))(puVar10,param_4);
      (**(code **)(lVar14 + 8))(puVar15,lVar4);
      return;
    }
    FUN_000d8d14(puVar10,2,param_4,param_7);
    (**(code **)(lVar13 + 8))(puVar10,param_4);
    puVar8 = puVar15;
    lVar9 = lVar4;
    (**(code **)(lVar14 + 8))();
    if (uStack_58 < 0x80) {
      lVar21 = 1;
    }
    else if ((long)uStack_58 < 0) {
      lVar21 = 10;
    }
    else {
      if (uStack_58 >> 0x23 == 0) {
        if (0x1fffff < uStack_58) {
          lVar21 = 4;
          uVar19 = uStack_58 >> 0x1c;
          goto joined_r0x000da860;
        }
        lVar21 = 2;
        if (uStack_58 < 0x4000) goto LAB_000da800;
      }
      else {
        if (uStack_58 >> 0x31 == 0) {
          uVar19 = uStack_58 >> 0x2a;
          lVar21 = 6;
        }
        else {
          lVar21 = 8;
          uVar19 = uStack_58 >> 0x38;
        }
joined_r0x000da860:
        if (uVar19 == 0) goto LAB_000da800;
      }
      lVar21 = lVar21 + 1;
    }
LAB_000da800:
    if (SCARRY8(lVar21,uStack_58)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xda988);
      (*pcVar3)();
    }
    if (SCARRY8(*unaff_x20,lVar21 + uStack_58)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xda98c);
      (*pcVar3)();
    }
    *unaff_x20 = *unaff_x20 + lVar21 + uStack_58;
    lVar20 = lStack_118;
    uVar19 = uStack_110;
  } while( true );
}



/* Entry: 000da994; end: 000dad0b;  */

void FUN_000da994(void)

{
  func_0x000daea4();
  return;
}



/* Entry: 000dad0c; end: 000dad6f;  */

void FUN_000dad0c(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *unaff_x20;
  
  iVar3 = (int)((ulong)param_1 >> 0x20);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar4 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar4 == 0) {
      uVar5 = param_2 >> 0x30 & 0xff;
    }
    else {
      if (SBORROW4(iVar3,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xdad70);
        (*pcVar2)();
      }
      uVar5 = (ulong)(iVar3 - (int)param_1);
    }
  }
  else if (uVar4 == 2) {
    uVar5 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xdad3c);
      (*pcVar2)();
    }
  }
  else {
    uVar5 = 0;
  }
  if (!SCARRY8(*unaff_x20,uVar5)) {
    *unaff_x20 = *unaff_x20 + uVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0xdad6c);
  (*pcVar2)();
}



/* Entry: 000dad70; end: 000dae3b;  */

void FUN_000dad70(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  
  if (param_2 < -0x80000000) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xdae24);
    (*pcVar2)();
  }
  if (0x7fffffff < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xdae28);
    (*pcVar2)();
  }
  func_0x0013b028();
  if (SCARRY8(param_2,4)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xdae2c);
    (*pcVar2)();
  }
  FUN_0010baa4(param_3,param_4);
  if (unaff_x21 == 0) {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xdae30);
      (*pcVar2)();
    }
    lVar3 = param_3;
    func_0x0013b07c();
    if (SCARRY8(lVar3,param_3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xdae34);
      (*pcVar2)();
    }
    lVar1 = param_2 + 4 + lVar3 + param_3;
    if (SCARRY8(param_2 + 4,lVar3 + param_3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xdae38);
      (*pcVar2)();
    }
    if (SCARRY8(*unaff_x20,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xdae3c);
      (*pcVar2)();
    }
    *unaff_x20 = *unaff_x20 + lVar1;
  }
  return;
}



/* Entry: 000dae3c; end: 000dae4f;  */

void FUN_000dae3c(void)

{
  FUN_000dad70();
  return;
}



/* Entry: 000dae50; end: 000daf53;  */

void FUN_000dae50(uint param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *unaff_x20;
  
  lVar1 = 5;
  if ((param_1 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 6;
  }
  lVar2 = 4;
  if (0x1fffff < param_1 << 3) {
    lVar2 = lVar1;
  }
  if ((param_1 & 0x1fffffff) >> 0xb == 0) {
    lVar2 = 3;
  }
  lVar1 = 2;
  if (0x7f < param_1 << 3) {
    lVar1 = lVar2;
  }
  if (!SCARRY8(*unaff_x20,lVar1)) {
    *unaff_x20 = *unaff_x20 + lVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0xdaea4);
  (*pcVar3)();
}



/* Entry: 000daf54; end: 000daf7f;  */

void FUN_000daf54(void)

{
  FUN_000daf80();
  return;
}



/* Entry: 000daf80; end: 000dafdb;  */

void FUN_000daf80(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *param_2;
  (**(code **)(*(long *)(unaff_x20 + 0x18) + 0x28))(lVar2,*(long *)(unaff_x20 + 0x18));
  func_0x0013b028();
  if (!SCARRY8(lVar3,lVar2)) {
    *param_1 = lVar3 + lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xdafdc);
  (*pcVar1)();
}



/* Entry: 000dafdc; end: 000dafeb;  */

undefined1  [16] FUN_000dafdc(void)

{
  return ZEXT816(0x9ab600);
}



/* Entry: 000dafec; end: 000db1b7;  */

void FUN_000dafec(void)

{
  func_0x000da9d4();
  return;
}



/* Entry: 000db1b8; end: 000db1c7;  */

undefined1  [16] FUN_000db1b8(void)

{
  return ZEXT816(0x9ab868);
}



/* Entry: 000db1c8; end: 000db3ef;  */

void FUN_000db1c8(long param_1,ulong param_2,undefined1 *param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  long unaff_x20;
  long lVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
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
  puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
  func_0x000d6c50(param_3,2);
  uVar2 = (uint)(param_2 >> 0x20);
  uVar6 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar6 == 0) {
      puVar10 = (undefined1 *)(param_2 >> 0x30 & 0xff);
      func_0x000d6c94(puVar10);
      uStack_66 = (undefined1)param_1;
      uStack_65 = (undefined1)((ulong)param_1 >> 8);
      uStack_64 = (undefined1)((ulong)param_1 >> 0x10);
      uStack_63 = (undefined1)((ulong)param_1 >> 0x18);
      uStack_62 = (undefined1)((ulong)param_1 >> 0x20);
      uStack_61 = (undefined1)((ulong)param_1 >> 0x28);
      uStack_60 = (undefined1)((ulong)param_1 >> 0x30);
      uStack_5f = (undefined1)((ulong)param_1 >> 0x38);
      uStack_5e = (undefined1)param_2;
      uStack_5d = (undefined1)(param_2 >> 8);
      uStack_5c = (undefined1)(param_2 >> 0x10);
      uStack_5b = (undefined1)(param_2 >> 0x18);
      uStack_5a = (undefined1)(param_2 >> 0x20);
      uStack_59 = (undefined1)(param_2 >> 0x28);
      if (puVar10 != (undefined1 *)0x0) {
        lVar8 = *(long *)(unaff_x20 + 8);
        puVar5 = &uStack_66;
        param_3 = puVar10;
        _memcpy(lVar8,puVar5,puVar10);
        *(undefined1 **)(unaff_x20 + 8) = puVar10 + lVar8;
      }
      goto LAB_000db3a0;
    }
    iVar9 = (int)param_1;
    iVar7 = (int)((ulong)param_1 >> 0x20);
    if (SBORROW4(iVar7,iVar9)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xdb3e0);
      (*pcVar3)();
    }
    puVar10 = (undefined1 *)(long)(iVar7 - iVar9);
    func_0x000d6c94();
    lVar8 = (long)iVar9;
    puVar11 = (undefined1 *)((param_1 >> 0x20) - lVar8);
    if (param_1 >> 0x20 < lVar8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xdb3e4);
      (*pcVar3)();
    }
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    puVar4 = puVar10;
    if (puVar10 != (undefined1 *)0x0) {
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar8,(long)puVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xdb3ec);
        (*pcVar3)();
      }
      puVar10 = puVar10 + (lVar8 - (long)puVar4);
    }
  }
  else {
    if (uVar6 != 2) {
      func_0x000d6c94(0);
      goto LAB_000db3a0;
    }
    puVar10 = (undefined1 *)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xdb3dc);
      (*pcVar3)();
    }
    func_0x000d6c94();
    lVar8 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    puVar4 = puVar10;
    if (puVar10 != (undefined1 *)0x0) {
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar8,(long)puVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xdb3e8);
        (*pcVar3)();
      }
      puVar10 = puVar10 + (lVar8 - (long)puVar4);
    }
    puVar11 = (undefined1 *)(lVar1 - lVar8);
    if (SBORROW8(lVar1,lVar8)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xdb310);
      (*pcVar3)();
    }
  }
  __s10Foundation13__DataStorageC7_lengthSivg();
  if ((long)puVar11 <= (long)puVar4) {
    puVar4 = puVar11;
  }
  if ((puVar10 != (undefined1 *)0x0) && (puVar4 != (undefined1 *)0x0)) {
    lVar8 = *(long *)(unaff_x20 + 8);
    param_3 = puVar4;
    _memmove(lVar8,puVar10,puVar4);
    *(undefined1 **)(unaff_x20 + 8) = puVar4 + lVar8;
    puVar5 = puVar10;
  }
LAB_000db3a0:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  (**(code **)(param_4 + 0x28))(param_3,param_4);
  func_0x000d6c50(puVar5,0);
  func_0x000d6f74(param_3);
  return;
}



/* Entry: 000db3f0; end: 000db45b;  */

void FUN_000db3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x28))(param_3,param_4);
  func_0x000d6c50(param_2,0);
  func_0x000d6f74(param_3);
  return;
}



/* Entry: 000db45c; end: 000db4f7;  */

void FUN_000db45c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  
  func_0x000d6c50(param_2,2);
  FUN_0010baa4(param_3,param_4);
  if (unaff_x21 == 0) {
    func_0x000d6c94();
    (**(code **)(param_4 + 0x48))();
  }
  return;
}



/* Entry: 000db4f8; end: 000db597;  */

void FUN_000db4f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  
  func_0x000d6c50(param_2,3);
  (**(code **)(param_4 + 0x48))();
  if (unaff_x21 == 0) {
    func_0x000d6c50(param_2,4);
  }
  return;
}



/* Entry: 000db598; end: 000db67b;  */

void FUN_000db598(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  func_0x000d6c50(param_2,2);
  uVar10 = *(ulong *)(param_1 + 0x10);
  if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xdb67c);
    (*pcVar1)();
  }
  func_0x000d6c94(uVar10 << 2);
  if (uVar10 == 0) {
    return;
  }
  puVar5 = *(undefined4 **)(unaff_x20 + 8);
  if ((uVar10 < 8) || ((ulong)((long)puVar5 + (-0x20 - param_1)) < 0x20)) {
    uVar3 = 0;
    puVar2 = puVar5;
  }
  else {
    uVar3 = uVar10 & 0x1ffffffffffffff8;
    puVar2 = puVar5 + uVar3;
    puVar7 = (undefined8 *)(puVar5 + 4);
    puVar8 = (undefined8 *)(param_1 + 0x30);
    uVar9 = uVar3;
    do {
      uVar11 = puVar8[-2];
      uVar13 = puVar8[1];
      uVar12 = *puVar8;
      puVar7[-1] = puVar8[-1];
      puVar7[-2] = uVar11;
      puVar7[1] = uVar13;
      *puVar7 = uVar12;
      puVar7 = puVar7 + 4;
      puVar8 = puVar8 + 4;
      uVar9 = uVar9 - 8;
    } while (uVar9 != 0);
    if (uVar10 == uVar3) goto LAB_000db624;
  }
  lVar6 = uVar10 - uVar3;
  puVar5 = puVar2;
  puVar4 = (undefined4 *)(param_1 + uVar3 * 4 + 0x20);
  do {
    puVar2 = puVar5 + 1;
    *puVar5 = *puVar4;
    lVar6 = lVar6 + -1;
    puVar5 = puVar2;
    puVar4 = puVar4 + 1;
  } while (lVar6 != 0);
LAB_000db624:
  *(undefined4 **)(unaff_x20 + 8) = puVar2;
  return;
}



/* Entry: 000db67c; end: 000db75f;  */

void FUN_000db67c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  func_0x000d6c50(param_2,2);
  uVar8 = *(ulong *)(param_1 + 0x10);
  if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xdb760);
    (*pcVar1)();
  }
  func_0x000d6c94(uVar8 << 3);
  if (uVar8 == 0) {
    return;
  }
  puVar5 = *(undefined8 **)(unaff_x20 + 8);
  if ((uVar8 < 6) || ((ulong)((long)puVar5 + (-0x20 - param_1)) < 0x20)) {
    uVar3 = 0;
    puVar2 = puVar5;
  }
  else {
    uVar3 = uVar8 & 0xffffffffffffffc;
    puVar2 = puVar5 + uVar3;
    puVar5 = puVar5 + 2;
    puVar4 = (undefined8 *)(param_1 + 0x30);
    uVar7 = uVar3;
    do {
      uVar9 = puVar4[-2];
      uVar11 = puVar4[1];
      uVar10 = *puVar4;
      puVar5[-1] = puVar4[-1];
      puVar5[-2] = uVar9;
      puVar5[1] = uVar11;
      *puVar5 = uVar10;
      puVar5 = puVar5 + 4;
      puVar4 = puVar4 + 4;
      uVar7 = uVar7 - 4;
    } while (uVar7 != 0);
    if (uVar8 == uVar3) goto LAB_000db708;
  }
  lVar6 = uVar8 - uVar3;
  puVar5 = puVar2;
  puVar4 = (undefined8 *)(param_1 + uVar3 * 8 + 0x20);
  do {
    puVar2 = puVar5 + 1;
    *puVar5 = *puVar4;
    lVar6 = lVar6 + -1;
    puVar5 = puVar2;
    puVar4 = puVar4 + 1;
  } while (lVar6 != 0);
LAB_000db708:
  *(undefined8 **)(unaff_x20 + 8) = puVar2;
  return;
}



/* Entry: 000db760; end: 000db883;  */

void FUN_000db760(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  
  func_0x000d6c50(param_2,2);
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    func_0x000d6c94(0);
  }
  else {
    lVar6 = 0;
    lVar5 = 0;
    do {
      uVar2 = *(uint *)(param_1 + 0x20 + lVar6 * 4);
      if ((int)uVar2 < 0) {
        lVar11 = 10;
      }
      else if (uVar2 < 0x80) {
        lVar11 = 1;
      }
      else if (uVar2 >> 0xe == 0) {
        lVar11 = 2;
      }
      else {
        lVar1 = 4;
        if (uVar2 >> 0x1c != 0) {
          lVar1 = 5;
        }
        lVar11 = 3;
        if (0x1fffff < uVar2) {
          lVar11 = lVar1;
        }
      }
      bVar4 = SCARRY8(lVar5,lVar11);
      lVar5 = lVar5 + lVar11;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xdb884);
        (*pcVar3)();
      }
      lVar6 = lVar6 + 1;
    } while (lVar13 != lVar6);
    func_0x000d6c94();
    lVar6 = 0;
    pbVar8 = *(byte **)(unaff_x20 + 8);
    do {
      uVar2 = *(uint *)(param_1 + 0x20 + lVar6 * 4);
      uVar9 = (ulong)(int)uVar2;
      pbVar7 = pbVar8;
      uVar10 = uVar9;
      if (0x7f < uVar2) {
        do {
          pbVar8 = pbVar7 + 1;
          *pbVar7 = (byte)uVar10 | 0x80;
          uVar9 = uVar10 >> 7;
          uVar12 = uVar10 >> 0xe;
          pbVar7 = pbVar8;
          uVar10 = uVar9;
        } while (uVar12 != 0);
      }
      lVar6 = lVar6 + 1;
      pbVar7 = pbVar8 + 1;
      *pbVar8 = (byte)uVar9;
      pbVar8 = pbVar7;
    } while (lVar6 != lVar13);
    *(byte **)(unaff_x20 + 8) = pbVar7;
  }
  return;
}



/* Entry: 000db884; end: 000db9af;  */

void FUN_000db884(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  
  func_0x000d6c50(param_2,2);
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    func_0x000d6c94(0);
  }
  else {
    lVar6 = 0;
    lVar5 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x20 + lVar6 * 4);
      uVar1 = iVar2 << 1 ^ iVar2 >> 0x1f;
      if (uVar1 < 0x80) {
        lVar9 = 1;
      }
      else if (uVar1 >> 0xe == 0) {
        lVar9 = 2;
      }
      else if (uVar1 < 0x200000) {
        lVar9 = 3;
      }
      else {
        lVar9 = 4;
        if (uVar1 >> 0x1c != 0) {
          lVar9 = 5;
        }
      }
      bVar4 = SCARRY8(lVar5,lVar9);
      lVar5 = lVar5 + lVar9;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xdb9b0);
        (*pcVar3)();
      }
      lVar6 = lVar6 + 1;
    } while (lVar13 != lVar6);
    func_0x000d6c94();
    lVar6 = 0;
    pbVar8 = *(byte **)(unaff_x20 + 8);
    do {
      lVar5 = (long)*(int *)(param_1 + 0x20 + lVar6 * 4);
      uVar10 = lVar5 << 1 ^ lVar5 >> 0x3f;
      pbVar7 = pbVar8;
      uVar11 = uVar10;
      if (0x7f < uVar10) {
        do {
          pbVar8 = pbVar7 + 1;
          *pbVar7 = (byte)uVar11 | 0x80;
          uVar10 = uVar11 >> 7;
          uVar12 = uVar11 >> 0xe;
          pbVar7 = pbVar8;
          uVar11 = uVar10;
        } while (uVar12 != 0);
      }
      lVar6 = lVar6 + 1;
      pbVar7 = pbVar8 + 1;
      *pbVar8 = (byte)uVar10;
      pbVar8 = pbVar7;
    } while (lVar6 != lVar13);
    *(byte **)(unaff_x20 + 8) = pbVar7;
  }
  return;
}



/* Entry: 000db9b0; end: 000dbb13;  */

void FUN_000db9b0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  
  func_0x000d6c50(param_2,2);
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == 0) {
    func_0x000d6c94(0);
  }
  else {
    lVar4 = 0;
    lVar3 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x20 + lVar4 * 8);
      uVar8 = lVar7 << 1 ^ lVar7 >> 0x3f;
      if (uVar8 < 0x80) {
        lVar7 = 1;
      }
      else if ((long)uVar8 < 0) {
        lVar7 = 10;
      }
      else if (uVar8 >> 0x23 == 0) {
        if (uVar8 < 0x200000) {
          lVar7 = 2;
          if (uVar8 < 0x4000) goto LAB_000dba78;
        }
        else {
          lVar7 = 4;
          uVar8 = uVar8 >> 0x1c;
joined_r0x000dba70:
          if (uVar8 == 0) goto LAB_000dba78;
        }
LAB_000dba74:
        lVar7 = lVar7 + 1;
      }
      else {
        if (uVar8 >> 0x31 != 0) {
          lVar7 = 8;
          uVar8 = uVar8 >> 0x38;
          goto joined_r0x000dba70;
        }
        lVar7 = 6;
        if (uVar8 >> 0x2a != 0) goto LAB_000dba74;
      }
LAB_000dba78:
      bVar2 = SCARRY8(lVar3,lVar7);
      lVar3 = lVar3 + lVar7;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0xdbb14);
        (*pcVar1)();
      }
      lVar4 = lVar4 + 1;
    } while (lVar11 != lVar4);
    func_0x000d6c94();
    lVar4 = 0;
    pbVar6 = *(byte **)(unaff_x20 + 8);
    do {
      lVar3 = *(long *)(param_1 + 0x20 + lVar4 * 8);
      uVar9 = lVar3 << 1 ^ lVar3 >> 0x3f;
      pbVar5 = pbVar6;
      uVar8 = uVar9;
      if (0x7f < uVar9) {
        do {
          pbVar6 = pbVar5 + 1;
          *pbVar5 = (byte)uVar8 | 0x80;
          uVar9 = uVar8 >> 7;
          uVar10 = uVar8 >> 0xe;
          pbVar5 = pbVar6;
          uVar8 = uVar9;
        } while (uVar10 != 0);
      }
      lVar4 = lVar4 + 1;
      pbVar5 = pbVar6 + 1;
      *pbVar6 = (byte)uVar9;
      pbVar6 = pbVar5;
    } while (lVar4 != lVar11);
    *(byte **)(unaff_x20 + 8) = pbVar5;
  }
  return;
}



/* Entry: 000dbb14; end: 000dbc2b;  */

void FUN_000dbb14(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  
  func_0x000d6c50(param_2,2);
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    func_0x000d6c94(0);
  }
  else {
    lVar6 = 0;
    lVar5 = 0;
    do {
      uVar2 = *(uint *)(param_1 + 0x20 + lVar6 * 4);
      if (uVar2 < 0x80) {
        lVar11 = 1;
      }
      else if (uVar2 >> 0xe == 0) {
        lVar11 = 2;
      }
      else {
        lVar1 = 4;
        if (uVar2 >> 0x1c != 0) {
          lVar1 = 5;
        }
        lVar11 = 3;
        if (0x1fffff < uVar2) {
          lVar11 = lVar1;
        }
      }
      bVar4 = SCARRY8(lVar5,lVar11);
      lVar5 = lVar5 + lVar11;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xdbc2c);
        (*pcVar3)();
      }
      lVar6 = lVar6 + 1;
    } while (lVar13 != lVar6);
    func_0x000d6c94();
    lVar6 = 0;
    pbVar8 = *(byte **)(unaff_x20 + 8);
    do {
      uVar2 = *(uint *)(param_1 + 0x20 + lVar6 * 4);
      uVar9 = (ulong)uVar2;
      pbVar7 = pbVar8;
      uVar10 = uVar9;
      if (0x7f < uVar2) {
        do {
          pbVar8 = pbVar7 + 1;
          *pbVar7 = (byte)uVar10 | 0x80;
          uVar9 = uVar10 >> 7;
          uVar12 = uVar10 >> 0xe;
          pbVar7 = pbVar8;
          uVar10 = uVar9;
        } while (uVar12 != 0);
      }
      lVar6 = lVar6 + 1;
      pbVar7 = pbVar8 + 1;
      *pbVar8 = (byte)uVar9;
      pbVar8 = pbVar7;
    } while (lVar6 != lVar13);
    *(byte **)(unaff_x20 + 8) = pbVar7;
  }
  return;
}



/* Entry: 000dbc2c; end: 000dbd7f;  */

void FUN_000dbc2c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  
  func_0x000d6c50(param_2,2);
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == 0) {
    func_0x000d6c94(0);
  }
  else {
    lVar4 = 0;
    lVar3 = 0;
    do {
      uVar7 = *(ulong *)(param_1 + 0x20 + lVar4 * 8);
      if (uVar7 < 0x80) {
        lVar8 = 1;
      }
      else if ((long)uVar7 < 0) {
        lVar8 = 10;
      }
      else if (uVar7 >> 0x23 == 0) {
        if (uVar7 < 0x200000) {
          lVar8 = 2;
          if (uVar7 < 0x4000) goto LAB_000dbcec;
        }
        else {
          lVar8 = 4;
          uVar7 = uVar7 >> 0x1c;
joined_r0x000dbce4:
          if (uVar7 == 0) goto LAB_000dbcec;
        }
LAB_000dbce8:
        lVar8 = lVar8 + 1;
      }
      else {
        if (uVar7 >> 0x31 != 0) {
          lVar8 = 8;
          uVar7 = uVar7 >> 0x38;
          goto joined_r0x000dbce4;
        }
        lVar8 = 6;
        if (uVar7 >> 0x2a != 0) goto LAB_000dbce8;
      }
LAB_000dbcec:
      bVar2 = SCARRY8(lVar3,lVar8);
      lVar3 = lVar3 + lVar8;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0xdbd80);
        (*pcVar1)();
      }
      lVar4 = lVar4 + 1;
    } while (lVar11 != lVar4);
    func_0x000d6c94();
    lVar4 = 0;
    pbVar6 = *(byte **)(unaff_x20 + 8);
    do {
      uVar9 = *(ulong *)(param_1 + 0x20 + lVar4 * 8);
      pbVar5 = pbVar6;
      uVar7 = uVar9;
      if (0x7f < uVar9) {
        do {
          pbVar6 = pbVar5 + 1;
          *pbVar5 = (byte)uVar7 | 0x80;
          uVar9 = uVar7 >> 7;
          uVar10 = uVar7 >> 0xe;
          pbVar5 = pbVar6;
          uVar7 = uVar9;
        } while (uVar10 != 0);
      }
      lVar4 = lVar4 + 1;
      pbVar5 = pbVar6 + 1;
      *pbVar6 = (byte)uVar9;
      pbVar6 = pbVar5;
    } while (lVar4 != lVar11);
    *(byte **)(unaff_x20 + 8) = pbVar5;
  }
  return;
}



/* Entry: 000dbd80; end: 000dbe63;  */

void FUN_000dbd80(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  func_0x000d6c50(param_2,2);
  uVar10 = *(ulong *)(param_1 + 0x10);
  if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xdbe64);
    (*pcVar1)();
  }
  func_0x000d6c94(uVar10 << 2);
  if (uVar10 == 0) {
    return;
  }
  puVar5 = *(undefined4 **)(unaff_x20 + 8);
  if ((uVar10 < 8) || ((ulong)((long)puVar5 + (-0x20 - param_1)) < 0x20)) {
    uVar3 = 0;
    puVar2 = puVar5;
  }
  else {
    uVar3 = uVar10 & 0x1ffffffffffffff8;
    puVar2 = puVar5 + uVar3;
    puVar7 = (undefined8 *)(puVar5 + 4);
    puVar8 = (undefined8 *)(param_1 + 0x30);
    uVar9 = uVar3;
    do {
      uVar11 = puVar8[-2];
      uVar13 = puVar8[1];
      uVar12 = *puVar8;
      puVar7[-1] = puVar8[-1];
      puVar7[-2] = uVar11;
      puVar7[1] = uVar13;
      *puVar7 = uVar12;
      puVar7 = puVar7 + 4;
      puVar8 = puVar8 + 4;
      uVar9 = uVar9 - 8;
    } while (uVar9 != 0);
    if (uVar10 == uVar3) goto LAB_000dbe0c;
  }
  lVar6 = uVar10 - uVar3;
  puVar5 = puVar2;
  puVar4 = (undefined4 *)(param_1 + uVar3 * 4 + 0x20);
  do {
    puVar2 = puVar5 + 1;
    *puVar5 = *puVar4;
    lVar6 = lVar6 + -1;
    puVar5 = puVar2;
    puVar4 = puVar4 + 1;
  } while (lVar6 != 0);
LAB_000dbe0c:
  *(undefined4 **)(unaff_x20 + 8) = puVar2;
  return;
}



/* Entry: 000dbe64; end: 000dbf47;  */

void FUN_000dbe64(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  func_0x000d6c50(param_2,2);
  uVar8 = *(ulong *)(param_1 + 0x10);
  if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xdbf48);
    (*pcVar1)();
  }
  func_0x000d6c94(uVar8 << 3);
  if (uVar8 == 0) {
    return;
  }
  puVar5 = *(undefined8 **)(unaff_x20 + 8);
  if ((uVar8 < 6) || ((ulong)((long)puVar5 + (-0x20 - param_1)) < 0x20)) {
    uVar3 = 0;
    puVar2 = puVar5;
  }
  else {
    uVar3 = uVar8 & 0xffffffffffffffc;
    puVar2 = puVar5 + uVar3;
    puVar5 = puVar5 + 2;
    puVar4 = (undefined8 *)(param_1 + 0x30);
    uVar7 = uVar3;
    do {
      uVar9 = puVar4[-2];
      uVar11 = puVar4[1];
      uVar10 = *puVar4;
      puVar5[-1] = puVar4[-1];
      puVar5[-2] = uVar9;
      puVar5[1] = uVar11;
      *puVar5 = uVar10;
      puVar5 = puVar5 + 4;
      puVar4 = puVar4 + 4;
      uVar7 = uVar7 - 4;
    } while (uVar7 != 0);
    if (uVar8 == uVar3) goto LAB_000dbef0;
  }
  lVar6 = uVar8 - uVar3;
  puVar5 = puVar2;
  puVar4 = (undefined8 *)(param_1 + uVar3 * 8 + 0x20);
  do {
    puVar2 = puVar5 + 1;
    *puVar5 = *puVar4;
    lVar6 = lVar6 + -1;
    puVar5 = puVar2;
    puVar4 = puVar4 + 1;
  } while (lVar6 != 0);
LAB_000dbef0:
  *(undefined8 **)(unaff_x20 + 8) = puVar2;
  return;
}



/* Entry: 000dbf48; end: 000dc447;  */

void FUN_000dbf48(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined7 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  long lVar19;
  ulong uVar20;
  undefined1 *puVar21;
  ulong uVar22;
  long unaff_x20;
  ulong uVar23;
  ulong uVar24;
  ulong uVar26;
  ulong uVar28;
  ulong uVar30;
  ulong uVar32;
  ulong uVar34;
  ulong uVar36;
  ulong uVar38;
  ulong uVar25;
  ulong uVar27;
  ulong uVar29;
  ulong uVar31;
  ulong uVar33;
  ulong uVar35;
  ulong uVar37;
  ulong uVar39;
  
  func_0x000d6c50(param_2,2);
  uVar23 = *(ulong *)(param_1 + 0x10);
  func_0x000d6c94(uVar23);
  if (uVar23 == 0) {
    return;
  }
  puVar18 = *(ulong **)(unaff_x20 + 8);
  if ((uVar23 < 0x80) || ((undefined1 *)((long)puVar18 + (-0x20 - param_1)) < (undefined1 *)0x80)) {
    uVar20 = 0;
    puVar17 = puVar18;
  }
  else {
    uVar20 = uVar23 & 0x7fffffffffffff80;
    puVar17 = (ulong *)((long)puVar18 + uVar20);
    puVar21 = (undefined1 *)(param_1 + 0x4f);
    uVar22 = uVar20;
    do {
      uVar9 = *(ulong *)(puVar21 + 0x41);
      uVar10 = *(ulong *)(puVar21 + 0x31);
      uVar11 = *(ulong *)(puVar21 + 0x21);
      puVar1 = (undefined8 *)(puVar21 + 0x49);
      uVar12 = *(ulong *)(puVar21 + 0x11);
      puVar2 = (undefined8 *)(puVar21 + 0x39);
      puVar3 = (undefined8 *)(puVar21 + 0x29);
      puVar4 = (undefined8 *)(puVar21 + 0x19);
      uVar13 = *(ulong *)(puVar21 + 1);
      puVar5 = (undefined8 *)(puVar21 + 9);
      uVar14 = *(ulong *)(puVar21 + -0xf);
      uVar15 = *(ulong *)(puVar21 + -0x1f);
      uVar8 = *(undefined7 *)(puVar21 + -7);
      puVar6 = (undefined8 *)(puVar21 + -0x17);
      uVar16 = *(ulong *)(puVar21 + -0x2f);
      puVar7 = (undefined8 *)(puVar21 + -0x27);
      uVar25 = CONCAT71((int7)((ulong)*puVar7 >> 8),(char)*(undefined6 *)puVar7) &
               0xffffffffffffff01;
      uVar24 = CONCAT62((int6)(uVar25 >> 0x10),
                        CONCAT11((char)((uint7)*(undefined7 *)puVar7 >> 8),(char)uVar25)) &
               0xffffffffffff01ff;
      uVar25 = CONCAT53((int5)(uVar24 >> 0x18),CONCAT12((char)(uVar25 >> 0x10),(short)uVar24)) &
               0xffffffffff01ffff;
      uVar24 = CONCAT44((int)(uVar25 >> 0x20),CONCAT13((char)(uVar24 >> 0x18),(int3)uVar25)) &
               0xffffffff01ffffff;
      uVar38 = CONCAT35((int3)(uVar24 >> 0x28),CONCAT14((char)(uVar25 >> 0x20),(int)uVar24)) &
               0xffffff01ffffffff;
      uVar39 = CONCAT26((short)(uVar38 >> 0x30),CONCAT15((char)(uVar24 >> 0x28),(int5)uVar38)) &
               0xffff01ffffffffff;
      uVar25 = CONCAT71((int7)((ulong)*puVar6 >> 8),(char)*(undefined6 *)puVar6) &
               0xffffffffffffff01;
      uVar24 = CONCAT62((int6)(uVar25 >> 0x10),
                        CONCAT11((char)((uint7)*(undefined7 *)puVar6 >> 8),(char)uVar25)) &
               0xffffffffffff01ff;
      uVar25 = CONCAT53((int5)(uVar24 >> 0x18),CONCAT12((char)(uVar25 >> 0x10),(short)uVar24)) &
               0xffffffffff01ffff;
      uVar24 = CONCAT44((int)(uVar25 >> 0x20),CONCAT13((char)(uVar24 >> 0x18),(int3)uVar25)) &
               0xffffffff01ffffff;
      uVar36 = CONCAT35((int3)(uVar24 >> 0x28),CONCAT14((char)(uVar25 >> 0x20),(int)uVar24)) &
               0xffffff01ffffffff;
      uVar37 = CONCAT26((short)(uVar36 >> 0x30),CONCAT15((char)(uVar24 >> 0x28),(int5)uVar36)) &
               0xffff01ffffffffff;
      uVar24 = CONCAT71((int7)(CONCAT17(*puVar21,uVar8) >> 8),(char)*(undefined6 *)(puVar21 + -7)) &
               0xffffffffffffff01;
      uVar25 = CONCAT62((int6)(uVar24 >> 0x10),CONCAT11((char)((uint7)uVar8 >> 8),(char)uVar24)) &
               0xffffffffffff01ff;
      uVar24 = CONCAT53((int5)(uVar25 >> 0x18),CONCAT12((char)(uVar24 >> 0x10),(short)uVar25)) &
               0xffffffffff01ffff;
      uVar25 = CONCAT44((int)(uVar24 >> 0x20),CONCAT13((char)(uVar25 >> 0x18),(int3)uVar24)) &
               0xffffffff01ffffff;
      uVar34 = CONCAT35((int3)(uVar25 >> 0x28),CONCAT14((char)(uVar24 >> 0x20),(int)uVar25)) &
               0xffffff01ffffffff;
      uVar35 = CONCAT26((short)(uVar34 >> 0x30),CONCAT15((char)(uVar25 >> 0x28),(int5)uVar34)) &
               0xffff01ffffffffff;
      uVar25 = CONCAT71((int7)((ulong)*puVar5 >> 8),(char)*(undefined6 *)puVar5) &
               0xffffffffffffff01;
      uVar24 = CONCAT62((int6)(uVar25 >> 0x10),
                        CONCAT11((char)((uint7)*(undefined7 *)puVar5 >> 8),(char)uVar25)) &
               0xffffffffffff01ff;
      uVar25 = CONCAT53((int5)(uVar24 >> 0x18),CONCAT12((char)(uVar25 >> 0x10),(short)uVar24)) &
               0xffffffffff01ffff;
      uVar24 = CONCAT44((int)(uVar25 >> 0x20),CONCAT13((char)(uVar24 >> 0x18),(int3)uVar25)) &
               0xffffffff01ffffff;
      uVar32 = CONCAT35((int3)(uVar24 >> 0x28),CONCAT14((char)(uVar25 >> 0x20),(int)uVar24)) &
               0xffffff01ffffffff;
      uVar33 = CONCAT26((short)(uVar32 >> 0x30),CONCAT15((char)(uVar24 >> 0x28),(int5)uVar32)) &
               0xffff01ffffffffff;
      uVar25 = CONCAT71((int7)((ulong)*puVar4 >> 8),(char)*(undefined6 *)puVar4) &
               0xffffffffffffff01;
      uVar24 = CONCAT62((int6)(uVar25 >> 0x10),
                        CONCAT11((char)((uint7)*(undefined7 *)puVar4 >> 8),(char)uVar25)) &
               0xffffffffffff01ff;
      uVar25 = CONCAT53((int5)(uVar24 >> 0x18),CONCAT12((char)(uVar25 >> 0x10),(short)uVar24)) &
               0xffffffffff01ffff;
      uVar24 = CONCAT44((int)(uVar25 >> 0x20),CONCAT13((char)(uVar24 >> 0x18),(int3)uVar25)) &
               0xffffffff01ffffff;
      uVar30 = CONCAT35((int3)(uVar24 >> 0x28),CONCAT14((char)(uVar25 >> 0x20),(int)uVar24)) &
               0xffffff01ffffffff;
      uVar31 = CONCAT26((short)(uVar30 >> 0x30),CONCAT15((char)(uVar24 >> 0x28),(int5)uVar30)) &
               0xffff01ffffffffff;
      uVar25 = CONCAT71((int7)((ulong)*puVar3 >> 8),(char)*(undefined6 *)puVar3) &
               0xffffffffffffff01;
      uVar26 = CONCAT62((int6)(uVar25 >> 0x10),
                        CONCAT11((char)((uint7)*(undefined7 *)puVar3 >> 8),(char)uVar25)) &
               0xffffffffffff01ff;
      uVar24 = CONCAT53((int5)(uVar26 >> 0x18),CONCAT12((char)(uVar25 >> 0x10),(short)uVar26)) &
               0xffffffffff01ffff;
      uVar25 = CONCAT44((int)(uVar24 >> 0x20),CONCAT13((char)(uVar26 >> 0x18),(int3)uVar24)) &
               0xffffffff01ffffff;
      uVar28 = CONCAT35((int3)(uVar25 >> 0x28),CONCAT14((char)(uVar24 >> 0x20),(int)uVar25)) &
               0xffffff01ffffffff;
      uVar29 = CONCAT26((short)(uVar28 >> 0x30),CONCAT15((char)(uVar25 >> 0x28),(int5)uVar28)) &
               0xffff01ffffffffff;
      uVar25 = CONCAT71((int7)((ulong)*puVar2 >> 8),(char)*(undefined6 *)puVar2) &
               0xffffffffffffff01;
      uVar24 = CONCAT62((int6)(uVar25 >> 0x10),
                        CONCAT11((char)((uint7)*(undefined7 *)puVar2 >> 8),(char)uVar25)) &
               0xffffffffffff01ff;
      uVar25 = CONCAT53((int5)(uVar24 >> 0x18),CONCAT12((char)(uVar25 >> 0x10),(short)uVar24)) &
               0xffffffffff01ffff;
      uVar24 = CONCAT44((int)(uVar25 >> 0x20),CONCAT13((char)(uVar24 >> 0x18),(int3)uVar25)) &
               0xffffffff01ffffff;
      uVar26 = CONCAT35((int3)(uVar24 >> 0x28),CONCAT14((char)(uVar25 >> 0x20),(int)uVar24)) &
               0xffffff01ffffffff;
      uVar27 = CONCAT26((short)(uVar26 >> 0x30),CONCAT15((char)(uVar24 >> 0x28),(int5)uVar26)) &
               0xffff01ffffffffff;
      uVar24 = CONCAT71((int7)((ulong)*puVar1 >> 8),(char)*(undefined6 *)puVar1) &
               0xffffffffffffff01;
      uVar25 = CONCAT62((int6)(uVar24 >> 0x10),
                        CONCAT11((char)((uint7)*(undefined7 *)puVar1 >> 8),(char)uVar24)) &
               0xffffffffffff01ff;
      uVar24 = CONCAT53((int5)(uVar25 >> 0x18),CONCAT12((char)(uVar24 >> 0x10),(short)uVar25)) &
               0xffffffffff01ffff;
      uVar25 = CONCAT44((int)(uVar24 >> 0x20),CONCAT13((char)(uVar25 >> 0x18),(int3)uVar24)) &
               0xffffffff01ffffff;
      uVar24 = CONCAT35((int3)(uVar25 >> 0x28),CONCAT14((char)(uVar24 >> 0x20),(int)uVar25)) &
               0xffffff01ffffffff;
      uVar25 = CONCAT26((short)(uVar24 >> 0x30),CONCAT15((char)(uVar25 >> 0x28),(int5)uVar24)) &
               0xffff01ffffffffff;
      puVar18[0xd] = CONCAT17((char)(uVar27 >> 0x38),CONCAT16((char)(uVar26 >> 0x30),(int6)uVar27))
                     & 0x101ffffffffffff;
      puVar18[0xc] = uVar10 & 0x101010101010101;
      puVar18[0xf] = CONCAT17((char)(uVar25 >> 0x38),CONCAT16((char)(uVar24 >> 0x30),(int6)uVar25))
                     & 0x101ffffffffffff;
      puVar18[0xe] = uVar9 & 0x101010101010101;
      puVar18[9] = CONCAT17((char)(uVar31 >> 0x38),CONCAT16((char)(uVar30 >> 0x30),(int6)uVar31)) &
                   0x101ffffffffffff;
      puVar18[8] = uVar12 & 0x101010101010101;
      puVar18[0xb] = CONCAT17((char)(uVar29 >> 0x38),CONCAT16((char)(uVar28 >> 0x30),(int6)uVar29))
                     & 0x101ffffffffffff;
      puVar18[10] = uVar11 & 0x101010101010101;
      puVar18[5] = CONCAT17((char)(uVar35 >> 0x38),CONCAT16((char)(uVar34 >> 0x30),(int6)uVar35)) &
                   0x101ffffffffffff;
      puVar18[4] = uVar14 & 0x101010101010101;
      puVar18[7] = CONCAT17((char)(uVar33 >> 0x38),CONCAT16((char)(uVar32 >> 0x30),(int6)uVar33)) &
                   0x101ffffffffffff;
      puVar18[6] = uVar13 & 0x101010101010101;
      puVar18[1] = CONCAT17((char)(uVar39 >> 0x38),CONCAT16((char)(uVar38 >> 0x30),(int6)uVar39)) &
                   0x101ffffffffffff;
      *puVar18 = uVar16 & 0x101010101010101;
      puVar18[3] = CONCAT17((char)(uVar37 >> 0x38),CONCAT16((char)(uVar36 >> 0x30),(int6)uVar37)) &
                   0x101ffffffffffff;
      puVar18[2] = uVar15 & 0x101010101010101;
      puVar21 = puVar21 + 0x80;
      uVar22 = uVar22 - 0x80;
      puVar18 = puVar18 + 0x10;
    } while (uVar22 != 0);
    if (uVar23 == uVar20) goto LAB_000dbfcc;
  }
  lVar19 = uVar23 - uVar20;
  puVar18 = puVar17;
  puVar21 = (undefined1 *)(uVar20 + param_1 + 0x20);
  do {
    puVar17 = (ulong *)((long)puVar18 + 1);
    *(undefined1 *)puVar18 = *puVar21;
    lVar19 = lVar19 + -1;
    puVar18 = puVar17;
    puVar21 = puVar21 + 1;
  } while (lVar19 != 0);
LAB_000dbfcc:
  *(ulong **)(unaff_x20 + 8) = puVar17;
  return;
}



/* Entry: 000dc448; end: 000dc633;  */

void FUN_000dc448(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x12;
  long lVar9;
  long unaff_x20;
  undefined1 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  undefined1 auStack_90 [16];
  ulong uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_58;
  
  lVar9 = *(long *)(param_3 - 8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  puVar10 = auStack_90 + (-0x20 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_00999f48)();
  func_0x000d6c50(param_2,2);
  uStack_70 = 0;
  uVar2 = 0;
  uStack_80 = param_3;
  lStack_78 = param_4;
  lStack_68 = param_1;
  __sSaMa(0,param_3);
  puVar3 = PTR___sSayxGSTsMc_0099b1f0;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_0099b1f0,uVar2);
  __sSTsE6reduceyqd__qd___qd__qd___7ElementQztKXEtKlF
            (&uStack_58,&uStack_70,FUN_000de078,auStack_90,uVar2,PTR___sSiN_0099b2c0,puVar3);
  func_0x000d6c94(uStack_58);
  lVar13 = param_1;
  __sSa8endIndexSivg(param_1,param_3);
  if (lVar13 != 0) {
    lVar13 = 0;
    pcVar6 = *(code **)(param_4 + 0x28);
    pbVar12 = *(byte **)(unaff_x20 + 8);
    do {
      __sSayxSicig((long)puVar10 - extraout_x12,lVar13,param_1,param_3);
      bVar1 = SCARRY8(lVar13,1);
      lVar13 = lVar13 + 1;
      if (bVar1) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0xdc634);
        (*pcVar6)();
      }
      (**(code **)(lVar9 + 0x20))(puVar10,(long)puVar10 - extraout_x12,param_3);
      uVar7 = param_3;
      (*pcVar6)(param_3,param_4);
      uVar5 = uVar7;
      pbVar11 = pbVar12;
      if (0x7f < uVar7) {
        do {
          pbVar12 = pbVar11 + 1;
          *pbVar11 = (byte)uVar5 | 0x80;
          uVar7 = uVar5 >> 7;
          uVar8 = uVar5 >> 0xe;
          uVar5 = uVar7;
          pbVar11 = pbVar12;
        } while (uVar8 != 0);
      }
      pbVar11 = pbVar12 + 1;
      *pbVar12 = (byte)uVar7;
      (**(code **)(lVar9 + 8))(puVar10,param_3);
      lVar4 = param_1;
      __sSa8endIndexSivg(param_1,param_3);
      pbVar12 = pbVar11;
    } while (lVar13 != lVar4);
    *(byte **)(unaff_x20 + 8) = pbVar11;
  }
  return;
}



/* Entry: 000dc634; end: 000dc74f;  */

void FUN_000dc634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  uVar3 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  uStack_f0 = param_3;
  uStack_e8 = param_4;
  lStack_e0 = param_5;
  lStack_d8 = param_6;
  uStack_c0 = param_3;
  uStack_b8 = param_4;
  lStack_b0 = param_5;
  lStack_a8 = param_6;
  uStack_90 = param_3;
  uStack_88 = param_4;
  lStack_80 = param_5;
  lStack_78 = param_6;
  uStack_70 = param_3;
  _swift_getAssociatedTypeWitness(0,uVar3,param_3,&UNK_008441f0,&UNK_00844200);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_6 + 8),param_4,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(uVar3,param_3,uVar1,&UNK_008441f0,&UNK_008441f8);
  FUN_000dc888(param_1,param_2,FUN_000de228,auStack_a0,0xde040,auStack_d0,0xde05c,auStack_100,uVar1,
               uVar2,uVar3);
  return;
}



/* Entry: 000dc750; end: 000dc7eb;  */

void FUN_000dc750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,long param_7)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_009ab410,&PTR_DAT_009ab428,param_4);
  if (unaff_x21 == 0) {
    (**(code **)(*(long *)(param_7 + 8) + 0x30))
              (param_3,2,param_1,&UNK_009ab410,&PTR_DAT_009ab428,param_5);
  }
  return;
}



/* Entry: 000dc7ec; end: 000dc887;  */

void FUN_000dc7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,long param_7)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_009ab868,&PTR_DAT_009ab880,param_4);
  if (unaff_x21 == 0) {
    (**(code **)(*(long *)(param_7 + 8) + 0x30))
              (param_3,2,param_1,&UNK_009ab868,&PTR_DAT_009ab880,param_5);
  }
  return;
}



/* Entry: 000dc888; end: 000dd373;  */

void FUN_000dc888(undefined1 *param_1,undefined1 *param_2,long param_3,undefined8 param_4,
                 code *param_5,undefined8 param_6,code *param_7,undefined8 param_8,long param_9,
                 long param_10,undefined8 param_11)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar13;
  code *pcVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x13;
  char *unaff_x20;
  long lVar21;
  long unaff_x21;
  code *pcVar22;
  byte *pbVar23;
  byte *pbVar24;
  long lVar25;
  long lVar26;
  undefined1 auStack_1f0 [8];
  long lStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  code *pcStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  ulong auStack_120 [2];
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [48];
  
  uVar9 = param_11;
  lVar8 = param_10;
  lVar10 = param_9;
  lVar11 = *(long *)(param_10 + -8);
  lStack_1b8 = param_3;
  uStack_1a0 = param_4;
  puStack_198 = param_2;
  puStack_190 = param_1;
  pcStack_188 = param_7;
  uStack_180 = param_8;
  pcStack_170 = param_5;
  uStack_168 = param_6;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar11 + 0x40));
  puStack_1a8 = auStack_1f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar25 = (long)(auStack_1f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar12 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar12 + 0x40));
  puVar15 = (undefined1 *)(lVar25 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puStack_178 = puVar15;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar15 = puVar15 + -extraout_x12_00;
  lVar3 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,lVar10,lVar8,"key value ",0);
  lVar4 = 0;
  __sSqMa(0,lVar3);
  lStack_158 = *(long *)(lVar4 + -8);
  lStack_150 = lVar4;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_158 + 0x40));
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puStack_1b0 = puVar15 + (-extraout_x12_01 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar26 = (long)(puVar15 + (-extraout_x12_01 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0))) -
           extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar13 = puStack_198;
  lVar4 = lVar26 - extraout_x12_03;
  lStack_160 = lVar10;
  lStack_148 = lVar8;
  if (*unaff_x20 != '\x01') {
    uStack_1a0 = uVar9;
    lVar4 = lVar10;
    lStack_1b8 = extraout_x13;
    if (((ulong)puStack_190 & 0xc000000000000001) == 0) {
      _swift_retain(puStack_190);
      lVar8 = lStack_148;
      uVar9 = uStack_1a0;
      __ss17_NativeDictionaryVyAByxq_Gs05__RawB7StorageCncfC();
      __ss17_NativeDictionaryV12makeIteratorAB0D0Vyxq__GyF(auStack_e0);
      lVar25 = -0xa8;
      puVar15 = auStack_e0;
      __sSD8IteratorV7_nativeAByxq__Gs17_NativeDictionaryVAAVyxq__Gn_tcfC
                (auStack_b8,puVar15,lVar10,lVar8,uVar9);
    }
    else {
      puVar16 = puStack_190;
      FUN_00105a7c(puStack_190,lVar10,lVar8,uVar9);
      puVar15 = puVar16;
      __ss17__CocoaDictionaryV12makeIteratorAB0D0CyF();
      _swift_unknownObjectRetain(puVar16);
      lVar25 = -0x80;
      __sSD8IteratorV6_cocoaAByxq__Gs17__CocoaDictionaryVAACn_tcfC
                (auStack_90,puVar15,lVar10,lVar8,uVar9);
    }
    lStack_1e8 = *(long *)((long)&param_9 + lVar25);
    lStack_1c8 = *(long *)(&stack0xfffffffffffffff0 + lVar25);
    lStack_1c0 = *(long *)(&stack0xfffffffffffffff8 + lVar25);
    uVar18 = lStack_1e8 + 0x40U >> 6;
    uStack_1d8 = (ulong)(uint)((int)puVar13 << 3);
    uStack_1e0 = ((ulong)puVar13 & 0x1fffffff) << 3 | 2;
    puStack_198 = *(undefined1 **)((long)&param_11 + lVar25);
    lVar25 = *(long *)((long)&param_10 + lVar25);
    do {
      lVar21 = lStack_148;
      uVar9 = uStack_1a0;
      lVar26 = lStack_1c8;
      lStack_1d0 = lVar25;
      if (lStack_1c8 < 0) {
        __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
        lVar8 = lStack_1b8;
        if (puVar15 != (undefined1 *)0x0) {
          __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF(lStack_1b8);
          _swift_unknownObjectRelease(puVar15);
          lVar21 = lStack_148;
          __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF
                    (lVar8 + *(int *)(lVar3 + 0x30),lVar4,lStack_148,lStack_148);
          _swift_unknownObjectRelease(lVar4);
          puStack_190 = puStack_198;
          goto LAB_000dd014;
        }
        puStack_190 = puStack_198;
        lVar21 = lStack_148;
LAB_000dd04c:
        uVar9 = 1;
        lVar8 = lStack_1b8;
      }
      else {
        puVar13 = puStack_198;
        lVar4 = lVar25;
        if (puStack_198 == (undefined1 *)0x0) {
          uVar17 = uVar18;
          if ((long)uVar18 <= lVar25 + 1) {
            uVar17 = lVar25 + 1;
          }
          do {
            lVar4 = lVar25 + 1;
            if (SCARRY8(lVar25,1)) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0xdd370);
              (*pcVar14)();
            }
            if ((long)uVar18 <= lVar4) {
              puStack_190 = (undefined1 *)0x0;
              lVar21 = lVar8;
              lVar25 = uVar17 - 1;
              goto LAB_000dd04c;
            }
            puVar13 = *(undefined1 **)(lStack_1c0 + lVar4 * 8);
            lVar25 = lVar25 + 1;
          } while (puVar13 == (undefined1 *)0x0);
        }
        uVar17 = ((ulong)puVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((ulong)puVar13 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        puStack_190 = (undefined1 *)((ulong)(puVar13 + -1) & (ulong)puVar13);
        uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) | lVar4 << 6;
        lVar25 = lStack_1c8;
        __ss17_NativeDictionaryV5_keysSpyxGvg(lStack_1c8,lVar10,lStack_148,uStack_1a0);
        lVar8 = lStack_1b8;
        (**(code **)(lVar12 + 0x10))(lStack_1b8,lVar25 + *(long *)(lVar12 + 0x48) * uVar17,lVar10);
        FUN_000f880c(lVar26,lVar10,lVar21,uVar9);
        iVar1 = *(int *)(lVar3 + 0x30);
        lVar25 = lVar26;
        __ss17_NativeDictionaryV7_valuesSpyq_Gvg(lVar26,lStack_160,lVar21,uVar9);
        lVar10 = lStack_160;
        (**(code **)(lVar11 + 0x10))
                  (lVar8 + iVar1,lVar25 + *(long *)(lVar11 + 0x48) * uVar17,lVar21);
        FUN_000f880c(lVar26,lVar10,lVar21,uVar9);
        lVar25 = lVar4;
LAB_000dd014:
        uVar9 = 0;
      }
      puVar16 = puStack_1a8;
      lVar4 = *(long *)(lVar3 + -8);
      (**(code **)(lVar4 + 0x38))(lVar8,uVar9,1,lVar3);
      puVar13 = puStack_1b0;
      (**(code **)(lStack_158 + 0x20))(puStack_1b0,lVar8,lStack_150);
      puVar15 = puVar13;
      (**(code **)(lVar4 + 0x30))(puVar13,1,lVar3);
      if ((int)puVar15 == 1) {
        FUN_000ddfa4(lStack_1c8,lStack_1c0,lStack_1e8,lStack_1d0,puStack_198);
        return;
      }
      iVar1 = *(int *)(lVar3 + 0x30);
      (**(code **)(lVar12 + 0x20))(puStack_178,puVar13,lVar10);
      (**(code **)(lVar11 + 0x20))(puVar16,puVar13 + iVar1,lVar21);
      puVar15 = puStack_178;
      pbVar23 = *(byte **)(unaff_x20 + 8);
      uVar17 = uStack_1e0;
      uVar19 = uStack_1e0;
      pbVar24 = pbVar23;
      if (0x7f < uStack_1d8) {
        do {
          pbVar24 = pbVar23 + 1;
          *pbVar23 = (byte)uVar17 | 0x80;
          uVar19 = uVar17 >> 7;
          uVar20 = uVar17 >> 0xe;
          uVar17 = uVar19;
          pbVar23 = pbVar24;
        } while (uVar20 != 0);
      }
      pbVar23 = pbVar24 + 1;
      *pbVar24 = (byte)uVar19;
      *(byte **)(unaff_x20 + 8) = pbVar23;
      auStack_120[0] = 0;
      (*pcStack_170)(auStack_120,puStack_178,puVar16);
      if (unaff_x21 != 0) goto LAB_000dd2e4;
      uVar17 = auStack_120[0];
      uVar19 = auStack_120[0];
      pbVar24 = pbVar23;
      if (0x7f < auStack_120[0]) {
        do {
          pbVar23 = pbVar24 + 1;
          *pbVar24 = (byte)uVar17 | 0x80;
          uVar19 = uVar17 >> 7;
          uVar20 = uVar17 >> 0xe;
          uVar17 = uVar19;
          pbVar24 = pbVar23;
        } while (uVar20 != 0);
      }
      *pbVar23 = (byte)uVar19;
      *(byte **)(unaff_x20 + 8) = pbVar23 + 1;
      (*pcStack_188)(unaff_x20,puVar15,puVar16);
      lVar8 = lStack_148;
      (**(code **)(lVar11 + 8))(puVar16,lStack_148);
      lVar4 = lVar10;
      (**(code **)(lVar12 + 8))();
      puStack_198 = puStack_190;
    } while( true );
  }
  lStack_110 = lVar10;
  lStack_108 = lVar8;
  uStack_100 = uVar9;
  lStack_f8 = lStack_1b8;
  uStack_f0 = uStack_1a0;
  uVar5 = 0;
  __sSDMa(0,lVar10,lVar8,uVar9);
  puVar6 = PTR___sSDyxq_GSTsMc_0099af00;
  _swift_getWitnessTable(PTR___sSDyxq_GSTsMc_0099af00,uVar5);
  pcVar14 = FUN_000ddfac;
  __sSTsE6sorted2bySay7ElementQzGSbAD_ADtKXE_tKF(FUN_000ddfac,auStack_120,uVar5,puVar6);
  pcVar22 = (code *)0x0;
  puStack_178 = (undefined1 *)(ulong)(uint)((int)puStack_198 << 3);
  puStack_190 = (undefined1 *)(((ulong)puStack_198 & 0x1fffffff) << 3 | 2);
  while( true ) {
    pcVar7 = pcVar14;
    __sSa8endIndexSivg(pcVar14,lVar3);
    if (pcVar22 == pcVar7) {
      uVar9 = 1;
    }
    else {
      __sSayxSicig(lVar26,pcVar22,pcVar14,lVar3);
      bVar2 = SCARRY8((long)pcVar22,1);
      pcVar22 = pcVar22 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0xdd374);
        (*pcVar14)();
      }
      uVar9 = 0;
    }
    lVar21 = *(long *)(lVar3 + -8);
    (**(code **)(lVar21 + 0x38))(lVar26,uVar9,1,lVar3);
    (**(code **)(lStack_158 + 0x20))(lVar4,lVar26,lStack_150);
    lVar8 = lVar4;
    (**(code **)(lVar21 + 0x30))(lVar4,1,lVar3);
    if ((int)lVar8 == 1) {
      _swift_bridgeObjectRelease(pcVar14);
      return;
    }
    iVar1 = *(int *)(lVar3 + 0x30);
    (**(code **)(lVar12 + 0x20))(puVar15,lVar4,lVar10);
    (**(code **)(lVar11 + 0x20))(lVar25,lVar4 + iVar1,lStack_148);
    pbVar23 = *(byte **)(unaff_x20 + 8);
    puVar13 = puStack_190;
    puVar16 = puStack_190;
    pbVar24 = pbVar23;
    if (section_00000068.segname + 8 <= puStack_178) {
      do {
        pbVar24 = pbVar23 + 1;
        *pbVar23 = (byte)puVar13 | 0x80;
        puVar16 = (undefined1 *)((ulong)puVar13 >> 7);
        uVar18 = (ulong)puVar13 >> 0xe;
        puVar13 = puVar16;
        pbVar23 = pbVar24;
      } while (uVar18 != 0);
    }
    pbVar23 = pbVar24 + 1;
    *pbVar24 = (byte)puVar16;
    *(byte **)(unaff_x20 + 8) = pbVar23;
    auStack_120[0] = 0;
    (*pcStack_170)(auStack_120,puVar15,lVar25);
    if (unaff_x21 != 0) break;
    uVar18 = auStack_120[0];
    uVar17 = auStack_120[0];
    pbVar24 = pbVar23;
    if (0x7f < auStack_120[0]) {
      do {
        pbVar23 = pbVar24 + 1;
        *pbVar24 = (byte)uVar18 | 0x80;
        uVar17 = uVar18 >> 7;
        uVar19 = uVar18 >> 0xe;
        uVar18 = uVar17;
        pbVar24 = pbVar23;
      } while (uVar19 != 0);
    }
    *pbVar23 = (byte)uVar17;
    *(byte **)(unaff_x20 + 8) = pbVar23 + 1;
    (*pcStack_188)(unaff_x20,puVar15,lVar25);
    (**(code **)(lVar11 + 8))(lVar25,lStack_148);
    lVar10 = lStack_160;
    (**(code **)(lVar12 + 8))(puVar15,lStack_160);
  }
  _swift_bridgeObjectRelease(pcVar14);
  (**(code **)(lVar11 + 8))(lVar25,lStack_148);
  pcVar14 = *(code **)(lVar12 + 8);
  lVar10 = lStack_160;
LAB_000dd340:
  (*pcVar14)(puVar15,lVar10);
  return;
LAB_000dd2e4:
  FUN_000ddfa4(lStack_1c8,lStack_1c0,lStack_1e8,lStack_1d0,puStack_198);
  (**(code **)(lVar11 + 8))(puVar16,lStack_148);
  pcVar14 = *(code **)(lVar12 + 8);
  goto LAB_000dd340;
}



/* Entry: 000dd374; end: 000dd463;  */

void FUN_000dd374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  uStack_f0 = param_3;
  uStack_e8 = param_4;
  lStack_e0 = param_5;
  uStack_d8 = param_6;
  uStack_c0 = param_3;
  uStack_b8 = param_4;
  lStack_b0 = param_5;
  uStack_a8 = param_6;
  uStack_90 = param_3;
  uStack_88 = param_4;
  lStack_80 = param_5;
  uStack_78 = param_6;
  uStack_70 = param_3;
  _swift_getAssociatedTypeWitness(0,uVar2,param_3,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(uVar2,param_3,uVar1,&UNK_008441f0,&UNK_008441f8);
  FUN_000dc888(param_1,param_2,0xddfd8,auStack_a0,FUN_000de008,auStack_d0,0xde024,auStack_100,uVar1,
               param_4,uVar2);
  return;
}



/* Entry: 000dd464; end: 000dd4e7;  */

void FUN_000dd464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_009ab410,&PTR_DAT_009ab428,param_4);
  if (unaff_x21 == 0) {
    FUN_000d8a50(param_3,2,param_5,param_7);
  }
  return;
}



/* Entry: 000dd4e8; end: 000dd58f;  */

void FUN_000dd4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,long param_7)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_009ab868,&PTR_DAT_009ab880,param_4);
  if (unaff_x21 == 0) {
    (**(code **)(param_7 + 0x28))(param_5,param_7);
    func_0x000d6c50(2,0);
    func_0x000d6f74(param_5);
  }
  return;
}



/* Entry: 000dd590; end: 000dd687;  */

void FUN_000dd590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  uStack_120 = param_3;
  uStack_118 = param_4;
  lStack_110 = param_5;
  uStack_108 = param_6;
  uStack_100 = param_7;
  uStack_e0 = param_3;
  uStack_d8 = param_4;
  lStack_d0 = param_5;
  uStack_c8 = param_6;
  uStack_c0 = param_7;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  lStack_90 = param_5;
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_3;
  _swift_getAssociatedTypeWitness(0,uVar2,param_3,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(uVar2,param_3,uVar1,&UNK_008441f0,&UNK_008441f8);
  FUN_000dc888(param_1,param_2,FUN_000ddf34,auStack_b0,FUN_000ddf64,auStack_f0,0xddf84,auStack_130,
               uVar1,param_4,uVar2);
  return;
}



/* Entry: 000dd688; end: 000dd70b;  */

void FUN_000dd688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_009ab410,&PTR_DAT_009ab428,param_4);
  if (unaff_x21 == 0) {
    FUN_000d8d14(param_3,2,param_5,param_8);
  }
  return;
}



/* Entry: 000dd70c; end: 000dd78f;  */

void FUN_000dd70c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_009ab868,&PTR_DAT_009ab880,param_4);
  if (unaff_x21 == 0) {
    FUN_000db45c(param_3,2,param_5,param_8);
  }
  return;
}



/* Entry: 000dd790; end: 000dd7df;  */

void FUN_000dd790(undefined4 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  long unaff_x20;
  
  func_0x000d6c50(param_2,5);
  puVar1 = *(undefined4 **)(unaff_x20 + 8);
  *puVar1 = param_1;
  *(undefined4 **)(unaff_x20 + 8) = puVar1 + 1;
  return;
}



/* Entry: 000dd7e0; end: 000dd82f;  */

void FUN_000dd7e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000d6c50(param_2,1);
  puVar1 = *(undefined8 **)(unaff_x20 + 8);
  *puVar1 = param_1;
  *(undefined8 **)(unaff_x20 + 8) = puVar1 + 1;
  return;
}



/* Entry: 000dd830; end: 000dd87b;  */

void FUN_000dd830(undefined8 param_1,undefined8 param_2)

{
  func_0x000d6c50(param_2,0);
  func_0x000d6f74(param_1);
  return;
}



/* Entry: 000dd87c; end: 000dd8cf;  */

void FUN_000dd87c(ulong param_1,undefined8 param_2)

{
  func_0x000d6c50(param_2,0);
  func_0x000d6f74((-(param_1 >> 0x1f & 1) & 0xfffffffe00000000 | (param_1 & 0xffffffff) << 1) ^
                  (long)(int)param_1 >> 0x3f);
  return;
}



/* Entry: 000dd8d0; end: 000dd91f;  */

void FUN_000dd8d0(long param_1,undefined8 param_2)

{
  func_0x000d6c50(param_2,0);
  func_0x000d6f74(param_1 << 1 ^ param_1 >> 0x3f);
  return;
}



/* Entry: 000dd920; end: 000dd96b;  */

void FUN_000dd920(undefined4 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  long unaff_x20;
  
  func_0x000d6c50(param_2,5);
  puVar1 = *(undefined4 **)(unaff_x20 + 8);
  *puVar1 = param_1;
  *(undefined4 **)(unaff_x20 + 8) = puVar1 + 1;
  return;
}



/* Entry: 000dd96c; end: 000dd9b7;  */

void FUN_000dd96c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000d6c50(param_2,1);
  puVar1 = *(undefined8 **)(unaff_x20 + 8);
  *puVar1 = param_1;
  *(undefined8 **)(unaff_x20 + 8) = puVar1 + 1;
  return;
}



/* Entry: 000dd9b8; end: 000dda03;  */

void FUN_000dd9b8(ulong param_1,undefined8 param_2)

{
  func_0x000d6c50(param_2,0);
  func_0x000d6f74(param_1 & 1);
  return;
}



/* Entry: 000dda04; end: 000dda5f;  */

void FUN_000dda04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000d6c50(param_3,2);
  FUN_000d6cd0(param_1,param_2);
  return;
}



/* Entry: 000dda60; end: 000ddc2f;  */

void FUN_000dda60(void)

{
  FUN_000db1c8();
  return;
}



/* Entry: 000ddc30; end: 000ddd4b;  */

void FUN_000ddc30(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined1 auStack_70 [8];
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  puVar7 = (undefined8 *)(unaff_x20 + 8);
  puVar5 = (undefined2 *)*puVar7;
  *puVar5 = 0x100b;
  *puVar7 = puVar5 + 1;
  func_0x000d6c94(param_2);
  puVar6 = (undefined1 *)*puVar7;
  *puVar6 = 0x1a;
  *puVar7 = puVar6 + 1;
  FUN_0010baa4(param_3,param_4);
  if (unaff_x21 == 0) {
    func_0x000d6c94();
    lVar1 = *(long *)(unaff_x20 + 8);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar3 = lVar1;
    func_0x000d6c2c(lVar1,uVar4,*(undefined8 *)(unaff_x20 + 0x18));
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xddd48);
      (*pcVar2)();
    }
    auStack_70[0] = *unaff_x20;
    lStack_68 = lVar3;
    lStack_60 = lVar3;
    uStack_58 = uVar4;
    (**(code **)(param_4 + 0x48))(auStack_70,&UNK_009ab868,&PTR_DAT_009ab880,param_3,param_4);
    if (lStack_60 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xddd4c);
      (*pcVar2)();
    }
    puVar6 = (undefined1 *)(lVar1 + (lStack_68 - lStack_60));
    *puVar6 = 0xc;
    *puVar7 = puVar6 + 1;
  }
  return;
}



/* Entry: 000ddd4c; end: 000ddd5f;  */

void FUN_000ddd4c(void)

{
  FUN_000ddc30();
  return;
}



/* Entry: 000ddd60; end: 000dde97;  */

void FUN_000ddd60(long param_1,undefined1 *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = (uint)((ulong)param_2 >> 0x20);
  uVar6 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    iVar3 = (int)param_1;
    if (uVar6 == 0) {
      uStack_46 = (undefined1)param_1;
      uStack_45 = (undefined1)((ulong)param_1 >> 8);
      uStack_44 = (undefined1)((ulong)param_1 >> 0x10);
      uStack_43 = (undefined1)((ulong)param_1 >> 0x18);
      uStack_42 = (undefined1)((ulong)param_1 >> 0x20);
      uStack_41 = (undefined1)((ulong)param_1 >> 0x28);
      uStack_40 = (undefined1)((ulong)param_1 >> 0x30);
      uStack_3f = (undefined1)((ulong)param_1 >> 0x38);
      uStack_3e = SUB81(param_2,0);
      uStack_3d = (undefined1)((ulong)param_2 >> 8);
      uStack_3c = (undefined1)((ulong)param_2 >> 0x10);
      uStack_3b = (undefined1)((ulong)param_2 >> 0x18);
      uStack_3a = (undefined1)((ulong)param_2 >> 0x20);
      uVar8 = (ulong)param_2 >> 0x30 & 0xff;
      uStack_39 = (undefined1)((ulong)param_2 >> 0x28);
      if (uVar8 != 0) {
        param_1 = *param_3;
        param_2 = &uStack_46;
        _memcpy(param_1,param_2,uVar8);
        *param_3 = *param_3 + uVar8;
      }
      goto LAB_000dde64;
    }
    puVar7 = (undefined1 *)(param_1 >> 0x20);
    param_1 = (long)iVar3;
    if ((long)puVar7 < (long)iVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xdde94);
      (*pcVar2)();
    }
  }
  else {
    if (uVar6 != 2) goto LAB_000dde64;
    puVar7 = *(undefined1 **)(param_1 + 0x18);
    param_1 = *(long *)(param_1 + 0x10);
  }
  FUN_000dde98(param_1,puVar7,(ulong)param_2 & 0x3fffffffffffffff);
  param_2 = puVar7;
  param_4 = param_3;
LAB_000dde64:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = param_1;
  __s10Foundation13__DataStorageC6_bytesSvSgvg();
  lVar5 = lVar4;
  if (lVar4 != 0) {
    __s10Foundation13__DataStorageC7_offsetSivg();
    if (SBORROW8(param_1,lVar5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xddf34);
      (*pcVar2)();
    }
    lVar4 = (param_1 - lVar5) + lVar4;
  }
  if (!SBORROW8((long)param_2,param_1)) {
    __s10Foundation13__DataStorageC7_lengthSivg();
    if ((long)param_2 - param_1 <= lVar5) {
      lVar5 = (long)param_2 - param_1;
    }
    if ((lVar4 != 0) && (lVar5 != 0)) {
      _memmove(*param_4,lVar4,lVar5);
      *param_4 = *param_4 + lVar5;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0xddf30);
  (*pcVar2)();
}



/* Entry: 000dde98; end: 000ddf33;  */

void FUN_000dde98(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  __s10Foundation13__DataStorageC6_bytesSvSgvg();
  lVar3 = lVar2;
  if (lVar2 != 0) {
    __s10Foundation13__DataStorageC7_offsetSivg();
    if (SBORROW8(param_1,lVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xddf34);
      (*pcVar1)();
    }
    lVar2 = (param_1 - lVar3) + lVar2;
  }
  if (!SBORROW8(param_2,param_1)) {
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (param_2 - param_1 <= lVar3) {
      lVar3 = param_2 - param_1;
    }
    if ((lVar2 != 0) && (lVar3 != 0)) {
      _memmove(*param_4,lVar2,lVar3);
      *param_4 = *param_4 + lVar3;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xddf30);
  (*pcVar1)();
}



/* Entry: 000ddf34; end: 000ddf63;  */

uint FUN_000ddf34(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x10))
            (param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Entry: 000ddf64; end: 000ddfa3;  */

void FUN_000ddf64(void)

{
  FUN_000dd688();
  return;
}



/* Entry: 000ddfa4; end: 000ddfab;  */

void FUN_000ddfa4(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 000ddfac; end: 000de007;  */

uint FUN_000ddfac(uint param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x28))();
  return param_1 & 1;
}



/* Entry: 000de008; end: 000de077;  */

void FUN_000de008(void)

{
  FUN_000dd464();
  return;
}



/* Entry: 000de078; end: 000de0d3;  */

void FUN_000de078(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *param_2;
  (**(code **)(*(long *)(unaff_x20 + 0x18) + 0x28))(lVar2,*(long *)(unaff_x20 + 0x18));
  func_0x0013b028();
  if (!SCARRY8(lVar3,lVar2)) {
    *param_1 = lVar3 + lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xde0d4);
  (*pcVar1)();
}



/* Entry: 000de0d4; end: 000de0ff;  */

long FUN_000de0d4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 000de100; end: 000de1af;  */

int FUN_000de100(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x20] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 000de1b0; end: 000de227;  */

void FUN_000de1b0(void)

{
  FUN_000dd920();
  return;
}



/* Entry: 000de228; end: 000de22b;  */

uint FUN_000de228(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x10))
            (param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Entry: 000de22c; end: 000de2a3;  */

void FUN_000de22c(void)

{
  func_0x000ddaec();
  return;
}



/* Entry: 000de2a4; end: 000de32f;  */

void FUN_000de2a4(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(char *)(param_1 + 4) = '\0';
    }
    if (param_2 != 0) {
      *(char *)param_1 = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 - 0xff);
    param_1[1] = 0;
    if (0xfe < param_3) {
      *(char *)(param_1 + 4) = '\x01';
    }
  }
  return;
}



/* Entry: 000de330; end: 000de3eb;  */

void FUN_000de330(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    return;
  }
  __ss11_StringGutsV4growyySiF(0x25);
  _swift_bridgeObjectRelease(0xe000000000000000);
  puVar2 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_0099b860;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_0099b850,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_0099b860);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000023,0x80000000008b8ca0,
             "SwiftProtobuf/BytecodeReader.swift",0x22,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xde3ec);
  (*pcVar1)();
}



/* Entry: 000de3ec; end: 000de803;  */

void FUN_000de3ec(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0xde6ec);
    (*pcVar5)();
  }
  lStack_50 = 0;
  lStack_48 = param_2;
  lStack_40 = param_1;
  lStack_38 = param_2;
  FUN_000de9a0();
  FUN_000de330();
  if (lStack_50 != lStack_48) {
    do {
      if (lStack_50 == lStack_48) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0xde6d0);
        (*pcVar5)();
      }
      lVar1 = lStack_50 + 1;
      if (lStack_48 < lVar1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0xde6d4);
        (*pcVar5)();
      }
      bVar4 = *(byte *)(lStack_40 + lStack_50);
      uVar9 = (ulong)bVar4;
      if ((char)bVar4 < '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0xde6d8);
        lStack_50 = lVar1;
        (*pcVar5)();
      }
      lVar2 = lVar1;
      if (0x3f < bVar4) {
        if (lVar1 == lStack_48) {
LAB_000de6dc:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0xde6e0);
          lStack_50 = lVar1;
          (*pcVar5)();
        }
        lVar2 = lStack_50 + 2;
        if (lStack_48 < lVar2) {
LAB_000de6e0:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0xde6e4);
          lStack_50 = lVar1;
          (*pcVar5)();
        }
        bVar4 = *(byte *)(lStack_40 + lVar1);
        if ((char)bVar4 < '\0') {
LAB_000de6e4:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0xde6e8);
          lStack_50 = lVar1;
          (*pcVar5)();
        }
        uVar9 = uVar9 & 0x3f | ((ulong)bVar4 & 0x3f) << 6;
        if (0x3f < bVar4) {
          if (lVar2 == lStack_48) goto LAB_000de6dc;
          lVar3 = lStack_50 + 3;
          if (lStack_48 < lVar3) goto LAB_000de6e0;
          bVar4 = *(byte *)(lStack_40 + lVar2);
          if ((char)bVar4 < '\0') goto LAB_000de6e4;
          uVar9 = uVar9 | ((ulong)bVar4 & 0x3f) << 0xc;
          lVar2 = lVar3;
          if (0x3f < bVar4) {
            if (lVar3 == lStack_48) goto LAB_000de6dc;
            lVar2 = lStack_50 + 4;
            if (lStack_48 < lVar2) goto LAB_000de6e0;
            bVar4 = *(byte *)(lStack_40 + lVar3);
            if ((char)bVar4 < '\0') goto LAB_000de6e4;
            uVar9 = uVar9 | ((ulong)bVar4 & 0x3f) << 0x12;
            if (0x3f < bVar4) {
              if (lVar2 == lStack_48) goto LAB_000de6dc;
              lVar3 = lStack_50 + 5;
              if (lStack_48 < lVar3) goto LAB_000de6e0;
              bVar4 = *(byte *)(lStack_40 + lVar2);
              if ((char)bVar4 < '\0') goto LAB_000de6e4;
              uVar9 = uVar9 | ((ulong)bVar4 & 0x3f) << 0x18;
              lVar2 = lVar3;
              if (0x3f < bVar4) {
                if (lVar3 == lStack_48) goto LAB_000de6dc;
                lVar2 = lStack_50 + 6;
                if (lStack_48 < lVar2) goto LAB_000de6e0;
                bVar4 = *(byte *)(lStack_40 + lVar3);
                if ((char)bVar4 < '\0') goto LAB_000de6e4;
                uVar9 = uVar9 | ((ulong)bVar4 & 0x3f) << 0x1e;
                if (0x3f < bVar4) {
                  if (lVar2 == lStack_48) goto LAB_000de6dc;
                  lVar3 = lStack_50 + 7;
                  if (lStack_48 < lVar3) goto LAB_000de6e0;
                  bVar4 = *(byte *)(lStack_40 + lVar2);
                  if ((char)bVar4 < '\0') goto LAB_000de6e4;
                  uVar9 = uVar9 | (ulong)(bVar4 & 0x3f) << 0x24;
                  lVar2 = lVar3;
                  if (0x3f < bVar4) {
                    if (lVar3 == lStack_48) goto LAB_000de6dc;
                    lVar2 = lStack_50 + 8;
                    if (lStack_48 < lVar2) goto LAB_000de6e0;
                    bVar4 = *(byte *)(lStack_40 + lVar3);
                    if ((char)bVar4 < '\0') goto LAB_000de6e4;
                    uVar9 = uVar9 | (ulong)(bVar4 & 0x3f) << 0x2a;
                    if (0x3f < bVar4) {
                      if (lVar2 == lStack_48) goto LAB_000de6dc;
                      lVar3 = lStack_50 + 9;
                      if (lStack_48 < lVar3) goto LAB_000de6e0;
                      bVar4 = *(byte *)(lStack_40 + lVar2);
                      if ((char)bVar4 < '\0') goto LAB_000de6e4;
                      uVar9 = uVar9 | (ulong)(bVar4 & 0x3f) << 0x30;
                      lVar2 = lVar3;
                      if (0x3f < bVar4) {
                        if (lVar3 == lStack_48) goto LAB_000de6dc;
                        lVar2 = lStack_50 + 10;
                        if (lStack_48 < lVar2) goto LAB_000de6e0;
                        bVar4 = *(byte *)(lStack_40 + lVar3);
                        if ((char)bVar4 < '\0') goto LAB_000de6e4;
                        uVar9 = uVar9 | (ulong)(bVar4 & 0x3f) << 0x36;
                        if (0x3f < bVar4) {
                          if (lVar2 == lStack_48) goto LAB_000de6dc;
                          if (lStack_48 < lStack_50 + 0xb) goto LAB_000de6e0;
                          bVar4 = *(byte *)(lStack_40 + lVar2);
                          if ((char)bVar4 < '\0') goto LAB_000de6e4;
                          if (0x3f < bVar4) {
                            uVar11 = 0x6a;
                            uVar7 = 0xd00000000000002b;
                            uVar8 = 0x80000000008b8c10;
                            lStack_50 = lVar1;
                            goto LAB_000de7b0;
                          }
                          uVar9 = uVar9 | (ulong)bVar4 << 0x3c;
                          lVar2 = lStack_50 + 0xb;
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
      lStack_50 = lVar2;
      if (0xc < uVar9) {
        uStack_60 = 0;
        uStack_58 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x2b);
        _swift_bridgeObjectRelease(uStack_58);
        uStack_60 = 0xd000000000000012;
        uStack_58 = 0x80000000008b8c40;
        puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_0099b860;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___ss6UInt64VN_0099b850,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_0099b860
                  );
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar6);
        __sSS6appendyySSF(0xd000000000000015,0x80000000008b8c60);
        __sSS6appendyySSF(0xd000000000000014,0x80000000008b8c80);
        uVar11 = 0x34;
        uVar7 = uStack_60;
        uVar8 = uStack_58;
LAB_000de7b0:
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,uVar7,uVar8,"SwiftProtobuf/BytecodeReader.swift",0x22,2,
                   uVar11,0);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0xde7c8);
        (*pcVar5)();
      }
      uVar10 = 0;
      switch(uVar9) {
      case 0:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0xde6dc);
        (*pcVar5)();
      case 2:
        uVar10 = 1;
        break;
      case 3:
        uVar10 = 2;
        break;
      case 4:
        uVar10 = 3;
        break;
      case 5:
        uVar10 = 4;
        break;
      case 6:
        uVar10 = 5;
        break;
      case 7:
        uVar10 = 6;
        break;
      case 8:
        uVar10 = 7;
        break;
      case 9:
        uVar10 = 8;
        break;
      case 10:
        uVar10 = 9;
        break;
      case 0xb:
        uVar10 = 10;
        break;
      case 0xc:
        uVar10 = 0xb;
      }
      uStack_60 = CONCAT71(uStack_60._1_7_,uVar10);
      FUN_0011a058(&uStack_60,&lStack_50,param_3,param_4);
    } while (lStack_50 != lStack_48);
  }
  return;
}



/* Entry: 000de804; end: 000de837;  */

void FUN_000de804(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x1fc,0xde804);
  (*pcVar1)();
}



/* Entry: 000de838; end: 000de93f;  */

void FUN_000de838(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,long param_5,
                 undefined8 param_6)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  ulong uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar6 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (-1 < param_2) {
    uVar2 = 0;
    lVar4 = param_2;
    func_0x000dedc4();
    uStack_70 = uVar2;
    lStack_68 = param_2;
    uStack_60 = param_1;
    lStack_58 = lVar4;
    FUN_000dee00();
    if ((uVar2 & 1) != 0) {
      uVar3 = 0;
      FUN_000df24c(0,param_5,param_6);
      do {
        FUN_000dee0c(lVar5,uVar3);
        (*param_3)(lVar5,&uStack_70);
        (**(code **)(lVar6 + 8))(lVar5,param_5);
        uVar2 = uStack_70;
        FUN_000dee00(uStack_70,lStack_68,uStack_60,lStack_58,param_5,param_6);
      } while ((uVar2 & 1) != 0);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xde940);
  (*pcVar1)();
}



/* Entry: 000de940; end: 000de99f;  */

void FUN_000de940(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_0099b938)();
  return;
}



/* Entry: 000de9a0; end: 000dec03;  */

ulong FUN_000de9a0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  lVar3 = unaff_x20[1];
  if (lVar2 == lVar3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0xdeba4);
    (*pcVar5)();
  }
  lVar8 = lVar2 + 1;
  if (lVar3 < lVar8) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0xdeba8);
    (*pcVar5)();
  }
  lVar7 = unaff_x20[2];
  bVar4 = *(byte *)(lVar7 + lVar2);
  uVar6 = (ulong)bVar4;
  *unaff_x20 = lVar8;
  if ((char)bVar4 < '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0xdebac);
    (*pcVar5)();
  }
  if (0x3f < bVar4) {
    if (lVar8 == lVar3) {
LAB_000debac:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0xdebb0);
      (*pcVar5)();
    }
    lVar1 = lVar2 + 2;
    if (lVar3 < lVar1) {
LAB_000debb0:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0xdebb4);
      (*pcVar5)();
    }
    bVar4 = *(byte *)(lVar7 + lVar8);
    if ((char)bVar4 < '\0') {
LAB_000debb4:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0xdebb8);
      (*pcVar5)();
    }
    uVar6 = uVar6 & 0x3f | ((ulong)bVar4 & 0x3f) << 6;
    lVar8 = lVar1;
    if (0x3f < bVar4) {
      if (lVar1 == lVar3) goto LAB_000debac;
      lVar8 = lVar2 + 3;
      if (lVar3 < lVar8) goto LAB_000debb0;
      bVar4 = *(byte *)(lVar7 + lVar1);
      if ((char)bVar4 < '\0') goto LAB_000debb4;
      uVar6 = uVar6 | ((ulong)bVar4 & 0x3f) << 0xc;
      if (0x3f < bVar4) {
        if (lVar8 == lVar3) goto LAB_000debac;
        lVar1 = lVar2 + 4;
        if (lVar3 < lVar1) goto LAB_000debb0;
        bVar4 = *(byte *)(lVar7 + lVar8);
        if ((char)bVar4 < '\0') goto LAB_000debb4;
        uVar6 = uVar6 | ((ulong)bVar4 & 0x3f) << 0x12;
        lVar8 = lVar1;
        if (0x3f < bVar4) {
          if (lVar1 == lVar3) goto LAB_000debac;
          lVar8 = lVar2 + 5;
          if (lVar3 < lVar8) goto LAB_000debb0;
          bVar4 = *(byte *)(lVar7 + lVar1);
          if ((char)bVar4 < '\0') goto LAB_000debb4;
          uVar6 = uVar6 | ((ulong)bVar4 & 0x3f) << 0x18;
          if (0x3f < bVar4) {
            if (lVar8 == lVar3) goto LAB_000debac;
            lVar1 = lVar2 + 6;
            if (lVar3 < lVar1) goto LAB_000debb0;
            bVar4 = *(byte *)(lVar7 + lVar8);
            if ((char)bVar4 < '\0') goto LAB_000debb4;
            uVar6 = uVar6 | ((ulong)bVar4 & 0x3f) << 0x1e;
            lVar8 = lVar1;
            if (0x3f < bVar4) {
              if (lVar1 == lVar3) goto LAB_000debac;
              lVar8 = lVar2 + 7;
              if (lVar3 < lVar8) goto LAB_000debb0;
              bVar4 = *(byte *)(lVar7 + lVar1);
              if ((char)bVar4 < '\0') goto LAB_000debb4;
              uVar6 = uVar6 | (ulong)(bVar4 & 0x3f) << 0x24;
              if (0x3f < bVar4) {
                if (lVar8 == lVar3) goto LAB_000debac;
                lVar1 = lVar2 + 8;
                if (lVar3 < lVar1) goto LAB_000debb0;
                bVar4 = *(byte *)(lVar7 + lVar8);
                if ((char)bVar4 < '\0') goto LAB_000debb4;
                uVar6 = uVar6 | (ulong)(bVar4 & 0x3f) << 0x2a;
                lVar8 = lVar1;
                if (0x3f < bVar4) {
                  if (lVar1 == lVar3) goto LAB_000debac;
                  lVar8 = lVar2 + 9;
                  if (lVar3 < lVar8) goto LAB_000debb0;
                  bVar4 = *(byte *)(lVar7 + lVar1);
                  if ((char)bVar4 < '\0') goto LAB_000debb4;
                  uVar6 = uVar6 | (ulong)(bVar4 & 0x3f) << 0x30;
                  if (0x3f < bVar4) {
                    if (lVar8 == lVar3) goto LAB_000debac;
                    lVar1 = lVar2 + 10;
                    if (lVar3 < lVar1) goto LAB_000debb0;
                    bVar4 = *(byte *)(lVar7 + lVar8);
                    if ((char)bVar4 < '\0') goto LAB_000debb4;
                    uVar6 = uVar6 | (ulong)(bVar4 & 0x3f) << 0x36;
                    lVar8 = lVar1;
                    if (0x3f < bVar4) {
                      if (lVar1 == lVar3) goto LAB_000debac;
                      lVar8 = lVar2 + 0xb;
                      if (lVar3 < lVar8) goto LAB_000debb0;
                      bVar4 = *(byte *)(lVar7 + lVar1);
                      if ((char)bVar4 < '\0') goto LAB_000debb4;
                      if (0x3f < bVar4) {
                        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                                  ("Fatal error",0xb,2,0xd00000000000002b,0x80000000008b8c10,
                                   "SwiftProtobuf/BytecodeReader.swift",0x22,2,0x6a,0);
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0xdec04);
                        (*pcVar5)();
                      }
                      uVar6 = uVar6 | (ulong)bVar4 << 0x3c;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *unaff_x20 = lVar8;
  }
  return uVar6;
}



/* Entry: 000dec04; end: 000dedff;  */

void FUN_000dec04(ulong param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  if ((param_3 & 1) != 0) {
    if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0xdec4c);
      (*pcVar5)();
    }
    if ((undefined *)(param_1 & 0xfffff800) == &UNK_0000d800) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0xdec54);
      (*pcVar5)();
    }
    if (0x10 < param_1 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0xdec50);
      (*pcVar5)();
    }
    if (param_1 != 0) {
      __ss11_StringGutsV4growyySiF(0x25);
      _swift_bridgeObjectRelease(0xe000000000000000);
      puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_0099b860;
      uStack_38 = param_1;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___ss6UInt64VN_0099b850,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_0099b860);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar6);
      uStack_48 = (ulong)uStack_48._4_4_ << 0x20;
      lStack_50 = 0x24;
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                ("Fatal error",0xb,2,0xd000000000000023,0x80000000008b8ca0,
                 "SwiftProtobuf/BytecodeReader.swift",0x22,2);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0xded08);
      (*pcVar5)();
    }
    return;
  }
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0xdec48);
    (*pcVar5)();
  }
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0xde6ec);
    (*pcVar5)();
  }
  lStack_50 = 0;
  uStack_48 = param_2;
  uStack_40 = param_1;
  uStack_38 = param_2;
  FUN_000de9a0();
  FUN_000de330();
  if (lStack_50 != uStack_48) {
    do {
      if (lStack_50 == uStack_48) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0xde6d0);
        (*pcVar5)();
      }
      lVar1 = lStack_50 + 1;
      if (uStack_48 < lVar1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0xde6d4);
        (*pcVar5)();
      }
      bVar4 = *(byte *)(uStack_40 + lStack_50);
      uVar9 = (ulong)bVar4;
      if ((char)bVar4 < '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0xde6d8);
        lStack_50 = lVar1;
        (*pcVar5)();
      }
      lVar2 = lVar1;
      if (0x3f < bVar4) {
        if (lVar1 == uStack_48) {
LAB_000de6dc:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0xde6e0);
          lStack_50 = lVar1;
          (*pcVar5)();
        }
        lVar2 = lStack_50 + 2;
        if (uStack_48 < lVar2) {
LAB_000de6e0:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0xde6e4);
          lStack_50 = lVar1;
          (*pcVar5)();
        }
        bVar4 = *(byte *)(uStack_40 + lVar1);
        if ((char)bVar4 < '\0') {
LAB_000de6e4:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0xde6e8);
          lStack_50 = lVar1;
          (*pcVar5)();
        }
        uVar9 = uVar9 & 0x3f | ((ulong)bVar4 & 0x3f) << 6;
        if (0x3f < bVar4) {
          if (lVar2 == uStack_48) goto LAB_000de6dc;
          lVar3 = lStack_50 + 3;
          if (uStack_48 < lVar3) goto LAB_000de6e0;
          bVar4 = *(byte *)(uStack_40 + lVar2);
          if ((char)bVar4 < '\0') goto LAB_000de6e4;
          uVar9 = uVar9 | ((ulong)bVar4 & 0x3f) << 0xc;
          lVar2 = lVar3;
          if (0x3f < bVar4) {
            if (lVar3 == uStack_48) goto LAB_000de6dc;
            lVar2 = lStack_50 + 4;
            if (uStack_48 < lVar2) goto LAB_000de6e0;
            bVar4 = *(byte *)(uStack_40 + lVar3);
            if ((char)bVar4 < '\0') goto LAB_000de6e4;
            uVar9 = uVar9 | ((ulong)bVar4 & 0x3f) << 0x12;
            if (0x3f < bVar4) {
              if (lVar2 == uStack_48) goto LAB_000de6dc;
              lVar3 = lStack_50 + 5;
              if (uStack_48 < lVar3) goto LAB_000de6e0;
              bVar4 = *(byte *)(uStack_40 + lVar2);
              if ((char)bVar4 < '\0') goto LAB_000de6e4;
              uVar9 = uVar9 | ((ulong)bVar4 & 0x3f) << 0x18;
              lVar2 = lVar3;
              if (0x3f < bVar4) {
                if (lVar3 == uStack_48) goto LAB_000de6dc;
                lVar2 = lStack_50 + 6;
                if (uStack_48 < lVar2) goto LAB_000de6e0;
                bVar4 = *(byte *)(uStack_40 + lVar3);
                if ((char)bVar4 < '\0') goto LAB_000de6e4;
                uVar9 = uVar9 | ((ulong)bVar4 & 0x3f) << 0x1e;
                if (0x3f < bVar4) {
                  if (lVar2 == uStack_48) goto LAB_000de6dc;
                  lVar3 = lStack_50 + 7;
                  if (uStack_48 < lVar3) goto LAB_000de6e0;
                  bVar4 = *(byte *)(uStack_40 + lVar2);
                  if ((char)bVar4 < '\0') goto LAB_000de6e4;
                  uVar9 = uVar9 | (ulong)(bVar4 & 0x3f) << 0x24;
                  lVar2 = lVar3;
                  if (0x3f < bVar4) {
                    if (lVar3 == uStack_48) goto LAB_000de6dc;
                    lVar2 = lStack_50 + 8;
                    if (uStack_48 < lVar2) goto LAB_000de6e0;
                    bVar4 = *(byte *)(uStack_40 + lVar3);
                    if ((char)bVar4 < '\0') goto LAB_000de6e4;
                    uVar9 = uVar9 | (ulong)(bVar4 & 0x3f) << 0x2a;
                    if (0x3f < bVar4) {
                      if (lVar2 == uStack_48) goto LAB_000de6dc;
                      lVar3 = lStack_50 + 9;
                      if (uStack_48 < lVar3) goto LAB_000de6e0;
                      bVar4 = *(byte *)(uStack_40 + lVar2);
                      if ((char)bVar4 < '\0') goto LAB_000de6e4;
                      uVar9 = uVar9 | (ulong)(bVar4 & 0x3f) << 0x30;
                      lVar2 = lVar3;
                      if (0x3f < bVar4) {
                        if (lVar3 == uStack_48) goto LAB_000de6dc;
                        lVar2 = lStack_50 + 10;
                        if (uStack_48 < lVar2) goto LAB_000de6e0;
                        bVar4 = *(byte *)(uStack_40 + lVar3);
                        if ((char)bVar4 < '\0') goto LAB_000de6e4;
                        uVar9 = uVar9 | (ulong)(bVar4 & 0x3f) << 0x36;
                        if (0x3f < bVar4) {
                          if (lVar2 == uStack_48) goto LAB_000de6dc;
                          if (uStack_48 < lStack_50 + 0xb) goto LAB_000de6e0;
                          bVar4 = *(byte *)(uStack_40 + lVar2);
                          if ((char)bVar4 < '\0') goto LAB_000de6e4;
                          if (0x3f < bVar4) {
                            uVar11 = 0x6a;
                            uVar7 = 0xd00000000000002b;
                            uVar8 = 0x80000000008b8c10;
                            lStack_50 = lVar1;
                            goto LAB_000de7b0;
                          }
                          uVar9 = uVar9 | (ulong)bVar4 << 0x3c;
                          lVar2 = lStack_50 + 0xb;
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
      lStack_50 = lVar2;
      if (0xc < uVar9) {
        uStack_60 = 0;
        uStack_58 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x2b);
        _swift_bridgeObjectRelease(uStack_58);
        uStack_60 = 0xd000000000000012;
        uStack_58 = 0x80000000008b8c40;
        puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_0099b860;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___ss6UInt64VN_0099b850,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_0099b860
                  );
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar6);
        __sSS6appendyySSF(0xd000000000000015,0x80000000008b8c60);
        __sSS6appendyySSF(0xd000000000000014,0x80000000008b8c80);
        uVar11 = 0x34;
        uVar7 = uStack_60;
        uVar8 = uStack_58;
LAB_000de7b0:
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,uVar7,uVar8,"SwiftProtobuf/BytecodeReader.swift",0x22,2,
                   uVar11,0);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0xde7c8);
        (*pcVar5)();
      }
      uVar10 = 0;
      switch(uVar9) {
      case 0:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0xde6dc);
        (*pcVar5)();
      case 2:
        uVar10 = 1;
        break;
      case 3:
        uVar10 = 2;
        break;
      case 4:
        uVar10 = 3;
        break;
      case 5:
        uVar10 = 4;
        break;
      case 6:
        uVar10 = 5;
        break;
      case 7:
        uVar10 = 6;
        break;
      case 8:
        uVar10 = 7;
        break;
      case 9:
        uVar10 = 8;
        break;
      case 10:
        uVar10 = 9;
        break;
      case 0xb:
        uVar10 = 10;
        break;
      case 0xc:
        uVar10 = 0xb;
      }
      uStack_60 = CONCAT71(uStack_60._1_7_,uVar10);
      FUN_0011a058(&uStack_60,&lStack_50,param_4,param_5);
    } while (lStack_50 != uStack_48);
  }
  return;
}



/* Entry: 000dee00; end: 000dee0b;  */

bool FUN_000dee00(long param_1,long param_2)

{
  return param_1 != param_2;
}



/* Entry: 000dee0c; end: 000defe7;  */

void FUN_000dee0c(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_80;
  undefined4 auStack_78 [2];
  undefined1 auStack_70 [8];
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar7 = *(long *)(param_2 + 0x10);
  lVar3 = 0;
  __sSqMa(0,lVar7);
  lVar11 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar9 = auStack_70 + lVar1;
  if (*unaff_x20 == unaff_x20[1]) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xdeef8);
    (*pcVar2)();
  }
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  FUN_000defe8();
  if (lVar4 != 0) {
    lStack_60 = lVar4;
    __sSY8rawValuexSg03RawB0Qz_tcfCTj(puVar9,&lStack_60,lVar7,uVar10);
    lVar8 = *(long *)(lVar7 + -8);
    puVar5 = puVar9;
    (**(code **)(lVar8 + 0x30))(puVar9,1,lVar7);
    if ((int)puVar5 != 1) {
      (**(code **)(lVar8 + 0x20))(param_1,puVar9,lVar7);
      return;
    }
    (**(code **)(lVar11 + 8))(puVar9,lVar3);
    lStack_60 = 0;
    uStack_58 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x2b);
    _swift_bridgeObjectRelease(uStack_58);
    lStack_60 = -0x2fffffffffffffee;
    uStack_58 = 0x80000000008b8c40;
    puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_0099b860;
    lStack_68 = lVar4;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss6UInt64VN_0099b850,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_0099b860);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar6);
    __sSS6appendyySSF(0xd000000000000015,0x80000000008b8c60);
    uVar10 = 0;
    __ss9_typeName_9qualifiedSSypXp_SbtF(lVar7,0);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar10);
    uVar10 = uStack_58;
    lVar4 = lStack_60;
    *(undefined4 *)((long)auStack_78 + lVar1) = 0;
    *(undefined8 *)((long)&uStack_80 + lVar1) = 0x34;
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
              ("Fatal error",0xb,2,lVar4,uVar10,"SwiftProtobuf/BytecodeReader.swift",0x22,2);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xdefe8);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0xdeefc);
  (*pcVar2)();
}



/* Entry: 000defe8; end: 000df24b;  */

ulong FUN_000defe8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  lVar3 = unaff_x20[1];
  if (lVar2 == lVar3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0xdf1ec);
    (*pcVar5)();
  }
  lVar8 = lVar2 + 1;
  if (lVar3 < lVar8) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0xdf1f0);
    (*pcVar5)();
  }
  lVar7 = unaff_x20[2];
  bVar4 = *(byte *)(lVar7 + lVar2);
  uVar6 = (ulong)bVar4;
  *unaff_x20 = lVar8;
  if ((char)bVar4 < '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0xdf1f4);
    (*pcVar5)();
  }
  if (0x3f < bVar4) {
    if (lVar8 == lVar3) {
LAB_000df1f4:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0xdf1f8);
      (*pcVar5)();
    }
    lVar1 = lVar2 + 2;
    if (lVar3 < lVar1) {
LAB_000df1f8:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0xdf1fc);
      (*pcVar5)();
    }
    bVar4 = *(byte *)(lVar7 + lVar8);
    if ((char)bVar4 < '\0') {
LAB_000df1fc:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0xdf200);
      (*pcVar5)();
    }
    uVar6 = uVar6 & 0x3f | ((ulong)bVar4 & 0x3f) << 6;
    lVar8 = lVar1;
    if (0x3f < bVar4) {
      if (lVar1 == lVar3) goto LAB_000df1f4;
      lVar8 = lVar2 + 3;
      if (lVar3 < lVar8) goto LAB_000df1f8;
      bVar4 = *(byte *)(lVar7 + lVar1);
      if ((char)bVar4 < '\0') goto LAB_000df1fc;
      uVar6 = uVar6 | ((ulong)bVar4 & 0x3f) << 0xc;
      if (0x3f < bVar4) {
        if (lVar8 == lVar3) goto LAB_000df1f4;
        lVar1 = lVar2 + 4;
        if (lVar3 < lVar1) goto LAB_000df1f8;
        bVar4 = *(byte *)(lVar7 + lVar8);
        if ((char)bVar4 < '\0') goto LAB_000df1fc;
        uVar6 = uVar6 | ((ulong)bVar4 & 0x3f) << 0x12;
        lVar8 = lVar1;
        if (0x3f < bVar4) {
          if (lVar1 == lVar3) goto LAB_000df1f4;
          lVar8 = lVar2 + 5;
          if (lVar3 < lVar8) goto LAB_000df1f8;
          bVar4 = *(byte *)(lVar7 + lVar1);
          if ((char)bVar4 < '\0') goto LAB_000df1fc;
          uVar6 = uVar6 | ((ulong)bVar4 & 0x3f) << 0x18;
          if (0x3f < bVar4) {
            if (lVar8 == lVar3) goto LAB_000df1f4;
            lVar1 = lVar2 + 6;
            if (lVar3 < lVar1) goto LAB_000df1f8;
            bVar4 = *(byte *)(lVar7 + lVar8);
            if ((char)bVar4 < '\0') goto LAB_000df1fc;
            uVar6 = uVar6 | ((ulong)bVar4 & 0x3f) << 0x1e;
            lVar8 = lVar1;
            if (0x3f < bVar4) {
              if (lVar1 == lVar3) goto LAB_000df1f4;
              lVar8 = lVar2 + 7;
              if (lVar3 < lVar8) goto LAB_000df1f8;
              bVar4 = *(byte *)(lVar7 + lVar1);
              if ((char)bVar4 < '\0') goto LAB_000df1fc;
              uVar6 = uVar6 | (ulong)(bVar4 & 0x3f) << 0x24;
              if (0x3f < bVar4) {
                if (lVar8 == lVar3) goto LAB_000df1f4;
                lVar1 = lVar2 + 8;
                if (lVar3 < lVar1) goto LAB_000df1f8;
                bVar4 = *(byte *)(lVar7 + lVar8);
                if ((char)bVar4 < '\0') goto LAB_000df1fc;
                uVar6 = uVar6 | (ulong)(bVar4 & 0x3f) << 0x2a;
                lVar8 = lVar1;
                if (0x3f < bVar4) {
                  if (lVar1 == lVar3) goto LAB_000df1f4;
                  lVar8 = lVar2 + 9;
                  if (lVar3 < lVar8) goto LAB_000df1f8;
                  bVar4 = *(byte *)(lVar7 + lVar1);
                  if ((char)bVar4 < '\0') goto LAB_000df1fc;
                  uVar6 = uVar6 | (ulong)(bVar4 & 0x3f) << 0x30;
                  if (0x3f < bVar4) {
                    if (lVar8 == lVar3) goto LAB_000df1f4;
                    lVar1 = lVar2 + 10;
                    if (lVar3 < lVar1) goto LAB_000df1f8;
                    bVar4 = *(byte *)(lVar7 + lVar8);
                    if ((char)bVar4 < '\0') goto LAB_000df1fc;
                    uVar6 = uVar6 | (ulong)(bVar4 & 0x3f) << 0x36;
                    lVar8 = lVar1;
                    if (0x3f < bVar4) {
                      if (lVar1 == lVar3) goto LAB_000df1f4;
                      lVar8 = lVar2 + 0xb;
                      if (lVar3 < lVar8) goto LAB_000df1f8;
                      bVar4 = *(byte *)(lVar7 + lVar1);
                      if ((char)bVar4 < '\0') goto LAB_000df1fc;
                      if (0x3f < bVar4) {
                        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                                  ("Fatal error",0xb,2,0xd00000000000002b,0x80000000008b8c10,
                                   "SwiftProtobuf/BytecodeReader.swift",0x22,2,0x6a,0);
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0xdf24c);
                        (*pcVar5)();
                      }
                      uVar6 = uVar6 | (ulong)bVar4 << 0x3c;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *unaff_x20 = lVar8;
  }
  return uVar6;
}



/* Entry: 000df24c; end: 000df263;  */

void FUN_000df24c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00843a94);
  return;
}



/* Entry: 000df264; end: 000df277;  */

void FUN_000df264(void)

{
  FUN_000defe8();
  return;
}



/* Entry: 000df278; end: 000df2ef;  */

undefined1  [16] FUN_000df278(void)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  undefined1 auVar7 [16];
  
  lVar2 = *unaff_x20;
  lVar3 = unaff_x20[1];
  if (lVar2 == lVar3) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0xdf2ec);
    (*pcVar4)();
  }
  lVar5 = unaff_x20[2];
  lVar6 = lVar2;
  if (*(char *)(lVar5 + lVar2) != '\0') {
    do {
      if (lVar3 + -1 == lVar6) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0xdf2e8);
        (*pcVar4)();
      }
      pcVar1 = (char *)(lVar5 + 1 + lVar6);
      lVar6 = lVar6 + 1;
    } while (*pcVar1 != '\0');
    if (lVar6 < lVar2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xdf2c0);
      (*pcVar4)();
    }
  }
  if (lVar3 < lVar6 + 1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0xdf2f0);
    (*pcVar4)();
  }
  auVar7._8_8_ = lVar6 - lVar2;
  pcVar1 = (char *)0x0;
  if (lVar5 != 0) {
    pcVar1 = (char *)(lVar5 + lVar2);
  }
  *unaff_x20 = lVar6 + 1;
  auVar7._0_8_ = pcVar1;
  return auVar7;
}



/* Entry: 000df2f0; end: 000df3db;  */

/* WARNING: Removing unreachable block (ram,0x000df3c4) */
/* WARNING: Removing unreachable block (ram,0x000df3c8) */
/* WARNING: Removing unreachable block (ram,0x000df3cc) */

undefined * FUN_000df2f0(undefined *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *unaff_x20;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  if (*unaff_x20 == unaff_x20[1]) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xdf3bc);
    (*pcVar1)();
  }
  FUN_000defe8();
  if (-1 < (long)param_1) {
    puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
    if (param_1 != (undefined *)0x0) {
      uVar2 = 0xaedc70;
      func_0x000115a8(0xaedc70,&UNK_007d9f60);
      puVar3 = param_1;
      __ss15ContiguousArrayV28_allocateBufferUninitialized15minimumCapacitys01_abD0VyxGSi_tFZ
                (param_1,uVar2);
      *(undefined **)(puVar3 + 0x10) = param_1;
    }
    puStack_58 = puVar3 + 0x20;
    lStack_48 = 0;
    puStack_50 = param_1;
    FUN_000df3dc(&puStack_58,&lStack_48,param_1);
    if (lStack_48 <= (long)param_1) {
      *(long *)(puVar3 + 0x10) = lStack_48;
      return puVar3;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xdf3c4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xdf3c0);
  (*pcVar1)();
}



/* Entry: 000df3dc; end: 000df447;  */

void FUN_000df3dc(long *param_1,long *param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (-1 < param_3) {
    if (param_3 != 0) {
      puVar3 = (undefined8 *)(*param_1 + 8);
      plVar2 = param_2;
      lVar4 = param_3;
      do {
        FUN_000df278();
        puVar3[-1] = param_1;
        *puVar3 = plVar2;
        puVar3 = puVar3 + 2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    *param_2 = param_3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xdf448);
  (*pcVar1)();
}



/* Entry: 000df448; end: 000df44f;  */

void FUN_000df448(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_0099b938)();
  return;
}



/* Entry: 000df450; end: 000df47b;  */

long FUN_000df450(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 000df47c; end: 000df523;  */

int FUN_000df47c(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 000df524; end: 000df613;  */

void FUN_000df524(void)

{
  func_0x000df4c8();
  return;
}



/* Entry: 000df614; end: 000df90b;  */

/* WARNING: Removing unreachable block (ram,0x000df7d8) */
/* WARNING: Removing unreachable block (ram,0x000df834) */

void FUN_000df614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  long unaff_x21;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [24];
  long lStack_98;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  do {
    FUN_00109a58();
    uVar1 = unaff_x20[2];
    lVar5 = *unaff_x20;
    if (lVar5 == 0) {
      if (uVar1 != 0) goto LAB_000df688;
    }
    else if (uVar1 != unaff_x20[1] - lVar5) {
LAB_000df688:
      if (*(char *)(lVar5 + uVar1) == '}') {
        if ((lVar5 == 0) || ((ulong)(unaff_x20[1] - lVar5) <= uVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xdf8b0);
          (*pcVar2)();
        }
        unaff_x20[2] = uVar1 + 1;
        lVar5 = unaff_x20[0xb] + 1;
        if (SCARRY8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xdf8b4);
          (*pcVar2)();
        }
        unaff_x20[0xb] = lVar5;
        if (lVar5 <= unaff_x20[4]) {
          return;
        }
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000039,0x80000000008b8850,
                   "SwiftProtobuf/JSONScanner.swift",0x1f,2,0x1ab,0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xdf90c);
        (*pcVar2)();
      }
    }
    lVar5 = unaff_x20[0xe];
    if ((0 < lVar5) && (FUN_0010a6f0(0x2c), unaff_x21 != 0)) {
      return;
    }
    if (unaff_x20[0x10] == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xdf8b8);
      (*pcVar2)();
    }
    lVar3 = unaff_x20[0x13];
    lVar4 = unaff_x20[0xc];
    FUN_0010b360(lVar3,lVar4,unaff_x20[0xd]);
    if (unaff_x21 != 0) {
      return;
    }
    if (((uint)lVar4 & 0xff) == 1) {
      return;
    }
    if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xdf8ac);
      (*pcVar2)();
    }
    unaff_x20[0xe] = lVar5 + 1;
    lVar5 = unaff_x20[9];
    lVar4 = unaff_x20[10];
    FUN_0001393c(unaff_x20 + 6,lVar5);
    (**(code **)(lVar4 + 8))(auStack_b0,param_2,param_3,lVar3,lVar5,lVar4);
    if (lStack_98 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xdf8bc);
      (*pcVar2)();
    }
    FUN_000dfbb8(auStack_b0,auStack_88);
    pcVar2 = (code *)auStack_d0;
    FUN_000d48b4();
    FUN_000dfbd0(lVar3,auStack_b0,0xaedb70,&UNK_007d8040);
    lVar5 = lStack_98;
    func_0x000dfc18(auStack_b0,0xaedb70,&UNK_007d8040);
    lVar4 = lStack_68;
    if (lVar5 == 0) {
      FUN_0001393c(auStack_88,uStack_70);
      (**(code **)(lVar4 + 0x20))(auStack_b0);
      func_0x000d4c28(auStack_b0,lVar3);
    }
    else {
      if (*(long *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xdf8c0);
        (*pcVar2)();
      }
      lVar5 = *(long *)(lVar3 + 0x20);
      FUN_000115f8(lVar3,*(long *)(lVar3 + 0x18));
      (**(code **)(lVar5 + 0x28))();
    }
    (*pcVar2)(auStack_d0,0);
    FUN_00011670(auStack_88);
  } while( true );
}



/* Entry: 000df90c; end: 000dfafb;  */

/* WARNING: Removing unreachable block (ram,0x000dfac8) */

void FUN_000df90c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_118 [24];
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [40];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  do {
    while( true ) {
      lVar6 = *(long *)(unaff_x20 + 0x58);
      if (((0 < lVar6) &&
          (pcVar1 = *(char **)(unaff_x20 + 0x28), pcVar1 != *(char **)(unaff_x20 + 0x30))) &&
         ((*pcVar1 == ';' || (*pcVar1 == ',')))) {
        *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
        FUN_00138a3c();
      }
      uStack_98 = *(undefined8 *)(unaff_x20 + 0x70);
      uStack_a0 = *(undefined8 *)(unaff_x20 + 0x68);
      uStack_88 = *(undefined8 *)(unaff_x20 + 0x80);
      uStack_90 = *(undefined8 *)(unaff_x20 + 0x78);
      uStack_78 = *(undefined8 *)(unaff_x20 + 0x90);
      uStack_80 = *(undefined8 *)(unaff_x20 + 0x88);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x98);
      puVar4 = &uStack_a0;
      FUN_00135ce4(puVar4,uVar5,*(undefined8 *)(unaff_x20 + 0xa0),*(undefined2 *)(unaff_x20 + 0x60))
      ;
      if ((unaff_x21 != 0) || (((uint)uVar5 & 0xff) == 1)) {
        return;
      }
      if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xdfafc);
        (*pcVar3)();
      }
      *(long *)(unaff_x20 + 0x58) = lVar6 + 1;
      FUN_000dfbd0();
      lVar2 = lStack_f8;
      lVar6 = lStack_100;
      if (lStack_100 != 0) break;
      func_0x000dfc18(auStack_118,0xaed1d8,&UNK_007d78b0);
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_d8 = 0;
      uStack_e0 = 0;
      uStack_d0 = 0;
LAB_000df970:
      func_0x000dfc18(&uStack_f0,0xaedb68,&UNK_007d7b30);
    }
    FUN_0001393c(auStack_118,lStack_100);
    (**(code **)(lVar2 + 8))(&uStack_f0,param_2,param_3,puVar4,lVar6,lVar2);
    FUN_00011670(auStack_118);
    if (lStack_d8 == 0) goto LAB_000df970;
    FUN_000dfbb8(&uStack_f0,auStack_c8);
    pcVar3 = (code *)&uStack_f0;
    FUN_000d48b4(pcVar3,puVar4);
    FUN_0012c454(puVar4);
    (*pcVar3)();
    FUN_00011670(auStack_c8);
  } while( true );
}



/* Entry: 000dfafc; end: 000dfb7b;  */

void FUN_000dfafc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_5 + 0x10);
  while ((uVar1 = param_4, lVar2 = param_5, (*pcVar3)(param_4), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    (**(code **)(param_5 + 0x1d0))(param_1,param_2,param_3,uVar1,param_4,param_5);
  }
  return;
}



/* Entry: 000dfb7c; end: 000dfbb7;  */

void FUN_000dfb7c(void)

{
  FUN_000df614();
  return;
}



/* Entry: 000dfbb8; end: 000dfbcf;  */

undefined8 * FUN_000dfbb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 000dfbd0; end: 000dfc57;  */

undefined8 FUN_000dfbd0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x000115a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}


