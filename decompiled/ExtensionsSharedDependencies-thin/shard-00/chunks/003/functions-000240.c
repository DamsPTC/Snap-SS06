/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004ec57c; end: 004ec63b;  */

void FUN_004ec57c(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x004eca78();
  if (param_1 == 0) {
    func_0x004ecab4();
  }
  else {
    func_0x004ec8c8();
  }
  func_0x004ecaf8();
  func_0x004ecaec(&PTR_DAT_009f3e18);
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec780();
  }
  FUN_004e43c8(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x21 + 0x28) = 0;
  return;
}



/* Entry: 004ec63c; end: 004ece53;  */

void FUN_004ec63c(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long **pplVar6;
  long *plVar7;
  long *plVar8;
  long **pplVar9;
  ulong uVar10;
  undefined8 *extraout_x8;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  
  if ((int)param_2 <= (int)param_1[1]) {
    return;
  }
  uVar2 = *param_1;
  uVar1 = param_1[1];
  plVar12 = *(long **)(param_1 + 2);
  if (uVar1 == 0) {
    if ((int)param_2 < 2) goto LAB_004eb364;
  }
  else {
    plVar12 = (long *)plVar12[-1];
    if ((int)param_2 < 2) {
LAB_004eb364:
      uVar13 = 2;
      goto LAB_004eb37c;
    }
    if (0x3ffffffb < (int)uVar1) {
      uVar13 = 0x7fffffff;
      goto LAB_004eb37c;
    }
  }
  uVar1 = uVar1 * 2 + 2;
  if ((int)uVar1 <= (int)param_2) {
    uVar1 = param_2;
  }
  uVar13 = (ulong)uVar1;
LAB_004eb37c:
  plVar8 = (long *)(uVar13 * 4 + 8);
  if (plVar12 == (long *)0x0) {
    uVar13 = (ulong)uVar2;
    FUN_0048b180();
    uVar13 = uVar13 - 8 >> 2;
    if (0x7ffffffe < uVar13) {
      uVar13 = 0x7fffffff;
    }
  }
  else {
    uStack_48 = 0xffffffffffffffff;
    pplVar6 = aplStack_58;
    aplStack_58[0] = plVar8;
    func_0x0048b1cc(pplVar6,&uStack_48,
                    "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (pplVar6 != (long **)0x0) {
      plVar12 = (long *)(long)*(char *)((long)pplVar6 + 0x17);
      pplVar9 = pplVar6;
      if ((long)plVar12 < 0) {
        pplVar9 = (long **)*pplVar6;
        plVar12 = pplVar6[1];
      }
      FUN_00776714(aplStack_58,
                   "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-ac22eb7a7f3d/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
                   ,0x10a,pplVar9,plVar12);
      func_0x0048b1e8(aplStack_58,"Requested size is too large to fit into size_t.");
      pplVar6 = aplStack_58;
      FUN_005558a0();
      plVar12 = pplVar6[1] + -1;
      if (*plVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_0099c620)(plVar12);
        return;
      }
      uVar13 = (long)*(int *)((long)pplVar6 + 4) * 4 + 8;
      ppuVar4 = &PTR___tlv_bootstrap_00b2c348;
      (*(code *)PTR___tlv_bootstrap_00b2c348)(*plVar12);
      if (ppuVar4[1] != (undefined *)*extraout_x8) {
        return;
      }
      puVar5 = ppuVar4[2];
      uVar10 = 0x3b - LZCOUNT(uVar13);
      bVar3 = puVar5[0x50];
      if (uVar10 < bVar3) {
        lVar11 = *(long *)(puVar5 + 0x58);
        *plVar12 = *(long *)(lVar11 + uVar10 * 8);
        *(long **)(lVar11 + uVar10 * 8) = plVar12;
      }
      else {
        if (bVar3 == 0) {
          lVar11 = 0;
        }
        else {
          _memmove(plVar12,*(undefined8 *)(puVar5 + 0x58),(ulong)bVar3 << 3);
          lVar11 = (ulong)(byte)puVar5[0x50] << 3;
        }
        uVar10 = uVar13 >> 3;
        if (0 < (long)((uVar13 & 0xfffffffffffffff8) - lVar11)) {
          _bzero((long)plVar12 + lVar11);
        }
        *(long **)(puVar5 + 0x58) = plVar12;
        if (0x3f < uVar10) {
          uVar10 = 0x40;
        }
        puVar5[0x50] = (char)uVar10;
      }
      return;
    }
    plVar7 = plVar12;
    func_0x0048b21c(plVar12,plVar8,1);
    plVar8 = plVar7;
  }
  *plVar8 = (long)plVar12;
  if (0 < (int)param_1[1]) {
    if (0 < (int)uVar2) {
      _memcpy(plVar8 + 1,*(undefined8 *)(param_1 + 2),(ulong)uVar2 << 2);
    }
    FUN_004eb478(param_1);
  }
  param_1[1] = (uint)uVar13;
  *(long **)(param_1 + 2) = plVar8 + 1;
  return;
}



/* Entry: 004ece54; end: 004ece7f;  */

undefined8 * FUN_004ece54(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_009f54f8;
  param_1[1] = param_2;
  FUN_004ece80();
  return param_1;
}



/* Entry: 004ece80; end: 004ecea7;  */

void FUN_004ece80(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}



/* Entry: 004ecea8; end: 004eced3;  */

undefined8 FUN_004ecea8(undefined8 param_1)

{
  func_0x004efd38();
  FUN_004eced4(param_1);
  return param_1;
}



/* Entry: 004eced4; end: 004ecf23;  */

