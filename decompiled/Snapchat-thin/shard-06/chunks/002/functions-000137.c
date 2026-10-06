/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045748f0; end: 10457492b;  */

undefined8 * FUN_1045748f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  return param_1;
}



/* Entry: 10457492c; end: 1045749db;  */

int FUN_10457492c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 10) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1045749dc; end: 104574a43;  */

void FUN_1045749dc(undefined8 param_1,undefined1 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 104574a44; end: 104574a67;  */

bool FUN_104574a44(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104574a68; end: 104574b13;  */

void FUN_104574a68(void)

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



/* Entry: 104574b14; end: 104574b17;  */

void FUN_104574b14(void)

{
  undefined *puVar1;
  
  if (puRam0000000113086668 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd186c0;
  _swift_getWitnessTable(&UNK_10dd186c0,&UNK_110788dc0);
  puRam0000000113086668 = puVar1;
  return;
}



/* Entry: 104574b18; end: 104574b57;  */

void FUN_104574b18(void)

{
  undefined *puVar1;
  
  if (puRam0000000113086668 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd186c0;
  _swift_getWitnessTable(&UNK_10dd186c0,&UNK_110788dc0);
  puRam0000000113086668 = puVar1;
  return;
}



/* Entry: 104574b58; end: 104574cbb;  */

int FUN_104574b58(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104574bd4;
        goto LAB_104574bb8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104574bb8:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_104574bd4:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104574cbc; end: 104574df7;  */

uint FUN_104574cbc(uint param_1)

{
  return param_1 & 1;
}



/* Entry: 104574df8; end: 104574e7b;  */

long FUN_104574df8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104574e7c; end: 104574f27;  */

undefined8 * FUN_104574e7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  uVar1 = param_2[2];
  uVar4 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  uVar2 = param_2[4];
  uVar5 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar5;
  uVar3 = param_2[6];
  uVar6 = param_2[7];
  param_1[6] = uVar3;
  param_1[7] = uVar6;
  uVar7 = param_2[8];
  param_1[8] = uVar7;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  _swift_bridgeObjectRetain();
  _swift_retain(uVar1);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  return param_1;
}



/* Entry: 104574f28; end: 10457503b;  */

undefined8 * FUN_104574f28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  *(undefined1 *)((long)param_1 + 0x4a) = *(undefined1 *)((long)param_2 + 0x4a);
  *(undefined1 *)((long)param_1 + 0x4b) = *(undefined1 *)((long)param_2 + 0x4b);
  return param_1;
}



/* Entry: 10457503c; end: 1045750ef;  */

undefined8 * FUN_10457503c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  _swift_release(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(param_1[4]);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(param_1[6]);
  uVar1 = param_1[7];
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  *(undefined1 *)((long)param_1 + 0x4a) = *(undefined1 *)((long)param_2 + 0x4a);
  *(undefined1 *)((long)param_1 + 0x4b) = *(undefined1 *)((long)param_2 + 0x4b);
  return param_1;
}



/* Entry: 1045750f0; end: 10457519b;  */

int FUN_1045750f0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x4c) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10457519c; end: 1045754bf;  */

void FUN_10457519c(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  long extraout_x8;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x20;
  long lVar14;
  int iVar15;
  undefined1 *puVar16;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = (undefined1 *)*unaff_x20;
  puVar6 = puVar16;
  puVar9 = param_2;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    puVar9 = (undefined1 *)(*(long *)(puVar16 + 0x10) + 1);
    puVar6 = (undefined1 *)0x0;
    func_0x0001014d97ac(0,puVar9,1,puVar16);
    puVar16 = puVar6;
  }
  uVar2 = *(ulong *)(puVar16 + 0x10);
  puVar1 = (undefined1 *)(uVar2 + 1);
  if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar2) {
    puVar6 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
    puVar9 = puVar1;
    func_0x0001014d97ac(puVar6,puVar1,1,puVar16);
    puVar16 = puVar6;
  }
  *(undefined1 **)(puVar16 + 0x10) = puVar1;
  puVar16[uVar2 + 0x20] = 0x22;
  *unaff_x20 = puVar16;
  uVar4 = (uint)((ulong)param_2 >> 0x20);
  uVar10 = uVar4 >> 0x1e;
  iVar15 = (int)param_1;
  iVar12 = (int)((ulong)param_1 >> 0x20);
  if (uVar4 >> 0x1e < 2) {
    if (uVar10 == 0) {
      if (((ulong)param_2 >> 0x30 & 0xff) != 0) {
LAB_104575258:
        if (uVar10 == 2) {
          lVar14 = *(long *)(param_1 + 0x10);
          lVar3 = *(long *)(param_1 + 0x18);
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          puVar16 = puVar6;
          if (puVar6 != (undefined1 *)0x0) {
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar14,(long)puVar16)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1045754b8);
              (*pcVar5)();
            }
            puVar6 = puVar6 + (lVar14 - (long)puVar16);
          }
          puVar9 = (undefined1 *)(lVar3 - lVar14);
          if (SBORROW8(lVar3,lVar14)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1045754b4);
            (*pcVar5)();
          }
          __s10Foundation13__DataStorageC7_lengthSivg();
          if ((long)puVar9 <= (long)puVar16) {
            puVar16 = puVar9;
          }
          puVar9 = (undefined1 *)0x0;
          if (puVar6 != (undefined1 *)0x0) {
            puVar9 = puVar16 + (long)puVar6;
          }
        }
        else if (uVar10 == 1) {
          lVar14 = (long)iVar15;
          puVar16 = (undefined1 *)((param_1 >> 0x20) - lVar14);
          if (param_1 >> 0x20 < lVar14) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1045754b0);
            (*pcVar5)();
          }
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          if (puVar6 == (undefined1 *)0x0) {
            __s10Foundation13__DataStorageC7_lengthSivg();
            puVar6 = (undefined1 *)0x0;
          }
          else {
            puVar9 = puVar6;
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar14,(long)puVar9)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1045754bc);
              (*pcVar5)();
            }
            puVar6 = puVar6 + (lVar14 - (long)puVar9);
            __s10Foundation13__DataStorageC7_lengthSivg();
            if (puVar6 != (undefined1 *)0x0) {
              if ((long)puVar16 <= (long)puVar9) {
                puVar9 = puVar16;
              }
              puVar9 = puVar9 + (long)puVar6;
              goto LAB_1045753b8;
            }
          }
          puVar9 = (undefined1 *)0x0;
        }
        else {
          uStack_5e = (undefined1)param_1;
          uStack_5d = (undefined1)((ulong)param_1 >> 8);
          uStack_5c = (undefined1)((ulong)param_1 >> 0x10);
          uStack_5b = (undefined1)((ulong)param_1 >> 0x18);
          uStack_5a = (undefined1)((ulong)param_1 >> 0x20);
          uStack_59 = (undefined1)((ulong)param_1 >> 0x28);
          uStack_58 = (undefined1)((ulong)param_1 >> 0x30);
          uStack_57 = (undefined1)((ulong)param_1 >> 0x38);
          uStack_56 = SUB81(param_2,0);
          uStack_55 = (undefined1)((ulong)param_2 >> 8);
          uStack_54 = (undefined1)((ulong)param_2 >> 0x10);
          uStack_53 = (undefined1)((ulong)param_2 >> 0x18);
          uStack_52 = (undefined1)((ulong)param_2 >> 0x20);
          uStack_51 = (undefined1)((ulong)param_2 >> 0x28);
          puVar9 = (undefined1 *)((ulong)param_2 >> 0x30 & 0xff);
          puVar6 = &uStack_5e;
        }
LAB_1045753b8:
        FUN_104573ec8(puVar6);
      }
    }
    else {
      if (SBORROW4(iVar12,iVar15)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1045754ac);
        (*pcVar5)();
      }
      if (0 < iVar12 - iVar15) goto LAB_104575258;
    }
  }
  else if (uVar10 == 2) {
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1045754a8);
      (*pcVar5)();
    }
    if (0 < *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) goto LAB_104575258;
  }
  puVar13 = (undefined8 *)*unaff_x20;
  puVar7 = puVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar7 & 1) == 0) {
    puVar9 = (undefined1 *)(puVar13[2] + 1);
    puVar7 = (undefined8 *)0x0;
    func_0x0001014d97ac(0,puVar9,1,puVar13);
    puVar13 = puVar7;
  }
  uVar2 = puVar13[2];
  puVar6 = (undefined1 *)(uVar2 + 1);
  if ((ulong)puVar13[3] >> 1 <= uVar2) {
    puVar7 = (undefined8 *)(ulong)(1 < (ulong)puVar13[3]);
    puVar9 = puVar6;
    func_0x0001014d97ac(puVar7,puVar6,1,puVar13);
    puVar13 = puVar7;
  }
  puVar13[2] = puVar6;
  *(undefined1 *)((long)puVar13 + uVar2 + 0x20) = 0x22;
  *unaff_x20 = puVar13;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar14 = unaff_x20[3];
  puVar13 = puVar7;
  if (*(char *)((long)unaff_x20 + 0x4a) == '\x01') {
    if ((*(long *)(lVar14 + 0x10) == 0) || (func_0x00010035a314(), ((ulong)puVar9 & 1) == 0)) {
LAB_104575548:
      lVar14 = unaff_x20[8];
      if (lVar14 != 0) {
        if ((*(long *)(lVar14 + 0x10) == 0) ||
           (func_0x00010035a314(puVar7), ((ulong)puVar9 & 1) == 0)) {
          lStack_c0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          lStack_c8 = 0;
          uStack_d0 = 0;
        }
        else {
          FUN_10457a2e0(*(long *)(lVar14 + 0x38) + (long)puVar7 * 0x28,&uStack_e0);
          if (lStack_c8 != 0) {
            func_0x0001000a8868(&uStack_e0,lStack_c8);
            lVar14 = *(long *)(lStack_c8 + -8);
            (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
            (**(code **)(lVar14 + 0x10))(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
            func_0x00010457a324(&uStack_e0,0x112db4800,&UNK_10d95efc0);
            (**(code **)(lStack_c0 + 0x18))(auStack_108,lStack_c8,lStack_c0);
            (**(code **)(lVar14 + 8))
                      (auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_c8);
            func_0x0001000a8868(auStack_108,uStack_f0);
            uVar8 = uStack_f0;
            lVar14 = lStack_e8;
            (**(code **)(lStack_e8 + 0x10))(uStack_f0,lStack_e8);
            func_0x0001000834e4(auStack_108);
            func_0x0001045734e8(uVar8,lVar14);
            _swift_bridgeObjectRelease(lVar14);
            return;
          }
        }
        puVar13 = &uStack_e0;
        func_0x00010457a324(puVar13,0x112db4800,&UNK_10d95efc0);
      }
      func_0x0001045406b8();
      _swift_allocError(&UNK_110788dc0,puVar13,0,0);
      *(undefined1 *)puVar13 = 4;
      _swift_willThrow();
      return;
    }
    puVar11 = (undefined8 *)(*(long *)(lVar14 + 0x38) + (long)puVar13 * 0x28 + 0x18);
  }
  else if (((*(long *)(lVar14 + 0x10) == 0) || (func_0x00010035a314(), ((ulong)puVar9 & 1) == 0)) ||
          (puVar11 = (undefined8 *)(*(long *)(lVar14 + 0x38) + (long)puVar13 * 0x28),
          *(char *)(puVar11 + 2) == '\x01')) goto LAB_104575548;
  FUN_1045733a4(*puVar11,puVar11[1]);
  return;
}



/* Entry: 1045754c0; end: 1045756e7;  */

void FUN_1045754c0(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  puVar1 = param_1;
  if (*(char *)(unaff_x20 + 0x4a) == '\x01') {
    if ((*(long *)(lVar4 + 0x10) == 0) || (func_0x00010035a314(), (param_2 & 1) == 0)) {
LAB_104575548:
      lVar4 = *(long *)(unaff_x20 + 0x40);
      if (lVar4 != 0) {
        if ((*(long *)(lVar4 + 0x10) == 0) || (func_0x00010035a314(param_1), (param_2 & 1) == 0)) {
          lStack_60 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          lStack_68 = 0;
          uStack_70 = 0;
        }
        else {
          FUN_10457a2e0(*(long *)(lVar4 + 0x38) + (long)param_1 * 0x28,&uStack_80);
          if (lStack_68 != 0) {
            func_0x0001000a8868(&uStack_80,lStack_68);
            lVar4 = *(long *)(lStack_68 + -8);
            (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
            (**(code **)(lVar4 + 0x10))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
            func_0x00010457a324(&uStack_80,0x112db4800,&UNK_10d95efc0);
            (**(code **)(lStack_60 + 0x18))(auStack_a8,lStack_68,lStack_60);
            (**(code **)(lVar4 + 8))
                      (auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_68);
            func_0x0001000a8868(auStack_a8,uStack_90);
            uVar2 = uStack_90;
            lVar4 = lStack_88;
            (**(code **)(lStack_88 + 0x10))(uStack_90,lStack_88);
            func_0x0001000834e4(auStack_a8);
            func_0x0001045734e8(uVar2,lVar4);
            _swift_bridgeObjectRelease(lVar4);
            return;
          }
        }
        puVar1 = &uStack_80;
        func_0x00010457a324(puVar1,0x112db4800,&UNK_10d95efc0);
      }
      func_0x0001045406b8();
      _swift_allocError(&UNK_110788dc0,puVar1,0,0);
      *(undefined1 *)puVar1 = 4;
      _swift_willThrow();
      return;
    }
    puVar3 = (undefined8 *)(*(long *)(lVar4 + 0x38) + (long)puVar1 * 0x28 + 0x18);
  }
  else if (((*(long *)(lVar4 + 0x10) == 0) || (func_0x00010035a314(), (param_2 & 1) == 0)) ||
          (puVar3 = (undefined8 *)(*(long *)(lVar4 + 0x38) + (long)puVar1 * 0x28),
          *(char *)(puVar3 + 2) == '\x01')) goto LAB_104575548;
  FUN_1045733a4(*puVar3,puVar3[1]);
  return;
}



/* Entry: 1045756e8; end: 1045757d7;  */

void FUN_1045756e8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  
  FUN_1045754c0(param_2);
  if (unaff_x21 == 0) {
    if ((char)unaff_x20[9] == '\x01') {
      if (param_1 < 0) {
        uVar3 = *unaff_x20;
        uVar1 = uVar3;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar2 = uVar3;
        if ((uVar1 & 1) == 0) {
          uVar2 = 0;
          func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
        }
        uVar1 = *(ulong *)(uVar2 + 0x10);
        uVar3 = uVar2;
        if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
          uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
          func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
        }
        *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
        *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x2d;
        *unaff_x20 = uVar3;
        param_1 = -param_1;
      }
      func_0x0001045736fc(param_1);
    }
    else {
      func_0x0001045737d0(param_1);
    }
  }
  return;
}



/* Entry: 1045757d8; end: 104575b37;  */

/* WARNING: Removing unreachable block (ram,0x000104575aa4) */
/* WARNING: Removing unreachable block (ram,0x000104575904) */
/* WARNING: Removing unreachable block (ram,0x000104575908) */

void FUN_1045757d8(long param_1,undefined8 param_2,code *param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x12;
  ulong *unaff_x20;
  ulong uVar5;
  long lVar6;
  long unaff_x21;
  undefined1 *puVar7;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  long lVar11;
  undefined1 auStack_90 [8];
  code *pcStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  long lStack_68;
  
  lVar8 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (long)puVar7 - extraout_x12;
  FUN_1045754c0(param_2);
  if (unaff_x21 == 0) {
    uVar5 = *unaff_x20;
    uVar1 = uVar5;
    lStack_68 = param_1;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar5;
    pcStack_70 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar1 = *(ulong *)(uVar4 + 0x10);
    uVar5 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      func_0x0001014d97ac(uVar5,uVar1 + 1,1,uVar4);
    }
    lVar6 = lStack_68;
    *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x5b;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar2 = lStack_68;
    __sSa8endIndexSivg(lStack_68,param_5);
    if (lVar2 != 0) {
      __sSayxSicig(lVar11,0,lVar6,param_5);
      pcVar10 = *(code **)(lVar8 + 0x20);
      (*pcVar10)(puVar7,lVar11,param_5);
      (*pcStack_70)();
      pcVar9 = *(code **)(lVar8 + 8);
      (*pcVar9)(puVar7,param_5);
      lVar8 = lVar6;
      __sSa8endIndexSivg(lVar6,param_5);
      if (lVar8 != 1) {
        lVar8 = 1;
        pcStack_88 = pcVar9;
        pcStack_80 = pcVar10;
        uStack_78 = param_4;
        do {
          __sSayxSicig(lVar11,lVar8,lVar6,param_5);
          lVar2 = lVar8 + 1;
          if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x104575ab4);
            (*pcVar9)();
          }
          (*pcStack_80)(puVar7,lVar11,param_5);
          uVar5 = *unaff_x20;
          uVar1 = uVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar4 = uVar5;
          if ((uVar1 & 1) == 0) {
            uVar4 = 0;
            func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
          }
          uVar1 = *(ulong *)(uVar4 + 0x10);
          uVar5 = uVar4;
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            func_0x0001014d97ac(uVar5,uVar1 + 1,1,uVar4);
          }
          *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
          *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x2c;
          *unaff_x20 = uVar5;
          (*pcStack_70)();
          (*pcStack_88)(puVar7,param_5);
          lVar6 = lStack_68;
          lVar3 = lStack_68;
          __sSa8endIndexSivg(lStack_68,param_5);
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar3);
      }
    }
    uVar5 = *unaff_x20;
    uVar1 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar5;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar1 = *(ulong *)(uVar4 + 0x10);
    uVar5 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      func_0x0001014d97ac(uVar5,uVar1 + 1,1,uVar4);
    }
    *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x5d;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 104575b38; end: 104575d83;  */

void FUN_104575b38(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  long unaff_x21;
  long lVar9;
  long lVar10;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  lVar10 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1045754c0(param_2);
  if (unaff_x21 == 0) {
    (**(code **)(lVar10 + 0x10))(lVar9,param_1,param_3);
    uVar1 = 0x113084cc0;
    func_0x0001000285a8(0x113084cc0,&UNK_10dd16720);
    puVar2 = &uStack_a0;
    _swift_dynamicCast(puVar2,lVar9,param_3,uVar1,6);
    if ((int)puVar2 == 0) {
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uVar7 = 0xdd16728;
      func_0x00010457a324(&uStack_a0,0x113084cc8);
      if (((*(byte *)((long)unaff_x20 + 0x49) & 1) == 0) &&
         (FUN_1045576c0(param_3,param_4), (uVar7 & 0xff) != 1)) {
        FUN_104573280();
      }
      else {
        (**(code **)(param_4 + 0x28))(param_3,param_4);
        if (param_3 < 0) {
          uVar8 = *unaff_x20;
          uVar3 = uVar8;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar4 = uVar8;
          if ((uVar3 & 1) == 0) {
            uVar4 = 0;
            func_0x0001014d97ac(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
          }
          uVar3 = *(ulong *)(uVar4 + 0x10);
          uVar8 = uVar4;
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
            uVar8 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            func_0x0001014d97ac(uVar8,uVar3 + 1,1,uVar4);
          }
          *(ulong *)(uVar8 + 0x10) = uVar3 + 1;
          *(undefined1 *)(uVar8 + uVar3 + 0x20) = 0x2d;
          *unaff_x20 = uVar8;
        }
        func_0x0001045736fc();
      }
    }
    else {
      FUN_10457a2c8(&uStack_a0,auStack_78);
      func_0x0001000a8868(auStack_78,uStack_60);
      uVar7 = 0x1000000;
      if (*(char *)((long)unaff_x20 + 0x4b) == '\0') {
        uVar7 = 0;
      }
      uVar6 = 0x10000;
      if (*(char *)((long)unaff_x20 + 0x4a) == '\0') {
        uVar6 = 0;
      }
      uVar5 = 0x100;
      if (*(char *)((long)unaff_x20 + 0x49) == '\0') {
        uVar5 = 0;
      }
      (**(code **)(lStack_58 + 8))(uVar5 | (byte)unaff_x20[9] | uVar6 | uVar7,uStack_60,lStack_58);
      func_0x000104540f24();
      func_0x0001000834e4(auStack_78);
    }
  }
  return;
}



