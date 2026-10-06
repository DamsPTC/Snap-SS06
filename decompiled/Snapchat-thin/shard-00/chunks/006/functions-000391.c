/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10082a9dc; end: 10082ab6b;  */

void FUN_10082a9dc(long param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0001004b62b4(&uStack_58,0);
  FUN_100460de4(auStack_a0);
  lVar3 = *(long *)(param_1 + 8);
  lVar4 = *param_2;
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)param_2[2];
    do {
      iVar2 = 0xf2ada84;
      func_0x000107c613c0("grpc-status",*puVar5);
      if (iVar2 == 0) {
        FUN_10082de94(param_1,param_2);
        *(long *)(lVar3 + 0x78) = lVar3 + 0x91;
        *(undefined8 *)(lVar3 + 0x84) = 0x500000000;
        *(undefined1 *)(lVar3 + 0x90) = 0;
        func_0x00010082b580(*(undefined8 *)(lVar3 + 0x28),lVar3 + 0x91,5);
        goto LAB_10082aaec;
      }
      puVar5 = puVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  FUN_100460448(lVar3 + 0x600);
  FUN_10082ab6c(param_2,lVar3 + 0x3e0);
  *(undefined1 *)(lVar3 + 0x59) = 1;
  if ((*(char *)(lVar3 + 0x4e) == '\0') && (*(char *)(lVar3 + 0x5d) == '\0')) {
    if (*(char *)(lVar3 + 0x80) != '\0') {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/cronet/transport/cronet_transport.cc"
                    ,0x241,2,"assertion failed: %s");
      func_0x000107c60ebc();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10082ab44);
      (*pcVar1)();
    }
    *(long *)(lVar3 + 0x78) = lVar3 + 0x91;
    *(undefined8 *)(lVar3 + 0x84) = 0x500000000;
    *(undefined1 *)(lVar3 + 0x90) = 0;
    func_0x00010082b580(*(undefined8 *)(lVar3 + 0x28),lVar3 + 0x91,5);
  }
  func_0x000100466b80(lVar3 + 0x600);
  FUN_100617338(lVar3);
LAB_10082aaec:
  FUN_100467a48(auStack_a0);
  FUN_1004b6ddc(&uStack_58);
  return;
}



/* Entry: 10082ab6c; end: 10082ad23;  */

ulong * FUN_10082ab6c(ulong *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong **ppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong ***pppuVar7;
  long **pplVar8;
  long *plVar9;
  int iVar10;
  ulong *puVar11;
  long lVar12;
  uint *puVar13;
  undefined *unaff_x20;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long *plStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  long lStack_f8;
  undefined *puStack_f0;
  ulong *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  ulong uStack_d0;
  ulong *puStack_c8;
  ulong **ppuStack_c0;
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong **ppuStack_a0;
  undefined1 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong **ppuStack_80;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d0 = 0;
  uVar15 = param_2;
  if (*param_1 != 0) {
    unaff_x20 = &UNK_104ae2ca0;
    puStack_c8 = param_1;
    do {
      uVar3 = uStack_d0;
      uVar16 = puStack_c8[2];
      uVar14 = *(ulong *)(uVar16 + uStack_d0 * 0x10);
      uVar5 = uVar14;
      func_0x000107c613d0();
      if ((uVar5 < 4) || (*(int *)(uVar5 + uVar14 + -4) != 0x6e69622d)) {
        FUN_10047e7b4(&ppuStack_a0,*(undefined8 *)(uVar16 + uVar3 * 0x10 + 8));
      }
      else {
        FUN_10047e7b4(&ppuStack_a0,*(undefined8 *)(uVar16 + uVar3 * 0x10 + 8));
        puStack_78 = puStack_98;
        ppuStack_80 = ppuStack_a0;
        uStack_68 = uStack_88;
        uStack_70 = uStack_90;
        pppuVar7 = &ppuStack_80;
        func_0x000104a96638(pppuVar7);
        func_0x000104a96a64(&ppuStack_a0,&ppuStack_80,pppuVar7);
      }
      puStack_78 = puStack_98;
      ppuStack_80 = ppuStack_a0;
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      uVar15 = *(undefined8 *)(puStack_c8[2] + uStack_d0 * 0x10);
      uVar6 = uVar15;
      func_0x000107c613d0(uVar15);
      puStack_b8 = puStack_78;
      ppuStack_c0 = ppuStack_80;
      uStack_a8 = uStack_68;
      uStack_b0 = uStack_70;
      ppuStack_a0 = &puStack_c8;
      puStack_98 = (undefined1 *)&uStack_d0;
      FUN_1004bcaf0(param_2,uVar15,uVar6,&ppuStack_c0,&ppuStack_a0,&UNK_104ae2ca0);
      ppuVar4 = ppuStack_c0;
      if ((ulong **)0x1 < ppuStack_c0) {
        do {
          puVar11 = *ppuVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
          if (bVar2) {
            *ppuVar4 = (ulong *)((long)puVar11 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((ulong *)((long)puVar11 + -1) == (ulong *)0x0) {
          (*(code *)ppuVar4[1])();
        }
      }
      uStack_d0 = uStack_d0 + 1;
      param_1 = puStack_c8;
    } while (uStack_d0 < *puStack_c8);
  }
  iVar10 = (int)uVar15;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    puStack_c8 = param_1;
    func_0x000107c60e78();
    if (iVar10 != 0) {
      func_0x000104bd46a0();
      FUN_1004b6d90(&ppuStack_c0);
    }
    puVar11 = param_1;
    func_0x000107c60bd8();
    pplVar8 = &plStack_120;
    pcStack_d8 = FUN_10082ad24;
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_118 = puVar11[1];
    plStack_120 = (long *)*puVar11;
    uStack_108 = puVar11[3];
    uStack_110 = puVar11[2];
    puVar11[1] = 0;
    *puVar11 = 0;
    puVar11[3] = 0;
    puVar11[2] = 0;
    puStack_f0 = unaff_x20;
    puStack_e8 = param_1;
    puStack_e0 = &stack0xfffffffffffffff0;
    FUN_100744fe4(&plStack_120);
    plVar9 = plStack_120;
    if ((long *)0x1 < plStack_120) {
      do {
        lVar12 = *plStack_120;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
        if (bVar2) {
          *plStack_120 = lVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar12 + -1 == 0) {
        (*(code *)plStack_120[1])();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      func_0x000107c60e78();
      if (iVar10 != 0) {
        func_0x000104bd46a0();
        FUN_1004b6d90(&plStack_120);
      }
      func_0x000107c60bd8();
      puVar13 = (uint *)*plVar9;
      puVar11 = (ulong *)(plVar9 + 1);
      FUN_10082ad24(puVar11,plVar9[5],plVar9[6]);
      *puVar13 = *puVar13 | 8;
      puVar13[0x69] = (uint)puVar11;
      return puVar11;
    }
    return (ulong *)pplVar8;
  }
  return param_1;
}



/* Entry: 10082ad24; end: 10082addb;  */

long * FUN_10082ad24(undefined8 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_100744fe4(&plStack_50);
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar6 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (long *)pplVar3;
  }
  func_0x000107c60e78();
  if (param_2 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_50);
  }
  func_0x000107c60bd8();
  puVar7 = (uint *)*plVar4;
  plVar5 = plVar4 + 1;
  FUN_10082ad24(plVar5,plVar4[5],plVar4[6]);
  *puVar7 = *puVar7 | 8;
  puVar7[0x69] = (uint)plVar5;
  return plVar5;
}



/* Entry: 10082addc; end: 10082ae17;  */

void FUN_10082addc(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  FUN_10082ad24(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 8;
  puVar2[0x69] = (uint)puVar1;
  return;
}



/* Entry: 10082ae18; end: 10082aecf;  */

long * FUN_10082ae18(undefined8 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_100746448(&plStack_50);
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar6 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (long *)pplVar3;
  }
  func_0x000107c60e78();
  if (param_2 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_50);
  }
  func_0x000107c60bd8();
  puVar7 = (uint *)*plVar4;
  plVar5 = plVar4 + 1;
  FUN_10082ae18(plVar5,plVar4[5],plVar4[6]);
  *puVar7 = *puVar7 | 0x20;
  puVar7[0x67] = (uint)plVar5;
  return plVar5;
}



/* Entry: 10082aed0; end: 10082af0b;  */

void FUN_10082aed0(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  FUN_10082ae18(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 0x20;
  puVar2[0x67] = (uint)puVar1;
  return;
}



/* Entry: 10082af0c; end: 10082af77;  */

void FUN_10082af0c(long *param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*param_1 == 0) {
    uVar1 = (long)param_1 + 9;
    uVar2 = (ulong)*(byte *)(param_1 + 1);
  }
  else {
    uVar2 = param_1[1];
    uVar1 = param_1[2];
  }
  FUN_10082b06c(uVar1,uVar2);
  if ((uVar1 & 0xff00000000) == 0) {
    (*param_3)(param_2,"invalid value",0xd,param_1);
  }
  return;
}



/* Entry: 10082af78; end: 10082b02f;  */

long * FUN_10082af78(undefined8 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_10082af0c(&plStack_50);
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar6 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (long *)pplVar3;
  }
  func_0x000107c60e78();
  if (param_2 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_50);
  }
  func_0x000107c60bd8();
  puVar7 = (uint *)*plVar4;
  plVar5 = plVar4 + 1;
  FUN_10082af78(plVar5,plVar4[5],plVar4[6]);
  *puVar7 = *puVar7 | 0x80;
  puVar7[0x65] = (uint)plVar5;
  return plVar5;
}



/* Entry: 10082b030; end: 10082b06b;  */

void FUN_10082b030(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  FUN_10082af78(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 0x80;
  puVar2[0x65] = (uint)puVar1;
  return;
}



/* Entry: 10082b06c; end: 10082b103;  */

ulong FUN_10082b06c(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_2 == 4) {
    func_0x000107c610b0(param_1,&DAT_10f2fc7b0);
    if ((int)param_1 == 0) {
      uVar1 = 0x100000000;
      uVar2 = 2;
      goto LAB_10082b0ec;
    }
  }
  else if (param_2 == 7) {
    func_0x000107c610b0(param_1,&DAT_10f75be5a);
    if ((int)param_1 == 0) {
      uVar1 = 0x100000000;
      uVar2 = 1;
      goto LAB_10082b0ec;
    }
  }
  else if ((param_2 == 8) && (*param_1 == 0x797469746e656469)) {
    uVar2 = 0;
    uVar1 = 0x100000000;
    goto LAB_10082b0ec;
  }
  uVar1 = 0;
  uVar2 = 0;
LAB_10082b0ec:
  return uVar2 | uVar1;
}



/* Entry: 10082b104; end: 10082b273;  */

long * FUN_10082b104(long param_1,long param_2)

{
  byte *pbVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  long *plVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  byte *pbVar13;
  ulong uVar14;
  long *plVar15;
  uint *puVar16;
  long *plStack_d0;
  ulong uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_78;
  int iStack_70;
  byte *pbStack_68;
  ulong uStack_60;
  long *plStack_58;
  undefined1 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0x2c;
  lStack_78 = 0;
  iStack_70 = 0;
  pbStack_68 = (byte *)0x0;
  uStack_60 = 0;
  plStack_58 = &lStack_48;
  uStack_50 = 0x2c;
  lStack_48 = param_1;
  lStack_40 = param_2;
  if (param_1 == 0) {
    bVar5 = false;
    iStack_70 = 2;
    lStack_78 = param_2;
  }
  else {
    FUN_10082b388(&lStack_78);
    bVar5 = iStack_70 != 2;
  }
  lVar12 = lStack_40;
  if ((bVar5) || (plVar15 = (long *)0x1, lStack_78 != lStack_40)) {
    plVar15 = (long *)0x1;
    do {
      pbVar10 = pbStack_68;
      if (uStack_60 != 0) {
        pbVar6 = pbStack_68;
        uVar14 = uStack_60;
        do {
          pbVar10 = pbVar6;
          if (((byte)(&UNK_10e52ca36)[*pbVar6] >> 3 & 1) == 0) break;
          pbVar6 = pbVar6 + 1;
          uVar14 = uVar14 - 1;
          pbVar10 = pbStack_68 + uStack_60;
        } while (uVar14 != 0);
      }
      uVar14 = (long)pbVar10 - (long)pbStack_68;
      if (uStack_60 < uVar14) {
        puVar7 = (undefined8 *)&UNK_10f2fca6e;
        func_0x000104a6f9e8();
        pcStack_88 = FUN_10082b274;
        lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uStack_c8 = puVar7[1];
        plStack_d0 = (long *)*puVar7;
        uStack_b8 = puVar7[3];
        plStack_c0 = (long *)puVar7[2];
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        uVar14 = uStack_c8 & 0xff;
        plVar8 = (long *)((ulong)&plStack_d0 | 9);
        if (plStack_d0 != (long *)0x0) {
          uVar14 = uStack_c8;
          plVar8 = plStack_c0;
        }
        iVar9 = (int)uVar14;
        lStack_a0 = lVar12;
        plStack_98 = plVar15;
        puStack_90 = &stack0xfffffffffffffff0;
        FUN_10082b104(plVar8);
        plVar15 = plStack_d0;
        if ((long *)0x1 < plStack_d0) {
          do {
            lVar12 = *plStack_d0;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plStack_d0,0x10);
            if (bVar5) {
              *plStack_d0 = lVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar12 + -1 == 0) {
            (*(code *)plStack_d0[1])();
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
          func_0x000107c60e78();
          if (iVar9 != 0) {
            func_0x000104bd46a0();
            FUN_1004b6d90(&plStack_d0);
          }
          func_0x000107c60bd8();
          puVar16 = (uint *)*plVar15;
          plVar8 = plVar15 + 1;
          FUN_10082b274(plVar8,plVar15[5],plVar15[6]);
          *puVar16 = *puVar16 | 0x200;
          *(char *)(puVar16 + 99) = (char)plVar8;
          return plVar8;
        }
        return plVar8;
      }
      pbVar6 = pbStack_68 + uVar14;
      pbVar13 = pbStack_68 + (uStack_60 - (long)pbVar10);
      pbVar10 = pbStack_68 + uStack_60 + 1;
      do {
        pbVar11 = pbVar6;
        if (pbVar13 == (byte *)0x0) break;
        pbVar1 = pbVar10 + -2;
        pbVar11 = pbVar10 + -1;
        pbVar13 = pbVar13 + -1;
        pbVar10 = pbVar11;
      } while (((byte)(&UNK_10e52ca36)[*pbVar1] >> 3 & 1) != 0);
      uVar2 = uStack_60 - uVar14;
      if ((ulong)((long)pbVar11 - (long)pbVar6) <= uStack_60 - uVar14) {
        uVar2 = (long)pbVar11 - (long)pbVar6;
      }
      FUN_10082b06c(pbVar6,uVar2);
      uVar3 = 1 << (ulong)((uint)pbVar6 & 0x1f);
      if (2 < (uint)pbVar6 || ((ulong)pbVar6 & 0xff00000000) == 0) {
        uVar3 = 0;
      }
      plVar15 = (long *)(ulong)((uint)plVar15 | uVar3);
      FUN_10082b388(&lStack_78);
    } while ((iStack_70 != 2) || (lStack_78 != lVar12));
  }
  return plVar15;
}



/* Entry: 10082b274; end: 10082b34b;  */

long * FUN_10082b274(undefined8 *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  long *plStack_50;
  ulong uStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  plStack_40 = (long *)param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar1 = uStack_48 & 0xff;
  plVar4 = (long *)((ulong)&plStack_50 | 9);
  if (plStack_50 != (long *)0x0) {
    uVar1 = uStack_48;
    plVar4 = plStack_40;
  }
  iVar6 = (int)uVar1;
  FUN_10082b104(plVar4);
  plVar5 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar3) {
        *plStack_50 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    func_0x000107c60e78();
    if (iVar6 != 0) {
      func_0x000104bd46a0();
      FUN_1004b6d90(&plStack_50);
    }
    func_0x000107c60bd8();
    puVar8 = (uint *)*plVar5;
    plVar4 = plVar5 + 1;
    FUN_10082b274(plVar4,plVar5[5],plVar5[6]);
    *puVar8 = *puVar8 | 0x200;
    *(char *)(puVar8 + 99) = (char)plVar4;
    return plVar4;
  }
  return plVar4;
}



/* Entry: 10082b34c; end: 10082b387;  */

