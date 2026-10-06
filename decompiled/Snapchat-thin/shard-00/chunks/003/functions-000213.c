/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1004d35bc; end: 1004d368b;  */

void FUN_1004d35bc(long *param_1,long param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  FUN_100460448(param_2 + 0x28);
  lVar5 = param_2 + 0x10;
  FUN_1004d368c(lVar5,param_3);
  if (param_2 + 0x18 == lVar5) {
LAB_1004d3650:
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0xb0);
    puVar1 = (ulong *)(lVar5 + 8);
    uVar4 = *puVar1;
    do {
      while( true ) {
        if (uVar4 >> 0x20 == 0) goto LAB_1004d3650;
        uVar6 = *puVar1;
        if (uVar6 == uVar4) break;
        ClearExclusiveLocal();
        uVar4 = uVar6;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 + 0x100000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
      uVar4 = uVar6;
    } while (cVar2 != '\0');
  }
  *param_1 = lVar5;
  func_0x000100466b80(param_2 + 0x28);
  return;
}



/* Entry: 1004d368c; end: 1004d3703;  */

long * FUN_1004d368c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      plVar2 = plVar5 + 4;
      func_0x000104a8fd24(plVar2,param_2);
      plVar1 = plVar5 + 1;
      if ((int)plVar2 == 0) {
        plVar4 = plVar5;
        plVar1 = plVar5;
      }
      plVar5 = (long *)*plVar1;
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (func_0x000104a8fd24(param_2,plVar4 + 4), (int)param_2 == 0)) {
      return plVar4;
    }
  }
  return plVar3;
}



/* Entry: 1004d3704; end: 1004d3817;  */

void FUN_1004d3704(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puStack_e0;
  undefined8 auStack_d8 [18];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = 0x398;
  func_0x000107c60e20();
  FUN_1004d3818(auStack_d8,param_2);
  puStack_e0 = (undefined8 *)*param_3;
  *param_3 = 0;
  puVar3 = auStack_d8;
  FUN_1004d3858(uVar1,puVar3,&puStack_e0,*param_4);
  puVar2 = puStack_e0;
  *param_1 = uVar1;
  puStack_e0 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)();
  }
  puVar2 = auStack_d8;
  FUN_1004d6d80();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  if ((int)puVar3 == 0) {
    func_0x000107c60bd8(puVar2);
  }
  func_0x000104bd46a0();
  uVar1 = *puVar3;
  puVar2[1] = puVar3[1];
  *puVar2 = uVar1;
  uVar4 = puVar3[3];
  uVar1 = puVar3[2];
  uVar6 = puVar3[5];
  uVar5 = puVar3[4];
  uVar7 = puVar3[6];
  uVar9 = puVar3[9];
  uVar8 = puVar3[8];
  puVar2[7] = puVar3[7];
  puVar2[6] = uVar7;
  puVar2[9] = uVar9;
  puVar2[8] = uVar8;
  puVar2[3] = uVar4;
  puVar2[2] = uVar1;
  puVar2[5] = uVar6;
  puVar2[4] = uVar5;
  uVar4 = puVar3[0xb];
  uVar1 = puVar3[10];
  uVar6 = puVar3[0xd];
  uVar5 = puVar3[0xc];
  uVar8 = puVar3[0xf];
  uVar7 = puVar3[0xe];
  *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)(puVar3 + 0x10);
  puVar2[0xd] = uVar6;
  puVar2[0xc] = uVar5;
  puVar2[0xf] = uVar8;
  puVar2[0xe] = uVar7;
  puVar2[0xb] = uVar4;
  puVar2[10] = uVar1;
  puVar2[0x11] = puVar3[0x11];
  puVar3[0x11] = 0;
  return;
}



/* Entry: 1004d3818; end: 1004d3857;  */

void FUN_1004d3818(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  param_1[0x11] = param_2[0x11];
  param_2[0x11] = 0;
  return;
}



/* Entry: 1004d3858; end: 1004d3ef7;  */

long * FUN_1004d3858(long *param_1,undefined8 param_2,long *param_3,ulong *param_4)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong **ppuVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  undefined8 uVar15;
  bool bVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong unaff_x28;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong *puStack_c0;
  long *plStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = (long)&PTR_DAT_1107c3308;
  param_1[1] = 0x100000000;
  param_1[2] = 0;
  plVar8 = param_1 + 3;
  plVar6 = plVar8;
  FUN_1004d3818();
  FUN_10048099c();
  plVar7 = param_1 + 0x28;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x27] = (long)plVar6;
  lVar12 = *param_3;
  *param_3 = 0;
  param_1[0x2a] = lVar12;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FUN_100460318();
  uStack_e8 = 120000;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((long)param_1 + 0x1d4) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = (long)(param_1 + 0x3d);
  param_1[0x42] = 0;
  param_1[0x3f] = (long)(param_1 + 0x40);
  param_1[0x40] = 0;
  param_1[0x29] = 20000;
  param_1[0x41] = 0;
  if (param_4 == (ulong *)0x0) {
    uStack_88 = 0x3ff999999999999a;
    uStack_80 = 0x3fc999999999999a;
    uVar18 = 1000;
  }
  else {
    uStack_e8 = 120000;
    if (*param_4 == 0) {
      bVar16 = false;
      uVar18 = 1000;
    }
    else {
      bVar16 = false;
      uVar20 = 0;
      uVar18 = 1000;
      lVar12 = 8;
      plVar6 = plVar7;
      do {
        puVar9 = (undefined8 *)(param_4[1] + lVar12) + -1;
        uVar15 = *(undefined8 *)(param_4[1] + lVar12);
        uVar3 = uVar15;
        func_0x000107c613c0(uVar15,"grpc.testing.fixed_reconnect_backoff_ms");
        if ((int)uVar3 == 0) {
          plVar6 = (long *)((ulong)plVar6 & 0xffffffff00000000 | 0x7fffffff);
          func_0x0001004865d8(puVar9,uVar18 & 0xffffffff | 0x6400000000,plVar6);
          uVar18 = (ulong)(int)puVar9;
          param_1[0x29] = uVar18;
          bVar16 = true;
          uStack_e8 = uVar18;
        }
        else {
          uVar3 = uVar15;
          func_0x000107c613c0(uVar15,"grpc.min_reconnect_backoff_ms");
          if ((int)uVar3 == 0) {
            unaff_x28 = unaff_x28 & 0xffffffff00000000 | 0x7fffffff;
            func_0x0001004865d8(puVar9,(ulong)*(uint *)(param_1 + 0x29) | 0x6400000000,unaff_x28);
            bVar16 = false;
            param_1[0x29] = (long)(int)puVar9;
          }
          else {
            uVar3 = uVar15;
            func_0x000107c613c0(uVar15,"grpc.max_reconnect_backoff_ms");
            if ((int)uVar3 == 0) {
              func_0x0001004865d8(puVar9,uStack_e8 & 0xffffffff | 0x6400000000);
              bVar16 = false;
              uStack_e8 = (long)(int)puVar9;
            }
            else {
              func_0x000107c613c0(uVar15,"grpc.initial_reconnect_backoff_ms");
              if ((int)uVar15 == 0) {
                func_0x0001004865d8(puVar9,uVar18 & 0xffffffff | 0x6400000000);
                bVar16 = false;
                uVar18 = (ulong)(int)puVar9;
              }
            }
          }
        }
        uVar20 = uVar20 + 1;
        lVar12 = lVar12 + 0x20;
      } while (uVar20 < *param_4);
    }
    bVar16 = !bVar16;
    uStack_80 = -(ulong)((long)((ulong)bVar16 << 0x3f) < 0) & 0x3fc999999999999a;
    uStack_88 = -(ulong)((long)((ulong)CONCAT14(bVar16,(uint)bVar16) << 0x3f) < 0) & 0x999999999999a
                ^ 0x3ff0000000000000;
  }
  uStack_90 = uVar18;
  uStack_78 = uStack_e8;
  func_0x0001004bf25c(param_1 + 0x43,&uStack_90);
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0xffffffff;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = (long)(param_1 + 0x71);
  FUN_10045fe88();
  plVar6 = param_1 + 0x15;
  param_1[0x20] = param_1[0xe];
  param_1[0x1f] = param_1[0xd];
  param_1[0x22] = param_1[0x10];
  param_1[0x21] = param_1[0xf];
  param_1[0x24] = param_1[0x12];
  param_1[0x23] = param_1[0x11];
  param_1[0x18] = param_1[6];
  param_1[0x17] = param_1[5];
  param_1[0x1a] = param_1[8];
  param_1[0x19] = param_1[7];
  param_1[0x1c] = param_1[10];
  param_1[0x1b] = param_1[9];
  param_1[0x1e] = param_1[0xc];
  param_1[0x1d] = param_1[0xb];
  param_1[0x2f] = (long)FUN_1008d9b84;
  param_1[0x30] = (long)param_1;
  param_1[0x31] = 0;
  *(int *)(param_1 + 0x25) = (int)param_1[0x13];
  param_1[0x16] = param_1[4];
  param_1[0x15] = *plVar8;
  puStack_c0 = (ulong *)0x0;
  plStack_b8 = (long *)0x0;
  ppuVar11 = &puStack_c0;
  plVar4 = plVar6;
  FUN_1004d3ef8(plVar6,param_4,&plStack_b8,ppuVar11);
  if ((int)plVar4 != 0) {
    if (plStack_b8 == (long *)0x0) {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                    ,0x29e,2,"assertion failed: %s");
      func_0x000107c60ebc();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1004d3d28);
      (*pcVar2)();
    }
    lVar12 = *plStack_b8;
    param_1[0x16] = plStack_b8[1];
    *plVar6 = lVar12;
    lVar12 = plStack_b8[2];
    lVar14 = plStack_b8[3];
    lVar22 = plStack_b8[5];
    lVar21 = plStack_b8[4];
    lVar23 = plStack_b8[6];
    lVar25 = plStack_b8[9];
    lVar24 = plStack_b8[8];
    param_1[0x1c] = plStack_b8[7];
    param_1[0x1b] = lVar23;
    param_1[0x1e] = lVar25;
    param_1[0x1d] = lVar24;
    param_1[0x18] = lVar14;
    param_1[0x17] = lVar12;
    param_1[0x1a] = lVar22;
    param_1[0x19] = lVar21;
    lVar12 = plStack_b8[10];
    lVar14 = plStack_b8[0xb];
    lVar22 = plStack_b8[0xd];
    lVar21 = plStack_b8[0xc];
    lVar24 = plStack_b8[0xf];
    lVar23 = plStack_b8[0xe];
    *(int *)(param_1 + 0x25) = (int)plStack_b8[0x10];
    param_1[0x22] = lVar22;
    param_1[0x21] = lVar21;
    param_1[0x24] = lVar24;
    param_1[0x23] = lVar23;
    param_1[0x20] = lVar14;
    param_1[0x1f] = lVar12;
    FUN_100460314();
  }
  puVar5 = puStack_c0;
  if (puStack_c0 == (ulong *)0x0) {
    func_0x0001004bf248();
    puVar5 = param_4;
  }
  param_1[0x26] = (long)puVar5;
  puVar10 = (ulong *)0x1;
  FUN_100480b50();
  if ((int)puVar5 != 0) {
    ppuVar11 = (ulong **)0x7fffffff;
    func_0x0001004865ac(param_1[0x26],"grpc.max_channel_trace_event_memory_per_node",0x1000,
                        0x7fffffff);
    FUN_1004d4034(&uStack_90,plVar8);
    if (uStack_90 == 0) {
      uStack_d8 = uStack_80;
      uStack_e0 = uStack_88;
      uStack_d0 = uStack_78;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_88 = 0;
    }
    else {
      FUN_10002b024(&uStack_e0,"<unknown address type>");
    }
    lVar12 = 0x138;
    func_0x000107c60e20();
    uStack_a8 = uStack_d8;
    uStack_b0 = uStack_e0;
    uStack_a0 = uStack_d0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    FUN_1004d6c0c();
    if ((long)uStack_a0 < 0) {
      func_0x000107c60e14(uStack_b0);
    }
    plVar6 = (long *)*plVar7;
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        lVar14 = *plVar4;
        cVar1 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar16) {
          *plVar4 = lVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    *plVar7 = lVar12;
    if ((long)uStack_d0 < 0) {
      func_0x000107c60e14(uStack_e0);
    }
    func_0x00010047c7d4(&uStack_90);
    lVar12 = *plVar7;
    FUN_10047e7b4(&uStack_90,"subchannel created");
    puVar5 = (ulong *)(lVar12 + 0xc0);
    puVar10 = &uStack_90;
    FUN_10047e7e4(puVar5,1,puVar10);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    func_0x00010047c7d4(&uStack_90);
    func_0x000104a8f848(param_1 + 0x70,param_1[0x71]);
    plVar6 = (long *)param_1[0x42];
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        lVar12 = *plVar4;
        cVar1 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar16) {
          *plVar4 = lVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    func_0x000104a8ebcc(param_1 + 0x3f,param_1[0x40]);
    lVar12 = param_1[0x3d];
    func_0x000104a8ec64(param_1 + 0x3c,lVar12);
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3c] = (long)(param_1 + 0x3d);
    FUN_1004bdf74(param_1 + 0x3b);
    FUN_1005a5f48(param_1 + 0x32);
    plVar6 = (long *)param_1[0x2d];
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        lVar14 = *plVar4;
        cVar1 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar16) {
          *plVar4 = lVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    func_0x000104a8e2f8(param_1 + 0x2a);
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) {
      plVar6 = plVar7 + 1;
      do {
        lVar14 = *plVar6;
        cVar1 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar16) {
          *plVar6 = lVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    FUN_1004d6d80(plVar8);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      plVar7 = plVar8 + 1;
      do {
        lVar14 = *plVar7;
        cVar1 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar16) {
          *plVar7 = lVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
    func_0x000107c60bd8(puVar5);
    func_0x000104bd46a0(puVar5);
    if (puRam00000001136a1dc0 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x18;
      func_0x000107c60e20();
      puVar13 = (ulong *)0x0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      puRam00000001136a1dc0 = puVar9;
    }
    else {
      puVar13 = (ulong *)*puRam00000001136a1dc0;
    }
    puVar17 = (ulong *)puRam00000001136a1dc0[1];
    if (puVar13 == puVar17) {
      plVar8 = (long *)0x0;
    }
    else {
      do {
        puVar19 = puVar13 + 1;
        plVar8 = (long *)*puVar13;
        (**(code **)(*plVar8 + 0x18))(plVar8,puVar5,lVar12,puVar10,ppuVar11);
        if (((ulong)plVar8 & 1) != 0) {
          return plVar8;
        }
        puVar13 = puVar19;
      } while (puVar19 != puVar17);
    }
    return plVar8;
  }
  return param_1;
}



/* Entry: 1004d3ef8; end: 1004d3fa7;  */

void FUN_1004d3ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  if (plRam00000001136a1dc0 == (long *)0x0) {
    plVar1 = (long *)0x18;
    func_0x000107c60e20();
    puVar2 = (ulong *)0x0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    *plVar1 = 0;
    plRam00000001136a1dc0 = plVar1;
  }
  else {
    puVar2 = (ulong *)*plRam00000001136a1dc0;
  }
  puVar3 = (ulong *)plRam00000001136a1dc0[1];
  do {
    if (puVar2 == puVar3) {
      return;
    }
    plVar1 = (long *)*puVar2;
    (**(code **)(*plVar1 + 0x18))(plVar1,param_1,param_2,param_3,param_4);
    puVar2 = puVar2 + 1;
  } while (((ulong)plVar1 & 1) == 0);
  return;
}



/* Entry: 1004d3fa8; end: 1004d3faf;  */

undefined8 FUN_1004d3fa8(void)

{
  return 0;
}



/* Entry: 1004d3fb0; end: 1004d4033;  */

/* WARNING: Removing unreachable block (ram,0x0001004d4468) */

char **** FUN_1004d3fb0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  uint *puVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  char ****ppppcVar6;
  undefined8 *puVar7;
  ulong uVar8;
  char ****ppppcVar9;
  char ***pppcVar10;
  char ****ppppcVar11;
  char ****ppppcVar12;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  int *piVar13;
  uint uVar14;
  char ***pppcStack_470;
  ulong uStack_468;
  byte bStack_459;
  char ***pppcStack_458;
  char ***pppcStack_450;
  ulong uStack_448;
  undefined8 uStack_440;
  char ***pppcStack_420;
  undefined7 uStack_418;
  undefined1 uStack_411;
  uint7 uStack_410;
  byte bStack_409;
  undefined *puStack_408;
  char **appcStack_3ee [5];
  undefined7 uStack_3c0;
  undefined1 uStack_3b9;
  uint7 uStack_3b8;
  char **appcStack_3ac [16];
  long lStack_328;
  undefined8 auStack_2d0 [2];
  char cStack_2b9;
  char **ppcStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  long *plStack_290;
  char **appcStack_288 [2];
  char cStack_271;
  undefined8 auStack_270 [2];
  char cStack_259;
  char ***pppcStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 auStack_240 [2];
  char cStack_229;
  char **ppcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  char ***pppcStack_210;
  undefined8 uStack_208;
  long lStack_200;
  char **appcStack_1f8 [2];
  char cStack_1e1;
  char **ppcStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  char ***pppcStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined8 auStack_1a4 [16];
  uint uStack_124;
  char ***pppcStack_120;
  undefined8 uStack_118;
  long lStack_110;
  char **ppcStack_88;
  long lStack_80;
  char *apcStack_78 [4];
  long lStack_58;
  
  if (param_1 != param_2) {
    if ((*(char *)((long)param_1 + 1) == '\x1e') &&
       (param_1[1] == 0 && *(int *)(param_1 + 2) == -0x10000)) {
      if (param_2 != (undefined8 *)0x0) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        param_2[0xd] = 0;
        param_2[0xc] = 0;
        param_2[0xf] = 0;
        param_2[0xe] = 0;
        param_2[9] = 0;
        param_2[8] = 0;
        param_2[0xb] = 0;
        param_2[10] = 0;
        param_2[5] = 0;
        param_2[4] = 0;
        param_2[7] = 0;
        param_2[6] = 0;
        param_2[1] = 0;
        *param_2 = 0;
        param_2[3] = 0;
        param_2[2] = 0;
        *(undefined1 *)((long)param_2 + 1) = 2;
        *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)((long)param_1 + 0x14);
        *(undefined2 *)((long)param_2 + 2) = *(undefined2 *)((long)param_1 + 2);
        *(undefined4 *)(param_2 + 0x10) = 0x10;
      }
      ppppcVar6 = (char ****)0x1;
    }
    else {
      ppppcVar6 = (char ****)0x0;
    }
    return ppppcVar6;
  }
  func_0x000107c2c2e4();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(uint *)(param_1 + 0x10) == 0) {
    func_0x000107c2b9c4(&pppcStack_120,"Empty address",0xd);
    ppppcVar6 = &pppcStack_120;
    FUN_10047bf0c(extraout_x8);
    ppppcVar9 = (char ****)pppcStack_120;
    if (((ulong)pppcStack_120 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  else {
    puVar7 = param_1;
    FUN_1004d3fb0();
    iVar5 = (int)puVar7;
    puVar7 = param_1;
    if (iVar5 != 0) {
      puVar7 = auStack_1a4;
    }
    bVar4 = *(byte *)((long)puVar7 + 1);
    uVar8 = (ulong)bVar4;
    if (bVar4 == 1) {
      ppcStack_88 = (char **)0x0;
      lStack_80 = 0;
      apcStack_78[0] = (char *)0x0;
      pppcStack_1c0 = (char ***)0x0;
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      uVar8 = (long)param_1 + 2;
      puVar7 = param_1;
      if (iVar5 != 0) {
        uVar8 = (ulong)auStack_1a4 | 2;
        puVar7 = auStack_1a4;
      }
      if (*(char *)((long)puVar7 + 2) == '\0') {
        uVar1 = (long)param_1 + 3;
        puVar7 = param_1;
        if (iVar5 != 0) {
          uVar1 = (ulong)auStack_1a4 | 3;
          puVar7 = auStack_1a4;
        }
        if (*(char *)((long)puVar7 + 3) == '\0') goto LAB_1004d4110;
        func_0x000107c60c64(&ppcStack_88,"unix-abstract");
        puVar2 = (uint *)(param_1 + 0x10);
        if (iVar5 != 0) {
          puVar2 = &uStack_124;
        }
        FUN_100741c30(&pppcStack_120,uVar1,(ulong)*puVar2 - 2);
        if ((long)uStack_1b0 < 0) {
          func_0x000107c60e14(pppcStack_1c0);
        }
        uStack_1b8 = uStack_118;
        pppcStack_1c0 = pppcStack_120;
        uStack_1b0 = lStack_110;
      }
      else {
LAB_1004d4110:
        func_0x000107c60c64(&ppcStack_88,&DAT_10f5173dd);
        func_0x000107c60c64(&pppcStack_1c0,uVar8);
      }
      uStack_1d8 = lStack_80;
      ppcStack_1e0 = ppcStack_88;
      lStack_1d0 = (long)apcStack_78[0];
      ppcStack_88 = (char **)0x0;
      lStack_80 = 0;
      apcStack_78[0] = (char *)0x0;
      FUN_10002b024(appcStack_1f8,"");
      uStack_208 = uStack_1b8;
      pppcStack_210 = pppcStack_1c0;
      lStack_200 = uStack_1b0;
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      pppcStack_1c0 = (char ***)0x0;
      uStack_220 = 0;
      uStack_218 = 0;
      ppcStack_228 = (char **)0x0;
      FUN_10002b024(auStack_240,"");
      ppppcVar6 = (char ****)appcStack_1f8;
      FUN_1004d5598(&pppcStack_120,&ppcStack_1e0,ppppcVar6,&pppcStack_210,&ppcStack_228,auStack_240)
      ;
      if (cStack_229 < '\0') {
        func_0x000107c60e14(auStack_240[0]);
      }
      pppcStack_258 = &ppcStack_228;
      FUN_10047c710(&pppcStack_258);
      if (lStack_200 < 0) {
        func_0x000107c60e14(pppcStack_210);
      }
      if (cStack_1e1 < '\0') {
        func_0x000107c60e14(appcStack_1f8[0]);
      }
      if (lStack_1d0 < 0) {
        func_0x000107c60e14(ppcStack_1e0);
      }
      if ((char ****)pppcStack_120 == (char ****)0x0) {
        FUN_1004d5800(&pppcStack_258,&uStack_118);
        extraout_x8[2] = uStack_250;
        extraout_x8[1] = pppcStack_258;
        extraout_x8[3] = uStack_248;
        *extraout_x8 = 0;
      }
      else {
        ppppcVar6 = &pppcStack_120;
        func_0x000104aa9b44(extraout_x8);
      }
      ppppcVar9 = &pppcStack_120;
      FUN_10047cac8();
      if ((long)uStack_1b0 < 0) {
        ppppcVar9 = (char ****)pppcStack_1c0;
        func_0x000107c60e14();
      }
    }
    else {
      if (bVar4 == 2) {
        piVar13 = (int *)&DAT_10f3f0b4e;
LAB_1004d4138:
        if (*piVar13 != 0x78696e75 || (char)piVar13[1] != '\0') {
          ppppcVar6 = (char ****)0x0;
          FUN_1004d466c(&ppcStack_88,puVar7);
          if ((char ***)ppcStack_88 == (char ***)0x0) {
            FUN_10002b024(auStack_270,piVar13);
            FUN_10002b024(appcStack_288,"");
            pppcVar10 = &ppcStack_88;
            FUN_1004d5530();
            plStack_298 = (long *)pppcVar10[1];
            plStack_2a0 = (long *)*pppcVar10;
            plStack_290 = (long *)pppcVar10[2];
            pppcVar10[1] = (char **)0x0;
            pppcVar10[2] = (char **)0x0;
            *pppcVar10 = (char **)0x0;
            ppcStack_2b8 = (char **)0x0;
            uStack_2b0 = 0;
            uStack_2a8 = 0;
            FUN_10002b024(auStack_2d0,"");
            ppppcVar6 = (char ****)appcStack_288;
            FUN_1004d5598(&pppcStack_120,auStack_270,ppppcVar6,&plStack_2a0,&ppcStack_2b8,
                          auStack_2d0);
            if (cStack_2b9 < '\0') {
              func_0x000107c60e14(auStack_2d0[0]);
            }
            pppcStack_1c0 = &ppcStack_2b8;
            FUN_10047c710(&pppcStack_1c0);
            if ((long)plStack_290 < 0) {
              func_0x000107c60e14(plStack_2a0);
            }
            if (cStack_271 < '\0') {
              func_0x000107c60e14(appcStack_288[0]);
            }
            if (cStack_259 < '\0') {
              func_0x000107c60e14(auStack_270[0]);
            }
            if ((char ****)pppcStack_120 == (char ****)0x0) {
              FUN_1004d5800(&pppcStack_1c0,&uStack_118);
              extraout_x8[2] = uStack_1b8;
              extraout_x8[1] = pppcStack_1c0;
              extraout_x8[3] = uStack_1b0;
              *extraout_x8 = 0;
            }
            else {
              ppppcVar6 = &pppcStack_120;
              func_0x000104aa9b44(extraout_x8);
            }
            FUN_10047cac8(&pppcStack_120);
          }
          else {
            *extraout_x8 = ppcStack_88;
            ppcStack_88 = (char **)0x36;
          }
          ppppcVar9 = (char ****)&ppcStack_88;
          func_0x00010047c7d4();
          goto LAB_1004d44a8;
        }
      }
      else if (bVar4 == 0x1e) {
        piVar13 = (int *)&DAT_10f55a0ed;
        goto LAB_1004d4138;
      }
      pppcStack_120 = (char ***)0x10f236ad5;
      uStack_118 = 0x1e;
      func_0x000107c2ba30(uVar8,apcStack_78);
      lStack_80 = uVar8 - (long)apcStack_78;
      ppcStack_88 = apcStack_78;
      FUN_10047c83c(&pppcStack_1c0,&pppcStack_120,&ppcStack_88);
      uVar8 = uStack_1b8;
      ppppcVar6 = (char ****)pppcStack_1c0;
      if (-1 < (long)uStack_1b0) {
        uVar8 = uStack_1b0 >> 0x38;
        ppppcVar6 = &pppcStack_1c0;
      }
      func_0x000107c2b9c4(&pppcStack_258,ppppcVar6,uVar8);
      ppppcVar6 = &pppcStack_258;
      FUN_10047bf0c(extraout_x8);
      ppppcVar9 = (char ****)pppcStack_258;
      if (((ulong)pppcStack_258 & 1) != 0) {
        FUN_10084dad0();
      }
      if ((long)uStack_1b0 < 0) {
        ppppcVar9 = (char ****)pppcStack_1c0;
        func_0x000107c60e14();
      }
    }
  }
LAB_1004d44a8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppppcVar9;
  }
  func_0x000107c60e78();
  FUN_10047cac8(&pppcStack_120);
  func_0x00010047c7d4(&ppcStack_88);
  func_0x000107c60bd8();
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppcVar11 = ppppcVar9;
  func_0x000107c60e5c();
  uVar3 = *(undefined4 *)ppppcVar11;
  if ((int)ppppcVar6 != 0) {
    ppppcVar6 = (char ****)appcStack_3ac;
    ppppcVar11 = ppppcVar9;
    FUN_1004d3fb0(ppppcVar9,appcStack_3ac);
    if ((int)ppppcVar11 != 0) {
      ppppcVar9 = ppppcVar6;
    }
  }
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3b9 = 0;
  bVar4 = *(byte *)((long)ppppcVar9 + 1);
  if (bVar4 == 0x1e) {
    ppppcVar6 = (char ****)(ulong)*(ushort *)((long)ppppcVar9 + 2);
    FUN_1004d4a44();
    ppppcVar11 = ppppcVar9 + 1;
    uVar14 = *(uint *)(ppppcVar9 + 3);
LAB_1004d476c:
    uVar8 = (ulong)*(byte *)((long)ppppcVar9 + 1);
    FUN_1004d4a4c(uVar8,ppppcVar11,appcStack_3ee,0x2e);
    if (uVar8 == 0) {
      bVar4 = *(byte *)((long)ppppcVar9 + 1);
LAB_1004d4814:
      uVar8 = (ulong)bVar4;
      pppcStack_420 = (char ***)0x10f236a47;
      uStack_418 = 0x19;
      uStack_411 = 0;
      func_0x000107c2ba30(uVar8,&uStack_440);
      uStack_448 = uVar8 - (long)&uStack_440;
      pppcStack_450 = (char ***)&uStack_440;
      FUN_10047c83c(&pppcStack_470,&pppcStack_420,&pppcStack_450);
      ppppcVar9 = (char ****)pppcStack_470;
      if (-1 < (char)bStack_459) {
        uStack_468 = (ulong)bStack_459;
        ppppcVar9 = &pppcStack_470;
      }
      func_0x000107c2b9c4(&pppcStack_458,ppppcVar9,uStack_468);
      iVar5 = (int)&pppcStack_458;
      FUN_10047bf0c(extraout_x8_00);
      ppppcVar11 = (char ****)pppcStack_458;
      if (((ulong)pppcStack_458 & 1) != 0) {
        FUN_10084dad0();
        ppppcVar11 = (char ****)pppcStack_458;
      }
      ppppcVar9 = &pppcStack_470;
      if ((char)bStack_459 < '\0') {
        func_0x000107c60e14(pppcStack_470);
        ppppcVar11 = (char ****)pppcStack_470;
        ppppcVar9 = &pppcStack_470;
      }
      goto LAB_1004d4944;
    }
    if (uVar14 == 0) {
      pppcVar10 = appcStack_3ee;
      func_0x000107c613d0();
      ppppcVar11 = (char ****)appcStack_3ee;
      FUN_1004d4a64(&pppcStack_420,ppppcVar11,pppcVar10,ppppcVar6);
      iVar5 = (int)pppcVar10;
      uStack_3c0 = uStack_418;
      uStack_3b9 = uStack_411;
      uStack_3b8 = uStack_410;
      ppppcVar6 = (char ****)(ulong)bStack_409;
      ppppcVar9 = (char ****)pppcStack_420;
    }
    else {
      pppcStack_420 = appcStack_3ee;
      uStack_418 = 0x1005616c4;
      uStack_411 = 0;
      uStack_410 = (uint7)uVar14;
      bStack_409 = 0;
      puStack_408 = &UNK_10ae73cc0;
      FUN_1004d4da0(&pppcStack_450,"%s%%%u",6,&pppcStack_420,2);
      uVar8 = uStack_448;
      ppppcVar11 = (char ****)pppcStack_450;
      if (-1 < (char)uStack_440._7_1_) {
        uVar8 = (ulong)uStack_440._7_1_;
        ppppcVar11 = &pppcStack_450;
      }
      FUN_1004d4a64(&pppcStack_420,ppppcVar11,uVar8,ppppcVar6);
      ppppcVar9 = (char ****)pppcStack_420;
      iVar5 = (int)uVar8;
      uStack_3c0 = uStack_418;
      uStack_3b9 = uStack_411;
      uStack_3b8 = uStack_410;
      ppppcVar6 = (char ****)(ulong)bStack_409;
      if ((char)uStack_440._7_1_ < '\0') {
        ppppcVar11 = (char ****)pppcStack_450;
        func_0x000107c60e14();
      }
    }
    func_0x000107c60e5c();
    *(undefined4 *)ppppcVar11 = uVar3;
    extraout_x8_00[1] = ppppcVar9;
    extraout_x8_00[2] = CONCAT17(uStack_3b9,uStack_3c0);
    *(ulong *)((long)extraout_x8_00 + 0x17) = CONCAT71(uStack_3b8,uStack_3b9);
    *(char *)((long)extraout_x8_00 + 0x1f) = (char)ppppcVar6;
  }
  else {
    if (bVar4 == 2) {
      ppppcVar6 = (char ****)(ulong)*(ushort *)((long)ppppcVar9 + 2);
      FUN_1004d4a44();
      uVar14 = 0;
      ppppcVar11 = (char ****)((long)ppppcVar9 + 4);
      goto LAB_1004d476c;
    }
    if (bVar4 != 1) goto LAB_1004d4814;
    ppppcVar6 = (char ****)((long)ppppcVar9 + 2);
    if (*(char *)ppppcVar6 == '\0') {
      if (*(int *)(ppppcVar9 + 0x10) + -1 < 1) {
        func_0x000107c2b9c4(&pppcStack_420,"empty UDS abstract path",0x17);
        iVar5 = (int)&pppcStack_420;
        FUN_10047bf0c(extraout_x8_00);
        ppppcVar11 = (char ****)pppcStack_420;
        if (((ulong)pppcStack_420 & 1) != 0) {
          FUN_10084dad0();
        }
        goto LAB_1004d4944;
      }
      ppppcVar11 = &pppcStack_420;
      ppppcVar12 = ppppcVar6;
      FUN_100741c30(ppppcVar11);
      iVar5 = (int)ppppcVar12;
    }
    else {
      ppppcVar11 = ppppcVar6;
      func_0x000107c613dc(ppppcVar6,0x68);
      if (ppppcVar11 == (char ****)0x68) {
        func_0x000107c2b9c4(&pppcStack_420,"UDS path is not null-terminated",0x1f);
        iVar5 = (int)&pppcStack_420;
        FUN_10047bf0c(extraout_x8_00);
        ppppcVar11 = (char ****)pppcStack_420;
        if (((ulong)pppcStack_420 & 1) != 0) {
          FUN_10084dad0();
        }
        goto LAB_1004d4944;
      }
      ppppcVar11 = &pppcStack_420;
      ppppcVar12 = ppppcVar6;
      FUN_10002b024(ppppcVar11);
      iVar5 = (int)ppppcVar12;
    }
    uStack_3c0 = uStack_418;
    uStack_3b9 = uStack_411;
    uStack_3b8 = uStack_410;
    extraout_x8_00[1] = pppcStack_420;
    extraout_x8_00[2] = CONCAT17(uStack_411,uStack_418);
    *(ulong *)((long)extraout_x8_00 + 0x17) = CONCAT71(uStack_410,uStack_411);
    *(byte *)((long)extraout_x8_00 + 0x1f) = bStack_409;
  }
  *extraout_x8_00 = 0;
LAB_1004d4944:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return ppppcVar11;
  }
  func_0x000107c60e78();
  if ((iVar5 != 0) && (func_0x000104bd46a0(ppppcVar11), ((uint)ppppcVar6 >> 7 & 1) != 0)) {
    func_0x000107c60e14(ppppcVar9);
  }
  func_0x000107c60bd8(ppppcVar11);
  return (char ****)
         (ulong)(((uint)ppppcVar11 & 0xff00ff00) >> 8 | ((uint)ppppcVar11 & 0xff00ff) << 8);
}