long FUN_004eced4(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_004f7a60();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_004ed500();
  }
  __ZdlPv();
  FUN_004ef2c0(param_1 + 0x48);
  FUN_004dfa80(param_1 + 0x30);
  FUN_004ef264(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 004ecf24; end: 004ecf27;  */

undefined8 FUN_004ecf24(undefined8 param_1)

{
  func_0x004efd38();
  FUN_004eced4(param_1);
  return param_1;
}



/* Entry: 004ecf28; end: 004ecf3b;  */

void FUN_004ecf28(void)

{
  FUN_004ecea8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ecf3c; end: 004ecf47;  */

undefined ** FUN_004ecf3c(void)

{
  return &PTR_DAT_009f5538;
}



/* Entry: 004ecf48; end: 004ed01b;  */

void FUN_004ecf48(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    FUN_00437de0(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    FUN_00437de0(param_1 + 0x48);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004f7b88(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x004ecfe8(*(undefined8 *)(param_1 + 0x70));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 004ed01c; end: 004ed33f;  */

qword * FUN_004ed01c(qword *param_1,qword *param_2,ulong param_3,qword *param_4)

{
  ulong *puVar1;
  uint uVar2;
  qword *pqVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  long extraout_x8;
  qword *unaff_x19;
  long unaff_x20;
  uint uVar7;
  ulong *puVar8;
  int iVar9;
  int iVar10;
  
  func_0x004efcbc();
  uVar2 = (uint)param_1[2];
  if ((uVar2 & 1) != 0) {
    param_2 = *(qword **)(unaff_x20 + 0x60);
    func_0x004efc54();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    func_0x004efc48();
    param_2 = param_1;
    func_0x004efe30();
    func_0x004efca0();
    param_4 = param_1;
  }
  iVar9 = *(int *)(unaff_x20 + 0x20);
  while (iVar9 != 0) {
    func_0x004efc2c();
    param_3 = (ulong)*(dword *)((long)param_2 + 0x14);
    param_1 = (qword *)((long)&MACH_HEADER.magic + 3);
    func_0x004efcdc();
    func_0x004efdac();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = *(qword **)(unaff_x20 + 0x68);
    param_3 = (ulong)*(dword *)((long)param_2 + 0x14);
    param_1 = (qword *)&MACH_HEADER.cputype;
    func_0x004efcdc();
    param_4 = param_1;
  }
  uVar7 = *(uint *)(unaff_x20 + 0x40);
  if (0 < (int)uVar7) {
    func_0x004efc48();
    pbVar5 = (byte *)((long)param_1 + 2);
    *(byte *)param_1 = 0x2a;
    for (; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
      pbVar5[-1] = (byte)uVar7 | 0x80;
      pbVar5 = pbVar5 + 1;
    }
    pbVar5[-1] = (byte)uVar7;
    puVar8 = *(ulong **)(unaff_x20 + 0x38);
    puVar1 = puVar8 + *(int *)(unaff_x20 + 0x30);
    do {
      func_0x004efc48();
      uVar6 = *puVar8;
      pqVar3 = param_1;
      while( true ) {
        param_4 = (qword *)((long)pqVar3 + 1);
        if (uVar6 < 0x80) break;
        *(byte *)pqVar3 = (byte)uVar6 | 0x80;
        uVar6 = uVar6 >> 7;
        pqVar3 = param_4;
      }
      puVar8 = puVar8 + 1;
      *(byte *)pqVar3 = (byte)uVar6;
    } while (puVar8 < puVar1);
  }
  iVar9 = *(int *)(unaff_x20 + 0x50);
  while (iVar9 != 0) {
    func_0x004efc2c();
    param_3 = (ulong)(uint)param_2[3];
    param_1 = (qword *)((long)&MACH_HEADER.cputype + 2);
    func_0x004efcdc();
    func_0x004efdac();
  }
  if ((*(byte *)(unaff_x20 + 0x80) & 1) != 0) {
    func_0x004efc48();
    param_4 = &segment_command_00000020.vmaddr;
    func_0x00487cbc(0x38,param_1);
    func_0x004efcf8();
  }
  if ((uVar2 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x70) + 0x14);
    param_4 = (qword *)&MACH_HEADER.cpusubtype;
    func_0x004efcdc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004efd8c();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if ((long)(*unaff_x19 - (long)param_4) < (long)(int)param_3) {
      while( true ) {
        iVar10 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar9 = (int)param_3;
        uVar2 = iVar9 - iVar10;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar9 < iVar10) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (qword *)((long)param_4 + (long)iVar9);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (qword *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004ed340; end: 004ed377;  */

long FUN_004ed340(long param_1)

{
  long extraout_x8;
  
  func_0x004f2398();
  FUN_004efc14();
  return param_1 + extraout_x8;
}



/* Entry: 004ed378; end: 004ed497;  */

void FUN_004ed378(void)

{
  uint uVar1;
  ulong *puVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar3;
  
  func_0x004efcac();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0054d484(unaff_x21 + 0x18,unaff_x20 + 0x18);
  }
  puVar2 = (ulong *)(unaff_x21 + 0x30);
  FUN_004df784();
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    puVar2 = (ulong *)(unaff_x21 + 0x48);
    func_0x0054d484();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x60);
      if (puVar2 == (ulong *)0x0) {
        func_0x004efd74();
        *(ulong **)(unaff_x21 + 0x60) = puVar2;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_004ef624();
        *(ulong **)(unaff_x21 + 0x68) = puVar2;
      }
      else {
        FUN_004f81e0();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        FUN_004ef660();
        *(ulong **)(unaff_x21 + 0x70) = puVar3;
        puVar2 = puVar3;
      }
      else {
        FUN_004ed498();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    *(long *)(unaff_x21 + 0x78) = *(long *)(unaff_x20 + 0x78);
  }
  if (*(char *)(unaff_x20 + 0x80) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x80) = 1;
  }
  func_0x004efd28();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x004efccc();
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004ed498; end: 004ed4ff;  */

void FUN_004ed498(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004efcac();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_004d9d18();
      puVar1 = puVar2;
    }
  }
  func_0x004efef8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004efccc();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004ed500; end: 004ed52b;  */

undefined8 FUN_004ed500(undefined8 param_1)

{
  func_0x004efd38();
  FUN_004ed52c(param_1);
  return param_1;
}



/* Entry: 004ed52c; end: 004ed547;  */

void FUN_004ed52c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ed548; end: 004ed54b;  */

undefined8 FUN_004ed548(undefined8 param_1)

{
  func_0x004efd38();
  FUN_004ed52c(param_1);
  return param_1;
}



/* Entry: 004ed54c; end: 004ed55f;  */

void FUN_004ed54c(void)

{
  FUN_004ed500();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ed560; end: 004ed56b;  */

undefined ** FUN_004ed560(void)

{
  return &PTR_DAT_009f5588;
}



/* Entry: 004ed56c; end: 004ed613;  */

long * FUN_004ed56c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004efcbc();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x004efc54();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004efd8c();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 004ed614; end: 004ed617;  */

void FUN_004ed614(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004efcac();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_004d9d18();
      puVar1 = puVar2;
    }
  }
  func_0x004efef8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004efccc();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004ed618; end: 004ed643;  */

long FUN_004ed618(long param_1)

{
  func_0x004efd38();
  FUN_004ef2e8(param_1 + 0x10);
  return param_1;
}



/* Entry: 004ed644; end: 004ed647;  */

long FUN_004ed644(long param_1)

{
  func_0x004efd38();
  FUN_004ef2e8(param_1 + 0x10);
  return param_1;
}



/* Entry: 004ed648; end: 004ed65b;  */

void FUN_004ed648(void)

{
  FUN_004ed618();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ed65c; end: 004ed667;  */

undefined ** FUN_004ed65c(void)

{
  return &PTR_DAT_009f55e0;
}



/* Entry: 004ed668; end: 004ed6ab;  */

void FUN_004ed668(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    FUN_00437de0(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 004ed6ac; end: 004ed7fb;  */

dword * FUN_004ed6ac(long param_1,undefined8 param_2,ulong param_3,dword *param_4)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x004efcbc();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x004efc48();
    param_4 = &MACH_HEADER.cpusubtype;
    func_0x00487cbc(8,param_1);
    func_0x004efca0();
  }
  iVar5 = *(int *)(unaff_x20 + 0x18);
  while (iVar5 != 0) {
    uVar4 = *(ulong *)(unaff_x20 + 0x10);
    puVar1 = (ulong *)(unaff_x20 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar1 + 0x14);
    func_0x004efcdc(2);
    func_0x004efdac();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004efd8c();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        uVar2 = iVar5 - iVar6;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar5 < iVar6) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (dword *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (dword *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004ed7fc; end: 004ed937;  */

void FUN_004ed7fc(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x004efea8();
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x0054d484(unaff_x19 + 0x10,unaff_x20 + 0x10);
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004ed938; end: 004ed9cb;  */

long FUN_004ed938(long param_1)

{
  func_0x004efd38();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d53c0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_0050c54c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_004d93b4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_0051b208();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_004d7874();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x68) != 0) {
    func_0x004ed854(param_1);
  }
  return param_1;
}



/* Entry: 004ed9cc; end: 004ed9cf;  */

long FUN_004ed9cc(long param_1)

{
  func_0x004efd38();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d53c0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_0050c54c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_004d93b4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_0051b208();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_004d7874();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x68) != 0) {
    func_0x004ed854(param_1);
  }
  return param_1;
}



/* Entry: 004ed9d0; end: 004ed9e3;  */

void FUN_004ed9d0(void)

{
  FUN_004ed938();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ed9e4; end: 004ed9ff;  */

long FUN_004ed9e4(long param_1)

{
  func_0x004efd38();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_0050c54c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_004d93b4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_004d7874();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_00512598();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_004f6714();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_004f0520();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_005062b8();
  }
  __ZdlPv();
  FUN_004eb228(param_1 + 0x60);
  FUN_004eb228(param_1 + 0x48);
  FUN_004ef350(param_1 + 0x30);
  FUN_004ef378(param_1 + 0x18);
  return param_1;
}



/* Entry: 004eda00; end: 004edaa3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004eda00(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x004efe4c();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004d5460(param_1[4]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00504dec(param_1[5]);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_004d9440(param_1[6]);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_0051b2a4(param_1[7]);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_004d78d8(param_1[8]);
    }
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  func_0x004ed854(param_1);
  func_0x004efe0c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    *(undefined1 *)*param_1 = 0;
    param_1[1] = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x17) = 0;
  return;
}



/* Entry: 004edaa4; end: 004eddf3;  */

/* WARNING: Type propagation algorithm not settling */

qword * FUN_004edaa4(qword *param_1,undefined8 param_2,ulong param_3,qword *param_4)

{
  uint uVar1;
  qword *pqVar2;
  qword *pqVar3;
  long lVar4;
  long extraout_x8;
  qword *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x004efcbc();
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 1) != 0) {
    func_0x004efc54();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    func_0x004efc48();
    func_0x004efe30();
    func_0x004efcf8();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    param_1 = (qword *)((long)&MACH_HEADER.magic + 3);
    func_0x004efcdc();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x49) == '\x01') {
    func_0x004efc48();
    func_0x004efe88();
    func_0x004efcf8();
    param_4 = param_1;
  }
  pqVar3 = param_1;
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    func_0x004efc48();
    pqVar3 = (qword *)segment_command_00000020.segname;
    func_0x00487cbc(0x28,param_1);
    func_0x004efca0();
    param_4 = pqVar3;
  }
  pqVar2 = pqVar3;
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    func_0x004efc48();
    pqVar2 = (qword *)(segment_command_00000020.segname + 8);
    func_0x00487cbc(0x30,pqVar3);
    func_0x004efca0();
    param_4 = pqVar2;
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    func_0x004efc48();
    param_4 = &segment_command_00000020.vmaddr;
    func_0x00487cbc(0x38,pqVar2);
    func_0x004efe38();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    param_4 = (qword *)&MACH_HEADER.cpusubtype;
    func_0x004efcdc();
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    param_4 = (qword *)((long)&MACH_HEADER.cpusubtype + 1);
    func_0x004efcdc();
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x14);
    param_4 = (qword *)((long)&MACH_HEADER.cpusubtype + 2);
    func_0x004efcdc();
  }
  if ((uVar1 >> 5 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) + 0x20);
    param_4 = (qword *)((long)&MACH_HEADER.cpusubtype + 3);
    func_0x004efcdc();
  }
  pqVar3 = (qword *)(ulong)*(uint *)(unaff_x20 + 0x68);
  if ((*(uint *)(unaff_x20 + 0x68) & 0xfffffffc) == 0xc) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x60) + 0x14);
    func_0x004efcdc();
    param_4 = pqVar3;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004efd8c();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if ((long)(*unaff_x19 - (long)param_4) < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        uVar1 = iVar5 - iVar6;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (qword *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (qword *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004eddf4; end: 004ede47;  */

long FUN_004eddf4(long param_1)

{
  long extraout_x8;
  
  func_0x0050c9d0();
  FUN_004efc14();
  return param_1 + extraout_x8;
}



/* Entry: 004ede48; end: 004ee4d3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004ede48(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar4;
  
  func_0x004efcac();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[3];
      if (param_1 == (ulong *)0x0) {
        func_0x004efd74();
        unaff_x21[3] = (ulong)param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[4];
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar4;
        FUN_004df474();
        unaff_x21[4] = (ulong)param_1;
      }
      else {
        FUN_004d5818();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[5];
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar4;
        func_0x004ef6cc();
        unaff_x21[5] = (ulong)param_1;
      }
      else {
        func_0x00505498();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[6];
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar4;
        FUN_004de228();
        unaff_x21[6] = (ulong)param_1;
      }
      else {
        FUN_004d9744();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[7];
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar4;
        func_0x004ef708();
        unaff_x21[7] = (ulong)param_1;
      }
      else {
        FUN_0051b640();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[8];
      if (param_1 == (ulong *)0x0) {
        func_0x004ef744();
        unaff_x21[8] = (ulong)puVar4;
        param_1 = puVar4;
      }
      else {
        FUN_004d7ae4();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    *(undefined1 *)(unaff_x21 + 9) = 1;
  }
  if (*(char *)(unaff_x20 + 0x49) == '\x01') {
    *(undefined1 *)((long)unaff_x21 + 0x49) = 1;
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    *(int *)((long)unaff_x21 + 0x4c) = *(int *)(unaff_x20 + 0x4c);
  }
  if (*(ulong *)(unaff_x20 + 0x50) != 0) {
    unaff_x21[10] = *(ulong *)(unaff_x20 + 0x50);
  }
  if (*(ulong *)(unaff_x20 + 0x58) != 0) {
    unaff_x21[0xb] = *(ulong *)(unaff_x20 + 0x58);
  }
  func_0x004efd28();
  iVar2 = *(int *)(unaff_x20 + 0x68);
  if (iVar2 != 0) {
    iVar3 = (int)unaff_x21[0xd];
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        param_1 = unaff_x21;
        func_0x004ed854();
      }
      *(int *)(unaff_x21 + 0xd) = iVar2;
    }
    switch(iVar2) {
    case 0xc:
      if (iVar3 == iVar2) {
        func_0x004efd7c();
        func_0x004ee0e8();
        goto LAB_004ee0cc;
      }
      func_0x004efec0();
      FUN_004ef780();
      break;
    case 0xd:
      if (iVar3 == iVar2) {
        func_0x004efd7c();
        func_0x004ee2e8();
        goto LAB_004ee0cc;
      }
      func_0x004efec0();
      func_0x004ef950();
      break;
    case 0xe:
      if (iVar3 == iVar2) {
        func_0x004efd7c();
        func_0x004ee3bc();
        goto LAB_004ee0cc;
      }
      func_0x004efec0();
      func_0x004ef9f8();
      break;
    case 0xf:
      if (iVar3 == iVar2) {
        func_0x004efd7c();
        FUN_004ee4d4();
        goto LAB_004ee0cc;
      }
      func_0x004efec0();
      func_0x004efabc();
      break;
    default:
      goto LAB_004ee0cc;
    }
    unaff_x21[0xc] = (ulong)param_1;
  }
LAB_004ee0cc:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x004efccc();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004ee4d4; end: 004ee53b;  */

void FUN_004ee4d4(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004efcac();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_004d9d18();
      puVar1 = puVar2;
    }
  }
  func_0x004efef8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004efccc();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004ee53c; end: 004ee587;  */

long FUN_004ee53c(long param_1)

{
  func_0x004efd38();
  func_0x00532f74(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_004ef160();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004ee588; end: 004ee59b;  */

void FUN_004ee588(void)

{
  FUN_004ee53c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ee59c; end: 004ee5a7;  */

undefined ** FUN_004ee59c(void)

{
  return &PTR_DAT_009f5680;
}



/* Entry: 004ee5a8; end: 004ee5f7;  */

void FUN_004ee5a8(void)

{
  uint uVar1;
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x004efe90();
  uVar1 = (uint)unaff_x19[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_004d9bf4(unaff_x19[4]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004ee5f8(unaff_x19[5]);
    }
  }
  func_0x004efe0c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 004ee5f8; end: 004ee607;  */

void FUN_004ee5f8(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 004ee608; end: 004ee737;  */

long * FUN_004ee608(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x004efcbc();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x004efc54();
    param_4 = param_1;
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    param_4 = unaff_x19;
    FUN_00435e9c();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    uVar2 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x10);
    param_4 = (long *)((long)&MACH_HEADER.magic + 3);
    func_0x004efcdc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004efd8c();
    if ((long)uVar2 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      uVar2 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar2) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)uVar2;
        uVar1 = iVar4 - iVar5;
        uVar2 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,uVar2 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar2);
  }
  return param_4;
}



/* Entry: 004ee738; end: 004ee753;  */

void FUN_004ee738(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004efcac();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar4;
  if (((ulong)puVar4 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if (((ulong)puVar4 & 1) != 0) {
      puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x00532e08(param_1,uVar3,puVar4);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x004efd74();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        FUN_004efb28();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_004ee738();
      }
    }
  }
  func_0x004efd28();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x004efccc();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004ee754; end: 004ee817;  */

long FUN_004ee754(long param_1)

{
  func_0x004efd38();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_0050c54c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_004d93b4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_004d7874();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_00512598();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_004f6714();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_004f0520();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_005062b8();
  }
  __ZdlPv();
  FUN_004eb228(param_1 + 0x60);
  FUN_004eb228(param_1 + 0x48);
  FUN_004ef350(param_1 + 0x30);
  FUN_004ef378(param_1 + 0x18);
  return param_1;
}



/* Entry: 004ee818; end: 004ee82b;  */

void FUN_004ee818(void)

{
  FUN_004ee754();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ee82c; end: 004ee837;  */

undefined ** FUN_004ee82c(void)

{
  return &PTR_DAT_009f56d0;
}



/* Entry: 004ee838; end: 004ee917;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004ee838(long param_1)

{
  byte bVar1;
  ulong *puVar2;
  
  FUN_004efb98(param_1 + 0x18);
  FUN_004ef610(param_1 + 0x30);
  FUN_004ebfd4(param_1 + 0x48);
  FUN_004ebfd4(param_1 + 0x60);
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 != 0) {
    if ((bVar1 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(param_1 + 0x78));
    }
    if ((bVar1 >> 1 & 1) != 0) {
      func_0x00504dec(*(undefined8 *)(param_1 + 0x80));
    }
    if ((bVar1 >> 2 & 1) != 0) {
      FUN_004d9440(*(undefined8 *)(param_1 + 0x88));
    }
    if ((bVar1 >> 3 & 1) != 0) {
      FUN_004d78d8(*(undefined8 *)(param_1 + 0x90));
    }
    if ((bVar1 >> 4 & 1) != 0) {
      FUN_00512654(*(undefined8 *)(param_1 + 0x98));
    }
    if ((bVar1 >> 5 & 1) != 0) {
      FUN_004f6764(*(undefined8 *)(param_1 + 0xa0));
    }
    if ((bVar1 >> 6 & 1) != 0) {
      FUN_004f05c0(*(undefined8 *)(param_1 + 0xa8));
    }
    if ((char)bVar1 < '\0') {
      func_0x00504f38(*(undefined8 *)(param_1 + 0xb0));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 004ee918; end: 004eeb33;  */

dword * FUN_004ee918(dword *param_1,dword *param_2,ulong param_3,dword *param_4)

{
  uint uVar1;
  dword *pdVar2;
  long lVar3;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x004efcbc();
  uVar1 = param_1[4];
  if ((uVar1 & 1) != 0) {
    param_2 = *(dword **)(unaff_x20 + 0x78);
    func_0x004efc54();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0xb8) != 0) {
    func_0x004efc48();
    param_2 = param_1;
    func_0x004efe30();
    func_0x004efca0();
    param_4 = param_1;
  }
  pdVar2 = param_1;
  if (*(long *)(unaff_x20 + 0xc0) != 0) {
    func_0x004efc48();
    pdVar2 = &MACH_HEADER.flags;
    func_0x00487cbc();
    func_0x004efca0();
    param_2 = param_1;
    param_4 = pdVar2;
  }
  if (*(int *)(unaff_x20 + 200) != 0) {
    func_0x004efc48();
    param_2 = pdVar2;
    func_0x004efe88();
    func_0x004efe38();
    param_4 = pdVar2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = *(dword **)(unaff_x20 + 0x80);
    param_3 = (ulong)param_2[5];
    param_4 = (dword *)((long)&MACH_HEADER.cputype + 1);
    func_0x004efcdc();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = *(dword **)(unaff_x20 + 0x88);
    param_3 = (ulong)param_2[5];
    param_4 = (dword *)((long)&MACH_HEADER.cputype + 2);
    func_0x004efcdc();
  }
  iVar4 = *(int *)(unaff_x20 + 0x20);
  while (iVar4 != 0) {
    func_0x004efc2c();
    param_3 = (ulong)param_2[5];
    func_0x004efcdc(7);
    func_0x004efdac();
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = *(dword **)(unaff_x20 + 0x90);
    param_3 = (ulong)param_2[8];
    param_4 = &MACH_HEADER.cpusubtype;
    func_0x004efcdc();
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_2 = *(dword **)(unaff_x20 + 0x98);
    param_3 = (ulong)param_2[5];
    param_4 = (dword *)((long)&MACH_HEADER.cpusubtype + 1);
    func_0x004efcdc();
  }
  iVar4 = *(int *)(unaff_x20 + 0x38);
  while (iVar4 != 0) {
    func_0x004efc2c();
    param_3 = (ulong)param_2[5];
    func_0x004efcdc(0xf);
    func_0x004efdac();
  }
  iVar4 = *(int *)(unaff_x20 + 0x50);
  while (iVar4 != 0) {
    func_0x004efc2c();
    param_3 = (ulong)param_2[5];
    func_0x004efcdc(0x11);
    func_0x004efdac();
  }
  if ((uVar1 >> 5 & 1) != 0) {
    param_2 = *(dword **)(unaff_x20 + 0xa0);
    param_3 = (ulong)param_2[10];
    param_4 = (dword *)((long)&MACH_HEADER.ncmds + 2);
    func_0x004efcdc();
  }
  iVar4 = *(int *)(unaff_x20 + 0x68);
  while (iVar4 != 0) {
    func_0x004efc2c();
    param_3 = (ulong)param_2[5];
    func_0x004efcdc(0x13);
    func_0x004efdac();
  }
  if ((uVar1 >> 6 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0xa8) + 0x14);
    param_4 = &MACH_HEADER.sizeofcmds;
    func_0x004efcdc();
  }
  if ((uVar1 >> 7 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0xb0) + 0x30);
    param_4 = (dword *)((long)&MACH_HEADER.sizeofcmds + 1);
    func_0x004efcdc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004efd8c();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (dword *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (dword *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004eeb34; end: 004eecf7;  */

/* WARNING: Removing unreachable block (ram,0x004eeba8) */
/* WARNING: Removing unreachable block (ram,0x004eeb80) */
/* WARNING: Removing unreachable block (ram,0x004eebd0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_004eeb34(long param_1)

{
  byte bVar1;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x004efdf4();
  while (unaff_x22 != 0) {
    func_0x004ede10(*unaff_x21);
    func_0x004efecc();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x004efd54();
  func_0x004efd54();
  func_0x004efd54();
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 != 0) {
    if ((bVar1 & 1) != 0) {
      FUN_004d2ec0(*(undefined8 *)(param_1 + 0x78));
      func_0x004efd40();
    }
    if ((bVar1 >> 1 & 1) != 0) {
      func_0x004eddf4(*(undefined8 *)(param_1 + 0x80));
      func_0x004efd40();
    }
    if ((bVar1 >> 2 & 1) != 0) {
      FUN_004db7e0(*(undefined8 *)(param_1 + 0x88));
      func_0x004efd40();
    }
    if ((bVar1 >> 3 & 1) != 0) {
      func_0x004ede2c(*(undefined8 *)(param_1 + 0x90));
      func_0x004efd40();
    }
    if ((bVar1 >> 4 & 1) != 0) {
      FUN_004e7b0c(*(undefined8 *)(param_1 + 0x98));
      func_0x004efd40();
    }
    if ((bVar1 >> 5 & 1) != 0) {
      func_0x004eed14(*(undefined8 *)(param_1 + 0xa0));
    }
    if ((bVar1 >> 6 & 1) != 0) {
      FUN_004d3274(*(undefined8 *)(param_1 + 0xa8));
    }
    if ((char)bVar1 < '\0') {
      func_0x004eed30(*(undefined8 *)(param_1 + 0xb0));
    }
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    func_0x004efddc(0xfffffff7);
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    func_0x004efddc();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x004efe9c();
  }
  func_0x004efeb4();
  return;
}



/* Entry: 004eecf8; end: 004eed4b;  */

long FUN_004eecf8(long param_1)

{
  long extraout_x8;
  
  FUN_004fc308();
  FUN_004efc14();
  return param_1 + extraout_x8;
}



/* Entry: 004eed4c; end: 004eed6f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004eed4c(void)

{
  uint uVar1;
  ulong *puVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar3;
  
  func_0x004efcac();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  FUN_004eed4c(unaff_x21 + 0x18,unaff_x20 + 0x18);
  func_0x004eed60(unaff_x21 + 0x30,unaff_x20 + 0x30);
  FUN_004e5980(unaff_x21 + 0x48,unaff_x20 + 0x48);
  puVar2 = (ulong *)(unaff_x21 + 0x60);
  func_0x004e5984();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        func_0x004efd74();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x80);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x004ef6cc();
        *(ulong **)(unaff_x21 + 0x80) = puVar2;
      }
      else {
        func_0x00505498();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x88);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_004de228();
        *(ulong **)(unaff_x21 + 0x88) = puVar2;
      }
      else {
        FUN_004d9744();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x90);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x004ef744();
        *(ulong **)(unaff_x21 + 0x90) = puVar2;
      }
      else {
        FUN_004d7ae4();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x98);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_004ec240();
        *(ulong **)(unaff_x21 + 0x98) = puVar2;
      }
      else {
        FUN_005128ec();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xa0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x004efbac();
        *(ulong **)(unaff_x21 + 0xa0) = puVar2;
      }
      else {
        FUN_004f6874();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xa8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x004d3468();
        *(ulong **)(unaff_x21 + 0xa8) = puVar2;
      }
      else {
        FUN_004f097c();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xb0);
      if (puVar2 == (ulong *)0x0) {
        func_0x004efbe0();
        *(ulong **)(unaff_x21 + 0xb0) = puVar3;
        puVar2 = puVar3;
      }
      else {
        FUN_00505790();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0xb8) != 0) {
    *(long *)(unaff_x21 + 0xb8) = *(long *)(unaff_x20 + 0xb8);
  }
  if (*(long *)(unaff_x20 + 0xc0) != 0) {
    *(long *)(unaff_x21 + 0xc0) = *(long *)(unaff_x20 + 0xc0);
  }
  if (*(int *)(unaff_x20 + 200) != 0) {
    *(int *)(unaff_x21 + 200) = *(int *)(unaff_x20 + 200);
  }
  func_0x004efd28();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x004efccc();
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004eed70; end: 004eedbf;  */

void FUN_004eed70(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  
  if (*(int *)(param_1 + 0x30) == 3) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004efe18();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_004d9ba0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 004eedc0; end: 004eee0b;  */

long FUN_004eedc0(long param_1)

{
  func_0x004efd38();
  func_0x00532f74(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_004eed70(param_1);
  }
  return param_1;
}



/* Entry: 004eee0c; end: 004eee1f;  */

void FUN_004eee0c(void)

{
  FUN_004eedc0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004eee20; end: 004eee2b;  */

undefined ** FUN_004eee20(void)

{
  return &PTR_DAT_009f5728;
}



/* Entry: 004eee2c; end: 004eee6f;  */

void FUN_004eee2c(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x004efe90();
  if ((unaff_x19[2] & 1) != 0) {
    FUN_004d9bf4(unaff_x19[4]);
  }
  FUN_004eed70();
  func_0x004efe0c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 004eee70; end: 004eef93;  */

long * FUN_004eee70(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  int iVar5;
  long *plVar6;
  int iVar7;
  
  plVar6 = (long *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)plVar6 + 0x17);
  plVar4 = param_3;
  if (lVar3 < 0) {
    lVar3 = plVar6[1];
    if (lVar3 == 0) goto LAB_004eeedc;
    plVar2 = (long *)*plVar6;
  }
  else {
    plVar2 = plVar6;
    if (*(char *)((long)plVar6 + 0x17) == '\0') goto LAB_004eeedc;
  }
  FUN_0054ddb8(plVar2,lVar3,1,"snapchat.messaging.PhoneNumberDestinationResult.phone_number");
  plVar2 = param_3;
  FUN_00435e9c(param_3,1,plVar6,param_2);
  plVar4 = plVar6;
  param_2 = plVar2;
LAB_004eeedc:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x18);
    param_2 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x004efcdc();
  }
  if (*(int *)(param_1 + 0x30) == 4) {
    plVar6 = param_3;
    func_0x00487c24(param_3,param_2);
    func_0x004efe88();
    func_0x004efcf8();
  }
  else {
    plVar6 = param_2;
    if (*(int *)(param_1 + 0x30) == 3) {
      plVar4 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x28) + 0x18);
      plVar6 = (long *)((long)&MACH_HEADER.magic + 3);
      func_0x004efcdc();
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar6;
  }
  func_0x004efd8c();
  if ((long)plVar4 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if ((long)(int)plVar4 <= *param_3 - (long)plVar6) {
    _memcpy(plVar6,lVar3,(ulong)plVar4 & 0xffffffff);
    return (long *)((long)plVar6 + (long)(int)plVar4);
  }
  while( true ) {
    iVar7 = ((int)*param_3 - (int)plVar6) + 0x10;
    iVar5 = (int)plVar4;
    plVar4 = (long *)(ulong)(uint)(iVar5 - iVar7);
    if (iVar5 - iVar7 == 0 || iVar5 < iVar7) break;
    func_0x0054f690();
    puVar1 = (undefined1 *)((long)plVar6 + (long)iVar7);
    plVar6 = param_3;
    func_0x0054ed58(param_3,puVar1);
  }
  func_0x0054f690();
  return (long *)((long)plVar6 + (long)iVar5);
}



/* Entry: 004eef94; end: 004ef027;  */

void FUN_004eef94(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x004eff2c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    FUN_0048910c();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_004d2ec0(*(undefined8 *)(unaff_x19 + 0x20));
    func_0x004efd40();
  }
  if ((*(int *)(unaff_x19 + 0x30) != 4) && (*(int *)(unaff_x19 + 0x30) == 3)) {
    FUN_004d2ec0(*(undefined8 *)(unaff_x19 + 0x28));
    func_0x004efd40();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004efe9c();
  }
  func_0x004efeb4();
  return;
}



/* Entry: 004ef028; end: 004ef02b;  */

void FUN_004ef028(ulong *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x004efcac();
  uVar4 = *(ulong *)(unaff_x19 + 8);
  uVar3 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    param_1 = unaff_x21 + 3;
    func_0x00532e08(param_1,uVar3,uVar4);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = (ulong *)unaff_x21[4];
    if (param_1 == (ulong *)0x0) {
      func_0x004efd74();
      unaff_x21[4] = (ulong)param_1;
    }
    else {
      FUN_004d9d18();
    }
  }
  func_0x004efd28();
  iVar1 = *(int *)(unaff_x20 + 0x30);
  if (iVar1 != 0) {
    iVar2 = (int)unaff_x21[6];
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_004eed70();
      }
      *(int *)(unaff_x21 + 6) = iVar1;
    }
    if (iVar1 == 4) {
      *(undefined1 *)(unaff_x21 + 5) = *(undefined1 *)(unaff_x20 + 0x28);
    }
    else if (iVar1 == 3) {
      if (iVar2 == 3) {
        param_1 = (ulong *)unaff_x21[5];
        FUN_004d9d18();
      }
      else {
        func_0x004efd74();
        unaff_x21[5] = (ulong)param_1;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004efccc();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004ef02c; end: 004ef05f;  */

long FUN_004ef02c(long param_1)

{
  func_0x004efd38();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004ef060; end: 004ef073;  */

void FUN_004ef060(void)

{
  FUN_004ef02c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ef074; end: 004ef07f;  */

undefined ** FUN_004ef074(void)

{
  return &PTR_DAT_009f5778;
}



/* Entry: 004ef080; end: 004ef15b;  */

void FUN_004ef080(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x004eff0c();
  if ((extraout_x8 & 1) != 0) {
    func_0x004efe4c();
  }
  func_0x004efe0c();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 004ef15c; end: 004ef15f;  */

void FUN_004ef15c(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004efcac();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_004d9d18();
      puVar1 = puVar2;
    }
  }
  func_0x004efef8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004efccc();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004ef160; end: 004ef183;  */

undefined8 FUN_004ef160(undefined8 param_1)

{
  func_0x004efd38();
  return param_1;
}



/* Entry: 004ef184; end: 004ef187;  */

undefined8 FUN_004ef184(undefined8 param_1)

{
  func_0x004efd38();
  return param_1;
}



/* Entry: 004ef188; end: 004ef19b;  */

void FUN_004ef188(void)

{
  FUN_004ef160();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ef19c; end: 004ef263;  */

undefined ** FUN_004ef19c(void)

{
  return &PTR_DAT_009f57c8;
}



/* Entry: 004ef264; end: 004ef28b;  */

void FUN_004ef264(void)

{
  long extraout_x8;
  
  func_0x004efe24();
  if (extraout_x8 != 0) {
    func_0x004efd98();
  }
  return;
}



/* Entry: 004ef28c; end: 004ef2bf;  */

long FUN_004ef28c(long param_1)

{
  FUN_004ef2c0(param_1 + 0x38);
  FUN_004dfa80(param_1 + 0x20);
  FUN_004ef264(param_1 + 8);
  return param_1;
}



/* Entry: 004ef2c0; end: 004ef2e7;  */

void FUN_004ef2c0(void)

{
  long extraout_x8;
  
  func_0x004efe24();
  if (extraout_x8 != 0) {
    func_0x004efd98();
  }
  return;
}



/* Entry: 004ef2e8; end: 004ef30f;  */

void FUN_004ef2e8(void)

{
  long extraout_x8;
  
  func_0x004efe24();
  if (extraout_x8 != 0) {
    func_0x004efd98();
  }
  return;
}



/* Entry: 004ef310; end: 004ef34f;  */

void FUN_004ef310(void)

{
  func_0x004eff18();
  FUN_004eed4c();
  return;
}



/* Entry: 004ef350; end: 004ef377;  */

void FUN_004ef350(void)

{
  long extraout_x8;
  
  func_0x004efe24();
  if (extraout_x8 != 0) {
    func_0x004efd98();
  }
  return;
}



/* Entry: 004ef378; end: 004ef39f;  */

void FUN_004ef378(void)

{
  long extraout_x8;
  
  func_0x004efe24();
  if (extraout_x8 != 0) {
    func_0x004efd98();
  }
  return;
}



/* Entry: 004ef3a0; end: 004ef60f;  */

void FUN_004ef3a0(dword *param_1)

{
  dword *pdVar1;
  
  if (param_1 == (dword *)0x0) {
    pdVar1 = &MACH_HEADER.flags;
    __Znwm();
  }
  else {
    pdVar1 = param_1;
    func_0x005510c4(param_1,0x18);
  }
  *(undefined ***)pdVar1 = &PTR_FUN_009f5278;
  *(dword **)(pdVar1 + 2) = param_1;
  pdVar1[4] = 0;
  return;
}



/* Entry: 004ef610; end: 004ef623;  */

void FUN_004ef610(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (0 < (int)param_1[1]) {
    uVar1 = (uint)param_1[1];
    puVar2 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar2 = (ulong *)(*param_1 + 7);
    }
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar3 = (ulong)uVar1;
    do {
      (**(code **)(*(long *)*puVar2 + 0x18))();
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 004ef624; end: 004ef65f;  */

long FUN_004ef624(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x004efda0();
  if (param_1 == 0) {
    __Znwm(200);
  }
  else {
    func_0x005510c4();
  }
  func_0x004efdb8();
  func_0x004fe498();
  func_0x004fe900(&PTR_FUN_009f7588);
  if ((extraout_x8 & 1) != 0) {
    func_0x004fe1d0();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x21 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x1c) = 0;
  *(undefined8 *)(unaff_x19 + 0x14) = 0;
  *(undefined4 *)(unaff_x19 + 0x24) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x20;
  FUN_004f8508(unaff_x19 + 0x18,unaff_x21 + 0x18);
  FUN_004fc6e8(unaff_x19 + 0x30,unaff_x20,unaff_x21 + 0x30);
  func_0x004ef330(unaff_x19 + 0x48,unaff_x20,unaff_x21 + 0x48);
  lVar3 = unaff_x21 + 0x60;
  func_0x004fe59c();
  *(long *)(unaff_x19 + 0x60) = lVar3;
  *(undefined4 *)(unaff_x19 + 0xc0) = *(undefined4 *)(unaff_x21 + 0xc0);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    FUN_004fd4b4(unaff_x20,*(undefined8 *)(unaff_x21 + 0x68));
  }
  *(undefined8 *)(unaff_x19 + 0x68) = uVar4;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    FUN_004fd4e8(unaff_x20,*(undefined8 *)(unaff_x21 + 0x70));
  }
  *(undefined8 *)(unaff_x19 + 0x70) = uVar4;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    FUN_004efbac(unaff_x20,*(undefined8 *)(unaff_x21 + 0x78));
  }
  *(undefined8 *)(unaff_x19 + 0x78) = uVar4;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    func_0x004fd540(unaff_x20,*(undefined8 *)(unaff_x21 + 0x80));
  }
  *(undefined8 *)(unaff_x19 + 0x80) = uVar4;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    func_0x004fd5e0(unaff_x20,*(undefined8 *)(unaff_x21 + 0x88));
  }
  *(undefined8 *)(unaff_x19 + 0x88) = uVar4;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    FUN_004fd650(unaff_x20,*(undefined8 *)(unaff_x21 + 0x90));
  }
  *(undefined8 *)(unaff_x19 + 0x90) = uVar4;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    func_0x004fd6a0(unaff_x20,*(undefined8 *)(unaff_x21 + 0x98));
  }
  *(undefined8 *)(unaff_x19 + 0x98) = uVar4;
  if ((uVar1 >> 7 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x004fd714(unaff_x20,*(undefined8 *)(unaff_x21 + 0xa0));
  }
  *(undefined8 *)(unaff_x19 + 0xa0) = unaff_x20;
  uVar4 = *(undefined8 *)(unaff_x21 + 0xa8);
  *(undefined4 *)(unaff_x19 + 0xb0) = *(undefined4 *)(unaff_x21 + 0xb0);
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar4;
  iVar2 = *(int *)(unaff_x19 + 0xc0);
  if (iVar2 == 0x15) {
    func_0x004fe8c4();
    FUN_004fd8ac();
  }
  else if (iVar2 == 0xd) {
    func_0x004fe8c4();
    FUN_004fd7fc();
  }
  else if (iVar2 == 0xe) {
    func_0x004fe8c4();
    FUN_004fd858();
  }
  else {
    if (iVar2 != 0xb) {
      return unaff_x19;
    }
    func_0x004fe8c4();
    func_0x004fd784();
  }
  *(undefined8 *)(unaff_x19 + 0xb8) = unaff_x20;
  return unaff_x19;
}



/* Entry: 004ef660; end: 004ef6cb;  */

undefined8 * FUN_004ef660(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x004efea8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004efdc4();
  }
  else {
    func_0x004efd14();
  }
  puVar2 = param_1 + 1;
  *puVar2 = unaff_x19;
  *param_1 = &PTR_FUN_009f53b8;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004efcec();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x004efe7c();
  }
  param_1[3] = puVar2;
  return param_1;
}



/* Entry: 004ef6cc; end: 004ef77f;  */

long FUN_004ef6cc(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x004efda0();
  if (param_1 == 0) {
    __Znwm(0x158);
  }
  else {
    func_0x005510c4();
  }
  func_0x004efdb8();
  func_0x0050f430();
  func_0x0050f3ac(&PTR_FUN_009fb1f0);
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef80();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  func_0x0050f3c8(unaff_x19 + 0x18);
  func_0x0050f3c8(unaff_x19 + 0x30);
  func_0x0050f3c8(unaff_x19 + 0x48);
  func_0x0050f3c8(unaff_x19 + 0x60);
  func_0x0050f3c8(unaff_x19 + 0x78);
  func_0x0050f3c8(unaff_x19 + 0x90);
  func_0x0050f3c8(unaff_x19 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  *(undefined8 *)(unaff_x19 + 200) = 0;
  *(undefined8 *)(unaff_x19 + 0xd0) = unaff_x21;
  FUN_0050cc98((undefined8 *)(unaff_x19 + 0xc0),unaff_x20 + 0xc0);
  FUN_004dfac8(unaff_x19 + 0xd8);
  *(undefined8 *)(unaff_x19 + 0xf0) = 0;
  *(undefined8 *)(unaff_x19 + 0xf8) = 0;
  *(undefined8 *)(unaff_x19 + 0x100) = unaff_x21;
  func_0x0050ccac((undefined8 *)(unaff_x19 + 0xf0),unaff_x20 + 0xf0);
  *(undefined4 *)(unaff_x19 + 0x150) = *(undefined4 *)(unaff_x20 + 0x150);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x0050ecf0();
  }
  *(undefined8 *)(unaff_x19 + 0x108) = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x0050ed50();
  }
  *(undefined8 *)(unaff_x19 + 0x110) = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_005018b4();
  }
  *(undefined8 *)(unaff_x19 + 0x118) = uVar2;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x120);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x138);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x130);
  *(undefined8 *)(unaff_x19 + 0x140) = *(undefined8 *)(unaff_x20 + 0x140);
  *(undefined8 *)(unaff_x19 + 0x128) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x120) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x138) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x130) = uVar4;
  if (*(int *)(unaff_x19 + 0x150) == 0xd) {
    *(undefined4 *)(unaff_x19 + 0x148) = *(undefined4 *)(unaff_x20 + 0x148);
  }
  else if (*(int *)(unaff_x19 + 0x150) == 0xc) {
    func_0x0050eda4();
    *(undefined8 *)(unaff_x19 + 0x148) = unaff_x21;
  }
  return unaff_x19;
}