/* Entry: 104575d84; end: 104576313;  */

/* WARNING: Removing unreachable block (ram,0x00010457606c) */

void FUN_104575d84(undefined8 param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long extraout_x8;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong *unaff_x20;
  ulong uVar11;
  long unaff_x21;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong auStack_70 [2];
  ulong uStack_58;
  
  lVar14 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = (long)&uStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1045754c0(param_2);
  if (unaff_x21 == 0) {
    (**(code **)(lVar14 + 0x10))(lVar12,param_1,param_3);
    uVar3 = 0x113084cc0;
    func_0x0001000285a8(0x113084cc0,&UNK_10dd16720);
    puVar4 = &uStack_110;
    _swift_dynamicCast(puVar4,lVar12,param_3,uVar3,6);
    if ((int)puVar4 == 0) {
      uStack_f0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      func_0x00010457a324(&uStack_110,0x113084cc8,&UNK_10dd16728);
      puVar5 = param_3;
      _swift_conformsToProtocol(param_3,&DAT_10e8147e0);
      if (puVar5 == (undefined1 *)0x0) {
        func_0x0001045406b8();
        _swift_allocError(&UNK_110788dc0,puVar5,0,0);
        *puVar5 = 4;
        _swift_willThrow();
      }
      else {
        (**(code **)(puVar5 + 8))(&uStack_b8,param_3,puVar5);
        uStack_138 = unaff_x20[2];
        uStack_140 = unaff_x20[3];
        uStack_118 = unaff_x20[4];
        uStack_120 = unaff_x20[5];
        uStack_128 = unaff_x20[6];
        uStack_130 = unaff_x20[7];
        uVar13 = unaff_x20[8];
        uStack_58 = uStack_b0;
        uStack_78 = uStack_a0;
        auStack_70[0] = uStack_a8;
        uStack_88 = uStack_90;
        uStack_80 = uStack_98;
        unaff_x20[5] = uStack_a0;
        unaff_x20[4] = uStack_a8;
        unaff_x20[7] = uStack_90;
        unaff_x20[6] = uStack_98;
        unaff_x20[3] = uStack_b0;
        unaff_x20[2] = uStack_b8;
        _swift_bridgeObjectRetain(uVar13);
        _swift_retain(uStack_b8);
        FUN_10457a20c(&uStack_58,auStack_e0,0x113085000,&UNK_10dd187f0);
        FUN_10457a20c(auStack_70,auStack_e0,0x113085008,&UNK_10dd18d40);
        FUN_10457a20c(&uStack_78,auStack_e0,0x113085008,&UNK_10dd18d40);
        FUN_10457a20c(&uStack_80,auStack_e0,0x112d38270,&UNK_10d905a20);
        FUN_10457a20c(&uStack_88,auStack_e0,0x113085010,&UNK_10dd18d50);
        FUN_104579d34(param_1);
        (**(code **)(param_4 + 0x48))();
        uVar2 = uStack_138;
        uVar1 = uStack_140;
        uVar11 = *unaff_x20;
        uVar6 = uVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar7 = uVar11;
        if ((uVar6 & 1) == 0) {
          uVar7 = 0;
          func_0x0001014d97ac(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
        }
        uVar6 = *(ulong *)(uVar7 + 0x10);
        uVar11 = uVar7;
        if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
          uVar11 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
          func_0x0001014d97ac(uVar11,uVar6 + 1,1,uVar7);
        }
        *(ulong *)(uVar11 + 0x10) = uVar6 + 1;
        *(undefined1 *)(uVar11 + uVar6 + 0x20) = 0x7d;
        _swift_release(uStack_b8);
        func_0x00010457a324(&uStack_58,0x113085000,&UNK_10dd187f0);
        func_0x00010457a324(auStack_70,0x113085008,&UNK_10dd18d40);
        func_0x00010457a324(&uStack_78,0x113085008,&UNK_10dd18d40);
        func_0x00010457a324(&uStack_80,0x112d38270,&UNK_10d905a20);
        func_0x00010457a324(&uStack_88,0x113085010,&UNK_10dd18d50);
        *unaff_x20 = uVar11;
        *(undefined2 *)(unaff_x20 + 1) = 0x2c;
        _swift_release(unaff_x20[2]);
        _swift_bridgeObjectRelease(unaff_x20[3]);
        _swift_bridgeObjectRelease(unaff_x20[4]);
        _swift_bridgeObjectRelease(unaff_x20[5]);
        _swift_bridgeObjectRelease(unaff_x20[6]);
        uVar6 = unaff_x20[7];
        unaff_x20[2] = uVar2;
        unaff_x20[3] = uVar1;
        unaff_x20[4] = uStack_118;
        unaff_x20[5] = uStack_120;
        unaff_x20[6] = uStack_128;
        unaff_x20[7] = uStack_130;
        _swift_bridgeObjectRelease(uVar6);
        _swift_bridgeObjectRelease(unaff_x20[8]);
        unaff_x20[8] = uVar13;
      }
    }
    else {
      FUN_10457a2c8(&uStack_110,auStack_e0);
      func_0x0001000a8868(auStack_e0,uStack_c8);
      uVar10 = 0x1000000;
      if (*(char *)((long)unaff_x20 + 0x4b) == '\0') {
        uVar10 = 0;
      }
      uVar9 = 0x10000;
      if (*(char *)((long)unaff_x20 + 0x4a) == '\0') {
        uVar9 = 0;
      }
      uVar8 = 0x100;
      if (*(char *)((long)unaff_x20 + 0x49) == '\0') {
        uVar8 = 0;
      }
      (**(code **)(lStack_c0 + 8))(uVar8 | (byte)unaff_x20[9] | uVar9 | uVar10,uStack_c8,lStack_c0);
      func_0x000104540f24();
      func_0x0001000834e4(auStack_e0);
    }
  }
  return;
}



/* Entry: 104576314; end: 104576327;  */

void FUN_104576314(void)

{
  FUN_104575d84();
  return;
}



/* Entry: 104576328; end: 1045765df;  */

void FUN_104576328(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  
  FUN_1045754c0(param_2);
  if (unaff_x21 == 0) {
    uVar5 = *unaff_x20;
    uVar1 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar1 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x0001014d97ac(uVar5,uVar1 + 1,1,uVar3);
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
            puVar2 = &UNK_10f748a00;
            uVar4 = 10;
          }
          else {
            puVar2 = &UNK_10f7489f4;
            uVar4 = 0xb;
          }
        }
        else {
          puVar2 = &UNK_10f7489ee;
          uVar4 = 5;
        }
        FUN_104540d74(puVar2,uVar4);
      }
      else {
        __sSf16debugDescriptionSSvg();
        func_0x000104540f24();
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
            func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
          }
          uVar1 = *(ulong *)(uVar3 + 0x10);
          uVar5 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            func_0x0001014d97ac(uVar5,uVar1 + 1,1,uVar3);
          }
          *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
          *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x2c;
          *unaff_x20 = uVar5;
          if ((((uint)fVar8 ^ 0xffffffff) & 0x7f800000) == 0) {
            if (((uint)fVar8 & 0x7fffff) == 0) {
              if (0.0 <= fVar8) {
                FUN_104540d74(&UNK_10f748a00,10);
              }
              else {
                FUN_104540d74(&UNK_10f7489f4,0xb);
              }
            }
            else {
              FUN_104540d74(&UNK_10f7489ee,5);
            }
          }
          else {
            __sSf16debugDescriptionSSvg(fVar8);
            func_0x000104540f24();
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
      func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar1 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x0001014d97ac(uVar5,uVar1 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x5d;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 1045765e0; end: 104576897;  */

void FUN_1045765e0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar5;
  long lVar6;
  double *pdVar7;
  double dVar8;
  
  FUN_1045754c0(param_2);
  if (unaff_x21 == 0) {
    uVar5 = *unaff_x20;
    uVar1 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar1 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x0001014d97ac(uVar5,uVar1 + 1,1,uVar3);
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
            puVar2 = &UNK_10f748a00;
            uVar4 = 10;
          }
          else {
            puVar2 = &UNK_10f7489f4;
            uVar4 = 0xb;
          }
        }
        else {
          puVar2 = &UNK_10f7489ee;
          uVar4 = 5;
        }
        FUN_104540d74(puVar2,uVar4);
      }
      else {
        __sSd16debugDescriptionSSvg();
        func_0x000104540f24();
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
            func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
          }
          uVar1 = *(ulong *)(uVar3 + 0x10);
          uVar5 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            func_0x0001014d97ac(uVar5,uVar1 + 1,1,uVar3);
          }
          *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
          *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x2c;
          *unaff_x20 = uVar5;
          if ((((ulong)dVar8 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
            if (((ulong)dVar8 & 0xfffffffffffff) == 0) {
              if (0.0 <= dVar8) {
                FUN_104540d74(&UNK_10f748a00,10);
              }
              else {
                FUN_104540d74(&UNK_10f7489f4,0xb);
              }
            }
            else {
              FUN_104540d74(&UNK_10f7489ee,5);
            }
          }
          else {
            __sSd16debugDescriptionSSvg(dVar8);
            func_0x000104540f24();
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
      func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar1 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x0001014d97ac(uVar5,uVar1 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x5d;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 104576898; end: 104576a83;  */

void FUN_104576898(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined4 *puVar6;
  
  FUN_1045754c0(param_2);
  if (unaff_x21 == 0) {
    uVar4 = *unaff_x20;
    uVar2 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar4 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x0001014d97ac(uVar4,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x5b;
    *unaff_x20 = uVar4;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 != 0) {
      func_0x0001045736fc(*(undefined4 *)(param_1 + 0x20));
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
            func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
          }
          uVar2 = *(ulong *)(uVar3 + 0x10);
          uVar4 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
            uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            func_0x0001014d97ac(uVar4,uVar2 + 1,1,uVar3);
          }
          *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
          *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2c;
          *unaff_x20 = uVar4;
          func_0x0001045736fc(uVar1);
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
      func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x0001014d97ac(uVar4,uVar2 + 1,1,uVar3);
      uVar3 = uVar4;
    }
    *(ulong *)(uVar3 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar3 + uVar2 + 0x20) = 0x5d;
    *unaff_x20 = uVar3;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 104576a84; end: 104576efb;  */

void FUN_104576a84(long param_1,undefined8 param_2)

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
  FUN_1045754c0(param_2);
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
      func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar4 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      func_0x0001014d97ac(uVar4,uVar1 + 1,1,uVar2);
    }
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar4 + uVar1 + 0x20) = 0x5b;
    *unaff_x20 = uVar4;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      func_0x0001045736fc(*(undefined8 *)(param_1 + 0x20));
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
            func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
          }
          uVar1 = *(ulong *)(uVar2 + 0x10);
          uVar3 = uVar2;
          if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
            uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
            func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
          }
          *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
          *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x2c;
          *unaff_x20 = uVar3;
          func_0x0001045736fc(uVar5);
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
      func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
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
      func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar3 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
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
        func_0x0001014d97ac(uVar2,uVar1 + 1,1,uVar3);
      }
      *(ulong *)(uVar2 + 0x10) = uVar1 + 1;
      *(undefined1 *)(uVar2 + uVar1 + 0x20) = 0x22;
      *unaff_x20 = uVar2;
      func_0x0001045736fc(uVar5);
      uVar3 = *unaff_x20;
      uVar1 = uVar3;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar2 = uVar3;
      if ((uVar1 & 1) == 0) {
        uVar2 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
      }
      uVar1 = *(ulong *)(uVar2 + 0x10);
      uVar3 = uVar2;
      if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
        uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
        func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
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
            func_0x0001014d97ac(uVar4,uVar1,1,uVar3);
          }
          *(ulong *)(uVar4 + 0x10) = uVar1;
          *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2c;
          uVar3 = uVar4;
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
            uVar3 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            func_0x0001014d97ac(uVar3,uVar2 + 2,1,uVar4);
          }
          *(ulong *)(uVar3 + 0x10) = uVar2 + 2;
          *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x22;
          *unaff_x20 = uVar3;
          func_0x0001045736fc(uVar5);
          uVar3 = *unaff_x20;
          uVar1 = uVar3;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar2 = uVar3;
          if ((uVar1 & 1) == 0) {
            uVar2 = 0;
            func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
          }
          uVar1 = *(ulong *)(uVar2 + 0x10);
          uVar3 = uVar2;
          if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
            uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
            func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
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
    func_0x0001014d97ac(uVar2,uVar1 + 1,1,uVar3);
  }
  *(ulong *)(uVar2 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar2 + uVar1 + 0x20) = 0x5d;
  *unaff_x20 = uVar2;
  *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  return;
}



/* Entry: 104576efc; end: 1045771eb;  */

void FUN_104576efc(long param_1,undefined8 param_2)

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
  
  FUN_1045754c0(param_2);
  if (unaff_x21 == 0) {
    uVar4 = *unaff_x20;
    uVar2 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar4 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x0001014d97ac(uVar4,uVar2 + 1,1,uVar3);
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
          func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
        }
        uVar2 = *(ulong *)(uVar3 + 0x10);
        uVar4 = uVar3;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
          uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          func_0x0001014d97ac(uVar4,uVar2 + 1,1,uVar3);
        }
        *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
        *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2d;
        *unaff_x20 = uVar4;
        lVar5 = -lVar5;
      }
      func_0x0001045736fc(lVar5);
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
            func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
          }
          uVar2 = *(ulong *)(uVar3 + 0x10);
          uVar4 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
            uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            func_0x0001014d97ac(uVar4,uVar2 + 1,1,uVar3);
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
              func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
            }
            uVar2 = *(ulong *)(uVar3 + 0x10);
            uVar4 = uVar3;
            if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
              uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
              func_0x0001014d97ac(uVar4,uVar2 + 1,1,uVar3);
            }
            *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
            *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2d;
            *unaff_x20 = uVar4;
            lVar5 = -lVar5;
          }
          func_0x0001045736fc(lVar5);
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
      func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar4 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x0001014d97ac(uVar4,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x5d;
    *unaff_x20 = uVar4;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 1045771ec; end: 1045776ff;  */

void FUN_1045771ec(long param_1,undefined8 param_2)

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
  FUN_1045754c0(param_2);
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
      func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar8 = *(ulong *)(uVar3 + 0x10);
    uVar6 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x0001014d97ac(uVar6,uVar8 + 1,1,uVar3);
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
          func_0x0001014d97ac(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
        }
        uVar8 = *(ulong *)(uVar3 + 0x10);
        uVar5 = uVar3;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
          uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          func_0x0001014d97ac(uVar5,uVar8 + 1,1,uVar3);
        }
        *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
        *(undefined1 *)(uVar5 + uVar8 + 0x20) = 0x2d;
        *unaff_x20 = uVar5;
        lVar7 = -lVar7;
      }
      func_0x0001045736fc(lVar7);
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
            func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
          }
          uVar8 = *(ulong *)(uVar3 + 0x10);
          uVar5 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            func_0x0001014d97ac(uVar5,uVar8 + 1,1,uVar3);
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
              func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
            }
            uVar8 = *(ulong *)(uVar3 + 0x10);
            uVar5 = uVar3;
            if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
              uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
              func_0x0001014d97ac(uVar5,uVar8 + 1,1,uVar3);
            }
            *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
            *(undefined1 *)(uVar5 + uVar8 + 0x20) = 0x2d;
            *unaff_x20 = uVar5;
            lVar7 = -lVar7;
          }
          func_0x0001045736fc(lVar7);
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
      func_0x0001014d97ac(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
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
      func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar8 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x0001014d97ac(uVar5,uVar8 + 1,1,uVar3);
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
            func_0x0001014d97ac(uVar6,uVar3,1,uVar5);
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
          func_0x0001014d97ac(uVar3,lVar1,1,uVar5);
        }
        *(long *)(uVar3 + 0x10) = lVar1;
        *(undefined1 *)(uVar3 + uVar8 + 0x20) = 0x22;
        *unaff_x20 = uVar3;
        if (lVar7 < 0) {
          lVar2 = uVar8 + 2;
          uVar8 = uVar3;
          if ((long)(*(ulong *)(uVar3 + 0x18) >> 1) < lVar2) {
            uVar8 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            func_0x0001014d97ac(uVar8,lVar2,1,uVar3);
          }
          *(long *)(uVar8 + 0x10) = lVar2;
          *(undefined1 *)(uVar8 + lVar1 + 0x20) = 0x2d;
          *unaff_x20 = uVar8;
          lVar7 = -lVar7;
        }
        func_0x0001045736fc(lVar7);
        uVar5 = *unaff_x20;
        uVar8 = uVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar3 = uVar5;
        if ((uVar8 & 1) == 0) {
          uVar3 = 0;
          func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
        }
        uVar8 = *(ulong *)(uVar3 + 0x10);
        uVar5 = uVar3;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
          uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          func_0x0001014d97ac(uVar5,uVar8 + 1,1,uVar3);
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
    func_0x0001014d97ac(uVar3,uVar8 + 1,1,uVar5);
  }
  *(ulong *)(uVar3 + 0x10) = uVar8 + 1;
  *(undefined1 *)(uVar3 + uVar8 + 0x20) = 0x5d;
  *unaff_x20 = uVar3;
  *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  return;
}



/* Entry: 104577700; end: 104577937;  */

void FUN_104577700(long param_1,undefined8 param_2)

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
  
  FUN_1045754c0(param_2);
  if (unaff_x21 == 0) {
    uVar7 = *unaff_x20;
    uVar2 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar7;
    if ((uVar2 & 1) == 0) {
      uVar5 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    }
    uVar2 = *(ulong *)(uVar5 + 0x10);
    uVar7 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      func_0x0001014d97ac(uVar7,uVar2 + 1,1,uVar5);
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
      FUN_104540d74(pcVar3,uVar6);
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
            func_0x0001014d97ac(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
          }
          uVar2 = *(ulong *)(uVar5 + 0x10);
          uVar7 = uVar5;
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
            uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
            func_0x0001014d97ac(uVar7,uVar2 + 1,1,uVar5);
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
          FUN_104540d74(pcVar4,uVar6);
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
      func_0x0001014d97ac(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    }
    uVar2 = *(ulong *)(uVar5 + 0x10);
    uVar7 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      func_0x0001014d97ac(uVar7,uVar2 + 1,1,uVar5);
    }
    *(ulong *)(uVar7 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar7 + uVar2 + 0x20) = 0x5d;
    *unaff_x20 = uVar7;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 104577938; end: 104577b5b;  */

void FUN_104577938(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined8 *puVar7;
  
  FUN_1045754c0(param_2);
  if (unaff_x21 == 0) {
    uVar5 = *unaff_x20;
    uVar3 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar3 = *(ulong *)(uVar4 + 0x10);
    uVar5 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      func_0x0001014d97ac(uVar5,uVar3 + 1,1,uVar4);
    }
    *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
    *(undefined1 *)(uVar5 + uVar3 + 0x20) = 0x5b;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      _swift_bridgeObjectRetain(uVar2);
      FUN_1045727d4(uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      lVar6 = lVar6 + -1;
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)(param_1 + 0x38);
        do {
          uVar1 = puVar7[-1];
          uVar2 = *puVar7;
          uVar5 = *unaff_x20;
          _swift_bridgeObjectRetain(uVar2);
          uVar3 = uVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar4 = uVar5;
          if ((uVar3 & 1) == 0) {
            uVar4 = 0;
            func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
          }
          uVar3 = *(ulong *)(uVar4 + 0x10);
          uVar5 = uVar4;
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            func_0x0001014d97ac(uVar5,uVar3 + 1,1,uVar4);
          }
          puVar7 = puVar7 + 2;
          *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
          *(undefined1 *)(uVar5 + uVar3 + 0x20) = 0x2c;
          *unaff_x20 = uVar5;
          FUN_1045727d4(uVar1,uVar2);
          _swift_bridgeObjectRelease(uVar2);
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      uVar5 = *unaff_x20;
    }
    uVar3 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar3 = *(ulong *)(uVar4 + 0x10);
    uVar5 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      func_0x0001014d97ac(uVar5,uVar3 + 1,1,uVar4);
    }
    *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
    *(undefined1 *)(uVar5 + uVar3 + 0x20) = 0x5d;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 104577b5c; end: 104577fc3;  */