/* Entry: 1004d4034; end: 1004d466b;  */

/* WARNING: Removing unreachable block (ram,0x0001004d4468) */

char **** FUN_1004d4034(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  ulong uVar8;
  char ****ppppcVar9;
  char ***pppcVar10;
  char ****ppppcVar11;
  char ****ppppcVar12;
  char ****ppppcVar13;
  undefined8 *extraout_x8;
  int *piVar14;
  uint uVar15;
  char ***pppcStack_460;
  ulong uStack_458;
  byte bStack_449;
  char ***pppcStack_448;
  char ***pppcStack_440;
  ulong uStack_438;
  undefined8 uStack_430;
  char ***pppcStack_410;
  undefined7 uStack_408;
  undefined1 uStack_401;
  uint7 uStack_400;
  byte bStack_3f9;
  undefined *puStack_3f8;
  char **appcStack_3de [5];
  undefined7 uStack_3b0;
  undefined1 uStack_3a9;
  uint7 uStack_3a8;
  char **appcStack_39c [16];
  long lStack_318;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  char **ppcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  long *plStack_280;
  char **appcStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  char ***pppcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 auStack_230 [2];
  char cStack_219;
  char **ppcStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  char ***pppcStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  char **appcStack_1e8 [2];
  char cStack_1d1;
  char **ppcStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  char ***pppcStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined1 auStack_194 [128];
  uint uStack_114;
  char ***pppcStack_110;
  undefined8 uStack_108;
  long lStack_100;
  char **ppcStack_78;
  long lStack_70;
  char *apcStack_68 [4];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(uint *)(param_2 + 0x80) == 0) {
    func_0x000107c2b9c4(&pppcStack_110,"Empty address",0xd);
    ppppcVar12 = &pppcStack_110;
    FUN_10047bf0c(param_1);
    ppppcVar9 = (char ****)pppcStack_110;
    if (((ulong)pppcStack_110 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  else {
    puVar7 = param_2;
    FUN_1004d3fb0(param_2,auStack_194);
    iVar6 = (int)puVar7;
    puVar7 = param_2;
    if (iVar6 != 0) {
      puVar7 = auStack_194;
    }
    bVar4 = puVar7[1];
    uVar8 = (ulong)bVar4;
    if (bVar4 == 1) {
      ppcStack_78 = (char **)0x0;
      lStack_70 = 0;
      apcStack_68[0] = (char *)0x0;
      pppcStack_1b0 = (char ***)0x0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      puVar7 = param_2 + 2;
      puVar1 = param_2;
      if (iVar6 != 0) {
        puVar7 = (undefined1 *)((ulong)auStack_194 | 2);
        puVar1 = auStack_194;
      }
      if (puVar1[2] == '\0') {
        puVar1 = param_2 + 3;
        puVar5 = param_2;
        if (iVar6 != 0) {
          puVar1 = (undefined1 *)((ulong)auStack_194 | 3);
          puVar5 = auStack_194;
        }
        if (puVar5[3] == '\0') goto LAB_1004d4110;
        func_0x000107c60c64(&ppcStack_78,"unix-abstract");
        puVar2 = (uint *)(param_2 + 0x80);
        if (iVar6 != 0) {
          puVar2 = &uStack_114;
        }
        FUN_100741c30(&pppcStack_110,puVar1,(ulong)*puVar2 - 2);
        if ((long)uStack_1a0 < 0) {
          func_0x000107c60e14(pppcStack_1b0);
        }
        uStack_1a8 = uStack_108;
        pppcStack_1b0 = pppcStack_110;
        uStack_1a0 = lStack_100;
      }
      else {
LAB_1004d4110:
        func_0x000107c60c64(&ppcStack_78,&DAT_10f5173dd);
        func_0x000107c60c64(&pppcStack_1b0,puVar7);
      }
      uStack_1c8 = lStack_70;
      ppcStack_1d0 = ppcStack_78;
      lStack_1c0 = (long)apcStack_68[0];
      ppcStack_78 = (char **)0x0;
      lStack_70 = 0;
      apcStack_68[0] = (char *)0x0;
      FUN_10002b024(appcStack_1e8,"");
      uStack_1f8 = uStack_1a8;
      pppcStack_200 = pppcStack_1b0;
      lStack_1f0 = uStack_1a0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      pppcStack_1b0 = (char ***)0x0;
      uStack_210 = 0;
      uStack_208 = 0;
      ppcStack_218 = (char **)0x0;
      FUN_10002b024(auStack_230,"");
      ppppcVar12 = (char ****)appcStack_1e8;
      FUN_1004d5598(&pppcStack_110,&ppcStack_1d0,ppppcVar12,&pppcStack_200,&ppcStack_218,auStack_230
                   );
      if (cStack_219 < '\0') {
        func_0x000107c60e14(auStack_230[0]);
      }
      pppcStack_248 = &ppcStack_218;
      FUN_10047c710(&pppcStack_248);
      if (lStack_1f0 < 0) {
        func_0x000107c60e14(pppcStack_200);
      }
      if (cStack_1d1 < '\0') {
        func_0x000107c60e14(appcStack_1e8[0]);
      }
      if (lStack_1c0 < 0) {
        func_0x000107c60e14(ppcStack_1d0);
      }
      if ((char ****)pppcStack_110 == (char ****)0x0) {
        FUN_1004d5800(&pppcStack_248,&uStack_108);
        param_1[2] = uStack_240;
        param_1[1] = pppcStack_248;
        param_1[3] = uStack_238;
        *param_1 = 0;
      }
      else {
        ppppcVar12 = &pppcStack_110;
        func_0x000104aa9b44(param_1);
      }
      ppppcVar9 = &pppcStack_110;
      FUN_10047cac8();
      if ((long)uStack_1a0 < 0) {
        ppppcVar9 = (char ****)pppcStack_1b0;
        func_0x000107c60e14();
      }
    }
    else {
      if (bVar4 == 2) {
        piVar14 = (int *)&DAT_10f3f0b4e;
LAB_1004d4138:
        if (*piVar14 != 0x78696e75 || (char)piVar14[1] != '\0') {
          ppppcVar12 = (char ****)0x0;
          FUN_1004d466c(&ppcStack_78,puVar7);
          if ((char ***)ppcStack_78 == (char ***)0x0) {
            FUN_10002b024(auStack_260,piVar14);
            FUN_10002b024(appcStack_278,"");
            pppcVar10 = &ppcStack_78;
            FUN_1004d5530();
            plStack_288 = (long *)pppcVar10[1];
            plStack_290 = (long *)*pppcVar10;
            plStack_280 = (long *)pppcVar10[2];
            pppcVar10[1] = (char **)0x0;
            pppcVar10[2] = (char **)0x0;
            *pppcVar10 = (char **)0x0;
            ppcStack_2a8 = (char **)0x0;
            uStack_2a0 = 0;
            uStack_298 = 0;
            FUN_10002b024(auStack_2c0,"");
            ppppcVar12 = (char ****)appcStack_278;
            FUN_1004d5598(&pppcStack_110,auStack_260,ppppcVar12,&plStack_290,&ppcStack_2a8,
                          auStack_2c0);
            if (cStack_2a9 < '\0') {
              func_0x000107c60e14(auStack_2c0[0]);
            }
            pppcStack_1b0 = &ppcStack_2a8;
            FUN_10047c710(&pppcStack_1b0);
            if ((long)plStack_280 < 0) {
              func_0x000107c60e14(plStack_290);
            }
            if (cStack_261 < '\0') {
              func_0x000107c60e14(appcStack_278[0]);
            }
            if (cStack_249 < '\0') {
              func_0x000107c60e14(auStack_260[0]);
            }
            if ((char ****)pppcStack_110 == (char ****)0x0) {
              FUN_1004d5800(&pppcStack_1b0,&uStack_108);
              param_1[2] = uStack_1a8;
              param_1[1] = pppcStack_1b0;
              param_1[3] = uStack_1a0;
              *param_1 = 0;
            }
            else {
              ppppcVar12 = &pppcStack_110;
              func_0x000104aa9b44(param_1);
            }
            FUN_10047cac8(&pppcStack_110);
          }
          else {
            *param_1 = ppcStack_78;
            ppcStack_78 = (char **)0x36;
          }
          ppppcVar9 = (char ****)&ppcStack_78;
          func_0x00010047c7d4();
          goto LAB_1004d44a8;
        }
      }
      else if (bVar4 == 0x1e) {
        piVar14 = (int *)&DAT_10f55a0ed;
        goto LAB_1004d4138;
      }
      pppcStack_110 = (char ***)0x10f236ad5;
      uStack_108 = 0x1e;
      func_0x000107c2ba30(uVar8,apcStack_68);
      lStack_70 = uVar8 - (long)apcStack_68;
      ppcStack_78 = apcStack_68;
      FUN_10047c83c(&pppcStack_1b0,&pppcStack_110,&ppcStack_78);
      uVar8 = uStack_1a8;
      ppppcVar12 = (char ****)pppcStack_1b0;
      if (-1 < (long)uStack_1a0) {
        uVar8 = uStack_1a0 >> 0x38;
        ppppcVar12 = &pppcStack_1b0;
      }
      func_0x000107c2b9c4(&pppcStack_248,ppppcVar12,uVar8);
      ppppcVar12 = &pppcStack_248;
      FUN_10047bf0c(param_1);
      ppppcVar9 = (char ****)pppcStack_248;
      if (((ulong)pppcStack_248 & 1) != 0) {
        FUN_10084dad0();
      }
      if ((long)uStack_1a0 < 0) {
        ppppcVar9 = (char ****)pppcStack_1b0;
        func_0x000107c60e14();
      }
    }
  }
LAB_1004d44a8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppcVar9;
  }
  func_0x000107c60e78();
  FUN_10047cac8(&pppcStack_110);
  func_0x00010047c7d4(&ppcStack_78);
  func_0x000107c60bd8();
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppcVar11 = ppppcVar9;
  func_0x000107c60e5c();
  uVar3 = *(undefined4 *)ppppcVar11;
  if ((int)ppppcVar12 != 0) {
    ppppcVar12 = (char ****)appcStack_39c;
    ppppcVar11 = ppppcVar9;
    FUN_1004d3fb0(ppppcVar9,appcStack_39c);
    if ((int)ppppcVar11 != 0) {
      ppppcVar9 = ppppcVar12;
    }
  }
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_3a9 = 0;
  bVar4 = *(byte *)((long)ppppcVar9 + 1);
  if (bVar4 == 0x1e) {
    ppppcVar12 = (char ****)(ulong)*(ushort *)((long)ppppcVar9 + 2);
    FUN_1004d4a44();
    ppppcVar11 = ppppcVar9 + 1;
    uVar15 = *(uint *)(ppppcVar9 + 3);
LAB_1004d476c:
    uVar8 = (ulong)*(byte *)((long)ppppcVar9 + 1);
    FUN_1004d4a4c(uVar8,ppppcVar11,appcStack_3de,0x2e);
    if (uVar8 == 0) {
      bVar4 = *(byte *)((long)ppppcVar9 + 1);
LAB_1004d4814:
      uVar8 = (ulong)bVar4;
      pppcStack_410 = (char ***)0x10f236a47;
      uStack_408 = 0x19;
      uStack_401 = 0;
      func_0x000107c2ba30(uVar8,&uStack_430);
      uStack_438 = uVar8 - (long)&uStack_430;
      pppcStack_440 = (char ***)&uStack_430;
      FUN_10047c83c(&pppcStack_460,&pppcStack_410,&pppcStack_440);
      ppppcVar9 = (char ****)pppcStack_460;
      if (-1 < (char)bStack_449) {
        uStack_458 = (ulong)bStack_449;
        ppppcVar9 = &pppcStack_460;
      }
      func_0x000107c2b9c4(&pppcStack_448,ppppcVar9,uStack_458);
      iVar6 = (int)&pppcStack_448;
      FUN_10047bf0c(extraout_x8);
      ppppcVar11 = (char ****)pppcStack_448;
      if (((ulong)pppcStack_448 & 1) != 0) {
        FUN_10084dad0();
        ppppcVar11 = (char ****)pppcStack_448;
      }
      ppppcVar9 = &pppcStack_460;
      if ((char)bStack_449 < '\0') {
        func_0x000107c60e14(pppcStack_460);
        ppppcVar11 = (char ****)pppcStack_460;
        ppppcVar9 = &pppcStack_460;
      }
      goto LAB_1004d4944;
    }
    if (uVar15 == 0) {
      pppcVar10 = appcStack_3de;
      func_0x000107c613d0();
      ppppcVar11 = (char ****)appcStack_3de;
      FUN_1004d4a64(&pppcStack_410,ppppcVar11,pppcVar10,ppppcVar12);
      iVar6 = (int)pppcVar10;
      uStack_3b0 = uStack_408;
      uStack_3a9 = uStack_401;
      uStack_3a8 = uStack_400;
      ppppcVar12 = (char ****)(ulong)bStack_3f9;
      ppppcVar9 = (char ****)pppcStack_410;
    }
    else {
      pppcStack_410 = appcStack_3de;
      uStack_408 = 0x1005616c4;
      uStack_401 = 0;
      uStack_400 = (uint7)uVar15;
      bStack_3f9 = 0;
      puStack_3f8 = &UNK_10ae73cc0;
      FUN_1004d4da0(&pppcStack_440,"%s%%%u",6,&pppcStack_410,2);
      uVar8 = uStack_438;
      ppppcVar11 = (char ****)pppcStack_440;
      if (-1 < (char)uStack_430._7_1_) {
        uVar8 = (ulong)uStack_430._7_1_;
        ppppcVar11 = &pppcStack_440;
      }
      FUN_1004d4a64(&pppcStack_410,ppppcVar11,uVar8,ppppcVar12);
      ppppcVar9 = (char ****)pppcStack_410;
      iVar6 = (int)uVar8;
      uStack_3b0 = uStack_408;
      uStack_3a9 = uStack_401;
      uStack_3a8 = uStack_400;
      ppppcVar12 = (char ****)(ulong)bStack_3f9;
      if ((char)uStack_430._7_1_ < '\0') {
        ppppcVar11 = (char ****)pppcStack_440;
        func_0x000107c60e14();
      }
    }
    func_0x000107c60e5c();
    *(undefined4 *)ppppcVar11 = uVar3;
    extraout_x8[1] = ppppcVar9;
    extraout_x8[2] = CONCAT17(uStack_3a9,uStack_3b0);
    *(ulong *)((long)extraout_x8 + 0x17) = CONCAT71(uStack_3a8,uStack_3a9);
    *(char *)((long)extraout_x8 + 0x1f) = (char)ppppcVar12;
  }
  else {
    if (bVar4 == 2) {
      ppppcVar12 = (char ****)(ulong)*(ushort *)((long)ppppcVar9 + 2);
      FUN_1004d4a44();
      uVar15 = 0;
      ppppcVar11 = (char ****)((long)ppppcVar9 + 4);
      goto LAB_1004d476c;
    }
    if (bVar4 != 1) goto LAB_1004d4814;
    ppppcVar12 = (char ****)((long)ppppcVar9 + 2);
    if (*(char *)ppppcVar12 == '\0') {
      if (*(int *)(ppppcVar9 + 0x10) + -1 < 1) {
        func_0x000107c2b9c4(&pppcStack_410,"empty UDS abstract path",0x17);
        iVar6 = (int)&pppcStack_410;
        FUN_10047bf0c(extraout_x8);
        ppppcVar11 = (char ****)pppcStack_410;
        if (((ulong)pppcStack_410 & 1) != 0) {
          FUN_10084dad0();
        }
        goto LAB_1004d4944;
      }
      ppppcVar11 = &pppcStack_410;
      ppppcVar13 = ppppcVar12;
      FUN_100741c30(ppppcVar11);
      iVar6 = (int)ppppcVar13;
    }
    else {
      ppppcVar11 = ppppcVar12;
      func_0x000107c613dc(ppppcVar12,0x68);
      if (ppppcVar11 == (char ****)0x68) {
        func_0x000107c2b9c4(&pppcStack_410,"UDS path is not null-terminated",0x1f);
        iVar6 = (int)&pppcStack_410;
        FUN_10047bf0c(extraout_x8);
        ppppcVar11 = (char ****)pppcStack_410;
        if (((ulong)pppcStack_410 & 1) != 0) {
          FUN_10084dad0();
        }
        goto LAB_1004d4944;
      }
      ppppcVar11 = &pppcStack_410;
      ppppcVar13 = ppppcVar12;
      FUN_10002b024(ppppcVar11);
      iVar6 = (int)ppppcVar13;
    }
    uStack_3b0 = uStack_408;
    uStack_3a9 = uStack_401;
    uStack_3a8 = uStack_400;
    extraout_x8[1] = pppcStack_410;
    extraout_x8[2] = CONCAT17(uStack_401,uStack_408);
    *(ulong *)((long)extraout_x8 + 0x17) = CONCAT71(uStack_400,uStack_401);
    *(byte *)((long)extraout_x8 + 0x1f) = bStack_3f9;
  }
  *extraout_x8 = 0;
LAB_1004d4944:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
    return ppppcVar11;
  }
  func_0x000107c60e78();
  if ((iVar6 != 0) && (func_0x000104bd46a0(ppppcVar11), ((uint)ppppcVar12 >> 7 & 1) != 0)) {
    func_0x000107c60e14(ppppcVar9);
  }
  func_0x000107c60bd8(ppppcVar11);
  return (char ****)
         (ulong)(((uint)ppppcVar11 & 0xff00ff00) >> 8 | ((uint)ppppcVar11 & 0xff00ff) << 8);
}



