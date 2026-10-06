/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ab6678; end: 102ab68ef;  */

void FUN_102ab6678(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,char param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lStack_58;
  
  if (0 < param_4) {
    puVar7 = PTR_PTR_1126c80b0;
    func_0x000107c61168();
    func_0x000107c40100();
    func_0x000107c61180();
    if (puVar7 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      uVar2 = 0x745f746567646977;
      func_0x000107c5fadc(0x745f746567646977,0xeb00000000657079);
      func_0x000107c5fadc(param_1,param_2);
      puVar3 = puVar7;
      func_0x000107c5e508();
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(param_1);
      uVar4 = 0x72756769666e6f63;
      func_0x000107c5fadc(0x72756769666e6f63,0xea00000000006465);
      bVar1 = (param_3 & 1) == 0;
      uVar2 = 0x65757274;
      if (bVar1) {
        uVar2 = 0x65736c6166;
      }
      uVar6 = 0xe400000000000000;
      if (bVar1) {
        uVar6 = 0xe500000000000000;
      }
      func_0x000107c5fadc(uVar2,uVar6);
      func_0x000107c6142c(uVar6);
      puVar5 = puVar3;
      func_0x000107c5e508();
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar2);
      puVar7 = puVar5;
      if ((param_5 != '\x03') && (puVar5 != (undefined *)0x0)) {
        uVar2 = 0xd000000000000012;
        func_0x000107c5fadc(0xd000000000000012,0x800000010f0e6510);
        if (param_5 == '\0') {
          uVar4 = 0x800000010f0e6550;
          uVar6 = 0xd000000000000013;
        }
        else {
          uVar4 = 0x800000010f0e6530;
          uVar6 = 0xd000000000000014;
          if (param_5 != '\x01') {
            uVar4 = 0xe400000000000000;
            uVar6 = 0x656e6f6e;
          }
        }
        func_0x000107c5fadc(uVar6,uVar4);
        func_0x000107c6142c(uVar4);
        func_0x000107c5e508(puVar5);
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar6);
      }
    }
    func_0x0001000d224c(&lStack_58);
    if (lStack_58 != 0) {
      func_0x000107c45318(lStack_58);
      func_0x000107c61170(lStack_58);
    }
    func_0x000107c61170(puVar7);
  }
  return;
}



/* Entry: 102ab68f0; end: 102ab6983;  */

void FUN_102ab68f0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x000107c4218c();
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x000107c4218c();
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 102ab6984; end: 102ab698b;  */