void FUN_104577b5c(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong *puVar6;
  uint uVar7;
  int iVar8;
  ulong *unaff_x20;
  ulong *puVar9;
  long unaff_x21;
  ulong unaff_x22;
  long lVar10;
  int iVar11;
  ulong *unaff_x24;
  undefined8 unaff_x25;
  ulong uVar12;
  undefined1 auStack_f0 [16];
  ulong *puStack_e0;
  ulong *puStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined8 uStack_c0;
  ulong *puStack_b0;
  ulong *puStack_a8;
  ulong uStack_a0;
  undefined8 uStack_76;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_2;
  FUN_1045754c0(param_2);
  puVar9 = unaff_x20;
  if (unaff_x21 == 0) {
    puVar9 = (ulong *)*unaff_x20;
    param_2 = puVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)param_2 & 1) == 0) {
      puVar5 = (ulong *)(puVar9[2] + 1);
      param_2 = (ulong *)0x0;
      param_3 = (ulong *)0x1;
      func_0x0001014d97ac(0,puVar5);
      param_4 = puVar9;
      puVar9 = param_2;
    }
    uVar12 = puVar9[2];
    unaff_x24 = (ulong *)(uVar12 + 1);
    if (puVar9[3] >> 1 <= uVar12) {
      param_2 = (ulong *)(ulong)(1 < puVar9[3]);
      param_3 = (ulong *)0x1;
      puVar5 = unaff_x24;
      func_0x0001014d97ac(param_2,unaff_x24);
      param_4 = puVar9;
      puVar9 = param_2;
    }
    puVar9[2] = (ulong)unaff_x24;
    *(undefined1 *)((long)puVar9 + uVar12 + 0x20) = 0x5b;
    *unaff_x20 = (ulong)puVar9;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    uVar12 = param_1[2];
    if (uVar12 != 0) {
      unaff_x25 = 0;
      param_1 = param_1 + 5;
      do {
        param_2 = (ulong *)param_1[-1];
        unaff_x24 = (ulong *)*param_1;
        puVar5 = param_2;
        func_0x00010006c00c(param_2,unaff_x24);
        if ((int)unaff_x25 != 0) {
          uVar1 = puVar9[2];
          if (puVar9[3] >> 1 <= uVar1) {
            puVar5 = (ulong *)(ulong)(1 < puVar9[3]);
            param_3 = (ulong *)0x1;
            func_0x0001014d97ac(puVar5,uVar1 + 1);
            param_4 = puVar9;
            puVar9 = puVar5;
          }
          puVar9[2] = uVar1 + 1;
          *(undefined1 *)((long)puVar9 + uVar1 + 0x20) = 0x2c;
          *unaff_x20 = (ulong)puVar9;
        }
        uVar1 = puVar9[2];
        if (puVar9[3] >> 1 <= uVar1) {
          puVar5 = (ulong *)(ulong)(1 < puVar9[3]);
          param_3 = (ulong *)0x1;
          func_0x0001014d97ac(puVar5,uVar1 + 1);
          param_4 = puVar9;
          puVar9 = puVar5;
        }
        puVar9[2] = uVar1 + 1;
        *(undefined1 *)((long)puVar9 + uVar1 + 0x20) = 0x22;
        *unaff_x20 = (ulong)puVar9;
        uVar3 = (uint)((ulong)unaff_x24 >> 0x20);
        uVar7 = uVar3 >> 0x1e;
        iVar11 = (int)param_2;
        iVar8 = (int)((ulong)param_2 >> 0x20);
        if (uVar3 >> 0x1e < 2) {
          if (uVar7 == 0) {
            if (((ulong)unaff_x24 >> 0x30 & 0xff) != 0) {
LAB_104577ca4:
              if (uVar7 == 2) {
                uVar1 = param_2[2];
                uVar2 = param_2[3];
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                puVar9 = puVar5;
                if (puVar5 != (ulong *)0x0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(uVar1,(long)puVar9)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x104577f5c);
                    (*pcVar4)();
                  }
                  puVar5 = (ulong *)((uVar1 - (long)puVar9) + (long)puVar5);
                }
                puVar6 = (ulong *)(uVar2 - uVar1);
                if (SBORROW8(uVar2,uVar1)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x104577f58);
                  (*pcVar4)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if (puVar5 == (ulong *)0x0) {
                  lVar10 = 0;
                }
                else {
                  if ((long)puVar6 <= (long)puVar9) {
                    puVar9 = puVar6;
                  }
                  lVar10 = (long)puVar9 + (long)puVar5;
                }
              }
              else if (uVar7 == 1) {
                lVar10 = (long)iVar11;
                puVar9 = (ulong *)(((long)param_2 >> 0x20) - lVar10);
                if ((long)param_2 >> 0x20 < lVar10) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x104577f54);
                  (*pcVar4)();
                }
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                if (puVar5 == (ulong *)0x0) {
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  puVar5 = (ulong *)0x0;
                }
                else {
                  puVar6 = puVar5;
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar10,(long)puVar6)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x104577f60);
                    (*pcVar4)();
                  }
                  puVar5 = (ulong *)((lVar10 - (long)puVar6) + (long)puVar5);
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  if (puVar5 != (ulong *)0x0) {
                    if ((long)puVar9 <= (long)puVar6) {
                      puVar6 = puVar9;
                    }
                    lVar10 = (long)puVar6 + (long)puVar5;
                    goto LAB_104577e04;
                  }
                }
                lVar10 = 0;
              }
              else {
                uStack_76._0_1_ = SUB81(param_2,0);
                uStack_76._1_1_ = (undefined1)((ulong)param_2 >> 8);
                uStack_76._2_1_ = (undefined1)((ulong)param_2 >> 0x10);
                uStack_76._3_1_ = (undefined1)((ulong)param_2 >> 0x18);
                uStack_76._4_1_ = (undefined1)((ulong)param_2 >> 0x20);
                uStack_76._5_1_ = (undefined1)((ulong)param_2 >> 0x28);
                uStack_76._6_1_ = (undefined1)((ulong)param_2 >> 0x30);
                uStack_76._7_1_ = (undefined1)((ulong)param_2 >> 0x38);
                uStack_6e = SUB81(unaff_x24,0);
                uStack_6d = (undefined1)((ulong)unaff_x24 >> 8);
                uStack_6c = (undefined1)((ulong)unaff_x24 >> 0x10);
                uStack_6b = (undefined1)((ulong)unaff_x24 >> 0x18);
                uStack_6a = (undefined1)((ulong)unaff_x24 >> 0x20);
                uStack_69 = (undefined1)((ulong)unaff_x24 >> 0x28);
                lVar10 = (long)&uStack_76 + ((ulong)unaff_x24 >> 0x30 & 0xff);
                puVar5 = &uStack_76;
              }
LAB_104577e04:
              param_3 = unaff_x20;
              FUN_104573ec8(puVar5,lVar10);
            }
          }
          else {
            if (SBORROW4(iVar8,iVar11)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x104577f4c);
              (*pcVar4)();
            }
            if (0 < iVar8 - iVar11) goto LAB_104577ca4;
          }
        }
        else if (uVar7 == 2) {
          if (SBORROW8(param_2[3],param_2[2])) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x104577f50);
            (*pcVar4)();
          }
          if (0 < (long)(param_2[3] - param_2[2])) goto LAB_104577ca4;
        }
        puVar9 = (ulong *)*unaff_x20;
        puVar5 = puVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar6 = puVar9;
        if (((ulong)puVar5 & 1) == 0) {
          puVar6 = (ulong *)0x0;
          param_3 = (ulong *)0x1;
          func_0x0001014d97ac(0,puVar9[2] + 1);
          param_4 = puVar9;
        }
        uVar1 = puVar6[2];
        puVar9 = puVar6;
        if (puVar6[3] >> 1 <= uVar1) {
          puVar9 = (ulong *)(ulong)(1 < puVar6[3]);
          param_3 = (ulong *)0x1;
          func_0x0001014d97ac(puVar9,uVar1 + 1);
          param_4 = puVar6;
        }
        param_1 = param_1 + 2;
        puVar9[2] = uVar1 + 1;
        *(undefined1 *)((long)puVar9 + uVar1 + 0x20) = 0x22;
        puVar5 = unaff_x24;
        func_0x00010006c090(param_2,unaff_x24);
        *unaff_x20 = (ulong)puVar9;
        unaff_x25 = 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    unaff_x22 = puVar9[2];
    param_1 = (ulong *)(unaff_x22 + 1);
    if (puVar9[3] >> 1 <= unaff_x22) {
      param_2 = (ulong *)(ulong)(1 < puVar9[3]);
      param_3 = (ulong *)0x1;
      puVar5 = param_1;
      func_0x0001014d97ac(param_2,param_1);
      param_4 = puVar9;
      puVar9 = param_2;
    }
    puVar9[2] = (ulong)param_1;
    *(undefined1 *)((long)puVar9 + unaff_x22 + 0x20) = 0x5d;
    *unaff_x20 = (ulong)puVar9;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = param_3;
  uStack_c0 = unaff_x25;
  puStack_b0 = unaff_x24;
  puStack_a8 = param_1;
  uStack_a0 = unaff_x22;
  _swift_conformsToProtocol(param_3,&DAT_10e813964);
  if (puVar6 == (ulong *)0x0 || param_3 == (ulong *)0x0) {
    uStack_d0 = *(undefined1 *)((long)puVar9 + 0x49);
    pcVar4 = FUN_10457a254;
  }
  else {
    uStack_d0 = (undefined1)puVar9[9];
    uStack_cf = *(undefined1 *)((long)puVar9 + 0x49);
    uStack_ce = *(undefined1 *)((long)puVar9 + 0x4a);
    uStack_cd = *(undefined1 *)((long)puVar9 + 0x4b);
    pcVar4 = (code *)0x10457a270;
  }
  puStack_e0 = param_3;
  puStack_d8 = param_4;
  FUN_1045757d8(param_2,puVar5,pcVar4,auStack_f0,param_3);
  return;
}



/* Entry: 104577fc4; end: 10457807f;  */

void FUN_104577fc4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  
  lVar1 = param_3;
  _swift_conformsToProtocol(param_3,&DAT_10e813964);
  if (lVar1 == 0 || param_3 == 0) {
    uStack_50 = *(undefined1 *)(unaff_x20 + 0x49);
    pcVar2 = FUN_10457a254;
  }
  else {
    uStack_50 = *(undefined1 *)(unaff_x20 + 0x48);
    uStack_4f = *(undefined1 *)(unaff_x20 + 0x49);
    uStack_4e = *(undefined1 *)(unaff_x20 + 0x4a);
    uStack_4d = *(undefined1 *)(unaff_x20 + 0x4b);
    pcVar2 = (code *)0x10457a270;
  }
  lStack_60 = param_3;
  uStack_58 = param_4;
  FUN_1045757d8(param_1,param_2,pcVar2,auStack_70,param_3);
  return;
}



/* Entry: 104578080; end: 10457816f;  */

void FUN_104578080(undefined8 param_1,undefined8 param_2,uint param_3,long param_4)

{
  undefined8 uVar1;
  long extraout_x8;
  long extraout_x12;
  long unaff_x21;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_4 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar1 = 0x113084cc0;
  func_0x0001000285a8(0x113084cc0,&UNK_10dd16720);
  _swift_dynamicCast(auStack_68,auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4,
                     uVar1,7);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 8))(param_3 & 0x1010101,uStack_50,lStack_48);
  if (unaff_x21 == 0) {
    func_0x000104540f24();
  }
  func_0x0001000834e4(auStack_68);
  return;
}



/* Entry: 104578170; end: 104578277;  */

void FUN_104578170(ulong *param_1,undefined8 param_2,uint param_3,long param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (((param_3 & 1) == 0) && (FUN_1045576c0(param_4,param_5), (param_3 & 0xff) != 1)) {
    FUN_104573280();
    return;
  }
  (**(code **)(param_5 + 0x28))(param_4,param_5);
  if (param_4 < 0) {
    uVar3 = *param_1;
    uVar1 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar2 = uVar3;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar3 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
    }
    *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x2d;
    *param_1 = uVar3;
  }
  func_0x0001045736fc();
  return;
}



/* Entry: 104578278; end: 104578b1f;  */

/* WARNING: Removing unreachable block (ram,0x000104578468) */
/* WARNING: Removing unreachable block (ram,0x000104578a90) */
/* WARNING: Removing unreachable block (ram,0x000104578470) */
/* WARNING: Removing unreachable block (ram,0x000104578888) */
/* WARNING: Removing unreachable block (ram,0x000104578954) */

void FUN_104578278(long param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined1 *puVar9;
  ulong *unaff_x20;
  ulong uVar10;
  ulong uVar11;
  long unaff_x21;
  ulong uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  undefined1 auStack_130 [8];
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  ulong uStack_f8;
  undefined1 *puStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [8];
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong auStack_70 [2];
  ulong uStack_58;
  
  pcVar15 = *(code **)(param_3 + -8);
  lStack_c8 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(pcVar15 + 0x40));
  puVar9 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar12 = ((long)puVar9 - extraout_x12) - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  FUN_1045754c0(param_2);
  if (unaff_x21 == 0) {
    uVar10 = *unaff_x20;
    uVar5 = uVar10;
    puStack_f0 = param_3;
    uStack_e8 = uVar12 - extraout_x12_01;
    lStack_e0 = (long)puVar9 - extraout_x12;
    lStack_d0 = param_4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar11 = uVar10;
    pcStack_d8 = pcVar15;
    if ((uVar5 & 1) == 0) {
      uVar11 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
    }
    uVar5 = *(ulong *)(uVar11 + 0x10);
    uVar10 = uVar11;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar5) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
      func_0x0001014d97ac(uVar10,uVar5 + 1,1,uVar11);
    }
    puVar1 = puStack_f0;
    *(ulong *)(uVar10 + 0x10) = uVar5 + 1;
    *(undefined1 *)(uVar10 + uVar5 + 0x20) = 0x5b;
    *unaff_x20 = uVar10;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    puVar2 = puStack_f0;
    _swift_conformsToProtocol(puStack_f0,&DAT_10e813964);
    lVar14 = lStack_c8;
    lVar13 = lStack_d0;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = puVar1;
      _swift_conformsToProtocol(puVar1,&DAT_10e8147e0);
      pcVar15 = pcStack_d8;
      if (puVar2 == (undefined1 *)0x0) {
        func_0x0001045406b8();
        _swift_allocError(&UNK_110788dc0,puVar2,0,0);
        *puVar2 = 4;
        _swift_willThrow();
        return;
      }
      (**(code **)(puVar2 + 8))(&uStack_b8,puVar1,puVar2);
      uStack_e8 = unaff_x20[2];
      uStack_f8 = unaff_x20[3];
      pcStack_100 = (code *)unaff_x20[4];
      uStack_108 = unaff_x20[5];
      uStack_118 = unaff_x20[6];
      uStack_120 = unaff_x20[7];
      uStack_110 = unaff_x20[8];
      uStack_58 = uStack_b0;
      uStack_78 = uStack_a0;
      auStack_70[0] = uStack_a8;
      uStack_88 = uStack_90;
      uStack_80 = uStack_98;
      unaff_x20[5] = uStack_a0;
      unaff_x20[4] = uStack_a8;
      unaff_x20[7] = uStack_90;
      unaff_x20[6] = uStack_98;
      unaff_x20[3] = uStack_b0;
      unaff_x20[2] = uStack_b8;
      _swift_bridgeObjectRetain();
      uStack_128 = uStack_b8;
      _swift_retain(uStack_b8);
      FUN_10457a20c(&uStack_58,auStack_c0,0x113085000,&UNK_10dd187f0);
      FUN_10457a20c(auStack_70,auStack_c0,0x113085008,&UNK_10dd18d40);
      FUN_10457a20c(&uStack_78,auStack_c0,0x113085008,&UNK_10dd18d40);
      FUN_10457a20c(&uStack_80,auStack_c0,0x112d38270,&UNK_10d905a20);
      FUN_10457a20c(&uStack_88,auStack_c0,0x113085010,&UNK_10dd18d50);
      lVar13 = lStack_c8;
      lVar14 = lStack_c8;
      __sSa8endIndexSivg(lStack_c8,puVar1);
      if (lVar14 != 0) {
        lVar14 = 0;
        do {
          lVar4 = lStack_e0;
          __sSayxSicig(lStack_e0,lVar14,lVar13,puVar1);
          lVar3 = lVar14 + 1;
          if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x104578a9c);
            (*pcVar15)();
          }
          (**(code **)(pcVar15 + 0x20))(puVar9,lVar4,puVar1);
          lVar13 = lStack_d0;
          func_0x000104579ec8(puVar9);
          (**(code **)(lVar13 + 0x48))();
          uVar11 = *unaff_x20;
          uVar12 = uVar11;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar5 = uVar11;
          if ((uVar12 & 1) == 0) {
            uVar5 = 0;
            func_0x0001014d97ac(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
          }
          uVar12 = *(ulong *)(uVar5 + 0x10);
          uVar11 = uVar5;
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar12) {
            uVar11 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
            func_0x0001014d97ac(uVar11,uVar12 + 1,1,uVar5);
          }
          pcVar15 = pcStack_d8;
          *(ulong *)(uVar11 + 0x10) = uVar12 + 1;
          *(undefined1 *)(uVar11 + uVar12 + 0x20) = 0x7d;
          (**(code **)(pcStack_d8 + 8))(puVar9,puVar1);
          lVar13 = lStack_c8;
          *unaff_x20 = uVar11;
          *(undefined2 *)(unaff_x20 + 1) = 0x2c;
          lVar4 = lStack_c8;
          __sSa8endIndexSivg(lStack_c8,puVar1);
          lVar14 = lVar14 + 1;
        } while (lVar3 != lVar4);
      }
      _swift_release(uStack_128);
      func_0x00010457a324(&uStack_58,0x113085000,&UNK_10dd187f0);
      func_0x00010457a324(auStack_70,0x113085008,&UNK_10dd18d40);
      func_0x00010457a324(&uStack_78,0x113085008,&UNK_10dd18d40);
      func_0x00010457a324(&uStack_80,0x112d38270,&UNK_10d905a20);
      func_0x00010457a324(&uStack_88,0x113085010,&UNK_10dd18d50);
      _swift_release(unaff_x20[2]);
      _swift_bridgeObjectRelease(unaff_x20[3]);
      _swift_bridgeObjectRelease(unaff_x20[4]);
      _swift_bridgeObjectRelease(unaff_x20[5]);
      _swift_bridgeObjectRelease(unaff_x20[6]);
      uVar12 = unaff_x20[7];
      unaff_x20[2] = uStack_e8;
      unaff_x20[3] = uStack_f8;
      unaff_x20[4] = (ulong)pcStack_100;
      unaff_x20[5] = uStack_108;
      unaff_x20[6] = uStack_118;
      unaff_x20[7] = uStack_120;
      _swift_bridgeObjectRelease(uVar12);
      _swift_bridgeObjectRelease(unaff_x20[8]);
      unaff_x20[8] = uStack_110;
    }
    else {
      lVar3 = lStack_c8;
      __sSa8endIndexSivg(lStack_c8,puVar1);
      pcVar15 = pcStack_d8;
      uVar5 = uStack_e8;
      if (lVar3 != 0) {
        uVar8 = 0x1000000;
        if (*(char *)((long)unaff_x20 + 0x4b) == '\0') {
          uVar8 = 0;
        }
        uVar7 = 0x10000;
        if (*(char *)((long)unaff_x20 + 0x4a) == '\0') {
          uVar7 = 0;
        }
        uVar6 = 0x100;
        if (*(char *)((long)unaff_x20 + 0x49) == '\0') {
          uVar6 = 0;
        }
        uVar6 = uVar6 | (byte)unaff_x20[9];
        uStack_108 = uVar12;
        __sSayxSicig(uStack_e8,0,lVar14,puVar1);
        pcVar15 = *(code **)(pcVar15 + 0x20);
        (*pcVar15)(uStack_108,uVar5,puVar1);
        uVar12 = uStack_108;
        lStack_e0 = CONCAT44(lStack_e0._4_4_,uVar6);
        uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar7 | uVar8);
        FUN_104581358(uVar6 | uVar7 | uVar8,puVar1,lVar13);
        pcStack_100 = pcVar15;
        func_0x000104540f24();
        pcVar15 = *(code **)(pcStack_d8 + 8);
        (*pcVar15)(uVar12,puVar1);
        lVar13 = lVar14;
        __sSa8endIndexSivg(lVar14,puVar1);
        if (lVar13 != 1) {
          lVar13 = 1;
          pcStack_d8 = pcVar15;
          do {
            uVar5 = uStack_e8;
            __sSayxSicig(uStack_e8,lVar13,lVar14,puVar1);
            lVar3 = lVar13 + 1;
            if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
              pcVar15 = (code *)SoftwareBreakpoint(1,0x104578aa0);
              (*pcVar15)();
            }
            (*pcStack_100)(uVar12,uVar5,puVar1);
            uVar10 = *unaff_x20;
            uVar5 = uVar10;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar11 = uVar10;
            if ((uVar5 & 1) == 0) {
              uVar11 = 0;
              func_0x0001014d97ac(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
            }
            uVar5 = *(ulong *)(uVar11 + 0x10);
            uVar10 = uVar11;
            if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar5) {
              uVar10 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
              func_0x0001014d97ac(uVar10,uVar5 + 1,1,uVar11);
            }
            *(ulong *)(uVar10 + 0x10) = uVar5 + 1;
            *(undefined1 *)(uVar10 + uVar5 + 0x20) = 0x2c;
            *unaff_x20 = uVar10;
            FUN_104581358((uint)lStack_e0 | (uint)uStack_f8,puVar1,lStack_d0);
            func_0x000104540f24();
            (*pcStack_d8)(uVar12,puVar1);
            lVar14 = lStack_c8;
            lVar4 = lStack_c8;
            __sSa8endIndexSivg(lStack_c8,puVar1);
            lVar13 = lVar13 + 1;
          } while (lVar3 != lVar4);
        }
      }
    }
    uVar11 = *unaff_x20;
    uVar12 = uVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar11;
    if ((uVar12 & 1) == 0) {
      uVar5 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
    }
    uVar12 = *(ulong *)(uVar5 + 0x10);
    uVar11 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar12) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      func_0x0001014d97ac(uVar11,uVar12 + 1,1,uVar5);
    }
    *(ulong *)(uVar11 + 0x10) = uVar12 + 1;
    *(undefined1 *)(uVar11 + uVar12 + 0x20) = 0x5d;
    *unaff_x20 = uVar11;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 104578b20; end: 104578b33;  */