/* Entry: 004ef780; end: 004ef94f;  */

char * FUN_004ef780(char *param_1,long param_2)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == (char *)0x0) {
    pcVar2 = section_000000b8.segname + 8;
    __Znwm();
  }
  else {
    pcVar2 = param_1;
    func_0x005510c4(param_1,0xd0);
  }
  *(char **)(pcVar2 + 8) = param_1;
  *(undefined ***)pcVar2 = &PTR_FUN_009f5408;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x004efcec();
  }
  *(undefined4 *)(pcVar2 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(pcVar2 + 0x14) = 0;
  FUN_004ef310(pcVar2 + 0x18,param_1,param_2 + 0x18);
  func_0x004ef330(pcVar2 + 0x30,param_1,param_2 + 0x30);
  FUN_004eb1e8((long)pcVar2 + 0x48,param_1,param_2 + 0x48);
  FUN_004eb1e8((long)pcVar2 + 0x60,param_1,param_2 + 0x60);
  uVar1 = (uint)*(qword *)(pcVar2 + 0x10);
  if ((uVar1 & 1) == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = param_1;
    func_0x004d3428(param_1,*(undefined8 *)(param_2 + 0x78));
  }
  *(char **)(pcVar2 + 0x78) = pcVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = param_1;
    func_0x004ef6cc(param_1,*(undefined8 *)(param_2 + 0x80));
  }
  *(char **)(pcVar2 + 0x80) = pcVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = param_1;
    FUN_004de228(param_1,*(undefined8 *)(param_2 + 0x88));
  }
  *(char **)(pcVar2 + 0x88) = pcVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = param_1;
    func_0x004ef744(param_1,*(undefined8 *)(param_2 + 0x90));
  }
  *(char **)(pcVar2 + 0x90) = pcVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = param_1;
    FUN_004ec240(param_1,*(undefined8 *)(param_2 + 0x98));
  }
  *(char **)(pcVar2 + 0x98) = pcVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = param_1;
    func_0x004efbac(param_1,*(undefined8 *)(param_2 + 0xa0));
  }
  *(char **)(pcVar2 + 0xa0) = pcVar3;
  if ((uVar1 >> 6 & 1) == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = param_1;
    func_0x004d3468(param_1,*(undefined8 *)(param_2 + 0xa8));
  }
  *(char **)(pcVar2 + 0xa8) = pcVar3;
  if ((uVar1 >> 7 & 1) == 0) {
    param_1 = (char *)0x0;
  }
  else {
    func_0x004efbe0(param_1,*(undefined8 *)(param_2 + 0xb0));
  }
  *(char **)(pcVar2 + 0xb0) = param_1;
  uVar5 = *(undefined8 *)(param_2 + 0xc0);
  uVar4 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined4 *)(pcVar2 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined8 *)(pcVar2 + 0xc0) = uVar5;
  *(undefined8 *)(pcVar2 + 0xb8) = uVar4;
  return pcVar2;
}