void FUN_102ab6984(long param_1,char param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  code *pcVar9;
  long extraout_x12;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lStack_a0;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar3 = 0;
  func_0x000107c5f9b4();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  plVar11 = (long *)((long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar15 = (long *)((long)plVar11 - extraout_x12);
  if (param_2 != '\x01') {
    lVar13 = *(long *)(param_1 + 0x10);
    lStack_a0 = param_1;
    if (lVar13 == 0) {
      lStack_90 = 0;
      lStack_88 = 0;
      lVar12 = 0;
      lStack_80 = 0;
      lVar14 = 0;
    }
    else {
      lStack_90 = 0;
      lStack_88 = 0;
      lVar12 = 0;
      lVar14 = 0;
      param_1 = param_1 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
      lVar8 = *(long *)(lVar10 + 0x48);
      lStack_80 = 0;
      pcVar9 = *(code **)(lVar10 + 0x10);
      do {
        (*pcVar9)(plVar15,param_1,lVar3);
        plVar4 = plVar11;
        plVar6 = plVar15;
        (**(code **)(lVar10 + 0x20))(plVar11,plVar15,lVar3);
        func_0x000107c5f9ac();
        plVar5 = plVar4;
        func_0x000102ab88b0();
        if (plVar4 == (long *)*plVar5 && plVar6 == (long *)plVar5[1]) {
          func_0x000107c6142c(plVar6);
LAB_102ab49bc:
          (**(code **)(lVar10 + 8))(plVar11,lVar3);
          bVar2 = SCARRY8(lVar14,1);
          lVar14 = lVar14 + 1;
          if (bVar2) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x102ab4d98);
            (*pcVar9)();
          }
        }
        else {
          plVar5 = plVar6;
          func_0x000107c605b8();
          func_0x000107c6142c();
          if (((ulong)plVar4 & 1) != 0) goto LAB_102ab49bc;
          func_0x000107c5f9ac();
          plVar4 = plVar6;
          func_0x000102ab88c8();
          if ((plVar6 == (long *)*plVar4) && (plVar5 == (long *)plVar4[1])) {
            func_0x000107c6142c(plVar5);
LAB_102ab4a9c:
            (**(code **)(lVar10 + 8))(plVar11,lVar3);
            bVar2 = SCARRY8(lVar12,1);
            lVar12 = lVar12 + 1;
            if (bVar2) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x102ab4d9c);
              (*pcVar9)();
            }
          }
          else {
            plVar4 = plVar5;
            func_0x000107c605b8();
            func_0x000107c6142c();
            if (((ulong)plVar6 & 1) != 0) goto LAB_102ab4a9c;
            func_0x000107c5f9ac();
            plVar6 = plVar5;
            func_0x000102ab88bc();
            if ((plVar5 == (long *)*plVar6) && (plVar4 == (long *)plVar6[1])) {
              func_0x000107c6142c(plVar4);
LAB_102ab4b08:
              (**(code **)(lVar10 + 8))(plVar11,lVar3);
              bVar2 = SCARRY8(lStack_80,1);
              lStack_80 = lStack_80 + 1;
              if (bVar2) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x102ab4da0);
                (*pcVar9)();
              }
            }
            else {
              plVar6 = plVar4;
              func_0x000107c605b8();
              func_0x000107c6142c();
              if (((ulong)plVar5 & 1) != 0) goto LAB_102ab4b08;
              func_0x000107c5f9ac();
              plVar5 = plVar4;
              func_0x000102ab88d4();
              if ((plVar4 == (long *)*plVar5) && (plVar6 == (long *)plVar5[1])) {
                func_0x000107c6142c(plVar6);
LAB_102ab4b7c:
                (**(code **)(lVar10 + 8))(plVar11,lVar3);
                bVar2 = SCARRY8(lStack_88,1);
                lStack_88 = lStack_88 + 1;
                if (bVar2) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x102ab4da4);
                  (*pcVar9)();
                }
              }
              else {
                plVar5 = plVar6;
                func_0x000107c605b8();
                func_0x000107c6142c();
                if (((ulong)plVar4 & 1) != 0) goto LAB_102ab4b7c;
                func_0x000107c5f9ac();
                plVar4 = plVar6;
                func_0x000102ab88e0();
                if ((plVar6 == (long *)*plVar4) && (plVar5 == (long *)plVar4[1])) {
                  func_0x000107c6142c(plVar5);
                  (**(code **)(lVar10 + 8))(plVar11,lVar3);
LAB_102ab4c10:
                  bVar2 = SCARRY8(lStack_90,1);
                  lStack_90 = lStack_90 + 1;
                  if (bVar2) {
                    /* WARNING: Does not return */
                    pcVar9 = (code *)SoftwareBreakpoint(1,0x102ab4c24);
                    (*pcVar9)();
                  }
                }
                else {
                  func_0x000107c605b8(plVar6,plVar5,(long *)*plVar4,(long *)plVar4[1],0);
                  func_0x000107c6142c(plVar5);
                  (**(code **)(lVar10 + 8))(plVar11,lVar3);
                  if (((ulong)plVar6 & 1) != 0) goto LAB_102ab4c10;
                }
              }
            }
          }
        }
        param_1 = param_1 + lVar8;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar7 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    func_0x000107c61558(PTR___swiftEmptyDictionarySingleton_11034f1d0);
    func_0x000101687ce0(lVar14,0x6172656d6163,0xe600000000000000,puVar7);
    puVar7 = puVar1;
    func_0x000107c61558(puVar1);
    func_0x000101687ce0(lStack_80,0x666d70,0xe300000000000000,puVar7);
    puVar7 = puVar1;
    func_0x000107c61558(puVar1);
    func_0x000101687ce0(lVar12,0x7961646874726962,0xe800000000000000,puVar7);
    puVar7 = puVar1;
    func_0x000107c61558(puVar1);
    func_0x000101687ce0(lStack_88,0x736569726f6d656d,0xe800000000000000,puVar7);
    puVar7 = puVar1;
    func_0x000107c61558(puVar1);
    func_0x000101687ce0(lStack_90,0x6f4c646e65697266,0xee006e6f69746163,puVar7);
    func_0x000102ab4da4(puVar1);
    func_0x000102ab51d8(puVar1);
    lVar3 = lStack_a0;
    func_0x000102ab55d0(lStack_a0);
    func_0x000102ab5ccc(lVar3);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(puVar1);
  }
  return;
}



/* Entry: 102ab698c; end: 102ab6a3b;  */

void FUN_102ab698c(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x000100c1f008();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112ee8cf8;
  plVar5 = (long *)&UNK_10db15db0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 102ab6a3c; end: 102ab6b5f;  */

undefined * FUN_102ab6a3c(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102ab6b60);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_102ab698c();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000100c1f008(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102ab6b60; end: 102ab6cdb;  */

undefined * FUN_102ab6b60(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102ab6cdc);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112ee8c28;
    func_0x0001000285a8(0x112ee8c28,&UNK_10db15da8);
    lVar5 = 0;
    func_0x000107c5f9b4();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102ab6cd4);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102ab6cd8);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  func_0x000107c5f9b4();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar4;
}



/* Entry: 102ab6cdc; end: 102ab6ce3; +[FLFriend supportsSecureCoding] */