void FUN_104578b20(void)

{
  FUN_104578278();
  return;
}



/* Entry: 104578b34; end: 104578c3f;  */

void FUN_104578b34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  uStack_c0 = param_3;
  uStack_b8 = param_4;
  lStack_b0 = param_5;
  lStack_a8 = param_6;
  uStack_90 = param_3;
  uStack_88 = param_4;
  lStack_80 = param_5;
  lStack_78 = param_6;
  uStack_70 = param_3;
  _swift_getAssociatedTypeWitness(0,uVar3,param_3,&UNK_10e814078,&UNK_10e814088);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_6 + 8),param_4,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(uVar3,param_3,uVar1,&UNK_10e814078,&UNK_10e814080);
  FUN_104578cdc(param_1,param_2,FUN_10457a398,auStack_a0,0x10457a1f0,auStack_d0,uVar1,uVar2,uVar3);
  return;
}



/* Entry: 104578c40; end: 104578cdb;  */

void FUN_104578c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_110789178,&PTR_DAT_1107891a8,param_4);
  if (unaff_x21 == 0) {
    (**(code **)(*(long *)(param_7 + 8) + 0x30))
              (param_3,2,param_1,&UNK_110789178,&PTR_DAT_1107891a8,param_5);
  }
  return;
}



/* Entry: 104578cdc; end: 1045796f3;  */

/* WARNING: Removing unreachable block (ram,0x0001045791f0) */
/* WARNING: Removing unreachable block (ram,0x000104579664) */
/* WARNING: Removing unreachable block (ram,0x0001045796b4) */

void FUN_104578cdc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long extraout_x8;
  long lVar13;
  long lVar14;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  code *pcVar22;
  long unaff_x20;
  long unaff_x21;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  undefined1 auStack_200 [8];
  long lStack_1f8;
  long lStack_198;
  ulong uStack_190;
  undefined1 auStack_140 [16];
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined2 uStack_f8;
  undefined *puStack_f0;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined1 uStack_e4;
  char cStack_e3;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [48];
  
  lVar12 = *(long *)(param_8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar16 = auStack_200 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)puVar16 - extraout_x12;
  lVar14 = *(long *)(param_7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar17 = (undefined1 *)(lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar27 = (long)puVar17 - extraout_x12_00;
  lVar5 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,param_7,param_8,"key value ",0);
  lVar6 = 0;
  __sSqMa(0,lVar5);
  lVar25 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar25 + 0x40));
  lVar23 = lVar27 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar23 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar24 = lVar21 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar28 = lVar24 - extraout_x12_03;
  FUN_1045754c0(param_2);
  uVar11 = param_9;
  if (unaff_x21 != 0) {
    return;
  }
  func_0x000104540f24(0x7b,0xe100000000000000);
  uStack_e6 = *(undefined1 *)(unaff_x20 + 0x48);
  uStack_e5 = *(undefined1 *)(unaff_x20 + 0x49);
  uStack_e4 = *(undefined1 *)(unaff_x20 + 0x4a);
  cStack_e3 = *(char *)(unaff_x20 + 0x4b);
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0x100;
  puStack_f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uStack_e8 = 0x100;
  if (cStack_e3 != '\x01') {
    lVar13 = param_7;
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      _swift_retain();
      __ss17_NativeDictionaryVyAByxq_Gs05__RawB7StorageCncfC();
      __ss17_NativeDictionaryV12makeIteratorAB0D0Vyxq__GyF(auStack_e0);
      lVar24 = -0xa8;
      puVar10 = auStack_e0;
      __sSD8IteratorV7_nativeAByxq__Gs17_NativeDictionaryVAAVyxq__Gn_tcfC
                (auStack_b8,puVar10,param_7,param_8,uVar11);
    }
    else {
      puVar1 = (undefined1 *)((ulong)param_1 & 0xffffffffffffff8);
      if ((undefined1 *)0x7fffffffffffffff < param_1) {
        puVar1 = param_1;
      }
      puVar10 = puVar1;
      __ss17__CocoaDictionaryV12makeIteratorAB0D0CyF();
      _swift_unknownObjectRetain(puVar1);
      lVar24 = -0x80;
      __sSD8IteratorV6_cocoaAByxq__Gs17__CocoaDictionaryVAACn_tcfC
                (auStack_90,puVar10,param_7,param_8,uVar11);
    }
    lStack_1f8 = *(long *)((long)&param_9 + lVar24);
    lVar27 = *(long *)(&stack0xfffffffffffffff0 + lVar24);
    lVar28 = *(long *)(&stack0xfffffffffffffff8 + lVar24);
    uVar20 = lStack_1f8 + 0x40U >> 6;
    lVar18 = *(long *)(&stack0x00000008 + lVar24);
    uVar19 = *(ulong *)(&stack0x00000010 + lVar24);
    do {
      lStack_198 = lVar18;
      if (lVar27 < 0) {
        __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
        uStack_190 = uVar19;
        if (puVar10 == (undefined1 *)0x0) {
LAB_1045794e4:
          uVar7 = 1;
        }
        else {
          __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF(lVar23);
          _swift_unknownObjectRelease(puVar10);
          __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF
                    (lVar23 + *(int *)(lVar5 + 0x30),lVar13,param_8,param_8);
          _swift_unknownObjectRelease(lVar13);
          uVar7 = 0;
        }
      }
      else {
        uVar15 = uVar19;
        if (uVar19 == 0) {
          uVar26 = uVar20;
          if ((long)uVar20 <= lVar18 + 1) {
            uVar26 = lVar18 + 1;
          }
          lVar13 = lVar18;
          do {
            lStack_198 = lVar13 + 1;
            if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1045796f0);
              (*pcVar3)();
            }
            if ((long)uVar20 <= lStack_198) {
              uStack_190 = 0;
              lStack_198 = uVar26 - 1;
              goto LAB_1045794e4;
            }
            uVar15 = *(ulong *)(lVar28 + lStack_198 * 8);
            lVar13 = lVar13 + 1;
          } while (uVar15 == 0);
        }
        uVar26 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
        uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
        uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
        uVar26 = LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) | lStack_198 << 6;
        lVar13 = lVar27;
        __ss17_NativeDictionaryV5_keysSpyxGvg(lVar27,param_7,param_8,uVar11);
        (**(code **)(lVar14 + 0x10))(lVar23,lVar13 + *(long *)(lVar14 + 0x48) * uVar26,param_7);
        FUN_10456d188(lVar27,param_7,param_8,uVar11);
        iVar2 = *(int *)(lVar5 + 0x30);
        lVar13 = lVar27;
        __ss17_NativeDictionaryV7_valuesSpyq_Gvg(lVar27,param_7,param_8,uVar11);
        (**(code **)(lVar12 + 0x10))
                  (lVar23 + iVar2,lVar13 + *(long *)(lVar12 + 0x48) * uVar26,param_8);
        FUN_10456d188(lVar27,param_7,param_8,uVar11);
        uVar7 = 0;
        uStack_190 = uVar15 - 1 & uVar15;
      }
      lVar24 = *(long *)(lVar5 + -8);
      (**(code **)(lVar24 + 0x38))(lVar23,uVar7,1,lVar5);
      (**(code **)(lVar25 + 0x20))(lVar21,lVar23,lVar6);
      lVar13 = lVar21;
      (**(code **)(lVar24 + 0x30))(lVar21,1,lVar5);
      if ((int)lVar13 == 1) goto LAB_10457960c;
      iVar2 = *(int *)(lVar5 + 0x30);
      (**(code **)(lVar14 + 0x20))(puVar17,lVar21,param_7);
      (**(code **)(lVar12 + 0x20))(puVar16,lVar21 + iVar2,param_8);
      (*param_5)(&uStack_108,puVar17,puVar16);
      (**(code **)(lVar12 + 8))(puVar16,param_8);
      puVar10 = puVar17;
      lVar13 = param_7;
      (**(code **)(lVar14 + 8))();
      lVar18 = lStack_198;
      uVar19 = uStack_190;
    } while( true );
  }
  uStack_120 = uVar11;
  uVar7 = 0;
  lStack_130 = param_7;
  lStack_128 = param_8;
  uStack_118 = param_3;
  uStack_110 = param_4;
  __sSDMa(0,param_7,param_8,uVar11);
  puVar8 = PTR___sSDyxq_GSTsMc_11034d798;
  _swift_getWitnessTable(PTR___sSDyxq_GSTsMc_11034d798,uVar7);
  pcVar3 = FUN_10457a178;
  __sSTsE6sorted2bySay7ElementQzGSbAD_ADtKXE_tKF(FUN_10457a178,auStack_140,uVar7,puVar8);
  pcVar22 = (code *)0x0;
  while( true ) {
    pcVar9 = pcVar3;
    __sSa8endIndexSivg(pcVar3,lVar5);
    if (pcVar22 == pcVar9) {
      uVar11 = 1;
    }
    else {
      __sSayxSicig(lVar24,pcVar22,pcVar3,lVar5);
      bVar4 = SCARRY8((long)pcVar22,1);
      pcVar22 = pcVar22 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045796f4);
        (*pcVar3)();
      }
      uVar11 = 0;
    }
    lVar23 = *(long *)(lVar5 + -8);
    (**(code **)(lVar23 + 0x38))(lVar24,uVar11,1,lVar5);
    (**(code **)(lVar25 + 0x20))(lVar28,lVar24,lVar6);
    lVar21 = lVar28;
    (**(code **)(lVar23 + 0x30))(lVar28,1,lVar5);
    if ((int)lVar21 == 1) break;
    iVar2 = *(int *)(lVar5 + 0x30);
    (**(code **)(lVar14 + 0x20))(lVar27,lVar28,param_7);
    (**(code **)(lVar12 + 0x20))(lVar13,lVar28 + iVar2,param_8);
    (*param_5)(&uStack_108,lVar27,lVar13);
    (**(code **)(lVar12 + 8))(lVar13,param_8);
    (**(code **)(lVar14 + 8))(lVar27,param_7);
  }
  _swift_bridgeObjectRelease(pcVar3);
LAB_104579638:
  _swift_bridgeObjectRetain(puStack_f0);
  func_0x000103ee3b44();
  func_0x000104540f24(0x7d,0xe100000000000000);
  func_0x000104568d7c(&uStack_108);
  return;
LAB_10457960c:
  FUN_104555934(lVar27,lVar28,lStack_1f8,lVar18,uVar19);
  goto LAB_104579638;
}



/* Entry: 1045796f4; end: 1045797cb;  */

void FUN_1045796f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  uStack_b0 = param_3;
  uStack_a8 = param_4;
  lStack_a0 = param_5;
  uStack_98 = param_6;
  uStack_80 = param_3;
  uStack_78 = param_4;
  lStack_70 = param_5;
  uStack_68 = param_6;
  uStack_60 = param_3;
  _swift_getAssociatedTypeWitness(0,uVar2,param_3,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(uVar2,param_3,uVar1,&UNK_10e814078,&UNK_10e814080);
  FUN_104578cdc(param_1,param_2,0x10457a1a4,auStack_90,FUN_10457a1d4,auStack_c0,uVar1,param_4,uVar2)
  ;
  return;
}



/* Entry: 1045797cc; end: 10457984b;  */

void FUN_1045797cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_110789178,&PTR_DAT_1107891a8,param_4);
  if (unaff_x21 == 0) {
    FUN_10457ab6c(param_3,param_5,param_7);
  }
  return;
}



/* Entry: 10457984c; end: 104579927;  */

void FUN_10457984c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  uStack_c0 = param_3;
  uStack_b8 = param_4;
  lStack_b0 = param_5;
  uStack_a8 = param_6;
  uStack_a0 = param_7;
  uStack_80 = param_3;
  uStack_78 = param_4;
  lStack_70 = param_5;
  uStack_68 = param_6;
  uStack_60 = param_7;
  uStack_58 = param_3;
  _swift_getAssociatedTypeWitness(0,uVar2,param_3,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(uVar2,param_3,uVar1,&UNK_10e814078,&UNK_10e814080);
  FUN_104578cdc(param_1,param_2,FUN_104579ce4,auStack_90,FUN_104579d14,auStack_d0,uVar1,param_4,
                uVar2);
  return;
}



/* Entry: 104579928; end: 1045799a7;  */

void FUN_104579928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_110789178,&PTR_DAT_1107891a8,param_4);
  if (unaff_x21 == 0) {
    FUN_10457ad1c(param_3,param_5,param_8);
  }
  return;
}



/* Entry: 1045799a8; end: 1045799e3;  */

void FUN_1045799a8(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_1045754c0();
  if (unaff_x21 == 0) {
    func_0x000104573090(param_1);
  }
  return;
}



/* Entry: 1045799e4; end: 104579a1f;  */

void FUN_1045799e4(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_1045754c0();
  if (unaff_x21 == 0) {
    FUN_104573020(param_1);
  }
  return;
}



/* Entry: 104579a20; end: 104579a33;  */

void FUN_104579a20(void)

{
  FUN_1045756e8();
  return;
}



/* Entry: 104579a34; end: 104579a7f;  */

void FUN_104579a34(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_1045754c0(param_2);
  if (unaff_x21 == 0) {
    if ((*(byte *)(unaff_x20 + 0x48) & 1) == 0) {
      func_0x000104573b58(param_1);
    }
    else {
      func_0x0001045736fc(param_1);
    }
  }
  return;
}



/* Entry: 104579a80; end: 104579ab7;  */

void FUN_104579a80(undefined4 param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_1045754c0(param_2);
  if (unaff_x21 == 0) {
    func_0x0001045736fc(param_1);
  }
  return;
}



/* Entry: 104579ab8; end: 104579aef;  */

void FUN_104579ab8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_1045754c0(param_2);
  if (unaff_x21 == 0) {
    func_0x000104573aac(param_1);
  }
  return;
}



/* Entry: 104579af0; end: 104579b43;  */

void FUN_104579af0(ulong param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  long unaff_x21;
  
  FUN_1045754c0(param_2);
  if (unaff_x21 == 0) {
    if ((param_1 & 1) == 0) {
      pcVar1 = "false";
      uVar2 = 5;
    }
    else {
      pcVar1 = "true";
      uVar2 = 4;
    }
    FUN_104540d74(pcVar1,uVar2);
  }
  return;
}



/* Entry: 104579b44; end: 104579b7b;  */

void FUN_104579b44(void)

{
  FUN_104579b7c();
  return;
}



/* Entry: 104579b7c; end: 104579bc7;  */

void FUN_104579b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  long unaff_x21;
  
  FUN_1045754c0(param_3);
  if (unaff_x21 == 0) {
    (*param_6)(param_1,param_2);
  }
  return;
}



/* Entry: 104579bc8; end: 104579cdf;  */

void FUN_104579bc8(void)

{
  FUN_104575b38();
  return;
}



/* Entry: 104579ce0; end: 104579ce3;  */

void FUN_104579ce0(void)

{
  return;
}



/* Entry: 104579ce4; end: 104579d13;  */

uint FUN_104579ce4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x10))
            (param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Entry: 104579d14; end: 104579d33;  */

void FUN_104579d14(void)

{
  FUN_104579928();
  return;
}



/* Entry: 104579d34; end: 104579fe7;  */

void FUN_104579d34(undefined8 param_1,ulong *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_40 = param_3;
  uStack_38 = param_4;
  func_0x0001000c5db4(auStack_58);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))();
  FUN_10457a2e0(auStack_58,auStack_a8);
  uVar2 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  uVar3 = 0x113086670;
  func_0x0001000285a8(0x113086670,&UNK_10dd187f8);
  puVar4 = &uStack_80;
  _swift_dynamicCast(puVar4,auStack_a8,uVar2,uVar3,0xe);
  lVar1 = lStack_60;
  uVar6 = uStack_68;
  if ((int)puVar4 == 0) {
    lStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    func_0x00010457a324(&uStack_80,0x113086678,&UNK_10dd18800);
    uVar6 = 0;
  }
  else {
    func_0x0001000a8868(&uStack_80,uStack_68);
    (**(code **)(lVar1 + 0x10))(uVar6,lVar1);
    func_0x0001000834e4(&uStack_80);
  }
  _swift_bridgeObjectRelease(param_2[8]);
  param_2[8] = uVar6;
  uVar7 = *param_2;
  uVar6 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar5 = uVar7;
  if ((uVar6 & 1) == 0) {
    uVar5 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
  }
  uVar6 = *(ulong *)(uVar5 + 0x10);
  uVar7 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar6) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    func_0x0001014d97ac(uVar7,uVar6 + 1,1,uVar5);
  }
  *(ulong *)(uVar7 + 0x10) = uVar6 + 1;
  *(undefined1 *)(uVar7 + uVar6 + 0x20) = 0x7b;
  *param_2 = uVar7;
  *(undefined2 *)(param_2 + 1) = 0x100;
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 104579fe8; end: 10457a167;  */