/* Entry: 004ef950; end: 004efb27;  */

undefined8 * FUN_004ef950(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x004efea8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004efe54();
  }
  else {
    param_1 = unaff_x19;
    func_0x004efe5c();
  }
  param_1[1] = unaff_x19;
  *param_1 = &PTR_DAT_009f52c8;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004efcec();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = unaff_x20 + 0x18;
  func_0x00487c6c();
  param_1[3] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = unaff_x19;
    func_0x004d3428();
  }
  param_1[4] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x19 = (undefined8 *)0x0;
  }
  else {
    FUN_004efb28();
  }
  param_1[5] = unaff_x19;
  return param_1;
}



/* Entry: 004efb28; end: 004efb97;  */

dword * FUN_004efb28(dword *param_1)

{
  dword *pdVar1;
  
  if (param_1 == (dword *)0x0) {
    pdVar1 = &MACH_HEADER.flags;
    __Znwm();
  }
  else {
    pdVar1 = param_1;
    func_0x005510c4(param_1,0x18);
  }
  *(undefined ***)pdVar1 = &PTR_FUN_009f5278;
  *(dword **)(pdVar1 + 2) = param_1;
  pdVar1[4] = 0;
  FUN_004ee738();
  return pdVar1;
}



/* Entry: 004efb98; end: 004efbab;  */