undefined8 FUN_102ab6cdc(void)

{
  return 1;
}



/* Entry: 102ab6ce4; end: 102ab6dcb;  */

undefined1 *
FUN_102ab6ce4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0xffffffffffffffa0;
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c6142c();
  if (param_6 == 0) {
    param_5 = 0;
  }
  else {
    func_0x000107c5fadc(param_5,param_6);
    func_0x000107c6142c();
  }
  FUN_102ab6dcc();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_initWithIdentifier_displayString_1125e4770,
                      param_1,param_3,param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  return puVar1;
}



/* Entry: 102ab6dcc; end: 102ab6deb;  */

void FUN_102ab6dcc(void)

{
  func_0x000107c61168(&PTR_PTR_112884438);
  return;
}



/* Entry: 102ab6dec; end: 102ab6e83; -[FLFriend initWithIdentifier:displayString:pronunciationHint:] */

void FUN_102ab6dec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar2 = param_2;
  }
  func_0x000107c5faec(param_4);
  if (param_5 == 0) {
    param_5 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x000107c5faec(param_5);
  }
  FUN_102ab6ce4(param_3,uVar2,param_4,param_2,param_5,uVar1);
  return;
}



/* Entry: 102ab6e84; end: 102ab6e9b; -[FLFriend initWithCoder:] */

undefined1 * FUN_102ab6e84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  FUN_102ab6dcc();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 102ab6e9c; end: 102ab6eeb;  */

void FUN_102ab6e9c(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined **ppuStack_28;
  
  func_0x000107c614e8();
  ppuStack_28 = &PTR__OBJC_METACLASS___NSObject_112ee8d00;
  func_0x000107c61154(auStack_30,PTR_s_successWithResolvedObject__112524de8,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102ab6eec; end: 102ab6f2f; +[FLFriendResolutionResult successWithResolvedFLFriend:] */

void FUN_102ab6eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c614ec();
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_102ab6e9c();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ab6f30; end: 102ab7027;  */

undefined1 * FUN_102ab6f30(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 auStack_40 [8];
  undefined **ppuStack_38;
  
  puVar3 = auStack_40;
  if (param_1 >> 0x3e == 0) {
    func_0x000107c61434(param_1);
    func_0x000107c605f8();
    uVar1 = 0;
    FUN_102ab7028(0);
    uVar4 = param_1;
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    uVar1 = 0;
    FUN_102ab7028(0);
    func_0x000107c61434(param_1);
    func_0x000107c60458(uVar4,uVar1);
    func_0x000107c6142c(param_1);
  }
  func_0x000107c614e8();
  FUN_102ab7028(0);
  uVar2 = uVar4;
  func_0x000107c5fc48(uVar4,uVar1);
  func_0x000107c6142c(uVar4);
  ppuStack_38 = &PTR__OBJC_METACLASS___NSObject_112ee8d00;
  func_0x000107c61154(auStack_40,PTR_s_disambiguationWithObjectsToDisam_112524df0,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  return puVar3;
}



/* Entry: 102ab7028; end: 102ab706b;  */

void FUN_102ab7028(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8d28 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___INObject_1126abeb0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ee8d28 = puVar1;
  return;
}



/* Entry: 102ab706c; end: 102ab7113; +[FLFriendResolutionResult disambiguationWithFLFriendsToDisambiguate:] */

void FUN_102ab706c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102ab6dcc();
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c614ec(param_1);
  uVar1 = param_3;
  FUN_102ab6f30(param_3);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ab7114; end: 102ab7163; +[FLFriendResolutionResult confirmationRequiredWithFLFriendToConfirm:] */

void FUN_102ab7114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c614ec();
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000102ab70c4(param_3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102ab7164; end: 102ab71ab; +[FLFriendResolutionResult successWithResolvedObject:] */

void FUN_102ab7164(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "FriendLocation/FriendLocation.intentdefinition.swift.swift",0x3a,2,0x32,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ab71ac);
  (*pcVar1)();
}



/* Entry: 102ab71ac; end: 102ab71f3; +[FLFriendResolutionResult disambiguationWithObjectsToDisambiguate:] */

void FUN_102ab71ac(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "FriendLocation/FriendLocation.intentdefinition.swift.swift",0x3a,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ab71f4);
  (*pcVar1)();
}



/* Entry: 102ab71f4; end: 102ab723b; +[FLFriendResolutionResult confirmationRequiredWithObjectToConfirm:] */

void FUN_102ab71f4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "FriendLocation/FriendLocation.intentdefinition.swift.swift",0x3a,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ab723c);
  (*pcVar1)();
}



/* Entry: 102ab723c; end: 102ab7247;  */

void FUN_102ab723c(void)