void FUN_104579fe8(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_198 [80];
  undefined *puStack_148;
  undefined2 uStack_140;
  undefined6 uStack_13e;
  undefined2 uStack_138;
  undefined6 uStack_136;
  undefined2 uStack_130;
  undefined6 uStack_12e;
  undefined2 uStack_128;
  undefined6 uStack_126;
  undefined2 uStack_120;
  undefined6 uStack_11e;
  undefined2 uStack_118;
  undefined6 uStack_116;
  undefined2 uStack_110;
  undefined2 uStack_10e;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  byte bStack_100;
  byte bStack_ff;
  byte bStack_fe;
  byte bStack_fd;
  undefined *puStack_f8;
  undefined2 uStack_f0;
  undefined8 uStack_ee;
  undefined8 uStack_e6;
  undefined8 uStack_de;
  undefined8 uStack_d6;
  undefined8 uStack_ce;
  undefined6 uStack_c6;
  undefined2 uStack_c0;
  undefined6 uStack_be;
  undefined8 uStack_b8;
  byte bStack_b0;
  byte bStack_af;
  byte bStack_ae;
  byte bStack_ad;
  undefined6 uStack_a6;
  undefined2 uStack_a0;
  undefined6 uStack_9e;
  undefined2 uStack_98;
  undefined6 uStack_96;
  undefined2 uStack_90;
  undefined6 uStack_8e;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined1 auStack_70 [48];
  
  puVar1 = param_2;
  _swift_conformsToProtocol(param_2,&DAT_10e8147e0);
  if (puVar1 == (undefined1 *)0x0 || param_2 == (undefined1 *)0x0) {
    func_0x0001045406b8();
    _swift_allocError(&UNK_110788dc0,puVar1,0,0);
    *puVar1 = 4;
    _swift_willThrow();
  }
  else {
    (**(code **)(puVar1 + 8))(auStack_70,param_2,puVar1);
    uStack_98 = (undefined2)auStack_70._8_8_;
    uStack_96 = SUB86(auStack_70._8_8_,2);
    uStack_a0 = (undefined2)auStack_70._0_8_;
    uStack_9e = SUB86(auStack_70._0_8_,2);
    uStack_88 = (undefined2)auStack_70._24_8_;
    uStack_86 = SUB86(auStack_70._24_8_,2);
    uStack_90 = (undefined2)auStack_70._16_8_;
    uStack_8e = SUB86(auStack_70._16_8_,2);
    uStack_78 = (undefined2)auStack_70._40_8_;
    uStack_76 = SUB86(auStack_70._40_8_,2);
    uStack_80 = (undefined2)auStack_70._32_8_;
    uStack_7e = SUB86(auStack_70._32_8_,2);
    bStack_100 = (byte)param_4 & 1;
    bStack_ff = (byte)((ulong)param_4 >> 8) & 1;
    bStack_fe = (byte)((ulong)param_4 >> 0x10) & 1;
    bStack_fd = (byte)((ulong)param_4 >> 0x18) & 1;
    puStack_148 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_140 = 0x100;
    uStack_136 = uStack_9e;
    uStack_130 = uStack_98;
    uStack_13e = uStack_a6;
    uStack_138 = uStack_a0;
    uStack_126 = uStack_8e;
    uStack_120 = uStack_88;
    uStack_12e = uStack_96;
    uStack_128 = uStack_90;
    uStack_116 = uStack_7e;
    uStack_11e = uStack_86;
    uStack_118 = uStack_80;
    uStack_10e = SUB82(auStack_70._40_8_,2);
    uStack_10c = SUB84(auStack_70._40_8_,4);
    uStack_108 = 0;
    uStack_104 = 0;
    puStack_f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_f0 = 0x100;
    uStack_b8 = 0;
    uStack_ce = CONCAT26(uStack_80,uStack_86);
    uStack_c6 = uStack_7e;
    uStack_c0 = uStack_78;
    uStack_d6 = CONCAT26(uStack_88,uStack_8e);
    uStack_de = CONCAT26(uStack_90,uStack_96);
    uStack_e6 = CONCAT26(uStack_98,uStack_9e);
    uStack_ee = CONCAT26(uStack_a0,uStack_a6);
    uStack_110 = uStack_78;
    uStack_be = uStack_76;
    bStack_b0 = bStack_100;
    bStack_af = bStack_ff;
    bStack_ae = bStack_fe;
    bStack_ad = bStack_fd;
    func_0x00010457a364(&puStack_148,auStack_198);
    func_0x00010454077c(&puStack_f8);
    param_1[5] = CONCAT62(uStack_11e,uStack_120);
    param_1[4] = CONCAT62(uStack_126,uStack_128);
    param_1[7] = CONCAT44(uStack_10c,CONCAT22(uStack_10e,uStack_110));
    param_1[6] = CONCAT62(uStack_116,uStack_118);
    *(ulong *)((long)param_1 + 0x44) =
         CONCAT17(bStack_fd,CONCAT16(bStack_fe,CONCAT15(bStack_ff,CONCAT14(bStack_100,uStack_104))))
    ;
    *(ulong *)((long)param_1 + 0x3c) = CONCAT44(uStack_108,uStack_10c);
    param_1[1] = CONCAT62(uStack_13e,uStack_140);
    *param_1 = puStack_148;
    param_1[3] = CONCAT62(uStack_12e,uStack_130);
    param_1[2] = CONCAT62(uStack_136,uStack_138);
  }
  return;
}



/* Entry: 10457a168; end: 10457a177;  */

ulong FUN_10457a168(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}



/* Entry: 10457a178; end: 10457a1d3;  */

uint FUN_10457a178(uint param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x28))();
  return param_1 & 1;
}



/* Entry: 10457a1d4; end: 10457a20b;  */

void FUN_10457a1d4(void)

{
  FUN_1045797cc();
  return;
}



/* Entry: 10457a20c; end: 10457a253;  */

undefined8 FUN_10457a20c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10457a254; end: 10457a2c7;  */

void FUN_10457a254(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_104578170(param_1,param_2,*(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10457a2c8; end: 10457a2df;  */

undefined8 * FUN_10457a2c8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10457a2e0; end: 10457a397;  */

long FUN_10457a2e0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10457a398; end: 10457a39b;  */

uint FUN_10457a398(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x10))
            (param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Entry: 10457a39c; end: 10457a4b3;  */

void FUN_10457a39c(void)

{
  func_0x000100dbaf84();
  return;
}



/* Entry: 10457a4b4; end: 10457a57b;  */

void FUN_10457a4b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  if (param_3 == 1) {
    if (*(char *)((long)unaff_x20 + 0x11) == '\x01') {
      *unaff_x20 = &DAT_10f68e8ee;
      unaff_x20[1] = 1;
      *(undefined2 *)(unaff_x20 + 2) = 2;
      goto LAB_10457a554;
    }
    if ((*(byte *)(unaff_x20 + 2) & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10457a578);
      (*pcVar1)();
    }
    pcVar2 = (char *)*unaff_x20;
    if (pcVar2 == (char *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10457a57c);
      (*pcVar1)();
    }
    uVar3 = unaff_x20[1];
  }
  else {
    pcVar2 = ":";
    uVar3 = 1;
  }
  FUN_104540d74(pcVar2,uVar3);
LAB_10457a554:
  FUN_1045727d4(param_1,param_2);
  return;
}



/* Entry: 10457a57c; end: 10457a63b;  */

void FUN_10457a57c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long *unaff_x20;
  
  if (param_2 == 1) {
    if (*(char *)((long)unaff_x20 + 0x11) == '\x01') {
      *unaff_x20 = (long)&DAT_10f68e8ee;
      unaff_x20[1] = 1;
      *(undefined2 *)(unaff_x20 + 2) = 2;
    }
    else {
      if ((*(byte *)(unaff_x20 + 2) & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10457a638);
        (*pcVar1)();
      }
      if (*unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10457a63c);
        (*pcVar1)();
      }
      FUN_104540d74(*unaff_x20,unaff_x20[1]);
    }
    func_0x000104573938(param_1);
  }
  else {
    FUN_104540d74(":",1);
    func_0x000104573aac(param_1);
  }
  return;
}



/* Entry: 10457a63c; end: 10457a797;  */

void FUN_10457a63c(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long *unaff_x20;
  ulong uVar4;
  
  if (param_2 == 1) {
    if (*(char *)((long)unaff_x20 + 0x11) == '\x01') {
      *unaff_x20 = (long)&DAT_10f68e8ee;
      unaff_x20[1] = 1;
      *(undefined2 *)(unaff_x20 + 2) = 2;
    }
    else {
      if ((*(byte *)(unaff_x20 + 2) & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10457a744);
        (*pcVar1)();
      }
      if (*unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10457a748);
        (*pcVar1)();
      }
      FUN_104540d74(*unaff_x20,unaff_x20[1]);
    }
  }
  else {
    FUN_104540d74(":",1);
    if (*(char *)((long)unaff_x20 + 0x22) == '\x01') {
      if (param_1 < 0) {
        uVar4 = unaff_x20[3];
        uVar2 = uVar4;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar3 = uVar4;
        if ((uVar2 & 1) == 0) {
          uVar3 = 0;
          func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
        }
        uVar2 = *(ulong *)(uVar3 + 0x10);
        uVar4 = uVar3;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
          uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          func_0x0001014d97ac(uVar4,uVar2 + 1,1,uVar3);
        }
        *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
        *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2d;
        unaff_x20[3] = uVar4;
        param_1 = -param_1;
      }
      func_0x0001045736fc(param_1);
      return;
    }
  }
  func_0x0001045737d0(param_1);
  return;
}



/* Entry: 10457a798; end: 10457a84b;  */

void FUN_10457a798(ulong param_1,long param_2)

{
  code *pcVar1;
  long *unaff_x20;
  
  if (param_2 == 1) {
    if (*(char *)((long)unaff_x20 + 0x11) == '\x01') {
      *unaff_x20 = (long)&DAT_10f68e8ee;
      unaff_x20[1] = 1;
      *(undefined2 *)(unaff_x20 + 2) = 2;
    }
    else {
      if ((*(byte *)(unaff_x20 + 2) & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10457a848);
        (*pcVar1)();
      }
      if (*unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10457a84c);
        (*pcVar1)();
      }
      FUN_104540d74(*unaff_x20,unaff_x20[1]);
    }
    func_0x000104573c74(param_1);
  }
  else {
    FUN_104540d74(":",1);
    func_0x0001045736fc(param_1 & 0xffffffff);
  }
  return;
}



/* Entry: 10457a84c; end: 10457a913;  */

void FUN_10457a84c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long *unaff_x20;
  
  if (param_2 == 1) {
    if (*(char *)((long)unaff_x20 + 0x11) == '\x01') {
      *unaff_x20 = (long)&DAT_10f68e8ee;
      unaff_x20[1] = 1;
      *(undefined2 *)(unaff_x20 + 2) = 2;
    }
    else {
      if ((*(byte *)(unaff_x20 + 2) & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10457a910);
        (*pcVar1)();
      }
      if (*unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10457a914);
        (*pcVar1)();
      }
      FUN_104540d74(*unaff_x20,unaff_x20[1]);
    }
  }
  else {
    FUN_104540d74(":",1);
    if (*(char *)((long)unaff_x20 + 0x22) == '\x01') {
      func_0x0001045736fc(param_1);
      return;
    }
  }
  func_0x000104573b58(param_1);
  return;
}



/* Entry: 10457a914; end: 10457a9e7;  */

void FUN_10457a914(uint param_1,long param_2)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  long *unaff_x20;
  
  if (param_2 == 1) {
    if (*(char *)((long)unaff_x20 + 0x11) == '\x01') {
      *unaff_x20 = (long)&DAT_10f68e8ee;
      unaff_x20[1] = 1;
      *(undefined2 *)(unaff_x20 + 2) = 2;
    }
    else {
      if ((*(byte *)(unaff_x20 + 2) & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10457a9e4);
        (*pcVar1)();
      }
      if (*unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10457a9e8);
        (*pcVar1)();
      }
      FUN_104540d74(*unaff_x20,unaff_x20[1]);
    }
    func_0x000104573d90(param_1 & 1);
  }
  else {
    FUN_104540d74(":",1);
    if ((param_1 & 1) == 0) {
      pcVar2 = "false";
      uVar3 = 5;
    }
    else {
      pcVar2 = "true";
      uVar3 = 4;
    }
    FUN_104540d74(pcVar2,uVar3);
  }
  return;
}



/* Entry: 10457a9e8; end: 10457aa3f;  */

void FUN_10457a9e8(undefined8 param_1)

{
  FUN_104540d74(":",1);
  func_0x000104573090(param_1);
  return;
}



/* Entry: 10457aa40; end: 10457aa97;  */

void FUN_10457aa40(undefined8 param_1)

{
  FUN_104540d74(":",1);
  FUN_104573020(param_1);
  return;
}



/* Entry: 10457aa98; end: 10457aad3;  */

void FUN_10457aa98(void)

{
  FUN_10457a57c();
  return;
}



/* Entry: 10457aad4; end: 10457ab33;  */

void FUN_10457aad4(undefined8 param_1,undefined8 param_2)

{
  FUN_104540d74(":",1);
  FUN_10457519c(param_1,param_2);
  return;
}



/* Entry: 10457ab34; end: 10457ab6b;  */

void FUN_10457ab34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10457ab6c(param_1,param_3,param_4);
  return;
}



/* Entry: 10457ab6c; end: 10457ad1b;  */

void FUN_10457ab6c(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long unaff_x20;
  ulong uVar8;
  long lStack_68;
  long lStack_60;
  undefined *puStack_50;
  undefined *puStack_48;
  
  lVar3 = param_3;
  FUN_104540d74(":",1);
  uVar7 = (uint)lVar3;
  if (((*(byte *)(unaff_x20 + 0x23) & 1) == 0) &&
     (lVar3 = param_2, lVar5 = param_3, FUN_1045576c0(), (uVar7 & 0xff) != 1)) {
    if (lVar3 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 - lVar3;
    }
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
    if (lVar6 == 0) {
      puStack_50 = PTR___sSWN_11034dbc0;
      puStack_48 = PTR___sSWs19_HasContiguousBytessWP_11034dbc8;
      plVar2 = &lStack_68;
      lStack_68 = lVar3;
      lStack_60 = lVar5;
      func_0x0001000a8868();
      lVar3 = *plVar2;
      if (lVar3 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = plVar2[1] - lVar3;
      }
      __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(lVar3,lVar6);
      func_0x0001000834e4(&lStack_68);
    }
    FUN_1045727d4();
    _swift_bridgeObjectRelease(lVar6);
    return;
  }
  (**(code **)(param_3 + 0x28))(param_2,param_3);
  if (param_2 < 0) {
    uVar8 = *(ulong *)(unaff_x20 + 0x18);
    uVar1 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar8;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
    }
    uVar1 = *(ulong *)(uVar4 + 0x10);
    uVar8 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      func_0x0001014d97ac(uVar8,uVar1 + 1,1,uVar4);
    }
    *(ulong *)(uVar8 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar8 + uVar1 + 0x20) = 0x2d;
    *(ulong *)(unaff_x20 + 0x18) = uVar8;
  }
  func_0x0001045736fc();
  return;
}



/* Entry: 10457ad1c; end: 10457add3;  */

void FUN_10457ad1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long unaff_x20;
  long unaff_x21;
  
  FUN_104540d74(":",1);
  uVar3 = 0x1000000;
  if (*(char *)(unaff_x20 + 0x25) == '\0') {
    uVar3 = 0;
  }
  uVar2 = 0x10000;
  if (*(char *)(unaff_x20 + 0x24) == '\0') {
    uVar2 = 0;
  }
  uVar1 = 0x100;
  if (*(char *)(unaff_x20 + 0x23) == '\0') {
    uVar1 = 0;
  }
  FUN_104581358(uVar1 | *(byte *)(unaff_x20 + 0x22) | uVar2 | uVar3,param_2,param_3);
  if (unaff_x21 == 0) {
    func_0x000104540f24();
  }
  return;
}



/* Entry: 10457add4; end: 10457adff;  */

long FUN_10457add4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10457ae00; end: 10457ae07;  */

void FUN_10457ae00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10457ae08; end: 10457ae53;  */

undefined8 * FUN_10457ae08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  *(undefined4 *)((long)param_1 + 0x22) = *(undefined4 *)((long)param_2 + 0x22);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10457ae54; end: 10457aecf;  */

undefined8 * FUN_10457ae54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x22) = *(undefined1 *)((long)param_2 + 0x22);
  *(undefined1 *)((long)param_1 + 0x23) = *(undefined1 *)((long)param_2 + 0x23);
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  *(undefined1 *)((long)param_1 + 0x25) = *(undefined1 *)((long)param_2 + 0x25);
  return param_1;
}



/* Entry: 10457aed0; end: 10457af3b;  */

undefined8 * FUN_10457aed0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar1);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x22) = *(undefined1 *)((long)param_2 + 0x22);
  *(undefined1 *)((long)param_1 + 0x23) = *(undefined1 *)((long)param_2 + 0x23);
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  *(undefined1 *)((long)param_1 + 0x25) = *(undefined1 *)((long)param_2 + 0x25);
  return param_1;
}



/* Entry: 10457af3c; end: 10457afdb;  */

int FUN_10457af3c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x26) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10457afdc; end: 10457b08f;  */

void FUN_10457afdc(void)

{
  func_0x000100dbafe8();
  return;
}



/* Entry: 10457b090; end: 10457b11f;  */

void FUN_10457b090(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined8 uVar3;
  
  FUN_10457e0a0();
  lVar1 = unaff_x20[2];
  lVar2 = *unaff_x20;
  if (lVar2 == 0) {
    if (lVar1 == 0) goto LAB_10457b0c0;
  }
  else if (lVar1 == unaff_x20[1] - lVar2) {
LAB_10457b0c0:
    uVar3 = 0xd;
    goto LAB_10457b0e4;
  }
  if ((*(char *)(lVar2 + lVar1) == '\"') && (FUN_10457e7d8(), param_2 != 0)) {
    return;
  }
  uVar3 = 5;
LAB_10457b0e4:
  FUN_104540590();
  _swift_allocError(&UNK_110788c08,param_1,0,0);
  *param_1 = 0;
  param_1[1] = uVar3;
  _swift_willThrow();
  return;
}



/* Entry: 10457b120; end: 10457b3ab;  */

undefined8 FUN_10457b120(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  
  FUN_10457e0a0();
  uVar1 = unaff_x20[2];
  lVar3 = *unaff_x20;
  if (lVar3 == 0) {
    if (uVar1 == 0) {
      return 0;
    }
  }
  else if (uVar1 == unaff_x20[1] - lVar3) {
    return 0;
  }
  if (*(char *)(lVar3 + uVar1) != '}') {
    return 0;
  }
  if ((lVar3 == 0) || ((ulong)(unaff_x20[1] - lVar3) <= uVar1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10457b1ac);
    (*pcVar2)();
  }
  unaff_x20[2] = uVar1 + 1;
  lVar3 = unaff_x20[0xb] + 1;
  if (SCARRY8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10457b1b0);
    (*pcVar2)();
  }
  unaff_x20[0xb] = lVar3;
  if (unaff_x20[4] < lVar3) {
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
              ("Fatal error",0xb,2,0xd000000000000039,0x800000010f207ab0,
               "SwiftProtobuf/JSONScanner.swift",0x1f,2,0x1ab,0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10457b1fc);
    (*pcVar2)();
  }
  return 1;
}



/* Entry: 10457b3ac; end: 10457b47f;  */