void FUN_004efb98(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (0 < (int)param_1[1]) {
    uVar1 = (uint)param_1[1];
    puVar2 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar2 = (ulong *)(*param_1 + 7);
    }
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar3 = (ulong)uVar1;
    do {
      (**(code **)(*(long *)*puVar2 + 0x18))();
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 004efbac; end: 004efc13;  */

long FUN_004efbac(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x004efda0();
  if (param_1 == 0) {
    func_0x004efe54();
  }
  else {
    func_0x004efe5c();
  }
  func_0x004efdb8();
  func_0x004fe498();
  func_0x004fe900(&PTR_FUN_009f73f8);
  if ((extraout_x8 & 1) != 0) {
    func_0x004fe1d0();
  }
  FUN_004fc6a0(unaff_x19 + 0x10,unaff_x20,unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return unaff_x19;
}



/* Entry: 004efc14; end: 004eff3f;  */

void FUN_004efc14(void)

{
  return;
}



/* Entry: 004eff40; end: 004eff6b;  */

undefined8 FUN_004eff40(undefined8 param_1)

{
  func_0x004f1f1c();
  FUN_004eff6c(param_1);
  return param_1;
}



/* Entry: 004eff6c; end: 004effb3;  */

void FUN_004eff6c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_004d9ba0();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004effb4; end: 004effb7;  */

undefined8 FUN_004effb4(undefined8 param_1)

{
  func_0x004f1f1c();
  FUN_004eff6c(param_1);
  return param_1;
}



/* Entry: 004effb8; end: 004effcb;  */

void FUN_004effb8(void)

{
  FUN_004eff40();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004effcc; end: 004effd7;  */

undefined ** FUN_004effcc(void)

{
  return &PTR_DAT_009f5b70;
}



/* Entry: 004effd8; end: 004f0047;  */

void FUN_004effd8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x004f1fe4();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(param_1 + 0x28));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 004f0048; end: 004f024f;  */

qword * FUN_004f0048(qword *param_1,undefined8 param_2,ulong param_3,qword *param_4)

{
  uint uVar1;
  qword *pqVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  qword *unaff_x19;
  long unaff_x20;
  qword *pqVar5;
  int iVar6;
  int iVar7;
  
  func_0x004f1e58();
  pqVar2 = param_1;
  if (param_1[6] != 0) {
    func_0x004f1ddc();
    pqVar2 = (qword *)&MACH_HEADER.cpusubtype;
    func_0x00487cbc(8,param_1);
    func_0x004f1e30();
    param_4 = pqVar2;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    pqVar2 = (qword *)((long)&MACH_HEADER.magic + 2);
    func_0x004f1ef8();
    param_4 = pqVar2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    pqVar2 = (qword *)&MACH_HEADER.cputype;
    func_0x004f1ef8();
    param_4 = pqVar2;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x18);
    pqVar2 = (qword *)((long)&MACH_HEADER.cputype + 2);
    func_0x004f1ef8();
    param_4 = pqVar2;
  }
  pqVar5 = pqVar2;
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    func_0x004f1ddc();
    pqVar5 = (qword *)(ulong)*(uint *)(unaff_x20 + 0x38);
    uVar3 = 0x38;
    func_0x00487cbc(0x38,pqVar2);
    func_0x00487ce8(pqVar5,uVar3);
    param_4 = pqVar5;
  }
  pqVar2 = pqVar5;
  if (*(char *)(unaff_x20 + 0x3c) == '\x01') {
    func_0x004f1ddc();
    pqVar2 = &segment_command_00000020.vmsize;
    func_0x00487cbc(0x40,pqVar5);
    func_0x004f1f08();
    param_4 = pqVar2;
  }
  if (*(char *)(unaff_x20 + 0x3d) == '\x01') {
    func_0x004f1ddc();
    param_4 = &segment_command_00000020.fileoff;
    func_0x00487cbc(0x48,pqVar2);
    func_0x004f1f08();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004f1f34();
  if ((long)param_3 < 0) {
    lVar4 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar4 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= (long)(*unaff_x19 - (long)param_4)) {
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (qword *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar6 = (int)param_3;
    uVar1 = iVar6 - iVar7;
    param_3 = (ulong)uVar1;
    if (uVar1 == 0 || iVar6 < iVar7) break;
    func_0x0054f690();
    param_4 = unaff_x19;
    func_0x0054ed58();
  }
  func_0x0054f690();
  return (qword *)((long)param_4 + (long)iVar6);
}



/* Entry: 004f0250; end: 004f0347;  */

void FUN_004f0250(ulong *param_1)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x004f1e90();
  if ((unaff_x22 & 1) != 0) {
    func_0x004f1fc0();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x004f1f80();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x004f1f80();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x004f1f80();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if (*(char *)(unaff_x20 + 0x3c) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x3c) = 1;
  }
  if (*(char *)(unaff_x20 + 0x3d) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x3d) = 1;
  }
  func_0x004f1f24();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x004f1ee8();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004f0348; end: 004f0417;  */

void FUN_004f0348(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x70) == 8) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004f1f74();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_004f03a4;
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_004e21ec();
    }
  }
  else {
    if (*(int *)(param_1 + 0x70) != 3) goto LAB_004f03a4;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004f1f74();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_004f03a4;
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_004e07d8();
    }
  }
  __ZdlPv();