/* Entry: 1004d466c; end: 1004d4a43;  */

char **** FUN_1004d466c(undefined8 *param_1,char ****param_2,char ****param_3)

{
  undefined4 uVar1;
  byte bVar2;
  char ****ppppcVar3;
  ulong uVar4;
  char ***pppcVar5;
  int iVar6;
  char ****ppppcVar7;
  uint uVar8;
  char ***pppcStack_1a0;
  ulong uStack_198;
  byte bStack_189;
  char ***pppcStack_188;
  char ***pppcStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  char ***pppcStack_150;
  undefined7 uStack_148;
  undefined1 uStack_141;
  uint7 uStack_140;
  byte bStack_139;
  undefined *puStack_138;
  char **appcStack_11e [5];
  undefined7 uStack_f0;
  undefined1 uStack_e9;
  uint7 uStack_e8;
  char **appcStack_dc [16];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppcVar3 = param_2;
  func_0x000107c60e5c();
  uVar1 = *(undefined4 *)ppppcVar3;
  if ((int)param_3 != 0) {
    param_3 = (char ****)appcStack_dc;
    ppppcVar3 = param_2;
    FUN_1004d3fb0(param_2,appcStack_dc);
    if ((int)ppppcVar3 != 0) {
      param_2 = param_3;
    }
  }
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_e9 = 0;
  bVar2 = *(byte *)((long)param_2 + 1);
  if (bVar2 == 0x1e) {
    param_3 = (char ****)(ulong)*(ushort *)((long)param_2 + 2);
    FUN_1004d4a44();
    ppppcVar3 = param_2 + 1;
    uVar8 = *(uint *)(param_2 + 3);
LAB_1004d476c:
    uVar4 = (ulong)*(byte *)((long)param_2 + 1);
    FUN_1004d4a4c(uVar4,ppppcVar3,appcStack_11e,0x2e);
    if (uVar4 == 0) {
      bVar2 = *(byte *)((long)param_2 + 1);
LAB_1004d4814:
      uVar4 = (ulong)bVar2;
      pppcStack_150 = (char ***)0x10f236a47;
      uStack_148 = 0x19;
      uStack_141 = 0;
      func_0x000107c2ba30(uVar4,&uStack_170);
      uStack_178 = uVar4 - (long)&uStack_170;
      pppcStack_180 = (char ***)&uStack_170;
      FUN_10047c83c(&pppcStack_1a0,&pppcStack_150,&pppcStack_180);
      ppppcVar3 = (char ****)pppcStack_1a0;
      if (-1 < (char)bStack_189) {
        uStack_198 = (ulong)bStack_189;
        ppppcVar3 = &pppcStack_1a0;
      }
      func_0x000107c2b9c4(&pppcStack_188,ppppcVar3,uStack_198);
      iVar6 = (int)&pppcStack_188;
      FUN_10047bf0c(param_1);
      ppppcVar3 = (char ****)pppcStack_188;
      if (((ulong)pppcStack_188 & 1) != 0) {
        FUN_10084dad0();
        ppppcVar3 = (char ****)pppcStack_188;
      }
      param_2 = &pppcStack_1a0;
      if ((char)bStack_189 < '\0') {
        func_0x000107c60e14(pppcStack_1a0);
        ppppcVar3 = (char ****)pppcStack_1a0;
        param_2 = &pppcStack_1a0;
      }
      goto LAB_1004d4944;
    }
    if (uVar8 == 0) {
      pppcVar5 = appcStack_11e;
      func_0x000107c613d0();
      ppppcVar3 = (char ****)appcStack_11e;
      FUN_1004d4a64(&pppcStack_150,ppppcVar3,pppcVar5,param_3);
      iVar6 = (int)pppcVar5;
      uStack_f0 = uStack_148;
      uStack_e9 = uStack_141;
      uStack_e8 = uStack_140;
      param_3 = (char ****)(ulong)bStack_139;
      param_2 = (char ****)pppcStack_150;
    }
    else {
      pppcStack_150 = appcStack_11e;
      uStack_148 = 0x1005616c4;
      uStack_141 = 0;
      uStack_140 = (uint7)uVar8;
      bStack_139 = 0;
      puStack_138 = &UNK_10ae73cc0;
      FUN_1004d4da0(&pppcStack_180,"%s%%%u",6,&pppcStack_150,2);
      uVar4 = uStack_178;
      ppppcVar3 = (char ****)pppcStack_180;
      if (-1 < (char)uStack_170._7_1_) {
        uVar4 = (ulong)uStack_170._7_1_;
        ppppcVar3 = &pppcStack_180;
      }
      FUN_1004d4a64(&pppcStack_150,ppppcVar3,uVar4,param_3);
      param_2 = (char ****)pppcStack_150;
      iVar6 = (int)uVar4;
      uStack_f0 = uStack_148;
      uStack_e9 = uStack_141;
      uStack_e8 = uStack_140;
      param_3 = (char ****)(ulong)bStack_139;
      if ((char)uStack_170._7_1_ < '\0') {
        ppppcVar3 = (char ****)pppcStack_180;
        func_0x000107c60e14();
      }
    }
    func_0x000107c60e5c();
    *(undefined4 *)ppppcVar3 = uVar1;
    param_1[1] = param_2;
    param_1[2] = CONCAT17(uStack_e9,uStack_f0);
    *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_e8,uStack_e9);
    *(char *)((long)param_1 + 0x1f) = (char)param_3;
  }
  else {
    if (bVar2 == 2) {
      param_3 = (char ****)(ulong)*(ushort *)((long)param_2 + 2);
      FUN_1004d4a44();
      uVar8 = 0;
      ppppcVar3 = (char ****)((long)param_2 + 4);
      goto LAB_1004d476c;
    }
    if (bVar2 != 1) goto LAB_1004d4814;
    param_3 = (char ****)((long)param_2 + 2);
    if (*(char *)param_3 == '\0') {
      if (*(int *)(param_2 + 0x10) + -1 < 1) {
        func_0x000107c2b9c4(&pppcStack_150,"empty UDS abstract path",0x17);
        iVar6 = (int)&pppcStack_150;
        FUN_10047bf0c(param_1);
        ppppcVar3 = (char ****)pppcStack_150;
        if (((ulong)pppcStack_150 & 1) != 0) {
          FUN_10084dad0();
        }
        goto LAB_1004d4944;
      }
      ppppcVar3 = &pppcStack_150;
      ppppcVar7 = param_3;
      FUN_100741c30(ppppcVar3);
      iVar6 = (int)ppppcVar7;
    }
    else {
      ppppcVar3 = param_3;
      func_0x000107c613dc(param_3,0x68);
      if (ppppcVar3 == (char ****)0x68) {
        func_0x000107c2b9c4(&pppcStack_150,"UDS path is not null-terminated",0x1f);
        iVar6 = (int)&pppcStack_150;
        FUN_10047bf0c(param_1);
        ppppcVar3 = (char ****)pppcStack_150;
        if (((ulong)pppcStack_150 & 1) != 0) {
          FUN_10084dad0();
        }
        goto LAB_1004d4944;
      }
      ppppcVar3 = &pppcStack_150;
      ppppcVar7 = param_3;
      FUN_10002b024(ppppcVar3);
      iVar6 = (int)ppppcVar7;
    }
    uStack_f0 = uStack_148;
    uStack_e9 = uStack_141;
    uStack_e8 = uStack_140;
    param_1[1] = pppcStack_150;
    param_1[2] = CONCAT17(uStack_141,uStack_148);
    *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_140,uStack_141);
    *(byte *)((long)param_1 + 0x1f) = bStack_139;
  }
  *param_1 = 0;
LAB_1004d4944:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppppcVar3;
  }
  func_0x000107c60e78();
  if ((iVar6 != 0) && (func_0x000104bd46a0(ppppcVar3), ((uint)param_3 >> 7 & 1) != 0)) {
    func_0x000107c60e14(param_2);
  }
  func_0x000107c60bd8(ppppcVar3);
  return (char ****)(ulong)(((uint)ppppcVar3 & 0xff00ff00) >> 8 | ((uint)ppppcVar3 & 0xff00ff) << 8)
  ;
}



/* Entry: 1004d4a44; end: 1004d4a4b;  */

uint FUN_1004d4a44(uint param_1)

{
  return (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
}



/* Entry: 1004d4a4c; end: 1004d4a63;  */

char * FUN_1004d4a4c(char *param_1,long param_2,ulong param_3,ulong param_4,undefined8 param_5,
                    undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char *pcVar2;
  char ***pppcVar3;
  char ***pppcVar4;
  char ***pppcVar5;
  char **ppcVar6;
  char **ppcVar7;
  char ***pppcVar8;
  int *piVar9;
  char *extraout_x8;
  uint uVar10;
  char ***unaff_x20;
  char ***pppcVar11;
  char ***pppcVar12;
  char **ppcStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  int aiStack_4fc [3];
  undefined2 uStack_4f0;
  char cStack_4ee;
  int iStack_4ec;
  char *pcStack_4e8;
  char ***pppcStack_4e0;
  undefined8 uStack_4d8;
  undefined1 *puStack_4d0;
  undefined1 auStack_4c8 [1024];
  long lStack_c8;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  char *pcStack_58;
  long lStack_50;
  char **ppcStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  code *pcStack_30;
  long lStack_28;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if (param_4 >> 0x20 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbedbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__inet_ntop_11034c4a8)();
    return param_1;
  }
  func_0x000107c2c380();
  pcStack_18 = FUN_1004d4a64;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_58 = param_1;
  lStack_50 = param_2;
  if ((param_2 == 0) || (*param_1 == '[')) {
LAB_1004d4a94:
    ppcStack_48 = &pcStack_58;
    uStack_40 = 0x1004d504c;
    uStack_38 = param_3 & 0xffffffff;
    pcStack_30 = FUN_1004d50a8;
    pcVar2 = "%s:%d";
    pppcVar4 = &ppcStack_48;
    pppcVar8 = (char ***)0x5;
    piVar9 = (int *)0x2;
    puStack_20 = &stack0xfffffffffffffff0;
    FUN_1004d4da0();
  }
  else {
    do {
      if (param_2 == 0) goto LAB_1004d4a94;
      lVar1 = param_2 + -1;
      param_2 = param_2 + -1;
    } while (param_1[lVar1] != ':');
    if (param_2 == -1) goto LAB_1004d4a94;
    ppcStack_48 = &pcStack_58;
    uStack_40 = 0x1004d504c;
    uStack_38 = param_3 & 0xffffffff;
    pcStack_30 = FUN_1004d50a8;
    pcVar2 = "[%s]:%d";
    pppcVar4 = &ppcStack_48;
    pppcVar8 = (char ***)0x7;
    piVar9 = (int *)0x2;
    puStack_20 = &stack0xfffffffffffffff0;
    FUN_1004d4da0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pcVar2;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  pcStack_68 = FUN_1004d4b54;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcStack_518 = &pcStack_4e8;
  puStack_4d0 = auStack_4c8;
  uStack_4d8 = 0;
  pppcVar11 = pppcVar4;
  uStack_510 = param_5;
  uStack_508 = param_6;
  pcStack_4e8 = pcVar2;
  pppcStack_4e0 = pppcVar8;
  ppuStack_70 = &puStack_20;
  if (piVar9 == (int *)0xffffffffffffffff) {
    ppcVar6 = pppcVar4[2];
    ppcVar7 = pppcVar4[3];
    if (ppcVar6 != ppcVar7) {
      unaff_x20 = (char ***)0x0;
      pppcVar12 = (char ***)pppcVar4[1];
      pppcVar3 = pppcVar12;
      do {
        pppcVar3 = (char ***)((long)pppcVar3 + (long)unaff_x20);
        unaff_x20 = (char ***)((long)pppcVar12 + ((long)ppcVar6[1] - (long)pppcVar3));
        if (*(char *)ppcVar6 == '\x01') {
          pppcVar5 = &ppcStack_518;
          pppcVar8 = (char ***)(ppcVar6 + 2);
          FUN_1004d4ec0(pppcVar5,pppcVar8);
          if (((ulong)pppcVar5 & 1) == 0) goto LAB_1004d4ca8;
        }
        else {
          pppcVar8 = pppcVar3;
          pppcVar11 = unaff_x20;
          FUN_1004d4e28(&pcStack_4e8,pppcVar3,unaff_x20);
        }
        ppcVar6 = ppcVar6 + 4;
      } while (ppcVar6 != ppcVar7);
    }
    uVar10 = *(byte *)pppcVar4 ^ 1;
  }
  else {
    iStack_4ec = 0;
    if (piVar9 != (int *)0x0) {
      unaff_x20 = (char ***)((long)pppcVar4 + (long)piVar9);
      do {
        pppcVar8 = pppcVar4;
        pppcVar11 = (char ***)((long)unaff_x20 - (long)pppcVar8);
        pppcVar3 = pppcVar8;
        func_0x000107c610ac(pppcVar8,0x25,pppcVar11);
        if (pppcVar3 == (char ***)0x0) {
          FUN_1004d4e28(&pcStack_4e8,pppcVar8,pppcVar11);
          break;
        }
        pppcVar11 = (char ***)((long)pppcVar3 - (long)pppcVar8);
        FUN_1004d4e28(&pcStack_4e8,pppcVar8,pppcVar11);
        pppcVar4 = (char ***)((long)pppcVar3 + 1);
        if (unaff_x20 <= pppcVar4) goto LAB_1004d4ca8;
        if ((char)(&UNK_10e52bfd0)[*(byte *)pppcVar4] < '\0') {
          if (*(byte *)pppcVar4 == 0x25) {
            pppcVar11 = (char ***)0x1;
            pppcVar8 = (char ***)"%";
            FUN_1004d4e28(&pcStack_4e8,"%",1);
            goto LAB_1004d4c60;
          }
          aiStack_4fc[1] = -1;
          aiStack_4fc[2] = -1;
          uStack_4f0 = 0x900;
          cStack_4ee = '\x13';
          pppcVar11 = (char ***)aiStack_4fc;
          piVar9 = &iStack_4ec;
          pppcVar8 = unaff_x20;
          func_0x000107c2b9a4(pppcVar4,unaff_x20,pppcVar11,piVar9);
          uVar10 = 0;
          if (pppcVar4 == (char ***)0x0) goto LAB_1004d4d3c;
          pppcVar3 = &ppcStack_518;
          pppcVar8 = (char ***)aiStack_4fc;
          FUN_1004d4ec0(pppcVar3,pppcVar8);
          if (((ulong)pppcVar3 & 1) == 0) goto LAB_1004d4ca8;
        }
        else {
          if (iStack_4ec < 0) goto LAB_1004d4ca8;
          aiStack_4fc[1] = -1;
          aiStack_4fc[2] = -1;
          uStack_4f0 = 0x900;
          aiStack_4fc[0] = iStack_4ec + 1;
          pppcVar12 = &ppcStack_518;
          pppcVar8 = (char ***)aiStack_4fc;
          cStack_4ee = (&UNK_10e52bfd0)[*(byte *)pppcVar4];
          iStack_4ec = aiStack_4fc[0];
          FUN_1004d4ec0(pppcVar12,pppcVar8);
          if (((ulong)pppcVar12 & 1) == 0) goto LAB_1004d4ca8;
LAB_1004d4c60:
          pppcVar4 = (char ***)((long)pppcVar3 + 2);
        }
      } while (pppcVar4 != unaff_x20);
    }
    uVar10 = 1;
  }
LAB_1004d4d3c:
  ppcVar6 = &pcStack_4e8;
  FUN_1004d54f0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return (char *)(ulong)(uVar10 & 1);
  }
  func_0x000107c60e78();
  FUN_1004d54f0(&pcStack_4e8);
  ppcVar7 = ppcVar6;
  func_0x000107c60bd8(ppcVar6);
  extraout_x8[0] = '\0';
  extraout_x8[1] = '\0';
  extraout_x8[2] = '\0';
  extraout_x8[3] = '\0';
  extraout_x8[4] = '\0';
  extraout_x8[5] = '\0';
  extraout_x8[6] = '\0';
  extraout_x8[7] = '\0';
  extraout_x8[8] = '\0';
  extraout_x8[9] = '\0';
  extraout_x8[10] = '\0';
  extraout_x8[0xb] = '\0';
  extraout_x8[0xc] = '\0';
  extraout_x8[0xd] = '\0';
  extraout_x8[0xe] = '\0';
  extraout_x8[0xf] = '\0';
  extraout_x8[0x10] = '\0';
  extraout_x8[0x11] = '\0';
  extraout_x8[0x12] = '\0';
  extraout_x8[0x13] = '\0';
  extraout_x8[0x14] = '\0';
  extraout_x8[0x15] = '\0';
  extraout_x8[0x16] = '\0';
  extraout_x8[0x17] = '\0';
  pcVar2 = extraout_x8;
  FUN_1004d4b54(extraout_x8,0x1004d54ec,ppcVar7,pppcVar8,pppcVar11,piVar9,param_7,param_8,unaff_x20,
                ppcVar6,&ppuStack_70,FUN_1004d4da0);
  if (((ulong)pcVar2 & 1) == 0) {
    if (extraout_x8[0x17] < '\0') {
      **(undefined1 **)extraout_x8 = 0;
      extraout_x8[8] = '\0';
      extraout_x8[9] = '\0';
      extraout_x8[10] = '\0';
      extraout_x8[0xb] = '\0';
      extraout_x8[0xc] = '\0';
      extraout_x8[0xd] = '\0';
      extraout_x8[0xe] = '\0';
      extraout_x8[0xf] = '\0';
    }
    else {
      *extraout_x8 = '\0';
      extraout_x8[0x17] = '\0';
    }
  }
  return pcVar2;
LAB_1004d4ca8:
  uVar10 = 0;
  goto LAB_1004d4d3c;
}



/* Entry: 1004d4a64; end: 1004d4b53;  */

char * FUN_1004d4a64(char *param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                    undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char *pcVar2;
  char ***pppcVar3;
  char ***pppcVar4;
  char ***pppcVar5;
  char **ppcVar6;
  char **ppcVar7;
  char ***pppcVar8;
  int *piVar9;
  char *extraout_x8;
  uint uVar10;
  char ***unaff_x20;
  char ***pppcVar11;
  char ***pppcVar12;
  char **ppcStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  int aiStack_4ec [3];
  undefined2 uStack_4e0;
  char cStack_4de;
  int iStack_4dc;
  char *pcStack_4d8;
  char ***pppcStack_4d0;
  undefined8 uStack_4c8;
  undefined1 *puStack_4c0;
  undefined1 auStack_4b8 [1024];
  long lStack_b8;
  undefined1 *puStack_60;
  code *pcStack_58;
  char *pcStack_48;
  long lStack_40;
  char **ppcStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  code *pcStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_48 = param_1;
  lStack_40 = param_2;
  if ((param_2 == 0) || (*param_1 == '[')) {
LAB_1004d4a94:
    ppcStack_38 = &pcStack_48;
    uStack_30 = 0x1004d504c;
    uStack_28 = param_3 & 0xffffffff;
    pcStack_20 = FUN_1004d50a8;
    pcVar2 = "%s:%d";
    pppcVar4 = &ppcStack_38;
    pppcVar8 = (char ***)0x5;
    piVar9 = (int *)0x2;
    FUN_1004d4da0();
  }
  else {
    do {
      if (param_2 == 0) goto LAB_1004d4a94;
      lVar1 = param_2 + -1;
      param_2 = param_2 + -1;
    } while (param_1[lVar1] != ':');
    if (param_2 == -1) goto LAB_1004d4a94;
    ppcStack_38 = &pcStack_48;
    uStack_30 = 0x1004d504c;
    uStack_28 = param_3 & 0xffffffff;
    pcStack_20 = FUN_1004d50a8;
    pcVar2 = "[%s]:%d";
    pppcVar4 = &ppcStack_38;
    pppcVar8 = (char ***)0x7;
    piVar9 = (int *)0x2;
    FUN_1004d4da0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return pcVar2;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  pcStack_58 = FUN_1004d4b54;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcStack_508 = &pcStack_4d8;
  puStack_4c0 = auStack_4b8;
  uStack_4c8 = 0;
  pppcVar11 = pppcVar4;
  uStack_500 = param_5;
  uStack_4f8 = param_6;
  pcStack_4d8 = pcVar2;
  pppcStack_4d0 = pppcVar8;
  puStack_60 = &stack0xfffffffffffffff0;
  if (piVar9 == (int *)0xffffffffffffffff) {
    ppcVar6 = pppcVar4[2];
    ppcVar7 = pppcVar4[3];
    if (ppcVar6 != ppcVar7) {
      unaff_x20 = (char ***)0x0;
      pppcVar12 = (char ***)pppcVar4[1];
      pppcVar3 = pppcVar12;
      do {
        pppcVar3 = (char ***)((long)pppcVar3 + (long)unaff_x20);
        unaff_x20 = (char ***)((long)pppcVar12 + ((long)ppcVar6[1] - (long)pppcVar3));
        if (*(char *)ppcVar6 == '\x01') {
          pppcVar5 = &ppcStack_508;
          pppcVar8 = (char ***)(ppcVar6 + 2);
          FUN_1004d4ec0(pppcVar5,pppcVar8);
          if (((ulong)pppcVar5 & 1) == 0) goto LAB_1004d4ca8;
        }
        else {
          pppcVar8 = pppcVar3;
          pppcVar11 = unaff_x20;
          FUN_1004d4e28(&pcStack_4d8,pppcVar3,unaff_x20);
        }
        ppcVar6 = ppcVar6 + 4;
      } while (ppcVar6 != ppcVar7);
    }
    uVar10 = *(byte *)pppcVar4 ^ 1;
  }
  else {
    iStack_4dc = 0;
    if (piVar9 != (int *)0x0) {
      unaff_x20 = (char ***)((long)pppcVar4 + (long)piVar9);
      do {
        pppcVar8 = pppcVar4;
        pppcVar11 = (char ***)((long)unaff_x20 - (long)pppcVar8);
        pppcVar3 = pppcVar8;
        func_0x000107c610ac(pppcVar8,0x25,pppcVar11);
        if (pppcVar3 == (char ***)0x0) {
          FUN_1004d4e28(&pcStack_4d8,pppcVar8,pppcVar11);
          break;
        }
        pppcVar11 = (char ***)((long)pppcVar3 - (long)pppcVar8);
        FUN_1004d4e28(&pcStack_4d8,pppcVar8,pppcVar11);
        pppcVar4 = (char ***)((long)pppcVar3 + 1);
        if (unaff_x20 <= pppcVar4) goto LAB_1004d4ca8;
        if ((char)(&UNK_10e52bfd0)[*(byte *)pppcVar4] < '\0') {
          if (*(byte *)pppcVar4 == 0x25) {
            pppcVar11 = (char ***)0x1;
            pppcVar8 = (char ***)"%";
            FUN_1004d4e28(&pcStack_4d8,"%",1);
            goto LAB_1004d4c60;
          }
          aiStack_4ec[1] = -1;
          aiStack_4ec[2] = -1;
          uStack_4e0 = 0x900;
          cStack_4de = '\x13';
          pppcVar11 = (char ***)aiStack_4ec;
          piVar9 = &iStack_4dc;
          pppcVar8 = unaff_x20;
          func_0x000107c2b9a4(pppcVar4,unaff_x20,pppcVar11,piVar9);
          uVar10 = 0;
          if (pppcVar4 == (char ***)0x0) goto LAB_1004d4d3c;
          pppcVar3 = &ppcStack_508;
          pppcVar8 = (char ***)aiStack_4ec;
          FUN_1004d4ec0(pppcVar3,pppcVar8);
          if (((ulong)pppcVar3 & 1) == 0) goto LAB_1004d4ca8;
        }
        else {
          if (iStack_4dc < 0) goto LAB_1004d4ca8;
          aiStack_4ec[1] = -1;
          aiStack_4ec[2] = -1;
          uStack_4e0 = 0x900;
          aiStack_4ec[0] = iStack_4dc + 1;
          pppcVar12 = &ppcStack_508;
          pppcVar8 = (char ***)aiStack_4ec;
          cStack_4de = (&UNK_10e52bfd0)[*(byte *)pppcVar4];
          iStack_4dc = aiStack_4ec[0];
          FUN_1004d4ec0(pppcVar12,pppcVar8);
          if (((ulong)pppcVar12 & 1) == 0) goto LAB_1004d4ca8;
LAB_1004d4c60:
          pppcVar4 = (char ***)((long)pppcVar3 + 2);
        }
      } while (pppcVar4 != unaff_x20);
    }
    uVar10 = 1;
  }
LAB_1004d4d3c:
  ppcVar6 = &pcStack_4d8;
  FUN_1004d54f0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return (char *)(ulong)(uVar10 & 1);
  }
  func_0x000107c60e78();
  FUN_1004d54f0(&pcStack_4d8);
  ppcVar7 = ppcVar6;
  func_0x000107c60bd8(ppcVar6);
  extraout_x8[0] = '\0';
  extraout_x8[1] = '\0';
  extraout_x8[2] = '\0';
  extraout_x8[3] = '\0';
  extraout_x8[4] = '\0';
  extraout_x8[5] = '\0';
  extraout_x8[6] = '\0';
  extraout_x8[7] = '\0';
  extraout_x8[8] = '\0';
  extraout_x8[9] = '\0';
  extraout_x8[10] = '\0';
  extraout_x8[0xb] = '\0';
  extraout_x8[0xc] = '\0';
  extraout_x8[0xd] = '\0';
  extraout_x8[0xe] = '\0';
  extraout_x8[0xf] = '\0';
  extraout_x8[0x10] = '\0';
  extraout_x8[0x11] = '\0';
  extraout_x8[0x12] = '\0';
  extraout_x8[0x13] = '\0';
  extraout_x8[0x14] = '\0';
  extraout_x8[0x15] = '\0';
  extraout_x8[0x16] = '\0';
  extraout_x8[0x17] = '\0';
  pcVar2 = extraout_x8;
  FUN_1004d4b54(extraout_x8,0x1004d54ec,ppcVar7,pppcVar8,pppcVar11,piVar9,param_7,param_8,unaff_x20,
                ppcVar6,&puStack_60,FUN_1004d4da0);
  if (((ulong)pcVar2 & 1) == 0) {
    if (extraout_x8[0x17] < '\0') {
      **(undefined1 **)extraout_x8 = 0;
      extraout_x8[8] = '\0';
      extraout_x8[9] = '\0';
      extraout_x8[10] = '\0';
      extraout_x8[0xb] = '\0';
      extraout_x8[0xc] = '\0';
      extraout_x8[0xd] = '\0';
      extraout_x8[0xe] = '\0';
      extraout_x8[0xf] = '\0';
    }
    else {
      *extraout_x8 = '\0';
      extraout_x8[0x17] = '\0';
    }
  }
  return pcVar2;
LAB_1004d4ca8:
  uVar10 = 0;
  goto LAB_1004d4d3c;
}