void FUN_10457b3ac(undefined8 *param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  ulong uStack_18;
  
  FUN_10457e0a0();
  lVar3 = unaff_x20[2];
  lVar4 = *unaff_x20;
  if (lVar4 == 0) {
    if (lVar3 != 0) goto LAB_10457b418;
  }
  else if (lVar3 != unaff_x20[1] - lVar4) {
LAB_10457b418:
    bVar2 = *(byte *)(lVar4 + lVar3);
    uVar1 = ((uint)(bVar2 >> 6) | (bVar2 & 0x3f) << 8) + 0x81c1;
    if (((int)(char)bVar2 & 0x80000000U) == 0) {
      uVar1 = bVar2 + 1;
    }
    uStack_18 = (ulong)uVar1 + 0xfefefefefefeff &
                (-1L << ((4 - ((ulong)LZCOUNT(uVar1) >> 3)) * 8 & 0x3f) ^ 0xffffffffffffffffU);
    __sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ(&uStack_18);
    return;
  }
  FUN_104540590();
  _swift_allocError(&UNK_110788c08,param_1,0,0);
  param_1[1] = 0xd;
  *param_1 = 0;
  _swift_willThrow();
  return;
}



/* Entry: 10457b480; end: 10457ba97;  */

void FUN_10457b480(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long alStack_f0 [2];
  undefined8 *puStack_e0;
  undefined1 auStack_d8 [8];
  char cStack_d0;
  undefined8 uStack_c8;
  char cStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  undefined1 uStack_bd;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined2 uStack_ba;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined8 *)0x0;
  __sSS10FoundationE8EncodingVMa();
  lVar14 = puVar4[-1];
  puStack_e0 = puVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar8 = (undefined8 *)((long)alStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_10457e0a0();
  puVar12 = (ulong *)(unaff_x20 + 2);
  uVar11 = *puVar12;
  lVar9 = *unaff_x20;
  lVar5 = unaff_x20[1];
  if (lVar9 == 0) {
    if (uVar11 != 0) goto LAB_10457b518;
LAB_10457b678:
    FUN_104540590();
    _swift_allocError(&UNK_110788c08,puVar4,0,0);
    uVar15 = 0xd;
LAB_10457b6a0:
    puVar4[1] = uVar15;
    *puVar4 = 0;
    _swift_willThrow();
  }
  else {
    if (uVar11 == lVar5 - lVar9) goto LAB_10457b678;
LAB_10457b518:
    if (*(char *)(lVar9 + uVar11) != '\"') {
      FUN_104571b10();
      lVar14 = 0;
      if (lVar9 != 0) {
        lVar14 = lVar5 - lVar9;
      }
      FUN_10457e318(lVar9,lVar5,puVar12,lVar14);
      if (unaff_x21 != 0) goto LAB_10457b638;
      puVar4 = &uStack_c8;
      FUN_1045405d0();
      if (((uint)lVar5 & 0xff) != 1) goto LAB_10457b6ac;
LAB_10457ba58:
      FUN_104540590();
      _swift_allocError(&UNK_110788c08,puVar4,0,0);
      uVar15 = 1;
      goto LAB_10457b6a0;
    }
    alStack_f0[1] = lVar5 - lVar9;
    uVar7 = 0;
    if (lVar9 != 0) {
      uVar7 = alStack_f0[1];
    }
    alStack_f0[0] = lVar14;
    if (uVar7 <= uVar11) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10457b844);
      (*pcVar3)();
    }
    unaff_x20[2] = uVar11 + 1;
    FUN_104571b10();
    FUN_10457e318(lVar9,lVar5,puVar12,uVar7);
    if (unaff_x21 == 0) {
      uVar6 = (uint)lVar5;
      puVar4 = &uStack_c8;
      FUN_1045405d0();
      if ((uVar6 & 0xff) != 1) {
        uVar11 = *puVar12;
        if (lVar9 == 0) {
          if (uVar11 != 0) goto LAB_10457b6ec;
        }
        else if (uVar11 != alStack_f0[1]) {
LAB_10457b6ec:
          if (*(char *)(lVar9 + uVar11) != '\"') goto LAB_10457ba58;
          if (uVar7 <= uVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10457b978);
            (*pcVar3)();
          }
          *puVar12 = uVar11 + 1;
          goto LAB_10457b6ac;
        }
        goto LAB_10457b678;
      }
      unaff_x20[2] = uVar11;
      FUN_10457b090();
      if ((puVar4 != (undefined8 *)0x4e614e) || (lVar5 != -0x1d00000000000000)) {
        uVar11 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x4e614e,0xe300000000000000,puVar4,lVar5,0);
        if ((uVar11 & 1) == 0) {
          if ((puVar4 != (undefined8 *)0x666e49) || (lVar5 != -0x1d00000000000000)) {
            uVar11 = 0x666e49;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x666e49,0xe300000000000000,puVar4,lVar5,0);
            if ((uVar11 & 1) == 0) {
              if ((puVar4 != (undefined8 *)0x666e492d) || (lVar5 != -0x1c00000000000000)) {
                uVar11 = 0x666e492d;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x666e492d,0xe400000000000000,puVar4,lVar5,0);
                if ((uVar11 & 1) == 0) {
                  uVar11 = 0x7974696e69666e49;
                  if (((puVar4 == (undefined8 *)0x7974696e69666e49) &&
                      (lVar5 == -0x1800000000000000)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0x7974696e69666e49,0xe800000000000000,puVar4,lVar5,0),
                     puVar2 = puStack_e0, (uVar11 & 1) != 0)) goto LAB_10457b74c;
                  uVar11 = 0x74696e69666e492d;
                  if (((puVar4 == (undefined8 *)0x74696e69666e492d) &&
                      (lVar5 == -0x16ffffffffffff87)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0x74696e69666e492d,0xe900000000000079,puVar4,lVar5,0),
                     (uVar11 & 1) != 0)) goto LAB_10457b7a0;
                  uStack_c8._0_1_ = SUB81(puVar4,0);
                  uStack_c8._1_1_ = (undefined1)((ulong)puVar4 >> 8);
                  uStack_c8._2_1_ = (undefined1)((ulong)puVar4 >> 0x10);
                  uStack_c8._3_1_ = (undefined1)((ulong)puVar4 >> 0x18);
                  uStack_c8._4_1_ = (undefined1)((ulong)puVar4 >> 0x20);
                  uStack_c8._5_1_ = (undefined1)((ulong)puVar4 >> 0x28);
                  uStack_c8._6_1_ = (undefined1)((ulong)puVar4 >> 0x30);
                  uStack_c8._7_1_ = (undefined1)((ulong)puVar4 >> 0x38);
                  cStack_c0 = (char)lVar5;
                  uStack_bf = (undefined1)((ulong)lVar5 >> 8);
                  uStack_be = (undefined1)((ulong)lVar5 >> 0x10);
                  uStack_bd = (undefined1)((ulong)lVar5 >> 0x18);
                  uStack_bc = (undefined1)((ulong)lVar5 >> 0x20);
                  uStack_bb = (undefined1)((ulong)lVar5 >> 0x28);
                  uStack_ba = (undefined2)((ulong)lVar5 >> 0x30);
                  __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar8);
                  func_0x000100e8b654();
                  uVar7 = 0;
                  puVar4 = puVar8;
                  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                            (puVar8,0,PTR___sSSN_11034da80,uVar11);
                  (**(code **)(alStack_f0[0] + 8))(puVar8,puVar2);
                  _swift_bridgeObjectRelease();
                  if (0xe < uVar7 >> 0x3c) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10457ba98);
                    (*pcVar3)();
                  }
                  uVar6 = (uint)(uVar7 >> 0x20);
                  uVar10 = uVar6 >> 0x1e;
                  if (uVar6 >> 0x1e < 2) {
                    if (uVar10 == 0) {
                      uStack_c8._0_1_ = SUB81(puVar4,0);
                      uStack_c8._1_1_ = (undefined1)((ulong)puVar4 >> 8);
                      uStack_c8._2_1_ = (undefined1)((ulong)puVar4 >> 0x10);
                      uStack_c8._3_1_ = (undefined1)((ulong)puVar4 >> 0x18);
                      uStack_c8._4_1_ = (undefined1)((ulong)puVar4 >> 0x20);
                      uStack_c8._5_1_ = (undefined1)((ulong)puVar4 >> 0x28);
                      uStack_c8._6_1_ = (undefined1)((ulong)puVar4 >> 0x30);
                      uStack_c8._7_1_ = (undefined1)((ulong)puVar4 >> 0x38);
                      cStack_c0 = (char)uVar7;
                      uStack_bf = (undefined1)(uVar7 >> 8);
                      uStack_be = (undefined1)(uVar7 >> 0x10);
                      uStack_bd = (undefined1)(uVar7 >> 0x18);
                      uStack_bc = (undefined1)(uVar7 >> 0x20);
                      uStack_bb = (undefined1)(uVar7 >> 0x28);
                      puVar8 = (undefined8 *)((long)&uStack_c8 + (uVar7 >> 0x30 & 0xff));
                      goto LAB_10457b9e4;
                    }
                    lVar14 = (long)(int)puVar4;
                    lVar13 = ((long)puVar4 >> 0x20) - lVar14;
                    if ((long)puVar4 >> 0x20 < lVar14) goto LAB_10457ba88;
                    __s10Foundation13__DataStorageC6_bytesSvSgvg();
                    if (lVar5 != 0) {
                      lVar9 = lVar5;
                      __s10Foundation13__DataStorageC7_offsetSivg();
                      if (SBORROW8(lVar14,lVar9)) {
                    /* WARNING: Does not return */
                        pcVar3 = (code *)SoftwareBreakpoint(1,0x10457ba94);
                        (*pcVar3)();
                      }
                      lVar5 = (lVar14 - lVar9) + lVar5;
                      goto LAB_10457b9ac;
                    }
                    __s10Foundation13__DataStorageC7_lengthSivg();
                    lVar5 = 0;
LAB_10457ba14:
                    lVar9 = 0;
LAB_10457ba18:
                    FUN_10457ea00(&uStack_c8,lVar5,lVar9);
                    func_0x0001000b44c0(puVar4,uVar7);
                    cStack_d0 = cStack_c0;
                  }
                  else {
                    if (uVar10 == 2) {
                      lVar14 = puVar4[2];
                      lVar1 = puVar4[3];
                      __s10Foundation13__DataStorageC6_bytesSvSgvg();
                      lVar9 = lVar5;
                      if (lVar5 != 0) {
                        __s10Foundation13__DataStorageC7_offsetSivg();
                        if (SBORROW8(lVar14,lVar9)) {
                    /* WARNING: Does not return */
                          pcVar3 = (code *)SoftwareBreakpoint(1,0x10457ba90);
                          (*pcVar3)();
                        }
                        lVar5 = (lVar14 - lVar9) + lVar5;
                      }
                      lVar13 = lVar1 - lVar14;
                      if (SBORROW8(lVar1,lVar14)) {
                    /* WARNING: Does not return */
                        pcVar3 = (code *)SoftwareBreakpoint(1,0x10457b974);
                        (*pcVar3)();
                      }
LAB_10457b9ac:
                      __s10Foundation13__DataStorageC7_lengthSivg();
                      if (lVar5 == 0) goto LAB_10457ba14;
                      if (lVar13 <= lVar9) {
                        lVar9 = lVar13;
                      }
                      lVar9 = lVar9 + lVar5;
                      goto LAB_10457ba18;
                    }
                    cStack_c0 = '\0';
                    uStack_bf = 0;
                    uStack_be = 0;
                    uStack_bd = 0;
                    uStack_bc = 0;
                    uStack_bb = 0;
                    uStack_c8._0_1_ = 0;
                    uStack_c8._1_1_ = 0;
                    uStack_c8._2_1_ = 0;
                    uStack_c8._3_1_ = 0;
                    uStack_c8._4_1_ = 0;
                    uStack_c8._5_1_ = 0;
                    uStack_c8._6_1_ = 0;
                    uStack_c8._7_1_ = 0;
                    puVar8 = &uStack_c8;
LAB_10457b9e4:
                    FUN_10457ea00(auStack_d8,&uStack_c8,puVar8);
                    func_0x0001000b44c0(puVar4,uVar7);
                  }
                  if (cStack_d0 == '\x01') goto LAB_10457ba58;
                  goto LAB_10457b6ac;
                }
              }
LAB_10457b7a0:
              _swift_bridgeObjectRelease(lVar5);
              goto LAB_10457b6ac;
            }
          }
LAB_10457b74c:
          _swift_bridgeObjectRelease(lVar5);
          goto LAB_10457b6ac;
        }
      }
      _swift_bridgeObjectRelease(lVar5);
    }
    else {
LAB_10457b638:
      FUN_1045405d0(&uStack_c8);
    }
  }
LAB_10457b6ac:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_10457ba88:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10457ba8c);
  (*pcVar3)();
}



/* Entry: 10457ba98; end: 10457bb8b;  */

uint FUN_10457ba98(undefined8 *param_1)

{
  uint uVar1;
  uint extraout_w8;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined8 uVar4;
  
  FUN_10457e0a0();
  lVar2 = unaff_x20[2];
  lVar3 = *unaff_x20;
  if (lVar3 == 0) {
    if (lVar2 != 0) goto LAB_10457bad4;
LAB_10457bac8:
    uVar4 = 0xd;
  }
  else {
    if (lVar2 == unaff_x20[1] - lVar3) goto LAB_10457bac8;
LAB_10457bad4:
    if (*(char *)(lVar3 + lVar2) == 't') {
      param_1 = (undefined8 *)0x112d48d68;
      func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
      _swift_initStaticObject();
      FUN_10457eae4();
      if (((ulong)param_1 & 1) != 0) {
        uVar1 = 1;
        goto LAB_10457bb78;
      }
    }
    else if (*(char *)(lVar3 + lVar2) == 'f') {
      param_1 = (undefined8 *)0x112d48d68;
      func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
      _swift_initStaticObject();
      FUN_10457eae4();
      if (((ulong)param_1 & 1) != 0) {
        uVar1 = 0;
        goto LAB_10457bb78;
      }
    }
    uVar4 = 4;
  }
  FUN_104540590();
  _swift_allocError(&UNK_110788c08,param_1,0,0);
  *param_1 = 0;
  param_1[1] = uVar4;
  _swift_willThrow();
  uVar1 = extraout_w8;
LAB_10457bb78:
  return uVar1 & 1;
}



/* Entry: 10457bb8c; end: 10457c1a3;  */

void FUN_10457bb8c(void)

{
  double dVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  double dVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long extraout_x8;
  double dVar11;
  double *unaff_x20;
  long unaff_x21;
  undefined8 *puVar12;
  double *pdVar13;
  long lVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 *apuStack_f0 [2];
  double dStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [4];
  char cStack_cc;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  undefined1 uStack_bd;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined2 uStack_ba;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined8 *)0x0;
  __sSS10FoundationE8EncodingVMa();
  lStack_d8 = puVar4[-1];
  puVar5 = puVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d8 + 0x40));
  puVar12 = (undefined8 *)((long)apuStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_10457e0a0();
  pdVar13 = unaff_x20 + 2;
  dVar15 = *pdVar13;
  dVar6 = *unaff_x20;
  dVar11 = unaff_x20[1];
  if (dVar6 == 0.0) {
    if (dVar15 != 0.0) goto LAB_10457bc28;
LAB_10457bdc4:
    FUN_104540590();
    _swift_allocError(&UNK_110788c08,puVar5,0,0);
    uVar16 = 0xd;
LAB_10457bdec:
    puVar5[1] = uVar16;
    *puVar5 = 0;
    _swift_willThrow();
  }
  else {
    if (dVar15 == (double)((long)dVar11 - (long)dVar6)) goto LAB_10457bdc4;
LAB_10457bc28:
    if (*(char *)((long)dVar6 + (long)dVar15) != '\"') {
      FUN_104571b10();
      lVar14 = 0;
      if (dVar6 != 0.0) {
        lVar14 = (long)dVar11 - (long)dVar6;
      }
      FUN_10457e318(dVar6,dVar11,pdVar13,lVar14);
      if (unaff_x21 != 0) goto LAB_10457bd48;
      puVar5 = &uStack_c8;
      FUN_1045405d0();
      if ((SUB84(dVar11,0) & 0xff) != 1 && (uint)ABS((float)dVar6) < 0x7f800000) goto LAB_10457bdf8;
LAB_10457bd84:
      FUN_104540590();
      _swift_allocError(&UNK_110788c08,puVar5,0,0);
      uVar16 = 1;
      goto LAB_10457bdec;
    }
    dStack_e0 = (double)((long)dVar11 - (long)dVar6);
    dVar1 = 0.0;
    if (dVar6 != 0.0) {
      dVar1 = dStack_e0;
    }
    apuStack_f0[1] = puVar4;
    if ((ulong)dVar1 <= (ulong)dVar15) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10457bf90);
      (*pcVar3)();
    }
    unaff_x20[2] = (double)((long)dVar15 + 1);
    FUN_104571b10();
    FUN_10457e318(dVar6,dVar11,pdVar13,dVar1);
    if (unaff_x21 == 0) {
      uVar8 = SUB84(dVar11,0);
      puVar5 = &uStack_c8;
      FUN_1045405d0();
      if ((uVar8 & 0xff) != 1) {
        dVar11 = *pdVar13;
        if (dVar6 == 0.0) {
          if (dVar11 != 0.0) goto LAB_10457be38;
        }
        else if (dVar11 != dStack_e0) {
LAB_10457be38:
          if (*(char *)((long)dVar6 + (long)dVar11) != '\"') goto LAB_10457bd84;
          if ((ulong)dVar1 <= (ulong)dVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10457c0bc);
            (*pcVar3)();
          }
          *pdVar13 = (double)((long)dVar11 + 1);
          goto LAB_10457bdf8;
        }
        goto LAB_10457bdc4;
      }
      unaff_x20[2] = dVar15;
      FUN_10457b090();
      if ((puVar5 != (undefined8 *)0x4e614e) || (dVar11 != -7.547924849643083e+168)) {
        uVar7 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x4e614e,0xe300000000000000,puVar5,dVar11,0);
        if ((uVar7 & 1) == 0) {
          if ((puVar5 != (undefined8 *)0x666e49) || (dVar11 != -7.547924849643083e+168)) {
            uVar7 = 0x666e49;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x666e49,0xe300000000000000,puVar5,dVar11,0);
            if ((uVar7 & 1) == 0) {
              if ((puVar5 != (undefined8 *)0x666e492d) || (dVar11 != -4.946608029462091e+173)) {
                uVar7 = 0x666e492d;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x666e492d,0xe400000000000000,puVar5,dVar11,0);
                if ((uVar7 & 1) == 0) {
                  uVar7 = 0x7974696e69666e49;
                  if (((puVar5 == (undefined8 *)0x7974696e69666e49) &&
                      (dVar11 == -9.12488123524439e+192)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0x7974696e69666e49,0xe800000000000000,puVar5,dVar11,0),
                     (uVar7 & 1) != 0)) goto LAB_10457be9c;
                  uVar7 = 0x74696e69666e492d;
                  if (((puVar5 == (undefined8 *)0x74696e69666e492d) &&
                      (dVar11 == -5.980082166329924e+197)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0x74696e69666e492d,0xe900000000000079,puVar5,dVar11,0),
                     (uVar7 & 1) != 0)) goto LAB_10457bef0;
                  uStack_c8._0_1_ = SUB81(puVar5,0);
                  uStack_c8._1_1_ = (undefined1)((ulong)puVar5 >> 8);
                  uStack_c8._2_1_ = (undefined1)((ulong)puVar5 >> 0x10);
                  uStack_c8._3_1_ = (undefined1)((ulong)puVar5 >> 0x18);
                  uStack_c8._4_1_ = (char)((ulong)puVar5 >> 0x20);
                  uStack_c8._5_1_ = (undefined1)((ulong)puVar5 >> 0x28);
                  uStack_c8._6_1_ = (undefined1)((ulong)puVar5 >> 0x30);
                  uStack_c8._7_1_ = (undefined1)((ulong)puVar5 >> 0x38);
                  uStack_c0 = SUB81(dVar11,0);
                  uStack_bf = (undefined1)((ulong)dVar11 >> 8);
                  uStack_be = (undefined1)((ulong)dVar11 >> 0x10);
                  uStack_bd = (undefined1)((ulong)dVar11 >> 0x18);
                  uStack_bc = (undefined1)((ulong)dVar11 >> 0x20);
                  uStack_bb = (undefined1)((ulong)dVar11 >> 0x28);
                  uStack_ba = (undefined2)((ulong)dVar11 >> 0x30);
                  __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar12);
                  func_0x000100e8b654();
                  uVar9 = 0;
                  puVar5 = puVar12;
                  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                            (puVar12,0,PTR___sSSN_11034da80,uVar7);
                  (**(code **)(lStack_d8 + 8))(puVar12,apuStack_f0[1]);
                  _swift_bridgeObjectRelease();
                  if (0xe < uVar9 >> 0x3c) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10457c1a4);
                    (*pcVar3)();
                  }
                  uVar8 = (uint)(uVar9 >> 0x20);
                  uVar10 = uVar8 >> 0x1e;
                  if (uVar8 >> 0x1e < 2) {
                    if (uVar10 != 0) {
                      lVar14 = (long)(int)puVar5;
                      dVar15 = (double)(((long)puVar5 >> 0x20) - lVar14);
                      if ((long)puVar5 >> 0x20 < lVar14) goto LAB_10457c194;
                      __s10Foundation13__DataStorageC6_bytesSvSgvg();
                      if (dVar11 != 0.0) {
                        dVar6 = dVar11;
                        __s10Foundation13__DataStorageC7_offsetSivg();
                        if (SBORROW8(lVar14,(long)dVar6)) {
                    /* WARNING: Does not return */
                          pcVar3 = (code *)SoftwareBreakpoint(1,0x10457c1a0);
                          (*pcVar3)();
                        }
                        dVar11 = (double)((lVar14 - (long)dVar6) + (long)dVar11);
                        goto LAB_10457c0f0;
                      }
                      __s10Foundation13__DataStorageC7_lengthSivg();
                      dVar11 = 0.0;
LAB_10457c150:
                      lVar14 = 0;
                      goto LAB_10457c154;
                    }
                    uStack_c8._0_1_ = SUB81(puVar5,0);
                    uStack_c8._1_1_ = (undefined1)((ulong)puVar5 >> 8);
                    uStack_c8._2_1_ = (undefined1)((ulong)puVar5 >> 0x10);
                    uStack_c8._3_1_ = (undefined1)((ulong)puVar5 >> 0x18);
                    uStack_c8._4_1_ = (char)((ulong)puVar5 >> 0x20);
                    uStack_c8._5_1_ = (undefined1)((ulong)puVar5 >> 0x28);
                    uStack_c8._6_1_ = (undefined1)((ulong)puVar5 >> 0x30);
                    uStack_c8._7_1_ = (undefined1)((ulong)puVar5 >> 0x38);
                    uStack_c0 = (undefined1)uVar9;
                    uStack_bf = (undefined1)(uVar9 >> 8);
                    uStack_be = (undefined1)(uVar9 >> 0x10);
                    uStack_bd = (undefined1)(uVar9 >> 0x18);
                    uStack_bc = (undefined1)(uVar9 >> 0x20);
                    uStack_bb = (undefined1)(uVar9 >> 0x28);
                    puVar4 = (undefined8 *)((long)&uStack_c8 + (uVar9 >> 0x30 & 0xff));
LAB_10457c120:
                    FUN_10457e90c(auStack_d0,&uStack_c8,puVar4);
                    func_0x0001000b44c0(puVar5,uVar9);
                  }
                  else {
                    if (uVar10 != 2) {
                      uStack_c0 = 0;
                      uStack_bf = 0;
                      uStack_be = 0;
                      uStack_bd = 0;
                      uStack_bc = 0;
                      uStack_bb = 0;
                      uStack_c8._0_1_ = 0;
                      uStack_c8._1_1_ = 0;
                      uStack_c8._2_1_ = 0;
                      uStack_c8._3_1_ = 0;
                      uStack_c8._4_1_ = '\0';
                      uStack_c8._5_1_ = 0;
                      uStack_c8._6_1_ = 0;
                      uStack_c8._7_1_ = 0;
                      puVar4 = &uStack_c8;
                      goto LAB_10457c120;
                    }
                    lVar14 = puVar5[2];
                    lVar2 = puVar5[3];
                    __s10Foundation13__DataStorageC6_bytesSvSgvg();
                    dVar6 = dVar11;
                    if (dVar11 != 0.0) {
                      __s10Foundation13__DataStorageC7_offsetSivg();
                      if (SBORROW8(lVar14,(long)dVar6)) {
                    /* WARNING: Does not return */
                        pcVar3 = (code *)SoftwareBreakpoint(1,0x10457c19c);
                        (*pcVar3)();
                      }
                      dVar11 = (double)((lVar14 - (long)dVar6) + (long)dVar11);
                    }
                    dVar15 = (double)(lVar2 - lVar14);
                    if (SBORROW8(lVar2,lVar14)) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x10457c0b8);
                      (*pcVar3)();
                    }