LAB_004f03a4:
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}



/* Entry: 004f0418; end: 004f051f;  */

undefined8 * FUN_004f0418(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009f5a90;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x004f1ebc();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_004eb1e8(param_1 + 3,param_2,param_3 + 0x18);
  iVar2 = *(int *)(param_3 + 0x70);
  *(int *)(param_1 + 0xe) = iVar2;
  *(undefined4 *)((long)param_1 + 0x74) = *(undefined4 *)(param_3 + 0x74);
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    FUN_004f1b4c(param_2,*(undefined8 *)(param_3 + 0x30));
    iVar2 = *(int *)(param_1 + 0xe);
  }
  param_1[6] = uVar1;
  uVar3 = *(undefined8 *)(param_3 + 0x40);
  uVar1 = *(undefined8 *)(param_3 + 0x38);
  uVar5 = *(undefined8 *)(param_3 + 0x50);
  uVar4 = *(undefined8 *)(param_3 + 0x48);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_3 + 0x58);
  param_1[10] = uVar5;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[7] = uVar1;
  uVar1 = param_2;
  if (iVar2 == 8) {
    func_0x004f1be0(param_2,*(undefined8 *)(param_3 + 0x60));
  }
  else {
    if (iVar2 != 3) goto LAB_004f04e4;
    FUN_004ebfe8(param_2,*(undefined8 *)(param_3 + 0x60));
  }
  param_1[0xc] = uVar1;
LAB_004f04e4:
  if (*(int *)((long)param_1 + 0x74) == 7) {
    param_1[0xd] = *(undefined8 *)(param_3 + 0x68);
  }
  else if (*(int *)((long)param_1 + 0x74) == 6) {
    func_0x004f1c18(param_2,*(undefined8 *)(param_3 + 0x68));
    param_1[0xd] = param_2;
  }
  return param_1;
}



/* Entry: 004f0520; end: 004f054b;  */

undefined8 FUN_004f0520(undefined8 param_1)

{
  func_0x004f1f1c();
  FUN_004f054c(param_1);
  return param_1;
}



/* Entry: 004f054c; end: 004f059b;  */

long * FUN_004f054c(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_004f0c08();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_004f0348(param_1);
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    func_0x004f03c8(param_1);
  }
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    FUN_0054cf94(plVar1);
  }
  return plVar1;
}



/* Entry: 004f059c; end: 004f059f;  */

undefined8 FUN_004f059c(undefined8 param_1)

{
  func_0x004f1f1c();
  FUN_004f054c(param_1);
  return param_1;
}