/* Entry: 1004d4b54; end: 1004d4d9f;  */

undefined8 *
FUN_1004d4b54(undefined8 param_1,byte *param_2,byte *param_3,int *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  byte *pbVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  uint uVar7;
  byte *unaff_x20;
  char *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *puStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  int aiStack_49c [3];
  undefined2 uStack_490;
  char cStack_48e;
  int iStack_48c;
  undefined8 uStack_488;
  byte *pbStack_480;
  undefined8 uStack_478;
  undefined1 *puStack_470;
  undefined1 auStack_468 [1024];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_4b8 = &uStack_488;
  puStack_470 = auStack_468;
  uStack_478 = 0;
  pbVar9 = param_3;
  uStack_4b0 = param_5;
  uStack_4a8 = param_6;
  uStack_488 = param_1;
  pbStack_480 = param_2;
  if (param_4 == (int *)0xffffffffffffffff) {
    pcVar8 = *(char **)(param_3 + 0x10);
    pcVar1 = *(char **)(param_3 + 0x18);
    if (pcVar8 != pcVar1) {
      unaff_x20 = (byte *)0x0;
      pbVar10 = *(byte **)(param_3 + 8);
      pbVar2 = pbVar10;
      do {
        pbVar2 = pbVar2 + (long)unaff_x20;
        unaff_x20 = pbVar10 + (*(long *)(pcVar8 + 8) - (long)pbVar2);
        if (*pcVar8 == '\x01') {
          ppuVar3 = &puStack_4b8;
          param_2 = (byte *)(pcVar8 + 0x10);
          FUN_1004d4ec0(ppuVar3,param_2);
          if (((ulong)ppuVar3 & 1) == 0) goto LAB_1004d4ca8;
        }
        else {
          param_2 = pbVar2;
          pbVar9 = unaff_x20;
          FUN_1004d4e28(&uStack_488,pbVar2,unaff_x20);
        }
        pcVar8 = pcVar8 + 0x20;
      } while (pcVar8 != pcVar1);
    }
    uVar7 = *param_3 ^ 1;
  }
  else {
    iStack_48c = 0;
    if (param_4 != (int *)0x0) {
      unaff_x20 = param_3 + (long)param_4;
      do {
        param_2 = param_3;
        pbVar9 = unaff_x20 + -(long)param_2;
        pbVar2 = param_2;
        func_0x000107c610ac(param_2,0x25,pbVar9);
        if (pbVar2 == (byte *)0x0) {
          FUN_1004d4e28(&uStack_488,param_2,pbVar9);
          break;
        }
        pbVar9 = pbVar2 + -(long)param_2;
        FUN_1004d4e28(&uStack_488,param_2,pbVar9);
        param_3 = pbVar2 + 1;
        if (unaff_x20 <= param_3) goto LAB_1004d4ca8;
        if ((char)(&UNK_10e52bfd0)[*param_3] < '\0') {
          if (*param_3 == 0x25) {
            pbVar9 = (byte *)0x1;
            param_2 = (byte *)"%";
            FUN_1004d4e28(&uStack_488,"%",1);
            goto LAB_1004d4c60;
          }
          aiStack_49c[1] = -1;
          aiStack_49c[2] = -1;
          uStack_490 = 0x900;
          cStack_48e = '\x13';
          pbVar9 = (byte *)aiStack_49c;
          param_4 = &iStack_48c;
          param_2 = unaff_x20;
          func_0x000107c2b9a4(param_3,unaff_x20,pbVar9,param_4);
          uVar7 = 0;
          if (param_3 == (byte *)0x0) goto LAB_1004d4d3c;
          ppuVar3 = &puStack_4b8;
          param_2 = (byte *)aiStack_49c;
          FUN_1004d4ec0(ppuVar3,param_2);
          if (((ulong)ppuVar3 & 1) == 0) goto LAB_1004d4ca8;
        }
        else {
          if (iStack_48c < 0) goto LAB_1004d4ca8;
          aiStack_49c[1] = -1;
          aiStack_49c[2] = -1;
          uStack_490 = 0x900;
          aiStack_49c[0] = iStack_48c + 1;
          ppuVar3 = &puStack_4b8;
          param_2 = (byte *)aiStack_49c;
          cStack_48e = (&UNK_10e52bfd0)[*param_3];
          iStack_48c = aiStack_49c[0];
          FUN_1004d4ec0(ppuVar3,param_2);
          if (((ulong)ppuVar3 & 1) == 0) goto LAB_1004d4ca8;
LAB_1004d4c60:
          param_3 = pbVar2 + 2;
        }
      } while (param_3 != unaff_x20);
    }
    uVar7 = 1;
  }
LAB_1004d4d3c:
  puVar4 = &uStack_488;
  FUN_1004d54f0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    FUN_1004d54f0(&uStack_488);
    puVar5 = puVar4;
    func_0x000107c60bd8(puVar4);
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    puVar6 = extraout_x8;
    FUN_1004d4b54(extraout_x8,0x1004d54ec,puVar5,param_2,pbVar9,param_4,param_7,param_8,unaff_x20,
                  puVar4,&stack0xfffffffffffffff0,FUN_1004d4da0);
    if (((ulong)puVar6 & 1) == 0) {
      if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
        *(undefined1 *)*extraout_x8 = 0;
        extraout_x8[1] = 0;
      }
      else {
        *(undefined1 *)extraout_x8 = 0;
        *(undefined1 *)((long)extraout_x8 + 0x17) = 0;
      }
    }
    return puVar6;
  }
  return (undefined8 *)(ulong)(uVar7 & 1);
LAB_1004d4ca8:
  uVar7 = 0;
  goto LAB_1004d4d3c;
}



/* Entry: 1004d4da0; end: 1004d4e27;  */

void FUN_1004d4da0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = param_1;
  FUN_1004d4b54(param_1,0x1004d54ec,param_2,param_3,param_4,param_5);
  if (((ulong)puVar1 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      *(undefined1 *)*param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)((long)param_1 + 0x17) = 0;
    }
  }
  return;
}



/* Entry: 1004d4e28; end: 1004d4ebf;  */

void FUN_1004d4e28(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_3 != 0) {
    lVar2 = param_1[3];
    param_1[2] = param_1[2] + param_3;
    if ((ulong)((long)param_1 + (0x420 - lVar2)) <= param_3) {
      puVar1 = param_1 + 4;
      (*(code *)param_1[1])(*param_1,puVar1,lVar2 - (long)puVar1);
      param_1[3] = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0001004d4ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[1])(*param_1,param_2,param_3);
      return;
    }
    func_0x000107c610b4(lVar2,param_2,param_3);
    param_1[3] = param_1[3] + param_3;
  }
  return;
}



/* Entry: 1004d4ec0; end: 1004d4ffb;  */

void FUN_1004d4ec0(undefined8 *param_1,int *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uStack_48;
  uint uStack_44;
  
  iVar3 = *param_2;
  if ((ulong)param_1[2] <= (long)iVar3 - 1U) {
    return;
  }
  lVar6 = param_1[1];
  if ((char)param_2[3] == '\0') {
    uVar5 = 0xffffffff00000000;
    uVar7 = 0xffffffff;
    goto LAB_1004d4fb0;
  }
  uStack_44 = param_2[1];
  if ((int)uStack_44 < -1) {
    if ((ulong)param_1[2] < (ulong)~uStack_44) {
      return;
    }
    lVar1 = lVar6 + (ulong)~uStack_44 * 0x10;
    uVar4 = *(undefined8 *)(lVar1 + -0x10);
    (**(code **)(lVar1 + -8))(uVar4,0x13,0,&uStack_44);
    if ((int)uVar4 == 0) {
      return;
    }
    if (-1 < (int)uStack_44) goto LAB_1004d4f40;
    if (uStack_44 < 0x80000002) {
      uStack_44 = 0x80000001;
    }
    uStack_44 = -uStack_44;
    uVar7 = 1;
  }
  else {
LAB_1004d4f40:
    uVar7 = 0;
  }
  uStack_48 = param_2[2];
  if ((int)uStack_48 < -1) {
    if ((ulong)param_1[2] < (ulong)~uStack_48) {
      return;
    }
    lVar1 = param_1[1] + (ulong)~uStack_48 * 0x10;
    uVar4 = *(undefined8 *)(lVar1 + -0x10);
    (**(code **)(lVar1 + -8))(uVar4,0x13,0,&uStack_48);
    if ((int)uVar4 == 0) {
      return;
    }
  }
  uVar5 = (ulong)uStack_44 << 0x20 | (ulong)(*(byte *)(param_2 + 3) | uVar7) << 8;
  uVar7 = uStack_48;
LAB_1004d4fb0:
  puVar2 = (undefined8 *)(lVar6 + ((long)iVar3 - 1U) * 0x10);
  (*(code *)puVar2[1])(*puVar2,uVar5 | *(byte *)((long)param_2 + 0xe),uVar7,*param_1);
  return;
}



/* Entry: 1004d4ffc; end: 1004d50a7;  */

void FUN_1004d4ffc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  
  uVar1 = (uint)param_3 >> 8;
  if ((uVar1 & 0xff) == 0) {
    FUN_1004d4e28(param_5,param_1,param_2);
  }
  else {
    func_0x000107c2b9a0(param_5,param_1,param_2,param_3 >> 0x20,param_4,uVar1 & 1);
  }
  return;
}



/* Entry: 1004d50a8; end: 1004d50e7;  */

/* WARNING: Type propagation algorithm not settling */

ulong ** FUN_1004d50a8(undefined1 *param_1,ulong *param_2,undefined4 param_3,ulong *param_4)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  ulong **ppuVar4;
  undefined1 *puVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  ulong *puVar12;
  ulong *puStack_88;
  undefined4 uStack_80;
  ulong *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined2 uStack_3e;
  undefined1 auStack_3c [4];
  long lStack_38;
  
  uVar3 = (uint)param_1;
  if (((ulong)param_2 & 0xff) == 0x13) {
    *(uint *)param_4 = uVar3;
    return (ulong **)0x1;
  }
  if ((2L << ((ulong)param_2 & 0x3f) & 0x9fffaU) == 0) {
    return (ulong **)0x0;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = (uint)param_2 & 0xff;
  puStack_88 = param_2;
  uStack_80 = param_3;
  if (uVar6 < 7) {
    if (3 < uVar6) {
      if (uVar6 == 4) {
        puVar12 = (ulong *)auStack_3c;
        do {
          uVar3 = (uint)param_1;
          puVar12 = (ulong *)((long)puVar12 + -1);
          *(byte *)puVar12 = (byte)param_1 & 7 | 0x30;
          param_1 = (undefined1 *)(ulong)(uVar3 >> 3);
        } while (7 < uVar3);
      }
      else {
        if (uVar6 == 5) {
          puVar5 = (undefined1 *)&uStack_68;
          goto LAB_1004d5200;
        }
        puVar12 = (ulong *)(auStack_3c + 1);
        do {
          puVar7 = puVar12;
          uVar2 = *(ushort *)(&UNK_10e530083 + ((ulong)param_1 & 0xff) * 2);
          *(ushort *)((long)puVar7 + -3) = uVar2;
          uVar3 = (uint)param_1;
          param_1 = (undefined1 *)((ulong)param_1 >> 8 & 0xffffff);
          puVar12 = (ulong *)((long)puVar7 + -2);
        } while (0xff < uVar3);
        if ((uVar2 & 0xff) != 0x30) {
          puVar12 = (ulong *)((long)puVar7 + -3);
        }
      }
LAB_1004d527c:
      param_1 = auStack_3c;
      puStack_78 = puVar12;
      goto LAB_1004d5280;
    }
    if (uVar6 - 2 < 2) goto LAB_1004d51d8;
    func_0x000107c2b98c((int)(char)param_1,param_2,param_3,param_4);
  }
  else {
    if (uVar6 - 8 < 8) {
      ppuVar4 = &puStack_88;
      func_0x000107c34ff4((double)(int)uVar3);
      param_2 = param_4;
      goto LAB_1004d52b8;
    }
    if (uVar6 == 7) {
      puVar12 = (ulong *)auStack_3c;
      do {
        puVar12 = (ulong *)((long)puVar12 + -1);
        *(undefined *)puVar12 = (&DAT_10f3ddedc)[(ulong)param_1 & 0xf];
        uVar3 = (uint)param_1;
        param_1 = (undefined1 *)((ulong)param_1 >> 4 & 0xfffffff);
      } while (0xf < uVar3);
      goto LAB_1004d527c;
    }
LAB_1004d51d8:
    puVar5 = (undefined1 *)&uStack_68;
    if ((int)uVar3 < 0) {
      puVar5 = (undefined1 *)((long)&uStack_68 + 1);
      uStack_68._0_1_ = 0x2d;
      param_1 = (undefined1 *)(ulong)-uVar3;
    }
LAB_1004d5200:
    puVar12 = &uStack_68;
    puStack_78 = puVar12;
    FUN_1004d52e8(param_1,puVar5);
LAB_1004d5280:
    lStack_70 = (long)param_1 - (long)puVar12;
    if (((ulong)param_2 & 0xff00) == 0) {
      param_2 = puStack_78;
      FUN_1004d4e28(param_4);
    }
    else {
      func_0x000107c34ff0(&puStack_78,param_2,param_3,param_4);
    }
  }
  ppuVar4 = (ulong **)0x1;
LAB_1004d52b8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    func_0x000107c60e78();
    uVar3 = (uint)ppuVar4;
    if (uVar3 < 100) {
      uVar6 = (int)(uVar3 - 10) >> 8;
      *(short *)param_2 =
           (short)((uVar3 + (uVar3 * 0x67 >> 10) * 0xfffff6) * 0x100 + (uVar3 * 0x67 >> 10) + 0x3030
                  >> (ulong)(uVar6 & 8));
      ppuVar4 = (ulong **)((long)param_2 + (long)(int)uVar6 + 2);
    }
    else if (uVar3 >> 4 < 0x271) {
      uVar6 = uVar3 * 0x28f6 >> 0x14;
      uVar6 = uVar6 | (uVar3 + uVar6 * -100) * 0x10000;
      uVar3 = uVar6 * 0x100 + (uVar6 * 0x67 >> 10 & 0xf000f) * -0x9ff;
      uVar6 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
      uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      uVar6 = (uint)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
      *(uint *)param_2 = uVar3 + 0x30303030 >> (ulong)(uVar6 & 0x18);
      ppuVar4 = (ulong **)((long)param_2 + (4 - (ulong)(uVar6 >> 3)));
    }
    else if (uVar3 < 100000000) {
      uVar9 = ((ulong)ppuVar4 & 0xffffffff) / 10000 |
              (ulong)(uVar3 + (int)(((ulong)ppuVar4 & 0xffffffff) / 10000) * -10000) << 0x20;
      lVar1 = uVar9 * 0x10000 + (uVar9 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
      uVar9 = lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff;
      uVar8 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
      *param_2 = uVar9 + 0x3030303030303030 >> (uVar8 & 0x38);
      ppuVar4 = (ulong **)((long)param_2 + (8 - (uVar8 >> 3)));
    }
    else {
      iVar10 = (int)(((ulong)ppuVar4 & 0xffffffff) / 100000000);
      uVar3 = uVar3 + iVar10 * -100000000;
      uVar9 = (ulong)uVar3 / 10000 | (ulong)(uVar3 % 10000) << 0x20;
      lVar1 = uVar9 * 0x10000 + (uVar9 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
      uVar3 = iVar10 + -10 >> 8;
      uVar11 = (uint)(((ulong)ppuVar4 & 0xffffffff) / 100000000);
      uVar6 = uVar11 / 10;
      *(short *)param_2 =
           (short)((uVar6 | (uVar11 + uVar6 * 0xfffff6) * 0x100) + 0x3030 >> (ulong)(uVar3 & 8));
      *(ulong *)((long)param_2 + (long)(int)uVar3 + 2) =
           lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff +
           0x3030303030303030;
      ppuVar4 = (ulong **)((long)param_2 + (long)(int)uVar3 + 10);
    }
    *(undefined1 *)ppuVar4 = 0;
    return ppuVar4;
  }
  return ppuVar4;
}



/* Entry: 1004d50e8; end: 1004d52e7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1004d50e8(undefined1 *param_1,ulong *param_2,undefined4 param_3,ulong *param_4)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puStack_88;
  undefined4 uStack_80;
  ulong *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined2 uStack_3e;
  undefined1 auStack_3c [4];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = (uint)param_2 & 0xff;
  iVar4 = (int)param_1;
  puStack_88 = param_2;
  uStack_80 = param_3;
  if (uVar5 < 7) {
    if (3 < uVar5) {
      if (uVar5 == 4) {
        puVar11 = (ulong *)auStack_3c;
        do {
          uVar5 = (uint)param_1;
          puVar11 = (ulong *)((long)puVar11 + -1);
          *(byte *)puVar11 = (byte)param_1 & 7 | 0x30;
          param_1 = (undefined1 *)(ulong)(uVar5 >> 3);
        } while (7 < uVar5);
      }
      else {
        if (uVar5 == 5) {
          puVar6 = (undefined1 *)&uStack_68;
          goto LAB_1004d5200;
        }
        puVar11 = (ulong *)(auStack_3c + 1);
        do {
          puVar8 = puVar11;
          uVar2 = *(ushort *)(&UNK_10e530083 + ((ulong)param_1 & 0xff) * 2);
          *(ushort *)((long)puVar8 + -3) = uVar2;
          uVar5 = (uint)param_1;
          param_1 = (undefined1 *)((ulong)param_1 >> 8 & 0xffffff);
          puVar11 = (ulong *)((long)puVar8 + -2);
        } while (0xff < uVar5);
        if ((uVar2 & 0xff) != 0x30) {
          puVar11 = (ulong *)((long)puVar8 + -3);
        }
      }
LAB_1004d527c:
      param_1 = auStack_3c;
      puStack_78 = puVar11;
      goto LAB_1004d5280;
    }
    if (uVar5 - 2 < 2) goto LAB_1004d51d8;
    func_0x000107c2b98c((int)(char)param_1,param_2,param_3,param_4);
  }
  else {
    if (uVar5 - 8 < 8) {
      uVar5 = (uint)&puStack_88;
      func_0x000107c34ff4((double)iVar4);
      param_2 = param_4;
      goto LAB_1004d52b8;
    }
    if (uVar5 == 7) {
      puVar11 = (ulong *)auStack_3c;
      do {
        puVar11 = (ulong *)((long)puVar11 + -1);
        *(undefined *)puVar11 = (&DAT_10f3ddedc)[(ulong)param_1 & 0xf];
        uVar5 = (uint)param_1;
        param_1 = (undefined1 *)((ulong)param_1 >> 4 & 0xfffffff);
      } while (0xf < uVar5);
      goto LAB_1004d527c;
    }
LAB_1004d51d8:
    puVar6 = (undefined1 *)&uStack_68;
    if (iVar4 < 0) {
      puVar6 = (undefined1 *)((long)&uStack_68 + 1);
      uStack_68._0_1_ = 0x2d;
      param_1 = (undefined1 *)(ulong)(uint)-iVar4;
    }
LAB_1004d5200:
    puVar11 = &uStack_68;
    puStack_78 = puVar11;
    FUN_1004d52e8(param_1,puVar6);
LAB_1004d5280:
    lStack_70 = (long)param_1 - (long)puVar11;
    if (((ulong)param_2 & 0xff00) == 0) {
      param_2 = puStack_78;
      FUN_1004d4e28(param_4);
    }
    else {
      func_0x000107c34ff0(&puStack_78,param_2,param_3,param_4);
    }
  }
  uVar5 = 1;
LAB_1004d52b8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    func_0x000107c60e78();
    if (uVar5 < 100) {
      uVar7 = (int)(uVar5 - 10) >> 8;
      *(short *)param_2 =
           (short)((uVar5 + (uVar5 * 0x67 >> 10) * 0xfffff6) * 0x100 + (uVar5 * 0x67 >> 10) + 0x3030
                  >> (ulong)(uVar7 & 8));
      puVar6 = (undefined1 *)((long)param_2 + (long)(int)uVar7 + 2);
    }
    else if (uVar5 >> 4 < 0x271) {
      uVar7 = uVar5 * 0x28f6 >> 0x14;
      uVar7 = uVar7 | (uVar5 + uVar7 * -100) * 0x10000;
      uVar5 = uVar7 * 0x100 + (uVar7 * 0x67 >> 10 & 0xf000f) * -0x9ff;
      uVar7 = (uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1;
      uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
      uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
      *(uint *)param_2 = uVar5 + 0x30303030 >> (ulong)(uVar7 & 0x18);
      puVar6 = (undefined1 *)((long)param_2 + (4 - (ulong)(uVar7 >> 3)));
    }
    else if (uVar5 < 100000000) {
      uVar10 = (ulong)uVar5 / 10000 | (ulong)(uVar5 % 10000) << 0x20;
      lVar1 = uVar10 * 0x10000 + (uVar10 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
      uVar10 = lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff;
      uVar9 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
      *param_2 = uVar10 + 0x3030303030303030 >> (uVar9 & 0x38);
      puVar6 = (undefined1 *)((long)param_2 + (8 - (uVar9 >> 3)));
    }
    else {
      uVar10 = (ulong)(uVar5 % 100000000) / 10000 | (ulong)((uVar5 % 100000000) % 10000) << 0x20;
      lVar1 = uVar10 * 0x10000 + (uVar10 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
      uVar7 = (int)(uVar5 / 100000000 - 10) >> 8;
      uVar3 = (uVar5 / 100000000) / 10;
      *(short *)param_2 =
           (short)((uVar3 | (uVar5 / 100000000 + uVar3 * 0xfffff6) * 0x100) + 0x3030 >>
                  (ulong)(uVar7 & 8));
      *(ulong *)((long)param_2 + (long)(int)uVar7 + 2) =
           lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff +
           0x3030303030303030;
      puVar6 = (undefined1 *)((long)param_2 + (long)(int)uVar7 + 10);
    }
    *puVar6 = 0;
    return;
  }
  return;
}



/* Entry: 1004d52e8; end: 1004d54ef;  */

void FUN_1004d52e8(uint param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1 < 100) {
    uVar2 = (int)(param_1 - 10) >> 8;
    *(short *)param_2 =
         (short)((param_1 + (param_1 * 0x67 >> 10) * 0xfffff6) * 0x100 + (param_1 * 0x67 >> 10) +
                 0x3030 >> (ulong)(uVar2 & 8));
    puVar3 = (undefined1 *)((long)param_2 + (long)(int)uVar2 + 2);
  }
  else if (param_1 >> 4 < 0x271) {
    uVar2 = param_1 * 0x28f6 >> 0x14;
    uVar2 = uVar2 | (param_1 + uVar2 * -100) * 0x10000;
    uVar2 = uVar2 * 0x100 + (uVar2 * 0x67 >> 10 & 0xf000f) * -0x9ff;
    uVar4 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
    uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar4 = (uint)LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
    *(uint *)param_2 = uVar2 + 0x30303030 >> (ulong)(uVar4 & 0x18);
    puVar3 = (undefined1 *)((long)param_2 + (4 - (ulong)(uVar4 >> 3)));
  }
  else if (param_1 < 100000000) {
    uVar6 = (ulong)param_1 / 10000 | (ulong)(param_1 % 10000) << 0x20;
    lVar1 = uVar6 * 0x10000 + (uVar6 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
    uVar6 = lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff;
    uVar5 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
    *param_2 = uVar6 + 0x3030303030303030 >> (uVar5 & 0x38);
    puVar3 = (undefined1 *)((long)param_2 + (8 - (uVar5 >> 3)));
  }
  else {
    uVar6 = (ulong)(param_1 % 100000000) / 10000 | (ulong)((param_1 % 100000000) % 10000) << 0x20;
    lVar1 = uVar6 * 0x10000 + (uVar6 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
    uVar2 = (int)(param_1 / 100000000 - 10) >> 8;
    uVar4 = (param_1 / 100000000) / 10;
    *(short *)param_2 =
         (short)((uVar4 | (param_1 / 100000000 + uVar4 * 0xfffff6) * 0x100) + 0x3030 >>
                (ulong)(uVar2 & 8));
    *(ulong *)((long)param_2 + (long)(int)uVar2 + 2) =
         lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff +
         0x3030303030303030;
    puVar3 = (undefined1 *)((long)param_2 + (long)(int)uVar2 + 10);
  }
  *puVar3 = 0;
  return;
}



/* Entry: 1004d54f0; end: 1004d552f;  */

undefined8 * FUN_1004d54f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 4;
  (*(code *)param_1[1])(*param_1,puVar1,param_1[3] - (long)puVar1);
  param_1[3] = puVar1;
  return param_1;
}



/* Entry: 1004d5530; end: 1004d5597;  */

ulong * FUN_1004d5530(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  ulong uStack_28;
  
  uStack_28 = *param_1;
  if (uStack_28 == 0) {
    return param_1 + 1;
  }
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
  func_0x000107c2b9ec(&uStack_28);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1004d5584);
  (*pcVar3)();
}