LAB_10457c0f0:
                    __s10Foundation13__DataStorageC7_lengthSivg();
                    if (dVar11 == 0.0) goto LAB_10457c150;
                    if ((long)dVar15 <= (long)dVar6) {
                      dVar6 = dVar15;
                    }
                    lVar14 = (long)dVar6 + (long)dVar11;
LAB_10457c154:
                    FUN_10457e90c(&uStack_c8,dVar11,lVar14);
                    func_0x0001000b44c0(puVar5,uVar9);
                    cStack_cc = uStack_c8._4_1_;
                  }
                  if (cStack_cc == '\x01') goto LAB_10457bd84;
                  goto LAB_10457bdf8;
                }
              }
LAB_10457bef0:
              _swift_bridgeObjectRelease(dVar11);
              goto LAB_10457bdf8;
            }
          }
LAB_10457be9c:
          _swift_bridgeObjectRelease(dVar11);
          goto LAB_10457bdf8;
        }
      }
      _swift_bridgeObjectRelease(dVar11);
    }
    else {
LAB_10457bd48:
      FUN_1045405d0(&uStack_c8);
    }
  }
LAB_10457bdf8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_10457c194:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10457c198);
  (*pcVar3)();
}



/* Entry: 10457c1a4; end: 10457c243;  */

code * FUN_10457c1a4(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 *puVar8;
  code *pcVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  long lVar13;
  long extraout_x8;
  code *unaff_x20;
  long unaff_x21;
  long lVar14;
  code *pcVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  ulong auStack_140 [2];
  code *pcStack_118;
  char cStack_110;
  undefined1 auStack_108 [8];
  char cStack_100;
  undefined1 uStack_ff;
  undefined1 uStack_fe;
  undefined1 uStack_fd;
  undefined1 uStack_fc;
  undefined1 uStack_fb;
  undefined2 uStack_fa;
  long lStack_a8;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = FUN_10457e6c8;
  FUN_10457c244(FUN_10457e6c8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return pcVar4;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = FUN_10457e108;
  FUN_10457c244();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return pcVar4;
  }
  ___stack_chk_fail();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined8 *)0x0;
  __sSS10FoundationE8EncodingVMa();
  lVar14 = puVar5[-1];
  puVar6 = puVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar17 = (undefined8 *)((long)auStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_10457e0a0();
  pcVar15 = unaff_x20 + 0x10;
  uVar16 = *(ulong *)pcVar15;
  pcVar9 = *(code **)unaff_x20;
  lVar13 = *(long *)(unaff_x20 + 8);
  if (pcVar9 == (code *)0x0) {
    if (uVar16 != 0) goto LAB_10457c2e0;
LAB_10457c4e8:
    FUN_104540590();
    _swift_allocError(&UNK_110788c08,puVar6,0,0);
    uVar19 = 0xd;
    pcVar9 = unaff_x20;
LAB_10457c510:
    puVar6[1] = uVar19;
    *puVar6 = 0;
    _swift_willThrow();
  }
  else {
    if (uVar16 == lVar13 - (long)pcVar9) goto LAB_10457c4e8;
LAB_10457c2e0:
    if (pcVar9[uVar16] != (code)0x22) {
      FUN_104571b10();
      lVar14 = 0;
      if (pcVar9 != (code *)0x0) {
        lVar14 = lVar13 - (long)pcVar9;
      }
      (*pcVar4)(pcVar9,lVar13,pcVar15,lVar14);
      if (unaff_x21 != 0) goto LAB_10457c4a8;
      puVar6 = (undefined8 *)auStack_108;
      FUN_1045405d0();
      if (((uint)lVar13 & 0xff) != 1) goto LAB_10457c51c;
LAB_10457c6c8:
      FUN_104540590();
      _swift_allocError(&UNK_110788c08,puVar6,0,0);
      uVar19 = 1;
      goto LAB_10457c510;
    }
    auStack_140[1] = lVar13 - (long)pcVar9;
    uVar1 = 0;
    if (pcVar9 != (code *)0x0) {
      uVar1 = auStack_140[1];
    }
    if (uVar1 <= uVar16) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10457c6f8);
      (*pcVar4)();
    }
    *(ulong *)(unaff_x20 + 0x10) = uVar16 + 1;
    FUN_104571b10();
    pcVar7 = pcVar9;
    (*pcVar4)(pcVar9,lVar13,pcVar15,uVar1);
    if (unaff_x21 == 0) {
      uVar10 = (uint)lVar13;
      puVar6 = (undefined8 *)auStack_108;
      FUN_1045405d0();
      if ((uVar10 & 0xff) != 1) {
        uVar16 = *(ulong *)pcVar15;
        unaff_x20 = pcVar7;
        if (pcVar9 == (code *)0x0) {
          if (uVar16 != 0) goto LAB_10457c560;
        }
        else if (uVar16 != auStack_140[1]) {
LAB_10457c560:
          pcVar4 = pcVar9 + uVar16;
          pcVar9 = pcVar7;
          if (*pcVar4 != (code)0x22) goto LAB_10457c6c8;
          if (uVar1 <= uVar16) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10457c6fc);
            (*pcVar4)();
          }
          *(ulong *)pcVar15 = uVar16 + 1;
          goto LAB_10457c51c;
        }
        goto LAB_10457c4e8;
      }
      *(ulong *)(unaff_x20 + 0x10) = uVar16;
      FUN_10457b090();
      auStack_108[0] = SUB81(puVar6,0);
      auStack_108[1] = (undefined1)((ulong)puVar6 >> 8);
      auStack_108[2] = (undefined1)((ulong)puVar6 >> 0x10);
      auStack_108[3] = (undefined1)((ulong)puVar6 >> 0x18);
      auStack_108[4] = (undefined1)((ulong)puVar6 >> 0x20);
      auStack_108[5] = (undefined1)((ulong)puVar6 >> 0x28);
      auStack_108[6] = (undefined1)((ulong)puVar6 >> 0x30);
      auStack_108[7] = (undefined1)((ulong)puVar6 >> 0x38);
      cStack_100 = (char)lVar13;
      uStack_ff = (undefined1)((ulong)lVar13 >> 8);
      uStack_fe = (undefined1)((ulong)lVar13 >> 0x10);
      uStack_fd = (undefined1)((ulong)lVar13 >> 0x18);
      uStack_fc = (undefined1)((ulong)lVar13 >> 0x20);
      uStack_fb = (undefined1)((ulong)lVar13 >> 0x28);
      uStack_fa = (undefined2)((ulong)lVar13 >> 0x30);
      __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar17);
      func_0x000100e8b654();
      uVar16 = 0;
      puVar8 = puVar17;
      __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                (puVar17,0,PTR___sSSN_11034da80,puVar6);
      (**(code **)(lVar14 + 8))(puVar17,puVar5);
      _swift_bridgeObjectRelease();
      if (0xe < uVar16 >> 0x3c) goto LAB_10457c710;
      uVar10 = (uint)(uVar16 >> 0x20);
      uVar12 = uVar10 >> 0x1e;
      if (uVar10 >> 0x1e < 2) {
        if (uVar12 == 0) {
          auStack_108[0] = SUB81(puVar8,0);
          auStack_108[1] = (undefined1)((ulong)puVar8 >> 8);
          auStack_108[2] = (undefined1)((ulong)puVar8 >> 0x10);
          auStack_108[3] = (undefined1)((ulong)puVar8 >> 0x18);
          auStack_108[4] = (undefined1)((ulong)puVar8 >> 0x20);
          auStack_108[5] = (undefined1)((ulong)puVar8 >> 0x28);
          auStack_108[6] = (undefined1)((ulong)puVar8 >> 0x30);
          auStack_108[7] = (undefined1)((ulong)puVar8 >> 0x38);
          cStack_100 = (char)uVar16;
          uStack_ff = (undefined1)(uVar16 >> 8);
          uStack_fe = (undefined1)(uVar16 >> 0x10);
          uStack_fd = (undefined1)(uVar16 >> 0x18);
          uStack_fc = (undefined1)(uVar16 >> 0x20);
          uStack_fb = (undefined1)(uVar16 >> 0x28);
          puVar11 = auStack_108 + (uVar16 >> 0x30 & 0xff);
          goto LAB_10457c640;
        }
        lVar18 = (long)(int)puVar8;
        lVar3 = ((long)puVar8 >> 0x20) - lVar18;
        if ((long)puVar8 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10457c700);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar13 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar13 = 0;
        }
        else {
          lVar14 = lVar13;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar18,lVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10457c70c);
            (*pcVar4)();
          }
          lVar13 = (lVar18 - lVar14) + lVar13;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar13 != 0) {
            if (lVar3 <= lVar14) {
              lVar14 = lVar3;
            }
            lVar14 = lVar14 + lVar13;
            goto LAB_10457c694;
          }
        }
        lVar14 = 0;
LAB_10457c694:
        FUN_10457ea00(auStack_108,lVar13,lVar14);
        func_0x0001000b44c0(puVar8,uVar16);
        pcStack_118 = (code *)CONCAT17(auStack_108[7],
                                       CONCAT16(auStack_108[6],
                                                CONCAT15(auStack_108[5],
                                                         CONCAT14(auStack_108[4],
                                                                  CONCAT13(auStack_108[3],
                                                                           CONCAT12(auStack_108[2],
                                                                                    CONCAT11(
                                                  auStack_108[1],auStack_108[0])))))));
        cStack_110 = cStack_100;
      }
      else {
        if (uVar12 == 2) {
          lVar3 = puVar8[2];
          lVar18 = puVar8[3];
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          lVar14 = lVar13;
          if (lVar13 != 0) {
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar3,lVar14)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10457c708);
              (*pcVar4)();
            }
            lVar13 = (lVar3 - lVar14) + lVar13;
          }
          lVar2 = lVar18 - lVar3;
          if (SBORROW8(lVar18,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10457c704);
            (*pcVar4)();
          }
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar13 == 0) {
            lVar14 = 0;
          }
          else {
            if (lVar2 <= lVar14) {
              lVar14 = lVar2;
            }
            lVar14 = lVar14 + lVar13;
          }
          goto LAB_10457c694;
        }
        cStack_100 = '\0';
        uStack_ff = 0;
        uStack_fe = 0;
        uStack_fd = 0;
        uStack_fc = 0;
        uStack_fb = 0;
        auStack_108[0] = (code)0x0;
        auStack_108[1] = 0;
        auStack_108[2] = 0;
        auStack_108[3] = 0;
        auStack_108[4] = 0;
        auStack_108[5] = 0;
        auStack_108[6] = 0;
        auStack_108[7] = 0;
        puVar11 = auStack_108;
LAB_10457c640:
        FUN_10457ea00(&pcStack_118,auStack_108,puVar11);
        func_0x0001000b44c0(puVar8,uVar16);
      }
      puVar6 = puVar8;
      pcVar9 = pcStack_118;
      if (cStack_110 == '\x01') goto LAB_10457c6c8;
    }
    else {
LAB_10457c4a8:
      pcVar9 = (code *)auStack_108;
      FUN_1045405d0(auStack_108);
    }
  }
LAB_10457c51c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return pcVar9;
  }
  ___stack_chk_fail();
LAB_10457c710:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10457c714);
  (*pcVar4)();
}



/* Entry: 10457c244; end: 10457c713;  */

long * FUN_10457c244(code *param_1)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  ulong auStack_100 [2];
  long *plStack_d8;
  char cStack_d0;
  undefined8 uStack_c8;
  char cStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  undefined1 uStack_bd;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined2 uStack_ba;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined8 *)0x0;
  __sSS10FoundationE8EncodingVMa();
  lVar14 = puVar6[-1];
  puVar7 = puVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar17 = (undefined8 *)((long)auStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_10457e0a0();
  puVar15 = (ulong *)(unaff_x20 + 2);
  uVar16 = *puVar15;
  plVar10 = (long *)*unaff_x20;
  lVar11 = unaff_x20[1];
  if (plVar10 == (long *)0x0) {
    if (uVar16 != 0) goto LAB_10457c2e0;
LAB_10457c4e8:
    FUN_104540590();
    _swift_allocError(&UNK_110788c08,puVar7,0,0);
    uVar19 = 0xd;
    plVar10 = unaff_x20;
LAB_10457c510:
    puVar7[1] = uVar19;
    *puVar7 = 0;
    _swift_willThrow();
  }
  else {
    if (uVar16 == lVar11 - (long)plVar10) goto LAB_10457c4e8;
LAB_10457c2e0:
    if (*(char *)((long)plVar10 + uVar16) != '\"') {
      FUN_104571b10();
      lVar14 = 0;
      if (plVar10 != (long *)0x0) {
        lVar14 = lVar11 - (long)plVar10;
      }
      (*param_1)(plVar10,lVar11,puVar15,lVar14);
      if (unaff_x21 != 0) goto LAB_10457c4a8;
      puVar7 = &uStack_c8;
      FUN_1045405d0();
      if (((uint)lVar11 & 0xff) != 1) goto LAB_10457c51c;
LAB_10457c6c8:
      FUN_104540590();
      _swift_allocError(&UNK_110788c08,puVar7,0,0);
      uVar19 = 1;
      goto LAB_10457c510;
    }
    auStack_100[1] = lVar11 - (long)plVar10;
    uVar2 = 0;
    if (plVar10 != (long *)0x0) {
      uVar2 = auStack_100[1];
    }
    if (uVar2 <= uVar16) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10457c6f8);
      (*pcVar5)();
    }
    unaff_x20[2] = uVar16 + 1;
    FUN_104571b10();
    plVar8 = plVar10;
    (*param_1)(plVar10,lVar11,puVar15,uVar2);
    if (unaff_x21 == 0) {
      uVar12 = (uint)lVar11;
      puVar7 = &uStack_c8;
      FUN_1045405d0();
      if ((uVar12 & 0xff) != 1) {
        uVar16 = *puVar15;
        unaff_x20 = plVar8;
        if (plVar10 == (long *)0x0) {
          if (uVar16 != 0) goto LAB_10457c560;
        }
        else if (uVar16 != auStack_100[1]) {
LAB_10457c560:
          pcVar1 = (char *)((long)plVar10 + uVar16);
          plVar10 = plVar8;
          if (*pcVar1 != '\"') goto LAB_10457c6c8;
          if (uVar2 <= uVar16) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10457c6fc);
            (*pcVar5)();
          }
          *puVar15 = uVar16 + 1;
          goto LAB_10457c51c;
        }
        goto LAB_10457c4e8;
      }
      unaff_x20[2] = uVar16;
      FUN_10457b090();
      uStack_c8._0_1_ = SUB81(puVar7,0);
      uStack_c8._1_1_ = (undefined1)((ulong)puVar7 >> 8);
      uStack_c8._2_1_ = (undefined1)((ulong)puVar7 >> 0x10);
      uStack_c8._3_1_ = (undefined1)((ulong)puVar7 >> 0x18);
      uStack_c8._4_1_ = (undefined1)((ulong)puVar7 >> 0x20);
      uStack_c8._5_1_ = (undefined1)((ulong)puVar7 >> 0x28);
      uStack_c8._6_1_ = (undefined1)((ulong)puVar7 >> 0x30);
      uStack_c8._7_1_ = (undefined1)((ulong)puVar7 >> 0x38);
      cStack_c0 = (char)lVar11;
      uStack_bf = (undefined1)((ulong)lVar11 >> 8);
      uStack_be = (undefined1)((ulong)lVar11 >> 0x10);
      uStack_bd = (undefined1)((ulong)lVar11 >> 0x18);
      uStack_bc = (undefined1)((ulong)lVar11 >> 0x20);
      uStack_bb = (undefined1)((ulong)lVar11 >> 0x28);
      uStack_ba = (undefined2)((ulong)lVar11 >> 0x30);
      __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar17);
      func_0x000100e8b654();
      uVar16 = 0;
      puVar9 = puVar17;
      __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                (puVar17,0,PTR___sSSN_11034da80,puVar7);
      (**(code **)(lVar14 + 8))(puVar17,puVar6);
      _swift_bridgeObjectRelease();
      if (0xe < uVar16 >> 0x3c) goto LAB_10457c710;
      uVar12 = (uint)(uVar16 >> 0x20);
      uVar13 = uVar12 >> 0x1e;
      if (uVar12 >> 0x1e < 2) {
        if (uVar13 == 0) {
          uStack_c8._0_1_ = SUB81(puVar9,0);
          uStack_c8._1_1_ = (undefined1)((ulong)puVar9 >> 8);
          uStack_c8._2_1_ = (undefined1)((ulong)puVar9 >> 0x10);
          uStack_c8._3_1_ = (undefined1)((ulong)puVar9 >> 0x18);
          uStack_c8._4_1_ = (undefined1)((ulong)puVar9 >> 0x20);
          uStack_c8._5_1_ = (undefined1)((ulong)puVar9 >> 0x28);
          uStack_c8._6_1_ = (undefined1)((ulong)puVar9 >> 0x30);
          uStack_c8._7_1_ = (undefined1)((ulong)puVar9 >> 0x38);
          cStack_c0 = (char)uVar16;
          uStack_bf = (undefined1)(uVar16 >> 8);
          uStack_be = (undefined1)(uVar16 >> 0x10);
          uStack_bd = (undefined1)(uVar16 >> 0x18);
          uStack_bc = (undefined1)(uVar16 >> 0x20);
          uStack_bb = (undefined1)(uVar16 >> 0x28);
          puVar7 = (undefined8 *)((long)&uStack_c8 + (uVar16 >> 0x30 & 0xff));
          goto LAB_10457c640;
        }
        lVar18 = (long)(int)puVar9;
        lVar4 = ((long)puVar9 >> 0x20) - lVar18;
        if ((long)puVar9 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10457c700);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar11 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar11 = 0;
        }
        else {
          lVar14 = lVar11;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar18,lVar14)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10457c70c);
            (*pcVar5)();
          }
          lVar11 = (lVar18 - lVar14) + lVar11;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar11 != 0) {
            if (lVar4 <= lVar14) {
              lVar14 = lVar4;
            }
            lVar14 = lVar14 + lVar11;
            goto LAB_10457c694;
          }
        }
        lVar14 = 0;