void FUN_10082b34c(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  FUN_10082b274(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 0x200;
  *(char *)(puVar2 + 99) = (char)puVar1;
  return;
}



/* Entry: 10082b388; end: 10082b423;  */

long * FUN_10082b388(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  if ((int)param_1[1] == 1) {
    *(undefined4 *)(param_1 + 1) = 2;
  }
  else {
    lVar1 = *(long *)param_1[4];
    lVar5 = ((long *)param_1[4])[1];
    plVar2 = param_1 + 5;
    lVar4 = lVar1;
    lStack_40 = lVar1;
    lStack_38 = lVar5;
    FUN_10082b424(plVar2,lVar1,lVar5,*param_1);
    if ((long *)(lVar1 + lVar5) == plVar2) {
      *(undefined4 *)(param_1 + 1) = 1;
    }
    lVar5 = *param_1;
    FUN_10082b490(&lStack_40,lVar5,(long)plVar2 - (lVar1 + lVar5));
    param_1[2] = (long)plVar3;
    param_1[3] = lVar5;
    *param_1 = lVar5 + lVar4 + *param_1;
  }
  return param_1;
}



/* Entry: 10082b424; end: 10082b48f;  */

undefined1  [16] FUN_10082b424(char *param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar4 = param_3 - param_4;
  if (param_4 <= param_3 && uVar4 != 0) {
    uVar3 = (ulong)*param_1;
    lVar1 = param_2 + param_4;
    func_0x000107c610ac();
    uVar5 = lVar1 - param_2;
    if (lVar1 != 0 && uVar5 != 0xffffffffffffffff) {
      if (param_3 < uVar5) {
        plVar2 = (long *)&UNK_10f6d2c99;
        func_0x000107c34ee0();
        uVar5 = plVar2[1] - uVar3;
        if (uVar3 <= (ulong)plVar2[1]) {
          if (uVar4 <= uVar5) {
            uVar5 = uVar4;
          }
          auVar7._8_8_ = uVar5;
          auVar7._0_8_ = *plVar2 + uVar3;
          return auVar7;
        }
        func_0x000107c60ebc();
        auVar8._8_8_ = uVar3;
        auVar8._0_8_ = plVar2;
        return auVar8;
      }
      uVar4 = (ulong)(param_3 != uVar5);
      goto LAB_10082b474;
    }
  }
  uVar4 = 0;
  uVar5 = param_3;
LAB_10082b474:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = param_2 + uVar5;
  return auVar6;
}



/* Entry: 10082b490; end: 10082b4bf;  */

undefined1  [16] FUN_10082b490(long *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = param_1[1] - param_2;
  if (param_2 <= (ulong)param_1[1]) {
    if (param_3 <= uVar1) {
      uVar1 = param_3;
    }
    auVar2._8_8_ = uVar1;
    auVar2._0_8_ = *param_1 + param_2;
    return auVar2;
  }
  func_0x000107c60ebc();
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10082b4c0; end: 10082b66b;  */

void FUN_10082b4c0(void)

{
  return;
}



/* Entry: 10082b66c; end: 10082b6eb;  */

void FUN_10082b66c(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar5 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_1004bd618(uVar3,uVar4,&uStack_28,*(undefined8 *)(param_1 + 0x30));
  if ((uStack_28 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 10082b6ec; end: 10082b7e7;  */

void FUN_10082b6ec(undefined8 *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  int *piVar6;
  ulong uStack_30;
  ulong uStack_28;
  
  if (*param_2 == 0) {
    if (*(char *)param_1[7] < '\0') {
      uVar5 = (ulong)*(uint *)((char *)param_1[7] + 0x194) | 0x100000000;
    }
    else {
      uVar5 = 0;
    }
    uVar4 = 0;
    if ((uVar5 & 0x100000000) != 0) {
      uVar4 = (undefined4)uVar5;
    }
    *(undefined4 *)(param_1 + 9) = uVar4;
  }
  if (*(char *)(param_1 + 8) != '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
    uStack_28 = 0;
    FUN_1004bd618(*param_1,param_1 + 0xc,&uStack_28,"continue recv_message_ready callback");
    if ((uStack_28 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  FUN_10082b7e8(param_1);
  uVar3 = param_1[6];
  param_1[6] = 0;
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar6 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10082b8d4(&uStack_28,uVar3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 10082b7e8; end: 10082b8d3;  */

void FUN_10082b7e8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong uVar6;
  ulong auStack_38 [3];
  
  if (*(char *)(param_1 + 0x11) != '\0') {
    *(undefined1 *)(param_1 + 0x11) = 0;
    uVar6 = param_1[0x17];
    uVar3 = uVar6;
    if ((uVar6 & 1) != 0) {
      piVar5 = (int *)(uVar6 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      uVar3 = param_1[0x17];
    }
    auStack_38[2] = uVar6;
    if (uVar3 != 0) {
      param_1[0x17] = 0;
      auStack_38[1] = 0x36;
      if ((uVar3 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    uVar4 = *param_1;
    if ((uVar6 & 1) != 0) {
      piVar5 = (int *)(uVar6 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    auStack_38[0] = uVar6;
    FUN_1004bd618(uVar4,param_1 + 0x12,auStack_38,"Continuing OnRecvTrailingMetadataReady");
    if ((auStack_38[0] & 1) != 0) {
      FUN_10084dad0();
    }
    if ((uVar6 & 1) != 0) {
      FUN_10084dad0(uVar6);
    }
  }
  return;
}



/* Entry: 10082b8d4; end: 10082b947;  */

void FUN_10082b8d4(undefined8 param_1,long param_2,ulong *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  ulong uStack_28;
  
  if (param_2 != 0) {
    pcVar1 = *(code **)(param_2 + 8);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    uStack_28 = *param_3;
    if ((uStack_28 & 1) != 0) {
      piVar5 = (int *)(uStack_28 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar4) {
          *piVar5 = *piVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    (*pcVar1)(uVar2,&uStack_28);
    if ((uStack_28 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  return;
}



/* Entry: 10082b948; end: 10082b9bb;  */

void FUN_10082b948(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_28;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar4;
  FUN_10082b9bc(param_1,&uStack_28);
  if ((uVar4 & 1) != 0) {
    FUN_10084dad0(uVar4);
  }
  return;
}



/* Entry: 10082b9bc; end: 10082bc4f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10082b9bc(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 ***pppuVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong *puVar9;
  uint *******pppppppuVar10;
  uint *******pppppppuVar11;
  uint *******pppppppuVar12;
  uint *******pppppppuVar13;
  int iVar14;
  undefined8 uVar15;
  ulong *puVar16;
  uint *******pppppppuVar17;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  uint ******extraout_x8_01;
  undefined *extraout_x8_02;
  long *plVar18;
  ulong uVar19;
  int *piVar20;
  uint *******extraout_x8_03;
  uint *****pppppuVar21;
  undefined8 *extraout_x8_04;
  uint *****pppppuVar22;
  uint uVar23;
  undefined4 *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  uint ******ppppppuVar27;
  undefined *puVar28;
  uint ******ppppppuVar29;
  uint ******ppppppuVar30;
  uint ******ppppppuVar31;
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  undefined8 uStack_2c8;
  undefined **ppuStack_2c0;
  uint *******pppppppuStack_2b8;
  uint *******pppppppuStack_2b0;
  uint *******pppppppuStack_2a8;
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  uint *******pppppppuStack_288;
  ulong uStack_280;
  byte bStack_271;
  uint *******pppppppuStack_270;
  uint ******ppppppuStack_268;
  uint ******ppppppuStack_260;
  uint ******ppppppuStack_258;
  undefined1 *puStack_250;
  long lStack_248;
  undefined1 auStack_240 [32];
  uint ******ppppppuStack_220;
  uint ******ppppppuStack_218;
  uint ******ppppppuStack_210;
  uint ******ppppppuStack_208;
  long lStack_1c8;
  undefined **ppuStack_1c0;
  uint *******pppppppuStack_1b8;
  undefined **ppuStack_1b0;
  uint *******pppppppuStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  uint ******appppppuStack_178 [4];
  long lStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  ulong uStack_130;
  ulong auStack_128 [4];
  undefined8 uStack_108;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = &PTR___tlv_bootstrap_11340d8b8;
  (*(code *)PTR___tlv_bootstrap_11340d8b8)(*(undefined8 *)(param_1 + 0x20));
  puVar25 = *ppuVar5;
  *ppuVar5 = extraout_x8;
  ppuVar6 = &PTR___tlv_bootstrap_11340d8d0;
  (*(code *)PTR___tlv_bootstrap_11340d8d0)(*(undefined8 *)(param_1 + 0x40));
  puVar26 = *ppuVar6;
  *ppuVar6 = extraout_x8_00;
  ppuVar7 = &PTR___tlv_bootstrap_11340d8e8;
  (*(code *)PTR___tlv_bootstrap_11340d8e8)(*(undefined8 *)(param_1 + 0x48));
  ppppppuVar27 = (uint ******)*ppuVar7;
  *ppuVar7 = (undefined *)extraout_x8_01;
  ppuVar8 = &PTR___tlv_bootstrap_11340d900;
  (*(code *)PTR___tlv_bootstrap_11340d900)(param_1 + 0x38);
  puVar28 = *ppuVar8;
  *ppuVar8 = extraout_x8_02;
  uVar23 = **(uint **)(param_1 + 0x70);
  if (uVar23 < 9) {
    if (uVar23 == 3) {
      uVar23 = 5;
    }
    else {
      if (uVar23 != 4) {
        func_0x000107c60ebc();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10082bbf0);
        (*pcVar4)();
      }
      uVar23 = 6;
    }
    **(uint **)(param_1 + 0x70) = uVar23;
  }
  auStack_128[1] = 0;
  uStack_108 = 0;
  plVar18 = *(long **)(param_1 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar2) {
      *plVar18 = *plVar18 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar19 = *param_2;
  lStack_70 = param_1;
  if (uVar19 == 0) {
    if ((*(int *)(param_1 + 0xa8) == 3) || (*(int *)(param_1 + 0xac) == 4)) {
      puVar24 = *(undefined4 **)(param_1 + 0x70);
      *puVar24 = 8;
      uVar15 = *(undefined8 *)(puVar24 + 2);
      *(undefined8 *)(puVar24 + 2) = 0;
      uStack_130 = *(ulong *)(param_1 + 0xa0);
      if ((uStack_130 & 1) != 0) {
        piVar20 = (int *)(uStack_130 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar2) {
            *piVar20 = *piVar20 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10082bfa8(auStack_128 + 1,uVar15,&uStack_130,"propagate cancellation");
      if ((uStack_130 & 1) != 0) {
        FUN_10084dad0();
      }
    }
  }
  else {
    puVar24 = *(undefined4 **)(param_1 + 0x70);
    *puVar24 = 8;
    uVar15 = *(undefined8 *)(puVar24 + 2);
    *(undefined8 *)(puVar24 + 2) = 0;
    if ((uVar19 & 1) != 0) {
      piVar20 = (int *)(uVar19 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar2) {
          *piVar20 = *piVar20 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    auStack_128[0] = uVar19;
    FUN_10082bfa8(auStack_128 + 1,uVar15,auStack_128,"propagate cancellation");
    if ((auStack_128[0] & 1) != 0) {
      FUN_10084dad0();
    }
  }
  puVar16 = auStack_128 + 1;
  FUN_10082bc50(param_1);
  puVar9 = auStack_128 + 1;
  FUN_10061694c();
  *ppuVar8 = puVar28;
  *ppuVar7 = (undefined *)ppppppuVar27;
  *ppuVar6 = puVar26;
  *ppuVar5 = puVar25;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  if ((int)puVar16 != 0) {
    func_0x000104bd46a0();
    FUN_1004bdf74(auStack_128);
    FUN_10061694c(auStack_128 + 1);
    *ppuVar8 = puVar28;
    *ppuVar7 = (undefined *)ppppppuVar27;
    *ppuVar6 = puVar26;
    *ppuVar5 = puVar25;
  }
  func_0x000107c60bd8();
  pcStack_138 = FUN_10082bc50;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_150 = ppuVar6;
  ppuStack_148 = ppuVar5;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_100615468(appppppuStack_178,puVar9,puVar16);
  iVar14 = (int)puVar9;
  FUN_100615bc4(appppppuStack_178);
  pppppppuVar11 = appppppuStack_178;
  FUN_1006167fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  func_0x000107c60e78();
  FUN_1006167fc(appppppuStack_178);
  pppppppuVar10 = pppppppuVar11;
  func_0x000107c60bd8();
  puStack_1a0 = (undefined1 *)&ppuStack_190;
  pcStack_188 = FUN_10082bcd8;
  if (pppppppuVar10[0x16] != (uint ******)0x0) {
    *(undefined1 *)(pppppppuVar10[0x16] + 3) = 1;
    return;
  }
  ppuStack_190 = &puStack_140;
  func_0x000107c2c300();
  pcStack_198 = FUN_10082bcfc;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar23 = *(uint *)pppppppuVar10;
  pppppppuVar12 = pppppppuVar10;
  ppuStack_1c0 = ppuVar8;
  pppppppuStack_1b8 = (uint *******)ppuVar7;
  ppuStack_1b0 = ppuVar6;
  pppppppuStack_1a8 = pppppppuVar11;
  pppuVar3 = &ppuStack_190;
  if ((uVar23 >> 3 & 1) != 0) {
    pppppppuVar11 = pppppppuVar10;
    if (((uVar23 >> 10 & 1) == 0) &&
       (pppppppuVar11 = (uint *******)(ulong)*(uint *)((long)pppppppuVar10 + 0x1a4),
       *(uint *)((long)pppppppuVar10 + 0x1a4) != 200)) {
      func_0x000104adf590();
      ppppppuStack_220 = (uint ******)0x10f233636;
      ppppppuStack_218 = (uint ******)0x23;
      uVar19 = (ulong)*(uint *)((long)pppppppuVar10 + 0x1a4);
      FUN_1004d52e8(uVar19,auStack_240);
      lStack_248 = uVar19 - (long)auStack_240;
      pppppppuVar10 = (uint *******)&pppppppuStack_288;
      puStack_250 = auStack_240;
      FUN_10047c83c(&pppppppuStack_288,&ppppppuStack_220,&puStack_250);
      pppppppuVar13 = pppppppuStack_288;
      if (-1 < (char)bStack_271) {
        uStack_280 = (ulong)bStack_271;
        pppppppuVar13 = pppppppuVar10;
      }
      pppppppuVar12 = extraout_x8_03;
      pppppppuVar17 = pppppppuVar11;
      func_0x00010047ad8c(extraout_x8_03,pppppppuVar11,pppppppuVar13,uStack_280);
      iVar14 = (int)pppppppuVar17;
      if ((char)bStack_271 < '\0') {
        pppppppuVar12 = pppppppuStack_288;
        func_0x000107c60e14();
      }
      goto LAB_10082bddc;
    }
    uVar23 = uVar23 & 0xfffffff7;
    puStack_1a0 = (undefined1 *)&ppuStack_190;
    *(uint *)pppppppuVar10 = uVar23;
    pppppppuVar12 = pppppppuVar11;
    pppuVar3 = (undefined1 ***)puStack_1a0;
  }
  puStack_1a0 = (undefined1 *)pppuVar3;
  pppppppuVar11 = (uint *******)ppuVar7;
  if ((uVar23 >> 0xf & 1) != 0) {
    pppppppuVar11 = pppppppuVar10 + 0x26;
    ppppppuStack_268 = pppppppuVar10[0x27];
    pppppppuStack_270 = (uint *******)*pppppppuVar11;
    ppppppuStack_258 = pppppppuVar10[0x29];
    ppppppuStack_260 = pppppppuVar10[0x28];
    pppppppuVar10[0x27] = (uint ******)0x0;
    *pppppppuVar11 = (uint ******)0x0;
    pppppppuVar10[0x29] = (uint ******)0x0;
    pppppppuVar10[0x28] = (uint ******)0x0;
    FUN_10084c888(&ppppppuStack_220,&pppppppuStack_270);
    ppppppuVar31 = pppppppuVar10[0x27];
    ppppppuVar30 = *pppppppuVar11;
    ppppppuVar29 = pppppppuVar10[0x29];
    ppppppuVar27 = pppppppuVar10[0x28];
    pppppppuVar10[0x27] = ppppppuStack_218;
    *pppppppuVar11 = ppppppuStack_220;
    pppppppuVar10[0x29] = ppppppuStack_208;
    pppppppuVar10[0x28] = ppppppuStack_210;
    ppppppuStack_220 = ppppppuVar30;
    ppppppuStack_218 = ppppppuVar31;
    ppppppuStack_210 = ppppppuVar27;
    ppppppuStack_208 = ppppppuVar29;
    if ((uint ******)0x1 < ppppppuVar30) {
      do {
        pppppuVar21 = *ppppppuVar30;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar30,0x10);
        if (bVar2) {
          *ppppppuVar30 = (uint *****)((long)pppppuVar21 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((uint *****)((long)pppppuVar21 + -1) == (uint *****)0x0) {
        (*(code *)ppppppuVar30[1])();
      }
    }
    pppppppuVar12 = pppppppuStack_270;
    if ((uint *******)0x1 < pppppppuStack_270) {
      do {
        ppppppuVar27 = *pppppppuStack_270;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppppuStack_270,0x10);
        if (bVar2) {
          *pppppppuStack_270 = (uint ******)((long)ppppppuVar27 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((uint ******)((long)ppppppuVar27 + -1) == (uint ******)0x0) {
        (*(code *)pppppppuStack_270[1])();
      }
    }
    uVar23 = *(uint *)pppppppuVar10;
  }
  *(uint *)pppppppuVar10 = uVar23 & 0xffffffdf;
  *extraout_x8_03 = (uint ******)0x0;
LAB_10082bddc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
    func_0x000107c60e78();
    if ((iVar14 != 0) && (func_0x000104bd46a0(), (char)bStack_271 < '\0')) {
      func_0x000107c60e14(pppppppuStack_288);
    }
    pppppppuVar13 = pppppppuVar12;
    func_0x000107c60bd8();
    pcStack_298 = FUN_10082bed4;
    ppppppuVar27 = pppppppuVar13[2];
    pppppuVar21 = *ppppppuVar27;
    ppuStack_2c0 = ppuVar8;
    pppppppuStack_2b8 = pppppppuVar11;
    pppppppuStack_2b0 = pppppppuVar10;
    pppppppuStack_2a8 = pppppppuVar12;
    ppuStack_2a0 = &puStack_1a0;
    if (pppppuVar21 == (uint *****)0x0) {
      pppppuVar22 = (uint *****)0x0;
      uStack_2c8 = 0;
    }
    else {
      FUN_10082bcfc(&uStack_2c8);
      pppppuVar22 = *ppppppuVar27;
    }
    ppppppuVar27 = pppppppuVar13[1];
    *ppppppuVar27 = pppppuVar22;
    *(undefined1 *)(ppppppuVar27 + 1) = 1;
    if (*(char *)((long)ppppppuVar27 + 9) != '\0') {
      *(undefined1 *)((long)ppppppuVar27 + 9) = 0;
      func_0x00010047a478();
      (*(code *)(**pppppuVar21)[3])();
    }
    uStack_2d0 = 1;
    uStack_2d8 = 0x36;
    *extraout_x8_04 = uStack_2c8;
    *(undefined4 *)(extraout_x8_04 + 1) = 1;
    FUN_10047a9b8(&uStack_2d8);
    return;
  }
  return;
}



/* Entry: 10082bc50; end: 10082bcd7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10082bc50(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  uint *******pppppppuVar3;
  uint *******pppppppuVar4;
  ulong uVar5;
  uint *******pppppppuVar6;
  int iVar7;
  uint uVar8;
  uint *******extraout_x8;
  uint *****pppppuVar9;
  uint ******ppppppuVar10;
  undefined8 *extraout_x8_00;
  uint *****pppppuVar11;
  uint ******ppppppuVar12;
  uint ******ppppppuVar13;
  uint ******ppppppuVar14;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_198;
  uint *******pppppppuStack_158;
  ulong uStack_150;
  byte bStack_141;
  uint *******pppppppuStack_140;
  uint ******ppppppuStack_138;
  uint ******ppppppuStack_130;
  uint ******ppppppuStack_128;
  undefined1 *puStack_120;
  long lStack_118;
  undefined1 auStack_110 [32];
  uint ******ppppppuStack_f0;
  uint ******ppppppuStack_e8;
  uint ******ppppppuStack_e0;
  uint ******ppppppuStack_d8;
  long lStack_98;
  uint ******appppppuStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_100615468(appppppuStack_48,param_1,param_2);
  iVar7 = (int)param_1;
  FUN_100615bc4(appppppuStack_48);
  pppppppuVar3 = appppppuStack_48;
  FUN_1006167fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  FUN_1006167fc(appppppuStack_48);
  func_0x000107c60bd8();
  if (pppppppuVar3[0x16] != (uint ******)0x0) {
    *(undefined1 *)(pppppppuVar3[0x16] + 3) = 1;
    return;
  }
  func_0x000107c2c300();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(uint *)pppppppuVar3;
  pppppppuVar6 = pppppppuVar3;
  if ((uVar8 >> 3 & 1) != 0) {
    pppppppuVar4 = pppppppuVar3;
    if (((uVar8 >> 10 & 1) == 0) &&
       (pppppppuVar4 = (uint *******)(ulong)*(uint *)((long)pppppppuVar3 + 0x1a4),
       *(uint *)((long)pppppppuVar3 + 0x1a4) != 200)) {
      func_0x000104adf590();
      ppppppuStack_f0 = (uint ******)0x10f233636;
      ppppppuStack_e8 = (uint ******)0x23;
      uVar5 = (ulong)*(uint *)((long)pppppppuVar3 + 0x1a4);
      FUN_1004d52e8(uVar5,auStack_110);
      lStack_118 = uVar5 - (long)auStack_110;
      puStack_120 = auStack_110;
      FUN_10047c83c(&pppppppuStack_158,&ppppppuStack_f0,&puStack_120);
      pppppppuVar3 = pppppppuStack_158;
      if (-1 < (char)bStack_141) {
        uStack_150 = (ulong)bStack_141;
        pppppppuVar3 = (uint *******)&pppppppuStack_158;
      }
      pppppppuVar6 = extraout_x8;
      func_0x00010047ad8c(extraout_x8,pppppppuVar4,pppppppuVar3,uStack_150);
      iVar7 = (int)pppppppuVar4;
      if ((char)bStack_141 < '\0') {
        pppppppuVar6 = pppppppuStack_158;
        func_0x000107c60e14();
      }
      goto LAB_10082bddc;
    }
    uVar8 = uVar8 & 0xfffffff7;
    *(uint *)pppppppuVar3 = uVar8;
    pppppppuVar6 = pppppppuVar4;
  }
  if ((uVar8 >> 0xf & 1) != 0) {
    pppppppuVar6 = pppppppuVar3 + 0x26;
    ppppppuStack_138 = pppppppuVar3[0x27];
    pppppppuStack_140 = (uint *******)*pppppppuVar6;
    ppppppuStack_128 = pppppppuVar3[0x29];
    ppppppuStack_130 = pppppppuVar3[0x28];
    pppppppuVar3[0x27] = (uint ******)0x0;
    *pppppppuVar6 = (uint ******)0x0;
    pppppppuVar3[0x29] = (uint ******)0x0;
    pppppppuVar3[0x28] = (uint ******)0x0;
    FUN_10084c888(&ppppppuStack_f0,&pppppppuStack_140);
    ppppppuVar14 = pppppppuVar3[0x27];
    ppppppuVar13 = *pppppppuVar6;
    ppppppuVar12 = pppppppuVar3[0x29];
    ppppppuVar10 = pppppppuVar3[0x28];
    pppppppuVar3[0x27] = ppppppuStack_e8;
    *pppppppuVar6 = ppppppuStack_f0;
    pppppppuVar3[0x29] = ppppppuStack_d8;
    pppppppuVar3[0x28] = ppppppuStack_e0;
    ppppppuStack_f0 = ppppppuVar13;
    ppppppuStack_e8 = ppppppuVar14;
    ppppppuStack_e0 = ppppppuVar10;
    ppppppuStack_d8 = ppppppuVar12;
    if ((uint ******)0x1 < ppppppuVar13) {
      do {
        pppppuVar9 = *ppppppuVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
        if (bVar2) {
          *ppppppuVar13 = (uint *****)((long)pppppuVar9 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((uint *****)((long)pppppuVar9 + -1) == (uint *****)0x0) {
        (*(code *)ppppppuVar13[1])();
      }
    }
    pppppppuVar6 = pppppppuStack_140;
    if ((uint *******)0x1 < pppppppuStack_140) {
      do {
        ppppppuVar10 = *pppppppuStack_140;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppppuStack_140,0x10);
        if (bVar2) {
          *pppppppuStack_140 = (uint ******)((long)ppppppuVar10 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((uint ******)((long)ppppppuVar10 + -1) == (uint ******)0x0) {
        (*(code *)pppppppuStack_140[1])();
      }
    }
    uVar8 = *(uint *)pppppppuVar3;
  }
  *(uint *)pppppppuVar3 = uVar8 & 0xffffffdf;
  *extraout_x8 = (uint ******)0x0;
LAB_10082bddc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    func_0x000107c60e78();
    if ((iVar7 != 0) && (func_0x000104bd46a0(), (char)bStack_141 < '\0')) {
      func_0x000107c60e14(pppppppuStack_158);
    }
    func_0x000107c60bd8();
    ppppppuVar10 = pppppppuVar6[2];
    pppppuVar9 = *ppppppuVar10;
    if (pppppuVar9 == (uint *****)0x0) {
      pppppuVar11 = (uint *****)0x0;
      uStack_198 = 0;
    }
    else {
      FUN_10082bcfc(&uStack_198);
      pppppuVar11 = *ppppppuVar10;
    }
    ppppppuVar10 = pppppppuVar6[1];
    *ppppppuVar10 = pppppuVar11;
    *(undefined1 *)(ppppppuVar10 + 1) = 1;
    if (*(char *)((long)ppppppuVar10 + 9) != '\0') {
      *(undefined1 *)((long)ppppppuVar10 + 9) = 0;
      func_0x00010047a478();
      (*(code *)(**pppppuVar9)[3])();
    }
    uStack_1a0 = 1;
    uStack_1a8 = 0x36;
    *extraout_x8_00 = uStack_198;
    *(undefined4 *)(extraout_x8_00 + 1) = 1;
    FUN_10047a9b8(&uStack_1a8);
    return;
  }
  return;
}



/* Entry: 10082bcd8; end: 10082bcfb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10082bcd8(uint *******param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  uint *******pppppppuVar3;
  uint *******pppppppuVar4;
  ulong uVar5;
  uint *******pppppppuVar6;
  uint uVar7;
  uint *******extraout_x8;
  uint *****pppppuVar8;
  uint ******ppppppuVar9;
  undefined8 *extraout_x8_00;
  uint *****pppppuVar10;
  uint ******ppppppuVar11;
  uint ******ppppppuVar12;
  uint ******ppppppuVar13;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  uint *******pppppppuStack_108;
  ulong uStack_100;
  byte bStack_f1;
  uint *******pppppppuStack_f0;
  uint ******ppppppuStack_e8;
  uint ******ppppppuStack_e0;
  uint ******ppppppuStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [32];
  uint ******ppppppuStack_a0;
  uint ******ppppppuStack_98;
  uint ******ppppppuStack_90;
  uint ******ppppppuStack_88;
  long lStack_48;
  
  if (param_1[0x16] != (uint ******)0x0) {
    *(undefined1 *)(param_1[0x16] + 3) = 1;
    return;
  }
  func_0x000107c2c300();
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(uint *)param_1;
  pppppppuVar6 = param_1;
  if ((uVar7 >> 3 & 1) != 0) {
    pppppppuVar4 = param_1;
    if (((uVar7 >> 10 & 1) == 0) &&
       (pppppppuVar4 = (uint *******)(ulong)*(uint *)((long)param_1 + 0x1a4),
       *(uint *)((long)param_1 + 0x1a4) != 200)) {
      func_0x000104adf590();
      ppppppuStack_a0 = (uint ******)0x10f233636;
      ppppppuStack_98 = (uint ******)0x23;
      uVar5 = (ulong)*(uint *)((long)param_1 + 0x1a4);
      FUN_1004d52e8(uVar5,auStack_c0);
      lStack_c8 = uVar5 - (long)auStack_c0;
      puStack_d0 = auStack_c0;
      FUN_10047c83c(&pppppppuStack_108,&ppppppuStack_a0,&puStack_d0);
      pppppppuVar3 = pppppppuStack_108;
      if (-1 < (char)bStack_f1) {
        uStack_100 = (ulong)bStack_f1;
        pppppppuVar3 = (uint *******)&pppppppuStack_108;
      }
      pppppppuVar6 = extraout_x8;
      func_0x00010047ad8c(extraout_x8,pppppppuVar4,pppppppuVar3,uStack_100);
      param_2 = (int)pppppppuVar4;
      if ((char)bStack_f1 < '\0') {
        pppppppuVar6 = pppppppuStack_108;
        func_0x000107c60e14();
      }
      goto LAB_10082bddc;
    }
    uVar7 = uVar7 & 0xfffffff7;
    *(uint *)param_1 = uVar7;
    pppppppuVar6 = pppppppuVar4;
  }
  if ((uVar7 >> 0xf & 1) != 0) {
    pppppppuVar6 = param_1 + 0x26;
    ppppppuStack_e8 = param_1[0x27];
    pppppppuStack_f0 = (uint *******)*pppppppuVar6;
    ppppppuStack_d8 = param_1[0x29];
    ppppppuStack_e0 = param_1[0x28];
    param_1[0x27] = (uint ******)0x0;
    *pppppppuVar6 = (uint ******)0x0;
    param_1[0x29] = (uint ******)0x0;
    param_1[0x28] = (uint ******)0x0;
    FUN_10084c888(&ppppppuStack_a0,&pppppppuStack_f0);
    ppppppuVar13 = param_1[0x27];
    ppppppuVar12 = *pppppppuVar6;
    ppppppuVar11 = param_1[0x29];
    ppppppuVar9 = param_1[0x28];
    param_1[0x27] = ppppppuStack_98;
    *pppppppuVar6 = ppppppuStack_a0;
    param_1[0x29] = ppppppuStack_88;
    param_1[0x28] = ppppppuStack_90;
    ppppppuStack_a0 = ppppppuVar12;
    ppppppuStack_98 = ppppppuVar13;
    ppppppuStack_90 = ppppppuVar9;
    ppppppuStack_88 = ppppppuVar11;
    if ((uint ******)0x1 < ppppppuVar12) {
      do {
        pppppuVar8 = *ppppppuVar12;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar12,0x10);
        if (bVar2) {
          *ppppppuVar12 = (uint *****)((long)pppppuVar8 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((uint *****)((long)pppppuVar8 + -1) == (uint *****)0x0) {
        (*(code *)ppppppuVar12[1])();
      }
    }
    pppppppuVar6 = pppppppuStack_f0;
    if ((uint *******)0x1 < pppppppuStack_f0) {
      do {
        ppppppuVar9 = *pppppppuStack_f0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppppuStack_f0,0x10);
        if (bVar2) {
          *pppppppuStack_f0 = (uint ******)((long)ppppppuVar9 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((uint ******)((long)ppppppuVar9 + -1) == (uint ******)0x0) {
        (*(code *)pppppppuStack_f0[1])();
      }
    }
    uVar7 = *(uint *)param_1;
  }
  *(uint *)param_1 = uVar7 & 0xffffffdf;
  *extraout_x8 = (uint ******)0x0;
LAB_10082bddc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    if ((param_2 != 0) && (func_0x000104bd46a0(), (char)bStack_f1 < '\0')) {
      func_0x000107c60e14(pppppppuStack_108);
    }
    func_0x000107c60bd8();
    ppppppuVar9 = pppppppuVar6[2];
    pppppuVar8 = *ppppppuVar9;
    if (pppppuVar8 == (uint *****)0x0) {
      pppppuVar10 = (uint *****)0x0;
      uStack_148 = 0;
    }
    else {
      FUN_10082bcfc(&uStack_148);
      pppppuVar10 = *ppppppuVar9;
    }
    ppppppuVar9 = pppppppuVar6[1];
    *ppppppuVar9 = pppppuVar10;
    *(undefined1 *)(ppppppuVar9 + 1) = 1;
    if (*(char *)((long)ppppppuVar9 + 9) != '\0') {
      *(undefined1 *)((long)ppppppuVar9 + 9) = 0;
      func_0x00010047a478();
      (*(code *)(**pppppuVar8)[3])();
    }
    uStack_150 = 1;
    uStack_158 = 0x36;
    *extraout_x8_00 = uStack_148;
    *(undefined4 *)(extraout_x8_00 + 1) = 1;
    FUN_10047a9b8(&uStack_158);
    return;
  }
  return;
}



/* Entry: 10082bcfc; end: 10082bed3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10082bcfc(uint *******param_1,uint *******param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  uint *******pppppppuVar3;
  uint *******pppppppuVar4;
  ulong uVar5;
  uint uVar6;
  uint *****pppppuVar7;
  uint ******ppppppuVar8;
  undefined8 *extraout_x8;
  uint *****pppppuVar9;
  uint ******ppppppuVar10;
  uint ******ppppppuVar11;
  uint ******ppppppuVar12;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  uint *******pppppppuStack_f8;
  ulong uStack_f0;
  byte bStack_e1;
  uint *******pppppppuStack_e0;
  uint ******ppppppuStack_d8;
  uint ******ppppppuStack_d0;
  uint ******ppppppuStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [32];
  uint ******ppppppuStack_90;
  uint ******ppppppuStack_88;
  uint ******ppppppuStack_80;
  uint ******ppppppuStack_78;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(uint *)param_2;
  pppppppuVar4 = param_2;
  if ((uVar6 >> 3 & 1) != 0) {
    if (((uVar6 >> 10 & 1) == 0) &&
       (pppppppuVar4 = (uint *******)(ulong)*(uint *)((long)param_2 + 0x1a4),
       *(uint *)((long)param_2 + 0x1a4) != 200)) {
      func_0x000104adf590();
      ppppppuStack_90 = (uint ******)0x10f233636;
      ppppppuStack_88 = (uint ******)0x23;
      uVar5 = (ulong)*(uint *)((long)param_2 + 0x1a4);
      FUN_1004d52e8(uVar5,auStack_b0);
      lStack_b8 = uVar5 - (long)auStack_b0;
      puStack_c0 = auStack_b0;
      FUN_10047c83c(&pppppppuStack_f8,&ppppppuStack_90,&puStack_c0);
      pppppppuVar3 = pppppppuStack_f8;
      if (-1 < (char)bStack_e1) {
        uStack_f0 = (ulong)bStack_e1;
        pppppppuVar3 = (uint *******)&pppppppuStack_f8;
      }
      func_0x00010047ad8c(param_1,pppppppuVar4,pppppppuVar3,uStack_f0);
      param_3 = (int)pppppppuVar4;
      if ((char)bStack_e1 < '\0') {
        param_1 = pppppppuStack_f8;
        func_0x000107c60e14();
      }
      goto LAB_10082bddc;
    }
    uVar6 = uVar6 & 0xfffffff7;
    *(uint *)param_2 = uVar6;
  }
  if ((uVar6 >> 0xf & 1) != 0) {
    pppppppuVar4 = param_2 + 0x26;
    ppppppuStack_d8 = param_2[0x27];
    pppppppuStack_e0 = (uint *******)*pppppppuVar4;
    ppppppuStack_c8 = param_2[0x29];
    ppppppuStack_d0 = param_2[0x28];
    param_2[0x27] = (uint ******)0x0;
    *pppppppuVar4 = (uint ******)0x0;
    param_2[0x29] = (uint ******)0x0;
    param_2[0x28] = (uint ******)0x0;
    FUN_10084c888(&ppppppuStack_90,&pppppppuStack_e0);
    ppppppuVar12 = param_2[0x27];
    ppppppuVar11 = *pppppppuVar4;
    ppppppuVar10 = param_2[0x29];
    ppppppuVar8 = param_2[0x28];
    param_2[0x27] = ppppppuStack_88;
    *pppppppuVar4 = ppppppuStack_90;
    param_2[0x29] = ppppppuStack_78;
    param_2[0x28] = ppppppuStack_80;
    ppppppuStack_90 = ppppppuVar11;
    ppppppuStack_88 = ppppppuVar12;
    ppppppuStack_80 = ppppppuVar8;
    ppppppuStack_78 = ppppppuVar10;
    if ((uint ******)0x1 < ppppppuVar11) {
      do {
        pppppuVar7 = *ppppppuVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar11,0x10);
        if (bVar2) {
          *ppppppuVar11 = (uint *****)((long)pppppuVar7 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((uint *****)((long)pppppuVar7 + -1) == (uint *****)0x0) {
        (*(code *)ppppppuVar11[1])();
      }
    }
    pppppppuVar4 = pppppppuStack_e0;
    if ((uint *******)0x1 < pppppppuStack_e0) {
      do {
        ppppppuVar8 = *pppppppuStack_e0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppppuStack_e0,0x10);
        if (bVar2) {
          *pppppppuStack_e0 = (uint ******)((long)ppppppuVar8 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((uint ******)((long)ppppppuVar8 + -1) == (uint ******)0x0) {
        (*(code *)pppppppuStack_e0[1])();
      }
    }
    uVar6 = *(uint *)param_2;
  }
  *(uint *)param_2 = uVar6 & 0xffffffdf;
  *param_1 = (uint ******)0x0;
  param_1 = pppppppuVar4;
LAB_10082bddc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    func_0x000107c60e78();
    if ((param_3 != 0) && (func_0x000104bd46a0(), (char)bStack_e1 < '\0')) {
      func_0x000107c60e14(pppppppuStack_f8);
    }
    func_0x000107c60bd8();
    ppppppuVar8 = param_1[2];
    pppppuVar7 = *ppppppuVar8;
    if (pppppuVar7 == (uint *****)0x0) {
      pppppuVar9 = (uint *****)0x0;
      uStack_138 = 0;
    }
    else {
      FUN_10082bcfc(&uStack_138);
      pppppuVar9 = *ppppppuVar8;
    }
    ppppppuVar8 = param_1[1];
    *ppppppuVar8 = pppppuVar9;
    *(undefined1 *)(ppppppuVar8 + 1) = 1;
    if (*(char *)((long)ppppppuVar8 + 9) != '\0') {
      *(undefined1 *)((long)ppppppuVar8 + 9) = 0;
      func_0x00010047a478();
      (*(code *)(**pppppuVar7)[3])();
    }
    uStack_140 = 1;
    uStack_148 = 0x36;
    *extraout_x8 = uStack_138;
    *(undefined4 *)(extraout_x8 + 1) = 1;
    FUN_10047a9b8(&uStack_148);
    return;
  }
  return;
}



/* Entry: 10082bed4; end: 10082bf93;  */

void FUN_10082bed4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  plVar3 = *(long **)(param_2 + 0x10);
  puVar1 = (undefined8 *)*plVar3;
  if (puVar1 == (undefined8 *)0x0) {
    lVar2 = 0;
    uStack_38 = 0;
  }
  else {
    FUN_10082bcfc(&uStack_38);
    lVar2 = *plVar3;
  }
  plVar3 = *(long **)(param_2 + 8);
  *plVar3 = lVar2;
  *(undefined1 *)(plVar3 + 1) = 1;
  if (*(char *)((long)plVar3 + 9) != '\0') {
    *(undefined1 *)((long)plVar3 + 9) = 0;
    func_0x00010047a478();
    (**(code **)(*(long *)*puVar1 + 0x18))();
  }
  uStack_40 = 1;
  uStack_48 = 0x36;
  *param_1 = uStack_38;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_10047a9b8(&uStack_48);
  return;
}



/* Entry: 10082bf94; end: 10082bfa7;  */

void FUN_10082bf94(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_2 = *param_3;
  *param_3 = 0x36;
  return;
}



/* Entry: 10082bfa8; end: 10082c023;  */

void FUN_10082bfa8(long param_1,undefined8 param_2,ulong *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = *param_3;
  if ((uStack_38 & 1) != 0) {
    piVar3 = (int *)(uStack_38 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_30 = param_4;
  uStack_28 = param_2;
  FUN_1004dfd88(param_1 + 0x18,&uStack_28,&uStack_38,&uStack_30);
  if ((uStack_38 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 10082c024; end: 10082c0ef;  */

void FUN_10082c024(long param_1)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  ulong auStack_e0 [3];
  undefined8 uStack_c8;
  long lStack_30;
  long lStack_28;
  
  puVar3 = auStack_e0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_30 = *(long *)(param_1 + 0x28);
  auStack_e0[0] = 0;
  uStack_c8 = 0;
  plVar4 = *(long **)(lStack_30 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  FUN_10082bc50(*(undefined8 *)(param_1 + 0x28));
  FUN_10061694c(auStack_e0);
  plVar4 = *(long **)(param_1 + 0x20);
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    FUN_100836ca4();
  }
  func_0x000107c60e14();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8(param_1);
  uVar7 = *puVar3;
  if ((uVar7 & 1) != 0) {
    piVar6 = (int *)(uVar7 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10082c164();
  if ((uVar7 & 1) != 0) {
    FUN_10084dad0(uVar7);
  }
  return;
}



/* Entry: 10082c0f0; end: 10082c163;  */

void FUN_10082c0f0(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_28;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar4;
  FUN_10082c164(param_1,&uStack_28);
  if ((uVar4 & 1) != 0) {
    FUN_10084dad0(uVar4);
  }
  return;
}



/* Entry: 10082c164; end: 10082c377;  */

void FUN_10082c164(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  ulong uStack_50;
  undefined1 uStack_41;
  ulong uStack_40;
  ulong uStack_38;
  
  lVar6 = *param_1;
  FUN_100612044(lVar6 + 0x38,"recv_initial_metadata_ready");
  if (*param_2 == 0) {
    FUN_10082c378(lVar6,lVar6 + 0x5b8);
    FUN_10082c688(param_1);
    if (((*(byte *)(lVar6 + 0x5b9) >> 3 & 1) != 0) && (*(char *)(lVar6 + 0x28) == '\0')) {
      *(undefined8 *)(*param_1 + 0x20) = *(undefined8 *)(lVar6 + 0x738);
    }
  }
  else {
    plVar1 = param_1 + 0x18;
    do {
      while (*plVar1 != 0) {
        ClearExclusiveLocal();
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    param_1[0x18] = 0;
    if (param_1[0x17] == 0) {
      uStack_38 = *param_2;
      if ((uStack_38 & 1) != 0) {
        piVar5 = (int *)(uStack_38 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar3) {
            *piVar5 = *piVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_100831aec(param_1 + 0x17,&uStack_38);
      if ((uStack_38 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    uVar7 = *param_2;
    if ((uVar7 & 1) != 0) {
      piVar5 = (int *)(uVar7 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_40 = uVar7;
    func_0x000104ad88e8(lVar6,&uStack_40);
    if ((uVar7 & 1) != 0) {
      FUN_10084dad0(uVar7);
    }
  }
  plVar1 = (long *)(lVar6 + 0xdc8);
  while (lVar6 = *plVar1, lVar6 == 0) {
    while (*plVar1 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_10082c304;
    }
    ClearExclusiveLocal();
  }
  if (lVar6 == 1) {
    func_0x000107c2c404();
  }
  else {
    puVar4 = (undefined8 *)0x30;
    FUN_100460200();
    *puVar4 = &UNK_104ad9028;
    puVar4[1] = lVar6;
    puVar4[3] = FUN_1004be1e0;
    puVar4[4] = puVar4;
    puVar4[5] = 0;
    uStack_50 = *param_2;
    if ((uStack_50 & 1) != 0) {
      piVar5 = (int *)(uStack_50 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10082b8d4(&uStack_41,puVar4 + 2,&uStack_50);
    if ((uStack_50 & 1) != 0) {
      FUN_10084dad0();
    }
LAB_10082c304:
    plVar1 = param_1 + 0x16;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 != 0) {
      return;
    }
  }
  FUN_100831f80(param_1);
  return;
}



/* Entry: 10082c378; end: 10082c41b;  */

void FUN_10082c378(long param_1,uint *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 uStack_38;
  undefined1 uStack_31;
  
  uVar3 = *param_2;
  if ((uVar3 >> 7 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = uVar3 & 0xffffff7f;
    *param_2 = uVar3;
    uVar2 = (ulong)param_2[0x65] | 0x100000000;
  }
  uVar4 = 0;
  uVar1 = 0;
  if ((uVar2 & 0x100000000) != 0) {
    uVar1 = (undefined4)uVar2;
  }
  *(undefined4 *)(param_1 + 0xa30) = uVar1;
  if ((uVar3 >> 9 & 1) != 0) {
    uVar4 = (undefined1)param_2[99];
    *param_2 = uVar3 & 0xfffffdff;
  }
  uStack_38 = 0;
  FUN_1004b7fcc(&uStack_31,&uStack_38,1);
  if ((uVar3 & 0x200) != 0) {
    uStack_31 = uVar4;
  }
  *(undefined1 *)(param_1 + 0xa34) = uStack_31;
  FUN_10082c41c(param_1,param_2,0);
  return;
}



/* Entry: 10082c41c; end: 10082c67f;  */

long ** FUN_10082c41c(long param_1,long **param_2,uint param_3)

{
  uint uVar1;
  long **pplVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *aplStack_e8 [13];
  long lStack_80;
  long lStack_78;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = param_2;
  FUN_1006195d4();
  if (((pplVar2 != (long **)0x0) && ((*(char *)(param_1 + 0x28) != '\0' || ((param_3 & 1) == 0))))
     && ((param_3 == 0 || (*(long *)(param_1 + 0x9d0) != 0)))) {
    plVar7 = *(long **)(param_1 + (ulong)param_3 * 8 + 0x9c8);
    lVar8 = *plVar7;
    pplVar2 = param_2;
    FUN_1006195d4();
    uVar9 = plVar7[1];
    if (uVar9 < (ulong)((long)pplVar2 + lVar8)) {
      pplVar2 = param_2;
      FUN_1006195d4();
      uVar9 = (long)pplVar2 + uVar9;
      pplVar2 = (long **)plVar7[2];
      if (uVar9 <= (ulong)(plVar7[1] * 3) >> 1) {
        uVar9 = (ulong)(plVar7[1] * 3) >> 1;
      }
      plVar7[1] = uVar9;
      FUN_1004689e4(pplVar2,uVar9 * 0x60);
      plVar7[2] = (long)pplVar2;
    }
    uVar1 = *(uint *)param_2;
    aplStack_e8[0] = plVar7;
    if ((uVar1 >> 0xc & 1) != 0) {
      pplVar2 = aplStack_e8;
      func_0x000104ad9248(pplVar2,"grpc-previous-rpc-attempts",0x1a,*(uint *)(param_2 + 0x2f));
      uVar1 = *(uint *)param_2;
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      pplVar2 = aplStack_e8;
      func_0x000104ad9248(pplVar2,"grpc-retry-pushback-ms",0x16,param_2[0x2e]);
      uVar1 = *(uint *)param_2;
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      plVar11 = param_2[0x2b];
      plVar10 = param_2[0x2a];
      plVar5 = param_2[0x2d];
      plVar4 = param_2[0x2c];
      lVar8 = *plVar7;
      *plVar7 = lVar8 + 1;
      puVar3 = (undefined8 *)(plVar7[2] + lVar8 * 0x60);
      *puVar3 = 1;
      puVar3[1] = 10;
      puVar3[2] = &DAT_10f740723;
      puVar3[5] = plVar11;
      puVar3[4] = plVar10;
      puVar3[7] = plVar5;
      puVar3[6] = plVar4;
      uVar1 = *(uint *)param_2;
    }
    if ((uVar1 >> 0x10 & 1) != 0) {
      plVar11 = param_2[0x23];
      plVar10 = param_2[0x22];
      plVar5 = param_2[0x25];
      plVar4 = param_2[0x24];
      lVar8 = *plVar7;
      *plVar7 = lVar8 + 1;
      puVar3 = (undefined8 *)(plVar7[2] + lVar8 * 0x60);
      *puVar3 = 1;
      puVar3[1] = 4;
      puVar3[2] = &DAT_10f2df4ca;
      puVar3[5] = plVar11;
      puVar3[4] = plVar10;
      puVar3[7] = plVar5;
      puVar3[6] = plVar4;
      uVar1 = *(uint *)param_2;
    }
    if ((uVar1 >> 0x17 & 1) != 0) {
      plVar11 = param_2[9];
      plVar10 = param_2[8];
      plVar5 = param_2[0xb];
      plVar4 = param_2[10];
      lVar8 = *plVar7;
      *plVar7 = lVar8 + 1;
      puVar3 = (undefined8 *)(plVar7[2] + lVar8 * 0x60);
      *puVar3 = 1;
      puVar3[1] = 8;
      puVar3[2] = "lb-token";
      puVar3[5] = plVar11;
      puVar3[4] = plVar10;
      puVar3[7] = plVar5;
      puVar3[6] = plVar4;
    }
    plVar4 = param_2[0x3f];
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      lVar8 = 0;
      do {
        lStack_58 = plVar4[lVar8 * 8 + 3];
        lStack_60 = plVar4[lVar8 * 8 + 2];
        lStack_48 = plVar4[lVar8 * 8 + 5];
        lStack_50 = plVar4[lVar8 * 8 + 4];
        lStack_78 = plVar4[lVar8 * 8 + 7];
        lStack_80 = plVar4[lVar8 * 8 + 6];
        lVar13 = plVar4[lVar8 * 8 + 9];
        lVar12 = plVar4[lVar8 * 8 + 8];
        lVar6 = *plVar7;
        *plVar7 = lVar6 + 1;
        plVar5 = (long *)(plVar7[2] + lVar6 * 0x60);
        plVar5[1] = lStack_58;
        *plVar5 = lStack_60;
        plVar5[3] = lStack_48;
        plVar5[2] = lStack_50;
        plVar5[5] = lStack_78;
        plVar5[4] = lStack_80;
        plVar5[7] = lVar13;
        plVar5[6] = lVar12;
        lVar8 = lVar8 + 1;
        do {
          if (lVar8 != plVar4[1]) goto LAB_10082c5c0;
          lVar8 = 0;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
        lVar8 = 0;
LAB_10082c5c0:
      } while ((plVar4 != (long *)0x0) || (lVar8 != 0));
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    func_0x000107c60e78();
    uVar1 = (uint)pplVar2;
    func_0x000107c60bd8();
    return (long **)(ulong)(uVar1 & 7);
  }
  return pplVar2;
}



/* Entry: 10082c680; end: 10082c687;  */

uint FUN_10082c680(uint param_1)

{
  return param_1 & 7;
}



/* Entry: 10082c688; end: 10082c6eb;  */

void FUN_10082c688(long *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 uStack_21;
  
  lVar3 = *param_1;
  uStack_21 = (undefined1)*(undefined4 *)(*(long *)(lVar3 + 0xb0) + 0x14);
  uVar1 = *(undefined4 *)(lVar3 + 0xa30);
  FUN_10082c680();
  puVar2 = &uStack_21;
  FUN_100561a80(puVar2,uVar1);
  if (((ulong)puVar2 & 1) == 0) {
    func_0x000104ad8c6c(lVar3,uVar1);
  }
  FUN_100561a80(lVar3 + 0xa34,uVar1);
  return;
}



/* Entry: 10082c6ec; end: 10082de93;  */

long FUN_10082c6ec(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c60e10();
  }
  func_0x00010082c764(param_1 + 0x18);
  return param_1;
}



/* Entry: 10082de94; end: 10082dfb7;  */

void FUN_10082de94(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x0001004b62b4(&uStack_48,0);
  FUN_100460de4(auStack_90);
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(lVar2 + 0x18);
  lVar1 = lVar2 + 0x600;
  FUN_100460448(lVar1);
  *(undefined1 *)(lVar2 + 0x3d8) = 0;
  FUN_10082ab6c(param_2,lVar2 + 0x1d0);
  if (*param_2 != 0) {
    *(undefined1 *)(lVar2 + 0x3d8) = 1;
  }
  *(undefined1 *)(lVar2 + 0x5a) = 1;
  if (((*(char *)(lVar2 + 0x4a) == '\0') && (*(char *)(lVar2 + 0x4e) == '\0')) &&
     (*(char *)(lVar2 + 0x5d) == '\0')) {
    *(undefined1 *)(lVar2 + 0x56) = 0;
    func_0x00010065f810(*(undefined8 *)(lVar2 + 0x28),"",0,1);
    if (*(char *)(lVar3 + 0x18) != '\0') {
      FUN_10065fba4(*(undefined8 *)(lVar2 + 0x28));
    }
    *(undefined1 *)(lVar2 + 0x4a) = 1;
    func_0x000100466b80(lVar1);
  }
  else {
    func_0x000100466b80(lVar1);
    FUN_100617338(lVar2);
  }
  FUN_100467a48(auStack_90);
  FUN_1004b6ddc(&uStack_48);
  return;
}



/* Entry: 10082dfb8; end: 10082e037;  */

undefined4 FUN_10082dfb8(long *param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uStack_34;
  
  if (*param_1 == 0) {
    uVar1 = (long)param_1 + 9;
    uVar2 = (ulong)*(byte *)(param_1 + 1);
  }
  else {
    uVar2 = param_1[1];
    uVar1 = param_1[2];
  }
  FUN_10082e12c(uVar1,uVar2,&uStack_34,10);
  if ((uVar1 & 1) == 0) {
    (*param_3)(param_2,"not an integer",0xe,param_1);
    uStack_34 = 2;
  }
  return uStack_34;
}



/* Entry: 10082e038; end: 10082e0ef;  */

long * FUN_10082e038(undefined8 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_10082dfb8(&plStack_50);
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar6 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (long *)pplVar3;
  }
  func_0x000107c60e78();
  if (param_2 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_50);
  }
  func_0x000107c60bd8();
  puVar7 = (uint *)*plVar4;
  plVar5 = plVar4 + 1;
  FUN_10082e038(plVar5,plVar4[5],plVar4[6]);
  *puVar7 = *puVar7 | 0x400;
  puVar7[0x62] = (uint)plVar5;
  return plVar5;
}



/* Entry: 10082e0f0; end: 10082e12b;  */

void FUN_10082e0f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  FUN_10082e038(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 0x400;
  puVar2[0x62] = (uint)puVar1;
  return;
}



/* Entry: 10082e12c; end: 10082e383;  */

undefined8 FUN_10082e12c(byte *param_1,long param_2,int *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  
  *param_3 = 0;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  pbVar6 = param_1;
  if (0 < param_2) {
    do {
      if (((byte)(&UNK_10e52ca36)[*pbVar6] >> 3 & 1) == 0) break;
      pbVar6 = pbVar6 + 1;
    } while (pbVar6 < param_1 + param_2);
  }
  do {
    lVar5 = param_2;
    if (param_1 + lVar5 <= pbVar6) {
      return 0;
    }
    param_2 = lVar5 + -1;
  } while (((byte)(&UNK_10e52ca36)[(param_1 + lVar5)[-1]] >> 3 & 1) != 0);
  bVar2 = *pbVar6;
  if (((bVar2 == 0x2d) || (bVar2 == 0x2b)) && (pbVar6 = pbVar6 + 1, param_1 + lVar5 <= pbVar6)) {
    return 0;
  }
  if (param_4 == 0x10) {
    if (((1 < (long)(param_1 + (param_2 - (long)pbVar6) + 1)) && (*pbVar6 == 0x30)) &&
       ((pbVar6[1] | 0x20) == 0x78)) {
LAB_10082e234:
      pbVar6 = pbVar6 + 2;
      if (param_1 + lVar5 <= pbVar6) {
        return 0;
      }
    }
    param_4 = 0x10;
  }
  else if (param_4 == 0) {
    if ((long)(param_1 + (param_2 - (long)pbVar6) + 1) < 2) {
      param_4 = 10;
      if (param_1 + (param_2 - (long)pbVar6) == (byte *)0x0) {
        bVar1 = *pbVar6;
        if (bVar1 == 0x30) {
          pbVar6 = pbVar6 + 1;
        }
        param_4 = 8;
        if (bVar1 != 0x30) {
          param_4 = 10;
        }
      }
    }
    else if (*pbVar6 == 0x30) {
      if ((pbVar6[1] | 0x20) == 0x78) goto LAB_10082e234;
      param_4 = 8;
      pbVar6 = pbVar6 + 1;
    }
    else {
      param_4 = 10;
    }
  }
  else if (0x22 < param_4 - 2) {
    return 0;
  }
  param_1 = param_1 + lVar5;
  if (bVar2 == 0x2d) {
    if ((long)param_1 - (long)pbVar6 < 1) {
LAB_10082e354:
      iVar8 = 0;
    }
    else {
      iVar8 = 0;
      do {
        pbVar7 = pbVar6 + 1;
        cVar3 = (&UNK_10e5302b8)[*pbVar6];
        if ((int)param_4 <= (int)cVar3) goto LAB_10082e360;
        if (iVar8 < *(int *)(&UNK_10e53044c + (ulong)param_4 * 4)) {
LAB_10082e368:
          uVar4 = 0;
          iVar8 = -0x80000000;
          goto LAB_10082e37c;
        }
        if ((int)(iVar8 * param_4) < (int)((int)cVar3 | 0x80000000U)) goto LAB_10082e368;
        iVar8 = iVar8 * param_4 - (int)cVar3;
        pbVar6 = pbVar7;
      } while (pbVar7 < param_1);
    }
  }
  else {
    if ((long)param_1 - (long)pbVar6 < 1) goto LAB_10082e354;
    iVar8 = 0;
    do {
      pbVar7 = pbVar6 + 1;
      cVar3 = (&UNK_10e5302b8)[*pbVar6];
      if ((int)param_4 <= (int)cVar3) goto LAB_10082e360;
      if (*(int *)(&UNK_10e5303b8 + (ulong)param_4 * 4) < iVar8) {
LAB_10082e374:
        uVar4 = 0;
        iVar8 = 0x7fffffff;
        goto LAB_10082e37c;
      }
      if ((int)((int)cVar3 ^ 0x7fffffffU) < (int)(iVar8 * param_4)) goto LAB_10082e374;
      iVar8 = iVar8 * param_4 + (int)cVar3;
      pbVar6 = pbVar7;
    } while (pbVar7 < param_1);
  }
  uVar4 = 1;
LAB_10082e37c:
  *param_3 = iVar8;
  return uVar4;
LAB_10082e360:
  uVar4 = 0;
  goto LAB_10082e37c;
}



/* Entry: 10082e384; end: 10082f4cf;  */

void FUN_10082e384(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010082e390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x148) + 0x28))();
  return;
}



/* Entry: 10082f4d0; end: 10082f5f7;  */

void FUN_10082f4d0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x0001004b62b4(&uStack_48,0);
  FUN_100460de4(auStack_90);
  lVar3 = *(long *)(param_1 + 8);
  lVar1 = lVar3 + 0x600;
  FUN_100460448(lVar1);
  *(undefined1 *)(lVar3 + 0x58) = 1;
  if (param_3 < 1) {
    if (*(long *)(lVar3 + 0x78) != 0 && *(long *)(lVar3 + 0x78) != lVar3 + 0x91) {
      FUN_100460314();
    }
    *(undefined8 *)(lVar3 + 0x78) = 0;
    *(undefined1 *)(lVar3 + 0xa0) = 1;
LAB_10082f560:
    func_0x000100466b80(lVar1);
    FUN_100617338(lVar3);
  }
  else {
    if (*(char *)(lVar3 + 99) == '\0') {
      lVar2 = (long)*(int *)(lVar3 + 0x84) + (long)param_3;
      param_3 = *(int *)(lVar3 + 0x88) - param_3;
      *(int *)(lVar3 + 0x84) = (int)lVar2;
      *(int *)(lVar3 + 0x88) = param_3;
      if (param_3 < 1) goto LAB_10082f560;
      *(undefined1 *)(lVar3 + 0x54) = 1;
      lVar2 = *(long *)(lVar3 + 0x78) + lVar2;
    }
    else {
      lVar2 = *(long *)(lVar3 + 0x78);
      param_3 = 0x1000;
    }
    func_0x00010082b580(*(undefined8 *)(lVar3 + 0x28),lVar2,param_3);
    func_0x000100466b80(lVar1);
  }
  FUN_100467a48(auStack_90);
  FUN_1004b6ddc(&uStack_48);
  return;
}



/* Entry: 10082f5f8; end: 10082f63b;  */

void FUN_10082f5f8(byte *param_1,uint *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  
  *param_3 = *param_1 & 1;
  *param_2 = 0;
  bVar1 = param_1[1];
  *param_2 = (uint)bVar1 << 0x18;
  uVar2 = (uint)bVar1 << 0x18 | (uint)param_1[2] << 0x10;
  *param_2 = uVar2;
  uVar2 = uVar2 | (uint)param_1[3] << 8;
  *param_2 = uVar2;
  *param_2 = uVar2 | param_1[4];
  return;
}



/* Entry: 10082f63c; end: 10082f683;  */

long FUN_10082f63c(long param_1)

{
  if (*(char *)(param_1 + 0x128) == '\0') {
    FUN_10082f684(param_1);
    *(undefined1 *)(param_1 + 0x128) = 1;
  }
  else {
    FUN_1006148f8(param_1);
  }
  return param_1;
}



/* Entry: 10082f684; end: 10082f6bb;  */

undefined8 FUN_10082f684(undefined8 param_1,undefined8 param_2)

{
  func_0x0001004b800c();
  FUN_1006148f8(param_1,param_2);
  return param_1;
}



/* Entry: 10082f6bc; end: 10082fb1b;  */

long ***** FUN_10082f6bc(long *****param_1,long *****param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *****ppppplVar4;
  ulong uVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  int *piVar8;
  long ***ppplVar9;
  long *****ppppplVar10;
  long *****unaff_x28;
  long ****pppplStack_280;
  undefined1 uStack_271;
  long ****pppplStack_270;
  long ****pppplStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  long ****pppplStack_248;
  long ***ppplStack_240;
  long *plStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 uStack_219;
  long ****pppplStack_218;
  ulong uStack_210;
  byte bStack_201;
  long ***ppplStack_200;
  long ****pppplStack_1f8;
  ulong uStack_1f0;
  byte bStack_1e1;
  long ***ppplStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  long ***ppplStack_a8;
  long **pplStack_a0;
  long **pplStack_98;
  long lStack_90;
  long *aplStack_88 [4];
  char *pcStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar10 = (long *****)*param_2;
  if (ppppplVar10 == (long *****)0x0) {
    if (param_1[6] != (long ****)0x0) {
      *(undefined1 *)(param_1 + 8) = 1;
      param_1 = (long *****)*param_1;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        do {
          pppplVar7 = *param_1;
          pppplVar6 = (long ****)((long)pppplVar7 + -1);
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar2) {
            *param_1 = pppplVar6;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (pppplVar6 != (long ****)0x0) {
          if (pppplVar7 == (long ****)0x0) {
            func_0x000107c2c340(param_1,
                                "Deferring OnRecvMessageReady until after OnRecvInitialMetadataReady"
                               );
            func_0x000104bd46a0();
            func_0x000104bd46a0();
            FUN_1004bdf74(&lStack_38);
            FUN_1004bdf74(&stack0xffffffffffffffd0);
            func_0x000107c60bd8(param_1);
            return ppppplRam0000000113815c70;
          }
          param_1 = param_1 + 1;
          ppppplVar10 = param_1;
          FUN_1004920d0(param_1,&stack0xffffffffffffffdf);
          while (ppppplVar10 == (long *****)0x0) {
            ppppplVar10 = param_1;
            FUN_1004920d0(param_1,&stack0xffffffffffffffdf);
          }
          func_0x0001004bd8dc(&stack0xffffffffffffffd0,ppppplVar10[3]);
          ppppplVar10[3] = (long ****)0x0;
          if (((ulong)unaff_x28 & 1) != 0) {
            piVar8 = (int *)((long)unaff_x28 + -1);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
              if (bVar2) {
                *piVar8 = *piVar8 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          FUN_1004bd778();
          if (((ulong)unaff_x28 & 1) != 0) {
            FUN_10084dad0(unaff_x28);
          }
          param_1 = unaff_x28;
          if (((ulong)unaff_x28 & 1) != 0) {
            FUN_10084dad0();
            param_1 = unaff_x28;
          }
        }
        return param_1;
      }
      goto LAB_10082fa28;
    }
    if (*(int *)(param_1 + 9) == 0) {
      pppplStack_248 = (long ****)0x0;
      goto LAB_10082f708;
    }
    if (((*(char *)(param_1[10] + 0x25) == '\0') ||
        (ppplVar9 = param_1[10][4], ppplVar9 == (long ***)0x0)) || (-1 < *(int *)param_1[0xb])) {
      ppplStack_a8 = (long ***)0x0;
      param_2 = (long *****)&ppplStack_a8;
      FUN_10082fb1c();
    }
    else if (((int)*(uint *)((long)param_1 + 0x44) < 0) ||
            (ppplVar9 <= (long ***)(ulong)*(uint *)((long)param_1 + 0x44))) {
      func_0x0001004b800c(&pppplStack_1f8);
      iVar3 = *(int *)(param_1 + 9);
      func_0x000104ab18e0(iVar3,param_1[10],&pppplStack_1f8);
      if (iVar3 == 0) {
        pcStack_68 = "Unexpected error decompressing data for algorithm with enum value ";
        uStack_60 = 0x42;
        uVar5 = (ulong)*(uint *)(param_1 + 9);
        func_0x000107c2ba30(uVar5,aplStack_88);
        lStack_90 = uVar5 - (long)aplStack_88;
        ppppplVar10 = &pppplStack_218;
        pplStack_98 = aplStack_88;
        FUN_10047c83c(&pppplStack_218,&pcStack_68,&pplStack_98);
        ppppplVar4 = (long *****)pppplStack_218;
        if (-1 < (char)bStack_201) {
          uStack_210 = (ulong)bStack_201;
          ppppplVar4 = ppppplVar10;
        }
        uStack_230 = 0;
        uStack_228 = 0;
        plStack_238 = (long *)0x0;
        func_0x000104ab5920(&ppplStack_200,2,ppppplVar4,uStack_210,&uStack_219,&plStack_238);
        pppplVar6 = param_1[1];
        if ((long ****)ppplStack_200 != pppplVar6) {
          param_1[1] = (long ****)ppplStack_200;
          ppplStack_200 = (long ***)0x36;
          if (((ulong)pppplVar6 & 1) != 0) {
            FUN_10084dad0();
          }
        }
        FUN_1004bdf74(&ppplStack_200);
        pplStack_a0 = &plStack_238;
        func_0x000100482b64(&pplStack_a0);
        if ((char)bStack_201 < '\0') {
          func_0x000107c60e14(pppplStack_218);
        }
      }
      else {
        *(uint *)param_1[0xb] = *(uint *)param_1[0xb] & 0x3fffffff | 0x40000000;
        FUN_1006148f8(param_1[10],&pppplStack_1f8);
      }
      ppplStack_240 = (long ***)param_1[1];
      if (((ulong)ppplStack_240 & 1) != 0) {
        piVar8 = (int *)((long)ppplStack_240 + -1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = *piVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      param_2 = (long *****)&ppplStack_240;
      FUN_10082fb1c(param_1);
      FUN_1004bdf74(&ppplStack_240);
      param_1 = &pppplStack_1f8;
      FUN_1008301a4();
    }
    else {
      pcStack_68 = "Received message larger than max (%u vs. %d)";
      uStack_60 = 0x2c;
      ppppplVar10 = &pppplStack_1f8;
      pplStack_a0 = (long **)ppplVar9;
      func_0x000104a94a50(&pppplStack_1f8,&pcStack_68,&pplStack_a0);
      ppppplVar4 = (long *****)pppplStack_1f8;
      if (-1 < (char)bStack_1e1) {
        uStack_1f0 = (ulong)bStack_1e1;
        ppppplVar4 = ppppplVar10;
      }
      uStack_c0 = 0;
      uStack_b8 = 0;
      plStack_c8 = (long *)0x0;
      func_0x000104ab5920(auStack_b0,2,ppppplVar4,uStack_1f0,&ppplStack_200,&plStack_c8);
      func_0x000104abaa50(&pppplStack_218,auStack_b0,3,8);
      ppppplVar4 = (long *****)param_1[1];
      if ((long *****)pppplStack_218 != ppppplVar4) {
        param_1[1] = pppplStack_218;
        pppplStack_218 = (long ****)0x36;
        if (((ulong)ppppplVar4 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      FUN_1004bdf74(&pppplStack_218);
      FUN_1004bdf74(auStack_b0);
      pplStack_98 = &plStack_c8;
      func_0x000100482b64(&pplStack_98);
      if ((char)bStack_1e1 < '\0') {
        func_0x000107c60e14(pppplStack_1f8);
      }
      ppplStack_d0 = (long ***)param_1[1];
      if (((ulong)ppplStack_d0 & 1) != 0) {
        piVar8 = (int *)((long)ppplStack_d0 + -1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = *piVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      param_2 = (long *****)&ppplStack_d0;
      FUN_10082fb1c(param_1);
      param_1 = (long *****)&ppplStack_d0;
      FUN_1004bdf74();
    }
  }
  else {
    pppplStack_248 = (long ****)ppppplVar10;
    if (((ulong)ppppplVar10 & 1) != 0) {
      piVar8 = (int *)((long)ppppplVar10 + -1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = *piVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
LAB_10082f708:
    param_2 = &pppplStack_248;
    FUN_10082fb1c();
    if (((ulong)ppppplVar10 & 1) != 0) {
      param_1 = ppppplVar10;
      FUN_10084dad0();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
LAB_10082fa28:
  func_0x000107c60e78();
  FUN_1004bdf74(&ppplStack_200);
  pplStack_a0 = &plStack_238;
  func_0x000100482b64(&pplStack_a0);
  if ((char)bStack_201 < '\0') {
    func_0x000107c60e14(pppplStack_218);
  }
  FUN_1008301a4(&pppplStack_1f8);
  ppppplVar4 = param_1;
  func_0x000107c60bd8();
  pcStack_258 = FUN_10082fb1c;
  pppplStack_270 = (long ****)ppppplVar10;
  pppplStack_268 = (long ****)param_1;
  puStack_260 = &stack0xfffffffffffffff0;
  FUN_10082b7e8();
  pppplVar6 = ppppplVar4[0x10];
  ppppplVar4[0x10] = (long ****)0x0;
  pppplStack_280 = *param_2;
  if (((ulong)pppplStack_280 & 1) != 0) {
    piVar8 = (int *)((long)pppplStack_280 + -1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = *piVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10082b8d4(&uStack_271,pppplVar6,&pppplStack_280);
  if (((ulong)pppplStack_280 & 1) != 0) {
    FUN_10084dad0();
  }
  return (long *****)pppplStack_280;
}



/* Entry: 10082fb1c; end: 10082fb9f;  */

void FUN_10082fb1c(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_30;
  undefined1 uStack_21;
  
  FUN_10082b7e8();
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar4 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10082b8d4(&uStack_21,uVar3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 10082fba0; end: 10082fef3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10082fba0(long param_1,ulong *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *******pppppppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  ulong *puVar9;
  int *piVar10;
  ulong uVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  ulong uStack_e8;
  ulong *puStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long *plStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong auStack_a8 [4];
  undefined1 uStack_81;
  undefined8 *******pppppppuStack_80;
  ulong uStack_78;
  byte bStack_69;
  ulong uStack_68;
  ulong uStack_60;
  ulong *puStack_58;
  undefined *puStack_50;
  ulong *puStack_48;
  code *pcStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = *(undefined8 **)(param_1 + 0x10);
  if (((*(char *)(puVar13[0xb] + 0x128) == '\0') ||
      (uVar1 = *(uint *)((long)puVar13 + 0xc), (int)uVar1 < 0)) ||
     (puVar12 = *(ulong **)(puVar13[0xb] + 0x20), puVar12 <= (ulong *)(ulong)uVar1))
  goto LAB_10082fd74;
  puStack_50 = &UNK_10ae73f48;
  pcStack_40 = FUN_1004d50a8;
  puStack_58 = puVar12;
  puStack_48 = (ulong *)(ulong)uVar1;
  FUN_1004d4da0(&pppppppuStack_80,"Received message larger than max (%u vs. %d)",0x2c,&puStack_58,2)
  ;
  pppppppuVar4 = pppppppuStack_80;
  if (-1 < (char)bStack_69) {
    uStack_78 = (ulong)bStack_69;
    pppppppuVar4 = &pppppppuStack_80;
  }
  auStack_a8[2] = 0;
  auStack_a8[3] = 0;
  auStack_a8[1] = 0;
  func_0x000104ab5920(&uStack_68,2,pppppppuVar4,uStack_78,&uStack_81,auStack_a8 + 1);
  func_0x000104abaa50(&uStack_60,&uStack_68,3,8);
  if ((uStack_68 & 1) != 0) {
    FUN_10084dad0();
  }
  puStack_58 = auStack_a8 + 1;
  func_0x000100482b64(&puStack_58);
  if ((char)bStack_69 < '\0') {
    func_0x000107c60e14(pppppppuStack_80);
  }
  auStack_a8[0] = *param_2;
  if ((auStack_a8[0] & 1) != 0) {
    piVar10 = (int *)(auStack_a8[0] - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar3) {
        *piVar10 = *piVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_b0 = uStack_60;
  if ((uStack_60 & 1) != 0) {
    piVar10 = (int *)(uStack_60 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar3) {
        *piVar10 = *piVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1008306c4(&puStack_58,auStack_a8,&uStack_b0);
  puVar12 = (ulong *)*param_2;
  if (puStack_58 == puVar12) {
LAB_10082fd10:
    if (((ulong)puVar12 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  else {
    *param_2 = (ulong)puStack_58;
    puStack_58 = (ulong *)0x36;
    if (((ulong)puVar12 & 1) != 0) {
      FUN_10084dad0();
      puVar12 = puStack_58;
      goto LAB_10082fd10;
    }
  }
  if ((uStack_b0 & 1) != 0) {
    FUN_10084dad0();
  }
  if ((auStack_a8[0] & 1) != 0) {
    FUN_10084dad0();
  }
  uVar5 = puVar13[10];
  uVar11 = *param_2;
  if (uVar11 != uVar5) {
    if ((uVar11 & 1) != 0) {
      piVar10 = (int *)(uVar11 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = *piVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar11 = *param_2;
    }
    puVar13[10] = uVar11;
    if ((uVar5 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  if ((uStack_60 & 1) != 0) {
    FUN_10084dad0();
  }
LAB_10082fd74:
  puVar12 = (ulong *)puVar13[0xc];
  puVar13[0xc] = 0;
  if (*(char *)(puVar13 + 0xe) != '\0') {
    *(undefined1 *)(puVar13 + 0xe) = 0;
    uVar6 = *puVar13;
    uStack_b8 = puVar13[0xf];
    if ((uStack_b8 & 1) != 0) {
      piVar10 = (int *)(uStack_b8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = *piVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_1004bd618(uVar6,puVar13 + 6,&uStack_b8,"continue recv_trailing_metadata_ready");
    if ((uStack_b8 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  plStack_c0 = (long *)*param_2;
  if (((ulong)plStack_c0 & 1) != 0) {
    piVar10 = (int *)((long)plStack_c0 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar3) {
        *piVar10 = *piVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar9 = puVar12;
  FUN_10082b8d4(&puStack_58,puVar12,&plStack_c0);
  plVar7 = plStack_c0;
  if (((ulong)plStack_c0 & 1) != 0) {
    FUN_10084dad0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    func_0x000107c60e78();
    FUN_1004bdf74(&uStack_60);
    plVar8 = plVar7;
    func_0x000107c60bd8();
    pcStack_c8 = FUN_10082fef4;
    puStack_e0 = puVar12;
    plStack_d8 = plVar7;
    puStack_d0 = &stack0xfffffffffffffff0;
    FUN_100612044(*plVar8 + 0x38,"recv_message_ready");
    uVar5 = *puVar9;
    if ((uVar5 & 1) != 0) {
      piVar10 = (int *)(uVar5 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = *piVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_e8 = uVar5;
    FUN_10082ff88(plVar8,&uStack_e8);
    if ((uVar5 & 1) != 0) {
      FUN_10084dad0(uVar5);
    }
    return;
  }
  return;
}



/* Entry: 10082fef4; end: 10082ff87;  */

void FUN_10082fef4(long *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_28;
  
  FUN_100612044(*param_1 + 0x38,"recv_message_ready");
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar4;
  FUN_10082ff88(param_1,&uStack_28);
  if ((uVar4 & 1) != 0) {
    FUN_10084dad0(uVar4);
  }
  return;
}



/* Entry: 10082ff88; end: 1008300c7;  */

void FUN_10082ff88(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  ulong uStack_40;
  ulong uStack_38;
  
  lVar5 = *param_1;
  if (*param_2 != 0) {
    FUN_100614b50(lVar5 + 0xbb0);
    plVar1 = param_1 + 0x18;
    do {
      while (*plVar1 != 0) {
        ClearExclusiveLocal();
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    param_1[0x18] = 0;
    if (param_1[0x17] == 0) {
      uStack_38 = *param_2;
      if ((uStack_38 & 1) != 0) {
        piVar4 = (int *)(uStack_38 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar3) {
            *piVar4 = *piVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_100831aec(param_1 + 0x17,&uStack_38);
      if ((uStack_38 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    uVar6 = *param_2;
    if ((uVar6 & 1) != 0) {
      piVar4 = (int *)(uVar6 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar3) {
          *piVar4 = *piVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_40 = uVar6;
    func_0x000104ad88e8(lVar5,&uStack_40);
    if ((uVar6 & 1) != 0) {
      FUN_10084dad0(uVar6);
    }
    if (*param_2 != 0) goto LAB_100830084;
  }
  if (*(char *)(lVar5 + 0xcd8) != '\0') {
    plVar1 = (long *)(lVar5 + 0xdc8);
    while (*plVar1 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = (long)param_1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
  }
LAB_100830084:
  FUN_1008300c8(param_1);
  return;
}



/* Entry: 1008300c8; end: 1008301a3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1008300c8(long *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  ulong uStack_90;
  ulong uStack_88;
  ulong auStack_80 [4];
  undefined1 uStack_59;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  lVar8 = *param_1;
  if (*(char *)(lVar8 + 0xcd8) == '\0') {
    **(undefined8 **)(lVar8 + 0xce8) = 0;
    *(undefined1 *)(lVar8 + 0xc6) = 0;
    plVar6 = param_1 + 0x16;
    do {
      lVar8 = *plVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    *(int *)(lVar8 + 0xd70) = *(int *)(lVar8 + 0xce0);
    if ((*(int *)(lVar8 + 0xce0) < 0) && (*(int *)(lVar8 + 0xa30) != 0)) {
      uVar4 = 0;
      FUN_100601960(0,0);
    }
    else {
      uVar4 = 0;
      func_0x000100601958(0,0);
    }
    **(undefined8 **)(lVar8 + 0xce8) = uVar4;
    FUN_100614830(lVar8 + 0xbb0,**(long **)(lVar8 + 0xce8) + 0x18);
    *(undefined1 *)(lVar8 + 0xc6) = 0;
    FUN_100614b50(lVar8 + 0xbb0);
    plVar6 = param_1 + 0x16;
    do {
      lVar8 = *plVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar8 != 0) {
    return;
  }
  plVar6 = param_1 + 0x18;
  lVar8 = *param_1;
  do {
    while (*plVar6 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar9 = param_1[0x17];
  if ((uVar9 & 1) != 0) {
    piVar7 = (int *)(uVar9 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x18] = 0;
  bVar1 = *(byte *)(param_1 + 3);
  uStack_40 = uVar9;
  if ((bVar1 & 1) != 0) {
    FUN_10083228c(lVar8 + 0x1a8);
    FUN_1004e2b40(lVar8 + 0x398);
    bVar1 = *(byte *)(param_1 + 3);
  }
  if ((bVar1 >> 2 & 1) != 0) {
    if (*(char *)(param_1[2] + 0x34) != '\0' && uVar9 == 0) {
      uStack_50 = 0;
      auStack_80[2] = 0;
      auStack_80[3] = 0;
      auStack_80[1] = 0;
      func_0x000104ab5920(&uStack_58,2,"Attempt to send message after stream was closed.",0x30,
                          &uStack_59,auStack_80 + 1);
      FUN_1008306c4(&uStack_48,&uStack_50,&uStack_58);
      uVar9 = uStack_48;
      if (uStack_48 != 0) {
        uStack_48 = 0x36;
        uStack_40 = uVar9;
      }
      if ((uStack_58 & 1) != 0) {
        FUN_10084dad0();
      }
      puStack_38 = auStack_80 + 1;
      func_0x000100482b64(&puStack_38);
      if ((uStack_50 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    *(undefined1 *)(lVar8 + 0xc3) = 0;
    FUN_1006147e0(lVar8 + 0xa88);
    bVar1 = *(byte *)(param_1 + 3);
  }
  if ((bVar1 >> 1 & 1) != 0) {
    FUN_10083228c(lVar8 + 0x3b0);
    FUN_1004e2b40(lVar8 + 0x5a0);
    bVar1 = *(byte *)(param_1 + 3);
  }
  if ((bVar1 >> 5 & 1) == 0) {
    if (((uVar9 != 0) && ((*(byte *)(param_1 + 3) >> 4 & 1) != 0)) &&
       (**(long **)(lVar8 + 0xce8) != 0)) {
      FUN_10061cdc4();
      **(undefined8 **)(lVar8 + 0xce8) = 0;
    }
  }
  else {
    *(undefined8 *)(lVar8 + 200) = 1;
    FUN_1008323d0(lVar8);
    if (uVar9 != 0) {
      uStack_40 = 0;
      puStack_38 = (ulong *)0x36;
      if ((uVar9 & 1) != 0) {
        FUN_10084dad0(uVar9);
      }
    }
    uVar9 = 0;
  }
  auStack_80[0] = 0;
  FUN_100831aec(param_1 + 0x17,auStack_80);
  if ((auStack_80[0] & 1) != 0) {
    FUN_10084dad0();
  }
  if ((char)param_1[10] == '\0') {
    uVar4 = *(undefined8 *)(lVar8 + 0x98);
    lVar8 = param_1[9];
    if ((uVar9 & 1) != 0) {
      piVar7 = (int *)(uVar9 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_90 = uVar9;
    FUN_1008324d0(uVar4,lVar8,&uStack_90,FUN_100832c60,param_1,param_1 + 9,0);
    if ((uStack_90 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  else {
    *param_1 = 0;
    lVar5 = param_1[9];
    if ((uVar9 & 1) != 0) {
      piVar7 = (int *)(uVar9 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_88 = uVar9;
    FUN_10082b8d4(&puStack_38,lVar5,&uStack_88);
    if ((uStack_88 & 1) != 0) {
      FUN_10084dad0();
    }
    plVar6 = (long *)(lVar8 + 0xdd0);
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      FUN_100836ca4();
    }
  }
  if ((uStack_40 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1008301a4; end: 1008301f3;  */

void FUN_1008301a4(undefined8 param_1)

{
  undefined1 auStack_68 [72];
  
  FUN_100460de4(auStack_68);
  FUN_10061ce28(param_1);
  FUN_100467a48(auStack_68);
  return;
}



/* Entry: 1008301f4; end: 10083027f;  */

void FUN_1008301f4(long param_1)

{
  if (param_1 != 0) {
    func_0x00010065f964(param_1 + 0x40);
    func_0x000100624e9c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 100830280; end: 100830363;  */

void FUN_100830280(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001004b62b4(&uStack_38,0);
  FUN_100460de4(auStack_80);
  lVar4 = *(long *)(param_1 + 8);
  FUN_100460448(lVar4 + 0x600);
  func_0x0001008303c0(*(undefined8 *)(lVar4 + 0x28));
  *(undefined1 *)(lVar4 + 0x5e) = 1;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  if (*(long *)(lVar4 + 0x78) != 0 && *(long *)(lVar4 + 0x78) != lVar4 + 0x91) {
    FUN_100460314();
  }
  *(undefined8 *)(lVar4 + 0x78) = 0;
  func_0x000100466b80(lVar4 + 0x600);
  FUN_100617338(lVar4);
  plVar3 = *(long **)(lVar4 + 0x640);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    FUN_100836ca4();
  }
  FUN_100467a48(auStack_80);
  FUN_1004b6ddc(&uStack_38);
  return;
}



/* Entry: 100830364; end: 1008304e7;  */

void FUN_100830364(undefined8 param_1)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x00010061cab0(&UNK_10f743e19);
  FUN_10012dd4c();
  uStack_58 = 0x100832fb4;
  uStack_50 = 0;
  uStack_60 = param_1;
  func_0x000100830484(0x100832f98,&uStack_58,&uStack_60);
  func_0x00010065fc9c();
  func_0x00010065fcb0();
  return;
}



/* Entry: 1008304e8; end: 1008306c3;  */

long * FUN_1008304e8(undefined8 *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plStack_40;
  long *plStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  if ((param_1[6] != 0) || (param_1[0x10] != 0)) {
    *(undefined1 *)(param_1 + 0x11) = 1;
    uVar5 = param_1[0x17];
    uVar9 = *param_2;
    if (uVar9 != uVar5) {
      if ((uVar9 & 1) != 0) {
        piVar10 = (int *)(uVar9 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = *piVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar9 = *param_2;
      }
      param_1[0x17] = uVar9;
      if ((uVar5 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    plVar6 = (long *)*param_1;
    do {
      lVar8 = *plVar6;
      lVar3 = lVar8 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 != 0) {
      if (lVar8 == 0) {
        func_0x000107c2c340(plVar6,
                            "Deferring OnRecvTrailingMetadataReady until after OnRecvInitialMetadataReady and OnRecvMessageReady"
                           );
        func_0x000104bd46a0();
        func_0x000104bd46a0();
        FUN_1004bdf74(&plStack_38);
        FUN_1004bdf74(&plStack_30);
        func_0x000107c60bd8(plVar6);
        return plRam0000000113815c70;
      }
      plVar6 = plVar6 + 1;
      plVar4 = plVar6;
      FUN_1004920d0(plVar6,(long)&uStack_28 + 7);
      while (plVar4 == (long *)0x0) {
        plVar4 = plVar6;
        FUN_1004920d0(plVar6,(long)&uStack_28 + 7);
      }
      func_0x0001004bd8dc(&plStack_30,plVar4[3]);
      plVar6 = plStack_30;
      plVar4[3] = 0;
      plStack_38 = plStack_30;
      if (((ulong)plStack_30 & 1) != 0) {
        piVar10 = (int *)((long)plStack_30 + -1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = *piVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_1004bd778();
      if (((ulong)plVar6 & 1) != 0) {
        FUN_10084dad0(plVar6);
      }
      plVar6 = plStack_30;
      if (((ulong)plStack_30 & 1) != 0) {
        FUN_10084dad0();
        plVar6 = plStack_30;
      }
    }
    return plVar6;
  }
  plStack_30 = (long *)*param_2;
  if (((ulong)plStack_30 & 1) != 0) {
    piVar10 = (int *)((long)plStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = *piVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_38 = (long *)param_1[1];
  if (((ulong)plStack_38 & 1) != 0) {
    piVar10 = (int *)((long)plStack_38 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = *piVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_1008306c4(&uStack_28,&plStack_30,&plStack_38);
  uVar5 = *param_2;
  if (uStack_28 != uVar5) {
    *param_2 = uStack_28;
    uStack_28 = 0x36;
    if ((uVar5 & 1) == 0) goto LAB_1008305ec;
    FUN_10084dad0();
    uVar5 = uStack_28;
  }
  if ((uVar5 & 1) != 0) {
    FUN_10084dad0();
  }
LAB_1008305ec:
  if (((ulong)plStack_38 & 1) != 0) {
    FUN_10084dad0();
  }
  if (((ulong)plStack_30 & 1) != 0) {
    FUN_10084dad0();
  }
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    param_1[1] = 0;
    uStack_28 = 0x36;
    if ((uVar5 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  uVar7 = param_1[0x16];
  plStack_40 = (long *)*param_2;
  param_1[0x16] = 0;
  if (((ulong)plStack_40 & 1) != 0) {
    piVar10 = (int *)((long)plStack_40 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = *piVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10082b8d4(&uStack_28,uVar7,&plStack_40);
  if (((ulong)plStack_40 & 1) != 0) {
    FUN_10084dad0();
  }
  return plStack_40;
}



/* Entry: 1008306c4; end: 10083075f;  */

void FUN_1008306c4(ulong *param_1,ulong *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_28;
  
  uStack_28 = *param_3;
  if (*param_2 != 0) {
    if (uStack_28 != 0) {
      if ((uStack_28 & 1) != 0) {
        piVar3 = (int *)(uStack_28 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar2) {
            *piVar3 = *piVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x000104ab5af0(param_2,&uStack_28);
      if ((uStack_28 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    uStack_28 = *param_2;
    param_3 = param_2;
  }
  *param_1 = uStack_28;
  *param_3 = 0x36;
  return;
}



/* Entry: 100830760; end: 1008307cb;  */

void FUN_100830760(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_28;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar4;
  FUN_1008307cc(param_1,&uStack_28);
  if ((uVar4 & 1) != 0) {
    FUN_10084dad0(uVar4);
  }
  return;
}



/* Entry: 1008307cc; end: 100830a43;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1008307cc(long param_1,ulong *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  int *piVar11;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uStack_130;
  ulong auStack_128 [4];
  undefined8 uStack_108;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_128[1] = 0;
  uStack_108 = 0;
  plVar13 = *(long **)(param_1 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar2) {
      *plVar13 = *plVar13 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  iVar12 = *(int *)(param_1 + 0xac);
  lStack_70 = param_1;
  if (iVar12 == 5) {
    puVar9 = *(ulong **)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (puVar9 != (ulong *)0x0) {
      auStack_128[0] = *param_2;
      if ((auStack_128[0] & 1) != 0) {
        piVar11 = (int *)(auStack_128[0] - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = *piVar11 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      param_3 = auStack_128;
      FUN_10082bfa8(auStack_128 + 1,puVar9,param_3,"propagate failure");
      if ((auStack_128[0] & 1) != 0) {
        FUN_10084dad0();
      }
    }
  }
  else {
    uVar14 = *param_2;
    if (uVar14 != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x68);
      if ((uVar14 & 1) != 0) {
        piVar11 = (int *)(uVar14 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = *piVar11 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      param_3 = &uStack_130;
      uStack_130 = uVar14;
      func_0x000104aaf6d0(param_1,uVar10);
      if ((uVar14 & 1) != 0) {
        FUN_10084dad0(uVar14);
      }
      iVar12 = *(int *)(param_1 + 0xac);
    }
    if (iVar12 != 2) {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                    ,0x34a,2,"assertion failed: %s");
      func_0x000107c60ebc();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008309e4);
      (*pcVar3)();
    }
    *(undefined4 *)(param_1 + 0xac) = 3;
    ppuVar4 = &PTR___tlv_bootstrap_11340d8b8;
    (*(code *)PTR___tlv_bootstrap_11340d8b8)(*(undefined8 *)(param_1 + 0x20));
    puVar15 = *ppuVar4;
    *ppuVar4 = extraout_x8;
    ppuVar5 = &PTR___tlv_bootstrap_11340d8d0;
    (*(code *)PTR___tlv_bootstrap_11340d8d0)(*(undefined8 *)(param_1 + 0x40));
    puVar16 = *ppuVar5;
    *ppuVar5 = extraout_x8_00;
    ppuVar6 = &PTR___tlv_bootstrap_11340d8e8;
    (*(code *)PTR___tlv_bootstrap_11340d8e8)(*(undefined8 *)(param_1 + 0x48));
    puVar17 = *ppuVar6;
    *ppuVar6 = extraout_x8_01;
    ppuVar7 = &PTR___tlv_bootstrap_11340d900;
    (*(code *)PTR___tlv_bootstrap_11340d900)(param_1 + 0x38);
    puVar18 = *ppuVar7;
    *ppuVar7 = extraout_x8_02;
    puVar9 = auStack_128 + 1;
    FUN_10082bc50(param_1);
    *ppuVar7 = puVar18;
    *ppuVar6 = puVar17;
    *ppuVar5 = puVar16;
    *ppuVar4 = puVar15;
  }
  puVar8 = auStack_128 + 1;
  FUN_10061694c(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  if ((int)puVar9 != 0) {
    func_0x000104bd46a0(puVar8);
    FUN_1004bdf74(&uStack_130);
    FUN_10061694c(auStack_128 + 1);
  }
  func_0x000107c60bd8(puVar8);
  *puVar9 = *param_3;
  *param_3 = 0;
  return;
}



/* Entry: 100830a44; end: 100830a57;  */

void FUN_100830a44(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_2 = *param_3;
  *param_3 = 0;
  return;
}



/* Entry: 100830a58; end: 100830adb;  */

undefined1  [16] FUN_100830a58(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  ulong uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_10082bcfc(&uStack_30,uVar1);
  if ((uStack_30 != 0) &&
     (func_0x000104a91cc8(&uStack_28,&uStack_30), uVar1 = uStack_28, (uStack_30 & 1) != 0)) {
    FUN_10084dad0();
    uVar1 = uStack_28;
  }
  uStack_28 = uVar1;
  auVar2._8_8_ = 1;
  auVar2._0_8_ = uStack_28;
  return auVar2;
}



/* Entry: 100830adc; end: 100830ae3;  */

byte * FUN_100830adc(long param_1)

{
  if ((*(byte *)(param_1 + 8) >> 1 & 1) == 0) {
    FUN_100615b10(param_1 + 0x10);
  }
  FUN_100615b98(param_1 + 0x20);
  return (byte *)(param_1 + 8);
}



/* Entry: 100830ae4; end: 100830b73;  */

void FUN_100830ae4(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_30;
  undefined1 uStack_21;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1005a5960(*(long *)(param_1 + 0x18) + 8);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar4 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10082b8d4(&uStack_21,uVar3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 100830b74; end: 100830d1b;  */

long * FUN_100830b74(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *puVar11;
  long *plStack_40;
  long *plStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  puVar11 = *(undefined8 **)(param_1 + 0x10);
  if (puVar11[0xc] != 0) {
    *(undefined1 *)(puVar11 + 0xe) = 1;
    uVar5 = puVar11[0xf];
    uVar9 = *param_2;
    if (uVar9 != uVar5) {
      if ((uVar9 & 1) != 0) {
        piVar10 = (int *)(uVar9 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = *piVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar9 = *param_2;
      }
      puVar11[0xf] = uVar9;
      if ((uVar5 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    plVar6 = (long *)*puVar11;
    do {
      lVar8 = *plVar6;
      lVar3 = lVar8 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 != 0) {
      if (lVar8 == 0) {
        func_0x000107c2c340(plVar6,
                            "deferring recv_trailing_metadata_ready until after recv_message_ready")
        ;
        func_0x000104bd46a0();
        func_0x000104bd46a0();
        FUN_1004bdf74(&plStack_38);
        FUN_1004bdf74(&plStack_30);
        func_0x000107c60bd8(plVar6);
        return plRam0000000113815c70;
      }
      plVar6 = plVar6 + 1;
      plVar4 = plVar6;
      FUN_1004920d0(plVar6,(long)&uStack_28 + 7);
      while (plVar4 == (long *)0x0) {
        plVar4 = plVar6;
        FUN_1004920d0(plVar6,(long)&uStack_28 + 7);
      }
      func_0x0001004bd8dc(&plStack_30,plVar4[3]);
      plVar6 = plStack_30;
      plVar4[3] = 0;
      plStack_38 = plStack_30;
      if (((ulong)plStack_30 & 1) != 0) {
        piVar10 = (int *)((long)plStack_30 + -1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = *piVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_1004bd778();
      if (((ulong)plVar6 & 1) != 0) {
        FUN_10084dad0(plVar6);
      }
      plVar6 = plStack_30;
      if (((ulong)plStack_30 & 1) != 0) {
        FUN_10084dad0();
        plVar6 = plStack_30;
      }
    }
    return plVar6;
  }
  plStack_30 = (long *)*param_2;
  if (((ulong)plStack_30 & 1) != 0) {
    piVar10 = (int *)((long)plStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = *piVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_38 = (long *)puVar11[10];
  if (((ulong)plStack_38 & 1) != 0) {
    piVar10 = (int *)((long)plStack_38 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = *piVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_1008306c4(&uStack_28,&plStack_30,&plStack_38);
  uVar5 = *param_2;
  if (uStack_28 != uVar5) {
    *param_2 = uStack_28;
    uStack_28 = 0x36;
    if ((uVar5 & 1) == 0) goto LAB_100830c70;
    FUN_10084dad0();
    uVar5 = uStack_28;
  }
  if ((uVar5 & 1) != 0) {
    FUN_10084dad0();
  }
LAB_100830c70:
  if (((ulong)plStack_38 & 1) != 0) {
    FUN_10084dad0();
  }
  if (((ulong)plStack_30 & 1) != 0) {
    FUN_10084dad0();
  }
  uVar7 = puVar11[0xd];
  plStack_40 = (long *)*param_2;
  if (((ulong)plStack_40 & 1) != 0) {
    piVar10 = (int *)((long)plStack_40 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = *piVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10082b8d4(&uStack_28,uVar7,&plStack_40);
  if (((ulong)plStack_40 & 1) != 0) {
    FUN_10084dad0();
  }
  return plStack_40;
}



/* Entry: 100830d1c; end: 100830d8f;  */

void FUN_100830d1c(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_28;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar4;
  FUN_100830d90(param_1,&uStack_28);
  if ((uVar4 & 1) != 0) {
    FUN_10084dad0(uVar4);
  }
  return;
}



/* Entry: 100830d90; end: 100830e4b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100830d90(long *param_1,ulong *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  ulong uVar9;
  ulong uStack_90;
  ulong uStack_88;
  ulong auStack_80 [4];
  undefined1 uStack_59;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  FUN_100612044(*param_1 + 0x38,"recv_trailing_metadata_ready");
  lVar4 = *param_1;
  uVar9 = *param_2;
  if ((uVar9 & 1) != 0) {
    piVar7 = (int *)(uVar9 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_100830e4c(lVar4,lVar4 + 0x7c0,&stack0xffffffffffffffd8);
  if ((uVar9 & 1) != 0) {
    FUN_10084dad0(uVar9);
  }
  plVar8 = param_1 + 0x16;
  do {
    lVar4 = *plVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
  plVar8 = param_1 + 0x18;
  lVar4 = *param_1;
  do {
    while (*plVar8 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar9 = param_1[0x17];
  if ((uVar9 & 1) != 0) {
    piVar7 = (int *)(uVar9 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x18] = 0;
  bVar1 = *(byte *)(param_1 + 3);
  uStack_40 = uVar9;
  if ((bVar1 & 1) != 0) {
    FUN_10083228c(lVar4 + 0x1a8);
    FUN_1004e2b40(lVar4 + 0x398);
    bVar1 = *(byte *)(param_1 + 3);
  }
  if ((bVar1 >> 2 & 1) != 0) {
    if (*(char *)(param_1[2] + 0x34) != '\0' && uVar9 == 0) {
      uStack_50 = 0;
      auStack_80[2] = 0;
      auStack_80[3] = 0;
      auStack_80[1] = 0;
      func_0x000104ab5920(&uStack_58,2,"Attempt to send message after stream was closed.",0x30,
                          &uStack_59,auStack_80 + 1);
      FUN_1008306c4(&uStack_48,&uStack_50,&uStack_58);
      uVar9 = uStack_48;
      if (uStack_48 != 0) {
        uStack_48 = 0x36;
        uStack_40 = uVar9;
      }
      if ((uStack_58 & 1) != 0) {
        FUN_10084dad0();
      }
      puStack_38 = auStack_80 + 1;
      func_0x000100482b64(&puStack_38);
      if ((uStack_50 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    *(undefined1 *)(lVar4 + 0xc3) = 0;
    FUN_1006147e0(lVar4 + 0xa88);
    bVar1 = *(byte *)(param_1 + 3);
  }
  if ((bVar1 >> 1 & 1) != 0) {
    FUN_10083228c(lVar4 + 0x3b0);
    FUN_1004e2b40(lVar4 + 0x5a0);
    bVar1 = *(byte *)(param_1 + 3);
  }
  if ((bVar1 >> 5 & 1) == 0) {
    if (((uVar9 != 0) && ((*(byte *)(param_1 + 3) >> 4 & 1) != 0)) &&
       (**(long **)(lVar4 + 0xce8) != 0)) {
      FUN_10061cdc4();
      **(undefined8 **)(lVar4 + 0xce8) = 0;
    }
  }
  else {
    *(undefined8 *)(lVar4 + 200) = 1;
    FUN_1008323d0(lVar4);
    if (uVar9 != 0) {
      uStack_40 = 0;
      puStack_38 = (ulong *)0x36;
      if ((uVar9 & 1) != 0) {
        FUN_10084dad0(uVar9);
      }
    }
    uVar9 = 0;
  }
  auStack_80[0] = 0;
  FUN_100831aec(param_1 + 0x17,auStack_80);
  if ((auStack_80[0] & 1) != 0) {
    FUN_10084dad0();
  }
  if ((char)param_1[10] == '\0') {
    uVar5 = *(undefined8 *)(lVar4 + 0x98);
    lVar4 = param_1[9];
    if ((uVar9 & 1) != 0) {
      piVar7 = (int *)(uVar9 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_90 = uVar9;
    FUN_1008324d0(uVar5,lVar4,&uStack_90,FUN_100832c60,param_1,param_1 + 9,0);
    if ((uStack_90 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  else {
    *param_1 = 0;
    lVar6 = param_1[9];
    if ((uVar9 & 1) != 0) {
      piVar7 = (int *)(uVar9 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_88 = uVar9;
    FUN_10082b8d4(&puStack_38,lVar6,&uStack_88);
    if ((uStack_88 & 1) != 0) {
      FUN_10084dad0();
    }
    plVar8 = (long *)(lVar4 + 0xdd0);
    do {
      lVar4 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      FUN_100836ca4();
    }
  }
  if ((uStack_40 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 100830e4c; end: 1008313cf;  */

/* WARNING: Possible PIC construction at 0x0001008314e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100831500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008314ec) */
/* WARNING: Type propagation algorithm not settling */

void FUN_100830e4c(ulong *******param_1,ulong *******param_2,ulong *param_3,ulong *******param_4,
                  ulong *****param_5,ulong ******param_6)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *******pppppppuVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  ulong *******pppppppuVar8;
  ulong *******pppppppuVar9;
  ulong *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  ulong *****pppppuVar12;
  ulong ******ppppppuVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  ulong ******ppppppuVar17;
  ulong *****pppppuVar18;
  ulong ****ppppuVar19;
  ulong uVar20;
  code *pcVar21;
  ulong ******ppppppuStack_2b8;
  undefined8 *******pppppppuStack_2b0;
  undefined8 *******pppppppuStack_2a8;
  undefined8 *******pppppppuStack_2a0;
  undefined8 *******pppppppuStack_298;
  ulong ******ppppppuStack_290;
  undefined8 *******pppppppuStack_288;
  ulong ******ppppppuStack_280;
  undefined7 uStack_278;
  char cStack_271;
  undefined8 *******pppppppuStack_270;
  undefined8 *******pppppppuStack_268;
  int aiStack_260 [2];
  ulong ******ppppppuStack_258;
  ulong ******ppppppuStack_250;
  undefined8 *******pppppppuStack_248;
  undefined1 auStack_1f0 [8];
  ulong *******pppppppuStack_1e8;
  ulong ******ppppppuStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  ulong ******ppppppuStack_1c8;
  ulong *******pppppppuStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  ulong *****pppppuStack_1a8;
  ulong *****pppppuStack_1a0;
  ulong *****pppppuStack_198;
  ulong *****pppppuStack_190;
  long lStack_188;
  ulong *******pppppppuStack_180;
  ulong *******pppppppuStack_178;
  undefined8 *******pppppppuStack_170;
  code *pcStack_168;
  undefined1 auStack_160 [8];
  ulong *****pppppuStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  ulong *******pppppppuStack_128;
  ulong *******pppppppuStack_120;
  ulong *******pppppppuStack_118;
  ulong ****ppppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f1;
  undefined8 *******pppppppuStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  ulong uStack_d8;
  ulong *******pppppppuStack_d0;
  ulong *******pppppppuStack_c8;
  ulong uStack_c0;
  ulong ****ppppuStack_b8;
  ulong *******pppppppuStack_b0;
  ulong *******pppppppuStack_a8;
  ulong ******ppppppuStack_80;
  ulong *******pppppppuStack_78;
  ulong ******ppppppuStack_70;
  ulong ******ppppppuStack_68;
  char cStack_60;
  long lStack_48;
  
  puVar5 = auStack_160;
  puVar6 = auStack_160;
  pppppppuVar11 = (undefined8 *******)&stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar20 = *param_3;
  if (uVar20 == 0) {
    uVar15 = *(uint *)param_2;
    if ((uVar15 >> 10 & 1) == 0) {
      if (*(char *)(param_1 + 5) == '\0') {
        uStack_130 = 0;
        FUN_1008313d0(param_1,&uStack_130);
      }
      else {
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                      ,0x3d7,0,"Received trailing metadata with no error and no status");
        uStack_150 = 0;
        uStack_148 = 0;
        pppppuStack_158 = (ulong *****)0x0;
        param_4 = (ulong *******)&pppppppuStack_b0;
        param_5 = (ulong *****)&pppppuStack_158;
        func_0x000104ab5920(&uStack_140,2,"No status received",0x12);
        func_0x000104abaa50(&uStack_138,&uStack_140,3,2);
        FUN_1008313d0(param_1,&uStack_138);
        if ((uStack_138 & 1) != 0) {
          FUN_10084dad0();
        }
        if ((uStack_140 & 1) != 0) {
          FUN_10084dad0();
        }
        ppppppuStack_80 = &pppppuStack_158;
        func_0x000100482b64(&ppppppuStack_80);
      }
    }
    else {
      uVar1 = *(uint *)(param_2 + 0x31);
      uVar14 = uVar15 & 0xfffffbff;
      *(uint *)param_2 = uVar14;
      pppppppuStack_c8 = (ulong *******)0x0;
      if (uVar1 == 0) {
        if ((uVar15 >> 0xf & 1) != 0) {
          pppppppuVar9 = (ulong *******)0x0;
          goto LAB_1008310d8;
        }
        ppppppuStack_80 = (ulong ******)((ulong)ppppppuStack_80 & 0xffffffffffffff00);
LAB_1008310c8:
        cStack_60 = '\0';
        pppppppuStack_128 = (ulong *******)0x0;
LAB_1008311e0:
        bVar3 = true;
      }
      else {
        pppppppuVar8 = param_1;
        func_0x000104ad8a88();
        ppppppuStack_80 = (ulong ******)0x10f23c6bc;
        pppppppuStack_78 = (ulong *******)0x19;
        if (pppppppuVar8 == (ulong *******)0x0) {
          pppppppuVar9 = (ulong *******)0x0;
        }
        else {
          pppppppuVar9 = pppppppuVar8;
          func_0x000107c613d0();
        }
        pppppppuStack_b0 = pppppppuVar8;
        pppppppuStack_a8 = pppppppuVar9;
        FUN_10047c83c(&pppppppuStack_f0,&ppppppuStack_80,&pppppppuStack_b0);
        pppppppuVar4 = pppppppuStack_f0;
        if (-1 < (char)bStack_d9) {
          uStack_e8 = (ulong)bStack_d9;
          pppppppuVar4 = &pppppppuStack_f0;
        }
        uStack_108 = 0;
        uStack_100 = 0;
        ppppuStack_110 = (ulong ****)0x0;
        param_4 = (ulong *******)&uStack_f1;
        param_5 = &ppppuStack_110;
        func_0x000104ab5920(&uStack_d8,2,pppppppuVar4,uStack_e8);
        func_0x000104abaa50(&pppppppuStack_d0,&uStack_d8,3,(long)(int)uVar1);
        pppppppuVar9 = pppppppuStack_d0;
        if (pppppppuStack_d0 != (ulong *******)0x0) {
          pppppppuStack_d0 = (ulong *******)0x36;
          pppppppuStack_c8 = pppppppuVar9;
        }
        if ((uStack_d8 & 1) != 0) {
          FUN_10084dad0();
        }
        ppppuStack_b8 = (ulong ****)&ppppuStack_110;
        func_0x000100482b64(&ppppuStack_b8);
        if ((char)bStack_d9 < '\0') {
          func_0x000107c60e14(pppppppuStack_f0);
        }
        FUN_100460314(pppppppuVar8);
        uVar14 = *(uint *)param_2;
        if ((uVar14 >> 0xf & 1) == 0) {
          ppppppuStack_80 = (ulong ******)((ulong)ppppppuStack_80 & 0xffffffffffffff00);
          cStack_60 = '\0';
          if (pppppppuVar9 == (ulong *******)0x0) goto LAB_1008310c8;
          pppppppuStack_120 = pppppppuVar9;
          if (((ulong)pppppppuVar9 & 1) != 0) {
            piVar16 = (int *)((long)pppppppuVar9 + -1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
              if (bVar3) {
                *piVar16 = *piVar16 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          param_4 = (ulong *******)0x0;
          FUN_10084caf8(&pppppppuStack_b0,&pppppppuStack_120,5,"");
          pppppppuVar8 = pppppppuStack_b0;
          pppppppuVar10 = pppppppuVar9;
          if (pppppppuStack_b0 == pppppppuVar9) {
LAB_1008311c0:
            pppppppuVar8 = pppppppuVar10;
            if (((ulong)pppppppuVar9 & 1) != 0) {
              FUN_10084dad0(pppppppuVar9);
            }
          }
          else {
            pppppppuStack_c8 = pppppppuStack_b0;
            pppppppuStack_b0 = (ulong *******)0x36;
            if (((ulong)pppppppuVar9 & 1) != 0) {
              FUN_10084dad0(pppppppuVar9);
              pppppppuVar9 = pppppppuStack_b0;
              pppppppuVar10 = pppppppuVar8;
              goto LAB_1008311c0;
            }
          }
          if (((ulong)pppppppuStack_120 & 1) != 0) {
            FUN_10084dad0();
          }
        }
        else {
LAB_1008310d8:
          pppppppuStack_78 = (ulong *******)param_2[0x27];
          ppppppuStack_80 = param_2[0x26];
          ppppppuStack_68 = param_2[0x29];
          ppppppuStack_70 = param_2[0x28];
          param_2[0x27] = (ulong ******)0x0;
          param_2[0x26] = (ulong ******)0x0;
          param_2[0x29] = (ulong ******)0x0;
          param_2[0x28] = (ulong ******)0x0;
          *(uint *)param_2 = uVar14 & 0xffff7fff;
          FUN_1004b6d90(param_2 + 0x26);
          cStack_60 = '\x01';
          if (((ulong)pppppppuVar9 & 1) != 0) {
            piVar16 = (int *)((long)pppppppuVar9 + -1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
              if (bVar3) {
                *piVar16 = *piVar16 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          param_4 = (ulong *******)((ulong)pppppppuStack_78 & 0xff);
          ppppppuVar13 = (ulong ******)((ulong)&ppppppuStack_80 | 9);
          if (ppppppuStack_80 != (ulong ******)0x0) {
            param_4 = pppppppuStack_78;
            ppppppuVar13 = ppppppuStack_70;
          }
          pppppppuStack_118 = pppppppuVar9;
          FUN_10084caf8(&pppppppuStack_b0,&pppppppuStack_118,5,ppppppuVar13);
          pppppppuVar8 = pppppppuStack_b0;
          pppppppuVar10 = pppppppuVar9;
          if (pppppppuStack_b0 == pppppppuVar9) {
joined_r0x000100831188:
            pppppppuVar8 = pppppppuVar10;
            if (((ulong)pppppppuVar9 & 1) != 0) {
              FUN_10084dad0(pppppppuVar9);
            }
          }
          else {
            pppppppuStack_c8 = pppppppuStack_b0;
            pppppppuStack_b0 = (ulong *******)0x36;
            if (((ulong)pppppppuVar9 & 1) != 0) {
              FUN_10084dad0(pppppppuVar9);
              pppppppuVar10 = pppppppuVar8;
              pppppppuVar9 = pppppppuStack_b0;
              goto joined_r0x000100831188;
            }
          }
          if (((ulong)pppppppuStack_118 & 1) != 0) {
            FUN_10084dad0();
          }
        }
        pppppppuStack_128 = pppppppuVar8;
        if (((ulong)pppppppuVar8 & 1) == 0) goto LAB_1008311e0;
        piVar16 = (int *)((long)pppppppuVar8 + -1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar3) {
            *piVar16 = *piVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        bVar3 = false;
      }
      pppppppuVar9 = pppppppuStack_128;
      FUN_1008313d0(param_1,&pppppppuStack_128);
      if (!bVar3) {
        FUN_10084dad0(pppppppuVar9);
      }
      if ((cStack_60 != '\0') && ((ulong ******)0x1 < ppppppuStack_80)) {
        do {
          pppppuVar18 = *ppppppuStack_80;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppuStack_80,0x10);
          if (bVar3) {
            *ppppppuStack_80 = (ulong *****)((long)pppppuVar18 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((ulong *****)((long)pppppuVar18 + -1) == (ulong *****)0x0) {
          (*(code *)ppppppuStack_80[1])();
        }
      }
      if (((ulong)pppppppuStack_c8 & 1) != 0) {
        FUN_10084dad0();
      }
    }
  }
  else {
    if ((uVar20 & 1) != 0) {
      piVar16 = (int *)(uVar20 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = *piVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_c0 = uVar20;
    FUN_1008313d0(param_1,&uStack_c0);
    if ((uVar20 & 1) != 0) {
      FUN_10084dad0(uVar20);
    }
  }
  ppppppuVar13 = (ulong ******)0x1;
  pppppppuVar9 = param_1;
  FUN_10082c41c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  FUN_1004bdf74(&pppppppuStack_b0);
  FUN_1004bdf74(&pppppppuStack_120);
  if (cStack_60 != '\0') {
    FUN_1004b6d90(&ppppppuStack_80);
  }
  FUN_1004bdf74(&pppppppuStack_c8);
  pppppppuVar8 = pppppppuVar9;
  func_0x000107c60bd8();
  pcStack_168 = FUN_1008313d0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuStack_180 = param_1;
  pppppppuStack_178 = pppppppuVar9;
  pppppppuStack_170 = pppppppuVar11;
  if (*(char *)(pppppppuVar8 + 5) == '\0') {
    if (*param_2 == (ulong ******)0x0) {
      uVar15 = *(byte *)((long)pppppppuVar8 + 0xd74) ^ 1;
    }
    else {
      uVar15 = 1;
    }
    *(uint *)pppppppuVar8[0x1b4] = uVar15;
    pppppuVar18 = pppppppuVar8[0x1b5][3];
    if (pppppuVar18 != (ulong *****)0x0) {
      if (*(int *)pppppppuVar8[0x1b4] == 0) {
        pppppppuVar10 = pppppppuVar8 + 0x1b8;
        do {
          while (*pppppppuVar10 != (ulong ******)0x0) {
            ClearExclusiveLocal();
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar10,0x10);
          if (bVar3) {
            *pppppppuVar10 = (ulong ******)0x1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        pppppppuVar8[0x1b8] = (ulong ******)0x0;
        if (pppppppuVar8[0x1b7] == (ulong ******)0x0) {
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
            pppppuVar18 = pppppuVar18 + 7;
            pcVar21 = FUN_1008313d0;
            goto SUB_100831b64;
          }
          goto LAB_1008315f0;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
        pppppuVar18 = pppppuVar18 + 7;
        pcVar21 = FUN_1008313d0;
        goto code_r0x000104aac0bc;
      }
      goto LAB_1008315f0;
    }
  }
  else {
    pppppppuStack_1c0 = (ulong *******)0x0;
    uStack_1b8 = 0;
    lStack_1b0 = 0;
    ppppppuStack_1c8 = *param_2;
    if (((ulong)ppppppuStack_1c8 & 1) != 0) {
      piVar16 = (int *)((long)ppppppuStack_1c8 + -1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = *piVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuVar13 = pppppppuVar8[0x1b4];
    param_6 = pppppppuVar8[0x1b6];
    param_4 = (ulong *******)&pppppppuStack_1c0;
    param_5 = (ulong *****)0x0;
    FUN_100831658(&ppppppuStack_1c8,pppppppuVar8[4]);
    if (((ulong)ppppppuStack_1c8 & 1) != 0) {
      FUN_10084dad0();
    }
    uStack_1d8 = uStack_1b8;
    ppppppuStack_1e0 = (ulong ******)pppppppuStack_1c0;
    lStack_1d0 = lStack_1b0;
    pppppppuStack_1c0 = (ulong *******)0x0;
    uStack_1b8 = 0;
    lStack_1b0 = 0;
    FUN_1004da2c8(&pppppuStack_1a8,&ppppppuStack_1e0);
    ppppppuVar17 = pppppppuVar8[0x1b5];
    ppppppuVar17[1] = pppppuStack_1a0;
    *ppppppuVar17 = pppppuStack_1a8;
    ppppppuVar17[3] = pppppuStack_190;
    ppppppuVar17[2] = pppppuStack_198;
    if (lStack_1d0 < 0) {
      func_0x000107c60e14(ppppppuStack_1e0);
    }
    pppppppuStack_1e8 = (ulong *******)*param_2;
    if (((ulong)pppppppuStack_1e8 & 1) != 0) {
      piVar16 = (int *)((long)pppppppuStack_1e8 + -1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = *piVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppppuVar9 = (ulong *******)&pppppppuStack_1e8;
    FUN_100831aec(pppppppuVar8 + 0x1b7);
    pppppppuVar10 = pppppppuStack_1e8;
    if (((ulong)pppppppuStack_1e8 & 1) != 0) {
      FUN_10084dad0();
    }
    if (pppppppuVar8[0x16][0x12] != (ulong *****)0x0) {
      pppppuVar18 = pppppppuVar8[0x16][0x12] + 10;
      pppppppuVar9 = pppppppuVar8;
      param_1 = param_2;
      pppppppuVar11 = &pppppppuStack_170;
      if (*(int *)pppppppuVar8[0x1b4] == 0) {
        pcVar21 = (code *)0x100831504;
        puVar5 = auStack_1f0;
SUB_100831b64:
        *(ulong ********)(puVar5 + -0x20) = param_1;
        *(ulong ********)(puVar5 + -0x18) = pppppppuVar9;
        *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar11;
        *(code **)(puVar5 + -8) = pcVar21;
        pppppuVar12 = pppppuVar18;
        func_0x000100460dc4();
        ppppuVar19 = *pppppuVar12;
        uVar15 = *(uint *)(ppppuVar19 + 6);
        uVar20 = (ulong)uVar15;
        if (uVar15 == 0xffffffff) {
          FUN_1004b86f8();
          *(int *)(ppppuVar19 + 6) = (int)uVar20;
        }
        ppppuVar19 = *pppppuVar18 + (uVar20 & 0xffffffff) * 8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppuVar19,0x10);
          if (bVar3) {
            *ppppuVar19 = (ulong ***)((long)*ppppuVar19 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        return;
      }
      pcVar21 = (code *)0x1008314ec;
      puVar6 = auStack_1f0;
code_r0x000104aac0bc:
      *(ulong ********)(puVar6 + -0x20) = param_1;
      *(ulong ********)(puVar6 + -0x18) = pppppppuVar9;
      *(undefined8 ********)(puVar6 + -0x10) = pppppppuVar11;
      *(code **)(puVar6 + -8) = pcVar21;
      pppppuVar12 = pppppuVar18;
      func_0x000100460dc4();
      ppppuVar19 = *pppppuVar12;
      uVar15 = *(uint *)(ppppuVar19 + 6);
      uVar20 = (ulong)uVar15;
      if (uVar15 == 0xffffffff) {
        FUN_1004b86f8();
        *(int *)(ppppuVar19 + 6) = (int)uVar20;
      }
      ppppuVar19 = *pppppuVar18 + (uVar20 & 0xffffffff) * 8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppuVar19,0x10);
        if (bVar3) {
          *ppppuVar19 = (ulong ***)((long)*ppppuVar19 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return;
    }
    pppppppuVar8 = pppppppuVar10;
    param_2 = pppppppuVar9;
    if (lStack_1b0 < 0) {
      pppppppuVar8 = pppppppuStack_1c0;
      func_0x000107c60e14();
      param_2 = pppppppuVar9;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
LAB_1008315f0:
  func_0x000107c60e78();
  if (((int)param_2 != 0) && (func_0x000104bd46a0(), lStack_1b0 < 0)) {
    func_0x000107c60e14(pppppppuStack_1c0);
  }
  func_0x000107c60bd8();
  ppppppuStack_250 = *pppppppuVar8;
  if (ppppppuStack_250 == (ulong ******)0x0) {
    if (ppppppuVar13 != (ulong ******)0x0) {
      *(undefined4 *)ppppppuVar13 = 0;
    }
    if (param_4 != (ulong *******)0x0) {
      func_0x000107c60c64(param_4,"");
    }
    if (param_5 != (ulong *****)0x0) {
      *(undefined4 *)param_5 = 0;
    }
  }
  else {
    if (((ulong)ppppppuStack_250 & 1) != 0) {
      piVar16 = (int *)((long)ppppppuStack_250 + -1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = *piVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10084d4f0(&pppppppuStack_248,&ppppppuStack_250,3);
    FUN_1004bdf74(&ppppppuStack_250);
    if (pppppppuStack_248 == (undefined8 *******)0x0) {
      ppppppuStack_258 = *pppppppuVar8;
      if (((ulong)ppppppuStack_258 & 1) != 0) {
        piVar16 = (int *)((long)ppppppuStack_258 + -1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar3) {
            *piVar16 = *piVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10084d4f0(&pppppppuStack_288,&ppppppuStack_258,7);
      pppppppuVar11 = pppppppuStack_248;
      if (pppppppuStack_288 != pppppppuStack_248) {
        pppppppuStack_248 = pppppppuStack_288;
        pppppppuStack_288 = (undefined8 *******)0x36;
        if (((ulong)pppppppuVar11 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      FUN_1004bdf74(&pppppppuStack_288);
      FUN_1004bdf74(&ppppppuStack_258);
      if (pppppppuStack_248 == (undefined8 *******)0x0) {
        func_0x000104a75cac(&pppppppuStack_248,pppppppuVar8);
      }
    }
    if (((ulong)pppppppuStack_248 & 1) != 0) {
      piVar16 = (int *)((long)pppppppuStack_248 + -1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = *piVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppppuVar11 = &pppppppuStack_268;
    pppppppuStack_268 = pppppppuStack_248;
    FUN_10084d7f0(pppppppuVar11,3,aiStack_260);
    FUN_1004bdf74(&pppppppuStack_268);
    iVar7 = aiStack_260[0];
    if ((int)pppppppuVar11 == 0) {
      pppppppuStack_270 = pppppppuStack_248;
      if (((ulong)pppppppuStack_248 & 1) != 0) {
        piVar16 = (int *)((long)pppppppuStack_248 + -1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar3) {
            *piVar16 = *piVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pppppppuVar11 = &pppppppuStack_270;
      FUN_10084d7f0(pppppppuVar11,7,aiStack_260);
      FUN_1004bdf74(&pppppppuStack_270);
      if ((int)pppppppuVar11 == 0) {
        iVar7 = (int)&pppppppuStack_248;
        func_0x000107c2b9b8();
      }
      else {
        iVar7 = aiStack_260[0];
        func_0x000104adf518(aiStack_260[0],param_2);
      }
    }
    if (ppppppuVar13 != (ulong ******)0x0) {
      *(int *)ppppppuVar13 = iVar7;
    }
    if ((param_6 != (ulong ******)0x0) && (iVar7 != 0)) {
      ppppppuStack_290 = *pppppppuVar8;
      if (((ulong)ppppppuStack_290 & 1) != 0) {
        piVar16 = (int *)((long)ppppppuStack_290 + -1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar3) {
            *piVar16 = *piVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x000104aba950(&pppppppuStack_288,&ppppppuStack_290);
      pppppppuVar11 = pppppppuStack_288;
      if (-1 < cStack_271) {
        pppppppuVar11 = &pppppppuStack_288;
      }
      FUN_1004601ac();
      *param_6 = (ulong *****)pppppppuVar11;
      if (cStack_271 < '\0') {
        func_0x000107c60e14(pppppppuStack_288);
      }
      FUN_1004bdf74(&ppppppuStack_290);
    }
    if (param_5 != (ulong *****)0x0) {
      pppppppuStack_298 = pppppppuStack_248;
      if (((ulong)pppppppuStack_248 & 1) != 0) {
        piVar16 = (int *)((long)pppppppuStack_248 + -1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar3) {
            *piVar16 = *piVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pppppppuVar11 = &pppppppuStack_298;
      FUN_10084d7f0(pppppppuVar11,7,aiStack_260);
      FUN_1004bdf74(&pppppppuStack_298);
      if ((int)pppppppuVar11 == 0) {
        pppppppuStack_2a0 = pppppppuStack_248;
        if (((ulong)pppppppuStack_248 & 1) != 0) {
          piVar16 = (int *)((long)pppppppuStack_248 + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar3) {
              *piVar16 = *piVar16 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pppppppuVar11 = &pppppppuStack_2a0;
        FUN_10084d7f0(pppppppuVar11,3,aiStack_260);
        FUN_1004bdf74(&pppppppuStack_2a0);
        if ((int)pppppppuVar11 == 0) {
          aiStack_260[0] = (uint)(pppppppuStack_248 != (undefined8 *******)0x0) << 1;
        }
        else {
          func_0x000104adf4f8();
        }
      }
      *(int *)param_5 = aiStack_260[0];
    }
    if (param_4 != (ulong *******)0x0) {
      pppppppuStack_2a8 = pppppppuStack_248;
      if (((ulong)pppppppuStack_248 & 1) != 0) {
        piVar16 = (int *)((long)pppppppuStack_248 + -1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar3) {
            *piVar16 = *piVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pppppppuVar11 = &pppppppuStack_2a8;
      FUN_10084dbf0(pppppppuVar11,5,param_4);
      FUN_1004bdf74(&pppppppuStack_2a8);
      if (((ulong)pppppppuVar11 & 1) == 0) {
        pppppppuStack_2b0 = pppppppuStack_248;
        if (((ulong)pppppppuStack_248 & 1) != 0) {
          piVar16 = (int *)((long)pppppppuStack_248 + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar3) {
              *piVar16 = *piVar16 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pppppppuVar11 = &pppppppuStack_2b0;
        FUN_10084dbf0(pppppppuVar11,0,param_4);
        FUN_1004bdf74(&pppppppuStack_2b0);
        if (((ulong)pppppppuVar11 & 1) == 0) {
          ppppppuStack_2b8 = *pppppppuVar8;
          if (((ulong)ppppppuStack_2b8 & 1) != 0) {
            piVar16 = (int *)((long)ppppppuStack_2b8 + -1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
              if (bVar3) {
                *piVar16 = *piVar16 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          func_0x000104aba950(&pppppppuStack_288,&ppppppuStack_2b8);
          if (*(char *)((long)param_4 + 0x17) < '\0') {
            func_0x000107c60e14(*param_4);
          }
          param_4[1] = ppppppuStack_280;
          *param_4 = (ulong ******)pppppppuStack_288;
          param_4[2] = (ulong ******)CONCAT17(cStack_271,uStack_278);
          cStack_271 = '\0';
          pppppppuStack_288 = (undefined8 *******)((ulong)pppppppuStack_288 & 0xffffffffffffff00);
          FUN_1004bdf74(&ppppppuStack_2b8);
        }
      }
    }
    FUN_1004bdf74(&pppppppuStack_248);
  }
  return;
}



/* Entry: 1008313d0; end: 100831657;  */

/* WARNING: Possible PIC construction at 0x0001008314e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100831500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008314ec) */

void FUN_1008313d0(ulong *param_1,ulong **param_2,int *param_3,ulong **param_4,int *param_5,
                  long *param_6)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  int iVar5;
  ulong *puVar6;
  undefined8 ***pppuVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong **ppuVar11;
  uint uVar12;
  int *piVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong *unaff_x19;
  ulong **unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong uStack_158;
  undefined8 **ppuStack_150;
  undefined8 **ppuStack_148;
  undefined8 **ppuStack_140;
  undefined8 **ppuStack_138;
  ulong uStack_130;
  undefined8 **ppuStack_128;
  ulong *puStack_120;
  undefined7 uStack_118;
  char cStack_111;
  undefined8 **ppuStack_110;
  undefined8 **ppuStack_108;
  int aiStack_100 [2];
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 **ppuStack_e8;
  undefined1 auStack_90 [8];
  ulong *puStack_88;
  ulong *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  ulong *puStack_68;
  ulong *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((char)param_1[5] == '\0') {
    if (*param_2 == (ulong *)0x0) {
      uVar12 = *(byte *)((long)param_1 + 0xd74) ^ 1;
    }
    else {
      uVar12 = 1;
    }
    *(uint *)param_1[0x1b4] = uVar12;
    lVar15 = *(long *)(param_1[0x1b5] + 0x18);
    if (lVar15 != 0) {
      if (*(int *)param_1[0x1b4] == 0) {
        puVar6 = param_1 + 0x1b8;
        do {
          while (*puVar6 != 0) {
            ClearExclusiveLocal();
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar3) {
            *puVar6 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        param_1[0x1b8] = 0;
        if (param_1[0x1b7] == 0) {
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
            plVar8 = (long *)(lVar15 + 0x38);
            goto SUB_100831b64;
          }
          goto LAB_1008315f0;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
        plVar8 = (long *)(lVar15 + 0x38);
        goto code_r0x000104aac0bc;
      }
      goto LAB_1008315f0;
    }
  }
  else {
    puStack_60 = (ulong *)0x0;
    uStack_58 = 0;
    lStack_50 = 0;
    puStack_68 = *param_2;
    if (((ulong)puStack_68 & 1) != 0) {
      piVar13 = (int *)((long)puStack_68 + -1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    param_3 = (int *)param_1[0x1b4];
    param_6 = (long *)param_1[0x1b6];
    param_4 = &puStack_60;
    param_5 = (int *)0x0;
    FUN_100831658(&puStack_68,param_1[4]);
    if (((ulong)puStack_68 & 1) != 0) {
      FUN_10084dad0();
    }
    uStack_78 = uStack_58;
    puStack_80 = puStack_60;
    lStack_70 = lStack_50;
    puStack_60 = (ulong *)0x0;
    uStack_58 = 0;
    lStack_50 = 0;
    FUN_1004da2c8(&uStack_48,&puStack_80);
    puVar14 = (undefined8 *)param_1[0x1b5];
    puVar14[1] = uStack_40;
    *puVar14 = uStack_48;
    puVar14[3] = uStack_30;
    puVar14[2] = uStack_38;
    if (lStack_70 < 0) {
      func_0x000107c60e14(puStack_80);
    }
    puStack_88 = *param_2;
    if (((ulong)puStack_88 & 1) != 0) {
      piVar13 = (int *)((long)puStack_88 + -1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuVar11 = &puStack_88;
    FUN_100831aec(param_1 + 0x1b7);
    puVar6 = puStack_88;
    if (((ulong)puStack_88 & 1) != 0) {
      FUN_10084dad0();
    }
    if (*(long *)(param_1[0x16] + 0x90) != 0) {
      plVar8 = (long *)(*(long *)(param_1[0x16] + 0x90) + 0x50);
      unaff_x19 = param_1;
      unaff_x20 = param_2;
      unaff_x29 = puVar1;
      if (*(int *)param_1[0x1b4] == 0) {
        unaff_x30 = 0x100831504;
        register0x00000008 = (BADSPACEBASE *)auStack_90;
SUB_100831b64:
        *(ulong ***)((long)register0x00000008 + -0x20) = unaff_x20;
        *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        plVar9 = plVar8;
        func_0x000100460dc4();
        lVar15 = *plVar9;
        uVar12 = *(uint *)(lVar15 + 0x30);
        uVar10 = (ulong)uVar12;
        if (uVar12 == 0xffffffff) {
          FUN_1004b86f8();
          *(int *)(lVar15 + 0x30) = (int)uVar10;
        }
        plVar8 = (long *)(*plVar8 + (uVar10 & 0xffffffff) * 0x40 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        return;
      }
      unaff_x30 = 0x1008314ec;
      register0x00000008 = (BADSPACEBASE *)auStack_90;
code_r0x000104aac0bc:
      *(ulong ***)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      plVar9 = plVar8;
      func_0x000100460dc4();
      lVar15 = *plVar9;
      uVar12 = *(uint *)(lVar15 + 0x30);
      uVar10 = (ulong)uVar12;
      if (uVar12 == 0xffffffff) {
        FUN_1004b86f8();
        *(int *)(lVar15 + 0x30) = (int)uVar10;
      }
      plVar8 = (long *)(*plVar8 + (uVar10 & 0xffffffff) * 0x40 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return;
    }
    param_1 = puVar6;
    param_2 = ppuVar11;
    if (lStack_50 < 0) {
      param_1 = puStack_60;
      func_0x000107c60e14();
      param_2 = ppuVar11;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
LAB_1008315f0:
  func_0x000107c60e78();
  if (((int)param_2 != 0) && (func_0x000104bd46a0(), lStack_50 < 0)) {
    func_0x000107c60e14(puStack_60);
  }
  func_0x000107c60bd8();
  uStack_f0 = *param_1;
  if (uStack_f0 == 0) {
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
    }
    if (param_4 != (ulong **)0x0) {
      func_0x000107c60c64(param_4,"");
    }
    if (param_5 != (int *)0x0) {
      *param_5 = 0;
    }
  }
  else {
    if ((uStack_f0 & 1) != 0) {
      piVar13 = (int *)(uStack_f0 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10084d4f0(&ppuStack_e8,&uStack_f0,3);
    FUN_1004bdf74(&uStack_f0);
    if ((undefined8 ***)ppuStack_e8 == (undefined8 ***)0x0) {
      uStack_f8 = *param_1;
      if ((uStack_f8 & 1) != 0) {
        piVar13 = (int *)(uStack_f8 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = *piVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10084d4f0(&ppuStack_128,&uStack_f8,7);
      ppuVar4 = ppuStack_e8;
      if (ppuStack_128 != ppuStack_e8) {
        ppuStack_e8 = ppuStack_128;
        ppuStack_128 = (undefined8 ***)0x36;
        if (((ulong)ppuVar4 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      FUN_1004bdf74(&ppuStack_128);
      FUN_1004bdf74(&uStack_f8);
      if ((undefined8 ***)ppuStack_e8 == (undefined8 ***)0x0) {
        func_0x000104a75cac(&ppuStack_e8,param_1);
      }
    }
    if (((ulong)ppuStack_e8 & 1) != 0) {
      piVar13 = (int *)((long)ppuStack_e8 + -1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppuVar7 = &ppuStack_108;
    ppuStack_108 = ppuStack_e8;
    FUN_10084d7f0(pppuVar7,3,aiStack_100);
    FUN_1004bdf74(&ppuStack_108);
    iVar5 = aiStack_100[0];
    if ((int)pppuVar7 == 0) {
      ppuStack_110 = ppuStack_e8;
      if (((ulong)ppuStack_e8 & 1) != 0) {
        piVar13 = (int *)((long)ppuStack_e8 + -1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = *piVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pppuVar7 = &ppuStack_110;
      FUN_10084d7f0(pppuVar7,7,aiStack_100);
      FUN_1004bdf74(&ppuStack_110);
      if ((int)pppuVar7 == 0) {
        iVar5 = (int)&ppuStack_e8;
        func_0x000107c2b9b8();
      }
      else {
        iVar5 = aiStack_100[0];
        func_0x000104adf518(aiStack_100[0],param_2);
      }
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar5;
    }
    if ((param_6 != (long *)0x0) && (iVar5 != 0)) {
      uStack_130 = *param_1;
      if ((uStack_130 & 1) != 0) {
        piVar13 = (int *)(uStack_130 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = *piVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x000104aba950(&ppuStack_128,&uStack_130);
      pppuVar7 = (undefined8 ***)ppuStack_128;
      if (-1 < cStack_111) {
        pppuVar7 = &ppuStack_128;
      }
      FUN_1004601ac();
      *param_6 = (long)pppuVar7;
      if (cStack_111 < '\0') {
        func_0x000107c60e14(ppuStack_128);
      }
      FUN_1004bdf74(&uStack_130);
    }
    if (param_5 != (int *)0x0) {
      ppuStack_138 = ppuStack_e8;
      if (((ulong)ppuStack_e8 & 1) != 0) {
        piVar13 = (int *)((long)ppuStack_e8 + -1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = *piVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pppuVar7 = &ppuStack_138;
      FUN_10084d7f0(pppuVar7,7,aiStack_100);
      FUN_1004bdf74(&ppuStack_138);
      if ((int)pppuVar7 == 0) {
        ppuStack_140 = ppuStack_e8;
        if (((ulong)ppuStack_e8 & 1) != 0) {
          piVar13 = (int *)((long)ppuStack_e8 + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar3) {
              *piVar13 = *piVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pppuVar7 = &ppuStack_140;
        FUN_10084d7f0(pppuVar7,3,aiStack_100);
        FUN_1004bdf74(&ppuStack_140);
        if ((int)pppuVar7 == 0) {
          aiStack_100[0] = (uint)((undefined8 ***)ppuStack_e8 != (undefined8 ***)0x0) << 1;
        }
        else {
          func_0x000104adf4f8();
        }
      }
      *param_5 = aiStack_100[0];
    }
    if (param_4 != (ulong **)0x0) {
      ppuStack_148 = ppuStack_e8;
      if (((ulong)ppuStack_e8 & 1) != 0) {
        piVar13 = (int *)((long)ppuStack_e8 + -1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = *piVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pppuVar7 = &ppuStack_148;
      FUN_10084dbf0(pppuVar7,5,param_4);
      FUN_1004bdf74(&ppuStack_148);
      if (((ulong)pppuVar7 & 1) == 0) {
        ppuStack_150 = ppuStack_e8;
        if (((ulong)ppuStack_e8 & 1) != 0) {
          piVar13 = (int *)((long)ppuStack_e8 + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar3) {
              *piVar13 = *piVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pppuVar7 = &ppuStack_150;
        FUN_10084dbf0(pppuVar7,0,param_4);
        FUN_1004bdf74(&ppuStack_150);
        if (((ulong)pppuVar7 & 1) == 0) {
          uStack_158 = *param_1;
          if ((uStack_158 & 1) != 0) {
            piVar13 = (int *)(uStack_158 - 1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar3) {
                *piVar13 = *piVar13 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          func_0x000104aba950(&ppuStack_128,&uStack_158);
          if (*(char *)((long)param_4 + 0x17) < '\0') {
            func_0x000107c60e14(*param_4);
          }
          param_4[1] = puStack_120;
          *param_4 = (ulong *)ppuStack_128;
          param_4[2] = (ulong *)CONCAT17(cStack_111,uStack_118);
          cStack_111 = '\0';
          ppuStack_128 = (undefined8 **)((ulong)ppuStack_128 & 0xffffffffffffff00);
          FUN_1004bdf74(&uStack_158);
        }
      }
    }
    FUN_1004bdf74(&ppuStack_e8);
  }
  return;
}



/* Entry: 100831658; end: 100831aeb;  */

void FUN_100831658(ulong *param_1,undefined8 param_2,int *param_3,undefined8 *param_4,int *param_5,
                  long *param_6)

{
  char cVar1;
  bool bVar2;
  undefined8 **ppuVar3;
  int iVar4;
  undefined8 ***pppuVar5;
  int *piVar6;
  ulong uStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 **ppuStack_a8;
  ulong uStack_a0;
  undefined8 **ppuStack_98;
  undefined8 uStack_90;
  undefined7 uStack_88;
  char cStack_81;
  undefined8 **ppuStack_80;
  undefined8 **ppuStack_78;
  int aiStack_70 [2];
  ulong uStack_68;
  ulong uStack_60;
  undefined8 **ppuStack_58;
  
  uStack_60 = *param_1;
  if (uStack_60 == 0) {
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
    }
    if (param_4 != (undefined8 *)0x0) {
      func_0x000107c60c64(param_4,"");
    }
    if (param_5 != (int *)0x0) {
      *param_5 = 0;
    }
  }
  else {
    if ((uStack_60 & 1) != 0) {
      piVar6 = (int *)(uStack_60 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_10084d4f0(&ppuStack_58,&uStack_60,3);
    FUN_1004bdf74(&uStack_60);
    if ((undefined8 ***)ppuStack_58 == (undefined8 ***)0x0) {
      uStack_68 = *param_1;
      if ((uStack_68 & 1) != 0) {
        piVar6 = (int *)(uStack_68 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = *piVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10084d4f0(&ppuStack_98,&uStack_68,7);
      ppuVar3 = ppuStack_58;
      if (ppuStack_98 != ppuStack_58) {
        ppuStack_58 = ppuStack_98;
        ppuStack_98 = (undefined8 ***)0x36;
        if (((ulong)ppuVar3 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      FUN_1004bdf74(&ppuStack_98);
      FUN_1004bdf74(&uStack_68);
      if ((undefined8 ***)ppuStack_58 == (undefined8 ***)0x0) {
        func_0x000104a75cac(&ppuStack_58,param_1);
      }
    }
    if (((ulong)ppuStack_58 & 1) != 0) {
      piVar6 = (int *)((long)ppuStack_58 + -1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pppuVar5 = &ppuStack_78;
    ppuStack_78 = ppuStack_58;
    FUN_10084d7f0(pppuVar5,3,aiStack_70);
    FUN_1004bdf74(&ppuStack_78);
    iVar4 = aiStack_70[0];
    if ((int)pppuVar5 == 0) {
      ppuStack_80 = ppuStack_58;
      if (((ulong)ppuStack_58 & 1) != 0) {
        piVar6 = (int *)((long)ppuStack_58 + -1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = *piVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      pppuVar5 = &ppuStack_80;
      FUN_10084d7f0(pppuVar5,7,aiStack_70);
      FUN_1004bdf74(&ppuStack_80);
      if ((int)pppuVar5 == 0) {
        iVar4 = (int)&ppuStack_58;
        func_0x000107c2b9b8();
      }
      else {
        iVar4 = aiStack_70[0];
        func_0x000104adf518(aiStack_70[0],param_2);
      }
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar4;
    }
    if ((param_6 != (long *)0x0) && (iVar4 != 0)) {
      uStack_a0 = *param_1;
      if ((uStack_a0 & 1) != 0) {
        piVar6 = (int *)(uStack_a0 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = *piVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x000104aba950(&ppuStack_98,&uStack_a0);
      pppuVar5 = (undefined8 ***)ppuStack_98;
      if (-1 < cStack_81) {
        pppuVar5 = &ppuStack_98;
      }
      FUN_1004601ac();
      *param_6 = (long)pppuVar5;
      if (cStack_81 < '\0') {
        func_0x000107c60e14(ppuStack_98);
      }
      FUN_1004bdf74(&uStack_a0);
    }
    if (param_5 != (int *)0x0) {
      ppuStack_a8 = ppuStack_58;
      if (((ulong)ppuStack_58 & 1) != 0) {
        piVar6 = (int *)((long)ppuStack_58 + -1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = *piVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      pppuVar5 = &ppuStack_a8;
      FUN_10084d7f0(pppuVar5,7,aiStack_70);
      FUN_1004bdf74(&ppuStack_a8);
      if ((int)pppuVar5 == 0) {
        ppuStack_b0 = ppuStack_58;
        if (((ulong)ppuStack_58 & 1) != 0) {
          piVar6 = (int *)((long)ppuStack_58 + -1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar2) {
              *piVar6 = *piVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pppuVar5 = &ppuStack_b0;
        FUN_10084d7f0(pppuVar5,3,aiStack_70);
        FUN_1004bdf74(&ppuStack_b0);
        if ((int)pppuVar5 == 0) {
          aiStack_70[0] = (uint)((undefined8 ***)ppuStack_58 != (undefined8 ***)0x0) << 1;
        }
        else {
          func_0x000104adf4f8();
        }
      }
      *param_5 = aiStack_70[0];
    }
    if (param_4 != (undefined8 *)0x0) {
      ppuStack_b8 = ppuStack_58;
      if (((ulong)ppuStack_58 & 1) != 0) {
        piVar6 = (int *)((long)ppuStack_58 + -1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = *piVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      pppuVar5 = &ppuStack_b8;
      FUN_10084dbf0(pppuVar5,5,param_4);
      FUN_1004bdf74(&ppuStack_b8);
      if (((ulong)pppuVar5 & 1) == 0) {
        ppuStack_c0 = ppuStack_58;
        if (((ulong)ppuStack_58 & 1) != 0) {
          piVar6 = (int *)((long)ppuStack_58 + -1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar2) {
              *piVar6 = *piVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pppuVar5 = &ppuStack_c0;
        FUN_10084dbf0(pppuVar5,0,param_4);
        FUN_1004bdf74(&ppuStack_c0);
        if (((ulong)pppuVar5 & 1) == 0) {
          uStack_c8 = *param_1;
          if ((uStack_c8 & 1) != 0) {
            piVar6 = (int *)(uStack_c8 - 1);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
              if (bVar2) {
                *piVar6 = *piVar6 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          func_0x000104aba950(&ppuStack_98,&uStack_c8);
          if (*(char *)((long)param_4 + 0x17) < '\0') {
            func_0x000107c60e14(*param_4);
          }
          param_4[1] = uStack_90;
          *param_4 = ppuStack_98;
          param_4[2] = CONCAT17(cStack_81,uStack_88);
          cStack_81 = '\0';
          ppuStack_98 = (undefined8 **)((ulong)ppuStack_98 & 0xffffffffffffff00);
          FUN_1004bdf74(&uStack_c8);
        }
      }
    }
    FUN_1004bdf74(&ppuStack_58);
  }
  return;
}



/* Entry: 100831aec; end: 100831bbb;  */

void FUN_100831aec(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  
  puVar1 = param_1 + 1;
  do {
    while (*puVar1 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar4 = *param_1;
  uVar5 = *param_2;
  if (uVar5 != uVar4) {
    if ((uVar5 & 1) != 0) {
      piVar6 = (int *)(uVar5 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar5 = *param_2;
    }
    *param_1 = uVar5;
    if ((uVar4 & 1) != 0) {
      FUN_10084dad0(uVar4);
    }
  }
  *puVar1 = 0;
  return;
}



/* Entry: 100831bbc; end: 100831dd7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100831bbc(long *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  undefined8 *puVar9;
  ulong uStack_78;
  ulong auStack_70 [4];
  undefined1 uStack_49;
  ulong uStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  puVar9 = *(undefined8 **)(*param_1 + 0x10);
  puStack_38 = (ulong *)0x4;
  if (*param_2 == 4) {
LAB_100831c14:
    plVar4 = (long *)*puVar9;
    do {
      lVar7 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      FUN_100836ca4();
    }
    return;
  }
  puVar3 = param_2;
  func_0x000107c2b9bc(param_2,&puStack_38);
  if (((ulong)puStack_38 & 1) != 0) {
    FUN_10084dad0();
  }
  if (((ulong)puVar3 & 1) != 0) goto LAB_100831c14;
  auStack_70[2] = 0;
  auStack_70[3] = 0;
  auStack_70[1] = 0;
  func_0x000104ab5920(&uStack_48,2,"Deadline Exceeded",0x11,&uStack_49,auStack_70 + 1);
  func_0x000104abaa50(&uStack_40,&uStack_48,3,4);
  uVar5 = *param_2;
  if (uStack_40 != uVar5) {
    *param_2 = uStack_40;
    uStack_40 = 0x36;
    if ((uVar5 & 1) == 0) goto LAB_100831cac;
    FUN_10084dad0();
    uVar5 = uStack_40;
  }
  if ((uVar5 & 1) != 0) {
    FUN_10084dad0();
  }
LAB_100831cac:
  if ((uStack_48 & 1) != 0) {
    FUN_10084dad0();
  }
  puStack_38 = auStack_70 + 1;
  func_0x000100482b64(&puStack_38);
  uVar6 = puVar9[1];
  auStack_70[0] = *param_2;
  if ((auStack_70[0] & 1) != 0) {
    piVar8 = (int *)(auStack_70[0] - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = *piVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x000104aba128(uVar6,auStack_70);
  if ((auStack_70[0] & 1) != 0) {
    FUN_10084dad0();
  }
  param_1[9] = (long)&UNK_104a91ab8;
  param_1[10] = (long)param_1;
  param_1[0xb] = 0;
  uVar6 = puVar9[1];
  uStack_78 = *param_2;
  if ((uStack_78 & 1) != 0) {
    piVar8 = (int *)(uStack_78 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = *piVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_1004bd618(uVar6,param_1 + 8,&uStack_78,"deadline exceeded -- sending cancel_stream op");
  if ((uStack_78 & 1) == 0) {
    return;
  }
  FUN_10084dad0();
  return;
}



/* Entry: 100831dd8; end: 100831e4b;  */

void FUN_100831dd8(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_28;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar4;
  FUN_100831e4c(param_1,&uStack_28);
  if ((uVar4 & 1) != 0) {
    FUN_10084dad0(uVar4);
  }
  return;
}



/* Entry: 100831e4c; end: 100831f7f;  */

void FUN_100831e4c(long *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  long *plVar6;
  ulong uStack_40;
  ulong uStack_38;
  
  plVar6 = param_1 + 0x18;
  FUN_100612044(*param_1 + 0x38,"on_complete");
  do {
    while (*plVar6 != 0) {
      ClearExclusiveLocal();
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  param_1[0x18] = 0;
  if (param_1[0x17] == 0) {
    uStack_38 = *param_2;
    if ((uStack_38 & 1) != 0) {
      piVar4 = (int *)(uStack_38 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_100831aec(param_1 + 0x17,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  uVar5 = *param_2;
  if (uVar5 != 0) {
    lVar3 = *param_1;
    if ((uVar5 & 1) != 0) {
      piVar4 = (int *)(uVar5 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_40 = uVar5;
    func_0x000104ad88e8(lVar3,&uStack_40);
    if ((uVar5 & 1) != 0) {
      FUN_10084dad0(uVar5);
    }
  }
  plVar6 = param_1 + 0x16;
  do {
    lVar3 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 == 0) {
    FUN_100831f80(param_1);
  }
  return;
}



/* Entry: 100831f80; end: 10083228b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100831f80(long *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  ulong uStack_90;
  ulong uStack_88;
  ulong auStack_80 [4];
  undefined1 uStack_59;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  plVar6 = param_1 + 0x18;
  lVar8 = *param_1;
  do {
    while (*plVar6 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar9 = param_1[0x17];
  if ((uVar9 & 1) != 0) {
    piVar7 = (int *)(uVar9 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x18] = 0;
  bVar1 = *(byte *)(param_1 + 3);
  uStack_40 = uVar9;
  if ((bVar1 & 1) != 0) {
    FUN_10083228c(lVar8 + 0x1a8);
    FUN_1004e2b40(lVar8 + 0x398);
    bVar1 = *(byte *)(param_1 + 3);
  }
  if ((bVar1 >> 2 & 1) != 0) {
    if (*(char *)(param_1[2] + 0x34) != '\0' && uVar9 == 0) {
      uStack_50 = 0;
      auStack_80[2] = 0;
      auStack_80[3] = 0;
      auStack_80[1] = 0;
      func_0x000104ab5920(&uStack_58,2,"Attempt to send message after stream was closed.",0x30,
                          &uStack_59,auStack_80 + 1);
      FUN_1008306c4(&uStack_48,&uStack_50,&uStack_58);
      uVar9 = uStack_48;
      if (uStack_48 != 0) {
        uStack_48 = 0x36;
        uStack_40 = uVar9;
      }
      if ((uStack_58 & 1) != 0) {
        FUN_10084dad0();
      }
      puStack_38 = auStack_80 + 1;
      func_0x000100482b64(&puStack_38);
      if ((uStack_50 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    *(undefined1 *)(lVar8 + 0xc3) = 0;
    FUN_1006147e0(lVar8 + 0xa88);
    bVar1 = *(byte *)(param_1 + 3);
  }
  if ((bVar1 >> 1 & 1) != 0) {
    FUN_10083228c(lVar8 + 0x3b0);
    FUN_1004e2b40(lVar8 + 0x5a0);
    bVar1 = *(byte *)(param_1 + 3);
  }
  if ((bVar1 >> 5 & 1) == 0) {
    if (((uVar9 != 0) && ((*(byte *)(param_1 + 3) >> 4 & 1) != 0)) &&
       (**(long **)(lVar8 + 0xce8) != 0)) {
      FUN_10061cdc4();
      **(undefined8 **)(lVar8 + 0xce8) = 0;
    }
  }
  else {
    *(undefined8 *)(lVar8 + 200) = 1;
    FUN_1008323d0(lVar8);
    if (uVar9 != 0) {
      uStack_40 = 0;
      puStack_38 = (ulong *)0x36;
      if ((uVar9 & 1) != 0) {
        FUN_10084dad0(uVar9);
      }
    }
    uVar9 = 0;
  }
  auStack_80[0] = 0;
  FUN_100831aec(param_1 + 0x17,auStack_80);
  if ((auStack_80[0] & 1) != 0) {
    FUN_10084dad0();
  }
  if ((char)param_1[10] == '\0') {
    uVar4 = *(undefined8 *)(lVar8 + 0x98);
    lVar8 = param_1[9];
    if ((uVar9 & 1) != 0) {
      piVar7 = (int *)(uVar9 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_90 = uVar9;
    FUN_1008324d0(uVar4,lVar8,&uStack_90,FUN_100832c60,param_1,param_1 + 9,0);
    if ((uStack_90 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  else {
    *param_1 = 0;
    lVar5 = param_1[9];
    if ((uVar9 & 1) != 0) {
      piVar7 = (int *)(uVar9 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_88 = uVar9;
    FUN_10082b8d4(&puStack_38,lVar5,&uStack_88);
    if ((uStack_88 & 1) != 0) {
      FUN_10084dad0();
    }
    plVar6 = (long *)(lVar8 + 0xdd0);
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      FUN_100836ca4();
    }
  }
  if ((uStack_40 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 10083228c; end: 1008323cf;  */

uint * FUN_10083228c(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  uVar2 = uVar3 & 0xfffffffe;
  *param_1 = uVar2;
  puVar1 = param_1;
  if ((uVar3 & 1) != 0) {
    puVar1 = param_1 + 0x74;
    FUN_1004b6d90(puVar1);
    uVar2 = *param_1;
  }
  uVar3 = uVar2 & 0xfffffffd;
  *param_1 = uVar3;
  if ((uVar2 >> 1 & 1) != 0) {
    puVar1 = param_1 + 0x6c;
    FUN_1004b6d90(puVar1);
    uVar3 = *param_1;
  }
  uVar2 = uVar3 & 0xffff8003;
  *param_1 = uVar2;
  if ((uVar3 >> 0xe & 1) != 0) {
    puVar1 = param_1 + 0x54;
    FUN_1004b6d90(puVar1);
    uVar2 = *param_1;
  }
  uVar3 = uVar2 & 0xffff7fff;
  *param_1 = uVar3;
  if ((uVar2 >> 0xf & 1) != 0) {
    puVar1 = param_1 + 0x4c;
    FUN_1004b6d90(puVar1);
    uVar3 = *param_1;
  }
  uVar2 = uVar3 & 0xfffeffff;
  *param_1 = uVar2;
  if ((uVar3 >> 0x10 & 1) != 0) {
    puVar1 = param_1 + 0x44;
    FUN_1004b6d90(puVar1);
    uVar2 = *param_1;
  }
  uVar3 = uVar2 & 0xfffdffff;
  *param_1 = uVar3;
  if ((uVar2 >> 0x11 & 1) != 0) {
    puVar1 = param_1 + 0x3c;
    FUN_1004b6d90(puVar1);
    uVar3 = *param_1;
  }
  uVar2 = uVar3 & 0xfffbffff;
  *param_1 = uVar2;
  if ((uVar3 >> 0x12 & 1) != 0) {
    puVar1 = param_1 + 0x34;
    FUN_1004b6d90(puVar1);
    uVar2 = *param_1;
  }
  uVar3 = uVar2 & 0xfff7ffff;
  *param_1 = uVar3;
  if ((uVar2 >> 0x13 & 1) != 0) {
    puVar1 = param_1 + 0x2c;
    FUN_1004b6d90(puVar1);
    uVar3 = *param_1;
  }
  uVar2 = uVar3 & 0xffefffff;
  *param_1 = uVar2;
  if ((uVar3 >> 0x14 & 1) != 0) {
    puVar1 = param_1 + 0x24;
    FUN_1004b6d90(puVar1);
    uVar2 = *param_1;
  }
  uVar3 = uVar2 & 0xff9fffff;
  *param_1 = uVar3;
  if ((uVar2 >> 0x16 & 1) != 0) {
    puVar1 = param_1 + 0x18;
    func_0x000104a874c8(puVar1);
    uVar3 = *param_1;
  }
  uVar2 = uVar3 & 0xff7fffff;
  *param_1 = uVar2;
  if ((uVar3 >> 0x17 & 1) != 0) {
    puVar1 = param_1 + 0x10;
    FUN_1004b6d90(puVar1);
    uVar2 = *param_1;
  }
  *param_1 = uVar2 & 0xf8ffffff;
  if ((uVar2 >> 0x1a & 1) == 0) {
    return puVar1;
  }
  param_1 = param_1 + 2;
  if (*(long *)param_1 != 0) {
    func_0x000104a875bc(param_1);
  }
  return param_1;
}



/* Entry: 1008323d0; end: 1008324cf;  */

void FUN_1008323d0(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uStack_48;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    FUN_100460448(lVar2);
    plVar1 = *(long **)(lVar2 + 0x40);
    plVar3 = plVar1;
    if (plVar1 != (long *)0x0) {
      do {
        plVar4 = *(long **)(plVar3[3] + 8);
        if (*(char *)((long)plVar3 + 0x29) != '\0') {
          (**(code **)(*plVar3 + 0x60))(plVar3,"propagate_cancel");
          uStack_48 = 4;
          (**(code **)(*plVar3 + 0x18))(plVar3,&uStack_48);
          if ((uStack_48 & 1) != 0) {
            FUN_10084dad0();
          }
          (**(code **)(*plVar3 + 0x68))(plVar3,"propagate_cancel");
          plVar1 = *(long **)(lVar2 + 0x40);
        }
        plVar3 = plVar4;
      } while (plVar4 != plVar1);
    }
    func_0x000100466b80(lVar2);
  }
  return;
}



/* Entry: 1008324d0; end: 100832543;  */

void FUN_1008324d0(long param_1,undefined8 param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  ulong uStack_28;
  
  pcVar3 = *(code **)(*(long *)(param_1 + 0x10) + 0x30);
  uStack_28 = *param_3;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  (*pcVar3)(param_1,param_2,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 100832544; end: 100832797;  */

void FUN_100832544(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long lVar5;
  int *piVar6;
  ulong uStack_58;
  undefined8 auStack_50 [2];
  char cStack_39;
  ulong uStack_38;
  
  lVar5 = *param_3;
  *(undefined8 *)(param_6 + 8) = param_2;
  *(undefined8 *)(param_6 + 0x10) = param_4;
  *(undefined8 *)(param_6 + 0x18) = param_5;
  *(ulong *)(param_6 + 0x20) = (ulong)(lVar5 == 0);
  ppuVar4 = &PTR___tlv_bootstrap_11340d9c0;
  (*(code *)PTR___tlv_bootstrap_11340d9c0)();
  if ((long *)*ppuVar4 == param_1) {
    ppuVar4 = &PTR___tlv_bootstrap_11340d9d8;
    (*(code *)PTR___tlv_bootstrap_11340d9d8)();
    if (*ppuVar4 == (undefined *)0x0) {
      *ppuVar4 = param_6;
      return;
    }
  }
  FUN_1004bc388(param_1 + 10,param_6);
  plVar1 = param_1 + 0x14;
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = param_1 + 0x15;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = param_1 + 0x16;
  if (*plVar1 != 1) {
    if (lVar5 == 0) {
      FUN_100460448(param_1[1]);
      (**(code **)(param_1[3] + 0x18))
                (&uStack_38,(undefined *)((long)param_1 + *(long *)(param_1[2] + 8) + 0x48),0);
      func_0x000100466b80(param_1[1]);
      if (uStack_38 != 0) {
        uStack_58 = uStack_38;
        if ((uStack_38 & 1) != 0) {
          piVar6 = (int *)(uStack_38 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
              *piVar6 = *piVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        func_0x000104aba950(auStack_50,&uStack_58);
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/completion_queue.cc"
                      ,0x2e5,2,"Kick failed: %s");
        if (cStack_39 < '\0') {
          func_0x000107c60e14(auStack_50[0]);
        }
        if ((uStack_58 & 1) != 0) {
          FUN_10084dad0();
        }
        if ((uStack_38 & 1) != 0) {
          FUN_10084dad0();
        }
      }
    }
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *param_1 = *param_1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      FUN_100460448(param_1[1]);
      func_0x000104ada508(param_1);
      func_0x000100466b80(param_1[1]);
      FUN_100832ca0(param_1);
    }
    return;
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = *param_1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_1[0x16] = 0;
  FUN_100460448(param_1[1]);
  func_0x000104ada508(param_1);
  func_0x000100466b80(param_1[1]);
  do {
    lVar5 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    (**(code **)(param_1[2] + 0x20))(param_1 + 9);
    (**(code **)(param_1[3] + 0x30))((undefined *)((long)(param_1 + 9) + *(long *)(param_1[2] + 8)))
    ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 100832798; end: 1008327a7;  */

void FUN_100832798(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001008327a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam0000000113815c10 + 0x30))();
  return;
}



/* Entry: 1008327a8; end: 100832843;  */

void FUN_1008327a8(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 1) {
    for (lVar1 = *(long *)(param_2 + 0x48); lVar1 != param_2 + 0x40; lVar1 = *(long *)(lVar1 + 8)) {
      *(undefined1 *)(*(long *)(lVar1 + 0x10) + 0x30) = 1;
      FUN_100466b64();
    }
  }
  else {
    if (param_3 == 0) {
      if (*(long *)(param_2 + 0x50) == 0) {
        *(undefined1 *)(param_2 + 0x68) = 1;
        goto LAB_100832830;
      }
      param_3 = *(long *)(*(long *)(param_2 + 0x48) + 0x10);
      *(undefined1 *)(param_3 + 0x30) = 1;
    }
    else {
      *(undefined1 *)(param_3 + 0x30) = 1;
    }
    FUN_100466b64(param_3);
  }
LAB_100832830:
  *param_1 = 0;
  return;
}



/* Entry: 100832844; end: 100832c43;  */

void FUN_100832844(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010083284c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100832c44; end: 100832c5f;  */

void FUN_100832c44(undefined8 *param_1)

{
  long *plVar1;
  
  func_0x000107c61220();
  if ((int)param_1 == 0) {
    return;
  }
  func_0x000107c2c144();
  plVar1 = (long *)*param_1;
  *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x000100832c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x68))(plVar1,&DAT_10f78e59e);
  return;
}



/* Entry: 100832c60; end: 100832c9f;  */

void FUN_100832c60(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x000100832c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x68))(plVar1,&DAT_10f78e59e);
  return;
}



/* Entry: 100832ca0; end: 100832d07;  */

void FUN_100832ca0(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  do {
    lVar3 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 != 0) {
    return;
  }
  (**(code **)(param_1[2] + 0x20))(param_1 + 9);
  (**(code **)(param_1[3] + 0x30))((long)(param_1 + 9) + *(long *)(param_1[2] + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 100832d08; end: 100832d9b;  */

undefined8 FUN_100832d08(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  
  func_0x0001004bb09c();
  if (*(char *)(param_1 + 0x138) == '\x01') {
    func_0x000100834c2c(*(undefined8 *)(unaff_x19 + 0x110));
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x100);
    *unaff_x21 = *(undefined1 *)(unaff_x19 + 0x220);
  }
  else {
    FUN_100832d9c();
    func_0x000100832df8();
    *(undefined1 *)(unaff_x19 + 0x71) = 0;
    FUN_100832e64(unaff_x19 + 0x88);
    FUN_10083320c(unaff_x19 + 0xa8);
    *(undefined1 *)(unaff_x19 + 0x220) = *unaff_x21;
    lVar1 = unaff_x19;
    FUN_1008333d8();
    if ((int)lVar1 == 0) {
      return 0;
    }
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x100);
  }
  FUN_100612124();
  func_0x000100834c68();
  return 1;
}



/* Entry: 100832d9c; end: 100832da7;  */

void FUN_100832d9c(void)

{
  byte *pbVar1;
  long unaff_x19;
  
  pbVar1 = (byte *)(unaff_x19 + 8);
  if ((*(char *)(unaff_x19 + 9) == '\x01') && ((*pbVar1 & 1) == 0)) {
    FUN_100612124();
    (**(code **)(*(long *)pbVar1 + 0x58))();
    *(undefined1 *)(unaff_x19 + 9) = 0;
  }
  return;
}



/* Entry: 100832da8; end: 100832def;  */

void FUN_100832da8(byte *param_1)

{
  byte *pbVar1;
  
  if ((param_1[1] == 1) && ((*param_1 & 1) == 0)) {
    pbVar1 = param_1;
    FUN_100612124();
    (**(code **)(*(long *)pbVar1 + 0x58))();
    param_1[1] = 0;
  }
  return;
}



/* Entry: 100832df0; end: 100832e03;  */

void FUN_100832df0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 100832e04; end: 100832e63;  */

void FUN_100832e04(long *param_1)

{
  long unaff_x19;
  byte *unaff_x20;
  
  FUN_10048971c();
  if ((*param_1 != 0) || (*(long *)(unaff_x19 + 0x10) != 0)) {
    func_0x000100608b60(unaff_x19 + 0x10);
    if ((*(char *)(unaff_x19 + 8) == '\x01') && (*(char *)(unaff_x19 + 9) == '\x01')) {
      *unaff_x20 = 0;
    }
    else if ((*unaff_x20 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 9) = 1;
    }
  }
  return;
}



/* Entry: 100832e64; end: 100832e6b;  */

void FUN_100832e64(undefined1 *param_1)

{
  long *plVar1;
  long extraout_x8;
  char *unaff_x21;
  int aiStack_58 [14];
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)(param_1 + 0x10);
    if (*plVar1 == 0) {
      if (((param_1[0x19] != '\x01') || (param_1[0x1a] == '\x01')) &&
         (*param_1 = 0, (param_1[0x18] & 1) == 0)) {
        *unaff_x21 = '\0';
      }
    }
    else {
      if (*unaff_x21 != '\x01') {
        *param_1 = 0;
        if (*plVar1 != 0) {
          FUN_100608b94();
          (**(code **)(extraout_x8 + 0xc0))();
          *plVar1 = 0;
        }
        return;
      }
      func_0x000100833128(aiStack_58);
      *unaff_x21 = aiStack_58[0] == 0;
      *param_1 = aiStack_58[0] == 0;
      func_0x000100612328();
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  return;
}



/* Entry: 100832e6c; end: 1008330fb;  */

void FUN_100832e6c(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  long *plVar6;
  
  *param_1 = &PTR_DAT_110cd6318;
  piVar5 = (int *)param_1[0xd];
  if (piVar5 != (int *)0x0) {
    do {
      iVar2 = *piVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar4) {
        *piVar5 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(piVar5 + 4))();
    }
  }
  *param_1 = &PTR_DAT_110cd62d8;
  if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[6] = 0;
    param_1[6] = 0;
    if ((long *)param_1[8] != (long *)0x0) {
      (**(code **)(*(long *)param_1[8] + 0x18))();
      plVar6 = (long *)param_1[8];
      param_1[8] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar6 = (long *)param_1[8];
  param_1[8] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      iVar2 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1008330fc; end: 10083320b;  */

void FUN_1008330fc(long *param_1)

{
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_1001246dc();
  if (*param_1 != 0) {
    func_0x000100608b60();
  }
  *unaff_x20 = unaff_x19;
  return;
}



/* Entry: 10083320c; end: 100833213;  */

long * FUN_10083320c(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  byte *pbVar2;
  undefined8 extraout_x8;
  ulong uVar3;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100561bf0();
  plVar1 = *(long **)(param_1 + 0x18);
  uStack_38 = extraout_x8;
  if ((plVar1 == (long *)0x0) || ((*unaff_x19 & 1) != 0)) goto LAB_100833348;
  unaff_x20 = (ulong)*(uint *)(unaff_x19 + 0x28);
  unaff_x21 = 0x113815c70;
  if (*(uint *)(unaff_x19 + 0x28) == 0) {
    uStack_70 = uStack_70 & 0xffffffff00000000;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_40 = 0;
    uStack_48 = 0;
    FUN_10083339c(plVar1,&uStack_70);
    FUN_100601c8c(&uStack_70);
  }
  else {
    if (*(long *)(unaff_x19 + 0x30) == 0) {
      uVar3 = (ulong)unaff_x19[0x38];
      if (uVar3 == 0) goto LAB_1008332ac;
      pbVar2 = unaff_x19 + 0x39;
LAB_10083329c:
      func_0x000104c0067c(&uStack_88,pbVar2,pbVar2 + uVar3);
    }
    else {
      uVar3 = *(ulong *)(unaff_x19 + 0x38);
      if (uVar3 != 0) {
        pbVar2 = *(byte **)(unaff_x19 + 0x40);
        goto LAB_10083329c;
      }
LAB_1008332ac:
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
    }
    func_0x000104c00574(auStack_a0,*(undefined8 *)(unaff_x19 + 0x10));
    func_0x000104c00440(&uStack_70,unaff_x20,&uStack_88,auStack_a0);
    FUN_10083339c(*(undefined8 *)(unaff_x19 + 0x18),&uStack_70);
    FUN_100601c8c(&uStack_70);
    FUN_10076d17c();
    func_0x000107c60ca0(&uStack_88);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      unaff_x20 = *(ulong *)(unaff_x19 + 8);
      FUN_10002b838(&uStack_70);
      func_0x000107c60ca4(unaff_x20 + 0x158,&uStack_70);
      func_0x00010055f464();
      (**(code **)(*plRam0000000113815c70 + 0x58))
                (plRam0000000113815c70,*(undefined8 *)(unaff_x19 + 0x20));
    }
  }
  uStack_68 = *(undefined8 *)(unaff_x19 + 0x38);
  uStack_70 = *(ulong *)(unaff_x19 + 0x30);
  uStack_58 = *(undefined8 *)(unaff_x19 + 0x48);
  uStack_60 = *(undefined8 *)(unaff_x19 + 0x40);
  plVar1 = plRam0000000113815c70;
  (**(code **)(*plRam0000000113815c70 + 0x150))(plRam0000000113815c70,&uStack_70);
LAB_100833348:
  func_0x0001004b9658(uStack_38);
  if ((bool)in_ZR) {
    return plVar1;
  }
  func_0x000107c60e78();
  func_0x000107c60ca0(&uStack_70);
  func_0x000104c01a98();
  func_0x000100601a4c();
  FUN_100066230();
  FUN_100066230(unaff_x21,unaff_x20);
  return plVar1;
}



/* Entry: 100833214; end: 10083339b;  */

long * FUN_100833214(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  byte *pbVar2;
  undefined8 extraout_x8;
  ulong uVar3;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100561bf0();
  plVar1 = *(long **)(param_1 + 0x18);
  uStack_38 = extraout_x8;
  if ((plVar1 == (long *)0x0) || ((*unaff_x19 & 1) != 0)) goto LAB_100833348;
  unaff_x20 = (ulong)*(uint *)(unaff_x19 + 0x28);
  unaff_x21 = 0x113815c70;
  if (*(uint *)(unaff_x19 + 0x28) == 0) {
    uStack_70 = uStack_70 & 0xffffffff00000000;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_40 = 0;
    uStack_48 = 0;
    FUN_10083339c(plVar1,&uStack_70);
    FUN_100601c8c(&uStack_70);
  }
  else {
    if (*(long *)(unaff_x19 + 0x30) == 0) {
      uVar3 = (ulong)unaff_x19[0x38];
      if (uVar3 == 0) goto LAB_1008332ac;
      pbVar2 = unaff_x19 + 0x39;
LAB_10083329c:
      func_0x000104c0067c(&uStack_88,pbVar2,pbVar2 + uVar3);
    }
    else {
      uVar3 = *(ulong *)(unaff_x19 + 0x38);
      if (uVar3 != 0) {
        pbVar2 = *(byte **)(unaff_x19 + 0x40);
        goto LAB_10083329c;
      }
LAB_1008332ac:
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
    }
    func_0x000104c00574(auStack_a0,*(undefined8 *)(unaff_x19 + 0x10));
    func_0x000104c00440(&uStack_70,unaff_x20,&uStack_88,auStack_a0);
    FUN_10083339c(*(undefined8 *)(unaff_x19 + 0x18),&uStack_70);
    FUN_100601c8c(&uStack_70);
    FUN_10076d17c();
    func_0x000107c60ca0(&uStack_88);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      unaff_x20 = *(ulong *)(unaff_x19 + 8);
      FUN_10002b838(&uStack_70);
      func_0x000107c60ca4(unaff_x20 + 0x158,&uStack_70);
      func_0x00010055f464();
      (**(code **)(*plRam0000000113815c70 + 0x58))
                (plRam0000000113815c70,*(undefined8 *)(unaff_x19 + 0x20));
    }
  }
  uStack_68 = *(undefined8 *)(unaff_x19 + 0x38);
  uStack_70 = *(ulong *)(unaff_x19 + 0x30);
  uStack_58 = *(undefined8 *)(unaff_x19 + 0x48);
  uStack_60 = *(undefined8 *)(unaff_x19 + 0x40);
  plVar1 = plRam0000000113815c70;
  (**(code **)(*plRam0000000113815c70 + 0x150))(plRam0000000113815c70,&uStack_70);
LAB_100833348:
  func_0x0001004b9658(uStack_38);
  if ((bool)in_ZR) {
    return plVar1;
  }
  func_0x000107c60e78();
  func_0x000107c60ca0(&uStack_70);
  func_0x000104c01a98();
  func_0x000100601a4c();
  FUN_100066230();
  FUN_100066230(unaff_x21,unaff_x20);
  return plVar1;
}



/* Entry: 10083339c; end: 1008333cb;  */

void FUN_10083339c(void)

{
  func_0x000100601a4c();
  FUN_100066230();
  FUN_100066230();
  return;
}



/* Entry: 1008333cc; end: 1008333d7;  */

void FUN_1008333cc(long param_1)

{
  long lVar1;
  
  *(undefined2 *)(param_1 + 0x20) = 1;
  for (lVar1 = 0; lVar1 != 0xd; lVar1 = lVar1 + 1) {
    *(undefined1 *)(param_1 + 8 + lVar1) = 0;
  }
  return;
}



/* Entry: 1008333d8; end: 100833447;  */

undefined8 FUN_1008333d8(long param_1)

{
  code *extraout_x8;
  long lVar1;
  
  FUN_1008333cc(param_1 + 0x140);
  FUN_100833448(param_1 + 0x30,param_1 + 0x140);
  if (*(long *)(param_1 + 0x80) != 0) {
    *(undefined1 *)(param_1 + 0x150) = 1;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *(undefined1 *)(param_1 + 0x151) = 1;
  }
  else {
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)(param_1 + 0x200) = 0;
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(undefined1 *)(param_1 + 0x152) = 1;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(long *)(param_1 + 0x170) == 0) {
    func_0x000104c019cc();
    func_0x000104c01ae0();
    (*extraout_x8)();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x168) + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x168) + 0x28);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(long *)(lVar1 + 0x20) == *(long *)(lVar1 + 0x28)) {
      return 1;
    }
    func_0x000104c0070c(param_1 + 0x140);
  }
  else {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x30)) {
      return 1;
    }
    FUN_1004b972c(param_1 + 0x140);
  }
  return 0;
}



/* Entry: 100833448; end: 1008334bf;  */

void FUN_100833448(double param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_1001246dc();
  FUN_1004b9648();
  if ((*param_2 != 0) || (unaff_x20[2] != 0)) {
    *(undefined1 *)(unaff_x19 + 10) = 1;
  }
  puVar1 = unaff_x20 + 2;
  func_0x000100608b60();
  *unaff_x20 = 0;
  *(long *)(unaff_x19 + 0x60) = (long)unaff_x20 + 9;
  *(undefined8 *)(unaff_x19 + 0x68) = 0;
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  FUN_100612f48();
  FUN_100613078();
  func_0x0001004b9658(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000104c01af4();
  FUN_100613080();
  func_0x000104c01a98();
  func_0x0001004ba6f8();
  FUN_10046778c();
  FUN_100467768();
  puVar1[0x14] = (long)param_1;
  FUN_1006132f4();
  if ((long)unaff_x20 + 9 != 0) {
    FUN_100613544();
    func_0x000100613370();
    func_0x000100613384();
    (*extraout_x8_00)();
    func_0x0001006134b4();
    func_0x0001006134bc();
  }
  func_0x000100833618();
  return;
}