/* Entry: 1004d5598; end: 1004d57ff;  */

void FUN_1004d5598(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,char *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  char *pcVar1;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong auStack_c8 [2];
  char cStack_b1;
  undefined8 uStack_b0;
  char cStack_99;
  undefined8 uStack_98;
  char cStack_81;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  char cStack_39;
  undefined8 *puStack_38;
  
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    if (param_3[1] == 0) goto LAB_1004d55f8;
  }
  else if (*(char *)((long)param_3 + 0x17) == '\0') goto LAB_1004d55f8;
  if (param_4[0x17] < '\0') {
    if (*(long *)(param_4 + 8) == 0) goto LAB_1004d55f8;
    pcVar1 = *(char **)param_4;
  }
  else {
    pcVar1 = param_4;
    if (param_4[0x17] == '\0') goto LAB_1004d55f8;
  }
  if (*pcVar1 != '/') {
    func_0x000107c2b9c4(auStack_c8,"if authority is present, path must start with a \'/\'",0x33);
    FUN_1004862dc(param_1,auStack_c8);
    if ((auStack_c8[0] & 1) == 0) {
      return;
    }
    FUN_10084dad0();
    return;
  }
LAB_1004d55f8:
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  lStack_d0 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uStack_f8 = param_3[1];
  uStack_100 = *param_3;
  lStack_f0 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  uStack_118 = *(undefined8 *)(param_4 + 8);
  uStack_120 = *(undefined8 *)param_4;
  lStack_110 = *(long *)(param_4 + 0x10);
  param_4[8] = '\0';
  param_4[9] = '\0';
  param_4[10] = '\0';
  param_4[0xb] = '\0';
  param_4[0xc] = '\0';
  param_4[0xd] = '\0';
  param_4[0xe] = '\0';
  param_4[0xf] = '\0';
  param_4[0x10] = '\0';
  param_4[0x11] = '\0';
  param_4[0x12] = '\0';
  param_4[0x13] = '\0';
  param_4[0x14] = '\0';
  param_4[0x15] = '\0';
  param_4[0x16] = '\0';
  param_4[0x17] = '\0';
  param_4[0] = '\0';
  param_4[1] = '\0';
  param_4[2] = '\0';
  param_4[3] = '\0';
  param_4[4] = '\0';
  param_4[5] = '\0';
  param_4[6] = '\0';
  param_4[7] = '\0';
  uStack_138 = param_5[1];
  uStack_140 = *param_5;
  uStack_130 = param_5[2];
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  uStack_158 = param_6[1];
  uStack_160 = *param_6;
  lStack_150 = param_6[2];
  *param_6 = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  FUN_10047c480(auStack_c8,&uStack_e0,&uStack_100,&uStack_120,&uStack_140,&uStack_160);
  FUN_10047c654(param_1 + 1,auStack_c8);
  *param_1 = 0;
  if (cStack_39 < '\0') {
    func_0x000107c60e14(uStack_50);
  }
  puStack_38 = auStack_68;
  FUN_10047c710(&puStack_38);
  FUN_10047c794(auStack_80,uStack_78);
  if (cStack_81 < '\0') {
    func_0x000107c60e14(uStack_98);
  }
  if (cStack_99 < '\0') {
    func_0x000107c60e14(uStack_b0);
  }
  if (cStack_b1 < '\0') {
    func_0x000107c60e14(auStack_c8[0]);
  }
  if (lStack_150 < 0) {
    func_0x000107c60e14(uStack_160);
  }
  puStack_38 = &uStack_140;
  FUN_10047c710(&puStack_38);
  if (lStack_110 < 0) {
    func_0x000107c60e14(uStack_120);
  }
  if (lStack_f0 < 0) {
    func_0x000107c60e14(uStack_100);
  }
  if (lStack_d0 < 0) {
    func_0x000107c60e14(uStack_e0);
  }
  return;
}



/* Entry: 1004d5800; end: 1004d667f;  */

/* WARNING: Removing unreachable block (ram,0x0001004d6184) */
/* WARNING: Removing unreachable block (ram,0x0001004d5c38) */
/* WARNING: Removing unreachable block (ram,0x0001004d5ac0) */
/* WARNING: Removing unreachable block (ram,0x0001004d5d78) */
/* WARNING: Removing unreachable block (ram,0x0001004d62c0) */

void FUN_1004d5800(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 ****ppppuVar4;
  long **pplVar5;
  long **pplVar6;
  code *pcVar7;
  long ***ppplVar8;
  long *plVar9;
  undefined ***pppuVar10;
  long ****pppplVar11;
  undefined8 *puVar12;
  long ****pppplVar13;
  ulong uVar14;
  char *pcVar15;
  undefined8 uVar16;
  long ****pppplVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long **pplStack_238;
  long **pplStack_230;
  long **pplStack_228;
  long **pplStack_220;
  long ***ppplStack_218;
  long ***ppplStack_210;
  undefined8 ***pppuStack_208;
  ulong uStack_200;
  byte bStack_1f1;
  long ***ppplStack_1f0;
  long ***ppplStack_1e8;
  byte bStack_1d9;
  undefined8 ***pppuStack_1d8;
  ulong uStack_1d0;
  byte bStack_1c1;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined ***pppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  undefined ***pppuStack_188;
  undefined **ppuStack_180;
  undefined *puStack_178;
  undefined ***pppuStack_168;
  undefined **ppuStack_160;
  code *pcStack_158;
  undefined ***pppuStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined ***pppuStack_128;
  undefined8 ***pppuStack_120;
  ulong uStack_118;
  long **pplStack_f0;
  long **pplStack_e8;
  long **pplStack_e0;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined ***pppuStack_a8;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  long ***ppplStack_90;
  long ***appplStack_88 [2];
  char cStack_71;
  long alStack_70 [2];
  
  alStack_70[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
    puVar12 = (undefined8 *)*param_2;
    uVar14 = param_2[1];
  }
  else {
    uVar14 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar12 = param_2;
  }
  ppuStack_160 = &PTR_DAT_1107c76c0;
  pcStack_158 = FUN_1004d6808;
  pppuStack_148 = &ppuStack_160;
  FUN_1004d668c(&ppplStack_a0,puVar12,uVar14,&ppuStack_160);
  FUN_10002b024(appplStack_88,":");
  pplStack_f0 = (long **)&pplStack_220;
  pplStack_220 = (long **)0x0;
  ppplStack_218 = (long ***)0x0;
  ppplStack_210 = (long ***)0x0;
  pplStack_e8 = (long **)((ulong)pplStack_e8 & 0xffffffffffffff00);
  ppplVar8 = (long ***)0x30;
  func_0x000107c60e20();
  pppplVar13 = &ppplStack_210;
  ppplStack_210 = ppplVar8 + 6;
  pppplVar11 = pppplVar13;
  pplStack_220 = (long **)ppplVar8;
  ppplStack_218 = ppplVar8;
  FUN_1004d6840(pppplVar13,&ppplStack_a0,alStack_70,ppplVar8);
  lVar20 = 0;
  ppplStack_218 = (long ***)pppplVar11;
  do {
    if ((&cStack_71)[lVar20] < '\0') {
      func_0x000107c60e14(*(undefined8 *)((long)appplStack_88 + lVar20));
    }
    lVar20 = lVar20 + -0x18;
  } while (lVar20 != -0x30);
  if (pppuStack_148 == &ppuStack_160) {
    lVar20 = 4;
    pppuVar10 = &ppuStack_160;
LAB_1004d592c:
    (*(code *)(*pppuVar10)[lVar20])();
  }
  else if (pppuStack_148 != (undefined ***)0x0) {
    lVar20 = 5;
    pppuVar10 = pppuStack_148;
    goto LAB_1004d592c;
  }
  ppplVar8 = ppplStack_218;
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    if (param_2[4] != 0) goto LAB_1004d5954;
LAB_1004d5af8:
    plVar9 = param_2 + 6;
    bVar2 = *(byte *)((long)param_2 + 0x47);
    if ((char)bVar2 < '\0') {
      uVar14 = param_2[7];
      if (uVar14 != 0) {
        plVar9 = (long *)*plVar9;
        goto LAB_1004d5b1c;
      }
    }
    else {
      uVar14 = (ulong)bVar2;
      if (bVar2 != 0) {
LAB_1004d5b1c:
        ppuStack_1a0 = &PTR_DAT_1107c76c0;
        uStack_198 = 0x1004d6974;
        pppuStack_188 = &ppuStack_1a0;
        FUN_1004d668c(&pplStack_f0,plVar9,uVar14,&ppuStack_1a0);
        if (ppplStack_218 < ppplStack_210) {
          ppplStack_218[2] = pplStack_e0;
          ppplStack_218[1] = pplStack_e8;
          *ppplStack_218 = pplStack_f0;
          pplStack_e8 = (long **)0x0;
          pplStack_e0 = (long **)0x0;
          pplStack_f0 = (long **)0x0;
          ppplStack_218 = ppplStack_218 + 3;
        }
        else {
          lVar20 = (long)ppplStack_218 - (long)pplStack_220 >> 3;
          uVar14 = lVar20 * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar14) {
            func_0x000104a9439c(&pplStack_220);
            goto LAB_1004d63a0;
          }
          lVar18 = (long)ppplStack_210 - (long)pplStack_220 >> 3;
          uVar19 = lVar18 * 0x5555555555555556;
          if (uVar19 < uVar14 || uVar19 - uVar14 == 0) {
            uVar19 = uVar14;
          }
          if (0x555555555555554 < (ulong)(lVar18 * -0x5555555555555555)) {
            uVar19 = 0xaaaaaaaaaaaaaaa;
          }
          if (uVar19 == 0) {
            pppplVar11 = (long ****)0x0;
            appplStack_88[1] = (long ***)pppplVar13;
          }
          else {
            pppplVar11 = pppplVar13;
            appplStack_88[1] = (long ***)pppplVar13;
            func_0x0001004d69d4();
          }
          pppplVar17 = pppplVar11 + lVar20;
          pppplVar17[2] = (long ***)pplStack_e0;
          pppplVar17[1] = (long ***)pplStack_e8;
          *pppplVar17 = (long ***)pplStack_f0;
          pplStack_e8 = (long **)0x0;
          pplStack_e0 = (long **)0x0;
          pplStack_f0 = (long **)0x0;
          ppplStack_90 = (long ***)(pppplVar17 + 3);
          ppplStack_a0 = (long ***)pppplVar11;
          ppplStack_98 = (long ***)pppplVar17;
          appplStack_88[0] = (long ***)(pppplVar11 + uVar19 * 3);
          FUN_10004824c(&pplStack_220,&ppplStack_a0);
          ppplVar8 = ppplStack_218;
          FUN_1000482e8(&ppplStack_a0);
          ppplStack_218 = ppplVar8;
        }
        if (pppuStack_188 == &ppuStack_1a0) {
          lVar20 = 4;
          pppuVar10 = &ppuStack_1a0;
        }
        else {
          if (pppuStack_188 == (undefined ***)0x0) goto LAB_1004d5c70;
          lVar20 = 5;
          pppuVar10 = pppuStack_188;
        }
        (*(code *)(*pppuVar10)[lVar20])();
      }
    }
LAB_1004d5c70:
    if (param_2[0xc] != param_2[0xd]) {
      FUN_10002b024(&pplStack_f0,"?");
      pplVar6 = pplStack_e8;
      pplVar5 = pplStack_f0;
      if (ppplStack_218 < ppplStack_210) {
        ppplStack_218[2] = pplStack_e0;
        ppplStack_218[1] = pplVar6;
        *ppplStack_218 = pplVar5;
        ppplStack_218 = ppplStack_218 + 3;
      }
      else {
        lVar20 = (long)ppplStack_218 - (long)pplStack_220 >> 3;
        uVar14 = lVar20 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar14) {
          func_0x000104a9439c(&pplStack_220);
          goto LAB_1004d63a0;
        }
        lVar18 = (long)ppplStack_210 - (long)pplStack_220 >> 3;
        uVar19 = lVar18 * 0x5555555555555556;
        if (uVar19 < uVar14 || uVar19 - uVar14 == 0) {
          uVar19 = uVar14;
        }
        if (0x555555555555554 < (ulong)(lVar18 * -0x5555555555555555)) {
          uVar19 = 0xaaaaaaaaaaaaaaa;
        }
        if (uVar19 == 0) {
          pppplVar11 = (long ****)0x0;
          appplStack_88[1] = (long ***)pppplVar13;
        }
        else {
          pppplVar11 = pppplVar13;
          appplStack_88[1] = (long ***)pppplVar13;
          func_0x0001004d69d4();
        }
        pppplVar17 = pppplVar11 + lVar20;
        pppplVar17[2] = (long ***)pplStack_e0;
        pppplVar17[1] = (long ***)pplStack_e8;
        *pppplVar17 = (long ***)pplStack_f0;
        pplStack_e8 = (long **)0x0;
        pplStack_e0 = (long **)0x0;
        pplStack_f0 = (long **)0x0;
        ppplStack_90 = (long ***)(pppplVar17 + 3);
        ppplStack_a0 = (long ***)pppplVar11;
        ppplStack_98 = (long ***)pppplVar17;
        appplStack_88[0] = (long ***)(pppplVar11 + uVar19 * 3);
        FUN_10004824c(&pplStack_220,&ppplStack_a0);
        ppplVar8 = ppplStack_218;
        FUN_1000482e8(&ppplStack_a0);
        ppplStack_218 = ppplVar8;
      }
      puVar12 = (undefined8 *)param_2[0xc];
      puVar1 = (undefined8 *)param_2[0xd];
      pplStack_230 = (long **)0x0;
      pplStack_228 = (long **)0x0;
      pplStack_238 = (long **)0x0;
      if (puVar12 != puVar1) {
        uVar16 = 0;
        pcVar15 = "";
        do {
          func_0x000107c60c5c(&pplStack_238,pcVar15,uVar16);
          uVar14 = puVar12[1];
          puVar3 = (undefined8 *)*puVar12;
          if (-1 < (char)*(byte *)((long)puVar12 + 0x17)) {
            uVar14 = (ulong)*(byte *)((long)puVar12 + 0x17);
            puVar3 = puVar12;
          }
          ppuStack_c0 = &PTR_DAT_1107c76c0;
          puStack_b8 = &UNK_104ae0754;
          pppuStack_a8 = &ppuStack_c0;
          FUN_1004d668c(&ppplStack_1f0,puVar3,uVar14,&ppuStack_c0);
          ppplStack_98 = ppplStack_1e8;
          ppplStack_a0 = ppplStack_1f0;
          if (-1 < (char)bStack_1d9) {
            ppplStack_98 = (long ***)(ulong)bStack_1d9;
            ppplStack_a0 = (long ***)&ppplStack_1f0;
          }
          pplStack_f0 = (long **)0x10f27ca42;
          pplStack_e8 = (long **)0x1;
          uVar14 = puVar12[4];
          puVar3 = (undefined8 *)puVar12[3];
          if (-1 < (char)*(byte *)((long)puVar12 + 0x2f)) {
            uVar14 = (ulong)*(byte *)((long)puVar12 + 0x2f);
            puVar3 = puVar12 + 3;
          }
          ppuStack_140 = &PTR_DAT_1107c76c0;
          puStack_138 = &UNK_104ae0754;
          pppuStack_128 = &ppuStack_140;
          FUN_1004d668c(&pppuStack_208,puVar3,uVar14,&ppuStack_140);
          uStack_118 = uStack_200;
          pppuStack_120 = pppuStack_208;
          if (-1 < (char)bStack_1f1) {
            uStack_118 = (ulong)bStack_1f1;
            pppuStack_120 = &pppuStack_208;
          }
          FUN_100066c24(&pppuStack_1d8,&ppplStack_a0,&pplStack_f0,&pppuStack_120);
          uVar14 = uStack_1d0;
          ppppuVar4 = (undefined8 ****)pppuStack_1d8;
          if (-1 < (char)bStack_1c1) {
            uVar14 = (ulong)bStack_1c1;
            ppppuVar4 = &pppuStack_1d8;
          }
          func_0x000107c60c5c(&pplStack_238,ppppuVar4,uVar14);
          if ((char)bStack_1c1 < '\0') {
            func_0x000107c60e14(pppuStack_1d8);
          }
          if ((char)bStack_1f1 < '\0') {
            func_0x000107c60e14(pppuStack_208);
          }
          if (pppuStack_128 == &ppuStack_140) {
            pppuVar10 = &ppuStack_140;
            lVar20 = 4;
LAB_1004d5f08:
            (*(code *)(*pppuVar10)[lVar20])();
          }
          else if (pppuStack_128 != (undefined ***)0x0) {
            lVar20 = 5;
            pppuVar10 = pppuStack_128;
            goto LAB_1004d5f08;
          }
          if ((char)bStack_1d9 < '\0') {
            func_0x000107c60e14(ppplStack_1f0);
          }
          if (pppuStack_a8 == &ppuStack_c0) {
            pppuVar10 = &ppuStack_c0;
            lVar20 = 4;
LAB_1004d5f48:
            (*(code *)(*pppuVar10)[lVar20])();
          }
          else if (pppuStack_a8 != (undefined ***)0x0) {
            lVar20 = 5;
            pppuVar10 = pppuStack_a8;
            goto LAB_1004d5f48;
          }
          puVar12 = puVar12 + 6;
          uVar16 = 1;
          pcVar15 = "&";
        } while (puVar12 != puVar1);
      }
      if (ppplStack_218 < ppplStack_210) {
        ppplStack_218[2] = pplStack_228;
        ppplStack_218[1] = pplStack_230;
        *ppplStack_218 = pplStack_238;
        ppplStack_218 = ppplStack_218 + 3;
      }
      else {
        lVar20 = (long)ppplStack_218 - (long)pplStack_220 >> 3;
        uVar14 = lVar20 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar14) {
          func_0x000104a9439c(&pplStack_220);
          goto LAB_1004d63a0;
        }
        lVar18 = (long)ppplStack_210 - (long)pplStack_220 >> 3;
        uVar19 = lVar18 * 0x5555555555555556;
        if (uVar19 < uVar14 || uVar19 - uVar14 == 0) {
          uVar19 = uVar14;
        }
        if (0x555555555555554 < (ulong)(lVar18 * -0x5555555555555555)) {
          uVar19 = 0xaaaaaaaaaaaaaaa;
        }
        if (uVar19 == 0) {
          pppplVar11 = (long ****)0x0;
          appplStack_88[1] = (long ***)pppplVar13;
        }
        else {
          pppplVar11 = pppplVar13;
          appplStack_88[1] = (long ***)pppplVar13;
          func_0x0001004d69d4();
        }
        pppplVar17 = pppplVar11 + lVar20;
        pppplVar17[2] = (long ***)pplStack_228;
        pppplVar17[1] = (long ***)pplStack_230;
        *pppplVar17 = (long ***)pplStack_238;
        pplStack_230 = (long **)0x0;
        pplStack_228 = (long **)0x0;
        pplStack_238 = (long **)0x0;
        ppplStack_90 = (long ***)(pppplVar17 + 3);
        ppplStack_a0 = (long ***)pppplVar11;
        ppplStack_98 = (long ***)pppplVar17;
        appplStack_88[0] = (long ***)(pppplVar11 + uVar19 * 3);
        FUN_10004824c(&pplStack_220,&ppplStack_a0);
        ppplVar8 = ppplStack_218;
        FUN_1000482e8(&ppplStack_a0);
        ppplStack_218 = ppplVar8;
        if ((long)pplStack_228 < 0) {
          func_0x000107c60e14(pplStack_238);
        }
      }
    }
    if (*(char *)((long)param_2 + 0x8f) < '\0') {
      if (param_2[0x10] != 0) goto LAB_1004d6088;
    }
    else if (*(char *)((long)param_2 + 0x8f) != '\0') {
LAB_1004d6088:
      FUN_10002b024(&pplStack_f0,"#");
      pplVar6 = pplStack_e8;
      pplVar5 = pplStack_f0;
      if (ppplStack_218 < ppplStack_210) {
        ppplStack_218[2] = pplStack_e0;
        ppplStack_218[1] = pplVar6;
        *ppplStack_218 = pplVar5;
        ppplStack_218 = ppplStack_218 + 3;
      }
      else {
        lVar20 = (long)ppplStack_218 - (long)pplStack_220 >> 3;
        uVar14 = lVar20 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar14) {
          func_0x000104a9439c(&pplStack_220);
          goto LAB_1004d63a0;
        }
        lVar18 = (long)ppplStack_210 - (long)pplStack_220 >> 3;
        uVar19 = lVar18 * 0x5555555555555556;
        if (uVar19 < uVar14 || uVar19 - uVar14 == 0) {
          uVar19 = uVar14;
        }
        if (0x555555555555554 < (ulong)(lVar18 * -0x5555555555555555)) {
          uVar19 = 0xaaaaaaaaaaaaaaa;
        }
        if (uVar19 == 0) {
          pppplVar11 = (long ****)0x0;
          appplStack_88[1] = (long ***)pppplVar13;
        }
        else {
          pppplVar11 = pppplVar13;
          appplStack_88[1] = (long ***)pppplVar13;
          func_0x0001004d69d4();
        }
        pppplVar17 = pppplVar11 + lVar20;
        pppplVar17[2] = (long ***)pplStack_e0;
        pppplVar17[1] = (long ***)pplStack_e8;
        *pppplVar17 = (long ***)pplStack_f0;
        pplStack_e8 = (long **)0x0;
        pplStack_e0 = (long **)0x0;
        pplStack_f0 = (long **)0x0;
        ppplStack_90 = (long ***)(pppplVar17 + 3);
        ppplStack_a0 = (long ***)pppplVar11;
        ppplStack_98 = (long ***)pppplVar17;
        appplStack_88[0] = (long ***)(pppplVar11 + uVar19 * 3);
        FUN_10004824c(&pplStack_220,&ppplStack_a0);
        ppplVar8 = ppplStack_218;
        FUN_1000482e8(&ppplStack_a0);
        ppplStack_218 = ppplVar8;
      }
      if ((char)*(byte *)((long)param_2 + 0x8f) < '\0') {
        puVar12 = (undefined8 *)param_2[0xf];
        uVar14 = param_2[0x10];
      }
      else {
        puVar12 = param_2 + 0xf;
        uVar14 = (ulong)*(byte *)((long)param_2 + 0x8f);
      }
      ppuStack_1c0 = &PTR_DAT_1107c76c0;
      puStack_1b8 = &SUB_104ae02d0;
      pppuStack_1a8 = &ppuStack_1c0;
      FUN_1004d668c(&pplStack_f0,puVar12,uVar14,&ppuStack_1c0);
      if (ppplStack_218 < ppplStack_210) {
        ppplStack_218[2] = pplStack_e0;
        ppplStack_218[1] = pplStack_e8;
        *ppplStack_218 = pplStack_f0;
        pplStack_e8 = (long **)0x0;
        pplStack_e0 = (long **)0x0;
        pplStack_f0 = (long **)0x0;
        ppplStack_218 = ppplStack_218 + 3;
      }
      else {
        lVar20 = (long)ppplStack_218 - (long)pplStack_220 >> 3;
        uVar14 = lVar20 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar14) {
          func_0x000104a9439c(&pplStack_220);
          goto LAB_1004d63a0;
        }
        lVar18 = (long)ppplStack_210 - (long)pplStack_220 >> 3;
        uVar19 = lVar18 * 0x5555555555555556;
        if (uVar19 < uVar14 || uVar19 - uVar14 == 0) {
          uVar19 = uVar14;
        }
        if (0x555555555555554 < (ulong)(lVar18 * -0x5555555555555555)) {
          uVar19 = 0xaaaaaaaaaaaaaaa;
        }
        if (uVar19 == 0) {
          ppplStack_a0 = (long ***)0x0;
          appplStack_88[1] = (long ***)pppplVar13;
        }
        else {
          appplStack_88[1] = (long ***)pppplVar13;
          func_0x0001004d69d4();
          ppplStack_a0 = (long ***)pppplVar13;
        }
        pppplVar13 = (long ****)(ppplStack_a0 + lVar20);
        pppplVar13[2] = (long ***)pplStack_e0;
        pppplVar13[1] = (long ***)pplStack_e8;
        *pppplVar13 = (long ***)pplStack_f0;
        pplStack_e8 = (long **)0x0;
        pplStack_e0 = (long **)0x0;
        pplStack_f0 = (long **)0x0;
        ppplStack_90 = (long ***)(pppplVar13 + 3);
        ppplStack_98 = (long ***)pppplVar13;
        appplStack_88[0] = ppplStack_a0 + uVar19 * 3;
        FUN_10004824c(&pplStack_220,&ppplStack_a0);
        ppplVar8 = ppplStack_218;
        FUN_1000482e8(&ppplStack_a0);
        ppplStack_218 = ppplVar8;
      }
      if (pppuStack_1a8 == &ppuStack_1c0) {
        lVar20 = 4;
        pppuVar10 = &ppuStack_1c0;
      }
      else {
        if (pppuStack_1a8 == (undefined ***)0x0) goto LAB_1004d62f8;
        lVar20 = 5;
        pppuVar10 = pppuStack_1a8;
      }
      (*(code *)(*pppuVar10)[lVar20])();
    }