LAB_10457c694:
        FUN_10457ea00(&uStack_c8,lVar11,lVar14);
        func_0x0001000b44c0(puVar9,uVar16);
        plStack_d8 = (long *)CONCAT17(uStack_c8._7_1_,
                                      CONCAT16(uStack_c8._6_1_,
                                               CONCAT15(uStack_c8._5_1_,
                                                        CONCAT14(uStack_c8._4_1_,
                                                                 CONCAT13(uStack_c8._3_1_,
                                                                          CONCAT12(uStack_c8._2_1_,
                                                                                   CONCAT11(
                                                  uStack_c8._1_1_,(undefined1)uStack_c8)))))));
        cStack_d0 = cStack_c0;
      }
      else {
        if (uVar13 == 2) {
          lVar4 = puVar9[2];
          lVar18 = puVar9[3];
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          lVar14 = lVar11;
          if (lVar11 != 0) {
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar4,lVar14)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10457c708);
              (*pcVar5)();
            }
            lVar11 = (lVar4 - lVar14) + lVar11;
          }
          lVar3 = lVar18 - lVar4;
          if (SBORROW8(lVar18,lVar4)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10457c704);
            (*pcVar5)();
          }
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar11 == 0) {
            lVar14 = 0;
          }
          else {
            if (lVar3 <= lVar14) {
              lVar14 = lVar3;
            }
            lVar14 = lVar14 + lVar11;
          }
          goto LAB_10457c694;
        }
        cStack_c0 = '\0';
        uStack_bf = 0;
        uStack_be = 0;
        uStack_bd = 0;
        uStack_bc = 0;
        uStack_bb = 0;
        uStack_c8._0_1_ = 0;
        uStack_c8._1_1_ = 0;
        uStack_c8._2_1_ = 0;
        uStack_c8._3_1_ = 0;
        uStack_c8._4_1_ = 0;
        uStack_c8._5_1_ = 0;
        uStack_c8._6_1_ = 0;
        uStack_c8._7_1_ = 0;
        puVar7 = &uStack_c8;
LAB_10457c640:
        FUN_10457ea00(&plStack_d8,&uStack_c8,puVar7);
        func_0x0001000b44c0(puVar9,uVar16);
      }
      puVar7 = puVar9;
      plVar10 = plStack_d8;
      if (cStack_d0 == '\x01') goto LAB_10457c6c8;
    }
    else {
LAB_10457c4a8:
      plVar10 = &uStack_c8;
      FUN_1045405d0(&uStack_c8);
    }
  }
LAB_10457c51c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar10;
  }
  ___stack_chk_fail();
LAB_10457c710:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10457c714);
  (*pcVar5)();
}



/* Entry: 10457c714; end: 10457c863;  */

uint FUN_10457c714(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint extraout_w8;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  undefined8 uVar5;
  
  FUN_10457e0a0();
  lVar3 = unaff_x20[2];
  lVar4 = *unaff_x20;
  if (lVar4 == 0) {
    if (lVar3 != 0) goto LAB_10457c754;
LAB_10457c748:
    uVar5 = 0xd;
  }
  else {
    if (lVar3 == unaff_x20[1] - lVar4) goto LAB_10457c748;
LAB_10457c754:
    if (*(char *)(lVar4 + lVar3) == '\"') {
      FUN_10457e7d8();
      if (param_2 != (undefined8 *)0x0) {
        uVar1 = 0;
        if (((param_1 == (undefined8 *)0x65736c6166) &&
            (param_2 == (undefined8 *)0xe500000000000000)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x65736c6166,0xe500000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
          _swift_bridgeObjectRelease(param_2);
          uVar2 = 0;
          goto LAB_10457c84c;
        }
        if ((param_1 == (undefined8 *)0x65757274) && (param_2 == (undefined8 *)0xe400000000000000))
        {
          _swift_bridgeObjectRelease(0xe400000000000000);
        }
        else {
          uVar1 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x65757274,0xe400000000000000,param_1,param_2,0);
          _swift_bridgeObjectRelease();
          param_1 = param_2;
          if ((uVar1 & 1) == 0) goto LAB_10457c81c;
        }
        uVar2 = 1;
        goto LAB_10457c84c;
      }
LAB_10457c81c:
      uVar5 = 4;
    }
    else {
      uVar5 = 0xb;
    }
  }
  FUN_104540590();
  _swift_allocError(&UNK_110788c08,param_1,0,0);
  *param_1 = 0;
  param_1[1] = uVar5;
  _swift_willThrow();
  uVar2 = extraout_w8;
LAB_10457c84c:
  return uVar2 & 1;
}



/* Entry: 10457c864; end: 10457c8f3;  */

void FUN_10457c864(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  
  FUN_10457e0a0();
  puVar1 = (undefined8 *)*unaff_x20;
  if (puVar1 == (undefined8 *)0x0) {
    if (unaff_x20[2] != 0) goto LAB_10457c8a0;
  }
  else if (unaff_x20[2] != unaff_x20[1] - (long)puVar1) {
LAB_10457c8a0:
    FUN_10457cd04();
    return;
  }
  FUN_104540590();
  _swift_allocError(&UNK_110788c08,puVar1,0,0);
  puVar1[1] = 0xd;
  *puVar1 = 0;
  _swift_willThrow();
  return;
}



/* Entry: 10457c8f4; end: 10457cc97;  */

void FUN_10457c8f4(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long *unaff_x20;
  long unaff_x21;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  
  puVar1 = (undefined8 *)0x0;
  __sSqMa(0,param_2);
  lVar4 = puVar1[-1];
  puVar2 = puVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffff70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar12 = puVar3 + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (long)puVar12 - extraout_x12_00;
  lVar5 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar10 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar10 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  FUN_10457e0a0();
  lVar6 = unaff_x20[2];
  lVar8 = *unaff_x20;
  if (lVar8 == 0) {
    if (lVar6 == 0) goto LAB_10457ca24;
  }
  else if (lVar6 == unaff_x20[1] - lVar8) {
LAB_10457ca24:
    FUN_104540590();
    _swift_allocError(&UNK_110788c08,puVar2,0,0);
    puVar2[1] = 0xd;
    *puVar2 = 0;
    _swift_willThrow();
    return;
  }
  if (*(char *)(lVar8 + lVar6) == '\"') {
    FUN_10457ebc8();
    if (unaff_x21 != 0) {
      return;
    }
    if ((param_4 & 0xff) != 1) {
      func_0x000104557b40(lVar11);
      lVar6 = lVar11;
      (**(code **)(lVar5 + 0x30))(lVar11,1,param_2);
      if ((int)lVar6 != 1) {
        pcVar7 = *(code **)(lVar5 + 0x20);
        (*pcVar7)(lVar9 - extraout_x12_02,lVar11,param_2);
        (*pcVar7)(param_1,lVar9 - extraout_x12_02,param_2);
        goto LAB_10457cc5c;
      }
      (**(code **)(lVar4 + 8))(lVar11,puVar1);
      goto LAB_10457cbcc;
    }
    FUN_10457b090();
    func_0x000104557888(puVar12);
    puVar3 = puVar12;
    (**(code **)(lVar5 + 0x30))(puVar12,1,param_2);
    if ((int)puVar3 != 1) {
      pcVar7 = *(code **)(lVar5 + 0x20);
      (*pcVar7)(lVar9,puVar12,param_2);
      (*pcVar7)(param_1,lVar9,param_2);
LAB_10457cc5c:
      (**(code **)(lVar5 + 0x38))(param_1,0,1,param_2);
      return;
    }
    pcVar7 = *(code **)(lVar4 + 8);
    puVar3 = puVar12;
  }
  else {
    FUN_10457c244(FUN_10457e6c8);
    if (unaff_x21 != 0) {
      return;
    }
    (**(code **)(param_3 + 0x20))(puVar3);
    puVar12 = puVar3;
    (**(code **)(lVar5 + 0x30))(puVar3,1,param_2);
    if ((int)puVar12 != 1) {
      pcVar7 = *(code **)(lVar5 + 0x20);
      (*pcVar7)(lVar10,puVar3,param_2);
      (*pcVar7)(param_1,lVar10,param_2);
      goto LAB_10457cc5c;
    }
    pcVar7 = *(code **)(lVar4 + 8);
  }
  (*pcVar7)(puVar3,puVar1);
LAB_10457cbcc:
  FUN_10457f0b4(param_1);
  return;
}



/* Entry: 10457cc98; end: 10457cd03;  */

ulong FUN_10457cc98(int param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)(param_1 - 0x30U);
  if (param_1 - 0x30U < 10) {
code_r0x00010457cca8:
    return uVar1;
  }
  uVar1 = 10;
  switch(param_1) {
  case 0x41:
  case 0x61:
    goto code_r0x00010457cca8;
  case 0x42:
  case 0x62:
    return 0xb;
  case 0x43:
  case 99:
    return 0xc;
  case 0x44:
  case 100:
    return 0xd;
  case 0x45:
  case 0x65:
    return 0xe;
  case 0x46:
  case 0x66:
    return 0xf;
  default:
    return 0x100000000;
  }
}



/* Entry: 10457cd04; end: 10457cf07;  */

void FUN_10457cd04(undefined8 *param_1,long param_2,ulong *param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  byte bVar9;
  ulong uVar10;
  long unaff_x21;
  long lStack_50;
  long lStack_48;
  
  uVar5 = *param_3;
  if (*(char *)((long)param_1 + uVar5) == '\"') {
    uVar1 = 0;
    if (param_1 != (undefined8 *)0x0) {
      uVar1 = param_2 - (long)param_1;
    }
    if (uVar1 <= uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10457cf00);
      (*pcVar2)();
    }
    uVar5 = uVar5 + 1;
    if (uVar5 != param_4) {
      bVar9 = 0;
      bVar7 = 0;
      lVar6 = 0;
      uVar8 = uVar5;
      do {
        uVar10 = (ulong)*(byte *)((long)param_1 + uVar8);
        if (uVar10 < 0x2f) {
          if (uVar10 == 0x2b) goto LAB_10457ce18;
          if (uVar10 == 0x2d) goto LAB_10457ce10;
          if (uVar10 == 0x22) {
            *param_3 = uVar8;
            if (!(bool)(bVar9 & bVar7)) {
              lVar4 = lVar6 * 3;
              if (SUB168(SEXT816(lVar6) * SEXT816(3),8) != lVar4 >> 0x3f) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10457cf04);
                (*pcVar2)();
              }
              lVar6 = lVar4 + 3;
              if (-1 < lVar4) {
                lVar6 = lVar4;
              }
              lVar6 = lVar6 >> 2;
              lVar4 = param_2;
              func_0x000100076320();
              *param_3 = uVar5;
              lStack_50 = lVar6;
              lStack_48 = lVar4;
              FUN_10457f348(&lStack_50,param_1,param_2,param_3);
              if (unaff_x21 != 0) {
                func_0x00010006c090(lStack_50,lStack_48);
                return;
              }
              if (*param_3 < uVar1) {
                *param_3 = *param_3 + 1;
                return;
              }
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10457cf08);
              (*pcVar2)();
            }
            goto LAB_10457cd50;
          }
        }
        else {
          if (uVar10 != 0x2f) {
            if (uVar10 == 0x5f) {
LAB_10457ce10:
              bVar7 = 1;
              goto LAB_10457ce1c;
            }
            if (uVar10 != 0x5c) goto LAB_10457ce1c;
            if ((long)uVar1 <= (long)uVar8) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10457cefc);
              (*pcVar2)();
            }
            uVar8 = uVar8 + 1;
            if (uVar8 == param_4) break;
            uVar10 = (ulong)*(byte *)((long)param_1 + uVar8);
            if (*(byte *)((long)param_1 + uVar8) != 0x2f) {
              *param_3 = uVar8;
              goto LAB_10457cd50;
            }
          }
LAB_10457ce18:
          bVar9 = 1;
        }
LAB_10457ce1c:
        if ((-1 < *(long *)(uVar10 * 8 + 0x113086738)) &&
           (bVar3 = SCARRY8(lVar6,1), lVar6 = lVar6 + 1, bVar3)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10457cef8);
          (*pcVar2)();
        }
        if ((long)uVar1 <= (long)uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10457cef4);
          (*pcVar2)();
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != param_4);
    }
    *param_3 = param_4;
  }
LAB_10457cd50:
  FUN_104540590();
  _swift_allocError(&UNK_110788c08,param_1,0,0);
  param_1[1] = 5;
  *param_1 = 0;
  _swift_willThrow();
  return;
}



/* Entry: 10457cf08; end: 10457d133;  */

void FUN_10457cf08(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4,ulong *param_5)

{
  char *pcVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (param_2 == param_1) {
    return;
  }
  uVar5 = 0;
  lVar6 = 0;
  uVar7 = param_4 - param_3;
  uVar8 = *param_5;
  do {
    uVar10 = (ulong)*(byte *)(param_3 + uVar8);
    uVar11 = *(ulong *)(uVar10 * 8 + 0x113086738);
    while ((long)uVar11 < 0) {
      iVar9 = (int)uVar10;
      if (iVar9 != 0x20) {
        if (iVar9 == 0x22) {
          if (lVar6 == 0) {
            return;
          }
          if (lVar6 == 3) {
            *(char *)param_1 = (char)(uVar5 >> 10);
            *(char *)((long)param_1 + 1) = (char)(uVar5 >> 2);
            return;
          }
          if (lVar6 == 2) {
            *(char *)param_1 = (char)(uVar5 >> 4);
            return;
          }
          goto LAB_10457d0d8;
        }
        if (iVar9 != 0x5c) {
          if (iVar9 != 0x3d) goto LAB_10457d0d8;
          uVar11 = 0;
          goto LAB_10457d020;
        }
        if ((param_3 == 0) || (uVar7 <= uVar8)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10457d134);
          (*pcVar3)();
        }
        *param_5 = uVar8 + 1;
        pcVar1 = (char *)(param_3 + 1 + uVar8);
        uVar8 = uVar8 + 1;
        uVar11 = uRam00000001130868b0;
        if (*pcVar1 != '/') goto LAB_10457d0d8;
        break;
      }
      if ((param_3 == 0) || (uVar7 <= uVar8)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10457d120);
        (*pcVar3)();
      }
      *param_5 = uVar8 + 1;
      uVar10 = (ulong)*(byte *)(param_3 + 1 + uVar8);
      uVar8 = uVar8 + 1;
      uVar11 = *(ulong *)(uVar10 * 8 + 0x113086738);
    }
    bVar4 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10457d12c);
      (*pcVar3)();
    }
    uVar5 = uVar11 | uVar5 << 6;
    if (lVar6 == 4) {
      lVar6 = 0;
      *(char *)param_1 = (char)(uVar5 >> 0x10);
      *(char *)((long)param_1 + 1) = (char)(uVar5 >> 8);
      *(char *)((long)param_1 + 2) = (char)uVar5;
      param_1 = (undefined8 *)((long)param_1 + 3);
      uVar8 = *param_5;
      uVar5 = 0;
    }
    if ((param_3 == 0) || (uVar7 <= uVar8)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10457d130);
      (*pcVar3)();
    }
    uVar8 = uVar8 + 1;
    *param_5 = uVar8;
  } while( true );
  while( true ) {
    if ((param_3 == 0) || (uVar7 <= uVar8)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10457d124);
      (*pcVar3)();
    }
    *param_5 = uVar8 + 1;
    bVar2 = *(byte *)(param_3 + 1 + uVar8);
    uVar10 = (ulong)bVar2;
    uVar8 = uVar8 + 1;
    if (bVar2 == 0x22) break;
LAB_10457d020:
    if ((int)uVar10 != 0x20) {
      if ((int)uVar10 != 0x3d) goto LAB_10457d0d8;
      bVar4 = SCARRY8(uVar11,1);
      uVar11 = uVar11 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10457d128);
        (*pcVar3)();
      }
    }
  }
  if (lVar6 != 0) {
    if (lVar6 != 2) {
      if (lVar6 == 3) {
        *(char *)param_1 = (char)(uVar5 >> 10);
        *(char *)((long)param_1 + 1) = (char)(uVar5 >> 2);
        if (uVar11 < 2) {
          return;
        }
      }
      goto LAB_10457d0d8;
    }
    *(char *)param_1 = (char)(uVar5 >> 4);
    uVar11 = uVar11 & 0xfffffffffffffffd;
  }
  if (uVar11 == 0) {
    return;
  }
LAB_10457d0d8:
  FUN_104540590();
  _swift_allocError(&UNK_110788c08,param_1,0,0);
  param_1[1] = 5;
  *param_1 = 0;
  _swift_willThrow();
  return;
}