{
  FUN_102ab7248();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ab7248; end: 102ab7287;  */

void FUN_102ab7248(void)

{
  func_0x000107c61168(&PTR_PTR_1128844e8);
  return;
}



/* Entry: 102ab7288; end: 102ab72c3; -[FriendLocationIntent init] */

void FUN_102ab7288(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000102ab7268();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ab72c4; end: 102ab72cf; -[FriendLocationIntent initWithCoder:] */

undefined1 * FUN_102ab72c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  (*(code *)0x102ab7268)();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 102ab72d0; end: 102ab734f;  */

undefined1 * FUN_102ab72d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  (*param_4)();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 102ab7350; end: 102ab736f;  */

void FUN_102ab7350(void)

{
  (*(code *)0x102ab7268)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ab7370; end: 102ab7447;  */

void FUN_102ab7370(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102ab7448; end: 102ab7453;  */

void FUN_102ab7448(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 102ab7454; end: 102ab74d7; -[FriendLocationIntentResponse code] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102ab7454(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee8d30;
  func_0x000107c61428(param_1 + _DAT_112ee8d30,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 102ab74d8; end: 102ab7527; -[FriendLocationIntentResponse setCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ab74d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee8d30;
  func_0x000107c61428(param_1 + _DAT_112ee8d30,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 102ab7528; end: 102ab75b7; -[FriendLocationIntentResponse initWithCode:userActivity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ab7528(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  lVar1 = _DAT_112ee8d30;
  func_0x000107c61428(param_1 + _DAT_112ee8d30,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_1);
  func_0x000107c5a2e0();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  return param_1;
}



/* Entry: 102ab75b8; end: 102ab75ff; -[FriendLocationIntentResponse init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ab75b8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112ee8d30) = 0;
  lVar1 = param_1;
  FUN_102ab76d8();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ab7600; end: 102ab768b; -[FriendLocationIntentResponse initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ab7600(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  *(undefined8 *)(param_1 + _DAT_112ee8d30) = 0;
  lVar2 = param_1;
  FUN_102ab76d8();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (plVar3 != (long *)0x0) {
    func_0x000107c61170(plVar3);
  }
  return (undefined1 *)plVar3;
}



/* Entry: 102ab768c; end: 102ab7697;  */

void FUN_102ab768c(void)

{
  FUN_102ab76d8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ab7698; end: 102ab76c7;  */

void FUN_102ab7698(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ab76c8; end: 102ab76d7;  */

undefined1  [16] FUN_102ab76c8(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 7) {
    uVar1 = param_1;
  }
  auVar2[8] = 6 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 102ab76d8; end: 102ab76f7;  */

void FUN_102ab76d8(void)

{
  func_0x000107c61168(&PTR_PTR_112884660);
  return;
}



/* Entry: 102ab76f8; end: 102ab76fb;  */

void FUN_102ab76f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8d38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db15dd0;
  func_0x000107c61520(&UNK_10db15dd0,&UNK_110593770);
  puRam0000000112ee8d38 = puVar1;
  return;
}



/* Entry: 102ab76fc; end: 102ab773b;  */

void FUN_102ab76fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8d38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db15dd0;
  func_0x000107c61520(&UNK_10db15dd0,&UNK_110593770);
  puRam0000000112ee8d38 = puVar1;
  return;
}



/* Entry: 102ab773c; end: 102ab774b;  */

undefined1  [16] FUN_102ab773c(void)

{
  return ZEXT816(0x110593770);
}



/* Entry: 102ab774c; end: 102ab7753; +[PMFFriend supportsSecureCoding] */

undefined8 FUN_102ab774c(void)

{
  return 1;
}



/* Entry: 102ab7754; end: 102ab783b;  */

undefined1 *
FUN_102ab7754(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0xffffffffffffffa0;
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c6142c();
  if (param_6 == 0) {
    param_5 = 0;
  }
  else {
    func_0x000107c5fadc(param_5,param_6);
    func_0x000107c6142c();
  }
  FUN_102ab783c();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_initWithIdentifier_displayString_1125e4770,
                      param_1,param_3,param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  return puVar1;
}



/* Entry: 102ab783c; end: 102ab785b;  */

void FUN_102ab783c(void)

{
  func_0x000107c61168(&PTR_PTR_112884730);
  return;
}



/* Entry: 102ab785c; end: 102ab78f3; -[PMFFriend initWithIdentifier:displayString:pronunciationHint:] */

void FUN_102ab785c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar2 = param_2;
  }
  func_0x000107c5faec(param_4);
  if (param_5 == 0) {
    param_5 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x000107c5faec(param_5);
  }
  FUN_102ab7754(param_3,uVar2,param_4,param_2,param_5,uVar1);
  return;
}



/* Entry: 102ab78f4; end: 102ab790b; -[PMFFriend initWithCoder:] */

undefined1 * FUN_102ab78f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  FUN_102ab783c();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 102ab790c; end: 102ab795b;  */

void FUN_102ab790c(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined **ppuStack_28;
  
  func_0x000107c614e8();
  ppuStack_28 = &PTR__OBJC_METACLASS___NSObject_112ee8db8;
  func_0x000107c61154(auStack_30,PTR_s_successWithResolvedObject__112524de8,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102ab795c; end: 102ab799f; +[PMFFriendResolutionResult successWithResolvedPMFFriend:] */

void FUN_102ab795c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c614ec();
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_102ab790c();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ab79a0; end: 102ab7a97;  */

undefined1 * FUN_102ab79a0(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 auStack_40 [8];
  undefined **ppuStack_38;
  
  puVar3 = auStack_40;
  if (param_1 >> 0x3e == 0) {
    func_0x000107c61434(param_1);
    func_0x000107c605f8();
    uVar1 = 0;
    FUN_102ab7028(0);
    uVar4 = param_1;
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    uVar1 = 0;
    FUN_102ab7028(0);
    func_0x000107c61434(param_1);
    func_0x000107c60458(uVar4,uVar1);
    func_0x000107c6142c(param_1);
  }
  func_0x000107c614e8();
  FUN_102ab7028(0);
  uVar2 = uVar4;
  func_0x000107c5fc48(uVar4,uVar1);
  func_0x000107c6142c(uVar4);
  ppuStack_38 = &PTR__OBJC_METACLASS___NSObject_112ee8db8;
  func_0x000107c61154(auStack_40,PTR_s_disambiguationWithObjectsToDisam_112524df0,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  return puVar3;
}



/* Entry: 102ab7a98; end: 102ab7b3f; +[PMFFriendResolutionResult disambiguationWithPMFFriendsToDisambiguate:] */

void FUN_102ab7a98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102ab783c();
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c614ec(param_1);
  uVar1 = param_3;
  FUN_102ab79a0(param_3);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ab7b40; end: 102ab7b8f; +[PMFFriendResolutionResult confirmationRequiredWithPMFFriendToConfirm:] */

void FUN_102ab7b40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c614ec();
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000102ab7af0(param_3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102ab7b90; end: 102ab7bd7; +[PMFFriendResolutionResult successWithResolvedObject:] */

void FUN_102ab7b90(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SelectFriend/SelectFriend.intentdefinition.swift.swift",0x36,2,0x32,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ab7bd8);
  (*pcVar1)();
}



/* Entry: 102ab7bd8; end: 102ab7c1f; +[PMFFriendResolutionResult disambiguationWithObjectsToDisambiguate:] */

void FUN_102ab7bd8(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SelectFriend/SelectFriend.intentdefinition.swift.swift",0x36,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ab7c20);
  (*pcVar1)();
}



/* Entry: 102ab7c20; end: 102ab7c67; +[PMFFriendResolutionResult confirmationRequiredWithObjectToConfirm:] */

void FUN_102ab7c20(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SelectFriend/SelectFriend.intentdefinition.swift.swift",0x36,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ab7c68);
  (*pcVar1)();
}



/* Entry: 102ab7c68; end: 102ab7c73;  */

void FUN_102ab7c68(void)

{
  FUN_102ab7c74();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ab7c74; end: 102ab7c93;  */

void FUN_102ab7c74(void)

{
  func_0x000107c61168(&PTR_PTR_1128847e0);
  return;
}



/* Entry: 102ab7c94; end: 102ab7caf;  */

void FUN_102ab7c94(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 102ab7cb0; end: 102ab7cdf;  */

void FUN_102ab7cb0(void)

{
  func_0x000107c614e8();
  func_0x000107c5c3cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102ab7ce0; end: 102ab7d3b; +[OpenToResolutionResult successWithResolvedOpenTo:] */

void FUN_102ab7ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c614ec();
  FUN_102ab7cb0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ab7d3c; end: 102ab7d67; +[OpenToResolutionResult confirmationRequiredWithOpenToToConfirm:] */

void FUN_102ab7d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c614ec();
  func_0x000102ab7d0c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ab7d68; end: 102ab7d73;  */

void FUN_102ab7d68(void)

{
  FUN_102ab7d74();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ab7d74; end: 102ab7db3;  */

void FUN_102ab7d74(void)

{
  func_0x000107c61168(&PTR_PTR_1128848a8);
  return;
}



/* Entry: 102ab7db4; end: 102ab7def; -[SelectFriendIntent init] */

void FUN_102ab7db4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000102ab7d94();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ab7df0; end: 102ab7dfb; -[SelectFriendIntent initWithCoder:] */

undefined1 * FUN_102ab7df0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  (*(code *)0x102ab7d94)();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 102ab7dfc; end: 102ab7e7b;  */

undefined1 * FUN_102ab7dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  (*param_4)();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 102ab7e7c; end: 102ab7e87;  */

void FUN_102ab7e7c(void)

{
  (*(code *)0x102ab7d94)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ab7e88; end: 102ab7f37;  */

void FUN_102ab7e88(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102ab7f38; end: 102ab7fbb; -[SelectFriendIntentResponse code] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102ab7f38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee8de0;
  func_0x000107c61428(param_1 + _DAT_112ee8de0,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 102ab7fbc; end: 102ab800b; -[SelectFriendIntentResponse setCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ab7fbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee8de0;
  func_0x000107c61428(param_1 + _DAT_112ee8de0,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 102ab800c; end: 102ab809b; -[SelectFriendIntentResponse initWithCode:userActivity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ab800c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  lVar1 = _DAT_112ee8de0;
  func_0x000107c61428(param_1 + _DAT_112ee8de0,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_1);
  func_0x000107c5a2e0();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  return param_1;
}



/* Entry: 102ab809c; end: 102ab80e3; -[SelectFriendIntentResponse init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ab809c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112ee8de0) = 0;
  lVar1 = param_1;
  FUN_102ab81bc();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ab80e4; end: 102ab816f; -[SelectFriendIntentResponse initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ab80e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  *(undefined8 *)(param_1 + _DAT_112ee8de0) = 0;
  lVar2 = param_1;
  FUN_102ab81bc();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (plVar3 != (long *)0x0) {
    func_0x000107c61170(plVar3);
  }
  return (undefined1 *)plVar3;
}



/* Entry: 102ab8170; end: 102ab817b;  */

void FUN_102ab8170(void)

{
  FUN_102ab81bc();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ab817c; end: 102ab81ab;  */

void FUN_102ab817c(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ab81ac; end: 102ab81bb;  */

undefined1  [16] FUN_102ab81ac(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 7) {
    uVar1 = param_1;
  }
  auVar2[8] = 6 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 102ab81bc; end: 102ab81db;  */

void FUN_102ab81bc(void)

{
  func_0x000107c61168(&PTR_PTR_112884a18);
  return;
}



/* Entry: 102ab81dc; end: 102ab81df;  */

void FUN_102ab81dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8de8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db15f20;
  func_0x000107c61520(&UNK_10db15f20,&UNK_110593838);
  puRam0000000112ee8de8 = puVar1;
  return;
}



/* Entry: 102ab81e0; end: 102ab821f;  */

void FUN_102ab81e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8de8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db15f20;
  func_0x000107c61520(&UNK_10db15f20,&UNK_110593838);
  puRam0000000112ee8de8 = puVar1;
  return;
}



/* Entry: 102ab8220; end: 102ab8223;  */

void FUN_102ab8220(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8df0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db15fc0;
  func_0x000107c61520(&UNK_10db15fc0,&UNK_110593858);
  puRam0000000112ee8df0 = puVar1;
  return;
}



/* Entry: 102ab8224; end: 102ab8263;  */

void FUN_102ab8224(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8df0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db15fc0;
  func_0x000107c61520(&UNK_10db15fc0,&UNK_110593858);
  puRam0000000112ee8df0 = puVar1;
  return;
}



/* Entry: 102ab8264; end: 102ab82bf;  */

undefined1  [16] FUN_102ab8264(void)

{
  return ZEXT816(0x110593838);
}



/* Entry: 102ab82c0; end: 102ab84af;  */

void FUN_102ab82c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar4 = 0xeb0000000072616c;
  uVar2 = 0x75676e6174636572;
  if (cVar3 != '\x01') {
    uVar4 = 0xe600000000000000;
    uVar2 = 0x656e696c6e69;
  }
  uVar1 = 0x72616c7563726963;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe800000000000000;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102ab84b0; end: 102ab8513;  */

void FUN_102ab84b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  cVar3 = *unaff_x20;
  uVar4 = 0xeb0000000072616c;
  uVar2 = 0x75676e6174636572;
  if (cVar3 != '\x01') {
    uVar4 = 0xe600000000000000;
    uVar2 = 0x656e696c6e69;
  }
  uVar1 = 0x72616c7563726963;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe800000000000000;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 102ab8514; end: 102ab8577;  */

ulong FUN_102ab8514(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 102ab8578; end: 102ab857b;  */

void FUN_102ab8578(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8e98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db16130;
  func_0x000107c61520(&UNK_10db16130,&UNK_110593978);
  puRam0000000112ee8e98 = puVar1;
  return;
}



/* Entry: 102ab857c; end: 102ab85bb;  */

void FUN_102ab857c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8e98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db16130;
  func_0x000107c61520(&UNK_10db16130,&UNK_110593978);
  puRam0000000112ee8e98 = puVar1;
  return;
}



/* Entry: 102ab85bc; end: 102ab871f;  */

int FUN_102ab85bc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102ab8638;
        goto LAB_102ab861c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102ab861c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_102ab8638:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102ab8720; end: 102ab874b; +[_TtC23HomeScreenWidgetDefines25SCWidgetDeepLinkReferrers kCameraDeepLinkReferrer] */

void FUN_102ab8720(void)

{
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0e6650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ab874c; end: 102ab8777; +[_TtC23HomeScreenWidgetDefines25SCWidgetDeepLinkReferrers kPMFDeepLinkReferrer] */

void FUN_102ab874c(void)

{
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0e6670);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ab8778; end: 102ab87a3; +[_TtC23HomeScreenWidgetDefines25SCWidgetDeepLinkReferrers kBirthdayDeepLinkReferrer] */

void FUN_102ab8778(void)

{
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0e6690);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ab87a4; end: 102ab87d7; +[_TtC23HomeScreenWidgetDefines25SCWidgetDeepLinkReferrers kMemoriesDeepLinkReferrer] */

void FUN_102ab87a4(void)

{
  func_0x000107c5fadc(0x736569726f6d656d,0xef7465676469772d);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ab87d8; end: 102ab8823; +[_TtC23HomeScreenWidgetDefines25SCWidgetDeepLinkReferrers kMapFriendLocationDeepLinkReferrer] */

void FUN_102ab87d8(void)

{
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0e66b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ab8824; end: 102ab885f; -[_TtC23HomeScreenWidgetDefines25SCWidgetDeepLinkReferrers init] */

void FUN_102ab8824(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000102ab8804();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ab8860; end: 102ab888f;  */

void FUN_102ab8860(void)

{
  func_0x000102ab8804();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ab8890; end: 102ab889f;  */

undefined1  [16] FUN_102ab8890(void)

{
  return ZEXT816(0x1105939f0);
}



/* Entry: 102ab88a0; end: 102ab88a3; -[_TtC23HomeScreenWidgetDefines25SCWidgetDeepLinkReferrers .cxx_destruct] */

void FUN_102ab88a0(void)

{
  return;
}



/* Entry: 102ab88a4; end: 102ab88fb;  */

undefined * FUN_102ab88a4(void)

{
  return &UNK_110593a00;
}



/* Entry: 102ab88fc; end: 102ab88ff;  */

/* WARNING: Possible PIC construction at 0x000102ab89f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ab8ac8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ab89f8) */
/* WARNING: Removing unreachable block (ram,0x000102ab89fc) */
/* WARNING: Removing unreachable block (ram,0x000102ab8acc) */
/* WARNING: Removing unreachable block (ram,0x000102ab8ad0) */

ulong FUN_102ab88fc(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *param_1;
  lVar11 = param_1[1];
  uVar5 = param_1[2];
  lVar6 = param_1[3];
  uVar1 = param_1[4];
  lVar9 = param_1[5];
  bVar3 = *(byte *)(param_1 + 6);
  bVar4 = bVar3 >> 5;
  if (bVar4 < 2) {
    if (bVar4 != 0) {
      bVar4 = *(byte *)(param_2 + 6);
      if ((bVar4 & 0xe0) != 0x20) goto LAB_102ab8b08;
      uVar8 = 0;
      if ((lVar10 != *param_2) || (lVar11 != param_2[1])) goto LAB_102ab8b0c;
      lVar11 = param_2[3];
      uVar7 = param_2[4];
      lVar10 = param_2[5];
      if (lVar6 == 0) {
        if (lVar11 == 0) goto LAB_102ab8a9c;
      }
      else if ((lVar11 != 0) &&
              (((uVar5 == param_2[2] && (lVar6 == lVar11)) ||
               (func_0x000107c605b8(), (uVar5 & 1) != 0)))) {
LAB_102ab8a9c:
        if (lVar9 == 0) {
          if (lVar10 == 0) goto LAB_102ab8b24;
        }
        else if (lVar10 != 0) {
          uVar5 = uVar1;
          lVar6 = lVar9;
          if ((uVar1 != uVar7) || (lVar9 != lVar10)) goto code_r0x000107c605b8;
LAB_102ab8b24:
          uVar8 = (bVar3 ^ bVar4) ^ 1;
          goto LAB_102ab8b0c;
        }
      }
      goto LAB_102ab8b08;
    }
  }
  else if (3 < bVar4 - 2) {
    if ((*(byte *)(param_2 + 6) & 0xe0) != 0xc0) goto LAB_102ab8b08;
    uVar8 = 0;
    if ((lVar10 != *param_2) || (lVar11 != param_2[1])) goto LAB_102ab8b0c;
    lVar10 = param_2[3];
    uVar2 = param_2[4];
    lVar11 = param_2[5];
    if (lVar6 == 0) {
      if (lVar10 != 0) goto LAB_102ab8b08;
    }
    else {
      if (lVar10 == 0) {
LAB_102ab8b08:
        uVar8 = 0;
        goto LAB_102ab8b0c;
      }
      uVar7 = param_2[2];
      if ((uVar5 != uVar7) || (lVar6 != lVar10)) goto code_r0x000107c605b8;
    }
    uVar8 = (uint)(lVar9 == 0 && lVar11 == 0);
    if ((lVar9 != 0) && (lVar11 != 0)) {
      uVar5 = uVar1;
      lVar6 = lVar9;
      uVar7 = uVar2;
      lVar10 = lVar11;
      if ((uVar1 != uVar2) || (lVar9 != lVar11)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )(uVar5,lVar6,uVar7,lVar10,0);
        return uVar5;
      }
      uVar8 = 1;
    }
    goto LAB_102ab8b0c;
  }
  uVar8 = 0;
  if ((1 << (ulong)(*(byte *)(param_2 + 6) >> 5) & 0x3dU) != 0) {
    uVar8 = (uint)(lVar10 == *param_2 && lVar11 == param_2[1]);
  }
LAB_102ab8b0c:
  return (ulong)(uVar8 & 1);
}



/* Entry: 102ab8900; end: 102ab8957;  */

uint FUN_102ab8900(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = *(undefined1 *)(param_1 + 6);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = *(undefined1 *)(param_2 + 6);
  FUN_102ab8958(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 102ab8958; end: 102ab8b57;  */

/* WARNING: Possible PIC construction at 0x000102ab89f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ab8ac8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ab89f8) */
/* WARNING: Removing unreachable block (ram,0x000102ab89fc) */
/* WARNING: Removing unreachable block (ram,0x000102ab8acc) */
/* WARNING: Removing unreachable block (ram,0x000102ab8ad0) */

ulong FUN_102ab8958(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *param_1;
  lVar11 = param_1[1];
  uVar5 = param_1[2];
  lVar6 = param_1[3];
  uVar1 = param_1[4];
  lVar9 = param_1[5];
  bVar3 = *(byte *)(param_1 + 6);
  bVar4 = bVar3 >> 5;
  if (bVar4 < 2) {
    if (bVar4 != 0) {
      bVar4 = *(byte *)(param_2 + 6);
      if ((bVar4 & 0xe0) != 0x20) goto LAB_102ab8b08;
      uVar8 = 0;
      if ((lVar10 != *param_2) || (lVar11 != param_2[1])) goto LAB_102ab8b0c;
      lVar11 = param_2[3];
      uVar7 = param_2[4];
      lVar10 = param_2[5];
      if (lVar6 == 0) {
        if (lVar11 == 0) goto LAB_102ab8a9c;
      }
      else if ((lVar11 != 0) &&
              (((uVar5 == param_2[2] && (lVar6 == lVar11)) ||
               (func_0x000107c605b8(), (uVar5 & 1) != 0)))) {
LAB_102ab8a9c:
        if (lVar9 == 0) {
          if (lVar10 == 0) goto LAB_102ab8b24;
        }
        else if (lVar10 != 0) {
          uVar5 = uVar1;
          lVar6 = lVar9;
          if ((uVar1 != uVar7) || (lVar9 != lVar10)) goto code_r0x000107c605b8;
LAB_102ab8b24:
          uVar8 = (bVar3 ^ bVar4) ^ 1;
          goto LAB_102ab8b0c;
        }
      }
      goto LAB_102ab8b08;
    }
  }
  else if (3 < bVar4 - 2) {
    if ((*(byte *)(param_2 + 6) & 0xe0) != 0xc0) goto LAB_102ab8b08;
    uVar8 = 0;
    if ((lVar10 != *param_2) || (lVar11 != param_2[1])) goto LAB_102ab8b0c;
    lVar10 = param_2[3];
    uVar2 = param_2[4];
    lVar11 = param_2[5];
    if (lVar6 == 0) {
      if (lVar10 != 0) goto LAB_102ab8b08;
    }
    else {
      if (lVar10 == 0) {
LAB_102ab8b08:
        uVar8 = 0;
        goto LAB_102ab8b0c;
      }
      uVar7 = param_2[2];
      if ((uVar5 != uVar7) || (lVar6 != lVar10)) goto code_r0x000107c605b8;
    }
    uVar8 = (uint)(lVar9 == 0 && lVar11 == 0);
    if ((lVar9 != 0) && (lVar11 != 0)) {
      uVar5 = uVar1;
      lVar6 = lVar9;
      uVar7 = uVar2;
      lVar10 = lVar11;
      if ((uVar1 != uVar2) || (lVar9 != lVar11)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )(uVar5,lVar6,uVar7,lVar10,0);
        return uVar5;
      }
      uVar8 = 1;
    }
    goto LAB_102ab8b0c;
  }
  uVar8 = 0;
  if ((1 << (ulong)(*(byte *)(param_2 + 6) >> 5) & 0x3dU) != 0) {
    uVar8 = (uint)(lVar10 == *param_2 && lVar11 == param_2[1]);
  }
LAB_102ab8b0c:
  return (ulong)(uVar8 & 1);
}



/* Entry: 102ab8b58; end: 102ab8b83;  */

long FUN_102ab8b58(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}