LAB_1004d62f8:
    FUN_1004d6a18(param_1,pplStack_220,ppplStack_218,"",0);
    ppplStack_a0 = &pplStack_220;
    FUN_1004d6bcc(&ppplStack_a0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_70[0]) {
      return;
    }
    func_0x000107c60e78();
  }
  else {
    if (*(char *)((long)param_2 + 0x2f) == '\0') goto LAB_1004d5af8;
LAB_1004d5954:
    if (ppplStack_218 < ppplStack_210) {
      FUN_10002b024(ppplStack_218,"//");
      pppplVar11 = (long ****)(ppplVar8 + 3);
    }
    else {
      pppplVar11 = (long ****)&pplStack_220;
      func_0x000104ae0650(pppplVar11,"//");
    }
    if ((char)*(byte *)((long)param_2 + 0x2f) < '\0') {
      puVar12 = (undefined8 *)param_2[3];
      uVar14 = param_2[4];
    }
    else {
      puVar12 = param_2 + 3;
      uVar14 = (ulong)*(byte *)((long)param_2 + 0x2f);
    }
    ppuStack_180 = &PTR_DAT_1107c76c0;
    puStack_178 = &UNK_104adffec;
    pppuStack_168 = &ppuStack_180;
    ppplStack_218 = (long ***)pppplVar11;
    FUN_1004d668c(&pplStack_f0,puVar12,uVar14,&ppuStack_180);
    if (ppplStack_218 < ppplStack_210) {
      ppplStack_218[2] = pplStack_e0;
      ppplStack_218[1] = pplStack_e8;
      *ppplStack_218 = pplStack_f0;
      pplStack_e8 = (long **)0x0;
      pplStack_e0 = (long **)0x0;
      pplStack_f0 = (long **)0x0;
      ppplStack_218 = ppplStack_218 + 3;
LAB_1004d5ac8:
      if (pppuStack_168 == &ppuStack_180) {
        lVar20 = 4;
        pppuVar10 = &ppuStack_180;
      }
      else {
        if (pppuStack_168 == (undefined ***)0x0) goto LAB_1004d5af8;
        lVar20 = 5;
        pppuVar10 = pppuStack_168;
      }
      (*(code *)(*pppuVar10)[lVar20])();
      goto LAB_1004d5af8;
    }
    lVar20 = (long)ppplStack_218 - (long)pplStack_220 >> 3;
    uVar14 = lVar20 * -0x5555555555555555 + 1;
    if (uVar14 < 0xaaaaaaaaaaaaaab) {
      lVar18 = (long)ppplStack_210 - (long)pplStack_220 >> 3;
      uVar19 = lVar18 * 0x5555555555555556;
      if (uVar19 < uVar14 || uVar19 - uVar14 == 0) {
        uVar19 = uVar14;
      }
      if (0x555555555555554 < (ulong)(lVar18 * -0x5555555555555555)) {
        uVar19 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar19 == 0) {
        pppplVar11 = (long ****)0x0;
        appplStack_88[1] = (long ***)pppplVar13;
      }
      else {
        pppplVar11 = pppplVar13;
        appplStack_88[1] = (long ***)pppplVar13;
        func_0x0001004d69d4();
      }
      pppplVar17 = pppplVar11 + lVar20;
      pppplVar17[2] = (long ***)pplStack_e0;
      pppplVar17[1] = (long ***)pplStack_e8;
      *pppplVar17 = (long ***)pplStack_f0;
      pplStack_e8 = (long **)0x0;
      pplStack_e0 = (long **)0x0;
      pplStack_f0 = (long **)0x0;
      ppplStack_90 = (long ***)(pppplVar17 + 3);
      ppplStack_a0 = (long ***)pppplVar11;
      ppplStack_98 = (long ***)pppplVar17;
      appplStack_88[0] = (long ***)(pppplVar11 + uVar19 * 3);
      FUN_10004824c(&pplStack_220,&ppplStack_a0);
      ppplVar8 = ppplStack_218;
      FUN_1000482e8(&ppplStack_a0);
      ppplStack_218 = ppplVar8;
      goto LAB_1004d5ac8;
    }
  }
  func_0x000104a9439c(&pplStack_220);
LAB_1004d63a0:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1004d63a4);
  (*pcVar7)();
}



/* Entry: 1004d6680; end: 1004d668b;  */

void FUN_1004d6680(long param_1,char *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001004d6688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))((long)*param_2);
  return;
}



/* Entry: 1004d668c; end: 1004d6807;  */

void FUN_1004d668c(undefined8 *param_1,char *param_2,long param_3,long param_4)

{
  ulong uVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  char cStack_60;
  undefined7 uStack_5f;
  ulong uStack_58;
  byte bStack_49;
  char cStack_41;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    do {
      cStack_60 = *param_2;
      plVar4 = *(long **)(param_4 + 0x18);
      cStack_41 = cStack_60;
      if (plVar4 == (long *)0x0) {
        func_0x000104a71f98();
LAB_1004d67c4:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1004d67c8);
        (*pcVar3)();
      }
      (**(code **)(*plVar4 + 0x30))(plVar4,&cStack_60);
      if (((ulong)plVar4 & 1) == 0) {
        func_0x000107c2ba20(&cStack_60,&cStack_41,1);
        uVar1 = uStack_58;
        if (-1 < (char)bStack_49) {
          uVar1 = (ulong)bStack_49;
        }
        if (uVar1 != 2) {
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/uri/uri_parser.cc"
                        ,0x91,2,"assertion failed: %s");
          func_0x000107c60ebc();
          goto LAB_1004d67c4;
        }
        func_0x000107c2ba18(&cStack_60);
        func_0x000107c60c8c(param_1,0x25);
        uVar1 = uStack_58;
        pcVar2 = (char *)CONCAT71(uStack_5f,cStack_60);
        if (-1 < (char)bStack_49) {
          uVar1 = (ulong)bStack_49;
          pcVar2 = &cStack_60;
        }
        func_0x000107c60c5c(param_1,pcVar2,uVar1);
        if ((char)bStack_49 < '\0') {
          func_0x000107c60e14(CONCAT71(uStack_5f,cStack_60));
        }
      }
      else {
        func_0x000107c60c8c(param_1,(long)cStack_41);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 1004d6808; end: 1004d683f;  */

uint FUN_1004d6808(ulong param_1)

{
  uint uVar1;
  
  if (((byte)(&UNK_10e52ca36)[param_1 & 0xff] >> 2 & 1) == 0) {
    uVar1 = 0;
    if ((uint)param_1 < 0x2f) {
      uVar1 = (uint)(0x680000000000 >> (param_1 & 0x3f)) & 1;
    }
    return uVar1;
  }
  return 1;
}



/* Entry: 1004d6840; end: 1004d68fb;  */

undefined8 *
FUN_1004d6840(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_100033dac(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    param_4 = puStack_38 + 3;
  }
  uStack_48 = 1;
  FUN_1004d68fc(&uStack_60);
  return param_4;
}



/* Entry: 1004d68fc; end: 1004d692f;  */

long FUN_1004d68fc(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    func_0x000104acb058(param_1);
  }
  return param_1;
}



/* Entry: 1004d6930; end: 1004d6973;  */

void FUN_1004d6930(void)

{
  return;
}



/* Entry: 1004d6974; end: 1004d6a17;  */

bool FUN_1004d6974(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  
  uVar2 = param_1;
  FUN_1004d6930();
  iVar3 = (int)param_1;
  if (((uVar2 & 1) == 0) &&
     ((0x1c < iVar3 - 0x21U || ((0x14000fe9U >> (ulong)(iVar3 - 0x21U & 0x1f) & 1) == 0)))) {
    bVar1 = iVar3 == 0x3a || iVar3 == 0x40;
  }
  else {
    bVar1 = true;
  }
  if (iVar3 == 0x2f) {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1004d6a18; end: 1004d6b7f;  */

void FUN_1004d6a18(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != param_3) {
    if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
      uVar1 = param_2[1];
    }
    else {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    puVar6 = param_2 + 3;
    for (puVar3 = puVar6; puVar3 != param_3; puVar3 = puVar3 + 3) {
      if ((char)*(byte *)((long)puVar3 + 0x17) < '\0') {
        uVar4 = puVar3[1];
      }
      else {
        uVar4 = (ulong)*(byte *)((long)puVar3 + 0x17);
      }
      uVar1 = uVar1 + param_5 + uVar4;
    }
    if (uVar1 != 0) {
      FUN_100066b68(param_1);
      puVar3 = (undefined8 *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar3 = param_1;
      }
      if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
        puVar2 = (undefined8 *)*param_2;
        uVar1 = param_2[1];
      }
      else {
        uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
        puVar2 = param_2;
      }
      func_0x000107c610b4(puVar3,puVar2,uVar1);
      if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
        uVar1 = param_2[1];
      }
      else {
        uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      if (puVar6 != param_3) {
        lVar5 = (long)puVar3 + uVar1;
        do {
          func_0x000107c610b4(lVar5,param_4,param_5);
          if ((char)*(byte *)((long)puVar6 + 0x17) < '\0') {
            puVar3 = (undefined8 *)*puVar6;
            uVar1 = puVar6[1];
          }
          else {
            uVar1 = (ulong)*(byte *)((long)puVar6 + 0x17);
            puVar3 = puVar6;
          }
          func_0x000107c610b4(lVar5 + param_5,puVar3,uVar1);
          if ((char)*(byte *)((long)puVar6 + 0x17) < '\0') {
            uVar1 = puVar6[1];
          }
          else {
            uVar1 = (ulong)*(byte *)((long)puVar6 + 0x17);
          }
          lVar5 = lVar5 + param_5 + uVar1;
          puVar6 = puVar6 + 3;
        } while (puVar6 != param_3);
      }
    }
  }
  return;
}



/* Entry: 1004d6b80; end: 1004d6bcb;  */

/* WARNING: Removing unreachable block (ram,0x0001004d6ba8) */

void FUN_1004d6b80(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x18) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 1004d6bcc; end: 1004d6c0b;  */

void FUN_1004d6bcc(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_1004d6b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1004d6c0c; end: 1004d6c0f;  */

undefined8 * FUN_1004d6c0c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100033dac(&uStack_50,*param_2,param_2[1]);
  }
  else {
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
    lStack_40 = param_2[2];
  }
  FUN_10047dcc4(param_1,2,&uStack_50);
  if (lStack_40 < 0) {
    func_0x000107c60e14(uStack_50);
  }
  *param_1 = &PTR_DAT_1107c1f20;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_100460318(param_1 + 8);
  param_1[0x10] = 0;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[0x13] = param_2[2];
  param_1[0x12] = uVar2;
  param_1[0x11] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_1004d6d7c(param_1 + 0x14);
  func_0x00010047e504(param_1 + 0x18,param_3);
  return param_1;
}



/* Entry: 1004d6c10; end: 1004d6d7b;  */

undefined8 * FUN_1004d6c10(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100033dac(&uStack_50,*param_2,param_2[1]);
  }
  else {
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
    lStack_40 = param_2[2];
  }
  FUN_10047dcc4(param_1,2,&uStack_50);
  if (lStack_40 < 0) {
    func_0x000107c60e14(uStack_50);
  }
  *param_1 = &PTR_DAT_1107c1f20;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_100460318(param_1 + 8);
  param_1[0x10] = 0;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[0x13] = param_2[2];
  param_1[0x12] = uVar2;
  param_1[0x11] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_1004d6d7c(param_1 + 0x14);
  func_0x00010047e504(param_1 + 0x18,param_3);
  return param_1;
}



/* Entry: 1004d6d7c; end: 1004d6d7f;  */

undefined8 * FUN_1004d6d7c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar2 = param_1;
  FUN_1004605e0();
  uVar1 = (uint)puVar2;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  param_1[3] = (ulong)uVar1;
  FUN_10047e3b0(param_1);
  if (param_1[3] != 0) {
    uVar4 = 0;
    puVar2 = (undefined8 *)param_1[1];
    do {
      if (puVar2 < (undefined8 *)param_1[2]) {
        puVar2[5] = 0;
        puVar2[4] = 0;
        puVar2[7] = 0;
        puVar2[6] = 0;
        puVar3 = puVar2 + 8;
        puVar2[1] = 0;
        *puVar2 = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
      }
      else {
        puVar3 = param_1;
        func_0x000104aaec54();
      }
      param_1[1] = puVar3;
      uVar4 = uVar4 + 1;
      puVar2 = puVar3;
    } while (uVar4 < (ulong)param_1[3]);
  }
  return param_1;
}



/* Entry: 1004d6d80; end: 1004d6dab;  */

long FUN_1004d6d80(long param_1)

{
  FUN_10048650c(*(undefined8 *)(param_1 + 0x88));
  return param_1;
}



/* Entry: 1004d6dac; end: 1004d6e3f;  */

undefined8 * FUN_1004d6dac(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0xffffffff;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x20 == 1) {
      (**(code **)*plVar5)(plVar5);
    }
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 - 1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1004d6e40; end: 1004d6f6b;  */

void FUN_1004d6e40(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  FUN_100460448(param_2 + 0x28);
  lVar5 = param_2 + 0x10;
  lVar6 = lVar5;
  FUN_1004d368c(lVar5,param_3);
  if (param_2 + 0x18 != lVar6) {
    lVar6 = *(long *)(lVar6 + 0xb0);
    puVar1 = (ulong *)(lVar6 + 8);
    uVar4 = *puVar1;
    do {
      while( true ) {
        if (uVar4 >> 0x20 == 0) {
          *param_1 = 0;
          goto LAB_1004d6ee8;
        }
        uVar7 = *puVar1;
        if (uVar7 == uVar4) break;
        ClearExclusiveLocal();
        uVar4 = uVar7;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 + 0x100000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
      uVar4 = uVar7;
    } while (cVar2 != '\0');
    *param_1 = lVar6;
    if (lVar6 != 0) goto LAB_1004d6f24;
LAB_1004d6ee8:
    FUN_1004d6dac(param_1);
  }
  lVar6 = *param_4;
  uStack_48 = param_3;
  func_0x0001004d6ffc(lVar5,param_3,&UNK_10dd5b8f9,&uStack_48,&uStack_49);
  *(long *)(lVar5 + 0xb0) = lVar6;
  *param_1 = *param_4;
  *param_4 = 0;
LAB_1004d6f24:
  func_0x000100466b80(param_2 + 0x28);
  return;
}



/* Entry: 1004d6f6c; end: 1004d70a3;  */

long * FUN_1004d6f6c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while( true ) {
      plVar4 = plVar2;
      plVar2 = plVar4 + 4;
      uVar1 = param_3;
      func_0x000104a8fd24(param_3,plVar2);
      if ((int)uVar1 == 0) break;
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_1004d6fe0;
    }
    func_0x000104a8fd24(plVar2,param_3);
    if ((int)plVar2 == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_1004d6fe0:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 1004d70a4; end: 1004d7113;  */

void FUN_1004d70a4(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  
  lVar1 = 0xb8;
  func_0x000107c60e20();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_1004d7114(lVar1 + 0x20,*param_4);
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1004d7114; end: 1004d7207;  */

undefined8 * FUN_1004d7114(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = param_2[0x11];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  uVar6 = param_2[6];
  uVar8 = param_2[9];
  uVar7 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar6;
  param_1[9] = uVar8;
  param_1[8] = uVar7;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  uVar3 = param_2[0xb];
  uVar2 = param_2[10];
  uVar5 = param_2[0xd];
  uVar4 = param_2[0xc];
  uVar7 = param_2[0xf];
  uVar6 = param_2[0xe];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  param_1[0xd] = uVar5;
  param_1[0xc] = uVar4;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  FUN_1004bf248();
  param_1[0x11] = uVar1;
  return param_1;
}



/* Entry: 1004d7208; end: 1004d7233;  */

void FUN_1004d7208(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001004d7230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1004d7234; end: 1004d72eb;  */

void FUN_1004d7234(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined1 auStack_50 [32];
  
  FUN_100460448(param_1 + 400);
  if (*(int *)(param_1 + 0x378) < (int)param_2) {
    *(int *)(param_1 + 0x378) = (int)param_2;
    FUN_1004c86fc(auStack_50,&UNK_10f50ea26,param_2);
    puStack_58 = &UNK_10f50ea26;
    uVar1 = *(undefined8 *)(param_1 + 0x130);
    FUN_10047f924(uVar1,&puStack_58,1,auStack_50,1);
    FUN_10048650c(*(undefined8 *)(param_1 + 0x130));
    *(undefined8 *)(param_1 + 0x130) = uVar1;
  }
  func_0x000100466b80(param_1 + 400);
  return;
}



/* Entry: 1004d72ec; end: 1004d73df;  */

void FUN_1004d72ec(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  char cStack_58;
  undefined8 uStack_48;
  
  uVar1 = 0x70;
  func_0x000107c60e20();
  uVar2 = *param_2;
  uStack_48 = *param_3;
  *param_3 = 0;
  uStack_70 = uStack_70 & 0xffffffffffffff00;
  cStack_58 = (char)param_4[3] != '\0';
  if ((bool)cStack_58) {
    uStack_68 = param_4[1];
    uStack_70 = *param_4;
    uStack_60 = param_4[2];
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
  }
  FUN_1004d73e0(uVar1,uVar2,&uStack_48,&uStack_70);
  *param_1 = uVar1;
  if ((cStack_58 != '\0') && ((long)uStack_60 < 0)) {
    func_0x000107c60e14(uStack_70);
  }
  FUN_1004d6dac(&uStack_48);
  return;
}



/* Entry: 1004d73e0; end: 1004d75ab;  */

undefined8 * FUN_1004d73e0(undefined8 *param_1,long param_2,ulong *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uStack_4c;
  undefined8 *puStack_48;
  
  *param_1 = &PTR_DAT_1107c1628;
  param_1[1] = 1;
  param_1[2] = param_2;
  puVar8 = param_1 + 3;
  *puVar8 = 0;
  *puVar8 = *param_3;
  *param_3 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if (*(char *)(param_4 + 3) != '\0') {
    uVar10 = param_4[1];
    uVar9 = *param_4;
    param_1[6] = param_4[2];
    param_1[5] = uVar10;
    param_1[4] = uVar9;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(param_1 + 7) = 1;
    param_2 = param_1[2];
  }
  param_1[9] = 0;
  param_1[8] = param_1 + 9;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  plVar6 = *(long **)(param_2 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = *plVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar7 = param_1[2];
  if (*(long *)(lVar7 + 0x58) == 0) goto LAB_1004d752c;
  uVar4 = *puVar8;
  FUN_1004d75ac();
  lVar7 = param_1[2];
  if (uVar4 == 0) goto LAB_1004d752c;
  plVar6 = *(long **)(lVar7 + 0x1a8);
  if (plVar6 == (long *)0x0) {
LAB_1004d74f0:
    FUN_1004d75b4(*(undefined8 *)(lVar7 + 0x58),*(undefined8 *)(uVar4 + 0x18));
    puStack_48 = (undefined8 *)param_1[3];
    plVar5 = (long *)(param_1[2] + 0x1a0);
    uStack_4c = 0;
    FUN_1004d77c8(plVar5,&puStack_48,&puStack_48,&uStack_4c);
    lVar7 = param_1[2];
  }
  else {
    plVar5 = (long *)(lVar7 + 0x1a8);
    do {
      plVar3 = plVar6 + 1;
      if (*puVar8 <= (ulong)plVar6[4]) {
        plVar5 = plVar6;
        plVar3 = plVar6;
      }
      plVar6 = (long *)*plVar3;
    } while (plVar6 != (long *)0x0);
    if ((plVar5 == (long *)(lVar7 + 0x1a8)) || (*puVar8 < (ulong)plVar5[4])) goto LAB_1004d74f0;
  }
  *(int *)(plVar5 + 5) = (int)plVar5[5] + 1;
LAB_1004d752c:
  puStack_48 = param_1;
  FUN_1004d78e0(lVar7 + 0x1b8,&puStack_48,&puStack_48);
  return param_1;
}



/* Entry: 1004d75ac; end: 1004d75b3;  */

undefined8 FUN_1004d75ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 1004d75b4; end: 1004d761b;  */

void FUN_1004d75b4(long param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  FUN_100460448(param_1 + 0xf0);
  FUN_1004d7630(param_1 + 0x148,&uStack_28,&uStack_28);
  func_0x000100466b80(param_1 + 0xf0);
  return;
}



/* Entry: 1004d761c; end: 1004d762f;  */

void FUN_1004d761c(void)

{
  return;
}



/* Entry: 1004d7630; end: 1004d7693;  */

void FUN_1004d7630(long *param_1)

{
  long *unaff_x22;
  
  FUN_1004d761c();
  FUN_1004d7694();
  func_0x0001004d76a0();
  if (*param_1 == 0) {
    func_0x0001004d76ec();
    param_1[4] = *unaff_x22;
    func_0x0001004d76fc();
    func_0x0001004d7768();
  }
  FUN_1004d77a8();
  return;
}



/* Entry: 1004d7694; end: 1004d770b;  */

void FUN_1004d7694(void)

{
  return;
}



/* Entry: 1004d770c; end: 1004d774f;  */

void FUN_1004d770c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  FUN_10002c5b0(param_1[1],param_4);
  FUN_1004d7750();
  return;
}



/* Entry: 1004d7750; end: 1004d7783;  */

void FUN_1004d7750(void)

{
  long unaff_x19;
  
  *(long *)(unaff_x19 + 0x10) = *(long *)(unaff_x19 + 0x10) + 1;
  return;
}



/* Entry: 1004d7784; end: 1004d77a7;  */

void FUN_1004d7784(long param_1)

{
  func_0x0001004d7774();
  if (param_1 != 0) {
    func_0x000107c60e14();
  }
  return;
}



/* Entry: 1004d77a8; end: 1004d77c7;  */

void FUN_1004d77a8(void)

{
  return;
}



/* Entry: 1004d77c8; end: 1004d788b;  */

undefined1  [16] FUN_1004d77c8(long param_1,ulong *param_2,long *param_3,undefined4 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, (ulong)plVar3[4] <= *param_2) {
        if (*param_2 <= (ulong)plVar3[4]) {
          uVar2 = 0;
          goto LAB_1004d7874;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_1004d7834;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_1004d7834:
  plVar1 = (long *)0x30;
  func_0x000107c60e20();
  plVar1[4] = *param_3;
  *(undefined4 *)(plVar1 + 5) = *param_4;
  FUN_1004d788c(param_1,plVar3,plVar4,plVar1);
  uVar2 = 1;
  plVar3 = plVar1;
LAB_1004d7874:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 1004d788c; end: 1004d78df;  */

void FUN_1004d788c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_100474f14(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1004d78e0; end: 1004d7997;  */

undefined1  [16] FUN_1004d78e0(long param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, (ulong)plVar3[4] <= *param_2) {
        if (*param_2 <= (ulong)plVar3[4]) {
          uVar2 = 0;
          goto LAB_1004d7980;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_1004d7948;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_1004d7948:
  plVar1 = (long *)0x28;
  func_0x000107c60e20();
  plVar1[4] = *param_3;
  FUN_1004d7998(param_1,plVar3,plVar4,plVar1);
  uVar2 = 1;
  plVar3 = plVar1;
LAB_1004d7980:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 1004d7998; end: 1004d79eb;  */

void FUN_1004d7998(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_100474f14(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1004d79ec; end: 1004d7a23;  */

long FUN_1004d79ec(long param_1)

{
  FUN_10048650c(*(undefined8 *)(param_1 + 0x88));
  FUN_1004c4af4(param_1 + 0x90,*(undefined8 *)(param_1 + 0x98));
  return param_1;
}



/* Entry: 1004d7a24; end: 1004d7adf;  */

undefined1  [16] FUN_1004d7a24(long param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, (ulong)plVar3[4] <= *param_2) {
        if (*param_2 <= (ulong)plVar3[4]) {
          uVar2 = 0;
          goto LAB_1004d7ac8;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_1004d7a8c;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_1004d7a8c:
  plVar1 = (long *)0x30;
  func_0x000107c60e20();
  plVar1[4] = *(long *)*param_4;
  plVar1[5] = 0;
  FUN_1004d7c74(param_1,plVar3,plVar4,plVar1);
  uVar2 = 1;
  plVar3 = plVar1;
LAB_1004d7ac8:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 1004d7ae0; end: 1004d7c73;  */

void FUN_1004d7ae0(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plStack_60;
  long lStack_58;
  undefined1 uStack_49;
  long *plStack_48;
  
  plVar4 = (long *)(param_1 + 0x40);
  lStack_58 = *param_2;
  plStack_48 = &lStack_58;
  FUN_1004d7a24(plVar4,&lStack_58,&UNK_10dd5b8f9,&plStack_48,&uStack_49);
  if (plVar4[5] == 0) {
    plVar5 = (long *)0x98;
    func_0x000107c60e20();
    lVar6 = *param_2;
    *param_2 = 0;
    plVar1 = (long *)(param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *plVar5 = (long)&PTR_DAT_1107c1738;
    plVar5[1] = 1;
    FUN_100460318(plVar5 + 2);
    plVar5[0xd] = 0;
    plVar5[0xc] = 0;
    plVar5[0xf] = 0;
    plVar5[0xe] = 0;
    plVar5[0xb] = 0;
    plVar5[10] = 0;
    *plVar5 = (long)&PTR_DAT_1107c16c0;
    plVar5[0x10] = lVar6;
    plVar5[0x11] = param_1;
    plVar5[0x12] = 0;
    plVar4[5] = (long)plVar5;
    plStack_60 = plVar5;
    FUN_1004d7cc8(*(undefined8 *)(param_1 + 0x18),param_1 + 0x20,&plStack_60);
    if (plStack_60 == (long *)0x0) {
      return;
    }
    plVar4 = plStack_60 + 1;
    do {
      lVar6 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4 = plStack_60;
    if (lVar6 + -1 != 0) {
      return;
    }
  }
  else {
    func_0x000107c2c1b4();
  }
  (**(code **)(*plVar4 + 8))();
  return;
}



/* Entry: 1004d7c74; end: 1004d7cc7;  */

void FUN_1004d7c74(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_100474f14(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1004d7cc8; end: 1004d7f33;  */

void FUN_1004d7cc8(long *param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  FUN_100460448(param_1 + 0x32);
  plVar3 = (long *)*param_3;
  (**(code **)(*plVar3 + 0x18))();
  if (plVar3 != (long *)0x0) {
    FUN_1004c7e78(param_1[0x27]);
  }
  if (*(char *)(param_2 + 0x18) == '\0') {
    uVar4 = 0x28;
    func_0x000107c60e20(0x28);
    plStack_38 = (long *)0x0;
    if (*param_3 != 0) {
      plVar3 = (long *)(*param_3 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plStack_38 = (long *)*param_3;
    }
    FUN_1004d7f6c(uVar4,&plStack_38,*(undefined4 *)((long)param_1 + 0x1d4),param_1 + 0x3b);
    if (plStack_38 != (long *)0x0) {
      plVar3 = plStack_38 + 1;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*plStack_38 + 8))();
      }
    }
    plStack_40 = (long *)*param_3;
    *param_3 = 0;
    FUN_1004d8680(param_1 + 0x3c,&plStack_40);
    if (plStack_40 == (long *)0x0) goto LAB_1004d7e3c;
    plVar3 = plStack_40 + 1;
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 != 1) goto LAB_1004d7e3c;
    lVar5 = 1;
    plVar3 = plStack_40;
  }
  else {
    plVar3 = param_1 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_50 = (long *)*param_3;
    *param_3 = 0;
    plStack_48 = param_1;
    func_0x000104a8ddd0(param_1 + 0x3f,&plStack_48,param_2,&plStack_50);
    if (plStack_50 != (long *)0x0) {
      plVar3 = plStack_50 + 1;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*plStack_50 + 8))();
      }
    }
    if (plStack_48 == (long *)0x0) goto LAB_1004d7e3c;
    plVar3 = plStack_48 + 1;
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 != 1) goto LAB_1004d7e3c;
    lVar5 = 2;
    plVar3 = plStack_48;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_1004d7e3c:
  func_0x000100466b80(param_1 + 0x32);
  return;
}



/* Entry: 1004d7f34; end: 1004d7f6b; -[SCCameraViewfinderMetalRenderer setIsMetalLibLoaded:] */

void FUN_1004d7f34(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 1004d7f6c; end: 1004d806b;  */

undefined8 *
FUN_1004d7f6c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,ulong *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_40;
  undefined1 uStack_31;
  undefined4 auStack_30 [2];
  ulong uStack_28;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  uVar3 = *param_1;
  uStack_28 = *param_4;
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
  auStack_30[0] = param_3;
  FUN_1004d806c(uVar3,auStack_30);
  if ((uStack_28 & 1) != 0) {
    FUN_10084dad0();
  }
  param_1[2] = FUN_1004da4ec;
  param_1[3] = param_1;
  param_1[4] = 0;
  uStack_40 = 0;
  FUN_1004bd7e8(&uStack_31,param_1 + 1,&uStack_40);
  if ((uStack_40 & 1) != 0) {
    FUN_10084dad0();
  }
  return param_1;
}



/* Entry: 1004d806c; end: 1004d80cf;  */

void FUN_1004d806c(long param_1,undefined8 param_2)

{
  FUN_100460448(param_1 + 0x10);
  FUN_1004d83e4(param_1 + 0x50,param_2);
  func_0x000100466b80(param_1 + 0x10);
  return;
}



/* Entry: 1004d80d0; end: 1004d83e3;  */

void FUN_1004d80d0(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  
  if ((ulong)param_1[4] < 0x100) {
    uVar8 = param_1[2] - param_1[1] >> 3;
    plVar1 = param_1 + 3;
    lVar7 = *plVar1;
    lVar12 = lVar7 - *param_1;
    if ((ulong)(lVar12 >> 3) <= uVar8) {
      lVar12 = lVar12 >> 2;
      if (lVar7 == *param_1) {
        lVar12 = 1;
      }
      plStack_50 = plVar1;
      func_0x0001004d847c();
      plStack_68 = plVar1 + uVar8;
      plStack_58 = plVar1 + lVar12;
      uVar2 = 0x1000;
      lStack_70 = (long)plVar1;
      plStack_60 = plStack_68;
      func_0x000107c60e20();
      uStack_78 = uVar2;
      FUN_1004d84b0(&lStack_70,&uStack_78);
      lVar7 = param_1[2];
      lVar12 = -7 - lVar7;
      while (lVar7 != param_1[1]) {
        lVar7 = lVar7 + -8;
        lVar12 = lVar12 + 8;
        func_0x000104a8f730(&lStack_70,lVar7);
      }
      lVar3 = *param_1;
      lVar14 = param_1[3];
      lVar13 = param_1[2];
      param_1[1] = (long)plStack_68;
      *param_1 = lStack_70;
      param_1[3] = (long)plStack_58;
      param_1[2] = (long)plStack_60;
      plStack_60 = (long *)lVar13;
      if (lVar7 != lVar13) {
        plStack_60 = (long *)(lVar13 + (-(lVar13 + lVar12) & 0xfffffffffffffff8U));
      }
      if (lVar3 == 0) {
        return;
      }
      lStack_70 = lVar3;
      plStack_68 = (long *)lVar7;
      plStack_58 = (long *)lVar14;
      func_0x000107c60e14();
      return;
    }
    lVar12 = 0x1000;
    if (lVar7 != param_1[2]) {
      func_0x000107c60e20();
      lStack_70 = lVar12;
      func_0x000104a8f500(param_1,&lStack_70);
      return;
    }
    func_0x000107c60e20();
    lStack_70 = lVar12;
    func_0x000104a8f614(param_1,&lStack_70);
    plVar10 = (long *)param_1[2];
    plVar4 = (long *)param_1[1] + 1;
    lVar12 = *(long *)param_1[1];
    param_1[1] = (long)plVar4;
    if (plVar10 != (long *)param_1[3]) goto LAB_1004d8308;
    plVar6 = (long *)*param_1;
    lVar7 = (long)plVar4 - (long)plVar6;
    if (plVar4 < plVar6 || lVar7 == 0) {
      uVar8 = (long)plVar10 - (long)plVar6 >> 2;
      if ((long)plVar10 - (long)plVar6 == 0) {
        uVar8 = 1;
      }
      uVar5 = uVar8;
      func_0x0001004d847c();
      plVar4 = plVar1 + (uVar8 >> 2);
      plVar6 = plVar1 + uVar5;
      uVar8 = param_1[2] - param_1[1];
      plVar10 = plVar4;
      if (uVar8 != 0) {
        plVar10 = (long *)((long)plVar4 + (uVar8 & 0xfffffffffffffff8));
        lVar7 = ((long)uVar8 >> 3) << 3;
        plVar9 = (long *)param_1[1];
        plVar11 = plVar4;
        do {
          *plVar11 = *plVar9;
          lVar7 = lVar7 + -8;
          plVar9 = plVar9 + 1;
          plVar11 = plVar11 + 1;
        } while (lVar7 != 0);
      }
      goto LAB_1004d82bc;
    }
  }
  else {
    plVar1 = param_1 + 3;
    param_1[4] = param_1[4] - 0x100;
    plVar10 = (long *)param_1[2];
    plVar4 = (long *)param_1[1] + 1;
    lVar12 = *(long *)param_1[1];
    param_1[1] = (long)plVar4;
    if (plVar10 != (long *)*plVar1) goto LAB_1004d8308;
    plVar6 = (long *)*param_1;
    lVar7 = (long)plVar4 - (long)plVar6;
    if (plVar4 < plVar6 || lVar7 == 0) {
      uVar8 = (long)plVar10 - (long)plVar6 >> 2;
      if ((long)plVar10 - (long)plVar6 == 0) {
        uVar8 = 1;
      }
      uVar5 = uVar8;
      func_0x0001004d847c();
      plVar4 = plVar1 + (uVar8 >> 2);
      plVar6 = plVar1 + uVar5;
      uVar8 = param_1[2] - param_1[1];
      plVar10 = plVar4;
      if (uVar8 != 0) {
        lVar7 = ((long)uVar8 >> 3) << 3;
        plVar9 = (long *)param_1[1];
        plVar11 = plVar4;
        do {
          *plVar11 = *plVar9;
          lVar7 = lVar7 + -8;
          plVar9 = plVar9 + 1;
          plVar10 = (long *)((long)plVar4 + (uVar8 & 0xfffffffffffffff8));
          plVar11 = plVar11 + 1;
        } while (lVar7 != 0);
      }
LAB_1004d82bc:
      lVar7 = *param_1;
      *param_1 = (long)plVar1;
      param_1[1] = (long)plVar4;
      param_1[2] = (long)plVar10;
      param_1[3] = (long)plVar6;
      if (lVar7 != 0) {
        func_0x000107c60e14(lVar7);
        plVar10 = (long *)param_1[2];
      }
      goto LAB_1004d8308;
    }
  }
  lVar7 = lVar7 >> 3;
  lVar3 = lVar7 + 2;
  if (-2 < lVar7) {
    lVar3 = lVar7 + 1;
  }
  plVar1 = plVar4 + -(lVar3 >> 1);
  lVar7 = (long)plVar10 - (long)plVar4;
  if (lVar7 != 0) {
    func_0x000107c610b8(plVar1,plVar4,lVar7);
    plVar4 = (long *)param_1[1];
  }
  plVar10 = (long *)((long)plVar1 + lVar7);
  param_1[1] = (long)(plVar4 + -(lVar3 >> 1));
  param_1[2] = (long)plVar10;
LAB_1004d8308:
  *plVar10 = lVar12;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 1004d83e4; end: 1004d84af;  */

void FUN_1004d83e4(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar2 = 0;
  if (*(long *)(param_1 + 0x10) != lVar3) {
    uVar2 = (*(long *)(param_1 + 0x10) - lVar3) * 0x20 - 1;
  }
  uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  if (uVar2 == uVar4) {
    FUN_1004d80d0(param_1);
    lVar3 = *(long *)(param_1 + 8);
    uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  }
  puVar1 = (undefined4 *)
           (*(long *)(lVar3 + (uVar4 >> 5 & 0x7fffffffffffff8)) + (uVar4 & 0xff) * 0x10);
  *puVar1 = *param_2;
  *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0x36;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 1004d84b0; end: 1004d867f;  */

void FUN_1004d84b0(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar8 = (undefined8 *)param_1[2];
  if (puVar8 == (undefined8 *)param_1[3]) {
    uVar7 = *param_1;
    uVar5 = param_1[1];
    if (uVar5 < uVar7 || uVar5 - uVar7 == 0) {
      uVar5 = (long)((long)puVar8 - uVar7) >> 2;
      if ((long)puVar8 - uVar7 == 0) {
        uVar5 = 1;
      }
      uVar2 = param_1[4];
      uVar3 = uVar5;
      func_0x0001004d847c();
      puVar1 = (undefined8 *)(uVar2 + (uVar5 >> 2) * 8);
      uVar7 = param_1[2] - (long)param_1[1];
      puVar8 = puVar1;
      if (uVar7 != 0) {
        puVar8 = (undefined8 *)((long)puVar1 + (uVar7 & 0xfffffffffffffff8));
        lVar9 = ((long)uVar7 >> 3) << 3;
        puVar6 = (undefined8 *)param_1[1];
        puVar10 = puVar1;
        do {
          *puVar10 = *puVar6;
          lVar9 = lVar9 + -8;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar9 != 0);
      }
      uVar7 = *param_1;
      *param_1 = uVar2;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar8;
      param_1[3] = uVar2 + uVar3 * 8;
      if (uVar7 != 0) {
        func_0x000107c60e14(uVar7);
        puVar8 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar4 = (long)(uVar5 - uVar7) >> 3;
      lVar9 = lVar4 + 2;
      if (-2 < lVar4) {
        lVar9 = lVar4 + 1;
      }
      lVar11 = uVar5 + (lVar9 >> 1) * -8;
      lVar4 = (long)puVar8 - uVar5;
      if (lVar4 != 0) {
        func_0x000107c610b8(lVar11,uVar5,lVar4);
        puVar8 = (undefined8 *)param_1[1];
      }
      puVar1 = puVar8 + -(lVar9 >> 1);
      puVar8 = (undefined8 *)(lVar11 + lVar4);
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar8;
    }
  }
  *puVar8 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 1004d8680; end: 1004d86ff;  */

void FUN_1004d8680(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_30;
  long *plStack_28;
  
  plStack_30 = (long *)*param_2;
  *param_2 = 0;
  plStack_28 = plStack_30;
  func_0x0001004d85c4(param_1,&plStack_30,&plStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)(*plStack_28 + 8))();
    }
  }
  return;
}



/* Entry: 1004d8700; end: 1004d8753;  */

void FUN_1004d8700(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_100474f14(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1004d8754; end: 1004d8847;  */

void FUN_1004d8754(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  long *plStack_38;
  
  if (*(char *)(*(long *)(param_1 + 8) + 0x38) == '\0') {
    lVar1 = param_1;
    FUN_1004d8848();
    if ((int)lVar1 == 0) {
      lVar1 = param_1;
      FUN_1004c94c4();
      if ((int)lVar1 == 0) {
        return;
      }
    }
    else {
      if ((int)param_2 == 1) {
        return;
      }
      func_0x000104abe9c0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x20),
                          *(undefined8 *)(*(long *)(param_1 + 8) + 0x20));
      func_0x000104a8365c(*(long *)(param_1 + 8) + 0x48,*(long *)(param_1 + 8) + 0x50);
    }
    plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x28);
    plStack_38 = (long *)*param_4;
    *param_4 = 0;
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_3,&plStack_38);
    plVar2 = plStack_38;
    plStack_38 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  return;
}



/* Entry: 1004d8848; end: 1004d8873;  */

long * FUN_1004d8848(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return (long *)(ulong)(*(long *)(param_1 + 0x10) == *(long *)(*(long *)(param_1 + 8) + 0x50));
  }
  func_0x000107c2c1cc();
  plVar1 = *(long **)(param_1 + 8);
  if ((plVar1[0x2e] != 0) && (plVar1[0x3b] == 0)) {
    plVar2 = (long *)*param_4;
    *param_4 = 0;
    FUN_1004c062c();
    plVar1 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001004d88e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return plVar2;
    }
  }
  return plVar1;
}



/* Entry: 1004d8874; end: 1004d8903;  */

void FUN_1004d8874(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  
  if ((*(long *)(*(long *)(param_1 + 8) + 0x170) != 0) &&
     (*(long *)(*(long *)(param_1 + 8) + 0x1d8) == 0)) {
    plVar1 = (long *)*param_4;
    *param_4 = 0;
    FUN_1004c062c();
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001004d88e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1004d8904; end: 1004d895f;  */

void FUN_1004d8904(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_DAT_1107c21d0;
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1004d8960; end: 1004d89a3;  */

long * FUN_1004d8960(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_2 = 0;
  puVar1 = (undefined8 *)*param_1;
  *param_1 = lVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return param_1;
}



/* Entry: 1004d89a4; end: 1004d8a0f;  */

ulong * FUN_1004d89a4(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong *puStack_28;
  
  FUN_10048650c(param_1[8]);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    func_0x000107c60e14(param_1[5]);
  }
  plVar4 = (long *)param_1[4];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*param_1 == 0) {
    puStack_28 = param_1 + 1;
    FUN_1004c4cbc(&puStack_28);
  }
  else if ((*param_1 & 1) != 0) {
    FUN_10084dad0();
  }
  return param_1;
}



/* Entry: 1004d8a10; end: 1004d8a5f;  */

ulong * FUN_1004d8a10(ulong *param_1)

{
  ulong *puStack_28;
  
  if (*param_1 == 0) {
    puStack_28 = param_1 + 1;
    FUN_1004c4cbc(&puStack_28);
  }
  else if ((*param_1 & 1) != 0) {
    FUN_10084dad0();
  }
  return param_1;
}



/* Entry: 1004d8a60; end: 1004d8a63;  */

ulong * FUN_1004d8a60(ulong *param_1)

{
  ulong *puStack_28;
  
  FUN_10048650c(param_1[9]);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    func_0x000107c60e14(param_1[6]);
  }
  FUN_1004d8aa8(param_1 + 4);
  if (*param_1 == 0) {
    puStack_28 = param_1 + 1;
    FUN_1004c4cbc(&puStack_28);
  }
  else if ((*param_1 & 1) != 0) {
    FUN_10084dad0();
  }
  return param_1;
}



/* Entry: 1004d8a64; end: 1004d8aa7;  */

ulong * FUN_1004d8a64(ulong *param_1)

{
  ulong *puStack_28;
  
  FUN_10048650c(param_1[9]);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    func_0x000107c60e14(param_1[6]);
  }
  FUN_1004d8aa8(param_1 + 4);
  if (*param_1 == 0) {
    puStack_28 = param_1 + 1;
    FUN_1004c4cbc(&puStack_28);
  }
  else if ((*param_1 & 1) != 0) {
    FUN_10084dad0();
  }
  return param_1;
}



/* Entry: 1004d8aa8; end: 1004d8b0f;  */

ulong * FUN_1004d8aa8(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (*param_1 == 0) {
    plVar4 = (long *)param_1[1];
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  else if ((*param_1 & 1) != 0) {
    FUN_10084dad0();
  }
  return param_1;
}



/* Entry: 1004d8b10; end: 1004d919b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1004d8b10(long param_1)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  long *plVar10;
  long lVar11;
  undefined **ppuVar12;
  int *piVar13;
  ulong uVar14;
  undefined8 *******pppppppuVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  int iVar19;
  undefined8 *******pppppppuVar20;
  long *plVar21;
  long *plStack_110;
  long *plStack_108;
  undefined8 *******pppppppuStack_100;
  undefined8 *******pppppppuStack_f8;
  undefined8 *******pppppppuStack_f0;
  long *plStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined8 *******pppppppuStack_d8;
  undefined8 *******apppppppuStack_d0 [2];
  undefined1 auStack_c0 [32];
  byte bStack_a0;
  undefined7 uStack_9f;
  undefined8 *******apppppppuStack_98 [8];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x180) == 0) {
    uVar17 = 0;
  }
  else {
    plVar18 = (long *)(*(long *)(param_1 + 0x180) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *plVar18 = *plVar18 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar17 = *(undefined8 *)(param_1 + 0x180);
  }
  if (*(long *)(param_1 + 0x188) == 0) {
LAB_1004d8b8c:
    plVar18 = (long *)0x18;
    func_0x000107c60e20();
    lVar11 = 0;
    if (*(long *)(param_1 + 0x180) != 0) {
      plVar10 = (long *)(*(long *)(param_1 + 0x180) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar11 = *(long *)(param_1 + 0x180);
    }
    *plVar18 = (long)&PTR_DAT_1107c1868;
    plVar18[1] = 1;
    plVar18[2] = lVar11;
  }
  else {
    plVar18 = (long *)(*(long *)(param_1 + 0x188) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *plVar18 = *plVar18 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar18 = *(long **)(param_1 + 0x188);
    if (plVar18 == (long *)0x0) goto LAB_1004d8b8c;
  }
  func_0x0001004c99c0(&pppppppuStack_e0,"grpc.internal.client_channel",param_1,&PTR_FUN_1107c1010);
  func_0x0001004c99c0(auStack_c0,"grpc.internal.service_config_obj",uVar17,&PTR_DAT_1107c1028);
  FUN_1004c9a58(&bStack_a0,&pppppppuStack_e0,&bStack_a0,&plStack_e8);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  pppppppuVar8 = apppppppuStack_98;
  if ((bStack_a0 & 1) != 0) {
    pppppppuVar8 = apppppppuStack_98[0];
  }
  FUN_1004c87a4(uVar6,pppppppuVar8,CONCAT71(uStack_9f,bStack_a0) >> 1);
  plVar10 = plVar18;
  (**(code **)(*plVar18 + 0x28))(plVar18,uVar6);
  plVar7 = plVar10;
  FUN_1004808a4();
  if (((ulong)plVar7 & 1) == 0) {
    plVar7 = plVar10;
    FUN_100480b50(plVar10,"grpc.enable_retries",1);
    iVar19 = (int)plVar7;
  }
  else {
    iVar19 = 0;
  }
  (**(code **)(*plVar18 + 0x20))(&pppppppuStack_e0,plVar18);
  pppppppuVar8 = apppppppuStack_d0;
  if (iVar19 == 0) {
    if (pppppppuStack_d8 < apppppppuStack_d0[0]) {
      ppuVar12 = &PTR_DAT_1107c1040;
      goto LAB_1004d8cc4;
    }
    lVar11 = (long)pppppppuStack_d8 - (long)pppppppuStack_e0 >> 3;
    uVar1 = lVar11 + 1;
    if (uVar1 >> 0x3d != 0) {
      func_0x000104a80634(&pppppppuStack_e0);
      goto LAB_1004d902c;
    }
    uVar14 = (long)apppppppuStack_d0[0] - (long)pppppppuStack_e0 >> 2;
    if (uVar14 <= uVar1) {
      uVar14 = uVar1;
    }
    if (0x7ffffffffffffff7 < (ulong)((long)apppppppuStack_d0[0] - (long)pppppppuStack_e0)) {
      uVar14 = 0x1fffffffffffffff;
    }
    if (uVar14 == 0) {
      pppppppuVar8 = (undefined8 *******)0x0;
    }
    else {
      FUN_10047d694();
    }
    pppppppuVar20 = pppppppuVar8 + lVar11;
    pppppppuVar8 = pppppppuVar8 + uVar14;
    *pppppppuVar20 = (undefined8 ******)&PTR_DAT_1107c1040;
    pppppppuVar15 = pppppppuVar20;
    pppppppuVar9 = pppppppuStack_d8;
    while (pppppppuVar9 != pppppppuStack_e0) {
      pppppppuVar9 = pppppppuVar9 + -1;
      pppppppuVar15 = pppppppuVar15 + -1;
      *pppppppuVar15 = *pppppppuVar9;
      pppppppuStack_d8 = pppppppuStack_e0;
    }
LAB_1004d8dcc:
    pppppppuVar20 = pppppppuVar20 + 1;
    pppppppuStack_e0 = pppppppuVar15;
    apppppppuStack_d0[0] = pppppppuVar8;
    if (pppppppuStack_d8 != (undefined8 *******)0x0) {
      pppppppuStack_d8 = pppppppuVar20;
      func_0x000107c60e14();
    }
LAB_1004d8ddc:
    pppppppuStack_100 = pppppppuStack_e0;
    pppppppuStack_f0 = apppppppuStack_d0[0];
    pppppppuStack_e0 = (undefined8 *******)0x0;
    pppppppuStack_d8 = (undefined8 *******)0x0;
    apppppppuStack_d0[0] = (undefined8 *******)0x0;
    pppppppuStack_f8 = pppppppuVar20;
    FUN_1004d9354(&plStack_e8,plVar10,&pppppppuStack_100);
    if (pppppppuStack_100 != (undefined8 *******)0x0) {
      pppppppuStack_f8 = pppppppuStack_100;
      func_0x000107c60e14();
    }
    if (plStack_e8 == (long *)0x0) {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                    ,0x5f2,2,"assertion failed: %s");
      func_0x000107c60ebc();
      goto LAB_1004d902c;
    }
    FUN_10048650c(plVar10);
    FUN_100460448(param_1 + 0x70);
    plVar10 = *(long **)(param_1 + 0xb8);
    if (plVar10 != (long *)0x0) {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      plStack_108 = (long *)0x36;
      if (((ulong)plVar10 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    plVar7 = *(long **)(param_1 + 200);
    plVar2 = *(long **)(param_1 + 0xd0);
    plVar21 = *(long **)(param_1 + 0xb0);
    plVar16 = *(long **)(param_1 + 0xd8);
    *(undefined1 *)(param_1 + 0xc0) = 1;
    *(undefined8 *)(param_1 + 200) = uVar17;
    *(long **)(param_1 + 0xd0) = plVar18;
    *(long **)(param_1 + 0xd8) = plStack_e8;
    plStack_e8 = plVar16;
    for (; plVar21 != (long *)0x0; plVar21 = (long *)plVar21[1]) {
      func_0x000100460dc4();
      *(undefined1 *)(*plVar10 + 0x34) = 0;
      lVar11 = *plVar21;
      plVar16 = *(long **)(lVar11 + 0x10);
      plStack_108 = (long *)0x0;
      plVar10 = plVar16;
      FUN_1004bdd30(plVar16,lVar11,&plStack_108);
      plVar18 = plStack_108;
      if ((int)plVar10 == 0) {
        if (((ulong)plStack_108 & 1) != 0) goto LAB_1004d8ee4;
      }
      else {
        plStack_110 = plStack_108;
        if (((ulong)plStack_108 & 1) != 0) {
          piVar13 = (int *)((long)plStack_108 + -1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar4) {
              *piVar13 = *piVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_1004da0b0(plVar16,lVar11,&plStack_110);
        plVar10 = plVar16;
        if (((ulong)plVar18 & 1) != 0) {
          FUN_10084dad0(plVar18);
LAB_1004d8ee4:
          FUN_10084dad0();
          plVar10 = plVar18;
        }
      }
    }
    func_0x000100466b80(param_1 + 0x70);
    if (plStack_e8 != (long *)0x0) {
      plVar18 = plStack_e8 + 1;
      do {
        lVar11 = *plVar18;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *plVar18 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plStack_e8 + 8))();
      }
    }
    if (pppppppuStack_e0 != (undefined8 *******)0x0) {
      pppppppuStack_d8 = pppppppuStack_e0;
      func_0x000107c60e14();
    }
    if ((bStack_a0 & 1) != 0) {
      func_0x000107c60e14(apppppppuStack_98[0]);
    }
    if (plVar2 != (long *)0x0) {
      plVar18 = plVar2 + 1;
      do {
        lVar11 = *plVar18;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *plVar18 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
    }
    if (plVar7 != (long *)0x0) {
      plVar18 = plVar7 + 1;
      do {
        lVar11 = *plVar18;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *plVar18 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    func_0x000107c60e78();
  }
  else {
    if (pppppppuStack_d8 < apppppppuStack_d0[0]) {
      ppuVar12 = &PTR_FUN_1107c2f40;
LAB_1004d8cc4:
      pppppppuVar20 = pppppppuStack_d8 + 1;
      *pppppppuStack_d8 = (undefined8 ******)ppuVar12;
      goto LAB_1004d8ddc;
    }
    lVar11 = (long)pppppppuStack_d8 - (long)pppppppuStack_e0 >> 3;
    uVar1 = lVar11 + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar14 = (long)apppppppuStack_d0[0] - (long)pppppppuStack_e0 >> 2;
      if (uVar14 <= uVar1) {
        uVar14 = uVar1;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)apppppppuStack_d0[0] - (long)pppppppuStack_e0)) {
        uVar14 = 0x1fffffffffffffff;
      }
      if (uVar14 == 0) {
        pppppppuVar8 = (undefined8 *******)0x0;
      }
      else {
        FUN_10047d694();
      }
      pppppppuVar20 = pppppppuVar8 + lVar11;
      pppppppuVar8 = pppppppuVar8 + uVar14;
      *pppppppuVar20 = (undefined8 ******)&PTR_FUN_1107c2f40;
      pppppppuVar15 = pppppppuVar20;
      pppppppuVar9 = pppppppuStack_d8;
      while (pppppppuVar9 != pppppppuStack_e0) {
        pppppppuVar9 = pppppppuVar9 + -1;
        pppppppuVar15 = pppppppuVar15 + -1;
        *pppppppuVar15 = *pppppppuVar9;
        pppppppuStack_d8 = pppppppuStack_e0;
      }
      goto LAB_1004d8dcc;
    }
  }
  func_0x000104a80634(&pppppppuStack_e0);
LAB_1004d902c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1004d9030);
  (*pcVar5)();
}



/* Entry: 1004d919c; end: 1004d91cb;  */

void FUN_1004d919c(void)

{
  return;
}



/* Entry: 1004d91cc; end: 1004d9353;  */

void FUN_1004d91cc(long *param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  ulong uStack_58;
  undefined8 auStack_50 [2];
  char cStack_39;
  ulong uStack_38;
  
  lVar3 = *param_3;
  func_0x00010047f3cc(lVar3,param_3[1] - lVar3 >> 3);
  FUN_100460860();
  FUN_10047fbe4(&uStack_38,1,&UNK_104a8228c,lVar3,*param_3,param_3[1] - *param_3 >> 3,param_2,
                "DynamicFilters",lVar3);
  if (uStack_38 == 0) {
    *param_1 = lVar3;
    param_1[1] = 0;
  }
  else {
    uStack_58 = uStack_38;
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
    func_0x000104aba950(auStack_50,&uStack_58);
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/dynamic_filters.cc"
                  ,0x9e,2,"error initializing client internal stack: %s");
    if (cStack_39 < '\0') {
      func_0x000107c60e14(auStack_50[0]);
    }
    if ((uStack_58 & 1) != 0) {
      FUN_10084dad0();
    }
    func_0x000104aab078(lVar3);
    FUN_100460314(lVar3);
    *param_1 = 0;
    param_1[1] = uStack_38;
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
    if ((uStack_38 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  return;
}



/* Entry: 1004d9354; end: 1004d955f;  */

void FUN_1004d9354(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined1 auStack_98 [32];
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_50;
  ulong uStack_48;
  
  lStack_68 = param_3[1];
  lVar8 = *param_3;
  lStack_60 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  lStack_70 = lVar8;
  FUN_1004d91cc(&uStack_50,param_2,&lStack_70);
  if (lVar8 != 0) {
    lStack_68 = lVar8;
    func_0x000107c60e14();
  }
  uVar4 = uStack_48;
  if (uStack_48 == 0) {
LAB_1004d9474:
    puVar6 = (undefined8 *)0x18;
    func_0x000107c60e20();
    *puVar6 = &PTR_DAT_1107c1fe0;
    puVar6[1] = 1;
    puVar6[2] = uStack_50;
    *param_1 = puVar6;
    return;
  }
  uStack_78 = uStack_48;
  if ((uStack_48 & 1) != 0) {
    piVar7 = (int *)(uStack_48 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x000104adbd14(auStack_98,&uStack_78);
  FUN_1004c87a4(param_2,auStack_98,1);
  puVar6 = (undefined8 *)0x8;
  func_0x000107c60e20();
  puStack_b8 = puVar6 + 1;
  *puVar6 = &PTR_DAT_1107c7238;
  puStack_c0 = puVar6;
  puStack_b0 = puStack_b8;
  FUN_1004d91cc(&uStack_a8,param_2,&puStack_c0);
  uVar3 = uStack_a0;
  uStack_50 = uStack_a8;
  if (uStack_a0 == uVar4) {
    if ((uVar4 & 1) != 0) {
      FUN_10084dad0(uVar4);
    }
    func_0x000107c60e14(puVar6);
  }
  else {
    uStack_48 = uStack_a0;
    uStack_a0 = 0x36;
    if ((uVar4 & 1) != 0) {
      FUN_10084dad0(uVar4);
    }
    puStack_b8 = puVar6;
    func_0x000107c60e14(puVar6);
    if (uVar3 == 0) {
      FUN_10048650c(param_2);
      if ((uStack_78 & 1) != 0) {
        FUN_10084dad0();
      }
      goto LAB_1004d9474;
    }
  }
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/dynamic_filters.cc"
                ,0xb7,2,"assertion failed: %s");
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1004d94f4);
  (*pcVar5)();
}



/* Entry: 1004d9560; end: 1004d990b;  */

void FUN_1004d9560(undefined8 *******param_1,long *param_2,long param_3)

{
  char *******pppppppcVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int *piVar6;
  undefined8 *******pppppppuVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  ulong uVar12;
  undefined8 *unaff_x25;
  undefined8 ******ppppppuStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_f9;
  undefined8 *****pppppuStack_f8;
  undefined8 ****ppppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char ******ppppppcStack_b8;
  ulong uStack_b0;
  byte bStack_a1;
  undefined8 ******ppppppuStack_58;
  
  if (*(int *)(param_3 + 0x14) == 0) {
    func_0x000107c2c1fc();
LAB_1004d9844:
    func_0x000107c2c200();
LAB_1004d9848:
    (**(code **)(*param_2 + 8))();
  }
  else {
    if ((undefined **)*param_2 != &PTR_FUN_1107c2f40) goto LAB_1004d9844;
    *param_1 = (undefined8 ******)0x0;
    unaff_x25 = (undefined8 *)param_2[1];
    piVar11 = *(int **)(param_3 + 8);
    piVar6 = piVar11;
    FUN_10047fdf4(piVar11,"grpc.internal.client_channel");
    if ((piVar6 == (int *)0x0) || (*piVar6 != 2)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(piVar6 + 4);
    }
    *unaff_x25 = uVar8;
    piVar6 = piVar11;
    FUN_1004865ac(piVar11,"grpc.per_rpc_retry_buffer_size",0x40000,0x7fffffff);
    unaff_x25[1] = (long)(int)piVar6;
    unaff_x25[2] = 0;
    FUN_1004d990c();
    unaff_x25[3] = piVar6;
    piVar6 = piVar11;
    FUN_10047fdf4(piVar11,"grpc.internal.service_config_obj");
    if (piVar6 == (int *)0x0) {
      return;
    }
    if (*piVar6 != 2) {
      return;
    }
    plVar10 = *(long **)(piVar6 + 4);
    if (plVar10 == (long *)0x0) {
      return;
    }
    FUN_1004d990c();
    (**(code **)(*plVar10 + 0x18))(plVar10,piVar6);
    if (plVar10 == (long *)0x0) {
      return;
    }
    FUN_100481218(piVar11,"grpc.server_uri");
    if (piVar11 == (int *)0x0) {
      uStack_e8 = 0;
      uStack_e0 = 0;
      ppppuStack_f0 = (undefined8 *****)0x0;
      func_0x000104ab5920(&ppppppuStack_58,2,
                          "server URI channel arg missing or wrong type in client channel filter",
                          0x45,&pppppuStack_f8,&ppppuStack_f0);
      if ((undefined8 *******)ppppppuStack_58 != (undefined8 *******)0x0) {
        *param_1 = ppppppuStack_58;
        ppppppuStack_58 = (undefined8 *******)0x36;
      }
      ppppppuStack_118 = (undefined8 ******)&ppppuStack_f0;
      func_0x000100482b64(&ppppppuStack_118);
      return;
    }
    piVar6 = piVar11;
    func_0x000107c613d0(piVar11);
    FUN_10047ae00(&ppppuStack_f0,piVar11,piVar6);
    if ((undefined8 *****)ppppuStack_f0 != (undefined8 *****)0x0) {
LAB_1004d9680:
      uStack_110 = 0;
      uStack_108 = 0;
      ppppppuStack_118 = (undefined8 *******)0x0;
      func_0x000104ab5920(&pppppuStack_f8,2,"could not extract server name from target URI",0x2d,
                          &uStack_f9,&ppppppuStack_118);
      if ((undefined8 ******)pppppuStack_f8 != (undefined8 ******)0x0) {
        *param_1 = (undefined8 ******)pppppuStack_f8;
        pppppuStack_f8 = (undefined8 ******)0x36;
      }
      ppppppuStack_58 = &ppppppuStack_118;
      func_0x000100482b64(&ppppppuStack_58);
      goto LAB_1004d96d0;
    }
    if ((char)bStack_a1 < '\0') {
      if (uStack_b0 != 0) goto LAB_1004d9770;
      goto LAB_1004d9680;
    }
    uStack_b0 = (ulong)bStack_a1;
    if (bStack_a1 == 0) goto LAB_1004d9680;
    ppppppcStack_b8 = (char ******)&ppppppcStack_b8;
LAB_1004d9770:
    pppppppcVar1 = (char *******)ppppppcStack_b8;
    if (*(char *)ppppppcStack_b8 == '/') {
      pppppppcVar1 = (char *******)((long)ppppppcStack_b8 + 1);
    }
    uVar12 = uStack_b0 - (*(char *)ppppppcStack_b8 == '/');
    if (0x7ffffffffffffff7 < uVar12) {
      func_0x000104a6fa5c(&ppppppuStack_118);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1004d9864);
      (*pcVar5)();
    }
    if (uVar12 < 0x17) {
      uStack_108 = CONCAT17((char)uVar12,(undefined7)uStack_108);
      pppppppuVar7 = &ppppppuStack_118;
      if (uVar12 != 0) goto LAB_1004d97dc;
    }
    else {
      uVar2 = (uVar12 & 0xfffffffffffffff8) + 8;
      if ((uVar12 | 7) != 0x17) {
        uVar2 = uVar12 | 7;
      }
      pppppppuVar7 = (undefined8 *******)(uVar2 + 1);
      func_0x000107c60e20();
      uStack_108 = uVar2 + 1 | 0x8000000000000000;
      ppppppuStack_118 = pppppppuVar7;
      uStack_110 = uVar12;
LAB_1004d97dc:
      func_0x000107c610b8(pppppppuVar7,pppppppcVar1,uVar12);
    }
    *(undefined1 *)((long)pppppppuVar7 + uVar12) = 0;
    func_0x000104a8d040();
    func_0x000104a8d0f0(&ppppppuStack_58);
    param_2 = (long *)unaff_x25[2];
    param_1 = (undefined8 *******)ppppppuStack_58;
    if (param_2 != (long *)0x0) {
      plVar10 = param_2 + 1;
      do {
        lVar9 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 + -1 != 0) goto LAB_1004d9828;
      goto LAB_1004d9848;
    }
  }
LAB_1004d9828:
  unaff_x25[2] = param_1;
  if ((long)uStack_108 < 0) {
    func_0x000107c60e14(ppppppuStack_118);
  }
LAB_1004d96d0:
  FUN_10047cac8(&ppppuStack_f0);
  return;
}



/* Entry: 1004d990c; end: 1004d993f;  */

ulong FUN_1004d990c(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  
  lVar3 = lRam0000000113815be8;
  if (lRam0000000113815be8 == 0) {
    FUN_100472138();
  }
  lVar5 = *(long *)(lVar3 + 0xd8);
  if (*(long *)(lVar3 + 0xe0) != lVar5) {
    uVar6 = 0;
    pcVar4 = "retry";
    do {
      plVar2 = *(long **)(lVar5 + uVar6 * 8);
      (**(code **)(*plVar2 + 0x10))();
      iVar1 = (int)plVar2;
      if ((pcVar4 == (char *)0x5) && (pcVar4 = "retry", func_0x000107c610b0(), iVar1 == 0)) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = *(long *)(lVar3 + 0xd8);
    } while (uVar6 < (ulong)(*(long *)(lVar3 + 0xe0) - lVar5 >> 3));
  }
  return 0xffffffffffffffff;
}



/* Entry: 1004d9940; end: 1004d996f;  */

void FUN_1004d9940(void)

{
  return;
}



/* Entry: 1004d9970; end: 1004d9a27;  */

void FUN_1004d9970(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1 + 4;
  param_1[5] = 0;
  param_1[6] = 0;
  plVar4 = *(long **)(param_2 + 0x10);
  (**(code **)(*plVar4 + 0x20))(plVar4,*param_3);
  param_1[1] = plVar4;
  if (*(long *)(param_2 + 0x10) == 0) {
    uVar6 = 0;
  }
  else {
    plVar4 = (long *)(*(long *)(param_2 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar6 = *(undefined8 *)(param_2 + 0x10);
  }
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 8))();
    }
  }
  param_1[2] = uVar6;
  return;
}



/* Entry: 1004d9a28; end: 1004d9c6f;  */

void FUN_1004d9a28(ulong *param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [8];
  long *plStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 auStack_48 [8];
  
  pcVar13 = *(char **)(param_3 + 8);
  plVar6 = *(long **)(pcVar13 + 0xd0);
  if (plVar6 == (long *)0x0) goto LAB_1004d9c18;
  lStack_90 = param_2 + 0x48;
  uStack_80 = *(undefined8 *)(param_2 + 0x78);
  uStack_88 = param_4;
  (**(code **)(*plVar6 + 0x30))(&uStack_78,plVar6,&lStack_90);
  uVar5 = uStack_78;
  if (uStack_78 == 0) {
    uVar7 = *(ulong *)(param_2 + 0x78);
    FUN_1004d9d98(uVar7,&plStack_68,auStack_70,auStack_60,auStack_48,param_2 + 0x90);
    if ((*(long **)(uVar7 + 8) != (long *)0x0) &&
       (lVar11 = *(long *)(**(long **)(uVar7 + 8) + *(long *)(pcVar13 + 0x68) * 8), lVar11 != 0)) {
      if ((*pcVar13 != '\0') &&
         (((*(long *)(lVar11 + 8) != 0 &&
           (func_0x000104ab7bd4(*(undefined8 *)(param_2 + 0x68)), uVar7 != 0x7fffffffffffffff)) &&
          (lVar10 = *(long *)(lVar11 + 8), lVar10 != 0x7fffffffffffffff)))) {
        lVar8 = -0x8000000000000000;
        if ((uVar7 != 0x8000000000000000) && (lVar10 != -0x8000000000000000)) {
          if ((long)uVar7 < 1) {
            if (lVar10 < (long)(-0x8000000000000000 - uVar7)) goto LAB_1004d9b48;
          }
          else if ((long)(uVar7 ^ 0x7fffffffffffffff) < lVar10) goto LAB_1004d9b60;
          lVar8 = lVar10 + uVar7;
        }
LAB_1004d9b48:
        if (lVar8 < *(long *)(param_2 + 0x70)) {
          *(long *)(param_2 + 0x70) = lVar8;
          func_0x000104a919bc(param_3);
        }
      }
LAB_1004d9b60:
      if (0xff < *(ushort *)(lVar11 + 0x10)) {
        lVar10 = *(long *)(*(long *)(param_2 + 0x118) + 8);
        uVar2 = *(uint *)(lVar10 + 8);
        if ((uVar2 >> 7 & 1) == 0) {
          *(uint *)(lVar10 + 8) =
               uVar2 & 0xffffffc0 |
               uVar2 & 0x1f | (uint)((*(ushort *)(lVar11 + 0x10) & 0xff) != 0) << 5;
        }
      }
    }
    if (*(long *)(pcVar13 + 0xd8) == 0) {
      uVar12 = 0;
    }
    else {
      plVar6 = (long *)(*(long *)(pcVar13 + 0xd8) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar12 = *(undefined8 *)(pcVar13 + 0xd8);
    }
    plVar6 = *(long **)(param_2 + 0x108);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar11 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    *(undefined8 *)(param_2 + 0x108) = uVar12;
  }
  else {
    *param_1 = uStack_78;
    if ((uStack_78 & 1) != 0) {
      piVar9 = (int *)(uStack_78 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = *piVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  FUN_1004d9fa0(auStack_60,uStack_58);
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar11 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 + -1 == 0) {
      (**(code **)(*plStack_68 + 8))();
    }
  }
  if ((uStack_78 & 1) != 0) {
    FUN_10084dad0();
  }
  if (uVar5 != 0) {
    return;
  }
LAB_1004d9c18:
  *param_1 = 0;
  return;
}



/* Entry: 1004d9c70; end: 1004d9d97;  */

ulong * FUN_1004d9c70(ulong *param_1,ulong *param_2,undefined8 *param_3,long *param_4,
                     undefined8 *param_5,undefined8 *param_6)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong *puVar12;
  long *plStack_f0;
  long lStack_e8;
  long lStack_e0;
  long *plStack_d8;
  ulong *puStack_88;
  ulong auStack_80 [4];
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[0x15] == 0) {
    puVar12 = (ulong *)param_1[0x17];
  }
  else {
    puVar5 = param_1 + 0x12;
    puVar4 = puVar5;
    puVar6 = param_2;
    func_0x000104ad6c4c();
    if (puVar4 == (ulong *)0x0) {
      uStack_58 = param_2[1];
      uStack_60 = *param_2;
      uStack_48 = param_2[3];
      uStack_50 = param_2[2];
      puVar4 = &uStack_60;
      FUN_100619698();
      param_2 = (ulong *)0x2f;
      puVar12 = puVar4;
      puStack_88 = puVar4;
      func_0x000107c613e0();
      if (puVar12 == (ulong *)0x0) {
        puVar12 = (ulong *)0x0;
        puVar5 = (ulong *)0x0;
      }
      else {
        *(undefined1 *)((long)puVar12 + 1) = 0;
        FUN_10047e7b4(auStack_80,puVar4);
        param_2 = auStack_80;
        func_0x000104ad6c4c();
        puVar12 = param_1 + 0x17;
        if (puVar5 != (ulong *)0x0) {
          puVar12 = puVar5 + 6;
        }
        puVar12 = (ulong *)*puVar12;
      }
      puStack_88 = (ulong *)0x0;
      param_1 = puVar5;
      if (puVar4 != (ulong *)0x0) {
        FUN_100460314();
        param_1 = puVar4;
      }
    }
    else {
      puVar12 = (ulong *)puVar4[6];
      param_1 = puVar4;
      param_2 = puVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    func_0x000107c60e78();
    if ((int)param_2 != 0) {
      func_0x000104bd46a0();
      param_2 = (ulong *)0x0;
      FUN_100474c88(&puStack_88);
    }
    func_0x000107c60bd8();
    do {
      uVar8 = *param_1;
      uVar1 = uVar8 + 0x40;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = uVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (param_1[2] < uVar1) {
      FUN_1004bbee0();
    }
    else {
      param_1 = (ulong *)((long)param_1 + uVar8 + 0x30);
    }
    plStack_d8 = (long *)*param_2;
    *param_2 = 0;
    uVar7 = *param_3;
    plVar11 = (long *)*param_4;
    plStack_f0 = &lStack_e8;
    plVar9 = param_4 + 1;
    lStack_e8 = *plVar9;
    lStack_e0 = param_4[2];
    if (lStack_e0 != 0) {
      *(long **)(lStack_e8 + 0x10) = plStack_f0;
      *param_4 = (long)plVar9;
      *plVar9 = 0;
      param_4[2] = 0;
      plStack_f0 = plVar11;
    }
    FUN_1004d9ed4(param_1,&plStack_d8,uVar7,&plStack_f0,*param_5,*param_6);
    FUN_1004d9fa0(&plStack_f0,lStack_e8);
    if (plStack_d8 != (long *)0x0) {
      plVar9 = plStack_d8 + 1;
      do {
        lVar10 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plStack_d8 + 8))();
      }
    }
    return param_1;
  }
  return puVar12;
}



/* Entry: 1004d9d98; end: 1004d9ed3;  */

ulong * FUN_1004d9d98(ulong *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,
                     undefined8 *param_5,undefined8 *param_6)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  do {
    uVar5 = *param_1;
    uVar1 = uVar5 + 0x40;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_1[2] < uVar1) {
    FUN_1004bbee0(param_1,0x40);
  }
  else {
    param_1 = (ulong *)((long)param_1 + uVar5 + 0x30);
  }
  plStack_48 = (long *)*param_2;
  *param_2 = 0;
  uVar4 = *param_3;
  plVar8 = (long *)*param_4;
  plStack_60 = &lStack_58;
  plVar6 = param_4 + 1;
  lStack_58 = *plVar6;
  lStack_50 = param_4[2];
  if (lStack_50 != 0) {
    *(long **)(lStack_58 + 0x10) = plStack_60;
    *param_4 = (long)plVar6;
    *plVar6 = 0;
    param_4[2] = 0;
    plStack_60 = plVar8;
  }
  FUN_1004d9ed4(param_1,&plStack_48,uVar4,&plStack_60,*param_5,*param_6);
  FUN_1004d9fa0(&plStack_60,lStack_58);
  if (plStack_48 != (long *)0x0) {
    plVar6 = plStack_48 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plStack_48 + 8))();
    }
  }
  return param_1;
}



/* Entry: 1004d9ed4; end: 1004d9f9f;  */

undefined8 *
FUN_1004d9ed4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plStack_48;
  long alStack_40 [2];
  
  uVar1 = *param_2;
  *param_2 = 0;
  uVar2 = *param_4;
  plVar4 = param_4 + 1;
  alStack_40[0] = *plVar4;
  lVar3 = param_4[2];
  plStack_48 = alStack_40;
  if (lVar3 == 0) {
    *param_1 = uVar1;
    param_1[1] = param_3;
    param_1[3] = alStack_40[0];
    param_1[4] = 0;
    param_1[2] = param_1 + 3;
  }
  else {
    *param_4 = plVar4;
    *plVar4 = 0;
    param_4[2] = 0;
    *param_1 = uVar1;
    param_1[1] = param_3;
    param_1[2] = uVar2;
    param_1[3] = alStack_40[0];
    param_1[4] = lVar3;
    *(undefined8 **)(alStack_40[0] + 0x10) = param_1 + 3;
    alStack_40[0] = 0;
  }
  alStack_40[1] = 0;
  FUN_1004d9fa0(&plStack_48,alStack_40[0]);
  param_1[5] = &PTR_DAT_1107c1c88;
  param_1[6] = param_5;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined8 **)(param_6 + 0x40) = param_1;
  *(undefined **)(param_6 + 0x48) = &UNK_104a80c2c;
  return param_1;
}



/* Entry: 1004d9fa0; end: 1004d9fdf;  */

void FUN_1004d9fa0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1004d9fa0(param_1,*param_2);
    FUN_1004d9fa0(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 1004d9fe0; end: 1004da03f;  */

void FUN_1004d9fe0(long *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong extraout_x8;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = (ulong)uVar1;
  if (uVar1 == 2) {
    if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104abe9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lRam0000000113815c18 + 0x28))(param_2,*param_1);
      return;
    }
    func_0x000107c2c37c();
    uVar2 = extraout_x8;
  }
  else if (uVar1 == 1) {
    if (*param_1 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001004da0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lRam0000000113815c18 + 0x18))(param_2,*param_1);
    return;
  }
  func_0x000107c2c378();
  FUN_1004d9fe0(param_3,*(undefined8 *)(uVar2 + 0x60));
  plVar5 = (long *)(uVar2 + 0xb0);
  lVar3 = *plVar5;
  if (lVar3 != 0) {
    if (lVar3 != param_2) {
      do {
        lVar4 = lVar3;
        lVar3 = *(long *)(lVar4 + 8);
        if (lVar3 == 0) {
          return;
        }
      } while (lVar3 != param_2);
      plVar5 = (long *)(lVar4 + 8);
    }
    *plVar5 = *(long *)(param_2 + 8);
  }
  return;
}



/* Entry: 1004da040; end: 1004da09b;  */

void FUN_1004da040(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  FUN_1004d9fe0(param_3,*(undefined8 *)(param_1 + 0x60));
  plVar3 = (long *)(param_1 + 0xb0);
  lVar1 = *plVar3;
  if (lVar1 != 0) {
    if (lVar1 != param_2) {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 8);
        if (lVar1 == 0) {
          return;
        }
      } while (lVar1 != param_2);
      plVar3 = (long *)(lVar2 + 8);
    }
    *plVar3 = *(long *)(param_2 + 8);
  }
  return;
}



/* Entry: 1004da09c; end: 1004da0af;  */

void FUN_1004da09c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001004da0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam0000000113815c18 + 0x18))();
  return;
}


